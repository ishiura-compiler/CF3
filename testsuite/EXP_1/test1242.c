
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

static int64_t x9 = INT64_MAX;
static int8_t x11 = INT8_MIN;
static int32_t t2 = 5;
uint8_t x17 = UINT8_MAX;
static int32_t x24 = -2640170;
int16_t x25 = -13;
volatile int32_t t6 = 9;
static int8_t x30 = INT8_MAX;
int64_t x36 = INT64_MIN;
static volatile int64_t x45 = -2429623086194LL;
static uint32_t x69 = 7767984U;
volatile int32_t t16 = 13238;
int8_t x74 = INT8_MAX;
volatile int32_t x78 = INT32_MIN;
volatile int32_t x87 = -1;
volatile int32_t t21 = 1;
int8_t x94 = -1;
int32_t t22 = -10;
int16_t x98 = 3;
volatile int32_t t23 = 1;
static uint16_t x119 = 13684U;
static uint32_t x124 = 3142160U;
static volatile int32_t t29 = 31458;
volatile int8_t x128 = 1;
volatile int32_t x130 = INT32_MIN;
int32_t t34 = -10940;
volatile uint8_t x153 = 11U;
uint16_t x156 = UINT16_MAX;
uint32_t x159 = 352U;
int16_t x160 = INT16_MAX;
volatile int32_t t37 = 46259;
uint16_t x161 = 0U;
volatile int32_t x163 = -1;
uint8_t x168 = UINT8_MAX;
int32_t x173 = INT32_MAX;
static uint32_t x175 = UINT32_MAX;
static int64_t x178 = -14386LL;
int16_t x182 = -1;
static uint32_t x183 = 526169U;
uint8_t x186 = UINT8_MAX;
volatile int32_t t44 = -15443775;
int8_t x190 = 12;
int8_t x191 = INT8_MIN;
int64_t x204 = INT64_MIN;
static int64_t x213 = INT64_MIN;
volatile int32_t x216 = INT32_MIN;
static int8_t x219 = -1;
volatile int32_t t52 = -3475;
volatile int64_t x225 = -1LL;
static volatile int32_t x228 = INT32_MAX;
static int64_t x229 = 155818490LL;
volatile int16_t x237 = -1;
int64_t x244 = INT64_MAX;
volatile uint64_t x253 = 23LLU;
static uint8_t x268 = 31U;
volatile int16_t x270 = INT16_MIN;
static int16_t x272 = -10;
volatile int32_t t67 = -80105502;
static int32_t t69 = -474751954;
int32_t x289 = INT32_MIN;
int64_t x299 = INT64_MIN;
volatile int8_t x322 = INT8_MIN;
int8_t x324 = 0;
int16_t x325 = 1;
int8_t x327 = INT8_MIN;
uint64_t x331 = 14LLU;
static int16_t x334 = -270;
static volatile int16_t x343 = -1;
volatile int32_t t83 = 348;
static uint64_t x350 = UINT64_MAX;
uint32_t x355 = 1U;
static volatile int64_t x357 = INT64_MIN;
int16_t x363 = INT16_MIN;
volatile int32_t t87 = -257399758;
int8_t x373 = INT8_MIN;
int32_t t90 = 454;
int32_t x377 = INT32_MAX;
int64_t x381 = -1LL;
uint16_t x385 = 1U;
int8_t x400 = INT8_MAX;
volatile int32_t t96 = 10256;
volatile uint32_t x401 = 24214U;
int32_t x407 = INT32_MIN;
volatile int32_t t98 = -9;
uint8_t x412 = UINT8_MAX;
static int32_t x417 = INT32_MIN;
uint8_t x419 = 13U;
static int32_t t101 = -70;
static int64_t x426 = INT64_MIN;
int32_t x437 = 4;
static volatile uint64_t x439 = 3134787LLU;
static int16_t x443 = -1;
uint16_t x452 = UINT16_MAX;
int8_t x460 = INT8_MIN;
int8_t x462 = 12;
static int8_t x463 = -1;
static int16_t x464 = -1;
static int32_t t112 = 33161442;
uint16_t x466 = 29U;
volatile int32_t x478 = INT32_MIN;
static uint32_t x479 = 240U;
int16_t x480 = -17;
int8_t x484 = INT8_MIN;
uint64_t x485 = 8LLU;
int64_t x492 = -1LL;
volatile int32_t t120 = 50383686;
static volatile uint32_t x514 = 349616535U;
int32_t x516 = INT32_MAX;
int32_t x518 = INT32_MIN;
int8_t x523 = -1;
int8_t x526 = -1;
static volatile int32_t t127 = -3856;
volatile int32_t t129 = 359741852;
volatile int32_t t130 = -362;
int16_t x541 = INT16_MAX;
int16_t x542 = INT16_MAX;
volatile int32_t t131 = -24;
int32_t x548 = 53158534;
static volatile int32_t t132 = -28372559;
int16_t x552 = INT16_MIN;
uint8_t x554 = 20U;
static int8_t x559 = INT8_MIN;
volatile int32_t t135 = 123;
volatile int16_t x564 = INT16_MIN;
uint32_t x571 = UINT32_MAX;
int64_t x573 = -2594008681852413LL;
int32_t t139 = 1120199;
int16_t x581 = 10;
int16_t x586 = INT16_MIN;
int16_t x593 = -1578;
int32_t x597 = INT32_MAX;
int16_t x599 = -208;
static int64_t x608 = -1LL;
volatile uint8_t x610 = UINT8_MAX;
int16_t x618 = 1021;
int8_t x629 = -1;
int8_t x637 = -1;
volatile int64_t x640 = INT64_MAX;
int8_t x643 = -1;
uint64_t x644 = 2066081682813852LLU;
volatile int32_t t159 = -54;
int8_t x662 = 8;
int64_t x663 = -1LL;
volatile int64_t x677 = INT64_MAX;
int8_t x682 = INT8_MAX;
int32_t t165 = 1;
int8_t x698 = INT8_MIN;
int16_t x700 = 6;
volatile int16_t x714 = INT16_MAX;
static uint32_t x716 = UINT32_MAX;
int64_t x722 = INT64_MIN;
static int64_t x729 = INT64_MIN;
int8_t x733 = INT8_MIN;
int8_t x739 = INT8_MIN;
volatile int32_t x743 = -1;
volatile int16_t x744 = -25;
static uint8_t x748 = 8U;
int32_t x751 = INT32_MIN;
volatile int64_t x755 = INT64_MIN;
int64_t x760 = -25041918108799LL;
static int32_t x764 = -7263753;
static int32_t x771 = INT32_MIN;
int32_t x777 = -1;
static volatile int8_t x787 = -1;
static uint16_t x793 = 788U;
uint16_t x794 = UINT16_MAX;
int8_t x796 = 1;
int8_t x810 = INT8_MIN;
int8_t x811 = INT8_MIN;
uint64_t x818 = 19473178LLU;
static uint32_t x820 = UINT32_MAX;
uint64_t x824 = UINT64_MAX;
uint16_t x825 = 122U;
static volatile int32_t x828 = 85265;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static volatile uint8_t x2 = UINT8_MAX;
	static uint16_t x3 = 936U;
	static volatile int16_t x4 = INT16_MIN;
	int32_t t0 = -9;

    t0 = (((x1!=x2)%x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint16_t x6 = 62U;
	int8_t x7 = -12;
	int8_t x8 = -1;
	volatile int32_t t1 = 114;

    t1 = (((x5!=x6)%x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x10 = INT8_MIN;
	int64_t x12 = INT64_MIN;

    t2 = (((x9!=x10)%x11)<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint8_t x14 = 58U;
	uint32_t x15 = 13753120U;
	int32_t x16 = -395;
	volatile int32_t t3 = 28;

    t3 = (((x13!=x14)%x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 2117822747067453LLU;
	int64_t x19 = INT64_MAX;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = -738492;

    t4 = (((x17!=x18)%x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 0;
	uint64_t x22 = 1469900LLU;
	int16_t x23 = INT16_MAX;
	int32_t t5 = 58201162;

    t5 = (((x21!=x22)%x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = 15666;

    t6 = (((x25!=x26)%x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	uint8_t x31 = 2U;
	int32_t x32 = -109;
	int32_t t7 = 7589;

    t7 = (((x29!=x30)%x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	int64_t x34 = -3129369009623LL;
	uint64_t x35 = 944LLU;
	volatile int32_t t8 = 0;

    t8 = (((x33!=x34)%x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MAX;
	int64_t x38 = -646004855LL;
	static uint16_t x39 = UINT16_MAX;
	static volatile int16_t x40 = INT16_MAX;
	int32_t t9 = -1698;

    t9 = (((x37!=x38)%x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	static int8_t x42 = INT8_MIN;
	static uint32_t x43 = UINT32_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -236413550;

    t10 = (((x41!=x42)%x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MAX;
	static int32_t t11 = 3;

    t11 = (((x45!=x46)%x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MAX;
	uint16_t x50 = 12554U;
	static volatile uint8_t x51 = 3U;
	volatile uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = 128473;

    t12 = (((x49!=x50)%x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -2;
	volatile int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -184429;

    t13 = (((x53!=x54)%x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 1726361255738LLU;
	uint8_t x58 = UINT8_MAX;
	volatile uint32_t x59 = 7750950U;
	int8_t x60 = 56;
	static int32_t t14 = 1;

    t14 = (((x57!=x58)%x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 773LLU;
	int32_t x66 = 225;
	volatile int16_t x67 = INT16_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t15 = 64310;

    t15 = (((x65!=x66)%x67)<=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x70 = INT64_MIN;
	int64_t x71 = -1LL;
	uint32_t x72 = 521U;

    t16 = (((x69!=x70)%x71)<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = 71422866;
	uint8_t x75 = 3U;
	uint64_t x76 = 3150801LLU;
	volatile int32_t t17 = -68246126;

    t17 = (((x73!=x74)%x75)<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -15435064810LL;
	volatile int32_t x79 = 257368;
	uint16_t x80 = 0U;
	int32_t t18 = -16;

    t18 = (((x77!=x78)%x79)<=x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MAX;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -1LL;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t19 = 217452;

    t19 = (((x81!=x82)%x83)<=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x85 = 860U;
	volatile int16_t x86 = -1;
	int64_t x88 = -1LL;
	int32_t t20 = -774;

    t20 = (((x85!=x86)%x87)<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MIN;
	static volatile int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	int8_t x92 = 0;

    t21 = (((x89!=x90)%x91)<=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x93 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 16U;

    t22 = (((x93!=x94)%x95)<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = INT8_MAX;
	int8_t x99 = -4;
	volatile int8_t x100 = INT8_MAX;

    t23 = (((x97!=x98)%x99)<=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 3051153LLU;
	static uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	uint8_t x104 = 13U;
	static int32_t t24 = -56712;

    t24 = (((x101!=x102)%x103)<=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	volatile int32_t t25 = -166654578;

    t25 = (((x105!=x106)%x107)<=x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x109 = 0;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int32_t t26 = -53;

    t26 = (((x109!=x110)%x111)<=x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 28036U;
	static int64_t x114 = INT64_MIN;
	static uint32_t x115 = 247952413U;
	int64_t x116 = -1LL;
	int32_t t27 = -50781;

    t27 = (((x113!=x114)%x115)<=x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MAX;
	static uint16_t x118 = UINT16_MAX;
	static volatile int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -14423164;

    t28 = (((x117!=x118)%x119)<=x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;

    t29 = (((x121!=x122)%x123)<=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x125 = 1920U;
	volatile int64_t x126 = 1750092493653428LL;
	int8_t x127 = -1;
	static volatile int32_t t30 = -3;

    t30 = (((x125!=x126)%x127)<=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x131 = -1LL;
	static int32_t x132 = -1;
	int32_t t31 = 318161261;

    t31 = (((x129!=x130)%x131)<=x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x137 = INT16_MIN;
	volatile int64_t x138 = -14277955284904350LL;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t32 = -23;

    t32 = (((x137!=x138)%x139)<=x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MAX;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	int16_t x144 = -1;
	int32_t t33 = -829801137;

    t33 = (((x141!=x142)%x143)<=x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x145 = -399;
	int32_t x146 = 2561;
	int16_t x147 = INT16_MAX;
	int16_t x148 = -1;

    t34 = (((x145!=x146)%x147)<=x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = 17U;
	int32_t x150 = 3679;
	int64_t x151 = -6665034787LL;
	uint8_t x152 = UINT8_MAX;
	int32_t t35 = -11360241;

    t35 = (((x149!=x150)%x151)<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x154 = UINT8_MAX;
	static int64_t x155 = -14082208198437446LL;
	volatile int32_t t36 = 48354;

    t36 = (((x153!=x154)%x155)<=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 1U;
	int32_t x158 = 3103;

    t37 = (((x157!=x158)%x159)<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x162 = 5U;
	int64_t x164 = INT64_MAX;
	static volatile int32_t t38 = -2341;

    t38 = (((x161!=x162)%x163)<=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = 0;
	static int64_t x167 = INT64_MIN;
	int32_t t39 = -111324;

    t39 = (((x165!=x166)%x167)<=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MAX;
	int32_t x170 = INT32_MIN;
	static volatile int32_t x171 = INT32_MAX;
	int64_t x172 = -1LL;
	int32_t t40 = -20374467;

    t40 = (((x169!=x170)%x171)<=x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x174 = -1LL;
	int32_t x176 = INT32_MAX;
	static int32_t t41 = 339956516;

    t41 = (((x173!=x174)%x175)<=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -1LL;
	static volatile uint8_t x179 = 57U;
	uint64_t x180 = 39006185968LLU;
	volatile int32_t t42 = -4496743;

    t42 = (((x177!=x178)%x179)<=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = -1;
	static int8_t x184 = INT8_MIN;
	int32_t t43 = 29760;

    t43 = (((x181!=x182)%x183)<=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = 3;
	int64_t x187 = INT64_MIN;
	int64_t x188 = 286LL;

    t44 = (((x185!=x186)%x187)<=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = -1LL;
	static uint16_t x192 = 31U;
	volatile int32_t t45 = 19;

    t45 = (((x189!=x190)%x191)<=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	int8_t x195 = 1;
	volatile int8_t x196 = INT8_MIN;
	int32_t t46 = -221;

    t46 = (((x193!=x194)%x195)<=x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	int32_t x198 = 287;
	int8_t x199 = -1;
	static int64_t x200 = 23462LL;
	static int32_t t47 = -28053;

    t47 = (((x197!=x198)%x199)<=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MIN;
	uint16_t x202 = 20U;
	int8_t x203 = INT8_MIN;
	int32_t t48 = 874102;

    t48 = (((x201!=x202)%x203)<=x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = 21057701LL;
	volatile int16_t x206 = 42;
	static int32_t x207 = INT32_MAX;
	static int8_t x208 = INT8_MIN;
	static volatile int32_t t49 = 16896211;

    t49 = (((x205!=x206)%x207)<=x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x209 = 45LL;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t50 = -32968871;

    t50 = (((x209!=x210)%x211)<=x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x214 = INT8_MAX;
	int16_t x215 = -1;
	volatile int32_t t51 = 1685;

    t51 = (((x213!=x214)%x215)<=x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = -1;
	int8_t x218 = INT8_MIN;
	static int8_t x220 = INT8_MAX;

    t52 = (((x217!=x218)%x219)<=x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x221 = 21U;
	uint8_t x222 = 6U;
	int64_t x223 = 1273076589LL;
	static int32_t x224 = INT32_MIN;
	int32_t t53 = 28977;

    t53 = (((x221!=x222)%x223)<=x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x226 = INT16_MIN;
	int64_t x227 = -1LL;
	int32_t t54 = 1531;

    t54 = (((x225!=x226)%x227)<=x228);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x230 = 101U;
	int32_t x231 = -84;
	int64_t x232 = INT64_MIN;
	volatile int32_t t55 = 3;

    t55 = (((x229!=x230)%x231)<=x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = -1LL;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t56 = 38483;

    t56 = (((x233!=x234)%x235)<=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x238 = UINT8_MAX;
	static int32_t x239 = -18;
	static int64_t x240 = INT64_MAX;
	int32_t t57 = 44;

    t57 = (((x237!=x238)%x239)<=x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = 1U;
	volatile uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1;
	volatile int32_t t58 = 5463336;

    t58 = (((x241!=x242)%x243)<=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 149853786422LLU;
	int8_t x246 = INT8_MAX;
	volatile int8_t x247 = INT8_MIN;
	volatile int8_t x248 = -6;
	static volatile int32_t t59 = -97767;

    t59 = (((x245!=x246)%x247)<=x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x249 = INT32_MAX;
	int32_t x250 = 80601233;
	volatile int32_t x251 = 1;
	int32_t x252 = INT32_MIN;
	int32_t t60 = 41174;

    t60 = (((x249!=x250)%x251)<=x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x254 = 59U;
	volatile int8_t x255 = 12;
	int64_t x256 = INT64_MIN;
	int32_t t61 = 1524924;

    t61 = (((x253!=x254)%x255)<=x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 6912U;
	uint64_t x258 = 1986974614731950505LLU;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t62 = -37;

    t62 = (((x257!=x258)%x259)<=x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = UINT64_MAX;
	int32_t x262 = -3;
	static int64_t x263 = INT64_MAX;
	int32_t x264 = -1;
	static volatile int32_t t63 = -2;

    t63 = (((x261!=x262)%x263)<=x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x265 = 2U;
	static volatile int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	volatile int32_t t64 = -676962744;

    t64 = (((x265!=x266)%x267)<=x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = 48U;
	static int16_t x271 = -1;
	volatile int32_t t65 = 81420;

    t65 = (((x269!=x270)%x271)<=x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	uint8_t x274 = 14U;
	volatile int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = 59747693567086LLU;
	volatile int32_t t66 = -1;

    t66 = (((x273!=x274)%x275)<=x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x277 = UINT16_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint64_t x279 = 12703LLU;
	int64_t x280 = INT64_MAX;

    t67 = (((x277!=x278)%x279)<=x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x281 = 2;
	static int16_t x282 = 148;
	int16_t x283 = INT16_MIN;
	volatile int8_t x284 = -1;
	int32_t t68 = -150;

    t68 = (((x281!=x282)%x283)<=x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x285 = 188864128412640791LLU;
	int64_t x286 = INT64_MIN;
	static int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MIN;

    t69 = (((x285!=x286)%x287)<=x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x290 = -2;
	static int8_t x291 = -1;
	uint16_t x292 = 28668U;
	volatile int32_t t70 = -361403;

    t70 = (((x289!=x290)%x291)<=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MAX;
	volatile int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = 43;
	int32_t t71 = 4462371;

    t71 = (((x293!=x294)%x295)<=x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MIN;
	static int64_t x298 = 17LL;
	int8_t x300 = 12;
	int32_t t72 = -135683871;

    t72 = (((x297!=x298)%x299)<=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x301 = 5U;
	int32_t x302 = -13531;
	uint8_t x303 = 39U;
	int32_t x304 = -1;
	int32_t t73 = -113;

    t73 = (((x301!=x302)%x303)<=x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x305 = 0U;
	static int8_t x306 = -1;
	int8_t x307 = -1;
	volatile int64_t x308 = 1LL;
	static int32_t t74 = 11;

    t74 = (((x305!=x306)%x307)<=x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x309 = INT32_MAX;
	int32_t x310 = -1;
	int64_t x311 = -1LL;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t75 = 26700;

    t75 = (((x309!=x310)%x311)<=x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = -1LL;
	static volatile int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	static int32_t t76 = 782;

    t76 = (((x313!=x314)%x315)<=x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x321 = -1;
	static int8_t x323 = INT8_MAX;
	int32_t t77 = 36756673;

    t77 = (((x321!=x322)%x323)<=x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x326 = INT16_MAX;
	int32_t x328 = 0;
	int32_t t78 = 558241;

    t78 = (((x325!=x326)%x327)<=x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x329 = INT16_MIN;
	static int32_t x330 = INT32_MIN;
	static volatile int8_t x332 = -1;
	volatile int32_t t79 = 3049058;

    t79 = (((x329!=x330)%x331)<=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x333 = INT64_MIN;
	static uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t80 = -16628;

    t80 = (((x333!=x334)%x335)<=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x338 = -1;
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = 23;
	volatile int32_t t81 = -7774490;

    t81 = (((x337!=x338)%x339)<=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MIN;
	int16_t x344 = INT16_MAX;
	static volatile int32_t t82 = 2027537;

    t82 = (((x341!=x342)%x343)<=x344);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -1LL;
	uint16_t x346 = 117U;
	volatile int8_t x347 = INT8_MAX;
	uint8_t x348 = 2U;

    t83 = (((x345!=x346)%x347)<=x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = INT64_MIN;
	volatile uint32_t x351 = 88095U;
	int64_t x352 = 28309088LL;
	volatile int32_t t84 = -1;

    t84 = (((x349!=x350)%x351)<=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile int16_t x354 = 167;
	uint8_t x356 = 103U;
	int32_t t85 = -301144335;

    t85 = (((x353!=x354)%x355)<=x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x358 = 412U;
	int16_t x359 = 16;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t86 = -438;

    t86 = (((x357!=x358)%x359)<=x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = 1;
	int64_t x362 = INT64_MIN;
	int32_t x364 = -49478650;

    t87 = (((x361!=x362)%x363)<=x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x365 = 22152612U;
	static int32_t x366 = 91520441;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	static int32_t t88 = 171;

    t88 = (((x365!=x366)%x367)<=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x369 = 18942072U;
	int32_t x370 = -298874;
	int32_t x371 = 3225;
	uint64_t x372 = UINT64_MAX;
	int32_t t89 = 48;

    t89 = (((x369!=x370)%x371)<=x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x374 = 1161U;
	static int32_t x375 = 7966;
	int16_t x376 = -1;

    t90 = (((x373!=x374)%x375)<=x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x378 = 1377U;
	static int64_t x379 = 1156217545115LL;
	uint16_t x380 = 7U;
	volatile int32_t t91 = -1;

    t91 = (((x377!=x378)%x379)<=x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x382 = 1U;
	int64_t x383 = -1LL;
	static uint32_t x384 = 376U;
	int32_t t92 = 195603887;

    t92 = (((x381!=x382)%x383)<=x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x386 = 163557988951948581LLU;
	static int64_t x387 = 3LL;
	volatile int16_t x388 = -14;
	volatile int32_t t93 = -203;

    t93 = (((x385!=x386)%x387)<=x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x389 = 7763844221LL;
	int64_t x390 = 18578LL;
	uint64_t x391 = 1544LLU;
	int8_t x392 = INT8_MIN;
	int32_t t94 = -582;

    t94 = (((x389!=x390)%x391)<=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x393 = 92U;
	static int16_t x394 = -2945;
	int64_t x395 = 7502LL;
	int64_t x396 = 33486237649426LL;
	volatile int32_t t95 = -1;

    t95 = (((x393!=x394)%x395)<=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x397 = 809U;
	static int32_t x398 = -1;
	uint16_t x399 = UINT16_MAX;

    t96 = (((x397!=x398)%x399)<=x400);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x402 = -22;
	uint16_t x403 = 33U;
	int32_t x404 = INT32_MIN;
	int32_t t97 = -501727076;

    t97 = (((x401!=x402)%x403)<=x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MAX;
	int16_t x408 = -58;

    t98 = (((x405!=x406)%x407)<=x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x409 = 9;
	volatile int8_t x410 = INT8_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t t99 = 29;

    t99 = (((x409!=x410)%x411)<=x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = INT8_MIN;
	static uint8_t x414 = 99U;
	uint64_t x415 = 777LLU;
	uint64_t x416 = 240370345892LLU;
	volatile int32_t t100 = 61;

    t100 = (((x413!=x414)%x415)<=x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x418 = 0LLU;
	uint32_t x420 = UINT32_MAX;

    t101 = (((x417!=x418)%x419)<=x420);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MAX;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = 2;
	uint8_t x424 = 1U;
	int32_t t102 = -7700;

    t102 = (((x421!=x422)%x423)<=x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = INT8_MIN;
	uint32_t x427 = 3564U;
	int16_t x428 = -1;
	int32_t t103 = 232420;

    t103 = (((x425!=x426)%x427)<=x428);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x429 = INT32_MIN;
	volatile int8_t x430 = 0;
	static int16_t x431 = 12690;
	int8_t x432 = -5;
	static int32_t t104 = 1443216;

    t104 = (((x429!=x430)%x431)<=x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x433 = 25115U;
	static int16_t x434 = INT16_MIN;
	static uint64_t x435 = UINT64_MAX;
	volatile int32_t x436 = INT32_MAX;
	volatile int32_t t105 = -64989825;

    t105 = (((x433!=x434)%x435)<=x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x438 = -37;
	int8_t x440 = INT8_MAX;
	int32_t t106 = 7;

    t106 = (((x437!=x438)%x439)<=x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x441 = UINT32_MAX;
	volatile int16_t x442 = 5;
	static int8_t x444 = INT8_MIN;
	int32_t t107 = -3199;

    t107 = (((x441!=x442)%x443)<=x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x445 = UINT8_MAX;
	uint32_t x446 = 6748U;
	static uint64_t x447 = UINT64_MAX;
	int16_t x448 = INT16_MAX;
	static int32_t t108 = -117;

    t108 = (((x445!=x446)%x447)<=x448);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = 29618998486251LL;
	uint32_t x450 = 557U;
	volatile int64_t x451 = INT64_MIN;
	volatile int32_t t109 = -771179470;

    t109 = (((x449!=x450)%x451)<=x452);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x453 = 3U;
	static int16_t x454 = INT16_MIN;
	uint32_t x455 = UINT32_MAX;
	static uint32_t x456 = 238056U;
	int32_t t110 = 1;

    t110 = (((x453!=x454)%x455)<=x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x457 = -1;
	int32_t x458 = INT32_MIN;
	uint16_t x459 = 7U;
	int32_t t111 = -5148071;

    t111 = (((x457!=x458)%x459)<=x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MIN;

    t112 = (((x461!=x462)%x463)<=x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = -43;
	uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MIN;
	int32_t t113 = -1407212;

    t113 = (((x465!=x466)%x467)<=x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MAX;
	int64_t x470 = -1LL;
	uint64_t x471 = 1000403175LLU;
	volatile int8_t x472 = INT8_MAX;
	volatile int32_t t114 = -21;

    t114 = (((x469!=x470)%x471)<=x472);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	static volatile int16_t x476 = 33;
	volatile int32_t t115 = -3;

    t115 = (((x473!=x474)%x475)<=x476);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x477 = -672817776LL;
	static volatile int32_t t116 = 213718573;

    t116 = (((x477!=x478)%x479)<=x480);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	static int64_t x483 = -1LL;
	volatile int32_t t117 = -59098;

    t117 = (((x481!=x482)%x483)<=x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x486 = 0;
	static int16_t x487 = INT16_MAX;
	int32_t x488 = 15;
	int32_t t118 = 125;

    t118 = (((x485!=x486)%x487)<=x488);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x489 = 0U;
	int8_t x490 = 0;
	uint64_t x491 = 181658LLU;
	int32_t t119 = 179460581;

    t119 = (((x489!=x490)%x491)<=x492);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x493 = 23;
	uint64_t x494 = 138646841329311145LLU;
	static int64_t x495 = INT64_MIN;
	int64_t x496 = 88LL;

    t120 = (((x493!=x494)%x495)<=x496);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MAX;
	int32_t x498 = -1;
	volatile int8_t x499 = INT8_MIN;
	uint32_t x500 = 33U;
	int32_t t121 = -26;

    t121 = (((x497!=x498)%x499)<=x500);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	static int32_t x502 = INT32_MIN;
	static int16_t x503 = -16051;
	uint64_t x504 = 284109983LLU;
	int32_t t122 = -38635311;

    t122 = (((x501!=x502)%x503)<=x504);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x509 = INT16_MIN;
	uint32_t x510 = 8462455U;
	int16_t x511 = INT16_MIN;
	int32_t x512 = 44;
	int32_t t123 = 1;

    t123 = (((x509!=x510)%x511)<=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = 2699543LLU;
	uint32_t x515 = 42U;
	static int32_t t124 = 81;

    t124 = (((x513!=x514)%x515)<=x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x517 = 7749U;
	uint16_t x519 = 11U;
	int64_t x520 = INT64_MIN;
	int32_t t125 = -51029;

    t125 = (((x517!=x518)%x519)<=x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x521 = INT8_MIN;
	static uint64_t x522 = 10918LLU;
	volatile int16_t x524 = -1;
	static volatile int32_t t126 = 29730;

    t126 = (((x521!=x522)%x523)<=x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = INT16_MIN;
	uint16_t x527 = UINT16_MAX;
	volatile uint32_t x528 = UINT32_MAX;

    t127 = (((x525!=x526)%x527)<=x528);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 1U;
	static volatile uint64_t x530 = UINT64_MAX;
	volatile int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t128 = 1;

    t128 = (((x529!=x530)%x531)<=x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 12558U;
	int64_t x534 = INT64_MIN;
	volatile int8_t x535 = INT8_MIN;
	static int16_t x536 = INT16_MIN;

    t129 = (((x533!=x534)%x535)<=x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x537 = 50LL;
	int8_t x538 = 7;
	static int8_t x539 = -1;
	int8_t x540 = INT8_MIN;

    t130 = (((x537!=x538)%x539)<=x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x543 = 342U;
	int32_t x544 = -128022;

    t131 = (((x541!=x542)%x543)<=x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	static int32_t x547 = -51;

    t132 = (((x545!=x546)%x547)<=x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x549 = 24571591U;
	volatile uint16_t x550 = 2195U;
	volatile int8_t x551 = 56;
	volatile int32_t t133 = 2;

    t133 = (((x549!=x550)%x551)<=x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x553 = -1;
	static int16_t x555 = -11643;
	int8_t x556 = 1;
	volatile int32_t t134 = -163;

    t134 = (((x553!=x554)%x555)<=x556);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x557 = 54U;
	int32_t x558 = INT32_MAX;
	int16_t x560 = 2049;

    t135 = (((x557!=x558)%x559)<=x560);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x561 = INT16_MIN;
	static int32_t x562 = INT32_MAX;
	uint32_t x563 = 164793U;
	int32_t t136 = -2416;

    t136 = (((x561!=x562)%x563)<=x564);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MIN;
	uint16_t x566 = 1U;
	int64_t x567 = INT64_MIN;
	int32_t x568 = INT32_MIN;
	int32_t t137 = -124;

    t137 = (((x565!=x566)%x567)<=x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = 1;
	static uint32_t x570 = 3599U;
	uint8_t x572 = 9U;
	int32_t t138 = -105327;

    t138 = (((x569!=x570)%x571)<=x572);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x574 = INT64_MIN;
	int16_t x575 = -15;
	int8_t x576 = INT8_MIN;

    t139 = (((x573!=x574)%x575)<=x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = 2237;
	static int16_t x578 = INT16_MAX;
	static int16_t x579 = 10;
	uint8_t x580 = 0U;
	volatile int32_t t140 = -3148891;

    t140 = (((x577!=x578)%x579)<=x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x582 = INT64_MIN;
	int32_t x583 = 448554;
	volatile uint16_t x584 = 5346U;
	volatile int32_t t141 = -57432584;

    t141 = (((x581!=x582)%x583)<=x584);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = INT8_MIN;
	volatile int8_t x587 = 1;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t142 = -679;

    t142 = (((x585!=x586)%x587)<=x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = UINT64_MAX;
	static uint16_t x590 = 2U;
	int16_t x591 = -9;
	static uint32_t x592 = 7448U;
	static volatile int32_t t143 = 12010;

    t143 = (((x589!=x590)%x591)<=x592);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x594 = 1445U;
	static int16_t x595 = -1;
	int32_t x596 = -1;
	volatile int32_t t144 = -517;

    t144 = (((x593!=x594)%x595)<=x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x598 = INT64_MIN;
	volatile uint64_t x600 = 2370179354059865243LLU;
	static volatile int32_t t145 = 1;

    t145 = (((x597!=x598)%x599)<=x600);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 15052305376557LLU;
	int8_t x603 = INT8_MAX;
	uint16_t x604 = 7794U;
	int32_t t146 = -18014;

    t146 = (((x601!=x602)%x603)<=x604);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x605 = INT32_MAX;
	volatile int64_t x606 = INT64_MAX;
	uint32_t x607 = 1546650078U;
	int32_t t147 = 14456638;

    t147 = (((x605!=x606)%x607)<=x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x609 = UINT64_MAX;
	int8_t x611 = INT8_MIN;
	uint16_t x612 = 3752U;
	volatile int32_t t148 = 3;

    t148 = (((x609!=x610)%x611)<=x612);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x613 = 127U;
	int8_t x614 = INT8_MAX;
	uint16_t x615 = 11422U;
	int16_t x616 = INT16_MIN;
	volatile int32_t t149 = 1528;

    t149 = (((x613!=x614)%x615)<=x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x617 = UINT8_MAX;
	uint8_t x619 = UINT8_MAX;
	int32_t x620 = INT32_MIN;
	int32_t t150 = 817719;

    t150 = (((x617!=x618)%x619)<=x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x621 = -1;
	static uint64_t x622 = UINT64_MAX;
	volatile int32_t x623 = -1881006;
	uint8_t x624 = 0U;
	int32_t t151 = -862738845;

    t151 = (((x621!=x622)%x623)<=x624);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x625 = 7U;
	int64_t x626 = INT64_MIN;
	volatile uint8_t x627 = 1U;
	volatile uint32_t x628 = 901039U;
	int32_t t152 = -255;

    t152 = (((x625!=x626)%x627)<=x628);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x630 = 721;
	int32_t x631 = -1178;
	int16_t x632 = -1;
	static volatile int32_t t153 = -464;

    t153 = (((x629!=x630)%x631)<=x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x633 = INT64_MIN;
	uint64_t x634 = 494016041974957LLU;
	int8_t x635 = -1;
	static int64_t x636 = 3907942LL;
	volatile int32_t t154 = 695;

    t154 = (((x633!=x634)%x635)<=x636);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x638 = INT16_MIN;
	uint32_t x639 = UINT32_MAX;
	volatile int32_t t155 = -610069;

    t155 = (((x637!=x638)%x639)<=x640);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x641 = -4341538699338165202LL;
	volatile int16_t x642 = 10897;
	volatile int32_t t156 = 622263;

    t156 = (((x641!=x642)%x643)<=x644);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = 1530896450321923300LLU;
	static int64_t x646 = INT64_MIN;
	volatile int32_t x647 = INT32_MAX;
	uint8_t x648 = 39U;
	volatile int32_t t157 = -674441;

    t157 = (((x645!=x646)%x647)<=x648);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x649 = -1LL;
	static volatile int32_t x650 = 43;
	int32_t x651 = 297;
	uint32_t x652 = 1376U;
	int32_t t158 = -12692376;

    t158 = (((x649!=x650)%x651)<=x652);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x654 = -4305627708784LL;
	uint32_t x655 = UINT32_MAX;
	uint64_t x656 = 1630LLU;

    t159 = (((x653!=x654)%x655)<=x656);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x657 = 228LLU;
	int32_t x658 = INT32_MIN;
	int32_t x659 = INT32_MAX;
	static int32_t x660 = -1;
	volatile int32_t t160 = 704;

    t160 = (((x657!=x658)%x659)<=x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x661 = INT16_MIN;
	int32_t x664 = INT32_MIN;
	int32_t t161 = 95663554;

    t161 = (((x661!=x662)%x663)<=x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x669 = 6;
	int32_t x670 = -1;
	uint32_t x671 = 3518700U;
	uint64_t x672 = 4538923371380LLU;
	volatile int32_t t162 = 2;

    t162 = (((x669!=x670)%x671)<=x672);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x673 = 218930272;
	volatile int64_t x674 = INT64_MIN;
	int8_t x675 = 13;
	uint64_t x676 = 14814755477LLU;
	static int32_t t163 = -94720;

    t163 = (((x673!=x674)%x675)<=x676);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x678 = INT64_MAX;
	int16_t x679 = -1;
	static volatile uint16_t x680 = 2576U;
	int32_t t164 = 1602820;

    t164 = (((x677!=x678)%x679)<=x680);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = 4554721LL;
	int8_t x683 = INT8_MIN;
	static uint8_t x684 = 1U;

    t165 = (((x681!=x682)%x683)<=x684);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x685 = INT64_MIN;
	static uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 64U;
	int64_t x688 = 26052743871065082LL;
	int32_t t166 = -410;

    t166 = (((x685!=x686)%x687)<=x688);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MIN;
	uint32_t x690 = UINT32_MAX;
	static volatile int8_t x691 = INT8_MAX;
	int32_t x692 = -1;
	int32_t t167 = 235;

    t167 = (((x689!=x690)%x691)<=x692);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x693 = UINT64_MAX;
	int8_t x694 = -1;
	static volatile int64_t x695 = INT64_MIN;
	static uint8_t x696 = 26U;
	volatile int32_t t168 = -464699194;

    t168 = (((x693!=x694)%x695)<=x696);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = 10347;
	int32_t x699 = -1;
	int32_t t169 = -4;

    t169 = (((x697!=x698)%x699)<=x700);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x701 = 2968U;
	int8_t x702 = INT8_MIN;
	int64_t x703 = INT64_MIN;
	uint16_t x704 = 2U;
	volatile int32_t t170 = -36;

    t170 = (((x701!=x702)%x703)<=x704);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x706 = INT16_MIN;
	static uint16_t x707 = 25627U;
	int32_t x708 = INT32_MAX;
	static int32_t t171 = -732042090;

    t171 = (((x705!=x706)%x707)<=x708);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = INT64_MAX;
	volatile int32_t x710 = -1;
	int16_t x711 = -66;
	int16_t x712 = INT16_MAX;
	int32_t t172 = 11093;

    t172 = (((x709!=x710)%x711)<=x712);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = INT32_MAX;
	volatile int64_t x715 = INT64_MAX;
	static int32_t t173 = 45671;

    t173 = (((x713!=x714)%x715)<=x716);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = -1;
	uint32_t x723 = 55U;
	static uint32_t x724 = UINT32_MAX;
	volatile int32_t t174 = -12224;

    t174 = (((x721!=x722)%x723)<=x724);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x725 = 12U;
	volatile int64_t x726 = INT64_MIN;
	uint32_t x727 = 240696997U;
	int16_t x728 = -1;
	int32_t t175 = -1;

    t175 = (((x725!=x726)%x727)<=x728);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x730 = 23U;
	static volatile int32_t x731 = 7;
	static uint16_t x732 = 13919U;
	int32_t t176 = 24619646;

    t176 = (((x729!=x730)%x731)<=x732);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x734 = 6;
	int32_t x735 = -760;
	int32_t x736 = INT32_MIN;
	int32_t t177 = -734405;

    t177 = (((x733!=x734)%x735)<=x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x737 = -1;
	int16_t x738 = 281;
	static int8_t x740 = INT8_MIN;
	int32_t t178 = -11731;

    t178 = (((x737!=x738)%x739)<=x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x741 = 581251U;
	uint32_t x742 = 2131U;
	int32_t t179 = 1;

    t179 = (((x741!=x742)%x743)<=x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x745 = 674U;
	int16_t x746 = INT16_MAX;
	int8_t x747 = 5;
	int32_t t180 = 0;

    t180 = (((x745!=x746)%x747)<=x748);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x749 = 3U;
	static uint64_t x750 = 64597LLU;
	int8_t x752 = INT8_MAX;
	int32_t t181 = -46;

    t181 = (((x749!=x750)%x751)<=x752);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x753 = 0U;
	int16_t x754 = INT16_MIN;
	int64_t x756 = -52LL;
	int32_t t182 = 923334570;

    t182 = (((x753!=x754)%x755)<=x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x757 = INT32_MIN;
	int32_t x758 = INT32_MIN;
	static uint8_t x759 = UINT8_MAX;
	static int32_t t183 = -452;

    t183 = (((x757!=x758)%x759)<=x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x761 = 0;
	int64_t x762 = 15046432088512823LL;
	int32_t x763 = INT32_MAX;
	static int32_t t184 = 3147;

    t184 = (((x761!=x762)%x763)<=x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x765 = 441U;
	int16_t x766 = INT16_MIN;
	int64_t x767 = -1391140LL;
	volatile int64_t x768 = INT64_MIN;
	volatile int32_t t185 = 1;

    t185 = (((x765!=x766)%x767)<=x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x769 = INT8_MAX;
	static uint8_t x770 = 14U;
	uint64_t x772 = 0LLU;
	int32_t t186 = 93;

    t186 = (((x769!=x770)%x771)<=x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x774 = 1180315158531721606LL;
	int16_t x775 = INT16_MAX;
	uint8_t x776 = 1U;
	static int32_t t187 = -185607538;

    t187 = (((x773!=x774)%x775)<=x776);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x778 = UINT32_MAX;
	int16_t x779 = INT16_MIN;
	static volatile uint16_t x780 = 1U;
	int32_t t188 = 14987149;

    t188 = (((x777!=x778)%x779)<=x780);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x785 = -1LL;
	volatile int64_t x786 = -1LL;
	int16_t x788 = INT16_MAX;
	int32_t t189 = 5;

    t189 = (((x785!=x786)%x787)<=x788);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x789 = -1;
	int16_t x790 = 698;
	static int8_t x791 = -63;
	int32_t x792 = 145093;
	static volatile int32_t t190 = 88981;

    t190 = (((x789!=x790)%x791)<=x792);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x795 = UINT8_MAX;
	volatile int32_t t191 = -9196574;

    t191 = (((x793!=x794)%x795)<=x796);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = -3446;
	uint8_t x798 = 5U;
	int32_t x799 = -831;
	int16_t x800 = INT16_MIN;
	volatile int32_t t192 = -76;

    t192 = (((x797!=x798)%x799)<=x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x801 = 1U;
	int8_t x802 = INT8_MIN;
	int64_t x803 = -10165LL;
	static volatile int64_t x804 = INT64_MIN;
	static volatile int32_t t193 = 512928780;

    t193 = (((x801!=x802)%x803)<=x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = 14;
	volatile int32_t x806 = INT32_MAX;
	uint64_t x807 = 80371602LLU;
	static volatile int64_t x808 = INT64_MIN;
	int32_t t194 = -537099729;

    t194 = (((x805!=x806)%x807)<=x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = INT64_MIN;
	volatile int64_t x812 = 15907975601LL;
	int32_t t195 = -3;

    t195 = (((x809!=x810)%x811)<=x812);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x813 = INT64_MIN;
	volatile int32_t x814 = INT32_MAX;
	volatile int8_t x815 = INT8_MIN;
	int16_t x816 = 488;
	int32_t t196 = -24;

    t196 = (((x813!=x814)%x815)<=x816);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x817 = 582671608117964LLU;
	volatile int64_t x819 = INT64_MIN;
	volatile int32_t t197 = -466180675;

    t197 = (((x817!=x818)%x819)<=x820);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x821 = 0U;
	volatile uint8_t x822 = 108U;
	uint64_t x823 = UINT64_MAX;
	int32_t t198 = 14;

    t198 = (((x821!=x822)%x823)<=x824);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x826 = INT32_MIN;
	static volatile int64_t x827 = -1805514384LL;
	static volatile int32_t t199 = -39198535;

    t199 = (((x825!=x826)%x827)<=x828);

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

