#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = 7U;
uint32_t x17 = UINT32_MAX;
int32_t t2 = 29992405;
static int16_t x22 = INT16_MIN;
int32_t t3 = -2339;
int8_t x25 = INT8_MIN;
volatile int64_t x56 = INT64_MIN;
int16_t x57 = 1818;
uint8_t x61 = 60U;
int16_t x68 = INT16_MIN;
int64_t x90 = -1LL;
volatile int16_t x92 = 6;
uint32_t x119 = 27661U;
int32_t t12 = 13;
uint8_t x122 = 7U;
uint16_t x123 = 7U;
int32_t x124 = INT32_MIN;
volatile int32_t t13 = 983886;
static uint16_t x129 = 428U;
uint64_t x130 = UINT64_MAX;
int16_t x132 = -1;
uint8_t x163 = 2U;
volatile int64_t x173 = INT64_MIN;
static volatile int8_t x175 = INT8_MIN;
volatile int32_t t16 = -3036163;
static int32_t x185 = INT32_MIN;
int64_t x191 = INT64_MIN;
int64_t x192 = INT64_MAX;
int8_t x202 = INT8_MAX;
uint8_t x203 = 3U;
static volatile int32_t t19 = 169460701;
int32_t x205 = 1;
uint32_t x210 = 423220U;
uint16_t x211 = 2U;
uint16_t x215 = UINT16_MAX;
static volatile int8_t x222 = -35;
uint8_t x257 = 3U;
int32_t x259 = INT32_MIN;
volatile int32_t x271 = INT32_MIN;
volatile uint32_t x290 = 143U;
static int16_t x300 = 9;
int32_t t29 = 41598797;
int32_t x319 = INT32_MIN;
int16_t x321 = -1;
static int32_t x330 = INT32_MAX;
static int32_t t32 = 1;
int8_t x338 = -1;
int64_t x339 = -1LL;
static int64_t x365 = INT64_MAX;
int64_t x390 = -15674626LL;
int16_t x400 = INT16_MIN;
int32_t x433 = -1;
uint16_t x442 = UINT16_MAX;
uint32_t x446 = 14120802U;
int16_t x459 = INT16_MAX;
int64_t x531 = INT64_MAX;
int64_t x539 = -1LL;
volatile int8_t x540 = 10;
int32_t t48 = -6;
int16_t x546 = 92;
volatile int32_t t49 = 1;
int8_t x578 = INT8_MIN;
int32_t t53 = 961;
int8_t x629 = INT8_MIN;
volatile int8_t x630 = -1;
int8_t x631 = INT8_MIN;
static uint16_t x658 = 431U;
volatile uint32_t x661 = UINT32_MAX;
int16_t x662 = -1;
volatile int32_t t62 = 0;
uint32_t x704 = UINT32_MAX;
volatile int32_t t67 = 0;
int64_t x749 = INT64_MIN;
int32_t t69 = 440202;
static int16_t x758 = INT16_MIN;
int32_t t70 = 12762;
int32_t t71 = 1546481;
static int8_t x807 = INT8_MIN;
int32_t t74 = -3829492;
static int32_t x869 = INT32_MAX;
int32_t t77 = -87076;
volatile int32_t t79 = -21801723;
int32_t t80 = 126468;
int8_t x898 = -1;
static volatile int16_t x939 = -1;
static uint8_t x945 = 0U;
int32_t x947 = -1;
volatile int8_t x948 = 16;
static volatile int64_t x956 = INT64_MIN;
int32_t t89 = -151;
static volatile int64_t x982 = 1LL;
uint32_t x1010 = 0U;
volatile int32_t t93 = 232473066;
volatile int32_t t94 = 99412948;
int32_t x1047 = INT32_MAX;
int64_t x1053 = INT64_MAX;
uint64_t x1054 = UINT64_MAX;
int16_t x1067 = INT16_MIN;
int32_t t98 = -40661344;
static uint8_t x1095 = 3U;


void f0(void) {
	volatile int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int8_t x8 = 12;
	int32_t t0 = 1;

	t0 = ((x5<=x6)<<(x7&x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = 27;
	uint32_t x14 = 6175076U;
	uint64_t x15 = 450460920107LLU;
	int64_t x16 = INT64_MIN;
	static int32_t t1 = -163073656;

	t1 = ((x13<=x14)<<(x15&x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x18 = INT32_MIN;
	volatile int32_t x19 = INT32_MIN;
	static int32_t x20 = 275;

	t2 = ((x17<=x18)<<(x19&x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -326;
	int32_t x23 = -64;
	volatile int8_t x24 = 1;

	t3 = ((x21<=x22)<<(x23&x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x26 = 98859986050454LLU;
	volatile int8_t x27 = INT8_MAX;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t4 = 353;

	t4 = ((x25<=x26)<<(x27&x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t5 = -3131;

	t5 = ((x45<=x46)<<(x47&x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = 2;
	static uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MAX;
	int32_t t6 = -16730;

	t6 = ((x53<=x54)<<(x55&x56));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t7 = -8403165;

	t7 = ((x57<=x58)<<(x59&x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MAX;
	int8_t x64 = 7;
	volatile int32_t t8 = -80;

	t8 = ((x61<=x62)<<(x63&x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = INT32_MAX;
	uint64_t x67 = 4067LLU;
	volatile int32_t t9 = 187222;

	t9 = ((x65<=x66)<<(x67&x68));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x85 = 28;
	int16_t x86 = INT16_MIN;
	volatile int16_t x87 = 21;
	volatile int16_t x88 = -1;
	volatile int32_t t10 = 1;

	t10 = ((x85<=x86)<<(x87&x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x89 = 1U;
	int64_t x91 = INT64_MIN;
	volatile int32_t t11 = -3162448;

	t11 = ((x89<=x90)<<(x91&x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile int32_t x118 = -1;
	int8_t x120 = INT8_MAX;

	t12 = ((x117<=x118)<<(x119&x120));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = INT64_MIN;

	t13 = ((x121<=x122)<<(x123&x124));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x131 = 10U;
	static volatile int32_t t14 = -118;

	t14 = ((x129<=x130)<<(x131&x132));

	if (t14 != 1024) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x161 = INT32_MAX;
	int32_t x162 = -1;
	int32_t x164 = 3942726;
	int32_t t15 = -105351576;

	t15 = ((x161<=x162)<<(x163&x164));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x174 = -1;
	static int16_t x176 = 1;

	t16 = ((x173<=x174)<<(x175&x176));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x186 = UINT64_MAX;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t17 = -622194026;

	t17 = ((x185<=x186)<<(x187&x188));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MIN;
	volatile int32_t t18 = 2;

	t18 = ((x189<=x190)<<(x191&x192));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x201 = INT32_MIN;
	int8_t x204 = -1;

	t19 = ((x201<=x202)<<(x203&x204));

	if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x206 = 28U;
	volatile uint8_t x207 = 20U;
	int16_t x208 = -1;
	int32_t t20 = 43341259;

	t20 = ((x205<=x206)<<(x207&x208));

	if (t20 != 1048576) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x209 = 7240336504LLU;
	uint64_t x212 = 233066696472LLU;
	int32_t t21 = -4017;

	t21 = ((x209<=x210)<<(x211&x212));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = -1;
	static uint32_t x216 = 2U;
	volatile int32_t t22 = 64152473;

	t22 = ((x213<=x214)<<(x215&x216));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x221 = 0U;
	uint16_t x223 = 10U;
	int64_t x224 = -24LL;
	volatile int32_t t23 = -392477;

	t23 = ((x221<=x222)<<(x223&x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x241 = 6790969;
	static uint64_t x242 = 2066LLU;
	int8_t x243 = 1;
	static int16_t x244 = -1;
	int32_t t24 = -18;

	t24 = ((x241<=x242)<<(x243&x244));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x258 = INT16_MIN;
	volatile uint8_t x260 = 2U;
	int32_t t25 = 474;

	t25 = ((x257<=x258)<<(x259&x260));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x261 = 200848769LL;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 398U;
	int64_t x264 = INT64_MIN;
	int32_t t26 = -1;

	t26 = ((x261<=x262)<<(x263&x264));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MAX;
	int32_t x272 = INT32_MAX;
	int32_t t27 = 205719970;

	t27 = ((x269<=x270)<<(x271&x272));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x289 = -1LL;
	int16_t x291 = -1;
	static uint16_t x292 = 2U;
	static volatile int32_t t28 = 231333;

	t28 = ((x289<=x290)<<(x291&x292));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	volatile int8_t x299 = -1;

	t29 = ((x297<=x298)<<(x299&x300));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MAX;
	uint8_t x320 = 39U;
	int32_t t30 = 555521;

	t30 = ((x317<=x318)<<(x319&x320));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 0U;
	int16_t x324 = 0;
	int32_t t31 = 866652;

	t31 = ((x321<=x322)<<(x323&x324));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x329 = -164486724;
	int16_t x331 = INT16_MIN;
	int16_t x332 = 4;

	t32 = ((x329<=x330)<<(x331&x332));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	static volatile uint64_t x335 = 12967201654LLU;
	int64_t x336 = INT64_MIN;
	volatile int32_t t33 = -176510079;

	t33 = ((x333<=x334)<<(x335&x336));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x337 = -3762318148LL;
	int16_t x340 = 19;
	static int32_t t34 = 184;

	t34 = ((x337<=x338)<<(x339&x340));

	if (t34 != 524288) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 476607LLU;
	int32_t t35 = 5303;

	t35 = ((x353<=x354)<<(x355&x356));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x366 = INT64_MIN;
	int8_t x367 = 1;
	static int64_t x368 = INT64_MAX;
	volatile int32_t t36 = 166817;

	t36 = ((x365<=x366)<<(x367&x368));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x389 = -14LL;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 2910U;
	int32_t t37 = -3910;

	t37 = ((x389<=x390)<<(x391&x392));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x397 = 0U;
	uint16_t x398 = 0U;
	volatile int8_t x399 = 8;
	int32_t t38 = 5;

	t38 = ((x397<=x398)<<(x399&x400));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x434 = 53;
	static int64_t x435 = -1937002679810589LL;
	uint16_t x436 = 5U;
	volatile int32_t t39 = -204645;

	t39 = ((x433<=x434)<<(x435&x436));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x437 = 4U;
	static uint64_t x438 = 2422935932304840951LLU;
	int32_t x439 = 70963042;
	uint8_t x440 = 1U;
	volatile int32_t t40 = 7668;

	t40 = ((x437<=x438)<<(x439&x440));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x441 = INT8_MIN;
	static int64_t x443 = 3666LL;
	int16_t x444 = INT16_MIN;
	int32_t t41 = -172477;

	t41 = ((x441<=x442)<<(x443&x444));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x445 = UINT64_MAX;
	uint8_t x447 = 37U;
	int32_t x448 = INT32_MIN;
	int32_t t42 = -8;

	t42 = ((x445<=x446)<<(x447&x448));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x457 = -1;
	int8_t x458 = INT8_MAX;
	volatile uint8_t x460 = 1U;
	int32_t t43 = 16275328;

	t43 = ((x457<=x458)<<(x459&x460));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x505 = INT8_MIN;
	static int8_t x506 = -2;
	int8_t x507 = -1;
	uint8_t x508 = 3U;
	int32_t t44 = -5403342;

	t44 = ((x505<=x506)<<(x507&x508));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x517 = INT64_MIN;
	volatile int64_t x518 = INT64_MIN;
	static uint64_t x519 = 49LLU;
	volatile uint32_t x520 = 3543U;
	volatile int32_t t45 = 4;

	t45 = ((x517<=x518)<<(x519&x520));

	if (t45 != 131072) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x529 = 6307170595627965LL;
	volatile int64_t x530 = 58558280LL;
	int64_t x532 = INT64_MIN;
	static int32_t t46 = 16089260;

	t46 = ((x529<=x530)<<(x531&x532));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x537 = INT64_MAX;
	int64_t x538 = INT64_MAX;
	int32_t t47 = -1;

	t47 = ((x537<=x538)<<(x539&x540));

	if (t47 != 1024) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x541 = -1;
	static int64_t x542 = INT64_MIN;
	int16_t x543 = 1;
	uint32_t x544 = 12587U;

	t48 = ((x541<=x542)<<(x543&x544));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x545 = -1;
	int64_t x547 = INT64_MIN;
	int8_t x548 = 15;

	t49 = ((x545<=x546)<<(x547&x548));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x553 = INT32_MIN;
	uint64_t x554 = UINT64_MAX;
	static int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;
	int32_t t50 = -2;

	t50 = ((x553<=x554)<<(x555&x556));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x565 = INT64_MIN;
	static volatile uint32_t x566 = UINT32_MAX;
	volatile uint8_t x567 = 25U;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t51 = 133917;

	t51 = ((x565<=x566)<<(x567&x568));

	if (t51 != 33554432) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x573 = UINT32_MAX;
	static int8_t x574 = -1;
	static int8_t x575 = INT8_MIN;
	uint16_t x576 = 0U;
	int32_t t52 = -1167552;

	t52 = ((x573<=x574)<<(x575&x576));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x577 = INT64_MAX;
	int8_t x579 = 15;
	uint16_t x580 = 13721U;

	t53 = ((x577<=x578)<<(x579&x580));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x585 = UINT64_MAX;
	int8_t x586 = INT8_MIN;
	uint32_t x587 = UINT32_MAX;
	uint8_t x588 = 0U;
	volatile int32_t t54 = -303045;

	t54 = ((x585<=x586)<<(x587&x588));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x593 = 26U;
	int8_t x594 = 16;
	int64_t x595 = INT64_MIN;
	volatile uint16_t x596 = 377U;
	static volatile int32_t t55 = 46790;

	t55 = ((x593<=x594)<<(x595&x596));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x601 = INT16_MIN;
	static uint64_t x602 = 28273LLU;
	uint8_t x603 = 93U;
	uint8_t x604 = 23U;
	int32_t t56 = 505298954;

	t56 = ((x601<=x602)<<(x603&x604));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x632 = 26U;
	volatile int32_t t57 = 45493;

	t57 = ((x629<=x630)<<(x631&x632));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x637 = 967U;
	int64_t x638 = 16173966LL;
	int64_t x639 = -14494920LL;
	volatile int8_t x640 = 1;
	int32_t t58 = 424912;

	t58 = ((x637<=x638)<<(x639&x640));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x653 = 37;
	int8_t x654 = INT8_MAX;
	static uint8_t x655 = 25U;
	static uint32_t x656 = UINT32_MAX;
	static volatile int32_t t59 = -888;

	t59 = ((x653<=x654)<<(x655&x656));

	if (t59 != 33554432) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x657 = INT64_MIN;
	static int8_t x659 = 0;
	int16_t x660 = INT16_MIN;
	int32_t t60 = 48;

	t60 = ((x657<=x658)<<(x659&x660));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x663 = 144528693LLU;
	int64_t x664 = INT64_MIN;
	volatile int32_t t61 = 153686849;

	t61 = ((x661<=x662)<<(x663&x664));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x665 = -1;
	volatile uint8_t x666 = UINT8_MAX;
	int16_t x667 = INT16_MIN;
	int16_t x668 = 1741;

	t62 = ((x665<=x666)<<(x667&x668));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x673 = INT32_MIN;
	int32_t x674 = 14;
	uint32_t x675 = 1625U;
	int16_t x676 = INT16_MIN;
	int32_t t63 = -574207;

	t63 = ((x673<=x674)<<(x675&x676));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x701 = -1;
	int32_t x702 = INT32_MIN;
	int16_t x703 = 0;
	volatile int32_t t64 = -50240777;

	t64 = ((x701<=x702)<<(x703&x704));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x705 = 8410U;
	uint8_t x706 = UINT8_MAX;
	int64_t x707 = INT64_MIN;
	volatile uint64_t x708 = 122015229LLU;
	int32_t t65 = -519013;

	t65 = ((x705<=x706)<<(x707&x708));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x709 = INT32_MIN;
	int16_t x710 = -1;
	static int16_t x711 = INT16_MIN;
	static uint32_t x712 = 5358U;
	int32_t t66 = 3;

	t66 = ((x709<=x710)<<(x711&x712));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x737 = -1;
	uint16_t x738 = UINT16_MAX;
	int32_t x739 = 181;
	uint8_t x740 = 30U;

	t67 = ((x737<=x738)<<(x739&x740));

	if (t67 != 1048576) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x741 = INT8_MIN;
	volatile uint16_t x742 = UINT16_MAX;
	volatile int32_t x743 = INT32_MAX;
	int32_t x744 = INT32_MIN;
	int32_t t68 = -15478;

	t68 = ((x741<=x742)<<(x743&x744));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x750 = 92U;
	static volatile uint32_t x751 = 1U;
	int8_t x752 = INT8_MIN;

	t69 = ((x749<=x750)<<(x751&x752));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x757 = INT64_MIN;
	uint16_t x759 = 3U;
	int32_t x760 = -1;

	t70 = ((x757<=x758)<<(x759&x760));

	if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x785 = -1;
	volatile int32_t x786 = INT32_MIN;
	int64_t x787 = 174422959784284LL;
	int64_t x788 = INT64_MIN;

	t71 = ((x785<=x786)<<(x787&x788));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x805 = 31063U;
	int16_t x806 = INT16_MAX;
	uint16_t x808 = 3U;
	int32_t t72 = 24916;

	t72 = ((x805<=x806)<<(x807&x808));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x817 = INT16_MIN;
	int8_t x818 = -23;
	static uint32_t x819 = 66432668U;
	int16_t x820 = 87;
	static volatile int32_t t73 = -5;

	t73 = ((x817<=x818)<<(x819&x820));

	if (t73 != 1048576) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x821 = UINT16_MAX;
	volatile uint8_t x822 = 63U;
	uint64_t x823 = 19412928087494717LLU;
	uint8_t x824 = 0U;

	t74 = ((x821<=x822)<<(x823&x824));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x837 = 38U;
	int64_t x838 = -6215LL;
	int64_t x839 = 420322LL;
	int16_t x840 = 12;
	volatile int32_t t75 = 1285438;

	t75 = ((x837<=x838)<<(x839&x840));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x845 = -6;
	static uint64_t x846 = 42916755239806229LLU;
	volatile int16_t x847 = INT16_MAX;
	static int32_t x848 = INT32_MIN;
	volatile int32_t t76 = -318154;

	t76 = ((x845<=x846)<<(x847&x848));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x870 = INT16_MIN;
	volatile int32_t x871 = -1;
	uint8_t x872 = 1U;

	t77 = ((x869<=x870)<<(x871&x872));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x877 = INT16_MIN;
	static int16_t x878 = INT16_MAX;
	int32_t x879 = INT32_MIN;
	volatile uint8_t x880 = 0U;
	int32_t t78 = 10179719;

	t78 = ((x877<=x878)<<(x879&x880));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x881 = -106235518988LL;
	uint16_t x882 = UINT16_MAX;
	static uint16_t x883 = 12610U;
	uint64_t x884 = 557LLU;

	t79 = ((x881<=x882)<<(x883&x884));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x889 = 3U;
	int64_t x890 = 1749683976971856065LL;
	uint8_t x891 = 1U;
	uint64_t x892 = 466660370407250031LLU;

	t80 = ((x889<=x890)<<(x891&x892));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x893 = 75608U;
	static int8_t x894 = -1;
	int64_t x895 = INT64_MIN;
	uint64_t x896 = 58580636240154905LLU;
	volatile int32_t t81 = 1;

	t81 = ((x893<=x894)<<(x895&x896));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x897 = INT16_MIN;
	uint8_t x899 = 54U;
	int16_t x900 = -4032;
	volatile int32_t t82 = 50783;

	t82 = ((x897<=x898)<<(x899&x900));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x913 = UINT8_MAX;
	int32_t x914 = -3;
	int32_t x915 = 3;
	uint8_t x916 = 1U;
	int32_t t83 = -45328;

	t83 = ((x913<=x914)<<(x915&x916));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x917 = INT64_MAX;
	uint64_t x918 = 3545892LLU;
	volatile int64_t x919 = INT64_MIN;
	int64_t x920 = 454766781LL;
	static int32_t t84 = -45;

	t84 = ((x917<=x918)<<(x919&x920));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x925 = -1;
	uint16_t x926 = 12U;
	int16_t x927 = 4;
	int8_t x928 = INT8_MIN;
	int32_t t85 = 475327963;

	t85 = ((x925<=x926)<<(x927&x928));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x937 = INT16_MIN;
	static int64_t x938 = -1LL;
	int64_t x940 = 0LL;
	static volatile int32_t t86 = 9;

	t86 = ((x937<=x938)<<(x939&x940));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x946 = UINT8_MAX;
	volatile int32_t t87 = -867737;

	t87 = ((x945<=x946)<<(x947&x948));

	if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x949 = -5;
	uint32_t x950 = 2781U;
	uint32_t x951 = 11U;
	uint16_t x952 = 153U;
	int32_t t88 = 897560;

	t88 = ((x949<=x950)<<(x951&x952));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x953 = -42;
	static int16_t x954 = INT16_MIN;
	int64_t x955 = 117902134726982701LL;

	t89 = ((x953<=x954)<<(x955&x956));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x961 = UINT32_MAX;
	volatile uint8_t x962 = UINT8_MAX;
	static int8_t x963 = 1;
	static uint8_t x964 = UINT8_MAX;
	static volatile int32_t t90 = -32371;

	t90 = ((x961<=x962)<<(x963&x964));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x981 = UINT64_MAX;
	static uint32_t x983 = 511U;
	static int16_t x984 = INT16_MIN;
	static int32_t t91 = 59742037;

	t91 = ((x981<=x982)<<(x983&x984));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x985 = INT8_MIN;
	uint32_t x986 = 26886U;
	static int8_t x987 = INT8_MIN;
	volatile uint16_t x988 = 25U;
	volatile int32_t t92 = -6;

	t92 = ((x985<=x986)<<(x987&x988));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1009 = UINT8_MAX;
	int64_t x1011 = INT64_MIN;
	int64_t x1012 = 1314LL;

	t93 = ((x1009<=x1010)<<(x1011&x1012));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x1017 = INT64_MIN;
	uint16_t x1018 = UINT16_MAX;
	uint32_t x1019 = 1520U;
	static volatile uint8_t x1020 = 15U;

	t94 = ((x1017<=x1018)<<(x1019&x1020));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1045 = -1;
	uint8_t x1046 = 80U;
	int64_t x1048 = INT64_MIN;
	volatile int32_t t95 = 86799;

	t95 = ((x1045<=x1046)<<(x1047&x1048));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1055 = 1U;
	static uint8_t x1056 = 0U;
	volatile int32_t t96 = -1051225;

	t96 = ((x1053<=x1054)<<(x1055&x1056));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x1065 = INT32_MIN;
	int16_t x1066 = INT16_MAX;
	uint16_t x1068 = 102U;
	int32_t t97 = 23661088;

	t97 = ((x1065<=x1066)<<(x1067&x1068));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x1081 = UINT16_MAX;
	volatile uint8_t x1082 = 1U;
	int32_t x1083 = 101567219;
	uint32_t x1084 = 1U;

	t98 = ((x1081<=x1082)<<(x1083&x1084));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1093 = UINT64_MAX;
	int16_t x1094 = 159;
	int64_t x1096 = 4093195360873449455LL;
	int32_t t99 = -182461304;

	t99 = ((x1093<=x1094)<<(x1095&x1096));

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

