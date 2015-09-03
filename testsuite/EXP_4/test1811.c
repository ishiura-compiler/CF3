#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 7316814872LLU;
uint64_t x14 = 237406LLU;
volatile int32_t x15 = -1;
static uint8_t x25 = 3U;
int8_t x30 = -1;
int32_t x49 = INT32_MIN;
static int16_t x69 = INT16_MIN;
static int32_t t7 = -710440;
volatile int8_t x87 = -1;
uint32_t x94 = 16U;
static int8_t x113 = 9;
volatile int16_t x121 = INT16_MIN;
volatile int8_t x122 = 50;
volatile int64_t x142 = -54LL;
uint32_t t14 = 1U;
int16_t x154 = INT16_MAX;
int64_t x157 = -1LL;
volatile int32_t x159 = INT32_MIN;
uint8_t x165 = UINT8_MAX;
volatile int32_t t17 = -7081;
int16_t x195 = INT16_MIN;
uint8_t x200 = 2U;
volatile int32_t t19 = -3734648;
int32_t t21 = -79;
volatile int64_t x242 = INT64_MIN;
uint16_t x243 = UINT16_MAX;
volatile int8_t x248 = -1;
uint16_t x268 = UINT16_MAX;
volatile int64_t x270 = INT64_MIN;
static uint64_t x273 = 9096923034377483108LLU;
int64_t x292 = -24784055633LL;
int64_t x298 = INT64_MIN;
int32_t x299 = 28452;
int32_t t31 = 496773172;
int16_t x309 = INT16_MIN;
static volatile int16_t x312 = -1;
static volatile uint64_t t34 = 593798976034118932LLU;
static int16_t x335 = 1588;
static volatile int32_t x338 = -1;
int64_t t36 = -2265323145LL;
int64_t x343 = -16088853754LL;
int32_t t37 = INT32_MIN;
int8_t x357 = 2;
int64_t x358 = -7985166LL;
int32_t t38 = 22;
static volatile int32_t t40 = INT32_MIN;
uint16_t x390 = 0U;
static int64_t x391 = 2792516477646433LL;
static int8_t x401 = INT8_MAX;
volatile int16_t x418 = -1;
static uint64_t x436 = 119397136430809007LLU;
volatile uint64_t x457 = 1051513624659117421LLU;
int8_t x460 = -1;
volatile uint64_t t48 = 831437LLU;
int32_t t49 = 178;
int32_t x480 = -1;
int8_t x484 = INT8_MAX;
static int64_t x497 = INT64_MIN;
volatile int16_t x500 = INT16_MIN;
int8_t x506 = INT8_MIN;
int64_t x507 = INT64_MIN;
static uint8_t x508 = UINT8_MAX;
static uint64_t x521 = 106607841310LLU;
volatile uint64_t t55 = 177239LLU;
uint16_t x546 = 0U;
static int32_t x547 = 59985;
int16_t x593 = -1;
int32_t x619 = -28348;
int8_t x628 = -54;
static uint32_t x641 = UINT32_MAX;
int8_t x646 = -5;
static volatile int32_t t67 = -224;
volatile int16_t x657 = INT16_MAX;
volatile int8_t x667 = INT8_MIN;
int16_t x680 = INT16_MIN;
uint16_t x685 = 2U;
int16_t x688 = INT16_MAX;
int8_t x709 = INT8_MAX;
static int16_t x716 = -48;
volatile int64_t t74 = INT64_MIN;
static int16_t x721 = INT16_MIN;
static int32_t t79 = 238465;
int32_t x754 = INT32_MIN;
static int16_t x755 = INT16_MIN;
int32_t x756 = INT32_MIN;
uint16_t x773 = 2U;
static int32_t t84 = -574;
volatile int8_t x795 = 39;
int64_t x814 = INT64_MIN;
volatile int32_t x827 = INT32_MIN;
int8_t x864 = INT8_MIN;
volatile int32_t t90 = -193124664;
int16_t x885 = INT16_MIN;
int8_t x889 = -1;
int32_t t92 = -487;
uint8_t x894 = 24U;
volatile int8_t x898 = INT8_MIN;
int32_t t94 = INT32_MAX;
int8_t x904 = 7;
uint16_t x909 = 18U;
static int8_t x911 = 31;
int32_t t96 = 0;
static int64_t x919 = INT64_MAX;
int8_t x927 = INT8_MIN;
volatile uint32_t t98 = 1606269673U;
int16_t x934 = -1;


void f0(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x10 = 11LLU;
	volatile int64_t x12 = -1LL;
	int32_t t0 = -7;

	t0 = (x9/(x10<=(x11&x12)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 197523925LL;
	volatile int32_t x16 = -11832;
	static int64_t t1 = 7LL;

	t1 = (x13/(x14<=(x15&x16)));

	if (t1 != 197523925LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x26 = 29U;
	int32_t x27 = 123114863;
	int16_t x28 = INT16_MAX;
	int32_t t2 = 539522;

	t2 = (x25/(x26<=(x27&x28)));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = INT8_MIN;
	volatile int64_t x31 = -106343432798LL;
	volatile uint8_t x32 = 87U;
	int32_t t3 = 4543861;

	t3 = (x29/(x30<=(x31&x32)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = 15388;
	int32_t x38 = 120735514;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 1809024627LLU;
	int32_t t4 = 663;

	t4 = (x37/(x38<=(x39&x40)));

	if (t4 != 15388) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = 1934764357583993LLU;
	static volatile int16_t x46 = INT16_MIN;
	volatile int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	uint64_t t5 = 5260485LLU;

	t5 = (x45/(x46<=(x47&x48)));

	if (t5 != 1934764357583993LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 18U;
	static int8_t x52 = -4;
	static volatile int32_t t6 = INT32_MIN;

	t6 = (x49/(x50<=(x51&x52)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	static uint8_t x72 = UINT8_MAX;

	t7 = (x69/(x70<=(x71&x72)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint16_t x88 = 12U;
	static volatile int32_t t8 = -942102;

	t8 = (x85/(x86<=(x87&x88)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x93 = 6457294;
	int16_t x95 = -3;
	int16_t x96 = INT16_MAX;
	int32_t t9 = 391049757;

	t9 = (x93/(x94<=(x95&x96)));

	if (t9 != 6457294) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x114 = INT8_MIN;
	int64_t x115 = 253LL;
	int64_t x116 = 96LL;
	volatile int32_t t10 = -47;

	t10 = (x113/(x114<=(x115&x116)));

	if (t10 != 9) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x117 = INT32_MAX;
	static uint16_t x118 = 19U;
	volatile int64_t x119 = 209040179092433499LL;
	volatile int8_t x120 = INT8_MIN;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x117/(x118<=(x119&x120)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MAX;
	volatile int32_t t12 = -837;

	t12 = (x121/(x122<=(x123&x124)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = -1LL;
	int32_t x127 = -1;
	int16_t x128 = 1;
	int32_t t13 = -56218;

	t13 = (x125/(x126<=(x127&x128)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x141 = 15U;
	static uint32_t x143 = 2300U;
	uint16_t x144 = UINT16_MAX;

	t14 = (x141/(x142<=(x143&x144)));

	if (t14 != 15U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 1021789U;
	int64_t t15 = INT64_MIN;

	t15 = (x153/(x154<=(x155&x156)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x158 = 0U;
	uint32_t x160 = 0U;
	int64_t t16 = 3112076350LL;

	t16 = (x157/(x158<=(x159&x160)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x166 = -1;
	volatile uint16_t x167 = UINT16_MAX;
	uint8_t x168 = 0U;

	t17 = (x165/(x166<=(x167&x168)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = -1;
	static int16_t x196 = INT16_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x193/(x194<=(x195&x196)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x197 = -1;
	static int32_t x198 = -1;
	int8_t x199 = -1;

	t19 = (x197/(x198<=(x199&x200)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = -1LL;
	volatile int8_t x203 = -1;
	static int64_t x204 = -1LL;
	static int32_t t20 = -39388;

	t20 = (x201/(x202<=(x203&x204)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x213 = -1;
	volatile int16_t x214 = -6453;
	int64_t x215 = INT64_MIN;
	volatile uint8_t x216 = 7U;

	t21 = (x213/(x214<=(x215&x216)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x233 = INT8_MAX;
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = 0;
	volatile int32_t t22 = 48;

	t22 = (x233/(x234<=(x235&x236)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x241 = 1U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t23 = -259387660;

	t23 = (x241/(x242<=(x243&x244)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x245 = UINT32_MAX;
	static int64_t x246 = INT64_MIN;
	static uint32_t x247 = 719086U;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x245/(x246<=(x247&x248)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x257 = -4091;
	uint32_t x258 = 30760U;
	uint16_t x259 = UINT16_MAX;
	uint32_t x260 = 114672444U;
	volatile int32_t t25 = -31896273;

	t25 = (x257/(x258<=(x259&x260)));

	if (t25 != -4091) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	uint8_t x267 = 127U;
	int32_t t26 = -20;

	t26 = (x265/(x266<=(x267&x268)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x269 = -3731LL;
	int16_t x271 = -991;
	volatile uint16_t x272 = 698U;
	static int64_t t27 = 162LL;

	t27 = (x269/(x270<=(x271&x272)));

	if (t27 != -3731LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x274 = UINT32_MAX;
	uint64_t x275 = UINT64_MAX;
	static int16_t x276 = INT16_MIN;
	uint64_t t28 = 18735LLU;

	t28 = (x273/(x274<=(x275&x276)));

	if (t28 != 9096923034377483108LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = INT8_MIN;
	int32_t x287 = -1;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t29 = 261;

	t29 = (x285/(x286<=(x287&x288)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = UINT32_MAX;
	volatile int32_t t30 = 31795429;

	t30 = (x289/(x290<=(x291&x292)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x297 = -1;
	int8_t x300 = -1;

	t31 = (x297/(x298<=(x299&x300)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x305 = 22U;
	int32_t x306 = INT32_MIN;
	int64_t x307 = 107645LL;
	static int8_t x308 = -1;
	volatile int32_t t32 = -90192;

	t32 = (x305/(x306<=(x307&x308)));

	if (t32 != 22) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x310 = -1LL;
	volatile uint8_t x311 = UINT8_MAX;
	volatile int32_t t33 = -829;

	t33 = (x309/(x310<=(x311&x312)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x325 = 4107021472820206LLU;
	int64_t x326 = INT64_MIN;
	int32_t x327 = -1;
	static int16_t x328 = INT16_MAX;

	t34 = (x325/(x326<=(x327&x328)));

	if (t34 != 4107021472820206LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	int32_t x336 = 157519057;
	static volatile int32_t t35 = 5591844;

	t35 = (x333/(x334<=(x335&x336)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x337 = 365999241LL;
	volatile int64_t x339 = INT64_MAX;
	uint16_t x340 = 50U;

	t36 = (x337/(x338<=(x339&x340)));

	if (t36 != 365999241LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	int32_t x344 = 33;

	t37 = (x341/(x342<=(x343&x344)));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x359 = 192U;
	volatile int64_t x360 = INT64_MAX;

	t38 = (x357/(x358<=(x359&x360)));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -698632LL;
	volatile int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	static int64_t t39 = -1437316286LL;

	t39 = (x365/(x366<=(x367&x368)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;

	t40 = (x377/(x378<=(x379&x380)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x389 = -778137875678292893LL;
	int64_t x392 = 2548LL;
	int64_t t41 = 71333207126LL;

	t41 = (x389/(x390<=(x391&x392)));

	if (t41 != -778137875678292893LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x402 = 1;
	static int32_t x403 = -1;
	volatile uint64_t x404 = 31977804752LLU;
	volatile int32_t t42 = -300031429;

	t42 = (x401/(x402<=(x403&x404)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x417 = INT8_MAX;
	int64_t x419 = INT64_MIN;
	static int32_t x420 = 95;
	volatile int32_t t43 = -8;

	t43 = (x417/(x418<=(x419&x420)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x425 = INT16_MIN;
	volatile int8_t x426 = -6;
	volatile int16_t x427 = INT16_MIN;
	static int32_t x428 = INT32_MAX;
	volatile int32_t t44 = -353;

	t44 = (x425/(x426<=(x427&x428)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x433 = INT8_MIN;
	static uint8_t x434 = 7U;
	volatile int32_t x435 = 18958;
	static volatile int32_t t45 = -51569;

	t45 = (x433/(x434<=(x435&x436)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x437 = INT8_MAX;
	int32_t x438 = -2;
	uint16_t x439 = 651U;
	static volatile int64_t x440 = 5976251783335992LL;
	int32_t t46 = 2;

	t46 = (x437/(x438<=(x439&x440)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x449 = 43LLU;
	static int16_t x450 = -5;
	uint8_t x451 = 15U;
	int16_t x452 = INT16_MIN;
	static uint64_t t47 = 13LLU;

	t47 = (x449/(x450<=(x451&x452)));

	if (t47 != 43LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x458 = INT32_MIN;
	int32_t x459 = -1;

	t48 = (x457/(x458<=(x459&x460)));

	if (t48 != 1051513624659117421LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x465 = 359U;
	int32_t x466 = -1;
	int32_t x467 = -1;
	uint32_t x468 = UINT32_MAX;

	t49 = (x465/(x466<=(x467&x468)));

	if (t49 != 359) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x477 = UINT8_MAX;
	static int32_t x478 = -130477140;
	uint16_t x479 = UINT16_MAX;
	static int32_t t50 = -62120034;

	t50 = (x477/(x478<=(x479&x480)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x481 = -1;
	static volatile int16_t x482 = -28;
	int8_t x483 = -1;
	int32_t t51 = 180;

	t51 = (x481/(x482<=(x483&x484)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x498 = INT16_MIN;
	volatile uint64_t x499 = UINT64_MAX;
	int64_t t52 = INT64_MIN;

	t52 = (x497/(x498<=(x499&x500)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MIN;
	int16_t x503 = 999;
	int8_t x504 = -1;
	int32_t t53 = -27501;

	t53 = (x501/(x502<=(x503&x504)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x505 = 55U;
	int32_t t54 = -489191250;

	t54 = (x505/(x506<=(x507&x508)));

	if (t54 != 55) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x522 = -3012922969175LL;
	volatile int64_t x523 = -4765LL;
	static volatile int8_t x524 = INT8_MIN;

	t55 = (x521/(x522<=(x523&x524)));

	if (t55 != 106607841310LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x541 = INT16_MAX;
	static volatile int32_t x542 = 97;
	volatile uint32_t x543 = UINT32_MAX;
	int8_t x544 = INT8_MAX;
	volatile int32_t t56 = -8;

	t56 = (x541/(x542<=(x543&x544)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x545 = 1;
	int8_t x548 = INT8_MIN;
	static volatile int32_t t57 = -11883522;

	t57 = (x545/(x546<=(x547&x548)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x557 = INT16_MIN;
	static uint32_t x558 = 798662U;
	volatile int16_t x559 = INT16_MIN;
	volatile int16_t x560 = -1;
	volatile int32_t t58 = -1729079;

	t58 = (x557/(x558<=(x559&x560)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x561 = -1;
	int64_t x562 = -1LL;
	int64_t x563 = INT64_MAX;
	volatile int64_t x564 = INT64_MIN;
	int32_t t59 = -743999937;

	t59 = (x561/(x562<=(x563&x564)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x573 = UINT32_MAX;
	int32_t x574 = INT32_MIN;
	static uint16_t x575 = UINT16_MAX;
	static int64_t x576 = -1LL;
	static uint32_t t60 = UINT32_MAX;

	t60 = (x573/(x574<=(x575&x576)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x594 = INT8_MIN;
	static uint16_t x595 = 29964U;
	int64_t x596 = INT64_MIN;
	int32_t t61 = -4464311;

	t61 = (x593/(x594<=(x595&x596)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x617 = -2;
	int32_t x618 = INT32_MIN;
	static volatile int8_t x620 = INT8_MIN;
	int32_t t62 = 907317;

	t62 = (x617/(x618<=(x619&x620)));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x621 = 925U;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	volatile int32_t t63 = 7901;

	t63 = (x621/(x622<=(x623&x624)));

	if (t63 != 925) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x625 = 2U;
	int64_t x626 = -1LL;
	static int64_t x627 = 24496037711595LL;
	int32_t t64 = -3308;

	t64 = (x625/(x626<=(x627&x628)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x629 = INT64_MIN;
	static int64_t x630 = -1LL;
	static int64_t x631 = -1LL;
	volatile int64_t x632 = INT64_MAX;
	int64_t t65 = INT64_MIN;

	t65 = (x629/(x630<=(x631&x632)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x642 = -2;
	uint8_t x643 = 1U;
	int64_t x644 = -2182198869519388785LL;
	static uint32_t t66 = UINT32_MAX;

	t66 = (x641/(x642<=(x643&x644)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x645 = INT8_MIN;
	int32_t x647 = 13;
	static uint8_t x648 = 36U;

	t67 = (x645/(x646<=(x647&x648)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x658 = 6;
	uint64_t x659 = 11341835425901309LLU;
	int32_t x660 = -1;
	volatile int32_t t68 = -125449749;

	t68 = (x657/(x658<=(x659&x660)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x665 = INT64_MAX;
	static int64_t x666 = INT64_MIN;
	uint32_t x668 = 935U;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x665/(x666<=(x667&x668)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x677 = UINT32_MAX;
	uint32_t x678 = 412725359U;
	int32_t x679 = -143892339;
	static uint32_t t70 = UINT32_MAX;

	t70 = (x677/(x678<=(x679&x680)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x686 = INT8_MIN;
	int8_t x687 = -1;
	int32_t t71 = -4229843;

	t71 = (x685/(x686<=(x687&x688)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x693 = INT8_MIN;
	volatile int16_t x694 = INT16_MIN;
	static int64_t x695 = INT64_MAX;
	static volatile int8_t x696 = INT8_MIN;
	int32_t t72 = 374;

	t72 = (x693/(x694<=(x695&x696)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MIN;
	volatile int8_t x712 = INT8_MIN;
	static volatile int32_t t73 = -31;

	t73 = (x709/(x710<=(x711&x712)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x713 = INT64_MIN;
	uint32_t x714 = 51300U;
	volatile uint16_t x715 = UINT16_MAX;

	t74 = (x713/(x714<=(x715&x716)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x722 = INT32_MIN;
	volatile int32_t x723 = INT32_MIN;
	int64_t x724 = 310706LL;
	static volatile int32_t t75 = -8496899;

	t75 = (x721/(x722<=(x723&x724)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x725 = INT64_MAX;
	volatile int32_t x726 = 7594054;
	uint32_t x727 = UINT32_MAX;
	int16_t x728 = INT16_MIN;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x725/(x726<=(x727&x728)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x729 = INT64_MIN;
	volatile uint64_t x730 = 565893LLU;
	int16_t x731 = INT16_MIN;
	int64_t x732 = 30090622107LL;
	int64_t t77 = INT64_MIN;

	t77 = (x729/(x730<=(x731&x732)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x733 = 0;
	int32_t x734 = INT32_MIN;
	int64_t x735 = -64624568730186LL;
	int8_t x736 = INT8_MAX;
	volatile int32_t t78 = -21642417;

	t78 = (x733/(x734<=(x735&x736)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x737 = INT8_MIN;
	static volatile int8_t x738 = 3;
	static volatile int32_t x739 = 478620;
	int32_t x740 = 869441;

	t79 = (x737/(x738<=(x739&x740)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x741 = 2926188640053350036LL;
	int8_t x742 = INT8_MIN;
	static uint16_t x743 = 2U;
	int16_t x744 = INT16_MIN;
	volatile int64_t t80 = -228516548134890LL;

	t80 = (x741/(x742<=(x743&x744)));

	if (t80 != 2926188640053350036LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x753 = 1759493LLU;
	uint64_t t81 = 1925934382477LLU;

	t81 = (x753/(x754<=(x755&x756)));

	if (t81 != 1759493LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x765 = INT16_MIN;
	uint32_t x766 = 29U;
	static volatile int32_t x767 = -1;
	volatile int8_t x768 = INT8_MAX;
	volatile int32_t t82 = -1426823;

	t82 = (x765/(x766<=(x767&x768)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x774 = 3U;
	uint32_t x775 = 828687834U;
	uint8_t x776 = 9U;
	volatile int32_t t83 = -465;

	t83 = (x773/(x774<=(x775&x776)));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x781 = 0U;
	static int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MIN;
	int8_t x784 = 60;

	t84 = (x781/(x782<=(x783&x784)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x789 = INT8_MIN;
	int64_t x790 = 268153548698LL;
	int64_t x791 = INT64_MAX;
	int8_t x792 = -1;
	int32_t t85 = -11945;

	t85 = (x789/(x790<=(x791&x792)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x793 = INT32_MIN;
	int32_t x794 = INT32_MIN;
	int64_t x796 = INT64_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x793/(x794<=(x795&x796)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x813 = 24U;
	int8_t x815 = 3;
	static uint32_t x816 = 146918U;
	int32_t t87 = 7477;

	t87 = (x813/(x814<=(x815&x816)));

	if (t87 != 24) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x825 = INT32_MAX;
	int32_t x826 = -2569;
	int8_t x828 = 10;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x825/(x826<=(x827&x828)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x861 = INT8_MAX;
	volatile int16_t x862 = 27;
	uint32_t x863 = UINT32_MAX;
	int32_t t89 = 8075;

	t89 = (x861/(x862<=(x863&x864)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x881 = INT16_MIN;
	static volatile int64_t x882 = -1LL;
	int32_t x883 = 218572;
	int64_t x884 = INT64_MIN;

	t90 = (x881/(x882<=(x883&x884)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x886 = -99386215951LL;
	static uint32_t x887 = 11U;
	static int32_t x888 = INT32_MIN;
	static volatile int32_t t91 = -1;

	t91 = (x885/(x886<=(x887&x888)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x890 = INT64_MIN;
	int8_t x891 = INT8_MAX;
	uint16_t x892 = UINT16_MAX;

	t92 = (x889/(x890<=(x891&x892)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x893 = INT32_MIN;
	volatile uint8_t x895 = UINT8_MAX;
	uint16_t x896 = UINT16_MAX;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x893/(x894<=(x895&x896)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x897 = INT32_MAX;
	int8_t x899 = INT8_MAX;
	volatile int64_t x900 = INT64_MIN;

	t94 = (x897/(x898<=(x899&x900)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x901 = INT64_MIN;
	volatile int64_t x902 = -3571635LL;
	uint16_t x903 = 1U;
	int64_t t95 = INT64_MIN;

	t95 = (x901/(x902<=(x903&x904)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x910 = 1LL;
	static uint16_t x912 = 15517U;

	t96 = (x909/(x910<=(x911&x912)));

	if (t96 != 18) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x917 = 2211LL;
	int16_t x918 = INT16_MIN;
	volatile uint32_t x920 = UINT32_MAX;
	int64_t t97 = -237780573709LL;

	t97 = (x917/(x918<=(x919&x920)));

	if (t97 != 2211LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x925 = 1712U;
	int8_t x926 = INT8_MIN;
	int64_t x928 = -1LL;

	t98 = (x925/(x926<=(x927&x928)));

	if (t98 != 1712U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x933 = INT64_MIN;
	int8_t x935 = INT8_MIN;
	uint8_t x936 = UINT8_MAX;
	int64_t t99 = INT64_MIN;

	t99 = (x933/(x934<=(x935&x936)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

