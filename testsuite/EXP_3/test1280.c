
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

int8_t x1 = INT8_MIN;
int16_t x14 = -1;
static int8_t x15 = -51;
static volatile int16_t x19 = INT16_MIN;
int32_t x20 = -1;
static uint32_t x25 = UINT32_MAX;
uint32_t x34 = UINT32_MAX;
static int64_t x42 = -1LL;
int8_t x46 = -1;
int16_t x51 = -5646;
volatile int32_t x52 = INT32_MAX;
static uint32_t x56 = UINT32_MAX;
static uint8_t x63 = 11U;
int8_t x69 = INT8_MIN;
int64_t x70 = -18877721274LL;
int16_t x76 = -3345;
int32_t t18 = 159;
int32_t t19 = 3793916;
int32_t t21 = 364;
uint32_t x100 = UINT32_MAX;
static volatile int8_t x105 = INT8_MAX;
static int16_t x108 = 462;
uint8_t x116 = 5U;
int16_t x118 = INT16_MIN;
int32_t x123 = INT32_MIN;
int64_t x126 = INT64_MIN;
volatile int32_t t32 = 0;
int64_t x137 = INT64_MAX;
volatile int32_t t34 = -57640;
int16_t x141 = INT16_MIN;
volatile int32_t t35 = 828144134;
uint16_t x146 = UINT16_MAX;
int16_t x155 = -1228;
int32_t x156 = INT32_MAX;
volatile int16_t x158 = 4;
int32_t t39 = 1006056974;
uint8_t x165 = 0U;
volatile int16_t x171 = -1;
volatile uint32_t x175 = UINT32_MAX;
static volatile int64_t x177 = INT64_MIN;
int32_t t45 = -212122;
volatile int32_t t46 = -5300;
static int64_t x190 = -1118LL;
volatile int32_t t47 = -163;
uint8_t x193 = UINT8_MAX;
int64_t x198 = INT64_MIN;
volatile int32_t t49 = 579;
volatile int64_t x202 = 2129990LL;
static volatile int8_t x203 = -17;
int64_t x205 = 3988774784795LL;
volatile int32_t t53 = -70;
volatile uint64_t x218 = 705943LLU;
int64_t x219 = 563104592444829540LL;
uint64_t x220 = 267597087LLU;
uint32_t x228 = UINT32_MAX;
static int16_t x232 = -251;
static volatile int32_t x235 = 614185310;
volatile uint8_t x236 = 1U;
volatile int32_t t59 = 78800971;
static uint16_t x243 = 54U;
int16_t x244 = 0;
int32_t t61 = 2088711;
volatile uint16_t x249 = 3656U;
volatile int64_t x253 = -207693991LL;
int32_t x255 = INT32_MIN;
volatile uint8_t x259 = 2U;
int16_t x265 = INT16_MIN;
int8_t x268 = -1;
volatile int32_t x269 = INT32_MIN;
int32_t t67 = -449770849;
int8_t x273 = -9;
static int32_t t68 = -10730;
static uint16_t x287 = UINT16_MAX;
volatile int32_t t72 = 8654054;
static int8_t x294 = INT8_MAX;
static int8_t x296 = INT8_MAX;
int8_t x300 = INT8_MIN;
int32_t x303 = -1;
volatile int32_t t76 = -4221;
int32_t t78 = 1;
int8_t x318 = INT8_MIN;
int32_t x322 = INT32_MIN;
int64_t x327 = INT64_MIN;
volatile int32_t t81 = 107;
volatile uint64_t x339 = UINT64_MAX;
int32_t x341 = INT32_MAX;
int8_t x344 = INT8_MIN;
volatile int32_t t86 = -50;
volatile int16_t x353 = INT16_MIN;
int8_t x356 = INT8_MAX;
int32_t t88 = -347360;
static int8_t x357 = 7;
int64_t x358 = -43637281LL;
int16_t x359 = -34;
volatile int32_t t92 = 14881;
uint16_t x373 = 101U;
uint32_t x377 = 875112U;
int64_t x380 = -265130640992262554LL;
int32_t t95 = 1515;
int8_t x386 = -1;
static int8_t x402 = -6;
static volatile int64_t x403 = 473766LL;
int8_t x405 = 1;
volatile uint8_t x406 = 1U;
int64_t x408 = INT64_MIN;
int32_t x412 = -177;
volatile int32_t t102 = 1779889;
static volatile int32_t x413 = INT32_MIN;
uint8_t x414 = 9U;
static int32_t x416 = -33;
volatile uint64_t x419 = UINT64_MAX;
static int16_t x420 = INT16_MAX;
volatile int32_t t106 = 378866;
int32_t t108 = 640;
volatile int32_t x438 = INT32_MIN;
int64_t x440 = INT64_MAX;
int8_t x441 = INT8_MAX;
volatile uint8_t x442 = 1U;
static int32_t t110 = -18758;
int64_t x446 = -1738350572LL;
static int32_t t111 = 1;
static volatile int32_t x449 = INT32_MAX;
volatile int8_t x453 = INT8_MIN;
static volatile int32_t t116 = 42;
uint16_t x476 = 13U;
volatile uint8_t x477 = 43U;
int16_t x478 = 0;
uint16_t x484 = UINT16_MAX;
volatile int16_t x488 = INT16_MIN;
int8_t x489 = 42;
volatile int64_t x492 = -7694185LL;
int32_t t122 = -1538950;
int64_t x493 = -1LL;
uint64_t x495 = 3653316188977LLU;
uint16_t x496 = 9896U;
int32_t t124 = -1630750;
static uint8_t x502 = UINT8_MAX;
int32_t x506 = 65086;
int32_t t126 = 261;
int32_t t128 = -15;
uint32_t x531 = UINT32_MAX;
int32_t x536 = INT32_MIN;
int8_t x537 = -1;
uint32_t x545 = UINT32_MAX;
uint16_t x547 = UINT16_MAX;
uint16_t x551 = 438U;
int32_t x552 = INT32_MIN;
int32_t t138 = 418946;
int64_t x559 = INT64_MIN;
static int16_t x563 = -1;
volatile int16_t x567 = INT16_MAX;
uint32_t x568 = 82U;
int8_t x569 = INT8_MAX;
static int64_t x570 = INT64_MIN;
static int32_t t143 = -34;
static uint32_t x584 = 38612693U;
int32_t t145 = -7889302;
volatile int8_t x589 = -1;
int64_t x595 = INT64_MAX;
int64_t x604 = INT64_MAX;
int32_t x605 = INT32_MIN;
volatile int64_t x607 = INT64_MIN;
int32_t t151 = 31;
uint64_t x609 = 19LLU;
volatile int32_t t152 = 156564;
int64_t x614 = -785859LL;
uint64_t x616 = 9960238656843569LLU;
uint32_t x618 = 219231U;
volatile int32_t t156 = 0;
uint64_t x632 = 81154724528913117LLU;
int64_t x639 = INT64_MIN;
static int32_t t160 = -28;
int8_t x647 = INT8_MAX;
int64_t x649 = -3578740151LL;
static volatile int64_t x651 = INT64_MAX;
int64_t x664 = -1LL;
uint8_t x669 = 92U;
static int32_t t167 = -703;
uint64_t x677 = 599LLU;
static int16_t x684 = INT16_MIN;
uint8_t x688 = 1U;
static volatile int64_t x699 = INT64_MIN;
int8_t x700 = -1;
static uint16_t x701 = UINT16_MAX;
static volatile uint16_t x705 = 56U;
volatile int32_t t177 = -590313;
static volatile uint64_t x721 = UINT64_MAX;
volatile int8_t x722 = -30;
static int64_t x724 = -1LL;
uint64_t x734 = 22999662714058LLU;
volatile int32_t x740 = -11502310;
uint32_t x745 = UINT32_MAX;
int8_t x751 = -8;
uint8_t x752 = UINT8_MAX;
volatile int32_t t187 = -63257;
int32_t x753 = -1;
uint32_t x761 = 546838U;
uint8_t x764 = 3U;
volatile int32_t t190 = 4133737;
volatile uint32_t x768 = 43730831U;
int32_t x770 = INT32_MIN;
int8_t x775 = INT8_MIN;
int64_t x777 = INT64_MIN;
volatile int32_t t194 = 12195325;
static volatile uint8_t x783 = 0U;
volatile int64_t x785 = -17605272LL;
static int8_t x791 = -1;
int64_t x792 = INT64_MAX;
volatile int64_t x800 = INT64_MAX;


void f0(void) {
    	uint16_t x2 = 610U;
	static uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -95;

    t0 = ((x1==x2)<<(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3083776955LLU;
	int32_t x6 = -423539851;
	volatile uint32_t x7 = 158304U;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -99;

    t1 = ((x5==x6)<<(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 1U;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 4;

    t2 = ((x9==x10)<<(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 8;
	int32_t x16 = -6069;
	volatile int32_t t3 = -706984114;

    t3 = ((x13==x14)<<(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 4U;
	volatile uint8_t x18 = 3U;
	volatile int32_t t4 = -22;

    t4 = ((x17==x18)<<(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 510U;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = UINT32_MAX;
	static int8_t x24 = -1;
	volatile int32_t t5 = -15363;

    t5 = ((x21==x22)<<(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x26 = -1;
	static int16_t x27 = INT16_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 2681;

    t6 = ((x25==x26)<<(x27!=x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 1U;
	int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MAX;
	static uint32_t x32 = UINT32_MAX;
	int32_t t7 = 40;

    t7 = ((x29==x30)<<(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	uint8_t x35 = 2U;
	static volatile int32_t x36 = INT32_MAX;
	int32_t t8 = -1;

    t8 = ((x33==x34)<<(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int64_t x38 = -1LL;
	int8_t x39 = -40;
	volatile int64_t x40 = -1LL;
	int32_t t9 = 13;

    t9 = ((x37==x38)<<(x39!=x40));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	volatile uint32_t x43 = 432579030U;
	uint32_t x44 = 3086U;
	static volatile int32_t t10 = 18998474;

    t10 = ((x41==x42)<<(x43!=x44));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 10;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -32159550;

    t11 = ((x45==x46)<<(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 81244170198235203LLU;
	int32_t x50 = -12665441;
	int32_t t12 = 712;

    t12 = ((x49==x50)<<(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	int16_t x55 = 4;
	static int32_t t13 = 3248;

    t13 = ((x53==x54)<<(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 21792U;
	int32_t x58 = -119767;
	static uint16_t x59 = 136U;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -276;

    t14 = ((x57==x58)<<(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int8_t x62 = 1;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t15 = -4882494;

    t15 = ((x61==x62)<<(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	volatile uint16_t x66 = 20U;
	int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -322681176;

    t16 = ((x65==x66)<<(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x71 = 162;
	volatile int64_t x72 = INT64_MAX;
	volatile int32_t t17 = -18244204;

    t17 = ((x69==x70)<<(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MIN;
	static int8_t x74 = -1;
	int64_t x75 = -134082578283873593LL;

    t18 = ((x73==x74)<<(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MIN;
	volatile uint32_t x78 = 272842U;
	volatile int32_t x79 = INT32_MIN;
	uint32_t x80 = 2562331U;

    t19 = ((x77==x78)<<(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = -1;
	uint16_t x82 = 1U;
	volatile int16_t x83 = -7;
	uint64_t x84 = 1070751258LLU;
	static volatile int32_t t20 = -441;

    t20 = ((x81==x82)<<(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MIN;
	static int32_t x86 = 8;
	int64_t x87 = INT64_MAX;
	static volatile int16_t x88 = -1;

    t21 = ((x85==x86)<<(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MIN;
	static uint64_t x90 = UINT64_MAX;
	volatile int32_t x91 = INT32_MAX;
	volatile uint32_t x92 = 0U;
	volatile int32_t t22 = 2648;

    t22 = ((x89==x90)<<(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = 5934;
	int32_t x94 = -1;
	static int8_t x95 = -19;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -5513;

    t23 = ((x93==x94)<<(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x97 = 0LLU;
	static volatile int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 35U;
	int32_t t24 = 1;

    t24 = ((x97==x98)<<(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x101 = 2958466U;
	int16_t x102 = 13359;
	static int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = 23589881;

    t25 = ((x101==x102)<<(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MAX;
	static uint64_t x107 = 109550554368444398LLU;
	int32_t t26 = 1;

    t26 = ((x105==x106)<<(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -27;
	volatile int32_t t27 = 48;

    t27 = ((x109==x110)<<(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 1579251LLU;
	int32_t t28 = 14;

    t28 = ((x113==x114)<<(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 1U;
	volatile int32_t x119 = 1053712054;
	static volatile int16_t x120 = INT16_MIN;
	static int32_t t29 = 1;

    t29 = ((x117==x118)<<(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -348;
	static int16_t x122 = -201;
	int16_t x124 = INT16_MAX;
	static int32_t t30 = -555017428;

    t30 = ((x121==x122)<<(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	uint8_t x127 = 69U;
	int8_t x128 = -1;
	volatile int32_t t31 = -28069;

    t31 = ((x125==x126)<<(x127!=x128));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = 1598U;
	static uint32_t x130 = 1629103895U;
	volatile int32_t x131 = -577593200;
	int32_t x132 = -1;

    t32 = ((x129==x130)<<(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 1759U;
	int16_t x134 = -1;
	static volatile int16_t x135 = INT16_MIN;
	int32_t x136 = 148;
	volatile int32_t t33 = 31;

    t33 = ((x133==x134)<<(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = 21490786LL;
	volatile uint64_t x139 = UINT64_MAX;
	uint32_t x140 = 5771U;

    t34 = ((x137==x138)<<(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	volatile int64_t x144 = 128093467677103LL;

    t35 = ((x141==x142)<<(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -19;
	int32_t x147 = 4858104;
	int8_t x148 = -18;
	volatile int32_t t36 = 203352416;

    t36 = ((x145==x146)<<(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 1;
	volatile int64_t x150 = 1665748011261510LL;
	static volatile uint8_t x151 = 1U;
	int16_t x152 = 1378;
	static volatile int32_t t37 = 1669098;

    t37 = ((x149==x150)<<(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	volatile int8_t x154 = 3;
	volatile int32_t t38 = 347;

    t38 = ((x153==x154)<<(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = UINT8_MAX;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = INT32_MAX;

    t39 = ((x157==x158)<<(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 14U;
	int32_t x162 = -1;
	static int64_t x163 = -30020171399292185LL;
	uint8_t x164 = 19U;
	volatile int32_t t40 = -7;

    t40 = ((x161==x162)<<(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = 124099118U;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 21451U;
	int32_t t41 = 284611703;

    t41 = ((x165==x166)<<(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 238884LLU;
	static int8_t x170 = INT8_MIN;
	static int8_t x172 = -21;
	int32_t t42 = -55501132;

    t42 = ((x169==x170)<<(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	volatile int8_t x176 = 0;
	int32_t t43 = -320649;

    t43 = ((x173==x174)<<(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = UINT64_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -9;

    t44 = ((x177==x178)<<(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 1550U;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;

    t45 = ((x181==x182)<<(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 24;
	static int32_t x186 = INT32_MAX;
	volatile uint64_t x187 = 79483501LLU;
	uint64_t x188 = 574LLU;

    t46 = ((x185==x186)<<(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x191 = -1;
	int32_t x192 = INT32_MIN;

    t47 = ((x189==x190)<<(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x194 = UINT8_MAX;
	static uint8_t x195 = UINT8_MAX;
	volatile int64_t x196 = INT64_MIN;
	int32_t t48 = 13903091;

    t48 = ((x193==x194)<<(x195!=x196));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = 1U;
	int64_t x199 = 0LL;
	static int32_t x200 = 20;

    t49 = ((x197==x198)<<(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = 1177332741037LLU;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 931;

    t50 = ((x201==x202)<<(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x206 = 2U;
	static int64_t x207 = INT64_MIN;
	int16_t x208 = 566;
	int32_t t51 = 616;

    t51 = ((x205==x206)<<(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	uint64_t x210 = 774388573235156LLU;
	int8_t x211 = INT8_MAX;
	volatile int64_t x212 = 1LL;
	int32_t t52 = -807989428;

    t52 = ((x209==x210)<<(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -554219;
	int64_t x214 = INT64_MIN;
	static volatile uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 3954951955LLU;

    t53 = ((x213==x214)<<(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 450;
	int32_t t54 = -174342;

    t54 = ((x217==x218)<<(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 1199150U;
	int32_t x222 = -2;
	static uint16_t x223 = 1U;
	uint64_t x224 = 12422LLU;
	volatile int32_t t55 = -1056;

    t55 = ((x221==x222)<<(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 166853LLU;
	int32_t x226 = -1;
	static int8_t x227 = INT8_MIN;
	static volatile int32_t t56 = -66107553;

    t56 = ((x225==x226)<<(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -4;
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 31376362820967LLU;
	volatile int32_t t57 = 54946193;

    t57 = ((x229==x230)<<(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 1565;
	int64_t x234 = INT64_MAX;
	volatile int32_t t58 = -53581392;

    t58 = ((x233==x234)<<(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 38U;
	int64_t x238 = -64137494LL;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = UINT64_MAX;

    t59 = ((x237==x238)<<(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	uint32_t x242 = 33626U;
	int32_t t60 = -52;

    t60 = ((x241==x242)<<(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	uint16_t x246 = 6U;
	int8_t x247 = -37;
	static uint16_t x248 = UINT16_MAX;

    t61 = ((x245==x246)<<(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -6;

    t62 = ((x249==x250)<<(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x254 = INT16_MIN;
	int16_t x256 = 0;
	int32_t t63 = -21007152;

    t63 = ((x253==x254)<<(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = -1;
	uint8_t x258 = 29U;
	volatile uint32_t x260 = 6510909U;
	int32_t t64 = 11176;

    t64 = ((x257==x258)<<(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	uint64_t x262 = UINT64_MAX;
	volatile int16_t x263 = INT16_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t65 = 209;

    t65 = ((x261==x262)<<(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = 16;
	static uint16_t x267 = UINT16_MAX;
	volatile int32_t t66 = -1;

    t66 = ((x265==x266)<<(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MAX;
	uint64_t x271 = 15435285LLU;
	int64_t x272 = 1890321909681LL;

    t67 = ((x269==x270)<<(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = INT32_MAX;
	static volatile int64_t x275 = -472172118924159LL;
	uint16_t x276 = 0U;

    t68 = ((x273==x274)<<(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 1U;
	int8_t x278 = 12;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -41703;

    t69 = ((x277==x278)<<(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile uint8_t x282 = 0U;
	volatile uint8_t x283 = 1U;
	static volatile uint16_t x284 = 529U;
	int32_t t70 = 61;

    t70 = ((x281==x282)<<(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	static int16_t x286 = INT16_MIN;
	int64_t x288 = 370485LL;
	volatile int32_t t71 = -232;

    t71 = ((x285==x286)<<(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	static uint16_t x290 = UINT16_MAX;
	uint8_t x291 = 4U;
	uint16_t x292 = 1971U;

    t72 = ((x289==x290)<<(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = 126U;
	volatile uint8_t x295 = 10U;
	volatile int32_t t73 = 1;

    t73 = ((x293==x294)<<(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = -1;
	uint16_t x299 = 2593U;
	volatile int32_t t74 = -5;

    t74 = ((x297==x298)<<(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 2U;
	uint64_t x302 = 2029532LLU;
	int64_t x304 = INT64_MIN;
	int32_t t75 = -1813;

    t75 = ((x301==x302)<<(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MAX;
	static int64_t x306 = 44947229LL;
	int64_t x307 = -1LL;
	int16_t x308 = 12;

    t76 = ((x305==x306)<<(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	volatile uint32_t x311 = 228U;
	int64_t x312 = -132029092092407LL;
	volatile int32_t t77 = -1312991;

    t77 = ((x309==x310)<<(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = UINT16_MAX;

    t78 = ((x313==x314)<<(x315!=x316));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	uint16_t x319 = UINT16_MAX;
	uint64_t x320 = 220016598520LLU;
	int32_t t79 = 384573450;

    t79 = ((x317==x318)<<(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -3744910469241968LL;
	static int8_t x323 = 2;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -1;

    t80 = ((x321==x322)<<(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MIN;
	int16_t x326 = 0;
	static volatile uint8_t x328 = 0U;

    t81 = ((x325==x326)<<(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MAX;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -185061;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -1972;

    t82 = ((x329==x330)<<(x331!=x332));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int64_t x334 = -4LL;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	int32_t t83 = -12;

    t83 = ((x333==x334)<<(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	static int64_t x340 = -1329LL;
	int32_t t84 = 2;

    t84 = ((x337==x338)<<(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 13;
	int64_t x343 = INT64_MAX;
	volatile int32_t t85 = -1;

    t85 = ((x341==x342)<<(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	uint8_t x346 = 1U;
	int8_t x347 = -1;
	uint64_t x348 = UINT64_MAX;

    t86 = ((x345==x346)<<(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = 0;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = 37U;
	int32_t t87 = -47;

    t87 = ((x349==x350)<<(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MIN;

    t88 = ((x353==x354)<<(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x360 = 89849484708114548LL;
	volatile int32_t t89 = 245497;

    t89 = ((x357==x358)<<(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x361 = 109922460561LL;
	volatile int8_t x362 = 5;
	static uint16_t x363 = 0U;
	uint16_t x364 = UINT16_MAX;
	static volatile int32_t t90 = 74021246;

    t90 = ((x361==x362)<<(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -3495;
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 453U;
	volatile int32_t t91 = 0;

    t91 = ((x365==x366)<<(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 426453U;
	int64_t x370 = INT64_MIN;
	static uint64_t x371 = 210LLU;
	uint16_t x372 = 11917U;

    t92 = ((x369==x370)<<(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x374 = 6407U;
	int8_t x375 = INT8_MIN;
	volatile uint8_t x376 = 14U;
	static volatile int32_t t93 = -3653110;

    t93 = ((x373==x374)<<(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x378 = 179927273;
	static int16_t x379 = INT16_MIN;
	int32_t t94 = -16661;

    t94 = ((x377==x378)<<(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 0U;
	int8_t x382 = 1;
	static int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;

    t95 = ((x381==x382)<<(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 64215231U;
	uint64_t x387 = UINT64_MAX;
	static int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 21;

    t96 = ((x385==x386)<<(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	uint32_t x390 = 624U;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = 3871;

    t97 = ((x389==x390)<<(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -41;

    t98 = ((x393==x394)<<(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	int16_t x398 = 1373;
	uint8_t x399 = 27U;
	volatile int32_t x400 = -1;
	int32_t t99 = -402819569;

    t99 = ((x397==x398)<<(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 6158490U;
	uint8_t x404 = 4U;
	int32_t t100 = -41367;

    t100 = ((x401==x402)<<(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x407 = 810100U;
	int32_t t101 = 6;

    t101 = ((x405==x406)<<(x407!=x408));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = UINT32_MAX;
	static uint64_t x410 = UINT64_MAX;
	volatile int64_t x411 = 1678570415LL;

    t102 = ((x409==x410)<<(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x415 = 818146073U;
	volatile int32_t t103 = 22475368;

    t103 = ((x413==x414)<<(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -1;
	volatile int32_t x418 = INT32_MIN;
	volatile int32_t t104 = 22214993;

    t104 = ((x417==x418)<<(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MAX;
	static int16_t x422 = INT16_MAX;
	uint8_t x423 = UINT8_MAX;
	static uint64_t x424 = 133908709LLU;
	int32_t t105 = 13157;

    t105 = ((x421==x422)<<(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MAX;
	int16_t x426 = -1;
	int32_t x427 = INT32_MIN;
	uint32_t x428 = UINT32_MAX;

    t106 = ((x425==x426)<<(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = UINT16_MAX;
	uint64_t x430 = 409934662785719LLU;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	static int32_t t107 = 3;

    t107 = ((x429==x430)<<(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 7836;
	int8_t x434 = -1;
	static int32_t x435 = 49597;
	static volatile int16_t x436 = -412;

    t108 = ((x433==x434)<<(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	int64_t x439 = -13156LL;
	static int32_t t109 = 7;

    t109 = ((x437==x438)<<(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x443 = -1;
	int32_t x444 = -1;

    t110 = ((x441==x442)<<(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	static int8_t x447 = INT8_MIN;
	uint8_t x448 = 3U;

    t111 = ((x445==x446)<<(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MAX;
	volatile int64_t x452 = -1LL;
	int32_t t112 = -3776108;

    t112 = ((x449==x450)<<(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = 3834U;
	uint8_t x455 = 2U;
	int16_t x456 = -1;
	volatile int32_t t113 = -6942;

    t113 = ((x453==x454)<<(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = -1;
	int64_t x458 = INT64_MIN;
	static int8_t x459 = 2;
	int64_t x460 = INT64_MIN;
	volatile int32_t t114 = -47166452;

    t114 = ((x457==x458)<<(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = 13;
	int16_t x462 = -15839;
	int16_t x463 = INT16_MAX;
	int64_t x464 = -3680864760224075399LL;
	volatile int32_t t115 = 1;

    t115 = ((x461==x462)<<(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	static volatile int32_t x466 = -7;
	static int16_t x467 = -1;
	uint8_t x468 = 1U;

    t116 = ((x465==x466)<<(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = 2;
	volatile uint64_t x470 = 13530LLU;
	int64_t x471 = INT64_MAX;
	static int64_t x472 = -1LL;
	int32_t t117 = 118;

    t117 = ((x469==x470)<<(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 7180025LLU;
	int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MAX;
	int32_t t118 = 495;

    t118 = ((x473==x474)<<(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x479 = INT8_MAX;
	int32_t x480 = -1;
	static int32_t t119 = -12517710;

    t119 = ((x477==x478)<<(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	int8_t x482 = -3;
	int16_t x483 = -1;
	int32_t t120 = 0;

    t120 = ((x481==x482)<<(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static int32_t x486 = INT32_MIN;
	int8_t x487 = INT8_MIN;
	volatile int32_t t121 = 209248;

    t121 = ((x485==x486)<<(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x490 = INT16_MIN;
	static uint8_t x491 = 0U;

    t122 = ((x489==x490)<<(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x494 = -1;
	static int32_t t123 = 30931;

    t123 = ((x493==x494)<<(x495!=x496));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = INT16_MIN;
	volatile uint8_t x498 = 0U;
	int32_t x499 = 1;
	int8_t x500 = 3;

    t124 = ((x497==x498)<<(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = 16981535541103400LLU;
	volatile int64_t x503 = -1026667242533404LL;
	int64_t x504 = -232LL;
	int32_t t125 = -999;

    t125 = ((x501==x502)<<(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = -2;
	volatile uint16_t x507 = UINT16_MAX;
	int32_t x508 = -355223;

    t126 = ((x505==x506)<<(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	volatile int16_t x510 = -1;
	int8_t x511 = 1;
	int32_t x512 = 229;
	volatile int32_t t127 = -730725;

    t127 = ((x509==x510)<<(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	volatile int32_t x514 = INT32_MIN;
	int64_t x515 = 84458076LL;
	static int16_t x516 = INT16_MAX;

    t128 = ((x513==x514)<<(x515!=x516));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x517 = 8678217870447LLU;
	int16_t x518 = -18;
	volatile uint8_t x519 = 70U;
	uint64_t x520 = 43LLU;
	int32_t t129 = -1146;

    t129 = ((x517==x518)<<(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 4;
	static uint8_t x522 = 1U;
	uint8_t x523 = UINT8_MAX;
	int64_t x524 = INT64_MIN;
	int32_t t130 = -4660840;

    t130 = ((x521==x522)<<(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 9667U;
	static int32_t x526 = 9534896;
	int64_t x527 = 45054373119406860LL;
	uint64_t x528 = 14LLU;
	volatile int32_t t131 = 10337;

    t131 = ((x525==x526)<<(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -228538LL;
	static int32_t x530 = -1;
	volatile uint16_t x532 = 10U;
	volatile int32_t t132 = -696;

    t132 = ((x529==x530)<<(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = -3731353;
	int64_t x534 = 3530557360626LL;
	uint16_t x535 = 0U;
	volatile int32_t t133 = -1;

    t133 = ((x533==x534)<<(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x538 = 809LL;
	static volatile int64_t x539 = INT64_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = -1293355;

    t134 = ((x537==x538)<<(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x541 = 1343077U;
	static uint16_t x542 = 0U;
	static volatile int64_t x543 = INT64_MIN;
	int32_t x544 = -582172888;
	volatile int32_t t135 = -5;

    t135 = ((x541==x542)<<(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = 47U;
	static volatile int32_t x548 = -796160;
	int32_t t136 = 228118;

    t136 = ((x545==x546)<<(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 48;
	static volatile uint16_t x550 = UINT16_MAX;
	volatile int32_t t137 = -27545;

    t137 = ((x549==x550)<<(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = 7U;
	uint32_t x554 = UINT32_MAX;
	static uint16_t x555 = 0U;
	int32_t x556 = INT32_MAX;

    t138 = ((x553==x554)<<(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = 698;

    t139 = ((x557==x558)<<(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MIN;
	volatile int16_t x564 = INT16_MIN;
	volatile int32_t t140 = -1;

    t140 = ((x561==x562)<<(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = 190LL;
	int8_t x566 = INT8_MAX;
	int32_t t141 = 5813397;

    t141 = ((x565==x566)<<(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x571 = INT8_MIN;
	volatile uint16_t x572 = 140U;
	int32_t t142 = -307921;

    t142 = ((x569==x570)<<(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int8_t x574 = INT8_MIN;
	int8_t x575 = 23;
	int8_t x576 = -53;

    t143 = ((x573==x574)<<(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 380;
	volatile int8_t x578 = INT8_MIN;
	volatile uint32_t x579 = 487U;
	int16_t x580 = INT16_MIN;
	volatile int32_t t144 = 371937;

    t144 = ((x577==x578)<<(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	int64_t x582 = 698269237294042529LL;
	static int64_t x583 = -5977551451331LL;

    t145 = ((x581==x582)<<(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = 7482989165LL;
	int32_t x586 = INT32_MAX;
	int64_t x587 = INT64_MIN;
	uint16_t x588 = 245U;
	volatile int32_t t146 = 11;

    t146 = ((x585==x586)<<(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x590 = 3U;
	uint64_t x591 = 406225617606LLU;
	volatile int8_t x592 = -4;
	static volatile int32_t t147 = 82;

    t147 = ((x589==x590)<<(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MAX;
	volatile int32_t x594 = INT32_MIN;
	volatile uint8_t x596 = UINT8_MAX;
	volatile int32_t t148 = -14259;

    t148 = ((x593==x594)<<(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x597 = INT32_MAX;
	int64_t x598 = -1LL;
	int16_t x599 = INT16_MIN;
	int64_t x600 = 25110968612468202LL;
	volatile int32_t t149 = -437639368;

    t149 = ((x597==x598)<<(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 1488LLU;
	volatile uint8_t x602 = UINT8_MAX;
	static int8_t x603 = -2;
	static volatile int32_t t150 = -317656;

    t150 = ((x601==x602)<<(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = 2;
	volatile int64_t x608 = INT64_MIN;

    t151 = ((x605==x606)<<(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -1LL;
	uint16_t x611 = 10U;
	int8_t x612 = INT8_MIN;

    t152 = ((x609==x610)<<(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = -10856626;
	int64_t x615 = INT64_MAX;
	volatile int32_t t153 = -1;

    t153 = ((x613==x614)<<(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x617 = 1U;
	int64_t x619 = -188924220403LL;
	volatile int64_t x620 = INT64_MAX;
	int32_t t154 = 3;

    t154 = ((x617==x618)<<(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = 7841;
	int64_t x622 = -1LL;
	uint8_t x623 = 78U;
	uint16_t x624 = 4U;
	int32_t t155 = 256499273;

    t155 = ((x621==x622)<<(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MIN;
	uint8_t x627 = 7U;
	volatile int16_t x628 = -1;

    t156 = ((x625==x626)<<(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	uint32_t x630 = 11218995U;
	volatile int32_t x631 = -1;
	int32_t t157 = 84863;

    t157 = ((x629==x630)<<(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = 45625;
	static int64_t x634 = -1LL;
	int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MIN;
	static int32_t t158 = -27;

    t158 = ((x633==x634)<<(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 386U;
	static int16_t x638 = -6;
	int64_t x640 = INT64_MIN;
	int32_t t159 = -6134780;

    t159 = ((x637==x638)<<(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	int32_t x642 = INT32_MAX;
	volatile int8_t x643 = INT8_MIN;
	int8_t x644 = INT8_MIN;

    t160 = ((x641==x642)<<(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int32_t x646 = 1;
	volatile int8_t x648 = 0;
	volatile int32_t t161 = 0;

    t161 = ((x645==x646)<<(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = 42417172486LLU;
	static int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 833622;

    t162 = ((x649==x650)<<(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = -3712176;
	volatile int64_t x654 = INT64_MIN;
	int8_t x655 = INT8_MIN;
	static int32_t x656 = INT32_MIN;
	volatile int32_t t163 = -13771;

    t163 = ((x653==x654)<<(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static uint64_t x658 = 43849644424160749LLU;
	int32_t x659 = 223486;
	static volatile int16_t x660 = -1;
	volatile int32_t t164 = 6;

    t164 = ((x657==x658)<<(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -10;
	static int8_t x662 = -39;
	volatile uint8_t x663 = UINT8_MAX;
	int32_t t165 = 6;

    t165 = ((x661==x662)<<(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 25447082209659LLU;
	uint16_t x666 = UINT16_MAX;
	static uint8_t x667 = 10U;
	static int8_t x668 = -1;
	int32_t t166 = 0;

    t166 = ((x665==x666)<<(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MAX;
	int32_t x671 = -67;
	int32_t x672 = INT32_MIN;

    t167 = ((x669==x670)<<(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int64_t x674 = -336LL;
	uint16_t x675 = UINT16_MAX;
	static int8_t x676 = INT8_MIN;
	int32_t t168 = -30;

    t168 = ((x673==x674)<<(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x678 = UINT8_MAX;
	uint32_t x679 = 66U;
	volatile uint8_t x680 = 3U;
	int32_t t169 = -3246;

    t169 = ((x677==x678)<<(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -2013698894813918237LL;
	static int16_t x682 = -1;
	int32_t x683 = 1582;
	static volatile int32_t t170 = -3;

    t170 = ((x681==x682)<<(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 197LL;
	int64_t x686 = INT64_MIN;
	int32_t x687 = -1746962;
	int32_t t171 = 484;

    t171 = ((x685==x686)<<(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	int16_t x690 = -1;
	volatile int64_t x691 = -482358860388688364LL;
	int64_t x692 = INT64_MAX;
	int32_t t172 = 0;

    t172 = ((x689==x690)<<(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = -1947;
	static uint8_t x695 = UINT8_MAX;
	uint32_t x696 = UINT32_MAX;
	int32_t t173 = 285894;

    t173 = ((x693==x694)<<(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -350;
	volatile int8_t x698 = -1;
	static volatile int32_t t174 = 9036;

    t174 = ((x697==x698)<<(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x702 = -1;
	uint16_t x703 = 1U;
	int8_t x704 = -10;
	volatile int32_t t175 = 8047;

    t175 = ((x701==x702)<<(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = -1LL;
	static int16_t x707 = INT16_MAX;
	volatile uint64_t x708 = UINT64_MAX;
	static volatile int32_t t176 = 48;

    t176 = ((x705==x706)<<(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 116U;
	int8_t x710 = 11;
	static volatile int16_t x711 = -6430;
	int8_t x712 = INT8_MIN;

    t177 = ((x709==x710)<<(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	static uint32_t x714 = UINT32_MAX;
	static uint64_t x715 = UINT64_MAX;
	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = -1;

    t178 = ((x713==x714)<<(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -44351;
	static uint32_t x718 = UINT32_MAX;
	int16_t x719 = INT16_MIN;
	static int64_t x720 = -1048LL;
	volatile int32_t t179 = 28;

    t179 = ((x717==x718)<<(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x723 = UINT16_MAX;
	int32_t t180 = 0;

    t180 = ((x721==x722)<<(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	uint32_t x726 = 589898424U;
	volatile uint32_t x727 = 345U;
	int8_t x728 = INT8_MAX;
	int32_t t181 = 0;

    t181 = ((x725==x726)<<(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x729 = 2U;
	uint16_t x730 = 1U;
	int16_t x731 = INT16_MIN;
	int8_t x732 = -1;
	int32_t t182 = -1901;

    t182 = ((x729==x730)<<(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 318LLU;
	uint64_t x735 = UINT64_MAX;
	volatile int8_t x736 = INT8_MIN;
	static int32_t t183 = -44821;

    t183 = ((x733==x734)<<(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x737 = INT8_MAX;
	static volatile int8_t x738 = -1;
	int32_t x739 = -1;
	volatile int32_t t184 = -1467753;

    t184 = ((x737==x738)<<(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	int16_t x742 = 539;
	int16_t x743 = INT16_MIN;
	int64_t x744 = -1819119938431944409LL;
	volatile int32_t t185 = -432504;

    t185 = ((x741==x742)<<(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = INT32_MAX;
	static volatile uint16_t x747 = 615U;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = -13450434;

    t186 = ((x745==x746)<<(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 11U;
	int32_t x750 = 2332;

    t187 = ((x749==x750)<<(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = INT32_MAX;
	uint64_t x755 = 748889LLU;
	int8_t x756 = -20;
	volatile int32_t t188 = 3000;

    t188 = ((x753==x754)<<(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static int32_t x758 = -103183;
	volatile int32_t x759 = -673;
	int64_t x760 = INT64_MIN;
	volatile int32_t t189 = -328;

    t189 = ((x757==x758)<<(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = -20;
	static uint32_t x763 = 2241U;

    t190 = ((x761==x762)<<(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = -1LL;
	int16_t x766 = INT16_MAX;
	static volatile int16_t x767 = -5;
	volatile int32_t t191 = -100;

    t191 = ((x765==x766)<<(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	int64_t x771 = -1LL;
	uint32_t x772 = 174U;
	volatile int32_t t192 = 183996084;

    t192 = ((x769==x770)<<(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	uint8_t x774 = UINT8_MAX;
	static int64_t x776 = -158850847540880LL;
	int32_t t193 = 7;

    t193 = ((x773==x774)<<(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x778 = INT64_MIN;
	int16_t x779 = INT16_MIN;
	uint64_t x780 = 921105091LLU;

    t194 = ((x777==x778)<<(x779!=x780));

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int8_t x782 = INT8_MIN;
	int32_t x784 = INT32_MIN;
	int32_t t195 = 1197349;

    t195 = ((x781==x782)<<(x783!=x784));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MIN;
	int64_t x787 = -1LL;
	int32_t x788 = 3660;
	volatile int32_t t196 = 1;

    t196 = ((x785==x786)<<(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = UINT32_MAX;
	int8_t x790 = INT8_MAX;
	int32_t t197 = 732;

    t197 = ((x789==x790)<<(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MAX;
	int32_t x794 = 836779642;
	static int8_t x795 = INT8_MAX;
	int8_t x796 = -1;
	static int32_t t198 = 7;

    t198 = ((x793==x794)<<(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MAX;
	int16_t x798 = 1;
	int16_t x799 = -11;
	volatile int32_t t199 = -5560040;

    t199 = ((x797==x798)<<(x799!=x800));

    if (t199 != 0) { NG(); } else { ; }
	
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

