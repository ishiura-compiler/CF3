#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x10 = 565059753U;
uint16_t x11 = 11U;
volatile int64_t x16 = -8041LL;
uint64_t x24 = 129254116LLU;
static uint32_t x27 = UINT32_MAX;
int16_t x43 = INT16_MIN;
volatile int16_t x44 = INT16_MIN;
volatile int64_t t6 = 1475887786709406895LL;
int8_t x53 = INT8_MIN;
static volatile uint64_t t8 = 47530088677774440LLU;
int16_t x61 = INT16_MIN;
int8_t x62 = -3;
int16_t x63 = INT16_MAX;
int32_t x72 = 175587;
int64_t t10 = 560577161LL;
volatile int32_t t11 = -48791191;
volatile int32_t x85 = INT32_MAX;
volatile int32_t x89 = 24;
volatile int64_t t14 = -14764236491LL;
static volatile uint64_t x103 = 196141827073465LLU;
int64_t x104 = 9495LL;
volatile int8_t x107 = INT8_MIN;
uint64_t x119 = 25LLU;
int32_t x122 = -40008540;
volatile int64_t t19 = 5155350895347866LL;
static int16_t x135 = -1;
int64_t x149 = -1LL;
static uint16_t x151 = UINT16_MAX;
volatile int64_t t21 = 16051440287742LL;
int64_t x167 = 23103022865290LL;
static int8_t x174 = INT8_MAX;
int8_t x176 = 13;
uint16_t x181 = 14U;
static volatile int64_t x183 = -1LL;
int64_t x194 = 3678729793720LL;
uint16_t x195 = 12286U;
static int64_t x196 = -1LL;
int16_t x206 = -1;
static volatile int8_t x207 = INT8_MIN;
int32_t x215 = 131555369;
int8_t x217 = INT8_MIN;
int32_t x220 = INT32_MIN;
uint64_t x224 = 36LLU;
static uint32_t x235 = 46U;
int16_t x244 = 1525;
int32_t t37 = 100618;
uint64_t x248 = 3LLU;
volatile uint64_t x251 = 1659074358706891LLU;
static uint64_t t39 = 17341165219569LLU;
volatile int64_t t43 = -1LL;
volatile uint64_t t44 = 70884608392042958LLU;
volatile int32_t x295 = -179455;
int16_t x325 = -1665;
int32_t x334 = 342653;
int64_t x335 = -209917832862LL;
int32_t x348 = INT32_MAX;
int64_t x360 = INT64_MAX;
uint64_t x377 = 262888870171LLU;
uint32_t x379 = 1668718U;
int16_t x380 = INT16_MIN;
static int32_t x382 = INT32_MAX;
static int32_t x390 = -1;
static int16_t x399 = INT16_MIN;
volatile uint64_t t61 = 60945711651840026LLU;
static uint16_t x411 = UINT16_MAX;
int64_t x416 = INT64_MAX;
int64_t t64 = 733319073LL;
int8_t x418 = INT8_MIN;
uint16_t x421 = 23U;
volatile uint32_t x423 = 131U;
uint16_t x439 = UINT16_MAX;
uint16_t x456 = 13U;
static volatile int64_t t73 = -4555428746274540LL;
volatile uint32_t x466 = UINT32_MAX;
int8_t x469 = INT8_MIN;
int8_t x471 = INT8_MAX;
int8_t x486 = INT8_MIN;
uint8_t x487 = 1U;
static volatile uint64_t x495 = UINT64_MAX;
static uint32_t x496 = UINT32_MAX;
int32_t x525 = INT32_MAX;
uint64_t x526 = UINT64_MAX;
int8_t x531 = -1;
uint16_t x532 = 2336U;
static int64_t x540 = 649476942318071672LL;
uint32_t x542 = UINT32_MAX;
static int32_t x544 = INT32_MAX;
static uint32_t t86 = 940928580U;
int32_t x556 = -1;
int16_t x558 = INT16_MIN;
int64_t x585 = INT64_MAX;
int8_t x599 = INT8_MIN;
volatile int8_t x600 = INT8_MAX;
int64_t x619 = -1LL;
static int32_t x625 = -1;
uint16_t x628 = UINT16_MAX;
uint8_t x648 = 46U;
volatile int32_t x651 = -1;
int8_t x657 = INT8_MIN;


void f0(void) {
	int8_t x9 = INT8_MIN;
	int32_t x12 = INT32_MIN;
	uint32_t t0 = 715408U;

	t0 = (x9*((x10*x11)%x12));

	if (t0 != 3259784832U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 53248LLU;
	int16_t x15 = -1;
	uint64_t t1 = 28135296142735LLU;

	t1 = (x13*((x14*x15)%x16));

	if (t1 != 53248LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = UINT8_MAX;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t2 = 594267;

	t2 = (x17*((x18*x19)%x20));

	if (t2 != -1057030144) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -1;
	volatile int8_t x22 = 1;
	uint8_t x23 = UINT8_MAX;
	static uint64_t t3 = 87124731LLU;

	t3 = (x21*((x22*x23)%x24));

	if (t3 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	uint32_t x26 = UINT32_MAX;
	int64_t x28 = -699369924LL;
	volatile int64_t t4 = -2025803958068LL;

	t4 = (x25*((x26*x27)%x28));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = 1;
	volatile int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile uint32_t x32 = 442U;
	uint32_t t5 = 938954U;

	t5 = (x29*((x30*x31)%x32));

	if (t5 != 85U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x41 = INT64_MIN;
	static uint8_t x42 = 0U;

	t6 = (x41*((x42*x43)%x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = INT16_MIN;
	static int16_t x50 = INT16_MIN;
	uint16_t x51 = UINT16_MAX;
	static uint64_t x52 = 10119LLU;
	uint64_t t7 = 0LLU;

	t7 = (x49*((x50*x51)%x52));

	if (t7 != 18446744073465233408LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MIN;
	volatile uint64_t x55 = 6476674813964LLU;
	int32_t x56 = INT32_MIN;

	t8 = (x53*((x54*x55)%x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x64 = 13U;
	volatile int32_t t9 = -4;

	t9 = (x61*((x62*x63)%x64));

	if (t9 != 262144) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x69 = INT32_MIN;
	int8_t x70 = 1;
	int64_t x71 = INT64_MIN;

	t10 = (x69*((x70*x71)%x72));

	if (t10 != 294907486928896LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x77 = 6U;
	uint8_t x78 = 0U;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t11 = (x77*((x78*x79)%x80));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x86 = 22858437LL;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = 1;
	int64_t t12 = 399LL;

	t12 = (x85*((x86*x87)%x88));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = 6704;
	static int16_t x92 = -101;
	uint64_t t13 = 1646756894772428184LLU;

	t13 = (x89*((x90*x91)%x92));

	if (t13 != 18446744073709390720LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = INT16_MIN;
	static int16_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = 99244825314190684LL;

	t14 = (x97*((x98*x99)%x100));

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = 2317544U;
	static int64_t x102 = -1LL;
	uint64_t t15 = 2703LLU;

	t15 = (x101*((x102*x103)%x104));

	if (t15 != 15031590384LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = 4822811LLU;
	uint32_t x106 = 798U;
	int64_t x108 = 845584235200LL;
	volatile uint64_t t16 = 10207490668187069LLU;

	t16 = (x105*((x106*x107)%x108));

	if (t16 != 20713322898582272LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x117 = 52U;
	volatile uint8_t x118 = 126U;
	uint32_t x120 = 10306877U;
	volatile uint64_t t17 = 3072LLU;

	t17 = (x117*((x118*x119)%x120));

	if (t17 != 163800LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x121 = 136007696LL;
	volatile uint64_t x123 = 20362298024LLU;
	static uint32_t x124 = 11687690U;
	uint64_t t18 = 28072LLU;

	t18 = (x121*((x122*x123)%x124));

	if (t18 != 828014309217216LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = -1;
	int16_t x130 = 0;
	volatile int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;

	t19 = (x129*((x130*x131)%x132));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x133 = INT8_MAX;
	uint64_t x134 = UINT64_MAX;
	volatile int16_t x136 = -1;
	volatile uint64_t t20 = 2368LLU;

	t20 = (x133*((x134*x135)%x136));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x150 = -1;
	static int32_t x152 = 213206506;

	t21 = (x149*((x150*x151)%x152));

	if (t21 != 65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x165 = 481;
	uint16_t x166 = 61U;
	int8_t x168 = INT8_MIN;
	static volatile int64_t t22 = -134265245377593504LL;

	t22 = (x165*((x166*x167)%x168));

	if (t22 != 47138LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x169 = 29638U;
	volatile int16_t x170 = -149;
	volatile int32_t x171 = -1;
	uint8_t x172 = 12U;
	uint32_t t23 = 2639301U;

	t23 = (x169*((x170*x171)%x172));

	if (t23 != 148190U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x173 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	volatile int32_t t24 = 699;

	t24 = (x173*((x174*x175)%x176));

	if (t24 != -393210) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x182 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	int64_t t25 = 398760237LL;

	t25 = (x181*((x182*x183)%x184));

	if (t25 != 1792LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x189 = UINT8_MAX;
	uint32_t x190 = 33120263U;
	static int32_t x191 = INT32_MAX;
	int16_t x192 = -175;
	volatile uint32_t t26 = 72655206U;

	t26 = (x189*((x190*x191)%x192));

	if (t26 != 2291751175U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x193 = -1;
	int64_t t27 = -795123258612LL;

	t27 = (x193*((x194*x195)%x196));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x197 = 0U;
	static int8_t x198 = -1;
	int16_t x199 = 187;
	int32_t x200 = -10166;
	int32_t t28 = 480489628;

	t28 = (x197*((x198*x199)%x200));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x201 = 240843755987197LL;
	int64_t x202 = 431451850LL;
	int64_t x203 = -19199817LL;
	int64_t x204 = -1LL;
	int64_t t29 = -28738889LL;

	t29 = (x201*((x202*x203)%x204));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x205 = -337197914775454973LL;
	volatile uint8_t x208 = 1U;
	volatile int64_t t30 = 6937632085LL;

	t30 = (x205*((x206*x207)%x208));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -1;
	static int64_t x211 = INT64_MAX;
	int8_t x212 = INT8_MAX;
	volatile int64_t t31 = -3730324449684LL;

	t31 = (x209*((x210*x211)%x212));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x213 = 1;
	volatile uint8_t x214 = 6U;
	int32_t x216 = INT32_MIN;
	int32_t t32 = -526132;

	t32 = (x213*((x214*x215)%x216));

	if (t32 != 789332214) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x218 = 98U;
	int8_t x219 = INT8_MAX;
	volatile uint32_t t33 = 76106U;

	t33 = (x217*((x218*x219)%x220));

	if (t33 != 4293374208U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x221 = INT32_MAX;
	volatile int8_t x222 = 35;
	int32_t x223 = 205;
	uint64_t t34 = 22510264683LLU;

	t34 = (x221*((x222*x223)%x224));

	if (t34 != 23622320117LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x233 = -1;
	volatile int8_t x234 = 1;
	int16_t x236 = -1;
	uint32_t t35 = 16U;

	t35 = (x233*((x234*x235)%x236));

	if (t35 != 4294967250U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x237 = 34U;
	uint8_t x238 = 21U;
	int16_t x239 = 97;
	int16_t x240 = -9474;
	int32_t t36 = 2;

	t36 = (x237*((x238*x239)%x240));

	if (t36 != 69258) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x241 = 10U;
	int16_t x242 = INT16_MIN;
	volatile int8_t x243 = 1;

	t37 = (x241*((x242*x243)%x244));

	if (t37 != -7430) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x245 = INT8_MAX;
	int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	uint64_t t38 = 15614861222157768LLU;

	t38 = (x245*((x246*x247)%x248));

	if (t38 != 254LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x249 = -688;
	uint32_t x250 = 294913349U;
	volatile uint8_t x252 = 3U;

	t39 = (x249*((x250*x251)%x252));

	if (t39 != 18446744073709550928LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x257 = INT16_MIN;
	static uint32_t x258 = 1181172174U;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 8U;
	volatile uint32_t t40 = 2008541U;

	t40 = (x257*((x258*x259)%x260));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x261 = 93953921;
	static volatile int64_t x262 = 4582427441315410LL;
	static uint8_t x263 = 19U;
	int8_t x264 = -1;
	volatile int64_t t41 = 12854563327LL;

	t41 = (x261*((x262*x263)%x264));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x269 = -1;
	static volatile int64_t x270 = -1LL;
	int8_t x271 = INT8_MAX;
	static int32_t x272 = -14002;
	int64_t t42 = 1425412139LL;

	t42 = (x269*((x270*x271)%x272));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x273 = -1509117814265LL;
	int8_t x274 = 0;
	volatile int32_t x275 = INT32_MIN;
	volatile int8_t x276 = -4;

	t43 = (x273*((x274*x275)%x276));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x281 = 0U;
	volatile uint64_t x282 = 6427381387LLU;
	static int16_t x283 = -1;
	int8_t x284 = 31;

	t44 = (x281*((x282*x283)%x284));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 3U;
	uint16_t x291 = UINT16_MAX;
	uint64_t x292 = 11603680LLU;
	uint64_t t45 = 250045127800LLU;

	t45 = (x289*((x290*x291)%x292));

	if (t45 != 844412045033475LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	static volatile int8_t x296 = -2;
	int32_t t46 = INT32_MIN;

	t46 = (x293*((x294*x295)%x296));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x305 = -1;
	int32_t x306 = 2697058;
	uint8_t x307 = 0U;
	int64_t x308 = INT64_MIN;
	int64_t t47 = -6794LL;

	t47 = (x305*((x306*x307)%x308));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x326 = 1;
	int16_t x327 = -13;
	int64_t x328 = INT64_MIN;
	int64_t t48 = 93LL;

	t48 = (x325*((x326*x327)%x328));

	if (t48 != 21645LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x329 = -1;
	uint64_t x330 = 10025581759LLU;
	uint32_t x331 = 12U;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t49 = 6LLU;

	t49 = (x329*((x330*x331)%x332));

	if (t49 != 18446744073709495318LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x333 = INT32_MIN;
	static volatile int32_t x336 = INT32_MIN;
	int64_t t50 = 0LL;

	t50 = (x333*((x334*x335)%x336));

	if (t50 != 824342981610831872LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x337 = INT8_MAX;
	volatile uint32_t x338 = 0U;
	static int16_t x339 = INT16_MAX;
	volatile int8_t x340 = -1;
	uint32_t t51 = 188611U;

	t51 = (x337*((x338*x339)%x340));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = 5797615LLU;
	int32_t x347 = -1;
	uint64_t t52 = 13848794LLU;

	t52 = (x345*((x346*x347)%x348));

	if (t52 != 18446743799573739008LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x349 = INT16_MAX;
	static volatile int16_t x350 = INT16_MAX;
	uint8_t x351 = 21U;
	int16_t x352 = INT16_MIN;
	int32_t t53 = -49149;

	t53 = (x349*((x350*x351)%x352));

	if (t53 != 1073020949) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 2001411856U;
	volatile uint16_t x355 = 42U;
	static uint64_t x356 = 1764LLU;
	volatile uint64_t t54 = 313547831331037389LLU;

	t54 = (x353*((x354*x355)%x356));

	if (t54 != 72088500LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 15U;
	int8_t x359 = -5;
	volatile int64_t t55 = -247112133407605360LL;

	t55 = (x357*((x358*x359)%x360));

	if (t55 != -322122547125LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x361 = 1U;
	uint64_t x362 = UINT64_MAX;
	volatile uint32_t x363 = 625U;
	int32_t x364 = INT32_MAX;
	uint64_t t56 = 1LLU;

	t56 = (x361*((x362*x363)%x364));

	if (t56 != 2147483026LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x378 = INT16_MIN;
	uint64_t t57 = 52LLU;

	t57 = (x377*((x378*x379)%x380));

	if (t57 != 8232008906876059648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x381 = -2;
	int64_t x383 = -1LL;
	static int16_t x384 = INT16_MIN;
	int64_t t58 = 202207594LL;

	t58 = (x381*((x382*x383)%x384));

	if (t58 != 65534LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x385 = -116659232LL;
	static volatile int32_t x386 = -1;
	volatile int8_t x387 = INT8_MIN;
	volatile int32_t x388 = INT32_MIN;
	int64_t t59 = 131463754870LL;

	t59 = (x385*((x386*x387)%x388));

	if (t59 != -14932381696LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x389 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = 906416982U;
	uint32_t t60 = 4U;

	t60 = (x389*((x390*x391)%x392));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x397 = 16139LLU;
	int8_t x398 = 0;
	static uint16_t x400 = 68U;

	t61 = (x397*((x398*x399)%x400));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = 5;
	int32_t x404 = -1;
	static volatile uint32_t t62 = 7937U;

	t62 = (x401*((x402*x403)%x404));

	if (t62 != 4294803461U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x409 = 47;
	int16_t x410 = 451;
	int16_t x412 = INT16_MIN;
	static int32_t t63 = -1;

	t63 = (x409*((x410*x411)%x412));

	if (t63 != 1518899) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x413 = 3U;
	int8_t x414 = 1;
	int64_t x415 = INT64_MIN;

	t64 = (x413*((x414*x415)%x416));

	if (t64 != -3LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x417 = INT64_MAX;
	uint64_t x419 = 938989592983LLU;
	int64_t x420 = 1LL;
	uint64_t t65 = 300650LLU;

	t65 = (x417*((x418*x419)%x420));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x422 = 777;
	volatile int32_t x424 = INT32_MIN;
	uint32_t t66 = 1329985U;

	t66 = (x421*((x422*x423)%x424));

	if (t66 != 2341101U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x425 = 44U;
	volatile int16_t x426 = INT16_MIN;
	volatile int8_t x427 = INT8_MIN;
	static uint16_t x428 = 4570U;
	static volatile uint32_t t67 = 1879U;

	t67 = (x425*((x426*x427)%x428));

	if (t67 != 159016U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x429 = UINT64_MAX;
	static uint16_t x430 = 9645U;
	volatile int8_t x431 = -25;
	static volatile int16_t x432 = INT16_MAX;
	static uint64_t t68 = 18LLU;

	t68 = (x429*((x430*x431)%x432));

	if (t68 != 11756LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x433 = INT32_MIN;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = 15;
	uint32_t x436 = 30845U;
	volatile uint32_t t69 = 1101U;

	t69 = (x433*((x434*x435)%x436));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x437 = -7334;
	int16_t x438 = INT16_MIN;
	static int32_t x440 = 14284;
	int32_t t70 = -190761015;

	t70 = (x437*((x438*x439)%x440));

	if (t70 != 63101736) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x445 = INT8_MAX;
	int16_t x446 = 1153;
	volatile int8_t x447 = -5;
	uint8_t x448 = 83U;
	volatile int32_t t71 = -58471;

	t71 = (x445*((x446*x447)%x448));

	if (t71 != -4826) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x449 = -1;
	uint16_t x450 = 24U;
	uint16_t x451 = 9052U;
	int32_t x452 = -1;
	int32_t t72 = 3;

	t72 = (x449*((x450*x451)%x452));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x453 = -1LL;
	int16_t x454 = -1;
	int32_t x455 = -704187;

	t73 = (x453*((x454*x455)%x456));

	if (t73 != -3LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x461 = INT16_MIN;
	static int8_t x462 = INT8_MIN;
	volatile int8_t x463 = -1;
	static int64_t x464 = INT64_MIN;
	int64_t t74 = 5997134LL;

	t74 = (x461*((x462*x463)%x464));

	if (t74 != -4194304LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x465 = -584614;
	int16_t x467 = INT16_MAX;
	int16_t x468 = -1;
	uint32_t t75 = 1646111698U;

	t75 = (x465*((x466*x467)%x468));

	if (t75 != 1976177754U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x470 = -43;
	int8_t x472 = -1;
	int32_t t76 = 119;

	t76 = (x469*((x470*x471)%x472));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x473 = 6741U;
	int32_t x474 = -11;
	uint64_t x475 = UINT64_MAX;
	volatile uint32_t x476 = 47336U;
	uint64_t t77 = 75378796148001657LLU;

	t77 = (x473*((x474*x475)%x476));

	if (t77 != 74151LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x477 = -6980111842LL;
	int64_t x478 = -13510LL;
	uint16_t x479 = 2U;
	int8_t x480 = -1;
	volatile int64_t t78 = 91042013334901LL;

	t78 = (x477*((x478*x479)%x480));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x485 = 12;
	int8_t x488 = -1;
	int32_t t79 = 15;

	t79 = (x485*((x486*x487)%x488));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x489 = INT8_MIN;
	int8_t x490 = -10;
	static int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MIN;
	static int32_t t80 = -1110;

	t80 = (x489*((x490*x491)%x492));

	if (t80 != -163840) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x493 = 20978465;
	int64_t x494 = -41949297933LL;
	uint64_t t81 = 8409752LLU;

	t81 = (x493*((x494*x495)%x496));

	if (t81 != 69115488793293270LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x501 = 22695LL;
	int16_t x502 = INT16_MAX;
	volatile int8_t x503 = -1;
	uint16_t x504 = 9897U;
	volatile int64_t t82 = -1269817071LL;

	t82 = (x501*((x502*x503)%x504));

	if (t82 != -69809820LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x527 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	uint64_t t83 = 27765543673LLU;

	t83 = (x525*((x526*x527)%x528));

	if (t83 != 70368744144896LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x529 = 50944243U;
	uint16_t x530 = UINT16_MAX;
	volatile uint32_t t84 = 33156944U;

	t84 = (x529*((x530*x531)%x532));

	if (t84 != 2120015731U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x537 = INT16_MIN;
	int16_t x538 = 163;
	int16_t x539 = INT16_MAX;
	int64_t t85 = -222731LL;

	t85 = (x537*((x538*x539)%x540));

	if (t85 != -175014576128LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x541 = INT16_MIN;
	int8_t x543 = 9;

	t86 = (x541*((x542*x543)%x544));

	if (t86 != 262144U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	int16_t x555 = INT16_MAX;
	volatile int32_t t87 = 40855647;

	t87 = (x553*((x554*x555)%x556));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x557 = 14;
	volatile uint8_t x559 = 10U;
	static int8_t x560 = INT8_MAX;
	volatile int32_t t88 = 8;

	t88 = (x557*((x558*x559)%x560));

	if (t88 != -280) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x581 = INT8_MAX;
	volatile int32_t x582 = -1;
	static uint64_t x583 = UINT64_MAX;
	static int32_t x584 = 32550;
	static volatile uint64_t t89 = 57901LLU;

	t89 = (x581*((x582*x583)%x584));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x586 = -1;
	volatile uint32_t x587 = 118U;
	uint64_t x588 = 5LLU;
	volatile uint64_t t90 = 3836091245LLU;

	t90 = (x585*((x586*x587)%x588));

	if (t90 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x593 = 1252991963U;
	static uint64_t x594 = UINT64_MAX;
	uint32_t x595 = 114U;
	uint8_t x596 = 1U;
	uint64_t t91 = 1129988903875484022LLU;

	t91 = (x593*((x594*x595)%x596));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x597 = 121U;
	uint16_t x598 = UINT16_MAX;
	volatile int32_t t92 = 105145836;

	t92 = (x597*((x598*x599)%x600));

	if (t92 != -363) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x617 = 20;
	int16_t x618 = 30;
	int64_t x620 = INT64_MIN;
	int64_t t93 = -915442604636886322LL;

	t93 = (x617*((x618*x619)%x620));

	if (t93 != -600LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x626 = 0U;
	int64_t x627 = INT64_MIN;
	volatile int64_t t94 = 1485041LL;

	t94 = (x625*((x626*x627)%x628));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x641 = -1;
	uint8_t x642 = 5U;
	static int32_t x643 = -208;
	int32_t x644 = INT32_MIN;
	static volatile int32_t t95 = -1;

	t95 = (x641*((x642*x643)%x644));

	if (t95 != 1040) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x645 = -1;
	volatile uint32_t x646 = UINT32_MAX;
	uint16_t x647 = 2487U;
	uint32_t t96 = 2U;

	t96 = (x645*((x646*x647)%x648));

	if (t96 != 4294967287U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x649 = -1;
	static int8_t x650 = INT8_MIN;
	int16_t x652 = -906;
	static int32_t t97 = 6;

	t97 = (x649*((x650*x651)%x652));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x653 = 3573389767115980LLU;
	static volatile int8_t x654 = INT8_MIN;
	static volatile uint64_t x655 = 10351123463973LLU;
	uint16_t x656 = 8U;
	uint64_t t98 = 1338530858457181571LLU;

	t98 = (x653*((x654*x655)%x656));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x658 = UINT16_MAX;
	static int16_t x659 = -1;
	int16_t x660 = INT16_MIN;
	int32_t t99 = 125775;

	t99 = (x657*((x658*x659)%x660));

	if (t99 != 4194176) { NG(); } else { ; }
	
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

