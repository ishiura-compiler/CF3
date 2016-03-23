
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
int32_t x4 = -1;
uint16_t x9 = 31U;
int32_t x23 = 17997973;
volatile uint32_t x26 = 858778309U;
volatile int16_t x45 = INT16_MIN;
volatile uint16_t x46 = UINT16_MAX;
static int64_t x50 = -32109028567LL;
int32_t x64 = INT32_MIN;
int8_t x65 = -1;
static int32_t x69 = INT32_MIN;
int32_t x71 = INT32_MAX;
int16_t x72 = -2;
int32_t x76 = -1;
int64_t x78 = 7160LL;
static volatile int32_t t22 = -124;
static uint8_t x100 = UINT8_MAX;
int16_t x103 = INT16_MAX;
int32_t t24 = -243418;
int16_t x105 = INT16_MAX;
int8_t x106 = INT8_MIN;
uint16_t x111 = 18941U;
int64_t x120 = INT64_MIN;
static int8_t x123 = INT8_MIN;
int64_t x124 = 3792813187724216857LL;
volatile uint64_t x128 = 1892LLU;
int32_t t30 = 37;
uint8_t x130 = 30U;
static volatile int32_t t33 = 0;
int8_t x161 = INT8_MIN;
int32_t x173 = -1;
int16_t x176 = INT16_MIN;
int32_t t42 = 3;
volatile int32_t x192 = INT32_MAX;
static volatile int32_t t44 = 968555416;
int64_t x195 = INT64_MAX;
volatile int32_t t45 = -7997621;
int32_t x206 = -8469;
uint64_t x208 = 893886285LLU;
volatile int32_t t49 = 638;
int64_t x213 = INT64_MAX;
uint8_t x220 = 107U;
int32_t t51 = 307240;
uint64_t x222 = 2676012106742LLU;
int64_t x232 = INT64_MIN;
static int8_t x240 = INT8_MAX;
int16_t x244 = INT16_MIN;
int64_t x248 = INT64_MAX;
static uint64_t x250 = 55LLU;
static uint64_t x254 = UINT64_MAX;
int16_t x258 = INT16_MAX;
static volatile int32_t t61 = 74698620;
volatile uint64_t x278 = 15527662925973630LLU;
int64_t x279 = -1LL;
volatile int8_t x291 = INT8_MIN;
static int32_t t68 = -15;
volatile int64_t x294 = INT64_MIN;
int8_t x301 = 20;
int32_t t71 = -9213449;
int8_t x310 = 2;
int16_t x311 = 1;
static uint32_t x313 = 3U;
int16_t x314 = INT16_MIN;
int8_t x323 = INT8_MAX;
int32_t x327 = -1;
uint64_t x334 = 28LLU;
volatile int32_t t78 = -209370;
int32_t x342 = 1;
uint64_t x343 = UINT64_MAX;
int8_t x344 = INT8_MIN;
int32_t t80 = -5717;
uint16_t x349 = UINT16_MAX;
volatile int32_t t81 = -98732;
int16_t x354 = 1624;
int32_t x361 = INT32_MIN;
int32_t x364 = INT32_MIN;
static int32_t x367 = 0;
volatile int16_t x370 = -1;
static int32_t x374 = 1086;
int32_t t88 = -876108109;
static int64_t x392 = 6LL;
int32_t x400 = 0;
volatile int32_t t91 = -184951;
uint64_t x403 = UINT64_MAX;
static int16_t x418 = INT16_MAX;
static volatile int8_t x419 = -1;
uint32_t x424 = 13U;
static int64_t x428 = -605293795LL;
volatile int32_t t98 = -14;
uint32_t x433 = 683082U;
volatile int32_t x436 = INT32_MIN;
int32_t t105 = -166398510;
static int8_t x463 = INT8_MIN;
static volatile uint64_t x478 = UINT64_MAX;
int64_t x479 = INT64_MIN;
static uint8_t x482 = 15U;
int32_t t111 = -198369;
volatile int32_t x493 = INT32_MAX;
uint16_t x502 = UINT16_MAX;
volatile int32_t x503 = 35209;
int64_t x504 = INT64_MIN;
volatile uint8_t x506 = UINT8_MAX;
volatile int16_t x508 = INT16_MIN;
int32_t t115 = 45967;
int16_t x509 = -1;
int16_t x516 = INT16_MAX;
volatile int16_t x519 = 1;
volatile uint64_t x524 = 248153769360LLU;
volatile int32_t t120 = -41795907;
static int32_t x535 = -10;
uint16_t x544 = 0U;
int32_t t124 = -424;
static int32_t x553 = 1012;
int16_t x555 = INT16_MAX;
int16_t x556 = INT16_MAX;
int64_t x557 = 1575380003LL;
uint32_t x559 = 83437U;
int16_t x560 = -54;
int32_t t130 = 3729;
static uint16_t x572 = 3U;
static uint8_t x583 = 27U;
int16_t x584 = -3224;
uint64_t x588 = 2738837952528LLU;
int16_t x589 = INT16_MAX;
int8_t x590 = INT8_MIN;
uint64_t x617 = UINT64_MAX;
int32_t x623 = -962657;
static uint16_t x633 = UINT16_MAX;
uint16_t x634 = 3360U;
volatile int16_t x638 = INT16_MIN;
int8_t x639 = INT8_MAX;
uint16_t x642 = UINT16_MAX;
int32_t t147 = -34435;
int8_t x650 = INT8_MAX;
static volatile uint8_t x651 = 20U;
static uint32_t x662 = UINT32_MAX;
int64_t x670 = 285LL;
uint64_t x675 = 25LLU;
int32_t x687 = -1;
int16_t x695 = INT16_MIN;
int64_t x701 = -42514LL;
volatile int32_t t158 = -56792;
int16_t x708 = INT16_MIN;
volatile uint8_t x711 = UINT8_MAX;
int16_t x716 = INT16_MIN;
int32_t t161 = -4662737;
uint16_t x717 = 1U;
int32_t t162 = -2;
uint64_t x723 = 580LLU;
static int16_t x735 = INT16_MIN;
volatile int64_t x739 = -1LL;
int32_t x752 = INT32_MIN;
int32_t t169 = -232470456;
volatile uint64_t x768 = UINT64_MAX;
int64_t x779 = INT64_MIN;
static int16_t x786 = INT16_MAX;
static int32_t x790 = INT32_MAX;
static volatile int64_t x794 = -1LL;
int8_t x795 = INT8_MIN;
volatile int32_t t178 = 37034;
int64_t x801 = -84LL;
static uint32_t x803 = 2U;
int32_t t180 = 1;
int32_t x814 = INT32_MIN;
int32_t t183 = -7;
int8_t x828 = INT8_MAX;
static volatile int8_t x833 = -1;
int64_t x835 = 318LL;
volatile uint16_t x841 = 958U;
int32_t t190 = -23280230;
volatile uint8_t x846 = 81U;
static volatile uint64_t x848 = UINT64_MAX;
static int32_t t193 = 607;
int8_t x857 = 16;
int64_t x859 = INT64_MIN;
int64_t x866 = INT64_MIN;
uint64_t x867 = 5329116255983481620LLU;
int64_t x873 = INT64_MIN;
int8_t x874 = INT8_MIN;
int32_t t197 = -32817;


void f0(void) {
    	volatile int32_t x2 = INT32_MIN;
	uint64_t x3 = 197250LLU;
	volatile int32_t t0 = -14;

    t0 = (x1<=(x2^(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	uint8_t x6 = 102U;
	int64_t x7 = 69389999631818294LL;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -339;

    t1 = (x5<=(x6^(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x10 = INT16_MAX;
	int16_t x11 = -56;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -13152;

    t2 = (x9<=(x10^(x11+x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	volatile uint16_t x14 = 65U;
	int64_t x15 = INT64_MAX;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 111664;

    t3 = (x13<=(x14^(x15+x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 6;
	int32_t x18 = -1;
	int32_t x19 = INT32_MAX;
	volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 37;

    t4 = (x17<=(x18^(x19+x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 9817;
	int32_t x22 = INT32_MIN;
	volatile int8_t x24 = -3;
	static int32_t t5 = -34513;

    t5 = (x21<=(x22^(x23+x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1106LL;
	uint8_t x27 = 85U;
	static volatile uint16_t x28 = UINT16_MAX;
	static int32_t t6 = -109227;

    t6 = (x25<=(x26^(x27+x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -12;
	uint8_t x30 = 7U;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = 1;
	int32_t t7 = 3087;

    t7 = (x29<=(x30^(x31+x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1043135778632543LL;
	volatile int32_t t8 = 1762;

    t8 = (x33<=(x34^(x35+x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	uint8_t x39 = 0U;
	static int8_t x40 = -2;
	int32_t t9 = 1025;

    t9 = (x37<=(x38^(x39+x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = INT32_MIN;
	static uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 2056U;
	static uint16_t x44 = 2U;
	int32_t t10 = 2333822;

    t10 = (x41<=(x42^(x43+x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -401575;

    t11 = (x45<=(x46^(x47+x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	static uint8_t x51 = 24U;
	int32_t x52 = INT32_MIN;
	static int32_t t12 = 65;

    t12 = (x49<=(x50^(x51+x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	uint64_t x54 = 780154103569990424LLU;
	static uint64_t x55 = 1348513382644LLU;
	static uint16_t x56 = 54U;
	int32_t t13 = 1019855248;

    t13 = (x53<=(x54^(x55+x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -202;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = 1208U;
	int32_t t14 = -78;

    t14 = (x61<=(x62^(x63+x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x66 = 5761;
	uint16_t x67 = 4U;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t15 = -57;

    t15 = (x65<=(x66^(x67+x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x70 = 6U;
	int32_t t16 = -1655147;

    t16 = (x69<=(x70^(x71+x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x73 = 163474LLU;
	int64_t x74 = INT64_MIN;
	int16_t x75 = -1;
	int32_t t17 = 1;

    t17 = (x73<=(x74^(x75+x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	volatile uint32_t x79 = 1946614U;
	int32_t x80 = -5;
	volatile int32_t t18 = -11154;

    t18 = (x77<=(x78^(x79+x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 2779LLU;
	volatile int64_t x82 = 1LL;
	int32_t x83 = 1879;
	int32_t x84 = 101824061;
	static int32_t t19 = 2352925;

    t19 = (x81<=(x82^(x83+x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	int64_t x88 = 724463325549LL;
	static int32_t t20 = -2590297;

    t20 = (x85<=(x86^(x87+x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MAX;
	int8_t x90 = 1;
	int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t21 = 35931706;

    t21 = (x89<=(x90^(x91+x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -30LL;
	int32_t x94 = -75247;
	uint16_t x95 = 46U;
	int64_t x96 = 271344617587804LL;

    t22 = (x93<=(x94^(x95+x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 4U;
	uint16_t x98 = 12472U;
	int64_t x99 = 0LL;
	volatile int32_t t23 = -11749428;

    t23 = (x97<=(x98^(x99+x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 20U;
	int8_t x102 = 0;
	int64_t x104 = INT64_MIN;

    t24 = (x101<=(x102^(x103+x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x107 = 0U;
	static volatile int16_t x108 = INT16_MAX;
	int32_t t25 = -5468;

    t25 = (x105<=(x106^(x107+x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 31U;
	int32_t x110 = -1;
	static uint32_t x112 = 88326U;
	int32_t t26 = 13;

    t26 = (x109<=(x110^(x111+x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint64_t x116 = UINT64_MAX;
	int32_t t27 = 1;

    t27 = (x113<=(x114^(x115+x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = -1LL;
	static uint16_t x118 = 3U;
	volatile uint64_t x119 = 333608485LLU;
	volatile int32_t t28 = 1;

    t28 = (x117<=(x118^(x119+x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = UINT16_MAX;
	static uint32_t x122 = UINT32_MAX;
	volatile int32_t t29 = 7;

    t29 = (x121<=(x122^(x123+x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = 0;
	volatile int16_t x126 = INT16_MIN;
	static int32_t x127 = INT32_MIN;

    t30 = (x125<=(x126^(x127+x128)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -1;
	volatile uint64_t x131 = 91940855571629066LLU;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t31 = -1533359;

    t31 = (x129<=(x130^(x131+x132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = UINT8_MAX;
	uint32_t x134 = 5U;
	volatile uint8_t x135 = 0U;
	static uint32_t x136 = 5131016U;
	int32_t t32 = 111;

    t32 = (x133<=(x134^(x135+x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile uint8_t x138 = 25U;
	volatile int64_t x139 = INT64_MIN;
	uint16_t x140 = 27635U;

    t33 = (x137<=(x138^(x139+x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -1;
	uint8_t x146 = 2U;
	int8_t x147 = -2;
	int32_t x148 = -813255;
	static int32_t t34 = -105311359;

    t34 = (x145<=(x146^(x147+x148)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	volatile int64_t x151 = 46LL;
	int8_t x152 = -1;
	volatile int32_t t35 = 246;

    t35 = (x149<=(x150^(x151+x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	volatile int8_t x154 = -1;
	static uint16_t x155 = 6U;
	int16_t x156 = INT16_MAX;
	int32_t t36 = -92190013;

    t36 = (x153<=(x154^(x155+x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -3510LL;
	int8_t x158 = INT8_MIN;
	volatile int16_t x159 = 104;
	static int32_t x160 = -522772;
	volatile int32_t t37 = -30;

    t37 = (x157<=(x158^(x159+x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = 1;
	static uint8_t x163 = 56U;
	static volatile int64_t x164 = INT64_MIN;
	int32_t t38 = 123133843;

    t38 = (x161<=(x162^(x163+x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x165 = UINT8_MAX;
	int16_t x166 = -1;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;
	static volatile int32_t t39 = 382622200;

    t39 = (x165<=(x166^(x167+x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x169 = 355U;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = 152U;
	int64_t x172 = -1LL;
	volatile int32_t t40 = 399862404;

    t40 = (x169<=(x170^(x171+x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint32_t x174 = 31U;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t t41 = 700332669;

    t41 = (x173<=(x174^(x175+x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = 16U;
	volatile int32_t x178 = INT32_MAX;
	static int32_t x179 = 231375424;
	int16_t x180 = INT16_MIN;

    t42 = (x177<=(x178^(x179+x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = 0U;
	uint8_t x182 = 23U;
	int16_t x183 = INT16_MAX;
	volatile int64_t x184 = -1LL;
	volatile int32_t t43 = 1397;

    t43 = (x181<=(x182^(x183+x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = -19;
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MIN;

    t44 = (x189<=(x190^(x191+x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x193 = 4563U;
	int16_t x194 = 0;
	int32_t x196 = -8;

    t45 = (x193<=(x194^(x195+x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = -225;
	uint8_t x198 = 26U;
	volatile int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MIN;
	int32_t t46 = 101038032;

    t46 = (x197<=(x198^(x199+x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	static int8_t x202 = -14;
	volatile int64_t x203 = 1LL;
	static int8_t x204 = -10;
	volatile int32_t t47 = 36;

    t47 = (x201<=(x202^(x203+x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x205 = -1;
	int8_t x207 = INT8_MIN;
	volatile int32_t t48 = 209260007;

    t48 = (x205<=(x206^(x207+x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MIN;
	int8_t x210 = -6;
	int8_t x211 = 31;
	int32_t x212 = INT32_MIN;

    t49 = (x209<=(x210^(x211+x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x214 = 3U;
	int32_t x215 = -212;
	uint32_t x216 = 1133U;
	volatile int32_t t50 = 6827;

    t50 = (x213<=(x214^(x215+x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x217 = 21U;
	static int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;

    t51 = (x217<=(x218^(x219+x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	static int64_t x224 = -21048578178786473LL;
	volatile int32_t t52 = -40926930;

    t52 = (x221<=(x222^(x223+x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	static uint8_t x227 = 0U;
	int16_t x228 = INT16_MAX;
	int32_t t53 = -2932979;

    t53 = (x225<=(x226^(x227+x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x229 = 0;
	uint32_t x230 = 1610U;
	uint8_t x231 = 80U;
	volatile int32_t t54 = -194;

    t54 = (x229<=(x230^(x231+x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = INT32_MAX;
	int8_t x234 = 44;
	int16_t x235 = -1;
	int8_t x236 = -39;
	int32_t t55 = 3820;

    t55 = (x233<=(x234^(x235+x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MAX;
	int8_t x238 = -34;
	static int64_t x239 = 11LL;
	int32_t t56 = 1364307;

    t56 = (x237<=(x238^(x239+x240)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x241 = UINT32_MAX;
	uint32_t x242 = 159U;
	int16_t x243 = -1;
	static volatile int32_t t57 = -12;

    t57 = (x241<=(x242^(x243+x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = 3758;
	volatile uint8_t x246 = 61U;
	volatile int32_t x247 = INT32_MIN;
	int32_t t58 = -61;

    t58 = (x245<=(x246^(x247+x248)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	static int8_t x251 = INT8_MAX;
	static int64_t x252 = -20038646721LL;
	int32_t t59 = -19653;

    t59 = (x249<=(x250^(x251+x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 1;
	volatile int16_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	static int32_t t60 = -12899320;

    t60 = (x253<=(x254^(x255+x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;

    t61 = (x257<=(x258^(x259+x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MIN;
	static int32_t x262 = -20;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MAX;
	static volatile int32_t t62 = 849146;

    t62 = (x261<=(x262^(x263+x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MAX;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	int32_t t63 = 567;

    t63 = (x265<=(x266^(x267+x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x269 = -2;
	int8_t x270 = -1;
	static int16_t x271 = INT16_MAX;
	volatile int8_t x272 = INT8_MAX;
	static volatile int32_t t64 = 14;

    t64 = (x269<=(x270^(x271+x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = 3;
	int16_t x274 = 3;
	static volatile uint64_t x275 = 27871264LLU;
	int32_t x276 = INT32_MIN;
	int32_t t65 = -4325;

    t65 = (x273<=(x274^(x275+x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x277 = -20051662;
	int8_t x280 = -1;
	int32_t t66 = -5688758;

    t66 = (x277<=(x278^(x279+x280)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	int64_t x282 = -2349576734854LL;
	static int8_t x283 = INT8_MAX;
	static uint32_t x284 = 31739545U;
	int32_t t67 = -47889;

    t67 = (x281<=(x282^(x283+x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -458306078420LL;
	uint16_t x290 = 25U;
	int64_t x292 = -1LL;

    t68 = (x289<=(x290^(x291+x292)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x293 = -1;
	volatile uint8_t x295 = 2U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t69 = 24503179;

    t69 = (x293<=(x294^(x295+x296)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MAX;
	static int8_t x298 = -1;
	int16_t x299 = INT16_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t70 = -1;

    t70 = (x297<=(x298^(x299+x300)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x302 = -242;
	int64_t x303 = 12611050LL;
	int16_t x304 = INT16_MIN;

    t71 = (x301<=(x302^(x303+x304)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = INT16_MIN;
	static volatile uint64_t x306 = 64084859006469LLU;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 3265U;
	int32_t t72 = 0;

    t72 = (x305<=(x306^(x307+x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x309 = 0U;
	static uint32_t x312 = 165643931U;
	int32_t t73 = -300821422;

    t73 = (x309<=(x310^(x311+x312)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x315 = UINT8_MAX;
	int8_t x316 = 25;
	static int32_t t74 = -341837664;

    t74 = (x313<=(x314^(x315+x316)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	int32_t x318 = INT32_MIN;
	int8_t x319 = -1;
	static int8_t x320 = -4;
	static int32_t t75 = 10472623;

    t75 = (x317<=(x318^(x319+x320)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x321 = 67165303;
	volatile uint16_t x322 = UINT16_MAX;
	static uint64_t x324 = 146772925977458533LLU;
	volatile int32_t t76 = 2;

    t76 = (x321<=(x322^(x323+x324)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	static int16_t x328 = INT16_MIN;
	static volatile int32_t t77 = 5278720;

    t77 = (x325<=(x326^(x327+x328)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x333 = -543996888633791LL;
	int8_t x335 = -1;
	int16_t x336 = 92;

    t78 = (x333<=(x334^(x335+x336)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = 17;
	volatile int32_t t79 = -2;

    t79 = (x341<=(x342^(x343+x344)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x345 = -1;
	int64_t x346 = 19110829302LL;
	static uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 377U;

    t80 = (x345<=(x346^(x347+x348)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x350 = 0;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;

    t81 = (x349<=(x350^(x351+x352)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = -1;
	uint16_t x355 = 30U;
	static int64_t x356 = -1LL;
	int32_t t82 = 5976880;

    t82 = (x353<=(x354^(x355+x356)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x362 = 486;
	volatile uint8_t x363 = 1U;
	int32_t t83 = 686133734;

    t83 = (x361<=(x362^(x363+x364)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x365 = 34U;
	int16_t x366 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t84 = -775;

    t84 = (x365<=(x366^(x367+x368)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = -1;
	int16_t x371 = -6;
	volatile int64_t x372 = 32839586LL;
	volatile int32_t t85 = -2353321;

    t85 = (x369<=(x370^(x371+x372)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x373 = 35U;
	static int64_t x375 = 4048105232292311LL;
	int8_t x376 = INT8_MIN;
	volatile int32_t t86 = -122976575;

    t86 = (x373<=(x374^(x375+x376)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MAX;
	static int32_t x379 = INT32_MIN;
	static uint8_t x380 = 3U;
	int32_t t87 = -5874;

    t87 = (x377<=(x378^(x379+x380)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x381 = INT32_MAX;
	static int32_t x382 = 493401939;
	uint64_t x383 = 540570252LLU;
	volatile int64_t x384 = INT64_MAX;

    t88 = (x381<=(x382^(x383+x384)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = -46833;
	int16_t x390 = 13370;
	uint16_t x391 = UINT16_MAX;
	int32_t t89 = -17028;

    t89 = (x389<=(x390^(x391+x392)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 21005U;
	int16_t x394 = -1;
	volatile int8_t x395 = -12;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = -197371;

    t90 = (x393<=(x394^(x395+x396)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x397 = INT64_MIN;
	volatile int8_t x398 = 11;
	int8_t x399 = INT8_MAX;

    t91 = (x397<=(x398^(x399+x400)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x401 = 67U;
	volatile uint64_t x402 = 482LLU;
	uint32_t x404 = 10694850U;
	static volatile int32_t t92 = -1;

    t92 = (x401<=(x402^(x403+x404)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x405 = INT8_MAX;
	static volatile int16_t x406 = INT16_MIN;
	uint16_t x407 = UINT16_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t93 = 52;

    t93 = (x405<=(x406^(x407+x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x409 = 31451798309868LL;
	int32_t x410 = INT32_MIN;
	volatile int64_t x411 = 3736358896LL;
	int8_t x412 = -1;
	static int32_t t94 = -12262;

    t94 = (x409<=(x410^(x411+x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = -1;
	uint16_t x420 = 1579U;
	volatile int32_t t95 = -181654053;

    t95 = (x417<=(x418^(x419+x420)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x421 = -1LL;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	int32_t t96 = -120082;

    t96 = (x421<=(x422^(x423+x424)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	int16_t x427 = INT16_MIN;
	int32_t t97 = 2282;

    t97 = (x425<=(x426^(x427+x428)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x429 = INT32_MIN;
	uint32_t x430 = UINT32_MAX;
	volatile int16_t x431 = INT16_MAX;
	volatile uint32_t x432 = 1388487225U;

    t98 = (x429<=(x430^(x431+x432)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x434 = INT8_MIN;
	static uint16_t x435 = UINT16_MAX;
	volatile int32_t t99 = -96;

    t99 = (x433<=(x434^(x435+x436)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x437 = -181372456065032656LL;
	volatile uint32_t x438 = 2080193810U;
	int16_t x439 = INT16_MIN;
	uint64_t x440 = 32344335136LLU;
	volatile int32_t t100 = -25;

    t100 = (x437<=(x438^(x439+x440)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x441 = 35;
	uint32_t x442 = 32474651U;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 62532LLU;
	int32_t t101 = -6;

    t101 = (x441<=(x442^(x443+x444)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = -3284607926560948LL;
	int8_t x447 = -1;
	volatile int8_t x448 = INT8_MIN;
	int32_t t102 = 2956;

    t102 = (x445<=(x446^(x447+x448)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x449 = 20U;
	int16_t x450 = INT16_MAX;
	uint8_t x451 = UINT8_MAX;
	uint16_t x452 = 1666U;
	int32_t t103 = 244946;

    t103 = (x449<=(x450^(x451+x452)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x453 = 11318323U;
	int8_t x454 = INT8_MAX;
	static volatile uint16_t x455 = 12U;
	int64_t x456 = -1LL;
	static volatile int32_t t104 = -35383;

    t104 = (x453<=(x454^(x455+x456)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = -3;
	int16_t x458 = INT16_MAX;
	int16_t x459 = -1;
	int32_t x460 = 4422146;

    t105 = (x457<=(x458^(x459+x460)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x461 = -555378712LL;
	int64_t x462 = -20766572394LL;
	int32_t x464 = INT32_MAX;
	int32_t t106 = -2178;

    t106 = (x461<=(x462^(x463+x464)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x465 = INT8_MAX;
	static int64_t x466 = -11047655LL;
	int64_t x467 = -1LL;
	volatile int16_t x468 = -60;
	int32_t t107 = 1;

    t107 = (x465<=(x466^(x467+x468)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	uint8_t x470 = 0U;
	volatile uint64_t x471 = 7857LLU;
	volatile int64_t x472 = -1LL;
	int32_t t108 = -45228444;

    t108 = (x469<=(x470^(x471+x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint64_t x474 = UINT64_MAX;
	int64_t x475 = INT64_MIN;
	uint64_t x476 = 1875LLU;
	volatile int32_t t109 = 265;

    t109 = (x473<=(x474^(x475+x476)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x477 = 446172U;
	uint32_t x480 = 9128U;
	int32_t t110 = 900930918;

    t110 = (x477<=(x478^(x479+x480)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x481 = INT16_MIN;
	static int64_t x483 = INT64_MIN;
	static int8_t x484 = 4;

    t111 = (x481<=(x482^(x483+x484)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x489 = -1LL;
	volatile int32_t x490 = -1;
	int16_t x491 = -1;
	int32_t x492 = INT32_MAX;
	int32_t t112 = -97120;

    t112 = (x489<=(x490^(x491+x492)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x494 = -264887382;
	uint32_t x495 = 6631365U;
	uint16_t x496 = 62U;
	int32_t t113 = 6649181;

    t113 = (x493<=(x494^(x495+x496)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x501 = 1;
	volatile int32_t t114 = -149;

    t114 = (x501<=(x502^(x503+x504)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x505 = -1;
	int16_t x507 = INT16_MAX;

    t115 = (x505<=(x506^(x507+x508)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x510 = INT8_MIN;
	volatile uint32_t x511 = UINT32_MAX;
	uint8_t x512 = UINT8_MAX;
	static volatile int32_t t116 = -166643187;

    t116 = (x509<=(x510^(x511+x512)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x513 = INT8_MIN;
	uint8_t x514 = 11U;
	uint8_t x515 = 0U;
	volatile int32_t t117 = -3;

    t117 = (x513<=(x514^(x515+x516)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x517 = INT64_MIN;
	volatile int16_t x518 = -1;
	int32_t x520 = INT32_MIN;
	int32_t t118 = 30818325;

    t118 = (x517<=(x518^(x519+x520)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x521 = -1;
	int16_t x522 = 181;
	uint32_t x523 = UINT32_MAX;
	int32_t t119 = 65969298;

    t119 = (x521<=(x522^(x523+x524)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = INT32_MAX;
	static int64_t x526 = -19388360761666753LL;
	int32_t x527 = INT32_MIN;
	int8_t x528 = 17;

    t120 = (x525<=(x526^(x527+x528)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x529 = 4U;
	volatile int32_t x530 = INT32_MAX;
	int16_t x531 = INT16_MAX;
	uint32_t x532 = UINT32_MAX;
	int32_t t121 = -262952;

    t121 = (x529<=(x530^(x531+x532)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x533 = 12LL;
	static volatile uint8_t x534 = UINT8_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t122 = 3984911;

    t122 = (x533<=(x534^(x535+x536)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x537 = 423U;
	static uint64_t x538 = 1LLU;
	static volatile uint64_t x539 = 40LLU;
	volatile uint8_t x540 = 112U;
	static int32_t t123 = -1063;

    t123 = (x537<=(x538^(x539+x540)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x541 = INT16_MIN;
	static volatile int32_t x542 = -1;
	volatile int16_t x543 = INT16_MAX;

    t124 = (x541<=(x542^(x543+x544)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x545 = 0LLU;
	volatile int8_t x546 = 57;
	volatile uint32_t x547 = 851233022U;
	uint64_t x548 = 9845843913739740LLU;
	volatile int32_t t125 = 1;

    t125 = (x545<=(x546^(x547+x548)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint16_t x549 = 11U;
	int8_t x550 = INT8_MIN;
	static int32_t x551 = 937258266;
	int16_t x552 = INT16_MIN;
	static int32_t t126 = 41440;

    t126 = (x549<=(x550^(x551+x552)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x554 = INT64_MIN;
	int32_t t127 = -1390;

    t127 = (x553<=(x554^(x555+x556)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x558 = 33449349;
	static int32_t t128 = -80212755;

    t128 = (x557<=(x558^(x559+x560)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = INT8_MIN;
	int8_t x562 = -1;
	int64_t x563 = -1LL;
	static uint64_t x564 = 14123LLU;
	volatile int32_t t129 = 80;

    t129 = (x561<=(x562^(x563+x564)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x565 = 1;
	static int8_t x566 = INT8_MIN;
	int64_t x567 = INT64_MIN;
	static volatile uint64_t x568 = 1577LLU;

    t130 = (x565<=(x566^(x567+x568)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x569 = -1;
	uint32_t x570 = 4U;
	int64_t x571 = 19201033LL;
	static volatile int32_t t131 = 1;

    t131 = (x569<=(x570^(x571+x572)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x581 = INT32_MIN;
	static int32_t x582 = INT32_MIN;
	volatile int32_t t132 = 3;

    t132 = (x581<=(x582^(x583+x584)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x585 = 187649599LLU;
	uint32_t x586 = 23844U;
	static uint32_t x587 = 203941U;
	int32_t t133 = -402143032;

    t133 = (x585<=(x586^(x587+x588)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x591 = 447U;
	int32_t x592 = 4;
	volatile int32_t t134 = -4585934;

    t134 = (x589<=(x590^(x591+x592)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x593 = 126478850029779754LL;
	int16_t x594 = INT16_MIN;
	volatile int16_t x595 = -1;
	static uint32_t x596 = UINT32_MAX;
	static int32_t t135 = -1;

    t135 = (x593<=(x594^(x595+x596)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x601 = 123U;
	volatile uint16_t x602 = 2482U;
	static int8_t x603 = INT8_MAX;
	static volatile uint32_t x604 = 226148560U;
	volatile int32_t t136 = 2848;

    t136 = (x601<=(x602^(x603+x604)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x605 = 27U;
	int32_t x606 = 0;
	int16_t x607 = -1;
	static uint16_t x608 = 11133U;
	static int32_t t137 = -216;

    t137 = (x605<=(x606^(x607+x608)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = -1;
	uint8_t x610 = 2U;
	uint64_t x611 = 2073LLU;
	int16_t x612 = 1;
	static volatile int32_t t138 = 1872272;

    t138 = (x609<=(x610^(x611+x612)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x613 = -4;
	int8_t x614 = INT8_MAX;
	uint64_t x615 = 12423976LLU;
	int8_t x616 = -13;
	int32_t t139 = 4701347;

    t139 = (x613<=(x614^(x615+x616)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x618 = 36U;
	static int64_t x619 = -967253582638LL;
	int8_t x620 = INT8_MIN;
	static int32_t t140 = -52312054;

    t140 = (x617<=(x618^(x619+x620)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	int16_t x622 = INT16_MIN;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t141 = 74395;

    t141 = (x621<=(x622^(x623+x624)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x625 = UINT16_MAX;
	volatile uint16_t x626 = 2128U;
	uint32_t x627 = 7332931U;
	int16_t x628 = -1;
	volatile int32_t t142 = -144459;

    t142 = (x625<=(x626^(x627+x628)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x629 = UINT8_MAX;
	int64_t x630 = -2428038742078168LL;
	volatile int64_t x631 = -345739504773747883LL;
	int16_t x632 = 89;
	volatile int32_t t143 = 3586;

    t143 = (x629<=(x630^(x631+x632)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x635 = INT8_MIN;
	static uint8_t x636 = 22U;
	int32_t t144 = 605434;

    t144 = (x633<=(x634^(x635+x636)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x637 = -238;
	int32_t x640 = -268210956;
	int32_t t145 = -1244;

    t145 = (x637<=(x638^(x639+x640)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x641 = 17972638842359863LL;
	int8_t x643 = INT8_MAX;
	uint8_t x644 = 54U;
	static int32_t t146 = -43272785;

    t146 = (x641<=(x642^(x643+x644)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x645 = -20;
	uint32_t x646 = 65311U;
	static volatile int32_t x647 = 0;
	int8_t x648 = -1;

    t147 = (x645<=(x646^(x647+x648)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x649 = UINT16_MAX;
	static uint8_t x652 = 21U;
	volatile int32_t t148 = -23;

    t148 = (x649<=(x650^(x651+x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x653 = -2;
	int16_t x654 = -218;
	static uint8_t x655 = 2U;
	uint64_t x656 = UINT64_MAX;
	int32_t t149 = -96051872;

    t149 = (x653<=(x654^(x655+x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x661 = 2591U;
	uint32_t x663 = 202667603U;
	int16_t x664 = INT16_MIN;
	volatile int32_t t150 = 4;

    t150 = (x661<=(x662^(x663+x664)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x665 = -1;
	int32_t x666 = INT32_MIN;
	uint16_t x667 = 11U;
	int8_t x668 = INT8_MIN;
	int32_t t151 = -7;

    t151 = (x665<=(x666^(x667+x668)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x669 = INT16_MIN;
	int32_t x671 = INT32_MIN;
	uint8_t x672 = 0U;
	volatile int32_t t152 = 72639007;

    t152 = (x669<=(x670^(x671+x672)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x673 = INT64_MIN;
	uint64_t x674 = 242764343286383LLU;
	uint64_t x676 = 2LLU;
	int32_t t153 = 60278109;

    t153 = (x673<=(x674^(x675+x676)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	static int8_t x682 = -36;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = INT16_MAX;
	volatile int32_t t154 = -1860;

    t154 = (x681<=(x682^(x683+x684)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x685 = INT64_MIN;
	static volatile int64_t x686 = -1LL;
	int32_t x688 = 35;
	static int32_t t155 = -77642582;

    t155 = (x685<=(x686^(x687+x688)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x689 = -62;
	uint8_t x690 = 0U;
	int32_t x691 = INT32_MAX;
	static uint32_t x692 = 321U;
	volatile int32_t t156 = -40;

    t156 = (x689<=(x690^(x691+x692)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	uint8_t x694 = 66U;
	uint32_t x696 = UINT32_MAX;
	int32_t t157 = 109989742;

    t157 = (x693<=(x694^(x695+x696)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x702 = UINT64_MAX;
	uint16_t x703 = UINT16_MAX;
	int16_t x704 = -1;

    t158 = (x701<=(x702^(x703+x704)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x705 = -2;
	int8_t x706 = -4;
	static uint16_t x707 = 56U;
	volatile int32_t t159 = -5;

    t159 = (x705<=(x706^(x707+x708)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = 1;
	static int32_t x712 = -14157;
	int32_t t160 = 1220;

    t160 = (x709<=(x710^(x711+x712)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x713 = 2;
	static uint16_t x714 = 49U;
	static int64_t x715 = -424474LL;

    t161 = (x713<=(x714^(x715+x716)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x718 = 16071U;
	uint64_t x719 = 5258655211LLU;
	int8_t x720 = INT8_MAX;

    t162 = (x717<=(x718^(x719+x720)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x721 = INT32_MAX;
	int16_t x722 = INT16_MAX;
	static int64_t x724 = INT64_MAX;
	volatile int32_t t163 = 660178542;

    t163 = (x721<=(x722^(x723+x724)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x725 = -1LL;
	int16_t x726 = INT16_MIN;
	int64_t x727 = -1LL;
	static int32_t x728 = INT32_MAX;
	int32_t t164 = 1664341;

    t164 = (x725<=(x726^(x727+x728)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x729 = INT64_MIN;
	static volatile uint16_t x730 = UINT16_MAX;
	uint32_t x731 = 171717U;
	uint16_t x732 = 1U;
	static volatile int32_t t165 = -68;

    t165 = (x729<=(x730^(x731+x732)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = INT8_MIN;
	int64_t x736 = -817256LL;
	int32_t t166 = 66;

    t166 = (x733<=(x734^(x735+x736)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x737 = UINT64_MAX;
	uint8_t x738 = UINT8_MAX;
	int32_t x740 = INT32_MIN;
	volatile int32_t t167 = -7841650;

    t167 = (x737<=(x738^(x739+x740)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x749 = 5U;
	uint32_t x750 = UINT32_MAX;
	uint64_t x751 = UINT64_MAX;
	volatile int32_t t168 = 1597;

    t168 = (x749<=(x750^(x751+x752)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x753 = INT32_MAX;
	static int64_t x754 = INT64_MIN;
	int8_t x755 = -1;
	int8_t x756 = INT8_MIN;

    t169 = (x753<=(x754^(x755+x756)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x757 = -1LL;
	volatile int64_t x758 = -276LL;
	volatile uint32_t x759 = UINT32_MAX;
	uint32_t x760 = 253U;
	static int32_t t170 = 1;

    t170 = (x757<=(x758^(x759+x760)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x761 = 6U;
	uint32_t x762 = UINT32_MAX;
	int64_t x763 = -23539882213LL;
	uint16_t x764 = 351U;
	static volatile int32_t t171 = 55531251;

    t171 = (x761<=(x762^(x763+x764)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x765 = -43;
	int16_t x766 = INT16_MIN;
	int64_t x767 = 2203428855585610341LL;
	volatile int32_t t172 = 73113;

    t172 = (x765<=(x766^(x767+x768)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x769 = INT8_MIN;
	uint64_t x770 = UINT64_MAX;
	int64_t x771 = -1956919705LL;
	volatile int8_t x772 = INT8_MIN;
	static int32_t t173 = -1531;

    t173 = (x769<=(x770^(x771+x772)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x777 = -109;
	volatile int8_t x778 = -1;
	volatile int16_t x780 = INT16_MAX;
	static volatile int32_t t174 = -41;

    t174 = (x777<=(x778^(x779+x780)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = INT8_MIN;
	static int32_t x782 = -29427955;
	int8_t x783 = INT8_MAX;
	static uint32_t x784 = 29U;
	static volatile int32_t t175 = -295054;

    t175 = (x781<=(x782^(x783+x784)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x785 = 51;
	uint64_t x787 = 17LLU;
	uint16_t x788 = UINT16_MAX;
	volatile int32_t t176 = 659428;

    t176 = (x785<=(x786^(x787+x788)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x789 = UINT64_MAX;
	int8_t x791 = INT8_MAX;
	int16_t x792 = 1;
	volatile int32_t t177 = 17;

    t177 = (x789<=(x790^(x791+x792)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x793 = 2U;
	int64_t x796 = -2438705741419741LL;

    t178 = (x793<=(x794^(x795+x796)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x797 = INT64_MAX;
	int32_t x798 = INT32_MIN;
	volatile int16_t x799 = INT16_MAX;
	int32_t x800 = 485;
	static volatile int32_t t179 = 4;

    t179 = (x797<=(x798^(x799+x800)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x802 = INT16_MAX;
	uint32_t x804 = 7528587U;

    t180 = (x801<=(x802^(x803+x804)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x805 = INT64_MIN;
	int64_t x806 = -361554LL;
	uint16_t x807 = 24911U;
	volatile int16_t x808 = -1;
	int32_t t181 = 12;

    t181 = (x805<=(x806^(x807+x808)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x809 = 1U;
	uint32_t x810 = 2842732U;
	static volatile uint32_t x811 = UINT32_MAX;
	static volatile int32_t x812 = INT32_MIN;
	volatile int32_t t182 = -3813976;

    t182 = (x809<=(x810^(x811+x812)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x813 = UINT32_MAX;
	volatile int16_t x815 = -1;
	volatile uint32_t x816 = 6U;

    t183 = (x813<=(x814^(x815+x816)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x817 = INT16_MAX;
	uint64_t x818 = UINT64_MAX;
	int16_t x819 = INT16_MAX;
	volatile int16_t x820 = -1;
	static volatile int32_t t184 = 13;

    t184 = (x817<=(x818^(x819+x820)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x821 = 2U;
	int16_t x822 = 6974;
	uint16_t x823 = 29U;
	static uint8_t x824 = UINT8_MAX;
	volatile int32_t t185 = 5;

    t185 = (x821<=(x822^(x823+x824)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x825 = -10347;
	int16_t x826 = INT16_MAX;
	uint32_t x827 = 338587243U;
	static volatile int32_t t186 = -292731;

    t186 = (x825<=(x826^(x827+x828)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x829 = INT16_MIN;
	volatile int8_t x830 = 6;
	static volatile int16_t x831 = INT16_MIN;
	int32_t x832 = -1742;
	volatile int32_t t187 = 1;

    t187 = (x829<=(x830^(x831+x832)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x834 = INT8_MAX;
	int16_t x836 = INT16_MIN;
	int32_t t188 = 1749;

    t188 = (x833<=(x834^(x835+x836)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x837 = -138;
	int32_t x838 = -65360;
	static uint64_t x839 = 0LLU;
	int32_t x840 = INT32_MAX;
	int32_t t189 = 31;

    t189 = (x837<=(x838^(x839+x840)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x842 = -27349;
	uint64_t x843 = 714LLU;
	static int64_t x844 = -1LL;

    t190 = (x841<=(x842^(x843+x844)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x845 = INT32_MIN;
	uint16_t x847 = UINT16_MAX;
	volatile int32_t t191 = 26304;

    t191 = (x845<=(x846^(x847+x848)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x849 = INT16_MIN;
	static int8_t x850 = INT8_MIN;
	static int16_t x851 = 1;
	uint64_t x852 = 9894550207095087LLU;
	volatile int32_t t192 = -65532412;

    t192 = (x849<=(x850^(x851+x852)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x853 = UINT8_MAX;
	uint16_t x854 = 17832U;
	volatile uint16_t x855 = 6862U;
	uint32_t x856 = 400U;

    t193 = (x853<=(x854^(x855+x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x858 = -39339568;
	static uint8_t x860 = UINT8_MAX;
	static volatile int32_t t194 = -7470365;

    t194 = (x857<=(x858^(x859+x860)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x865 = INT16_MIN;
	uint32_t x868 = UINT32_MAX;
	int32_t t195 = 80644;

    t195 = (x865<=(x866^(x867+x868)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x869 = 42021003U;
	static volatile int32_t x870 = -49468267;
	uint64_t x871 = 108061120746855LLU;
	int16_t x872 = INT16_MIN;
	int32_t t196 = 2403894;

    t196 = (x869<=(x870^(x871+x872)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x875 = 6556695U;
	int8_t x876 = 0;

    t197 = (x873<=(x874^(x875+x876)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x877 = 185606769U;
	uint8_t x878 = UINT8_MAX;
	uint16_t x879 = 2802U;
	int64_t x880 = INT64_MIN;
	static int32_t t198 = -140904;

    t198 = (x877<=(x878^(x879+x880)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x881 = -853117;
	int64_t x882 = INT64_MIN;
	int64_t x883 = -1LL;
	static int32_t x884 = 1;
	volatile int32_t t199 = 16630;

    t199 = (x881<=(x882^(x883+x884)));

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

