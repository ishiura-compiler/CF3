
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

static uint16_t x2 = UINT16_MAX;
uint64_t x3 = UINT64_MAX;
volatile int16_t x8 = -1;
volatile uint8_t x14 = 3U;
int8_t x17 = -1;
static uint64_t x20 = 13120339237LLU;
static int8_t x21 = INT8_MAX;
int32_t x22 = 9;
int16_t x24 = -13;
static int64_t x25 = -1LL;
int8_t x31 = INT8_MAX;
static uint16_t x35 = 33U;
uint32_t x37 = UINT32_MAX;
int16_t x47 = INT16_MAX;
static uint8_t x48 = 13U;
static int64_t x55 = 0LL;
volatile int32_t t13 = -1;
uint8_t x63 = 10U;
int32_t x69 = INT32_MIN;
int8_t x72 = INT8_MIN;
int16_t x73 = INT16_MAX;
volatile int16_t x75 = -1;
int8_t x87 = -2;
uint32_t x92 = 109U;
int32_t t21 = 1;
int8_t x103 = INT8_MIN;
int8_t x108 = INT8_MIN;
volatile int32_t t27 = -39713801;
uint64_t x123 = UINT64_MAX;
volatile int16_t x124 = INT16_MIN;
static int32_t t29 = -1;
int16_t x125 = -1;
uint64_t x128 = 3298030825102922LLU;
static uint64_t x136 = UINT64_MAX;
int32_t x141 = -7071;
int16_t x145 = INT16_MIN;
volatile int8_t x151 = -22;
static int32_t x154 = INT32_MIN;
static volatile uint64_t x156 = UINT64_MAX;
uint8_t x159 = 23U;
int64_t x163 = -1LL;
volatile int16_t x166 = INT16_MIN;
int16_t x167 = -1;
static int16_t x168 = 0;
int16_t x172 = -1;
uint16_t x174 = 26U;
uint64_t x175 = UINT64_MAX;
uint16_t x181 = 19916U;
volatile uint8_t x182 = 4U;
uint16_t x183 = UINT16_MAX;
uint32_t x196 = 8822U;
static volatile int32_t t44 = 850;
volatile int32_t x198 = INT32_MIN;
int8_t x199 = INT8_MIN;
uint8_t x201 = 12U;
int32_t x209 = -21;
volatile int32_t t49 = 15829;
int64_t x220 = INT64_MIN;
uint32_t x222 = UINT32_MAX;
volatile int16_t x223 = INT16_MAX;
volatile int8_t x232 = -1;
volatile int32_t t53 = 3;
volatile int32_t t54 = -163;
uint32_t x242 = UINT32_MAX;
volatile int8_t x246 = INT8_MIN;
uint8_t x248 = 53U;
int8_t x253 = INT8_MAX;
int8_t x260 = INT8_MIN;
int64_t x269 = -1LL;
static volatile uint32_t x278 = 650923077U;
int32_t x280 = INT32_MAX;
static volatile int32_t t65 = -53;
uint32_t x286 = 10623026U;
int16_t x288 = 1742;
int16_t x305 = -20;
int16_t x311 = -23;
int32_t t70 = 4925;
int32_t x320 = INT32_MIN;
volatile int32_t t71 = -16728504;
uint16_t x325 = 1078U;
volatile uint32_t x326 = 6U;
volatile int16_t x335 = INT16_MAX;
int8_t x336 = -1;
int16_t x337 = 1007;
uint64_t x338 = 31914896LLU;
int8_t x339 = 2;
int64_t x341 = INT64_MIN;
static int32_t x344 = 74720;
static volatile int32_t t77 = -707;
int16_t x345 = -1;
static uint64_t x347 = 54353676550LLU;
int16_t x349 = -388;
int8_t x350 = -1;
static uint8_t x357 = 124U;
static int32_t x362 = INT32_MIN;
uint64_t x363 = 5022380302175218LLU;
static volatile uint8_t x373 = UINT8_MAX;
int16_t x384 = INT16_MIN;
volatile int16_t x386 = INT16_MIN;
int64_t x387 = 31424042246130317LL;
uint64_t x394 = 486557640LLU;
volatile int32_t t89 = -283993666;
volatile int32_t x397 = 1;
static volatile int32_t x401 = INT32_MIN;
int16_t x404 = 411;
volatile int32_t t91 = 293264620;
int16_t x415 = INT16_MAX;
uint64_t x416 = UINT64_MAX;
uint16_t x425 = UINT16_MAX;
volatile int32_t t99 = -16;
uint16_t x446 = 9549U;
int8_t x448 = 56;
int8_t x451 = -23;
int32_t t102 = -473020792;
int8_t x463 = -28;
volatile uint64_t x474 = 14735922485549673LLU;
volatile uint8_t x476 = 7U;
int16_t x484 = INT16_MIN;
uint32_t x487 = 128U;
volatile int8_t x490 = INT8_MAX;
static int64_t x491 = INT64_MIN;
int16_t x495 = -485;
int8_t x497 = INT8_MIN;
static volatile int32_t t115 = -319259437;
int32_t x510 = 18;
int64_t x516 = -1LL;
int32_t t118 = -3142445;
static int64_t x529 = -254771290171LL;
int16_t x532 = INT16_MIN;
volatile int32_t t122 = -3106;
int32_t x541 = -1;
uint64_t x542 = 317822LLU;
int32_t x552 = INT32_MIN;
static volatile int16_t x560 = INT16_MIN;
int32_t x565 = INT32_MIN;
volatile int8_t x573 = 16;
volatile int32_t t131 = -9298;
int8_t x577 = 5;
uint64_t x581 = UINT64_MAX;
int32_t x590 = INT32_MIN;
static volatile int8_t x591 = INT8_MIN;
uint8_t x592 = 89U;
int32_t x593 = 0;
uint8_t x597 = UINT8_MAX;
static int32_t x625 = INT32_MAX;
int32_t t144 = -6353370;
int16_t x634 = -1;
int64_t x637 = INT64_MIN;
uint8_t x639 = 52U;
int64_t x643 = INT64_MAX;
static int64_t x655 = INT64_MIN;
int32_t t149 = -4031;
static volatile uint8_t x667 = 9U;
volatile int32_t x673 = 320;
static int8_t x678 = INT8_MAX;
int32_t t155 = 111467;
static int32_t t157 = 14;
int32_t t158 = -521948;
uint64_t x694 = 702396209LLU;
int16_t x698 = 1507;
uint32_t x702 = 9339U;
int8_t x704 = INT8_MIN;
int8_t x708 = INT8_MAX;
int64_t x711 = -14588895599815LL;
int8_t x718 = INT8_MAX;
int32_t t165 = 27418;
int8_t x727 = -1;
volatile uint8_t x728 = 4U;
int32_t t167 = 2484;
int64_t x729 = INT64_MIN;
static uint8_t x752 = 0U;
int8_t x758 = INT8_MIN;
volatile uint16_t x760 = UINT16_MAX;
volatile int64_t x764 = INT64_MAX;
static int16_t x770 = 129;
volatile int32_t t174 = 1;
int32_t x787 = INT32_MAX;
uint16_t x794 = 29736U;
int8_t x801 = INT8_MIN;
int64_t x803 = 1808347961LL;
uint32_t x804 = UINT32_MAX;
uint64_t x808 = 5622LLU;
int32_t x814 = 20;
uint64_t x815 = 7828829LLU;
int32_t x822 = INT32_MIN;
volatile int64_t x838 = -1LL;
int64_t x839 = INT64_MIN;
volatile int32_t x841 = INT32_MIN;
int32_t t191 = 1401;
int8_t x854 = 1;
int32_t x855 = INT32_MIN;
int32_t x858 = INT32_MIN;
int32_t t193 = 1;
int64_t x867 = INT64_MAX;
int16_t x868 = -1;
int32_t t195 = -25043;
int8_t x887 = -53;
int64_t x899 = -2211856733715273044LL;
static int32_t t199 = -154474;


void f0(void) {
    	int8_t x1 = 3;
	int32_t x4 = 666;
	int32_t t0 = 507587;

    t0 = ((x1&x2)<=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	static uint8_t x6 = 101U;
	static volatile uint16_t x7 = 10U;
	static int32_t t1 = 15527549;

    t1 = ((x5&x6)<=(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 23U;
	uint16_t x10 = 7084U;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 35U;
	int32_t t2 = 1007474342;

    t2 = ((x9&x10)<=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile uint32_t x15 = 3074765U;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = -10;

    t3 = ((x13&x14)<=(x15+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int16_t x19 = -1;
	int32_t t4 = 53974103;

    t4 = ((x17&x18)<=(x19+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x23 = 6U;
	static int32_t t5 = -271;

    t5 = ((x21&x22)<=(x23+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	uint32_t x27 = 8U;
	volatile int8_t x28 = INT8_MAX;
	static int32_t t6 = -18535629;

    t6 = ((x25&x26)<=(x27+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = -20;
	int32_t x30 = -1;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 7355;

    t7 = ((x29&x30)<=(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 63U;
	int8_t x34 = 1;
	int64_t x36 = -1LL;
	int32_t t8 = 95;

    t8 = ((x33&x34)<=(x35+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 339708U;
	int32_t x39 = INT32_MIN;
	static volatile int64_t x40 = INT64_MAX;
	static int32_t t9 = 272796;

    t9 = ((x37&x38)<=(x39+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	static int64_t x42 = INT64_MIN;
	static uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 1;

    t10 = ((x41&x42)<=(x43+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 29U;
	uint8_t x46 = 0U;
	volatile int32_t t11 = 3355726;

    t11 = ((x45&x46)<=(x47+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -2802;
	static volatile int32_t x50 = 1992;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = 28;
	static volatile int32_t t12 = 6594;

    t12 = ((x49&x50)<=(x51+x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	static int16_t x56 = -1;

    t13 = ((x53&x54)<=(x55+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	int16_t x64 = -9223;
	int32_t t14 = -662718509;

    t14 = ((x61&x62)<=(x63+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MAX;
	int64_t x66 = INT64_MAX;
	volatile int16_t x67 = 1;
	volatile uint64_t x68 = 1LLU;
	int32_t t15 = -1572;

    t15 = ((x65&x66)<=(x67+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x70 = INT16_MAX;
	uint64_t x71 = 2LLU;
	int32_t t16 = 3704499;

    t16 = ((x69&x70)<=(x71+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = INT16_MIN;
	static volatile uint16_t x76 = 90U;
	int32_t t17 = 37256;

    t17 = ((x73&x74)<=(x75+x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	static int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 6U;
	int32_t t18 = 709368930;

    t18 = ((x77&x78)<=(x79+x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 680111405082LLU;
	int8_t x82 = -1;
	volatile int32_t x83 = 0;
	static int64_t x84 = 15758951LL;
	static volatile int32_t t19 = 136837545;

    t19 = ((x81&x82)<=(x83+x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x85 = -1;
	volatile int64_t x86 = INT64_MAX;
	int64_t x88 = INT64_MAX;
	volatile int32_t t20 = 333638;

    t20 = ((x85&x86)<=(x87+x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	static int8_t x91 = -40;

    t21 = ((x89&x90)<=(x91+x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = 39;
	static int16_t x94 = -1;
	static uint16_t x95 = UINT16_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t22 = -1272936;

    t22 = ((x93&x94)<=(x95+x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	volatile int32_t x98 = INT32_MIN;
	volatile int16_t x99 = 0;
	int64_t x100 = INT64_MIN;
	static int32_t t23 = 4;

    t23 = ((x97&x98)<=(x99+x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = 4LL;
	static int64_t x102 = -1LL;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t24 = 212;

    t24 = ((x101&x102)<=(x103+x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	uint8_t x106 = 0U;
	static int32_t x107 = -1;
	volatile int32_t t25 = -63215752;

    t25 = ((x105&x106)<=(x107+x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	static int64_t x110 = INT64_MAX;
	volatile uint32_t x111 = 389144U;
	volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t26 = -564;

    t26 = ((x109&x110)<=(x111+x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1;
	static uint64_t x115 = 2071828LLU;
	int64_t x116 = 6440361004LL;

    t27 = ((x113&x114)<=(x115+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	int32_t x118 = -1;
	uint16_t x119 = 2372U;
	static uint64_t x120 = UINT64_MAX;
	volatile int32_t t28 = -126953717;

    t28 = ((x117&x118)<=(x119+x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x121 = INT32_MAX;
	static int32_t x122 = -1;

    t29 = ((x121&x122)<=(x123+x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	volatile int32_t t30 = -9954;

    t30 = ((x125&x126)<=(x127+x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x129 = INT8_MIN;
	uint64_t x130 = 4104163828895LLU;
	static int8_t x131 = INT8_MAX;
	int8_t x132 = INT8_MIN;
	volatile int32_t t31 = -24;

    t31 = ((x129&x130)<=(x131+x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	int64_t x134 = -10388942233928LL;
	int16_t x135 = 201;
	static int32_t t32 = 3758267;

    t32 = ((x133&x134)<=(x135+x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x137 = -12;
	volatile int32_t x138 = INT32_MIN;
	uint64_t x139 = 595LLU;
	uint8_t x140 = 21U;
	int32_t t33 = 1;

    t33 = ((x137&x138)<=(x139+x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x142 = -2698165;
	int16_t x143 = 2298;
	int32_t x144 = INT32_MIN;
	int32_t t34 = -173;

    t34 = ((x141&x142)<=(x143+x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x146 = 8U;
	volatile int32_t x147 = INT32_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t35 = -561257;

    t35 = ((x145&x146)<=(x147+x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = -1;
	uint32_t x150 = 1188727U;
	uint8_t x152 = 6U;
	static volatile int32_t t36 = 104;

    t36 = ((x149&x150)<=(x151+x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x153 = 1;
	uint64_t x155 = 328329825181920976LLU;
	int32_t t37 = 272446052;

    t37 = ((x153&x154)<=(x155+x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = 3U;
	int64_t x158 = -1LL;
	int16_t x160 = INT16_MIN;
	volatile int32_t t38 = 13;

    t38 = ((x157&x158)<=(x159+x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x161 = INT32_MAX;
	static int64_t x162 = -18146LL;
	static int32_t x164 = INT32_MIN;
	static int32_t t39 = 3;

    t39 = ((x161&x162)<=(x163+x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x165 = 435186709U;
	static int32_t t40 = -220;

    t40 = ((x165&x166)<=(x167+x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x169 = 1797632U;
	volatile int8_t x170 = INT8_MAX;
	uint32_t x171 = 9287831U;
	static int32_t t41 = 721;

    t41 = ((x169&x170)<=(x171+x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = 28;
	int16_t x176 = INT16_MAX;
	int32_t t42 = -1;

    t42 = ((x173&x174)<=(x175+x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x184 = -61;
	volatile int32_t t43 = -103157621;

    t43 = ((x181&x182)<=(x183+x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = -53;
	volatile int64_t x194 = INT64_MAX;
	uint8_t x195 = 28U;

    t44 = ((x193&x194)<=(x195+x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = 478;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t45 = 151;

    t45 = ((x197&x198)<=(x199+x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x202 = INT64_MIN;
	static int32_t x203 = 0;
	int32_t x204 = 2158792;
	int32_t t46 = -12;

    t46 = ((x201&x202)<=(x203+x204));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x205 = INT32_MIN;
	static volatile int16_t x206 = INT16_MIN;
	volatile int32_t x207 = INT32_MIN;
	uint8_t x208 = 0U;
	int32_t t47 = 28;

    t47 = ((x205&x206)<=(x207+x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x210 = -4473;
	int16_t x211 = 13;
	static int8_t x212 = INT8_MIN;
	int32_t t48 = -2579992;

    t48 = ((x209&x210)<=(x211+x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	static volatile int64_t x215 = INT64_MIN;
	uint8_t x216 = 81U;

    t49 = ((x213&x214)<=(x215+x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x217 = INT32_MIN;
	volatile int32_t x218 = 111118;
	int16_t x219 = 48;
	volatile int32_t t50 = 3235666;

    t50 = ((x217&x218)<=(x219+x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = INT32_MAX;
	int8_t x224 = INT8_MAX;
	static volatile int32_t t51 = 1;

    t51 = ((x221&x222)<=(x223+x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x225 = INT16_MIN;
	volatile int16_t x226 = -1;
	static uint16_t x227 = 176U;
	int32_t x228 = -1;
	volatile int32_t t52 = 4;

    t52 = ((x225&x226)<=(x227+x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = 2469;
	volatile int8_t x230 = INT8_MAX;
	int32_t x231 = -3;

    t53 = ((x229&x230)<=(x231+x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MAX;

    t54 = ((x237&x238)<=(x239+x240));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = 1;
	volatile int32_t x243 = -74757;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t55 = 217;

    t55 = ((x241&x242)<=(x243+x244));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = 319;
	static int8_t x247 = INT8_MIN;
	volatile int32_t t56 = -15;

    t56 = ((x245&x246)<=(x247+x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x249 = INT32_MAX;
	int32_t x250 = 976201252;
	volatile uint64_t x251 = 2041572467278228833LLU;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t57 = 125189;

    t57 = ((x249&x250)<=(x251+x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x254 = 1842611332LL;
	uint32_t x255 = 579882U;
	static int64_t x256 = -18304LL;
	int32_t t58 = -3;

    t58 = ((x253&x254)<=(x255+x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	int64_t x259 = 129421915LL;
	volatile int32_t t59 = -22041;

    t59 = ((x257&x258)<=(x259+x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = 0;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 498294201593LLU;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t60 = 5;

    t60 = ((x261&x262)<=(x263+x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x265 = -1;
	int16_t x266 = -1;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t61 = -20;

    t61 = ((x265&x266)<=(x267+x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x270 = INT64_MAX;
	static uint32_t x271 = 358672721U;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t62 = -14;

    t62 = ((x269&x270)<=(x271+x272));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x273 = INT32_MIN;
	uint32_t x274 = 1773021878U;
	int64_t x275 = -1LL;
	static volatile uint16_t x276 = 7020U;
	static int32_t t63 = 123618;

    t63 = ((x273&x274)<=(x275+x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MAX;
	int64_t x279 = -1LL;
	int32_t t64 = 252032510;

    t64 = ((x277&x278)<=(x279+x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x281 = 9LLU;
	static uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 1819U;
	int32_t x284 = -78;

    t65 = ((x281&x282)<=(x283+x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x285 = 40702LL;
	uint8_t x287 = 64U;
	static int32_t t66 = 914222;

    t66 = ((x285&x286)<=(x287+x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = INT64_MIN;
	uint8_t x290 = 26U;
	volatile uint8_t x291 = 0U;
	int8_t x292 = 0;
	volatile int32_t t67 = 3;

    t67 = ((x289&x290)<=(x291+x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x306 = UINT8_MAX;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t68 = 0;

    t68 = ((x305&x306)<=(x307+x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x309 = INT32_MIN;
	int8_t x310 = -13;
	volatile int16_t x312 = INT16_MIN;
	static volatile int32_t t69 = -509;

    t69 = ((x309&x310)<=(x311+x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x313 = 250LLU;
	uint64_t x314 = 67LLU;
	int32_t x315 = -1;
	int8_t x316 = INT8_MIN;

    t70 = ((x313&x314)<=(x315+x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x317 = 14044;
	int32_t x318 = 209002210;
	volatile int64_t x319 = -18LL;

    t71 = ((x317&x318)<=(x319+x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x321 = 3861233863036007LLU;
	static volatile int16_t x322 = INT16_MAX;
	int8_t x323 = 3;
	static int32_t x324 = 1;
	int32_t t72 = -1414579;

    t72 = ((x321&x322)<=(x323+x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x327 = 21148LLU;
	static int16_t x328 = 6;
	volatile int32_t t73 = -55;

    t73 = ((x325&x326)<=(x327+x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x329 = 1774524706208095090LLU;
	int16_t x330 = 1;
	int8_t x331 = -2;
	static int16_t x332 = INT16_MAX;
	int32_t t74 = 596;

    t74 = ((x329&x330)<=(x331+x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x333 = INT16_MIN;
	static int16_t x334 = 1400;
	static int32_t t75 = 22;

    t75 = ((x333&x334)<=(x335+x336));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x340 = 3566129776690147LL;
	static int32_t t76 = 88;

    t76 = ((x337&x338)<=(x339+x340));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x342 = 2U;
	volatile uint32_t x343 = UINT32_MAX;

    t77 = ((x341&x342)<=(x343+x344));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x346 = -1;
	int32_t x348 = INT32_MIN;
	int32_t t78 = 1;

    t78 = ((x345&x346)<=(x347+x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x351 = 34560212260942LLU;
	uint8_t x352 = 13U;
	int32_t t79 = -50646150;

    t79 = ((x349&x350)<=(x351+x352));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x358 = 1825;
	volatile uint16_t x359 = 69U;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t80 = -1385;

    t80 = ((x357&x358)<=(x359+x360));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x361 = 28U;
	static int8_t x364 = -31;
	int32_t t81 = 118869794;

    t81 = ((x361&x362)<=(x363+x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = 107U;
	int16_t x366 = INT16_MAX;
	static volatile uint32_t x367 = 1414053832U;
	volatile int16_t x368 = -1;
	volatile int32_t t82 = 358446;

    t82 = ((x365&x366)<=(x367+x368));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x369 = 0;
	int16_t x370 = 155;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t83 = -16065438;

    t83 = ((x369&x370)<=(x371+x372));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x374 = -1;
	volatile int8_t x375 = 3;
	int64_t x376 = 168499910586LL;
	int32_t t84 = -6978;

    t84 = ((x373&x374)<=(x375+x376));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = INT16_MIN;
	static int64_t x378 = -1LL;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = -1LL;
	int32_t t85 = 5;

    t85 = ((x377&x378)<=(x379+x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MAX;
	volatile uint32_t x382 = 11951U;
	volatile int32_t x383 = -18352;
	int32_t t86 = 5248229;

    t86 = ((x381&x382)<=(x383+x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x385 = 10666U;
	volatile uint64_t x388 = 287989LLU;
	volatile int32_t t87 = 1;

    t87 = ((x385&x386)<=(x387+x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x389 = 100U;
	int16_t x390 = INT16_MAX;
	int32_t x391 = -1;
	volatile int16_t x392 = -1;
	volatile int32_t t88 = -205;

    t88 = ((x389&x390)<=(x391+x392));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x393 = 133U;
	uint8_t x395 = 13U;
	int32_t x396 = INT32_MIN;

    t89 = ((x393&x394)<=(x395+x396));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x398 = INT32_MAX;
	volatile int16_t x399 = INT16_MAX;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t90 = 317086;

    t90 = ((x397&x398)<=(x399+x400));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x402 = -1;
	int32_t x403 = -270;

    t91 = ((x401&x402)<=(x403+x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x409 = INT16_MIN;
	volatile uint16_t x410 = 2457U;
	volatile int64_t x411 = INT64_MIN;
	static volatile int16_t x412 = INT16_MAX;
	volatile int32_t t92 = 30217041;

    t92 = ((x409&x410)<=(x411+x412));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x413 = UINT8_MAX;
	volatile int64_t x414 = INT64_MIN;
	int32_t t93 = 1949;

    t93 = ((x413&x414)<=(x415+x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 298731904268222LLU;
	int16_t x419 = INT16_MIN;
	int32_t x420 = -801;
	int32_t t94 = 7;

    t94 = ((x417&x418)<=(x419+x420));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x421 = -200;
	int32_t x422 = INT32_MAX;
	static uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = -13;
	static volatile int32_t t95 = 12880;

    t95 = ((x421&x422)<=(x423+x424));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -28;
	static volatile int32_t t96 = 2821;

    t96 = ((x425&x426)<=(x427+x428));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x434 = 173230;
	volatile uint32_t x435 = UINT32_MAX;
	static uint32_t x436 = 1043537U;
	int32_t t97 = 51;

    t97 = ((x433&x434)<=(x435+x436));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x437 = 471800LL;
	int64_t x438 = 120639LL;
	volatile int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MAX;
	int32_t t98 = 6576;

    t98 = ((x437&x438)<=(x439+x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = -1;
	uint64_t x442 = 193857394617LLU;
	uint8_t x443 = 19U;
	static int16_t x444 = INT16_MIN;

    t99 = ((x441&x442)<=(x443+x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x445 = -1;
	int8_t x447 = -1;
	volatile int32_t t100 = 16387555;

    t100 = ((x445&x446)<=(x447+x448));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = INT32_MAX;
	int32_t x452 = -5283;
	static int32_t t101 = 12297;

    t101 = ((x449&x450)<=(x451+x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x453 = INT64_MAX;
	static int16_t x454 = -1;
	int16_t x455 = INT16_MIN;
	int32_t x456 = -10893;

    t102 = ((x453&x454)<=(x455+x456));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x457 = INT64_MIN;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	int16_t x460 = -1;
	volatile int32_t t103 = -240679;

    t103 = ((x457&x458)<=(x459+x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x461 = -3;
	int16_t x462 = INT16_MAX;
	static int64_t x464 = -587895771520LL;
	int32_t t104 = -1068460836;

    t104 = ((x461&x462)<=(x463+x464));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x465 = -1;
	uint32_t x466 = 3U;
	int8_t x467 = -1;
	int64_t x468 = 173322970232LL;
	int32_t t105 = 3042;

    t105 = ((x465&x466)<=(x467+x468));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x469 = -198840447LL;
	volatile int16_t x470 = 457;
	uint32_t x471 = 338270U;
	uint64_t x472 = UINT64_MAX;
	volatile int32_t t106 = -3997;

    t106 = ((x469&x470)<=(x471+x472));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MAX;
	volatile int16_t x475 = INT16_MIN;
	int32_t t107 = -325253;

    t107 = ((x473&x474)<=(x475+x476));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x477 = 17768294051062002LLU;
	volatile int8_t x478 = 1;
	int8_t x479 = INT8_MIN;
	static uint32_t x480 = 45U;
	static volatile int32_t t108 = -2;

    t108 = ((x477&x478)<=(x479+x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x481 = INT32_MAX;
	uint32_t x482 = 5725U;
	int8_t x483 = INT8_MIN;
	int32_t t109 = -32856063;

    t109 = ((x481&x482)<=(x483+x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x485 = 203824LLU;
	int8_t x486 = INT8_MIN;
	volatile int64_t x488 = -1LL;
	volatile int32_t t110 = -78;

    t110 = ((x485&x486)<=(x487+x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x489 = INT64_MIN;
	int16_t x492 = 536;
	static int32_t t111 = -199;

    t111 = ((x489&x490)<=(x491+x492));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x493 = 228470U;
	int16_t x494 = 1;
	static volatile int32_t x496 = 1007944840;
	int32_t t112 = 10484411;

    t112 = ((x493&x494)<=(x495+x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x498 = INT64_MIN;
	int8_t x499 = -1;
	static volatile uint32_t x500 = 641695035U;
	static int32_t t113 = 864;

    t113 = ((x497&x498)<=(x499+x500));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x501 = 111314U;
	int8_t x502 = INT8_MIN;
	volatile uint16_t x503 = 106U;
	int16_t x504 = INT16_MAX;
	int32_t t114 = -4313900;

    t114 = ((x501&x502)<=(x503+x504));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x505 = 1;
	uint16_t x506 = 44U;
	int16_t x507 = -1;
	static int32_t x508 = INT32_MAX;

    t115 = ((x505&x506)<=(x507+x508));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x509 = UINT64_MAX;
	int16_t x511 = INT16_MAX;
	int8_t x512 = INT8_MIN;
	int32_t t116 = -6496498;

    t116 = ((x509&x510)<=(x511+x512));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x513 = 458555691666052LLU;
	int16_t x514 = INT16_MIN;
	static int16_t x515 = INT16_MIN;
	volatile int32_t t117 = 13186972;

    t117 = ((x513&x514)<=(x515+x516));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = INT8_MIN;
	uint32_t x518 = UINT32_MAX;
	int64_t x519 = 755923901614LL;
	int16_t x520 = INT16_MAX;

    t118 = ((x517&x518)<=(x519+x520));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x521 = UINT16_MAX;
	uint16_t x522 = 33U;
	int8_t x523 = 62;
	uint16_t x524 = UINT16_MAX;
	int32_t t119 = -274;

    t119 = ((x521&x522)<=(x523+x524));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x530 = INT16_MIN;
	volatile uint16_t x531 = 106U;
	volatile int32_t t120 = 5;

    t120 = ((x529&x530)<=(x531+x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x533 = -1;
	static int32_t x534 = INT32_MIN;
	uint8_t x535 = UINT8_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t121 = 456159230;

    t121 = ((x533&x534)<=(x535+x536));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = INT64_MIN;
	int64_t x538 = -1LL;
	static volatile int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MAX;

    t122 = ((x537&x538)<=(x539+x540));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x543 = 1U;
	static int16_t x544 = INT16_MAX;
	volatile int32_t t123 = 4480822;

    t123 = ((x541&x542)<=(x543+x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x545 = -1LL;
	int8_t x546 = INT8_MIN;
	static int16_t x547 = -1;
	int64_t x548 = INT64_MAX;
	static volatile int32_t t124 = -2;

    t124 = ((x545&x546)<=(x547+x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x549 = UINT64_MAX;
	int32_t x550 = -1;
	int64_t x551 = 68360LL;
	volatile int32_t t125 = -255320342;

    t125 = ((x549&x550)<=(x551+x552));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x553 = INT8_MIN;
	static volatile uint8_t x554 = 1U;
	static uint64_t x555 = UINT64_MAX;
	int32_t x556 = -1;
	int32_t t126 = 582;

    t126 = ((x553&x554)<=(x555+x556));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x557 = -57945LL;
	volatile int32_t x558 = -1;
	static uint8_t x559 = 0U;
	static volatile int32_t t127 = -2;

    t127 = ((x557&x558)<=(x559+x560));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x561 = -1;
	int64_t x562 = INT64_MIN;
	uint64_t x563 = 997556054572LLU;
	volatile uint64_t x564 = 9166014786LLU;
	static int32_t t128 = -254031500;

    t128 = ((x561&x562)<=(x563+x564));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x566 = -2;
	volatile int8_t x567 = 0;
	uint64_t x568 = 244564445800445LLU;
	volatile int32_t t129 = -96764;

    t129 = ((x565&x566)<=(x567+x568));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x569 = INT32_MIN;
	uint8_t x570 = UINT8_MAX;
	int16_t x571 = -3;
	uint8_t x572 = 3U;
	int32_t t130 = -909449;

    t130 = ((x569&x570)<=(x571+x572));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x574 = 6U;
	volatile int32_t x575 = 333;
	int8_t x576 = INT8_MIN;

    t131 = ((x573&x574)<=(x575+x576));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x578 = 13149;
	int32_t x579 = INT32_MIN;
	static uint16_t x580 = 7110U;
	static volatile int32_t t132 = -302981;

    t132 = ((x577&x578)<=(x579+x580));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x582 = 533162LL;
	uint64_t x583 = 85897083233LLU;
	uint32_t x584 = 11529U;
	int32_t t133 = -426193;

    t133 = ((x581&x582)<=(x583+x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x585 = -1;
	int16_t x586 = 0;
	int16_t x587 = INT16_MIN;
	uint32_t x588 = 1787577U;
	volatile int32_t t134 = 227;

    t134 = ((x585&x586)<=(x587+x588));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x589 = INT8_MAX;
	int32_t t135 = -4841;

    t135 = ((x589&x590)<=(x591+x592));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x594 = 246U;
	volatile int32_t x595 = INT32_MAX;
	int16_t x596 = -23;
	volatile int32_t t136 = -62;

    t136 = ((x593&x594)<=(x595+x596));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x598 = 1431844U;
	int8_t x599 = 10;
	static int16_t x600 = 1418;
	int32_t t137 = -1138;

    t137 = ((x597&x598)<=(x599+x600));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	volatile uint16_t x606 = 12874U;
	int16_t x607 = -1;
	int16_t x608 = INT16_MIN;
	int32_t t138 = -13556125;

    t138 = ((x605&x606)<=(x607+x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x609 = 116LL;
	int16_t x610 = INT16_MIN;
	volatile uint16_t x611 = 151U;
	static volatile uint64_t x612 = 3819119702635473LLU;
	volatile int32_t t139 = 9822161;

    t139 = ((x609&x610)<=(x611+x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x613 = 6;
	int64_t x614 = INT64_MAX;
	int64_t x615 = INT64_MIN;
	static uint8_t x616 = 31U;
	volatile int32_t t140 = -709465521;

    t140 = ((x613&x614)<=(x615+x616));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MIN;
	uint8_t x620 = UINT8_MAX;
	static volatile int32_t t141 = 241722461;

    t141 = ((x617&x618)<=(x619+x620));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x621 = -165793231486349170LL;
	uint64_t x622 = 55357178LLU;
	int8_t x623 = INT8_MAX;
	static uint32_t x624 = UINT32_MAX;
	static volatile int32_t t142 = 460187;

    t142 = ((x621&x622)<=(x623+x624));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x626 = -1;
	static int8_t x627 = INT8_MAX;
	int8_t x628 = INT8_MAX;
	int32_t t143 = -132848;

    t143 = ((x625&x626)<=(x627+x628));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x629 = INT8_MAX;
	static int8_t x630 = INT8_MIN;
	static uint32_t x631 = 12073U;
	static volatile int8_t x632 = -1;

    t144 = ((x629&x630)<=(x631+x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x633 = -43;
	volatile uint8_t x635 = UINT8_MAX;
	static int8_t x636 = -1;
	volatile int32_t t145 = -66027350;

    t145 = ((x633&x634)<=(x635+x636));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x638 = -1LL;
	int64_t x640 = -1LL;
	static int32_t t146 = -1670;

    t146 = ((x637&x638)<=(x639+x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x641 = INT32_MIN;
	int16_t x642 = INT16_MAX;
	volatile uint64_t x644 = 58724092731179998LLU;
	static int32_t t147 = 22016;

    t147 = ((x641&x642)<=(x643+x644));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x645 = 2U;
	int16_t x646 = -1;
	uint8_t x647 = 0U;
	static uint8_t x648 = 9U;
	static int32_t t148 = -1785859;

    t148 = ((x645&x646)<=(x647+x648));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x653 = UINT8_MAX;
	uint32_t x654 = UINT32_MAX;
	uint8_t x656 = 1U;

    t149 = ((x653&x654)<=(x655+x656));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x657 = 5U;
	int64_t x658 = INT64_MIN;
	int16_t x659 = 8011;
	int32_t x660 = -1;
	volatile int32_t t150 = 13095;

    t150 = ((x657&x658)<=(x659+x660));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x661 = INT8_MIN;
	volatile int16_t x662 = INT16_MIN;
	static int16_t x663 = -15430;
	static volatile uint16_t x664 = 7898U;
	int32_t t151 = -527;

    t151 = ((x661&x662)<=(x663+x664));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x665 = -1LL;
	static volatile int64_t x666 = INT64_MIN;
	uint8_t x668 = 2U;
	int32_t t152 = 66487494;

    t152 = ((x665&x666)<=(x667+x668));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = 22047;
	uint64_t x671 = 5689397265836465LLU;
	volatile uint16_t x672 = 81U;
	int32_t t153 = 6;

    t153 = ((x669&x670)<=(x671+x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x674 = INT64_MIN;
	volatile int16_t x675 = INT16_MAX;
	static uint16_t x676 = 564U;
	int32_t t154 = -28;

    t154 = ((x673&x674)<=(x675+x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x677 = INT16_MAX;
	int32_t x679 = 51452;
	uint16_t x680 = UINT16_MAX;

    t155 = ((x677&x678)<=(x679+x680));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x681 = UINT8_MAX;
	uint64_t x682 = 64008402467LLU;
	static uint8_t x683 = UINT8_MAX;
	int64_t x684 = -1LL;
	volatile int32_t t156 = -1058020626;

    t156 = ((x681&x682)<=(x683+x684));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x685 = -1;
	int32_t x686 = INT32_MIN;
	volatile uint64_t x687 = 252LLU;
	uint8_t x688 = UINT8_MAX;

    t157 = ((x685&x686)<=(x687+x688));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int8_t x690 = -1;
	int64_t x691 = INT64_MIN;
	uint32_t x692 = UINT32_MAX;

    t158 = ((x689&x690)<=(x691+x692));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x693 = -11980302171LL;
	int16_t x695 = -1;
	int64_t x696 = 2261898LL;
	static int32_t t159 = 0;

    t159 = ((x693&x694)<=(x695+x696));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x697 = 919;
	volatile int8_t x699 = INT8_MAX;
	int8_t x700 = INT8_MAX;
	int32_t t160 = 60531771;

    t160 = ((x697&x698)<=(x699+x700));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x701 = INT32_MIN;
	static int8_t x703 = INT8_MIN;
	int32_t t161 = 339;

    t161 = ((x701&x702)<=(x703+x704));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x705 = 1LL;
	int32_t x706 = -11012550;
	int32_t x707 = 65103;
	volatile int32_t t162 = -115176;

    t162 = ((x705&x706)<=(x707+x708));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x709 = 27879847LLU;
	int8_t x710 = -1;
	int32_t x712 = INT32_MIN;
	int32_t t163 = 0;

    t163 = ((x709&x710)<=(x711+x712));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x713 = 1U;
	int64_t x714 = -11779LL;
	static uint8_t x715 = 3U;
	volatile uint8_t x716 = 27U;
	volatile int32_t t164 = 10085;

    t164 = ((x713&x714)<=(x715+x716));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x717 = -1;
	uint16_t x719 = 4U;
	int64_t x720 = INT64_MIN;

    t165 = ((x717&x718)<=(x719+x720));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x721 = INT64_MAX;
	uint16_t x722 = 5517U;
	int32_t x723 = INT32_MIN;
	static int32_t x724 = INT32_MAX;
	volatile int32_t t166 = -87981;

    t166 = ((x721&x722)<=(x723+x724));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x725 = INT64_MAX;
	int8_t x726 = INT8_MIN;

    t167 = ((x725&x726)<=(x727+x728));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x730 = 943;
	volatile int8_t x731 = INT8_MAX;
	int64_t x732 = INT64_MIN;
	int32_t t168 = -144493672;

    t168 = ((x729&x730)<=(x731+x732));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x749 = INT64_MAX;
	int16_t x750 = INT16_MIN;
	static int16_t x751 = INT16_MIN;
	static volatile int32_t t169 = -234381987;

    t169 = ((x749&x750)<=(x751+x752));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x753 = INT64_MAX;
	int8_t x754 = -20;
	static int8_t x755 = INT8_MAX;
	static int8_t x756 = INT8_MIN;
	volatile int32_t t170 = -55397;

    t170 = ((x753&x754)<=(x755+x756));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x757 = INT32_MIN;
	int8_t x759 = INT8_MIN;
	volatile int32_t t171 = 15374210;

    t171 = ((x757&x758)<=(x759+x760));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x761 = 965U;
	int64_t x762 = -1LL;
	int64_t x763 = INT64_MIN;
	int32_t t172 = 1012;

    t172 = ((x761&x762)<=(x763+x764));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x769 = -1;
	int64_t x771 = INT64_MAX;
	volatile int32_t x772 = INT32_MIN;
	int32_t t173 = 28;

    t173 = ((x769&x770)<=(x771+x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x777 = INT8_MAX;
	int8_t x778 = INT8_MIN;
	int32_t x779 = -3780;
	static int16_t x780 = -1;

    t174 = ((x777&x778)<=(x779+x780));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x781 = -1;
	int64_t x782 = -1LL;
	static int8_t x783 = 5;
	volatile uint64_t x784 = UINT64_MAX;
	static volatile int32_t t175 = -1288;

    t175 = ((x781&x782)<=(x783+x784));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x785 = -1;
	volatile int32_t x786 = INT32_MAX;
	static uint32_t x788 = UINT32_MAX;
	static int32_t t176 = -5631;

    t176 = ((x785&x786)<=(x787+x788));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x789 = -9;
	int32_t x790 = -109653;
	volatile int32_t x791 = -1;
	uint32_t x792 = 4295469U;
	static volatile int32_t t177 = 1449714;

    t177 = ((x789&x790)<=(x791+x792));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x793 = 488;
	uint16_t x795 = UINT16_MAX;
	int16_t x796 = INT16_MIN;
	int32_t t178 = 1;

    t178 = ((x793&x794)<=(x795+x796));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x797 = INT64_MIN;
	volatile int32_t x798 = INT32_MIN;
	static int16_t x799 = 10;
	static int8_t x800 = INT8_MAX;
	volatile int32_t t179 = -23123;

    t179 = ((x797&x798)<=(x799+x800));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x802 = INT64_MAX;
	static int32_t t180 = 0;

    t180 = ((x801&x802)<=(x803+x804));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x805 = 25260U;
	static int64_t x806 = 7464196173LL;
	uint16_t x807 = 3071U;
	static volatile int32_t t181 = 42371;

    t181 = ((x805&x806)<=(x807+x808));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x809 = -1;
	int32_t x810 = -57;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = -1;
	volatile int32_t t182 = -599360968;

    t182 = ((x809&x810)<=(x811+x812));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x813 = INT64_MIN;
	volatile uint8_t x816 = UINT8_MAX;
	volatile int32_t t183 = -6131533;

    t183 = ((x813&x814)<=(x815+x816));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x817 = 160U;
	int8_t x818 = INT8_MAX;
	int16_t x819 = INT16_MIN;
	static uint16_t x820 = 1141U;
	int32_t t184 = -821;

    t184 = ((x817&x818)<=(x819+x820));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x821 = 127932U;
	int16_t x823 = 5924;
	int8_t x824 = INT8_MIN;
	volatile int32_t t185 = -6;

    t185 = ((x821&x822)<=(x823+x824));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x825 = INT32_MIN;
	int16_t x826 = -521;
	uint8_t x827 = UINT8_MAX;
	volatile int16_t x828 = 0;
	int32_t t186 = -1013;

    t186 = ((x825&x826)<=(x827+x828));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x829 = 46;
	static int16_t x830 = INT16_MIN;
	int8_t x831 = -3;
	int32_t x832 = -1;
	int32_t t187 = 12734220;

    t187 = ((x829&x830)<=(x831+x832));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x833 = INT32_MIN;
	uint32_t x834 = 98389U;
	uint32_t x835 = 830847682U;
	uint64_t x836 = 49572017932487LLU;
	volatile int32_t t188 = 15;

    t188 = ((x833&x834)<=(x835+x836));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x837 = INT16_MIN;
	uint64_t x840 = UINT64_MAX;
	int32_t t189 = -81846064;

    t189 = ((x837&x838)<=(x839+x840));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x842 = -1;
	int64_t x843 = INT64_MIN;
	static volatile uint32_t x844 = 26623U;
	int32_t t190 = 9;

    t190 = ((x841&x842)<=(x843+x844));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x849 = INT8_MIN;
	uint16_t x850 = 3U;
	uint64_t x851 = 1066235403066LLU;
	static uint16_t x852 = 412U;

    t191 = ((x849&x850)<=(x851+x852));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x853 = INT8_MIN;
	volatile uint16_t x856 = 13221U;
	static int32_t t192 = -16755052;

    t192 = ((x853&x854)<=(x855+x856));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x857 = -3;
	volatile int8_t x859 = -3;
	uint8_t x860 = 13U;

    t193 = ((x857&x858)<=(x859+x860));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x865 = 3U;
	static int32_t x866 = 735;
	volatile int32_t t194 = -1435044;

    t194 = ((x865&x866)<=(x867+x868));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x873 = INT16_MIN;
	static int32_t x874 = 683643638;
	int8_t x875 = INT8_MIN;
	static volatile uint8_t x876 = 9U;

    t195 = ((x873&x874)<=(x875+x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x885 = 15U;
	uint8_t x886 = UINT8_MAX;
	volatile int8_t x888 = -1;
	int32_t t196 = 646774277;

    t196 = ((x885&x886)<=(x887+x888));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x893 = -1;
	int32_t x894 = 119;
	volatile int16_t x895 = INT16_MIN;
	static int8_t x896 = -1;
	volatile int32_t t197 = 761512302;

    t197 = ((x893&x894)<=(x895+x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x897 = 17U;
	volatile uint64_t x898 = 500778419LLU;
	volatile int32_t x900 = 3898030;
	static volatile int32_t t198 = -239294;

    t198 = ((x897&x898)<=(x899+x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x901 = -7634;
	static int16_t x902 = INT16_MIN;
	volatile int64_t x903 = -1LL;
	uint64_t x904 = UINT64_MAX;

    t199 = ((x901&x902)<=(x903+x904));

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

