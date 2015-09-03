#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x6 = 2;
int16_t x8 = -1;
int8_t x16 = -1;
int32_t t2 = -11659613;
uint8_t x40 = UINT8_MAX;
volatile uint32_t t5 = UINT32_MAX;
volatile uint32_t t6 = 1644962U;
static volatile int64_t t7 = 870665405116LL;
volatile uint64_t x78 = 4518101398059LLU;
uint64_t t10 = 1LLU;
uint16_t x81 = 3U;
int32_t x86 = INT32_MAX;
volatile int32_t x88 = 91090439;
int16_t x101 = 0;
uint16_t x104 = UINT16_MAX;
uint64_t t14 = 11975894661368192LLU;
static int16_t x131 = -220;
volatile uint32_t x134 = 6U;
volatile uint16_t x135 = 11878U;
uint32_t x141 = UINT32_MAX;
static int64_t x144 = INT64_MAX;
int64_t t20 = 0LL;
volatile uint8_t x150 = UINT8_MAX;
static volatile int32_t t22 = 32;
int16_t x161 = -1;
int32_t x170 = 60731;
static volatile int64_t t24 = 33275938343LL;
int32_t x185 = INT32_MAX;
static uint64_t x188 = 965062LLU;
uint16_t x193 = 10U;
int16_t x195 = -1;
static int16_t x209 = -1;
int8_t x221 = INT8_MIN;
uint16_t x238 = UINT16_MAX;
volatile int32_t x248 = INT32_MIN;
volatile uint32_t t36 = UINT32_MAX;
int8_t x288 = -1;
uint8_t x293 = UINT8_MAX;
uint32_t x294 = 4U;
static int8_t x295 = INT8_MIN;
int64_t x297 = INT64_MAX;
volatile uint32_t x299 = 5U;
int64_t t45 = 2551LL;
int64_t x319 = -1LL;
volatile uint64_t t47 = 10061214725LLU;
volatile int64_t x333 = -1LL;
int32_t x336 = -1;
int32_t x359 = INT32_MIN;
int32_t x381 = -10;
volatile int8_t x382 = INT8_MAX;
uint64_t x393 = 1028988LLU;
volatile int64_t x395 = 236504LL;
int8_t x401 = INT8_MAX;
volatile uint32_t x402 = 3U;
int64_t x403 = 1282947LL;
int64_t x408 = -21LL;
uint32_t x415 = 164451945U;
volatile int32_t x422 = INT32_MAX;
int16_t x423 = INT16_MIN;
uint32_t x434 = UINT32_MAX;
int64_t x454 = 1701651382LL;
volatile int32_t x455 = INT32_MIN;
int8_t x460 = INT8_MIN;
volatile int32_t t65 = 15;
static volatile int64_t x463 = 90494472682466724LL;
static uint8_t x464 = 9U;
static uint8_t x482 = 9U;
static int32_t x493 = -2786;
uint8_t x496 = 3U;
static int8_t x497 = 29;
uint32_t x531 = 5613262U;
int32_t x534 = 659899280;
int8_t x540 = INT8_MIN;
uint16_t x554 = 237U;
int8_t x564 = -1;
int32_t x572 = INT32_MIN;
volatile int64_t x596 = INT64_MAX;
int32_t t83 = -119294;
uint8_t x597 = 81U;
int64_t x598 = INT64_MAX;
int8_t x600 = -7;
uint8_t x602 = 2U;
uint32_t x603 = UINT32_MAX;
uint8_t x606 = 1U;
int32_t x608 = INT32_MIN;
uint8_t x609 = UINT8_MAX;
int32_t t87 = -39082;
uint64_t x613 = 54602629268881453LLU;
int32_t x615 = -23775;
int16_t x665 = INT16_MIN;
volatile int8_t x668 = -1;
volatile uint32_t t95 = 1839220176U;
int32_t x684 = INT32_MIN;
uint16_t x687 = 332U;
static int16_t x688 = INT16_MIN;
int8_t x691 = -1;
int16_t x692 = -841;
static int16_t x695 = INT16_MIN;
volatile uint64_t t99 = 220LLU;


void f0(void) {
	volatile uint8_t x5 = 0U;
	int32_t x7 = INT32_MIN;
	static volatile int32_t t0 = 28031308;

	t0 = (x5|(x6>>(x7<=x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	volatile uint16_t x10 = 10798U;
	volatile int32_t x11 = 202644602;
	int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -43165;

	t1 = (x9|(x10>>(x11<=x12)));

	if (t1 != 5631) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;

	t2 = (x13|(x14>>(x15<=x16)));

	if (t2 != -2147467265) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 4243438767196897LL;
	int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	static int64_t t3 = -80716613223827LL;

	t3 = (x17|(x18>>(x19<=x20)));

	if (t3 != 4243439499608063LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	static int32_t x26 = 10;
	static int32_t x27 = INT32_MAX;
	volatile int32_t x28 = -3955;
	static volatile int32_t t4 = 54955;

	t4 = (x25|(x26>>(x27<=x28)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MAX;

	t5 = (x37|(x38>>(x39<=x40)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x41 = INT16_MIN;
	uint32_t x42 = 96298559U;
	static int64_t x43 = 8697945800142773LL;
	int8_t x44 = INT8_MIN;

	t6 = (x41|(x42>>(x43<=x44)));

	if (t6 != 4294960703U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x49 = 1;
	int64_t x50 = INT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	int8_t x52 = -1;

	t7 = (x49|(x50>>(x51<=x52)));

	if (t7 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	uint8_t x54 = 57U;
	static uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;
	int32_t t8 = 27820;

	t8 = (x53|(x54>>(x55<=x56)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 3992018591LLU;
	volatile uint16_t x58 = UINT16_MAX;
	volatile int32_t x59 = 10697;
	int32_t x60 = -6;
	static volatile uint64_t t9 = 281673525556234129LLU;

	t9 = (x57|(x58>>(x59<=x60)));

	if (t9 != 3992059903LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = INT64_MAX;
	volatile int64_t x79 = -1LL;
	uint32_t x80 = 131185U;

	t10 = (x77|(x78>>(x79<=x80)));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x82 = 34U;
	uint32_t x83 = 9374626U;
	volatile int8_t x84 = -28;
	int32_t t11 = 182426;

	t11 = (x81|(x82>>(x83<=x84)));

	if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x85 = INT32_MIN;
	int8_t x87 = 14;
	volatile int32_t t12 = 20;

	t12 = (x85|(x86>>(x87<=x88)));

	if (t12 != -1073741825) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x93 = 1793;
	int16_t x94 = 62;
	static int16_t x95 = 3;
	static uint8_t x96 = 3U;
	volatile int32_t t13 = 437892647;

	t13 = (x93|(x94>>(x95<=x96)));

	if (t13 != 1823) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;

	t14 = (x101|(x102>>(x103<=x104)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x109 = INT64_MAX;
	uint16_t x110 = 3U;
	int16_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int64_t t15 = INT64_MAX;

	t15 = (x109|(x110>>(x111<=x112)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x113 = 736606658282462LLU;
	static int16_t x114 = 13;
	uint8_t x115 = 6U;
	volatile uint32_t x116 = 699U;
	volatile uint64_t t16 = 63352023361352682LLU;

	t16 = (x113|(x114>>(x115<=x116)));

	if (t16 != 736606658282462LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	static int16_t x119 = -1;
	volatile int32_t x120 = INT32_MAX;
	static volatile int32_t t17 = 17;

	t17 = (x117|(x118>>(x119<=x120)));

	if (t17 != -2147467265) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x129 = 5261;
	uint32_t x130 = 96264834U;
	int8_t x132 = -1;
	static uint32_t t18 = 11U;

	t18 = (x129|(x130>>(x131<=x132)));

	if (t18 != 48133581U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x133 = UINT32_MAX;
	static uint32_t x136 = 0U;
	uint32_t t19 = UINT32_MAX;

	t19 = (x133|(x134>>(x135<=x136)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x142 = INT64_MAX;
	volatile int64_t x143 = 451178576LL;

	t20 = (x141|(x142>>(x143<=x144)));

	if (t20 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x145 = 0;
	static volatile int64_t x146 = 2318972082LL;
	static int8_t x147 = -12;
	int8_t x148 = -1;
	volatile int64_t t21 = -55233467LL;

	t21 = (x145|(x146>>(x147<=x148)));

	if (t21 != 1159486041LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x149 = INT32_MIN;
	int16_t x151 = 0;
	static volatile int32_t x152 = -260347831;

	t22 = (x149|(x150>>(x151<=x152)));

	if (t22 != -2147483393) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x162 = 0;
	uint64_t x163 = 45139057LLU;
	int8_t x164 = INT8_MAX;
	volatile int32_t t23 = -5638;

	t23 = (x161|(x162>>(x163<=x164)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = INT64_MIN;
	volatile int64_t x171 = -76897884LL;
	int16_t x172 = -1;

	t24 = (x169|(x170>>(x171<=x172)));

	if (t24 != -9223372036854745443LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MAX;
	static volatile uint64_t x183 = 817956835493596LLU;
	int32_t x184 = -1;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x181|(x182>>(x183<=x184)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = -481350575055LL;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = (x185|(x186>>(x187<=x188)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x189 = 6U;
	uint16_t x190 = 166U;
	volatile uint32_t x191 = 151478U;
	int16_t x192 = INT16_MIN;
	int32_t t27 = 14882;

	t27 = (x189|(x190>>(x191<=x192)));

	if (t27 != 87) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x194 = INT32_MAX;
	static volatile int32_t x196 = -250;
	int32_t t28 = INT32_MAX;

	t28 = (x193|(x194>>(x195<=x196)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x210 = 7;
	static volatile int8_t x211 = INT8_MAX;
	int32_t x212 = 5233750;
	int32_t t29 = -19668806;

	t29 = (x209|(x210>>(x211<=x212)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x217 = 149;
	uint8_t x218 = 3U;
	static int8_t x219 = -2;
	int32_t x220 = 3;
	volatile int32_t t30 = 497154;

	t30 = (x217|(x218>>(x219<=x220)));

	if (t30 != 149) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x222 = 50U;
	int8_t x223 = INT8_MIN;
	static volatile int8_t x224 = 0;
	static volatile int32_t t31 = 10798;

	t31 = (x221|(x222>>(x223<=x224)));

	if (t31 != -103) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = 0U;
	uint32_t x227 = 1U;
	int64_t x228 = INT64_MIN;
	int64_t t32 = 52227654LL;

	t32 = (x225|(x226>>(x227<=x228)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x237 = 84571979052998LL;
	volatile uint32_t x239 = UINT32_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int64_t t33 = -24759485898640LL;

	t33 = (x237|(x238>>(x239<=x240)));

	if (t33 != 84571979055103LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x245 = 5U;
	uint64_t x246 = 328850425738LLU;
	int64_t x247 = -1LL;
	static uint64_t t34 = 1630068837044679109LLU;

	t34 = (x245|(x246>>(x247<=x248)));

	if (t34 != 328850425743LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x249 = INT8_MAX;
	uint16_t x250 = 3157U;
	int16_t x251 = -6855;
	uint8_t x252 = UINT8_MAX;
	int32_t t35 = 246;

	t35 = (x249|(x250>>(x251<=x252)));

	if (t35 != 1663) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x253 = INT16_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	int8_t x255 = -1;
	int32_t x256 = INT32_MAX;

	t36 = (x253|(x254>>(x255<=x256)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = 2932;
	uint16_t x267 = 1006U;
	static uint8_t x268 = 19U;
	static int32_t t37 = -4875895;

	t37 = (x265|(x266>>(x267<=x268)));

	if (t37 != 3071) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x269 = 37U;
	int64_t x270 = 132112756LL;
	uint64_t x271 = UINT64_MAX;
	uint32_t x272 = 127U;
	volatile int64_t t38 = 9505570845LL;

	t38 = (x269|(x270>>(x271<=x272)));

	if (t38 != 132112757LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x277 = INT64_MAX;
	uint16_t x278 = 238U;
	static uint16_t x279 = 76U;
	volatile uint8_t x280 = 3U;
	static int64_t t39 = INT64_MAX;

	t39 = (x277|(x278>>(x279<=x280)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x285 = -189730290;
	uint8_t x286 = 38U;
	volatile int16_t x287 = 0;
	int32_t t40 = -441800406;

	t40 = (x285|(x286>>(x287<=x288)));

	if (t40 != -189730258) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x296 = -8;
	volatile uint32_t t41 = 0U;

	t41 = (x293|(x294>>(x295<=x296)));

	if (t41 != 255U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x298 = 3943931857353051312LL;
	uint64_t x300 = UINT64_MAX;
	static int64_t t42 = INT64_MAX;

	t42 = (x297|(x298>>(x299<=x300)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t43 = 174LL;

	t43 = (x301|(x302>>(x303<=x304)));

	if (t43 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x305 = UINT32_MAX;
	static int16_t x306 = INT16_MAX;
	int64_t x307 = 65LL;
	int32_t x308 = INT32_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x305|(x306>>(x307<=x308)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x309 = 0;
	static int64_t x310 = 24114131884LL;
	static int8_t x311 = INT8_MAX;
	int64_t x312 = 1838913010390209LL;

	t45 = (x309|(x310>>(x311<=x312)));

	if (t45 != 12057065942LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	static volatile int64_t x315 = INT64_MIN;
	uint32_t x316 = 76U;
	static uint32_t t46 = UINT32_MAX;

	t46 = (x313|(x314>>(x315<=x316)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x317 = 52U;
	uint64_t x318 = 803LLU;
	int8_t x320 = INT8_MIN;

	t47 = (x317|(x318>>(x319<=x320)));

	if (t47 != 823LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x334 = 1U;
	int16_t x335 = INT16_MIN;
	volatile int64_t t48 = 184LL;

	t48 = (x333|(x334>>(x335<=x336)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MAX;
	static int16_t x348 = -1;
	volatile int32_t t49 = -1865495;

	t49 = (x345|(x346>>(x347<=x348)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x357 = 4U;
	uint64_t x358 = 97363581692LLU;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t50 = 105523857507667855LLU;

	t50 = (x357|(x358>>(x359<=x360)));

	if (t50 != 48681790846LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x383 = UINT16_MAX;
	uint8_t x384 = 126U;
	static int32_t t51 = -4;

	t51 = (x381|(x382>>(x383<=x384)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x385 = 0;
	static uint32_t x386 = UINT32_MAX;
	int16_t x387 = -1;
	uint8_t x388 = 2U;
	uint32_t t52 = 45061653U;

	t52 = (x385|(x386>>(x387<=x388)));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x389 = -1LL;
	uint8_t x390 = 52U;
	int64_t x391 = -1LL;
	uint32_t x392 = 4U;
	int64_t t53 = -21LL;

	t53 = (x389|(x390>>(x391<=x392)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x394 = UINT32_MAX;
	static uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t54 = 2377LLU;

	t54 = (x393|(x394>>(x395<=x396)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = 1;
	static uint8_t x400 = 0U;
	volatile int32_t t55 = 2491;

	t55 = (x397|(x398>>(x399<=x400)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x404 = 84U;
	static volatile uint32_t t56 = 359696111U;

	t56 = (x401|(x402>>(x403<=x404)));

	if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x405 = 303U;
	int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	volatile int32_t t57 = -1416;

	t57 = (x405|(x406>>(x407<=x408)));

	if (t57 != 319) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x409 = -185401;
	static uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	static volatile int32_t t58 = 970594931;

	t58 = (x409|(x410>>(x411<=x412)));

	if (t58 != -185345) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t x414 = 67262188LL;
	uint64_t x416 = UINT64_MAX;
	volatile int64_t t59 = -90440LL;

	t59 = (x413|(x414>>(x415<=x416)));

	if (t59 != 33631231LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x421 = INT16_MIN;
	static volatile uint32_t x424 = 12U;
	volatile int32_t t60 = 28;

	t60 = (x421|(x422>>(x423<=x424)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x429 = INT8_MIN;
	static volatile uint16_t x430 = 29731U;
	static int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t61 = 125696243;

	t61 = (x429|(x430>>(x431<=x432)));

	if (t61 != -93) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x433 = INT32_MAX;
	int16_t x435 = -1;
	uint16_t x436 = 3U;
	volatile uint32_t t62 = 197933602U;

	t62 = (x433|(x434>>(x435<=x436)));

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x449 = 0U;
	uint64_t x450 = UINT64_MAX;
	volatile int64_t x451 = INT64_MIN;
	static int64_t x452 = -1LL;
	uint64_t t63 = 3294134651710333LLU;

	t63 = (x449|(x450>>(x451<=x452)));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x453 = INT32_MAX;
	int64_t x456 = -1LL;
	volatile int64_t t64 = -119879904765LL;

	t64 = (x453|(x454>>(x455<=x456)));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x457 = INT8_MIN;
	uint16_t x458 = 258U;
	static uint32_t x459 = UINT32_MAX;

	t65 = (x457|(x458>>(x459<=x460)));

	if (t65 != -126) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x461 = INT32_MAX;
	uint16_t x462 = 0U;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x461|(x462>>(x463<=x464)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x481 = 0U;
	static int16_t x483 = INT16_MAX;
	static volatile int32_t x484 = 128;
	int32_t t67 = 915108928;

	t67 = (x481|(x482>>(x483<=x484)));

	if (t67 != 9) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x489 = 317206U;
	uint32_t x490 = 1464U;
	int64_t x491 = INT64_MAX;
	int8_t x492 = INT8_MIN;
	static volatile uint32_t t68 = 776U;

	t68 = (x489|(x490>>(x491<=x492)));

	if (t68 != 317374U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x494 = 7411LLU;
	uint16_t x495 = UINT16_MAX;
	volatile uint64_t t69 = 3069277691009132862LLU;

	t69 = (x493|(x494>>(x495<=x496)));

	if (t69 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x498 = 10905;
	static int32_t x499 = -829476;
	int16_t x500 = INT16_MIN;
	volatile int32_t t70 = 13392053;

	t70 = (x497|(x498>>(x499<=x500)));

	if (t70 != 5469) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x501 = -1;
	uint16_t x502 = 26596U;
	uint16_t x503 = 3U;
	uint8_t x504 = 45U;
	volatile int32_t t71 = -4105146;

	t71 = (x501|(x502>>(x503<=x504)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x509 = INT64_MIN;
	int64_t x510 = 260768978166801LL;
	uint8_t x511 = 59U;
	int64_t x512 = 16983253LL;
	volatile int64_t t72 = -368797LL;

	t72 = (x509|(x510>>(x511<=x512)));

	if (t72 != -9223241652365692408LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x521 = INT64_MIN;
	uint64_t x522 = 53LLU;
	volatile int8_t x523 = 52;
	uint32_t x524 = UINT32_MAX;
	volatile uint64_t t73 = 1758688968728LLU;

	t73 = (x521|(x522>>(x523<=x524)));

	if (t73 != 9223372036854775834LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x529 = INT8_MAX;
	uint32_t x530 = 119U;
	uint64_t x532 = 9040603744956056270LLU;
	static uint32_t t74 = 7833394U;

	t74 = (x529|(x530>>(x531<=x532)));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x533 = INT64_MIN;
	int8_t x535 = -1;
	int32_t x536 = INT32_MIN;
	volatile int64_t t75 = -55810113446319212LL;

	t75 = (x533|(x534>>(x535<=x536)));

	if (t75 != -9223372036194876528LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x537 = INT32_MIN;
	volatile int8_t x538 = 1;
	uint64_t x539 = UINT64_MAX;
	volatile int32_t t76 = 0;

	t76 = (x537|(x538>>(x539<=x540)));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x541 = INT32_MAX;
	volatile uint8_t x542 = 2U;
	static int16_t x543 = -1;
	int64_t x544 = INT64_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (x541|(x542>>(x543<=x544)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x553 = 4U;
	uint32_t x555 = 17018U;
	int32_t x556 = 0;
	volatile int32_t t78 = -1;

	t78 = (x553|(x554>>(x555<=x556)));

	if (t78 != 237) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x561 = INT8_MIN;
	static int32_t x562 = 94406929;
	static int8_t x563 = INT8_MIN;
	int32_t t79 = 1;

	t79 = (x561|(x562>>(x563<=x564)));

	if (t79 != -120) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x569 = 4U;
	static uint16_t x570 = 830U;
	uint8_t x571 = UINT8_MAX;
	static int32_t t80 = 0;

	t80 = (x569|(x570>>(x571<=x572)));

	if (t80 != 830) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x577 = INT64_MIN;
	uint64_t x578 = UINT64_MAX;
	volatile int16_t x579 = INT16_MIN;
	uint64_t x580 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (x577|(x578>>(x579<=x580)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x581 = -3;
	uint64_t x582 = UINT64_MAX;
	volatile int8_t x583 = INT8_MAX;
	int64_t x584 = INT64_MIN;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x581|(x582>>(x583<=x584)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x593 = INT8_MAX;
	static uint16_t x594 = 344U;
	uint16_t x595 = 16U;

	t83 = (x593|(x594>>(x595<=x596)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x599 = -1;
	int64_t t84 = INT64_MAX;

	t84 = (x597|(x598>>(x599<=x600)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x601 = -1LL;
	static int64_t x604 = -167218839LL;
	int64_t t85 = 3657LL;

	t85 = (x601|(x602>>(x603<=x604)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x605 = INT8_MIN;
	volatile int64_t x607 = -1LL;
	int32_t t86 = 2079347;

	t86 = (x605|(x606>>(x607<=x608)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x610 = 6;
	static int16_t x611 = -1;
	int32_t x612 = 83;

	t87 = (x609|(x610>>(x611<=x612)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x614 = 46112169LL;
	int32_t x616 = INT32_MAX;
	static uint64_t t88 = 227046LLU;

	t88 = (x613|(x614>>(x615<=x616)));

	if (t88 != 54602629268885245LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x617 = -1LL;
	uint32_t x618 = UINT32_MAX;
	uint32_t x619 = 2586U;
	static int32_t x620 = -1;
	static int64_t t89 = -1LL;

	t89 = (x617|(x618>>(x619<=x620)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x637 = 0LL;
	int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = 240079036788473284LLU;
	int32_t x640 = INT32_MIN;
	static volatile int64_t t90 = 3442LL;

	t90 = (x637|(x638>>(x639<=x640)));

	if (t90 != 63LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x641 = 286;
	uint64_t x642 = UINT64_MAX;
	volatile uint32_t x643 = 54410U;
	int8_t x644 = -1;
	static volatile uint64_t t91 = 140556934LLU;

	t91 = (x641|(x642>>(x643<=x644)));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x645 = INT8_MIN;
	int64_t x646 = 524201779LL;
	int64_t x647 = -28554271934459LL;
	static int64_t x648 = -663971441564890LL;
	volatile int64_t t92 = 1502866283LL;

	t92 = (x645|(x646>>(x647<=x648)));

	if (t92 != -77LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x657 = 495197697911399357LLU;
	int16_t x658 = 1;
	int16_t x659 = INT16_MIN;
	static int64_t x660 = -187353LL;
	static volatile uint64_t t93 = 558034LLU;

	t93 = (x657|(x658>>(x659<=x660)));

	if (t93 != 495197697911399357LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x666 = UINT32_MAX;
	int8_t x667 = INT8_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x665|(x666>>(x667<=x668)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x673 = 1679U;
	volatile uint32_t x674 = 513U;
	volatile int16_t x675 = -559;
	int16_t x676 = -1;

	t95 = (x673|(x674>>(x675<=x676)));

	if (t95 != 1935U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x681 = 1LLU;
	int64_t x682 = 123504LL;
	int8_t x683 = INT8_MAX;
	uint64_t t96 = 14677622886894427LLU;

	t96 = (x681|(x682>>(x683<=x684)));

	if (t96 != 123505LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x685 = INT8_MIN;
	volatile int64_t x686 = INT64_MAX;
	static int64_t t97 = -8274093198LL;

	t97 = (x685|(x686>>(x687<=x688)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x689 = -146613282799856LL;
	int8_t x690 = INT8_MAX;
	static volatile int64_t t98 = -40LL;

	t98 = (x689|(x690>>(x691<=x692)));

	if (t98 != -146613282799745LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x693 = 3LLU;
	uint32_t x694 = 382132U;
	volatile uint64_t x696 = 4095194939420LLU;

	t99 = (x693|(x694>>(x695<=x696)));

	if (t99 != 382135LLU) { NG(); } else { ; }
	
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

