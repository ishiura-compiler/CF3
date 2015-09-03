#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = 3;
int16_t x6 = INT16_MIN;
volatile int64_t x8 = -35320779831350294LL;
static uint32_t x16 = 5747U;
uint32_t x29 = 2U;
int8_t x32 = INT8_MIN;
uint64_t x61 = 68750625093033119LLU;
volatile int8_t x80 = -18;
int32_t t6 = -7082;
int8_t x102 = INT8_MIN;
uint8_t x106 = 0U;
uint16_t x108 = UINT16_MAX;
int32_t x136 = 0;
volatile int64_t x141 = INT64_MAX;
int64_t x143 = -170790531836742064LL;
static volatile int32_t t13 = 723;
uint8_t x170 = 0U;
volatile int32_t t14 = 1;
volatile int16_t x177 = 1;
volatile int32_t t15 = -1;
volatile uint32_t t18 = 23721U;
volatile int32_t x211 = INT32_MIN;
int32_t x214 = -78316638;
volatile uint16_t x218 = 5403U;
int16_t x222 = 5699;
static volatile uint32_t x224 = 9564U;
volatile uint16_t x233 = UINT16_MAX;
static int32_t x240 = -1;
volatile int64_t x242 = -1645027924941676176LL;
static int32_t x243 = 746;
int32_t t25 = 210440;
int8_t x245 = INT8_MAX;
volatile int8_t x248 = INT8_MIN;
static int32_t x263 = INT32_MIN;
uint8_t x273 = 1U;
volatile int32_t t32 = 4822;
int16_t x278 = INT16_MAX;
uint32_t x279 = UINT32_MAX;
int8_t x282 = -1;
int8_t x283 = -8;
uint32_t x313 = 1799U;
uint16_t x314 = 1334U;
static volatile uint32_t t38 = 14888505U;
static volatile int32_t t39 = INT32_MAX;
uint8_t x357 = UINT8_MAX;
static int32_t t40 = 7702;
uint64_t x361 = 26278LLU;
static int32_t t42 = -670;
int64_t x394 = INT64_MIN;
uint32_t t43 = 15U;
volatile uint8_t x416 = 1U;
int8_t x429 = 1;
uint32_t x434 = 7U;
static uint8_t x442 = 14U;
uint64_t x444 = UINT64_MAX;
uint16_t x457 = UINT16_MAX;
uint16_t x460 = 5U;
uint16_t x479 = 0U;
static volatile uint64_t x487 = 1043LLU;
static int32_t t53 = 45;
int16_t x502 = INT16_MIN;
volatile uint32_t t55 = 1U;
uint16_t x505 = UINT16_MAX;
int64_t x506 = INT64_MIN;
uint16_t x507 = 5395U;
int8_t x514 = INT8_MAX;
uint32_t x546 = UINT32_MAX;
int32_t x574 = -1;
static uint16_t x576 = UINT16_MAX;
static volatile uint64_t t60 = 434722LLU;
volatile int32_t x590 = 3746371;
int32_t t62 = 116716561;
int64_t x602 = 200549LL;
uint32_t x609 = 4750130U;
int8_t x610 = -1;
int32_t x615 = -1;
int64_t x616 = INT64_MIN;
volatile int16_t x627 = INT16_MIN;
static volatile uint64_t x646 = UINT64_MAX;
static uint64_t x668 = 11LLU;
volatile int32_t t73 = 508028291;
uint32_t x681 = UINT32_MAX;
uint8_t x683 = UINT8_MAX;
int8_t x688 = INT8_MIN;
static uint32_t x689 = 121495U;
static int16_t x694 = -5;
uint8_t x695 = UINT8_MAX;
uint8_t x700 = 17U;
volatile int32_t t79 = 10276;
uint8_t x731 = UINT8_MAX;
int16_t x733 = 1;
static int32_t t82 = 1040;
static uint64_t x738 = 135330138380829LLU;
uint64_t x739 = 10726073887LLU;
uint16_t x741 = UINT16_MAX;
int16_t x762 = INT16_MIN;
uint16_t x764 = 103U;
static uint8_t x773 = 3U;
volatile uint64_t x779 = 25604LLU;
static uint32_t t88 = 319U;
uint32_t x782 = 2132459407U;
int32_t x783 = INT32_MAX;
static volatile int32_t t92 = 0;
int32_t x814 = 7078;
int32_t t94 = -12;
int16_t x835 = -7965;
volatile uint8_t x838 = 1U;
static int8_t x839 = INT8_MIN;
int8_t x850 = -1;
int32_t x854 = 0;
int32_t x856 = INT32_MIN;
int8_t x862 = INT8_MAX;
int32_t x864 = INT32_MIN;


void f0(void) {
	volatile int8_t x7 = -1;
	static int32_t t0 = 7894;

	t0 = (x5<<(x6<=(x7-x8)));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = 137718188;
	int64_t x15 = INT64_MAX;
	static volatile int32_t t1 = 38243;

	t1 = (x13<<(x14<=(x15-x16)));

	if (t1 != 131070) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = 1;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = INT16_MAX;
	static uint32_t x28 = UINT32_MAX;
	int32_t t2 = 828414;

	t2 = (x25<<(x26<=(x27-x28)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = UINT16_MAX;
	static int32_t x31 = INT32_MIN;
	volatile uint32_t t3 = 154U;

	t3 = (x29<<(x30<=(x31-x32)));

	if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x62 = -1LL;
	uint64_t x63 = 510656890LLU;
	volatile uint8_t x64 = UINT8_MAX;
	static volatile uint64_t t4 = 4253LLU;

	t4 = (x61<<(x62<=(x63-x64)));

	if (t4 != 68750625093033119LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x77 = 4U;
	int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MAX;
	volatile int32_t t5 = -3574942;

	t5 = (x77<<(x78<=(x79-x80)));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x89 = 1U;
	static int16_t x90 = -92;
	static int16_t x91 = -1;
	volatile int32_t x92 = INT32_MIN;

	t6 = (x89<<(x90<=(x91-x92)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x101 = UINT64_MAX;
	uint32_t x103 = 93729363U;
	uint8_t x104 = UINT8_MAX;
	static uint64_t t7 = UINT64_MAX;

	t7 = (x101<<(x102<=(x103-x104)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x105 = INT16_MAX;
	int32_t x107 = INT32_MAX;
	static volatile int32_t t8 = -1911294;

	t8 = (x105<<(x106<=(x107-x108)));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x117 = 4U;
	int8_t x118 = INT8_MIN;
	static int8_t x119 = 0;
	int16_t x120 = INT16_MIN;
	static int32_t t9 = -46629;

	t9 = (x117<<(x118<=(x119-x120)));

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = -9;
	static int32_t x127 = INT32_MIN;
	static int16_t x128 = -1;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x125<<(x126<=(x127-x128)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x133 = 88U;
	int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	volatile int32_t t11 = -31104766;

	t11 = (x133<<(x134<=(x135-x136)));

	if (t11 != 88) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x142 = INT32_MIN;
	uint8_t x144 = 27U;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x141<<(x142<=(x143-x144)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x161 = 10U;
	volatile uint16_t x162 = UINT16_MAX;
	uint32_t x163 = UINT32_MAX;
	static int64_t x164 = -1LL;

	t13 = (x161<<(x162<=(x163-x164)));

	if (t13 != 20) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x169 = 103U;
	static volatile int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;

	t14 = (x169<<(x170<=(x171-x172)));

	if (t14 != 103) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x178 = 287282278304044021LL;
	static volatile uint16_t x179 = 3767U;
	uint32_t x180 = UINT32_MAX;

	t15 = (x177<<(x178<=(x179-x180)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x193 = 15569704137LL;
	uint32_t x194 = 48213U;
	static volatile int8_t x195 = -1;
	static int16_t x196 = 38;
	int64_t t16 = -1446469581660640LL;

	t16 = (x193<<(x194<=(x195-x196)));

	if (t16 != 31139408274LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x201 = 9757LLU;
	int16_t x202 = -1;
	uint8_t x203 = 82U;
	int16_t x204 = -1;
	volatile uint64_t t17 = 117880228397354LLU;

	t17 = (x201<<(x202<=(x203-x204)));

	if (t17 != 19514LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x205 = 38831U;
	int16_t x206 = INT16_MIN;
	int32_t x207 = -3;
	uint32_t x208 = UINT32_MAX;

	t18 = (x205<<(x206<=(x207-x208)));

	if (t18 != 77662U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = 16U;
	static int64_t x212 = INT64_MIN;
	uint64_t t19 = 355285155682011894LLU;

	t19 = (x209<<(x210<=(x211-x212)));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x213 = INT64_MAX;
	static int64_t x215 = -1LL;
	int32_t x216 = INT32_MAX;
	int64_t t20 = INT64_MAX;

	t20 = (x213<<(x214<=(x215-x216)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x217 = 9865U;
	int16_t x219 = 1502;
	int64_t x220 = -1LL;
	volatile int32_t t21 = -840830;

	t21 = (x217<<(x218<=(x219-x220)));

	if (t21 != 9865) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x223 = INT32_MIN;
	volatile int32_t t22 = 771;

	t22 = (x221<<(x222<=(x223-x224)));

	if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t23 = 52;

	t23 = (x233<<(x234<=(x235-x236)));

	if (t23 != 131070) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x237 = 3625407U;
	volatile uint16_t x238 = UINT16_MAX;
	volatile uint16_t x239 = UINT16_MAX;
	uint32_t t24 = 23364142U;

	t24 = (x237<<(x238<=(x239-x240)));

	if (t24 != 7250814U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x241 = INT8_MAX;
	static int16_t x244 = INT16_MAX;

	t25 = (x241<<(x242<=(x243-x244)));

	if (t25 != 254) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x246 = 1744008347U;
	volatile uint8_t x247 = 29U;
	int32_t t26 = 4035434;

	t26 = (x245<<(x246<=(x247-x248)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x249 = INT16_MAX;
	volatile int16_t x250 = -49;
	int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int32_t t27 = -116774;

	t27 = (x249<<(x250<=(x251-x252)));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x253 = INT32_MAX;
	uint8_t x254 = UINT8_MAX;
	static int64_t x255 = -8344329469LL;
	int16_t x256 = INT16_MAX;
	int32_t t28 = INT32_MAX;

	t28 = (x253<<(x254<=(x255-x256)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x257 = 37561382490868726LLU;
	uint64_t x258 = 763080937310711LLU;
	int16_t x259 = -1;
	uint32_t x260 = UINT32_MAX;
	uint64_t t29 = 2500763LLU;

	t29 = (x257<<(x258<=(x259-x260)));

	if (t29 != 37561382490868726LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x261 = INT8_MAX;
	uint32_t x262 = 1184458U;
	uint32_t x264 = 5326061U;
	int32_t t30 = -1026036699;

	t30 = (x261<<(x262<=(x263-x264)));

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = -6349303;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = INT8_MIN;
	volatile uint32_t t31 = 310330U;

	t31 = (x269<<(x270<=(x271-x272)));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x274 = -6;
	int64_t x275 = -1LL;
	static int32_t x276 = INT32_MIN;

	t32 = (x273<<(x274<=(x275-x276)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x277 = UINT16_MAX;
	static uint32_t x280 = 11U;
	static int32_t t33 = 4857855;

	t33 = (x277<<(x278<=(x279-x280)));

	if (t33 != 131070) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x281 = INT8_MAX;
	uint32_t x284 = 1061U;
	static volatile int32_t t34 = 3727;

	t34 = (x281<<(x282<=(x283-x284)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = -1;
	static int32_t x288 = -912;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x285<<(x286<=(x287-x288)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x293 = 65527;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 7236907582724674LLU;
	int32_t x296 = INT32_MIN;
	volatile int32_t t36 = -6703;

	t36 = (x293<<(x294<=(x295-x296)));

	if (t36 != 65527) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x309 = INT32_MAX;
	static uint8_t x310 = 4U;
	static int64_t x311 = -68LL;
	int16_t x312 = 115;
	int32_t t37 = INT32_MAX;

	t37 = (x309<<(x310<=(x311-x312)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x315 = INT64_MIN;
	uint64_t x316 = UINT64_MAX;

	t38 = (x313<<(x314<=(x315-x316)));

	if (t38 != 3598U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = 14815;
	int32_t x355 = -960512454;
	volatile int32_t x356 = -1;

	t39 = (x353<<(x354<=(x355-x356)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MAX;

	t40 = (x357<<(x358<=(x359-x360)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x362 = 1690221851U;
	volatile int32_t x363 = -1;
	int8_t x364 = -48;
	uint64_t t41 = 698466LLU;

	t41 = (x361<<(x362<=(x363-x364)));

	if (t41 != 26278LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x381 = 2;
	static uint8_t x382 = 45U;
	static int16_t x383 = INT16_MIN;
	uint8_t x384 = 13U;

	t42 = (x381<<(x382<=(x383-x384)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int32_t x396 = 194539;

	t43 = (x393<<(x394<=(x395-x396)));

	if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x409 = INT16_MAX;
	volatile int8_t x410 = -1;
	uint32_t x411 = 14746971U;
	int16_t x412 = -2477;
	int32_t t44 = -3699;

	t44 = (x409<<(x410<=(x411-x412)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x413 = INT64_MAX;
	uint16_t x414 = 18U;
	volatile int64_t x415 = -1LL;
	static int64_t t45 = INT64_MAX;

	t45 = (x413<<(x414<=(x415-x416)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x425 = 2;
	volatile int64_t x426 = 6033503268129LL;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t46 = 642009756;

	t46 = (x425<<(x426<=(x427-x428)));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x430 = 30900U;
	uint32_t x431 = 6U;
	static uint64_t x432 = 27790696LLU;
	int32_t t47 = 0;

	t47 = (x429<<(x430<=(x431-x432)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x433 = 2794520U;
	uint8_t x435 = UINT8_MAX;
	int16_t x436 = 72;
	volatile uint32_t t48 = 2713439U;

	t48 = (x433<<(x434<=(x435-x436)));

	if (t48 != 5589040U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x441 = 105LLU;
	uint64_t x443 = 68488746772114818LLU;
	volatile uint64_t t49 = 8048827579534029251LLU;

	t49 = (x441<<(x442<=(x443-x444)));

	if (t49 != 210LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x458 = INT64_MIN;
	uint32_t x459 = 527U;
	volatile int32_t t50 = 17;

	t50 = (x457<<(x458<=(x459-x460)));

	if (t50 != 131070) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x473 = 8740;
	static int8_t x474 = 42;
	int32_t x475 = -1;
	static volatile uint8_t x476 = 0U;
	static int32_t t51 = -6;

	t51 = (x473<<(x474<=(x475-x476)));

	if (t51 != 8740) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	int8_t x480 = -1;
	uint64_t t52 = 476695817206792LLU;

	t52 = (x477<<(x478<=(x479-x480)));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x485 = UINT16_MAX;
	uint64_t x486 = 104LLU;
	static int32_t x488 = -108144206;

	t53 = (x485<<(x486<=(x487-x488)));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x489 = 85U;
	uint32_t x490 = 1U;
	int16_t x491 = INT16_MIN;
	volatile int8_t x492 = INT8_MIN;
	int32_t t54 = -226938;

	t54 = (x489<<(x490<=(x491-x492)));

	if (t54 != 170) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x501 = 62952365U;
	int32_t x503 = -1;
	volatile uint32_t x504 = 5208U;

	t55 = (x501<<(x502<=(x503-x504)));

	if (t55 != 125904730U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x508 = INT16_MAX;
	volatile int32_t t56 = 26817389;

	t56 = (x505<<(x506<=(x507-x508)));

	if (t56 != 131070) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x509 = INT8_MAX;
	int64_t x510 = INT64_MAX;
	static int8_t x511 = -1;
	int16_t x512 = -1;
	static volatile int32_t t57 = 1;

	t57 = (x509<<(x510<=(x511-x512)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x513 = 265117LLU;
	volatile int8_t x515 = INT8_MAX;
	volatile uint8_t x516 = 5U;
	uint64_t t58 = 1228446487292189LLU;

	t58 = (x513<<(x514<=(x515-x516)));

	if (t58 != 265117LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x545 = 3677LL;
	static uint16_t x547 = 61U;
	uint16_t x548 = UINT16_MAX;
	int64_t t59 = 11971623827LL;

	t59 = (x545<<(x546<=(x547-x548)));

	if (t59 != 3677LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x573 = 23289368672116430LLU;
	uint8_t x575 = UINT8_MAX;

	t60 = (x573<<(x574<=(x575-x576)));

	if (t60 != 23289368672116430LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x589 = 144119878LLU;
	volatile int32_t x591 = -1;
	volatile uint32_t x592 = UINT32_MAX;
	volatile uint64_t t61 = 21481415414LLU;

	t61 = (x589<<(x590<=(x591-x592)));

	if (t61 != 144119878LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x597 = 1;
	volatile int32_t x598 = 797;
	static volatile uint8_t x599 = 1U;
	int16_t x600 = INT16_MAX;

	t62 = (x597<<(x598<=(x599-x600)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x601 = 49;
	int32_t x603 = INT32_MIN;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t63 = 155394;

	t63 = (x601<<(x602<=(x603-x604)));

	if (t63 != 49) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x605 = 8U;
	int64_t x606 = INT64_MIN;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MIN;
	volatile int32_t t64 = 301;

	t64 = (x605<<(x606<=(x607-x608)));

	if (t64 != 16) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x611 = 310140;
	volatile int8_t x612 = INT8_MIN;
	volatile uint32_t t65 = 15U;

	t65 = (x609<<(x610<=(x611-x612)));

	if (t65 != 9500260U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x613 = 0;
	uint32_t x614 = UINT32_MAX;
	int32_t t66 = -20593;

	t66 = (x613<<(x614<=(x615-x616)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x625 = UINT64_MAX;
	int16_t x626 = INT16_MAX;
	volatile int32_t x628 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x625<<(x626<=(x627-x628)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x629 = INT16_MAX;
	int32_t x630 = -1;
	int64_t x631 = INT64_MIN;
	volatile int16_t x632 = INT16_MIN;
	volatile int32_t t68 = -5;

	t68 = (x629<<(x630<=(x631-x632)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x633 = 123U;
	static int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	int32_t x636 = 60977;
	int32_t t69 = -5959;

	t69 = (x633<<(x634<=(x635-x636)));

	if (t69 != 123) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x641 = 24U;
	int16_t x642 = -1;
	int8_t x643 = INT8_MIN;
	int8_t x644 = -1;
	volatile int32_t t70 = 55725319;

	t70 = (x641<<(x642<=(x643-x644)));

	if (t70 != 24) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x645 = 394153;
	int16_t x647 = -666;
	int64_t x648 = 120442387LL;
	int32_t t71 = -159;

	t71 = (x645<<(x646<=(x647-x648)));

	if (t71 != 394153) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x665 = 12U;
	int8_t x666 = INT8_MIN;
	int32_t x667 = 11;
	uint32_t t72 = 241897U;

	t72 = (x665<<(x666<=(x667-x668)));

	if (t72 != 12U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x673 = UINT16_MAX;
	static uint16_t x674 = 7963U;
	volatile uint32_t x675 = 31U;
	static int16_t x676 = INT16_MIN;

	t73 = (x673<<(x674<=(x675-x676)));

	if (t73 != 131070) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x682 = -867305;
	int8_t x684 = INT8_MAX;
	uint32_t t74 = 1660243474U;

	t74 = (x681<<(x682<=(x683-x684)));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x685 = 1U;
	volatile uint32_t x686 = 68U;
	int64_t x687 = -1311081719560541838LL;
	volatile int32_t t75 = -360004;

	t75 = (x685<<(x686<=(x687-x688)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x690 = INT64_MIN;
	uint32_t x691 = 458613704U;
	uint64_t x692 = 12497043LLU;
	volatile uint32_t t76 = 1U;

	t76 = (x689<<(x690<=(x691-x692)));

	if (t76 != 121495U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x693 = 214U;
	uint64_t x696 = 1089675LLU;
	volatile uint32_t t77 = 104143U;

	t77 = (x693<<(x694<=(x695-x696)));

	if (t77 != 214U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x697 = 1U;
	static uint32_t x698 = 7510U;
	static uint32_t x699 = UINT32_MAX;
	volatile int32_t t78 = -173;

	t78 = (x697<<(x698<=(x699-x700)));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x701 = 77U;
	int32_t x702 = -2;
	int8_t x703 = 1;
	int8_t x704 = INT8_MIN;

	t79 = (x701<<(x702<=(x703-x704)));

	if (t79 != 154) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x721 = 19908209U;
	static uint8_t x722 = 10U;
	volatile int8_t x723 = -1;
	int8_t x724 = INT8_MIN;
	static volatile uint32_t t80 = 1282U;

	t80 = (x721<<(x722<=(x723-x724)));

	if (t80 != 39816418U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x729 = 56;
	int64_t x730 = INT64_MIN;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t81 = -2207;

	t81 = (x729<<(x730<=(x731-x732)));

	if (t81 != 112) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x734 = -1;
	int16_t x735 = -1;
	uint8_t x736 = UINT8_MAX;

	t82 = (x733<<(x734<=(x735-x736)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x737 = UINT16_MAX;
	int64_t x740 = -1LL;
	volatile int32_t t83 = -3804172;

	t83 = (x737<<(x738<=(x739-x740)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x742 = 74U;
	uint16_t x743 = 64U;
	static int64_t x744 = INT64_MAX;
	volatile int32_t t84 = 402594973;

	t84 = (x741<<(x742<=(x743-x744)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x749 = 304141872131586715LLU;
	uint8_t x750 = 11U;
	int16_t x751 = -467;
	static int64_t x752 = INT64_MIN;
	volatile uint64_t t85 = 11LLU;

	t85 = (x749<<(x750<=(x751-x752)));

	if (t85 != 608283744263173430LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x761 = 67U;
	int64_t x763 = INT64_MAX;
	int32_t t86 = 184233236;

	t86 = (x761<<(x762<=(x763-x764)));

	if (t86 != 134) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x774 = INT16_MIN;
	uint64_t x775 = 180391728909588LLU;
	volatile int8_t x776 = -1;
	volatile int32_t t87 = 232497924;

	t87 = (x773<<(x774<=(x775-x776)));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x777 = 2603999U;
	volatile uint8_t x778 = 51U;
	uint16_t x780 = UINT16_MAX;

	t88 = (x777<<(x778<=(x779-x780)));

	if (t88 != 5207998U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x781 = 120LLU;
	uint16_t x784 = 245U;
	volatile uint64_t t89 = 17LLU;

	t89 = (x781<<(x782<=(x783-x784)));

	if (t89 != 240LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x797 = 1;
	uint64_t x798 = UINT64_MAX;
	int8_t x799 = INT8_MIN;
	int8_t x800 = 0;
	int32_t t90 = -16976643;

	t90 = (x797<<(x798<=(x799-x800)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x801 = 249941LLU;
	int8_t x802 = -1;
	int64_t x803 = -1LL;
	uint32_t x804 = UINT32_MAX;
	volatile uint64_t t91 = 9LLU;

	t91 = (x801<<(x802<=(x803-x804)));

	if (t91 != 249941LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x809 = INT16_MAX;
	static int8_t x810 = 62;
	volatile int32_t x811 = INT32_MAX;
	uint64_t x812 = 3016185LLU;

	t92 = (x809<<(x810<=(x811-x812)));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x813 = 218U;
	static uint32_t x815 = 31U;
	int16_t x816 = INT16_MIN;
	int32_t t93 = 1;

	t93 = (x813<<(x814<=(x815-x816)));

	if (t93 != 436) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x821 = INT8_MAX;
	int16_t x822 = -4;
	static int8_t x823 = 0;
	int32_t x824 = INT32_MAX;

	t94 = (x821<<(x822<=(x823-x824)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x833 = UINT8_MAX;
	static int64_t x834 = INT64_MIN;
	int16_t x836 = INT16_MIN;
	volatile int32_t t95 = 254645921;

	t95 = (x833<<(x834<=(x835-x836)));

	if (t95 != 510) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x837 = UINT16_MAX;
	static volatile uint64_t x840 = UINT64_MAX;
	int32_t t96 = -20158478;

	t96 = (x837<<(x838<=(x839-x840)));

	if (t96 != 131070) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x849 = 44U;
	int16_t x851 = -51;
	int64_t x852 = INT64_MIN;
	static volatile int32_t t97 = 14;

	t97 = (x849<<(x850<=(x851-x852)));

	if (t97 != 88) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x853 = INT8_MAX;
	static int64_t x855 = -1LL;
	volatile int32_t t98 = 1770;

	t98 = (x853<<(x854<=(x855-x856)));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x861 = UINT16_MAX;
	int8_t x863 = -3;
	volatile int32_t t99 = -373679306;

	t99 = (x861<<(x862<=(x863-x864)));

	if (t99 != 131070) { NG(); } else { ; }
	
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

