
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
int16_t x4 = INT16_MIN;
int8_t x5 = -1;
volatile int32_t x6 = INT32_MIN;
int8_t x13 = -1;
uint64_t x14 = UINT64_MAX;
static uint8_t x16 = UINT8_MAX;
int32_t t3 = -2930;
int8_t x23 = -1;
volatile int32_t t5 = -310796;
static int32_t t6 = 28004642;
static int32_t x30 = -1;
volatile uint16_t x31 = 0U;
int64_t x33 = -138875569LL;
static volatile int8_t x34 = 6;
uint32_t x37 = 46U;
static volatile int32_t t9 = -25;
volatile int16_t x42 = -57;
uint64_t x46 = UINT64_MAX;
int16_t x47 = -1;
volatile int8_t x65 = 6;
static int32_t t16 = 294634718;
uint32_t x73 = 17U;
uint64_t x74 = 16522957LLU;
int16_t x79 = INT16_MIN;
int8_t x84 = INT8_MAX;
volatile uint64_t x91 = 101215150019182633LLU;
int32_t t23 = 0;
int64_t x98 = 6690038866891LL;
int32_t x107 = -1;
int32_t x110 = 5650587;
volatile int32_t x111 = INT32_MAX;
static volatile int32_t t27 = -108462;
volatile uint64_t x121 = UINT64_MAX;
volatile uint32_t x128 = 843U;
static int32_t t33 = -1;
int32_t t36 = 32782645;
uint16_t x151 = UINT16_MAX;
int16_t x155 = INT16_MIN;
int32_t x160 = -1;
static int64_t x176 = -61232631693LL;
int8_t x182 = 7;
uint8_t x186 = UINT8_MAX;
static int8_t x190 = -1;
int8_t x210 = -1;
volatile int16_t x214 = INT16_MIN;
volatile uint64_t x217 = UINT64_MAX;
int8_t x218 = INT8_MIN;
volatile uint16_t x220 = 1U;
int64_t x221 = -13846443618866767LL;
static int64_t x223 = INT64_MAX;
static uint8_t x236 = 4U;
int32_t t62 = 0;
volatile int16_t x254 = INT16_MIN;
int32_t t64 = -131792;
int32_t x261 = INT32_MAX;
uint16_t x272 = 1066U;
static int16_t x276 = 211;
int32_t x277 = -1460663;
int8_t x280 = INT8_MIN;
static int32_t t71 = 646;
static int16_t x289 = -1;
uint32_t x295 = UINT32_MAX;
uint32_t x296 = 181U;
volatile int64_t x298 = INT64_MIN;
volatile int32_t t74 = 5904999;
int16_t x302 = 9;
int64_t x303 = INT64_MIN;
int32_t x304 = INT32_MIN;
volatile int8_t x306 = INT8_MIN;
int32_t x310 = -807;
volatile uint64_t x311 = 24468428402390LLU;
int16_t x312 = -1;
int64_t x313 = INT64_MAX;
static uint16_t x315 = UINT16_MAX;
int32_t t78 = 370348097;
int32_t x324 = INT32_MAX;
static volatile int32_t t81 = -8406;
int32_t t82 = 13360694;
int32_t x333 = INT32_MAX;
int32_t x334 = -1;
int64_t x338 = 1LL;
int8_t x345 = -1;
volatile int32_t t87 = 11;
uint8_t x354 = 14U;
uint64_t x359 = 515953710101LLU;
int32_t x360 = INT32_MIN;
int8_t x362 = 28;
static volatile int32_t t90 = -7488674;
int64_t x367 = INT64_MIN;
int16_t x368 = 673;
int8_t x372 = -8;
int8_t x381 = -1;
int32_t x382 = -66350008;
static volatile int64_t x383 = 3149795637666LL;
volatile int64_t x388 = -3239511044032669961LL;
int64_t x394 = -9LL;
int64_t x396 = 5LL;
volatile uint64_t x401 = UINT64_MAX;
static uint16_t x404 = UINT16_MAX;
int32_t x405 = INT32_MIN;
int8_t x408 = INT8_MAX;
int32_t t101 = 4647282;
uint16_t x411 = UINT16_MAX;
uint64_t x414 = 58LLU;
int16_t x415 = -5582;
uint16_t x417 = 556U;
uint64_t x428 = UINT64_MAX;
volatile int32_t t107 = -1051;
int64_t x441 = INT64_MIN;
static int32_t t110 = 0;
uint16_t x446 = 28646U;
int16_t x449 = INT16_MIN;
uint32_t x450 = 405157949U;
int32_t x457 = INT32_MIN;
int16_t x462 = -1;
uint8_t x463 = UINT8_MAX;
int32_t x466 = INT32_MIN;
int64_t x467 = INT64_MIN;
int32_t t116 = 4;
int64_t x477 = 5433282LL;
int32_t t119 = 40510160;
int32_t x482 = 93317;
int16_t x489 = INT16_MIN;
static uint8_t x490 = 74U;
int32_t x497 = -1;
int16_t x500 = 11869;
volatile int16_t x508 = 1341;
static int8_t x510 = INT8_MIN;
static int8_t x512 = INT8_MAX;
int16_t x519 = INT16_MIN;
static int32_t t130 = 45989917;
static int64_t x532 = 25LL;
int16_t x538 = -1;
volatile int32_t t134 = -3274;
static int64_t x541 = -4978133116160639LL;
static volatile int8_t x542 = -1;
int8_t x544 = INT8_MIN;
volatile uint32_t x550 = 227U;
int32_t x554 = INT32_MIN;
static int64_t x555 = 1462603LL;
uint64_t x562 = 301812LLU;
int64_t x565 = INT64_MIN;
static volatile int8_t x568 = -1;
volatile int32_t t141 = -142336661;
int8_t x569 = INT8_MIN;
volatile int16_t x571 = INT16_MIN;
volatile uint64_t x572 = 154604526610933LLU;
int64_t x573 = -1LL;
int64_t x574 = -1LL;
int32_t x575 = -840708;
int64_t x576 = -1LL;
static int64_t x582 = INT64_MIN;
int32_t x584 = -504;
int32_t t145 = -42;
volatile int32_t t146 = -12749;
uint8_t x589 = UINT8_MAX;
volatile int32_t x605 = INT32_MIN;
int32_t x611 = -620295;
int16_t x612 = -1;
int32_t t155 = 911161;
volatile int32_t t157 = 3;
int8_t x633 = 25;
int16_t x634 = -94;
static int64_t x637 = -1LL;
static uint8_t x641 = UINT8_MAX;
static int16_t x655 = -1;
int32_t x665 = -426037928;
volatile int8_t x670 = -1;
static volatile int32_t t167 = 4581964;
int64_t x674 = INT64_MIN;
volatile int8_t x689 = INT8_MAX;
volatile int32_t t174 = -266545;
uint32_t x706 = UINT32_MAX;
int64_t x709 = -1LL;
static int8_t x716 = -1;
int32_t t179 = 377717105;
int8_t x722 = INT8_MIN;
static int8_t x730 = INT8_MIN;
static int64_t x735 = -1LL;
static volatile int16_t x738 = -1;
volatile int32_t x739 = -1;
int64_t x748 = INT64_MIN;
volatile int32_t t187 = -18251;
volatile int64_t x753 = 48361136LL;
static int64_t x757 = INT64_MAX;
int16_t x759 = INT16_MIN;
uint16_t x764 = 4768U;
uint32_t x770 = 1475240828U;
int32_t x773 = -8158;
int8_t x783 = INT8_MIN;
volatile int32_t t196 = -1000111817;
volatile int32_t x796 = INT32_MAX;
int64_t x799 = -1LL;


void f0(void) {
    	static uint8_t x2 = 1U;
	uint32_t x3 = 7U;
	volatile int32_t t0 = -1;

    t0 = (x1!=(x2!=(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x7 = 3U;
	volatile int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = 1015;

    t1 = (x5!=(x6!=(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	static int8_t x10 = -6;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 55252897LLU;
	int32_t t2 = -52;

    t2 = (x9!=(x10!=(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x15 = 6U;

    t3 = (x13!=(x14!=(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -6389311918740LL;
	int64_t x18 = 2036845596LL;
	int64_t x19 = INT64_MAX;
	static int16_t x20 = INT16_MAX;
	int32_t t4 = 532943696;

    t4 = (x17!=(x18!=(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 62U;
	static uint64_t x22 = 326783LLU;
	volatile uint32_t x24 = 94U;

    t5 = (x21!=(x22!=(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int64_t x26 = 439677021224412733LL;
	int8_t x27 = 15;
	uint32_t x28 = 9773U;

    t6 = (x25!=(x26!=(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -7912630;

    t7 = (x29!=(x30!=(x31!=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x35 = INT16_MAX;
	static uint64_t x36 = UINT64_MAX;
	static int32_t t8 = -822283;

    t8 = (x33!=(x34!=(x35!=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x38 = 1U;
	static uint8_t x39 = 19U;
	uint8_t x40 = 2U;

    t9 = (x37!=(x38!=(x39!=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 7;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = -1LL;
	static int32_t t10 = 116;

    t10 = (x41!=(x42!=(x43!=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 7;
	int16_t x48 = -1;
	volatile int32_t t11 = -1;

    t11 = (x45!=(x46!=(x47!=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MIN;
	int16_t x50 = 9864;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = 0U;
	int32_t t12 = -124630811;

    t12 = (x49!=(x50!=(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile uint64_t x54 = 4161153767LLU;
	uint64_t x55 = 403228408652LLU;
	int8_t x56 = 12;
	volatile int32_t t13 = 65639993;

    t13 = (x53!=(x54!=(x55!=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -817LL;
	int16_t x58 = INT16_MIN;
	volatile int16_t x59 = INT16_MIN;
	uint8_t x60 = 2U;
	int32_t t14 = 1025;

    t14 = (x57!=(x58!=(x59!=x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int16_t x63 = -7;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = -1;

    t15 = (x61!=(x62!=(x63!=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = -1;
	static volatile int16_t x67 = INT16_MIN;
	static volatile uint16_t x68 = UINT16_MAX;

    t16 = (x65!=(x66!=(x67!=x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	static volatile int8_t x70 = -2;
	int64_t x71 = INT64_MAX;
	volatile uint16_t x72 = 0U;
	static int32_t t17 = 1;

    t17 = (x69!=(x70!=(x71!=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x75 = 3735U;
	int8_t x76 = INT8_MAX;
	int32_t t18 = 9;

    t18 = (x73!=(x74!=(x75!=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	volatile uint8_t x78 = UINT8_MAX;
	volatile int8_t x80 = 54;
	volatile int32_t t19 = -1;

    t19 = (x77!=(x78!=(x79!=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	int32_t t20 = 10595;

    t20 = (x81!=(x82!=(x83!=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 7113U;
	int8_t x86 = INT8_MIN;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MAX;
	int32_t t21 = -663958;

    t21 = (x85!=(x86!=(x87!=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MIN;
	static int32_t x90 = -242393857;
	static int64_t x92 = -1LL;
	int32_t t22 = 328594;

    t22 = (x89!=(x90!=(x91!=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = 1;
	volatile int64_t x94 = -94LL;
	static volatile int16_t x95 = -1;
	int16_t x96 = INT16_MIN;

    t23 = (x93!=(x94!=(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	volatile int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -1;

    t24 = (x97!=(x98!=(x99!=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 1U;
	static int16_t x103 = -3;
	uint8_t x104 = 43U;
	static int32_t t25 = 7;

    t25 = (x101!=(x102!=(x103!=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	volatile int16_t x106 = -1;
	static int16_t x108 = 6;
	volatile int32_t t26 = 435454486;

    t26 = (x105!=(x106!=(x107!=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = -1LL;
	static volatile uint8_t x112 = UINT8_MAX;

    t27 = (x109!=(x110!=(x111!=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 405929137248170LLU;
	volatile int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = 77393569;

    t28 = (x113!=(x114!=(x115!=x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	volatile int32_t x118 = 9;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 3594;

    t29 = (x117!=(x118!=(x119!=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = 2U;
	int16_t x123 = -1;
	int16_t x124 = -1;
	volatile int32_t t30 = 1961984;

    t30 = (x121!=(x122!=(x123!=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = 29640643357609LL;
	volatile int16_t x127 = INT16_MAX;
	int32_t t31 = 15143298;

    t31 = (x125!=(x126!=(x127!=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = 0;
	int64_t x130 = 2LL;
	int64_t x131 = 1LL;
	static uint64_t x132 = 22123714009936LLU;
	int32_t t32 = -4343240;

    t32 = (x129!=(x130!=(x131!=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int16_t x134 = INT16_MIN;
	static volatile int64_t x135 = INT64_MAX;
	static int32_t x136 = INT32_MIN;

    t33 = (x133!=(x134!=(x135!=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int32_t x138 = -1666;
	static uint8_t x139 = 14U;
	static int8_t x140 = 12;
	static int32_t t34 = 3;

    t34 = (x137!=(x138!=(x139!=x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	volatile int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = 1825U;
	volatile int32_t t35 = -22509;

    t35 = (x141!=(x142!=(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	uint64_t x146 = UINT64_MAX;
	static uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 975016299719545355LLU;

    t36 = (x145!=(x146!=(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = UINT32_MAX;
	uint8_t x150 = UINT8_MAX;
	int16_t x152 = 0;
	int32_t t37 = 14754;

    t37 = (x149!=(x150!=(x151!=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = 142873938695591275LL;
	static int8_t x154 = -1;
	static int32_t x156 = -1;
	int32_t t38 = 152;

    t38 = (x153!=(x154!=(x155!=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -3707843LL;
	int16_t x158 = INT16_MAX;
	static int16_t x159 = INT16_MAX;
	volatile int32_t t39 = 4;

    t39 = (x157!=(x158!=(x159!=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 14783686U;
	uint64_t x164 = 5059621415LLU;
	int32_t t40 = 14558;

    t40 = (x161!=(x162!=(x163!=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 1902;
	volatile int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	int8_t x168 = 9;
	int32_t t41 = 9094463;

    t41 = (x165!=(x166!=(x167!=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MIN;
	int32_t x170 = -2987;
	uint64_t x171 = 11592269846LLU;
	int16_t x172 = -1695;
	volatile int32_t t42 = -1015509345;

    t42 = (x169!=(x170!=(x171!=x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	uint8_t x174 = 11U;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int32_t t43 = -1055613851;

    t43 = (x173!=(x174!=(x175!=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MAX;
	volatile int64_t x180 = -1LL;
	int32_t t44 = 1;

    t44 = (x177!=(x178!=(x179!=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 109176U;
	int64_t x183 = INT64_MIN;
	int16_t x184 = 6568;
	static int32_t t45 = 179499101;

    t45 = (x181!=(x182!=(x183!=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static volatile uint32_t x187 = UINT32_MAX;
	static volatile int8_t x188 = -2;
	volatile int32_t t46 = -2658355;

    t46 = (x185!=(x186!=(x187!=x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = 10U;
	int32_t x191 = -1337;
	static int64_t x192 = -1LL;
	static int32_t t47 = 75324;

    t47 = (x189!=(x190!=(x191!=x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = -1;
	volatile uint64_t x196 = 6089082243765770685LLU;
	volatile int32_t t48 = -1049572713;

    t48 = (x193!=(x194!=(x195!=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	uint8_t x198 = UINT8_MAX;
	volatile int64_t x199 = INT64_MIN;
	static uint16_t x200 = 1396U;
	volatile int32_t t49 = 1;

    t49 = (x197!=(x198!=(x199!=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 61241LL;
	uint8_t x202 = 2U;
	static uint64_t x203 = 1200LLU;
	uint8_t x204 = 1U;
	volatile int32_t t50 = -34420320;

    t50 = (x201!=(x202!=(x203!=x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = INT16_MIN;
	uint16_t x207 = 361U;
	int16_t x208 = INT16_MIN;
	static int32_t t51 = 26;

    t51 = (x205!=(x206!=(x207!=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = 0;
	uint16_t x211 = 20U;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t52 = -196;

    t52 = (x209!=(x210!=(x211!=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 833614733;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = -7341899;
	int32_t t53 = 0;

    t53 = (x213!=(x214!=(x215!=x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x219 = 0U;
	int32_t t54 = -1;

    t54 = (x217!=(x218!=(x219!=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	uint16_t x224 = 12146U;
	static volatile int32_t t55 = 10;

    t55 = (x221!=(x222!=(x223!=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 12391LLU;
	int64_t x226 = INT64_MAX;
	int64_t x227 = 0LL;
	int8_t x228 = -1;
	volatile int32_t t56 = 3026124;

    t56 = (x225!=(x226!=(x227!=x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = 3754LL;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	static int32_t t57 = 399865215;

    t57 = (x229!=(x230!=(x231!=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 16103;
	uint8_t x234 = UINT8_MAX;
	volatile int64_t x235 = INT64_MIN;
	static volatile int32_t t58 = 118;

    t58 = (x233!=(x234!=(x235!=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = -36247;
	static volatile int16_t x240 = INT16_MIN;
	int32_t t59 = -26750459;

    t59 = (x237!=(x238!=(x239!=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 2802075063LLU;
	int64_t x242 = 1168023492251666LL;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 268692482;

    t60 = (x241!=(x242!=(x243!=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	uint8_t x246 = 4U;
	int8_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = 1430;

    t61 = (x245!=(x246!=(x247!=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	uint64_t x250 = 2283719934674LLU;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;

    t62 = (x249!=(x250!=(x251!=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	int64_t x255 = -1LL;
	volatile uint64_t x256 = 25805741LLU;
	volatile int32_t t63 = -66484893;

    t63 = (x253!=(x254!=(x255!=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 2076911079710624953LLU;
	uint8_t x258 = 1U;
	volatile uint8_t x259 = 11U;
	uint64_t x260 = UINT64_MAX;

    t64 = (x257!=(x258!=(x259!=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	int64_t x263 = -1LL;
	static uint16_t x264 = UINT16_MAX;
	int32_t t65 = -88344997;

    t65 = (x261!=(x262!=(x263!=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 187;
	uint16_t x266 = 98U;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = 16500818;

    t66 = (x265!=(x266!=(x267!=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	static int16_t x270 = -90;
	int64_t x271 = -62227511535685400LL;
	int32_t t67 = -12515138;

    t67 = (x269!=(x270!=(x271!=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -8221372350LL;
	int64_t x274 = INT64_MAX;
	uint8_t x275 = 82U;
	volatile int32_t t68 = -56363;

    t68 = (x273!=(x274!=(x275!=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x278 = INT8_MIN;
	uint8_t x279 = 3U;
	volatile int32_t t69 = -39535;

    t69 = (x277!=(x278!=(x279!=x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = -21;
	static int64_t x283 = -3480096050464LL;
	static uint32_t x284 = 32U;
	int32_t t70 = -10529391;

    t70 = (x281!=(x282!=(x283!=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = -1;
	static uint8_t x286 = 1U;
	static int8_t x287 = 1;
	int8_t x288 = -1;

    t71 = (x285!=(x286!=(x287!=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = INT8_MIN;
	int64_t x291 = 636126984827LL;
	volatile int64_t x292 = INT64_MIN;
	int32_t t72 = -425;

    t72 = (x289!=(x290!=(x291!=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int8_t x294 = -14;
	static volatile int32_t t73 = 12;

    t73 = (x293!=(x294!=(x295!=x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int16_t x299 = INT16_MIN;
	int16_t x300 = -1;

    t74 = (x297!=(x298!=(x299!=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	volatile int32_t t75 = 1386;

    t75 = (x301!=(x302!=(x303!=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 5LLU;
	static volatile int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -207501449;

    t76 = (x305!=(x306!=(x307!=x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = 441U;
	volatile int32_t t77 = -1895;

    t77 = (x309!=(x310!=(x311!=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x314 = INT16_MAX;
	static int32_t x316 = 1759081;

    t78 = (x313!=(x314!=(x315!=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = UINT16_MAX;
	static int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 409365427;

    t79 = (x317!=(x318!=(x319!=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	static uint32_t x322 = 3826392U;
	int16_t x323 = -1806;
	volatile int32_t t80 = 39;

    t80 = (x321!=(x322!=(x323!=x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -5;
	volatile int32_t x326 = INT32_MIN;
	uint16_t x327 = 137U;
	int32_t x328 = 2578;

    t81 = (x325!=(x326!=(x327!=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 3376;
	int16_t x330 = -6632;
	int32_t x331 = -1;
	int16_t x332 = -1913;

    t82 = (x329!=(x330!=(x331!=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x335 = 15151U;
	uint8_t x336 = UINT8_MAX;
	static int32_t t83 = 1021548736;

    t83 = (x333!=(x334!=(x335!=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x339 = -50678592172521014LL;
	volatile uint8_t x340 = 7U;
	volatile int32_t t84 = 99600721;

    t84 = (x337!=(x338!=(x339!=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 450;

    t85 = (x341!=(x342!=(x343!=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = -10588923922701533LL;
	uint16_t x347 = UINT16_MAX;
	static int8_t x348 = 1;
	int32_t t86 = 64350811;

    t86 = (x345!=(x346!=(x347!=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = 9754;
	uint8_t x350 = 7U;
	uint16_t x351 = 1U;
	int8_t x352 = INT8_MIN;

    t87 = (x349!=(x350!=(x351!=x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = 1;
	int32_t t88 = -33;

    t88 = (x353!=(x354!=(x355!=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 34258LL;
	volatile int8_t x358 = -1;
	volatile int32_t t89 = -3149729;

    t89 = (x357!=(x358!=(x359!=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = 8241763LL;
	volatile uint8_t x363 = 3U;
	uint64_t x364 = 6940277717253LLU;

    t90 = (x361!=(x362!=(x363!=x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = INT16_MAX;
	static volatile uint32_t x366 = 0U;
	int32_t t91 = 4;

    t91 = (x365!=(x366!=(x367!=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x369 = 62U;
	int32_t x370 = 56571840;
	uint16_t x371 = 16U;
	int32_t t92 = 4;

    t92 = (x369!=(x370!=(x371!=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = 25;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 1400U;
	int32_t t93 = 268703;

    t93 = (x373!=(x374!=(x375!=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	int16_t x378 = -1;
	static uint16_t x379 = UINT16_MAX;
	volatile int32_t x380 = -1;
	int32_t t94 = -87107897;

    t94 = (x377!=(x378!=(x379!=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x384 = -1;
	int32_t t95 = 8509849;

    t95 = (x381!=(x382!=(x383!=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 2LL;
	uint16_t x386 = 921U;
	int64_t x387 = 199754754LL;
	volatile int32_t t96 = -451695727;

    t96 = (x385!=(x386!=(x387!=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 2U;
	uint8_t x390 = 1U;
	uint64_t x391 = UINT64_MAX;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t97 = 114;

    t97 = (x389!=(x390!=(x391!=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	uint64_t x395 = 1333451991313156LLU;
	int32_t t98 = -57356;

    t98 = (x393!=(x394!=(x395!=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	static uint16_t x398 = 1500U;
	uint8_t x399 = 0U;
	int64_t x400 = INT64_MIN;
	static int32_t t99 = -48150342;

    t99 = (x397!=(x398!=(x399!=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;
	volatile int32_t t100 = -3026;

    t100 = (x401!=(x402!=(x403!=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	int8_t x407 = -8;

    t101 = (x405!=(x406!=(x407!=x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = INT8_MAX;
	int16_t x410 = -1;
	uint8_t x412 = 30U;
	volatile int32_t t102 = -629683990;

    t102 = (x409!=(x410!=(x411!=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	volatile int16_t x416 = -1;
	volatile int32_t t103 = -6999;

    t103 = (x413!=(x414!=(x415!=x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = UINT32_MAX;
	volatile uint32_t x419 = UINT32_MAX;
	static int8_t x420 = -1;
	static volatile int32_t t104 = 368609837;

    t104 = (x417!=(x418!=(x419!=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 25U;
	uint8_t x422 = 0U;
	volatile uint32_t x423 = UINT32_MAX;
	static volatile int64_t x424 = 171618974LL;
	int32_t t105 = -21020;

    t105 = (x421!=(x422!=(x423!=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 1U;
	int64_t x426 = -1LL;
	static uint64_t x427 = UINT64_MAX;
	volatile int32_t t106 = 37727;

    t106 = (x425!=(x426!=(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 3176U;
	uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 66U;
	uint16_t x432 = 85U;

    t107 = (x429!=(x430!=(x431!=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint16_t x434 = 773U;
	volatile int8_t x435 = -4;
	uint64_t x436 = 112LLU;
	static volatile int32_t t108 = 176506;

    t108 = (x433!=(x434!=(x435!=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	uint16_t x439 = 203U;
	volatile int64_t x440 = INT64_MAX;
	static int32_t t109 = 328284;

    t109 = (x437!=(x438!=(x439!=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = 8302256697LLU;
	volatile int64_t x443 = 775808064005LL;
	uint32_t x444 = UINT32_MAX;

    t110 = (x441!=(x442!=(x443!=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = -78779588;
	volatile int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;
	volatile int32_t t111 = -97;

    t111 = (x445!=(x446!=(x447!=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x451 = 0;
	int16_t x452 = 1;
	volatile int32_t t112 = 8125;

    t112 = (x449!=(x450!=(x451!=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = -2161436971383LL;
	int64_t x454 = INT64_MIN;
	static int32_t x455 = INT32_MAX;
	static int8_t x456 = 4;
	volatile int32_t t113 = -29296;

    t113 = (x453!=(x454!=(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = -14374;
	volatile int32_t x459 = INT32_MIN;
	static int8_t x460 = 5;
	int32_t t114 = -35761019;

    t114 = (x457!=(x458!=(x459!=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = -1LL;
	int32_t x464 = -1;
	int32_t t115 = 1;

    t115 = (x461!=(x462!=(x463!=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = -1;
	volatile int32_t x468 = -97;

    t116 = (x465!=(x466!=(x467!=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MAX;
	volatile int32_t x472 = 24;
	int32_t t117 = -85;

    t117 = (x469!=(x470!=(x471!=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 49;
	int64_t x474 = -24111728249326192LL;
	volatile uint32_t x475 = UINT32_MAX;
	int8_t x476 = 4;
	int32_t t118 = -98;

    t118 = (x473!=(x474!=(x475!=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MAX;
	int16_t x479 = INT16_MIN;
	int32_t x480 = -1;

    t119 = (x477!=(x478!=(x479!=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x481 = -1;
	volatile int8_t x483 = INT8_MIN;
	volatile int8_t x484 = INT8_MIN;
	int32_t t120 = 20513;

    t120 = (x481!=(x482!=(x483!=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	uint16_t x486 = UINT16_MAX;
	int32_t x487 = INT32_MIN;
	static int64_t x488 = -159411LL;
	volatile int32_t t121 = -5188;

    t121 = (x485!=(x486!=(x487!=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x491 = -1;
	static int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 31547;

    t122 = (x489!=(x490!=(x491!=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -2761;
	int8_t x494 = 11;
	uint32_t x495 = 3335U;
	volatile int64_t x496 = INT64_MIN;
	static volatile int32_t t123 = 398738383;

    t123 = (x493!=(x494!=(x495!=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MAX;
	uint8_t x499 = 1U;
	int32_t t124 = 509766;

    t124 = (x497!=(x498!=(x499!=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = 24700134U;
	int8_t x502 = INT8_MIN;
	volatile uint16_t x503 = 2732U;
	volatile int32_t x504 = INT32_MAX;
	volatile int32_t t125 = -41;

    t125 = (x501!=(x502!=(x503!=x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	volatile int32_t x506 = 1;
	int8_t x507 = INT8_MIN;
	static volatile int32_t t126 = -35898;

    t126 = (x505!=(x506!=(x507!=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x509 = 49381;
	int8_t x511 = -1;
	volatile int32_t t127 = 6;

    t127 = (x509!=(x510!=(x511!=x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	static volatile uint32_t x514 = 721U;
	int16_t x515 = -229;
	volatile uint8_t x516 = 97U;
	static int32_t t128 = 874111419;

    t128 = (x513!=(x514!=(x515!=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	static volatile uint32_t x518 = 513225752U;
	int64_t x520 = INT64_MIN;
	int32_t t129 = 431;

    t129 = (x517!=(x518!=(x519!=x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	int64_t x522 = -1486301353011055LL;
	int32_t x523 = -1;
	uint8_t x524 = 21U;

    t130 = (x521!=(x522!=(x523!=x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int64_t x526 = -1LL;
	int8_t x527 = INT8_MIN;
	static int64_t x528 = INT64_MIN;
	volatile int32_t t131 = -27434858;

    t131 = (x525!=(x526!=(x527!=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = 1;
	static int16_t x530 = 1;
	static uint8_t x531 = UINT8_MAX;
	int32_t t132 = -426;

    t132 = (x529!=(x530!=(x531!=x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = INT8_MAX;
	volatile uint16_t x534 = 443U;
	uint32_t x535 = UINT32_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t133 = -962;

    t133 = (x533!=(x534!=(x535!=x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	volatile uint16_t x539 = 0U;
	int64_t x540 = -1LL;

    t134 = (x537!=(x538!=(x539!=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x543 = -2;
	int32_t t135 = 36161;

    t135 = (x541!=(x542!=(x543!=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile uint8_t x546 = 16U;
	uint32_t x547 = UINT32_MAX;
	static int8_t x548 = -55;
	volatile int32_t t136 = -50377621;

    t136 = (x545!=(x546!=(x547!=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 70003;
	int8_t x551 = INT8_MAX;
	volatile int64_t x552 = INT64_MIN;
	volatile int32_t t137 = 27756365;

    t137 = (x549!=(x550!=(x551!=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -1;
	int64_t x556 = INT64_MAX;
	static int32_t t138 = 282;

    t138 = (x553!=(x554!=(x555!=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint32_t x558 = UINT32_MAX;
	int64_t x559 = INT64_MAX;
	volatile int16_t x560 = -3;
	int32_t t139 = -1309298;

    t139 = (x557!=(x558!=(x559!=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 158U;
	static int16_t x563 = 126;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = -78938543;

    t140 = (x561!=(x562!=(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x566 = 905U;
	int16_t x567 = INT16_MIN;

    t141 = (x565!=(x566!=(x567!=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x570 = UINT16_MAX;
	volatile int32_t t142 = -4077556;

    t142 = (x569!=(x570!=(x571!=x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t t143 = -116094078;

    t143 = (x573!=(x574!=(x575!=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int8_t x578 = INT8_MAX;
	int16_t x579 = INT16_MAX;
	volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t144 = 59;

    t144 = (x577!=(x578!=(x579!=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 91U;
	int64_t x583 = -233723294LL;

    t145 = (x581!=(x582!=(x583!=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	uint8_t x586 = 4U;
	uint64_t x587 = 36518348LLU;
	int8_t x588 = INT8_MIN;

    t146 = (x585!=(x586!=(x587!=x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x590 = 58040U;
	int64_t x591 = -1LL;
	uint16_t x592 = UINT16_MAX;
	int32_t t147 = 7282;

    t147 = (x589!=(x590!=(x591!=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint8_t x594 = 57U;
	uint8_t x595 = 0U;
	int16_t x596 = INT16_MIN;
	static volatile int32_t t148 = 34920507;

    t148 = (x593!=(x594!=(x595!=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	static int64_t x598 = 191549553LL;
	int16_t x599 = -1;
	static uint64_t x600 = 30271998949096239LLU;
	int32_t t149 = 597012;

    t149 = (x597!=(x598!=(x599!=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	uint32_t x602 = 9U;
	int32_t x603 = INT32_MIN;
	static volatile uint32_t x604 = 447403256U;
	volatile int32_t t150 = -47459793;

    t150 = (x601!=(x602!=(x603!=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	int8_t x608 = -1;
	int32_t t151 = -204012688;

    t151 = (x605!=(x606!=(x607!=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x609 = 9043U;
	volatile int32_t x610 = 4177;
	static volatile int32_t t152 = -86695;

    t152 = (x609!=(x610!=(x611!=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	volatile uint32_t x614 = 6U;
	volatile uint16_t x615 = 835U;
	uint8_t x616 = 19U;
	int32_t t153 = -939041;

    t153 = (x613!=(x614!=(x615!=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	uint64_t x618 = 6LLU;
	int8_t x619 = INT8_MAX;
	uint8_t x620 = 35U;
	int32_t t154 = 64369;

    t154 = (x617!=(x618!=(x619!=x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = INT32_MAX;
	uint64_t x622 = UINT64_MAX;
	uint16_t x623 = UINT16_MAX;
	static volatile int32_t x624 = INT32_MAX;

    t155 = (x621!=(x622!=(x623!=x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = -1;
	volatile int64_t x626 = 2902159615LL;
	int32_t x627 = -243;
	int8_t x628 = INT8_MIN;
	int32_t t156 = 154121632;

    t156 = (x625!=(x626!=(x627!=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 1U;
	static int32_t x630 = 0;
	int32_t x631 = -10;
	volatile int16_t x632 = INT16_MIN;

    t157 = (x629!=(x630!=(x631!=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x635 = UINT32_MAX;
	int64_t x636 = INT64_MIN;
	int32_t t158 = 3812;

    t158 = (x633!=(x634!=(x635!=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x638 = 6384392U;
	int64_t x639 = INT64_MAX;
	uint64_t x640 = UINT64_MAX;
	static int32_t t159 = 430801;

    t159 = (x637!=(x638!=(x639!=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x642 = 1;
	volatile uint16_t x643 = UINT16_MAX;
	volatile int8_t x644 = 1;
	volatile int32_t t160 = 106466081;

    t160 = (x641!=(x642!=(x643!=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -4;
	int16_t x646 = INT16_MIN;
	int64_t x647 = INT64_MAX;
	int32_t x648 = -1;
	volatile int32_t t161 = 1906632;

    t161 = (x645!=(x646!=(x647!=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = 39;
	volatile int32_t x651 = INT32_MIN;
	volatile uint64_t x652 = UINT64_MAX;
	int32_t t162 = 1;

    t162 = (x649!=(x650!=(x651!=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static int8_t x654 = INT8_MIN;
	int8_t x656 = -39;
	int32_t t163 = -3966675;

    t163 = (x653!=(x654!=(x655!=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MAX;
	int16_t x658 = 8320;
	uint16_t x659 = 404U;
	int8_t x660 = -1;
	volatile int32_t t164 = -8543;

    t164 = (x657!=(x658!=(x659!=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	volatile int64_t x662 = -2105716191455710620LL;
	static uint16_t x663 = 16282U;
	uint32_t x664 = UINT32_MAX;
	volatile int32_t t165 = -793824;

    t165 = (x661!=(x662!=(x663!=x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	uint64_t x667 = 349930714034LLU;
	static int64_t x668 = INT64_MIN;
	volatile int32_t t166 = 979050673;

    t166 = (x665!=(x666!=(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -126039008LL;
	int8_t x671 = -14;
	static uint8_t x672 = 4U;

    t167 = (x669!=(x670!=(x671!=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	volatile int8_t x675 = -61;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = 42341066;

    t168 = (x673!=(x674!=(x675!=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 85473U;
	int32_t x678 = -1;
	volatile int16_t x679 = INT16_MIN;
	static uint64_t x680 = 6812667LLU;
	static volatile int32_t t169 = -2996897;

    t169 = (x677!=(x678!=(x679!=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	int64_t x682 = INT64_MIN;
	int8_t x683 = -1;
	static volatile int16_t x684 = INT16_MAX;
	volatile int32_t t170 = -406901132;

    t170 = (x681!=(x682!=(x683!=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MAX;
	volatile int32_t t171 = 1;

    t171 = (x685!=(x686!=(x687!=x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MAX;
	volatile int64_t x691 = INT64_MIN;
	static volatile int16_t x692 = -1;
	volatile int32_t t172 = 329;

    t172 = (x689!=(x690!=(x691!=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = 951;
	int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MIN;
	int32_t x696 = 666;
	int32_t t173 = 1820858;

    t173 = (x693!=(x694!=(x695!=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	int64_t x698 = -1LL;
	uint8_t x699 = 2U;
	static int64_t x700 = -1LL;

    t174 = (x697!=(x698!=(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = 81U;
	static int8_t x702 = INT8_MIN;
	uint32_t x703 = 3862404U;
	int32_t x704 = INT32_MIN;
	int32_t t175 = 194;

    t175 = (x701!=(x702!=(x703!=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -440;
	int64_t x707 = 7LL;
	int8_t x708 = -30;
	int32_t t176 = -920;

    t176 = (x705!=(x706!=(x707!=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x710 = -1LL;
	static volatile int16_t x711 = 10;
	uint32_t x712 = 475U;
	volatile int32_t t177 = -827;

    t177 = (x709!=(x710!=(x711!=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	int64_t x714 = -9172797LL;
	volatile uint16_t x715 = UINT16_MAX;
	static int32_t t178 = 17;

    t178 = (x713!=(x714!=(x715!=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = UINT32_MAX;
	static uint8_t x718 = 117U;
	int16_t x719 = -310;
	int16_t x720 = INT16_MAX;

    t179 = (x717!=(x718!=(x719!=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 2149U;
	uint32_t x723 = 1U;
	int8_t x724 = INT8_MAX;
	int32_t t180 = -7;

    t180 = (x721!=(x722!=(x723!=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = INT64_MIN;
	volatile int16_t x726 = 0;
	int8_t x727 = -1;
	uint32_t x728 = 1235531U;
	static volatile int32_t t181 = -7369;

    t181 = (x725!=(x726!=(x727!=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	int64_t x731 = -1LL;
	static int64_t x732 = -36986237LL;
	static int32_t t182 = -7830;

    t182 = (x729!=(x730!=(x731!=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x734 = INT16_MIN;
	int8_t x736 = -47;
	int32_t t183 = 1;

    t183 = (x733!=(x734!=(x735!=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = INT16_MIN;
	static uint32_t x740 = 456U;
	int32_t t184 = -20;

    t184 = (x737!=(x738!=(x739!=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -161744636740LL;
	int16_t x742 = INT16_MIN;
	uint16_t x743 = UINT16_MAX;
	int64_t x744 = -1LL;
	volatile int32_t t185 = -1348;

    t185 = (x741!=(x742!=(x743!=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int32_t x746 = -1;
	volatile uint32_t x747 = 0U;
	volatile int32_t t186 = 12;

    t186 = (x745!=(x746!=(x747!=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static uint16_t x750 = UINT16_MAX;
	volatile uint8_t x751 = 6U;
	volatile int16_t x752 = INT16_MIN;

    t187 = (x749!=(x750!=(x751!=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x754 = 10LLU;
	int32_t x755 = INT32_MAX;
	volatile int32_t x756 = -1;
	int32_t t188 = -12721;

    t188 = (x753!=(x754!=(x755!=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x758 = 1U;
	volatile uint32_t x760 = UINT32_MAX;
	volatile int32_t t189 = -4928;

    t189 = (x757!=(x758!=(x759!=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	int32_t x762 = -9935;
	int16_t x763 = -1;
	int32_t t190 = 259763;

    t190 = (x761!=(x762!=(x763!=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 4685250LLU;
	int8_t x766 = 1;
	int16_t x767 = INT16_MIN;
	volatile int32_t x768 = -1;
	volatile int32_t t191 = 13532457;

    t191 = (x765!=(x766!=(x767!=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = 15766U;
	int32_t x771 = -386;
	int64_t x772 = INT64_MAX;
	static int32_t t192 = -9281;

    t192 = (x769!=(x770!=(x771!=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = -1;
	int8_t x775 = -3;
	volatile uint64_t x776 = UINT64_MAX;
	int32_t t193 = 105;

    t193 = (x773!=(x774!=(x775!=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	static uint32_t x778 = UINT32_MAX;
	int16_t x779 = INT16_MAX;
	volatile int64_t x780 = 0LL;
	volatile int32_t t194 = -1;

    t194 = (x777!=(x778!=(x779!=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	uint8_t x782 = UINT8_MAX;
	static int8_t x784 = -1;
	volatile int32_t t195 = 1158992;

    t195 = (x781!=(x782!=(x783!=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 80U;
	int64_t x786 = INT64_MIN;
	static uint64_t x787 = UINT64_MAX;
	volatile int16_t x788 = INT16_MAX;

    t196 = (x785!=(x786!=(x787!=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 238200;
	static int32_t x790 = INT32_MAX;
	static int32_t x791 = -1;
	uint8_t x792 = 7U;
	volatile int32_t t197 = 1;

    t197 = (x789!=(x790!=(x791!=x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = UINT32_MAX;
	static int16_t x794 = 251;
	int64_t x795 = -1LL;
	int32_t t198 = -6771;

    t198 = (x793!=(x794!=(x795!=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x797 = 13U;
	uint16_t x798 = 6136U;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t199 = 560908822;

    t199 = (x797!=(x798!=(x799!=x800)));

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

