
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 895430581U;
int64_t x10 = 68353772055292LL;
volatile uint32_t x19 = 2U;
int16_t x22 = INT16_MIN;
static int64_t x28 = -1LL;
volatile int32_t t6 = 127244;
static uint16_t x29 = 38U;
uint32_t x39 = 3794107U;
static int64_t x42 = -4511771166097481459LL;
static volatile uint8_t x43 = UINT8_MAX;
volatile int64_t x47 = INT64_MIN;
volatile int32_t x63 = INT32_MIN;
int32_t x79 = INT32_MAX;
static int64_t x81 = INT64_MAX;
volatile int16_t x92 = -597;
volatile uint16_t x96 = UINT16_MAX;
volatile int64_t x105 = -123016797242231596LL;
volatile int32_t x108 = INT32_MAX;
static uint32_t x112 = UINT32_MAX;
static volatile int64_t x113 = INT64_MAX;
int8_t x115 = INT8_MIN;
int16_t x116 = -1;
volatile int32_t t28 = 17;
volatile int32_t t29 = -435941848;
int16_t x131 = -1;
volatile int32_t t31 = -52653;
uint16_t x138 = UINT16_MAX;
volatile int32_t t34 = -11;
uint16_t x146 = UINT16_MAX;
static volatile int16_t x152 = -2560;
uint16_t x160 = 5U;
volatile int16_t x162 = INT16_MIN;
int8_t x163 = -1;
int8_t x166 = -1;
static uint32_t x167 = 2U;
int64_t x168 = INT64_MIN;
int8_t x172 = 0;
int32_t x178 = INT32_MIN;
static uint16_t x180 = 54U;
uint16_t x186 = 5851U;
static volatile uint16_t x192 = 28U;
volatile int16_t x194 = -1;
int32_t t47 = 103842;
int64_t x201 = 703578191688518LL;
int16_t x205 = INT16_MIN;
volatile int32_t t50 = -36;
volatile int16_t x211 = INT16_MIN;
uint8_t x212 = UINT8_MAX;
int32_t x217 = INT32_MIN;
static int8_t x223 = INT8_MAX;
static int16_t x226 = INT16_MAX;
int8_t x227 = INT8_MIN;
int32_t x232 = INT32_MIN;
volatile int64_t x236 = INT64_MAX;
int16_t x238 = 110;
static uint64_t x243 = 200727741776LLU;
uint8_t x245 = 47U;
int16_t x249 = INT16_MIN;
int32_t t60 = -732;
volatile uint32_t x253 = 580120U;
static int64_t x261 = INT64_MIN;
int8_t x267 = INT8_MIN;
int8_t x268 = -25;
static volatile int32_t t65 = 1450638;
int32_t t66 = -24;
int64_t x283 = 9892623731180755LL;
volatile uint32_t x286 = 57955584U;
int32_t t68 = -101;
int32_t x290 = -1;
volatile uint8_t x291 = 28U;
int32_t t69 = 171694878;
static int8_t x293 = INT8_MAX;
volatile int32_t x296 = -213368;
uint16_t x306 = UINT16_MAX;
int32_t x308 = INT32_MIN;
uint16_t x311 = UINT16_MAX;
int32_t t74 = -5813682;
uint32_t x317 = UINT32_MAX;
int64_t x318 = INT64_MIN;
static int8_t x329 = INT8_MIN;
volatile int64_t x335 = -172562161LL;
int32_t t79 = 727411036;
int8_t x342 = INT8_MIN;
int16_t x344 = INT16_MAX;
int32_t x346 = INT32_MAX;
static int8_t x350 = 1;
static int64_t x353 = 61367157LL;
volatile uint16_t x354 = 133U;
static uint16_t x355 = 6331U;
int32_t t84 = 1546;
int16_t x361 = 630;
int8_t x363 = INT8_MIN;
int64_t x367 = -1LL;
int32_t t90 = -6598184;
static uint32_t x386 = UINT32_MAX;
int16_t x389 = INT16_MIN;
static uint8_t x391 = 108U;
int8_t x392 = -1;
uint64_t x395 = 6994442813LLU;
int8_t x396 = INT8_MIN;
int16_t x397 = -62;
static int32_t x405 = 2;
uint32_t x406 = 221U;
int64_t x407 = 607651691LL;
static int32_t t96 = 520798568;
volatile int32_t x413 = -1;
int16_t x414 = -10;
volatile int64_t x415 = INT64_MIN;
static int32_t x419 = INT32_MIN;
uint64_t x423 = 50563175937791LLU;
int16_t x424 = 0;
static int32_t x426 = 2699;
static int32_t t102 = 12;
int32_t x440 = -1;
uint8_t x442 = UINT8_MAX;
volatile int64_t x460 = -1LL;
int8_t x462 = -1;
volatile uint64_t x471 = 16753906375515670LLU;
volatile uint16_t x476 = 6U;
volatile int64_t x478 = -52095736283723532LL;
int16_t x486 = -1;
volatile int32_t t115 = 115708;
int32_t x489 = INT32_MAX;
uint16_t x495 = UINT16_MAX;
uint16_t x497 = 217U;
int32_t x502 = 1;
uint8_t x504 = 3U;
uint16_t x505 = UINT16_MAX;
int32_t x508 = -1;
int32_t t120 = 136289;
static uint16_t x524 = 9256U;
int32_t t124 = -29;
uint64_t x534 = 379LLU;
uint8_t x535 = 41U;
int8_t x550 = INT8_MIN;
static int8_t x551 = 6;
int8_t x554 = -1;
int8_t x556 = -1;
uint16_t x564 = 195U;
uint64_t x571 = 1652161978LLU;
int32_t t135 = -5298949;
volatile int8_t x582 = -1;
volatile int32_t t136 = 119;
static volatile int32_t x596 = INT32_MAX;
uint8_t x604 = 8U;
int32_t x608 = -117410377;
volatile int32_t t141 = -1670;
static uint32_t x610 = UINT32_MAX;
int32_t x612 = INT32_MIN;
uint16_t x614 = 1415U;
int64_t x615 = INT64_MIN;
volatile int64_t x631 = 91033562095946103LL;
uint8_t x632 = 34U;
volatile int32_t x637 = 23237934;
static int8_t x639 = INT8_MAX;
volatile uint8_t x644 = 1U;
static int32_t x647 = INT32_MIN;
volatile int32_t t151 = 1;
volatile int16_t x651 = 937;
int8_t x652 = -1;
static uint64_t x653 = 3459255526LLU;
uint16_t x656 = 11U;
static volatile int16_t x657 = INT16_MAX;
int32_t x667 = -1;
volatile uint16_t x670 = 14U;
static volatile int32_t t157 = -219530;
int16_t x678 = INT16_MIN;
uint64_t x679 = UINT64_MAX;
static int32_t x680 = -1;
int16_t x681 = INT16_MIN;
uint64_t x684 = UINT64_MAX;
int32_t t159 = 246024074;
int64_t x687 = -5475317LL;
volatile int8_t x692 = -1;
int32_t t164 = 80207944;
static uint32_t x709 = UINT32_MAX;
volatile int8_t x713 = INT8_MIN;
uint64_t x715 = 116529441340929LLU;
static int32_t x728 = INT32_MAX;
uint16_t x734 = 31U;
uint16_t x737 = 372U;
int32_t t172 = 1547;
int64_t x746 = -260LL;
volatile int32_t x756 = INT32_MAX;
static uint64_t x758 = 10436765735865899LLU;
uint32_t x759 = UINT32_MAX;
int16_t x760 = INT16_MAX;
int8_t x761 = -1;
int8_t x762 = INT8_MIN;
int64_t x765 = INT64_MAX;
uint64_t x770 = UINT64_MAX;
volatile int32_t t180 = 1416;
int16_t x779 = 7959;
uint64_t x781 = 19LLU;
int32_t t183 = -6611;
int8_t x787 = -1;
static int16_t x790 = INT16_MIN;
static uint16_t x798 = 0U;
uint64_t x805 = 8236390673LLU;
int8_t x811 = 0;
static volatile int32_t t190 = 92;
int64_t x818 = INT64_MAX;
int32_t x823 = INT32_MIN;
int32_t t194 = 4064935;
volatile int32_t x832 = INT32_MIN;
uint8_t x835 = UINT8_MAX;


void f0(void) {
    	int64_t x1 = -1LL;
	static int16_t x3 = 6516;
	int16_t x4 = -1;
	volatile int32_t t0 = -2411917;

    t0 = (x1<=(x2-(x3|x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	static uint32_t x6 = UINT32_MAX;
	int8_t x7 = 24;
	int32_t x8 = 1066;
	int32_t t1 = 325;

    t1 = (x5<=(x6-(x7|x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 1291;
	static int32_t x11 = INT32_MIN;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -888;

    t2 = (x9<=(x10-(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 6567376310LLU;
	int16_t x14 = -7526;
	int16_t x15 = INT16_MAX;
	volatile int16_t x16 = -8;
	int32_t t3 = 14053979;

    t3 = (x13<=(x14-(x15|x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1551149482671498LL;
	static volatile int8_t x18 = INT8_MIN;
	static volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -258159;

    t4 = (x17<=(x18-(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = INT64_MAX;
	static volatile int32_t t5 = -497;

    t5 = (x21<=(x22-(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = 0;
	volatile int64_t x27 = 2853892166464552LL;

    t6 = (x25<=(x26-(x27|x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x30 = UINT8_MAX;
	volatile uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 108U;
	int32_t t7 = 203342989;

    t7 = (x29<=(x30-(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 0;
	int8_t x34 = INT8_MAX;
	volatile int32_t x35 = INT32_MIN;
	int8_t x36 = -28;
	int32_t t8 = -12862760;

    t8 = (x33<=(x34-(x35|x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint8_t x38 = 5U;
	int64_t x40 = 6005794052LL;
	volatile int32_t t9 = -7140;

    t9 = (x37<=(x38-(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = -16056029662805994LL;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 941;

    t10 = (x41<=(x42-(x43|x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	int32_t x46 = INT32_MIN;
	volatile uint32_t x48 = 1199U;
	static int32_t t11 = -61;

    t11 = (x45<=(x46-(x47|x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MAX;
	int32_t t12 = 551576641;

    t12 = (x49<=(x50-(x51|x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = -13;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 762;
	static int32_t t13 = 3012473;

    t13 = (x53<=(x54-(x55|x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = UINT16_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = 475864;

    t14 = (x61<=(x62-(x63|x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = INT8_MAX;
	uint16_t x66 = 28335U;
	static int16_t x67 = INT16_MIN;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t15 = 29303;

    t15 = (x65<=(x66-(x67|x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 30U;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int8_t x72 = -1;
	int32_t t16 = -260919673;

    t16 = (x69<=(x70-(x71|x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = -170;
	int16_t x74 = INT16_MAX;
	volatile int8_t x75 = INT8_MAX;
	uint64_t x76 = 2194644902116626LLU;
	int32_t t17 = -198442;

    t17 = (x73<=(x74-(x75|x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	static volatile int8_t x78 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	static int32_t t18 = 130;

    t18 = (x77<=(x78-(x79|x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t19 = -4686;

    t19 = (x81<=(x82-(x83|x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1LL;
	static volatile uint64_t x86 = 1163657640077LLU;
	uint8_t x87 = 30U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -115213;

    t20 = (x85<=(x86-(x87|x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 9828;
	static int64_t x90 = INT64_MIN;
	volatile int64_t x91 = INT64_MAX;
	int32_t t21 = -681851;

    t21 = (x89<=(x90-(x91|x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 98U;
	int64_t x94 = INT64_MIN;
	volatile int16_t x95 = -16;
	int32_t t22 = 7378;

    t22 = (x93<=(x94-(x95|x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = -52LL;
	uint8_t x98 = 54U;
	int8_t x99 = 0;
	static uint16_t x100 = 5556U;
	static volatile int32_t t23 = -65933494;

    t23 = (x97<=(x98-(x99|x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = UINT64_MAX;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t24 = -216576;

    t24 = (x101<=(x102-(x103|x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = 1;
	uint8_t x107 = 20U;
	static int32_t t25 = -122806971;

    t25 = (x105<=(x106-(x107|x108)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = 26;
	volatile uint32_t x110 = 438U;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t t26 = -6863322;

    t26 = (x109<=(x110-(x111|x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x114 = UINT16_MAX;
	volatile int32_t t27 = -49795086;

    t27 = (x113<=(x114-(x115|x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;

    t28 = (x117<=(x118-(x119|x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -1LL;
	uint64_t x122 = 3LLU;
	static volatile int16_t x123 = INT16_MAX;
	volatile uint16_t x124 = 4U;

    t29 = (x121<=(x122-(x123|x124)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = UINT64_MAX;
	int32_t x126 = -1;
	uint64_t x127 = 7LLU;
	static uint32_t x128 = 458061676U;
	static int32_t t30 = -8550;

    t30 = (x125<=(x126-(x127|x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	int8_t x132 = INT8_MAX;

    t31 = (x129<=(x130-(x131|x132)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	uint32_t x134 = 2U;
	static uint8_t x135 = 13U;
	int8_t x136 = INT8_MIN;
	int32_t t32 = -452;

    t32 = (x133<=(x134-(x135|x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = UINT32_MAX;
	static int8_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	int32_t t33 = -802032;

    t33 = (x137<=(x138-(x139|x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = INT32_MAX;
	int32_t x142 = INT32_MIN;
	int16_t x143 = 1;
	uint64_t x144 = 199856517LLU;

    t34 = (x141<=(x142-(x143|x144)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = 53043653644342335LL;
	volatile int8_t x147 = -1;
	int64_t x148 = 1539941445501756LL;
	volatile int32_t t35 = -12744220;

    t35 = (x145<=(x146-(x147|x148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -4022872LL;
	static uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MIN;
	volatile int32_t t36 = 350130;

    t36 = (x149<=(x150-(x151|x152)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = -26052319LL;
	uint64_t x154 = 27503432548727299LLU;
	int64_t x155 = -1LL;
	volatile int8_t x156 = 1;
	volatile int32_t t37 = -16615;

    t37 = (x153<=(x154-(x155|x156)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 896258U;
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	int32_t t38 = 1;

    t38 = (x157<=(x158-(x159|x160)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -25646;

    t39 = (x161<=(x162-(x163|x164)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	static volatile int32_t t40 = 10813162;

    t40 = (x165<=(x166-(x167|x168)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	uint8_t x170 = 1U;
	uint32_t x171 = 1963670037U;
	static volatile int32_t t41 = 1;

    t41 = (x169<=(x170-(x171|x172)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x173 = 38U;
	uint32_t x174 = UINT32_MAX;
	uint32_t x175 = 21676U;
	uint64_t x176 = 228511504498LLU;
	int32_t t42 = 3331;

    t42 = (x173<=(x174-(x175|x176)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = 2012U;
	int16_t x179 = INT16_MIN;
	int32_t t43 = 195;

    t43 = (x177<=(x178-(x179|x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x181 = 7U;
	uint64_t x182 = 3047310678089LLU;
	uint32_t x183 = 5990203U;
	static int16_t x184 = -1;
	volatile int32_t t44 = -16713121;

    t44 = (x181<=(x182-(x183|x184)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = 83;
	volatile int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t45 = -51886968;

    t45 = (x185<=(x186-(x187|x188)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int8_t x190 = 29;
	volatile int8_t x191 = -1;
	volatile int32_t t46 = 3131;

    t46 = (x189<=(x190-(x191|x192)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x193 = INT8_MAX;
	int16_t x195 = INT16_MIN;
	static int8_t x196 = 0;

    t47 = (x193<=(x194-(x195|x196)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MAX;
	int16_t x198 = 789;
	uint16_t x199 = 60U;
	volatile int32_t x200 = -3852;
	static volatile int32_t t48 = -702890;

    t48 = (x197<=(x198-(x199|x200)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	static int8_t x204 = INT8_MIN;
	int32_t t49 = 281770;

    t49 = (x201<=(x202-(x203|x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x206 = 250958318U;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;

    t50 = (x205<=(x206-(x207|x208)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -33;
	static int8_t x210 = INT8_MAX;
	volatile int32_t t51 = 108;

    t51 = (x209<=(x210-(x211|x212)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x218 = 1481;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t52 = 910;

    t52 = (x217<=(x218-(x219|x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 1LLU;
	int64_t x222 = 465460282LL;
	uint8_t x224 = UINT8_MAX;
	int32_t t53 = 4624;

    t53 = (x221<=(x222-(x223|x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x225 = -3;
	int8_t x228 = INT8_MIN;
	int32_t t54 = 220988;

    t54 = (x225<=(x226-(x227|x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 26183796155663311LL;
	volatile int64_t x230 = 127364307LL;
	int8_t x231 = INT8_MIN;
	volatile int32_t t55 = 4115564;

    t55 = (x229<=(x230-(x231|x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = INT32_MIN;
	static volatile int32_t x234 = 90994;
	int8_t x235 = INT8_MIN;
	int32_t t56 = 10145;

    t56 = (x233<=(x234-(x235|x236)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x237 = 45571498U;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = 4;
	static int32_t t57 = -11855;

    t57 = (x237<=(x238-(x239|x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -1LL;
	uint64_t x242 = 76035LLU;
	uint16_t x244 = 413U;
	volatile int32_t t58 = 1;

    t58 = (x241<=(x242-(x243|x244)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x246 = INT16_MIN;
	uint16_t x247 = UINT16_MAX;
	static int32_t x248 = -3417;
	int32_t t59 = 182795931;

    t59 = (x245<=(x246-(x247|x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x250 = UINT32_MAX;
	uint16_t x251 = 28711U;
	volatile int16_t x252 = INT16_MIN;

    t60 = (x249<=(x250-(x251|x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x254 = INT64_MIN;
	int16_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = -6218;

    t61 = (x253<=(x254-(x255|x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t62 = -25581;

    t62 = (x257<=(x258-(x259|x260)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x262 = 1200456U;
	int16_t x263 = INT16_MAX;
	int16_t x264 = 1;
	int32_t t63 = 389862;

    t63 = (x261<=(x262-(x263|x264)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	uint16_t x266 = 46U;
	static int32_t t64 = 6253;

    t64 = (x265<=(x266-(x267|x268)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x269 = INT32_MAX;
	static int64_t x270 = -11LL;
	volatile uint8_t x271 = 6U;
	volatile int32_t x272 = -1;

    t65 = (x269<=(x270-(x271|x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x273 = 4947;
	static int64_t x274 = 57685410761606337LL;
	uint32_t x275 = 1014215573U;
	int32_t x276 = 104078;

    t66 = (x273<=(x274-(x275|x276)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = INT16_MAX;
	uint16_t x282 = 7462U;
	static uint16_t x284 = 1U;
	static int32_t t67 = 6;

    t67 = (x281<=(x282-(x283|x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MAX;
	static int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;

    t68 = (x285<=(x286-(x287|x288)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = INT32_MAX;
	volatile int8_t x292 = INT8_MIN;

    t69 = (x289<=(x290-(x291|x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x294 = INT64_MAX;
	volatile uint64_t x295 = UINT64_MAX;
	int32_t t70 = -71;

    t70 = (x293<=(x294-(x295|x296)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x297 = INT16_MAX;
	static uint64_t x298 = 766417267LLU;
	int16_t x299 = INT16_MIN;
	volatile uint8_t x300 = 5U;
	int32_t t71 = -30206;

    t71 = (x297<=(x298-(x299|x300)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;
	int64_t x304 = -1LL;
	static int32_t t72 = 187837;

    t72 = (x301<=(x302-(x303|x304)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -4015;
	uint64_t x307 = 86533945LLU;
	volatile int32_t t73 = 101;

    t73 = (x305<=(x306-(x307|x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x309 = 5743510LL;
	static uint8_t x310 = 31U;
	int64_t x312 = -318074251201805434LL;

    t74 = (x309<=(x310-(x311|x312)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = 1;
	uint8_t x314 = UINT8_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t75 = -33486;

    t75 = (x313<=(x314-(x315|x316)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t76 = -482356544;

    t76 = (x317<=(x318-(x319|x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MIN;
	uint16_t x326 = 57U;
	volatile int64_t x327 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;
	static int32_t t77 = -8;

    t77 = (x325<=(x326-(x327|x328)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t78 = -4;

    t78 = (x329<=(x330-(x331|x332)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = -1;
	int32_t x334 = INT32_MIN;
	int32_t x336 = INT32_MIN;

    t79 = (x333<=(x334-(x335|x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x337 = INT32_MAX;
	int64_t x338 = 4200819426669285330LL;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -1;
	volatile int32_t t80 = 495;

    t80 = (x337<=(x338-(x339|x340)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x341 = -2787107230080467LL;
	static volatile int16_t x343 = -79;
	int32_t t81 = 7;

    t81 = (x341<=(x342-(x343|x344)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = INT64_MIN;
	volatile int32_t x347 = INT32_MIN;
	int64_t x348 = 10587672048498143LL;
	volatile int32_t t82 = 5;

    t82 = (x345<=(x346-(x347|x348)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x349 = 27U;
	uint16_t x351 = 20687U;
	static int32_t x352 = INT32_MIN;
	static int32_t t83 = -181054946;

    t83 = (x349<=(x350-(x351|x352)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x356 = -1;

    t84 = (x353<=(x354-(x355|x356)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x357 = -1;
	int32_t x358 = -1001548;
	uint16_t x359 = 59U;
	int64_t x360 = INT64_MIN;
	volatile int32_t t85 = -4701;

    t85 = (x357<=(x358-(x359|x360)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x362 = -330025;
	int16_t x364 = INT16_MIN;
	static int32_t t86 = -201;

    t86 = (x361<=(x362-(x363|x364)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -620;
	int16_t x368 = INT16_MIN;
	int32_t t87 = -16;

    t87 = (x365<=(x366-(x367|x368)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = 6;
	int32_t x371 = INT32_MAX;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t88 = -284643162;

    t88 = (x369<=(x370-(x371|x372)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x377 = 11224U;
	int32_t x378 = -1877;
	int8_t x379 = -1;
	static int32_t x380 = 158;
	static volatile int32_t t89 = 252802362;

    t89 = (x377<=(x378-(x379|x380)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x381 = -1LL;
	uint32_t x382 = 396U;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = 90;

    t90 = (x381<=(x382-(x383|x384)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x385 = INT8_MIN;
	uint32_t x387 = 2934U;
	int8_t x388 = -2;
	int32_t t91 = -915580;

    t91 = (x385<=(x386-(x387|x388)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x390 = 17993829457LLU;
	volatile int32_t t92 = 338410;

    t92 = (x389<=(x390-(x391|x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	static volatile int8_t x394 = INT8_MIN;
	volatile int32_t t93 = 26;

    t93 = (x393<=(x394-(x395|x396)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x398 = 1U;
	uint64_t x399 = 94315756024706LLU;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t94 = -97324393;

    t94 = (x397<=(x398-(x399|x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x401 = UINT16_MAX;
	int16_t x402 = 0;
	static int8_t x403 = INT8_MIN;
	uint8_t x404 = 101U;
	int32_t t95 = -578009;

    t95 = (x401<=(x402-(x403|x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x408 = INT8_MIN;

    t96 = (x405<=(x406-(x407|x408)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = INT8_MIN;
	static uint32_t x410 = UINT32_MAX;
	int32_t x411 = -230126484;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t97 = -2;

    t97 = (x409<=(x410-(x411|x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x416 = INT64_MAX;
	int32_t t98 = 9;

    t98 = (x413<=(x414-(x415|x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x417 = 23U;
	uint8_t x418 = 35U;
	static volatile int8_t x420 = INT8_MIN;
	static int32_t t99 = 1;

    t99 = (x417<=(x418-(x419|x420)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x421 = 2U;
	static int8_t x422 = INT8_MIN;
	volatile int32_t t100 = -12;

    t100 = (x421<=(x422-(x423|x424)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x427 = INT8_MIN;
	int64_t x428 = -30964202290676842LL;
	int32_t t101 = -9002917;

    t101 = (x425<=(x426-(x427|x428)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x433 = 3192;
	uint16_t x434 = UINT16_MAX;
	static uint32_t x435 = 3929U;
	int8_t x436 = -1;

    t102 = (x433<=(x434-(x435|x436)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x437 = -1057510;
	int16_t x438 = -6220;
	int64_t x439 = 126102046107946LL;
	volatile int32_t t103 = 1379;

    t103 = (x437<=(x438-(x439|x440)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = INT8_MIN;
	int32_t x443 = INT32_MAX;
	int64_t x444 = INT64_MAX;
	volatile int32_t t104 = 13;

    t104 = (x441<=(x442-(x443|x444)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x445 = INT32_MAX;
	int32_t x446 = INT32_MIN;
	uint64_t x447 = 2195LLU;
	volatile int8_t x448 = INT8_MAX;
	int32_t t105 = -356;

    t105 = (x445<=(x446-(x447|x448)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x449 = 1U;
	int16_t x450 = -257;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MAX;
	int32_t t106 = -50;

    t106 = (x449<=(x450-(x451|x452)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x453 = 1883465U;
	int64_t x454 = 29LL;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = -1;
	volatile int32_t t107 = -91485149;

    t107 = (x453<=(x454-(x455|x456)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = -7763LL;
	volatile int8_t x459 = INT8_MAX;
	volatile int32_t t108 = -42339;

    t108 = (x457<=(x458-(x459|x460)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x461 = UINT8_MAX;
	static int16_t x463 = -1;
	int8_t x464 = -28;
	int32_t t109 = 7;

    t109 = (x461<=(x462-(x463|x464)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x465 = UINT32_MAX;
	int8_t x466 = INT8_MIN;
	static volatile uint16_t x467 = 157U;
	uint64_t x468 = 1864LLU;
	int32_t t110 = -203;

    t110 = (x465<=(x466-(x467|x468)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MAX;
	uint16_t x472 = 15U;
	volatile int32_t t111 = 448958851;

    t111 = (x469<=(x470-(x471|x472)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x473 = 7U;
	static int8_t x474 = INT8_MIN;
	volatile int8_t x475 = INT8_MAX;
	volatile int32_t t112 = 1551;

    t112 = (x473<=(x474-(x475|x476)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x477 = INT64_MIN;
	uint8_t x479 = 5U;
	int16_t x480 = 295;
	int32_t t113 = 470533683;

    t113 = (x477<=(x478-(x479|x480)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -1;
	int16_t x484 = INT16_MIN;
	int32_t t114 = -250;

    t114 = (x481<=(x482-(x483|x484)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x485 = 6U;
	uint64_t x487 = 193982725LLU;
	volatile int8_t x488 = INT8_MAX;

    t115 = (x485<=(x486-(x487|x488)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x490 = 1;
	uint32_t x491 = 388106134U;
	uint64_t x492 = 1279872LLU;
	volatile int32_t t116 = 8015537;

    t116 = (x489<=(x490-(x491|x492)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MAX;
	uint64_t x494 = 15946688697LLU;
	int32_t x496 = -1;
	volatile int32_t t117 = 90427630;

    t117 = (x493<=(x494-(x495|x496)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x498 = -5;
	int64_t x499 = INT64_MIN;
	int16_t x500 = 1;
	int32_t t118 = 22373;

    t118 = (x497<=(x498-(x499|x500)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = -226368793LL;
	volatile int8_t x503 = -1;
	volatile int32_t t119 = 331264;

    t119 = (x501<=(x502-(x503|x504)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x506 = -3106;
	static int8_t x507 = -1;

    t120 = (x505<=(x506-(x507|x508)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x509 = 3716U;
	int32_t x510 = -1;
	static uint8_t x511 = 127U;
	int8_t x512 = INT8_MAX;
	int32_t t121 = 30671;

    t121 = (x509<=(x510-(x511|x512)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x517 = 6U;
	int16_t x518 = INT16_MIN;
	volatile int64_t x519 = INT64_MIN;
	int64_t x520 = 1352422380823LL;
	int32_t t122 = -229526512;

    t122 = (x517<=(x518-(x519|x520)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	uint64_t x523 = 2913945157005LLU;
	volatile int32_t t123 = 9408799;

    t123 = (x521<=(x522-(x523|x524)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x525 = INT16_MAX;
	uint8_t x526 = 50U;
	volatile int64_t x527 = -124556833159423LL;
	uint16_t x528 = 7U;

    t124 = (x525<=(x526-(x527|x528)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x529 = INT16_MAX;
	uint8_t x530 = 5U;
	int8_t x531 = -1;
	int64_t x532 = INT64_MIN;
	int32_t t125 = 118492922;

    t125 = (x529<=(x530-(x531|x532)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x533 = -49359487513704749LL;
	volatile int8_t x536 = -1;
	volatile int32_t t126 = 52583688;

    t126 = (x533<=(x534-(x535|x536)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x537 = UINT16_MAX;
	uint64_t x538 = 4960LLU;
	int32_t x539 = INT32_MIN;
	uint64_t x540 = 236073706807219LLU;
	int32_t t127 = 11;

    t127 = (x537<=(x538-(x539|x540)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = INT32_MIN;
	uint64_t x542 = 240LLU;
	uint8_t x543 = 68U;
	int32_t x544 = INT32_MIN;
	volatile int32_t t128 = 9807346;

    t128 = (x541<=(x542-(x543|x544)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x545 = -1;
	static volatile int64_t x546 = 104821LL;
	volatile int64_t x547 = INT64_MAX;
	static int32_t x548 = 78748;
	volatile int32_t t129 = 3551;

    t129 = (x545<=(x546-(x547|x548)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = 2051847255LLU;
	volatile int64_t x552 = -667814217779LL;
	int32_t t130 = 10205509;

    t130 = (x549<=(x550-(x551|x552)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x553 = INT64_MIN;
	uint16_t x555 = 734U;
	int32_t t131 = -50027;

    t131 = (x553<=(x554-(x555|x556)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x561 = 479U;
	int16_t x562 = INT16_MAX;
	uint32_t x563 = 2U;
	volatile int32_t t132 = -74886;

    t132 = (x561<=(x562-(x563|x564)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x565 = -1LL;
	uint16_t x566 = UINT16_MAX;
	int64_t x567 = INT64_MIN;
	volatile uint32_t x568 = 55959117U;
	volatile int32_t t133 = 85812515;

    t133 = (x565<=(x566-(x567|x568)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x569 = -1;
	uint64_t x570 = UINT64_MAX;
	int64_t x572 = -1LL;
	int32_t t134 = -3139863;

    t134 = (x569<=(x570-(x571|x572)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x573 = INT32_MIN;
	static int64_t x574 = -1LL;
	uint32_t x575 = 67923U;
	static int16_t x576 = INT16_MIN;

    t135 = (x573<=(x574-(x575|x576)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x581 = -1;
	uint8_t x583 = 74U;
	uint16_t x584 = UINT16_MAX;

    t136 = (x581<=(x582-(x583|x584)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x585 = -1;
	volatile int8_t x586 = 63;
	volatile int32_t x587 = INT32_MIN;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t137 = 15;

    t137 = (x585<=(x586-(x587|x588)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x593 = 5U;
	int32_t x594 = -1;
	int64_t x595 = INT64_MAX;
	int32_t t138 = 1321681;

    t138 = (x593<=(x594-(x595|x596)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x598 = -242648895;
	uint64_t x599 = 19458127LLU;
	uint64_t x600 = 3215303LLU;
	int32_t t139 = 1854342;

    t139 = (x597<=(x598-(x599|x600)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x601 = -298510703603353LL;
	volatile int16_t x602 = INT16_MIN;
	int16_t x603 = -1;
	int32_t t140 = -3612;

    t140 = (x601<=(x602-(x603|x604)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x605 = 120182986090980LLU;
	static uint32_t x606 = 32395U;
	int64_t x607 = -1399837390315LL;

    t141 = (x605<=(x606-(x607|x608)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x609 = 1639U;
	volatile int16_t x611 = INT16_MAX;
	volatile int32_t t142 = -29616;

    t142 = (x609<=(x610-(x611|x612)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = UINT16_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t143 = -267009;

    t143 = (x613<=(x614-(x615|x616)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x617 = 2667998U;
	uint64_t x618 = 257923LLU;
	int32_t x619 = INT32_MIN;
	int8_t x620 = INT8_MIN;
	int32_t t144 = -46588;

    t144 = (x617<=(x618-(x619|x620)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x621 = INT64_MIN;
	int16_t x622 = 13;
	uint16_t x623 = UINT16_MAX;
	int8_t x624 = INT8_MAX;
	int32_t t145 = -579635509;

    t145 = (x621<=(x622-(x623|x624)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x625 = 259266LLU;
	uint8_t x626 = 3U;
	int8_t x627 = -1;
	uint8_t x628 = 3U;
	volatile int32_t t146 = -42450275;

    t146 = (x625<=(x626-(x627|x628)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x629 = -11703;
	volatile int32_t x630 = INT32_MAX;
	volatile int32_t t147 = -95057587;

    t147 = (x629<=(x630-(x631|x632)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x633 = 1582LLU;
	volatile uint32_t x634 = UINT32_MAX;
	int16_t x635 = -1;
	uint8_t x636 = 49U;
	volatile int32_t t148 = -253677739;

    t148 = (x633<=(x634-(x635|x636)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x638 = 16;
	int16_t x640 = INT16_MAX;
	volatile int32_t t149 = -81;

    t149 = (x637<=(x638-(x639|x640)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x641 = -336;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = 2050475340345003121LLU;
	volatile int32_t t150 = 3298290;

    t150 = (x641<=(x642-(x643|x644)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x645 = INT64_MAX;
	int32_t x646 = -106806;
	static volatile int32_t x648 = INT32_MIN;

    t151 = (x645<=(x646-(x647|x648)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x649 = 13;
	static int8_t x650 = INT8_MIN;
	static volatile int32_t t152 = -12129526;

    t152 = (x649<=(x650-(x651|x652)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x654 = 920850U;
	uint32_t x655 = 804032221U;
	volatile int32_t t153 = -287438938;

    t153 = (x653<=(x654-(x655|x656)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x658 = -1LL;
	volatile int64_t x659 = INT64_MAX;
	static int64_t x660 = 269663974LL;
	int32_t t154 = -932;

    t154 = (x657<=(x658-(x659|x660)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x665 = UINT64_MAX;
	volatile int16_t x666 = 590;
	uint32_t x668 = 14460U;
	static int32_t t155 = -475;

    t155 = (x665<=(x666-(x667|x668)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x669 = UINT8_MAX;
	int16_t x671 = INT16_MAX;
	volatile int8_t x672 = -1;
	volatile int32_t t156 = 23280;

    t156 = (x669<=(x670-(x671|x672)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x673 = 0U;
	uint8_t x674 = UINT8_MAX;
	int32_t x675 = -1;
	int16_t x676 = INT16_MAX;

    t157 = (x673<=(x674-(x675|x676)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x677 = INT8_MIN;
	static volatile int32_t t158 = -976567;

    t158 = (x677<=(x678-(x679|x680)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x682 = -18752829103280121LL;
	static uint32_t x683 = 2053775481U;

    t159 = (x681<=(x682-(x683|x684)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x685 = INT32_MAX;
	static int32_t x686 = -1;
	static int64_t x688 = INT64_MIN;
	static int32_t t160 = -321239889;

    t160 = (x685<=(x686-(x687|x688)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x689 = INT8_MIN;
	volatile int16_t x690 = INT16_MIN;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t t161 = -1;

    t161 = (x689<=(x690-(x691|x692)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x693 = INT64_MIN;
	int16_t x694 = -1832;
	volatile uint64_t x695 = UINT64_MAX;
	static int16_t x696 = INT16_MAX;
	int32_t t162 = -6686;

    t162 = (x693<=(x694-(x695|x696)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x697 = -3;
	volatile uint16_t x698 = 4U;
	uint64_t x699 = UINT64_MAX;
	int16_t x700 = INT16_MIN;
	int32_t t163 = 1961;

    t163 = (x697<=(x698-(x699|x700)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = INT16_MAX;
	uint8_t x703 = 0U;
	static int16_t x704 = -1;

    t164 = (x701<=(x702-(x703|x704)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x710 = 198212U;
	uint16_t x711 = 830U;
	volatile int8_t x712 = INT8_MIN;
	volatile int32_t t165 = -7;

    t165 = (x709<=(x710-(x711|x712)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x714 = 3U;
	uint8_t x716 = UINT8_MAX;
	int32_t t166 = -84086853;

    t166 = (x713<=(x714-(x715|x716)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint32_t x718 = 4U;
	uint8_t x719 = 4U;
	volatile int32_t x720 = 11879013;
	volatile int32_t t167 = -125;

    t167 = (x717<=(x718-(x719|x720)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x721 = INT8_MAX;
	uint16_t x722 = 1U;
	int64_t x723 = 0LL;
	int16_t x724 = -1;
	volatile int32_t t168 = 203053;

    t168 = (x721<=(x722-(x723|x724)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x725 = 684U;
	int64_t x726 = INT64_MAX;
	uint8_t x727 = 20U;
	volatile int32_t t169 = -1426;

    t169 = (x725<=(x726-(x727|x728)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x729 = INT32_MIN;
	int16_t x730 = 1;
	int64_t x731 = -1LL;
	uint64_t x732 = UINT64_MAX;
	volatile int32_t t170 = -8093056;

    t170 = (x729<=(x730-(x731|x732)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = -1;
	int8_t x735 = INT8_MAX;
	int64_t x736 = -1LL;
	volatile int32_t t171 = -37290580;

    t171 = (x733<=(x734-(x735|x736)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x738 = INT16_MIN;
	static int8_t x739 = -60;
	int32_t x740 = INT32_MIN;

    t172 = (x737<=(x738-(x739|x740)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x741 = INT64_MIN;
	uint8_t x742 = UINT8_MAX;
	int64_t x743 = INT64_MIN;
	static int32_t x744 = INT32_MIN;
	int32_t t173 = 0;

    t173 = (x741<=(x742-(x743|x744)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x745 = 610396904;
	uint16_t x747 = 29U;
	static int64_t x748 = -1LL;
	static int32_t t174 = -2;

    t174 = (x745<=(x746-(x747|x748)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x749 = -1;
	static int32_t x750 = INT32_MIN;
	int8_t x751 = -14;
	int8_t x752 = -1;
	volatile int32_t t175 = 3;

    t175 = (x749<=(x750-(x751|x752)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x753 = -100089LL;
	static int16_t x754 = INT16_MIN;
	uint32_t x755 = 3356U;
	volatile int32_t t176 = 7;

    t176 = (x753<=(x754-(x755|x756)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x757 = INT8_MIN;
	int32_t t177 = -2240;

    t177 = (x757<=(x758-(x759|x760)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x763 = -1;
	static volatile int16_t x764 = INT16_MIN;
	int32_t t178 = 5512621;

    t178 = (x761<=(x762-(x763|x764)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x766 = INT32_MIN;
	int64_t x767 = INT64_MIN;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t179 = 17;

    t179 = (x765<=(x766-(x767|x768)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x769 = UINT16_MAX;
	int64_t x771 = 62LL;
	int16_t x772 = INT16_MAX;

    t180 = (x769<=(x770-(x771|x772)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x773 = -24;
	int8_t x774 = INT8_MIN;
	uint32_t x775 = UINT32_MAX;
	uint8_t x776 = UINT8_MAX;
	int32_t t181 = -47;

    t181 = (x773<=(x774-(x775|x776)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x777 = -1;
	volatile uint8_t x778 = UINT8_MAX;
	int32_t x780 = INT32_MIN;
	static int32_t t182 = 608157511;

    t182 = (x777<=(x778-(x779|x780)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x782 = -1;
	uint64_t x783 = UINT64_MAX;
	static uint16_t x784 = 27201U;

    t183 = (x781<=(x782-(x783|x784)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x785 = -1959153062810961668LL;
	uint32_t x786 = UINT32_MAX;
	uint8_t x788 = 121U;
	int32_t t184 = 88;

    t184 = (x785<=(x786-(x787|x788)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x789 = UINT32_MAX;
	uint64_t x791 = 4046190954LLU;
	static volatile int64_t x792 = 383769LL;
	int32_t t185 = -501532;

    t185 = (x789<=(x790-(x791|x792)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x793 = UINT64_MAX;
	int8_t x794 = 1;
	static uint16_t x795 = 7930U;
	int16_t x796 = INT16_MAX;
	volatile int32_t t186 = 195374;

    t186 = (x793<=(x794-(x795|x796)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	static volatile uint16_t x799 = 790U;
	int32_t x800 = -1;
	int32_t t187 = 13;

    t187 = (x797<=(x798-(x799|x800)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x801 = 3638175305LLU;
	int8_t x802 = INT8_MIN;
	int64_t x803 = INT64_MIN;
	volatile int8_t x804 = INT8_MAX;
	int32_t t188 = -127;

    t188 = (x801<=(x802-(x803|x804)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	int32_t x808 = -2;
	volatile int32_t t189 = 188;

    t189 = (x805<=(x806-(x807|x808)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x809 = UINT32_MAX;
	static int16_t x810 = INT16_MIN;
	int8_t x812 = INT8_MIN;

    t190 = (x809<=(x810-(x811|x812)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x813 = 0U;
	static int32_t x814 = 483;
	int16_t x815 = -30;
	int32_t x816 = 6206;
	int32_t t191 = -80162896;

    t191 = (x813<=(x814-(x815|x816)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x817 = INT32_MIN;
	uint16_t x819 = 6U;
	static int64_t x820 = 436633632884LL;
	static volatile int32_t t192 = 6600;

    t192 = (x817<=(x818-(x819|x820)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile int64_t x822 = INT64_MIN;
	static volatile uint64_t x824 = UINT64_MAX;
	static int32_t t193 = 13681;

    t193 = (x821<=(x822-(x823|x824)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x825 = INT8_MAX;
	int8_t x826 = -1;
	uint8_t x827 = UINT8_MAX;
	uint8_t x828 = UINT8_MAX;

    t194 = (x825<=(x826-(x827|x828)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x829 = INT64_MIN;
	uint32_t x830 = UINT32_MAX;
	int16_t x831 = INT16_MIN;
	volatile int32_t t195 = -306154567;

    t195 = (x829<=(x830-(x831|x832)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x833 = INT32_MIN;
	uint8_t x834 = 2U;
	static uint16_t x836 = 86U;
	int32_t t196 = 56286;

    t196 = (x833<=(x834-(x835|x836)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x837 = INT16_MAX;
	static int32_t x838 = INT32_MIN;
	volatile int64_t x839 = INT64_MIN;
	uint64_t x840 = UINT64_MAX;
	volatile int32_t t197 = 515553;

    t197 = (x837<=(x838-(x839|x840)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x841 = 183990854214LL;
	volatile int64_t x842 = 1440011682LL;
	int64_t x843 = -1LL;
	int16_t x844 = -1;
	int32_t t198 = -1186;

    t198 = (x841<=(x842-(x843|x844)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x845 = 7U;
	uint8_t x846 = UINT8_MAX;
	volatile uint64_t x847 = 782801918LLU;
	int16_t x848 = INT16_MIN;
	int32_t t199 = -78554366;

    t199 = (x845<=(x846-(x847|x848)));

    if (t199 != 1) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

