#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
volatile int32_t t0 = 0;
int64_t x15 = INT64_MAX;
uint16_t x21 = 15603U;
int32_t t2 = 15166382;
int64_t x46 = -1LL;
int64_t x61 = INT64_MIN;
int64_t x63 = INT64_MIN;
static uint32_t t6 = 111887U;
volatile uint64_t x88 = UINT64_MAX;
int64_t x94 = -1LL;
int32_t x108 = INT32_MAX;
int64_t t10 = -271747890411335984LL;
uint32_t x129 = 222113U;
uint64_t x152 = 6346637LLU;
uint16_t x159 = 2498U;
int32_t t14 = -1;
int8_t x172 = INT8_MIN;
static volatile int16_t x176 = 2719;
volatile int64_t t17 = 7LL;
uint8_t x199 = 1U;
int16_t x202 = 2;
int8_t x203 = INT8_MIN;
uint64_t x204 = 1192271465LLU;
volatile uint64_t t19 = 3391449LLU;
uint64_t x206 = UINT64_MAX;
uint32_t t20 = 3188589U;
volatile int32_t x212 = -1;
uint8_t x244 = 19U;
uint64_t x250 = UINT64_MAX;
int64_t x251 = 15349565059370383LL;
int64_t x277 = INT64_MAX;
int64_t x278 = INT64_MIN;
int64_t x286 = -120823975449687389LL;
int64_t t30 = -304754450925LL;
int8_t x314 = INT8_MIN;
uint64_t x329 = UINT64_MAX;
int8_t x330 = INT8_MIN;
volatile int64_t x331 = INT64_MIN;
uint32_t x357 = 18632603U;
static int64_t x368 = -1LL;
static volatile int64_t t41 = -3156624343LL;
static int64_t x369 = INT64_MIN;
int16_t x388 = -1;
int32_t x398 = 1490091;
volatile int32_t x399 = INT32_MAX;
int8_t x409 = -3;
static int16_t x434 = -5;
volatile int32_t x442 = 74;
static uint16_t x443 = 570U;
static uint64_t x469 = 76564870LLU;
uint16_t x475 = 232U;
int16_t x476 = 7;
volatile int32_t t54 = 1850;
uint16_t x489 = UINT16_MAX;
int16_t x497 = INT16_MAX;
int32_t t57 = -7370285;
uint64_t x507 = UINT64_MAX;
static int16_t x523 = -49;
int32_t t60 = 2608;
volatile int64_t t61 = -69407341537702LL;
int8_t x534 = INT8_MAX;
int64_t t62 = -20LL;
uint16_t x544 = 12U;
int32_t t65 = -14571;
static int8_t x558 = INT8_MAX;
int64_t t66 = -19662300354LL;
int8_t x564 = INT8_MIN;
int16_t x566 = INT16_MAX;
volatile int32_t t69 = -70;
volatile int64_t t71 = 300109904LL;
volatile int32_t t72 = -11;
volatile int32_t x613 = -1;
static int32_t x617 = INT32_MIN;
uint64_t x619 = 2073102588184LLU;
int8_t x627 = INT8_MIN;
uint64_t x628 = 22445174232852LLU;
volatile uint32_t x633 = 1686324183U;
int16_t x634 = 207;
volatile int64_t t78 = -2114304527184830336LL;
int32_t x661 = 497;
int32_t x662 = INT32_MIN;
static volatile int64_t t82 = -42LL;
int16_t x696 = INT16_MIN;
int64_t t85 = -2LL;
int64_t x732 = 52478452717888LL;
uint32_t x740 = 37376393U;
uint32_t t88 = 3666U;
volatile uint32_t x742 = 2864426U;
int32_t x744 = INT32_MIN;
static int32_t x757 = INT32_MIN;
uint16_t x760 = 21U;
int32_t x761 = INT32_MAX;
volatile uint64_t t92 = 58386780846226LLU;
uint16_t x775 = 21020U;
int16_t x810 = INT16_MAX;
volatile int16_t x811 = INT16_MIN;
static volatile int32_t t94 = 1107;
int64_t x819 = INT64_MIN;
int32_t x827 = -76401645;
int32_t t97 = -7837299;
uint64_t x835 = UINT64_MAX;
int16_t x837 = INT16_MAX;


void f0(void) {
	uint16_t x2 = 1U;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = -1;

	t0 = ((x1<x2)%(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x13 = 179U;
	static uint16_t x14 = UINT16_MAX;
	static int8_t x16 = INT8_MIN;
	int64_t t1 = 210819977084606LL;

	t1 = ((x13<x14)%(x15/x16));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;

	t2 = ((x21<x22)%(x23/x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = INT32_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	volatile uint64_t x48 = 38LLU;
	uint64_t t3 = 1856838722191241LLU;

	t3 = ((x45<x46)%(x47/x48));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x53 = INT16_MIN;
	static int32_t x54 = INT32_MIN;
	int64_t x55 = 25395790614355LL;
	volatile int32_t x56 = -1611420;
	int64_t t4 = -15835LL;

	t4 = ((x53<x54)%(x55/x56));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x62 = -1;
	static volatile int16_t x64 = INT16_MIN;
	int64_t t5 = -76762439404921906LL;

	t5 = ((x61<x62)%(x63/x64));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x77 = INT16_MIN;
	volatile int8_t x78 = INT8_MAX;
	static volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = 1;

	t6 = ((x77<x78)%(x79/x80));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x85 = INT32_MIN;
	volatile int16_t x86 = 5235;
	int32_t x87 = -1;
	volatile uint64_t t7 = 1LLU;

	t7 = ((x85<x86)%(x87/x88));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	int8_t x96 = -7;
	int32_t t8 = 961;

	t8 = ((x93<x94)%(x95/x96));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x106 = 68U;
	int32_t x107 = INT32_MIN;
	int32_t t9 = -605350943;

	t9 = ((x105<x106)%(x107/x108));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x121 = -115166722;
	uint32_t x122 = UINT32_MAX;
	static int64_t x123 = -166229128336725946LL;
	int16_t x124 = INT16_MIN;

	t10 = ((x121<x122)%(x123/x124));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 214339918577600LLU;
	volatile int8_t x132 = 11;
	volatile uint64_t t11 = 4351741227886LLU;

	t11 = ((x129<x130)%(x131/x132));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x149 = INT8_MAX;
	volatile int8_t x150 = 5;
	static int32_t x151 = INT32_MAX;
	static uint64_t t12 = 27233LLU;

	t12 = ((x149<x150)%(x151/x152));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x157 = 528661530498825LL;
	int32_t x158 = -1;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t13 = -28111;

	t13 = ((x157<x158)%(x159/x160));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x165 = 15U;
	volatile int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	static volatile int8_t x168 = INT8_MAX;

	t14 = ((x165<x166)%(x167/x168));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x169 = -14;
	int8_t x170 = -34;
	int32_t x171 = -294829;
	int32_t t15 = 51;

	t15 = ((x169<x170)%(x171/x172));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x173 = 8U;
	static uint64_t x174 = 3362712838501239284LLU;
	int16_t x175 = INT16_MAX;
	static int32_t t16 = 870;

	t16 = ((x173<x174)%(x175/x176));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x181 = -24;
	int8_t x182 = -1;
	int64_t x183 = -15299LL;
	uint8_t x184 = 8U;

	t17 = ((x181<x182)%(x183/x184));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x197 = 18;
	static int32_t x198 = -1;
	static int64_t x200 = -1LL;
	volatile int64_t t18 = 4107LL;

	t18 = ((x197<x198)%(x199/x200));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x201 = INT16_MIN;

	t19 = ((x201<x202)%(x203/x204));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x205 = 5;
	int16_t x207 = INT16_MIN;
	static uint32_t x208 = 401U;

	t20 = ((x205<x206)%(x207/x208));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = -1;
	int16_t x211 = INT16_MAX;
	volatile int32_t t21 = 214;

	t21 = ((x209<x210)%(x211/x212));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x222 = 7U;
	uint16_t x223 = 24U;
	static uint8_t x224 = 5U;
	static volatile int32_t t22 = -37;

	t22 = ((x221<x222)%(x223/x224));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x233 = 90;
	int32_t x234 = 16397;
	static volatile int64_t x235 = INT64_MIN;
	uint64_t x236 = 1LLU;
	uint64_t t23 = 21901078LLU;

	t23 = ((x233<x234)%(x235/x236));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x241 = -15;
	int64_t x242 = INT64_MIN;
	int32_t x243 = 8552206;
	volatile int32_t t24 = -4;

	t24 = ((x241<x242)%(x243/x244));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x249 = -1LL;
	uint8_t x252 = 64U;
	volatile int64_t t25 = 349899LL;

	t25 = ((x249<x250)%(x251/x252));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x257 = 0U;
	volatile int64_t x258 = INT64_MIN;
	static volatile int64_t x259 = -1LL;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t26 = 159526019LLU;

	t26 = ((x257<x258)%(x259/x260));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x269 = 22LL;
	volatile int64_t x270 = 3761388252049LL;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;
	int64_t t27 = 62LL;

	t27 = ((x269<x270)%(x271/x272));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x279 = -1;
	volatile uint64_t x280 = 424135734970LLU;
	volatile uint64_t t28 = 6515380832841539LLU;

	t28 = ((x277<x278)%(x279/x280));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x281 = INT16_MAX;
	int8_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MAX;
	volatile int64_t t29 = 110854696LL;

	t29 = ((x281<x282)%(x283/x284));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x285 = 3321LLU;
	volatile int64_t x287 = INT64_MIN;
	uint32_t x288 = 19911U;

	t30 = ((x285<x286)%(x287/x288));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 5207314849184033LLU;
	uint64_t x295 = UINT64_MAX;
	uint32_t x296 = 14U;
	uint64_t t31 = 211740268717896417LLU;

	t31 = ((x293<x294)%(x295/x296));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x305 = 5;
	int8_t x306 = 30;
	volatile uint8_t x307 = 3U;
	int16_t x308 = -1;
	int32_t t32 = 8;

	t32 = ((x305<x306)%(x307/x308));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x313 = UINT16_MAX;
	static int32_t x315 = INT32_MIN;
	uint16_t x316 = 3853U;
	int32_t t33 = -29941116;

	t33 = ((x313<x314)%(x315/x316));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x317 = 3964951011661722243LLU;
	int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 26425U;
	int32_t t34 = 190263571;

	t34 = ((x317<x318)%(x319/x320));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x321 = -15;
	int32_t x322 = -1;
	int32_t x323 = 25310202;
	uint8_t x324 = 22U;
	volatile int32_t t35 = -1;

	t35 = ((x321<x322)%(x323/x324));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x332 = 981045LLU;
	volatile uint64_t t36 = 55438749486LLU;

	t36 = ((x329<x330)%(x331/x332));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x337 = 564U;
	int16_t x338 = 8838;
	static int64_t x339 = 2232619032625321LL;
	int8_t x340 = INT8_MIN;
	volatile int64_t t37 = -6LL;

	t37 = ((x337<x338)%(x339/x340));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 6194723830LLU;
	uint32_t x348 = 8741U;
	static uint64_t t38 = 28643801LLU;

	t38 = ((x345<x346)%(x347/x348));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x358 = 1498658688U;
	int8_t x359 = INT8_MAX;
	static int8_t x360 = INT8_MAX;
	int32_t t39 = -1633781;

	t39 = ((x357<x358)%(x359/x360));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x361 = 1;
	static int8_t x362 = -1;
	static uint16_t x363 = 7188U;
	int8_t x364 = -1;
	static int32_t t40 = 3161593;

	t40 = ((x361<x362)%(x363/x364));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x365 = INT16_MIN;
	static int16_t x366 = INT16_MIN;
	int64_t x367 = 504057LL;

	t41 = ((x365<x366)%(x367/x368));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x370 = 1U;
	volatile int32_t x371 = INT32_MIN;
	int16_t x372 = 3;
	static volatile int32_t t42 = -2;

	t42 = ((x369<x370)%(x371/x372));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x373 = INT64_MAX;
	static int32_t x374 = -1;
	int64_t x375 = -1438622629LL;
	static int32_t x376 = -1;
	int64_t t43 = 3762LL;

	t43 = ((x373<x374)%(x375/x376));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x385 = 55U;
	uint32_t x386 = 240U;
	volatile int32_t x387 = INT32_MAX;
	int32_t t44 = -686161;

	t44 = ((x385<x386)%(x387/x388));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x397 = UINT8_MAX;
	int8_t x400 = -1;
	int32_t t45 = -42167;

	t45 = ((x397<x398)%(x399/x400));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x405 = 0;
	int64_t x406 = 514241645217LL;
	int8_t x407 = -12;
	int16_t x408 = 1;
	static volatile int32_t t46 = -4002403;

	t46 = ((x405<x406)%(x407/x408));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x410 = INT8_MIN;
	volatile int64_t x411 = INT64_MIN;
	static volatile int16_t x412 = INT16_MAX;
	int64_t t47 = 5407415LL;

	t47 = ((x409<x410)%(x411/x412));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x413 = -1;
	volatile uint32_t x414 = 5U;
	int32_t x415 = -28251;
	volatile uint8_t x416 = 54U;
	volatile int32_t t48 = -419106;

	t48 = ((x413<x414)%(x415/x416));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x421 = INT8_MIN;
	int64_t x422 = 33LL;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int64_t t49 = -192LL;

	t49 = ((x421<x422)%(x423/x424));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x433 = 20276U;
	int32_t x435 = INT32_MAX;
	int64_t x436 = -1LL;
	volatile int64_t t50 = 686904183868495LL;

	t50 = ((x433<x434)%(x435/x436));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x441 = 364;
	int8_t x444 = INT8_MIN;
	static int32_t t51 = -80340726;

	t51 = ((x441<x442)%(x443/x444));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x453 = 3U;
	int8_t x454 = 12;
	int8_t x455 = INT8_MIN;
	static uint8_t x456 = 6U;
	int32_t t52 = -282501585;

	t52 = ((x453<x454)%(x455/x456));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x470 = 24768232997431654LLU;
	int32_t x471 = INT32_MIN;
	uint64_t x472 = 1072466200470LLU;
	volatile uint64_t t53 = 411635495904829LLU;

	t53 = ((x469<x470)%(x471/x472));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x473 = 8325606;
	int8_t x474 = -2;

	t54 = ((x473<x474)%(x475/x476));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x485 = INT32_MAX;
	int16_t x486 = INT16_MIN;
	static volatile int8_t x487 = INT8_MAX;
	int16_t x488 = -1;
	int32_t t55 = -245477;

	t55 = ((x485<x486)%(x487/x488));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x490 = UINT16_MAX;
	int64_t x491 = -45LL;
	uint8_t x492 = 6U;
	volatile int64_t t56 = 512159535081999748LL;

	t56 = ((x489<x490)%(x491/x492));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x498 = -9398;
	int16_t x499 = -126;
	static uint16_t x500 = 12U;

	t57 = ((x497<x498)%(x499/x500));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x505 = INT64_MIN;
	volatile int32_t x506 = -1;
	static uint16_t x508 = 26U;
	volatile uint64_t t58 = 3312387LLU;

	t58 = ((x505<x506)%(x507/x508));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x513 = -1;
	int16_t x514 = 4406;
	int8_t x515 = INT8_MAX;
	static uint16_t x516 = 27U;
	int32_t t59 = -438;

	t59 = ((x513<x514)%(x515/x516));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x521 = 30378U;
	volatile uint8_t x522 = UINT8_MAX;
	int32_t x524 = -1;

	t60 = ((x521<x522)%(x523/x524));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x525 = -1178418;
	int32_t x526 = -881979965;
	volatile int64_t x527 = -3890557153LL;
	static int64_t x528 = -1LL;

	t61 = ((x525<x526)%(x527/x528));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x533 = -15;
	volatile int64_t x535 = INT64_MAX;
	volatile int16_t x536 = -1932;

	t62 = ((x533<x534)%(x535/x536));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x537 = 740568174U;
	int32_t x538 = 5330;
	int32_t x539 = -480825913;
	uint8_t x540 = UINT8_MAX;
	static int32_t t63 = 6946353;

	t63 = ((x537<x538)%(x539/x540));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x541 = UINT8_MAX;
	volatile int32_t x542 = 1563790;
	int32_t x543 = 1501103;
	int32_t t64 = -59;

	t64 = ((x541<x542)%(x543/x544));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x545 = INT16_MIN;
	uint32_t x546 = UINT32_MAX;
	uint16_t x547 = UINT16_MAX;
	int16_t x548 = INT16_MAX;

	t65 = ((x545<x546)%(x547/x548));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int64_t x559 = INT64_MIN;
	uint16_t x560 = UINT16_MAX;

	t66 = ((x557<x558)%(x559/x560));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x561 = 278300U;
	uint32_t x562 = 31088U;
	int16_t x563 = INT16_MAX;
	volatile int32_t t67 = 1629652;

	t67 = ((x561<x562)%(x563/x564));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x565 = 0;
	volatile uint64_t x567 = 523862689969LLU;
	uint16_t x568 = 16796U;
	static uint64_t t68 = 3770LLU;

	t68 = ((x565<x566)%(x567/x568));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x573 = INT64_MAX;
	static uint16_t x574 = 2822U;
	uint16_t x575 = 2U;
	static int16_t x576 = -1;

	t69 = ((x573<x574)%(x575/x576));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x581 = INT32_MIN;
	uint16_t x582 = 4U;
	static uint64_t x583 = UINT64_MAX;
	static int64_t x584 = -1863LL;
	volatile uint64_t t70 = 2617006913768467303LLU;

	t70 = ((x581<x582)%(x583/x584));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x589 = INT16_MIN;
	static volatile int32_t x590 = -62522715;
	int64_t x591 = INT64_MAX;
	uint16_t x592 = 3918U;

	t71 = ((x589<x590)%(x591/x592));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x597 = 404237113LLU;
	int8_t x598 = INT8_MIN;
	int16_t x599 = INT16_MIN;
	int8_t x600 = INT8_MIN;

	t72 = ((x597<x598)%(x599/x600));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x614 = INT32_MIN;
	int64_t x615 = INT64_MAX;
	int8_t x616 = 8;
	volatile int64_t t73 = 711131668639374LL;

	t73 = ((x613<x614)%(x615/x616));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x618 = UINT64_MAX;
	int16_t x620 = INT16_MAX;
	volatile uint64_t t74 = 1016389043239506LLU;

	t74 = ((x617<x618)%(x619/x620));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x621 = 6453U;
	volatile uint32_t x622 = UINT32_MAX;
	static uint16_t x623 = UINT16_MAX;
	uint16_t x624 = 1U;
	int32_t t75 = 282285388;

	t75 = ((x621<x622)%(x623/x624));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x625 = UINT8_MAX;
	static int8_t x626 = INT8_MIN;
	volatile uint64_t t76 = 7551229LLU;

	t76 = ((x625<x626)%(x627/x628));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x635 = INT16_MAX;
	volatile int16_t x636 = -1;
	volatile int32_t t77 = 41146822;

	t77 = ((x633<x634)%(x635/x636));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x653 = -129826152LL;
	uint16_t x654 = 3791U;
	static int64_t x655 = 551647402496674LL;
	uint32_t x656 = UINT32_MAX;

	t78 = ((x653<x654)%(x655/x656));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x657 = 2U;
	int64_t x658 = -1LL;
	static volatile int64_t x659 = 65050725746676LL;
	int32_t x660 = 113767437;
	static volatile int64_t t79 = 4222552851899LL;

	t79 = ((x657<x658)%(x659/x660));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x663 = 60387;
	int8_t x664 = 5;
	int32_t t80 = 1597;

	t80 = ((x661<x662)%(x663/x664));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x665 = 0U;
	int32_t x666 = INT32_MIN;
	int8_t x667 = INT8_MAX;
	static uint16_t x668 = 11U;
	volatile int32_t t81 = -19034473;

	t81 = ((x665<x666)%(x667/x668));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x669 = -1068040LL;
	static int64_t x670 = INT64_MAX;
	int64_t x671 = -1LL;
	static int8_t x672 = -1;

	t82 = ((x669<x670)%(x671/x672));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x689 = INT8_MAX;
	volatile int16_t x690 = INT16_MAX;
	static int16_t x691 = INT16_MIN;
	uint16_t x692 = 156U;
	static volatile int32_t t83 = 17735;

	t83 = ((x689<x690)%(x691/x692));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x693 = 28;
	int64_t x694 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	uint64_t t84 = 50LLU;

	t84 = ((x693<x694)%(x695/x696));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x705 = -1;
	int8_t x706 = INT8_MAX;
	int64_t x707 = 1956785LL;
	static uint16_t x708 = 2106U;

	t85 = ((x705<x706)%(x707/x708));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x725 = INT8_MAX;
	int32_t x726 = -1;
	static uint64_t x727 = UINT64_MAX;
	volatile int8_t x728 = INT8_MIN;
	volatile uint64_t t86 = 26961786564237011LLU;

	t86 = ((x725<x726)%(x727/x728));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x729 = 1;
	int16_t x730 = 3;
	int64_t x731 = INT64_MIN;
	int64_t t87 = 113392281709LL;

	t87 = ((x729<x730)%(x731/x732));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x737 = INT32_MIN;
	uint8_t x738 = UINT8_MAX;
	static int8_t x739 = -1;

	t88 = ((x737<x738)%(x739/x740));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x741 = 30U;
	int32_t x743 = INT32_MIN;
	volatile int32_t t89 = 6384787;

	t89 = ((x741<x742)%(x743/x744));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x745 = -1;
	int32_t x746 = 45028;
	int16_t x747 = -1;
	volatile uint32_t x748 = UINT32_MAX;
	uint32_t t90 = 2U;

	t90 = ((x745<x746)%(x747/x748));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x758 = 1830U;
	int64_t x759 = INT64_MAX;
	int64_t t91 = 1926443728LL;

	t91 = ((x757<x758)%(x759/x760));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x762 = 10U;
	uint64_t x763 = 78185798349263237LLU;
	uint16_t x764 = 18U;

	t92 = ((x761<x762)%(x763/x764));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x773 = 186U;
	int32_t x774 = 1296;
	int8_t x776 = -1;
	int32_t t93 = 1034455;

	t93 = ((x773<x774)%(x775/x776));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x809 = INT8_MIN;
	int32_t x812 = -613;

	t94 = ((x809<x810)%(x811/x812));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x817 = -3;
	int64_t x818 = -1LL;
	int32_t x820 = 1196;
	static volatile int64_t t95 = 60272463817029LL;

	t95 = ((x817<x818)%(x819/x820));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x821 = UINT8_MAX;
	uint16_t x822 = UINT16_MAX;
	uint8_t x823 = 12U;
	volatile uint8_t x824 = 10U;
	int32_t t96 = -3;

	t96 = ((x821<x822)%(x823/x824));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x825 = 3;
	volatile int16_t x826 = 27;
	static int16_t x828 = INT16_MIN;

	t97 = ((x825<x826)%(x827/x828));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x833 = INT64_MAX;
	static volatile uint16_t x834 = 10U;
	static int64_t x836 = INT64_MAX;
	volatile uint64_t t98 = 1014184624LLU;

	t98 = ((x833<x834)%(x835/x836));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x838 = 0U;
	uint16_t x839 = 26909U;
	int8_t x840 = INT8_MIN;
	volatile int32_t t99 = 722579595;

	t99 = ((x837<x838)%(x839/x840));

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

