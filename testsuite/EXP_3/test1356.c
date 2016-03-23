
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

static int32_t x1 = INT32_MIN;
uint8_t x10 = UINT8_MAX;
static volatile int32_t t3 = 112889;
int32_t x17 = -892698964;
int16_t x20 = INT16_MAX;
static volatile int32_t x22 = INT32_MAX;
int8_t x27 = -1;
int16_t x37 = INT16_MIN;
static int32_t x40 = INT32_MAX;
static volatile int8_t x43 = INT8_MIN;
int32_t t11 = -63;
static int64_t x53 = -283919537LL;
int32_t x62 = INT32_MIN;
int32_t t15 = -5;
static int32_t t16 = -258199;
volatile uint64_t x74 = 516794965234939LLU;
volatile int32_t x76 = INT32_MIN;
static int32_t x79 = INT32_MIN;
static volatile int32_t t19 = 0;
uint32_t x86 = UINT32_MAX;
uint16_t x88 = UINT16_MAX;
uint16_t x91 = 950U;
uint16_t x96 = UINT16_MAX;
volatile int32_t t23 = -565405692;
volatile int8_t x97 = INT8_MAX;
static uint8_t x98 = 6U;
int32_t t24 = 779;
int64_t x101 = INT64_MIN;
static int64_t x108 = -3858573956461987041LL;
static int64_t x109 = INT64_MAX;
volatile int64_t t27 = -253669LL;
uint64_t x126 = 983664758LLU;
int16_t x132 = INT16_MIN;
int64_t x133 = INT64_MAX;
static uint8_t x138 = UINT8_MAX;
uint64_t x142 = UINT64_MAX;
uint16_t x148 = UINT16_MAX;
volatile uint64_t t36 = 807268753002427561LLU;
int32_t t39 = 3249;
volatile int64_t t40 = -580878358340532882LL;
uint16_t x166 = 148U;
int16_t x182 = INT16_MIN;
uint16_t x184 = 159U;
volatile uint32_t t47 = 210977809U;
int32_t x193 = 808433;
uint8_t x194 = 1U;
int32_t x196 = -1;
static int64_t x201 = INT64_MIN;
int8_t x203 = 0;
volatile int64_t t50 = -38041438699559LL;
static int16_t x210 = INT16_MIN;
static int32_t t52 = 526;
uint16_t x217 = 13463U;
static int8_t x218 = INT8_MIN;
int8_t x227 = INT8_MIN;
static int64_t x233 = INT64_MAX;
uint16_t x235 = UINT16_MAX;
int8_t x236 = INT8_MIN;
uint64_t t58 = 16058635181328462LLU;
volatile int32_t x246 = INT32_MIN;
int16_t x247 = INT16_MIN;
static uint16_t x250 = 11U;
int16_t x252 = -1;
static int16_t x254 = -1;
int64_t x260 = INT64_MIN;
volatile int64_t x261 = INT64_MIN;
int16_t x263 = 5;
int16_t x271 = INT16_MAX;
int32_t t67 = 14;
int32_t x276 = INT32_MAX;
static int8_t x281 = INT8_MIN;
volatile int16_t x285 = -1703;
volatile int64_t t72 = -6344LL;
int8_t x300 = -1;
uint8_t x306 = UINT8_MAX;
volatile int8_t x307 = INT8_MAX;
int32_t x310 = -1;
int16_t x312 = 0;
volatile int32_t t77 = 41683969;
volatile uint64_t t78 = 309619755380860179LLU;
volatile int8_t x330 = INT8_MIN;
int32_t t82 = -268212337;
int32_t x343 = -1;
volatile uint64_t x344 = 230212287617LLU;
int32_t x346 = INT32_MIN;
int32_t x347 = INT32_MIN;
int32_t x348 = -1;
uint8_t x352 = 68U;
static int8_t x354 = INT8_MIN;
uint32_t x357 = 4497692U;
int16_t x359 = -1;
static int16_t x365 = INT16_MIN;
int32_t x370 = -103;
static uint8_t x374 = 9U;
uint16_t x386 = 464U;
static int32_t x391 = INT32_MAX;
int32_t x397 = INT32_MAX;
uint8_t x405 = 7U;
volatile int16_t x408 = -1;
int32_t x409 = 38560419;
int64_t x410 = -1LL;
static int16_t x415 = INT16_MIN;
int64_t x419 = INT64_MAX;
uint32_t x421 = 18048684U;
int64_t x422 = 107LL;
int32_t x428 = 27946160;
volatile int64_t t106 = -2131112751LL;
int64_t x430 = 2LL;
uint64_t x431 = UINT64_MAX;
volatile uint64_t x433 = 1218509953520762135LLU;
int8_t x435 = -1;
int32_t x440 = 1845;
static int32_t x444 = 0;
volatile int16_t x450 = INT16_MAX;
uint16_t x451 = 205U;
int32_t x455 = 23524;
volatile int8_t x459 = -1;
volatile int64_t x460 = INT64_MIN;
uint16_t x466 = 29487U;
volatile int32_t t116 = 53218983;
static int16_t x476 = 4;
volatile int32_t t120 = 116585;
int8_t x487 = 6;
uint64_t x488 = 403135851LLU;
uint16_t x490 = UINT16_MAX;
uint8_t x491 = 10U;
volatile uint64_t t122 = 2794LLU;
static int64_t x493 = -1LL;
volatile int16_t x500 = 0;
volatile int32_t t125 = 2029;
uint32_t t127 = 577767317U;
static int64_t x514 = 3703502604738638LL;
int16_t x516 = INT16_MIN;
static volatile int64_t t129 = -604458LL;
static int32_t x522 = 0;
static int8_t x525 = INT8_MIN;
volatile int64_t x529 = -541485573090703LL;
int32_t t133 = -5811;
volatile int16_t x543 = INT16_MAX;
volatile uint64_t x554 = UINT64_MAX;
volatile int8_t x557 = INT8_MAX;
int64_t x563 = -1451LL;
int8_t x567 = INT8_MIN;
volatile uint64_t x571 = 601028617LLU;
volatile uint32_t x576 = UINT32_MAX;
static volatile int8_t x580 = -1;
int64_t x583 = INT64_MIN;
volatile int16_t x588 = -212;
int32_t t147 = -219;
static int16_t x593 = INT16_MAX;
uint32_t x595 = 504435U;
int64_t x597 = INT64_MAX;
int16_t x598 = 3;
int8_t x600 = 2;
int32_t x602 = -39108;
int32_t x625 = INT32_MIN;
static int8_t x632 = 49;
int16_t x646 = INT16_MIN;
static int8_t x647 = INT8_MIN;
volatile int32_t t161 = 652803;
static int64_t x649 = -1LL;
uint32_t x650 = UINT32_MAX;
volatile int64_t t163 = 232551559664806LL;
uint64_t x660 = 3499509555082298879LLU;
static volatile int8_t x666 = INT8_MIN;
static int64_t t166 = -276077574991566LL;
int64_t x669 = -408LL;
int16_t x672 = INT16_MAX;
int16_t x676 = INT16_MIN;
uint8_t x681 = 108U;
volatile int16_t x682 = INT16_MIN;
static int64_t x687 = INT64_MIN;
uint16_t x691 = 4U;
int32_t t172 = -15526;
int64_t x693 = INT64_MIN;
int32_t x697 = INT32_MAX;
int16_t x698 = INT16_MAX;
int16_t x705 = -3495;
static int32_t x708 = INT32_MIN;
int64_t x713 = INT64_MAX;
int32_t t179 = -14452238;
static volatile uint64_t t181 = 6LLU;
static int32_t x737 = INT32_MIN;
volatile uint8_t x740 = UINT8_MAX;
uint64_t x745 = 15644LLU;
int32_t x746 = -313141996;
int32_t x749 = INT32_MIN;
int32_t x753 = 2;
int16_t x755 = INT16_MIN;
int32_t t188 = 1;
static uint16_t x758 = 0U;
volatile int32_t x761 = -1;
uint64_t x765 = 3686354LLU;
uint16_t x770 = 35U;
int32_t x774 = -1;
int64_t x778 = INT64_MIN;
volatile int64_t t194 = 2805206320166582717LL;
int32_t x782 = INT32_MAX;
uint8_t x784 = 3U;
uint32_t t197 = 3U;
int64_t x799 = -70375505181945467LL;
volatile int32_t t199 = 499927515;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 41U;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 567;

    t0 = ((x1|x2)&(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 42U;
	volatile uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	int32_t x8 = 25;
	static uint64_t t1 = 15674408LLU;

    t1 = ((x5|x6)&(x7!=x8));

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	volatile int8_t x11 = -1;
	static int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = 5522714;

    t2 = ((x9|x10)&(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = INT32_MAX;
	uint8_t x15 = 8U;
	volatile int32_t x16 = INT32_MIN;

    t3 = ((x13|x14)&(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x18 = 0LL;
	int32_t x19 = INT32_MAX;
	int64_t t4 = -5LL;

    t4 = ((x17|x18)&(x19!=x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 176U;
	uint32_t x23 = 55265818U;
	uint32_t x24 = 4478U;
	int32_t t5 = -72544685;

    t5 = ((x21|x22)&(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 3U;
	uint8_t x26 = 27U;
	uint8_t x28 = 1U;
	int32_t t6 = 142;

    t6 = ((x25|x26)&(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	uint32_t x30 = 110U;
	int32_t x31 = -1;
	int16_t x32 = INT16_MAX;
	uint32_t t7 = 1103U;

    t7 = ((x29|x30)&(x31!=x32));

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 316349720U;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -1;
	static volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 772196U;

    t8 = ((x33|x34)&(x35!=x36));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x38 = UINT8_MAX;
	int64_t x39 = 13150241LL;
	int32_t t9 = 5;

    t9 = ((x37|x38)&(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = 0;
	uint32_t x42 = 322536U;
	static int16_t x44 = INT16_MAX;
	uint32_t t10 = 121320U;

    t10 = ((x41|x42)&(x43!=x44));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static uint16_t x46 = UINT16_MAX;
	volatile int32_t x47 = INT32_MAX;
	uint64_t x48 = UINT64_MAX;

    t11 = ((x45|x46)&(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 0;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = 0LLU;
	int32_t x52 = INT32_MIN;
	int32_t t12 = -2313;

    t12 = ((x49|x50)&(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 1U;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 296U;
	volatile int64_t t13 = -504532898620383LL;

    t13 = ((x53|x54)&(x55!=x56));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	volatile int64_t x59 = INT64_MIN;
	static int32_t x60 = -1013960;
	volatile int32_t t14 = -1;

    t14 = ((x57|x58)&(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int32_t x64 = -3941;

    t15 = ((x61|x62)&(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 9;
	int8_t x66 = 8;
	int32_t x67 = -654220354;
	int64_t x68 = 10184611617LL;

    t16 = ((x65|x66)&(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 432738959955026206LL;
	static int8_t x70 = INT8_MIN;
	int16_t x71 = 3;
	int64_t x72 = -1LL;
	volatile int64_t t17 = 2012740452611964716LL;

    t17 = ((x69|x70)&(x71!=x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = UINT16_MAX;
	int64_t x75 = INT64_MIN;
	volatile uint64_t t18 = 161141785260473LLU;

    t18 = ((x73|x74)&(x75!=x76));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	static volatile int16_t x78 = 2;
	uint32_t x80 = UINT32_MAX;

    t19 = ((x77|x78)&(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int64_t x82 = -17LL;
	volatile int32_t x83 = INT32_MAX;
	static uint64_t x84 = 878056765LLU;
	int64_t t20 = 372481LL;

    t20 = ((x81|x82)&(x83!=x84));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile uint16_t x87 = 1U;
	uint32_t t21 = 11232U;

    t21 = ((x85|x86)&(x87!=x88));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	volatile uint16_t x92 = UINT16_MAX;
	static volatile int32_t t22 = -29953425;

    t22 = ((x89|x90)&(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	int32_t x94 = -1;
	uint16_t x95 = 25718U;

    t23 = ((x93|x94)&(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x99 = 8U;
	static int64_t x100 = -1LL;

    t24 = ((x97|x98)&(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x102 = INT16_MIN;
	int64_t x103 = 218294064148LL;
	static uint32_t x104 = 25325158U;
	static int64_t t25 = -8528380201601LL;

    t25 = ((x101|x102)&(x103!=x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 14LLU;
	int64_t x106 = INT64_MIN;
	static volatile int32_t x107 = 9134;
	volatile uint64_t t26 = 1182770LLU;

    t26 = ((x105|x106)&(x107!=x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = 3U;
	uint64_t x111 = 1LLU;
	uint64_t x112 = UINT64_MAX;

    t27 = ((x109|x110)&(x111!=x112));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	int32_t x114 = 3438;
	static int8_t x115 = INT8_MIN;
	uint32_t x116 = 49U;
	volatile int32_t t28 = 498216;

    t28 = ((x113|x114)&(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	uint64_t x119 = 404887905000682620LLU;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 36696;

    t29 = ((x117|x118)&(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = 1925571495LL;
	int8_t x123 = INT8_MAX;
	volatile uint32_t x124 = 139422437U;
	int64_t t30 = -10546LL;

    t30 = ((x121|x122)&(x123!=x124));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = 0U;
	uint64_t t31 = 760LLU;

    t31 = ((x125|x126)&(x127!=x128));

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int32_t x130 = -1;
	static uint8_t x131 = 4U;
	volatile int32_t t32 = -1071433;

    t32 = ((x129|x130)&(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = 418350964LL;
	uint8_t x135 = 18U;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -795420857821481LL;

    t33 = ((x133|x134)&(x135!=x136));

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static volatile int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MAX;
	int64_t t34 = -5389484817283LL;

    t34 = ((x137|x138)&(x139!=x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = -29693;
	uint64_t x143 = 7504LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t35 = 9LLU;

    t35 = ((x141|x142)&(x143!=x144));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 25U;
	static uint64_t x146 = 193870464959LLU;
	int64_t x147 = INT64_MIN;

    t36 = ((x145|x146)&(x147!=x148));

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	volatile int8_t x150 = INT8_MIN;
	static volatile uint16_t x151 = 8179U;
	int64_t x152 = 2519469318942666LL;
	static volatile int64_t t37 = 8113046570975692LL;

    t37 = ((x149|x150)&(x151!=x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	int16_t x154 = 0;
	int16_t x155 = INT16_MIN;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -5;

    t38 = ((x153|x154)&(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int16_t x158 = 1346;
	int64_t x159 = INT64_MAX;
	int64_t x160 = -1LL;

    t39 = ((x157|x158)&(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = 25LL;
	int64_t x162 = -1LL;
	int32_t x163 = INT32_MIN;
	static uint64_t x164 = 515039LLU;

    t40 = ((x161|x162)&(x163!=x164));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = 1U;
	int64_t t41 = -5229928777LL;

    t41 = ((x165|x166)&(x167!=x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = UINT64_MAX;
	int32_t t42 = 867;

    t42 = ((x169|x170)&(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	volatile int8_t x174 = INT8_MIN;
	int64_t x175 = 148706588062948834LL;
	static uint16_t x176 = 208U;
	int32_t t43 = -232;

    t43 = ((x173|x174)&(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = 285U;
	int64_t x178 = -1LL;
	uint64_t x179 = 2061LLU;
	int32_t x180 = -1;
	volatile int64_t t44 = -11LL;

    t44 = ((x177|x178)&(x179!=x180));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x181 = UINT16_MAX;
	uint64_t x183 = 20LLU;
	volatile int32_t t45 = -156121657;

    t45 = ((x181|x182)&(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = 1858964058U;
	volatile uint16_t x186 = UINT16_MAX;
	uint64_t x187 = UINT64_MAX;
	static uint8_t x188 = UINT8_MAX;
	uint32_t t46 = 74366U;

    t46 = ((x185|x186)&(x187!=x188));

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = 2250805403511LL;

    t47 = ((x189|x190)&(x191!=x192));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x195 = INT64_MIN;
	volatile int32_t t48 = 4048;

    t48 = ((x193|x194)&(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -54;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = 1U;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -241992528;

    t49 = ((x197|x198)&(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x202 = INT8_MIN;
	int32_t x204 = INT32_MIN;

    t50 = ((x201|x202)&(x203!=x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	volatile int16_t x208 = -161;
	volatile uint32_t t51 = 196019285U;

    t51 = ((x205|x206)&(x207!=x208));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 122U;
	static volatile int8_t x211 = INT8_MAX;
	static volatile int64_t x212 = 17LL;

    t52 = ((x209|x210)&(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	volatile uint32_t x215 = 23U;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 16807;

    t53 = ((x213|x214)&(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -1;
	static volatile int32_t t54 = 0;

    t54 = ((x217|x218)&(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = 23037574U;
	uint64_t x223 = UINT64_MAX;
	uint16_t x224 = 124U;
	static uint32_t t55 = 15999U;

    t55 = ((x221|x222)&(x223!=x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 408U;
	int8_t x226 = 37;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 1320;

    t56 = ((x225|x226)&(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x229 = -1LL;
	uint64_t x230 = 1451070LLU;
	int32_t x231 = INT32_MAX;
	int16_t x232 = -1;
	uint64_t t57 = 69685156735581LLU;

    t57 = ((x229|x230)&(x231!=x232));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x234 = 1646582980LLU;

    t58 = ((x233|x234)&(x235!=x236));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x237 = -3;
	int32_t x238 = -61;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -2;

    t59 = ((x237|x238)&(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = -1LL;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 39001012937LL;
	int64_t t60 = 7LL;

    t60 = ((x241|x242)&(x243!=x244));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 3;
	uint16_t x248 = 101U;
	static int32_t t61 = -673;

    t61 = ((x245|x246)&(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = UINT8_MAX;
	static int8_t x251 = -1;
	volatile int32_t t62 = -1;

    t62 = ((x249|x250)&(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = -1;
	int16_t x255 = INT16_MIN;
	volatile uint8_t x256 = UINT8_MAX;
	int32_t t63 = -11145;

    t63 = ((x253|x254)&(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	volatile int16_t x258 = -1;
	volatile uint64_t x259 = 3420832607LLU;
	static volatile int32_t t64 = -73;

    t64 = ((x257|x258)&(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	int64_t t65 = 98551521LL;

    t65 = ((x261|x262)&(x263!=x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	static int64_t x267 = -141900795028LL;
	static uint64_t x268 = 10986029329409994LLU;
	static int64_t t66 = -3LL;

    t66 = ((x265|x266)&(x267!=x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = UINT16_MAX;
	int16_t x270 = -6;
	int16_t x272 = INT16_MIN;

    t67 = ((x269|x270)&(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = -1158912397211451LL;
	int16_t x274 = -1;
	uint64_t x275 = 1151LLU;
	static int64_t t68 = -338LL;

    t68 = ((x273|x274)&(x275!=x276));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	int64_t x279 = -1LL;
	volatile uint16_t x280 = 407U;
	int32_t t69 = 13386519;

    t69 = ((x277|x278)&(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MAX;
	int32_t x283 = 10157;
	static uint64_t x284 = 0LLU;
	volatile int32_t t70 = 15861;

    t70 = ((x281|x282)&(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	uint8_t x288 = 14U;
	volatile int64_t t71 = -4154263726280LL;

    t71 = ((x285|x286)&(x287!=x288));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 17U;
	int16_t x292 = 9;

    t72 = ((x289|x290)&(x291!=x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	int32_t x295 = 0;
	int32_t x296 = -932;
	int32_t t73 = 104716794;

    t73 = ((x293|x294)&(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -20;
	volatile int16_t x298 = INT16_MIN;
	static int64_t x299 = 1323180990107LL;
	int32_t t74 = 201;

    t74 = ((x297|x298)&(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 287;
	static int64_t x302 = -1343629458245869LL;
	static int32_t x303 = INT32_MAX;
	static int8_t x304 = INT8_MIN;
	int64_t t75 = 396317570909270867LL;

    t75 = ((x301|x302)&(x303!=x304));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	static volatile int8_t x308 = INT8_MIN;
	int32_t t76 = 17;

    t76 = ((x305|x306)&(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 51U;
	int64_t x311 = INT64_MIN;

    t77 = ((x309|x310)&(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 3995214LLU;
	int64_t x314 = -573705268027LL;
	int16_t x315 = 371;
	uint32_t x316 = UINT32_MAX;

    t78 = ((x313|x314)&(x315!=x316));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	static int16_t x320 = 11;
	volatile int64_t t79 = -5LL;

    t79 = ((x317|x318)&(x319!=x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	volatile int16_t x322 = -1;
	volatile int32_t x323 = 145084;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = 31;

    t80 = ((x321|x322)&(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = 6U;
	int64_t x326 = -2080775LL;
	volatile int16_t x327 = INT16_MAX;
	int32_t x328 = -65188230;
	int64_t t81 = -8169663LL;

    t81 = ((x325|x326)&(x327!=x328));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MAX;

    t82 = ((x329|x330)&(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	static volatile int16_t x334 = INT16_MIN;
	uint8_t x335 = 6U;
	static volatile uint32_t x336 = 173529U;
	volatile int64_t t83 = -21LL;

    t83 = ((x333|x334)&(x335!=x336));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -1;
	static int32_t x338 = 938;
	int32_t x339 = -1;
	uint16_t x340 = 105U;
	volatile int32_t t84 = -774417;

    t84 = ((x337|x338)&(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = 3;
	volatile int8_t x342 = 8;
	int32_t t85 = 109693;

    t85 = ((x341|x342)&(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 69796U;
	uint32_t t86 = 334U;

    t86 = ((x345|x346)&(x347!=x348));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	int32_t x351 = -1;
	uint64_t t87 = 7158564683LLU;

    t87 = ((x349|x350)&(x351!=x352));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 192355421U;
	volatile uint8_t x355 = 14U;
	int8_t x356 = INT8_MAX;
	uint32_t t88 = 587990U;

    t88 = ((x353|x354)&(x355!=x356));

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x358 = INT8_MAX;
	uint8_t x360 = 3U;
	static volatile uint32_t t89 = 37766U;

    t89 = ((x357|x358)&(x359!=x360));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 14903394U;
	static uint16_t x362 = 20600U;
	volatile uint16_t x363 = 10U;
	static volatile uint32_t x364 = 390005U;
	volatile uint32_t t90 = 2624U;

    t90 = ((x361|x362)&(x363!=x364));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x366 = UINT64_MAX;
	static volatile uint8_t x367 = UINT8_MAX;
	static int8_t x368 = 6;
	uint64_t t91 = 24974490LLU;

    t91 = ((x365|x366)&(x367!=x368));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = 152;
	int64_t x371 = INT64_MIN;
	int8_t x372 = -1;
	static volatile int32_t t92 = 988964;

    t92 = ((x369|x370)&(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	static uint64_t x375 = 125LLU;
	static uint32_t x376 = 3U;
	volatile int32_t t93 = 2385281;

    t93 = ((x373|x374)&(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = -1LL;
	volatile uint8_t x378 = 2U;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = UINT32_MAX;
	int64_t t94 = -56LL;

    t94 = ((x377|x378)&(x379!=x380));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1LL;
	volatile uint16_t x384 = 17U;
	uint32_t t95 = 27U;

    t95 = ((x381|x382)&(x383!=x384));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -1LL;
	int16_t x387 = -1;
	uint16_t x388 = 3U;
	int64_t t96 = -2491389820003239715LL;

    t96 = ((x385|x386)&(x387!=x388));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 1U;
	int8_t x390 = INT8_MIN;
	int32_t x392 = 1;
	int32_t t97 = -3866631;

    t97 = ((x389|x390)&(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int8_t x395 = -3;
	uint16_t x396 = UINT16_MAX;
	int32_t t98 = -90;

    t98 = ((x393|x394)&(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = -597LL;
	int8_t x400 = -15;
	volatile int64_t t99 = 815611LL;

    t99 = ((x397|x398)&(x399!=x400));

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = 3191U;
	int16_t x402 = 0;
	int32_t x403 = 0;
	volatile uint32_t x404 = 1064414U;
	volatile int32_t t100 = -45218313;

    t100 = ((x401|x402)&(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	static int64_t x407 = INT64_MIN;
	int32_t t101 = -57427389;

    t101 = ((x405|x406)&(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x411 = 1U;
	static uint64_t x412 = UINT64_MAX;
	volatile int64_t t102 = -225853299250932993LL;

    t102 = ((x409|x410)&(x411!=x412));

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int16_t x414 = INT16_MIN;
	static volatile uint64_t x416 = 3720LLU;
	static volatile int32_t t103 = -83100572;

    t103 = ((x413|x414)&(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 1560954460LLU;
	uint16_t x418 = 40U;
	uint16_t x420 = UINT16_MAX;
	uint64_t t104 = 48738181247094LLU;

    t104 = ((x417|x418)&(x419!=x420));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = INT64_MAX;
	volatile uint32_t x424 = 634U;
	static volatile int64_t t105 = -132334352442659LL;

    t105 = ((x421|x422)&(x423!=x424));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 395U;
	int64_t x426 = INT64_MIN;
	uint16_t x427 = UINT16_MAX;

    t106 = ((x425|x426)&(x427!=x428));

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MAX;
	int16_t x432 = 892;
	volatile int64_t t107 = 714990LL;

    t107 = ((x429|x430)&(x431!=x432));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = 5051831393045812LL;
	volatile uint8_t x436 = 0U;
	volatile uint64_t t108 = 16107LLU;

    t108 = ((x433|x434)&(x435!=x436));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MAX;
	uint32_t x438 = 372647130U;
	static volatile uint8_t x439 = 1U;
	uint32_t t109 = 82980706U;

    t109 = ((x437|x438)&(x439!=x440));

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = INT8_MAX;
	static volatile int32_t x442 = -100235;
	uint8_t x443 = UINT8_MAX;
	static int32_t t110 = 913343427;

    t110 = ((x441|x442)&(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 1637743828699LL;
	volatile uint8_t x446 = 21U;
	static uint8_t x447 = UINT8_MAX;
	static int32_t x448 = 13458141;
	int64_t t111 = 1959LL;

    t111 = ((x445|x446)&(x447!=x448));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x452 = -1;
	int32_t t112 = -15;

    t112 = ((x449|x450)&(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x453 = UINT16_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x456 = INT16_MAX;
	int64_t t113 = 112882317751634817LL;

    t113 = ((x453|x454)&(x455!=x456));

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = INT64_MIN;
	volatile int64_t t114 = 3414216LL;

    t114 = ((x457|x458)&(x459!=x460));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 1025U;
	int32_t x462 = INT32_MAX;
	uint32_t x463 = UINT32_MAX;
	volatile int8_t x464 = 21;
	volatile int32_t t115 = 4501;

    t115 = ((x461|x462)&(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	uint16_t x467 = UINT16_MAX;
	uint8_t x468 = 5U;

    t116 = ((x465|x466)&(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	volatile int8_t x470 = -1;
	static int8_t x471 = -1;
	static int64_t x472 = -3924457121847887819LL;
	uint64_t t117 = 117LLU;

    t117 = ((x469|x470)&(x471!=x472));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = -1;
	int8_t x474 = -2;
	static int64_t x475 = INT64_MAX;
	int32_t t118 = 1;

    t118 = ((x473|x474)&(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = -1;
	volatile uint8_t x478 = UINT8_MAX;
	uint16_t x479 = 76U;
	int64_t x480 = -1LL;
	volatile int32_t t119 = -124737693;

    t119 = ((x477|x478)&(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	int32_t x482 = -1;
	uint16_t x483 = 275U;
	volatile uint16_t x484 = UINT16_MAX;

    t120 = ((x481|x482)&(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = -1;
	uint8_t x486 = UINT8_MAX;
	static int32_t t121 = -175688048;

    t121 = ((x485|x486)&(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 114058477538940LLU;
	volatile uint8_t x492 = UINT8_MAX;

    t122 = ((x489|x490)&(x491!=x492));

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x494 = -20;
	int8_t x495 = -1;
	int64_t x496 = INT64_MIN;
	int64_t t123 = 385521846231LL;

    t123 = ((x493|x494)&(x495!=x496));

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	int32_t x498 = 63587864;
	int16_t x499 = -1;
	int32_t t124 = -336;

    t124 = ((x497|x498)&(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 898U;
	static int8_t x502 = INT8_MIN;
	int32_t x503 = 232441;
	uint8_t x504 = 0U;

    t125 = ((x501|x502)&(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = 383667439LLU;
	static uint32_t x506 = 124076U;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = 55970;
	uint64_t t126 = 604200366622LLU;

    t126 = ((x505|x506)&(x507!=x508));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 217347474U;
	int16_t x510 = -498;
	int32_t x511 = -1;
	volatile int16_t x512 = -1;

    t127 = ((x509|x510)&(x511!=x512));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	static volatile int32_t x515 = INT32_MIN;
	volatile int64_t t128 = -13940LL;

    t128 = ((x513|x514)&(x515!=x516));

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = -1LL;
	volatile int64_t x518 = 12499940018LL;
	uint16_t x519 = 11U;
	volatile uint8_t x520 = 11U;

    t129 = ((x517|x518)&(x519!=x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int16_t x523 = INT16_MAX;
	static uint16_t x524 = 0U;
	volatile int32_t t130 = -8480255;

    t130 = ((x521|x522)&(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x526 = 14488264LLU;
	int8_t x527 = 6;
	uint8_t x528 = 39U;
	volatile uint64_t t131 = 6212624501177648LLU;

    t131 = ((x525|x526)&(x527!=x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = 199288554664470LL;
	int16_t x531 = INT16_MIN;
	volatile uint8_t x532 = 3U;
	int64_t t132 = 2860430530563049528LL;

    t132 = ((x529|x530)&(x531!=x532));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -4;
	int16_t x534 = 7;
	volatile int64_t x535 = INT64_MIN;
	uint16_t x536 = 7721U;

    t133 = ((x533|x534)&(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = 3850012461LLU;
	volatile uint32_t x538 = 32737U;
	static uint16_t x539 = UINT16_MAX;
	static volatile int64_t x540 = INT64_MAX;
	volatile uint64_t t134 = 5676145106775958LLU;

    t134 = ((x537|x538)&(x539!=x540));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	static int8_t x542 = INT8_MIN;
	int8_t x544 = -27;
	volatile uint64_t t135 = 7871610117036771LLU;

    t135 = ((x541|x542)&(x543!=x544));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = 19540421965920546LL;
	int8_t x547 = INT8_MIN;
	int64_t x548 = 51600015107142045LL;
	int64_t t136 = 123085640LL;

    t136 = ((x545|x546)&(x547!=x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	uint16_t x550 = 743U;
	int64_t x551 = -32731505687937406LL;
	static int8_t x552 = -9;
	volatile int64_t t137 = -54741473272939LL;

    t137 = ((x549|x550)&(x551!=x552));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	uint16_t x555 = 275U;
	int8_t x556 = -5;
	static uint64_t t138 = 271310962549463699LLU;

    t138 = ((x553|x554)&(x555!=x556));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x558 = -1LL;
	uint16_t x559 = 15U;
	volatile int8_t x560 = 28;
	static int64_t t139 = -1848LL;

    t139 = ((x557|x558)&(x559!=x560));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	volatile uint8_t x562 = 41U;
	int64_t x564 = -334267621389695413LL;
	volatile int32_t t140 = -15179;

    t140 = ((x561|x562)&(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -7452583;
	volatile int32_t x566 = -1;
	int32_t x568 = INT32_MAX;
	static int32_t t141 = -2;

    t141 = ((x565|x566)&(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -1LL;
	int64_t x570 = INT64_MAX;
	int8_t x572 = INT8_MAX;
	volatile int64_t t142 = -292499457234788LL;

    t142 = ((x569|x570)&(x571!=x572));

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = 1;
	int64_t x574 = -1LL;
	volatile uint16_t x575 = 13U;
	int64_t t143 = 61274554926828LL;

    t143 = ((x573|x574)&(x575!=x576));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 15;
	volatile int8_t x578 = 6;
	static int32_t x579 = INT32_MIN;
	static int32_t t144 = 105;

    t144 = ((x577|x578)&(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	int64_t x582 = -1LL;
	static int8_t x584 = INT8_MAX;
	volatile int64_t t145 = -114712164132375003LL;

    t145 = ((x581|x582)&(x583!=x584));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = UINT32_MAX;
	uint16_t x586 = UINT16_MAX;
	int16_t x587 = 57;
	uint32_t t146 = 175430652U;

    t146 = ((x585|x586)&(x587!=x588));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	static uint8_t x590 = 53U;
	uint64_t x591 = 890780LLU;
	int8_t x592 = INT8_MIN;

    t147 = ((x589|x590)&(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x594 = 479U;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = -225;

    t148 = ((x593|x594)&(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x599 = -2;
	volatile int64_t t149 = 165532LL;

    t149 = ((x597|x598)&(x599!=x600));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = UINT16_MAX;
	int8_t x603 = INT8_MIN;
	volatile int32_t x604 = -76893;
	volatile int32_t t150 = -7;

    t150 = ((x601|x602)&(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	uint64_t x606 = 274049431896500LLU;
	static int8_t x607 = INT8_MIN;
	uint8_t x608 = UINT8_MAX;
	uint64_t t151 = 2LLU;

    t151 = ((x605|x606)&(x607!=x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x610 = 56U;
	int32_t x611 = INT32_MIN;
	int8_t x612 = -1;
	volatile int32_t t152 = 80;

    t152 = ((x609|x610)&(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t x614 = INT32_MAX;
	int8_t x615 = 20;
	int32_t x616 = -1;
	int64_t t153 = 502LL;

    t153 = ((x613|x614)&(x615!=x616));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	static int64_t x618 = INT64_MIN;
	uint16_t x619 = 1975U;
	uint8_t x620 = UINT8_MAX;
	int64_t t154 = 799688LL;

    t154 = ((x617|x618)&(x619!=x620));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x621 = 0;
	uint8_t x622 = 2U;
	int64_t x623 = INT64_MAX;
	volatile uint16_t x624 = 306U;
	static volatile int32_t t155 = 1;

    t155 = ((x621|x622)&(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = INT8_MAX;
	uint32_t x627 = UINT32_MAX;
	int8_t x628 = -1;
	int32_t t156 = -9523029;

    t156 = ((x625|x626)&(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 3679U;
	static int8_t x630 = -1;
	static uint64_t x631 = UINT64_MAX;
	static volatile uint32_t t157 = 159652U;

    t157 = ((x629|x630)&(x631!=x632));

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	static uint64_t x634 = UINT64_MAX;
	volatile uint32_t x635 = 8294027U;
	int16_t x636 = INT16_MIN;
	volatile uint64_t t158 = 11582412LLU;

    t158 = ((x633|x634)&(x635!=x636));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1609U;
	static volatile int16_t x638 = -1;
	static uint32_t x639 = UINT32_MAX;
	volatile int32_t x640 = INT32_MIN;
	static int32_t t159 = -253;

    t159 = ((x637|x638)&(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = UINT32_MAX;
	int32_t x642 = -1;
	int64_t x643 = 36467871300204LL;
	static uint32_t x644 = 52U;
	uint32_t t160 = 1005899U;

    t160 = ((x641|x642)&(x643!=x644));

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	int16_t x648 = INT16_MIN;

    t161 = ((x645|x646)&(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x651 = INT32_MIN;
	uint16_t x652 = 185U;
	int64_t t162 = -3385LL;

    t162 = ((x649|x650)&(x651!=x652));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 1U;
	int64_t x654 = -1LL;
	uint8_t x655 = 7U;
	uint32_t x656 = UINT32_MAX;

    t163 = ((x653|x654)&(x655!=x656));

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 5024LL;
	int16_t x658 = 3;
	int64_t x659 = INT64_MIN;
	volatile int64_t t164 = 186LL;

    t164 = ((x657|x658)&(x659!=x660));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	uint8_t x662 = 4U;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MIN;
	static int32_t t165 = -269739;

    t165 = ((x661|x662)&(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x667 = -2347;
	static int16_t x668 = -1;

    t166 = ((x665|x666)&(x667!=x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = INT64_MIN;
	uint16_t x671 = UINT16_MAX;
	static int64_t t167 = -334292980LL;

    t167 = ((x669|x670)&(x671!=x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MIN;
	int8_t x675 = INT8_MIN;
	int32_t t168 = -19609077;

    t168 = ((x673|x674)&(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	volatile uint8_t x678 = 59U;
	uint32_t x679 = 12U;
	int16_t x680 = 163;
	volatile int32_t t169 = 1;

    t169 = ((x677|x678)&(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x683 = INT8_MIN;
	uint64_t x684 = 2754473817028106650LLU;
	volatile int32_t t170 = -1194976;

    t170 = ((x681|x682)&(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x685 = -1;
	int64_t x686 = -118LL;
	static int64_t x688 = -4303626802LL;
	volatile int64_t t171 = -271LL;

    t171 = ((x685|x686)&(x687!=x688));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	static int32_t x690 = -51014;
	uint16_t x692 = 7758U;

    t172 = ((x689|x690)&(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = UINT32_MAX;
	volatile int32_t x695 = -331;
	static int32_t x696 = INT32_MAX;
	int64_t t173 = -59742358717220652LL;

    t173 = ((x693|x694)&(x695!=x696));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x699 = UINT8_MAX;
	static int64_t x700 = INT64_MAX;
	static int32_t t174 = 667;

    t174 = ((x697|x698)&(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 40787LLU;
	static int8_t x702 = -1;
	volatile int64_t x703 = INT64_MIN;
	static int16_t x704 = INT16_MIN;
	uint64_t t175 = 83044106592851090LLU;

    t175 = ((x701|x702)&(x703!=x704));

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 494694073U;
	volatile int64_t x707 = -1LL;
	uint32_t t176 = 15353U;

    t176 = ((x705|x706)&(x707!=x708));

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x710 = INT64_MIN;
	static int8_t x711 = -31;
	int64_t x712 = 196559837643687LL;
	int64_t t177 = -3809768LL;

    t177 = ((x709|x710)&(x711!=x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = INT32_MIN;
	uint16_t x715 = 979U;
	uint16_t x716 = 1U;
	volatile int64_t t178 = 282278LL;

    t178 = ((x713|x714)&(x715!=x716));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MIN;
	volatile uint8_t x718 = 14U;
	int32_t x719 = -1;
	int64_t x720 = INT64_MIN;

    t179 = ((x717|x718)&(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = INT64_MAX;
	volatile int8_t x722 = 1;
	static volatile int8_t x723 = INT8_MIN;
	static volatile int64_t x724 = -1LL;
	static int64_t t180 = 5165955644351773LL;

    t180 = ((x721|x722)&(x723!=x724));

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x725 = 8731779068LLU;
	volatile int16_t x726 = INT16_MIN;
	volatile int8_t x727 = 0;
	uint16_t x728 = 11718U;

    t181 = ((x725|x726)&(x727!=x728));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x729 = 46U;
	static int64_t x730 = 13506LL;
	int64_t x731 = -1LL;
	uint64_t x732 = 50216146019LLU;
	volatile int64_t t182 = -229710659854LL;

    t182 = ((x729|x730)&(x731!=x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = -892;
	int16_t x734 = -773;
	uint32_t x735 = 17516831U;
	static uint8_t x736 = 0U;
	static volatile int32_t t183 = -7798;

    t183 = ((x733|x734)&(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x738 = 61U;
	uint32_t x739 = UINT32_MAX;
	static int32_t t184 = -23952221;

    t184 = ((x737|x738)&(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -109;
	int64_t x742 = INT64_MAX;
	int64_t x743 = 10539583710787184LL;
	uint16_t x744 = 14778U;
	int64_t t185 = 7743LL;

    t185 = ((x741|x742)&(x743!=x744));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x747 = UINT64_MAX;
	uint8_t x748 = 68U;
	static uint64_t t186 = 5LLU;

    t186 = ((x745|x746)&(x747!=x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = 55422482314LLU;
	int16_t x751 = INT16_MAX;
	volatile uint16_t x752 = 7U;
	volatile uint64_t t187 = 24LLU;

    t187 = ((x749|x750)&(x751!=x752));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MIN;
	uint8_t x756 = 11U;

    t188 = ((x753|x754)&(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MAX;
	uint8_t x759 = 1U;
	int64_t x760 = -1LL;
	volatile int32_t t189 = 17082400;

    t189 = ((x757|x758)&(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = UINT16_MAX;
	static int16_t x763 = 1681;
	int8_t x764 = INT8_MIN;
	int32_t t190 = 249379;

    t190 = ((x761|x762)&(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = INT32_MAX;
	static uint32_t x767 = UINT32_MAX;
	int64_t x768 = -1LL;
	static uint64_t t191 = 247374969055LLU;

    t191 = ((x765|x766)&(x767!=x768));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MIN;
	int32_t x771 = 56561;
	uint32_t x772 = 29784U;
	static int32_t t192 = -6;

    t192 = ((x769|x770)&(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = -1941;
	static volatile int32_t x775 = -1;
	static int16_t x776 = INT16_MIN;
	static int32_t t193 = 664;

    t193 = ((x773|x774)&(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = UINT32_MAX;
	volatile int8_t x779 = INT8_MIN;
	uint8_t x780 = UINT8_MAX;

    t194 = ((x777|x778)&(x779!=x780));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x781 = -5488;
	int16_t x783 = INT16_MAX;
	volatile int32_t t195 = -413733;

    t195 = ((x781|x782)&(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	int32_t x786 = INT32_MAX;
	volatile uint32_t x787 = 3U;
	static int8_t x788 = INT8_MIN;
	volatile uint32_t t196 = 0U;

    t196 = ((x785|x786)&(x787!=x788));

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 4490U;
	uint16_t x790 = 1U;
	int64_t x791 = INT64_MIN;
	int16_t x792 = 7;

    t197 = ((x789|x790)&(x791!=x792));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = UINT16_MAX;
	uint16_t x794 = 31U;
	int16_t x795 = INT16_MIN;
	uint32_t x796 = 49406762U;
	volatile int32_t t198 = -191;

    t198 = ((x793|x794)&(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 6;
	int16_t x798 = -1;
	uint64_t x800 = UINT64_MAX;

    t199 = ((x797|x798)&(x799!=x800));

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

