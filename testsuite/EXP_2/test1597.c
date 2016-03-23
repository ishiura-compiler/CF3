
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

static int64_t x2 = -1LL;
volatile int64_t x9 = INT64_MIN;
int64_t x10 = 209LL;
int8_t x13 = -1;
uint32_t x14 = 1838514U;
int16_t x20 = INT16_MIN;
volatile uint32_t x21 = 11203U;
int64_t x23 = -95399652LL;
volatile int32_t t6 = INT32_MAX;
uint8_t x36 = UINT8_MAX;
int32_t x42 = INT32_MIN;
int16_t x43 = INT16_MAX;
int32_t t12 = 23;
volatile int64_t x54 = -1LL;
int16_t x56 = 83;
static int16_t x68 = 0;
int32_t t16 = INT32_MIN;
int8_t x73 = 21;
static volatile int32_t t17 = 13207208;
int64_t t19 = INT64_MIN;
static int32_t x86 = 8092;
uint64_t x87 = UINT64_MAX;
int64_t x88 = INT64_MIN;
int16_t x92 = -1;
static int64_t x105 = 14620293833075679LL;
volatile uint16_t x107 = 164U;
int64_t t23 = -2763LL;
uint64_t x113 = 7375468LLU;
uint32_t x114 = 67852888U;
uint32_t x116 = UINT32_MAX;
int32_t x123 = 23632;
uint8_t x124 = UINT8_MAX;
int64_t x127 = INT64_MAX;
int8_t x130 = INT8_MIN;
static uint32_t x139 = UINT32_MAX;
volatile int8_t x141 = -1;
int64_t x142 = INT64_MAX;
static int32_t x144 = -1;
volatile int32_t t31 = -3561;
uint16_t x146 = 2U;
int32_t x151 = -2040;
uint64_t t33 = 2412346111447LLU;
int32_t x154 = -1;
static int64_t x158 = INT64_MAX;
int8_t x159 = -20;
volatile uint8_t x165 = UINT8_MAX;
static volatile int8_t x170 = INT8_MAX;
int16_t x174 = INT16_MAX;
uint8_t x182 = UINT8_MAX;
static volatile uint64_t x183 = UINT64_MAX;
volatile int32_t t42 = -45364;
int32_t x196 = 4114084;
static uint16_t x200 = UINT16_MAX;
uint8_t x206 = 5U;
static int8_t x210 = INT8_MAX;
volatile int8_t x214 = 54;
uint64_t x220 = UINT64_MAX;
int16_t x221 = 5757;
int64_t x227 = INT64_MAX;
static int8_t x230 = INT8_MAX;
volatile int32_t t53 = -84172;
int32_t x237 = INT32_MIN;
volatile uint16_t x246 = UINT16_MAX;
int32_t t57 = 1300938;
static uint32_t x259 = 63945321U;
int64_t t59 = 58869907510630277LL;
int16_t x266 = INT16_MIN;
uint32_t x267 = UINT32_MAX;
int16_t x270 = 0;
static int16_t x275 = INT16_MIN;
int32_t x278 = INT32_MIN;
uint8_t x281 = UINT8_MAX;
int32_t x283 = 804269;
static int16_t x289 = -1;
int32_t x290 = -504;
volatile int32_t x292 = INT32_MIN;
int32_t x293 = INT32_MIN;
int8_t x300 = INT8_MIN;
uint16_t x301 = 15U;
static uint64_t t70 = 1617402895592414487LLU;
int16_t x308 = INT16_MAX;
int64_t x310 = INT64_MIN;
int8_t x318 = INT8_MIN;
static int32_t x321 = -1;
static int8_t x322 = -1;
int32_t t75 = INT32_MAX;
int64_t x328 = 34360930458299LL;
int64_t x332 = -2202009766943843435LL;
uint32_t x335 = UINT32_MAX;
uint32_t x343 = 95398U;
volatile uint8_t x346 = 1U;
uint64_t x347 = 2LLU;
int8_t x350 = INT8_MIN;
int32_t x355 = 73;
static volatile int32_t t83 = 479337;
int8_t x358 = 1;
static int64_t x359 = -1LL;
static volatile int8_t x364 = -40;
int32_t x366 = INT32_MIN;
int64_t t87 = 228559975000126LL;
uint64_t x375 = 2806958795LLU;
uint16_t x377 = 218U;
uint64_t x385 = UINT64_MAX;
static volatile uint64_t t91 = UINT64_MAX;
volatile uint8_t x389 = 12U;
int64_t t92 = -51661683LL;
volatile uint32_t t93 = 2U;
uint8_t x401 = 49U;
uint64_t x402 = 16544231LLU;
int8_t x412 = INT8_MAX;
int32_t t96 = 11995;
int64_t x419 = INT64_MIN;
int32_t x420 = -1;
uint32_t x425 = 109324U;
uint16_t x429 = 29044U;
volatile uint32_t x430 = 20U;
uint32_t x434 = 21220208U;
uint32_t t101 = UINT32_MAX;
static uint8_t x437 = 35U;
uint32_t x441 = 178U;
static int32_t x444 = INT32_MIN;
static volatile uint32_t t103 = 573592620U;
static volatile int64_t x446 = -135160484915548618LL;
int64_t t105 = 2391167084LL;
static uint64_t t106 = 24299372334LLU;
int32_t x467 = INT32_MIN;
int64_t x473 = INT64_MAX;
int8_t x476 = INT8_MAX;
static int32_t x477 = INT32_MIN;
volatile int32_t x478 = INT32_MIN;
uint64_t x485 = 1029LLU;
uint64_t t114 = 1LLU;
int8_t x493 = -1;
static volatile int64_t x502 = INT64_MIN;
int64_t x510 = INT64_MIN;
static int64_t x515 = -55807337707LL;
int64_t t121 = 67542454850LL;
static int32_t x524 = -1;
volatile uint32_t t124 = 398330U;
volatile int16_t x531 = -1;
static int32_t x535 = -1;
int64_t t126 = 357348238LL;
int32_t x537 = INT32_MAX;
volatile int8_t x541 = INT8_MIN;
volatile int8_t x543 = -1;
volatile int8_t x544 = INT8_MIN;
volatile int16_t x551 = INT16_MIN;
int8_t x552 = -49;
volatile int32_t t130 = 537;
int32_t x555 = -1;
volatile uint16_t x556 = UINT16_MAX;
volatile int32_t t131 = -101;
uint16_t x557 = UINT16_MAX;
static int8_t x561 = INT8_MIN;
volatile int32_t t133 = 13;
int32_t x566 = INT32_MIN;
int32_t x568 = -1;
int32_t t134 = 2012;
static int32_t x570 = -393;
volatile int32_t x575 = 945441734;
static int64_t x577 = -9LL;
static int64_t t137 = -29768972922LL;
uint8_t x581 = UINT8_MAX;
volatile int32_t x583 = -1;
volatile int32_t t138 = -24;
uint8_t x588 = 11U;
int8_t x599 = 1;
static int32_t x603 = -1;
volatile int8_t x607 = INT8_MAX;
int32_t x608 = INT32_MIN;
uint8_t x614 = 11U;
int8_t x615 = INT8_MIN;
static uint8_t x617 = UINT8_MAX;
uint64_t x620 = UINT64_MAX;
int32_t x621 = INT32_MIN;
static int32_t x624 = 3241;
int64_t x627 = -1LL;
uint64_t x632 = UINT64_MAX;
int32_t t149 = -1;
volatile int8_t x644 = INT8_MAX;
static uint16_t x651 = UINT16_MAX;
static volatile int64_t t154 = -3LL;
uint64_t x663 = 510717879616053351LLU;
volatile int64_t t155 = 4410177550LL;
int16_t x666 = -2294;
int64_t x668 = -110360969357034986LL;
static int8_t x676 = INT8_MAX;
uint64_t x681 = 1516403270000882911LLU;
volatile int32_t x687 = 7668;
int64_t x689 = INT64_MAX;
uint8_t x696 = UINT8_MAX;
int16_t x698 = INT16_MAX;
uint64_t x700 = 330616164LLU;
int16_t x703 = INT16_MIN;
int64_t x706 = INT64_MIN;
int16_t x715 = INT16_MAX;
uint16_t x721 = 3633U;
uint64_t x723 = 2197775246701179394LLU;
int32_t t171 = -4936707;
volatile int64_t t172 = 6378258LL;
static volatile uint8_t x740 = UINT8_MAX;
volatile int64_t t174 = 26284138015LL;
int16_t x751 = INT16_MIN;
int8_t x766 = 0;
volatile uint32_t x775 = 2U;
volatile int32_t t182 = 256230;
uint16_t x777 = UINT16_MAX;
int8_t x785 = -1;
int32_t x788 = -15;
int8_t x794 = -5;
static int8_t x799 = -3;
static volatile uint16_t x812 = UINT16_MAX;
static int8_t x813 = -6;
volatile int32_t t192 = -7;
int64_t x819 = -242605LL;
volatile int16_t x824 = -1;
int64_t x825 = INT64_MIN;
int16_t x827 = INT16_MIN;
uint64_t t195 = 692LLU;
volatile uint8_t x831 = 54U;
uint32_t x838 = UINT32_MAX;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	volatile uint32_t t0 = 1056052920U;

    t0 = ((x1*(x2>x3))+x4);

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	static int64_t x6 = -1179337050552366266LL;
	volatile int64_t x7 = -5407458LL;
	static uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = ((x5*(x6>x7))+x8);

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = INT64_MAX;
	int32_t x12 = INT32_MAX;
	static volatile int64_t t2 = -263LL;

    t2 = ((x9*(x10>x11))+x12);

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = INT16_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 62034169U;

    t3 = ((x13*(x14>x15))+x16);

    if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MAX;
	uint16_t x18 = 4034U;
	int8_t x19 = 20;
	int32_t t4 = -2;

    t4 = ((x17*(x18>x19))+x20);

    if (t4 != -32641) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 1337175829315356010LL;

    t5 = ((x21*(x22>x23))+x24);

    if (t5 != -9223372036854764605LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = 2;
	static int32_t x26 = INT32_MIN;
	int64_t x27 = -6LL;
	int32_t x28 = INT32_MAX;

    t6 = ((x25*(x26>x27))+x28);

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	volatile uint32_t x30 = 11084491U;
	volatile int32_t x31 = -108411;
	static int8_t x32 = -16;
	volatile int32_t t7 = -4829;

    t7 = ((x29*(x30>x31))+x32);

    if (t7 != -16) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	volatile int64_t x34 = -1LL;
	int8_t x35 = INT8_MIN;
	static volatile int32_t t8 = -2;

    t8 = ((x33*(x34>x35))+x36);

    if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -73;
	volatile uint32_t x40 = 384918244U;
	static uint32_t t9 = 97U;

    t9 = ((x37*(x38>x39))+x40);

    if (t9 != 384918244U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 2U;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -1717;

    t10 = ((x41*(x42>x43))+x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 4583U;
	int8_t x46 = -1;
	uint32_t x47 = 92U;
	uint32_t x48 = 1U;
	uint32_t t11 = 371U;

    t11 = ((x45*(x46>x47))+x48);

    if (t11 != 4584U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = 776025386U;
	int16_t x52 = INT16_MIN;

    t12 = ((x49*(x50>x51))+x52);

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 88515856LLU;
	uint64_t x55 = 887073472417LLU;
	uint64_t t13 = 3802476086386534LLU;

    t13 = ((x53*(x54>x55))+x56);

    if (t13 != 88515939LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	uint64_t x58 = 326735579LLU;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

    t14 = ((x57*(x58>x59))+x60);

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	volatile int64_t x66 = -1LL;
	volatile int64_t x67 = INT64_MIN;
	volatile int32_t t15 = -738669;

    t15 = ((x65*(x66>x67))+x68);

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 1004209244;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = INT32_MIN;

    t16 = ((x69*(x70>x71))+x72);

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = INT8_MIN;
	int64_t x75 = -4216291974LL;
	int8_t x76 = INT8_MAX;

    t17 = ((x73*(x74>x75))+x76);

    if (t17 != 148) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	static uint64_t x78 = UINT64_MAX;
	volatile int8_t x79 = 38;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t18 = 78355919550693LLU;

    t18 = ((x77*(x78>x79))+x80);

    if (t18 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	static int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	int64_t x84 = INT64_MIN;

    t19 = ((x81*(x82>x83))+x84);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x85 = -1;
	volatile int64_t t20 = INT64_MIN;

    t20 = ((x85*(x86>x87))+x88);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = 34466575;
	int32_t x90 = 1650;
	int64_t x91 = -344972602420578LL;
	volatile int32_t t21 = -874;

    t21 = ((x89*(x90>x91))+x92);

    if (t21 != 34466574) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x97 = 45U;
	static int16_t x98 = -1;
	static int64_t x99 = 199750687970093LL;
	uint64_t x100 = 802455061562LLU;
	uint64_t t22 = 8006437285021024960LLU;

    t22 = ((x97*(x98>x99))+x100);

    if (t22 != 802455061562LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x106 = UINT8_MAX;
	volatile int64_t x108 = 249466735LL;

    t23 = ((x105*(x106>x107))+x108);

    if (t23 != 14620294082542414LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x109 = INT16_MAX;
	volatile uint16_t x110 = 22429U;
	int8_t x111 = 0;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t24 = 1870310008LLU;

    t24 = ((x109*(x110>x111))+x112);

    if (t24 != 32766LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x115 = UINT8_MAX;
	uint64_t t25 = 222564206075663LLU;

    t25 = ((x113*(x114>x115))+x116);

    if (t25 != 4302342763LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x117 = 2U;
	static volatile int32_t x118 = INT32_MIN;
	uint16_t x119 = 744U;
	int16_t x120 = 10;
	static uint32_t t26 = 48U;

    t26 = ((x117*(x118>x119))+x120);

    if (t26 != 10U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x121 = 19821502LLU;
	volatile uint8_t x122 = 30U;
	uint64_t t27 = 3773561641489112636LLU;

    t27 = ((x121*(x122>x123))+x124);

    if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x125 = INT8_MIN;
	static int64_t x126 = INT64_MAX;
	static int32_t x128 = -1;
	int32_t t28 = 3019;

    t28 = ((x125*(x126>x127))+x128);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = 0;
	static volatile int8_t x131 = INT8_MAX;
	volatile uint8_t x132 = 91U;
	int32_t t29 = 1066441;

    t29 = ((x129*(x130>x131))+x132);

    if (t29 != 91) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	static volatile uint8_t x140 = 7U;
	static volatile int32_t t30 = 1;

    t30 = ((x137*(x138>x139))+x140);

    if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x143 = INT8_MAX;

    t31 = ((x141*(x142>x143))+x144);

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x145 = 1U;
	static int8_t x147 = INT8_MIN;
	int32_t x148 = -66129;
	int32_t t32 = 0;

    t32 = ((x145*(x146>x147))+x148);

    if (t32 != -66128) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	int64_t x152 = -9930LL;

    t33 = ((x149*(x150>x151))+x152);

    if (t33 != 18446744073709541686LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x153 = INT16_MIN;
	volatile int32_t x155 = -1;
	int64_t x156 = -1LL;
	volatile int64_t t34 = 158837LL;

    t34 = ((x153*(x154>x155))+x156);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = INT16_MIN;
	static uint64_t x160 = 62132463662761344LLU;
	static uint64_t t35 = 20LLU;

    t35 = ((x157*(x158>x159))+x160);

    if (t35 != 62132463662728576LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x161 = 2U;
	int64_t x162 = INT64_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t x164 = INT64_MIN;
	static volatile int64_t t36 = INT64_MIN;

    t36 = ((x161*(x162>x163))+x164);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x166 = INT8_MIN;
	volatile int16_t x167 = INT16_MIN;
	int64_t x168 = -98812357330299LL;
	static volatile int64_t t37 = -1LL;

    t37 = ((x165*(x166>x167))+x168);

    if (t37 != -98812357330044LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = ((x169*(x170>x171))+x172);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x175 = 0U;
	static uint8_t x176 = 3U;
	volatile int32_t t39 = 183;

    t39 = ((x173*(x174>x175))+x176);

    if (t39 != -2147483645) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x177 = 322031925;
	static uint8_t x178 = 3U;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = -1LL;
	static int64_t t40 = 125527557224037LL;

    t40 = ((x177*(x178>x179))+x180);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x181 = INT32_MIN;
	uint32_t x184 = 91196917U;
	uint32_t t41 = 102265638U;

    t41 = ((x181*(x182>x183))+x184);

    if (t41 != 91196917U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = -1;
	int64_t x186 = -1LL;
	volatile int32_t x187 = INT32_MIN;
	uint8_t x188 = UINT8_MAX;

    t42 = ((x185*(x186>x187))+x188);

    if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MAX;
	uint16_t x191 = 0U;
	static int64_t x192 = 437051619LL;
	volatile uint64_t t43 = 2683955868LLU;

    t43 = ((x189*(x190>x191))+x192);

    if (t43 != 437051618LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	uint32_t x194 = UINT32_MAX;
	int8_t x195 = -1;
	volatile int32_t t44 = -593433821;

    t44 = ((x193*(x194>x195))+x196);

    if (t44 != 4114084) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x197 = INT16_MAX;
	int32_t x198 = -1;
	int8_t x199 = INT8_MIN;
	volatile int32_t t45 = 1261;

    t45 = ((x197*(x198>x199))+x200);

    if (t45 != 98302) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x201 = -1;
	uint8_t x202 = 17U;
	uint32_t x203 = 24U;
	volatile int8_t x204 = -23;
	int32_t t46 = -2;

    t46 = ((x201*(x202>x203))+x204);

    if (t46 != -23) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = 30;
	volatile int64_t x207 = 1LL;
	volatile int8_t x208 = 60;
	int32_t t47 = 225028239;

    t47 = ((x205*(x206>x207))+x208);

    if (t47 != 90) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = -26;
	int64_t x211 = INT64_MIN;
	volatile int32_t x212 = 38428179;
	static int32_t t48 = -728;

    t48 = ((x209*(x210>x211))+x212);

    if (t48 != 38428153) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x213 = 7384959288564390LLU;
	static int64_t x215 = INT64_MIN;
	int8_t x216 = 0;
	static volatile uint64_t t49 = 118077860LLU;

    t49 = ((x213*(x214>x215))+x216);

    if (t49 != 7384959288564390LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = 8U;
	int64_t x218 = 652310205292LL;
	int64_t x219 = INT64_MIN;
	volatile uint64_t t50 = 7485805707481544LLU;

    t50 = ((x217*(x218>x219))+x220);

    if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	int16_t x224 = 0;
	volatile int32_t t51 = 710;

    t51 = ((x221*(x222>x223))+x224);

    if (t51 != 5757) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x225 = 9U;
	int64_t x226 = INT64_MAX;
	int8_t x228 = -1;
	volatile int32_t t52 = 163944867;

    t52 = ((x225*(x226>x227))+x228);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x229 = UINT16_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = -1;

    t53 = ((x229*(x230>x231))+x232);

    if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = 90LL;
	uint32_t x234 = 21782U;
	uint16_t x235 = UINT16_MAX;
	static int64_t x236 = -1LL;
	volatile int64_t t54 = -3144086848LL;

    t54 = ((x233*(x234>x235))+x236);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x238 = INT32_MIN;
	uint16_t x239 = UINT16_MAX;
	static volatile int32_t x240 = INT32_MIN;
	int32_t t55 = INT32_MIN;

    t55 = ((x237*(x238>x239))+x240);

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = INT32_MIN;
	int8_t x247 = -1;
	int16_t x248 = INT16_MAX;
	volatile int32_t t56 = -1000;

    t56 = ((x245*(x246>x247))+x248);

    if (t56 != -2147450881) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = 15;
	static uint8_t x250 = 12U;
	static int64_t x251 = INT64_MIN;
	int8_t x252 = 17;

    t57 = ((x249*(x250>x251))+x252);

    if (t57 != 32) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x253 = 1;
	int16_t x254 = 1;
	uint32_t x255 = 3U;
	int64_t x256 = INT64_MIN;
	static int64_t t58 = INT64_MIN;

    t58 = ((x253*(x254>x255))+x256);

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = INT64_MAX;
	static int8_t x258 = INT8_MAX;
	uint32_t x260 = 38U;

    t59 = ((x257*(x258>x259))+x260);

    if (t59 != 38LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = INT8_MIN;
	uint64_t x262 = 123068LLU;
	static uint32_t x263 = 800089985U;
	uint64_t x264 = 18148163413LLU;
	volatile uint64_t t60 = 461LLU;

    t60 = ((x261*(x262>x263))+x264);

    if (t60 != 18148163413LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = INT64_MIN;
	uint8_t x268 = 1U;
	int64_t t61 = -203528175LL;

    t61 = ((x265*(x266>x267))+x268);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x271 = -1;
	int64_t x272 = -1LL;
	int64_t t62 = 57LL;

    t62 = ((x269*(x270>x271))+x272);

    if (t62 != 65534LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	static int32_t x276 = INT32_MIN;
	int32_t t63 = INT32_MIN;

    t63 = ((x273*(x274>x275))+x276);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x277 = 122U;
	uint64_t x279 = UINT64_MAX;
	static uint8_t x280 = 25U;
	volatile uint32_t t64 = 3U;

    t64 = ((x277*(x278>x279))+x280);

    if (t64 != 25U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x282 = -3116;
	int16_t x284 = -34;
	int32_t t65 = 43683345;

    t65 = ((x281*(x282>x283))+x284);

    if (t65 != -34) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x285 = -1LL;
	volatile uint16_t x286 = 6929U;
	uint64_t x287 = 321460549302LLU;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

    t66 = ((x285*(x286>x287))+x288);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x291 = -1LL;
	static volatile int32_t t67 = INT32_MIN;

    t67 = ((x289*(x290>x291))+x292);

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x294 = -8;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 1U;
	static int32_t t68 = -2919890;

    t68 = ((x293*(x294>x295))+x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = -5152;
	int32_t x298 = 73829;
	static volatile int64_t x299 = -356397879322LL;
	volatile int32_t t69 = 496367656;

    t69 = ((x297*(x298>x299))+x300);

    if (t69 != -5280) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x302 = INT32_MIN;
	static uint8_t x303 = 24U;
	uint64_t x304 = 15LLU;

    t70 = ((x301*(x302>x303))+x304);

    if (t70 != 15LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x305 = UINT64_MAX;
	int64_t x306 = 489872108LL;
	int16_t x307 = INT16_MIN;
	volatile uint64_t t71 = 79573278LLU;

    t71 = ((x305*(x306>x307))+x308);

    if (t71 != 32766LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = -901752;
	static int32_t x311 = 199141;
	static volatile int8_t x312 = INT8_MIN;
	int32_t t72 = -133;

    t72 = ((x309*(x310>x311))+x312);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x313 = 601789633162537LLU;
	uint8_t x314 = 53U;
	uint16_t x315 = 112U;
	static uint16_t x316 = 1669U;
	static volatile uint64_t t73 = 5LLU;

    t73 = ((x313*(x314>x315))+x316);

    if (t73 != 1669LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x317 = -11152349189LL;
	int64_t x319 = -1LL;
	int32_t x320 = 296669423;
	volatile int64_t t74 = 3512289117073LL;

    t74 = ((x317*(x318>x319))+x320);

    if (t74 != 296669423LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x323 = -1;
	int32_t x324 = INT32_MAX;

    t75 = ((x321*(x322>x323))+x324);

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x325 = UINT16_MAX;
	static int64_t x326 = INT64_MIN;
	uint32_t x327 = 25U;
	int64_t t76 = 2449LL;

    t76 = ((x325*(x326>x327))+x328);

    if (t76 != 34360930458299LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x329 = 4183898;
	volatile int32_t x330 = INT32_MAX;
	int8_t x331 = 0;
	static int64_t t77 = -1LL;

    t77 = ((x329*(x330>x331))+x332);

    if (t77 != -2202009766939659537LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x333 = 1U;
	volatile int16_t x334 = -13121;
	static int32_t x336 = -250126459;
	uint32_t t78 = 7592U;

    t78 = ((x333*(x334>x335))+x336);

    if (t78 != 4044840837U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MIN;
	static volatile int8_t x338 = INT8_MAX;
	int64_t x339 = 3LL;
	int16_t x340 = 9;
	int32_t t79 = 8;

    t79 = ((x337*(x338>x339))+x340);

    if (t79 != -2147483639) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = -58;
	int16_t x342 = -51;
	volatile uint32_t x344 = 690707U;
	volatile uint32_t t80 = 49186364U;

    t80 = ((x341*(x342>x343))+x344);

    if (t80 != 690649U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x345 = 610049;
	int64_t x348 = -16034240756002440LL;
	int64_t t81 = 8818929328LL;

    t81 = ((x345*(x346>x347))+x348);

    if (t81 != -16034240756002440LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x349 = -1;
	int32_t x351 = INT32_MAX;
	uint8_t x352 = 5U;
	volatile int32_t t82 = -128613796;

    t82 = ((x349*(x350>x351))+x352);

    if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x353 = -1;
	uint16_t x354 = 3U;
	int8_t x356 = -5;

    t83 = ((x353*(x354>x355))+x356);

    if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = -1;
	int64_t x360 = -16067LL;
	static volatile int64_t t84 = 1922962047901493015LL;

    t84 = ((x357*(x358>x359))+x360);

    if (t84 != -16068LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x361 = 15LLU;
	uint32_t x362 = 3945U;
	volatile int16_t x363 = -7997;
	uint64_t t85 = 6024LLU;

    t85 = ((x361*(x362>x363))+x364);

    if (t85 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x365 = 15664U;
	int32_t x367 = INT32_MIN;
	static uint8_t x368 = 2U;
	volatile int32_t t86 = -1;

    t86 = ((x365*(x366>x367))+x368);

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	static int64_t x371 = -35944692417347062LL;
	static volatile int64_t x372 = INT64_MAX;

    t87 = ((x369*(x370>x371))+x372);

    if (t87 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x373 = -1;
	int16_t x374 = INT16_MIN;
	static int64_t x376 = -1LL;
	volatile int64_t t88 = 791543660221295LL;

    t88 = ((x373*(x374>x375))+x376);

    if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x378 = 0;
	static int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	int64_t t89 = INT64_MIN;

    t89 = ((x377*(x378>x379))+x380);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x381 = INT64_MAX;
	volatile int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	static uint16_t x384 = 3963U;
	volatile int64_t t90 = 7148871LL;

    t90 = ((x381*(x382>x383))+x384);

    if (t90 != 3963LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x386 = 7096682120830385LLU;
	int64_t x387 = 4624620LL;
	volatile int8_t x388 = 0;

    t91 = ((x385*(x386>x387))+x388);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x390 = -8;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;

    t92 = ((x389*(x390>x391))+x392);

    if (t92 != 11LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = 65016781U;
	volatile int32_t x394 = 2655495;
	uint64_t x395 = 5488933LLU;
	static uint8_t x396 = 0U;

    t93 = ((x393*(x394>x395))+x396);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x397 = INT8_MAX;
	static int64_t x398 = 993532993150LL;
	uint16_t x399 = 4U;
	uint16_t x400 = UINT16_MAX;
	int32_t t94 = 946600083;

    t94 = ((x397*(x398>x399))+x400);

    if (t94 != 65662) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x403 = -28652LL;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t95 = INT32_MAX;

    t95 = ((x401*(x402>x403))+x404);

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	volatile int8_t x410 = -1;
	static int8_t x411 = 29;

    t96 = ((x409*(x410>x411))+x412);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x413 = INT32_MAX;
	volatile int64_t x414 = -26909451969650684LL;
	int8_t x415 = INT8_MIN;
	int32_t x416 = 1;
	volatile int32_t t97 = -1;

    t97 = ((x413*(x414>x415))+x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x417 = 4269LL;
	int8_t x418 = -1;
	volatile int64_t t98 = -7683602034LL;

    t98 = ((x417*(x418>x419))+x420);

    if (t98 != 4268LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x426 = -1;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = INT64_MAX;
	volatile int64_t t99 = INT64_MAX;

    t99 = ((x425*(x426>x427))+x428);

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x431 = 79U;
	int16_t x432 = -1;
	int32_t t100 = 16049;

    t100 = ((x429*(x430>x431))+x432);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x433 = INT8_MIN;
	static volatile int16_t x435 = INT16_MIN;
	uint32_t x436 = UINT32_MAX;

    t101 = ((x433*(x434>x435))+x436);

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x438 = INT16_MIN;
	int64_t x439 = -1LL;
	uint32_t x440 = 1393U;
	volatile uint32_t t102 = 0U;

    t102 = ((x437*(x438>x439))+x440);

    if (t102 != 1393U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x442 = -1;
	int8_t x443 = INT8_MAX;

    t103 = ((x441*(x442>x443))+x444);

    if (t103 != 2147483648U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x445 = -1LL;
	int64_t x447 = 51376903638434LL;
	static uint32_t x448 = 1321U;
	int64_t t104 = 1834296193099519LL;

    t104 = ((x445*(x446>x447))+x448);

    if (t104 != 1321LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x449 = 354880LL;
	int8_t x450 = -1;
	int8_t x451 = INT8_MIN;
	static int64_t x452 = INT64_MIN;

    t105 = ((x449*(x450>x451))+x452);

    if (t105 != -9223372036854420928LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x453 = INT16_MIN;
	static int8_t x454 = -1;
	uint8_t x455 = 76U;
	volatile uint64_t x456 = 936071147935658LLU;

    t106 = ((x453*(x454>x455))+x456);

    if (t106 != 936071147935658LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x457 = 61U;
	uint64_t x458 = 351937082516LLU;
	volatile int16_t x459 = INT16_MIN;
	int64_t x460 = 1949402LL;
	static int64_t t107 = -7006594LL;

    t107 = ((x457*(x458>x459))+x460);

    if (t107 != 1949402LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x461 = -1;
	volatile int32_t x462 = -611450;
	int64_t x463 = 211LL;
	int8_t x464 = INT8_MIN;
	volatile int32_t t108 = -17638;

    t108 = ((x461*(x462>x463))+x464);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x465 = 508U;
	static int16_t x466 = 1743;
	static int32_t x468 = 224;
	static int32_t t109 = 3239257;

    t109 = ((x465*(x466>x467))+x468);

    if (t109 != 732) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = -1;
	int16_t x470 = INT16_MIN;
	static int64_t x471 = -1LL;
	volatile int16_t x472 = 588;
	int32_t t110 = -2;

    t110 = ((x469*(x470>x471))+x472);

    if (t110 != 588) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x474 = -71523294479774226LL;
	int16_t x475 = -9213;
	static int64_t t111 = -1823447961452821291LL;

    t111 = ((x473*(x474>x475))+x476);

    if (t111 != 127LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x479 = INT32_MAX;
	int64_t x480 = -1LL;
	static int64_t t112 = -578769886LL;

    t112 = ((x477*(x478>x479))+x480);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x481 = -1;
	uint16_t x482 = 1587U;
	volatile uint32_t x483 = 21U;
	int8_t x484 = 63;
	int32_t t113 = -1;

    t113 = ((x481*(x482>x483))+x484);

    if (t113 != 62) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x486 = 113597383083852417LL;
	static int8_t x487 = INT8_MIN;
	uint32_t x488 = 16U;

    t114 = ((x485*(x486>x487))+x488);

    if (t114 != 1045LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x489 = 8708LL;
	uint8_t x490 = UINT8_MAX;
	int64_t x491 = -1LL;
	volatile int64_t x492 = 908196037106761488LL;
	int64_t t115 = 328443337447LL;

    t115 = ((x489*(x490>x491))+x492);

    if (t115 != 908196037106770196LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x494 = INT64_MIN;
	int16_t x495 = INT16_MIN;
	static volatile int16_t x496 = 2;
	int32_t t116 = -23082;

    t116 = ((x493*(x494>x495))+x496);

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x497 = UINT32_MAX;
	int32_t x498 = 882;
	static volatile int64_t x499 = INT64_MAX;
	int8_t x500 = INT8_MIN;
	static volatile uint32_t t117 = 3672U;

    t117 = ((x497*(x498>x499))+x500);

    if (t117 != 4294967168U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = -19;
	static uint16_t x503 = 5U;
	uint16_t x504 = 58U;
	volatile int32_t t118 = -1;

    t118 = ((x501*(x502>x503))+x504);

    if (t118 != 58) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = INT16_MAX;
	uint16_t x506 = 82U;
	uint64_t x507 = UINT64_MAX;
	uint8_t x508 = UINT8_MAX;
	int32_t t119 = 4;

    t119 = ((x505*(x506>x507))+x508);

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = 1584;
	int64_t x511 = 129415229175005LL;
	uint8_t x512 = 3U;
	volatile int32_t t120 = -3;

    t120 = ((x509*(x510>x511))+x512);

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x513 = -1LL;
	int16_t x514 = -1;
	int8_t x516 = INT8_MAX;

    t121 = ((x513*(x514>x515))+x516);

    if (t121 != 126LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x517 = 249831884LLU;
	int64_t x518 = INT64_MIN;
	int64_t x519 = -124106LL;
	uint8_t x520 = 1U;
	volatile uint64_t t122 = 131956423645170266LLU;

    t122 = ((x517*(x518>x519))+x520);

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint16_t x522 = 39U;
	static int64_t x523 = 361947270957414LL;
	volatile int32_t t123 = -14;

    t123 = ((x521*(x522>x523))+x524);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile int64_t x526 = INT64_MIN;
	int64_t x527 = -1LL;
	volatile int32_t x528 = 16;

    t124 = ((x525*(x526>x527))+x528);

    if (t124 != 16U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x529 = -1;
	uint16_t x530 = 21U;
	int16_t x532 = -98;
	int32_t t125 = -4152327;

    t125 = ((x529*(x530>x531))+x532);

    if (t125 != -99) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x533 = 33U;
	uint8_t x534 = 35U;
	volatile int64_t x536 = INT64_MIN;

    t126 = ((x533*(x534>x535))+x536);

    if (t126 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x538 = UINT8_MAX;
	volatile int16_t x539 = 1553;
	int8_t x540 = INT8_MIN;
	int32_t t127 = 34267981;

    t127 = ((x537*(x538>x539))+x540);

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x542 = UINT8_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x541*(x542>x543))+x544);

    if (t128 != -256) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x545 = 435333;
	int32_t x546 = -1;
	uint64_t x547 = 3LLU;
	volatile uint8_t x548 = UINT8_MAX;
	volatile int32_t t129 = -11978561;

    t129 = ((x545*(x546>x547))+x548);

    if (t129 != 435588) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x549 = INT16_MAX;
	static volatile uint8_t x550 = 108U;

    t130 = ((x549*(x550>x551))+x552);

    if (t130 != 32718) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x553 = -1;
	int64_t x554 = INT64_MAX;

    t131 = ((x553*(x554>x555))+x556);

    if (t131 != 65534) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x558 = UINT16_MAX;
	int8_t x559 = 17;
	static int64_t x560 = 859243729571685LL;
	static volatile int64_t t132 = 2015815373LL;

    t132 = ((x557*(x558>x559))+x560);

    if (t132 != 859243729637220LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x562 = UINT32_MAX;
	int64_t x563 = -9076715LL;
	static uint16_t x564 = UINT16_MAX;

    t133 = ((x561*(x562>x563))+x564);

    if (t133 != 65407) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x567 = -1;

    t134 = ((x565*(x566>x567))+x568);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x569 = INT16_MAX;
	volatile uint64_t x571 = 1092542962481LLU;
	static int16_t x572 = -2;
	volatile int32_t t135 = 14398;

    t135 = ((x569*(x570>x571))+x572);

    if (t135 != 32765) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = INT32_MAX;
	volatile int64_t x574 = INT64_MIN;
	int8_t x576 = INT8_MAX;
	int32_t t136 = 60;

    t136 = ((x573*(x574>x575))+x576);

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x578 = 45U;
	int16_t x579 = -1;
	volatile int16_t x580 = INT16_MIN;

    t137 = ((x577*(x578>x579))+x580);

    if (t137 != -32777LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x582 = INT8_MIN;
	int8_t x584 = -17;

    t138 = ((x581*(x582>x583))+x584);

    if (t138 != -17) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x585 = -1;
	int64_t x586 = INT64_MIN;
	int32_t x587 = INT32_MIN;
	volatile int32_t t139 = -23619;

    t139 = ((x585*(x586>x587))+x588);

    if (t139 != 11) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x597 = -1;
	int32_t x598 = INT32_MIN;
	volatile int16_t x600 = -173;
	volatile int32_t t140 = -1;

    t140 = ((x597*(x598>x599))+x600);

    if (t140 != -173) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x601 = -1;
	static uint16_t x602 = UINT16_MAX;
	volatile int8_t x604 = -7;
	int32_t t141 = 115826081;

    t141 = ((x601*(x602>x603))+x604);

    if (t141 != -8) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x605 = UINT64_MAX;
	int16_t x606 = -1;
	uint64_t t142 = 90LLU;

    t142 = ((x605*(x606>x607))+x608);

    if (t142 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x609 = INT32_MAX;
	int32_t x610 = -1;
	int64_t x611 = INT64_MIN;
	volatile int8_t x612 = -1;
	int32_t t143 = 1;

    t143 = ((x609*(x610>x611))+x612);

    if (t143 != 2147483646) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x613 = -1LL;
	int64_t x616 = INT64_MAX;
	int64_t t144 = 196LL;

    t144 = ((x613*(x614>x615))+x616);

    if (t144 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x618 = 121U;
	static uint16_t x619 = UINT16_MAX;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = ((x617*(x618>x619))+x620);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x622 = 2025;
	static uint64_t x623 = 1000642589594598577LLU;
	volatile int32_t t146 = 209442;

    t146 = ((x621*(x622>x623))+x624);

    if (t146 != 3241) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x625 = INT16_MIN;
	volatile int8_t x626 = -1;
	volatile int16_t x628 = -1473;
	static int32_t t147 = 14;

    t147 = ((x625*(x626>x627))+x628);

    if (t147 != -1473) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x629 = -45;
	int16_t x630 = 179;
	uint16_t x631 = 715U;
	volatile uint64_t t148 = UINT64_MAX;

    t148 = ((x629*(x630>x631))+x632);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x634 = 24;
	static uint8_t x635 = 42U;
	static uint16_t x636 = UINT16_MAX;

    t149 = ((x633*(x634>x635))+x636);

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x637 = 12U;
	int16_t x638 = INT16_MAX;
	static int64_t x639 = -114225LL;
	uint32_t x640 = 24450U;
	volatile uint32_t t150 = 35203U;

    t150 = ((x637*(x638>x639))+x640);

    if (t150 != 24462U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x641 = UINT32_MAX;
	int64_t x642 = INT64_MIN;
	static int64_t x643 = INT64_MAX;
	uint32_t t151 = 367704U;

    t151 = ((x641*(x642>x643))+x644);

    if (t151 != 127U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x649 = 0;
	static int16_t x650 = INT16_MIN;
	volatile int8_t x652 = INT8_MIN;
	int32_t t152 = -482;

    t152 = ((x649*(x650>x651))+x652);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x653 = INT32_MAX;
	int32_t x654 = 1;
	volatile int64_t x655 = -1LL;
	volatile int64_t x656 = INT64_MIN;
	static volatile int64_t t153 = -375385226185270362LL;

    t153 = ((x653*(x654>x655))+x656);

    if (t153 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x657 = -1LL;
	uint32_t x658 = 0U;
	uint32_t x659 = 1U;
	uint32_t x660 = 732232425U;

    t154 = ((x657*(x658>x659))+x660);

    if (t154 != 732232425LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x661 = INT64_MIN;
	int8_t x662 = INT8_MIN;
	uint8_t x664 = 1U;

    t155 = ((x661*(x662>x663))+x664);

    if (t155 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x665 = 451598U;
	int32_t x667 = 8;
	volatile int64_t t156 = 240925251820152836LL;

    t156 = ((x665*(x666>x667))+x668);

    if (t156 != -110360969357034986LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x669 = 36;
	volatile uint32_t x670 = UINT32_MAX;
	static int8_t x671 = 13;
	uint32_t x672 = 2815200U;
	uint32_t t157 = 2U;

    t157 = ((x669*(x670>x671))+x672);

    if (t157 != 2815236U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = -35;
	int64_t x674 = INT64_MAX;
	static uint64_t x675 = UINT64_MAX;
	static volatile int32_t t158 = -30922822;

    t158 = ((x673*(x674>x675))+x676);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x677 = 11U;
	volatile uint8_t x678 = 10U;
	static volatile int16_t x679 = INT16_MIN;
	uint32_t x680 = 2314U;
	volatile uint32_t t159 = 101627883U;

    t159 = ((x677*(x678>x679))+x680);

    if (t159 != 2325U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x682 = 1052851401905684LL;
	volatile int64_t x683 = -1LL;
	int8_t x684 = INT8_MIN;
	static uint64_t t160 = 494674162450531LLU;

    t160 = ((x681*(x682>x683))+x684);

    if (t160 != 1516403270000882783LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x685 = INT32_MIN;
	volatile uint32_t x686 = 40U;
	static int64_t x688 = INT64_MAX;
	int64_t t161 = INT64_MAX;

    t161 = ((x685*(x686>x687))+x688);

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x690 = 1161022777LLU;
	uint64_t x691 = UINT64_MAX;
	static int8_t x692 = -1;
	int64_t t162 = 3746762858673439LL;

    t162 = ((x689*(x690>x691))+x692);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x693 = 748754368275LL;
	int64_t x694 = 41163341LL;
	static int16_t x695 = 28;
	int64_t t163 = -334010632536LL;

    t163 = ((x693*(x694>x695))+x696);

    if (t163 != 748754368530LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x697 = -1;
	uint8_t x699 = 0U;
	uint64_t t164 = 222905LLU;

    t164 = ((x697*(x698>x699))+x700);

    if (t164 != 330616163LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x701 = -247;
	uint32_t x702 = UINT32_MAX;
	int8_t x704 = INT8_MIN;
	static int32_t t165 = 0;

    t165 = ((x701*(x702>x703))+x704);

    if (t165 != -375) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x705 = -19;
	int64_t x707 = -29218373LL;
	static int8_t x708 = -1;
	volatile int32_t t166 = -104273936;

    t166 = ((x705*(x706>x707))+x708);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x709 = 2552U;
	int16_t x710 = -1;
	int8_t x711 = INT8_MIN;
	int8_t x712 = -1;
	int32_t t167 = 37;

    t167 = ((x709*(x710>x711))+x712);

    if (t167 != 2551) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x713 = -6;
	static int16_t x714 = INT16_MIN;
	int32_t x716 = INT32_MIN;
	int32_t t168 = INT32_MIN;

    t168 = ((x713*(x714>x715))+x716);

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x717 = 3;
	int64_t x718 = -2433472733LL;
	int32_t x719 = 3;
	uint16_t x720 = UINT16_MAX;
	int32_t t169 = 3867;

    t169 = ((x717*(x718>x719))+x720);

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x722 = -1;
	int64_t x724 = -24712367405968315LL;
	int64_t t170 = 827310LL;

    t170 = ((x721*(x722>x723))+x724);

    if (t170 != -24712367405964682LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x725 = INT32_MIN;
	int64_t x726 = -1LL;
	int32_t x727 = INT32_MAX;
	volatile int16_t x728 = INT16_MIN;

    t171 = ((x725*(x726>x727))+x728);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x729 = -1;
	int64_t x730 = INT64_MIN;
	static int32_t x731 = INT32_MIN;
	static int64_t x732 = -1LL;

    t172 = ((x729*(x730>x731))+x732);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x733 = 1;
	uint8_t x734 = 1U;
	volatile int32_t x735 = -599947157;
	volatile int64_t x736 = 2050722LL;
	static volatile int64_t t173 = -13LL;

    t173 = ((x733*(x734>x735))+x736);

    if (t173 != 2050723LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x737 = -1LL;
	int32_t x738 = -1;
	volatile int8_t x739 = -4;

    t174 = ((x737*(x738>x739))+x740);

    if (t174 != 254LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x741 = -7;
	uint8_t x742 = 15U;
	uint8_t x743 = 105U;
	volatile int32_t x744 = INT32_MIN;
	static int32_t t175 = INT32_MIN;

    t175 = ((x741*(x742>x743))+x744);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x745 = 267LL;
	uint8_t x746 = UINT8_MAX;
	int16_t x747 = -1;
	volatile int8_t x748 = INT8_MIN;
	static int64_t t176 = -1LL;

    t176 = ((x745*(x746>x747))+x748);

    if (t176 != 139LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MAX;
	uint8_t x752 = UINT8_MAX;
	static int64_t t177 = -70621726143036662LL;

    t177 = ((x749*(x750>x751))+x752);

    if (t177 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x753 = 2718368961600LLU;
	static int32_t x754 = -1;
	uint64_t x755 = 14LLU;
	int64_t x756 = INT64_MIN;
	volatile uint64_t t178 = 2594328654LLU;

    t178 = ((x753*(x754>x755))+x756);

    if (t178 != 9223374755223737408LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x757 = INT16_MIN;
	int8_t x758 = INT8_MAX;
	int64_t x759 = INT64_MAX;
	uint32_t x760 = UINT32_MAX;
	uint32_t t179 = UINT32_MAX;

    t179 = ((x757*(x758>x759))+x760);

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x765 = 1;
	uint16_t x767 = 17U;
	int8_t x768 = -3;
	int32_t t180 = 105156347;

    t180 = ((x765*(x766>x767))+x768);

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x769 = 1LL;
	volatile int8_t x770 = -1;
	static int32_t x771 = INT32_MIN;
	int8_t x772 = -1;
	int64_t t181 = 1LL;

    t181 = ((x769*(x770>x771))+x772);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x773 = 1465412;
	volatile int64_t x774 = INT64_MAX;
	static int8_t x776 = -43;

    t182 = ((x773*(x774>x775))+x776);

    if (t182 != 1465369) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x778 = -1;
	static uint16_t x779 = UINT16_MAX;
	int64_t x780 = INT64_MIN;
	static volatile int64_t t183 = INT64_MIN;

    t183 = ((x777*(x778>x779))+x780);

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x781 = 104U;
	int32_t x782 = 3785899;
	static int8_t x783 = INT8_MAX;
	volatile uint32_t x784 = UINT32_MAX;
	volatile uint32_t t184 = 68348U;

    t184 = ((x781*(x782>x783))+x784);

    if (t184 != 103U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x786 = -2364016LL;
	int16_t x787 = INT16_MAX;
	int32_t t185 = 7193057;

    t185 = ((x785*(x786>x787))+x788);

    if (t185 != -15) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x789 = UINT64_MAX;
	volatile int16_t x790 = INT16_MAX;
	uint64_t x791 = 1741LLU;
	int32_t x792 = -62;
	uint64_t t186 = 10LLU;

    t186 = ((x789*(x790>x791))+x792);

    if (t186 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x793 = 139489513776636616LLU;
	volatile int32_t x795 = 283;
	int16_t x796 = INT16_MIN;
	volatile uint64_t t187 = 13470LLU;

    t187 = ((x793*(x794>x795))+x796);

    if (t187 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x797 = 0;
	int8_t x798 = INT8_MAX;
	int64_t x800 = -1LL;
	volatile int64_t t188 = -230LL;

    t188 = ((x797*(x798>x799))+x800);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = 1220LL;
	int32_t x802 = INT32_MIN;
	int16_t x803 = INT16_MIN;
	int16_t x804 = -1;
	static volatile int64_t t189 = -50LL;

    t189 = ((x801*(x802>x803))+x804);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x805 = 4;
	uint64_t x806 = 1229949LLU;
	static uint8_t x807 = 116U;
	int32_t x808 = 23;
	static volatile int32_t t190 = -2801;

    t190 = ((x805*(x806>x807))+x808);

    if (t190 != 27) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x809 = UINT64_MAX;
	static int8_t x810 = -1;
	static int8_t x811 = INT8_MIN;
	static uint64_t t191 = 37LLU;

    t191 = ((x809*(x810>x811))+x812);

    if (t191 != 65534LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x814 = 4U;
	uint8_t x815 = UINT8_MAX;
	static int16_t x816 = INT16_MAX;

    t192 = ((x813*(x814>x815))+x816);

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x817 = INT8_MAX;
	static uint16_t x818 = UINT16_MAX;
	int32_t x820 = -1;
	static int32_t t193 = 3578;

    t193 = ((x817*(x818>x819))+x820);

    if (t193 != 126) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x821 = 187713114703978LLU;
	volatile uint64_t x822 = UINT64_MAX;
	uint16_t x823 = 59U;
	volatile uint64_t t194 = 28LLU;

    t194 = ((x821*(x822>x823))+x824);

    if (t194 != 187713114703977LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x826 = INT64_MIN;
	uint64_t x828 = 56419915374310LLU;

    t195 = ((x825*(x826>x827))+x828);

    if (t195 != 56419915374310LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x829 = 3677U;
	uint32_t x830 = 15489U;
	static uint32_t x832 = UINT32_MAX;
	uint32_t t196 = 406209841U;

    t196 = ((x829*(x830>x831))+x832);

    if (t196 != 3676U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x833 = 51;
	uint8_t x834 = 5U;
	uint64_t x835 = UINT64_MAX;
	int8_t x836 = -3;
	int32_t t197 = 357982;

    t197 = ((x833*(x834>x835))+x836);

    if (t197 != -3) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x837 = 4;
	uint64_t x839 = 68082468LLU;
	volatile int8_t x840 = -35;
	int32_t t198 = 21663695;

    t198 = ((x837*(x838>x839))+x840);

    if (t198 != -31) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x841 = -1LL;
	int32_t x842 = -57861384;
	volatile uint8_t x843 = UINT8_MAX;
	volatile int32_t x844 = -1;
	int64_t t199 = -554612883166950296LL;

    t199 = ((x841*(x842>x843))+x844);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

