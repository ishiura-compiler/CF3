#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
int16_t x4 = INT16_MIN;
int32_t x6 = -1;
int32_t x7 = INT32_MAX;
uint16_t x12 = 55U;
volatile uint32_t t2 = 255111U;
int16_t x25 = INT16_MAX;
static int64_t x31 = -1LL;
static volatile int32_t t5 = -27661459;
int32_t t6 = 499638;
uint32_t t7 = UINT32_MAX;
int16_t x83 = INT16_MAX;
volatile int64_t x97 = 12591957554799LL;
int32_t x118 = -30;
static int64_t x137 = INT64_MIN;
uint16_t x138 = UINT16_MAX;
int64_t t16 = INT64_MIN;
static volatile uint16_t x178 = 2U;
static uint64_t x189 = 469640LLU;
int8_t x191 = -1;
int32_t t20 = -136068051;
int16_t x209 = -1;
int8_t x233 = INT8_MIN;
static int8_t x235 = -1;
int8_t x244 = INT8_MIN;
int32_t x283 = 66469;
int64_t x330 = -36641LL;
static int16_t x365 = 9340;
static int16_t x379 = INT16_MIN;
static volatile uint32_t t33 = 11259973U;
static uint64_t x382 = UINT64_MAX;
static int8_t x419 = -1;
static volatile int32_t t38 = 1;
int8_t x453 = 0;
int32_t t39 = -203971572;
int16_t x494 = -2;
int64_t x495 = 3931LL;
int32_t x504 = INT32_MIN;
static volatile uint64_t t44 = 2175705LLU;
volatile int64_t x567 = 1922953888286916LL;
int64_t x568 = -1LL;
uint8_t x579 = 6U;
uint8_t x580 = 78U;
int16_t x604 = INT16_MIN;
static uint16_t x613 = 278U;
static int8_t x619 = INT8_MAX;
int32_t x628 = INT32_MAX;
int8_t x649 = INT8_MIN;
int32_t x652 = 1;
volatile uint8_t x658 = UINT8_MAX;
uint8_t x660 = 26U;
int8_t x661 = INT8_MIN;
volatile int32_t x664 = -640024;
int16_t x686 = -1;
volatile int64_t x687 = 67766766LL;
uint64_t t63 = 18713LLU;
volatile int64_t x694 = -1LL;
static volatile uint32_t x708 = 28365999U;
int32_t x715 = -1;
volatile int64_t t68 = -24307942468443639LL;
uint64_t x721 = 5310668346LLU;
int8_t x723 = -1;
uint64_t t69 = 31LLU;
int32_t x726 = 1799008;
uint8_t x743 = 20U;
uint8_t x774 = 2U;
int8_t x777 = -1;
static int32_t x779 = 108;
int64_t x780 = 509548994897LL;
volatile int64_t x782 = 67561044018619LL;
volatile int16_t x784 = INT16_MAX;
uint64_t x809 = UINT64_MAX;
volatile int32_t t79 = 30755835;
volatile int8_t x839 = INT8_MIN;
static int64_t x876 = 109LL;
volatile int64_t t83 = INT64_MIN;
int64_t t84 = INT64_MAX;
volatile uint64_t x885 = 942461683669370403LLU;
uint64_t t85 = 14782682152570LLU;
static int64_t x902 = INT64_MIN;
uint64_t x904 = UINT64_MAX;
int64_t t88 = INT64_MAX;
uint64_t x951 = 3296597890911012013LLU;
static volatile uint64_t x952 = UINT64_MAX;
int64_t x988 = INT64_MAX;
static int32_t t93 = 49;
int64_t x1018 = INT64_MAX;
static int32_t x1019 = -1;
volatile int32_t t95 = -10174735;
uint32_t x1028 = 392976U;


void f0(void) {
	uint16_t x1 = 5911U;
	volatile uint64_t x3 = 7379869LLU;
	static int32_t t0 = 4733;

	t0 = (x1/((x2*x3)<=x4));

	if (t0 != 5911) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x8 = -1;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x5/((x6*x7)<=x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 84967U;
	int32_t x10 = 0;
	uint32_t x11 = UINT32_MAX;

	t2 = (x9/((x10*x11)<=x12));

	if (t2 != 84967U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x26 = UINT32_MAX;
	volatile uint8_t x27 = 107U;
	static int16_t x28 = -1;
	volatile int32_t t3 = 4110055;

	t3 = (x25/((x26*x27)<=x28));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = 20U;
	int8_t x32 = -7;
	static volatile int32_t t4 = 3;

	t4 = (x29/((x30*x31)<=x32));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 2U;
	int32_t x34 = -1;
	static int16_t x35 = INT16_MAX;
	uint8_t x36 = 1U;

	t5 = (x33/((x34*x35)<=x36));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;

	t6 = (x37/((x38*x39)<=x40));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x45 = UINT32_MAX;
	volatile uint32_t x46 = 33495073U;
	static uint64_t x47 = 3104972LLU;
	volatile int64_t x48 = -1LL;

	t7 = (x45/((x46*x47)<=x48));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x73 = 11U;
	uint64_t x74 = UINT64_MAX;
	uint8_t x75 = 0U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t8 = 96876270;

	t8 = (x73/((x74*x75)<=x76));

	if (t8 != 11) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x81 = 29U;
	uint64_t x82 = UINT64_MAX;
	int16_t x84 = -1;
	volatile int32_t t9 = -167337;

	t9 = (x81/((x82*x83)<=x84));

	if (t9 != 29) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x85 = 37265LLU;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	volatile uint64_t t10 = 57978428936LLU;

	t10 = (x85/((x86*x87)<=x88));

	if (t10 != 37265LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x98 = -25552822685LL;
	volatile uint16_t x99 = 703U;
	int16_t x100 = 409;
	volatile int64_t t11 = 16741LL;

	t11 = (x97/((x98*x99)<=x100));

	if (t11 != 12591957554799LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x113 = INT8_MIN;
	static uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -1;
	volatile int32_t t12 = -6325;

	t12 = (x113/((x114*x115)<=x116));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x117 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x117/((x118*x119)<=x120));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x139 = 0U;
	uint16_t x140 = UINT16_MAX;
	static volatile int64_t t14 = INT64_MIN;

	t14 = (x137/((x138*x139)<=x140));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x161 = 12749LL;
	uint16_t x162 = 16841U;
	int16_t x163 = -8;
	static int8_t x164 = INT8_MAX;
	int64_t t15 = 265767320361LL;

	t15 = (x161/((x162*x163)<=x164));

	if (t15 != 12749LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -3685;
	volatile int32_t x175 = -1;
	uint64_t x176 = UINT64_MAX;

	t16 = (x173/((x174*x175)<=x176));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x177 = -157;
	uint8_t x179 = 1U;
	uint64_t x180 = UINT64_MAX;
	int32_t t17 = -1;

	t17 = (x177/((x178*x179)<=x180));

	if (t17 != -157) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x181/((x182*x183)<=x184));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x190 = 3;
	int16_t x192 = INT16_MAX;
	uint64_t t19 = 57LLU;

	t19 = (x189/((x190*x191)<=x192));

	if (t19 != 469640LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x197 = INT16_MAX;
	uint64_t x198 = 126571722485525167LLU;
	uint64_t x199 = 483426529456LLU;
	volatile int8_t x200 = INT8_MIN;

	t20 = (x197/((x198*x199)<=x200));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x210 = -17;
	int32_t x211 = 13;
	uint16_t x212 = 22685U;
	int32_t t21 = -4732408;

	t21 = (x209/((x210*x211)<=x212));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x222 = 10;
	int16_t x223 = 88;
	int16_t x224 = INT16_MAX;
	int32_t t22 = -41;

	t22 = (x221/((x222*x223)<=x224));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x234 = 6770U;
	static int16_t x236 = -1;
	volatile int32_t t23 = 17912847;

	t23 = (x233/((x234*x235)<=x236));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x241 = 17U;
	int32_t x242 = INT32_MAX;
	volatile int64_t x243 = -1998161LL;
	volatile int32_t t24 = 423161865;

	t24 = (x241/((x242*x243)<=x244));

	if (t24 != 17) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x253 = 208097LLU;
	volatile int16_t x254 = INT16_MAX;
	static int32_t x255 = -1;
	volatile int8_t x256 = -1;
	volatile uint64_t t25 = 560036526121344LLU;

	t25 = (x253/((x254*x255)<=x256));

	if (t25 != 208097LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x257 = -782130858109531579LL;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 37U;
	uint8_t x260 = 6U;
	int64_t t26 = 384669LL;

	t26 = (x257/((x258*x259)<=x260));

	if (t26 != -782130858109531579LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x261 = 761LLU;
	static volatile int16_t x262 = 1187;
	uint32_t x263 = 7097766U;
	static uint32_t x264 = UINT32_MAX;
	uint64_t t27 = 111341319LLU;

	t27 = (x261/((x262*x263)<=x264));

	if (t27 != 761LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 14U;
	uint32_t x284 = UINT32_MAX;
	int32_t t28 = -16927277;

	t28 = (x281/((x282*x283)<=x284));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x297 = UINT16_MAX;
	uint16_t x298 = 35U;
	uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 373281272LLU;
	volatile int32_t t29 = 252625;

	t29 = (x297/((x298*x299)<=x300));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x329 = 11U;
	volatile int16_t x331 = 1655;
	static int16_t x332 = -1;
	volatile int32_t t30 = -5133;

	t30 = (x329/((x330*x331)<=x332));

	if (t30 != 11) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	int32_t x336 = -1;
	int32_t t31 = -800892679;

	t31 = (x333/((x334*x335)<=x336));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x366 = 0U;
	int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t32 = -1051446;

	t32 = (x365/((x366*x367)<=x368));

	if (t32 != 9340) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x377 = 5590435U;
	int16_t x378 = INT16_MAX;
	volatile uint16_t x380 = 19U;

	t33 = (x377/((x378*x379)<=x380));

	if (t33 != 5590435U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x381 = 6;
	static int8_t x383 = -53;
	volatile uint8_t x384 = UINT8_MAX;
	static int32_t t34 = 34927;

	t34 = (x381/((x382*x383)<=x384));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x389 = INT16_MIN;
	volatile uint32_t x390 = 12424U;
	uint32_t x391 = 1910U;
	int64_t x392 = INT64_MAX;
	volatile int32_t t35 = -2;

	t35 = (x389/((x390*x391)<=x392));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x417 = 12842238207863LL;
	static volatile int64_t x418 = -1LL;
	volatile uint8_t x420 = UINT8_MAX;
	int64_t t36 = -7912154LL;

	t36 = (x417/((x418*x419)<=x420));

	if (t36 != 12842238207863LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x425 = INT8_MIN;
	volatile int32_t x426 = INT32_MIN;
	static uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t37 = -4;

	t37 = (x425/((x426*x427)<=x428));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x429 = INT8_MAX;
	uint64_t x430 = 227681LLU;
	int32_t x431 = -1;
	int32_t x432 = -1;

	t38 = (x429/((x430*x431)<=x432));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x454 = 9U;
	volatile int8_t x455 = INT8_MAX;
	int16_t x456 = INT16_MIN;

	t39 = (x453/((x454*x455)<=x456));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x469 = 0;
	static volatile uint32_t x470 = 8U;
	int8_t x471 = 3;
	uint16_t x472 = UINT16_MAX;
	int32_t t40 = -5186981;

	t40 = (x469/((x470*x471)<=x472));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x473 = 49;
	int64_t x474 = -1LL;
	int32_t x475 = -1;
	uint8_t x476 = 2U;
	int32_t t41 = -8601;

	t41 = (x473/((x474*x475)<=x476));

	if (t41 != 49) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x493 = INT16_MAX;
	volatile int8_t x496 = 1;
	int32_t t42 = -48873;

	t42 = (x493/((x494*x495)<=x496));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x501 = -3919590364753544LL;
	int16_t x502 = -298;
	uint64_t x503 = 195690685241LLU;
	int64_t t43 = -1930980244188777LL;

	t43 = (x501/((x502*x503)<=x504));

	if (t43 != -3919590364753544LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x525 = 9134231338171005751LLU;
	int64_t x526 = -4341509412LL;
	volatile uint16_t x527 = 11631U;
	volatile uint16_t x528 = 10U;

	t44 = (x525/((x526*x527)<=x528));

	if (t44 != 9134231338171005751LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	uint32_t x535 = 41391U;
	int8_t x536 = -1;
	int32_t t45 = 488112;

	t45 = (x533/((x534*x535)<=x536));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x565 = INT16_MIN;
	static int8_t x566 = INT8_MIN;
	int32_t t46 = 10107415;

	t46 = (x565/((x566*x567)<=x568));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x577 = 45U;
	uint8_t x578 = 0U;
	int32_t t47 = 0;

	t47 = (x577/((x578*x579)<=x580));

	if (t47 != 45) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x581 = INT64_MIN;
	uint16_t x582 = UINT16_MAX;
	int64_t x583 = -1265980LL;
	int64_t x584 = INT64_MAX;
	static volatile int64_t t48 = INT64_MIN;

	t48 = (x581/((x582*x583)<=x584));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x597 = -1LL;
	int16_t x598 = INT16_MIN;
	uint16_t x599 = 458U;
	int16_t x600 = -618;
	volatile int64_t t49 = 3205305409LL;

	t49 = (x597/((x598*x599)<=x600));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x601 = UINT16_MAX;
	static volatile uint16_t x602 = 0U;
	uint32_t x603 = UINT32_MAX;
	volatile int32_t t50 = -2846247;

	t50 = (x601/((x602*x603)<=x604));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x614 = UINT16_MAX;
	int64_t x615 = -1LL;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t51 = 1905424;

	t51 = (x613/((x614*x615)<=x616));

	if (t51 != 278) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x617 = INT32_MIN;
	volatile int8_t x618 = -1;
	int64_t x620 = INT64_MAX;
	int32_t t52 = INT32_MIN;

	t52 = (x617/((x618*x619)<=x620));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x625 = 3270;
	static volatile uint16_t x626 = 24349U;
	volatile uint16_t x627 = UINT16_MAX;
	volatile int32_t t53 = 132502115;

	t53 = (x625/((x626*x627)<=x628));

	if (t53 != 3270) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x629 = 2118241971U;
	uint16_t x630 = 10U;
	volatile int32_t x631 = -1;
	static int8_t x632 = INT8_MAX;
	static volatile uint32_t t54 = 14U;

	t54 = (x629/((x630*x631)<=x632));

	if (t54 != 2118241971U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x633 = INT32_MIN;
	static int32_t x634 = -1;
	int16_t x635 = 388;
	int64_t x636 = -1LL;
	static volatile int32_t t55 = INT32_MIN;

	t55 = (x633/((x634*x635)<=x636));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x637 = 13U;
	volatile int64_t x638 = -1LL;
	int32_t x639 = 0;
	uint8_t x640 = 1U;
	volatile uint32_t t56 = 3755U;

	t56 = (x637/((x638*x639)<=x640));

	if (t56 != 13U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x645 = 0;
	int32_t x646 = -1;
	int32_t x647 = 40321561;
	int64_t x648 = INT64_MAX;
	volatile int32_t t57 = -70;

	t57 = (x645/((x646*x647)<=x648));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x650 = UINT16_MAX;
	int64_t x651 = -110118LL;
	static volatile int32_t t58 = -794539;

	t58 = (x649/((x650*x651)<=x652));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x653 = UINT16_MAX;
	static volatile int16_t x654 = INT16_MIN;
	uint64_t x655 = UINT64_MAX;
	int32_t x656 = -1;
	static int32_t t59 = -10271;

	t59 = (x653/((x654*x655)<=x656));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x657 = UINT64_MAX;
	int16_t x659 = INT16_MIN;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (x657/((x658*x659)<=x660));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x662 = INT64_MIN;
	static uint64_t x663 = 11LLU;
	static volatile int32_t t61 = -113645;

	t61 = (x661/((x662*x663)<=x664));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x681 = 13256544U;
	int32_t x682 = 9;
	uint64_t x683 = 1LLU;
	int8_t x684 = INT8_MAX;
	volatile uint32_t t62 = 787U;

	t62 = (x681/((x682*x683)<=x684));

	if (t62 != 13256544U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x685 = 160765492114873LLU;
	static int16_t x688 = INT16_MAX;

	t63 = (x685/((x686*x687)<=x688));

	if (t63 != 160765492114873LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x693 = -1;
	static volatile int64_t x695 = 8916301048027817LL;
	static uint16_t x696 = 10U;
	int32_t t64 = -444230320;

	t64 = (x693/((x694*x695)<=x696));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x697 = 14099391U;
	volatile uint32_t x698 = 995177372U;
	volatile int64_t x699 = -1LL;
	int16_t x700 = -1;
	volatile uint32_t t65 = 304239U;

	t65 = (x697/((x698*x699)<=x700));

	if (t65 != 14099391U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x705 = INT32_MIN;
	int8_t x706 = 57;
	static int8_t x707 = INT8_MAX;
	int32_t t66 = INT32_MIN;

	t66 = (x705/((x706*x707)<=x708));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x709 = INT64_MAX;
	static volatile int64_t x710 = 1LL;
	static uint32_t x711 = 9325692U;
	static uint64_t x712 = UINT64_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (x709/((x710*x711)<=x712));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x713 = -1LL;
	int32_t x714 = INT32_MAX;
	uint32_t x716 = UINT32_MAX;

	t68 = (x713/((x714*x715)<=x716));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x722 = UINT64_MAX;
	volatile uint64_t x724 = UINT64_MAX;

	t69 = (x721/((x722*x723)<=x724));

	if (t69 != 5310668346LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x725 = UINT64_MAX;
	uint64_t x727 = 5554118181633LLU;
	int8_t x728 = -1;
	uint64_t t70 = UINT64_MAX;

	t70 = (x725/((x726*x727)<=x728));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x741 = INT8_MAX;
	uint8_t x742 = UINT8_MAX;
	volatile int64_t x744 = INT64_MAX;
	volatile int32_t t71 = 239361;

	t71 = (x741/((x742*x743)<=x744));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x745 = INT64_MAX;
	uint64_t x746 = UINT64_MAX;
	static int8_t x747 = INT8_MIN;
	static volatile int8_t x748 = -12;
	static volatile int64_t t72 = INT64_MAX;

	t72 = (x745/((x746*x747)<=x748));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x753 = INT8_MAX;
	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MAX;
	int32_t x756 = -1;
	int32_t t73 = 98683;

	t73 = (x753/((x754*x755)<=x756));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x773 = INT8_MIN;
	int16_t x775 = INT16_MIN;
	int8_t x776 = 7;
	int32_t t74 = -187;

	t74 = (x773/((x774*x775)<=x776));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x778 = 6U;
	int32_t t75 = 2491;

	t75 = (x777/((x778*x779)<=x780));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x781 = 3U;
	int8_t x783 = -2;
	volatile int32_t t76 = 11250650;

	t76 = (x781/((x782*x783)<=x784));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x797 = 144282086LL;
	int8_t x798 = 20;
	uint32_t x799 = 3515U;
	int16_t x800 = -30;
	int64_t t77 = 57232060641169972LL;

	t77 = (x797/((x798*x799)<=x800));

	if (t77 != 144282086LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x810 = INT8_MAX;
	int64_t x811 = -1LL;
	static volatile int16_t x812 = INT16_MAX;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (x809/((x810*x811)<=x812));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x821 = -1;
	static int8_t x822 = INT8_MIN;
	uint8_t x823 = 0U;
	static int32_t x824 = 849265;

	t79 = (x821/((x822*x823)<=x824));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x837 = 6;
	uint32_t x838 = UINT32_MAX;
	int32_t x840 = INT32_MIN;
	static volatile int32_t t80 = -31743831;

	t80 = (x837/((x838*x839)<=x840));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x853 = INT16_MAX;
	int16_t x854 = INT16_MIN;
	uint32_t x855 = UINT32_MAX;
	static int8_t x856 = -1;
	int32_t t81 = -2052281;

	t81 = (x853/((x854*x855)<=x856));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x857 = INT8_MAX;
	static volatile int64_t x858 = -106562140LL;
	static volatile uint16_t x859 = 22229U;
	uint32_t x860 = 687993U;
	int32_t t82 = -19272;

	t82 = (x857/((x858*x859)<=x860));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x873 = INT64_MIN;
	volatile int8_t x874 = 0;
	uint8_t x875 = 1U;

	t83 = (x873/((x874*x875)<=x876));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x881 = INT64_MAX;
	uint64_t x882 = 35558221594084812LLU;
	int32_t x883 = INT32_MIN;
	uint64_t x884 = UINT64_MAX;

	t84 = (x881/((x882*x883)<=x884));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x886 = 1U;
	int8_t x887 = -1;
	volatile uint8_t x888 = 1U;

	t85 = (x885/((x886*x887)<=x888));

	if (t85 != 942461683669370403LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x901 = INT16_MIN;
	volatile uint8_t x903 = 1U;
	static int32_t t86 = 134136370;

	t86 = (x901/((x902*x903)<=x904));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x905 = 49828640U;
	uint8_t x906 = 0U;
	uint64_t x907 = UINT64_MAX;
	static int32_t x908 = 906596;
	static uint32_t t87 = 43935430U;

	t87 = (x905/((x906*x907)<=x908));

	if (t87 != 49828640U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x925 = INT64_MAX;
	int16_t x926 = INT16_MIN;
	int8_t x927 = INT8_MAX;
	int16_t x928 = -1;

	t88 = (x925/((x926*x927)<=x928));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x949 = INT32_MIN;
	int32_t x950 = 21546771;
	int32_t t89 = INT32_MIN;

	t89 = (x949/((x950*x951)<=x952));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x957 = UINT16_MAX;
	int8_t x958 = -1;
	volatile int64_t x959 = INT64_MAX;
	volatile int16_t x960 = INT16_MIN;
	int32_t t90 = 17;

	t90 = (x957/((x958*x959)<=x960));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x965 = UINT16_MAX;
	volatile int8_t x966 = 44;
	int16_t x967 = 0;
	volatile int16_t x968 = INT16_MAX;
	static volatile int32_t t91 = 30;

	t91 = (x965/((x966*x967)<=x968));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x969 = -1;
	volatile uint16_t x970 = UINT16_MAX;
	uint64_t x971 = 1379313340743LLU;
	int32_t x972 = -1;
	int32_t t92 = 0;

	t92 = (x969/((x970*x971)<=x972));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x985 = 1162307;
	int64_t x986 = -615LL;
	static uint16_t x987 = UINT16_MAX;

	t93 = (x985/((x986*x987)<=x988));

	if (t93 != 1162307) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1009 = -1;
	uint64_t x1010 = 54LLU;
	int16_t x1011 = 0;
	int64_t x1012 = INT64_MIN;
	volatile int32_t t94 = -44547;

	t94 = (x1009/((x1010*x1011)<=x1012));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x1017 = INT8_MIN;
	int32_t x1020 = INT32_MIN;

	t95 = (x1017/((x1018*x1019)<=x1020));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1021 = INT16_MIN;
	volatile uint16_t x1022 = UINT16_MAX;
	int16_t x1023 = INT16_MIN;
	volatile int32_t x1024 = INT32_MAX;
	volatile int32_t t96 = -1;

	t96 = (x1021/((x1022*x1023)<=x1024));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x1025 = INT16_MAX;
	static int32_t x1026 = INT32_MIN;
	uint8_t x1027 = 0U;
	static volatile int32_t t97 = -22444803;

	t97 = (x1025/((x1026*x1027)<=x1028));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1033 = INT64_MIN;
	volatile uint64_t x1034 = 3958651092505563LLU;
	static uint32_t x1035 = 41028786U;
	int32_t x1036 = -300355970;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x1033/((x1034*x1035)<=x1036));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1037 = 13522765;
	int32_t x1038 = 0;
	uint64_t x1039 = UINT64_MAX;
	static uint16_t x1040 = 11U;
	int32_t t99 = 1053631904;

	t99 = (x1037/((x1038*x1039)<=x1040));

	if (t99 != 13522765) { NG(); } else { ; }
	
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

