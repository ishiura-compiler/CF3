
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

static volatile int16_t x4 = INT16_MAX;
static uint8_t x6 = 11U;
volatile int16_t x12 = INT16_MIN;
int16_t x20 = INT16_MAX;
volatile int32_t t4 = -455;
static int16_t x24 = -346;
int32_t t5 = -13361;
int8_t x26 = 0;
static int64_t x33 = INT64_MIN;
volatile int32_t t8 = -93242;
static volatile int16_t x41 = INT16_MAX;
static uint16_t x44 = 0U;
int64_t x46 = -1LL;
static uint8_t x47 = 122U;
static volatile uint16_t x64 = 2U;
int32_t x65 = 18;
volatile int32_t t16 = 10225117;
int8_t x72 = 1;
int32_t t18 = -1;
int16_t x80 = -123;
int64_t x87 = 2234LL;
volatile int8_t x96 = INT8_MIN;
static int32_t t25 = 99;
int64_t x106 = -1LL;
int64_t x110 = INT64_MIN;
volatile int32_t t28 = -268945;
int16_t x117 = -13;
static volatile int32_t t29 = 501;
int8_t x124 = -20;
int64_t x125 = INT64_MIN;
static uint32_t x127 = UINT32_MAX;
int64_t x131 = INT64_MAX;
int64_t x133 = INT64_MIN;
static volatile int32_t t33 = 1;
int16_t x138 = INT16_MIN;
volatile int16_t x141 = INT16_MAX;
volatile uint8_t x142 = 2U;
uint64_t x143 = 111LLU;
static volatile int32_t t36 = 65202733;
static int32_t t38 = 174;
int16_t x162 = INT16_MIN;
int64_t x164 = INT64_MIN;
int32_t t43 = 16655605;
int8_t x181 = INT8_MAX;
int8_t x186 = INT8_MAX;
int16_t x190 = -1;
volatile uint64_t x196 = UINT64_MAX;
static volatile uint16_t x199 = 30U;
volatile int32_t t49 = -1;
int16_t x201 = 60;
volatile int16_t x202 = -1;
uint32_t x203 = UINT32_MAX;
static uint8_t x206 = 6U;
int8_t x209 = INT8_MIN;
static int32_t t52 = -209437181;
int8_t x213 = -1;
volatile int32_t t53 = -110639318;
int16_t x217 = -1;
volatile int32_t t54 = 100;
int8_t x222 = INT8_MIN;
volatile int32_t t55 = 39559;
static volatile int64_t x227 = -38409637220063086LL;
int32_t x228 = INT32_MIN;
int32_t x231 = INT32_MIN;
int16_t x237 = -1;
uint32_t x246 = UINT32_MAX;
int16_t x247 = INT16_MAX;
uint16_t x248 = 1316U;
volatile int32_t t61 = 107340486;
int16_t x251 = 183;
static volatile uint64_t x252 = 311754981048LLU;
static int32_t t62 = 218355543;
int8_t x253 = -1;
static volatile int32_t t64 = 0;
int16_t x265 = INT16_MIN;
static int32_t t66 = -2545;
static uint8_t x277 = UINT8_MAX;
uint16_t x287 = UINT16_MAX;
volatile int32_t t74 = 108603;
int32_t x302 = -1;
uint8_t x310 = 1U;
static uint16_t x313 = 0U;
uint32_t x316 = 494992942U;
volatile int32_t t78 = -472197;
uint16_t x320 = UINT16_MAX;
int32_t x321 = INT32_MIN;
static int32_t t80 = 453387299;
uint8_t x325 = 50U;
int32_t t82 = -7454204;
volatile int32_t t87 = 876343;
volatile int32_t t88 = -9066;
volatile int64_t x360 = -1LL;
static volatile int16_t x363 = INT16_MIN;
int64_t x364 = -1LL;
volatile int32_t t90 = 525675;
volatile int32_t t91 = 7503492;
uint64_t x373 = 1494705LLU;
uint64_t x374 = 21943LLU;
int8_t x375 = 0;
volatile uint8_t x376 = 16U;
volatile uint16_t x386 = 7152U;
volatile int32_t t96 = -1002;
uint16_t x390 = 213U;
volatile int32_t x391 = 29954;
volatile int8_t x393 = -3;
uint16_t x397 = UINT16_MAX;
static volatile int64_t x398 = -1LL;
int8_t x400 = 23;
int32_t t100 = 554501;
int32_t x407 = -45;
int16_t x411 = -9;
static uint64_t x412 = 7913258858631LLU;
uint32_t x413 = UINT32_MAX;
uint8_t x414 = UINT8_MAX;
static int32_t x415 = 362294210;
int32_t t104 = 580735;
volatile int32_t t105 = -723;
volatile int8_t x429 = INT8_MIN;
int16_t x432 = INT16_MIN;
int16_t x436 = INT16_MIN;
int32_t x440 = INT32_MIN;
volatile int32_t t110 = 622133757;
uint32_t x446 = 0U;
uint32_t x449 = UINT32_MAX;
static volatile int8_t x454 = 10;
uint16_t x462 = 0U;
static int64_t x466 = 56985LL;
int32_t x470 = INT32_MIN;
static uint64_t x471 = 134685379LLU;
int32_t x479 = INT32_MIN;
volatile uint32_t x483 = 30829U;
uint64_t x488 = 108296488719036LLU;
volatile int32_t x492 = INT32_MAX;
static int16_t x494 = INT16_MIN;
static int8_t x505 = INT8_MIN;
int16_t x514 = -1;
int32_t x516 = INT32_MIN;
volatile int32_t t129 = -4218;
uint8_t x522 = UINT8_MAX;
volatile int32_t x526 = -1;
uint16_t x527 = 286U;
static int32_t x529 = INT32_MAX;
volatile int32_t t132 = 2767;
static int32_t t134 = -689211;
volatile uint8_t x545 = 3U;
int16_t x546 = INT16_MIN;
int8_t x547 = INT8_MIN;
int32_t t136 = 18047;
volatile int32_t t137 = 456433;
volatile int32_t t139 = -36;
static int32_t x563 = INT32_MAX;
int8_t x576 = -1;
volatile int32_t t143 = 393092626;
int32_t x583 = -1;
int32_t x591 = INT32_MIN;
uint16_t x599 = UINT16_MAX;
uint32_t x612 = 2U;
volatile int8_t x614 = -10;
uint16_t x619 = 3928U;
int32_t t154 = 694413350;
static int32_t t156 = 6552174;
int16_t x632 = -1;
uint16_t x637 = UINT16_MAX;
static volatile uint8_t x638 = 0U;
int32_t x640 = 58;
uint16_t x643 = 5U;
int32_t t161 = 5419;
static volatile int8_t x656 = -1;
uint64_t x662 = 115819LLU;
int16_t x665 = INT16_MAX;
int64_t x670 = INT64_MIN;
uint8_t x671 = 36U;
int32_t t167 = -18;
uint32_t x673 = UINT32_MAX;
volatile int8_t x677 = INT8_MIN;
uint8_t x682 = 13U;
volatile int8_t x688 = INT8_MAX;
static volatile int32_t t171 = -18;
volatile int32_t t172 = -53594062;
int8_t x694 = -1;
volatile int32_t x695 = INT32_MIN;
volatile int32_t t174 = 72;
uint16_t x701 = UINT16_MAX;
int64_t x705 = INT64_MIN;
volatile int32_t t177 = 56551527;
int32_t x714 = -1;
static int16_t x716 = INT16_MIN;
volatile int32_t t178 = -1805429;
int16_t x721 = INT16_MAX;
uint8_t x725 = 53U;
static int16_t x726 = INT16_MAX;
uint16_t x727 = 24U;
uint32_t x730 = 22798U;
int64_t x732 = 1144742767LL;
int16_t x739 = INT16_MAX;
int16_t x740 = INT16_MAX;
int64_t x744 = INT64_MIN;
volatile int32_t t186 = 36400;
static volatile int8_t x750 = INT8_MIN;
static volatile int32_t x751 = 783;
static int32_t t187 = 1091;
int64_t x761 = INT64_MIN;
int32_t x766 = -8235968;
int32_t t191 = -54092132;
int64_t x771 = INT64_MIN;
int16_t x781 = 243;
static uint64_t x783 = UINT64_MAX;
int64_t x784 = -120LL;
volatile int16_t x785 = INT16_MIN;
volatile int32_t t196 = 3543258;
static uint16_t x793 = UINT16_MAX;


void f0(void) {
    	static int16_t x1 = 1102;
	volatile int8_t x2 = -28;
	uint8_t x3 = 2U;
	volatile int32_t t0 = -3996127;

    t0 = ((x1^(x2>x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 2U;
	volatile int32_t t1 = 1894;

    t1 = ((x5^(x6>x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 547896972424246LL;
	int32_t x10 = -511;
	volatile int32_t x11 = INT32_MAX;
	int32_t t2 = 1;

    t2 = ((x9^(x10>x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 0;
	volatile int32_t x14 = 0;
	uint16_t x15 = UINT16_MAX;
	int64_t x16 = 1LL;
	static volatile int32_t t3 = -83759;

    t3 = ((x13^(x14>x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -15486;
	int8_t x18 = 1;
	uint64_t x19 = 535174400569870309LLU;

    t4 = ((x17^(x18>x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MAX;
	uint16_t x23 = 25U;

    t5 = ((x21^(x22>x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	static int32_t x27 = INT32_MIN;
	uint64_t x28 = 3101266566019LLU;
	int32_t t6 = -2;

    t6 = ((x25^(x26>x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 1LL;
	static uint16_t x30 = UINT16_MAX;
	static volatile int16_t x31 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -28;

    t7 = ((x29^(x30>x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = UINT16_MAX;
	static volatile uint16_t x35 = 3279U;
	int16_t x36 = -8;

    t8 = ((x33^(x34>x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile uint64_t x38 = 12912600LLU;
	uint8_t x39 = 108U;
	uint16_t x40 = 10U;
	int32_t t9 = 358743;

    t9 = ((x37^(x38>x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = -24;
	volatile int32_t t10 = 306;

    t10 = ((x41^(x42>x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -9030LL;
	volatile uint8_t x48 = 0U;
	int32_t t11 = -581881;

    t11 = ((x45^(x46>x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MAX;
	static int64_t x50 = 127444826LL;
	uint64_t x51 = 0LLU;
	static uint32_t x52 = UINT32_MAX;
	static volatile int32_t t12 = -1543930;

    t12 = ((x49^(x50>x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MAX;
	volatile int32_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -1;

    t13 = ((x53^(x54>x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = 3;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = -1;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 108158;

    t14 = ((x57^(x58>x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = UINT32_MAX;
	uint32_t x62 = 122U;
	volatile uint8_t x63 = 16U;
	int32_t t15 = 159070;

    t15 = ((x61^(x62>x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MIN;
	int8_t x67 = -1;
	uint64_t x68 = 832919445489142LLU;

    t16 = ((x65^(x66>x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = 177751604277LL;
	static int64_t x70 = 46322396648LL;
	int8_t x71 = 1;
	volatile int32_t t17 = -751194799;

    t17 = ((x69^(x70>x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = -116;
	uint16_t x74 = UINT16_MAX;
	uint16_t x75 = 21U;
	int64_t x76 = INT64_MAX;

    t18 = ((x73^(x74>x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	int8_t x78 = -1;
	static int32_t x79 = 32;
	volatile int32_t t19 = 47206;

    t19 = ((x77^(x78>x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int32_t x82 = 364553191;
	volatile int8_t x83 = INT8_MAX;
	int16_t x84 = 97;
	static int32_t t20 = -5;

    t20 = ((x81^(x82>x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	static uint32_t x88 = 51157U;
	volatile int32_t t21 = -12527;

    t21 = ((x85^(x86>x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = UINT8_MAX;
	static int16_t x90 = INT16_MAX;
	volatile int8_t x91 = INT8_MAX;
	uint32_t x92 = 87299U;
	static int32_t t22 = -13909547;

    t22 = ((x89^(x90>x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 0;
	static int32_t t23 = 2031733;

    t23 = ((x93^(x94>x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	static volatile int64_t x98 = INT64_MIN;
	static int8_t x99 = -1;
	int32_t x100 = INT32_MAX;
	int32_t t24 = -38228;

    t24 = ((x97^(x98>x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	volatile int32_t x102 = 11144;
	int8_t x103 = 0;
	volatile uint32_t x104 = 59208U;

    t25 = ((x101^(x102>x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	static volatile int32_t x107 = INT32_MIN;
	uint64_t x108 = 2361534291070337LLU;
	int32_t t26 = -412546809;

    t26 = ((x105^(x106>x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -1;
	int8_t x111 = -2;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -659080;

    t27 = ((x109^(x110>x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 77877091LL;
	int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MAX;
	int32_t x116 = 5;

    t28 = ((x113^(x114>x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	int32_t x119 = 1;
	int64_t x120 = INT64_MAX;

    t29 = ((x117^(x118>x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = UINT32_MAX;
	int64_t x122 = 177176518283LL;
	uint16_t x123 = 0U;
	volatile int32_t t30 = 0;

    t30 = ((x121^(x122>x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x126 = -1;
	static int32_t x128 = 20;
	static int32_t t31 = 0;

    t31 = ((x125^(x126>x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int16_t x132 = -1;
	int32_t t32 = 1;

    t32 = ((x129^(x130>x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x134 = UINT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MIN;

    t33 = ((x133^(x134>x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	static int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -712;

    t34 = ((x137^(x138>x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x144 = 1U;
	int32_t t35 = -55669;

    t35 = ((x141^(x142>x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 78U;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = 1;
	static int16_t x148 = INT16_MIN;

    t36 = ((x145^(x146>x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -114211LL;
	static volatile uint16_t x150 = 3653U;
	static int32_t x151 = -1;
	int16_t x152 = INT16_MAX;
	volatile int32_t t37 = 7;

    t37 = ((x149^(x150>x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = 84791315;
	static int64_t x154 = INT64_MIN;
	static int64_t x155 = INT64_MAX;
	uint16_t x156 = 1U;

    t38 = ((x153^(x154>x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 3626;
	int8_t x158 = INT8_MAX;
	volatile uint32_t x159 = 1662884U;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = 6068590;

    t39 = ((x157^(x158>x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = 22359LL;
	uint32_t x163 = 31U;
	volatile int32_t t40 = 4652633;

    t40 = ((x161^(x162>x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -15;
	static int16_t x166 = INT16_MAX;
	static int8_t x167 = 1;
	uint64_t x168 = 541453180447LLU;
	int32_t t41 = 51;

    t41 = ((x165^(x166>x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -199755378;
	static int64_t x170 = -1LL;
	volatile uint16_t x171 = 906U;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t42 = 3435392;

    t42 = ((x169^(x170>x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 6;
	int16_t x174 = 3110;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

    t43 = ((x173^(x174>x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 0U;
	volatile int16_t x178 = INT16_MAX;
	static int16_t x179 = -1;
	static int16_t x180 = 29;
	int32_t t44 = -13;

    t44 = ((x177^(x178>x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MAX;
	volatile int32_t x183 = -1888248;
	uint32_t x184 = 0U;
	volatile int32_t t45 = -32139820;

    t45 = ((x181^(x182>x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	int8_t x187 = -1;
	static uint32_t x188 = 140024534U;
	volatile int32_t t46 = -915;

    t46 = ((x185^(x186>x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 3;
	int8_t x191 = INT8_MAX;
	int64_t x192 = 3261LL;
	int32_t t47 = -5916;

    t47 = ((x189^(x190>x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -11;
	uint64_t x194 = UINT64_MAX;
	volatile uint16_t x195 = 54U;
	int32_t t48 = -2494;

    t48 = ((x193^(x194>x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MAX;
	int64_t x200 = INT64_MAX;

    t49 = ((x197^(x198>x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t x204 = UINT64_MAX;
	static int32_t t50 = 10199480;

    t50 = ((x201^(x202>x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = INT64_MIN;
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = 277;
	static volatile int32_t t51 = -7401258;

    t51 = ((x205^(x206>x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 16U;
	volatile int8_t x211 = -1;
	uint64_t x212 = UINT64_MAX;

    t52 = ((x209^(x210>x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MAX;
	uint16_t x215 = 61U;
	int32_t x216 = -1;

    t53 = ((x213^(x214>x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x218 = 91U;
	volatile int64_t x219 = -1LL;
	uint8_t x220 = 52U;

    t54 = ((x217^(x218>x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	uint16_t x223 = 373U;
	uint32_t x224 = 25031U;

    t55 = ((x221^(x222>x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	int32_t x226 = INT32_MIN;
	int32_t t56 = 48726;

    t56 = ((x225^(x226>x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 335806060U;
	int64_t x230 = INT64_MAX;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 491;

    t57 = ((x229^(x230>x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 1015418075220LLU;
	int32_t x234 = INT32_MIN;
	int32_t x235 = 1;
	int8_t x236 = 2;
	int32_t t58 = 6318;

    t58 = ((x233^(x234>x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MIN;
	int8_t x239 = -54;
	int8_t x240 = -1;
	volatile int32_t t59 = -175266998;

    t59 = ((x237^(x238>x239))!=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = INT16_MIN;
	uint16_t x242 = 445U;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = UINT8_MAX;
	int32_t t60 = -46;

    t60 = ((x241^(x242>x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;

    t61 = ((x245^(x246>x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	uint8_t x250 = 81U;

    t62 = ((x249^(x250>x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MIN;
	int16_t x255 = 1;
	uint64_t x256 = 7669572692721LLU;
	volatile int32_t t63 = -82221;

    t63 = ((x253^(x254>x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x257 = 57U;
	int64_t x258 = -8392642288LL;
	int8_t x259 = 62;
	uint8_t x260 = UINT8_MAX;

    t64 = ((x257^(x258>x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 39U;
	uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	int32_t t65 = 103;

    t65 = ((x261^(x262>x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MAX;
	int16_t x267 = 2;
	volatile int64_t x268 = -1LL;

    t66 = ((x265^(x266>x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = 1728;
	volatile uint32_t x270 = 5670U;
	static int64_t x271 = 2434527LL;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -1;

    t67 = ((x269^(x270>x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	static uint32_t x274 = 2U;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 6487LLU;
	volatile int32_t t68 = -61;

    t68 = ((x273^(x274>x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = 16087;
	int8_t x279 = INT8_MIN;
	int8_t x280 = 32;
	int32_t t69 = -1152488;

    t69 = ((x277^(x278>x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	uint16_t x282 = 305U;
	int32_t x283 = -1;
	int8_t x284 = -12;
	static int32_t t70 = 464;

    t70 = ((x281^(x282>x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -773560;

    t71 = ((x285^(x286>x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	uint32_t x291 = 7933177U;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x289^(x290>x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = -2779;
	int8_t x294 = -1;
	int64_t x295 = INT64_MIN;
	static uint8_t x296 = 7U;
	volatile int32_t t73 = 1;

    t73 = ((x293^(x294>x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int16_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;

    t74 = ((x297^(x298>x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -1;
	int32_t x303 = -3288547;
	volatile uint32_t x304 = 241905U;
	volatile int32_t t75 = -1;

    t75 = ((x301^(x302>x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = -1;
	int64_t x306 = -265368244796386LL;
	static int16_t x307 = INT16_MAX;
	static int32_t x308 = -1;
	int32_t t76 = 13;

    t76 = ((x305^(x306>x307))!=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x309 = UINT64_MAX;
	int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -28196648;

    t77 = ((x309^(x310>x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = -1;
	uint16_t x315 = 1131U;

    t78 = ((x313^(x314>x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -9566;
	static volatile int8_t x318 = -1;
	volatile uint16_t x319 = 35U;
	volatile int32_t t79 = -1;

    t79 = ((x317^(x318>x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = INT16_MIN;
	uint32_t x323 = 3959U;
	static volatile uint16_t x324 = 8U;

    t80 = ((x321^(x322>x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile int64_t x328 = 7916274831090LL;
	volatile int32_t t81 = -461;

    t81 = ((x325^(x326>x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	int8_t x330 = -2;
	static int32_t x331 = -1;
	volatile int32_t x332 = 3011;

    t82 = ((x329^(x330>x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 54U;
	static int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	static uint8_t x336 = 60U;
	volatile int32_t t83 = 7383;

    t83 = ((x333^(x334>x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -1;
	int16_t x338 = INT16_MAX;
	static uint16_t x339 = 1225U;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = 678584826;

    t84 = ((x337^(x338>x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = -6;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 349U;
	int32_t t85 = 14580506;

    t85 = ((x341^(x342>x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 469U;
	volatile int32_t x346 = 511543;
	int8_t x347 = 1;
	uint8_t x348 = 123U;
	int32_t t86 = -231484948;

    t86 = ((x345^(x346>x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	volatile int8_t x350 = -1;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;

    t87 = ((x349^(x350>x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 1U;

    t88 = ((x353^(x354>x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = 15;
	int16_t x358 = -1;
	int8_t x359 = -1;
	int32_t t89 = -3;

    t89 = ((x357^(x358>x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 14047;
	volatile int32_t x362 = 7874;

    t90 = ((x361^(x362>x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	volatile int32_t x366 = -47283;
	int16_t x367 = INT16_MAX;
	uint8_t x368 = 86U;

    t91 = ((x365^(x366>x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = -4490;
	int64_t x371 = 554756081236305LL;
	static int8_t x372 = -1;
	volatile int32_t t92 = 2506;

    t92 = ((x369^(x370>x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t t93 = 6943;

    t93 = ((x373^(x374>x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = -26048761477385245LL;
	volatile uint16_t x379 = 219U;
	int8_t x380 = 7;
	volatile int32_t t94 = 75;

    t94 = ((x377^(x378>x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -94;

    t95 = ((x381^(x382>x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 19U;
	volatile uint16_t x387 = 4U;
	volatile uint16_t x388 = 21U;

    t96 = ((x385^(x386>x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x389 = 1U;
	uint8_t x392 = 5U;
	volatile int32_t t97 = -7396;

    t97 = ((x389^(x390>x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x394 = -1LL;
	int64_t x395 = -40732LL;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 408929279;

    t98 = ((x393^(x394>x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x399 = INT16_MAX;
	int32_t t99 = 40173;

    t99 = ((x397^(x398>x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = 16U;
	static uint32_t x402 = 26496988U;
	int16_t x403 = INT16_MAX;
	static int32_t x404 = INT32_MAX;

    t100 = ((x401^(x402>x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -9;
	int16_t x406 = -1;
	int16_t x408 = -5440;
	int32_t t101 = -1491259;

    t101 = ((x405^(x406>x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 27084;
	static int32_t x410 = 6504594;
	volatile int32_t t102 = 430604403;

    t102 = ((x409^(x410>x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x416 = 0U;
	int32_t t103 = 49651105;

    t103 = ((x413^(x414>x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 10312075U;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	static uint16_t x420 = 1233U;

    t104 = ((x417^(x418>x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 64359493264932736LLU;
	static int16_t x422 = -3;
	static int8_t x423 = -2;
	static int8_t x424 = -1;

    t105 = ((x421^(x422>x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 0U;
	uint64_t x426 = 2929644LLU;
	static volatile uint8_t x427 = 21U;
	int64_t x428 = -1LL;
	volatile int32_t t106 = 147;

    t106 = ((x425^(x426>x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x430 = -1LL;
	int8_t x431 = INT8_MIN;
	volatile int32_t t107 = 0;

    t107 = ((x429^(x430>x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -1LL;
	uint64_t x434 = UINT64_MAX;
	static int64_t x435 = INT64_MIN;
	int32_t t108 = 7966;

    t108 = ((x433^(x434>x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	int64_t x438 = INT64_MAX;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t t109 = 20638;

    t109 = ((x437^(x438>x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	static uint32_t x442 = UINT32_MAX;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;

    t110 = ((x441^(x442>x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 64847295370847257LLU;
	uint64_t x447 = UINT64_MAX;
	volatile int16_t x448 = -1;
	static volatile int32_t t111 = 251168209;

    t111 = ((x445^(x446>x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x450 = INT16_MIN;
	uint32_t x451 = 111U;
	uint8_t x452 = 26U;
	int32_t t112 = 1;

    t112 = ((x449^(x450>x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	uint16_t x455 = UINT16_MAX;
	volatile int8_t x456 = INT8_MAX;
	int32_t t113 = -5320091;

    t113 = ((x453^(x454>x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = 1LLU;
	static int32_t x458 = INT32_MIN;
	int16_t x459 = -11303;
	static int64_t x460 = INT64_MIN;
	int32_t t114 = 235770;

    t114 = ((x457^(x458>x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 0U;
	static uint8_t x463 = 6U;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t115 = -82;

    t115 = ((x461^(x462>x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 0LL;
	int8_t x467 = -1;
	uint8_t x468 = UINT8_MAX;
	int32_t t116 = 15;

    t116 = ((x465^(x466>x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t117 = 12;

    t117 = ((x469^(x470>x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MIN;
	volatile int8_t x475 = -1;
	int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -259292;

    t118 = ((x473^(x474>x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = -1;
	uint16_t x478 = 165U;
	int64_t x480 = 73212250LL;
	static volatile int32_t t119 = -364104;

    t119 = ((x477^(x478>x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	int32_t t120 = 29114;

    t120 = ((x481^(x482>x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 1;
	static uint8_t x486 = UINT8_MAX;
	volatile int16_t x487 = 57;
	int32_t t121 = 1431883;

    t121 = ((x485^(x486>x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 0U;
	uint8_t x490 = 1U;
	int8_t x491 = -6;
	static volatile int32_t t122 = 15875495;

    t122 = ((x489^(x490>x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 50521157742345LLU;
	volatile int32_t x495 = INT32_MIN;
	volatile uint64_t x496 = UINT64_MAX;
	int32_t t123 = -1;

    t123 = ((x493^(x494>x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 1909088U;
	static uint16_t x498 = 9U;
	uint64_t x499 = 36808725963654LLU;
	volatile uint64_t x500 = UINT64_MAX;
	volatile int32_t t124 = 69;

    t124 = ((x497^(x498>x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 21099U;
	uint8_t x502 = UINT8_MAX;
	volatile int64_t x503 = 1872807438LL;
	int32_t x504 = -1;
	volatile int32_t t125 = 1692;

    t125 = ((x501^(x502>x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x506 = -24019;
	static int8_t x507 = INT8_MAX;
	int32_t x508 = -2069;
	volatile int32_t t126 = -45;

    t126 = ((x505^(x506>x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MAX;
	int8_t x511 = INT8_MAX;
	int16_t x512 = INT16_MAX;
	static volatile int32_t t127 = 2;

    t127 = ((x509^(x510>x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = INT64_MIN;
	int8_t x515 = 2;
	int32_t t128 = 44215;

    t128 = ((x513^(x514>x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MAX;
	static int32_t x519 = -1;
	static uint64_t x520 = UINT64_MAX;

    t129 = ((x517^(x518>x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	static int16_t x523 = -1;
	static int64_t x524 = -23149LL;
	volatile int32_t t130 = 6410661;

    t130 = ((x521^(x522>x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x525 = INT8_MAX;
	uint8_t x528 = 8U;
	static volatile int32_t t131 = 58;

    t131 = ((x525^(x526>x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x530 = -1;
	static int32_t x531 = -1;
	static int16_t x532 = INT16_MAX;

    t132 = ((x529^(x530>x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 3551362LLU;
	int64_t x534 = INT64_MIN;
	int32_t x535 = 17020271;
	static int16_t x536 = INT16_MIN;
	static int32_t t133 = -250709044;

    t133 = ((x533^(x534>x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -151;
	int64_t x538 = INT64_MIN;
	static int32_t x539 = -15777657;
	int32_t x540 = -1;

    t134 = ((x537^(x538>x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 177;
	uint64_t x542 = UINT64_MAX;
	int32_t x543 = -1;
	int8_t x544 = INT8_MAX;
	static volatile int32_t t135 = -39693669;

    t135 = ((x541^(x542>x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x548 = -1;

    t136 = ((x545^(x546>x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	static uint8_t x550 = 4U;
	int16_t x551 = INT16_MIN;
	volatile int32_t x552 = INT32_MIN;

    t137 = ((x549^(x550>x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	int16_t x554 = INT16_MAX;
	volatile int16_t x555 = -1;
	int64_t x556 = INT64_MAX;
	volatile int32_t t138 = -499;

    t138 = ((x553^(x554>x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 0U;
	uint64_t x558 = 7822187LLU;
	volatile int32_t x559 = INT32_MIN;
	int64_t x560 = -1LL;

    t139 = ((x557^(x558>x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 5932LLU;
	int16_t x562 = INT16_MIN;
	volatile int8_t x564 = -1;
	volatile int32_t t140 = -2084;

    t140 = ((x561^(x562>x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 31U;
	uint32_t x566 = 59U;
	int32_t x567 = INT32_MIN;
	static int16_t x568 = INT16_MAX;
	volatile int32_t t141 = -3538832;

    t141 = ((x565^(x566>x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1U;
	int64_t x570 = -57993LL;
	static int16_t x571 = -19;
	int64_t x572 = INT64_MIN;
	int32_t t142 = -13382541;

    t142 = ((x569^(x570>x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 7;
	static int64_t x574 = INT64_MIN;
	uint8_t x575 = 43U;

    t143 = ((x573^(x574>x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	static int8_t x578 = 21;
	volatile uint32_t x579 = 21U;
	volatile int32_t x580 = -20144;
	static int32_t t144 = 581;

    t144 = ((x577^(x578>x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = INT64_MIN;
	int64_t x584 = -3187401LL;
	static volatile int32_t t145 = 262;

    t145 = ((x581^(x582>x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	uint32_t x586 = 4704019U;
	uint8_t x587 = 0U;
	int32_t x588 = -1;
	int32_t t146 = -2392899;

    t146 = ((x585^(x586>x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x590 = 13862103076176LLU;
	int16_t x592 = INT16_MIN;
	static int32_t t147 = 43133;

    t147 = ((x589^(x590>x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x593 = -1;
	volatile int8_t x594 = -3;
	int8_t x595 = INT8_MAX;
	int64_t x596 = -4109943319485666LL;
	static int32_t t148 = -13062030;

    t148 = ((x593^(x594>x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile int16_t x598 = INT16_MIN;
	static int8_t x600 = INT8_MIN;
	volatile int32_t t149 = 173;

    t149 = ((x597^(x598>x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	int16_t x602 = 0;
	int8_t x603 = 17;
	int32_t x604 = -1;
	volatile int32_t t150 = 16042933;

    t150 = ((x601^(x602>x603))!=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x605 = 10946U;
	int8_t x606 = -1;
	int8_t x607 = -24;
	uint32_t x608 = 118U;
	volatile int32_t t151 = -8548;

    t151 = ((x605^(x606>x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = 1;
	static uint64_t x610 = UINT64_MAX;
	uint64_t x611 = 5464815070383LLU;
	int32_t t152 = -31761074;

    t152 = ((x609^(x610>x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x613 = 215U;
	int8_t x615 = -1;
	uint16_t x616 = 25U;
	int32_t t153 = -174580097;

    t153 = ((x613^(x614>x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = INT64_MIN;
	static uint32_t x620 = UINT32_MAX;

    t154 = ((x617^(x618>x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	uint32_t x622 = 6463U;
	uint64_t x623 = 7662256LLU;
	uint64_t x624 = 15984LLU;
	volatile int32_t t155 = -1;

    t155 = ((x621^(x622>x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -2;
	int32_t x626 = -103;
	uint8_t x627 = 11U;
	static uint32_t x628 = 14711279U;

    t156 = ((x625^(x626>x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 346U;
	volatile int64_t x630 = INT64_MIN;
	int64_t x631 = -1LL;
	volatile int32_t t157 = -36;

    t157 = ((x629^(x630>x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 20468502075085618LLU;
	uint64_t x634 = 470229632433LLU;
	int32_t x635 = INT32_MIN;
	static uint8_t x636 = UINT8_MAX;
	static volatile int32_t t158 = -683811;

    t158 = ((x633^(x634>x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x639 = 0;
	volatile int32_t t159 = -437;

    t159 = ((x637^(x638>x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	uint32_t x642 = UINT32_MAX;
	volatile uint16_t x644 = 2U;
	static int32_t t160 = -4104;

    t160 = ((x641^(x642>x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MAX;
	uint16_t x647 = 1U;
	static int32_t x648 = INT32_MIN;

    t161 = ((x645^(x646>x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = -1;
	int16_t x650 = 10;
	volatile int64_t x651 = -244293LL;
	static int8_t x652 = INT8_MAX;
	static int32_t t162 = 11139;

    t162 = ((x649^(x650>x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	int32_t x654 = 468070;
	static int64_t x655 = INT64_MIN;
	int32_t t163 = 21648;

    t163 = ((x653^(x654>x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x657 = 24U;
	int32_t x658 = 0;
	volatile int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;
	static int32_t t164 = 2;

    t164 = ((x657^(x658>x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -28;
	int16_t x663 = -1;
	volatile int64_t x664 = INT64_MAX;
	volatile int32_t t165 = 22486;

    t165 = ((x661^(x662>x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = 0U;
	uint32_t x667 = 0U;
	static int8_t x668 = INT8_MIN;
	int32_t t166 = 2384;

    t166 = ((x665^(x666>x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int32_t x672 = INT32_MIN;

    t167 = ((x669^(x670>x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = 1886818343568010632LLU;
	int16_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t168 = -3682;

    t168 = ((x673^(x674>x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x678 = INT8_MAX;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = 9;
	int32_t t169 = 273;

    t169 = ((x677^(x678>x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	static uint64_t x683 = 276129782586870LLU;
	uint8_t x684 = 27U;
	static int32_t t170 = -29;

    t170 = ((x681^(x682>x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int8_t x686 = -1;
	int16_t x687 = INT16_MAX;

    t171 = ((x685^(x686>x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	int16_t x690 = INT16_MAX;
	static volatile int64_t x691 = -1LL;
	static int32_t x692 = INT32_MIN;

    t172 = ((x689^(x690>x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = -1;
	volatile uint64_t x696 = UINT64_MAX;
	int32_t t173 = 0;

    t173 = ((x693^(x694>x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 5227U;
	int32_t x698 = INT32_MAX;
	int64_t x699 = INT64_MIN;
	int8_t x700 = -1;

    t174 = ((x697^(x698>x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x702 = 2317704962250LLU;
	uint8_t x703 = 14U;
	uint8_t x704 = 3U;
	volatile int32_t t175 = 1771;

    t175 = ((x701^(x702>x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x706 = 19LLU;
	volatile uint16_t x707 = UINT16_MAX;
	uint64_t x708 = UINT64_MAX;
	static int32_t t176 = -44437;

    t176 = ((x705^(x706>x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x709 = -19869193LL;
	int32_t x710 = -5715453;
	int64_t x711 = INT64_MIN;
	static volatile int64_t x712 = -31971606235834233LL;

    t177 = ((x709^(x710>x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 30U;
	volatile uint16_t x715 = UINT16_MAX;

    t178 = ((x713^(x714>x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = UINT8_MAX;
	uint8_t x719 = 6U;
	static int16_t x720 = -61;
	int32_t t179 = -689;

    t179 = ((x717^(x718>x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = INT64_MAX;
	uint16_t x723 = 13037U;
	uint8_t x724 = 7U;
	volatile int32_t t180 = -560276;

    t180 = ((x721^(x722>x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x728 = 0U;
	volatile int32_t t181 = -595;

    t181 = ((x725^(x726>x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = 979358808LL;
	uint8_t x731 = UINT8_MAX;
	volatile int32_t t182 = -118973;

    t182 = ((x729^(x730>x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 10U;
	uint32_t x734 = 915175453U;
	static uint8_t x735 = 0U;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t183 = -530576;

    t183 = ((x733^(x734>x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 2U;
	volatile uint32_t x738 = 1819163683U;
	int32_t t184 = -57;

    t184 = ((x737^(x738>x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = 4290287921664LL;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MAX;
	volatile int32_t t185 = 1972977;

    t185 = ((x741^(x742>x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = INT8_MIN;
	volatile int64_t x746 = -128703876581457LL;
	static int16_t x747 = 0;
	uint16_t x748 = UINT16_MAX;

    t186 = ((x745^(x746>x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = 31694U;
	int8_t x752 = INT8_MIN;

    t187 = ((x749^(x750>x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -40;
	uint32_t x754 = UINT32_MAX;
	uint64_t x755 = 15443947120LLU;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 1311978;

    t188 = ((x753^(x754>x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static int32_t x758 = INT32_MAX;
	int8_t x759 = 8;
	static int32_t x760 = INT32_MIN;
	static volatile int32_t t189 = -1;

    t189 = ((x757^(x758>x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MAX;
	volatile int32_t x763 = -1;
	int64_t x764 = INT64_MIN;
	int32_t t190 = -13540;

    t190 = ((x761^(x762>x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = 1008225U;
	volatile uint32_t x767 = 2U;
	int8_t x768 = -60;

    t191 = ((x765^(x766>x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	volatile int16_t x770 = INT16_MIN;
	volatile uint64_t x772 = 773878LLU;
	volatile int32_t t192 = -216;

    t192 = ((x769^(x770>x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	uint16_t x774 = UINT16_MAX;
	int64_t x775 = 123284LL;
	volatile int32_t x776 = INT32_MIN;
	static volatile int32_t t193 = -6294;

    t193 = ((x773^(x774>x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 1023324669U;
	uint16_t x778 = UINT16_MAX;
	uint32_t x779 = 54315342U;
	int64_t x780 = INT64_MIN;
	int32_t t194 = -6118776;

    t194 = ((x777^(x778>x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MAX;
	volatile int32_t t195 = -287372;

    t195 = ((x781^(x782>x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = INT64_MAX;
	static int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;

    t196 = ((x785^(x786>x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = 2LL;
	int32_t x790 = INT32_MIN;
	int16_t x791 = INT16_MIN;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 59;

    t197 = ((x789^(x790>x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MAX;
	int8_t x795 = INT8_MAX;
	int8_t x796 = -1;
	static int32_t t198 = 0;

    t198 = ((x793^(x794>x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MIN;
	int32_t x798 = -1;
	int64_t x799 = -1LL;
	uint32_t x800 = 1044154U;
	volatile int32_t t199 = 24512677;

    t199 = ((x797^(x798>x799))!=x800);

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

