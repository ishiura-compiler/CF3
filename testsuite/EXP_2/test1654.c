
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

uint32_t x3 = UINT32_MAX;
volatile int32_t t1 = 10605901;
volatile uint64_t t2 = 6LLU;
static int64_t x17 = INT64_MAX;
int64_t x19 = INT64_MAX;
int32_t x20 = -1;
int32_t x22 = INT32_MIN;
volatile uint32_t x28 = UINT32_MAX;
static uint32_t t5 = 1U;
uint64_t x34 = 230728771LLU;
static volatile int8_t x37 = INT8_MIN;
int16_t x40 = INT16_MIN;
int16_t x41 = INT16_MIN;
int16_t x42 = INT16_MAX;
uint64_t x46 = UINT64_MAX;
uint8_t x52 = 3U;
volatile int32_t t11 = 17231;
int64_t x54 = INT64_MIN;
volatile int32_t t12 = 3;
static int16_t x61 = INT16_MIN;
volatile int32_t t15 = 1654568;
int64_t x75 = INT64_MAX;
static int8_t x77 = INT8_MIN;
static volatile int8_t x80 = -1;
volatile int32_t t17 = 4424;
static int8_t x83 = INT8_MIN;
static int8_t x84 = INT8_MAX;
volatile int64_t x90 = INT64_MIN;
int64_t x101 = -14682180LL;
static volatile int64_t x104 = 115349LL;
uint64_t t23 = 10265883409845556LLU;
int64_t x111 = INT64_MIN;
static int64_t x113 = INT64_MIN;
int32_t x114 = -65337;
int64_t x115 = INT64_MIN;
static int8_t x116 = INT8_MAX;
uint64_t x117 = 712762549555647LLU;
static uint8_t x121 = 3U;
int32_t t27 = -235;
int32_t x125 = -21;
uint8_t x126 = 104U;
uint64_t t29 = 22002LLU;
int8_t x137 = INT8_MAX;
uint8_t x138 = UINT8_MAX;
int16_t x159 = -1;
static volatile int32_t x163 = -1;
static int32_t x169 = 2783276;
uint16_t x174 = UINT16_MAX;
uint64_t x176 = 88025657081915LLU;
static volatile int64_t x180 = 5LL;
static uint32_t x184 = 229U;
uint8_t x191 = 6U;
static int32_t t41 = 3965925;
int16_t x196 = -64;
static int16_t x205 = -1;
static int32_t t46 = -20522789;
int64_t x218 = 145544495913142LL;
int64_t x219 = -49396LL;
static uint64_t x221 = 804344654LLU;
static volatile uint16_t x239 = 0U;
int64_t x242 = 0LL;
volatile int64_t x246 = -1LL;
int32_t x249 = -28135;
int8_t x252 = INT8_MIN;
static int64_t x257 = 163016522653LL;
int16_t x262 = -1;
volatile int32_t t60 = -8839067;
int32_t x273 = -1;
volatile int64_t t63 = -2628239445435LL;
volatile int64_t x283 = INT64_MIN;
uint64_t x286 = 442046197883018LLU;
volatile uint8_t x287 = UINT8_MAX;
volatile int8_t x288 = 23;
int8_t x297 = -1;
int32_t x298 = INT32_MIN;
static volatile uint32_t x305 = UINT32_MAX;
static int32_t t67 = -1;
int64_t x309 = 883568490381LL;
static uint64_t x315 = 312LLU;
int64_t x323 = INT64_MAX;
uint32_t t71 = 6U;
static int32_t x333 = 62;
volatile uint8_t x337 = UINT8_MAX;
uint32_t t80 = 1537U;
uint32_t x382 = UINT32_MAX;
static uint64_t x383 = UINT64_MAX;
static int32_t x397 = INT32_MIN;
uint8_t x399 = 87U;
int32_t t88 = 2575231;
static int32_t x401 = INT32_MIN;
int32_t t91 = 0;
int64_t x417 = INT64_MIN;
int16_t x419 = INT16_MIN;
static volatile int32_t t93 = 4159260;
int64_t x423 = -1LL;
volatile int64_t x427 = -1LL;
int32_t t96 = 380;
static volatile int64_t x434 = INT64_MAX;
int16_t x436 = 6775;
volatile int32_t x439 = INT32_MIN;
uint64_t x440 = 47130346438599495LLU;
static int16_t x448 = -1;
int32_t t100 = -51;
static volatile int32_t t103 = -80;
int32_t x468 = -1;
volatile int16_t x469 = -1;
int16_t x473 = -4694;
static volatile int64_t t107 = 7LL;
static int8_t x480 = -1;
uint64_t x496 = UINT64_MAX;
volatile uint64_t x497 = UINT64_MAX;
uint32_t x498 = 55468U;
static int32_t x499 = INT32_MAX;
static int8_t x502 = -1;
volatile uint16_t x508 = 3458U;
int64_t x514 = INT64_MIN;
int64_t t116 = -1LL;
static int64_t x517 = INT64_MAX;
int8_t x531 = 1;
volatile uint16_t x532 = 1625U;
static int8_t x533 = 0;
static int8_t x537 = INT8_MIN;
volatile int32_t x538 = -2;
uint8_t x556 = 22U;
uint32_t x559 = 2U;
int16_t x571 = INT16_MIN;
static uint32_t x579 = 33347899U;
int16_t x590 = 14;
int32_t t134 = 247;
volatile uint32_t x599 = 270917U;
int64_t t135 = 531692972927LL;
int32_t x601 = INT32_MIN;
int64_t x605 = 102LL;
volatile uint32_t x609 = 43428U;
volatile int32_t t138 = -939998;
static int16_t x618 = -3;
int64_t x621 = INT64_MAX;
int32_t x629 = -1;
uint16_t x633 = 3408U;
uint64_t x635 = 15LLU;
static int64_t x636 = 452698889684699LL;
volatile int64_t x638 = INT64_MIN;
int64_t x643 = 1LL;
int32_t x646 = INT32_MAX;
int32_t t147 = -1479540;
int32_t t149 = -1189867;
static uint8_t x662 = 3U;
int32_t t151 = -7;
static int16_t x673 = -1;
static uint16_t x674 = 16895U;
int32_t t152 = 5527220;
volatile uint64_t x693 = UINT64_MAX;
int8_t x694 = -2;
volatile int64_t x695 = INT64_MIN;
volatile int8_t x698 = 41;
uint8_t x719 = 96U;
volatile int64_t x725 = INT64_MIN;
int64_t x726 = 523122674184787610LL;
uint64_t x745 = UINT64_MAX;
volatile int64_t x747 = INT64_MIN;
int32_t t168 = -32968083;
int16_t x761 = INT16_MIN;
volatile int64_t x763 = INT64_MAX;
volatile int8_t x766 = 0;
int16_t x767 = -1;
static volatile uint8_t x770 = 6U;
static int32_t t173 = 11530;
uint16_t x778 = UINT16_MAX;
static int32_t x779 = -1;
volatile int16_t x787 = -1;
static volatile int32_t t178 = -5746;
int8_t x800 = INT8_MAX;
volatile int8_t x806 = INT8_MAX;
static volatile uint64_t x811 = 5190626994543263LLU;
int16_t x827 = INT16_MAX;
uint32_t x834 = 469U;
uint32_t x837 = UINT32_MAX;
static uint64_t x840 = 10271370576466LLU;
int64_t x843 = INT64_MIN;
static volatile int32_t t191 = -111757270;
volatile int64_t x845 = INT64_MIN;
static int8_t x850 = INT8_MAX;
static int64_t x852 = 24974378125LL;
volatile int64_t t193 = 61269200LL;
static volatile uint64_t t194 = 3945806348LLU;
static uint8_t x857 = 2U;
int8_t x858 = INT8_MAX;
uint32_t t195 = 828334U;
int8_t x866 = INT8_MIN;
volatile int32_t t197 = 62;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x2 = 165LL;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -7779774;

    t0 = ((x1!=(x2>x3))-x4);

    if (t0 != -65534) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 3U;
	static int16_t x6 = INT16_MIN;
	static uint16_t x7 = 507U;
	int32_t x8 = 113905;

    t1 = ((x5!=(x6>x7))-x8);

    if (t1 != -113904) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = 7584306LLU;

    t2 = ((x13!=(x14>x15))-x16);

    if (t2 != 18446744073701967311LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = INT16_MIN;
	static int32_t t3 = -543;

    t3 = ((x17!=(x18>x19))-x20);

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	volatile int16_t x23 = 0;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = -175;

    t4 = ((x21!=(x22>x23))-x24);

    if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	static volatile int16_t x26 = INT16_MIN;
	static volatile int8_t x27 = -11;

    t5 = ((x25!=(x26>x27))-x28);

    if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x30 = 0U;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = UINT16_MAX;
	static volatile int32_t t6 = 961021;

    t6 = ((x29!=(x30>x31))-x32);

    if (t6 != -65534) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x35 = -1049580707;
	volatile int32_t x36 = -1;
	volatile int32_t t7 = -94542318;

    t7 = ((x33!=(x34>x35))-x36);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x38 = INT32_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	static volatile int32_t t8 = 21861;

    t8 = ((x37!=(x38>x39))-x40);

    if (t8 != 32769) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x43 = 2673147715363LL;
	static volatile int32_t x44 = INT32_MAX;
	int32_t t9 = -920;

    t9 = ((x41!=(x42>x43))-x44);

    if (t9 != -2147483646) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = 7328993;
	uint32_t x47 = 1012U;
	int16_t x48 = INT16_MAX;
	int32_t t10 = -25;

    t10 = ((x45!=(x46>x47))-x48);

    if (t10 != -32766) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = 0;
	uint32_t x50 = 253527654U;
	int16_t x51 = INT16_MIN;

    t11 = ((x49!=(x50>x51))-x52);

    if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x53 = UINT32_MAX;
	uint64_t x55 = 13791986LLU;
	uint16_t x56 = 40U;

    t12 = ((x53!=(x54>x55))-x56);

    if (t12 != -39) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	static int32_t x59 = -21055947;
	volatile uint8_t x60 = 9U;
	volatile int32_t t13 = 3101996;

    t13 = ((x57!=(x58>x59))-x60);

    if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x62 = -1LL;
	int64_t x63 = 295LL;
	int64_t x64 = INT64_MAX;
	int64_t t14 = -4128935317843LL;

    t14 = ((x61!=(x62>x63))-x64);

    if (t14 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x65 = 11440701U;
	volatile int16_t x66 = INT16_MAX;
	uint32_t x67 = 28512U;
	int16_t x68 = -1;

    t15 = ((x65!=(x66>x67))-x68);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 41LL;
	static int8_t x74 = INT8_MIN;
	uint64_t x76 = 23852826188150LLU;
	static uint64_t t16 = 3885637403726873LLU;

    t16 = ((x73!=(x74>x75))-x76);

    if (t16 != 18446720220883363467LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MIN;

    t17 = ((x77!=(x78>x79))-x80);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x81 = UINT16_MAX;
	int16_t x82 = -1;
	int32_t t18 = -31;

    t18 = ((x81!=(x82>x83))-x84);

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = -1;
	static volatile int64_t x86 = -42441437387996864LL;
	static int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = -487299615;

    t19 = ((x85!=(x86>x87))-x88);

    if (t19 != -254) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = 3120570;
	int16_t x91 = INT16_MAX;
	uint8_t x92 = 53U;
	int32_t t20 = 3482;

    t20 = ((x89!=(x90>x91))-x92);

    if (t20 != -52) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = -11;
	int32_t x98 = INT32_MIN;
	int8_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	uint64_t t21 = 3629026677LLU;

    t21 = ((x97!=(x98>x99))-x100);

    if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x102 = INT8_MIN;
	int32_t x103 = 18397868;
	volatile int64_t t22 = 10368326LL;

    t22 = ((x101!=(x102>x103))-x104);

    if (t22 != -115348LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x105 = INT8_MIN;
	uint16_t x106 = 14178U;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;

    t23 = ((x105!=(x106>x107))-x108);

    if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x109 = -1;
	int64_t x110 = 1LL;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t24 = -95254;

    t24 = ((x109!=(x110>x111))-x112);

    if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t t25 = 6753;

    t25 = ((x113!=(x114>x115))-x116);

    if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MAX;
	volatile int16_t x120 = -29;
	static volatile int32_t t26 = -716;

    t26 = ((x117!=(x118>x119))-x120);

    if (t26 != 30) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	int16_t x124 = 1;

    t27 = ((x121!=(x122>x123))-x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x127 = INT64_MIN;
	int8_t x128 = -2;
	volatile int32_t t28 = -218021;

    t28 = ((x125!=(x126>x127))-x128);

    if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = 2985069LL;
	int8_t x131 = -1;
	static volatile uint64_t x132 = 1108LLU;

    t29 = ((x129!=(x130>x131))-x132);

    if (t29 != 18446744073709550509LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x139 = INT16_MAX;
	static uint64_t x140 = UINT64_MAX;
	uint64_t t30 = 103798504715860505LLU;

    t30 = ((x137!=(x138>x139))-x140);

    if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = -1;
	static volatile int32_t x146 = INT32_MIN;
	int64_t x147 = 24LL;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t31 = 1;

    t31 = ((x145!=(x146>x147))-x148);

    if (t31 != 32769) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x149 = 6403U;
	static int64_t x150 = INT64_MIN;
	int64_t x151 = 15445906251715898LL;
	uint16_t x152 = 141U;
	int32_t t32 = 2552;

    t32 = ((x149!=(x150>x151))-x152);

    if (t32 != -140) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MAX;
	int16_t x154 = INT16_MIN;
	volatile uint8_t x155 = 2U;
	static uint8_t x156 = 18U;
	static volatile int32_t t33 = 8087707;

    t33 = ((x153!=(x154>x155))-x156);

    if (t33 != -17) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x157 = 0;
	static int32_t x158 = INT32_MIN;
	uint8_t x160 = 27U;
	static int32_t t34 = 2503367;

    t34 = ((x157!=(x158>x159))-x160);

    if (t34 != -27) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x161 = -1;
	volatile uint16_t x162 = UINT16_MAX;
	uint16_t x164 = 13790U;
	static volatile int32_t t35 = 3299;

    t35 = ((x161!=(x162>x163))-x164);

    if (t35 != -13789) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	volatile uint16_t x172 = 1200U;
	static volatile int32_t t36 = -459;

    t36 = ((x169!=(x170>x171))-x172);

    if (t36 != -1199) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	uint64_t t37 = 1636770253015137167LLU;

    t37 = ((x173!=(x174>x175))-x176);

    if (t37 != 18446656048052469702LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = 91;
	uint8_t x178 = 1U;
	int8_t x179 = INT8_MIN;
	int64_t t38 = 0LL;

    t38 = ((x177!=(x178>x179))-x180);

    if (t38 != -4LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = INT32_MIN;
	static uint16_t x182 = 1704U;
	uint16_t x183 = 1802U;
	uint32_t t39 = 13132U;

    t39 = ((x181!=(x182>x183))-x184);

    if (t39 != 4294967068U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MAX;
	static uint8_t x187 = 0U;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t40 = 10;

    t40 = ((x185!=(x186>x187))-x188);

    if (t40 != 32769) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = INT32_MAX;
	int8_t x190 = INT8_MIN;
	uint16_t x192 = 2U;

    t41 = ((x189!=(x190>x191))-x192);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x194 = 0;
	volatile int8_t x195 = INT8_MIN;
	volatile int32_t t42 = -1008;

    t42 = ((x193!=(x194>x195))-x196);

    if (t42 != 65) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 26U;
	int64_t x198 = INT64_MIN;
	int8_t x199 = 13;
	int16_t x200 = -1;
	volatile int32_t t43 = 2774;

    t43 = ((x197!=(x198>x199))-x200);

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = UINT8_MAX;
	int8_t x202 = -1;
	volatile int8_t x203 = -1;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t44 = 52471;

    t44 = ((x201!=(x202>x203))-x204);

    if (t44 != -65534) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x206 = INT64_MIN;
	volatile int64_t x207 = -1412681285893813294LL;
	uint64_t x208 = 3615684076LLU;
	static uint64_t t45 = 116707308LLU;

    t45 = ((x205!=(x206>x207))-x208);

    if (t45 != 18446744070093867541LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x209 = INT8_MIN;
	static volatile int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	uint16_t x212 = 1086U;

    t46 = ((x209!=(x210>x211))-x212);

    if (t46 != -1085) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x213 = 13507415LLU;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = 1306394634710LL;
	uint64_t x216 = 1771098756694346679LLU;
	uint64_t t47 = 13539246LLU;

    t47 = ((x213!=(x214>x215))-x216);

    if (t47 != 16675645317015204938LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x217 = INT64_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t48 = 100325LL;

    t48 = ((x217!=(x218>x219))-x220);

    if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x222 = INT8_MIN;
	static int16_t x223 = -1;
	static uint16_t x224 = 1407U;
	volatile int32_t t49 = 15;

    t49 = ((x221!=(x222>x223))-x224);

    if (t49 != -1406) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x225 = UINT16_MAX;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = 4U;
	static int64_t x228 = 22015566655001LL;
	int64_t t50 = 0LL;

    t50 = ((x225!=(x226>x227))-x228);

    if (t50 != -22015566655000LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int8_t x231 = -1;
	volatile uint64_t x232 = 521458302280LLU;
	volatile uint64_t t51 = 905LLU;

    t51 = ((x229!=(x230>x231))-x232);

    if (t51 != 18446743552251249337LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = 527523805LL;
	int16_t x236 = INT16_MIN;
	volatile int32_t t52 = -107722;

    t52 = ((x233!=(x234>x235))-x236);

    if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x237 = INT32_MIN;
	uint8_t x238 = UINT8_MAX;
	uint8_t x240 = 26U;
	volatile int32_t t53 = -3;

    t53 = ((x237!=(x238>x239))-x240);

    if (t53 != -25) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = UINT32_MAX;
	uint8_t x243 = 2U;
	static int32_t x244 = INT32_MAX;
	static volatile int32_t t54 = -397;

    t54 = ((x241!=(x242>x243))-x244);

    if (t54 != -2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x245 = INT8_MIN;
	int16_t x247 = -1;
	uint64_t x248 = 14515917726855LLU;
	volatile uint64_t t55 = 255717LLU;

    t55 = ((x245!=(x246>x247))-x248);

    if (t55 != 18446729557791824762LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x250 = -1LL;
	uint32_t x251 = 174330453U;
	static int32_t t56 = 1;

    t56 = ((x249!=(x250>x251))-x252);

    if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x253 = -21;
	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	static int32_t x256 = -242433;
	int32_t t57 = -315535294;

    t57 = ((x253!=(x254>x255))-x256);

    if (t57 != 242434) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x258 = 685LLU;
	int64_t x259 = -1LL;
	int64_t x260 = INT64_MAX;
	volatile int64_t t58 = 6975994751LL;

    t58 = ((x257!=(x258>x259))-x260);

    if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x261 = INT64_MIN;
	volatile int16_t x263 = -1;
	volatile int8_t x264 = -3;
	int32_t t59 = 41835;

    t59 = ((x261!=(x262>x263))-x264);

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	volatile int16_t x267 = -1330;
	static int32_t x268 = -387;

    t60 = ((x265!=(x266>x267))-x268);

    if (t60 != 388) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x269 = 9U;
	int64_t x270 = INT64_MAX;
	uint16_t x271 = UINT16_MAX;
	uint16_t x272 = 422U;
	volatile int32_t t61 = -68837842;

    t61 = ((x269!=(x270>x271))-x272);

    if (t61 != -421) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x274 = 5743U;
	int64_t x275 = INT64_MAX;
	uint32_t x276 = 270610122U;
	uint32_t t62 = 10U;

    t62 = ((x273!=(x274>x275))-x276);

    if (t62 != 4024357175U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x278 = 1696720176LLU;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = -1806LL;

    t63 = ((x277!=(x278>x279))-x280);

    if (t63 != 1807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x281 = 18U;
	static int16_t x282 = -371;
	volatile int8_t x284 = INT8_MAX;
	static volatile int32_t t64 = -2504;

    t64 = ((x281!=(x282>x283))-x284);

    if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x285 = 355917627LLU;
	int32_t t65 = -252;

    t65 = ((x285!=(x286>x287))-x288);

    if (t65 != -22) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x299 = 3U;
	int32_t x300 = INT32_MAX;
	volatile int32_t t66 = -31696;

    t66 = ((x297!=(x298>x299))-x300);

    if (t66 != -2147483646) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x306 = INT16_MIN;
	static int64_t x307 = -1LL;
	uint16_t x308 = UINT16_MAX;

    t67 = ((x305!=(x306>x307))-x308);

    if (t67 != -65534) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x310 = -5;
	volatile int8_t x311 = -14;
	int32_t x312 = 493083;
	static volatile int32_t t68 = 32133;

    t68 = ((x309!=(x310>x311))-x312);

    if (t68 != -493082) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	uint64_t x314 = 11743706482LLU;
	volatile int8_t x316 = -1;
	volatile int32_t t69 = -2005;

    t69 = ((x313!=(x314>x315))-x316);

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	uint8_t x318 = 0U;
	uint64_t x319 = UINT64_MAX;
	static uint64_t x320 = UINT64_MAX;
	volatile uint64_t t70 = 6759816300740LLU;

    t70 = ((x317!=(x318>x319))-x320);

    if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x321 = INT64_MIN;
	static uint32_t x322 = 4U;
	static uint32_t x324 = 30989994U;

    t71 = ((x321!=(x322>x323))-x324);

    if (t71 != 4263977303U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = -4137141;
	int64_t x326 = -927325977LL;
	static uint32_t x327 = 166816U;
	volatile int16_t x328 = -56;
	volatile int32_t t72 = -180129035;

    t72 = ((x325!=(x326>x327))-x328);

    if (t72 != 57) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x329 = -1;
	int64_t x330 = -58019955391731LL;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = 0;
	volatile int32_t t73 = 11067;

    t73 = ((x329!=(x330>x331))-x332);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = UINT32_MAX;
	uint32_t t74 = 31649406U;

    t74 = ((x333!=(x334>x335))-x336);

    if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x338 = 414355538LLU;
	uint32_t x339 = 11U;
	int8_t x340 = INT8_MIN;
	int32_t t75 = -1117563;

    t75 = ((x337!=(x338>x339))-x340);

    if (t75 != 129) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x345 = 13041163U;
	static int32_t x346 = 7930;
	static int16_t x347 = -1;
	uint32_t x348 = 156796U;
	static uint32_t t76 = 14389U;

    t76 = ((x345!=(x346>x347))-x348);

    if (t76 != 4294810501U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = -1LL;
	static int64_t x350 = -1LL;
	static int32_t x351 = -3636;
	static int8_t x352 = INT8_MIN;
	int32_t t77 = -341;

    t77 = ((x349!=(x350>x351))-x352);

    if (t77 != 129) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x353 = 8U;
	int64_t x354 = 54238LL;
	int8_t x355 = -1;
	int32_t x356 = -2951;
	int32_t t78 = 158227;

    t78 = ((x353!=(x354>x355))-x356);

    if (t78 != 2952) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = INT16_MIN;
	volatile int32_t x358 = INT32_MIN;
	static volatile uint16_t x359 = 5U;
	int32_t x360 = -31618648;
	int32_t t79 = 2899976;

    t79 = ((x357!=(x358>x359))-x360);

    if (t79 != 31618649) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x361 = 47055595839LLU;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	volatile uint32_t x364 = 13558U;

    t80 = ((x361!=(x362>x363))-x364);

    if (t80 != 4294953739U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x365 = UINT32_MAX;
	uint16_t x366 = 742U;
	int8_t x367 = INT8_MAX;
	static uint64_t x368 = 66366055504LLU;
	static volatile uint64_t t81 = 7845433101531LLU;

    t81 = ((x365!=(x366>x367))-x368);

    if (t81 != 18446744007343496113LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	int8_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	int32_t t82 = -1877145;

    t82 = ((x373!=(x374>x375))-x376);

    if (t82 != -254) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x377 = -186503LL;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 131259943260822585LLU;
	uint64_t t83 = 4973376593015950LLU;

    t83 = ((x377!=(x378>x379))-x380);

    if (t83 != 18315484130448729032LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x381 = INT32_MIN;
	static volatile uint32_t x384 = UINT32_MAX;
	volatile uint32_t t84 = 788684081U;

    t84 = ((x381!=(x382>x383))-x384);

    if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int64_t t85 = 3309LL;

    t85 = ((x385!=(x386>x387))-x388);

    if (t85 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x389 = -1;
	int16_t x390 = INT16_MAX;
	static uint32_t x391 = 580756U;
	volatile int64_t x392 = -1LL;
	volatile int64_t t86 = 246578556052745LL;

    t86 = ((x389!=(x390>x391))-x392);

    if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x393 = INT16_MAX;
	uint64_t x394 = 9703723171LLU;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = UINT16_MAX;
	static volatile int32_t t87 = -249093467;

    t87 = ((x393!=(x394>x395))-x396);

    if (t87 != -65534) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x398 = INT64_MIN;
	int32_t x400 = INT32_MAX;

    t88 = ((x397!=(x398>x399))-x400);

    if (t88 != -2147483646) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x402 = 5346LLU;
	uint64_t x403 = 103127092317756LLU;
	static uint32_t x404 = 8050U;
	volatile uint32_t t89 = 647392U;

    t89 = ((x401!=(x402>x403))-x404);

    if (t89 != 4294959247U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x405 = INT8_MAX;
	volatile int32_t x406 = INT32_MIN;
	volatile int16_t x407 = INT16_MIN;
	uint8_t x408 = 25U;
	volatile int32_t t90 = 427;

    t90 = ((x405!=(x406>x407))-x408);

    if (t90 != -24) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x409 = 1U;
	int16_t x410 = -639;
	int64_t x411 = INT64_MIN;
	static uint8_t x412 = UINT8_MAX;

    t91 = ((x409!=(x410>x411))-x412);

    if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x413 = 68U;
	uint8_t x414 = 4U;
	uint32_t x415 = 2023476551U;
	int8_t x416 = 6;
	static volatile int32_t t92 = 68401489;

    t92 = ((x413!=(x414>x415))-x416);

    if (t92 != -5) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x418 = -5;
	uint8_t x420 = UINT8_MAX;

    t93 = ((x417!=(x418>x419))-x420);

    if (t93 != -254) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x421 = INT32_MAX;
	int8_t x422 = -5;
	uint16_t x424 = 9U;
	int32_t t94 = 95;

    t94 = ((x421!=(x422>x423))-x424);

    if (t94 != -8) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x425 = 378LLU;
	static uint16_t x426 = UINT16_MAX;
	static int64_t x428 = -33LL;
	volatile int64_t t95 = -2007667288941208047LL;

    t95 = ((x425!=(x426>x427))-x428);

    if (t95 != 34LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x429 = 44U;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = 2;

    t96 = ((x429!=(x430>x431))-x432);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x433 = 3744U;
	uint8_t x435 = 13U;
	static int32_t t97 = -57169;

    t97 = ((x433!=(x434>x435))-x436);

    if (t97 != -6774) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x437 = -1LL;
	static int64_t x438 = INT64_MIN;
	volatile uint64_t t98 = 88697676950LLU;

    t98 = ((x437!=(x438>x439))-x440);

    if (t98 != 18399613727270952122LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x441 = UINT64_MAX;
	static int8_t x442 = INT8_MAX;
	int32_t x443 = INT32_MIN;
	static uint16_t x444 = UINT16_MAX;
	volatile int32_t t99 = 46;

    t99 = ((x441!=(x442>x443))-x444);

    if (t99 != -65534) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x445 = 14602LLU;
	int16_t x446 = 9465;
	int64_t x447 = -1LL;

    t100 = ((x445!=(x446>x447))-x448);

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x449 = 91U;
	int16_t x450 = INT16_MIN;
	uint8_t x451 = UINT8_MAX;
	volatile int8_t x452 = INT8_MIN;
	int32_t t101 = 84494802;

    t101 = ((x449!=(x450>x451))-x452);

    if (t101 != 129) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x453 = UINT8_MAX;
	int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MIN;
	uint64_t x456 = 46495484LLU;
	volatile uint64_t t102 = 2416LLU;

    t102 = ((x453!=(x454>x455))-x456);

    if (t102 != 18446744073663056133LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x457 = INT64_MIN;
	static volatile uint16_t x458 = UINT16_MAX;
	static int32_t x459 = INT32_MAX;
	uint16_t x460 = UINT16_MAX;

    t103 = ((x457!=(x458>x459))-x460);

    if (t103 != -65534) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x461 = 673LLU;
	volatile int32_t x462 = INT32_MIN;
	int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t104 = 21390588;

    t104 = ((x461!=(x462>x463))-x464);

    if (t104 != 32769) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x465 = INT8_MAX;
	static uint32_t x466 = UINT32_MAX;
	volatile int32_t x467 = INT32_MIN;
	int32_t t105 = -7107;

    t105 = ((x465!=(x466>x467))-x468);

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x470 = INT32_MAX;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MAX;
	volatile int64_t t106 = 444814LL;

    t106 = ((x469!=(x470>x471))-x472);

    if (t106 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x474 = -1;
	int32_t x475 = INT32_MAX;
	int64_t x476 = 10666LL;

    t107 = ((x473!=(x474>x475))-x476);

    if (t107 != -10665LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MIN;
	static int8_t x479 = INT8_MIN;
	int32_t t108 = -976150291;

    t108 = ((x477!=(x478>x479))-x480);

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x481 = 107U;
	int8_t x482 = INT8_MAX;
	int16_t x483 = 114;
	uint8_t x484 = 6U;
	int32_t t109 = -3734330;

    t109 = ((x481!=(x482>x483))-x484);

    if (t109 != -5) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x489 = INT64_MIN;
	static int64_t x490 = -24LL;
	static int64_t x491 = INT64_MIN;
	int32_t x492 = -1;
	volatile int32_t t110 = 124;

    t110 = ((x489!=(x490>x491))-x492);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = -1;
	volatile int8_t x494 = INT8_MIN;
	uint64_t x495 = 13461LLU;
	volatile uint64_t t111 = 34643532393LLU;

    t111 = ((x493!=(x494>x495))-x496);

    if (t111 != 2LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x500 = INT64_MAX;
	volatile int64_t t112 = -14221026223LL;

    t112 = ((x497!=(x498>x499))-x500);

    if (t112 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x501 = 3;
	int8_t x503 = 0;
	int16_t x504 = -1;
	int32_t t113 = -116420;

    t113 = ((x501!=(x502>x503))-x504);

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x505 = -52105865718872448LL;
	uint8_t x506 = 3U;
	volatile int32_t x507 = 54470;
	static volatile int32_t t114 = -15964;

    t114 = ((x505!=(x506>x507))-x508);

    if (t114 != -3457) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x509 = 6LLU;
	static uint64_t x510 = 7528LLU;
	static int64_t x511 = INT64_MIN;
	volatile uint32_t x512 = 7976414U;
	static volatile uint32_t t115 = 266480808U;

    t115 = ((x509!=(x510>x511))-x512);

    if (t115 != 4286990883U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x515 = 1U;
	static int64_t x516 = -6826LL;

    t116 = ((x513!=(x514>x515))-x516);

    if (t116 != 6827LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x518 = 88512;
	uint8_t x519 = 30U;
	volatile int8_t x520 = INT8_MAX;
	volatile int32_t t117 = 1;

    t117 = ((x517!=(x518>x519))-x520);

    if (t117 != -126) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x521 = INT16_MAX;
	uint8_t x522 = 23U;
	int64_t x523 = -1278741918175972043LL;
	static uint64_t x524 = 4LLU;
	volatile uint64_t t118 = 201891814109676LLU;

    t118 = ((x521!=(x522>x523))-x524);

    if (t118 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = -1;
	int64_t x526 = -1LL;
	uint64_t x527 = 91LLU;
	uint32_t x528 = UINT32_MAX;
	uint32_t t119 = 84053U;

    t119 = ((x525!=(x526>x527))-x528);

    if (t119 != 2U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x529 = INT16_MAX;
	static uint8_t x530 = 0U;
	static int32_t t120 = -613;

    t120 = ((x529!=(x530>x531))-x532);

    if (t120 != -1624) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x534 = 84489LLU;
	static volatile int32_t x535 = INT32_MAX;
	int8_t x536 = INT8_MIN;
	int32_t t121 = -3;

    t121 = ((x533!=(x534>x535))-x536);

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x539 = INT32_MIN;
	volatile int8_t x540 = INT8_MIN;
	int32_t t122 = 117;

    t122 = ((x537!=(x538>x539))-x540);

    if (t122 != 129) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x541 = INT8_MIN;
	uint16_t x542 = 8U;
	int32_t x543 = INT32_MIN;
	int16_t x544 = INT16_MIN;
	int32_t t123 = 161225482;

    t123 = ((x541!=(x542>x543))-x544);

    if (t123 != 32769) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x546 = -1LL;
	int32_t x547 = INT32_MIN;
	static int16_t x548 = INT16_MIN;
	volatile int32_t t124 = 0;

    t124 = ((x545!=(x546>x547))-x548);

    if (t124 != 32769) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x549 = 2810952686524008098LL;
	uint16_t x550 = UINT16_MAX;
	int8_t x551 = 2;
	int64_t x552 = -1LL;
	int64_t t125 = 27060132LL;

    t125 = ((x549!=(x550>x551))-x552);

    if (t125 != 2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x553 = INT32_MIN;
	uint64_t x554 = 186546366498728137LLU;
	int32_t x555 = 289003;
	volatile int32_t t126 = -75167;

    t126 = ((x553!=(x554>x555))-x556);

    if (t126 != -21) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = UINT16_MAX;
	int32_t x558 = -1;
	uint16_t x560 = 14920U;
	static volatile int32_t t127 = 232624692;

    t127 = ((x557!=(x558>x559))-x560);

    if (t127 != -14919) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x562 = 4988770871816910054LLU;
	int32_t x563 = INT32_MIN;
	volatile int32_t x564 = 1728020;
	volatile int32_t t128 = -3;

    t128 = ((x561!=(x562>x563))-x564);

    if (t128 != -1728019) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x569 = -1;
	int16_t x570 = INT16_MAX;
	int32_t x572 = 12;
	static int32_t t129 = -4970824;

    t129 = ((x569!=(x570>x571))-x572);

    if (t129 != -11) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x573 = 10066U;
	static int32_t x574 = INT32_MIN;
	int64_t x575 = 30849467496404LL;
	static int16_t x576 = INT16_MIN;
	static volatile int32_t t130 = 312872;

    t130 = ((x573!=(x574>x575))-x576);

    if (t130 != 32769) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = INT16_MAX;
	static uint32_t x578 = 191941U;
	int16_t x580 = -716;
	int32_t t131 = 45305;

    t131 = ((x577!=(x578>x579))-x580);

    if (t131 != 717) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x585 = INT32_MIN;
	uint32_t x586 = UINT32_MAX;
	uint8_t x587 = UINT8_MAX;
	int64_t x588 = -187295440809927111LL;
	volatile int64_t t132 = 283109413250902087LL;

    t132 = ((x585!=(x586>x587))-x588);

    if (t132 != 187295440809927112LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x589 = -1LL;
	static uint32_t x591 = UINT32_MAX;
	int16_t x592 = INT16_MIN;
	int32_t t133 = 8673;

    t133 = ((x589!=(x590>x591))-x592);

    if (t133 != 32769) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = INT32_MIN;
	uint32_t x594 = 5U;
	static uint8_t x595 = 46U;
	volatile int8_t x596 = 15;

    t134 = ((x593!=(x594>x595))-x596);

    if (t134 != -14) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int32_t x598 = INT32_MAX;
	volatile int64_t x600 = INT64_MAX;

    t135 = ((x597!=(x598>x599))-x600);

    if (t135 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x602 = UINT8_MAX;
	static uint32_t x603 = 77549U;
	int32_t x604 = -1;
	int32_t t136 = 29;

    t136 = ((x601!=(x602>x603))-x604);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x606 = INT8_MIN;
	static int64_t x607 = INT64_MIN;
	uint8_t x608 = 0U;
	volatile int32_t t137 = 426;

    t137 = ((x605!=(x606>x607))-x608);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x610 = -1;
	int64_t x611 = INT64_MIN;
	int16_t x612 = -4;

    t138 = ((x609!=(x610>x611))-x612);

    if (t138 != 5) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x613 = UINT32_MAX;
	static int8_t x614 = INT8_MIN;
	int8_t x615 = 1;
	uint64_t x616 = UINT64_MAX;
	uint64_t t139 = 207056LLU;

    t139 = ((x613!=(x614>x615))-x616);

    if (t139 != 2LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x619 = INT16_MIN;
	int64_t x620 = INT64_MAX;
	volatile int64_t t140 = 20956541LL;

    t140 = ((x617!=(x618>x619))-x620);

    if (t140 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x622 = INT8_MAX;
	int8_t x623 = -1;
	int16_t x624 = INT16_MAX;
	volatile int32_t t141 = 1;

    t141 = ((x621!=(x622>x623))-x624);

    if (t141 != -32766) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x625 = UINT8_MAX;
	static uint16_t x626 = 22U;
	static int32_t x627 = INT32_MIN;
	uint32_t x628 = 2819U;
	static volatile uint32_t t142 = 1970U;

    t142 = ((x625!=(x626>x627))-x628);

    if (t142 != 4294964478U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x630 = -8;
	int16_t x631 = INT16_MIN;
	static volatile int8_t x632 = 14;
	int32_t t143 = 108;

    t143 = ((x629!=(x630>x631))-x632);

    if (t143 != -13) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x634 = 1;
	volatile int64_t t144 = 3LL;

    t144 = ((x633!=(x634>x635))-x636);

    if (t144 != -452698889684698LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = INT32_MAX;
	static int64_t x639 = INT64_MIN;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t145 = 573341LLU;

    t145 = ((x637!=(x638>x639))-x640);

    if (t145 != 2LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x641 = -30;
	static int64_t x642 = 2914LL;
	static volatile int16_t x644 = -1;
	int32_t t146 = -84630034;

    t146 = ((x641!=(x642>x643))-x644);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x645 = -1;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MAX;

    t147 = ((x645!=(x646>x647))-x648);

    if (t147 != -2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x649 = INT16_MIN;
	static volatile int16_t x650 = INT16_MIN;
	static int16_t x651 = 4;
	uint8_t x652 = 3U;
	volatile int32_t t148 = -24562712;

    t148 = ((x649!=(x650>x651))-x652);

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x653 = 16;
	int64_t x654 = INT64_MAX;
	static int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MAX;

    t149 = ((x653!=(x654>x655))-x656);

    if (t149 != -126) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x661 = 4013414652427LLU;
	static int8_t x663 = INT8_MIN;
	static uint16_t x664 = 128U;
	volatile int32_t t150 = -189;

    t150 = ((x661!=(x662>x663))-x664);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x665 = INT64_MIN;
	volatile uint32_t x666 = UINT32_MAX;
	static int64_t x667 = INT64_MAX;
	int32_t x668 = -1;

    t151 = ((x665!=(x666>x667))-x668);

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x675 = -16360;
	int8_t x676 = -1;

    t152 = ((x673!=(x674>x675))-x676);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x681 = 94922229LL;
	int16_t x682 = 15;
	int16_t x683 = -1;
	uint32_t x684 = UINT32_MAX;
	uint32_t t153 = 31064508U;

    t153 = ((x681!=(x682>x683))-x684);

    if (t153 != 2U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x689 = INT32_MAX;
	static int8_t x690 = INT8_MAX;
	int64_t x691 = 3LL;
	int8_t x692 = INT8_MAX;
	static volatile int32_t t154 = -2060090;

    t154 = ((x689!=(x690>x691))-x692);

    if (t154 != -126) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x696 = -219;
	volatile int32_t t155 = 48013961;

    t155 = ((x693!=(x694>x695))-x696);

    if (t155 != 220) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x697 = INT8_MIN;
	int8_t x699 = INT8_MIN;
	uint64_t x700 = UINT64_MAX;
	uint64_t t156 = 65271310835LLU;

    t156 = ((x697!=(x698>x699))-x700);

    if (t156 != 2LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x701 = INT16_MAX;
	uint16_t x702 = UINT16_MAX;
	static int16_t x703 = INT16_MAX;
	int8_t x704 = INT8_MIN;
	static volatile int32_t t157 = -666;

    t157 = ((x701!=(x702>x703))-x704);

    if (t157 != 129) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x705 = -633661;
	uint16_t x706 = UINT16_MAX;
	int32_t x707 = -1;
	volatile uint32_t x708 = 3925U;
	uint32_t t158 = 431U;

    t158 = ((x705!=(x706>x707))-x708);

    if (t158 != 4294963372U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x709 = 23;
	int16_t x710 = -117;
	volatile int32_t x711 = INT32_MIN;
	int16_t x712 = 1;
	int32_t t159 = -57450;

    t159 = ((x709!=(x710>x711))-x712);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x713 = -1;
	static uint16_t x714 = 17968U;
	static uint16_t x715 = UINT16_MAX;
	static int32_t x716 = INT32_MAX;
	volatile int32_t t160 = -2820;

    t160 = ((x713!=(x714>x715))-x716);

    if (t160 != -2147483646) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x717 = INT8_MIN;
	static int16_t x718 = INT16_MIN;
	uint16_t x720 = 237U;
	static volatile int32_t t161 = 244;

    t161 = ((x717!=(x718>x719))-x720);

    if (t161 != -236) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MIN;
	uint8_t x723 = UINT8_MAX;
	volatile int8_t x724 = INT8_MIN;
	int32_t t162 = -22991015;

    t162 = ((x721!=(x722>x723))-x724);

    if (t162 != 129) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x727 = INT32_MIN;
	int8_t x728 = INT8_MIN;
	static volatile int32_t t163 = 1;

    t163 = ((x725!=(x726>x727))-x728);

    if (t163 != 129) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x729 = -1LL;
	int64_t x730 = INT64_MIN;
	volatile int16_t x731 = -4;
	int8_t x732 = -1;
	int32_t t164 = -1;

    t164 = ((x729!=(x730>x731))-x732);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x733 = 50;
	int8_t x734 = -1;
	int8_t x735 = INT8_MIN;
	static uint32_t x736 = 3243U;
	volatile uint32_t t165 = 1341589975U;

    t165 = ((x733!=(x734>x735))-x736);

    if (t165 != 4294964054U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x741 = INT64_MIN;
	int16_t x742 = INT16_MIN;
	uint64_t x743 = 1230957976335LLU;
	static uint8_t x744 = UINT8_MAX;
	volatile int32_t t166 = 24505;

    t166 = ((x741!=(x742>x743))-x744);

    if (t166 != -254) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x746 = 40;
	static uint64_t x748 = 2613432125980674LLU;
	uint64_t t167 = 2826283026154LLU;

    t167 = ((x745!=(x746>x747))-x748);

    if (t167 != 18444130641583570943LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x749 = INT8_MAX;
	volatile int32_t x750 = INT32_MAX;
	volatile int32_t x751 = INT32_MAX;
	uint8_t x752 = UINT8_MAX;

    t168 = ((x749!=(x750>x751))-x752);

    if (t168 != -254) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x753 = 30U;
	int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MIN;
	int8_t x756 = 21;
	volatile int32_t t169 = 0;

    t169 = ((x753!=(x754>x755))-x756);

    if (t169 != -20) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x757 = 36125785U;
	int16_t x758 = 13;
	volatile int8_t x759 = -1;
	int64_t x760 = INT64_MAX;
	volatile int64_t t170 = -27416695117LL;

    t170 = ((x757!=(x758>x759))-x760);

    if (t170 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x762 = -1;
	static int32_t x764 = -43402;
	volatile int32_t t171 = -155556;

    t171 = ((x761!=(x762>x763))-x764);

    if (t171 != 43403) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x765 = 313111LLU;
	int8_t x768 = INT8_MAX;
	volatile int32_t t172 = -1;

    t172 = ((x765!=(x766>x767))-x768);

    if (t172 != -126) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x769 = UINT16_MAX;
	static int16_t x771 = -219;
	volatile int8_t x772 = INT8_MIN;

    t173 = ((x769!=(x770>x771))-x772);

    if (t173 != 129) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x773 = -24;
	volatile uint32_t x774 = 152813556U;
	int8_t x775 = 1;
	int8_t x776 = INT8_MIN;
	volatile int32_t t174 = 41806135;

    t174 = ((x773!=(x774>x775))-x776);

    if (t174 != 129) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x777 = 8U;
	volatile uint8_t x780 = UINT8_MAX;
	volatile int32_t t175 = 613435;

    t175 = ((x777!=(x778>x779))-x780);

    if (t175 != -254) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x781 = -18;
	uint16_t x782 = UINT16_MAX;
	uint16_t x783 = UINT16_MAX;
	uint16_t x784 = 194U;
	static int32_t t176 = -35;

    t176 = ((x781!=(x782>x783))-x784);

    if (t176 != -193) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x785 = 2783298;
	int8_t x786 = -1;
	static int64_t x788 = INT64_MAX;
	volatile int64_t t177 = 355786LL;

    t177 = ((x785!=(x786>x787))-x788);

    if (t177 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x789 = UINT8_MAX;
	int16_t x790 = INT16_MIN;
	static volatile int16_t x791 = INT16_MIN;
	volatile int8_t x792 = INT8_MAX;

    t178 = ((x789!=(x790>x791))-x792);

    if (t178 != -126) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x793 = INT8_MIN;
	static volatile uint64_t x794 = 10736LLU;
	uint64_t x795 = UINT64_MAX;
	static volatile int16_t x796 = 58;
	static int32_t t179 = -369111199;

    t179 = ((x793!=(x794>x795))-x796);

    if (t179 != -57) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MAX;
	int8_t x798 = INT8_MAX;
	volatile int32_t x799 = -1;
	int32_t t180 = 1373092;

    t180 = ((x797!=(x798>x799))-x800);

    if (t180 != -126) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x801 = 33U;
	uint32_t x802 = UINT32_MAX;
	static volatile int64_t x803 = -493LL;
	static int16_t x804 = -257;
	volatile int32_t t181 = -5;

    t181 = ((x801!=(x802>x803))-x804);

    if (t181 != 258) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x805 = 64033788;
	volatile int16_t x807 = INT16_MIN;
	volatile int16_t x808 = -1;
	volatile int32_t t182 = 124977425;

    t182 = ((x805!=(x806>x807))-x808);

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x809 = -227767429797LL;
	int32_t x810 = -2360;
	uint8_t x812 = 22U;
	int32_t t183 = -432628959;

    t183 = ((x809!=(x810>x811))-x812);

    if (t183 != -21) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x813 = INT32_MIN;
	static int64_t x814 = 2278065LL;
	int8_t x815 = 0;
	static int64_t x816 = -1993254LL;
	volatile int64_t t184 = 510392563843LL;

    t184 = ((x813!=(x814>x815))-x816);

    if (t184 != 1993255LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x817 = -778462353LL;
	int16_t x818 = INT16_MIN;
	int64_t x819 = INT64_MIN;
	volatile uint8_t x820 = 3U;
	int32_t t185 = 930497679;

    t185 = ((x817!=(x818>x819))-x820);

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x821 = -1;
	static volatile int8_t x822 = -1;
	int64_t x823 = INT64_MIN;
	uint8_t x824 = UINT8_MAX;
	int32_t t186 = -353127;

    t186 = ((x821!=(x822>x823))-x824);

    if (t186 != -254) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x825 = INT16_MIN;
	uint32_t x826 = UINT32_MAX;
	int64_t x828 = -1LL;
	int64_t t187 = 626551408910625LL;

    t187 = ((x825!=(x826>x827))-x828);

    if (t187 != 2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x829 = -1LL;
	volatile int8_t x830 = -1;
	volatile uint64_t x831 = 128502345LLU;
	uint64_t x832 = 1070213438656893374LLU;
	static volatile uint64_t t188 = 8438472780LLU;

    t188 = ((x829!=(x830>x831))-x832);

    if (t188 != 17376530635052658243LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x833 = 4568421434547253701LL;
	static int64_t x835 = 9590834905106LL;
	static uint32_t x836 = 6U;
	static uint32_t t189 = 253400U;

    t189 = ((x833!=(x834>x835))-x836);

    if (t189 != 4294967291U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x838 = -1;
	volatile int8_t x839 = INT8_MAX;
	static volatile uint64_t t190 = 871506865642507LLU;

    t190 = ((x837!=(x838>x839))-x840);

    if (t190 != 18446733802338975151LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x841 = INT64_MIN;
	volatile int8_t x842 = INT8_MIN;
	uint8_t x844 = 8U;

    t191 = ((x841!=(x842>x843))-x844);

    if (t191 != -7) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x846 = -1;
	int16_t x847 = -9;
	int64_t x848 = INT64_MAX;
	volatile int64_t t192 = -29716838120145LL;

    t192 = ((x845!=(x846>x847))-x848);

    if (t192 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x849 = 17160245626871LLU;
	int64_t x851 = 6459869960877LL;

    t193 = ((x849!=(x850>x851))-x852);

    if (t193 != -24974378124LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x853 = -79938015454219297LL;
	int32_t x854 = INT32_MIN;
	int16_t x855 = INT16_MIN;
	volatile uint64_t x856 = UINT64_MAX;

    t194 = ((x853!=(x854>x855))-x856);

    if (t194 != 2LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x859 = INT64_MIN;
	uint32_t x860 = 26U;

    t195 = ((x857!=(x858>x859))-x860);

    if (t195 != 4294967271U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x865 = INT16_MIN;
	static int8_t x867 = -1;
	int16_t x868 = -934;
	volatile int32_t t196 = 30;

    t196 = ((x865!=(x866>x867))-x868);

    if (t196 != 935) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x869 = 36U;
	int16_t x870 = INT16_MIN;
	uint16_t x871 = UINT16_MAX;
	uint8_t x872 = 0U;

    t197 = ((x869!=(x870>x871))-x872);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x873 = UINT8_MAX;
	uint16_t x874 = 27633U;
	static int8_t x875 = INT8_MAX;
	int16_t x876 = INT16_MIN;
	int32_t t198 = -1;

    t198 = ((x873!=(x874>x875))-x876);

    if (t198 != 32769) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x877 = INT16_MIN;
	uint8_t x878 = UINT8_MAX;
	int32_t x879 = 13833;
	volatile uint32_t x880 = 7U;
	volatile uint32_t t199 = 279499577U;

    t199 = ((x877!=(x878>x879))-x880);

    if (t199 != 4294967290U) { NG(); } else { ; }
	
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

