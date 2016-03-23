
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

static int32_t x12 = INT32_MIN;
int8_t x28 = INT8_MIN;
static volatile uint16_t x30 = UINT16_MAX;
volatile int32_t t5 = -16732621;
volatile int16_t x38 = INT16_MAX;
volatile int8_t x44 = -1;
int64_t x73 = 4319186196298535702LL;
static volatile int32_t t12 = 36;
int32_t t13 = 484664;
volatile uint32_t x82 = UINT32_MAX;
int16_t x88 = 1;
int8_t x90 = 1;
uint32_t x94 = UINT32_MAX;
int16_t x98 = -14677;
uint8_t x102 = 0U;
static volatile int64_t x103 = INT64_MIN;
static uint8_t x105 = 3U;
uint64_t x108 = 1182488710390LLU;
volatile uint16_t x117 = 583U;
uint16_t x118 = 2334U;
int16_t x128 = INT16_MIN;
volatile int64_t x129 = -1LL;
static volatile int32_t t28 = -3;
int32_t x142 = -1;
uint16_t x147 = 33U;
static int16_t x150 = INT16_MIN;
int32_t t31 = -52;
volatile int32_t t32 = -588;
int64_t x159 = -1LL;
volatile int32_t x161 = -110;
uint8_t x167 = UINT8_MAX;
volatile int32_t t36 = -604790714;
uint32_t x176 = 0U;
volatile int32_t t37 = 271;
int8_t x180 = INT8_MIN;
volatile int32_t t38 = -1007120803;
int8_t x182 = INT8_MIN;
int64_t x183 = -1LL;
int64_t x184 = INT64_MAX;
static volatile int32_t t39 = 10;
static uint64_t x193 = UINT64_MAX;
int32_t x198 = -1;
uint16_t x201 = 94U;
volatile int64_t x206 = 234136LL;
int32_t x216 = -933;
static int32_t x221 = 2895;
static int8_t x222 = INT8_MIN;
volatile uint8_t x226 = 1U;
volatile int16_t x228 = INT16_MIN;
int32_t t50 = 641825;
volatile int8_t x229 = 0;
static volatile int8_t x233 = INT8_MIN;
volatile int32_t t52 = -12271441;
int8_t x245 = 2;
int32_t x248 = INT32_MIN;
static volatile int32_t x260 = -154109963;
int64_t x262 = 3LL;
static int8_t x266 = -1;
volatile int32_t t60 = 58;
int32_t x277 = 445;
uint16_t x279 = UINT16_MAX;
uint32_t x284 = 411U;
int64_t x289 = 1562722LL;
volatile int16_t x290 = -13891;
static int16_t x297 = -1;
static int32_t x299 = -1;
int16_t x300 = -167;
int64_t x309 = -20600256538LL;
uint32_t x313 = 10U;
int32_t t71 = 13;
int64_t x319 = -115250049LL;
static int64_t x320 = INT64_MIN;
volatile int32_t t72 = -40924801;
int8_t x323 = -1;
uint16_t x327 = 10300U;
int8_t x331 = -40;
int16_t x335 = INT16_MIN;
int16_t x345 = -1;
int16_t x346 = INT16_MAX;
int16_t x349 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
uint32_t x360 = 5U;
static int8_t x361 = INT8_MIN;
volatile int32_t t81 = 28;
volatile int32_t t82 = 0;
volatile int32_t t83 = -4726467;
static volatile uint8_t x387 = UINT8_MAX;
int16_t x393 = 15;
static int32_t x398 = 6;
uint8_t x425 = 13U;
volatile int8_t x426 = 1;
volatile int32_t x427 = INT32_MAX;
int16_t x430 = INT16_MIN;
int32_t x431 = -1;
static int32_t t96 = 19;
volatile uint16_t x436 = 21U;
static int8_t x441 = -1;
volatile int32_t t99 = 66111994;
int8_t x446 = INT8_MIN;
int32_t t100 = -1;
int32_t x452 = -29811;
uint8_t x455 = 105U;
uint32_t x458 = 699U;
int64_t x462 = -1LL;
static uint16_t x464 = 868U;
int64_t x472 = INT64_MAX;
volatile int16_t x473 = INT16_MIN;
volatile int32_t x475 = -13;
int32_t x482 = INT32_MIN;
uint32_t x483 = 1U;
int32_t t107 = -27;
static int8_t x489 = -45;
uint8_t x490 = 104U;
volatile int64_t x495 = INT64_MIN;
volatile uint64_t x497 = 26541432LLU;
int64_t x501 = -1LL;
static int64_t x503 = -1LL;
int64_t x504 = -1LL;
int32_t x509 = -1;
static int32_t x510 = INT32_MAX;
int8_t x513 = INT8_MIN;
int64_t x517 = -149244367939049017LL;
static int16_t x518 = INT16_MAX;
static volatile int32_t t117 = 512809;
int32_t t118 = 4812573;
int8_t x539 = -1;
int8_t x545 = -1;
int8_t x557 = INT8_MIN;
uint16_t x560 = UINT16_MAX;
int32_t t125 = -2;
static volatile uint64_t x568 = 2268LLU;
int64_t x582 = -1LL;
int32_t t130 = 3777;
int16_t x587 = INT16_MAX;
int32_t x588 = INT32_MIN;
static int16_t x595 = 265;
int32_t t134 = -299513;
uint16_t x611 = 2044U;
uint64_t x615 = 91513051LLU;
uint8_t x616 = UINT8_MAX;
int32_t t138 = 16299738;
int64_t x628 = 609251459065920427LL;
int64_t x632 = INT64_MAX;
int32_t t143 = -43;
int8_t x641 = -10;
static volatile int32_t t144 = 3126;
uint32_t x646 = 892307U;
uint16_t x648 = UINT16_MAX;
int32_t t145 = 389638;
uint64_t x650 = 145581334252LLU;
volatile int32_t t148 = 50;
static int64_t x668 = INT64_MAX;
int8_t x681 = 11;
int16_t x683 = 43;
int8_t x692 = -1;
int16_t x696 = INT16_MAX;
volatile int32_t t156 = -2018666;
int16_t x701 = 1;
volatile int32_t x704 = -1;
int32_t t157 = 824453;
int8_t x707 = -1;
static int32_t x708 = INT32_MAX;
uint16_t x712 = UINT16_MAX;
volatile int32_t t159 = 26077;
int8_t x718 = INT8_MIN;
static volatile uint8_t x724 = 3U;
uint32_t x726 = 49U;
volatile int32_t x736 = INT32_MIN;
static uint8_t x737 = 0U;
int16_t x739 = INT16_MIN;
static int16_t x740 = INT16_MIN;
uint32_t x742 = 74588156U;
static int8_t x747 = INT8_MIN;
volatile int64_t x756 = INT64_MIN;
volatile uint32_t x757 = 20085032U;
int8_t x761 = -25;
volatile int8_t x763 = -1;
int8_t x770 = -2;
volatile int32_t t171 = 9017001;
int64_t x774 = INT64_MIN;
int32_t x775 = INT32_MAX;
uint16_t x777 = 3U;
volatile int32_t t174 = -238;
int32_t t175 = 3778027;
volatile uint8_t x795 = 84U;
static volatile int32_t t177 = -30;
int8_t x798 = INT8_MIN;
int8_t x803 = 0;
int64_t x804 = -1LL;
volatile int32_t t179 = 170;
int8_t x808 = INT8_MAX;
int8_t x810 = INT8_MIN;
int64_t x826 = 392000934LL;
uint16_t x828 = 1603U;
int8_t x833 = INT8_MIN;
int64_t x838 = -1LL;
int32_t x842 = INT32_MAX;
static int64_t x844 = INT64_MIN;
uint8_t x852 = 6U;
int64_t x857 = INT64_MIN;
static volatile uint32_t x859 = 1U;
int8_t x870 = 1;
uint16_t x874 = 2U;
int32_t x875 = -1;
int32_t t194 = 88206;
int8_t x879 = 18;
uint8_t x885 = UINT8_MAX;
static int32_t x896 = INT32_MIN;


void f0(void) {
    	int8_t x1 = 1;
	volatile int32_t x2 = -351664553;
	volatile int16_t x3 = 6;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 15;

    t0 = (((x1-x2)^x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int32_t x6 = 398914702;
	int8_t x7 = -1;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 12528;

    t1 = (((x5-x6)^x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 7;
	volatile int8_t x10 = -1;
	volatile int32_t x11 = INT32_MIN;
	int32_t t2 = 143054;

    t2 = (((x9-x10)^x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	int16_t x18 = -2;
	uint64_t x19 = 56LLU;
	static int32_t x20 = -623020931;
	int32_t t3 = 162615;

    t3 = (((x17-x18)^x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = 4490588761416LLU;
	static int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	int32_t t4 = 417;

    t4 = (((x25-x26)^x27)==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -1;
	static volatile int16_t x31 = -75;
	int8_t x32 = -1;

    t5 = (((x29-x30)^x31)==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = -1;
	int16_t x34 = INT16_MAX;
	static uint8_t x35 = 1U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t6 = -16304315;

    t6 = (((x33-x34)^x35)==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = UINT32_MAX;
	int16_t x39 = 5454;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t7 = -1606288;

    t7 = (((x37-x38)^x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 58404883U;
	static volatile uint64_t x42 = 102317385LLU;
	static int64_t x43 = INT64_MIN;
	volatile int32_t t8 = -1;

    t8 = (((x41-x42)^x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x53 = 22194U;
	uint8_t x54 = 104U;
	int16_t x55 = -1;
	int32_t x56 = 26922;
	int32_t t9 = -60;

    t9 = (((x53-x54)^x55)==x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x65 = -1LL;
	static uint64_t x66 = 10682941LLU;
	static int16_t x67 = 840;
	static volatile int32_t x68 = INT32_MIN;
	volatile int32_t t10 = -1;

    t10 = (((x65-x66)^x67)==x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MAX;
	volatile int8_t x72 = -2;
	volatile int32_t t11 = 145707255;

    t11 = (((x69-x70)^x71)==x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x74 = 29;
	int64_t x75 = 320652LL;
	int8_t x76 = -1;

    t12 = (((x73-x74)^x75)==x76);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x77 = INT64_MAX;
	uint32_t x78 = UINT32_MAX;
	static int16_t x79 = INT16_MIN;
	static volatile int16_t x80 = -228;

    t13 = (((x77-x78)^x79)==x80);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = -231922101;
	int8_t x83 = INT8_MIN;
	int8_t x84 = 0;
	static volatile int32_t t14 = -13475577;

    t14 = (((x81-x82)^x83)==x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x85 = INT64_MAX;
	static uint32_t x86 = UINT32_MAX;
	int64_t x87 = INT64_MIN;
	volatile int32_t t15 = 2;

    t15 = (((x85-x86)^x87)==x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x89 = 2062829LLU;
	int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MIN;
	volatile int32_t t16 = -1;

    t16 = (((x89-x90)^x91)==x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x93 = 20;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MAX;
	volatile int32_t t17 = -23;

    t17 = (((x93-x94)^x95)==x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x97 = 21U;
	int32_t x99 = -1;
	int16_t x100 = INT16_MIN;
	int32_t t18 = 0;

    t18 = (((x97-x98)^x99)==x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = INT8_MAX;
	uint8_t x104 = 3U;
	volatile int32_t t19 = 18;

    t19 = (((x101-x102)^x103)==x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x106 = INT16_MIN;
	static int64_t x107 = INT64_MIN;
	int32_t t20 = 233978;

    t20 = (((x105-x106)^x107)==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x109 = UINT16_MAX;
	int16_t x110 = -1360;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = 1865U;
	int32_t t21 = -3529789;

    t21 = (((x109-x110)^x111)==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x113 = UINT32_MAX;
	static int8_t x114 = -1;
	static volatile uint8_t x115 = UINT8_MAX;
	int32_t x116 = 458223;
	volatile int32_t t22 = 334161;

    t22 = (((x113-x114)^x115)==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x119 = -1LL;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t23 = 6030283;

    t23 = (((x117-x118)^x119)==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = INT8_MAX;
	int8_t x122 = -1;
	static uint32_t x123 = 9590684U;
	int16_t x124 = -1;
	int32_t t24 = 436;

    t24 = (((x121-x122)^x123)==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = UINT64_MAX;
	int32_t x126 = 15;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t25 = -86910996;

    t25 = (((x125-x126)^x127)==x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x130 = INT8_MIN;
	volatile int32_t x131 = -1;
	uint8_t x132 = 12U;
	int32_t t26 = -5091;

    t26 = (((x129-x130)^x131)==x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x134 = -1;
	volatile int64_t x135 = 7LL;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t27 = -3755208;

    t27 = (((x133-x134)^x135)==x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x137 = UINT16_MAX;
	int8_t x138 = 47;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 21759822U;

    t28 = (((x137-x138)^x139)==x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = INT8_MIN;
	static uint64_t x143 = 52106687363LLU;
	uint64_t x144 = 554929LLU;
	int32_t t29 = -249001;

    t29 = (((x141-x142)^x143)==x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x145 = 15421U;
	uint64_t x146 = 191328337991211996LLU;
	volatile uint16_t x148 = 251U;
	static int32_t t30 = 0;

    t30 = (((x145-x146)^x147)==x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = -66;
	int64_t x151 = 646848939280089LL;
	static volatile int64_t x152 = -14052LL;

    t31 = (((x149-x150)^x151)==x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = INT8_MAX;
	int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;

    t32 = (((x153-x154)^x155)==x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x157 = 0U;
	uint8_t x158 = 46U;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t33 = -1278;

    t33 = (((x157-x158)^x159)==x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x162 = -1;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 494885U;
	volatile int32_t t34 = -26148;

    t34 = (((x161-x162)^x163)==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = 50U;
	int32_t x166 = -4748;
	uint8_t x168 = UINT8_MAX;
	int32_t t35 = 1;

    t35 = (((x165-x166)^x167)==x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x169 = -3980930983409LL;
	uint8_t x170 = 4U;
	int16_t x171 = 1679;
	static volatile uint16_t x172 = 1766U;

    t36 = (((x169-x170)^x171)==x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x173 = INT16_MIN;
	uint64_t x174 = UINT64_MAX;
	static int8_t x175 = -3;

    t37 = (((x173-x174)^x175)==x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = 7U;
	static int16_t x178 = -34;
	uint8_t x179 = UINT8_MAX;

    t38 = (((x177-x178)^x179)==x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x181 = INT16_MIN;

    t39 = (((x181-x182)^x183)==x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x185 = 1;
	int64_t x186 = 605LL;
	volatile uint16_t x187 = 3U;
	int32_t x188 = -47;
	volatile int32_t t40 = 356;

    t40 = (((x185-x186)^x187)==x188);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = -1;
	volatile int64_t x190 = INT64_MIN;
	uint32_t x191 = 91108U;
	int64_t x192 = INT64_MAX;
	int32_t t41 = 0;

    t41 = (((x189-x190)^x191)==x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x194 = 121U;
	int64_t x195 = 53325677625306LL;
	int16_t x196 = INT16_MAX;
	volatile int32_t t42 = -37;

    t42 = (((x193-x194)^x195)==x196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x197 = INT16_MIN;
	int32_t x199 = -1751;
	uint64_t x200 = 6LLU;
	volatile int32_t t43 = 85825;

    t43 = (((x197-x198)^x199)==x200);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x202 = 3U;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t44 = -255;

    t44 = (((x201-x202)^x203)==x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x205 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	static int32_t x208 = 309712996;
	int32_t t45 = -4003229;

    t45 = (((x205-x206)^x207)==x208);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int8_t x211 = 1;
	uint8_t x212 = 29U;
	static int32_t t46 = 5;

    t46 = (((x209-x210)^x211)==x212);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x213 = UINT8_MAX;
	uint32_t x214 = UINT32_MAX;
	static uint16_t x215 = UINT16_MAX;
	static int32_t t47 = -25465100;

    t47 = (((x213-x214)^x215)==x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x217 = 42U;
	int64_t x218 = -24LL;
	uint32_t x219 = 104280158U;
	uint8_t x220 = UINT8_MAX;
	static int32_t t48 = 146553274;

    t48 = (((x217-x218)^x219)==x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x223 = -1LL;
	uint32_t x224 = 259169206U;
	volatile int32_t t49 = 1426;

    t49 = (((x221-x222)^x223)==x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t x225 = 9068728033888LLU;
	static int32_t x227 = -1;

    t50 = (((x225-x226)^x227)==x228);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t51 = -17649;

    t51 = (((x229-x230)^x231)==x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x234 = 3;
	int32_t x235 = INT32_MAX;
	int8_t x236 = -3;

    t52 = (((x233-x234)^x235)==x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 7U;
	volatile uint8_t x238 = 26U;
	int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MAX;
	int32_t t53 = -11;

    t53 = (((x237-x238)^x239)==x240);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x242 = 4;
	static int16_t x243 = -1;
	uint32_t x244 = 1914749550U;
	int32_t t54 = -32;

    t54 = (((x241-x242)^x243)==x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x246 = -1LL;
	static int16_t x247 = INT16_MAX;
	static volatile int32_t t55 = 4026759;

    t55 = (((x245-x246)^x247)==x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = 303237;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	int32_t t56 = -419;

    t56 = (((x249-x250)^x251)==x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	volatile int32_t t57 = -3;

    t57 = (((x257-x258)^x259)==x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = INT8_MIN;
	uint16_t x263 = 2559U;
	uint8_t x264 = 23U;
	volatile int32_t t58 = -1008927023;

    t58 = (((x261-x262)^x263)==x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x265 = -1;
	int16_t x267 = -4;
	volatile uint8_t x268 = 0U;
	int32_t t59 = -1;

    t59 = (((x265-x266)^x267)==x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x269 = UINT16_MAX;
	uint32_t x270 = UINT32_MAX;
	uint64_t x271 = 4427156582187091761LLU;
	static int16_t x272 = INT16_MIN;

    t60 = (((x269-x270)^x271)==x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x273 = -2;
	volatile int8_t x274 = INT8_MIN;
	uint16_t x275 = 24722U;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t61 = 143;

    t61 = (((x273-x274)^x275)==x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x278 = 0U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t62 = 4334509;

    t62 = (((x277-x278)^x279)==x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x282 = 0U;
	volatile int64_t x283 = -1LL;
	int32_t t63 = 717242811;

    t63 = (((x281-x282)^x283)==x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 701253LLU;
	static int16_t x287 = -1;
	volatile int16_t x288 = -2224;
	int32_t t64 = 64145933;

    t64 = (((x285-x286)^x287)==x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x291 = INT32_MIN;
	int16_t x292 = -7;
	volatile int32_t t65 = 9;

    t65 = (((x289-x290)^x291)==x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MIN;
	int64_t x294 = -1LL;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	volatile int32_t t66 = 4975;

    t66 = (((x293-x294)^x295)==x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x298 = UINT32_MAX;
	int32_t t67 = -78460458;

    t67 = (((x297-x298)^x299)==x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = -1;
	int8_t x302 = -1;
	int8_t x303 = INT8_MAX;
	volatile int16_t x304 = INT16_MAX;
	volatile int32_t t68 = 1974;

    t68 = (((x301-x302)^x303)==x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	volatile uint64_t x306 = UINT64_MAX;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MAX;
	int32_t t69 = 862964;

    t69 = (((x305-x306)^x307)==x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x310 = 0;
	uint8_t x311 = 1U;
	int32_t x312 = -1;
	int32_t t70 = -255;

    t70 = (((x309-x310)^x311)==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x314 = 77;
	volatile uint64_t x315 = 15458153508LLU;
	int32_t x316 = INT32_MAX;

    t71 = (((x313-x314)^x315)==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MAX;

    t72 = (((x317-x318)^x319)==x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = -1;
	volatile uint8_t x322 = UINT8_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t73 = 1771;

    t73 = (((x321-x322)^x323)==x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x325 = INT16_MAX;
	static uint64_t x326 = 2112832785434594738LLU;
	int8_t x328 = INT8_MAX;
	int32_t t74 = -79958;

    t74 = (((x325-x326)^x327)==x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x329 = -10;
	uint32_t x330 = 57886419U;
	int32_t x332 = 961;
	int32_t t75 = -330;

    t75 = (((x329-x330)^x331)==x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x333 = -282279577949212524LL;
	volatile int8_t x334 = 0;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t76 = 106;

    t76 = (((x333-x334)^x335)==x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x347 = INT32_MIN;
	static uint32_t x348 = UINT32_MAX;
	static int32_t t77 = -103;

    t77 = (((x345-x346)^x347)==x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x350 = 72U;
	static uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t78 = 37;

    t78 = (((x349-x350)^x351)==x352);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = INT16_MAX;
	static int32_t x354 = 8797;
	static uint32_t x355 = 486137700U;
	int32_t t79 = -1130;

    t79 = (((x353-x354)^x355)==x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = INT16_MIN;
	volatile int32_t x358 = INT32_MIN;
	uint64_t x359 = 265917085126885118LLU;
	int32_t t80 = -428690;

    t80 = (((x357-x358)^x359)==x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x362 = UINT8_MAX;
	volatile int16_t x363 = -1;
	int32_t x364 = INT32_MIN;

    t81 = (((x361-x362)^x363)==x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = 2U;
	uint32_t x366 = 28778334U;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;

    t82 = (((x365-x366)^x367)==x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = 74893236595LL;
	int64_t x370 = 1LL;
	int64_t x371 = INT64_MAX;
	int64_t x372 = 246LL;

    t83 = (((x369-x370)^x371)==x372);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x377 = 43403311U;
	volatile int32_t x378 = INT32_MAX;
	static uint8_t x379 = UINT8_MAX;
	uint32_t x380 = 20269533U;
	static int32_t t84 = 129067;

    t84 = (((x377-x378)^x379)==x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t85 = 244;

    t85 = (((x381-x382)^x383)==x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MIN;
	uint8_t x388 = 7U;
	int32_t t86 = 9008145;

    t86 = (((x385-x386)^x387)==x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x389 = UINT64_MAX;
	static uint64_t x390 = 17LLU;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 2087480968LLU;
	int32_t t87 = -11346145;

    t87 = (((x389-x390)^x391)==x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x394 = 260961164517306LLU;
	int32_t x395 = 2030401;
	volatile int32_t x396 = -1;
	volatile int32_t t88 = 0;

    t88 = (((x393-x394)^x395)==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = 1;
	volatile uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MIN;
	int32_t t89 = -47;

    t89 = (((x397-x398)^x399)==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = -1;
	static int8_t x402 = 33;
	int16_t x403 = -7369;
	static uint64_t x404 = 79LLU;
	volatile int32_t t90 = 511419279;

    t90 = (((x401-x402)^x403)==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x405 = 26U;
	static uint32_t x406 = UINT32_MAX;
	uint16_t x407 = 3U;
	int8_t x408 = -1;
	int32_t t91 = 38075;

    t91 = (((x405-x406)^x407)==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = -792189452;
	int8_t x410 = -1;
	volatile int32_t x411 = 146078178;
	int64_t x412 = INT64_MAX;
	int32_t t92 = -14;

    t92 = (((x409-x410)^x411)==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x417 = 472U;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -11783511;
	int8_t x420 = INT8_MAX;
	static volatile int32_t t93 = 2;

    t93 = (((x417-x418)^x419)==x420);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = -1;
	static int8_t x422 = INT8_MIN;
	uint64_t x423 = 36LLU;
	int16_t x424 = INT16_MAX;
	static int32_t t94 = 760084893;

    t94 = (((x421-x422)^x423)==x424);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x428 = UINT64_MAX;
	int32_t t95 = 1751560;

    t95 = (((x425-x426)^x427)==x428);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x429 = UINT16_MAX;
	int64_t x432 = INT64_MIN;

    t96 = (((x429-x430)^x431)==x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x433 = 1U;
	int16_t x434 = -1;
	int16_t x435 = -1;
	static volatile int32_t t97 = 3300;

    t97 = (((x433-x434)^x435)==x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x437 = INT64_MIN;
	volatile int16_t x438 = -1;
	uint8_t x439 = UINT8_MAX;
	uint16_t x440 = 75U;
	static volatile int32_t t98 = -130117;

    t98 = (((x437-x438)^x439)==x440);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x442 = UINT64_MAX;
	static int32_t x443 = -60938;
	uint64_t x444 = 8360LLU;

    t99 = (((x441-x442)^x443)==x444);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x445 = -1;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;

    t100 = (((x445-x446)^x447)==x448);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x449 = INT16_MIN;
	int32_t x450 = INT32_MIN;
	int32_t x451 = -1;
	static int32_t t101 = -50025524;

    t101 = (((x449-x450)^x451)==x452);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x453 = -12072LL;
	int16_t x454 = INT16_MAX;
	static int16_t x456 = -2192;
	int32_t t102 = 100;

    t102 = (((x453-x454)^x455)==x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x457 = 5U;
	uint32_t x459 = 36600U;
	int8_t x460 = -4;
	volatile int32_t t103 = -101;

    t103 = (((x457-x458)^x459)==x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x461 = 10U;
	static int32_t x463 = -1;
	static volatile int32_t t104 = -197;

    t104 = (((x461-x462)^x463)==x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x469 = UINT32_MAX;
	uint64_t x470 = 302LLU;
	uint8_t x471 = 9U;
	volatile int32_t t105 = 1;

    t105 = (((x469-x470)^x471)==x472);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x474 = INT64_MIN;
	volatile uint8_t x476 = UINT8_MAX;
	static int32_t t106 = 43372;

    t106 = (((x473-x474)^x475)==x476);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x481 = UINT32_MAX;
	int8_t x484 = 15;

    t107 = (((x481-x482)^x483)==x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x485 = 26514LLU;
	volatile int16_t x486 = -1;
	int64_t x487 = -1786545057690258LL;
	uint16_t x488 = 15964U;
	int32_t t108 = 9;

    t108 = (((x485-x486)^x487)==x488);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x491 = INT32_MIN;
	volatile int64_t x492 = INT64_MIN;
	volatile int32_t t109 = 5;

    t109 = (((x489-x490)^x491)==x492);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x493 = INT8_MIN;
	uint64_t x494 = 154450953668913256LLU;
	uint8_t x496 = 93U;
	int32_t t110 = -49306790;

    t110 = (((x493-x494)^x495)==x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x498 = INT8_MIN;
	static int64_t x499 = INT64_MIN;
	uint8_t x500 = 10U;
	volatile int32_t t111 = 0;

    t111 = (((x497-x498)^x499)==x500);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x502 = 4U;
	int32_t t112 = -68;

    t112 = (((x501-x502)^x503)==x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	int64_t x508 = INT64_MIN;
	volatile int32_t t113 = 6;

    t113 = (((x505-x506)^x507)==x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x511 = 85U;
	int32_t x512 = INT32_MAX;
	int32_t t114 = 351930644;

    t114 = (((x509-x510)^x511)==x512);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x514 = 353866LLU;
	volatile uint64_t x515 = 263329327LLU;
	int64_t x516 = INT64_MIN;
	static int32_t t115 = -3775517;

    t115 = (((x513-x514)^x515)==x516);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x519 = UINT16_MAX;
	uint64_t x520 = 22LLU;
	volatile int32_t t116 = -126683;

    t116 = (((x517-x518)^x519)==x520);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x521 = 242U;
	volatile int8_t x522 = INT8_MIN;
	uint64_t x523 = 199949982802877012LLU;
	int32_t x524 = INT32_MIN;

    t117 = (((x521-x522)^x523)==x524);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x529 = 7704;
	volatile int64_t x530 = -1LL;
	volatile int8_t x531 = INT8_MIN;
	int8_t x532 = INT8_MIN;

    t118 = (((x529-x530)^x531)==x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x537 = INT32_MIN;
	volatile int8_t x538 = -1;
	uint8_t x540 = 53U;
	int32_t t119 = -4774;

    t119 = (((x537-x538)^x539)==x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x541 = 0;
	static volatile uint16_t x542 = UINT16_MAX;
	static int16_t x543 = INT16_MIN;
	uint8_t x544 = 0U;
	int32_t t120 = 127216113;

    t120 = (((x541-x542)^x543)==x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x546 = INT16_MIN;
	int8_t x547 = -5;
	int16_t x548 = INT16_MIN;
	volatile int32_t t121 = -22647782;

    t121 = (((x545-x546)^x547)==x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x549 = -1;
	int64_t x550 = INT64_MAX;
	int64_t x551 = -1LL;
	static int32_t x552 = INT32_MAX;
	volatile int32_t t122 = -1;

    t122 = (((x549-x550)^x551)==x552);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x553 = 1;
	uint16_t x554 = 11002U;
	int64_t x555 = INT64_MIN;
	volatile int8_t x556 = -3;
	static volatile int32_t t123 = -1;

    t123 = (((x553-x554)^x555)==x556);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x558 = INT16_MIN;
	static int16_t x559 = 1;
	volatile int32_t t124 = -1005980569;

    t124 = (((x557-x558)^x559)==x560);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x561 = 1040U;
	static int16_t x562 = INT16_MIN;
	volatile int64_t x563 = INT64_MIN;
	int64_t x564 = INT64_MAX;

    t125 = (((x561-x562)^x563)==x564);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x565 = INT32_MIN;
	int16_t x566 = -1;
	static int64_t x567 = -1067900984LL;
	volatile int32_t t126 = 1457658;

    t126 = (((x565-x566)^x567)==x568);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x569 = 0LLU;
	int32_t x570 = -1;
	uint16_t x571 = UINT16_MAX;
	int64_t x572 = INT64_MAX;
	int32_t t127 = 756;

    t127 = (((x569-x570)^x571)==x572);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x573 = INT64_MIN;
	int64_t x574 = INT64_MIN;
	int64_t x575 = 346LL;
	int8_t x576 = INT8_MIN;
	volatile int32_t t128 = -10;

    t128 = (((x573-x574)^x575)==x576);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = INT8_MAX;
	static uint64_t x578 = 221936LLU;
	uint64_t x579 = 643624LLU;
	int16_t x580 = 422;
	volatile int32_t t129 = -1753262;

    t129 = (((x577-x578)^x579)==x580);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x581 = 7393;
	uint16_t x583 = 1U;
	static int32_t x584 = INT32_MAX;

    t130 = (((x581-x582)^x583)==x584);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x585 = INT8_MAX;
	int16_t x586 = -4;
	volatile int32_t t131 = -2427;

    t131 = (((x585-x586)^x587)==x588);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x589 = -1;
	int32_t x590 = INT32_MIN;
	uint8_t x591 = UINT8_MAX;
	int8_t x592 = INT8_MIN;
	volatile int32_t t132 = 6747;

    t132 = (((x589-x590)^x591)==x592);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x593 = -1;
	static uint32_t x594 = 852U;
	static uint64_t x596 = 63LLU;
	static int32_t t133 = -241126268;

    t133 = (((x593-x594)^x595)==x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x597 = UINT16_MAX;
	uint64_t x598 = UINT64_MAX;
	uint32_t x599 = UINT32_MAX;
	uint64_t x600 = 9031709LLU;

    t134 = (((x597-x598)^x599)==x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x605 = INT16_MAX;
	static int16_t x606 = -222;
	static volatile int32_t x607 = INT32_MIN;
	volatile uint32_t x608 = UINT32_MAX;
	volatile int32_t t135 = 5;

    t135 = (((x605-x606)^x607)==x608);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = 3;
	int32_t x612 = INT32_MAX;
	static volatile int32_t t136 = -236472;

    t136 = (((x609-x610)^x611)==x612);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x613 = 4326589821214LL;
	int32_t x614 = INT32_MAX;
	int32_t t137 = -3672;

    t137 = (((x613-x614)^x615)==x616);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x617 = -1;
	int64_t x618 = -1LL;
	int64_t x619 = 478299814972248LL;
	int32_t x620 = INT32_MIN;

    t138 = (((x617-x618)^x619)==x620);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x621 = 63112553172LL;
	uint16_t x622 = UINT16_MAX;
	int8_t x623 = 1;
	int32_t x624 = 43;
	int32_t t139 = -2346;

    t139 = (((x621-x622)^x623)==x624);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x625 = 2;
	int8_t x626 = -1;
	int8_t x627 = INT8_MIN;
	volatile int32_t t140 = 7;

    t140 = (((x625-x626)^x627)==x628);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x629 = INT64_MAX;
	uint64_t x630 = 30117862LLU;
	int32_t x631 = -79135696;
	volatile int32_t t141 = 8777497;

    t141 = (((x629-x630)^x631)==x632);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x633 = 0;
	uint16_t x634 = 312U;
	volatile int32_t x635 = -1;
	int16_t x636 = 12;
	static volatile int32_t t142 = -751272;

    t142 = (((x633-x634)^x635)==x636);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x637 = INT16_MIN;
	uint64_t x638 = UINT64_MAX;
	volatile int64_t x639 = -4166370995LL;
	int64_t x640 = INT64_MIN;

    t143 = (((x637-x638)^x639)==x640);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x642 = 0;
	uint32_t x643 = 1059165611U;
	int32_t x644 = 5531;

    t144 = (((x641-x642)^x643)==x644);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x645 = INT64_MAX;
	uint8_t x647 = UINT8_MAX;

    t145 = (((x645-x646)^x647)==x648);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x649 = -1432;
	int8_t x651 = INT8_MIN;
	int32_t x652 = -407;
	int32_t t146 = -12;

    t146 = (((x649-x650)^x651)==x652);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x653 = 4286377560LLU;
	int64_t x654 = -7116LL;
	volatile int64_t x655 = INT64_MIN;
	static uint8_t x656 = UINT8_MAX;
	int32_t t147 = 1466520;

    t147 = (((x653-x654)^x655)==x656);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x657 = -1;
	uint32_t x658 = UINT32_MAX;
	volatile int8_t x659 = -1;
	uint16_t x660 = 2U;

    t148 = (((x657-x658)^x659)==x660);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x665 = 5;
	int64_t x666 = INT64_MAX;
	int16_t x667 = 106;
	volatile int32_t t149 = -8;

    t149 = (((x665-x666)^x667)==x668);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x673 = -1;
	static int64_t x674 = INT64_MIN;
	static uint16_t x675 = UINT16_MAX;
	int16_t x676 = 213;
	volatile int32_t t150 = -1;

    t150 = (((x673-x674)^x675)==x676);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x677 = -318199129;
	int64_t x678 = INT64_MIN;
	int32_t x679 = INT32_MAX;
	int16_t x680 = -1;
	int32_t t151 = 6;

    t151 = (((x677-x678)^x679)==x680);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x682 = INT32_MAX;
	static int16_t x684 = -1;
	int32_t t152 = 8426;

    t152 = (((x681-x682)^x683)==x684);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = -2;
	static int64_t x686 = -1LL;
	uint32_t x687 = 696327U;
	volatile int64_t x688 = 1126694141219570LL;
	volatile int32_t t153 = 541059918;

    t153 = (((x685-x686)^x687)==x688);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x689 = 1205U;
	volatile int8_t x690 = INT8_MAX;
	int8_t x691 = INT8_MIN;
	static int32_t t154 = -14944;

    t154 = (((x689-x690)^x691)==x692);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x693 = 1948U;
	int8_t x694 = INT8_MAX;
	volatile int32_t x695 = -1;
	volatile int32_t t155 = 1294;

    t155 = (((x693-x694)^x695)==x696);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x697 = 246173U;
	static int8_t x698 = -1;
	int16_t x699 = INT16_MIN;
	uint32_t x700 = 234126573U;

    t156 = (((x697-x698)^x699)==x700);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x702 = 28718;
	int16_t x703 = -1;

    t157 = (((x701-x702)^x703)==x704);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x705 = INT16_MAX;
	volatile uint32_t x706 = 0U;
	volatile int32_t t158 = 5703;

    t158 = (((x705-x706)^x707)==x708);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x709 = 392;
	int64_t x710 = -1LL;
	int32_t x711 = 547495344;

    t159 = (((x709-x710)^x711)==x712);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x717 = UINT64_MAX;
	uint64_t x719 = 532LLU;
	uint32_t x720 = 217548U;
	volatile int32_t t160 = 261129;

    t160 = (((x717-x718)^x719)==x720);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x721 = 181045LL;
	int32_t x722 = -235611256;
	volatile int64_t x723 = 6462622LL;
	int32_t t161 = 29495;

    t161 = (((x721-x722)^x723)==x724);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x725 = INT8_MIN;
	static int32_t x727 = 0;
	volatile int64_t x728 = -1LL;
	int32_t t162 = -1;

    t162 = (((x725-x726)^x727)==x728);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x729 = INT16_MIN;
	uint32_t x730 = 34U;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = 0U;
	int32_t t163 = 695095696;

    t163 = (((x729-x730)^x731)==x732);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x733 = -1;
	static int32_t x734 = INT32_MAX;
	int32_t x735 = -1525;
	volatile int32_t t164 = -231593969;

    t164 = (((x733-x734)^x735)==x736);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x738 = -1LL;
	volatile int32_t t165 = 26980958;

    t165 = (((x737-x738)^x739)==x740);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x741 = 7U;
	int16_t x743 = -1;
	volatile uint16_t x744 = 6846U;
	int32_t t166 = -504162064;

    t166 = (((x741-x742)^x743)==x744);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x745 = -12869452346985081LL;
	volatile int8_t x746 = -1;
	volatile int64_t x748 = 192427643811LL;
	volatile int32_t t167 = -3;

    t167 = (((x745-x746)^x747)==x748);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x754 = INT16_MAX;
	uint64_t x755 = 2119522731531700LLU;
	volatile int32_t t168 = 160386;

    t168 = (((x753-x754)^x755)==x756);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x758 = 1;
	uint64_t x759 = 2171365029368LLU;
	int32_t x760 = INT32_MIN;
	int32_t t169 = -210;

    t169 = (((x757-x758)^x759)==x760);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x762 = UINT32_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t170 = 1536068;

    t170 = (((x761-x762)^x763)==x764);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x769 = -1LL;
	int8_t x771 = INT8_MIN;
	int16_t x772 = INT16_MIN;

    t171 = (((x769-x770)^x771)==x772);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x773 = -1;
	static uint32_t x776 = UINT32_MAX;
	volatile int32_t t172 = 98047;

    t172 = (((x773-x774)^x775)==x776);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x778 = -2452LL;
	int64_t x779 = 1193LL;
	int64_t x780 = INT64_MIN;
	int32_t t173 = -8225;

    t173 = (((x777-x778)^x779)==x780);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x781 = -61;
	static uint64_t x782 = UINT64_MAX;
	int8_t x783 = 11;
	uint8_t x784 = 20U;

    t174 = (((x781-x782)^x783)==x784);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x785 = INT32_MIN;
	int64_t x786 = INT64_MIN;
	int64_t x787 = -1LL;
	uint32_t x788 = UINT32_MAX;

    t175 = (((x785-x786)^x787)==x788);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x789 = INT8_MIN;
	int32_t x790 = 0;
	uint32_t x791 = 2887554U;
	uint64_t x792 = 1289203134144LLU;
	static int32_t t176 = 16590;

    t176 = (((x789-x790)^x791)==x792);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x793 = -63168130;
	int32_t x794 = 42777197;
	int32_t x796 = INT32_MIN;

    t177 = (((x793-x794)^x795)==x796);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x797 = UINT16_MAX;
	uint8_t x799 = UINT8_MAX;
	volatile int64_t x800 = INT64_MIN;
	int32_t t178 = 928366596;

    t178 = (((x797-x798)^x799)==x800);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x801 = 1577049U;
	static volatile int64_t x802 = -48LL;

    t179 = (((x801-x802)^x803)==x804);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x805 = INT8_MIN;
	uint16_t x806 = 0U;
	static volatile uint16_t x807 = 9167U;
	int32_t t180 = 7699;

    t180 = (((x805-x806)^x807)==x808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x809 = -251273297920LL;
	int32_t x811 = -7;
	int8_t x812 = INT8_MIN;
	static volatile int32_t t181 = 6;

    t181 = (((x809-x810)^x811)==x812);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x821 = 1115309U;
	volatile int64_t x822 = INT64_MAX;
	uint32_t x823 = UINT32_MAX;
	static volatile int8_t x824 = -5;
	int32_t t182 = -2303;

    t182 = (((x821-x822)^x823)==x824);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x825 = 10457LL;
	uint32_t x827 = 2504U;
	volatile int32_t t183 = -598;

    t183 = (((x825-x826)^x827)==x828);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x834 = INT16_MIN;
	uint16_t x835 = UINT16_MAX;
	int32_t x836 = INT32_MAX;
	static int32_t t184 = 185;

    t184 = (((x833-x834)^x835)==x836);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x837 = -1LL;
	int64_t x839 = INT64_MAX;
	int16_t x840 = -2879;
	int32_t t185 = -45427;

    t185 = (((x837-x838)^x839)==x840);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x841 = INT8_MAX;
	int8_t x843 = -1;
	volatile int32_t t186 = -43677924;

    t186 = (((x841-x842)^x843)==x844);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x845 = 20U;
	volatile uint8_t x846 = UINT8_MAX;
	volatile uint8_t x847 = UINT8_MAX;
	int64_t x848 = INT64_MIN;
	int32_t t187 = -10848450;

    t187 = (((x845-x846)^x847)==x848);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x849 = -256;
	static uint64_t x850 = 10913LLU;
	static int8_t x851 = INT8_MAX;
	int32_t t188 = -11895580;

    t188 = (((x849-x850)^x851)==x852);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x853 = -516061;
	volatile uint64_t x854 = UINT64_MAX;
	volatile int16_t x855 = INT16_MAX;
	uint32_t x856 = 218759493U;
	int32_t t189 = 2;

    t189 = (((x853-x854)^x855)==x856);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x858 = INT32_MIN;
	int8_t x860 = INT8_MIN;
	int32_t t190 = -774473;

    t190 = (((x857-x858)^x859)==x860);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x861 = INT8_MAX;
	uint32_t x862 = 4906U;
	static volatile int16_t x863 = -97;
	static volatile int64_t x864 = -1LL;
	int32_t t191 = 93;

    t191 = (((x861-x862)^x863)==x864);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x865 = 336245116067LLU;
	int16_t x866 = -8;
	volatile int16_t x867 = -1;
	int8_t x868 = -22;
	int32_t t192 = 353635760;

    t192 = (((x865-x866)^x867)==x868);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x869 = -1LL;
	int32_t x871 = INT32_MAX;
	uint64_t x872 = UINT64_MAX;
	volatile int32_t t193 = 4723753;

    t193 = (((x869-x870)^x871)==x872);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x873 = 95583LLU;
	volatile int8_t x876 = 1;

    t194 = (((x873-x874)^x875)==x876);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x877 = 51;
	static volatile int32_t x878 = -1;
	uint64_t x880 = UINT64_MAX;
	volatile int32_t t195 = -169050;

    t195 = (((x877-x878)^x879)==x880);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x881 = -3840;
	static int8_t x882 = INT8_MAX;
	volatile int8_t x883 = 3;
	int32_t x884 = INT32_MIN;
	static int32_t t196 = 2;

    t196 = (((x881-x882)^x883)==x884);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x886 = -1;
	static int64_t x887 = 10LL;
	volatile int64_t x888 = INT64_MIN;
	int32_t t197 = -359;

    t197 = (((x885-x886)^x887)==x888);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = 138067743;
	int16_t x891 = INT16_MIN;
	uint16_t x892 = UINT16_MAX;
	int32_t t198 = -26989497;

    t198 = (((x889-x890)^x891)==x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x893 = INT8_MAX;
	volatile uint16_t x894 = UINT16_MAX;
	uint64_t x895 = 2108LLU;
	static volatile int32_t t199 = -15082559;

    t199 = (((x893-x894)^x895)==x896);

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

