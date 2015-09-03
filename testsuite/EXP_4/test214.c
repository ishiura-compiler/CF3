#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = 0;
uint64_t t4 = UINT64_MAX;
uint64_t x67 = UINT64_MAX;
volatile uint8_t x90 = 3U;
int8_t x111 = INT8_MIN;
int32_t t11 = 7;
static uint16_t x134 = 210U;
volatile int64_t x136 = INT64_MIN;
uint16_t x139 = 16163U;
static int32_t t13 = 11714;
int64_t x171 = 2441LL;
static int32_t t15 = 367;
int16_t x179 = 4900;
int16_t x199 = INT16_MIN;
int32_t t20 = 2;
volatile int32_t t21 = 215268260;
int8_t x247 = -1;
static uint8_t x254 = UINT8_MAX;
volatile uint64_t x311 = UINT64_MAX;
int64_t x358 = 3986826945LL;
uint32_t x389 = UINT32_MAX;
int64_t x431 = -539717648LL;
uint8_t x449 = 72U;
volatile int64_t x477 = INT64_MAX;
static int16_t x531 = INT16_MIN;
volatile int16_t x538 = INT16_MIN;
volatile int32_t t42 = -1319827;
static int32_t x562 = INT32_MAX;
volatile int16_t x564 = -14649;
int32_t t45 = 3;
volatile uint64_t x592 = 27957384357455LLU;
int8_t x596 = -3;
int32_t t48 = 15086;
static int32_t t49 = -6530023;
int64_t x665 = INT64_MAX;
static volatile int32_t x668 = 22138911;
volatile int64_t t53 = INT64_MAX;
uint32_t x686 = 16497120U;
volatile int32_t t56 = -95940;
int32_t x727 = 29458303;
uint32_t x729 = 242958933U;
int64_t x732 = INT64_MAX;
int64_t x742 = -214416LL;
int64_t x779 = -28062423359191492LL;
volatile uint64_t t65 = 7376465LLU;
int64_t x799 = -35996960LL;
volatile uint64_t t66 = 6063445LLU;
uint8_t x808 = UINT8_MAX;
int32_t t67 = INT32_MAX;
uint64_t t69 = UINT64_MAX;
uint8_t x854 = 118U;
int64_t x856 = -117LL;
int8_t x870 = -1;
int8_t x871 = -1;
static volatile int32_t t71 = -5454296;
volatile int32_t x873 = 1411;
int32_t x874 = INT32_MIN;
uint64_t x897 = 40LLU;
volatile uint16_t x900 = UINT16_MAX;
int32_t x922 = 2;
static uint16_t x952 = 225U;
volatile uint32_t t77 = 64601U;
int8_t x957 = 3;
volatile int16_t x967 = INT16_MIN;
static volatile int16_t x984 = INT16_MIN;
volatile int64_t x990 = -1LL;
uint32_t x1030 = 19359U;
uint64_t x1031 = 1288566825LLU;
volatile int64_t t83 = -3408688275702571672LL;
uint8_t x1039 = UINT8_MAX;
static int16_t x1040 = -36;
uint8_t x1093 = UINT8_MAX;
int8_t x1100 = 8;
int64_t x1105 = 312786LL;
static uint8_t x1113 = 2U;
int8_t x1115 = INT8_MIN;
volatile int32_t t90 = -1018219998;
int32_t t91 = 530375;
int64_t x1136 = -64916662LL;
static uint32_t t92 = 310395U;
volatile int16_t x1153 = 741;
uint64_t x1163 = 293087213239505830LLU;
uint32_t x1164 = 784319U;
volatile int64_t x1173 = INT64_MAX;
static int64_t x1209 = INT64_MAX;
volatile int64_t t99 = INT64_MAX;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	uint32_t x2 = UINT32_MAX;
	volatile int32_t x3 = INT32_MAX;
	uint16_t x4 = 1521U;
	static int32_t t0 = 1;

	t0 = (x1<<(x2/(x3-x4)));

	if (t0 != 262140) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 3;
	uint16_t x10 = 7U;
	uint16_t x11 = 1009U;
	uint8_t x12 = 7U;
	int32_t t1 = 14827249;

	t1 = (x9<<(x10/(x11-x12)));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 99574U;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -1;
	volatile int64_t x20 = INT64_MAX;
	uint32_t t2 = 13324U;

	t2 = (x17<<(x18/(x19-x20)));

	if (t2 != 99574U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = 1;
	static int8_t x38 = -1;
	volatile uint64_t x39 = 539654317050LLU;
	volatile uint64_t x40 = 689574368989LLU;

	t3 = (x37<<(x38/(x39-x40)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = 0U;

	t4 = (x49<<(x50/(x51-x52)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x65 = 15U;
	int8_t x66 = 51;
	uint8_t x68 = 3U;
	volatile int32_t t5 = 66110520;

	t5 = (x65<<(x66/(x67-x68)));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile int8_t x74 = 18;
	volatile int64_t x75 = -123380768880LL;
	int64_t x76 = -1973318548864088LL;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x73<<(x74/(x75-x76)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x89 = 343U;
	static int8_t x91 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t7 = -21946;

	t7 = (x89<<(x90/(x91-x92)));

	if (t7 != 343) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = 17U;
	int32_t x103 = -1;
	static int64_t x104 = -263424LL;
	int32_t t8 = 370;

	t8 = (x101<<(x102/(x103-x104)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x105 = 503692884;
	volatile int16_t x106 = 2;
	volatile uint64_t x107 = 82946411767431LLU;
	volatile uint32_t x108 = 21988U;
	int32_t t9 = -33249914;

	t9 = (x105<<(x106/(x107-x108)));

	if (t9 != 503692884) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x109 = 1229793LLU;
	int32_t x110 = -1;
	uint8_t x112 = 15U;
	uint64_t t10 = 33541307432942700LLU;

	t10 = (x109<<(x110/(x111-x112)));

	if (t10 != 1229793LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x113 = 7U;
	volatile uint32_t x114 = 33U;
	int8_t x115 = 2;
	volatile int8_t x116 = 0;

	t11 = (x113<<(x114/(x115-x116)));

	if (t11 != 458752) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x133 = INT64_MAX;
	static volatile int8_t x135 = -1;
	int64_t t12 = INT64_MAX;

	t12 = (x133<<(x134/(x135-x136)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = 4LLU;
	volatile int16_t x140 = INT16_MAX;

	t13 = (x137<<(x138/(x139-x140)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x153 = UINT64_MAX;
	volatile uint8_t x154 = 1U;
	static int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = 63U;
	uint64_t t14 = UINT64_MAX;

	t14 = (x153<<(x154/(x155-x156)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x169 = UINT16_MAX;
	static int64_t x170 = -14326LL;
	volatile int64_t x172 = INT64_MAX;

	t15 = (x169<<(x170/(x171-x172)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x173 = 70972554LLU;
	static int64_t x174 = INT64_MIN;
	uint32_t x175 = 256751U;
	volatile int64_t x176 = INT64_MAX;
	volatile uint64_t t16 = 56034499803453LLU;

	t16 = (x173<<(x174/(x175-x176)));

	if (t16 != 141945108LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x177 = 120395LLU;
	volatile int16_t x178 = -1;
	int32_t x180 = INT32_MAX;
	static volatile uint64_t t17 = 1092738242167894531LLU;

	t17 = (x177<<(x178/(x179-x180)));

	if (t17 != 120395LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 2699U;
	int64_t x188 = INT64_MAX;
	static int32_t t18 = 180;

	t18 = (x185<<(x186/(x187-x188)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x189 = 93987;
	static volatile uint64_t x190 = 4205539778452325856LLU;
	volatile uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 46868965630628976LLU;
	volatile int32_t t19 = 1845196;

	t19 = (x189<<(x190/(x191-x192)));

	if (t19 != 93987) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x197 = 190;
	int8_t x198 = -15;
	uint32_t x200 = 15568U;

	t20 = (x197<<(x198/(x199-x200)));

	if (t20 != 380) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x225 = INT8_MAX;
	int8_t x226 = INT8_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	volatile int16_t x228 = INT16_MIN;

	t21 = (x225<<(x226/(x227-x228)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x229 = UINT64_MAX;
	static int64_t x230 = 1LL;
	uint32_t x231 = 7U;
	uint8_t x232 = 97U;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x229<<(x230/(x231-x232)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x245 = 3;
	uint32_t x246 = 24696U;
	int64_t x248 = INT64_MIN;
	volatile int32_t t23 = 3236918;

	t23 = (x245<<(x246/(x247-x248)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x253 = 0U;
	int16_t x255 = -13464;
	static uint8_t x256 = 6U;
	static volatile int32_t t24 = 186;

	t24 = (x253<<(x254/(x255-x256)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x261 = 1;
	int8_t x262 = -19;
	static volatile int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;
	volatile int32_t t25 = 14119;

	t25 = (x261<<(x262/(x263-x264)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x294 = INT16_MIN;
	volatile uint64_t x295 = 619398804588784098LLU;
	int8_t x296 = -1;
	uint64_t t26 = 698843536291127LLU;

	t26 = (x293<<(x294/(x295-x296)));

	if (t26 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x297 = 28U;
	int8_t x298 = INT8_MIN;
	volatile int32_t x299 = 0;
	static int32_t x300 = -814;
	volatile uint32_t t27 = 154U;

	t27 = (x297<<(x298/(x299-x300)));

	if (t27 != 28U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MAX;
	int16_t x312 = 1379;
	volatile int32_t t28 = -1;

	t28 = (x309<<(x310/(x311-x312)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x313 = 1U;
	static uint8_t x314 = UINT8_MAX;
	uint32_t x315 = 22319783U;
	static int16_t x316 = -1;
	uint32_t t29 = 1061358U;

	t29 = (x313<<(x314/(x315-x316)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x329 = 1;
	volatile int64_t x330 = -58497647LL;
	int64_t x331 = -293493658315858002LL;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t30 = 9;

	t30 = (x329<<(x330/(x331-x332)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x357 = 18U;
	uint8_t x359 = 0U;
	static volatile uint64_t x360 = 1889490LLU;
	int32_t t31 = 313208;

	t31 = (x357<<(x358/(x359-x360)));

	if (t31 != 18) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x385 = 1;
	volatile uint64_t x386 = 1LLU;
	int32_t x387 = -1;
	int64_t x388 = 4LL;
	volatile int32_t t32 = 22;

	t32 = (x385<<(x386/(x387-x388)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x390 = 689U;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = -1LL;
	uint32_t t33 = UINT32_MAX;

	t33 = (x389<<(x390/(x391-x392)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x429 = 7060U;
	static int32_t x430 = 375644523;
	static int64_t x432 = INT64_MIN;
	static volatile int32_t t34 = -3740325;

	t34 = (x429<<(x430/(x431-x432)));

	if (t34 != 7060) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x450 = UINT16_MAX;
	static int16_t x451 = INT16_MAX;
	int64_t x452 = 647755778249018253LL;
	volatile int32_t t35 = 5398652;

	t35 = (x449<<(x450/(x451-x452)));

	if (t35 != 72) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x478 = -52;
	int8_t x479 = INT8_MIN;
	int32_t x480 = -1;
	int64_t t36 = INT64_MAX;

	t36 = (x477<<(x478/(x479-x480)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x489 = 6U;
	static int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MAX;
	uint32_t x492 = 1021923U;
	int32_t t37 = 2267791;

	t37 = (x489<<(x490/(x491-x492)));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x525 = 1769;
	uint16_t x526 = 15551U;
	static int8_t x527 = 1;
	uint64_t x528 = 8033478758816231257LLU;
	volatile int32_t t38 = 11774834;

	t38 = (x525<<(x526/(x527-x528)));

	if (t38 != 1769) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x529 = 5U;
	volatile uint32_t x530 = UINT32_MAX;
	static int16_t x532 = INT16_MAX;
	int32_t t39 = 373952026;

	t39 = (x529<<(x530/(x531-x532)));

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x533 = 829U;
	uint16_t x534 = 1U;
	volatile uint64_t x535 = UINT64_MAX;
	int64_t x536 = -43792LL;
	static volatile uint32_t t40 = 6U;

	t40 = (x533<<(x534/(x535-x536)));

	if (t40 != 829U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x537 = 1698408523U;
	volatile int8_t x539 = -1;
	int32_t x540 = INT32_MIN;
	uint32_t t41 = 85U;

	t41 = (x537<<(x538/(x539-x540)));

	if (t41 != 1698408523U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x549 = UINT8_MAX;
	static int32_t x550 = INT32_MIN;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MAX;

	t42 = (x549<<(x550/(x551-x552)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x561 = UINT32_MAX;
	int64_t x563 = -129633693756094669LL;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x561<<(x562/(x563-x564)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x565 = UINT32_MAX;
	volatile int8_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int32_t x568 = INT32_MAX;
	static uint32_t t44 = UINT32_MAX;

	t44 = (x565<<(x566/(x567-x568)));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x585 = 1U;
	static int64_t x586 = -1LL;
	int64_t x587 = 3LL;
	uint16_t x588 = UINT16_MAX;

	t45 = (x585<<(x586/(x587-x588)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x589 = UINT32_MAX;
	int32_t x590 = 3;
	int16_t x591 = -1;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x589<<(x590/(x591-x592)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x593 = UINT32_MAX;
	int64_t x594 = -1LL;
	volatile int64_t x595 = 93301LL;
	uint32_t t47 = UINT32_MAX;

	t47 = (x593<<(x594/(x595-x596)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x597 = 223;
	uint64_t x598 = 10419195310328LLU;
	uint64_t x599 = UINT64_MAX;
	uint16_t x600 = UINT16_MAX;

	t48 = (x597<<(x598/(x599-x600)));

	if (t48 != 223) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x617 = 285;
	uint32_t x618 = 140178098U;
	static int8_t x619 = INT8_MAX;
	static volatile int32_t x620 = INT32_MAX;

	t49 = (x617<<(x618/(x619-x620)));

	if (t49 != 285) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 165U;
	int16_t x627 = -119;
	int32_t x628 = INT32_MIN;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x625<<(x626/(x627-x628)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x633 = UINT32_MAX;
	static int64_t x634 = -1LL;
	uint8_t x635 = UINT8_MAX;
	static int16_t x636 = INT16_MIN;
	uint32_t t51 = UINT32_MAX;

	t51 = (x633<<(x634/(x635-x636)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x653 = INT32_MAX;
	uint16_t x654 = UINT16_MAX;
	static uint64_t x655 = 29305284923LLU;
	int8_t x656 = 1;
	static int32_t t52 = INT32_MAX;

	t52 = (x653<<(x654/(x655-x656)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x666 = UINT16_MAX;
	int8_t x667 = 0;

	t53 = (x665<<(x666/(x667-x668)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x669 = UINT8_MAX;
	int8_t x670 = -15;
	int8_t x671 = 15;
	int64_t x672 = INT64_MAX;
	volatile int32_t t54 = -420622693;

	t54 = (x669<<(x670/(x671-x672)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x677 = 1176986375U;
	volatile uint32_t x678 = 19091U;
	volatile int16_t x679 = INT16_MIN;
	uint64_t x680 = UINT64_MAX;
	uint32_t t55 = 557050821U;

	t55 = (x677<<(x678/(x679-x680)));

	if (t55 != 1176986375U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x685 = INT8_MAX;
	int64_t x687 = -1LL;
	static int32_t x688 = INT32_MIN;

	t56 = (x685<<(x686/(x687-x688)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x689 = INT16_MAX;
	static int64_t x690 = -1LL;
	static uint64_t x691 = UINT64_MAX;
	int16_t x692 = INT16_MAX;
	volatile int32_t t57 = -11857;

	t57 = (x689<<(x690/(x691-x692)));

	if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x693 = UINT8_MAX;
	static int64_t x694 = 697LL;
	static uint64_t x695 = 54085696156LLU;
	int64_t x696 = INT64_MIN;
	int32_t t58 = -1;

	t58 = (x693<<(x694/(x695-x696)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x721 = UINT8_MAX;
	int8_t x722 = -14;
	volatile int32_t x723 = INT32_MIN;
	static uint32_t x724 = 2382U;
	int32_t t59 = 6;

	t59 = (x721<<(x722/(x723-x724)));

	if (t59 != 1020) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x725 = 82U;
	volatile uint8_t x726 = 1U;
	int32_t x728 = INT32_MAX;
	volatile int32_t t60 = -9;

	t60 = (x725<<(x726/(x727-x728)));

	if (t60 != 82) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x730 = UINT64_MAX;
	int16_t x731 = INT16_MAX;
	uint32_t t61 = 287544371U;

	t61 = (x729<<(x730/(x731-x732)));

	if (t61 != 485917866U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x741 = UINT16_MAX;
	static uint64_t x743 = 122LLU;
	static uint32_t x744 = 723U;
	int32_t t62 = 1176;

	t62 = (x741<<(x742/(x743-x744)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x757 = 2U;
	int64_t x758 = -1LL;
	int16_t x759 = -1;
	uint64_t x760 = 88181365640649LLU;
	uint32_t t63 = 10600U;

	t63 = (x757<<(x758/(x759-x760)));

	if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x777 = INT32_MAX;
	static int16_t x778 = -1;
	int8_t x780 = 3;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x777<<(x778/(x779-x780)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x789 = 53509738070LLU;
	int32_t x790 = -1;
	uint64_t x791 = 5045782460LLU;
	int64_t x792 = INT64_MIN;

	t65 = (x789<<(x790/(x791-x792)));

	if (t65 != 107019476140LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x797 = 133317958204LLU;
	int32_t x798 = -146593742;
	static int32_t x800 = INT32_MIN;

	t66 = (x797<<(x798/(x799-x800)));

	if (t66 != 133317958204LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x805 = INT32_MAX;
	int8_t x806 = 24;
	int8_t x807 = 2;

	t67 = (x805<<(x806/(x807-x808)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x813 = 0;
	int32_t x814 = 238;
	volatile int32_t x815 = -1;
	uint64_t x816 = 190697268687758LLU;
	volatile int32_t t68 = 2;

	t68 = (x813<<(x814/(x815-x816)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x841 = UINT64_MAX;
	int8_t x842 = 43;
	int8_t x843 = -1;
	int16_t x844 = INT16_MIN;

	t69 = (x841<<(x842/(x843-x844)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x853 = 2769845U;
	uint64_t x855 = 15807914365LLU;
	uint32_t t70 = 0U;

	t70 = (x853<<(x854/(x855-x856)));

	if (t70 != 2769845U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x869 = UINT16_MAX;
	static uint32_t x872 = 20377219U;

	t71 = (x869<<(x870/(x871-x872)));

	if (t71 != 131070) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x875 = INT32_MIN;
	uint32_t x876 = 106432328U;
	int32_t t72 = -8030072;

	t72 = (x873<<(x874/(x875-x876)));

	if (t72 != 2822) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x881 = UINT64_MAX;
	static volatile uint8_t x882 = 6U;
	int64_t x883 = -14341593321LL;
	int8_t x884 = -6;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x881<<(x882/(x883-x884)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x898 = 38U;
	int16_t x899 = INT16_MAX;
	volatile uint64_t t74 = 13LLU;

	t74 = (x897<<(x898/(x899-x900)));

	if (t74 != 40LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x921 = UINT16_MAX;
	static int16_t x923 = INT16_MAX;
	uint64_t x924 = 11488003658195186LLU;
	static volatile int32_t t75 = 7006;

	t75 = (x921<<(x922/(x923-x924)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x945 = INT32_MAX;
	static uint16_t x946 = UINT16_MAX;
	int32_t x947 = INT32_MAX;
	int16_t x948 = INT16_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x945<<(x946/(x947-x948)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x949 = 1499U;
	static uint8_t x950 = 3U;
	int16_t x951 = 1;

	t77 = (x949<<(x950/(x951-x952)));

	if (t77 != 1499U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x958 = INT8_MAX;
	uint64_t x959 = UINT64_MAX;
	uint8_t x960 = 53U;
	int32_t t78 = 281839366;

	t78 = (x957<<(x958/(x959-x960)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x965 = 55LL;
	static int32_t x966 = -56105101;
	int32_t x968 = INT32_MIN;
	static volatile int64_t t79 = 61986241598LL;

	t79 = (x965<<(x966/(x967-x968)));

	if (t79 != 55LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x981 = 6607U;
	uint16_t x982 = UINT16_MAX;
	static int8_t x983 = INT8_MIN;
	int32_t t80 = 2;

	t80 = (x981<<(x982/(x983-x984)));

	if (t80 != 26428) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x989 = 0LLU;
	int16_t x991 = 56;
	volatile int8_t x992 = INT8_MIN;
	uint64_t t81 = 59350919394LLU;

	t81 = (x989<<(x990/(x991-x992)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x1025 = INT16_MAX;
	uint8_t x1026 = 0U;
	int64_t x1027 = -358LL;
	int8_t x1028 = -1;
	int32_t t82 = 0;

	t82 = (x1025<<(x1026/(x1027-x1028)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x1029 = 4313472353250930178LL;
	static volatile int8_t x1032 = INT8_MAX;

	t83 = (x1029<<(x1030/(x1031-x1032)));

	if (t83 != 4313472353250930178LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1037 = 7219U;
	uint8_t x1038 = 0U;
	uint32_t t84 = 93680U;

	t84 = (x1037<<(x1038/(x1039-x1040)));

	if (t84 != 7219U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x1049 = INT16_MAX;
	uint32_t x1050 = UINT32_MAX;
	int32_t x1051 = INT32_MAX;
	static uint32_t x1052 = 34985804U;
	volatile int32_t t85 = 11705;

	t85 = (x1049<<(x1050/(x1051-x1052)));

	if (t85 != 131068) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x1065 = 5465379649LL;
	static int16_t x1066 = -6;
	uint8_t x1067 = UINT8_MAX;
	static int64_t x1068 = INT64_MAX;
	int64_t t86 = -3450876997498926279LL;

	t86 = (x1065<<(x1066/(x1067-x1068)));

	if (t86 != 5465379649LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1094 = 14U;
	uint32_t x1095 = 62926446U;
	uint8_t x1096 = 27U;
	static volatile int32_t t87 = -44;

	t87 = (x1093<<(x1094/(x1095-x1096)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x1097 = 5331;
	static volatile int8_t x1098 = -1;
	static int8_t x1099 = INT8_MIN;
	int32_t t88 = -1;

	t88 = (x1097<<(x1098/(x1099-x1100)));

	if (t88 != 5331) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1106 = -1;
	volatile int16_t x1107 = INT16_MAX;
	int8_t x1108 = INT8_MIN;
	int64_t t89 = 495846035883LL;

	t89 = (x1105<<(x1106/(x1107-x1108)));

	if (t89 != 312786LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1114 = INT16_MIN;
	uint16_t x1116 = UINT16_MAX;

	t90 = (x1113<<(x1114/(x1115-x1116)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1121 = UINT16_MAX;
	uint16_t x1122 = 225U;
	volatile uint8_t x1123 = 15U;
	static int64_t x1124 = INT64_MAX;

	t91 = (x1121<<(x1122/(x1123-x1124)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x1133 = 270386U;
	uint32_t x1134 = 812644007U;
	int16_t x1135 = -15;

	t92 = (x1133<<(x1134/(x1135-x1136)));

	if (t92 != 1107501056U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1149 = 5919135;
	static uint8_t x1150 = UINT8_MAX;
	static volatile uint64_t x1151 = 1755872864LLU;
	int32_t x1152 = 80878;
	static int32_t t93 = 65752602;

	t93 = (x1149<<(x1150/(x1151-x1152)));

	if (t93 != 5919135) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1154 = INT8_MIN;
	int16_t x1155 = INT16_MAX;
	volatile uint8_t x1156 = 14U;
	int32_t t94 = -12;

	t94 = (x1153<<(x1154/(x1155-x1156)));

	if (t94 != 741) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1161 = 2031;
	int32_t x1162 = INT32_MAX;
	int32_t t95 = -68;

	t95 = (x1161<<(x1162/(x1163-x1164)));

	if (t95 != 2031) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1169 = UINT8_MAX;
	uint32_t x1170 = 630U;
	uint32_t x1171 = 43785438U;
	volatile int32_t x1172 = INT32_MAX;
	int32_t t96 = 5567;

	t96 = (x1169<<(x1170/(x1171-x1172)));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1174 = 0;
	static int16_t x1175 = -1;
	int8_t x1176 = -46;
	static volatile int64_t t97 = INT64_MAX;

	t97 = (x1173<<(x1174/(x1175-x1176)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x1181 = INT32_MAX;
	uint32_t x1182 = UINT32_MAX;
	int32_t x1183 = 1;
	static int64_t x1184 = INT64_MAX;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x1181<<(x1182/(x1183-x1184)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1210 = 541U;
	uint8_t x1211 = 5U;
	volatile int8_t x1212 = 55;

	t99 = (x1209<<(x1210/(x1211-x1212)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

