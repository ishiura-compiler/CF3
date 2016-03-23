
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

int32_t x2 = -1;
int8_t x10 = INT8_MAX;
int64_t x23 = INT64_MIN;
static volatile uint8_t x28 = 5U;
int16_t x45 = -34;
int8_t x48 = -1;
int32_t t8 = -66290846;
int8_t x54 = INT8_MAX;
static int32_t t9 = -461260;
int16_t x57 = 42;
uint16_t x60 = UINT16_MAX;
int8_t x65 = -1;
volatile int32_t t12 = 70835155;
uint32_t x72 = UINT32_MAX;
static int32_t t13 = 226584896;
uint8_t x80 = UINT8_MAX;
int32_t t14 = 27;
int64_t x84 = INT64_MIN;
volatile int32_t t16 = 1215;
int8_t x91 = -1;
uint64_t x92 = 904039650612LLU;
int16_t x95 = INT16_MIN;
int16_t x98 = INT16_MAX;
static int32_t t21 = -49;
uint32_t x116 = 73690U;
volatile int32_t t23 = -1;
int8_t x123 = -1;
int32_t t24 = 12728;
static uint64_t x137 = 25297015943272384LLU;
static int32_t x139 = -11780259;
static int16_t x151 = INT16_MAX;
int64_t x153 = -3LL;
uint64_t x154 = 82LLU;
volatile int32_t t31 = 1;
int64_t x158 = INT64_MAX;
int64_t x160 = -205295404973254349LL;
int16_t x162 = INT16_MAX;
uint8_t x164 = 12U;
int64_t x165 = INT64_MIN;
volatile int32_t t34 = -1193885;
uint16_t x171 = 3781U;
int16_t x172 = INT16_MIN;
int8_t x173 = 0;
int32_t x174 = -1;
int32_t x187 = INT32_MIN;
uint32_t x192 = 124703U;
volatile int8_t x196 = INT8_MIN;
static int32_t x199 = -19;
uint16_t x215 = 1002U;
volatile uint8_t x216 = 75U;
volatile int64_t x223 = -1LL;
int32_t t46 = 243285446;
volatile int64_t x229 = INT64_MAX;
int64_t x239 = INT64_MIN;
uint32_t x243 = UINT32_MAX;
int32_t x244 = -1;
uint8_t x247 = 51U;
static uint8_t x248 = 0U;
volatile uint8_t x249 = 4U;
int64_t x255 = INT64_MAX;
uint16_t x259 = UINT16_MAX;
uint8_t x265 = 34U;
static uint16_t x269 = 36U;
static int8_t x275 = -11;
int32_t t59 = 75009;
volatile uint32_t x277 = UINT32_MAX;
int16_t x280 = 2;
int16_t x287 = -1;
int64_t x295 = 49460259240LL;
int8_t x297 = INT8_MIN;
static int32_t x305 = -1;
static volatile int32_t t66 = 4158;
int32_t x311 = -1;
static uint64_t x319 = 1LLU;
int16_t x320 = -1;
int16_t x322 = 0;
uint32_t x326 = 3985U;
volatile int32_t t70 = -73;
int8_t x349 = INT8_MIN;
int16_t x351 = INT16_MAX;
uint64_t x356 = 2238835737972218780LLU;
volatile int64_t x358 = 58405177LL;
uint32_t x366 = 15498U;
int8_t x368 = -1;
int32_t t83 = 373834867;
int64_t x386 = -1LL;
int8_t x397 = -1;
int64_t x399 = -1LL;
volatile int8_t x401 = INT8_MIN;
static int16_t x405 = -7;
uint8_t x407 = 3U;
int16_t x409 = -7;
int32_t x412 = -1;
int32_t x413 = 369;
volatile int32_t t91 = 328055461;
volatile int32_t t92 = 22;
static int32_t x426 = 115700;
static int32_t x428 = -1;
int8_t x433 = INT8_MIN;
int32_t x435 = 670;
int32_t t95 = 4114194;
static int8_t x437 = 1;
int16_t x438 = 551;
uint64_t x445 = 19600311LLU;
int8_t x449 = INT8_MIN;
volatile int8_t x450 = -1;
int8_t x459 = INT8_MIN;
static int32_t t101 = -61665;
uint16_t x480 = 18947U;
int32_t x482 = -1;
uint16_t x483 = 10U;
volatile int64_t x484 = INT64_MIN;
static volatile int32_t t105 = 112813;
int32_t t106 = -567915;
int8_t x494 = INT8_MAX;
uint8_t x499 = UINT8_MAX;
int32_t x505 = -914;
volatile int16_t x510 = 5;
static volatile int32_t t112 = 22736;
int64_t x519 = -1LL;
int32_t t114 = -10;
volatile int16_t x542 = -1899;
static volatile uint64_t x551 = 24616956085LLU;
int16_t x552 = INT16_MIN;
volatile int32_t t120 = 0;
int8_t x553 = INT8_MAX;
static uint16_t x562 = 87U;
uint64_t x568 = 40980977274144LLU;
uint64_t x570 = 1092LLU;
static int64_t x575 = INT64_MIN;
int16_t x582 = 0;
static uint8_t x593 = 59U;
uint64_t x603 = 75792754470467LLU;
int32_t x607 = 258492;
volatile int32_t x614 = INT32_MAX;
int16_t x618 = INT16_MIN;
uint16_t x620 = 8362U;
int16_t x638 = INT16_MAX;
int32_t x648 = -1;
uint32_t x653 = UINT32_MAX;
volatile int16_t x656 = INT16_MIN;
int8_t x661 = INT8_MIN;
volatile int32_t t143 = -136513704;
volatile uint16_t x671 = 5837U;
int32_t x686 = INT32_MAX;
uint32_t x690 = 98U;
static int8_t x692 = INT8_MIN;
static int32_t x703 = -1;
int32_t t152 = -33;
int16_t x705 = 1;
int16_t x712 = INT16_MIN;
static uint16_t x715 = UINT16_MAX;
int16_t x719 = -475;
volatile uint64_t x724 = UINT64_MAX;
static uint16_t x725 = UINT16_MAX;
static int16_t x729 = 3;
static int32_t t160 = -515718;
uint16_t x742 = UINT16_MAX;
int16_t x754 = INT16_MIN;
int32_t t165 = 1034391;
static int16_t x764 = -1;
int16_t x765 = -1;
volatile uint32_t x767 = 1014U;
int8_t x769 = INT8_MAX;
uint16_t x776 = 0U;
static uint8_t x779 = UINT8_MAX;
int32_t t171 = 337193;
uint8_t x783 = 15U;
volatile int32_t t172 = 4;
int64_t x796 = INT64_MAX;
int32_t x804 = INT32_MAX;
uint32_t x810 = 5289U;
static uint8_t x814 = 49U;
int16_t x815 = -1;
volatile int16_t x827 = 1852;
int32_t x830 = -1;
int64_t x831 = -8190LL;
int32_t t183 = 1;
int32_t x844 = INT32_MIN;
uint64_t x849 = 578LLU;
int16_t x857 = INT16_MAX;
int32_t t188 = 7509;
volatile int8_t x881 = -1;
int16_t x891 = INT16_MIN;
uint16_t x899 = 4690U;
int32_t x900 = 2031720;
volatile int32_t t197 = 5673108;
volatile int32_t t198 = 23;
int32_t t199 = 466433;


void f0(void) {
    	int16_t x1 = 1;
	int16_t x3 = -1;
	int64_t x4 = -1LL;
	int32_t t0 = 45;

    t0 = (((x1-x2)==x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MIN;
	static int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t1 = 331;

    t1 = (((x9-x10)==x11)>x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x21 = 2091;
	int8_t x22 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t2 = 54400;

    t2 = (((x21-x22)==x23)>x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = 116489;
	int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = UINT8_MAX;
	int32_t t3 = -38322;

    t3 = (((x25-x26)==x27)>x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = 5390619173945LL;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 3U;
	static uint16_t x32 = 1U;
	static int32_t t4 = 15;

    t4 = (((x29-x30)==x31)>x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	static int32_t x39 = INT32_MIN;
	int16_t x40 = 1;
	int32_t t5 = -15728058;

    t5 = (((x37-x38)==x39)>x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x41 = 25U;
	static uint16_t x42 = 4U;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 131030383199LLU;
	volatile int32_t t6 = -100;

    t6 = (((x41-x42)==x43)>x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x46 = -1;
	volatile uint16_t x47 = 1192U;
	static int32_t t7 = -27520;

    t7 = (((x45-x46)==x47)>x48);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x49 = 433292;
	int16_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 550794LLU;

    t8 = (((x49-x50)==x51)>x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MAX;

    t9 = (((x53-x54)==x55)>x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x58 = INT16_MAX;
	volatile int8_t x59 = INT8_MAX;
	static int32_t t10 = -11;

    t10 = (((x57-x58)==x59)>x60);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x61 = -1;
	uint64_t x62 = 250539850LLU;
	uint16_t x63 = 388U;
	int64_t x64 = INT64_MIN;
	int32_t t11 = 10373762;

    t11 = (((x61-x62)==x63)>x64);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x66 = 6332U;
	uint8_t x67 = 114U;
	uint16_t x68 = UINT16_MAX;

    t12 = (((x65-x66)==x67)>x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x69 = -1127546;
	int16_t x70 = 175;
	int64_t x71 = -1LL;

    t13 = (((x69-x70)==x71)>x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = 624201LLU;
	uint16_t x78 = 1U;
	volatile int8_t x79 = -1;

    t14 = (((x77-x78)==x79)>x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = -1;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static volatile int32_t t15 = 497;

    t15 = (((x81-x82)==x83)>x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MAX;
	int64_t x87 = INT64_MAX;
	static int64_t x88 = INT64_MIN;

    t16 = (((x85-x86)==x87)>x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = 15;
	int8_t x90 = -1;
	int32_t t17 = -796;

    t17 = (((x89-x90)==x91)>x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x93 = 74U;
	int16_t x94 = 6558;
	int32_t x96 = INT32_MAX;
	volatile int32_t t18 = 6937;

    t18 = (((x93-x94)==x95)>x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x97 = -52557482191LL;
	int32_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t19 = -5425944;

    t19 = (((x97-x98)==x99)>x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x105 = 29U;
	uint16_t x106 = 234U;
	uint32_t x107 = 4006916U;
	int16_t x108 = INT16_MAX;
	int32_t t20 = 805361;

    t20 = (((x105-x106)==x107)>x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x109 = -1;
	int64_t x110 = 18868666941LL;
	static int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;

    t21 = (((x109-x110)==x111)>x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x113 = 4020587652360535621LLU;
	static volatile uint32_t x114 = 3U;
	static int8_t x115 = -58;
	int32_t t22 = 60394814;

    t22 = (((x113-x114)==x115)>x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = -4669;
	int8_t x118 = 1;
	int32_t x119 = INT32_MAX;
	int64_t x120 = -1LL;

    t23 = (((x117-x118)==x119)>x120);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x121 = -1;
	int8_t x122 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;

    t24 = (((x121-x122)==x123)>x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	static int8_t x127 = -1;
	static int64_t x128 = 6LL;
	volatile int32_t t25 = 205;

    t25 = (((x125-x126)==x127)>x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 3146864LLU;
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MIN;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t26 = -1015;

    t26 = (((x129-x130)==x131)>x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x138 = 0;
	volatile int16_t x140 = INT16_MAX;
	int32_t t27 = -4;

    t27 = (((x137-x138)==x139)>x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x141 = -1;
	volatile int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MAX;
	static int32_t t28 = -10;

    t28 = (((x141-x142)==x143)>x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t29 = -777;

    t29 = (((x145-x146)==x147)>x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x149 = 6U;
	volatile uint32_t x150 = 13651U;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t30 = 937561081;

    t30 = (((x149-x150)==x151)>x152);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x155 = INT32_MAX;
	uint16_t x156 = 118U;

    t31 = (((x153-x154)==x155)>x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x157 = 1754379508566LLU;
	int8_t x159 = INT8_MIN;
	int32_t t32 = -1;

    t32 = (((x157-x158)==x159)>x160);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = -1;
	static uint16_t x163 = 23U;
	int32_t t33 = 2531850;

    t33 = (((x161-x162)==x163)>x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x166 = 12059LLU;
	static int32_t x167 = INT32_MIN;
	int16_t x168 = -1;

    t34 = (((x165-x166)==x167)>x168);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x169 = -1;
	uint64_t x170 = 23066516599065LLU;
	int32_t t35 = 109;

    t35 = (((x169-x170)==x171)>x172);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x175 = INT64_MAX;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t36 = 1376;

    t36 = (((x173-x174)==x175)>x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x177 = UINT32_MAX;
	int32_t x178 = 752609;
	static volatile uint64_t x179 = UINT64_MAX;
	static int64_t x180 = -1LL;
	int32_t t37 = 19;

    t37 = (((x177-x178)==x179)>x180);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = -1;
	int16_t x182 = 2;
	int32_t x183 = 245756;
	uint64_t x184 = 2441125782LLU;
	volatile int32_t t38 = -43;

    t38 = (((x181-x182)==x183)>x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x185 = 42U;
	static int8_t x186 = INT8_MIN;
	static int8_t x188 = -1;
	volatile int32_t t39 = -735297782;

    t39 = (((x185-x186)==x187)>x188);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x189 = 2U;
	int8_t x190 = INT8_MAX;
	int16_t x191 = 114;
	volatile int32_t t40 = 307;

    t40 = (((x189-x190)==x191)>x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x193 = 3869317360948988LLU;
	static volatile int32_t x194 = INT32_MIN;
	volatile uint16_t x195 = 448U;
	volatile int32_t t41 = 211;

    t41 = (((x193-x194)==x195)>x196);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = 4850928;
	uint16_t x198 = 2U;
	static int32_t x200 = -1;
	volatile int32_t t42 = 511164;

    t42 = (((x197-x198)==x199)>x200);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x201 = INT16_MIN;
	volatile uint32_t x202 = 65910161U;
	volatile uint32_t x203 = 638838109U;
	uint64_t x204 = 147814LLU;
	static int32_t t43 = -156862;

    t43 = (((x201-x202)==x203)>x204);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x210 = 775;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 7517U;
	int32_t t44 = -22959546;

    t44 = (((x209-x210)==x211)>x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x213 = 2U;
	int8_t x214 = INT8_MIN;
	int32_t t45 = -166;

    t45 = (((x213-x214)==x215)>x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x221 = 7185U;
	volatile int8_t x222 = 3;
	static int64_t x224 = INT64_MIN;

    t46 = (((x221-x222)==x223)>x224);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x225 = 23U;
	volatile uint16_t x226 = 754U;
	volatile int8_t x227 = -1;
	uint16_t x228 = 31U;
	static volatile int32_t t47 = -13300828;

    t47 = (((x225-x226)==x227)>x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x230 = UINT16_MAX;
	uint32_t x231 = 84974U;
	int32_t x232 = INT32_MIN;
	volatile int32_t t48 = -3055;

    t48 = (((x229-x230)==x231)>x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	int32_t x235 = 2143;
	uint32_t x236 = UINT32_MAX;
	static int32_t t49 = -44563;

    t49 = (((x233-x234)==x235)>x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x237 = INT64_MIN;
	volatile int8_t x238 = -35;
	int64_t x240 = INT64_MAX;
	int32_t t50 = -9289447;

    t50 = (((x237-x238)==x239)>x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x241 = INT32_MAX;
	int8_t x242 = INT8_MAX;
	static int32_t t51 = -54676342;

    t51 = (((x241-x242)==x243)>x244);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x245 = -1;
	int32_t x246 = INT32_MIN;
	volatile int32_t t52 = 125712;

    t52 = (((x245-x246)==x247)>x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x250 = INT8_MIN;
	int32_t x251 = 0;
	int32_t x252 = -1;
	volatile int32_t t53 = -1603737;

    t53 = (((x249-x250)==x251)>x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x253 = 28893U;
	static uint8_t x254 = 16U;
	int8_t x256 = -1;
	int32_t t54 = -5753695;

    t54 = (((x253-x254)==x255)>x256);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = INT64_MAX;
	volatile uint16_t x258 = UINT16_MAX;
	int32_t x260 = -145;
	volatile int32_t t55 = -2730790;

    t55 = (((x257-x258)==x259)>x260);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x261 = UINT16_MAX;
	int64_t x262 = 3828015010819641250LL;
	int32_t x263 = -1;
	uint64_t x264 = 3395853531095LLU;
	volatile int32_t t56 = -468;

    t56 = (((x261-x262)==x263)>x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MAX;
	volatile int32_t t57 = 109;

    t57 = (((x265-x266)==x267)>x268);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x270 = UINT8_MAX;
	volatile int64_t x271 = -3108LL;
	volatile int8_t x272 = INT8_MAX;
	int32_t t58 = -3160813;

    t58 = (((x269-x270)==x271)>x272);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x273 = 13847LL;
	int16_t x274 = INT16_MIN;
	int64_t x276 = 132492231720428166LL;

    t59 = (((x273-x274)==x275)>x276);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x278 = INT16_MIN;
	static uint32_t x279 = UINT32_MAX;
	int32_t t60 = -359445;

    t60 = (((x277-x278)==x279)>x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x281 = 681;
	int8_t x282 = INT8_MIN;
	int32_t x283 = -224;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t61 = 139517;

    t61 = (((x281-x282)==x283)>x284);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x285 = 1105739305U;
	uint32_t x286 = 2043U;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t62 = 442;

    t62 = (((x285-x286)==x287)>x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x293 = -46105232687393LL;
	int16_t x294 = INT16_MIN;
	int8_t x296 = 23;
	volatile int32_t t63 = 299478938;

    t63 = (((x293-x294)==x295)>x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x298 = -1;
	int8_t x299 = 8;
	volatile int64_t x300 = -1LL;
	volatile int32_t t64 = -513300;

    t64 = (((x297-x298)==x299)>x300);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x301 = 270LL;
	static volatile uint32_t x302 = 88U;
	uint16_t x303 = 452U;
	int16_t x304 = INT16_MAX;
	volatile int32_t t65 = -101;

    t65 = (((x301-x302)==x303)>x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x306 = 275932566094320LLU;
	int16_t x307 = INT16_MIN;
	static volatile int32_t x308 = 81997749;

    t66 = (((x305-x306)==x307)>x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x309 = 61U;
	uint16_t x310 = UINT16_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t67 = -28642;

    t67 = (((x309-x310)==x311)>x312);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	int32_t t68 = 19;

    t68 = (((x317-x318)==x319)>x320);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x321 = 191971485U;
	static uint8_t x323 = 27U;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t69 = 57;

    t69 = (((x321-x322)==x323)>x324);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x325 = 24U;
	int16_t x327 = INT16_MAX;
	int16_t x328 = INT16_MIN;

    t70 = (((x325-x326)==x327)>x328);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x329 = -1;
	int64_t x330 = INT64_MAX;
	int8_t x331 = -1;
	int16_t x332 = INT16_MIN;
	volatile int32_t t71 = 0;

    t71 = (((x329-x330)==x331)>x332);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = -1LL;
	static int8_t x334 = 54;
	static int8_t x335 = 0;
	volatile uint8_t x336 = UINT8_MAX;
	static volatile int32_t t72 = -10902;

    t72 = (((x333-x334)==x335)>x336);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x337 = INT64_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -1309LL;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t73 = 58968521;

    t73 = (((x337-x338)==x339)>x340);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 163610LLU;
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t74 = -7880;

    t74 = (((x345-x346)==x347)>x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x350 = 5000U;
	volatile int64_t x352 = INT64_MAX;
	int32_t t75 = 41521203;

    t75 = (((x349-x350)==x351)>x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x353 = UINT16_MAX;
	static int32_t x354 = -1;
	int32_t x355 = -1;
	int32_t t76 = 51;

    t76 = (((x353-x354)==x355)>x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x357 = -126605391075123LL;
	uint32_t x359 = 414070U;
	int64_t x360 = 772031643146769698LL;
	volatile int32_t t77 = 588806;

    t77 = (((x357-x358)==x359)>x360);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = 85;
	int16_t x362 = -1;
	static uint8_t x363 = 22U;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t78 = 1631;

    t78 = (((x361-x362)==x363)>x364);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x365 = UINT64_MAX;
	static int32_t x367 = INT32_MIN;
	volatile int32_t t79 = 6418696;

    t79 = (((x365-x366)==x367)>x368);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x369 = INT64_MAX;
	int16_t x370 = 0;
	volatile int32_t x371 = -1;
	static volatile int16_t x372 = INT16_MIN;
	volatile int32_t t80 = -334;

    t80 = (((x369-x370)==x371)>x372);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x373 = 7U;
	volatile int16_t x374 = INT16_MAX;
	uint64_t x375 = 49257626394LLU;
	volatile int16_t x376 = INT16_MIN;
	int32_t t81 = 29;

    t81 = (((x373-x374)==x375)>x376);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -675762402;
	volatile int16_t x378 = INT16_MAX;
	static int16_t x379 = INT16_MAX;
	volatile int64_t x380 = 340278LL;
	static int32_t t82 = -16;

    t82 = (((x377-x378)==x379)>x380);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x381 = 6207886717189506894LLU;
	volatile int8_t x382 = -1;
	int16_t x383 = -1;
	int64_t x384 = INT64_MIN;

    t83 = (((x381-x382)==x383)>x384);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x385 = INT16_MIN;
	static int16_t x387 = INT16_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int32_t t84 = 10519665;

    t84 = (((x385-x386)==x387)>x388);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x389 = INT64_MAX;
	static uint32_t x390 = 161932028U;
	int16_t x391 = -84;
	int32_t x392 = -1;
	int32_t t85 = 12923540;

    t85 = (((x389-x390)==x391)>x392);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x398 = INT16_MIN;
	int8_t x400 = 1;
	volatile int32_t t86 = -395;

    t86 = (((x397-x398)==x399)>x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x402 = 21249034742883276LLU;
	uint64_t x403 = 1LLU;
	int8_t x404 = 45;
	int32_t t87 = 21333204;

    t87 = (((x401-x402)==x403)>x404);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x406 = -1LL;
	int32_t x408 = -1;
	int32_t t88 = -660854;

    t88 = (((x405-x406)==x407)>x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x410 = -1LL;
	uint32_t x411 = 124317955U;
	int32_t t89 = -1121;

    t89 = (((x409-x410)==x411)>x412);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x414 = 3;
	int16_t x415 = INT16_MIN;
	int16_t x416 = -11;
	static volatile int32_t t90 = -38570930;

    t90 = (((x413-x414)==x415)>x416);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = 86U;
	static int8_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	static volatile uint32_t x420 = 66194912U;

    t91 = (((x417-x418)==x419)>x420);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = -1;
	int16_t x422 = -1;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MIN;

    t92 = (((x421-x422)==x423)>x424);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x425 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	int32_t t93 = 1;

    t93 = (((x425-x426)==x427)>x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x429 = 3U;
	static int32_t x430 = -1;
	volatile int16_t x431 = -2;
	int64_t x432 = INT64_MIN;
	volatile int32_t t94 = -90963;

    t94 = (((x429-x430)==x431)>x432);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x434 = INT64_MIN;
	int32_t x436 = -1;

    t95 = (((x433-x434)==x435)>x436);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x439 = UINT32_MAX;
	int64_t x440 = -1LL;
	static volatile int32_t t96 = 109059362;

    t96 = (((x437-x438)==x439)>x440);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x446 = 13556398U;
	uint32_t x447 = 410U;
	static int8_t x448 = INT8_MIN;
	int32_t t97 = 6292;

    t97 = (((x445-x446)==x447)>x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t98 = 56502;

    t98 = (((x449-x450)==x451)>x452);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x457 = UINT32_MAX;
	int8_t x458 = INT8_MIN;
	int16_t x460 = -1;
	int32_t t99 = -61;

    t99 = (((x457-x458)==x459)>x460);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x461 = -1;
	static uint64_t x462 = UINT64_MAX;
	static uint64_t x463 = 26832586778658150LLU;
	uint32_t x464 = 863389561U;
	int32_t t100 = -192854;

    t100 = (((x461-x462)==x463)>x464);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x470 = 629U;
	int8_t x471 = INT8_MIN;
	int64_t x472 = 355LL;

    t101 = (((x469-x470)==x471)>x472);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x473 = 7130LLU;
	static int16_t x474 = INT16_MAX;
	int32_t x475 = 1;
	static uint8_t x476 = 3U;
	static volatile int32_t t102 = -2106515;

    t102 = (((x473-x474)==x475)>x476);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x477 = -14900;
	static uint32_t x478 = UINT32_MAX;
	int64_t x479 = -1LL;
	volatile int32_t t103 = -242045239;

    t103 = (((x477-x478)==x479)>x480);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x481 = 563060174051015LLU;
	int32_t t104 = -33060060;

    t104 = (((x481-x482)==x483)>x484);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x485 = 0LLU;
	int64_t x486 = -329673LL;
	int32_t x487 = 476;
	int8_t x488 = -1;

    t105 = (((x485-x486)==x487)>x488);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MAX;
	volatile int32_t x491 = INT32_MIN;
	static int64_t x492 = -7434LL;

    t106 = (((x489-x490)==x491)>x492);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x493 = INT8_MIN;
	static volatile int32_t x495 = -1;
	int32_t x496 = 88;
	static volatile int32_t t107 = -16964;

    t107 = (((x493-x494)==x495)>x496);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x497 = 74;
	int16_t x498 = -1;
	static int8_t x500 = -1;
	volatile int32_t t108 = 0;

    t108 = (((x497-x498)==x499)>x500);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x501 = -1LL;
	int64_t x502 = 108148887196441406LL;
	volatile int32_t x503 = -14288;
	uint8_t x504 = 15U;
	int32_t t109 = -675007;

    t109 = (((x501-x502)==x503)>x504);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x506 = -1;
	static int8_t x507 = INT8_MIN;
	uint16_t x508 = 1587U;
	volatile int32_t t110 = 1444529;

    t110 = (((x505-x506)==x507)>x508);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x509 = -2;
	uint64_t x511 = 6086927LLU;
	static uint16_t x512 = 924U;
	volatile int32_t t111 = 2610;

    t111 = (((x509-x510)==x511)>x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x513 = 19LLU;
	int8_t x514 = -1;
	volatile int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MIN;

    t112 = (((x513-x514)==x515)>x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x517 = 75LLU;
	volatile int32_t x518 = INT32_MAX;
	int8_t x520 = 1;
	static int32_t t113 = 1;

    t113 = (((x517-x518)==x519)>x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MAX;
	uint8_t x522 = UINT8_MAX;
	volatile int16_t x523 = INT16_MIN;
	uint32_t x524 = 11823980U;

    t114 = (((x521-x522)==x523)>x524);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x525 = 2046U;
	volatile uint64_t x526 = UINT64_MAX;
	int32_t x527 = 5358;
	int16_t x528 = 14;
	int32_t t115 = 257695;

    t115 = (((x525-x526)==x527)>x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = INT16_MIN;
	volatile uint8_t x530 = 11U;
	volatile int32_t x531 = INT32_MIN;
	uint32_t x532 = UINT32_MAX;
	int32_t t116 = 1;

    t116 = (((x529-x530)==x531)>x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int8_t x538 = 0;
	uint8_t x539 = 11U;
	int8_t x540 = 1;
	int32_t t117 = 979347;

    t117 = (((x537-x538)==x539)>x540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x541 = 38209820014633LLU;
	volatile uint32_t x543 = 1366649207U;
	volatile int64_t x544 = -1LL;
	int32_t t118 = -227096;

    t118 = (((x541-x542)==x543)>x544);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x545 = INT32_MIN;
	static int16_t x546 = INT16_MIN;
	static int8_t x547 = INT8_MIN;
	volatile int64_t x548 = INT64_MAX;
	static int32_t t119 = -303851;

    t119 = (((x545-x546)==x547)>x548);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x549 = 280816;
	uint64_t x550 = 603810LLU;

    t120 = (((x549-x550)==x551)>x552);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x554 = UINT32_MAX;
	uint32_t x555 = UINT32_MAX;
	static volatile uint16_t x556 = UINT16_MAX;
	static volatile int32_t t121 = 9;

    t121 = (((x553-x554)==x555)>x556);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x557 = 1076791948LL;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MAX;
	int32_t x560 = -3;
	int32_t t122 = 1350814;

    t122 = (((x557-x558)==x559)>x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x561 = INT8_MIN;
	volatile int64_t x563 = -1LL;
	int8_t x564 = INT8_MAX;
	int32_t t123 = 31;

    t123 = (((x561-x562)==x563)>x564);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x565 = 149234740U;
	uint32_t x566 = 229876U;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t t124 = -6599089;

    t124 = (((x565-x566)==x567)>x568);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x571 = -1LL;
	static int8_t x572 = 0;
	static int32_t t125 = 2191;

    t125 = (((x569-x570)==x571)>x572);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x573 = INT16_MIN;
	volatile uint8_t x574 = UINT8_MAX;
	static uint64_t x576 = 50100687292187LLU;
	volatile int32_t t126 = 30;

    t126 = (((x573-x574)==x575)>x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = INT16_MAX;
	int16_t x578 = INT16_MIN;
	volatile uint8_t x579 = UINT8_MAX;
	int64_t x580 = -1LL;
	int32_t t127 = 7103;

    t127 = (((x577-x578)==x579)>x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x581 = UINT64_MAX;
	static volatile int16_t x583 = INT16_MAX;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t128 = -35831;

    t128 = (((x581-x582)==x583)>x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 5218LLU;
	volatile int32_t x596 = 272924;
	volatile int32_t t129 = 2;

    t129 = (((x593-x594)==x595)>x596);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x601 = INT64_MIN;
	volatile int8_t x602 = INT8_MIN;
	volatile int64_t x604 = INT64_MIN;
	static int32_t t130 = -1;

    t130 = (((x601-x602)==x603)>x604);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	uint16_t x606 = 97U;
	static volatile int16_t x608 = 2883;
	int32_t t131 = 973210127;

    t131 = (((x605-x606)==x607)>x608);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x613 = INT16_MAX;
	volatile int8_t x615 = INT8_MAX;
	uint16_t x616 = 5U;
	static volatile int32_t t132 = -2;

    t132 = (((x613-x614)==x615)>x616);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x617 = INT8_MAX;
	static int64_t x619 = INT64_MIN;
	int32_t t133 = -13118981;

    t133 = (((x617-x618)==x619)>x620);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x621 = 653;
	uint64_t x622 = 277808029LLU;
	int32_t x623 = INT32_MIN;
	uint32_t x624 = 32546038U;
	volatile int32_t t134 = -391131;

    t134 = (((x621-x622)==x623)>x624);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x629 = -1;
	int16_t x630 = INT16_MAX;
	uint64_t x631 = UINT64_MAX;
	int64_t x632 = 1209294404LL;
	int32_t t135 = -217858885;

    t135 = (((x629-x630)==x631)>x632);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x633 = -60859727963LL;
	uint64_t x634 = 15665444728LLU;
	int64_t x635 = INT64_MIN;
	static uint16_t x636 = 12U;
	static int32_t t136 = 97211830;

    t136 = (((x633-x634)==x635)>x636);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x637 = 49U;
	uint16_t x639 = 27088U;
	int64_t x640 = -233977454702333LL;
	volatile int32_t t137 = 2219;

    t137 = (((x637-x638)==x639)>x640);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x645 = 61073U;
	static int16_t x646 = -12430;
	static int64_t x647 = -1LL;
	volatile int32_t t138 = 93;

    t138 = (((x645-x646)==x647)>x648);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x649 = INT16_MAX;
	volatile int8_t x650 = INT8_MAX;
	int32_t x651 = INT32_MIN;
	int16_t x652 = INT16_MAX;
	int32_t t139 = -13748569;

    t139 = (((x649-x650)==x651)>x652);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x654 = 124181029LL;
	int16_t x655 = -14;
	int32_t t140 = 33432447;

    t140 = (((x653-x654)==x655)>x656);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x657 = -8979909727589994LL;
	uint8_t x658 = UINT8_MAX;
	uint8_t x659 = 17U;
	uint16_t x660 = 358U;
	static int32_t t141 = -120;

    t141 = (((x657-x658)==x659)>x660);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x662 = INT8_MAX;
	static volatile uint8_t x663 = 50U;
	uint16_t x664 = 1U;
	volatile int32_t t142 = -873683464;

    t142 = (((x661-x662)==x663)>x664);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x665 = 119232932U;
	volatile int16_t x666 = 3;
	int32_t x667 = -6;
	static int64_t x668 = 392205256LL;

    t143 = (((x665-x666)==x667)>x668);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x669 = UINT16_MAX;
	int8_t x670 = INT8_MIN;
	uint32_t x672 = 2U;
	volatile int32_t t144 = 1;

    t144 = (((x669-x670)==x671)>x672);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x673 = -1;
	static int32_t x674 = 129412;
	uint16_t x675 = 129U;
	static int8_t x676 = -1;
	static int32_t t145 = -1536;

    t145 = (((x673-x674)==x675)>x676);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	static int16_t x678 = INT16_MIN;
	int64_t x679 = INT64_MIN;
	int16_t x680 = INT16_MIN;
	int32_t t146 = -81933;

    t146 = (((x677-x678)==x679)>x680);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x681 = INT8_MIN;
	static uint32_t x682 = 1U;
	static uint32_t x683 = UINT32_MAX;
	uint16_t x684 = UINT16_MAX;
	int32_t t147 = -61236364;

    t147 = (((x681-x682)==x683)>x684);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x685 = 0U;
	volatile int16_t x687 = -1;
	static int8_t x688 = -1;
	int32_t t148 = 0;

    t148 = (((x685-x686)==x687)>x688);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x689 = UINT16_MAX;
	int8_t x691 = 25;
	int32_t t149 = -1336691;

    t149 = (((x689-x690)==x691)>x692);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x693 = -1;
	uint32_t x694 = UINT32_MAX;
	static int32_t x695 = 80449;
	volatile int8_t x696 = INT8_MIN;
	volatile int32_t t150 = -13833;

    t150 = (((x693-x694)==x695)>x696);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x697 = INT8_MIN;
	static int64_t x698 = -1LL;
	int8_t x699 = INT8_MIN;
	volatile int32_t x700 = INT32_MIN;
	static int32_t t151 = -62167264;

    t151 = (((x697-x698)==x699)>x700);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x701 = 952553;
	int16_t x702 = -3863;
	int8_t x704 = 0;

    t152 = (((x701-x702)==x703)>x704);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x706 = UINT32_MAX;
	int16_t x707 = 13;
	int8_t x708 = -13;
	int32_t t153 = -231;

    t153 = (((x705-x706)==x707)>x708);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x709 = INT8_MIN;
	uint16_t x710 = UINT16_MAX;
	static volatile int32_t x711 = -21391;
	static volatile int32_t t154 = 397053382;

    t154 = (((x709-x710)==x711)>x712);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x713 = -1;
	static volatile uint8_t x714 = 20U;
	uint8_t x716 = 55U;
	int32_t t155 = 16;

    t155 = (((x713-x714)==x715)>x716);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint64_t x718 = UINT64_MAX;
	uint64_t x720 = UINT64_MAX;
	volatile int32_t t156 = -1;

    t156 = (((x717-x718)==x719)>x720);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x721 = -1;
	int8_t x722 = INT8_MIN;
	volatile uint8_t x723 = 2U;
	static int32_t t157 = -20666;

    t157 = (((x721-x722)==x723)>x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x726 = UINT32_MAX;
	uint16_t x727 = 6178U;
	int8_t x728 = 4;
	volatile int32_t t158 = 50896604;

    t158 = (((x725-x726)==x727)>x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x730 = 14;
	uint64_t x731 = 6993867050182086LLU;
	uint32_t x732 = 547696667U;
	volatile int32_t t159 = -1447968;

    t159 = (((x729-x730)==x731)>x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x733 = INT16_MAX;
	int16_t x734 = INT16_MIN;
	int64_t x735 = INT64_MIN;
	uint8_t x736 = 0U;

    t160 = (((x733-x734)==x735)>x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	int32_t x738 = INT32_MIN;
	volatile int16_t x739 = -1;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t161 = 115952230;

    t161 = (((x737-x738)==x739)>x740);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x741 = INT8_MAX;
	volatile int64_t x743 = 6198164447551620LL;
	volatile int64_t x744 = 106896339LL;
	static volatile int32_t t162 = -1677;

    t162 = (((x741-x742)==x743)>x744);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x745 = 26U;
	volatile int8_t x746 = INT8_MIN;
	static uint64_t x747 = 1799381LLU;
	static int8_t x748 = 1;
	volatile int32_t t163 = 41;

    t163 = (((x745-x746)==x747)>x748);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x749 = -4687074590393997LL;
	volatile int64_t x750 = INT64_MIN;
	int64_t x751 = -1LL;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t164 = 462632;

    t164 = (((x749-x750)==x751)>x752);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x753 = INT16_MAX;
	static volatile uint32_t x755 = 325U;
	static uint8_t x756 = 1U;

    t165 = (((x753-x754)==x755)>x756);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x757 = INT32_MAX;
	int16_t x758 = 24;
	static uint16_t x759 = 113U;
	static int8_t x760 = -12;
	volatile int32_t t166 = 632127404;

    t166 = (((x757-x758)==x759)>x760);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x761 = -1LL;
	int8_t x762 = INT8_MIN;
	int16_t x763 = INT16_MIN;
	volatile int32_t t167 = -101197;

    t167 = (((x761-x762)==x763)>x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x766 = -1656204392927LL;
	int32_t x768 = -339549;
	volatile int32_t t168 = 24439;

    t168 = (((x765-x766)==x767)>x768);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x770 = 54227099481930LLU;
	static int64_t x771 = -680LL;
	volatile int32_t x772 = INT32_MAX;
	int32_t t169 = -1961939;

    t169 = (((x769-x770)==x771)>x772);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x774 = -1;
	int16_t x775 = 27;
	int32_t t170 = 0;

    t170 = (((x773-x774)==x775)>x776);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x777 = 1;
	int16_t x778 = INT16_MAX;
	int64_t x780 = -1LL;

    t171 = (((x777-x778)==x779)>x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x781 = UINT16_MAX;
	int16_t x782 = INT16_MAX;
	volatile int8_t x784 = INT8_MIN;

    t172 = (((x781-x782)==x783)>x784);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x785 = UINT8_MAX;
	volatile uint8_t x786 = UINT8_MAX;
	int32_t x787 = -1;
	uint64_t x788 = 2LLU;
	int32_t t173 = 4;

    t173 = (((x785-x786)==x787)>x788);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x793 = 398374219738991LLU;
	int16_t x794 = INT16_MIN;
	int64_t x795 = -9727122230LL;
	volatile int32_t t174 = 1015257;

    t174 = (((x793-x794)==x795)>x796);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x801 = -31713;
	int8_t x802 = INT8_MIN;
	int8_t x803 = INT8_MIN;
	static int32_t t175 = 50;

    t175 = (((x801-x802)==x803)>x804);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x805 = INT16_MIN;
	int64_t x806 = -37125042163LL;
	static uint16_t x807 = 7088U;
	volatile uint32_t x808 = 425U;
	static volatile int32_t t176 = 24616;

    t176 = (((x805-x806)==x807)>x808);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x809 = INT8_MIN;
	uint32_t x811 = 3U;
	int16_t x812 = INT16_MIN;
	int32_t t177 = -6312778;

    t177 = (((x809-x810)==x811)>x812);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = INT16_MIN;
	int64_t x816 = INT64_MIN;
	volatile int32_t t178 = -4545;

    t178 = (((x813-x814)==x815)>x816);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x817 = 9776U;
	int64_t x818 = -6479905LL;
	int64_t x819 = -1LL;
	volatile uint16_t x820 = 5647U;
	volatile int32_t t179 = 56538923;

    t179 = (((x817-x818)==x819)>x820);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = -12;
	volatile uint16_t x822 = 107U;
	int64_t x823 = INT64_MAX;
	int16_t x824 = 840;
	int32_t t180 = 1;

    t180 = (((x821-x822)==x823)>x824);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x825 = UINT64_MAX;
	static int64_t x826 = -105282440384LL;
	int8_t x828 = INT8_MIN;
	int32_t t181 = -14960586;

    t181 = (((x825-x826)==x827)>x828);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x829 = INT8_MIN;
	int16_t x832 = -1;
	static int32_t t182 = 80;

    t182 = (((x829-x830)==x831)>x832);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x833 = INT32_MAX;
	uint8_t x834 = 62U;
	int32_t x835 = INT32_MIN;
	volatile int16_t x836 = -1;

    t183 = (((x833-x834)==x835)>x836);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x837 = -33733684226393LL;
	int32_t x838 = INT32_MIN;
	uint8_t x839 = 9U;
	int64_t x840 = INT64_MIN;
	volatile int32_t t184 = -1;

    t184 = (((x837-x838)==x839)>x840);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x841 = INT64_MIN;
	volatile int64_t x842 = -1LL;
	int32_t x843 = INT32_MIN;
	volatile int32_t t185 = 0;

    t185 = (((x841-x842)==x843)>x844);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x845 = UINT16_MAX;
	uint8_t x846 = UINT8_MAX;
	int64_t x847 = -1LL;
	uint32_t x848 = 93U;
	int32_t t186 = 6579;

    t186 = (((x845-x846)==x847)>x848);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x850 = INT32_MAX;
	uint16_t x851 = UINT16_MAX;
	int16_t x852 = INT16_MIN;
	volatile int32_t t187 = -23942974;

    t187 = (((x849-x850)==x851)>x852);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x858 = UINT8_MAX;
	uint64_t x859 = 127353419037121LLU;
	int16_t x860 = INT16_MIN;

    t188 = (((x857-x858)==x859)>x860);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x861 = -1;
	static int64_t x862 = -1LL;
	volatile uint32_t x863 = UINT32_MAX;
	static int8_t x864 = INT8_MAX;
	static volatile int32_t t189 = 21;

    t189 = (((x861-x862)==x863)>x864);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x865 = INT32_MIN;
	volatile int64_t x866 = 24370LL;
	volatile int32_t x867 = 12141;
	int32_t x868 = INT32_MIN;
	volatile int32_t t190 = 7;

    t190 = (((x865-x866)==x867)>x868);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x869 = 2488921371884843LL;
	static int8_t x870 = -1;
	static int64_t x871 = INT64_MIN;
	static int32_t x872 = INT32_MAX;
	int32_t t191 = -2678858;

    t191 = (((x869-x870)==x871)>x872);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	volatile int32_t x878 = -2833;
	int64_t x879 = 1906902955LL;
	int8_t x880 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (((x877-x878)==x879)>x880);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x882 = 1U;
	static uint16_t x883 = 0U;
	uint64_t x884 = 60322LLU;
	volatile int32_t t193 = -1696046;

    t193 = (((x881-x882)==x883)>x884);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x885 = INT64_MAX;
	static volatile uint64_t x886 = UINT64_MAX;
	int16_t x887 = INT16_MAX;
	int8_t x888 = 49;
	static volatile int32_t t194 = -125;

    t194 = (((x885-x886)==x887)>x888);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x889 = INT64_MIN;
	uint64_t x890 = 9353573LLU;
	static uint32_t x892 = UINT32_MAX;
	static int32_t t195 = 32587994;

    t195 = (((x889-x890)==x891)>x892);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x893 = -180122780944972451LL;
	int16_t x894 = 0;
	static int16_t x895 = 51;
	uint64_t x896 = 3525144736771433LLU;
	static int32_t t196 = -955826337;

    t196 = (((x893-x894)==x895)>x896);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x897 = INT16_MIN;
	int64_t x898 = INT64_MIN;

    t197 = (((x897-x898)==x899)>x900);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x901 = -1LL;
	volatile uint16_t x902 = UINT16_MAX;
	int16_t x903 = -133;
	static int64_t x904 = INT64_MAX;

    t198 = (((x901-x902)==x903)>x904);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x905 = -1;
	int8_t x906 = -1;
	static int32_t x907 = INT32_MIN;
	static uint64_t x908 = 13563595LLU;

    t199 = (((x905-x906)==x907)>x908);

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

