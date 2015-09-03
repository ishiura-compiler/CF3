#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 10150891U;
int64_t x39 = INT64_MIN;
static volatile int8_t x40 = 4;
int64_t x57 = -7LL;
uint64_t x77 = 5348LLU;
uint32_t x89 = UINT32_MAX;
int32_t x126 = INT32_MAX;
volatile int64_t x127 = 12786187893LL;
volatile uint8_t x128 = 5U;
volatile int32_t t7 = 627916;
static int8_t x134 = -1;
volatile int32_t x146 = INT32_MAX;
static int64_t x148 = INT64_MIN;
int32_t t11 = 370;
volatile int8_t x149 = -1;
uint8_t x166 = 21U;
static volatile int32_t t16 = -12;
static volatile int64_t x190 = INT64_MIN;
int64_t x191 = INT64_MIN;
volatile int64_t x234 = INT64_MAX;
int32_t x235 = INT32_MIN;
volatile uint32_t x236 = 0U;
volatile int32_t t20 = 1;
static volatile int64_t x250 = INT64_MAX;
uint64_t x251 = 63155575599219LLU;
int8_t x273 = -3;
int32_t x298 = INT32_MAX;
int32_t x302 = INT32_MAX;
static uint32_t x344 = 98836131U;
int8_t x356 = 1;
int64_t x365 = INT64_MAX;
uint8_t x368 = 35U;
static volatile int32_t t31 = -1708493;
int8_t x392 = INT8_MAX;
int32_t t32 = -6432;
volatile uint64_t x405 = UINT64_MAX;
volatile int32_t t33 = -188837667;
int64_t x426 = -5570595605777LL;
uint64_t x428 = 94LLU;
int8_t x436 = INT8_MIN;
uint16_t x463 = 1U;
int64_t x473 = INT64_MIN;
static int16_t x476 = INT16_MIN;
volatile int32_t t38 = -84;
uint16_t x489 = 2857U;
uint64_t x490 = 787263126343665LLU;
volatile int16_t x491 = 7590;
volatile uint16_t x492 = 0U;
int64_t x493 = INT64_MIN;
int8_t x495 = 1;
int32_t x496 = -1;
uint16_t x530 = 89U;
uint8_t x531 = 7U;
static int32_t x532 = INT32_MIN;
int32_t x534 = INT32_MIN;
int32_t t47 = -398329690;
volatile int32_t t48 = 210099;
volatile int64_t x643 = INT64_MIN;
uint32_t x645 = 271509419U;
static int32_t x647 = INT32_MIN;
volatile uint32_t x648 = 997236U;
volatile int64_t x654 = INT64_MAX;
int8_t x662 = INT8_MAX;
int16_t x669 = INT16_MAX;
int32_t x708 = 45;
int8_t x732 = 11;
int32_t t59 = 120962754;
int32_t x738 = -1;
volatile uint64_t x746 = 2706467202237211LLU;
uint32_t x757 = UINT32_MAX;
int32_t x758 = -7066;
int32_t x770 = 1;
int8_t x786 = -1;
volatile int32_t t64 = -23237;
int8_t x798 = INT8_MIN;
int8_t x817 = 54;
int8_t x819 = INT8_MAX;
static int16_t x839 = 311;
static volatile int64_t x857 = INT64_MIN;
volatile uint64_t x862 = 122953LLU;
static volatile int32_t t74 = -10528;
int32_t t75 = -87397185;
int8_t x881 = -10;
int32_t x897 = -1;
uint32_t x908 = 50U;
int32_t x909 = INT32_MIN;
volatile uint32_t x911 = 635U;
int16_t x912 = INT16_MIN;
int32_t t80 = 0;
static int32_t t81 = 2913544;
volatile int8_t x934 = 49;
volatile int16_t x959 = INT16_MAX;
uint64_t x965 = UINT64_MAX;
uint16_t x966 = 7U;
static volatile uint16_t x967 = UINT16_MAX;
int32_t x968 = INT32_MIN;
int32_t t85 = -2389;
int64_t x973 = INT64_MAX;
uint16_t x976 = 21U;
int16_t x994 = -75;
int8_t x1002 = INT8_MAX;
int8_t x1006 = INT8_MIN;
uint16_t x1007 = 5804U;
volatile int16_t x1022 = INT16_MIN;
volatile int8_t x1025 = -1;
int64_t x1060 = 1LL;
uint16_t x1068 = 419U;
int32_t t95 = -10507;
static uint16_t x1070 = 206U;
int32_t t96 = -170877;
static uint8_t x1084 = 24U;
volatile int64_t x1088 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static uint8_t x3 = 0U;
	static int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 4029052;

	t0 = ((x1==x2)<<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = -1LL;
	int8_t x38 = -1;
	volatile int32_t t1 = 486758;

	t1 = ((x37==x38)<<(x39&x40));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x41 = INT8_MIN;
	static int64_t x42 = INT64_MIN;
	static uint32_t x43 = 0U;
	int32_t x44 = INT32_MIN;
	int32_t t2 = 3;

	t2 = ((x41==x42)<<(x43&x44));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t3 = 3556415;

	t3 = ((x57==x58)<<(x59&x60));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x78 = 106270666;
	int8_t x79 = 1;
	int32_t x80 = INT32_MIN;
	int32_t t4 = 15;

	t4 = ((x77==x78)<<(x79&x80));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x81 = INT32_MAX;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = -109;
	int8_t x84 = INT8_MAX;
	volatile int32_t t5 = -35870;

	t5 = ((x81==x82)<<(x83&x84));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x90 = 878988732U;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = 3;
	volatile int32_t t6 = -121201539;

	t6 = ((x89==x90)<<(x91&x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x125 = INT8_MIN;

	t7 = ((x125==x126)<<(x127&x128));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 2U;
	uint8_t x132 = 13U;
	volatile int32_t t8 = 0;

	t8 = ((x129==x130)<<(x131&x132));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x133 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = 15;
	volatile int32_t t9 = 7444390;

	t9 = ((x133==x134)<<(x135&x136));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	volatile uint8_t x144 = 0U;
	static volatile int32_t t10 = 1;

	t10 = ((x141==x142)<<(x143&x144));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x145 = UINT64_MAX;
	static int32_t x147 = 255;

	t11 = ((x145==x146)<<(x147&x148));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x150 = INT8_MAX;
	uint16_t x151 = 6U;
	static uint64_t x152 = 62120107699583LLU;
	int32_t t12 = 2290070;

	t12 = ((x149==x150)<<(x151&x152));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x165 = 916U;
	int8_t x167 = INT8_MIN;
	volatile uint8_t x168 = 95U;
	int32_t t13 = 795;

	t13 = ((x165==x166)<<(x167&x168));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = -1;
	uint64_t x179 = 33392175LLU;
	uint16_t x180 = 472U;
	volatile int32_t t14 = 12587;

	t14 = ((x177==x178)<<(x179&x180));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x181 = -25LL;
	uint8_t x182 = 1U;
	uint8_t x183 = 29U;
	int64_t x184 = INT64_MAX;
	int32_t t15 = -2058408;

	t15 = ((x181==x182)<<(x183&x184));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	uint16_t x187 = 368U;
	static int32_t x188 = 3;

	t16 = ((x185==x186)<<(x187&x188));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x189 = -6135;
	uint32_t x192 = 2394U;
	volatile int32_t t17 = -7281684;

	t17 = ((x189==x190)<<(x191&x192));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x193 = 2U;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;
	int32_t t18 = -966;

	t18 = ((x193==x194)<<(x195&x196));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x229 = -132;
	int16_t x230 = INT16_MIN;
	static int32_t x231 = -1;
	uint8_t x232 = 4U;
	int32_t t19 = -18;

	t19 = ((x229==x230)<<(x231&x232));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x233 = -15075082;

	t20 = ((x233==x234)<<(x235&x236));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x237 = -267942;
	static int64_t x238 = -1LL;
	int8_t x239 = 0;
	int8_t x240 = -1;
	volatile int32_t t21 = 16946;

	t21 = ((x237==x238)<<(x239&x240));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x245 = 6436U;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	volatile uint8_t x248 = 0U;
	volatile int32_t t22 = 32325;

	t22 = ((x245==x246)<<(x247&x248));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x249 = INT64_MIN;
	static int32_t x252 = 1;
	int32_t t23 = 1817967;

	t23 = ((x249==x250)<<(x251&x252));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	volatile uint8_t x263 = 2U;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t24 = 1;

	t24 = ((x261==x262)<<(x263&x264));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x274 = UINT8_MAX;
	uint64_t x275 = 24428015853209356LLU;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t25 = 325;

	t25 = ((x273==x274)<<(x275&x276));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x281 = 2U;
	uint64_t x282 = 108170973979LLU;
	uint8_t x283 = 3U;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t26 = -7398;

	t26 = ((x281==x282)<<(x283&x284));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x297 = 272258870982LLU;
	uint8_t x299 = 0U;
	static int32_t x300 = INT32_MIN;
	static volatile int32_t t27 = 337046;

	t27 = ((x297==x298)<<(x299&x300));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x301 = INT16_MIN;
	static uint16_t x303 = 15U;
	static uint32_t x304 = 905247979U;
	int32_t t28 = 2;

	t28 = ((x301==x302)<<(x303&x304));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x341 = INT16_MIN;
	int16_t x342 = 0;
	uint8_t x343 = 1U;
	int32_t t29 = -10204;

	t29 = ((x341==x342)<<(x343&x344));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x353 = INT32_MAX;
	static uint16_t x354 = 1418U;
	static uint32_t x355 = 29729329U;
	int32_t t30 = 25726398;

	t30 = ((x353==x354)<<(x355&x356));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x366 = UINT8_MAX;
	uint64_t x367 = 243352973083929560LLU;

	t31 = ((x365==x366)<<(x367&x368));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x389 = 11U;
	volatile uint64_t x390 = 1540355665621269873LLU;
	int16_t x391 = -233;

	t32 = ((x389==x390)<<(x391&x392));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x406 = 51U;
	uint8_t x407 = UINT8_MAX;
	uint16_t x408 = 3354U;

	t33 = ((x405==x406)<<(x407&x408));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x425 = 696910101236LL;
	int16_t x427 = INT16_MIN;
	int32_t t34 = 7;

	t34 = ((x425==x426)<<(x427&x428));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x433 = INT8_MIN;
	int64_t x434 = 2LL;
	volatile int8_t x435 = 1;
	int32_t t35 = -148794323;

	t35 = ((x433==x434)<<(x435&x436));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MIN;
	int8_t x443 = 7;
	static int8_t x444 = -1;
	static volatile int32_t t36 = -100680226;

	t36 = ((x441==x442)<<(x443&x444));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x461 = INT32_MIN;
	uint8_t x462 = UINT8_MAX;
	uint16_t x464 = UINT16_MAX;
	static int32_t t37 = -91385605;

	t37 = ((x461==x462)<<(x463&x464));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 23U;

	t38 = ((x473==x474)<<(x475&x476));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x477 = UINT64_MAX;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MAX;
	volatile int32_t x480 = -509;
	volatile int32_t t39 = 2948929;

	t39 = ((x477==x478)<<(x479&x480));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x485 = 20582808211LL;
	int8_t x486 = INT8_MIN;
	int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MAX;
	int32_t t40 = 30361;

	t40 = ((x485==x486)<<(x487&x488));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t t41 = 39341;

	t41 = ((x489==x490)<<(x491&x492));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x494 = -2158354LL;
	static volatile int32_t t42 = -549157708;

	t42 = ((x493==x494)<<(x495&x496));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x525 = 528034822715LLU;
	uint64_t x526 = 511097801961604LLU;
	volatile int32_t x527 = 0;
	static uint16_t x528 = 3U;
	int32_t t43 = 127450;

	t43 = ((x525==x526)<<(x527&x528));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x529 = INT64_MIN;
	volatile int32_t t44 = -23;

	t44 = ((x529==x530)<<(x531&x532));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x533 = INT16_MIN;
	int16_t x535 = 0;
	uint32_t x536 = 6U;
	int32_t t45 = -58025;

	t45 = ((x533==x534)<<(x535&x536));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x545 = 57LL;
	static int32_t x546 = INT32_MIN;
	int16_t x547 = 8;
	uint32_t x548 = 4905U;
	int32_t t46 = -6248095;

	t46 = ((x545==x546)<<(x547&x548));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x557 = INT32_MIN;
	static uint16_t x558 = 3U;
	static int32_t x559 = INT32_MIN;
	int32_t x560 = 1;

	t47 = ((x557==x558)<<(x559&x560));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x577 = -1LL;
	volatile int64_t x578 = INT64_MIN;
	uint8_t x579 = 43U;
	uint64_t x580 = 7950474LLU;

	t48 = ((x577==x578)<<(x579&x580));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x613 = 2080880965730016348LLU;
	int8_t x614 = -1;
	int32_t x615 = 1;
	int64_t x616 = -34916143274963LL;
	int32_t t49 = -1740156;

	t49 = ((x613==x614)<<(x615&x616));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x641 = 12372;
	int64_t x642 = -1LL;
	static uint16_t x644 = 7254U;
	volatile int32_t t50 = 97;

	t50 = ((x641==x642)<<(x643&x644));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x646 = UINT8_MAX;
	int32_t t51 = -1101617;

	t51 = ((x645==x646)<<(x647&x648));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x653 = INT32_MAX;
	int32_t x655 = INT32_MAX;
	static int8_t x656 = 3;
	int32_t t52 = 118;

	t52 = ((x653==x654)<<(x655&x656));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x661 = INT64_MIN;
	volatile int32_t x663 = INT32_MIN;
	volatile uint8_t x664 = 115U;
	int32_t t53 = -1;

	t53 = ((x661==x662)<<(x663&x664));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x670 = -1;
	int64_t x671 = INT64_MIN;
	static int64_t x672 = 26168546544LL;
	int32_t t54 = -267992745;

	t54 = ((x669==x670)<<(x671&x672));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x681 = -107;
	int8_t x682 = INT8_MIN;
	int8_t x683 = 9;
	int16_t x684 = -1;
	volatile int32_t t55 = -6037;

	t55 = ((x681==x682)<<(x683&x684));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x701 = 3532U;
	uint64_t x702 = 19075743850602LLU;
	int32_t x703 = -1;
	uint32_t x704 = 18U;
	volatile int32_t t56 = 590011051;

	t56 = ((x701==x702)<<(x703&x704));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x705 = INT64_MAX;
	static volatile int32_t x706 = INT32_MIN;
	uint64_t x707 = 9357LLU;
	int32_t t57 = -2286028;

	t57 = ((x705==x706)<<(x707&x708));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x725 = INT8_MIN;
	int16_t x726 = 415;
	int64_t x727 = 544081529250LL;
	uint64_t x728 = 5LLU;
	int32_t t58 = -146167020;

	t58 = ((x725==x726)<<(x727&x728));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x729 = 1;
	volatile int32_t x730 = INT32_MIN;
	uint32_t x731 = 217393U;

	t59 = ((x729==x730)<<(x731&x732));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x737 = 57U;
	volatile int64_t x739 = 10LL;
	static uint8_t x740 = UINT8_MAX;
	volatile int32_t t60 = -253720151;

	t60 = ((x737==x738)<<(x739&x740));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x745 = -54;
	int64_t x747 = INT64_MIN;
	uint16_t x748 = 117U;
	volatile int32_t t61 = -1755674;

	t61 = ((x745==x746)<<(x747&x748));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x759 = 562LLU;
	uint16_t x760 = 0U;
	volatile int32_t t62 = -123195;

	t62 = ((x757==x758)<<(x759&x760));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x769 = 9U;
	uint8_t x771 = 5U;
	int32_t x772 = INT32_MIN;
	static volatile int32_t t63 = -17131653;

	t63 = ((x769==x770)<<(x771&x772));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x785 = -6;
	int8_t x787 = INT8_MIN;
	volatile int16_t x788 = 0;

	t64 = ((x785==x786)<<(x787&x788));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x797 = -7;
	static uint32_t x799 = 16U;
	int16_t x800 = INT16_MIN;
	int32_t t65 = 3;

	t65 = ((x797==x798)<<(x799&x800));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x818 = -1;
	volatile uint16_t x820 = 0U;
	volatile int32_t t66 = -1;

	t66 = ((x817==x818)<<(x819&x820));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x829 = 196LLU;
	static uint32_t x830 = 2661748U;
	uint16_t x831 = 1U;
	uint16_t x832 = 171U;
	volatile int32_t t67 = 0;

	t67 = ((x829==x830)<<(x831&x832));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x837 = -1;
	volatile int16_t x838 = -14679;
	static int64_t x840 = INT64_MIN;
	int32_t t68 = 138831;

	t68 = ((x837==x838)<<(x839&x840));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x845 = INT64_MAX;
	volatile int64_t x846 = INT64_MIN;
	static int8_t x847 = 0;
	static int8_t x848 = INT8_MIN;
	int32_t t69 = -2;

	t69 = ((x845==x846)<<(x847&x848));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x849 = INT32_MAX;
	int16_t x850 = -1;
	static volatile int64_t x851 = 1256LL;
	int32_t x852 = INT32_MIN;
	int32_t t70 = 1758371;

	t70 = ((x849==x850)<<(x851&x852));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x853 = -1;
	int16_t x854 = INT16_MAX;
	static uint32_t x855 = 56099743U;
	int64_t x856 = INT64_MIN;
	int32_t t71 = 1;

	t71 = ((x853==x854)<<(x855&x856));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x858 = INT16_MIN;
	int8_t x859 = INT8_MAX;
	int8_t x860 = 0;
	static volatile int32_t t72 = 12;

	t72 = ((x857==x858)<<(x859&x860));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x861 = -1;
	static int64_t x863 = INT64_MIN;
	int32_t x864 = INT32_MAX;
	static volatile int32_t t73 = -10;

	t73 = ((x861==x862)<<(x863&x864));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x873 = -23;
	volatile int16_t x874 = INT16_MIN;
	int8_t x875 = INT8_MAX;
	int8_t x876 = 0;

	t74 = ((x873==x874)<<(x875&x876));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x877 = INT32_MAX;
	int16_t x878 = 2;
	int16_t x879 = 2968;
	int16_t x880 = 0;

	t75 = ((x877==x878)<<(x879&x880));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x882 = -1LL;
	static uint64_t x883 = 245160LLU;
	volatile int8_t x884 = 1;
	int32_t t76 = -21915;

	t76 = ((x881==x882)<<(x883&x884));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x898 = INT64_MIN;
	static int64_t x899 = -1LL;
	uint8_t x900 = 9U;
	static int32_t t77 = 13170679;

	t77 = ((x897==x898)<<(x899&x900));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x905 = UINT64_MAX;
	int16_t x906 = 597;
	int32_t x907 = INT32_MIN;
	int32_t t78 = 381242922;

	t78 = ((x905==x906)<<(x907&x908));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x910 = INT32_MAX;
	volatile int32_t t79 = 2;

	t79 = ((x909==x910)<<(x911&x912));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x913 = 697U;
	static int64_t x914 = INT64_MIN;
	uint16_t x915 = 0U;
	static int8_t x916 = -1;

	t80 = ((x913==x914)<<(x915&x916));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x921 = -5;
	int64_t x922 = 203LL;
	volatile int32_t x923 = INT32_MIN;
	volatile uint8_t x924 = 48U;

	t81 = ((x921==x922)<<(x923&x924));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x933 = INT32_MAX;
	int64_t x935 = -306478272118388LL;
	int8_t x936 = 21;
	static volatile int32_t t82 = -330;

	t82 = ((x933==x934)<<(x935&x936));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x957 = 2263851U;
	uint32_t x958 = UINT32_MAX;
	uint16_t x960 = 16U;
	int32_t t83 = 0;

	t83 = ((x957==x958)<<(x959&x960));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x961 = -1LL;
	static uint8_t x962 = 28U;
	int8_t x963 = 0;
	int32_t x964 = -1;
	int32_t t84 = 5121;

	t84 = ((x961==x962)<<(x963&x964));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {


	t85 = ((x965==x966)<<(x967&x968));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x974 = INT64_MIN;
	int8_t x975 = -1;
	volatile int32_t t86 = -44946374;

	t86 = ((x973==x974)<<(x975&x976));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x993 = INT32_MIN;
	volatile int8_t x995 = INT8_MAX;
	static int16_t x996 = 0;
	volatile int32_t t87 = -1184564;

	t87 = ((x993==x994)<<(x995&x996));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x997 = INT16_MIN;
	int16_t x998 = 110;
	int64_t x999 = INT64_MAX;
	uint8_t x1000 = 5U;
	volatile int32_t t88 = 3981;

	t88 = ((x997==x998)<<(x999&x1000));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1001 = 124447;
	int16_t x1003 = 0;
	uint16_t x1004 = 7270U;
	static volatile int32_t t89 = -1;

	t89 = ((x1001==x1002)<<(x1003&x1004));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1005 = INT16_MIN;
	uint32_t x1008 = 4U;
	volatile int32_t t90 = -858726;

	t90 = ((x1005==x1006)<<(x1007&x1008));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x1021 = 23U;
	int8_t x1023 = 29;
	uint8_t x1024 = 25U;
	volatile int32_t t91 = -3;

	t91 = ((x1021==x1022)<<(x1023&x1024));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1026 = INT64_MIN;
	static uint8_t x1027 = 8U;
	uint32_t x1028 = 501837121U;
	volatile int32_t t92 = -256;

	t92 = ((x1025==x1026)<<(x1027&x1028));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1041 = INT8_MIN;
	int64_t x1042 = -3LL;
	int16_t x1043 = INT16_MIN;
	static uint8_t x1044 = UINT8_MAX;
	int32_t t93 = -64069;

	t93 = ((x1041==x1042)<<(x1043&x1044));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1057 = -259;
	static uint64_t x1058 = UINT64_MAX;
	int32_t x1059 = -1;
	int32_t t94 = 163;

	t94 = ((x1057==x1058)<<(x1059&x1060));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1065 = 62;
	volatile int8_t x1066 = -1;
	static int16_t x1067 = INT16_MIN;

	t95 = ((x1065==x1066)<<(x1067&x1068));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x1069 = 176U;
	static uint16_t x1071 = 10U;
	int8_t x1072 = -1;

	t96 = ((x1069==x1070)<<(x1071&x1072));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1081 = -1;
	static volatile uint32_t x1082 = 3407606U;
	static int32_t x1083 = INT32_MIN;
	int32_t t97 = -2525;

	t97 = ((x1081==x1082)<<(x1083&x1084));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1085 = 4U;
	int64_t x1086 = -1LL;
	uint32_t x1087 = UINT32_MAX;
	volatile int32_t t98 = 10;

	t98 = ((x1085==x1086)<<(x1087&x1088));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x1097 = -4;
	uint8_t x1098 = UINT8_MAX;
	static volatile uint16_t x1099 = 3U;
	static uint8_t x1100 = 2U;
	static volatile int32_t t99 = 23;

	t99 = ((x1097==x1098)<<(x1099&x1100));

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

