
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

int32_t x1 = INT32_MAX;
int64_t x2 = INT64_MAX;
int64_t x4 = -1LL;
static volatile int32_t t0 = -2;
volatile int32_t t1 = 1;
int64_t x11 = 1LL;
uint16_t x20 = 7316U;
static volatile int32_t t4 = -11784673;
int16_t x22 = INT16_MIN;
static int64_t x23 = INT64_MIN;
volatile int8_t x25 = 0;
int16_t x28 = INT16_MIN;
int32_t x32 = 18988;
int32_t x37 = INT32_MAX;
volatile uint32_t x40 = UINT32_MAX;
int32_t x52 = -1;
int16_t x54 = INT16_MIN;
static volatile uint8_t x58 = UINT8_MAX;
uint16_t x60 = 0U;
int32_t x62 = 0;
uint8_t x74 = 38U;
uint32_t x77 = 48536U;
uint8_t x83 = 30U;
int32_t x85 = -1;
volatile int16_t x89 = -1;
static int16_t x93 = 13;
volatile int32_t t23 = -133;
volatile int8_t x97 = INT8_MIN;
static int8_t x101 = INT8_MAX;
int8_t x102 = 1;
int64_t x103 = INT64_MIN;
uint32_t x111 = 3930U;
int32_t t27 = 545;
static int8_t x122 = INT8_MIN;
static uint32_t x131 = 4140565U;
int8_t x132 = INT8_MIN;
volatile int16_t x145 = INT16_MIN;
int8_t x146 = -6;
static int8_t x147 = INT8_MIN;
volatile int32_t t36 = -688909397;
int64_t x149 = -1LL;
volatile int8_t x150 = INT8_MAX;
volatile int32_t t37 = 560241;
int64_t x156 = INT64_MIN;
int8_t x160 = -51;
static uint16_t x163 = 8284U;
uint64_t x173 = 118424744899591387LLU;
int16_t x175 = INT16_MIN;
int8_t x179 = INT8_MAX;
static uint16_t x181 = UINT16_MAX;
uint32_t x182 = UINT32_MAX;
int64_t x183 = -1LL;
static uint8_t x185 = 0U;
volatile int32_t x188 = INT32_MIN;
static int64_t x191 = -1LL;
uint8_t x198 = 127U;
static int16_t x210 = INT16_MIN;
volatile uint8_t x211 = 118U;
uint8_t x216 = 45U;
int32_t t54 = -195551;
int8_t x223 = -1;
int32_t t55 = -1;
int32_t t57 = 0;
int32_t x233 = INT32_MIN;
static int64_t x234 = INT64_MIN;
volatile int32_t t58 = 1;
static uint8_t x240 = UINT8_MAX;
int32_t x246 = -21395696;
volatile int32_t t63 = -195855992;
static int8_t x257 = -15;
int16_t x274 = -1;
static volatile int64_t x276 = INT64_MIN;
static volatile int32_t t69 = 237543;
uint32_t x281 = 6001U;
static volatile int8_t x283 = 4;
static uint32_t x304 = UINT32_MAX;
static int16_t x306 = -1;
int16_t x308 = -82;
int16_t x310 = 47;
static volatile int32_t x312 = INT32_MIN;
static int32_t t77 = 9;
volatile uint64_t x314 = 25310701945504LLU;
uint8_t x319 = UINT8_MAX;
int8_t x328 = -13;
static int32_t x329 = -1;
volatile uint32_t x335 = 37U;
volatile int8_t x337 = INT8_MIN;
int64_t x338 = INT64_MIN;
int32_t x340 = INT32_MAX;
uint32_t x344 = UINT32_MAX;
int32_t t88 = 187;
int64_t x359 = -1LL;
uint64_t x368 = 694748573LLU;
volatile int32_t t91 = -176567617;
int8_t x369 = 1;
volatile int16_t x370 = -1;
uint16_t x371 = 2313U;
volatile int32_t t92 = -67589135;
static volatile int32_t t93 = 47495;
static volatile uint8_t x377 = 0U;
int16_t x380 = -1;
int8_t x389 = INT8_MIN;
int8_t x390 = INT8_MAX;
volatile int32_t x395 = INT32_MIN;
int16_t x398 = INT16_MIN;
int32_t t101 = 20183;
volatile int64_t x413 = INT64_MIN;
volatile int32_t x417 = 846472931;
static int32_t t105 = 16774;
uint32_t x425 = 683U;
int32_t x432 = INT32_MIN;
uint64_t x433 = UINT64_MAX;
uint32_t x441 = UINT32_MAX;
volatile int64_t x450 = INT64_MIN;
volatile uint32_t x464 = 43220U;
static volatile int16_t x465 = INT16_MIN;
int8_t x469 = INT8_MAX;
volatile int8_t x476 = 3;
volatile int16_t x477 = INT16_MAX;
int8_t x484 = -5;
uint16_t x488 = UINT16_MAX;
static volatile int8_t x495 = 0;
int64_t x497 = INT64_MIN;
static volatile uint8_t x498 = 95U;
int64_t x502 = 39LL;
int64_t x512 = INT64_MIN;
uint32_t x515 = 481635U;
uint64_t x516 = UINT64_MAX;
volatile int32_t t129 = -1;
volatile int32_t x522 = -1;
static int16_t x523 = 6;
uint8_t x527 = 13U;
uint64_t x536 = 4437862252420998593LLU;
int32_t x539 = -169;
int32_t t134 = -118667953;
volatile int64_t x544 = -893LL;
volatile int32_t t136 = -12;
int32_t x550 = INT32_MIN;
int32_t t137 = -15558;
int16_t x553 = INT16_MIN;
int16_t x559 = INT16_MIN;
int32_t x560 = 2108143;
volatile uint64_t x565 = UINT64_MAX;
volatile int32_t t142 = -54;
static int16_t x576 = -1;
int32_t x577 = INT32_MAX;
int8_t x580 = INT8_MIN;
int16_t x581 = INT16_MAX;
uint16_t x584 = 0U;
static int32_t x587 = INT32_MIN;
uint32_t x589 = UINT32_MAX;
int32_t x591 = -1;
volatile int16_t x592 = INT16_MAX;
static int8_t x598 = INT8_MIN;
volatile int8_t x610 = -4;
static int32_t x613 = INT32_MIN;
static volatile int32_t t153 = 57;
static volatile int16_t x618 = INT16_MIN;
int32_t t154 = 148741932;
int16_t x627 = INT16_MAX;
static int32_t x630 = 635804881;
int8_t x632 = -5;
volatile int32_t t157 = -80504;
static uint8_t x636 = 119U;
uint8_t x642 = UINT8_MAX;
int32_t x643 = INT32_MIN;
uint64_t x650 = 414727755144531842LLU;
volatile uint16_t x653 = 0U;
uint16_t x654 = 323U;
static int32_t t163 = 30269307;
int32_t t164 = 1;
int16_t x661 = 9;
int16_t x665 = 2;
static int16_t x670 = INT16_MAX;
uint16_t x672 = 6434U;
volatile int64_t x675 = 980611812756LL;
int64_t x677 = INT64_MIN;
volatile int32_t x680 = INT32_MAX;
int32_t x689 = INT32_MIN;
volatile uint8_t x690 = UINT8_MAX;
static int8_t x697 = INT8_MAX;
volatile uint64_t x702 = 1240LLU;
int8_t x704 = INT8_MIN;
int32_t x705 = -1;
static uint16_t x709 = 0U;
volatile int64_t x710 = -1LL;
static uint8_t x716 = UINT8_MAX;
uint16_t x724 = 47U;
volatile int32_t t180 = -461;
int32_t x725 = INT32_MIN;
volatile int32_t x730 = -1;
uint8_t x731 = UINT8_MAX;
static int32_t t182 = 6190;
static int64_t x736 = -374LL;
int16_t x738 = 15;
uint16_t x742 = 3U;
uint16_t x744 = 0U;
int16_t x745 = INT16_MAX;
static int8_t x748 = 0;
static volatile int32_t t186 = 1961;
static uint64_t x750 = UINT64_MAX;
static int64_t x758 = 2LL;
volatile int8_t x764 = -1;
uint16_t x765 = 747U;
uint32_t x767 = 165022U;
static int16_t x770 = -1;
volatile int32_t t193 = -1665;
int64_t x778 = INT64_MIN;
int16_t x781 = -1;
static int64_t x783 = 6025209247064LL;
volatile int16_t x787 = INT16_MIN;
uint32_t x792 = UINT32_MAX;
int32_t x793 = 15315922;
int32_t x795 = INT32_MAX;
static uint32_t x796 = 1437U;


void f0(void) {
    	int16_t x3 = 4749;

    t0 = ((x1>x2)^(x3>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = 54955912130550457LL;
	uint32_t x6 = 118861U;
	int16_t x7 = INT16_MIN;
	static uint16_t x8 = UINT16_MAX;

    t1 = ((x5>x6)^(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int64_t x10 = -1LL;
	static int64_t x12 = -15613728469184LL;
	volatile int32_t t2 = -67;

    t2 = ((x9>x10)^(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -6;
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 45386195178LLU;
	int16_t x16 = 0;
	volatile int32_t t3 = 1;

    t3 = ((x13>x14)^(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	int64_t x19 = INT64_MIN;

    t4 = ((x17>x18)^(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 56U;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 21705923;

    t5 = ((x21>x22)^(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = 25239614343LLU;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 124840829;

    t6 = ((x25>x26)^(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -3877643210843LL;
	static uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	static int32_t t7 = 525134635;

    t7 = ((x29>x30)^(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MIN;
	volatile int32_t x36 = 827223691;
	static volatile int32_t t8 = 3;

    t8 = ((x33>x34)^(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t t9 = -1;

    t9 = ((x37>x38)^(x39>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 145U;
	static int16_t x42 = -4379;
	uint16_t x43 = 0U;
	int8_t x44 = -1;
	int32_t t10 = -3;

    t10 = ((x41>x42)^(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MAX;
	int32_t x47 = -1;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 18;

    t11 = ((x45>x46)^(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 13U;
	int32_t t12 = -1850;

    t12 = ((x49>x50)^(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = 35;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -500036791;

    t13 = ((x53>x54)^(x55>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	int16_t x59 = -2;
	int32_t t14 = 196227696;

    t14 = ((x57>x58)^(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 12LL;
	int64_t x63 = -187213180987LL;
	int16_t x64 = -1;
	static volatile int32_t t15 = 20212;

    t15 = ((x61>x62)^(x63>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = -1LL;
	volatile int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	int32_t t16 = -38927398;

    t16 = ((x65>x66)^(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	static volatile int16_t x71 = -1;
	uint64_t x72 = 1371LLU;
	int32_t t17 = 115;

    t17 = ((x69>x70)^(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x73 = -441231;
	volatile uint32_t x75 = 1U;
	int32_t x76 = -14877;
	volatile int32_t t18 = -232519;

    t18 = ((x73>x74)^(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = -60183557;
	static uint64_t x79 = 65535783367750LLU;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t19 = -1;

    t19 = ((x77>x78)^(x79>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = 4U;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 941118306;

    t20 = ((x81>x82)^(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x86 = 6U;
	int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static int32_t t21 = 0;

    t21 = ((x85>x86)^(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = UINT16_MAX;
	volatile int64_t x91 = INT64_MIN;
	int32_t x92 = 2375465;
	volatile int32_t t22 = 77;

    t22 = ((x89>x90)^(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 0U;
	volatile uint32_t x95 = 1U;
	uint16_t x96 = 27U;

    t23 = ((x93>x94)^(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MAX;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 11638;

    t24 = ((x97>x98)^(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x104 = INT32_MIN;
	int32_t t25 = -30979411;

    t25 = ((x101>x102)^(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 60U;
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	static volatile int32_t t26 = 40125;

    t26 = ((x105>x106)^(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -4;
	int16_t x110 = 2;
	int64_t x112 = INT64_MAX;

    t27 = ((x109>x110)^(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint16_t x115 = 28642U;
	int16_t x116 = -4348;
	int32_t t28 = -216399901;

    t28 = ((x113>x114)^(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = 3601;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -3;
	uint64_t x120 = 395075298109LLU;
	int32_t t29 = 2647;

    t29 = ((x117>x118)^(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x121 = UINT32_MAX;
	int16_t x123 = INT16_MAX;
	volatile uint32_t x124 = UINT32_MAX;
	int32_t t30 = -549525;

    t30 = ((x121>x122)^(x123>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	int16_t x128 = INT16_MIN;
	int32_t t31 = 14216;

    t31 = ((x125>x126)^(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	volatile int32_t t32 = 3732698;

    t32 = ((x129>x130)^(x131>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int16_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	static uint32_t x136 = 7847U;
	int32_t t33 = -233536;

    t33 = ((x133>x134)^(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 9U;
	uint16_t x138 = 6U;
	int64_t x139 = -1LL;
	uint32_t x140 = 75397870U;
	int32_t t34 = 1060774385;

    t34 = ((x137>x138)^(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	static int64_t x142 = 755601194475LL;
	uint16_t x143 = 3U;
	volatile uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = 236;

    t35 = ((x141>x142)^(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x148 = INT8_MIN;

    t36 = ((x145>x146)^(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x151 = 0;
	static volatile uint32_t x152 = 3903U;

    t37 = ((x149>x150)^(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x153 = 31891U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int32_t t38 = 131280661;

    t38 = ((x153>x154)^(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = 4070;
	uint8_t x158 = 0U;
	static uint8_t x159 = 3U;
	static int32_t t39 = 0;

    t39 = ((x157>x158)^(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 225776240U;
	int64_t x162 = -1LL;
	volatile uint16_t x164 = 1U;
	volatile int32_t t40 = -1012704218;

    t40 = ((x161>x162)^(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MAX;
	static int32_t t41 = 0;

    t41 = ((x165>x166)^(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 0U;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MAX;
	int16_t x172 = 31;
	int32_t t42 = 0;

    t42 = ((x169>x170)^(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = 3933LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -119132;

    t43 = ((x173>x174)^(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 5U;
	int16_t x178 = 1;
	int64_t x180 = -1LL;
	static volatile int32_t t44 = -1;

    t44 = ((x177>x178)^(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x184 = 1U;
	volatile int32_t t45 = -55;

    t45 = ((x181>x182)^(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = INT8_MIN;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t46 = 6784;

    t46 = ((x185>x186)^(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 29104736LLU;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -91;

    t47 = ((x189>x190)^(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = 5;
	static int8_t x194 = INT8_MIN;
	static uint16_t x195 = UINT16_MAX;
	int32_t x196 = -868;
	static volatile int32_t t48 = -1435;

    t48 = ((x193>x194)^(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = 34296541;
	int64_t x199 = INT64_MIN;
	int64_t x200 = -1LL;
	volatile int32_t t49 = 128;

    t49 = ((x197>x198)^(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 12;
	uint32_t x202 = 0U;
	uint8_t x203 = 3U;
	static int32_t x204 = INT32_MIN;
	int32_t t50 = 1436;

    t50 = ((x201>x202)^(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 1;
	int8_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	static uint64_t x208 = 92LLU;
	int32_t t51 = -68;

    t51 = ((x205>x206)^(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -1LL;
	static volatile int64_t x212 = 10359555999081LL;
	static volatile int32_t t52 = -1;

    t52 = ((x209>x210)^(x211>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -1;
	static int64_t x214 = -15193156004LL;
	int64_t x215 = 51013659987648260LL;
	volatile int32_t t53 = -118942;

    t53 = ((x213>x214)^(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	int8_t x218 = 3;
	static int64_t x219 = INT64_MIN;
	int32_t x220 = 62;

    t54 = ((x217>x218)^(x219>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MAX;
	int16_t x222 = 249;
	int32_t x224 = -1;

    t55 = ((x221>x222)^(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 5U;
	int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	static int8_t x228 = INT8_MAX;
	int32_t t56 = 78492;

    t56 = ((x225>x226)^(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MAX;
	static uint8_t x231 = 0U;
	int16_t x232 = INT16_MAX;

    t57 = ((x229>x230)^(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x235 = INT16_MAX;
	volatile int16_t x236 = INT16_MIN;

    t58 = ((x233>x234)^(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 1U;
	static int64_t x238 = INT64_MAX;
	uint32_t x239 = 21541U;
	int32_t t59 = -13965;

    t59 = ((x237>x238)^(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MAX;
	int64_t x242 = -76LL;
	volatile int16_t x243 = -864;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t60 = -1;

    t60 = ((x241>x242)^(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	volatile uint64_t x247 = UINT64_MAX;
	uint16_t x248 = 0U;
	int32_t t61 = 1016;

    t61 = ((x245>x246)^(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = -137433;
	volatile int32_t t62 = -1;

    t62 = ((x249>x250)^(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 6U;
	int16_t x254 = 1864;
	static int64_t x255 = 952LL;
	volatile uint64_t x256 = UINT64_MAX;

    t63 = ((x253>x254)^(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x258 = 10373U;
	uint16_t x259 = 13978U;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = -2621253;

    t64 = ((x257>x258)^(x259>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x261 = -1;
	volatile int16_t x262 = -1;
	int64_t x263 = INT64_MAX;
	uint32_t x264 = 2068661358U;
	int32_t t65 = 0;

    t65 = ((x261>x262)^(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 433U;
	uint32_t x266 = 16U;
	int16_t x267 = -1;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 501945125;

    t66 = ((x265>x266)^(x267>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	uint32_t x270 = 17U;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = -6803;

    t67 = ((x269>x270)^(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	volatile int32_t t68 = -532422754;

    t68 = ((x273>x274)^(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	volatile uint64_t x278 = 7995725413938LLU;
	int16_t x279 = -1;
	int16_t x280 = INT16_MIN;

    t69 = ((x277>x278)^(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = -21;

    t70 = ((x281>x282)^(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 30587U;
	int16_t x286 = INT16_MAX;
	static int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 111633674;

    t71 = ((x285>x286)^(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	int8_t x290 = -10;
	int16_t x291 = 0;
	int32_t x292 = INT32_MIN;
	int32_t t72 = 675048078;

    t72 = ((x289>x290)^(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 8681U;
	uint16_t x294 = 0U;
	volatile uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -4507;

    t73 = ((x293>x294)^(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 64749009U;
	uint32_t x298 = UINT32_MAX;
	static uint32_t x299 = UINT32_MAX;
	volatile int8_t x300 = 0;
	volatile int32_t t74 = -495;

    t74 = ((x297>x298)^(x299>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 332U;
	uint64_t x302 = 53886985761404124LLU;
	int64_t x303 = 1288359458269LL;
	static int32_t t75 = -21124;

    t75 = ((x301>x302)^(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	volatile int32_t t76 = 236540109;

    t76 = ((x305>x306)^(x307>x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	uint16_t x311 = 593U;

    t77 = ((x309>x310)^(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 5U;
	int32_t x315 = INT32_MAX;
	int64_t x316 = -1LL;
	int32_t t78 = 300865;

    t78 = ((x313>x314)^(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 1001639676526LLU;
	volatile uint64_t x318 = UINT64_MAX;
	volatile int8_t x320 = 0;
	volatile int32_t t79 = -2451650;

    t79 = ((x317>x318)^(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x321 = 44;
	int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 5U;
	int32_t t80 = -27334;

    t80 = ((x321>x322)^(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	int8_t x327 = -58;
	volatile int32_t t81 = 2153;

    t81 = ((x325>x326)^(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MAX;
	int8_t x332 = -1;
	volatile int32_t t82 = -9107;

    t82 = ((x329>x330)^(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -31;
	uint64_t x334 = 3577710LLU;
	uint16_t x336 = 330U;
	volatile int32_t t83 = 264;

    t83 = ((x333>x334)^(x335>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x339 = UINT16_MAX;
	int32_t t84 = 107;

    t84 = ((x337>x338)^(x339>x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x341 = -220;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	int32_t t85 = 135;

    t85 = ((x341>x342)^(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile uint32_t x346 = 14783777U;
	int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 118581;

    t86 = ((x345>x346)^(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 3U;
	static uint8_t x350 = 1U;
	uint16_t x351 = 6U;
	uint8_t x352 = 2U;
	int32_t t87 = 3320;

    t87 = ((x349>x350)^(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	volatile uint32_t x354 = 573517U;
	volatile uint16_t x355 = 57U;
	static uint16_t x356 = 0U;

    t88 = ((x353>x354)^(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -248716;

    t89 = ((x357>x358)^(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = -1;
	int8_t x363 = -8;
	static int16_t x364 = 0;
	int32_t t90 = -348;

    t90 = ((x361>x362)^(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = 123U;
	int8_t x366 = INT8_MIN;
	int64_t x367 = -7563524129260LL;

    t91 = ((x365>x366)^(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x372 = INT8_MAX;

    t92 = ((x369>x370)^(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	int8_t x374 = INT8_MAX;
	static int16_t x375 = INT16_MAX;
	static int64_t x376 = INT64_MIN;

    t93 = ((x373>x374)^(x375>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MAX;
	static int32_t x379 = INT32_MIN;
	static int32_t t94 = -58942208;

    t94 = ((x377>x378)^(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	int64_t x382 = 38LL;
	volatile int16_t x383 = 0;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 81;

    t95 = ((x381>x382)^(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -6LL;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = 2U;
	volatile int32_t t96 = 44;

    t96 = ((x385>x386)^(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x391 = -1;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -1303238;

    t97 = ((x389>x390)^(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -1LL;
	volatile int64_t x394 = INT64_MIN;
	static uint64_t x396 = 24528LLU;
	static int32_t t98 = -28230287;

    t98 = ((x393>x394)^(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	static int16_t x399 = -866;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 81;

    t99 = ((x397>x398)^(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1LL;
	uint8_t x403 = 2U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t100 = -1;

    t100 = ((x401>x402)^(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;

    t101 = ((x405>x406)^(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	volatile int64_t x410 = -1LL;
	volatile uint8_t x411 = 9U;
	int32_t x412 = INT32_MAX;
	volatile int32_t t102 = -242;

    t102 = ((x409>x410)^(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x414 = INT8_MAX;
	uint16_t x415 = 3U;
	int8_t x416 = 24;
	volatile int32_t t103 = 104;

    t103 = ((x413>x414)^(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x418 = INT64_MAX;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = INT16_MIN;
	int32_t t104 = -3664935;

    t104 = ((x417>x418)^(x419>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = 2090620175U;
	int32_t x422 = 18236793;
	int32_t x423 = INT32_MIN;
	int8_t x424 = 0;

    t105 = ((x421>x422)^(x423>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MIN;
	int16_t x427 = -25;
	int8_t x428 = 2;
	volatile int32_t t106 = 665;

    t106 = ((x425>x426)^(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	volatile uint16_t x430 = 28539U;
	static int32_t x431 = 19957351;
	volatile int32_t t107 = 125082;

    t107 = ((x429>x430)^(x431>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	uint32_t x435 = 15849U;
	uint32_t x436 = 2U;
	static int32_t t108 = 0;

    t108 = ((x433>x434)^(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	volatile int32_t x438 = -1;
	int32_t x439 = -1;
	static int16_t x440 = INT16_MIN;
	static volatile int32_t t109 = 18660;

    t109 = ((x437>x438)^(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = -5934535;
	uint64_t x443 = 6042596792LLU;
	static uint32_t x444 = 32833022U;
	int32_t t110 = 379752;

    t110 = ((x441>x442)^(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MAX;
	int32_t x446 = -70;
	static volatile int64_t x447 = INT64_MIN;
	int32_t x448 = 11;
	volatile int32_t t111 = -86;

    t111 = ((x445>x446)^(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int32_t x451 = INT32_MIN;
	static int8_t x452 = 0;
	volatile int32_t t112 = 0;

    t112 = ((x449>x450)^(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MAX;
	int64_t x454 = INT64_MIN;
	uint32_t x455 = UINT32_MAX;
	int32_t x456 = 17226;
	int32_t t113 = 38885;

    t113 = ((x453>x454)^(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x457 = 86805744LLU;
	uint32_t x458 = 3628408U;
	volatile int16_t x459 = -67;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -65506;

    t114 = ((x457>x458)^(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 31762113;
	int16_t x462 = INT16_MAX;
	volatile int8_t x463 = -1;
	int32_t t115 = 1028050684;

    t115 = ((x461>x462)^(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 993U;
	static int32_t x468 = INT32_MIN;
	int32_t t116 = -35;

    t116 = ((x465>x466)^(x467>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x470 = 7679779U;
	int32_t x471 = -3;
	int32_t x472 = -1;
	int32_t t117 = 1;

    t117 = ((x469>x470)^(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = 15;
	int16_t x474 = INT16_MAX;
	uint64_t x475 = UINT64_MAX;
	volatile int32_t t118 = -1;

    t118 = ((x473>x474)^(x475>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x478 = UINT32_MAX;
	int32_t x479 = -115778649;
	int32_t x480 = INT32_MIN;
	int32_t t119 = 0;

    t119 = ((x477>x478)^(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 25;
	uint32_t x482 = UINT32_MAX;
	uint16_t x483 = 689U;
	int32_t t120 = 134523;

    t120 = ((x481>x482)^(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -41;
	volatile int32_t x486 = INT32_MAX;
	int16_t x487 = INT16_MIN;
	static volatile int32_t t121 = -4849769;

    t121 = ((x485>x486)^(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = 752;
	int16_t x490 = INT16_MAX;
	int8_t x491 = -1;
	int16_t x492 = INT16_MAX;
	int32_t t122 = 230300558;

    t122 = ((x489>x490)^(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 129U;
	volatile uint64_t x494 = UINT64_MAX;
	int32_t x496 = -4627132;
	volatile int32_t t123 = -140076304;

    t123 = ((x493>x494)^(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x499 = INT32_MIN;
	int64_t x500 = INT64_MIN;
	int32_t t124 = -15;

    t124 = ((x497>x498)^(x499>x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 6U;
	uint16_t x503 = 107U;
	volatile int32_t x504 = -1;
	int32_t t125 = 5;

    t125 = ((x501>x502)^(x503>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = UINT64_MAX;
	static int8_t x506 = -1;
	int16_t x507 = INT16_MIN;
	static uint16_t x508 = 1836U;
	volatile int32_t t126 = -13429223;

    t126 = ((x505>x506)^(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 17U;
	uint16_t x510 = 24U;
	uint16_t x511 = UINT16_MAX;
	int32_t t127 = 0;

    t127 = ((x509>x510)^(x511>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	volatile uint16_t x514 = 25U;
	int32_t t128 = 21907;

    t128 = ((x513>x514)^(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = -1;
	int8_t x519 = INT8_MIN;
	volatile int64_t x520 = -1LL;

    t129 = ((x517>x518)^(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 0U;
	int16_t x524 = INT16_MIN;
	int32_t t130 = -42;

    t130 = ((x521>x522)^(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -800621642;
	volatile int64_t x526 = -8919LL;
	uint64_t x528 = 6975716087853005426LLU;
	int32_t t131 = -39961;

    t131 = ((x525>x526)^(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	uint8_t x530 = 6U;
	int16_t x531 = INT16_MIN;
	static volatile uint16_t x532 = 1466U;
	int32_t t132 = 220953592;

    t132 = ((x529>x530)^(x531>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = -1;
	uint32_t x535 = 6U;
	int32_t t133 = 1;

    t133 = ((x533>x534)^(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 15;
	int8_t x538 = INT8_MAX;
	int16_t x540 = 478;

    t134 = ((x537>x538)^(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = UINT64_MAX;
	static int32_t x542 = -43;
	uint32_t x543 = 155U;
	int32_t t135 = -14631;

    t135 = ((x541>x542)^(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int32_t x546 = INT32_MAX;
	int32_t x547 = 21;
	volatile uint64_t x548 = 5220LLU;

    t136 = ((x545>x546)^(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int64_t x551 = -1LL;
	int8_t x552 = INT8_MIN;

    t137 = ((x549>x550)^(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 1;
	volatile uint8_t x555 = 28U;
	int32_t x556 = INT32_MAX;
	volatile int32_t t138 = 1;

    t138 = ((x553>x554)^(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x557 = 5639721LLU;
	int16_t x558 = INT16_MIN;
	volatile int32_t t139 = -3;

    t139 = ((x557>x558)^(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	static int32_t x562 = 0;
	uint32_t x563 = UINT32_MAX;
	int32_t x564 = INT32_MIN;
	static volatile int32_t t140 = 1;

    t140 = ((x561>x562)^(x563>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -16;
	volatile int64_t x567 = INT64_MIN;
	uint64_t x568 = 78541128240LLU;
	int32_t t141 = 117538;

    t141 = ((x565>x566)^(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile uint8_t x570 = 10U;
	int16_t x571 = -1300;
	int32_t x572 = INT32_MAX;

    t142 = ((x569>x570)^(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	int16_t x574 = 0;
	uint32_t x575 = 439325U;
	volatile int32_t t143 = -7846455;

    t143 = ((x573>x574)^(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x578 = UINT32_MAX;
	volatile int16_t x579 = INT16_MAX;
	volatile int32_t t144 = -1;

    t144 = ((x577>x578)^(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = INT16_MAX;
	int32_t x583 = -11;
	int32_t t145 = 212691947;

    t145 = ((x581>x582)^(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = 7370;
	uint16_t x586 = 8077U;
	uint32_t x588 = 409255U;
	int32_t t146 = 16;

    t146 = ((x585>x586)^(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x590 = 186;
	volatile int32_t t147 = 57976;

    t147 = ((x589>x590)^(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = 8078153351794LL;
	volatile int8_t x594 = -1;
	volatile int8_t x595 = INT8_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -9;

    t148 = ((x593>x594)^(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 6;
	volatile uint32_t x599 = UINT32_MAX;
	volatile int8_t x600 = -1;
	volatile int32_t t149 = -41684056;

    t149 = ((x597>x598)^(x599>x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 16U;
	volatile int32_t x602 = INT32_MIN;
	uint16_t x603 = 2U;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t150 = 222;

    t150 = ((x601>x602)^(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	static int8_t x607 = 2;
	volatile uint16_t x608 = 3949U;
	int32_t t151 = 90;

    t151 = ((x605>x606)^(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x611 = 1014;
	int8_t x612 = INT8_MIN;
	int32_t t152 = 101979028;

    t152 = ((x609>x610)^(x611>x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = -1LL;
	int16_t x615 = -1;
	uint32_t x616 = 557853321U;

    t153 = ((x613>x614)^(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int8_t x619 = 29;
	int32_t x620 = 1;

    t154 = ((x617>x618)^(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -2641999;
	volatile int32_t x622 = INT32_MIN;
	int64_t x623 = INT64_MIN;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 10;

    t155 = ((x621>x622)^(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	int8_t x626 = INT8_MIN;
	static uint8_t x628 = 99U;
	volatile int32_t t156 = -2890;

    t156 = ((x625>x626)^(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	uint16_t x631 = 1U;

    t157 = ((x629>x630)^(x631>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 38;
	int64_t x634 = 19856899971917LL;
	static uint16_t x635 = 466U;
	volatile int32_t t158 = -268059101;

    t158 = ((x633>x634)^(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int8_t x638 = INT8_MIN;
	uint32_t x639 = UINT32_MAX;
	uint8_t x640 = 44U;
	int32_t t159 = 8272520;

    t159 = ((x637>x638)^(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = UINT32_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t160 = -143;

    t160 = ((x641>x642)^(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = -1;
	int8_t x646 = INT8_MIN;
	static uint64_t x647 = 28344151157334LLU;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -784303;

    t161 = ((x645>x646)^(x647>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x649 = -1;
	volatile int32_t x651 = 7716622;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t162 = -53780;

    t162 = ((x649>x650)^(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x655 = -1;
	int64_t x656 = -1LL;

    t163 = ((x653>x654)^(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 3282125224LLU;
	int8_t x658 = INT8_MIN;
	volatile int32_t x659 = INT32_MIN;
	volatile uint8_t x660 = UINT8_MAX;

    t164 = ((x657>x658)^(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = -1;
	static int16_t x663 = 32;
	uint8_t x664 = 68U;
	static int32_t t165 = 16541896;

    t165 = ((x661>x662)^(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	volatile int16_t x667 = 3135;
	volatile int32_t x668 = INT32_MIN;
	volatile int32_t t166 = -225;

    t166 = ((x665>x666)^(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -3878746366159LL;
	int16_t x671 = -15140;
	static int32_t t167 = -30984;

    t167 = ((x669>x670)^(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MIN;
	int32_t x674 = 2269072;
	volatile int16_t x676 = 1;
	int32_t t168 = -1876;

    t168 = ((x673>x674)^(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x678 = UINT16_MAX;
	int32_t x679 = INT32_MIN;
	int32_t t169 = -291405382;

    t169 = ((x677>x678)^(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint8_t x682 = 1U;
	int8_t x683 = INT8_MIN;
	volatile int8_t x684 = INT8_MAX;
	static int32_t t170 = 1;

    t170 = ((x681>x682)^(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -2;
	int8_t x686 = INT8_MAX;
	uint8_t x687 = 43U;
	int32_t x688 = -968930;
	int32_t t171 = 12;

    t171 = ((x685>x686)^(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x691 = INT64_MIN;
	static uint32_t x692 = 137498U;
	volatile int32_t t172 = 166641;

    t172 = ((x689>x690)^(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	uint8_t x694 = 3U;
	volatile int64_t x695 = -6LL;
	int16_t x696 = -1;
	int32_t t173 = -28676;

    t173 = ((x693>x694)^(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x698 = 781U;
	volatile int16_t x699 = INT16_MAX;
	int64_t x700 = 24LL;
	int32_t t174 = 33432286;

    t174 = ((x697>x698)^(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int32_t x703 = INT32_MAX;
	int32_t t175 = -416919925;

    t175 = ((x701>x702)^(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x706 = -1LL;
	uint64_t x707 = 199229LLU;
	volatile uint8_t x708 = UINT8_MAX;
	volatile int32_t t176 = 23606;

    t176 = ((x705>x706)^(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x711 = UINT32_MAX;
	int32_t x712 = -999631;
	volatile int32_t t177 = 4;

    t177 = ((x709>x710)^(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = UINT32_MAX;
	int32_t x714 = INT32_MIN;
	static volatile uint64_t x715 = 2147959087794964991LLU;
	int32_t t178 = 123;

    t178 = ((x713>x714)^(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = INT8_MIN;
	volatile int8_t x718 = INT8_MAX;
	int8_t x719 = 7;
	int64_t x720 = INT64_MAX;
	volatile int32_t t179 = 141053292;

    t179 = ((x717>x718)^(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	uint64_t x722 = UINT64_MAX;
	static volatile int32_t x723 = -1;

    t180 = ((x721>x722)^(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = 5810407LL;
	uint32_t x727 = UINT32_MAX;
	uint16_t x728 = 7U;
	static volatile int32_t t181 = 1744321;

    t181 = ((x725>x726)^(x727>x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	volatile int16_t x732 = INT16_MIN;

    t182 = ((x729>x730)^(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	static int32_t x734 = INT32_MIN;
	volatile int16_t x735 = -10901;
	static volatile int32_t t183 = -9;

    t183 = ((x733>x734)^(x735>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = 20U;
	uint16_t x739 = 10831U;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t184 = 209;

    t184 = ((x737>x738)^(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	volatile int64_t x743 = -35978251169LL;
	int32_t t185 = -1;

    t185 = ((x741>x742)^(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x746 = INT8_MIN;
	static volatile uint64_t x747 = UINT64_MAX;

    t186 = ((x745>x746)^(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 18U;
	uint32_t x751 = 1939141381U;
	static int32_t x752 = 291050;
	volatile int32_t t187 = 47111413;

    t187 = ((x749>x750)^(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = 23928465LLU;
	static int16_t x754 = INT16_MIN;
	static int64_t x755 = -1LL;
	int8_t x756 = 3;
	volatile int32_t t188 = 1783;

    t188 = ((x753>x754)^(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	int64_t x759 = 281439939145LL;
	static int64_t x760 = INT64_MIN;
	volatile int32_t t189 = 8;

    t189 = ((x757>x758)^(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = -1065023763036962LL;
	int64_t x762 = 91LL;
	uint32_t x763 = UINT32_MAX;
	static int32_t t190 = -499;

    t190 = ((x761>x762)^(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	int8_t x768 = INT8_MAX;
	static volatile int32_t t191 = -72924;

    t191 = ((x765>x766)^(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = INT32_MIN;
	int16_t x771 = INT16_MIN;
	int16_t x772 = -1;
	static int32_t t192 = 91428022;

    t192 = ((x769>x770)^(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint16_t x774 = UINT16_MAX;
	static int32_t x775 = -25;
	int8_t x776 = 10;

    t193 = ((x773>x774)^(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	int8_t x779 = -38;
	int32_t x780 = 341154;
	volatile int32_t t194 = -15572;

    t194 = ((x777>x778)^(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x782 = 19U;
	int64_t x784 = INT64_MIN;
	volatile int32_t t195 = 28767725;

    t195 = ((x781>x782)^(x783>x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 1440076738089LLU;
	uint8_t x786 = 3U;
	int32_t x788 = 975703431;
	int32_t t196 = -18741112;

    t196 = ((x785>x786)^(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	volatile int64_t x790 = -1LL;
	volatile int32_t x791 = INT32_MIN;
	volatile int32_t t197 = 17345055;

    t197 = ((x789>x790)^(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = -9;
	int32_t t198 = -550507270;

    t198 = ((x793>x794)^(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	static uint16_t x798 = UINT16_MAX;
	int32_t x799 = INT32_MIN;
	int64_t x800 = INT64_MIN;
	static volatile int32_t t199 = -695384059;

    t199 = ((x797>x798)^(x799>x800));

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

