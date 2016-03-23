
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

volatile int8_t x5 = INT8_MIN;
uint8_t x6 = 20U;
int16_t x7 = INT16_MIN;
int16_t x10 = INT16_MIN;
uint32_t x13 = 1750114U;
int64_t x15 = 0LL;
uint32_t x29 = UINT32_MAX;
volatile int16_t x35 = INT16_MIN;
volatile int32_t t7 = -7841;
uint8_t x43 = 24U;
volatile int32_t t9 = 189279;
uint16_t x46 = 2U;
volatile int8_t x51 = -3;
int32_t x54 = INT32_MIN;
static volatile int32_t x55 = -85;
int64_t x57 = -32636038064LL;
static uint64_t x63 = 8201496993496370933LLU;
volatile int8_t x64 = -49;
int16_t x72 = INT16_MIN;
static volatile uint8_t x74 = 1U;
int32_t x75 = -32490576;
int8_t x77 = INT8_MIN;
uint16_t x79 = 2493U;
volatile int32_t x85 = -1;
int64_t x88 = INT64_MIN;
static volatile uint8_t x89 = UINT8_MAX;
volatile int8_t x93 = -1;
volatile int32_t x94 = INT32_MAX;
int32_t t23 = -53;
volatile int32_t t24 = -14;
int8_t x111 = INT8_MIN;
int16_t x113 = -1;
int32_t t27 = 1729;
int32_t t28 = -11059575;
int64_t x121 = 5LL;
int32_t t29 = -27615423;
static int32_t t31 = 83494294;
int16_t x133 = -1;
static volatile int8_t x135 = 1;
static uint8_t x136 = 78U;
uint16_t x149 = 13U;
static int32_t t36 = 11373;
int32_t x154 = -1;
volatile int8_t x155 = INT8_MIN;
int32_t x158 = 41;
int16_t x167 = INT16_MIN;
uint64_t x173 = 377244005575599LLU;
uint64_t x180 = 32LLU;
int32_t x183 = 1066796034;
volatile uint8_t x185 = UINT8_MAX;
uint16_t x196 = UINT16_MAX;
static uint16_t x200 = 7250U;
int32_t t47 = -403402;
uint16_t x204 = UINT16_MAX;
int32_t x208 = INT32_MAX;
static volatile int32_t t50 = -119341493;
volatile int16_t x215 = INT16_MIN;
int16_t x216 = 84;
uint8_t x230 = 5U;
volatile int32_t t55 = -2273099;
int64_t x237 = INT64_MIN;
int8_t x240 = -1;
static uint64_t x245 = UINT64_MAX;
static int8_t x248 = 1;
int32_t t61 = 1;
volatile int16_t x265 = INT16_MIN;
static int32_t x268 = 607175;
volatile int32_t x270 = -1;
static int64_t x272 = -6292LL;
static int8_t x280 = -3;
uint16_t x281 = 26U;
uint8_t x288 = 120U;
int32_t t67 = -2038346;
volatile int16_t x299 = INT16_MIN;
int32_t x303 = -1;
static uint16_t x307 = 1U;
volatile uint64_t x323 = UINT64_MAX;
volatile int32_t t76 = 9;
uint8_t x330 = UINT8_MAX;
volatile int32_t x368 = 3730;
uint64_t x370 = 3373625173LLU;
uint8_t x373 = 2U;
int16_t x379 = -1;
int8_t x382 = 1;
int64_t x389 = INT64_MIN;
static int8_t x392 = -1;
int32_t x393 = INT32_MIN;
int8_t x394 = INT8_MIN;
volatile uint16_t x402 = UINT16_MAX;
int16_t x407 = INT16_MIN;
int64_t x411 = INT64_MIN;
uint16_t x412 = 425U;
int32_t t97 = -180708;
int16_t x416 = INT16_MIN;
int8_t x421 = -1;
static uint8_t x422 = UINT8_MAX;
static int32_t t101 = 23;
int32_t x430 = INT32_MAX;
uint8_t x434 = UINT8_MAX;
uint32_t x450 = 439049U;
static uint32_t x451 = 9671U;
int8_t x454 = -1;
volatile int8_t x471 = INT8_MIN;
int64_t x478 = INT64_MIN;
static uint8_t x480 = UINT8_MAX;
int64_t x487 = INT64_MAX;
int16_t x490 = INT16_MAX;
static uint64_t x503 = 1540822970989LLU;
int32_t t120 = -171899503;
volatile int64_t x509 = -5LL;
volatile int64_t x511 = INT64_MIN;
int64_t x516 = -101LL;
volatile int64_t x518 = -1LL;
volatile uint64_t x522 = 5785190479LLU;
int8_t x529 = -1;
static volatile int32_t t127 = 23220;
int8_t x557 = INT8_MIN;
static int16_t x560 = INT16_MIN;
volatile int8_t x561 = INT8_MIN;
uint32_t x565 = 12753489U;
volatile int32_t t134 = 1987;
int64_t x572 = INT64_MIN;
int8_t x573 = -48;
int8_t x577 = 20;
int32_t t137 = 1;
uint64_t x583 = 989840955983LLU;
static int64_t x586 = 20573220296LL;
int16_t x590 = INT16_MIN;
uint8_t x592 = 43U;
int32_t t140 = 385031256;
int8_t x599 = INT8_MIN;
int8_t x601 = -13;
volatile int64_t x620 = -16696927856LL;
static int32_t x625 = INT32_MAX;
volatile int64_t x632 = 27722433LL;
volatile int32_t t149 = -19262;
int32_t x633 = INT32_MIN;
uint8_t x643 = 108U;
uint16_t x644 = UINT16_MAX;
volatile uint16_t x647 = 157U;
volatile int32_t t153 = -2840;
static uint16_t x650 = 122U;
static int8_t x651 = -1;
int16_t x657 = -1;
static volatile uint32_t x658 = 844213U;
int32_t x659 = -1;
static volatile int32_t x661 = INT32_MIN;
int32_t t157 = 8830;
uint64_t x667 = UINT64_MAX;
int16_t x678 = -30;
int16_t x688 = 9951;
static volatile int8_t x690 = INT8_MAX;
static int16_t x694 = 51;
int64_t x708 = INT64_MIN;
int32_t x714 = -4615;
int32_t x715 = INT32_MAX;
static int16_t x717 = INT16_MIN;
int16_t x719 = 0;
uint32_t x720 = 104724U;
static uint32_t x723 = 3696U;
int32_t t171 = -3793;
int32_t x732 = 385215;
volatile int32_t t173 = -196566;
volatile uint8_t x736 = 1U;
static volatile int32_t t174 = 1511;
static volatile int32_t x738 = INT32_MIN;
int32_t x743 = INT32_MIN;
volatile int32_t t176 = 777;
int32_t t177 = -1;
volatile int32_t t178 = 65;
volatile int8_t x753 = INT8_MIN;
int64_t x754 = INT64_MAX;
static volatile uint8_t x756 = 1U;
int32_t t182 = 89925180;
volatile int64_t x773 = -1LL;
static uint32_t x776 = 6657U;
volatile int32_t t185 = 114011721;
static uint64_t x793 = UINT64_MAX;
int32_t x794 = INT32_MAX;
uint8_t x803 = 4U;
volatile int8_t x818 = -1;
static int16_t x823 = INT16_MIN;
int32_t x828 = INT32_MAX;
static volatile int32_t t197 = -219;
volatile int64_t x838 = INT64_MIN;
static volatile int32_t t198 = -239;
int8_t x841 = INT8_MIN;
int16_t x843 = INT16_MAX;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static volatile uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = INT32_MAX;
	int8_t x4 = 1;
	volatile int32_t t0 = -1;

    t0 = ((x1/(x2!=x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 9955960;

    t1 = ((x5/(x6!=x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 52;

    t2 = ((x9/(x10!=x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = 30051426347419720LL;
	uint32_t x16 = 56U;
	int32_t t3 = 3207;

    t3 = ((x13/(x14!=x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int32_t x18 = 435234205;
	int32_t x19 = -1;
	uint16_t x20 = 44U;
	volatile int32_t t4 = -25344649;

    t4 = ((x17/(x18!=x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MAX;
	static volatile uint32_t x26 = 200720U;
	uint16_t x27 = UINT16_MAX;
	volatile uint32_t x28 = 100U;
	int32_t t5 = 177266;

    t5 = ((x25/(x26!=x27))<=x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = -4404429171106848LL;
	static volatile uint8_t x31 = 16U;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = -10;

    t6 = ((x29/(x30!=x31))<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -171349408;
	static int16_t x34 = INT16_MAX;
	uint8_t x36 = UINT8_MAX;

    t7 = ((x33/(x34!=x35))<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = -9;
	static int64_t x38 = INT64_MIN;
	uint32_t x39 = 6756929U;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -5;

    t8 = ((x37/(x38!=x39))<=x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 4U;
	static int8_t x42 = 1;
	static volatile uint8_t x44 = 20U;

    t9 = ((x41/(x42!=x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	volatile int64_t x47 = 180LL;
	static int16_t x48 = INT16_MAX;
	static volatile int32_t t10 = -10;

    t10 = ((x45/(x46!=x47))<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x49 = 15647209U;
	static int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t11 = -683828;

    t11 = ((x49/(x50!=x51))<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x56 = -1;
	static volatile int32_t t12 = 155150084;

    t12 = ((x53/(x54!=x55))<=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x58 = UINT16_MAX;
	volatile int32_t x59 = -390505153;
	int16_t x60 = -1;
	int32_t t13 = -1686;

    t13 = ((x57/(x58!=x59))<=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x61 = 333U;
	uint32_t x62 = UINT32_MAX;
	int32_t t14 = 62;

    t14 = ((x61/(x62!=x63))<=x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MAX;
	int16_t x66 = 9;
	uint32_t x67 = 10U;
	uint8_t x68 = 0U;
	volatile int32_t t15 = 117430;

    t15 = ((x65/(x66!=x67))<=x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 2U;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = 2U;
	volatile int32_t t16 = -65893629;

    t16 = ((x69/(x70!=x71))<=x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x73 = INT64_MIN;
	uint32_t x76 = 4U;
	volatile int32_t t17 = -4;

    t17 = ((x73/(x74!=x75))<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x78 = 5;
	volatile uint64_t x80 = 10283289703394LLU;
	static int32_t t18 = 4;

    t18 = ((x77/(x78!=x79))<=x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 400U;
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = 123009LL;
	static int8_t x84 = 0;
	static int32_t t19 = 1039107;

    t19 = ((x81/(x82!=x83))<=x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x86 = INT16_MIN;
	uint64_t x87 = 35020909342LLU;
	volatile int32_t t20 = -5;

    t20 = ((x85/(x86!=x87))<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x90 = INT8_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = -178875532;
	static int32_t t21 = -116;

    t21 = ((x89/(x90!=x91))<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x95 = -1;
	int8_t x96 = -1;
	int32_t t22 = 9744016;

    t22 = ((x93/(x94!=x95))<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 396074LLU;
	uint32_t x98 = 54506U;
	static int8_t x99 = 1;
	static int8_t x100 = INT8_MAX;

    t23 = ((x97/(x98!=x99))<=x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x101 = -3;
	static uint8_t x102 = 27U;
	static int32_t x103 = INT32_MAX;
	volatile uint32_t x104 = 5U;

    t24 = ((x101/(x102!=x103))<=x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = UINT8_MAX;
	uint16_t x106 = 169U;
	uint16_t x107 = 323U;
	static int8_t x108 = -1;
	volatile int32_t t25 = 5;

    t25 = ((x105/(x106!=x107))<=x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = 3958;
	int64_t x110 = 172LL;
	static int64_t x112 = INT64_MAX;
	static int32_t t26 = 3976072;

    t26 = ((x109/(x110!=x111))<=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x114 = -1;
	int16_t x115 = 0;
	static int16_t x116 = -1;

    t27 = ((x113/(x114!=x115))<=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = -1;
	int16_t x118 = 3909;
	int16_t x119 = 296;
	int32_t x120 = -2283;

    t28 = ((x117/(x118!=x119))<=x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x122 = 3350023;
	int8_t x123 = INT8_MIN;
	static int16_t x124 = -13;

    t29 = ((x121/(x122!=x123))<=x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 0LLU;
	volatile uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t30 = -6;

    t30 = ((x125/(x126!=x127))<=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -12;
	uint32_t x130 = 193483U;
	static uint32_t x131 = 599U;
	uint8_t x132 = UINT8_MAX;

    t31 = ((x129/(x130!=x131))<=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = -1;
	int32_t t32 = 346991;

    t32 = ((x133/(x134!=x135))<=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = 1;
	static int64_t x140 = -1LL;
	int32_t t33 = 1921598;

    t33 = ((x137/(x138!=x139))<=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MAX;
	uint64_t x143 = UINT64_MAX;
	static uint32_t x144 = 118631942U;
	volatile int32_t t34 = 15125551;

    t34 = ((x141/(x142!=x143))<=x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x145 = INT16_MIN;
	volatile int64_t x146 = INT64_MIN;
	uint32_t x147 = UINT32_MAX;
	uint8_t x148 = 11U;
	static volatile int32_t t35 = -2744352;

    t35 = ((x145/(x146!=x147))<=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x150 = 42U;
	static int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MIN;

    t36 = ((x149/(x150!=x151))<=x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t37 = -2115094;

    t37 = ((x153/(x154!=x155))<=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x157 = -76228430744899LL;
	int64_t x159 = INT64_MAX;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t38 = 470;

    t38 = ((x157/(x158!=x159))<=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = 253677283742840611LL;
	volatile int16_t x164 = -14;
	static int32_t t39 = -3191;

    t39 = ((x161/(x162!=x163))<=x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 44U;
	uint64_t x166 = 141761593565LLU;
	int64_t x168 = -4170309588441452659LL;
	int32_t t40 = -15656;

    t40 = ((x165/(x166!=x167))<=x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MIN;
	static int16_t x170 = INT16_MIN;
	uint32_t x171 = 125196241U;
	uint16_t x172 = 3U;
	int32_t t41 = -2444976;

    t41 = ((x169/(x170!=x171))<=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x174 = INT64_MIN;
	int8_t x175 = -2;
	static volatile int64_t x176 = -10293068535LL;
	volatile int32_t t42 = -36;

    t42 = ((x173/(x174!=x175))<=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MAX;
	volatile int32_t x178 = 223805;
	static uint32_t x179 = 947508807U;
	static int32_t t43 = 1;

    t43 = ((x177/(x178!=x179))<=x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = INT32_MIN;
	volatile uint8_t x182 = 10U;
	uint64_t x184 = 7476LLU;
	volatile int32_t t44 = 6948400;

    t44 = ((x181/(x182!=x183))<=x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x186 = INT8_MAX;
	int16_t x187 = -1;
	static int64_t x188 = 3LL;
	static volatile int32_t t45 = -26;

    t45 = ((x185/(x186!=x187))<=x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = INT16_MIN;
	int32_t t46 = -1832;

    t46 = ((x193/(x194!=x195))<=x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = INT32_MIN;
	uint16_t x198 = 541U;
	volatile int32_t x199 = INT32_MIN;

    t47 = ((x197/(x198!=x199))<=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = 4;
	int8_t x203 = INT8_MIN;
	static volatile int32_t t48 = -1231152;

    t48 = ((x201/(x202!=x203))<=x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	static volatile int32_t x207 = -886;
	static int32_t t49 = -34;

    t49 = ((x205/(x206!=x207))<=x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = -1;
	volatile int8_t x210 = 10;
	static int16_t x211 = INT16_MIN;
	static uint32_t x212 = 48415332U;

    t50 = ((x209/(x210!=x211))<=x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = -1;
	static uint64_t x214 = 2443012189LLU;
	static int32_t t51 = -214165921;

    t51 = ((x213/(x214!=x215))<=x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = 32U;
	uint32_t x218 = 446U;
	static volatile uint8_t x219 = 6U;
	volatile int8_t x220 = INT8_MIN;
	static int32_t t52 = 1;

    t52 = ((x217/(x218!=x219))<=x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MAX;
	uint16_t x222 = UINT16_MAX;
	static uint8_t x223 = 19U;
	uint16_t x224 = 19864U;
	static volatile int32_t t53 = -7;

    t53 = ((x221/(x222!=x223))<=x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = -190463895684LL;
	uint8_t x231 = 3U;
	volatile int8_t x232 = -1;
	int32_t t54 = 2007;

    t54 = ((x229/(x230!=x231))<=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x233 = 9319331260LLU;
	static int64_t x234 = INT64_MIN;
	uint64_t x235 = 13511946009437LLU;
	volatile int8_t x236 = INT8_MAX;

    t55 = ((x233/(x234!=x235))<=x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x238 = 187087200056LLU;
	volatile int16_t x239 = INT16_MAX;
	int32_t t56 = -47063186;

    t56 = ((x237/(x238!=x239))<=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = 53477188889LLU;
	int32_t x242 = 113556;
	static volatile uint64_t x243 = 8324042151179777LLU;
	static int32_t x244 = -12981;
	int32_t t57 = -1150655;

    t57 = ((x241/(x242!=x243))<=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x246 = 5U;
	uint16_t x247 = 20741U;
	static volatile int32_t t58 = -122803;

    t58 = ((x245/(x246!=x247))<=x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	static int64_t x251 = INT64_MIN;
	uint32_t x252 = 14272429U;
	volatile int32_t t59 = 41;

    t59 = ((x249/(x250!=x251))<=x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = -1;
	uint64_t x254 = 7406009151737LLU;
	volatile int16_t x255 = -1;
	int32_t x256 = -884;
	int32_t t60 = 114223;

    t60 = ((x253/(x254!=x255))<=x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x257 = 25U;
	static int8_t x258 = 1;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MAX;

    t61 = ((x257/(x258!=x259))<=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x266 = 1U;
	int32_t x267 = -1;
	int32_t t62 = 761312254;

    t62 = ((x265/(x266!=x267))<=x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x269 = -26;
	int32_t x271 = INT32_MAX;
	volatile int32_t t63 = 295048548;

    t63 = ((x269/(x270!=x271))<=x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MIN;
	volatile int8_t x274 = INT8_MAX;
	int32_t x275 = -1;
	static int64_t x276 = INT64_MAX;
	int32_t t64 = 1824026;

    t64 = ((x273/(x274!=x275))<=x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x277 = 14405993563268LLU;
	uint8_t x278 = 51U;
	volatile int16_t x279 = -6963;
	int32_t t65 = 87;

    t65 = ((x277/(x278!=x279))<=x280);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = -3;
	int8_t x284 = INT8_MIN;
	volatile int32_t t66 = 509;

    t66 = ((x281/(x282!=x283))<=x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = -150;
	static int64_t x286 = INT64_MAX;
	static uint64_t x287 = UINT64_MAX;

    t67 = ((x285/(x286!=x287))<=x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x289 = 911U;
	uint32_t x290 = 10106U;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -58;
	int32_t t68 = -7;

    t68 = ((x289/(x290!=x291))<=x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x293 = INT32_MAX;
	uint32_t x294 = 3U;
	int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t69 = -40768;

    t69 = ((x293/(x294!=x295))<=x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t70 = 22902;

    t70 = ((x297/(x298!=x299))<=x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x301 = 2U;
	volatile int64_t x302 = 192783357365259473LL;
	uint8_t x304 = 3U;
	int32_t t71 = 1;

    t71 = ((x301/(x302!=x303))<=x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MAX;
	static uint32_t x306 = 7U;
	static int8_t x308 = 0;
	int32_t t72 = 0;

    t72 = ((x305/(x306!=x307))<=x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MIN;
	static uint8_t x310 = 11U;
	static uint8_t x311 = UINT8_MAX;
	int64_t x312 = -1LL;
	volatile int32_t t73 = -7276886;

    t73 = ((x309/(x310!=x311))<=x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = 0;
	volatile int64_t x314 = 1756514665845197265LL;
	uint32_t x315 = 6199U;
	int32_t x316 = -82422;
	static volatile int32_t t74 = -80317;

    t74 = ((x313/(x314!=x315))<=x316);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x317 = UINT8_MAX;
	int64_t x318 = INT64_MIN;
	static int8_t x319 = -1;
	volatile int64_t x320 = INT64_MIN;
	int32_t t75 = -348241;

    t75 = ((x317/(x318!=x319))<=x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x321 = UINT64_MAX;
	int32_t x322 = 243401687;
	static int8_t x324 = 0;

    t76 = ((x321/(x322!=x323))<=x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = INT16_MIN;
	static volatile int64_t x328 = INT64_MIN;
	int32_t t77 = -226804;

    t77 = ((x325/(x326!=x327))<=x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = 1;
	int8_t x331 = INT8_MIN;
	static volatile int64_t x332 = INT64_MAX;
	volatile int32_t t78 = -691;

    t78 = ((x329/(x330!=x331))<=x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = INT64_MIN;
	uint16_t x334 = 0U;
	static int32_t x335 = INT32_MIN;
	uint8_t x336 = 12U;
	static int32_t t79 = 39124;

    t79 = ((x333/(x334!=x335))<=x336);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = INT32_MAX;
	int16_t x338 = INT16_MIN;
	static uint32_t x339 = 1080441754U;
	int64_t x340 = 5315LL;
	volatile int32_t t80 = 12195225;

    t80 = ((x337/(x338!=x339))<=x340);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x345 = -44;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = -1;
	uint64_t x348 = 8288319077LLU;
	static int32_t t81 = -1;

    t81 = ((x345/(x346!=x347))<=x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x349 = INT8_MAX;
	volatile uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 4U;
	volatile uint8_t x352 = 7U;
	int32_t t82 = -2;

    t82 = ((x349/(x350!=x351))<=x352);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x353 = 107241659190570LLU;
	static uint64_t x354 = 888578560LLU;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -33941;
	int32_t t83 = 121632;

    t83 = ((x353/(x354!=x355))<=x356);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = INT32_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	static uint64_t x360 = 4055462473004LLU;
	int32_t t84 = 297290;

    t84 = ((x357/(x358!=x359))<=x360);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 126890071550LLU;
	int8_t x363 = INT8_MIN;
	int64_t x364 = 1LL;
	volatile int32_t t85 = 38353;

    t85 = ((x361/(x362!=x363))<=x364);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x365 = INT16_MIN;
	volatile uint16_t x366 = 338U;
	int8_t x367 = INT8_MIN;
	int32_t t86 = 9082444;

    t86 = ((x365/(x366!=x367))<=x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x371 = -13;
	static volatile int64_t x372 = INT64_MIN;
	volatile int32_t t87 = 252;

    t87 = ((x369/(x370!=x371))<=x372);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x374 = -1LL;
	volatile int64_t x375 = INT64_MIN;
	static int64_t x376 = -1LL;
	int32_t t88 = 1;

    t88 = ((x373/(x374!=x375))<=x376);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x377 = 1;
	int64_t x378 = INT64_MIN;
	static uint16_t x380 = 25803U;
	volatile int32_t t89 = -1859874;

    t89 = ((x377/(x378!=x379))<=x380);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x381 = 7670U;
	volatile int64_t x383 = INT64_MIN;
	volatile int8_t x384 = INT8_MIN;
	int32_t t90 = -24311;

    t90 = ((x381/(x382!=x383))<=x384);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x385 = -1;
	int16_t x386 = -1;
	static volatile int64_t x387 = INT64_MIN;
	int64_t x388 = 1590LL;
	static volatile int32_t t91 = 7449196;

    t91 = ((x385/(x386!=x387))<=x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x390 = -1;
	int64_t x391 = INT64_MAX;
	int32_t t92 = -303;

    t92 = ((x389/(x390!=x391))<=x392);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x395 = 7;
	uint8_t x396 = 12U;
	volatile int32_t t93 = -53602694;

    t93 = ((x393/(x394!=x395))<=x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = INT16_MIN;
	uint8_t x398 = 117U;
	static int16_t x399 = INT16_MAX;
	static uint64_t x400 = 189607088823174LLU;
	int32_t t94 = 7183;

    t94 = ((x397/(x398!=x399))<=x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x401 = 5LLU;
	uint64_t x403 = 3348431617LLU;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t95 = 140387871;

    t95 = ((x401/(x402!=x403))<=x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 61U;
	static uint64_t x406 = UINT64_MAX;
	volatile int16_t x408 = 5;
	volatile int32_t t96 = -7348727;

    t96 = ((x405/(x406!=x407))<=x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	volatile int16_t x410 = INT16_MIN;

    t97 = ((x409/(x410!=x411))<=x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = INT32_MIN;
	int8_t x414 = 9;
	static int64_t x415 = INT64_MIN;
	int32_t t98 = -465513;

    t98 = ((x413/(x414!=x415))<=x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 0;
	int8_t x418 = -1;
	int8_t x419 = -50;
	int32_t x420 = INT32_MIN;
	int32_t t99 = 4;

    t99 = ((x417/(x418!=x419))<=x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x423 = UINT16_MAX;
	uint16_t x424 = 27350U;
	static int32_t t100 = 2509054;

    t100 = ((x421/(x422!=x423))<=x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = INT32_MIN;
	static volatile int32_t x426 = -1229862;
	volatile int64_t x427 = INT64_MAX;
	int16_t x428 = -1;

    t101 = ((x425/(x426!=x427))<=x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = -1;
	int32_t x431 = INT32_MIN;
	int8_t x432 = -1;
	static volatile int32_t t102 = -427;

    t102 = ((x429/(x430!=x431))<=x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x433 = INT8_MIN;
	static int8_t x435 = 3;
	uint32_t x436 = 21947U;
	static int32_t t103 = -323896;

    t103 = ((x433/(x434!=x435))<=x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = -1405508;
	uint32_t x438 = UINT32_MAX;
	uint32_t x439 = 60U;
	static int64_t x440 = -1LL;
	volatile int32_t t104 = 20994610;

    t104 = ((x437/(x438!=x439))<=x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x441 = 26620125U;
	int16_t x442 = 0;
	static int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t105 = -3203845;

    t105 = ((x441/(x442!=x443))<=x444);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = INT32_MIN;
	static volatile uint8_t x446 = UINT8_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	int8_t x448 = -7;
	int32_t t106 = -56200;

    t106 = ((x445/(x446!=x447))<=x448);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	uint64_t x452 = 40473750503359LLU;
	int32_t t107 = 676663;

    t107 = ((x449/(x450!=x451))<=x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x453 = -12248;
	volatile int16_t x455 = INT16_MIN;
	int32_t x456 = -896026;
	static volatile int32_t t108 = 574965589;

    t108 = ((x453/(x454!=x455))<=x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MIN;
	static int8_t x459 = INT8_MIN;
	static uint8_t x460 = 10U;
	volatile int32_t t109 = -2;

    t109 = ((x457/(x458!=x459))<=x460);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	int64_t x463 = -1LL;
	int16_t x464 = -1;
	volatile int32_t t110 = 492;

    t110 = ((x461/(x462!=x463))<=x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x465 = UINT32_MAX;
	static volatile int64_t x466 = -215786073958748023LL;
	uint16_t x467 = 2166U;
	int32_t x468 = -1;
	volatile int32_t t111 = 12;

    t111 = ((x465/(x466!=x467))<=x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x469 = INT32_MIN;
	volatile int32_t x470 = -199232;
	static int16_t x472 = INT16_MAX;
	volatile int32_t t112 = 270759;

    t112 = ((x469/(x470!=x471))<=x472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = -15981409;
	uint64_t x474 = 1514677800300338LLU;
	static int64_t x475 = -1LL;
	int32_t x476 = -43;
	volatile int32_t t113 = 64435;

    t113 = ((x473/(x474!=x475))<=x476);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x477 = -2;
	volatile int8_t x479 = INT8_MIN;
	static int32_t t114 = -4295;

    t114 = ((x477/(x478!=x479))<=x480);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x485 = -1;
	int32_t x486 = 3244;
	uint64_t x488 = 95916747116LLU;
	volatile int32_t t115 = 11;

    t115 = ((x485/(x486!=x487))<=x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x489 = 43506970LLU;
	int8_t x491 = INT8_MIN;
	static uint16_t x492 = UINT16_MAX;
	int32_t t116 = 44640382;

    t116 = ((x489/(x490!=x491))<=x492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x493 = 0U;
	uint32_t x494 = 285914171U;
	static int64_t x495 = -1LL;
	int8_t x496 = INT8_MIN;
	volatile int32_t t117 = -132;

    t117 = ((x493/(x494!=x495))<=x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = 1184LL;
	int16_t x498 = -40;
	uint16_t x499 = 97U;
	static uint32_t x500 = UINT32_MAX;
	static int32_t t118 = 15628;

    t118 = ((x497/(x498!=x499))<=x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x501 = 372U;
	int8_t x502 = -1;
	int32_t x504 = -1;
	int32_t t119 = 1124;

    t119 = ((x501/(x502!=x503))<=x504);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x505 = -54;
	static int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MIN;
	int64_t x508 = INT64_MIN;

    t120 = ((x505/(x506!=x507))<=x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x510 = 24U;
	static int32_t x512 = -1;
	int32_t t121 = -6751131;

    t121 = ((x509/(x510!=x511))<=x512);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 772497606LLU;
	uint8_t x514 = 12U;
	static volatile uint32_t x515 = 16470006U;
	volatile int32_t t122 = -10;

    t122 = ((x513/(x514!=x515))<=x516);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = INT16_MAX;
	int64_t x519 = INT64_MAX;
	volatile int16_t x520 = INT16_MIN;
	int32_t t123 = -258;

    t123 = ((x517/(x518!=x519))<=x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MAX;
	static int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MIN;
	volatile int32_t t124 = -1;

    t124 = ((x521/(x522!=x523))<=x524);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x530 = UINT16_MAX;
	volatile int64_t x531 = INT64_MIN;
	int64_t x532 = INT64_MIN;
	int32_t t125 = -122799;

    t125 = ((x529/(x530!=x531))<=x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x533 = 26471858272340LL;
	uint64_t x534 = 36907LLU;
	uint64_t x535 = UINT64_MAX;
	volatile int64_t x536 = -2817701907654070LL;
	int32_t t126 = -80472366;

    t126 = ((x533/(x534!=x535))<=x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x537 = INT32_MIN;
	static volatile int32_t x538 = -9154987;
	volatile uint16_t x539 = 111U;
	uint64_t x540 = 219355LLU;

    t127 = ((x537/(x538!=x539))<=x540);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = 116094;
	int64_t x543 = INT64_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t128 = 28363199;

    t128 = ((x541/(x542!=x543))<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = -1;
	int16_t x547 = INT16_MAX;
	uint32_t x548 = UINT32_MAX;
	static int32_t t129 = -333593327;

    t129 = ((x545/(x546!=x547))<=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = -1;
	int32_t x550 = INT32_MIN;
	static uint16_t x551 = UINT16_MAX;
	volatile uint64_t x552 = 2440744468190771409LLU;
	static int32_t t130 = -1;

    t130 = ((x549/(x550!=x551))<=x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x553 = 83U;
	int32_t x554 = -1;
	int16_t x555 = INT16_MIN;
	int32_t x556 = -62;
	int32_t t131 = 1992;

    t131 = ((x553/(x554!=x555))<=x556);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x558 = INT64_MAX;
	int8_t x559 = -3;
	volatile int32_t t132 = 1822;

    t132 = ((x557/(x558!=x559))<=x560);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x562 = INT64_MIN;
	uint64_t x563 = UINT64_MAX;
	volatile uint64_t x564 = 303823213075054730LLU;
	static volatile int32_t t133 = 4798176;

    t133 = ((x561/(x562!=x563))<=x564);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x566 = -1;
	volatile int64_t x567 = 96280839162123LL;
	volatile int8_t x568 = 24;

    t134 = ((x565/(x566!=x567))<=x568);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = INT32_MIN;
	static int32_t x570 = -61;
	int16_t x571 = -3;
	int32_t t135 = 122308011;

    t135 = ((x569/(x570!=x571))<=x572);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x574 = UINT16_MAX;
	int32_t x575 = INT32_MIN;
	static volatile int16_t x576 = 7164;
	volatile int32_t t136 = 2;

    t136 = ((x573/(x574!=x575))<=x576);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x578 = -389762;
	static int8_t x579 = -1;
	uint16_t x580 = UINT16_MAX;

    t137 = ((x577/(x578!=x579))<=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x581 = 1341262LLU;
	volatile int32_t x582 = INT32_MIN;
	int32_t x584 = -1;
	static int32_t t138 = -20873;

    t138 = ((x581/(x582!=x583))<=x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x585 = INT8_MIN;
	int8_t x587 = 1;
	int8_t x588 = 0;
	volatile int32_t t139 = -6098;

    t139 = ((x585/(x586!=x587))<=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = INT64_MIN;
	static int32_t x591 = -1;

    t140 = ((x589/(x590!=x591))<=x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x593 = 1928753LLU;
	uint8_t x594 = 10U;
	int16_t x595 = INT16_MIN;
	static int64_t x596 = INT64_MIN;
	volatile int32_t t141 = 3665451;

    t141 = ((x593/(x594!=x595))<=x596);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x597 = UINT8_MAX;
	uint64_t x598 = 6830605909572LLU;
	static int8_t x600 = INT8_MAX;
	volatile int32_t t142 = 963890302;

    t142 = ((x597/(x598!=x599))<=x600);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x602 = 43U;
	static int32_t x603 = -473310;
	int64_t x604 = -1LL;
	volatile int32_t t143 = 1;

    t143 = ((x601/(x602!=x603))<=x604);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = 23728U;
	static int64_t x606 = INT64_MIN;
	int16_t x607 = INT16_MAX;
	int64_t x608 = INT64_MIN;
	volatile int32_t t144 = -959385134;

    t144 = ((x605/(x606!=x607))<=x608);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x609 = -1;
	static int16_t x610 = -1;
	int64_t x611 = 0LL;
	volatile int64_t x612 = INT64_MAX;
	static volatile int32_t t145 = 175115011;

    t145 = ((x609/(x610!=x611))<=x612);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x613 = 25LL;
	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	uint16_t x616 = 1U;
	volatile int32_t t146 = -1379;

    t146 = ((x613/(x614!=x615))<=x616);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x617 = INT32_MIN;
	int8_t x618 = INT8_MIN;
	volatile uint16_t x619 = 0U;
	volatile int32_t t147 = -31;

    t147 = ((x617/(x618!=x619))<=x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x626 = 764U;
	uint64_t x627 = 662997839516133LLU;
	volatile int16_t x628 = -1;
	int32_t t148 = 517493;

    t148 = ((x625/(x626!=x627))<=x628);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x629 = -1;
	volatile int32_t x630 = -19086;
	int32_t x631 = INT32_MAX;

    t149 = ((x629/(x630!=x631))<=x632);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x634 = INT16_MAX;
	volatile uint16_t x635 = UINT16_MAX;
	int16_t x636 = INT16_MIN;
	int32_t t150 = 1;

    t150 = ((x633/(x634!=x635))<=x636);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x637 = INT32_MIN;
	uint8_t x638 = 101U;
	volatile int16_t x639 = INT16_MIN;
	volatile int64_t x640 = -4LL;
	int32_t t151 = -1;

    t151 = ((x637/(x638!=x639))<=x640);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x641 = UINT32_MAX;
	int16_t x642 = INT16_MIN;
	volatile int32_t t152 = -6564632;

    t152 = ((x641/(x642!=x643))<=x644);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x645 = INT64_MIN;
	volatile int64_t x646 = -1LL;
	static int32_t x648 = INT32_MIN;

    t153 = ((x645/(x646!=x647))<=x648);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x649 = 2U;
	int64_t x652 = 75672300447LL;
	volatile int32_t t154 = 7;

    t154 = ((x649/(x650!=x651))<=x652);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = INT8_MIN;
	volatile int64_t x654 = INT64_MIN;
	volatile uint64_t x655 = 334308424LLU;
	uint16_t x656 = UINT16_MAX;
	int32_t t155 = -1754460;

    t155 = ((x653/(x654!=x655))<=x656);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x660 = 182U;
	int32_t t156 = 1;

    t156 = ((x657/(x658!=x659))<=x660);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x662 = 5LL;
	int8_t x663 = INT8_MAX;
	int32_t x664 = -893793;

    t157 = ((x661/(x662!=x663))<=x664);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x665 = 266U;
	uint64_t x666 = 0LLU;
	int64_t x668 = -909806459LL;
	static int32_t t158 = -7;

    t158 = ((x665/(x666!=x667))<=x668);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x669 = 0U;
	int16_t x670 = INT16_MAX;
	int8_t x671 = INT8_MAX;
	static int16_t x672 = 828;
	volatile int32_t t159 = -18626;

    t159 = ((x669/(x670!=x671))<=x672);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = INT8_MAX;
	int16_t x674 = -1;
	volatile int64_t x675 = INT64_MIN;
	int16_t x676 = 7;
	static int32_t t160 = -210;

    t160 = ((x673/(x674!=x675))<=x676);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x677 = INT32_MIN;
	uint32_t x679 = 682783162U;
	volatile int8_t x680 = INT8_MAX;
	volatile int32_t t161 = 7460262;

    t161 = ((x677/(x678!=x679))<=x680);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = INT8_MAX;
	volatile int16_t x682 = INT16_MIN;
	uint16_t x683 = 6589U;
	uint64_t x684 = 390LLU;
	volatile int32_t t162 = -135959;

    t162 = ((x681/(x682!=x683))<=x684);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x685 = -12532848591234246LL;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = -3;
	volatile int32_t t163 = -2092174;

    t163 = ((x685/(x686!=x687))<=x688);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x689 = UINT16_MAX;
	int32_t x691 = -201151;
	static uint16_t x692 = 6357U;
	int32_t t164 = 70684794;

    t164 = ((x689/(x690!=x691))<=x692);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	static uint16_t x695 = 20U;
	static int32_t x696 = -1;
	static volatile int32_t t165 = -4329328;

    t165 = ((x693/(x694!=x695))<=x696);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x701 = -1;
	uint8_t x702 = UINT8_MAX;
	int8_t x703 = INT8_MAX;
	volatile int32_t x704 = -1;
	int32_t t166 = -26310255;

    t166 = ((x701/(x702!=x703))<=x704);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x705 = UINT8_MAX;
	static int16_t x706 = -126;
	volatile int16_t x707 = -1;
	volatile int32_t t167 = 919;

    t167 = ((x705/(x706!=x707))<=x708);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x709 = 36;
	int16_t x710 = -31;
	static int16_t x711 = 945;
	uint8_t x712 = UINT8_MAX;
	int32_t t168 = 446113692;

    t168 = ((x709/(x710!=x711))<=x712);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x713 = 15U;
	uint32_t x716 = 1704663674U;
	static int32_t t169 = -2059762;

    t169 = ((x713/(x714!=x715))<=x716);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x718 = INT64_MAX;
	static int32_t t170 = 28;

    t170 = ((x717/(x718!=x719))<=x720);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x721 = 1LL;
	static int64_t x722 = -1005033434LL;
	volatile uint64_t x724 = 267810068663783217LLU;

    t171 = ((x721/(x722!=x723))<=x724);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x725 = 503;
	int8_t x726 = 0;
	int32_t x727 = INT32_MAX;
	int64_t x728 = -13999369309LL;
	int32_t t172 = -65411;

    t172 = ((x725/(x726!=x727))<=x728);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x729 = 92897705U;
	int32_t x730 = -179;
	uint64_t x731 = UINT64_MAX;

    t173 = ((x729/(x730!=x731))<=x732);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x733 = INT64_MAX;
	uint32_t x734 = 5811U;
	volatile int8_t x735 = INT8_MAX;

    t174 = ((x733/(x734!=x735))<=x736);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x737 = INT16_MAX;
	static int32_t x739 = -7422;
	static uint8_t x740 = 94U;
	static volatile int32_t t175 = 118704247;

    t175 = ((x737/(x738!=x739))<=x740);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x741 = INT8_MAX;
	int16_t x742 = -1;
	volatile uint16_t x744 = 161U;

    t176 = ((x741/(x742!=x743))<=x744);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x745 = INT32_MAX;
	int8_t x746 = 27;
	static volatile uint32_t x747 = 14706U;
	uint64_t x748 = UINT64_MAX;

    t177 = ((x745/(x746!=x747))<=x748);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x749 = INT64_MAX;
	static uint8_t x750 = 81U;
	int8_t x751 = INT8_MAX;
	int32_t x752 = INT32_MIN;

    t178 = ((x749/(x750!=x751))<=x752);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x755 = UINT8_MAX;
	volatile int32_t t179 = 504412;

    t179 = ((x753/(x754!=x755))<=x756);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x757 = UINT16_MAX;
	int32_t x758 = INT32_MAX;
	uint64_t x759 = 9975636LLU;
	volatile uint64_t x760 = UINT64_MAX;
	int32_t t180 = 6;

    t180 = ((x757/(x758!=x759))<=x760);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x761 = -13;
	static uint64_t x762 = 1733612LLU;
	static uint16_t x763 = 1U;
	uint64_t x764 = 55791548307666976LLU;
	static int32_t t181 = -134;

    t181 = ((x761/(x762!=x763))<=x764);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x765 = INT8_MIN;
	static volatile int16_t x766 = -1;
	int32_t x767 = INT32_MIN;
	volatile int8_t x768 = INT8_MIN;

    t182 = ((x765/(x766!=x767))<=x768);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x774 = -2;
	static volatile int16_t x775 = INT16_MAX;
	int32_t t183 = -64883;

    t183 = ((x773/(x774!=x775))<=x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x777 = INT16_MAX;
	uint8_t x778 = UINT8_MAX;
	static uint32_t x779 = UINT32_MAX;
	static int32_t x780 = INT32_MIN;
	volatile int32_t t184 = 135833547;

    t184 = ((x777/(x778!=x779))<=x780);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x781 = 1;
	int64_t x782 = INT64_MIN;
	int32_t x783 = -1;
	int8_t x784 = INT8_MAX;

    t185 = ((x781/(x782!=x783))<=x784);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x785 = 0U;
	volatile int64_t x786 = INT64_MIN;
	uint8_t x787 = UINT8_MAX;
	static int16_t x788 = -1;
	int32_t t186 = -18593682;

    t186 = ((x785/(x786!=x787))<=x788);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint16_t x790 = 242U;
	int32_t x791 = INT32_MIN;
	uint64_t x792 = UINT64_MAX;
	volatile int32_t t187 = 21;

    t187 = ((x789/(x790!=x791))<=x792);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x795 = INT16_MAX;
	volatile int16_t x796 = INT16_MIN;
	int32_t t188 = -51;

    t188 = ((x793/(x794!=x795))<=x796);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x797 = INT32_MIN;
	uint8_t x798 = 50U;
	int64_t x799 = 26LL;
	uint32_t x800 = UINT32_MAX;
	static int32_t t189 = -1071245034;

    t189 = ((x797/(x798!=x799))<=x800);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x801 = -1;
	uint8_t x802 = 6U;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t190 = 237787;

    t190 = ((x801/(x802!=x803))<=x804);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x805 = INT8_MIN;
	uint32_t x806 = 26U;
	uint8_t x807 = 13U;
	uint64_t x808 = 672593LLU;
	int32_t t191 = -132315638;

    t191 = ((x805/(x806!=x807))<=x808);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x809 = UINT32_MAX;
	uint64_t x810 = 6422204821679170LLU;
	uint64_t x811 = 13LLU;
	static volatile uint32_t x812 = 654932U;
	volatile int32_t t192 = 2001;

    t192 = ((x809/(x810!=x811))<=x812);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x817 = INT64_MIN;
	uint8_t x819 = 0U;
	static uint16_t x820 = 336U;
	int32_t t193 = 485;

    t193 = ((x817/(x818!=x819))<=x820);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x821 = INT32_MIN;
	static volatile int64_t x822 = INT64_MAX;
	int16_t x824 = INT16_MIN;
	int32_t t194 = 581546;

    t194 = ((x821/(x822!=x823))<=x824);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x825 = 93U;
	int8_t x826 = -1;
	uint32_t x827 = 15025951U;
	int32_t t195 = 8807755;

    t195 = ((x825/(x826!=x827))<=x828);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x829 = INT16_MIN;
	volatile uint8_t x830 = UINT8_MAX;
	static int32_t x831 = INT32_MIN;
	static int16_t x832 = INT16_MAX;
	int32_t t196 = 11;

    t196 = ((x829/(x830!=x831))<=x832);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x833 = 3871050704218420LLU;
	int64_t x834 = 2013673469195567499LL;
	int16_t x835 = INT16_MIN;
	volatile uint16_t x836 = 648U;

    t197 = ((x833/(x834!=x835))<=x836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x837 = INT64_MAX;
	int32_t x839 = INT32_MIN;
	int64_t x840 = 877LL;

    t198 = ((x837/(x838!=x839))<=x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x842 = UINT64_MAX;
	uint16_t x844 = 6188U;
	volatile int32_t t199 = 2;

    t199 = ((x841/(x842!=x843))<=x844);

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

