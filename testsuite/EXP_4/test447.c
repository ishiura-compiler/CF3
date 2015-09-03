#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = 51;
int8_t x30 = 1;
int32_t x57 = INT32_MIN;
uint8_t x60 = 40U;
volatile int32_t t3 = -48561;
volatile int32_t t6 = -4994625;
int8_t x120 = INT8_MIN;
volatile uint32_t x123 = UINT32_MAX;
int32_t x133 = INT32_MIN;
int8_t x136 = 15;
int8_t x147 = -1;
static volatile int32_t t11 = -2774;
int32_t x162 = -1;
volatile int8_t x164 = 0;
uint8_t x171 = UINT8_MAX;
volatile int32_t t14 = 4946;
static uint16_t x186 = 46U;
int32_t x188 = -66910;
int32_t t15 = -50048;
static uint16_t x192 = UINT16_MAX;
static volatile uint16_t x193 = 3U;
int16_t x194 = INT16_MAX;
uint8_t x221 = UINT8_MAX;
static int32_t t20 = -81733377;
int16_t x230 = INT16_MIN;
uint16_t x285 = UINT16_MAX;
uint32_t x295 = 67U;
int8_t x331 = -23;
int8_t x332 = -1;
int64_t x341 = 491392706783LL;
static int8_t x393 = INT8_MAX;
int16_t x417 = -56;
int32_t t34 = -640594585;
volatile int64_t x424 = -1LL;
volatile int16_t x432 = INT16_MAX;
static uint32_t x435 = 765U;
int16_t x437 = 2;
uint16_t x456 = 15831U;
static int16_t x469 = INT16_MIN;
uint32_t x473 = 1792804113U;
int32_t x479 = -139178;
volatile int64_t x502 = -48807246354578151LL;
uint32_t x516 = 91U;
static volatile int8_t x538 = -17;
uint8_t x551 = 10U;
static uint64_t x561 = 25LLU;
volatile uint64_t t51 = 6066793LLU;
static uint8_t x587 = 15U;
int32_t t54 = -768286601;
uint16_t x614 = 990U;
uint32_t x615 = 11U;
int8_t x619 = 1;
volatile int64_t x638 = -3762924200694018168LL;
int16_t x640 = 0;
volatile int32_t t60 = -35551405;
int64_t x646 = INT64_MIN;
int32_t t61 = -808;
int32_t t63 = -1;
volatile uint64_t t64 = 10825LLU;
int32_t t67 = -814031841;
int8_t x763 = 1;
int32_t t71 = -108876116;
int8_t x833 = INT8_MIN;
int8_t x868 = 13;
int8_t x881 = -1;
int64_t x883 = -1LL;
int8_t x887 = -1;
static int16_t x888 = 0;
static volatile int64_t t79 = 92LL;
int64_t x889 = INT64_MAX;
uint16_t x918 = UINT16_MAX;
int8_t x921 = INT8_MIN;
int32_t x922 = INT32_MIN;
uint32_t t85 = 45296995U;
static uint32_t x959 = UINT32_MAX;
int32_t t91 = 10783379;
uint32_t x1037 = 425U;
int8_t x1039 = -1;
int16_t x1050 = 1;
volatile int8_t x1055 = -1;
int8_t x1070 = 1;
static uint8_t x1071 = 4U;
volatile int32_t t96 = 1;
volatile int16_t x1082 = INT16_MAX;
static int16_t x1084 = INT16_MIN;
static volatile int32_t t97 = -19;
uint64_t x1089 = 5383637736LLU;
uint8_t x1100 = UINT8_MAX;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -6663139;

	t0 = (x1%(x2<(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int32_t x10 = -1;
	int16_t x11 = -1;
	int32_t x12 = -1;
	volatile int32_t t1 = -30;

	t1 = (x9%(x10<(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MIN;
	int32_t x31 = 51922739;
	uint64_t x32 = UINT64_MAX;
	int32_t t2 = -1362819;

	t2 = (x29%(x30<(x31*x32)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x58 = 1;
	uint16_t x59 = 22952U;

	t3 = (x57%(x58<(x59*x60)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = 6161LLU;
	uint8_t x75 = 38U;
	int32_t x76 = -2002165;
	int32_t t4 = -3;

	t4 = (x73%(x74<(x75*x76)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x81 = INT64_MIN;
	volatile int16_t x82 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;
	static volatile int64_t t5 = -56153407939916LL;

	t5 = (x81%(x82<(x83*x84)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x85 = 32U;
	static uint16_t x86 = 255U;
	uint64_t x87 = UINT64_MAX;
	uint64_t x88 = 51620163871630LLU;

	t6 = (x85%(x86<(x87*x88)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	int8_t x95 = 0;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t7 = 54951;

	t7 = (x93%(x94<(x95*x96)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x117 = INT32_MAX;
	volatile uint8_t x118 = 1U;
	int32_t x119 = -3;
	static volatile int32_t t8 = -5600142;

	t8 = (x117%(x118<(x119*x120)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x121 = 1040142967U;
	int64_t x122 = -1LL;
	static volatile uint8_t x124 = UINT8_MAX;
	uint32_t t9 = 270U;

	t9 = (x121%(x122<(x123*x124)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	int32_t t10 = 206937;

	t10 = (x133%(x134<(x135*x136)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x145 = INT32_MIN;
	static int8_t x146 = -8;
	static int16_t x148 = INT16_MIN;

	t11 = (x145%(x146<(x147*x148)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x161 = INT32_MIN;
	static int8_t x163 = INT8_MIN;
	int32_t t12 = -66673071;

	t12 = (x161%(x162<(x163*x164)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x169 = 551000058U;
	int8_t x170 = INT8_MIN;
	int8_t x172 = 1;
	uint32_t t13 = 2418U;

	t13 = (x169%(x170<(x171*x172)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x173 = 65U;
	uint8_t x174 = 4U;
	volatile uint8_t x175 = 8U;
	int8_t x176 = 25;

	t14 = (x173%(x174<(x175*x176)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x185 = -1;
	static int16_t x187 = -1;

	t15 = (x185%(x186<(x187*x188)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = -1LL;
	volatile uint32_t x191 = UINT32_MAX;
	int32_t t16 = 976;

	t16 = (x189%(x190<(x191*x192)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t17 = -11785084;

	t17 = (x193%(x194<(x195*x196)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x205 = 0;
	int8_t x206 = 5;
	static uint32_t x207 = 172U;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t18 = -14069105;

	t18 = (x205%(x206<(x207*x208)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x217 = 847268784617206LLU;
	int32_t x218 = 26751;
	volatile int64_t x219 = INT64_MIN;
	uint64_t x220 = UINT64_MAX;
	uint64_t t19 = 2031091726099LLU;

	t19 = (x217%(x218<(x219*x220)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x222 = 0LL;
	int32_t x223 = -53;
	static int32_t x224 = -1;

	t20 = (x221%(x222<(x223*x224)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int32_t x226 = -1;
	static volatile int32_t x227 = 35159537;
	static int64_t x228 = 6LL;
	static uint32_t t21 = 56561U;

	t21 = (x225%(x226<(x227*x228)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = 3;
	int32_t t22 = 1487713;

	t22 = (x229%(x230<(x231*x232)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x257 = INT8_MIN;
	static int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = -12;
	static int32_t t23 = 1;

	t23 = (x257%(x258<(x259*x260)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x286 = 8LLU;
	uint32_t x287 = 123U;
	static int16_t x288 = 2;
	volatile int32_t t24 = -61294408;

	t24 = (x285%(x286<(x287*x288)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = 3105;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t25 = -3;

	t25 = (x293%(x294<(x295*x296)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x329 = 3277;
	int8_t x330 = INT8_MIN;
	int32_t t26 = -6;

	t26 = (x329%(x330<(x331*x332)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int64_t t27 = -24LL;

	t27 = (x333%(x334<(x335*x336)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x342 = 4030U;
	uint64_t x343 = 71077LLU;
	static uint16_t x344 = UINT16_MAX;
	volatile int64_t t28 = 4090442091LL;

	t28 = (x341%(x342<(x343*x344)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 3224U;
	static int16_t x347 = INT16_MIN;
	static int32_t x348 = -265;
	static int32_t t29 = 979277;

	t29 = (x345%(x346<(x347*x348)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MIN;
	volatile int32_t x367 = -1;
	volatile int16_t x368 = -95;
	volatile int32_t t30 = -4550547;

	t30 = (x365%(x366<(x367*x368)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = INT64_MIN;
	static int16_t x371 = INT16_MAX;
	int64_t x372 = 58620346276LL;
	volatile uint32_t t31 = 9U;

	t31 = (x369%(x370<(x371*x372)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x394 = 111U;
	uint64_t x395 = 16875598301778LLU;
	uint16_t x396 = 8U;
	volatile int32_t t32 = 5;

	t32 = (x393%(x394<(x395*x396)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x405 = -3662949617094350647LL;
	int16_t x406 = INT16_MIN;
	volatile int32_t x407 = -13;
	uint8_t x408 = UINT8_MAX;
	static volatile int64_t t33 = -692LL;

	t33 = (x405%(x406<(x407*x408)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x418 = -175971791;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;

	t34 = (x417%(x418<(x419*x420)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x421 = -3837LL;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = 7U;
	volatile int64_t t35 = 598336521147609LL;

	t35 = (x421%(x422<(x423*x424)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x429 = 4564U;
	uint32_t x430 = 3628U;
	int8_t x431 = -1;
	volatile uint32_t t36 = 5616U;

	t36 = (x429%(x430<(x431*x432)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x433 = 111U;
	uint64_t x434 = 359260825LLU;
	int64_t x436 = -381408131LL;
	volatile int32_t t37 = 20;

	t37 = (x433%(x434<(x435*x436)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x438 = INT32_MIN;
	int16_t x439 = -1;
	static volatile uint16_t x440 = UINT16_MAX;
	volatile int32_t t38 = -2945684;

	t38 = (x437%(x438<(x439*x440)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x445 = INT8_MIN;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MAX;
	uint16_t x448 = 208U;
	int32_t t39 = -203;

	t39 = (x445%(x446<(x447*x448)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x453 = -1;
	uint32_t x454 = 1U;
	volatile int8_t x455 = INT8_MAX;
	int32_t t40 = -837;

	t40 = (x453%(x454<(x455*x456)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	int8_t x472 = INT8_MIN;
	volatile int32_t t41 = 1;

	t41 = (x469%(x470<(x471*x472)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x474 = 14196790U;
	int8_t x475 = -1;
	uint16_t x476 = 4U;
	uint32_t t42 = 3477687U;

	t42 = (x473%(x474<(x475*x476)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x477 = INT8_MAX;
	static int64_t x478 = -4156385301269LL;
	int8_t x480 = INT8_MIN;
	volatile int32_t t43 = -1850569;

	t43 = (x477%(x478<(x479*x480)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x493 = 22586117247674LLU;
	uint16_t x494 = 0U;
	volatile int8_t x495 = -1;
	volatile int16_t x496 = -2464;
	static uint64_t t44 = 384LLU;

	t44 = (x493%(x494<(x495*x496)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x501 = -1LL;
	static uint16_t x503 = 122U;
	int16_t x504 = INT16_MIN;
	int64_t t45 = 534885581LL;

	t45 = (x501%(x502<(x503*x504)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x513 = 13371;
	static uint8_t x514 = UINT8_MAX;
	uint64_t x515 = 11916581177802423LLU;
	int32_t t46 = -129;

	t46 = (x513%(x514<(x515*x516)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x525 = 107U;
	volatile int8_t x526 = -1;
	int8_t x527 = INT8_MAX;
	volatile uint16_t x528 = 2672U;
	int32_t t47 = 11687;

	t47 = (x525%(x526<(x527*x528)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x533 = -154036;
	uint16_t x534 = 28U;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t48 = 372657268;

	t48 = (x533%(x534<(x535*x536)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x537 = -66;
	int16_t x539 = 201;
	volatile uint16_t x540 = 2373U;
	volatile int32_t t49 = -4;

	t49 = (x537%(x538<(x539*x540)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x549 = 1357U;
	int64_t x550 = -1LL;
	int8_t x552 = INT8_MAX;
	volatile int32_t t50 = 15;

	t50 = (x549%(x550<(x551*x552)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x562 = 0;
	int16_t x563 = INT16_MIN;
	int32_t x564 = -1;

	t51 = (x561%(x562<(x563*x564)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x573 = 1500466U;
	uint16_t x574 = 68U;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;
	uint32_t t52 = 29464U;

	t52 = (x573%(x574<(x575*x576)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x585 = UINT16_MAX;
	static int32_t x586 = -1540718;
	uint64_t x588 = UINT64_MAX;
	static int32_t t53 = 31633;

	t53 = (x585%(x586<(x587*x588)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x609 = 41;
	int32_t x610 = INT32_MIN;
	static uint32_t x611 = 3203U;
	int16_t x612 = INT16_MIN;

	t54 = (x609%(x610<(x611*x612)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x613 = -1;
	volatile int8_t x616 = -1;
	static int32_t t55 = -2;

	t55 = (x613%(x614<(x615*x616)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x617 = INT32_MIN;
	int32_t x618 = 2;
	uint64_t x620 = 69658867821401LLU;
	volatile int32_t t56 = 1209;

	t56 = (x617%(x618<(x619*x620)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x621 = 25;
	uint32_t x622 = 3U;
	static uint8_t x623 = 15U;
	int8_t x624 = -1;
	int32_t t57 = 3842;

	t57 = (x621%(x622<(x623*x624)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x629 = INT8_MIN;
	volatile int64_t x630 = 55LL;
	int8_t x631 = 23;
	static volatile uint32_t x632 = UINT32_MAX;
	int32_t t58 = -2710597;

	t58 = (x629%(x630<(x631*x632)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x637 = INT16_MAX;
	static int8_t x639 = INT8_MAX;
	static volatile int32_t t59 = -12118;

	t59 = (x637%(x638<(x639*x640)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x641 = -1;
	uint64_t x642 = 2685093126LLU;
	uint64_t x643 = 241289376LLU;
	int8_t x644 = INT8_MIN;

	t60 = (x641%(x642<(x643*x644)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x645 = INT16_MIN;
	int32_t x647 = -1;
	int32_t x648 = 255226;

	t61 = (x645%(x646<(x647*x648)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x653 = INT32_MIN;
	static int8_t x654 = INT8_MAX;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = -1;
	int32_t t62 = 0;

	t62 = (x653%(x654<(x655*x656)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x657 = INT8_MIN;
	int16_t x658 = INT16_MIN;
	int64_t x659 = -1LL;
	volatile int16_t x660 = -1527;

	t63 = (x657%(x658<(x659*x660)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x665 = UINT64_MAX;
	int16_t x666 = INT16_MIN;
	int64_t x667 = -1LL;
	int8_t x668 = INT8_MIN;

	t64 = (x665%(x666<(x667*x668)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x685 = 536U;
	uint32_t x686 = 2440U;
	static int32_t x687 = -1;
	uint64_t x688 = 10491041371841113LLU;
	int32_t t65 = 254974;

	t65 = (x685%(x686<(x687*x688)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x709 = INT8_MAX;
	int64_t x710 = 113392626LL;
	volatile uint32_t x711 = 387972U;
	uint64_t x712 = UINT64_MAX;
	static volatile int32_t t66 = 6;

	t66 = (x709%(x710<(x711*x712)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = UINT8_MAX;
	uint8_t x748 = 71U;

	t67 = (x745%(x746<(x747*x748)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x753 = 5;
	int8_t x754 = -1;
	int8_t x755 = -1;
	int16_t x756 = INT16_MIN;
	int32_t t68 = -6367;

	t68 = (x753%(x754<(x755*x756)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x761 = -3526;
	static int32_t x762 = INT32_MIN;
	static uint8_t x764 = 0U;
	int32_t t69 = 111;

	t69 = (x761%(x762<(x763*x764)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x785 = -14664838572460229LL;
	uint64_t x786 = 1966096230511389LLU;
	static uint16_t x787 = 43U;
	int8_t x788 = -1;
	volatile int64_t t70 = -14679202LL;

	t70 = (x785%(x786<(x787*x788)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x789 = UINT8_MAX;
	volatile int64_t x790 = -2819583041623123377LL;
	static volatile int32_t x791 = INT32_MIN;
	int64_t x792 = -1LL;

	t71 = (x789%(x790<(x791*x792)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x809 = INT32_MAX;
	uint32_t x810 = 213U;
	uint32_t x811 = 69204466U;
	int16_t x812 = -1;
	static int32_t t72 = -444;

	t72 = (x809%(x810<(x811*x812)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x834 = INT16_MIN;
	int64_t x835 = 8152040LL;
	uint8_t x836 = UINT8_MAX;
	int32_t t73 = -8;

	t73 = (x833%(x834<(x835*x836)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x837 = UINT8_MAX;
	int64_t x838 = INT64_MIN;
	uint32_t x839 = UINT32_MAX;
	static int8_t x840 = -16;
	static volatile int32_t t74 = 109907988;

	t74 = (x837%(x838<(x839*x840)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x841 = 3344;
	int8_t x842 = -1;
	int8_t x843 = INT8_MAX;
	uint16_t x844 = 9U;
	volatile int32_t t75 = -57167;

	t75 = (x841%(x842<(x843*x844)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x845 = -6;
	volatile uint16_t x846 = 1718U;
	int32_t x847 = INT32_MIN;
	static volatile int64_t x848 = -1LL;
	volatile int32_t t76 = 115;

	t76 = (x845%(x846<(x847*x848)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x865 = UINT16_MAX;
	int16_t x866 = -1;
	int64_t x867 = 278LL;
	int32_t t77 = -59;

	t77 = (x865%(x866<(x867*x868)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x882 = INT16_MIN;
	int8_t x884 = INT8_MIN;
	static volatile int32_t t78 = -519004056;

	t78 = (x881%(x882<(x883*x884)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x885 = INT64_MIN;
	static int16_t x886 = -1;

	t79 = (x885%(x886<(x887*x888)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x890 = INT16_MIN;
	int8_t x891 = -1;
	volatile int8_t x892 = 1;
	volatile int64_t t80 = 1783598054LL;

	t80 = (x889%(x890<(x891*x892)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x893 = -1;
	int8_t x894 = 2;
	uint16_t x895 = 160U;
	volatile int8_t x896 = 58;
	static int32_t t81 = 27;

	t81 = (x893%(x894<(x895*x896)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x917 = INT16_MIN;
	int32_t x919 = 233861812;
	static uint32_t x920 = 61U;
	int32_t t82 = -2904;

	t82 = (x917%(x918<(x919*x920)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x923 = INT8_MAX;
	volatile int8_t x924 = -1;
	int32_t t83 = 29;

	t83 = (x921%(x922<(x923*x924)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x937 = INT64_MIN;
	int16_t x938 = 1350;
	int16_t x939 = INT16_MIN;
	int16_t x940 = INT16_MIN;
	int64_t t84 = -3080626LL;

	t84 = (x937%(x938<(x939*x940)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x949 = 732066487U;
	static volatile uint32_t x950 = 31U;
	volatile uint16_t x951 = UINT16_MAX;
	int8_t x952 = -56;

	t85 = (x949%(x950<(x951*x952)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x953 = 45195714218100LLU;
	static uint8_t x954 = 7U;
	int8_t x955 = INT8_MIN;
	int8_t x956 = INT8_MIN;
	volatile uint64_t t86 = 1785LLU;

	t86 = (x953%(x954<(x955*x956)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x957 = UINT32_MAX;
	int8_t x958 = INT8_MAX;
	static int64_t x960 = 565694792LL;
	uint32_t t87 = 4U;

	t87 = (x957%(x958<(x959*x960)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x977 = 57U;
	volatile uint8_t x978 = 6U;
	static int32_t x979 = 1;
	static int32_t x980 = INT32_MAX;
	volatile int32_t t88 = -10372652;

	t88 = (x977%(x978<(x979*x980)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x993 = 1071;
	volatile int8_t x994 = -4;
	uint8_t x995 = 2U;
	volatile int8_t x996 = -1;
	volatile int32_t t89 = 13007;

	t89 = (x993%(x994<(x995*x996)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x997 = 156;
	volatile int64_t x998 = -1LL;
	uint16_t x999 = 14140U;
	static int64_t x1000 = 7743286LL;
	static int32_t t90 = 10281899;

	t90 = (x997%(x998<(x999*x1000)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1005 = 5U;
	static int16_t x1006 = 7;
	uint32_t x1007 = UINT32_MAX;
	static int16_t x1008 = INT16_MIN;

	t91 = (x1005%(x1006<(x1007*x1008)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x1021 = -1;
	int32_t x1022 = INT32_MIN;
	volatile uint16_t x1023 = 24U;
	int16_t x1024 = INT16_MIN;
	int32_t t92 = 1;

	t92 = (x1021%(x1022<(x1023*x1024)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1038 = INT64_MIN;
	volatile uint8_t x1040 = 3U;
	uint32_t t93 = 84890U;

	t93 = (x1037%(x1038<(x1039*x1040)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1049 = INT32_MAX;
	uint32_t x1051 = UINT32_MAX;
	volatile int16_t x1052 = INT16_MIN;
	volatile int32_t t94 = -625263;

	t94 = (x1049%(x1050<(x1051*x1052)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1053 = -929;
	int8_t x1054 = 3;
	static uint32_t x1056 = 64574135U;
	int32_t t95 = -510;

	t95 = (x1053%(x1054<(x1055*x1056)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1069 = INT8_MIN;
	int32_t x1072 = 490721;

	t96 = (x1069%(x1070<(x1071*x1072)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1081 = 1;
	int16_t x1083 = -1;

	t97 = (x1081%(x1082<(x1083*x1084)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1090 = 115705410LLU;
	uint16_t x1091 = 3U;
	int8_t x1092 = INT8_MIN;
	volatile uint64_t t98 = 2094LLU;

	t98 = (x1089%(x1090<(x1091*x1092)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x1097 = -1LL;
	int32_t x1098 = INT32_MIN;
	static int8_t x1099 = -6;
	int64_t t99 = -2946LL;

	t99 = (x1097%(x1098<(x1099*x1100)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

