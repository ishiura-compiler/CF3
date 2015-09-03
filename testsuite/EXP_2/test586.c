#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x15 = 283074919;
volatile int32_t t0 = 120218995;
volatile uint32_t x36 = 32171U;
uint16_t x45 = UINT16_MAX;
static uint8_t x48 = 2U;
uint64_t x53 = UINT64_MAX;
static int32_t x79 = -1;
static int16_t x88 = INT16_MIN;
int64_t x119 = INT64_MIN;
int16_t x120 = INT16_MIN;
volatile int32_t x122 = -1;
int16_t x128 = INT16_MIN;
int8_t x142 = INT8_MAX;
uint32_t x153 = 212U;
uint8_t x194 = 1U;
uint32_t x197 = UINT32_MAX;
uint16_t x205 = 240U;
int16_t x206 = INT16_MIN;
uint64_t t17 = 4384800281899169869LLU;
volatile int64_t x228 = 1047LL;
uint32_t x229 = 114139082U;
uint32_t x265 = 2873184U;
volatile int8_t x287 = INT8_MIN;
static volatile int64_t t23 = INT64_MAX;
uint64_t x350 = 3226008LLU;
int32_t x351 = -6;
volatile int32_t t25 = 2537;
uint64_t x353 = 63LLU;
static int16_t x354 = 1;
int32_t x387 = INT32_MIN;
static volatile int32_t t29 = 12221819;
uint64_t x472 = UINT64_MAX;
int8_t x479 = INT8_MAX;
int64_t x480 = -1LL;
static volatile int64_t t36 = -556264045775LL;
volatile uint64_t t37 = 2769241LLU;
uint8_t x510 = 61U;
int64_t x511 = INT64_MIN;
int8_t x512 = 10;
int64_t x516 = -232LL;
volatile uint8_t x525 = UINT8_MAX;
int8_t x527 = INT8_MAX;
volatile uint8_t x528 = UINT8_MAX;
uint8_t x535 = 47U;
uint32_t x536 = UINT32_MAX;
uint64_t x538 = 146937872LLU;
uint16_t x550 = 907U;
static volatile int8_t x562 = 1;
int64_t x571 = INT64_MAX;
int32_t t48 = -13;
uint64_t x605 = UINT64_MAX;
static volatile uint8_t x607 = UINT8_MAX;
volatile int32_t x608 = INT32_MIN;
int8_t x640 = -33;
int32_t x686 = -1;
uint32_t x688 = UINT32_MAX;
uint32_t t53 = 1877U;
uint8_t x722 = 10U;
int32_t x724 = INT32_MIN;
uint64_t x779 = 299LLU;
volatile uint32_t x786 = 3U;
static int8_t x787 = 38;
uint32_t x788 = 725376U;
int32_t t62 = -55073;
static uint8_t x833 = 6U;
int64_t t66 = -151LL;
int64_t x870 = INT64_MIN;
volatile uint64_t x871 = UINT64_MAX;
int8_t x895 = 5;
uint32_t x901 = 7797162U;
int64_t x904 = -3335LL;
int16_t x917 = 1;
int8_t x918 = INT8_MAX;
int32_t x951 = INT32_MIN;
static uint8_t x981 = 18U;
volatile int32_t t78 = 2754845;
int32_t x1001 = INT32_MAX;
int16_t x1003 = INT16_MIN;
static volatile uint32_t x1037 = UINT32_MAX;
volatile int8_t x1039 = INT8_MIN;
uint16_t x1040 = 7622U;
int64_t x1067 = INT64_MIN;
volatile uint16_t x1080 = 648U;
volatile int16_t x1112 = INT16_MIN;
uint16_t x1130 = 0U;
uint16_t x1137 = 29U;
int16_t x1144 = INT16_MIN;
volatile uint16_t x1151 = UINT16_MAX;
volatile int8_t x1152 = INT8_MAX;
static int8_t x1160 = INT8_MIN;
volatile int64_t t95 = -45292843LL;
uint16_t x1165 = 202U;
uint8_t x1221 = UINT8_MAX;
volatile int64_t x1224 = -1LL;
int64_t x1235 = INT64_MIN;
volatile int32_t t99 = -1985;


void f0(void) {
	int16_t x13 = 9650;
	uint32_t x14 = 1095U;
	uint8_t x16 = 38U;

	t0 = ((x13>>(x14/x15))+x16);

	if (t0 != 9688) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x33 = 48575500U;
	uint64_t x34 = 115678LLU;
	int16_t x35 = -1;
	uint32_t t1 = 0U;

	t1 = ((x33>>(x34/x35))+x36);

	if (t1 != 48607671U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t2 = -18776;

	t2 = ((x45>>(x46/x47))+x48);

	if (t2 != 65537) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t3 = 78405603LLU;

	t3 = ((x53>>(x54/x55))+x56);

	if (t3 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x61 = 5558U;
	uint8_t x62 = 1U;
	int64_t x63 = INT64_MAX;
	volatile int16_t x64 = 12797;
	static volatile uint32_t t4 = 0U;

	t4 = ((x61>>(x62/x63))+x64);

	if (t4 != 18355U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x77 = 8U;
	uint64_t x78 = 52854851LLU;
	int8_t x80 = INT8_MIN;
	int32_t t5 = -44429;

	t5 = ((x77>>(x78/x79))+x80);

	if (t5 != -120) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x85 = 2;
	int8_t x86 = INT8_MIN;
	volatile int32_t x87 = 881;
	volatile int32_t t6 = 90271265;

	t6 = ((x85>>(x86/x87))+x88);

	if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x97 = 103U;
	int16_t x98 = 11;
	static uint16_t x99 = UINT16_MAX;
	int16_t x100 = 11;
	uint32_t t7 = 5109U;

	t7 = ((x97>>(x98/x99))+x100);

	if (t7 != 114U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	static int64_t x104 = INT64_MIN;
	static int64_t t8 = -757LL;

	t8 = ((x101>>(x102/x103))+x104);

	if (t8 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x117 = 401LL;
	int64_t x118 = INT64_MIN;
	volatile int64_t t9 = 5773854186352379LL;

	t9 = ((x117>>(x118/x119))+x120);

	if (t9 != -32568LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x121 = UINT32_MAX;
	static int64_t x123 = INT64_MIN;
	static volatile uint64_t x124 = 105LLU;
	uint64_t t10 = 1521553636302584LLU;

	t10 = ((x121>>(x122/x123))+x124);

	if (t10 != 4294967400LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x125 = 2004LLU;
	uint64_t x126 = 1086825662563849569LLU;
	int64_t x127 = INT64_MAX;
	uint64_t t11 = 0LLU;

	t11 = ((x125>>(x126/x127))+x128);

	if (t11 != 18446744073709520852LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x141 = INT8_MAX;
	uint64_t x143 = UINT64_MAX;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t12 = 9;

	t12 = ((x141>>(x142/x143))+x144);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x154 = 14417LLU;
	int64_t x155 = -64953835812LL;
	int16_t x156 = -1;
	volatile uint32_t t13 = 769U;

	t13 = ((x153>>(x154/x155))+x156);

	if (t13 != 211U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x193 = UINT64_MAX;
	static int32_t x195 = INT32_MIN;
	int32_t x196 = 6965990;
	volatile uint64_t t14 = 94592LLU;

	t14 = ((x193>>(x194/x195))+x196);

	if (t14 != 6965989LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x198 = 0U;
	uint32_t x199 = 1336211U;
	int8_t x200 = INT8_MAX;
	uint32_t t15 = 3546731U;

	t15 = ((x197>>(x198/x199))+x200);

	if (t15 != 126U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x207 = INT16_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t16 = 157U;

	t16 = ((x205>>(x206/x207))+x208);

	if (t16 != 119U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x221 = 4568600495921936LLU;
	volatile uint8_t x222 = 2U;
	static volatile uint16_t x223 = 10U;
	uint16_t x224 = UINT16_MAX;

	t17 = ((x221>>(x222/x223))+x224);

	if (t17 != 4568600495987471LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x225 = UINT64_MAX;
	static int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MIN;
	uint64_t t18 = 44572591445LLU;

	t18 = ((x225>>(x226/x227))+x228);

	if (t18 != 9223372036854776854LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x230 = -458902;
	int16_t x231 = INT16_MIN;
	static uint16_t x232 = UINT16_MAX;
	uint32_t t19 = 7U;

	t19 = ((x229>>(x230/x231))+x232);

	if (t19 != 72501U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x257 = UINT64_MAX;
	static volatile int8_t x258 = -1;
	uint8_t x259 = 56U;
	int32_t x260 = 423268;
	volatile uint64_t t20 = 189155198809LLU;

	t20 = ((x257>>(x258/x259))+x260);

	if (t20 != 423267LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x266 = -1LL;
	int64_t x267 = INT64_MAX;
	int16_t x268 = -1;
	uint32_t t21 = 449221032U;

	t21 = ((x265>>(x266/x267))+x268);

	if (t21 != 2873183U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x277 = 152U;
	uint32_t x278 = 435385U;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int64_t t22 = -1953808486621573661LL;

	t22 = ((x277>>(x278/x279))+x280);

	if (t22 != -9223372036854775656LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x285 = INT8_MAX;
	volatile int16_t x286 = -1457;
	int64_t x288 = INT64_MAX;

	t23 = ((x285>>(x286/x287))+x288);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x337 = 40;
	static volatile uint8_t x338 = UINT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	static volatile int32_t t24 = 17071;

	t24 = ((x337>>(x338/x339))+x340);

	if (t24 != 32807) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x349 = 25;
	int8_t x352 = -1;

	t25 = ((x349>>(x350/x351))+x352);

	if (t25 != 24) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x355 = 231;
	volatile uint16_t x356 = 2912U;
	volatile uint64_t t26 = 268LLU;

	t26 = ((x353>>(x354/x355))+x356);

	if (t26 != 2975LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x365 = 38162037799LLU;
	int16_t x366 = -1;
	uint16_t x367 = 20350U;
	static uint64_t x368 = 223LLU;
	static volatile uint64_t t27 = 46665LLU;

	t27 = ((x365>>(x366/x367))+x368);

	if (t27 != 38162038022LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x381 = 1861U;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	static uint16_t x384 = UINT16_MAX;
	uint32_t t28 = 28U;

	t28 = ((x381>>(x382/x383))+x384);

	if (t28 != 67396U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x385 = 32U;
	int8_t x386 = -1;
	volatile int8_t x388 = INT8_MIN;

	t29 = ((x385>>(x386/x387))+x388);

	if (t29 != -96) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x425 = INT16_MAX;
	int16_t x426 = -72;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t30 = -1052;

	t30 = ((x425>>(x426/x427))+x428);

	if (t30 != 32639) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x429 = 184;
	static uint8_t x430 = UINT8_MAX;
	uint64_t x431 = UINT64_MAX;
	static uint16_t x432 = UINT16_MAX;
	int32_t t31 = -1;

	t31 = ((x429>>(x430/x431))+x432);

	if (t31 != 65719) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x433 = 13U;
	int8_t x434 = -25;
	int32_t x435 = -306895355;
	uint64_t x436 = 10LLU;
	uint64_t t32 = 81745LLU;

	t32 = ((x433>>(x434/x435))+x436);

	if (t32 != 23LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x465 = 769;
	uint8_t x466 = UINT8_MAX;
	static volatile int64_t x467 = -125771848093545LL;
	static int32_t x468 = -860253310;
	static int32_t t33 = -12736;

	t33 = ((x465>>(x466/x467))+x468);

	if (t33 != -860252541) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x469 = 1;
	volatile int8_t x470 = 8;
	static volatile int64_t x471 = INT64_MIN;
	volatile uint64_t t34 = 254778219100LLU;

	t34 = ((x469>>(x470/x471))+x472);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x473 = 30223067756LLU;
	volatile int32_t x474 = INT32_MIN;
	static uint64_t x475 = UINT64_MAX;
	int8_t x476 = 13;
	volatile uint64_t t35 = 4887457539LLU;

	t35 = ((x473>>(x474/x475))+x476);

	if (t35 != 30223067769LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x477 = 1;
	int8_t x478 = -3;

	t36 = ((x477>>(x478/x479))+x480);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x489 = 195194120094951LLU;
	int32_t x490 = 980319216;
	int32_t x491 = INT32_MAX;
	static int8_t x492 = INT8_MAX;

	t37 = ((x489>>(x490/x491))+x492);

	if (t37 != 195194120095078LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x509 = 1U;
	int32_t t38 = 183955;

	t38 = ((x509>>(x510/x511))+x512);

	if (t38 != 11) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x513 = INT16_MAX;
	uint32_t x514 = 1U;
	uint16_t x515 = 10U;
	volatile int64_t t39 = 272LL;

	t39 = ((x513>>(x514/x515))+x516);

	if (t39 != 32535LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x517 = 2U;
	static volatile uint16_t x518 = 2472U;
	int64_t x519 = -839853957LL;
	static int8_t x520 = INT8_MIN;
	volatile int32_t t40 = 2;

	t40 = ((x517>>(x518/x519))+x520);

	if (t40 != -126) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x526 = -1;
	int32_t t41 = -338284604;

	t41 = ((x525>>(x526/x527))+x528);

	if (t41 != 510) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x533 = 0U;
	int8_t x534 = -3;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = ((x533>>(x534/x535))+x536);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x537 = UINT64_MAX;
	static int32_t x539 = -87;
	volatile uint64_t x540 = 89039461202195LLU;
	static volatile uint64_t t43 = 279LLU;

	t43 = ((x537>>(x538/x539))+x540);

	if (t43 != 89039461202194LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x541 = 64037U;
	uint32_t x542 = 525885203U;
	int64_t x543 = INT64_MIN;
	uint64_t x544 = UINT64_MAX;
	static volatile uint64_t t44 = 38924LLU;

	t44 = ((x541>>(x542/x543))+x544);

	if (t44 != 64036LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x549 = UINT64_MAX;
	int64_t x551 = -1062355678142477515LL;
	int64_t x552 = 357657LL;
	static volatile uint64_t t45 = 70LLU;

	t45 = ((x549>>(x550/x551))+x552);

	if (t45 != 357656LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x561 = 1;
	uint8_t x563 = UINT8_MAX;
	int32_t x564 = -1;
	volatile int32_t t46 = 0;

	t46 = ((x561>>(x562/x563))+x564);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x569 = 225U;
	int8_t x570 = INT8_MIN;
	uint16_t x572 = 68U;
	int32_t t47 = -16161;

	t47 = ((x569>>(x570/x571))+x572);

	if (t47 != 293) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x589 = 34;
	volatile int64_t x590 = -1LL;
	int8_t x591 = INT8_MIN;
	volatile int16_t x592 = INT16_MIN;

	t48 = ((x589>>(x590/x591))+x592);

	if (t48 != -32734) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x606 = INT8_MAX;
	uint64_t t49 = 3621528717294550454LLU;

	t49 = ((x605>>(x606/x607))+x608);

	if (t49 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x609 = 8116815U;
	int32_t x610 = 0;
	int32_t x611 = 115;
	int64_t x612 = -48662028LL;
	volatile int64_t t50 = 2LL;

	t50 = ((x609>>(x610/x611))+x612);

	if (t50 != -40545213LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x617 = INT16_MAX;
	volatile int32_t x618 = INT32_MIN;
	static int64_t x619 = INT64_MAX;
	uint16_t x620 = 127U;
	int32_t t51 = -433;

	t51 = ((x617>>(x618/x619))+x620);

	if (t51 != 32894) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x637 = 225U;
	int32_t x638 = -1359;
	volatile int32_t x639 = 13658;
	static uint32_t t52 = 87U;

	t52 = ((x637>>(x638/x639))+x640);

	if (t52 != 192U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x685 = 7452U;
	int32_t x687 = INT32_MIN;

	t53 = ((x685>>(x686/x687))+x688);

	if (t53 != 7451U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x689 = 10U;
	uint8_t x690 = UINT8_MAX;
	uint8_t x691 = 11U;
	int64_t x692 = INT64_MIN;
	static volatile int64_t t54 = INT64_MIN;

	t54 = ((x689>>(x690/x691))+x692);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x697 = INT32_MAX;
	volatile uint16_t x698 = 15813U;
	uint32_t x699 = 10827578U;
	uint64_t x700 = UINT64_MAX;
	static uint64_t t55 = 122100959788818383LLU;

	t55 = ((x697>>(x698/x699))+x700);

	if (t55 != 2147483646LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x713 = 5U;
	volatile uint8_t x714 = 0U;
	int64_t x715 = -1LL;
	int32_t x716 = 96414;
	volatile int32_t t56 = 127794326;

	t56 = ((x713>>(x714/x715))+x716);

	if (t56 != 96419) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x721 = 2;
	uint8_t x723 = 117U;
	int32_t t57 = -1;

	t57 = ((x721>>(x722/x723))+x724);

	if (t57 != -2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x745 = UINT32_MAX;
	volatile uint32_t x746 = 120836U;
	int8_t x747 = -3;
	int8_t x748 = INT8_MAX;
	uint32_t t58 = 33771U;

	t58 = ((x745>>(x746/x747))+x748);

	if (t58 != 126U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x777 = INT16_MAX;
	int16_t x778 = 7;
	static int8_t x780 = INT8_MIN;
	volatile int32_t t59 = -12;

	t59 = ((x777>>(x778/x779))+x780);

	if (t59 != 32639) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x785 = UINT64_MAX;
	volatile uint64_t t60 = 5528401LLU;

	t60 = ((x785>>(x786/x787))+x788);

	if (t60 != 725375LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x789 = 1820202U;
	int8_t x790 = 0;
	uint16_t x791 = 1843U;
	int8_t x792 = -1;
	volatile uint32_t t61 = 77U;

	t61 = ((x789>>(x790/x791))+x792);

	if (t61 != 1820201U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x793 = 1137929;
	int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MAX;
	uint16_t x796 = 686U;

	t62 = ((x793>>(x794/x795))+x796);

	if (t62 != 1138615) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x805 = 10770U;
	int16_t x806 = -1;
	uint16_t x807 = UINT16_MAX;
	int16_t x808 = -1;
	int32_t t63 = 0;

	t63 = ((x805>>(x806/x807))+x808);

	if (t63 != 10769) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x813 = UINT64_MAX;
	volatile uint64_t x814 = 133045219673LLU;
	int16_t x815 = INT16_MIN;
	uint8_t x816 = 13U;
	uint64_t t64 = 86LLU;

	t64 = ((x813>>(x814/x815))+x816);

	if (t64 != 12LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x829 = 5U;
	int8_t x830 = INT8_MIN;
	static uint32_t x831 = 824153827U;
	int64_t x832 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = ((x829>>(x830/x831))+x832);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x834 = 755027740137257971LLU;
	static int16_t x835 = -867;
	int64_t x836 = INT64_MIN;

	t66 = ((x833>>(x834/x835))+x836);

	if (t66 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x845 = 71754652756693LL;
	volatile int8_t x846 = INT8_MIN;
	static volatile int8_t x847 = INT8_MIN;
	volatile int64_t x848 = -1LL;
	volatile int64_t t67 = -14818269433071956LL;

	t67 = ((x845>>(x846/x847))+x848);

	if (t67 != 35877326378345LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x849 = INT8_MAX;
	int8_t x850 = INT8_MAX;
	int32_t x851 = INT32_MIN;
	uint64_t x852 = UINT64_MAX;
	uint64_t t68 = 397728222678294LLU;

	t68 = ((x849>>(x850/x851))+x852);

	if (t68 != 126LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x869 = 278;
	volatile int8_t x872 = -1;
	int32_t t69 = -22664;

	t69 = ((x869>>(x870/x871))+x872);

	if (t69 != 277) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x893 = 12U;
	volatile int8_t x894 = INT8_MAX;
	int64_t x896 = INT64_MIN;
	static volatile int64_t t70 = INT64_MIN;

	t70 = ((x893>>(x894/x895))+x896);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x902 = -1;
	int32_t x903 = -6903;
	int64_t t71 = -439662LL;

	t71 = ((x901>>(x902/x903))+x904);

	if (t71 != 7793827LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x905 = UINT16_MAX;
	uint64_t x906 = UINT64_MAX;
	int32_t x907 = -604112;
	static int32_t x908 = -1;
	int32_t t72 = -1227819;

	t72 = ((x905>>(x906/x907))+x908);

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x919 = INT32_MAX;
	int16_t x920 = -149;
	int32_t t73 = 671;

	t73 = ((x917>>(x918/x919))+x920);

	if (t73 != -148) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x921 = 2U;
	int32_t x922 = -3;
	int64_t x923 = INT64_MAX;
	int32_t x924 = INT32_MIN;
	volatile int32_t t74 = 0;

	t74 = ((x921>>(x922/x923))+x924);

	if (t74 != -2147483646) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x929 = 5162;
	int64_t x930 = -1LL;
	int32_t x931 = INT32_MIN;
	int8_t x932 = INT8_MIN;
	volatile int32_t t75 = 354;

	t75 = ((x929>>(x930/x931))+x932);

	if (t75 != 5034) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x949 = 0;
	uint8_t x950 = 12U;
	uint64_t x952 = 30618577186LLU;
	static volatile uint64_t t76 = 21LLU;

	t76 = ((x949>>(x950/x951))+x952);

	if (t76 != 30618577186LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x961 = INT64_MAX;
	int16_t x962 = -1;
	static volatile int64_t x963 = 6LL;
	int64_t x964 = INT64_MIN;
	int64_t t77 = -134889888LL;

	t77 = ((x961>>(x962/x963))+x964);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x982 = 164736U;
	int64_t x983 = INT64_MAX;
	int32_t x984 = -408735;

	t78 = ((x981>>(x982/x983))+x984);

	if (t78 != -408717) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x989 = INT8_MAX;
	uint64_t x990 = 14324326822365LLU;
	int32_t x991 = -1458105;
	volatile uint16_t x992 = 137U;
	volatile int32_t t79 = 24163350;

	t79 = ((x989>>(x990/x991))+x992);

	if (t79 != 264) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x1002 = UINT8_MAX;
	static int32_t x1004 = INT32_MIN;
	volatile int32_t t80 = 216957181;

	t80 = ((x1001>>(x1002/x1003))+x1004);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1013 = 37973U;
	int64_t x1014 = -1LL;
	int32_t x1015 = INT32_MAX;
	int64_t x1016 = -1LL;
	int64_t t81 = -8151600LL;

	t81 = ((x1013>>(x1014/x1015))+x1016);

	if (t81 != 37972LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1038 = INT8_MIN;
	uint32_t t82 = 9U;

	t82 = ((x1037>>(x1038/x1039))+x1040);

	if (t82 != 2147491269U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x1049 = UINT16_MAX;
	int8_t x1050 = -43;
	int64_t x1051 = INT64_MAX;
	volatile int8_t x1052 = INT8_MIN;
	volatile int32_t t83 = -777;

	t83 = ((x1049>>(x1050/x1051))+x1052);

	if (t83 != 65407) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x1065 = 13290442U;
	uint8_t x1066 = 0U;
	uint8_t x1068 = 0U;
	volatile uint32_t t84 = 816U;

	t84 = ((x1065>>(x1066/x1067))+x1068);

	if (t84 != 13290442U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1077 = 1U;
	int16_t x1078 = -1;
	uint8_t x1079 = 23U;
	int32_t t85 = -986503344;

	t85 = ((x1077>>(x1078/x1079))+x1080);

	if (t85 != 649) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x1081 = 317157U;
	int8_t x1082 = INT8_MIN;
	int16_t x1083 = INT16_MIN;
	uint8_t x1084 = 1U;
	uint32_t t86 = 7U;

	t86 = ((x1081>>(x1082/x1083))+x1084);

	if (t86 != 317158U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1085 = 186427830014342873LLU;
	int32_t x1086 = -1;
	int64_t x1087 = INT64_MAX;
	int16_t x1088 = -1;
	uint64_t t87 = 7806335LLU;

	t87 = ((x1085>>(x1086/x1087))+x1088);

	if (t87 != 186427830014342872LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x1093 = 17U;
	volatile int64_t x1094 = -1LL;
	uint32_t x1095 = UINT32_MAX;
	static volatile int16_t x1096 = -1;
	volatile int32_t t88 = -7;

	t88 = ((x1093>>(x1094/x1095))+x1096);

	if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1109 = 16U;
	static uint16_t x1110 = UINT16_MAX;
	static int16_t x1111 = 8450;
	volatile int32_t t89 = 3654;

	t89 = ((x1109>>(x1110/x1111))+x1112);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1129 = 61477151051258118LLU;
	int8_t x1131 = INT8_MAX;
	int8_t x1132 = INT8_MAX;
	uint64_t t90 = 57113520924679LLU;

	t90 = ((x1129>>(x1130/x1131))+x1132);

	if (t90 != 61477151051258245LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1138 = -1;
	int8_t x1139 = INT8_MAX;
	volatile int16_t x1140 = -1011;
	int32_t t91 = -236175616;

	t91 = ((x1137>>(x1138/x1139))+x1140);

	if (t91 != -982) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1141 = 25U;
	volatile int32_t x1142 = -1;
	uint8_t x1143 = 3U;
	volatile int32_t t92 = 44521674;

	t92 = ((x1141>>(x1142/x1143))+x1144);

	if (t92 != -32743) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1145 = INT32_MAX;
	uint16_t x1146 = 5U;
	static int8_t x1147 = INT8_MIN;
	uint32_t x1148 = UINT32_MAX;
	uint32_t t93 = 36U;

	t93 = ((x1145>>(x1146/x1147))+x1148);

	if (t93 != 2147483646U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x1149 = 0;
	volatile int16_t x1150 = 2;
	int32_t t94 = 820367591;

	t94 = ((x1149>>(x1150/x1151))+x1152);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1157 = 480994389974509LL;
	uint64_t x1158 = 2850812LLU;
	uint16_t x1159 = UINT16_MAX;

	t95 = ((x1157>>(x1158/x1159))+x1160);

	if (t95 != -74LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1166 = 11696LL;
	static uint32_t x1167 = 237579062U;
	uint8_t x1168 = 47U;
	int32_t t96 = -127557;

	t96 = ((x1165>>(x1166/x1167))+x1168);

	if (t96 != 249) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x1217 = INT16_MAX;
	static int16_t x1218 = -1;
	static volatile int32_t x1219 = -147;
	uint16_t x1220 = 1192U;
	volatile int32_t t97 = -2294;

	t97 = ((x1217>>(x1218/x1219))+x1220);

	if (t97 != 33959) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1222 = INT8_MAX;
	static int64_t x1223 = INT64_MAX;
	int64_t t98 = -47147LL;

	t98 = ((x1221>>(x1222/x1223))+x1224);

	if (t98 != 254LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1233 = 6315;
	int16_t x1234 = -1;
	volatile int32_t x1236 = INT32_MIN;

	t99 = ((x1233>>(x1234/x1235))+x1236);

	if (t99 != -2147477333) { NG(); } else { ; }
	
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

