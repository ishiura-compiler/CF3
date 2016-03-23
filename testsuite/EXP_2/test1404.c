
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

int32_t x3 = 71458111;
volatile int8_t x5 = -1;
static int32_t x12 = INT32_MIN;
static volatile int32_t t2 = -7490;
int16_t x16 = -39;
uint64_t x26 = 26983LLU;
int32_t t6 = 6155093;
static int32_t x34 = -1;
int32_t t10 = 56655929;
int8_t x54 = INT8_MIN;
uint8_t x56 = 90U;
static int8_t x59 = INT8_MIN;
int32_t x60 = INT32_MAX;
int8_t x69 = -31;
uint8_t x71 = 22U;
int64_t x78 = -2019139028LL;
int32_t x83 = -97889653;
volatile uint32_t x87 = 1336045U;
static volatile int64_t x88 = 8558923522093LL;
static uint32_t x92 = 1U;
volatile int64_t t21 = 57855616820553943LL;
static uint64_t x94 = 3471604335LLU;
uint64_t t22 = 20591LLU;
uint32_t t23 = 22608U;
static uint64_t t24 = 1201LLU;
int64_t x111 = -1LL;
int16_t x112 = -1;
static uint16_t x117 = 12252U;
volatile int32_t t27 = -13303524;
int32_t x128 = INT32_MAX;
static volatile uint64_t x132 = 1416410060303397576LLU;
volatile uint8_t x133 = 7U;
static uint8_t x135 = UINT8_MAX;
static int8_t x137 = INT8_MAX;
uint8_t x145 = 4U;
volatile int64_t t34 = -355709473252981LL;
int64_t x154 = -8609306228802LL;
int64_t x161 = INT64_MIN;
int64_t x165 = INT64_MAX;
volatile int64_t t38 = -78672276877643783LL;
volatile int32_t t40 = -17;
int8_t x190 = -1;
int32_t x208 = INT32_MAX;
volatile int32_t x216 = 1597;
int32_t t53 = -79487921;
int32_t t55 = 0;
int8_t x246 = INT8_MAX;
static uint64_t x247 = 470702324LLU;
uint16_t x249 = UINT16_MAX;
int16_t x254 = INT16_MIN;
int8_t x256 = -1;
uint64_t t64 = 502LLU;
static int64_t x273 = 1LL;
int32_t x278 = 116;
int16_t x285 = -1;
static int64_t x286 = -5LL;
static volatile int64_t x297 = INT64_MIN;
int16_t x299 = -7;
int64_t t71 = -35367012LL;
int8_t x302 = INT8_MIN;
static uint16_t x308 = UINT16_MAX;
static uint8_t x309 = 110U;
static uint32_t t76 = 435U;
int16_t x324 = INT16_MIN;
uint64_t t78 = 254865LLU;
static int16_t x332 = -1;
volatile int32_t t80 = 119;
static int16_t x337 = -1;
int16_t x364 = 15;
uint64_t x366 = 5LLU;
uint32_t x367 = 55997U;
volatile uint16_t x369 = 450U;
int64_t t89 = -60742187LL;
static uint32_t x373 = 1957919435U;
static volatile int16_t x376 = -277;
uint64_t x377 = UINT64_MAX;
volatile uint64_t t91 = 16610399154928688LLU;
int32_t x386 = -56297436;
int16_t x388 = INT16_MAX;
uint8_t x390 = 3U;
volatile int64_t x396 = INT64_MIN;
uint8_t x400 = UINT8_MAX;
volatile int32_t t99 = 7026140;
volatile uint64_t x415 = 1743LLU;
int32_t x421 = INT32_MIN;
static volatile int64_t x422 = INT64_MIN;
volatile int32_t x423 = INT32_MIN;
int8_t x428 = -1;
int32_t x429 = INT32_MAX;
uint8_t x432 = 4U;
volatile uint16_t x433 = 3112U;
uint8_t x436 = 11U;
volatile int32_t t105 = 3;
uint16_t x440 = 33U;
static uint16_t x456 = 1U;
uint16_t x460 = 15U;
int64_t t115 = -28047909382686LL;
uint8_t x478 = 15U;
static uint64_t x487 = UINT64_MAX;
int64_t x488 = -345823354LL;
int64_t x495 = INT64_MAX;
int64_t x501 = INT64_MIN;
volatile int64_t x503 = -1LL;
volatile int64_t t122 = 54391LL;
int32_t x512 = INT32_MAX;
volatile uint64_t t125 = 1332218316456953258LLU;
static int32_t x517 = -1;
static volatile int8_t x523 = 31;
uint16_t x524 = UINT16_MAX;
int64_t x526 = -1LL;
int8_t x528 = -1;
static volatile uint8_t x529 = 9U;
volatile int32_t t129 = -152313;
int8_t x535 = -1;
int8_t x537 = INT8_MIN;
uint64_t x540 = UINT64_MAX;
int32_t x542 = -2;
int64_t x543 = -1LL;
static volatile uint64_t x554 = 2LLU;
uint64_t x557 = UINT64_MAX;
static int16_t x562 = -1;
int32_t t137 = 177992;
volatile int16_t x576 = -1;
int32_t x586 = INT32_MIN;
int8_t x590 = INT8_MIN;
volatile uint64_t t144 = 2236384804166455LLU;
volatile int8_t x594 = 2;
int16_t x596 = 6;
int64_t x597 = 179690495LL;
static int32_t x600 = -6767370;
static volatile int32_t t147 = 124698548;
uint32_t x607 = 484U;
uint64_t x619 = UINT64_MAX;
uint32_t t152 = 25173483U;
uint64_t x627 = 9308300LLU;
volatile int32_t t153 = 249858;
uint32_t x631 = 1550U;
volatile int16_t x634 = -1;
uint32_t x636 = UINT32_MAX;
volatile uint32_t t156 = 1068243682U;
static int32_t x643 = INT32_MIN;
static int64_t x644 = -17980368832638498LL;
static volatile int64_t x650 = INT64_MIN;
volatile int32_t t159 = -1;
uint32_t x654 = 6115772U;
int8_t x658 = INT8_MIN;
static volatile uint8_t x662 = 111U;
volatile int32_t t163 = 1224371;
volatile uint32_t x679 = 24U;
uint64_t x682 = 26129639316735LLU;
static volatile uint64_t x683 = UINT64_MAX;
int32_t t166 = 32807917;
int64_t x687 = 4178264LL;
int16_t x698 = -15237;
uint16_t x700 = 4526U;
int32_t x703 = -1;
volatile int64_t x707 = -1LL;
volatile int32_t x708 = -1;
static volatile int32_t x712 = 176989;
int8_t x713 = -1;
int8_t x717 = INT8_MIN;
static uint32_t t175 = 36U;
static volatile int64_t x725 = 2928LL;
static int64_t t177 = 2LL;
static uint64_t x734 = 4930LLU;
volatile uint32_t x738 = 100235777U;
int8_t x740 = -1;
int32_t t181 = 16841894;
int8_t x748 = INT8_MIN;
uint32_t x752 = 597U;
int8_t x755 = 21;
int8_t x758 = INT8_MIN;
int64_t t185 = -1001550093LL;
static int32_t x763 = -1;
int32_t t186 = 45;
volatile int16_t x765 = INT16_MIN;
int64_t x769 = INT64_MAX;
int32_t x773 = -1;
static int64_t x779 = 464LL;
uint32_t x802 = UINT32_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int8_t x2 = -1;
	int16_t x4 = 170;
	int32_t t0 = -366;

    t0 = ((x1*(x2==x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	volatile int64_t x7 = INT64_MAX;
	int16_t x8 = -1;
	int32_t t1 = -931926706;

    t1 = ((x5*(x6==x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	uint64_t x10 = UINT64_MAX;
	volatile int64_t x11 = 37008392LL;

    t2 = ((x9*(x10==x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 15098609;
	volatile int64_t t3 = 1334956371389968LL;

    t3 = ((x13*(x14==x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	int32_t x22 = 189251;
	static int8_t x23 = INT8_MAX;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t4 = 344000;

    t4 = ((x21*(x22==x23))/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	static int8_t x27 = INT8_MIN;
	int32_t x28 = 5948961;
	int32_t t5 = 1;

    t5 = ((x25*(x26==x27))/x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -80;
	int64_t x30 = INT64_MIN;
	volatile uint32_t x31 = 14U;
	static int16_t x32 = -1;

    t6 = ((x29*(x30==x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 2036;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = 847;

    t7 = ((x33*(x34==x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = 12LL;
	static int8_t x38 = INT8_MIN;
	uint8_t x39 = 5U;
	int32_t x40 = INT32_MAX;
	volatile int64_t t8 = -837078386619166225LL;

    t8 = ((x37*(x38==x39))/x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = 640527842832198973LL;
	static volatile int64_t x42 = 58445049841849LL;
	int32_t x43 = INT32_MIN;
	static uint32_t x44 = 2U;
	volatile int64_t t9 = 111702LL;

    t9 = ((x41*(x42==x43))/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x45 = UINT8_MAX;
	static int16_t x46 = 59;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;

    t10 = ((x45*(x46==x47))/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = -5;
	static int16_t x50 = -1;
	uint32_t x51 = 2048U;
	static volatile int32_t x52 = -1;
	volatile int32_t t11 = 1;

    t11 = ((x49*(x50==x51))/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = -3227855055570LL;
	static int8_t x55 = 1;
	volatile int64_t t12 = 8562340207717LL;

    t12 = ((x53*(x54==x55))/x56);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 13;
	uint16_t x58 = UINT16_MAX;
	int32_t t13 = 31194;

    t13 = ((x57*(x58==x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	static uint8_t x62 = UINT8_MAX;
	volatile int16_t x63 = 3;
	int64_t x64 = -730380548107LL;
	static int64_t t14 = 2017731LL;

    t14 = ((x61*(x62==x63))/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 22U;
	uint32_t x66 = 46646U;
	volatile int32_t x67 = 207;
	static int64_t x68 = INT64_MAX;
	int64_t t15 = 53LL;

    t15 = ((x65*(x66==x67))/x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x70 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t16 = 12950;

    t16 = ((x69*(x70==x71))/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MAX;
	int64_t t17 = -694LL;

    t17 = ((x73*(x74==x75))/x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = UINT64_MAX;
	static uint8_t x79 = 0U;
	int16_t x80 = 660;
	volatile uint64_t t18 = 652927916191671LLU;

    t18 = ((x77*(x78==x79))/x80);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 524U;
	uint32_t x82 = 37U;
	int64_t x84 = -1LL;
	volatile int64_t t19 = -7LL;

    t19 = ((x81*(x82==x83))/x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	volatile int8_t x86 = 13;
	volatile int64_t t20 = 2519774315251LL;

    t20 = ((x85*(x86==x87))/x88);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	static volatile uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;

    t21 = ((x89*(x90==x91))/x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -1LL;
	uint8_t x95 = 2U;
	static volatile uint64_t x96 = UINT64_MAX;

    t22 = ((x93*(x94==x95))/x96);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	static uint16_t x102 = UINT16_MAX;
	volatile int32_t x103 = INT32_MIN;
	uint32_t x104 = 5U;

    t23 = ((x101*(x102==x103))/x104);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 4191U;
	volatile int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 891977412LLU;

    t24 = ((x105*(x106==x107))/x108);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = 4087;
	static int64_t x110 = INT64_MIN;
	volatile int32_t t25 = 322406;

    t25 = ((x109*(x110==x111))/x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x113 = UINT16_MAX;
	int32_t x114 = 7291;
	int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MIN;
	static volatile int32_t t26 = 2128761;

    t26 = ((x113*(x114==x115))/x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x118 = 14LLU;
	volatile int32_t x119 = -104710;
	volatile int16_t x120 = INT16_MIN;

    t27 = ((x117*(x118==x119))/x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MIN;
	volatile int16_t x122 = INT16_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	static volatile int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -521683;

    t28 = ((x121*(x122==x123))/x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	static int32_t t29 = 7;

    t29 = ((x125*(x126==x127))/x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -1;
	volatile uint8_t x130 = 25U;
	volatile int16_t x131 = 683;
	static volatile uint64_t t30 = 597LLU;

    t30 = ((x129*(x130==x131))/x132);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x134 = INT64_MIN;
	static uint16_t x136 = 49U;
	static volatile int32_t t31 = -164;

    t31 = ((x133*(x134==x135))/x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = 41831480642LL;
	uint64_t x140 = 2484046854223LLU;
	uint64_t t32 = 32713LLU;

    t32 = ((x137*(x138==x139))/x140);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x146 = INT16_MIN;
	int16_t x147 = -1;
	int64_t x148 = INT64_MIN;
	volatile int64_t t33 = 98825835929LL;

    t33 = ((x145*(x146==x147))/x148);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = -12811LL;
	static int16_t x150 = 3;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = UINT16_MAX;

    t34 = ((x149*(x150==x151))/x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 49169LLU;
	uint64_t x155 = 6688689LLU;
	static int64_t x156 = 1668LL;
	uint64_t t35 = 2984362466840095LLU;

    t35 = ((x153*(x154==x155))/x156);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	volatile int32_t t36 = 20;

    t36 = ((x157*(x158==x159))/x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x162 = 255497185LL;
	int64_t x163 = -85189068454LL;
	uint32_t x164 = 63276U;
	int64_t t37 = 161771291754LL;

    t37 = ((x161*(x162==x163))/x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x166 = -2412LL;
	int16_t x167 = -32;
	int32_t x168 = -70527465;

    t38 = ((x165*(x166==x167))/x168);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = 0U;
	static int64_t x170 = -28661LL;
	volatile int16_t x171 = -1;
	volatile uint8_t x172 = UINT8_MAX;
	int32_t t39 = -484233335;

    t39 = ((x169*(x170==x171))/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x173 = INT32_MIN;
	uint8_t x174 = 17U;
	uint8_t x175 = 2U;
	uint8_t x176 = UINT8_MAX;

    t40 = ((x173*(x174==x175))/x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = INT8_MIN;
	static int8_t x178 = -1;
	static int64_t x179 = INT64_MIN;
	uint8_t x180 = 24U;
	volatile int32_t t41 = -1642630;

    t41 = ((x177*(x178==x179))/x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = 15;
	int16_t x182 = -633;
	uint8_t x183 = 5U;
	uint8_t x184 = 10U;
	volatile int32_t t42 = -7221690;

    t42 = ((x181*(x182==x183))/x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = 69U;
	static volatile int32_t x186 = -1;
	static int32_t x187 = INT32_MAX;
	static int32_t x188 = -3254;
	uint32_t t43 = 1041063U;

    t43 = ((x185*(x186==x187))/x188);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x189 = -490998403172898LL;
	int8_t x191 = INT8_MAX;
	static int16_t x192 = -1103;
	volatile int64_t t44 = -32424880819LL;

    t44 = ((x189*(x190==x191))/x192);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = -1LL;
	int64_t x196 = 51LL;
	volatile int64_t t45 = -944573949990269LL;

    t45 = ((x193*(x194==x195))/x196);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	int64_t x199 = 224521838802460LL;
	volatile uint8_t x200 = UINT8_MAX;
	int32_t t46 = -5;

    t46 = ((x197*(x198==x199))/x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x201 = 7U;
	volatile int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	int16_t x204 = -1;
	int32_t t47 = 0;

    t47 = ((x201*(x202==x203))/x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x205 = 883U;
	volatile uint16_t x206 = 1017U;
	static uint64_t x207 = 1043498207225594676LLU;
	int32_t t48 = 222850;

    t48 = ((x205*(x206==x207))/x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = 1LL;
	uint32_t x210 = 2430U;
	int32_t x211 = INT32_MAX;
	int8_t x212 = 1;
	int64_t t49 = -114LL;

    t49 = ((x209*(x210==x211))/x212);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x213 = 11265U;
	int8_t x214 = INT8_MIN;
	int64_t x215 = 66460LL;
	int32_t t50 = 210;

    t50 = ((x213*(x214==x215))/x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x217 = 490235;
	static int16_t x218 = 7;
	int16_t x219 = 49;
	int16_t x220 = INT16_MAX;
	int32_t t51 = 11458342;

    t51 = ((x217*(x218==x219))/x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = -193;
	static volatile int64_t x222 = -168247505419LL;
	static uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 35006988154105LLU;
	volatile uint64_t t52 = 8716LLU;

    t52 = ((x221*(x222==x223))/x224);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = 28;
	uint16_t x226 = 7734U;
	static uint32_t x227 = 155817U;
	volatile int32_t x228 = INT32_MIN;

    t53 = ((x225*(x226==x227))/x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	static volatile int64_t x230 = -3225210598LL;
	int8_t x231 = 1;
	uint8_t x232 = 127U;
	static int32_t t54 = 3;

    t54 = ((x229*(x230==x231))/x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x233 = -336996338;
	static uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 5LLU;
	int16_t x236 = INT16_MIN;

    t55 = ((x233*(x234==x235))/x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x238 = -1;
	static int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	int64_t t56 = 18LL;

    t56 = ((x237*(x238==x239))/x240);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x241 = 102U;
	volatile int16_t x242 = INT16_MIN;
	uint16_t x243 = 565U;
	uint32_t x244 = UINT32_MAX;
	uint32_t t57 = 124005U;

    t57 = ((x241*(x242==x243))/x244);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x245 = 10611U;
	int8_t x248 = INT8_MIN;
	static uint32_t t58 = 1001U;

    t58 = ((x245*(x246==x247))/x248);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x250 = UINT8_MAX;
	static uint8_t x251 = 8U;
	static int8_t x252 = -1;
	static int32_t t59 = 49949391;

    t59 = ((x249*(x250==x251))/x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x253 = INT64_MAX;
	uint16_t x255 = 2U;
	volatile int64_t t60 = -1701337357LL;

    t60 = ((x253*(x254==x255))/x256);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = INT64_MIN;
	volatile int32_t x258 = -229;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = UINT8_MAX;
	static int64_t t61 = 713539721941LL;

    t61 = ((x257*(x258==x259))/x260);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = -1;
	static int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	uint16_t x264 = 431U;
	static int32_t t62 = 6;

    t62 = ((x261*(x262==x263))/x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x265 = 10U;
	int16_t x266 = -1;
	static uint64_t x267 = UINT64_MAX;
	static uint8_t x268 = 22U;
	static volatile int32_t t63 = 2383789;

    t63 = ((x265*(x266==x267))/x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 13;
	int64_t x271 = -1LL;
	int8_t x272 = -1;

    t64 = ((x269*(x270==x271))/x272);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x274 = INT32_MIN;
	volatile int32_t x275 = INT32_MIN;
	uint64_t x276 = 7794928635424562LLU;
	uint64_t t65 = 94292642360495LLU;

    t65 = ((x273*(x274==x275))/x276);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = 194;
	volatile uint32_t x279 = 28824798U;
	uint16_t x280 = UINT16_MAX;
	int32_t t66 = -1390363;

    t66 = ((x277*(x278==x279))/x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	uint64_t x282 = 14918742062883315LLU;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 14743411569593402LLU;
	uint64_t t67 = 2182321LLU;

    t67 = ((x281*(x282==x283))/x284);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x287 = INT8_MAX;
	volatile int16_t x288 = 172;
	static volatile int32_t t68 = 10;

    t68 = ((x285*(x286==x287))/x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = INT64_MIN;
	static uint64_t x290 = 1800792LLU;
	int16_t x291 = INT16_MAX;
	int8_t x292 = 26;
	int64_t t69 = -486628838455LL;

    t69 = ((x289*(x290==x291))/x292);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	volatile int16_t x295 = -1;
	uint16_t x296 = 2614U;
	volatile int64_t t70 = 3357369566688033153LL;

    t70 = ((x293*(x294==x295))/x296);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x298 = 16389504700014529LLU;
	int16_t x300 = -2271;

    t71 = ((x297*(x298==x299))/x300);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = INT8_MIN;
	uint16_t x303 = 2577U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t72 = -24565;

    t72 = ((x301*(x302==x303))/x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MIN;
	uint16_t x306 = 40U;
	int16_t x307 = -1;
	int64_t t73 = 1548345618036LL;

    t73 = ((x305*(x306==x307))/x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x310 = INT16_MIN;
	volatile int32_t x311 = INT32_MIN;
	int64_t x312 = 465839156LL;
	static int64_t t74 = 32200747582917404LL;

    t74 = ((x309*(x310==x311))/x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x313 = 422U;
	static int64_t x314 = -17979264851099697LL;
	int64_t x315 = INT64_MIN;
	int32_t x316 = 106823619;
	volatile uint32_t t75 = 12359U;

    t75 = ((x313*(x314==x315))/x316);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x317 = 64U;
	int64_t x318 = INT64_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = INT16_MIN;

    t76 = ((x317*(x318==x319))/x320);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x321 = 42U;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = 1896951246669LLU;
	int32_t t77 = -551;

    t77 = ((x321*(x322==x323))/x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x325 = 972094U;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = UINT64_MAX;

    t78 = ((x325*(x326==x327))/x328);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x329 = 1764U;
	static int32_t x330 = INT32_MIN;
	static int16_t x331 = INT16_MAX;
	static volatile uint32_t t79 = 252969082U;

    t79 = ((x329*(x330==x331))/x332);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = -163;
	int8_t x334 = 30;
	static volatile uint8_t x335 = 121U;
	int32_t x336 = INT32_MIN;

    t80 = ((x333*(x334==x335))/x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x338 = 8162;
	static int16_t x339 = INT16_MAX;
	int64_t x340 = -1088350517810464LL;
	volatile int64_t t81 = 123LL;

    t81 = ((x337*(x338==x339))/x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x342 = 64892430840LL;
	int16_t x343 = -1;
	int64_t x344 = INT64_MIN;
	volatile int64_t t82 = 68944LL;

    t82 = ((x341*(x342==x343))/x344);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x345 = 26U;
	int64_t x346 = 10252209975091185LL;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = -2992;
	volatile int32_t t83 = -701620868;

    t83 = ((x345*(x346==x347))/x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x349 = 981U;
	int64_t x350 = INT64_MIN;
	int8_t x351 = 30;
	uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t84 = 411678LLU;

    t84 = ((x349*(x350==x351))/x352);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = INT64_MIN;
	static uint64_t x354 = 100101927773457365LLU;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -1;
	volatile int64_t t85 = -2727976940200843LL;

    t85 = ((x353*(x354==x355))/x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 173341U;
	volatile uint8_t x358 = 15U;
	static int8_t x359 = INT8_MIN;
	volatile int64_t x360 = -1LL;
	volatile int64_t t86 = -3729234642LL;

    t86 = ((x357*(x358==x359))/x360);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x361 = 63403U;
	static int8_t x362 = 1;
	int16_t x363 = -503;
	volatile uint32_t t87 = 704845U;

    t87 = ((x361*(x362==x363))/x364);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = -7;
	volatile int32_t x368 = INT32_MAX;
	volatile int32_t t88 = -501790584;

    t88 = ((x365*(x366==x367))/x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	int64_t x372 = INT64_MAX;

    t89 = ((x369*(x370==x371))/x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x374 = INT8_MAX;
	uint32_t x375 = UINT32_MAX;
	volatile uint32_t t90 = 6846611U;

    t90 = ((x373*(x374==x375))/x376);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x378 = 225272078965190LLU;
	static uint64_t x379 = 597112767792781725LLU;
	static uint32_t x380 = 11002U;

    t91 = ((x377*(x378==x379))/x380);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x381 = 0U;
	volatile int16_t x382 = 1556;
	uint32_t x383 = 3U;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t92 = 1;

    t92 = ((x381*(x382==x383))/x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x385 = INT64_MIN;
	volatile uint64_t x387 = UINT64_MAX;
	int64_t t93 = 32LL;

    t93 = ((x385*(x386==x387))/x388);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = INT64_MIN;
	volatile int64_t x391 = -10211LL;
	uint16_t x392 = 1900U;
	int64_t t94 = -168058440159468195LL;

    t94 = ((x389*(x390==x391))/x392);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x393 = 1008U;
	static uint64_t x394 = UINT64_MAX;
	static int64_t x395 = -14LL;
	volatile int64_t t95 = -84LL;

    t95 = ((x393*(x394==x395))/x396);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x397 = 0;
	int16_t x398 = -1;
	volatile int8_t x399 = INT8_MAX;
	volatile int32_t t96 = -2202;

    t96 = ((x397*(x398==x399))/x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x401 = INT16_MIN;
	int64_t x402 = -2651733684347LL;
	int8_t x403 = -1;
	static int64_t x404 = -316681058LL;
	int64_t t97 = 11823611288LL;

    t97 = ((x401*(x402==x403))/x404);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x405 = -7031051732671LL;
	static uint64_t x406 = 7931448680778565LLU;
	uint64_t x407 = 3178988989LLU;
	uint8_t x408 = 16U;
	int64_t t98 = 11LL;

    t98 = ((x405*(x406==x407))/x408);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 49U;
	int64_t x410 = INT64_MIN;
	static volatile int32_t x411 = INT32_MIN;
	static int32_t x412 = -340;

    t99 = ((x409*(x410==x411))/x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x413 = 15707U;
	uint64_t x414 = 1052433143106LLU;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t100 = 222;

    t100 = ((x413*(x414==x415))/x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = 22712;
	int32_t x418 = 2;
	int8_t x419 = INT8_MAX;
	int8_t x420 = 3;
	int32_t t101 = -763405709;

    t101 = ((x417*(x418==x419))/x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x424 = 134U;
	volatile int32_t t102 = -68484;

    t102 = ((x421*(x422==x423))/x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = -6691655LL;
	uint32_t x426 = 85729772U;
	int16_t x427 = INT16_MIN;
	volatile int64_t t103 = -528772052505LL;

    t103 = ((x425*(x426==x427))/x428);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	volatile int32_t t104 = 257727;

    t104 = ((x429*(x430==x431))/x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x434 = INT16_MAX;
	uint16_t x435 = 12U;

    t105 = ((x433*(x434==x435))/x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = -1;
	static int64_t x438 = INT64_MAX;
	int32_t x439 = INT32_MAX;
	int32_t t106 = -32318987;

    t106 = ((x437*(x438==x439))/x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x441 = 1;
	int32_t x442 = INT32_MIN;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = -1;
	volatile int32_t t107 = 1265555;

    t107 = ((x441*(x442==x443))/x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = 63;
	int8_t x447 = -1;
	static int64_t x448 = INT64_MIN;
	int64_t t108 = 644130737934427LL;

    t108 = ((x445*(x446==x447))/x448);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x449 = UINT32_MAX;
	int32_t x450 = INT32_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	volatile int32_t x452 = INT32_MIN;
	volatile uint32_t t109 = 20U;

    t109 = ((x449*(x450==x451))/x452);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x453 = 72497432U;
	int16_t x454 = -1;
	int64_t x455 = -1LL;
	uint32_t t110 = 1U;

    t110 = ((x453*(x454==x455))/x456);

    if (t110 != 72497432U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = 7981427926450LL;
	uint16_t x458 = UINT16_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	static volatile int64_t t111 = 140063500342642724LL;

    t111 = ((x457*(x458==x459))/x460);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = -1;
	static int32_t x462 = INT32_MAX;
	static uint32_t x463 = 692575399U;
	int32_t x464 = 524981789;
	volatile int32_t t112 = -3110;

    t112 = ((x461*(x462==x463))/x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x465 = 28682751742507LL;
	static int64_t x466 = INT64_MIN;
	volatile int8_t x467 = INT8_MIN;
	static uint8_t x468 = 50U;
	int64_t t113 = 590956214LL;

    t113 = ((x465*(x466==x467))/x468);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = -12;
	int32_t x470 = 12;
	int64_t x471 = INT64_MAX;
	volatile uint64_t x472 = 7429LLU;
	uint64_t t114 = 795582911LLU;

    t114 = ((x469*(x470==x471))/x472);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x473 = INT64_MIN;
	uint64_t x474 = 7283278LLU;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MIN;

    t115 = ((x473*(x474==x475))/x476);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 5U;
	volatile int16_t x479 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	int64_t t116 = -504034058LL;

    t116 = ((x477*(x478==x479))/x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	volatile int64_t x484 = 187357568005175798LL;
	int64_t t117 = 185578LL;

    t117 = ((x481*(x482==x483))/x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = -24070610897LL;
	volatile int64_t x486 = INT64_MAX;
	volatile int64_t t118 = -12LL;

    t118 = ((x485*(x486==x487))/x488);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MAX;
	volatile uint64_t x491 = 53730365473997LLU;
	int32_t x492 = INT32_MIN;
	int32_t t119 = -4006;

    t119 = ((x489*(x490==x491))/x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	static int16_t x496 = 4;
	volatile int32_t t120 = -655;

    t120 = ((x493*(x494==x495))/x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	static uint16_t x499 = 2014U;
	int32_t x500 = INT32_MIN;
	volatile uint32_t t121 = 24584U;

    t121 = ((x497*(x498==x499))/x500);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x502 = 53U;
	int64_t x504 = -437173842107154LL;

    t122 = ((x501*(x502==x503))/x504);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x505 = UINT8_MAX;
	int64_t x506 = 345440112471129073LL;
	int64_t x507 = INT64_MIN;
	int32_t x508 = -1;
	static int32_t t123 = 0;

    t123 = ((x505*(x506==x507))/x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = -1LL;
	static uint64_t x510 = 809471347500224175LLU;
	int32_t x511 = INT32_MIN;
	static volatile int64_t t124 = -1670943432107916460LL;

    t124 = ((x509*(x510==x511))/x512);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = -408201745730763635LL;
	int32_t x514 = INT32_MAX;
	static uint64_t x515 = 1LLU;
	uint64_t x516 = UINT64_MAX;

    t125 = ((x513*(x514==x515))/x516);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x518 = 0;
	int64_t x519 = -1LL;
	static int8_t x520 = INT8_MAX;
	static int32_t t126 = -1001931704;

    t126 = ((x517*(x518==x519))/x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x521 = 213638LLU;
	volatile int64_t x522 = INT64_MIN;
	uint64_t t127 = 164LLU;

    t127 = ((x521*(x522==x523))/x524);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x525 = INT8_MIN;
	static int8_t x527 = INT8_MIN;
	int32_t t128 = -4692;

    t128 = ((x525*(x526==x527))/x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x530 = 3U;
	uint32_t x531 = 1846456U;
	int8_t x532 = -29;

    t129 = ((x529*(x530==x531))/x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x533 = 1690655076LLU;
	int16_t x534 = 1057;
	volatile int64_t x536 = -1LL;
	volatile uint64_t t130 = 2780LLU;

    t130 = ((x533*(x534==x535))/x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x538 = 320LLU;
	int8_t x539 = INT8_MAX;
	uint64_t t131 = 365834316813LLU;

    t131 = ((x537*(x538==x539))/x540);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t132 = 123231369;

    t132 = ((x541*(x542==x543))/x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x545 = UINT32_MAX;
	static int32_t x546 = INT32_MAX;
	int32_t x547 = 16039;
	volatile int32_t x548 = -360794;
	volatile uint32_t t133 = 3295U;

    t133 = ((x545*(x546==x547))/x548);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = INT32_MIN;
	static int16_t x550 = -1;
	uint16_t x551 = 237U;
	int32_t x552 = INT32_MAX;
	static int32_t t134 = 298902215;

    t134 = ((x549*(x550==x551))/x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x553 = INT32_MAX;
	int64_t x555 = INT64_MIN;
	volatile int64_t x556 = -2822LL;
	volatile int64_t t135 = 7907LL;

    t135 = ((x553*(x554==x555))/x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x558 = UINT64_MAX;
	int32_t x559 = -1;
	static int64_t x560 = INT64_MIN;
	uint64_t t136 = 29177096969LLU;

    t136 = ((x557*(x558==x559))/x560);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = -7;
	int32_t x563 = -1;
	uint16_t x564 = 980U;

    t137 = ((x561*(x562==x563))/x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x565 = 4U;
	int32_t x566 = -1;
	int64_t x567 = INT64_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t138 = 3966721;

    t138 = ((x565*(x566==x567))/x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = INT64_MIN;
	volatile int16_t x570 = INT16_MIN;
	static int8_t x571 = INT8_MIN;
	static volatile uint32_t x572 = 3U;
	volatile int64_t t139 = 0LL;

    t139 = ((x569*(x570==x571))/x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x573 = 20U;
	static int16_t x574 = -6;
	int16_t x575 = 207;
	uint32_t t140 = 1214U;

    t140 = ((x573*(x574==x575))/x576);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = INT16_MAX;
	int32_t x578 = INT32_MIN;
	int16_t x579 = -212;
	static int16_t x580 = INT16_MAX;
	int32_t t141 = 226912;

    t141 = ((x577*(x578==x579))/x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x581 = INT64_MIN;
	int16_t x582 = 0;
	volatile int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MIN;
	volatile int64_t t142 = -2585LL;

    t142 = ((x581*(x582==x583))/x584);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x585 = -1;
	int8_t x587 = -7;
	uint8_t x588 = 1U;
	int32_t t143 = 53;

    t143 = ((x585*(x586==x587))/x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = -1;
	uint16_t x591 = 0U;
	uint64_t x592 = 684670418159LLU;

    t144 = ((x589*(x590==x591))/x592);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x593 = INT32_MAX;
	uint16_t x595 = 24U;
	static volatile int32_t t145 = -1262;

    t145 = ((x593*(x594==x595))/x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x598 = UINT64_MAX;
	volatile int32_t x599 = -1;
	int64_t t146 = -3142350280136LL;

    t146 = ((x597*(x598==x599))/x600);

    if (t146 != -26LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x602 = INT8_MAX;
	static int64_t x603 = -1LL;
	int32_t x604 = 1017;

    t147 = ((x601*(x602==x603))/x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = 0;
	int8_t x606 = INT8_MIN;
	volatile uint64_t x608 = 38371154871486283LLU;
	volatile uint64_t t148 = 3774191724805LLU;

    t148 = ((x605*(x606==x607))/x608);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x609 = INT64_MIN;
	int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MAX;
	int32_t x612 = 10;
	int64_t t149 = 1416884309939LL;

    t149 = ((x609*(x610==x611))/x612);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MAX;
	uint8_t x614 = 11U;
	volatile int64_t x615 = INT64_MIN;
	int8_t x616 = -10;
	volatile int32_t t150 = 2490;

    t150 = ((x613*(x614==x615))/x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = -3;
	static int64_t x618 = INT64_MAX;
	int16_t x620 = INT16_MAX;
	volatile int32_t t151 = 1014;

    t151 = ((x617*(x618==x619))/x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x621 = 239211U;
	int64_t x622 = -1LL;
	int64_t x623 = INT64_MIN;
	static volatile uint16_t x624 = 872U;

    t152 = ((x621*(x622==x623))/x624);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = -1;
	uint64_t x626 = UINT64_MAX;
	int32_t x628 = -1;

    t153 = ((x625*(x626==x627))/x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = -1LL;
	int32_t x632 = -1;
	int64_t t154 = -76888195LL;

    t154 = ((x629*(x630==x631))/x632);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x633 = -1362;
	int16_t x635 = INT16_MIN;
	volatile uint32_t t155 = 34955176U;

    t155 = ((x633*(x634==x635))/x636);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x637 = 315U;
	int64_t x638 = INT64_MIN;
	uint32_t x639 = UINT32_MAX;
	int8_t x640 = INT8_MIN;

    t156 = ((x637*(x638==x639))/x640);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MIN;
	int64_t t157 = 236191203427263527LL;

    t157 = ((x641*(x642==x643))/x644);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x645 = INT64_MIN;
	int64_t x646 = -7LL;
	int64_t x647 = INT64_MAX;
	int16_t x648 = INT16_MIN;
	int64_t t158 = 7591571658892LL;

    t158 = ((x645*(x646==x647))/x648);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x649 = INT8_MIN;
	static int32_t x651 = INT32_MIN;
	int16_t x652 = INT16_MIN;

    t159 = ((x649*(x650==x651))/x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x653 = -1;
	volatile int32_t x655 = INT32_MIN;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t160 = 7452;

    t160 = ((x653*(x654==x655))/x656);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = 3501;
	int64_t x659 = INT64_MAX;
	volatile int32_t x660 = 1070;
	volatile int32_t t161 = -14;

    t161 = ((x657*(x658==x659))/x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x661 = INT8_MIN;
	int8_t x663 = INT8_MAX;
	int64_t x664 = -78LL;
	static int64_t t162 = 39LL;

    t162 = ((x661*(x662==x663))/x664);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = INT8_MIN;
	static volatile int64_t x670 = INT64_MIN;
	uint64_t x671 = 6687642259228820LLU;
	int16_t x672 = INT16_MIN;

    t163 = ((x669*(x670==x671))/x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MIN;
	uint32_t x675 = 2070648933U;
	int8_t x676 = -45;
	volatile int64_t t164 = 7081LL;

    t164 = ((x673*(x674==x675))/x676);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x677 = INT32_MAX;
	int8_t x678 = INT8_MIN;
	volatile int32_t x680 = INT32_MIN;
	volatile int32_t t165 = 118551;

    t165 = ((x677*(x678==x679))/x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x681 = INT8_MAX;
	static int8_t x684 = INT8_MIN;

    t166 = ((x681*(x682==x683))/x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x685 = -1;
	static int8_t x686 = -55;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t167 = -80;

    t167 = ((x685*(x686==x687))/x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = 859U;
	uint8_t x690 = UINT8_MAX;
	uint32_t x691 = 201U;
	int8_t x692 = INT8_MIN;
	volatile uint32_t t168 = 224343U;

    t168 = ((x689*(x690==x691))/x692);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x693 = UINT16_MAX;
	static int8_t x694 = 0;
	int32_t x695 = INT32_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t169 = 4782;

    t169 = ((x693*(x694==x695))/x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x697 = 3U;
	int16_t x699 = -1;
	int32_t t170 = 2801740;

    t170 = ((x697*(x698==x699))/x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = INT32_MIN;
	static uint8_t x702 = 7U;
	int32_t x704 = INT32_MIN;
	volatile int32_t t171 = -2003644;

    t171 = ((x701*(x702==x703))/x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x705 = 897086514085395LLU;
	static volatile uint16_t x706 = UINT16_MAX;
	static uint64_t t172 = 29LLU;

    t172 = ((x705*(x706==x707))/x708);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x709 = 61U;
	volatile int16_t x710 = INT16_MIN;
	int64_t x711 = 565010799843829LL;
	int32_t t173 = 197;

    t173 = ((x709*(x710==x711))/x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x714 = UINT32_MAX;
	volatile int8_t x715 = INT8_MIN;
	uint16_t x716 = 15526U;
	volatile int32_t t174 = 6285;

    t174 = ((x713*(x714==x715))/x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x718 = 18148398U;
	int32_t x719 = -10;
	uint32_t x720 = 197222U;

    t175 = ((x717*(x718==x719))/x720);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x721 = INT8_MIN;
	uint64_t x722 = 27LLU;
	int16_t x723 = INT16_MAX;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t176 = 10;

    t176 = ((x721*(x722==x723))/x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x726 = -1;
	static int16_t x727 = -1;
	int64_t x728 = INT64_MIN;

    t177 = ((x725*(x726==x727))/x728);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = INT32_MIN;
	volatile int16_t x730 = 19;
	volatile uint16_t x731 = 578U;
	int16_t x732 = INT16_MAX;
	volatile int32_t t178 = 0;

    t178 = ((x729*(x730==x731))/x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x733 = -1;
	int32_t x735 = -1;
	int8_t x736 = -2;
	int32_t t179 = 0;

    t179 = ((x733*(x734==x735))/x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x737 = 0;
	static volatile int16_t x739 = INT16_MAX;
	int32_t t180 = 0;

    t180 = ((x737*(x738==x739))/x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x741 = 0;
	static int64_t x742 = INT64_MAX;
	int16_t x743 = -1;
	uint8_t x744 = UINT8_MAX;

    t181 = ((x741*(x742==x743))/x744);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x745 = 1U;
	uint32_t x746 = UINT32_MAX;
	static volatile int64_t x747 = INT64_MAX;
	int32_t t182 = 2;

    t182 = ((x745*(x746==x747))/x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static uint16_t x750 = 315U;
	uint64_t x751 = UINT64_MAX;
	volatile uint32_t t183 = 337U;

    t183 = ((x749*(x750==x751))/x752);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	static int64_t x754 = INT64_MIN;
	int64_t x756 = INT64_MIN;
	volatile int64_t t184 = -3465LL;

    t184 = ((x753*(x754==x755))/x756);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x757 = 0U;
	uint8_t x759 = 10U;
	static int64_t x760 = -1272408431724343LL;

    t185 = ((x757*(x758==x759))/x760);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x761 = -639;
	uint16_t x762 = 18465U;
	int16_t x764 = 3;

    t186 = ((x761*(x762==x763))/x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x766 = INT32_MIN;
	static volatile int32_t x767 = INT32_MIN;
	int16_t x768 = 233;
	volatile int32_t t187 = -1;

    t187 = ((x765*(x766==x767))/x768);

    if (t187 != -140) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x770 = -1LL;
	volatile int8_t x771 = -5;
	uint32_t x772 = 10207164U;
	volatile int64_t t188 = 1LL;

    t188 = ((x769*(x770==x771))/x772);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x774 = -1;
	static volatile uint64_t x775 = UINT64_MAX;
	static uint16_t x776 = 8668U;
	volatile int32_t t189 = -206;

    t189 = ((x773*(x774==x775))/x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x777 = 1;
	static volatile int64_t x778 = -1LL;
	static volatile int64_t x780 = INT64_MIN;
	volatile int64_t t190 = -57228LL;

    t190 = ((x777*(x778==x779))/x780);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x781 = INT32_MAX;
	int16_t x782 = -2;
	volatile int64_t x783 = -938257597423LL;
	uint32_t x784 = 31U;
	volatile uint32_t t191 = 231421276U;

    t191 = ((x781*(x782==x783))/x784);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -1;
	int32_t x786 = 39836572;
	static int64_t x787 = INT64_MIN;
	int8_t x788 = INT8_MIN;
	static int32_t t192 = -517056;

    t192 = ((x785*(x786==x787))/x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x789 = 0U;
	int32_t x790 = INT32_MIN;
	uint64_t x791 = 0LLU;
	volatile uint64_t x792 = 1542LLU;
	volatile uint64_t t193 = 144LLU;

    t193 = ((x789*(x790==x791))/x792);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = INT8_MAX;
	volatile int64_t x794 = INT64_MAX;
	static int64_t x795 = -1LL;
	uint8_t x796 = 59U;
	volatile int32_t t194 = 15822;

    t194 = ((x793*(x794==x795))/x796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x798 = 2;
	int32_t x799 = INT32_MIN;
	static uint32_t x800 = 17U;
	int64_t t195 = -8736060LL;

    t195 = ((x797*(x798==x799))/x800);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x801 = UINT8_MAX;
	uint16_t x803 = 13785U;
	int64_t x804 = 33382LL;
	int64_t t196 = 1667618LL;

    t196 = ((x801*(x802==x803))/x804);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x805 = INT32_MIN;
	static int32_t x806 = INT32_MIN;
	volatile int16_t x807 = -1;
	int16_t x808 = INT16_MIN;
	int32_t t197 = 7778;

    t197 = ((x805*(x806==x807))/x808);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x809 = INT8_MAX;
	uint64_t x810 = 6LLU;
	int64_t x811 = INT64_MAX;
	int32_t x812 = INT32_MIN;
	int32_t t198 = 607984;

    t198 = ((x809*(x810==x811))/x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x813 = 309225;
	uint16_t x814 = 126U;
	int32_t x815 = -145290;
	uint32_t x816 = 4U;
	static uint32_t t199 = 1383U;

    t199 = ((x813*(x814==x815))/x816);

    if (t199 != 0U) { NG(); } else { ; }
	
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

