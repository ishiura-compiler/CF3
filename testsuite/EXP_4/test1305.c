#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -3709;
volatile uint16_t x4 = 6915U;
int32_t x7 = 168537;
uint8_t x26 = 0U;
volatile int32_t t4 = -39;
int32_t x33 = INT32_MIN;
static int64_t x36 = INT64_MAX;
volatile int64_t x56 = INT64_MIN;
int8_t x72 = INT8_MAX;
int32_t t11 = 266093;
int16_t x93 = INT16_MIN;
int32_t x95 = INT32_MIN;
int16_t x99 = -1;
static volatile int16_t x109 = -3609;
int32_t x134 = -7809;
int64_t x167 = INT64_MIN;
int32_t t22 = 31;
int8_t x180 = INT8_MAX;
int32_t t23 = -1171015;
int32_t t25 = 13;
volatile int64_t x214 = -15643477LL;
volatile int32_t x218 = INT32_MIN;
int64_t x221 = INT64_MAX;
int64_t x223 = INT64_MIN;
int16_t x238 = -1;
volatile uint16_t x240 = 528U;
uint16_t x255 = 1062U;
int16_t x261 = INT16_MAX;
int16_t x264 = 1482;
int16_t x266 = -6500;
int32_t t37 = -54652;
volatile int32_t t38 = 25618;
int64_t x298 = -4444843669168134227LL;
volatile int64_t t44 = 798LL;
static volatile uint8_t x388 = 1U;
static uint64_t x391 = 2042103LLU;
volatile int32_t t48 = 3069;
uint8_t x437 = 60U;
int16_t x480 = INT16_MIN;
static int32_t x499 = -572680146;
int64_t x510 = INT64_MIN;
volatile int8_t x515 = 29;
static int16_t x519 = INT16_MIN;
static int64_t t57 = 441LL;
volatile uint8_t x525 = 7U;
static int64_t x526 = -1LL;
uint8_t x527 = UINT8_MAX;
volatile int32_t t58 = 7703;
int8_t x530 = INT8_MIN;
int32_t t59 = -29495883;
static uint16_t x549 = UINT16_MAX;
static volatile int64_t x552 = -1LL;
volatile int16_t x576 = 1;
volatile int64_t x578 = INT64_MIN;
int64_t x596 = INT64_MAX;
int64_t x619 = -1LL;
uint64_t x624 = 165LLU;
volatile int32_t x663 = INT32_MIN;
static int8_t x664 = 25;
int8_t x686 = INT8_MIN;
volatile int64_t t72 = -3886703071314386591LL;
static int16_t x697 = -888;
static int64_t x698 = -12436446LL;
volatile int64_t t74 = 4441LL;
static int16_t x706 = -1669;
int8_t x727 = INT8_MIN;
static int32_t t77 = 410384;
uint32_t t78 = 52747U;
static uint32_t x737 = 31001346U;
static uint16_t x740 = UINT16_MAX;
int32_t t80 = -46;
volatile uint32_t x753 = 17167103U;
int8_t x754 = INT8_MIN;
int8_t x774 = 0;
int64_t t84 = 7412LL;
static uint8_t x809 = 1U;
volatile int32_t x812 = INT32_MAX;
uint32_t t86 = 103471202U;
uint16_t x823 = UINT16_MAX;
int8_t x826 = -1;
int32_t t88 = -38915;
volatile int32_t t90 = -24;
int16_t x858 = INT16_MIN;
int8_t x877 = 19;
uint64_t x879 = UINT64_MAX;
int32_t x881 = 1011418;
int32_t x883 = INT32_MAX;
volatile int8_t x889 = -1;
volatile int8_t x891 = -1;
int32_t x892 = INT32_MIN;
int16_t x894 = -1;
uint64_t x917 = UINT64_MAX;
static int32_t x921 = -1;
uint16_t x923 = 10U;


void f0(void) {
	volatile int8_t x2 = -1;
	uint8_t x3 = 2U;
	volatile int32_t t0 = 4;

	t0 = (x1%(x2<=(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 0U;
	int64_t x6 = -425657233544000LL;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 1709;

	t1 = (x5%(x6<=(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int8_t x10 = -1;
	int8_t x11 = 59;
	volatile uint32_t x12 = UINT32_MAX;
	int32_t t2 = -105526647;

	t2 = (x9%(x10<=(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 1630;
	int8_t x18 = -1;
	int32_t x19 = -2265764;
	int8_t x20 = -1;
	volatile int32_t t3 = 3356885;

	t3 = (x17%(x18<=(x19==x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 6097925;
	int16_t x27 = 0;
	int64_t x28 = INT64_MIN;

	t4 = (x25%(x26<=(x27==x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = -2;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = -85551727053934LL;
	int32_t x32 = INT32_MIN;
	int32_t t5 = -3980;

	t5 = (x29%(x30<=(x31==x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = -1;
	static int32_t x35 = INT32_MIN;
	int32_t t6 = -14;

	t6 = (x33%(x34<=(x35==x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	volatile int64_t x42 = -1LL;
	static int8_t x43 = INT8_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t7 = 39268356;

	t7 = (x41%(x42<=(x43==x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int32_t x55 = 10855;
	int32_t t8 = 49444898;

	t8 = (x53%(x54<=(x55==x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = INT8_MIN;
	static int8_t x66 = 0;
	static int32_t x67 = 199429011;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t9 = 31;

	t9 = (x65%(x66<=(x67==x68)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x69 = INT32_MIN;
	static int16_t x70 = -1;
	volatile uint32_t x71 = 24674U;
	int32_t t10 = 134;

	t10 = (x69%(x70<=(x71==x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = 1719;
	int32_t x78 = INT32_MIN;
	volatile uint16_t x79 = 14U;
	int64_t x80 = -3LL;

	t11 = (x77%(x78<=(x79==x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x81 = 0;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = 5;
	uint8_t x84 = UINT8_MAX;
	int32_t t12 = -243818;

	t12 = (x81%(x82<=(x83==x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -1LL;
	static int32_t t13 = 1;

	t13 = (x85%(x86<=(x87==x88)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MIN;
	volatile uint8_t x91 = 101U;
	uint16_t x92 = 5U;
	static volatile int64_t t14 = 31LL;

	t14 = (x89%(x90<=(x91==x92)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x94 = INT16_MIN;
	volatile int32_t x96 = INT32_MIN;
	int32_t t15 = -1;

	t15 = (x93%(x94<=(x95==x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -915938660953264LL;
	int16_t x100 = INT16_MIN;
	volatile int32_t t16 = 50774724;

	t16 = (x97%(x98<=(x99==x100)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x110 = INT8_MIN;
	volatile int32_t x111 = -1;
	uint32_t x112 = 3149U;
	volatile int32_t t17 = 172235440;

	t17 = (x109%(x110<=(x111==x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x117 = -46;
	int32_t x118 = -1;
	int64_t x119 = -1LL;
	uint8_t x120 = 73U;
	volatile int32_t t18 = 11;

	t18 = (x117%(x118<=(x119==x120)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x125 = 1975244U;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = 3U;
	uint16_t x128 = 775U;
	uint32_t t19 = 418U;

	t19 = (x125%(x126<=(x127==x128)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x133 = -32;
	static int16_t x135 = 2845;
	int64_t x136 = INT64_MAX;
	volatile int32_t t20 = 198121;

	t20 = (x133%(x134<=(x135==x136)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	int16_t x168 = 1;
	int64_t t21 = -26208176LL;

	t21 = (x165%(x166<=(x167==x168)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	static uint64_t x176 = 1LLU;

	t22 = (x173%(x174<=(x175==x176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x177 = INT32_MIN;
	static volatile uint8_t x178 = 0U;
	static int16_t x179 = INT16_MIN;

	t23 = (x177%(x178<=(x179==x180)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	static int32_t x195 = INT32_MIN;
	static int32_t x196 = INT32_MAX;
	static volatile int32_t t24 = -8111552;

	t24 = (x193%(x194<=(x195==x196)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x197 = 0;
	int8_t x198 = -1;
	volatile int8_t x199 = -1;
	int16_t x200 = -1;

	t25 = (x197%(x198<=(x199==x200)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x213 = 6815;
	static int8_t x215 = -1;
	uint32_t x216 = 7025U;
	volatile int32_t t26 = -149;

	t26 = (x213%(x214<=(x215==x216)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x217 = 0;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	int32_t t27 = -21;

	t27 = (x217%(x218<=(x219==x220)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x222 = -1;
	int32_t x224 = -1;
	volatile int64_t t28 = 967125256LL;

	t28 = (x221%(x222<=(x223==x224)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = 7LLU;
	static int16_t x236 = -1;
	int32_t t29 = -4432134;

	t29 = (x233%(x234<=(x235==x236)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x237 = 26689LLU;
	uint8_t x239 = UINT8_MAX;
	static volatile uint64_t t30 = 98802LLU;

	t30 = (x237%(x238<=(x239==x240)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x241 = 2U;
	static int32_t x242 = INT32_MIN;
	static uint64_t x243 = UINT64_MAX;
	int64_t x244 = -1LL;
	volatile int32_t t31 = 4189560;

	t31 = (x241%(x242<=(x243==x244)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = -34039464579278LL;
	uint8_t x247 = 3U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t32 = -791;

	t32 = (x245%(x246<=(x247==x248)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x253 = -2;
	int8_t x254 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t33 = 232328145;

	t33 = (x253%(x254<=(x255==x256)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = -2371335382LL;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;
	static int32_t t34 = 13834380;

	t34 = (x257%(x258<=(x259==x260)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x262 = INT64_MIN;
	static int8_t x263 = -1;
	volatile int32_t t35 = -6030;

	t35 = (x261%(x262<=(x263==x264)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x265 = INT8_MIN;
	uint8_t x267 = 2U;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t36 = 0;

	t36 = (x265%(x266<=(x267==x268)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x281 = INT32_MIN;
	volatile int32_t x282 = -1;
	uint16_t x283 = 0U;
	int16_t x284 = INT16_MIN;

	t37 = (x281%(x282<=(x283==x284)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x289 = INT32_MIN;
	static int16_t x290 = -63;
	static int64_t x291 = -6413LL;
	uint16_t x292 = 0U;

	t38 = (x289%(x290<=(x291==x292)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x297 = INT64_MAX;
	uint64_t x299 = 5664176462LLU;
	int64_t x300 = -24359784499LL;
	static int64_t t39 = -22289753489073200LL;

	t39 = (x297%(x298<=(x299==x300)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x321 = -1;
	int16_t x322 = -802;
	uint8_t x323 = 2U;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t40 = 4;

	t40 = (x321%(x322<=(x323==x324)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x329 = INT16_MAX;
	volatile int64_t x330 = INT64_MIN;
	static volatile uint32_t x331 = 1U;
	int64_t x332 = INT64_MIN;
	volatile int32_t t41 = -6;

	t41 = (x329%(x330<=(x331==x332)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x333 = 6U;
	int64_t x334 = -24013359250LL;
	static int32_t x335 = -27738;
	int64_t x336 = INT64_MIN;
	volatile int32_t t42 = -107;

	t42 = (x333%(x334<=(x335==x336)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x349 = -72;
	static int32_t x350 = INT32_MIN;
	static volatile int32_t x351 = INT32_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t43 = -8388584;

	t43 = (x349%(x350<=(x351==x352)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	volatile int32_t x356 = -102;

	t44 = (x353%(x354<=(x355==x356)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	volatile int64_t t45 = 2473827539LL;

	t45 = (x385%(x386<=(x387==x388)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x389 = -1;
	int64_t x390 = -5416095829LL;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t46 = 13;

	t46 = (x389%(x390<=(x391==x392)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -1;
	static int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t47 = 6303114;

	t47 = (x405%(x406<=(x407==x408)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x417 = 0;
	int32_t x418 = -1;
	static volatile uint16_t x419 = UINT16_MAX;
	int8_t x420 = -1;

	t48 = (x417%(x418<=(x419==x420)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x438 = INT8_MIN;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t49 = -53387;

	t49 = (x437%(x438<=(x439==x440)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x457 = INT64_MIN;
	int16_t x458 = -3;
	uint32_t x459 = UINT32_MAX;
	uint32_t x460 = 312829266U;
	volatile int64_t t50 = 3LL;

	t50 = (x457%(x458<=(x459==x460)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x465 = 2;
	int64_t x466 = -35256LL;
	static int8_t x467 = 13;
	uint64_t x468 = 0LLU;
	volatile int32_t t51 = 0;

	t51 = (x465%(x466<=(x467==x468)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x477 = -1;
	int16_t x478 = -7;
	int64_t x479 = 156587176521687770LL;
	volatile int32_t t52 = 130789;

	t52 = (x477%(x478<=(x479==x480)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x485 = -59;
	int32_t x486 = -2801;
	uint32_t x487 = UINT32_MAX;
	volatile int8_t x488 = -1;
	volatile int32_t t53 = -466666;

	t53 = (x485%(x486<=(x487==x488)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x497 = UINT64_MAX;
	int32_t x498 = -53542;
	volatile int64_t x500 = -1LL;
	uint64_t t54 = 19883932427LLU;

	t54 = (x497%(x498<=(x499==x500)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x509 = INT8_MAX;
	int64_t x511 = INT64_MAX;
	int32_t x512 = 3878290;
	int32_t t55 = 46;

	t55 = (x509%(x510<=(x511==x512)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x513 = 19U;
	int8_t x514 = -1;
	int16_t x516 = INT16_MAX;
	int32_t t56 = 43;

	t56 = (x513%(x514<=(x515==x516)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x517 = INT64_MIN;
	int64_t x518 = -1020015183708LL;
	uint8_t x520 = 17U;

	t57 = (x517%(x518<=(x519==x520)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x528 = UINT16_MAX;

	t58 = (x525%(x526<=(x527==x528)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x529 = INT8_MAX;
	volatile uint64_t x531 = UINT64_MAX;
	uint32_t x532 = 722104U;

	t59 = (x529%(x530<=(x531==x532)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x550 = -1;
	int16_t x551 = 262;
	static int32_t t60 = -23;

	t60 = (x549%(x550<=(x551==x552)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x553 = 8924LLU;
	int32_t x554 = INT32_MIN;
	volatile uint32_t x555 = 834821U;
	int32_t x556 = 23;
	volatile uint64_t t61 = 114818029210874324LLU;

	t61 = (x553%(x554<=(x555==x556)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x561 = INT16_MIN;
	volatile int16_t x562 = -77;
	uint8_t x563 = UINT8_MAX;
	volatile uint32_t x564 = 6726U;
	static int32_t t62 = 6;

	t62 = (x561%(x562<=(x563==x564)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x573 = -7;
	int32_t x574 = INT32_MIN;
	int64_t x575 = -1LL;
	volatile int32_t t63 = 1;

	t63 = (x573%(x574<=(x575==x576)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x577 = UINT32_MAX;
	uint32_t x579 = UINT32_MAX;
	int16_t x580 = INT16_MIN;
	volatile uint32_t t64 = 170101U;

	t64 = (x577%(x578<=(x579==x580)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x589 = -1;
	volatile int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;
	static int64_t x592 = -1LL;
	volatile int32_t t65 = 1;

	t65 = (x589%(x590<=(x591==x592)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x593 = -1;
	static int32_t x594 = -116788353;
	static uint32_t x595 = 4U;
	volatile int32_t t66 = -172638;

	t66 = (x593%(x594<=(x595==x596)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x617 = UINT8_MAX;
	int16_t x618 = -5;
	int8_t x620 = -1;
	int32_t t67 = 121165;

	t67 = (x617%(x618<=(x619==x620)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x621 = 11210625LL;
	int16_t x622 = -1;
	int64_t x623 = INT64_MAX;
	int64_t t68 = -6LL;

	t68 = (x621%(x622<=(x623==x624)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x637 = INT64_MAX;
	int16_t x638 = INT16_MIN;
	volatile int8_t x639 = INT8_MAX;
	int8_t x640 = INT8_MIN;
	int64_t t69 = 962164967598454817LL;

	t69 = (x637%(x638<=(x639==x640)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x661 = 42553214323459LLU;
	int32_t x662 = INT32_MIN;
	volatile uint64_t t70 = 41928467684099LLU;

	t70 = (x661%(x662<=(x663==x664)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	uint8_t x668 = 3U;
	int64_t t71 = -243830122341431LL;

	t71 = (x665%(x666<=(x667==x668)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x685 = -1LL;
	uint32_t x687 = 25U;
	volatile int16_t x688 = -511;

	t72 = (x685%(x686<=(x687==x688)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x699 = -1;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t73 = 0;

	t73 = (x697%(x698<=(x699==x700)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x701 = -1LL;
	static int8_t x702 = INT8_MIN;
	static uint32_t x703 = UINT32_MAX;
	uint32_t x704 = 244U;

	t74 = (x701%(x702<=(x703==x704)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x705 = UINT32_MAX;
	uint8_t x707 = UINT8_MAX;
	int8_t x708 = 9;
	uint32_t t75 = 63U;

	t75 = (x705%(x706<=(x707==x708)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x713 = -1;
	int8_t x714 = -1;
	uint32_t x715 = 18583788U;
	int32_t x716 = INT32_MIN;
	int32_t t76 = -544576;

	t76 = (x713%(x714<=(x715==x716)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x725 = 9U;
	volatile int16_t x726 = -1;
	static volatile int32_t x728 = 1;

	t77 = (x725%(x726<=(x727==x728)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x729 = UINT32_MAX;
	int64_t x730 = -14898LL;
	int32_t x731 = -1;
	uint64_t x732 = 91525638LLU;

	t78 = (x729%(x730<=(x731==x732)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x738 = -3040;
	uint32_t x739 = 5U;
	uint32_t t79 = 510071990U;

	t79 = (x737%(x738<=(x739==x740)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x749 = 0U;
	int32_t x750 = -15;
	int8_t x751 = INT8_MIN;
	uint16_t x752 = 225U;

	t80 = (x749%(x750<=(x751==x752)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x755 = -1;
	uint16_t x756 = 3940U;
	uint32_t t81 = 0U;

	t81 = (x753%(x754<=(x755==x756)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x773 = 1U;
	volatile uint8_t x775 = UINT8_MAX;
	volatile int64_t x776 = INT64_MIN;
	static int32_t t82 = 5;

	t82 = (x773%(x774<=(x775==x776)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x777 = -28;
	int32_t x778 = -1;
	static uint32_t x779 = 0U;
	volatile int64_t x780 = INT64_MAX;
	volatile int32_t t83 = -2051373;

	t83 = (x777%(x778<=(x779==x780)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x805 = INT64_MAX;
	int64_t x806 = INT64_MIN;
	static int64_t x807 = -1LL;
	int8_t x808 = INT8_MIN;

	t84 = (x805%(x806<=(x807==x808)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x810 = INT64_MIN;
	int8_t x811 = -5;
	int32_t t85 = 27468530;

	t85 = (x809%(x810<=(x811==x812)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x817 = 2855U;
	static int16_t x818 = INT16_MIN;
	int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MAX;

	t86 = (x817%(x818<=(x819==x820)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x821 = -1;
	int32_t x822 = 0;
	volatile uint32_t x824 = 6U;
	volatile int32_t t87 = 23645039;

	t87 = (x821%(x822<=(x823==x824)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x825 = INT8_MAX;
	int16_t x827 = INT16_MAX;
	volatile uint16_t x828 = 6U;

	t88 = (x825%(x826<=(x827==x828)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x841 = -1;
	int8_t x842 = INT8_MIN;
	volatile int8_t x843 = INT8_MIN;
	int64_t x844 = -1LL;
	static volatile int32_t t89 = -3;

	t89 = (x841%(x842<=(x843==x844)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x845 = -1;
	static int16_t x846 = -1;
	uint8_t x847 = 2U;
	uint64_t x848 = UINT64_MAX;

	t90 = (x845%(x846<=(x847==x848)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x857 = -1;
	int16_t x859 = INT16_MAX;
	int16_t x860 = -1;
	volatile int32_t t91 = 164;

	t91 = (x857%(x858<=(x859==x860)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x861 = INT8_MAX;
	int16_t x862 = INT16_MIN;
	int64_t x863 = INT64_MIN;
	volatile int16_t x864 = INT16_MAX;
	volatile int32_t t92 = -13512;

	t92 = (x861%(x862<=(x863==x864)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x878 = -1;
	int8_t x880 = INT8_MAX;
	int32_t t93 = -55;

	t93 = (x877%(x878<=(x879==x880)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x882 = INT64_MIN;
	int64_t x884 = -1LL;
	volatile int32_t t94 = -4872192;

	t94 = (x881%(x882<=(x883==x884)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x890 = INT16_MIN;
	int32_t t95 = -223040049;

	t95 = (x889%(x890<=(x891==x892)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x893 = INT8_MAX;
	static int16_t x895 = INT16_MAX;
	uint8_t x896 = 52U;
	int32_t t96 = -1;

	t96 = (x893%(x894<=(x895==x896)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x897 = INT32_MIN;
	int16_t x898 = -1;
	static int32_t x899 = INT32_MIN;
	int32_t x900 = -1;
	volatile int32_t t97 = -3;

	t97 = (x897%(x898<=(x899==x900)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x918 = INT64_MIN;
	uint16_t x919 = 20U;
	volatile int8_t x920 = -13;
	static volatile uint64_t t98 = 136189415326801LLU;

	t98 = (x917%(x918<=(x919==x920)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x922 = INT64_MIN;
	uint16_t x924 = 309U;
	static volatile int32_t t99 = 126911669;

	t99 = (x921%(x922<=(x923==x924)));

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

