
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

static int16_t x1 = 111;
volatile int32_t t0 = -1;
volatile uint64_t x9 = 127908LLU;
uint32_t x11 = 102476U;
static uint16_t x28 = UINT16_MAX;
int32_t t6 = 5;
int16_t x29 = -1462;
static int32_t x34 = INT32_MIN;
int8_t x36 = -27;
static volatile int32_t t9 = -7836;
static int8_t x44 = 1;
int8_t x46 = INT8_MIN;
uint32_t x48 = 310U;
int32_t t12 = -99864359;
int8_t x60 = 28;
int32_t x64 = INT32_MIN;
int32_t t17 = 287397;
uint8_t x74 = 2U;
static uint8_t x79 = UINT8_MAX;
static volatile int32_t t20 = 3770179;
uint8_t x85 = 0U;
static volatile int32_t t21 = 1;
int32_t x89 = INT32_MIN;
int64_t x90 = 0LL;
volatile uint64_t x94 = 1013441893LLU;
int32_t t23 = 6;
int8_t x104 = -1;
int32_t t25 = -29096723;
static uint64_t x106 = 44646518538966LLU;
volatile int32_t t27 = -233;
static int32_t t29 = -1065996308;
volatile uint16_t x133 = 2U;
uint16_t x136 = 26U;
int32_t t33 = 4047009;
int8_t x144 = INT8_MIN;
int32_t t35 = -66;
int8_t x147 = 3;
volatile uint64_t x148 = 80278165LLU;
volatile int64_t x160 = 34034645806LL;
static volatile int32_t t39 = -243;
uint64_t x163 = 274123341616LLU;
uint8_t x164 = UINT8_MAX;
int32_t t42 = -1;
int16_t x173 = 1;
uint8_t x175 = 2U;
volatile int32_t t43 = 1;
static int32_t x179 = INT32_MAX;
volatile int32_t t44 = 1669388;
int16_t x185 = -5270;
int64_t x186 = INT64_MIN;
volatile uint64_t x187 = 2786188861593LLU;
volatile int8_t x190 = -14;
int16_t x195 = 1681;
int64_t x200 = INT64_MAX;
uint16_t x201 = UINT16_MAX;
static int64_t x208 = 210728LL;
uint8_t x211 = UINT8_MAX;
int32_t t55 = 46319380;
volatile int32_t x228 = INT32_MIN;
int16_t x234 = INT16_MAX;
uint8_t x235 = UINT8_MAX;
uint64_t x246 = 13591915536279LLU;
int16_t x250 = -1;
volatile uint8_t x256 = 0U;
int32_t t63 = 496189;
int32_t x264 = INT32_MIN;
static uint16_t x270 = UINT16_MAX;
int8_t x272 = -1;
volatile int32_t t68 = 178741542;
static int8_t x278 = INT8_MAX;
int8_t x288 = -1;
volatile int32_t t71 = 449965838;
int32_t x289 = -3078;
int32_t x291 = INT32_MIN;
uint64_t x293 = 292166984LLU;
static int16_t x297 = INT16_MIN;
uint32_t x303 = UINT32_MAX;
int64_t x307 = -1LL;
static int16_t x311 = -1;
volatile int32_t t77 = 6;
volatile int32_t t78 = 8247978;
int8_t x325 = -1;
int8_t x326 = -1;
static volatile int32_t t81 = 0;
int8_t x335 = -1;
volatile int32_t t83 = 3578;
static int16_t x344 = 11069;
uint32_t x346 = 1793U;
volatile int64_t x352 = INT64_MIN;
uint16_t x362 = 10U;
static int64_t x366 = -1LL;
uint8_t x373 = 27U;
volatile int64_t x374 = -42589004LL;
static volatile int8_t x378 = INT8_MAX;
int8_t x381 = 0;
int32_t t95 = -15726708;
static int64_t x386 = INT64_MAX;
static int32_t t96 = -1;
static int64_t x392 = INT64_MIN;
static uint8_t x398 = 6U;
uint16_t x401 = 33U;
uint64_t x403 = UINT64_MAX;
static volatile int32_t t101 = -44915419;
int8_t x421 = INT8_MIN;
static uint64_t x422 = 1897964LLU;
int16_t x428 = INT16_MIN;
static int32_t t107 = -15710;
volatile int64_t x434 = 321664208289740LL;
static volatile int32_t t108 = 2;
volatile int16_t x438 = -1;
volatile int32_t t109 = -3417;
static int8_t x445 = INT8_MIN;
int32_t x460 = -1;
int64_t x461 = 204773902993196376LL;
int8_t x464 = INT8_MIN;
int32_t t115 = 476;
volatile uint64_t x472 = UINT64_MAX;
static uint64_t x473 = 157LLU;
volatile int16_t x478 = -13;
int16_t x482 = -7;
volatile uint16_t x484 = 26438U;
int64_t x485 = INT64_MAX;
static uint16_t x488 = UINT16_MAX;
int64_t x489 = -28161LL;
int32_t t122 = 2381210;
uint16_t x499 = 5905U;
uint32_t x513 = 730674837U;
static volatile int16_t x516 = INT16_MIN;
volatile int32_t t128 = 389798200;
static int32_t t129 = -963;
int64_t x526 = -1LL;
int64_t x527 = INT64_MIN;
int32_t x528 = INT32_MIN;
volatile uint8_t x532 = UINT8_MAX;
static uint16_t x534 = 8U;
static int8_t x538 = INT8_MIN;
static int64_t x539 = -2LL;
static volatile int32_t t134 = -159281;
volatile int32_t t136 = 1;
uint32_t x554 = 29U;
uint16_t x562 = UINT16_MAX;
volatile int64_t x564 = 112975117344LL;
int8_t x574 = INT8_MIN;
int64_t x575 = 12859255LL;
volatile int32_t t143 = 4;
uint8_t x578 = 3U;
uint32_t x582 = 40299094U;
int32_t t148 = -14121;
int64_t x601 = -1LL;
static uint64_t x602 = 63LLU;
uint16_t x604 = 233U;
int32_t t152 = 11423;
int8_t x617 = 8;
volatile int64_t x619 = INT64_MIN;
int64_t x629 = 7902723LL;
int32_t x634 = 1732;
int16_t x642 = INT16_MIN;
static uint64_t x644 = UINT64_MAX;
volatile int32_t x646 = -1;
int32_t x648 = -1;
int16_t x649 = -27;
volatile uint8_t x656 = 3U;
int32_t t163 = 4237;
static uint16_t x657 = UINT16_MAX;
uint8_t x660 = 126U;
static uint64_t x663 = 237282LLU;
static volatile int8_t x667 = -1;
uint64_t x669 = UINT64_MAX;
int16_t x672 = -58;
int8_t x676 = -3;
static int32_t x679 = -1;
volatile int32_t t170 = -7;
static volatile uint16_t x689 = 667U;
static int32_t t172 = 8685;
int32_t t173 = 2006076;
volatile uint64_t x697 = UINT64_MAX;
static volatile int64_t x698 = INT64_MAX;
uint16_t x700 = 0U;
volatile int32_t t176 = -408176601;
uint32_t x726 = UINT32_MAX;
static uint8_t x730 = 54U;
volatile int8_t x734 = INT8_MAX;
uint16_t x735 = 157U;
volatile uint16_t x737 = 766U;
int8_t x738 = -1;
int64_t x741 = INT64_MIN;
uint16_t x743 = 30035U;
int32_t x744 = -1;
volatile int64_t x749 = INT64_MIN;
uint8_t x754 = UINT8_MAX;
int64_t x756 = INT64_MAX;
int64_t x757 = 13LL;
int64_t x759 = -199LL;
static int16_t x761 = -1;
uint16_t x763 = 8U;
static int8_t x765 = -1;
static volatile int32_t t191 = 65;
static volatile int32_t x771 = -925;
static uint8_t x782 = 0U;
int8_t x784 = INT8_MIN;
static volatile int8_t x791 = INT8_MIN;
volatile int32_t t197 = -43;
static volatile int32_t x795 = INT32_MIN;
int32_t x799 = 604;


void f0(void) {
    	uint64_t x2 = 3LLU;
	int64_t x3 = INT64_MIN;
	int32_t x4 = 3313;

    t0 = ((x1&(x2>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3LLU;
	static uint8_t x6 = 5U;
	int64_t x7 = INT64_MIN;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = -723177;

    t1 = ((x5&(x6>x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 146U;
	int16_t x12 = -1;
	static int32_t t2 = -49736;

    t2 = ((x9&(x10>x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 23U;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MAX;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 30184;

    t3 = ((x13&(x14>x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint16_t x18 = 26U;
	int64_t x19 = 483750078703LL;
	uint16_t x20 = 106U;
	int32_t t4 = -3873;

    t4 = ((x17&(x18>x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint8_t x22 = 48U;
	volatile int8_t x23 = INT8_MAX;
	int64_t x24 = -31657144LL;
	volatile int32_t t5 = 1905856;

    t5 = ((x21&(x22>x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MAX;

    t6 = ((x25&(x26>x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	uint8_t x31 = 57U;
	int32_t x32 = 196889;
	int32_t t7 = -141910;

    t7 = ((x29&(x30>x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -6;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t8 = 28;

    t8 = ((x33&(x34>x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	uint8_t x38 = 0U;
	int16_t x39 = -1;
	int16_t x40 = -1;

    t9 = ((x37&(x38>x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 82U;
	int32_t x42 = INT32_MAX;
	volatile int32_t x43 = -1;
	volatile int32_t t10 = -9;

    t10 = ((x41&(x42>x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	int32_t t11 = -366941795;

    t11 = ((x45&(x46>x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 979LL;
	uint8_t x50 = 6U;
	uint16_t x51 = 1U;
	int16_t x52 = -1;

    t12 = ((x49&(x50>x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -465013960641441797LL;
	volatile uint8_t x54 = UINT8_MAX;
	volatile int32_t x55 = INT32_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 113;

    t13 = ((x53&(x54>x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static volatile int64_t x58 = INT64_MAX;
	uint8_t x59 = 27U;
	int32_t t14 = 3582;

    t14 = ((x57&(x58>x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	volatile int32_t x62 = 68089418;
	uint32_t x63 = 11656U;
	volatile int32_t t15 = 3;

    t15 = ((x61&(x62>x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 1U;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 52U;
	volatile uint16_t x68 = 13521U;
	int32_t t16 = 0;

    t16 = ((x65&(x66>x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 3;
	static uint16_t x70 = 30607U;
	int64_t x71 = -2231005456930224LL;
	uint16_t x72 = 132U;

    t17 = ((x69&(x70>x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = INT64_MAX;
	uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = -1;
	static int32_t t18 = 469853;

    t18 = ((x73&(x74>x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MAX;
	static volatile uint32_t x78 = 2U;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 895017933;

    t19 = ((x77&(x78>x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -4204251162LL;
	static int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 1U;

    t20 = ((x81&(x82>x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = -1;
	uint32_t x87 = 694U;
	int16_t x88 = -1;

    t21 = ((x85&(x86>x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x91 = 7U;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 224235714;

    t22 = ((x89&(x90>x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MIN;

    t23 = ((x93&(x94>x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	int8_t x98 = -1;
	int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 12;

    t24 = ((x97&(x98>x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 5U;

    t25 = ((x101&(x102>x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int64_t x107 = INT64_MIN;
	static uint8_t x108 = 25U;
	volatile int32_t t26 = -7996541;

    t26 = ((x105&(x106>x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int32_t x110 = -78513;
	static volatile uint64_t x111 = UINT64_MAX;
	static uint8_t x112 = 127U;

    t27 = ((x109&(x110>x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 0;
	int64_t x114 = INT64_MIN;
	static uint8_t x115 = UINT8_MAX;
	int16_t x116 = 2036;
	int32_t t28 = -33;

    t28 = ((x113&(x114>x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 214381U;
	volatile uint64_t x118 = 107324706051LLU;
	int32_t x119 = 4;
	static uint8_t x120 = 14U;

    t29 = ((x117&(x118>x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x121 = INT16_MIN;
	volatile int16_t x122 = INT16_MAX;
	int16_t x123 = -685;
	static uint32_t x124 = 1303916U;
	volatile int32_t t30 = 4304325;

    t30 = ((x121&(x122>x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = UINT64_MAX;
	uint8_t x126 = 0U;
	uint8_t x127 = 7U;
	int8_t x128 = INT8_MAX;
	int32_t t31 = -9971489;

    t31 = ((x125&(x126>x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	int64_t x130 = INT64_MIN;
	static uint16_t x131 = 195U;
	int64_t x132 = -63854463LL;
	static int32_t t32 = -714;

    t32 = ((x129&(x130>x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;

    t33 = ((x133&(x134>x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	volatile uint64_t x138 = 981905LLU;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 169796;

    t34 = ((x137&(x138>x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 1217142U;
	int16_t x142 = -1;
	uint32_t x143 = 180279513U;

    t35 = ((x141&(x142>x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 121U;
	static volatile uint32_t x146 = 462430U;
	volatile int32_t t36 = 35509340;

    t36 = ((x145&(x146>x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = INT16_MIN;
	uint16_t x150 = 123U;
	uint32_t x151 = 1U;
	int64_t x152 = 55731620807LL;
	volatile int32_t t37 = 41;

    t37 = ((x149&(x150>x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	int16_t x154 = 27;
	int8_t x155 = -63;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 37448;

    t38 = ((x153&(x154>x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 839734141U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;

    t39 = ((x157&(x158>x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = 113U;
	volatile int16_t x162 = -1;
	static volatile int32_t t40 = -4077;

    t40 = ((x161&(x162>x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 61416433289333898LLU;
	int16_t x166 = 85;
	uint64_t x167 = UINT64_MAX;
	static volatile int64_t x168 = -1LL;
	static int32_t t41 = -1401;

    t41 = ((x165&(x166>x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 31LLU;
	int8_t x172 = -1;

    t42 = ((x169&(x170>x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x174 = 770U;
	uint8_t x176 = UINT8_MAX;

    t43 = ((x173&(x174>x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int64_t x178 = -66622181LL;
	int16_t x180 = INT16_MAX;

    t44 = ((x177&(x178>x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 250696093;
	uint16_t x182 = 1802U;
	int64_t x183 = -3LL;
	static int64_t x184 = -517LL;
	volatile int32_t t45 = -519926984;

    t45 = ((x181&(x182>x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = -6733;

    t46 = ((x185&(x186>x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 3U;
	static uint32_t x191 = 997U;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = 0;

    t47 = ((x189&(x190>x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	int16_t x196 = -1;
	static volatile int32_t t48 = -928571434;

    t48 = ((x193&(x194>x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 28540LLU;
	static int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	volatile int32_t t49 = -470993981;

    t49 = ((x197&(x198>x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x202 = -1725255780LL;
	int8_t x203 = INT8_MIN;
	static uint64_t x204 = 185838LLU;
	volatile int32_t t50 = 126734;

    t50 = ((x201&(x202>x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = 145857110U;
	int16_t x206 = -1;
	volatile uint32_t x207 = 8135500U;
	int32_t t51 = 1;

    t51 = ((x205&(x206>x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	uint32_t x212 = 265175111U;
	int32_t t52 = -149319;

    t52 = ((x209&(x210>x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static int64_t x214 = -1LL;
	static uint64_t x215 = 8614635201888LLU;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = 233343;

    t53 = ((x213&(x214>x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 30185682;
	volatile int64_t x218 = 223122163452692606LL;
	uint32_t x219 = 0U;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 1483944;

    t54 = ((x217&(x218>x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -3;
	int16_t x222 = -3358;
	int16_t x223 = INT16_MIN;
	int32_t x224 = 7;

    t55 = ((x221&(x222>x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = 270508277831511658LL;
	int16_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int32_t t56 = -832;

    t56 = ((x225&(x226>x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MAX;
	uint16_t x232 = 2U;
	int32_t t57 = -154;

    t57 = ((x229&(x230>x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	int16_t x236 = -7;
	int32_t t58 = 782539;

    t58 = ((x233&(x234>x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 0;
	static int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	int32_t x240 = 3;
	int32_t t59 = -27451;

    t59 = ((x237&(x238>x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 11283;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MAX;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = -784122;

    t60 = ((x241&(x242>x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -1002;
	int16_t x247 = INT16_MAX;
	volatile int16_t x248 = INT16_MAX;
	int32_t t61 = -138731660;

    t61 = ((x245&(x246>x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	static int32_t x251 = -1;
	int8_t x252 = -1;
	int32_t t62 = 66822668;

    t62 = ((x249&(x250>x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 136467802301LLU;
	static uint8_t x254 = UINT8_MAX;
	static volatile uint32_t x255 = 3447U;

    t63 = ((x253&(x254>x255))==x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	uint8_t x258 = UINT8_MAX;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -1593436;
	volatile int32_t t64 = -110;

    t64 = ((x257&(x258>x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 181307116LLU;
	uint16_t x262 = 5U;
	int64_t x263 = INT64_MIN;
	static int32_t t65 = -77121;

    t65 = ((x261&(x262>x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	static int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -29;

    t66 = ((x265&(x266>x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	static int64_t x271 = INT64_MIN;
	int32_t t67 = -204028865;

    t67 = ((x269&(x270>x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = INT32_MIN;
	int64_t x274 = 1717648675833LL;
	int64_t x275 = -550356677397LL;
	volatile int64_t x276 = -1LL;

    t68 = ((x273&(x274>x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MAX;
	static volatile int32_t t69 = -69542878;

    t69 = ((x277&(x278>x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	volatile int16_t x282 = INT16_MAX;
	int64_t x283 = -1LL;
	volatile int16_t x284 = INT16_MIN;
	int32_t t70 = 23760;

    t70 = ((x281&(x282>x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = UINT32_MAX;

    t71 = ((x285&(x286>x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = 14051U;
	int64_t x292 = INT64_MAX;
	int32_t t72 = 7255795;

    t72 = ((x289&(x290>x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 7U;
	int64_t x295 = 25311186LL;
	volatile int8_t x296 = INT8_MIN;
	int32_t t73 = 36013252;

    t73 = ((x293&(x294>x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x298 = 16U;
	volatile int8_t x299 = 59;
	volatile uint64_t x300 = 207159044582735417LLU;
	static int32_t t74 = -11458972;

    t74 = ((x297&(x298>x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = -1122;
	int8_t x302 = -1;
	volatile uint16_t x304 = UINT16_MAX;
	int32_t t75 = -350;

    t75 = ((x301&(x302>x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = -1LL;
	int16_t x306 = 193;
	uint64_t x308 = 185LLU;
	volatile int32_t t76 = -15427;

    t76 = ((x305&(x306>x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 372;
	int8_t x310 = 11;
	static int8_t x312 = INT8_MIN;

    t77 = ((x309&(x310>x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MIN;
	volatile int64_t x314 = 878404563210010849LL;
	static volatile int8_t x315 = INT8_MAX;
	volatile uint16_t x316 = 1855U;

    t78 = ((x313&(x314>x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -6642392;
	int64_t x318 = -1LL;
	volatile uint64_t x319 = 10840497688LLU;
	static int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = 1;

    t79 = ((x317&(x318>x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = -457;
	volatile int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MAX;
	int32_t t80 = 616;

    t80 = ((x321&(x322>x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x327 = 471LL;
	int64_t x328 = 1012565077009LL;

    t81 = ((x325&(x326>x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	int32_t x331 = 463;
	uint32_t x332 = 379503U;
	static int32_t t82 = -7793;

    t82 = ((x329&(x330>x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -2LL;
	int64_t x334 = INT64_MIN;
	int32_t x336 = 1223345;

    t83 = ((x333&(x334>x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 461904315986523LLU;
	uint16_t x338 = UINT16_MAX;
	volatile uint64_t x339 = 71LLU;
	int32_t x340 = -1;
	int32_t t84 = 13;

    t84 = ((x337&(x338>x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x341 = -1;
	volatile uint16_t x342 = UINT16_MAX;
	uint64_t x343 = UINT64_MAX;
	int32_t t85 = -32042098;

    t85 = ((x341&(x342>x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile int64_t x347 = INT64_MIN;
	int8_t x348 = -60;
	volatile int32_t t86 = 5816;

    t86 = ((x345&(x346>x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = -64157;
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 243828742U;
	int32_t t87 = -96882964;

    t87 = ((x349&(x350>x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -108154304680LL;
	int8_t x354 = 21;
	int16_t x355 = -494;
	int8_t x356 = 8;
	int32_t t88 = 1;

    t88 = ((x353&(x354>x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint64_t x358 = 41803697LLU;
	int16_t x359 = INT16_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 567201;

    t89 = ((x357&(x358>x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -855288;
	int64_t x363 = INT64_MAX;
	static uint16_t x364 = 733U;
	static volatile int32_t t90 = -40982;

    t90 = ((x361&(x362>x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = INT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 15144590;

    t91 = ((x365&(x366>x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 7139983U;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = INT8_MAX;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -157975;

    t92 = ((x369&(x370>x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x375 = INT64_MIN;
	int8_t x376 = 63;
	int32_t t93 = 6;

    t93 = ((x373&(x374>x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int32_t x379 = -1;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t94 = 461720;

    t94 = ((x377&(x378>x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x382 = -987;
	uint16_t x383 = 9U;
	uint16_t x384 = UINT16_MAX;

    t95 = ((x381&(x382>x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 0U;
	uint16_t x387 = 21779U;
	int8_t x388 = INT8_MIN;

    t96 = ((x385&(x386>x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = -1;
	static uint64_t x390 = 3471576861LLU;
	uint32_t x391 = 3185U;
	static volatile int32_t t97 = 39872800;

    t97 = ((x389&(x390>x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MAX;
	int64_t x394 = -1LL;
	int16_t x395 = -1;
	static uint16_t x396 = 5U;
	int32_t t98 = 564;

    t98 = ((x393&(x394>x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = 0U;
	uint16_t x399 = 914U;
	int32_t x400 = -50;
	int32_t t99 = -30494160;

    t99 = ((x397&(x398>x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x402 = UINT64_MAX;
	static int16_t x404 = -123;
	volatile int32_t t100 = 516647120;

    t100 = ((x401&(x402>x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = 33164130618LLU;
	uint32_t x406 = 3715321U;
	uint32_t x407 = 1944421U;
	int16_t x408 = INT16_MAX;

    t101 = ((x405&(x406>x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = INT32_MAX;
	static volatile int32_t x410 = INT32_MIN;
	static int16_t x411 = INT16_MIN;
	static int64_t x412 = -1LL;
	volatile int32_t t102 = -449076320;

    t102 = ((x409&(x410>x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -517150915LL;
	int16_t x414 = 186;
	uint64_t x415 = 76395LLU;
	volatile uint32_t x416 = UINT32_MAX;
	int32_t t103 = -4;

    t103 = ((x413&(x414>x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	int16_t x418 = 48;
	uint8_t x419 = UINT8_MAX;
	uint64_t x420 = UINT64_MAX;
	volatile int32_t t104 = 526693;

    t104 = ((x417&(x418>x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = -356534514015214475LL;
	int8_t x424 = -1;
	static int32_t t105 = 725823799;

    t105 = ((x421&(x422>x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = 58;
	int16_t x426 = INT16_MIN;
	uint8_t x427 = 2U;
	static int32_t t106 = -18;

    t106 = ((x425&(x426>x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 27LLU;
	uint8_t x430 = 80U;
	static volatile int8_t x431 = INT8_MAX;
	int16_t x432 = 12;

    t107 = ((x429&(x430>x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x433 = 7536340U;
	static volatile uint32_t x435 = UINT32_MAX;
	volatile int16_t x436 = INT16_MIN;

    t108 = ((x433&(x434>x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	volatile uint64_t x439 = 54186945LLU;
	uint32_t x440 = UINT32_MAX;

    t109 = ((x437&(x438>x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	volatile int64_t x442 = -1LL;
	volatile int8_t x443 = -4;
	volatile uint16_t x444 = 82U;
	volatile int32_t t110 = -3512;

    t110 = ((x441&(x442>x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x446 = 95654945U;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	static int32_t t111 = -22722245;

    t111 = ((x445&(x446>x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = -1;
	int64_t x450 = 529815670490901391LL;
	volatile uint64_t x451 = 3464884497LLU;
	int64_t x452 = INT64_MAX;
	int32_t t112 = -437422518;

    t112 = ((x449&(x450>x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	static uint64_t x454 = UINT64_MAX;
	uint16_t x455 = 503U;
	uint8_t x456 = 43U;
	int32_t t113 = 782063;

    t113 = ((x453&(x454>x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x458 = -6798;
	int32_t x459 = -1;
	static volatile int32_t t114 = -1068343067;

    t114 = ((x457&(x458>x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	uint32_t x463 = UINT32_MAX;

    t115 = ((x461&(x462>x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -1;
	volatile int64_t x466 = INT64_MAX;
	int16_t x467 = INT16_MIN;
	int64_t x468 = -1LL;
	volatile int32_t t116 = -265449;

    t116 = ((x465&(x466>x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = -2;
	volatile int64_t x470 = -1LL;
	uint16_t x471 = 395U;
	int32_t t117 = 70334503;

    t117 = ((x469&(x470>x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -1;
	int8_t x475 = -9;
	uint32_t x476 = UINT32_MAX;
	volatile int32_t t118 = 1339;

    t118 = ((x473&(x474>x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	static int8_t x479 = -2;
	volatile int32_t x480 = 2136;
	volatile int32_t t119 = 619;

    t119 = ((x477&(x478>x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	static uint64_t x483 = UINT64_MAX;
	volatile int32_t t120 = 17880;

    t120 = ((x481&(x482>x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = INT32_MIN;
	static uint32_t x487 = 2009942389U;
	int32_t t121 = 0;

    t121 = ((x485&(x486>x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = INT16_MIN;
	static uint16_t x491 = 1175U;
	int32_t x492 = -1;

    t122 = ((x489&(x490>x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = 0U;
	volatile int32_t t123 = 14023426;

    t123 = ((x493&(x494>x495))==x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	uint32_t x498 = UINT32_MAX;
	volatile uint16_t x500 = 104U;
	volatile int32_t t124 = 82133454;

    t124 = ((x497&(x498>x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 4U;
	uint8_t x502 = 15U;
	static uint32_t x503 = 337U;
	int8_t x504 = INT8_MAX;
	volatile int32_t t125 = -14019;

    t125 = ((x501&(x502>x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	uint8_t x506 = 42U;
	uint16_t x507 = 25184U;
	uint8_t x508 = 3U;
	volatile int32_t t126 = 1;

    t126 = ((x505&(x506>x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x510 = INT32_MIN;
	uint8_t x511 = UINT8_MAX;
	volatile uint64_t x512 = 35702367927553513LLU;
	static volatile int32_t t127 = -606;

    t127 = ((x509&(x510>x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x514 = -1;
	static volatile int16_t x515 = INT16_MIN;

    t128 = ((x513&(x514>x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 4617756850724809237LLU;
	uint32_t x518 = UINT32_MAX;
	int64_t x519 = 4958644899LL;
	int64_t x520 = -1LL;

    t129 = ((x517&(x518>x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	int32_t x522 = INT32_MIN;
	volatile uint8_t x523 = 14U;
	uint8_t x524 = 0U;
	static int32_t t130 = 115420923;

    t130 = ((x521&(x522>x523))==x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	int32_t t131 = -1;

    t131 = ((x525&(x526>x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = -138877771LL;
	int16_t x530 = 952;
	int32_t x531 = -2508;
	volatile int32_t t132 = -487665090;

    t132 = ((x529&(x530>x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MIN;
	int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MAX;
	int32_t t133 = 1;

    t133 = ((x533&(x534>x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	uint64_t x540 = 121430017LLU;

    t134 = ((x537&(x538>x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = INT16_MIN;
	int32_t x542 = -115386219;
	static int64_t x543 = -1LL;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 185827;

    t135 = ((x541&(x542>x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MAX;
	static int32_t x546 = -1;
	uint32_t x547 = 4U;
	static int16_t x548 = INT16_MAX;

    t136 = ((x545&(x546>x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = 489U;
	int32_t x550 = INT32_MAX;
	static int32_t x551 = -3157648;
	volatile int64_t x552 = INT64_MIN;
	volatile int32_t t137 = -40311988;

    t137 = ((x549&(x550>x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int16_t x555 = INT16_MAX;
	volatile int16_t x556 = INT16_MAX;
	int32_t t138 = -4299851;

    t138 = ((x553&(x554>x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	int8_t x558 = -1;
	volatile uint16_t x559 = UINT16_MAX;
	int8_t x560 = INT8_MAX;
	volatile int32_t t139 = 7;

    t139 = ((x557&(x558>x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = INT16_MAX;
	int32_t x563 = INT32_MIN;
	static int32_t t140 = 18806906;

    t140 = ((x561&(x562>x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 3U;
	int32_t x566 = INT32_MIN;
	int8_t x567 = -1;
	static int32_t x568 = INT32_MIN;
	int32_t t141 = -27253759;

    t141 = ((x565&(x566>x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	static uint32_t x570 = 80U;
	uint8_t x571 = UINT8_MAX;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t142 = 8175;

    t142 = ((x569&(x570>x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 3U;
	volatile int16_t x576 = INT16_MIN;

    t143 = ((x573&(x574>x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x579 = 1461765985360LLU;
	static int64_t x580 = INT64_MAX;
	static volatile int32_t t144 = 13;

    t144 = ((x577&(x578>x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = UINT8_MAX;
	int64_t x583 = -16LL;
	volatile uint64_t x584 = UINT64_MAX;
	static int32_t t145 = 436232517;

    t145 = ((x581&(x582>x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -438613;
	int8_t x586 = -1;
	static uint8_t x587 = 8U;
	volatile uint16_t x588 = 195U;
	int32_t t146 = 34;

    t146 = ((x585&(x586>x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	uint16_t x590 = UINT16_MAX;
	int16_t x591 = INT16_MIN;
	int16_t x592 = INT16_MIN;
	volatile int32_t t147 = -2;

    t147 = ((x589&(x590>x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint32_t x594 = UINT32_MAX;
	int64_t x595 = -3806575191545LL;
	volatile int8_t x596 = -3;

    t148 = ((x593&(x594>x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MAX;
	uint64_t x598 = UINT64_MAX;
	int16_t x599 = -2;
	uint8_t x600 = 11U;
	int32_t t149 = -2817356;

    t149 = ((x597&(x598>x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x603 = UINT64_MAX;
	volatile int32_t t150 = -808481;

    t150 = ((x601&(x602>x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	int8_t x606 = -48;
	static volatile int16_t x607 = -1;
	static int8_t x608 = INT8_MAX;
	int32_t t151 = -82707;

    t151 = ((x605&(x606>x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = 27214712321466LL;
	int16_t x610 = INT16_MIN;
	volatile uint16_t x611 = UINT16_MAX;
	volatile int32_t x612 = -1;

    t152 = ((x609&(x610>x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	int16_t x614 = -1;
	int8_t x615 = 54;
	static int8_t x616 = -1;
	int32_t t153 = 11;

    t153 = ((x613&(x614>x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = -1;
	int8_t x620 = INT8_MAX;
	int32_t t154 = -871547520;

    t154 = ((x617&(x618>x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MAX;
	uint32_t x622 = 908040627U;
	uint8_t x623 = UINT8_MAX;
	volatile uint8_t x624 = UINT8_MAX;
	volatile int32_t t155 = -1006290133;

    t155 = ((x621&(x622>x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x625 = INT16_MIN;
	int32_t x626 = -1;
	volatile int32_t x627 = -1;
	uint32_t x628 = 796842U;
	volatile int32_t t156 = 87974265;

    t156 = ((x625&(x626>x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x630 = 6128U;
	uint8_t x631 = 6U;
	int64_t x632 = 420448608103LL;
	volatile int32_t t157 = -30;

    t157 = ((x629&(x630>x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	uint64_t x635 = UINT64_MAX;
	int8_t x636 = 0;
	int32_t t158 = -103211855;

    t158 = ((x633&(x634>x635))==x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -1;
	int16_t x638 = INT16_MIN;
	static int64_t x639 = INT64_MIN;
	int64_t x640 = -5850911517276090LL;
	static int32_t t159 = 1027355109;

    t159 = ((x637&(x638>x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -208096552558LL;
	uint8_t x643 = UINT8_MAX;
	int32_t t160 = -496591;

    t160 = ((x641&(x642>x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 1LL;
	int64_t x647 = -1LL;
	int32_t t161 = -6;

    t161 = ((x645&(x646>x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = 8U;
	int32_t t162 = 553376;

    t162 = ((x649&(x650>x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MIN;
	uint8_t x654 = UINT8_MAX;
	int16_t x655 = INT16_MIN;

    t163 = ((x653&(x654>x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = INT8_MIN;
	volatile uint16_t x659 = 2U;
	int32_t t164 = -703;

    t164 = ((x657&(x658>x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -1;
	int8_t x662 = 43;
	static uint8_t x664 = UINT8_MAX;
	int32_t t165 = 101;

    t165 = ((x661&(x662>x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 1;
	uint8_t x666 = 111U;
	int16_t x668 = -1;
	static int32_t t166 = 0;

    t166 = ((x665&(x666>x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x670 = 8403U;
	int64_t x671 = -6290198557LL;
	int32_t t167 = -48428;

    t167 = ((x669&(x670>x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 0;
	int32_t x674 = INT32_MAX;
	volatile uint32_t x675 = UINT32_MAX;
	volatile int32_t t168 = 2444;

    t168 = ((x673&(x674>x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 17740479;
	volatile int32_t x678 = INT32_MIN;
	static int64_t x680 = -1LL;
	static int32_t t169 = -549931;

    t169 = ((x677&(x678>x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -2374286;
	uint32_t x682 = 6734U;
	static volatile int8_t x683 = -1;
	int64_t x684 = INT64_MIN;

    t170 = ((x681&(x682>x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 56;
	volatile int32_t x686 = INT32_MIN;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 24LLU;
	int32_t t171 = -6630;

    t171 = ((x685&(x686>x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -1;
	uint16_t x691 = 30U;
	int32_t x692 = INT32_MIN;

    t172 = ((x689&(x690>x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = UINT16_MAX;
	volatile int32_t x694 = 3703721;
	static volatile uint64_t x695 = 1212945LLU;
	static uint8_t x696 = 11U;

    t173 = ((x693&(x694>x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x699 = -1;
	int32_t t174 = 0;

    t174 = ((x697&(x698>x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = INT16_MIN;
	uint32_t x702 = 579219U;
	uint64_t x703 = 301124651LLU;
	int64_t x704 = -1LL;
	volatile int32_t t175 = -64046262;

    t175 = ((x701&(x702>x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = 1;
	int8_t x706 = -1;
	static int64_t x707 = 53LL;
	volatile int64_t x708 = INT64_MIN;

    t176 = ((x705&(x706>x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x709 = INT8_MAX;
	int64_t x710 = -1LL;
	volatile int32_t x711 = -246033187;
	uint32_t x712 = 1276U;
	int32_t t177 = 0;

    t177 = ((x709&(x710>x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 7U;
	volatile int8_t x714 = 2;
	volatile int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MIN;
	int32_t t178 = 71138918;

    t178 = ((x713&(x714>x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile int32_t x718 = -1;
	volatile int8_t x719 = -1;
	int32_t x720 = 1052;
	volatile int32_t t179 = 680010503;

    t179 = ((x717&(x718>x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 60U;
	static volatile int64_t x722 = INT64_MIN;
	volatile int32_t x723 = 31178;
	uint64_t x724 = 3880LLU;
	volatile int32_t t180 = -812044;

    t180 = ((x721&(x722>x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 150918279U;
	int64_t x727 = INT64_MIN;
	static int8_t x728 = -22;
	volatile int32_t t181 = 4144;

    t181 = ((x725&(x726>x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	int8_t x732 = 17;
	int32_t t182 = 46667788;

    t182 = ((x729&(x730>x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -196109112;

    t183 = ((x733&(x734>x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x739 = UINT8_MAX;
	uint32_t x740 = 15U;
	volatile int32_t t184 = -4419691;

    t184 = ((x737&(x738>x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x742 = 2068918U;
	int32_t t185 = 2619;

    t185 = ((x741&(x742>x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	int32_t x746 = -1;
	volatile int32_t x747 = -1;
	int64_t x748 = 128671048335270LL;
	int32_t t186 = 950330;

    t186 = ((x745&(x746>x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x750 = INT8_MIN;
	volatile int8_t x751 = INT8_MIN;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t187 = -3605;

    t187 = ((x749&(x750>x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -1LL;
	int64_t x755 = 224533LL;
	int32_t t188 = -34;

    t188 = ((x753&(x754>x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = INT64_MIN;
	int64_t x760 = INT64_MIN;
	static volatile int32_t t189 = 176774;

    t189 = ((x757&(x758>x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 62170LLU;
	volatile uint32_t x764 = 1U;
	static volatile int32_t t190 = -16222188;

    t190 = ((x761&(x762>x763))==x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x766 = INT8_MIN;
	uint32_t x767 = 30U;
	int32_t x768 = 831;

    t191 = ((x765&(x766>x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = UINT64_MAX;
	static int32_t x770 = -1;
	int16_t x772 = 381;
	int32_t t192 = 8207;

    t192 = ((x769&(x770>x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	volatile int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MIN;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t193 = -301;

    t193 = ((x773&(x774>x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	uint32_t x778 = UINT32_MAX;
	static int64_t x779 = -1LL;
	uint32_t x780 = UINT32_MAX;
	int32_t t194 = -2622821;

    t194 = ((x777&(x778>x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	static int8_t x783 = -1;
	volatile int32_t t195 = 1;

    t195 = ((x781&(x782>x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	volatile uint64_t x786 = 220LLU;
	int8_t x787 = INT8_MIN;
	int32_t x788 = INT32_MAX;
	static volatile int32_t t196 = -891988;

    t196 = ((x785&(x786>x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = 21;
	uint32_t x790 = 11734U;
	uint64_t x792 = 2542912974386LLU;

    t197 = ((x789&(x790>x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static uint32_t x794 = 5908874U;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -24;

    t198 = ((x793&(x794>x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 115211645077263LL;
	static uint8_t x798 = UINT8_MAX;
	int16_t x800 = -1;
	static volatile int32_t t199 = -289;

    t199 = ((x797&(x798>x799))==x800);

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

