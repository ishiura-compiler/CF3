
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

static uint16_t x8 = 8080U;
uint32_t x9 = 110909U;
static int32_t t5 = -3178;
static volatile int32_t t10 = 5399;
int16_t x51 = INT16_MIN;
int32_t t12 = -399007902;
uint8_t x60 = 7U;
int32_t t13 = 12149;
int64_t x64 = -86200104677943LL;
uint64_t x67 = UINT64_MAX;
int8_t x68 = -1;
static int64_t t16 = 34642864535081400LL;
static uint32_t x74 = UINT32_MAX;
volatile int32_t x75 = -507590578;
int16_t x77 = INT16_MIN;
int64_t x78 = 4181871LL;
int8_t x81 = -1;
int8_t x86 = INT8_MAX;
uint64_t x87 = 233731413619096679LLU;
static volatile uint8_t x96 = UINT8_MAX;
uint64_t x98 = 253LLU;
int32_t t23 = 3;
uint64_t x116 = UINT64_MAX;
static uint64_t x124 = UINT64_MAX;
int16_t x125 = INT16_MIN;
int8_t x131 = 1;
volatile int64_t x134 = 1040940005249651634LL;
static volatile int32_t t31 = -6859;
int64_t x140 = 32377LL;
uint32_t x154 = 342796U;
uint16_t x159 = 33U;
volatile int32_t t36 = 8891;
uint8_t x166 = UINT8_MAX;
uint32_t x167 = UINT32_MAX;
static int16_t x169 = -1;
int16_t x170 = -13105;
int64_t x179 = 763153LL;
int32_t x184 = INT32_MAX;
int16_t x188 = -13;
uint32_t x191 = 56384U;
int32_t x195 = 188805019;
int16_t x201 = 3;
uint16_t x204 = UINT16_MAX;
volatile int32_t t46 = -1;
int8_t x218 = -1;
int16_t x221 = INT16_MIN;
volatile int8_t x225 = 0;
int16_t x226 = -3;
int16_t x227 = INT16_MAX;
uint8_t x228 = UINT8_MAX;
static uint16_t x230 = 1091U;
int64_t x236 = -1LL;
static uint64_t t53 = 36696481192LLU;
static int32_t x241 = -885;
uint32_t x242 = 11U;
volatile uint8_t x245 = 76U;
int16_t x247 = 5;
int32_t x248 = INT32_MIN;
int32_t t55 = INT32_MIN;
static int16_t x255 = -1;
volatile uint64_t x258 = 2564231494LLU;
int64_t t57 = -1002860651411817LL;
static uint64_t x269 = 56603616LLU;
static uint16_t x273 = 116U;
static uint8_t x274 = 38U;
static volatile uint16_t x276 = 1U;
volatile int32_t t60 = -7594;
volatile int64_t x291 = INT64_MIN;
uint32_t x292 = 362264U;
int16_t x296 = INT16_MIN;
int8_t x299 = INT8_MAX;
int16_t x304 = 3;
volatile int32_t t67 = 5;
int32_t x310 = INT32_MAX;
int16_t x317 = INT16_MAX;
volatile int64_t x325 = 85855213787LL;
int32_t t73 = 3021751;
int16_t x333 = INT16_MIN;
int16_t x335 = INT16_MIN;
uint64_t x340 = UINT64_MAX;
volatile int16_t x341 = 1903;
int32_t x357 = 1653;
uint16_t x374 = UINT16_MAX;
static uint8_t x375 = UINT8_MAX;
static volatile int16_t x380 = INT16_MIN;
int64_t x383 = INT64_MIN;
int32_t t89 = 67914;
int32_t t91 = 7490072;
int32_t t92 = -39141;
int32_t x428 = 2840;
int16_t x431 = 331;
volatile int32_t x434 = INT32_MIN;
uint64_t x442 = UINT64_MAX;
volatile uint64_t x443 = UINT64_MAX;
int32_t t100 = 28975891;
int8_t x454 = INT8_MIN;
volatile uint64_t t101 = 2624586143712333LLU;
int64_t x459 = -1LL;
int64_t x463 = -1LL;
uint64_t x468 = UINT64_MAX;
uint8_t x471 = 61U;
static int16_t x480 = -1;
int32_t t107 = 172946;
volatile int16_t x481 = -2;
static volatile int8_t x484 = 0;
volatile int32_t t108 = -369;
static uint16_t x485 = 43U;
int64_t x487 = -11070607633LL;
volatile int64_t t109 = 4590957945672081751LL;
int32_t t110 = INT32_MIN;
volatile uint32_t x495 = 255U;
volatile uint64_t t111 = 222098109LLU;
int32_t x521 = -307449;
uint64_t x536 = UINT64_MAX;
uint64_t t120 = UINT64_MAX;
int32_t x542 = -1;
int32_t t121 = 189;
volatile uint8_t x545 = UINT8_MAX;
volatile uint32_t x548 = UINT32_MAX;
volatile uint32_t x550 = 88844U;
static int16_t x555 = INT16_MAX;
volatile int32_t x556 = -95;
uint16_t x562 = 3134U;
int16_t x564 = -1;
int32_t x565 = INT32_MIN;
static volatile uint8_t x568 = 50U;
int8_t x574 = 0;
uint8_t x576 = 10U;
volatile int32_t t129 = -7742242;
int16_t x584 = 6;
int32_t t131 = -262941264;
uint8_t x585 = 0U;
uint32_t x588 = 262197707U;
volatile int32_t t133 = -1;
volatile int64_t t134 = -539100480710297LL;
uint64_t x600 = 22368341LLU;
static volatile int64_t x602 = -186826104918LL;
static volatile int32_t x607 = 3;
static int16_t x616 = -1;
static int32_t t139 = 15207;
int16_t x621 = INT16_MAX;
volatile uint8_t x622 = 0U;
volatile int64_t t140 = -2976143974920866216LL;
uint64_t x625 = 171LLU;
int16_t x628 = -2307;
int8_t x634 = 1;
int64_t x635 = 20406335758805LL;
uint64_t x642 = 62424LLU;
static int64_t x644 = -1LL;
volatile int64_t t145 = 391452LL;
static uint64_t x647 = UINT64_MAX;
int32_t t146 = 3880714;
volatile uint16_t x651 = UINT16_MAX;
uint64_t x654 = 0LLU;
volatile int64_t x658 = 1621864748812LL;
uint32_t t149 = 1867754U;
static int32_t x661 = INT32_MAX;
static uint32_t x662 = 47237577U;
int32_t t150 = 18;
int8_t x666 = -1;
static int8_t x670 = 1;
int64_t x676 = -195710103LL;
int32_t x677 = 7266;
int8_t x684 = INT8_MIN;
uint16_t x687 = 15535U;
int16_t x689 = INT16_MIN;
static volatile uint16_t x693 = 2U;
int32_t x697 = INT32_MAX;
int8_t x699 = INT8_MIN;
uint64_t x704 = 147452831LLU;
uint8_t x705 = UINT8_MAX;
int16_t x708 = INT16_MAX;
int16_t x712 = INT16_MIN;
volatile int32_t t162 = -20;
int32_t x720 = INT32_MIN;
static int64_t x724 = INT64_MIN;
volatile uint8_t x727 = 0U;
uint8_t x728 = 43U;
uint32_t x733 = UINT32_MAX;
uint32_t x734 = 1050U;
static int32_t x743 = INT32_MIN;
static int64_t x750 = INT64_MAX;
int32_t t169 = 275746661;
volatile uint32_t x754 = 5034638U;
uint32_t t170 = UINT32_MAX;
uint64_t x758 = 127259125301LLU;
static uint32_t x759 = 154U;
uint8_t x762 = 3U;
int8_t x763 = 0;
volatile int64_t t172 = 263731LL;
uint8_t x766 = 14U;
static int64_t t173 = -1954070299960LL;
int64_t x770 = 26342LL;
int16_t x775 = INT16_MAX;
volatile uint64_t x776 = UINT64_MAX;
int8_t x781 = 0;
int64_t x784 = -534891427586LL;
int64_t x786 = INT64_MAX;
uint64_t x787 = UINT64_MAX;
static uint64_t x788 = UINT64_MAX;
uint64_t t177 = UINT64_MAX;
volatile int32_t x790 = -1;
volatile int64_t x796 = INT64_MIN;
static int16_t x802 = INT16_MAX;
static volatile int32_t t181 = 58567;
int64_t x806 = INT64_MIN;
static int8_t x808 = -1;
volatile int64_t x809 = -7973LL;
static int64_t x812 = INT64_MIN;
uint32_t x826 = 6U;
volatile int32_t t186 = 3735;
uint16_t x833 = UINT16_MAX;
volatile uint32_t t188 = 298U;
int16_t x844 = 1;
static int32_t t189 = 1751175;
static volatile int32_t t192 = -72;
uint8_t x860 = 1U;
int8_t x863 = -1;
uint16_t x864 = UINT16_MAX;
uint16_t x869 = 213U;
int64_t x871 = INT64_MIN;
volatile uint32_t x881 = 35444312U;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	volatile uint16_t x4 = 0U;
	static int32_t t0 = 98424;

    t0 = (((x1-x2)>x3)^x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint64_t x6 = 1959526109716233LLU;
	volatile uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -3;

    t1 = (((x5-x6)>x7)^x8);

    if (t1 != 8081) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x10 = 23094U;
	static int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

    t2 = (((x9-x10)>x11)^x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	int8_t x19 = 1;
	int32_t x20 = -1;
	static volatile int32_t t3 = 1;

    t3 = (((x17-x18)>x19)^x20);

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -7;
	uint16_t x22 = 49U;
	static int8_t x23 = INT8_MIN;
	int32_t x24 = -153013;
	static int32_t t4 = 4833339;

    t4 = (((x21-x22)>x23)^x24);

    if (t4 != -153014) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -866;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 3914U;
	static int8_t x28 = INT8_MIN;

    t5 = (((x25-x26)>x27)^x28);

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -7;
	int64_t x30 = INT64_MIN;
	int16_t x31 = 1983;
	static int32_t x32 = INT32_MIN;
	static int32_t t6 = 1537;

    t6 = (((x29-x30)>x31)^x32);

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = -8469492;
	int8_t x35 = 1;
	int32_t x36 = INT32_MIN;
	static int32_t t7 = 0;

    t7 = (((x33-x34)>x35)^x36);

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	static volatile int32_t t8 = -65431923;

    t8 = (((x37-x38)>x39)^x40);

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 120U;
	int16_t x42 = -931;
	static uint8_t x43 = 1U;
	uint32_t x44 = 91138U;
	uint32_t t9 = 0U;

    t9 = (((x41-x42)>x43)^x44);

    if (t9 != 91139U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	uint16_t x46 = 2U;
	volatile uint8_t x47 = 124U;
	uint16_t x48 = 6U;

    t10 = (((x45-x46)>x47)^x48);

    if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	uint32_t x50 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t11 = -139043;

    t11 = (((x49-x50)>x51)^x52);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = 458037560;
	uint32_t x54 = 1430U;
	int64_t x55 = -136393LL;
	int32_t x56 = -1;

    t12 = (((x53-x54)>x55)^x56);

    if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 12;
	int64_t x58 = -1LL;
	int16_t x59 = -238;

    t13 = (((x57-x58)>x59)^x60);

    if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x61 = UINT32_MAX;
	static uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	int64_t t14 = 2040443259483LL;

    t14 = (((x61-x62)>x63)^x64);

    if (t14 != -86200104677944LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = 9;
	int16_t x66 = INT16_MAX;
	int32_t t15 = 1;

    t15 = (((x65-x66)>x67)^x68);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = -60;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1628160260107444LL;

    t16 = (((x69-x70)>x71)^x72);

    if (t16 != -1628160260107443LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 2404;
	static volatile int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -247;

    t17 = (((x73-x74)>x75)^x76);

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MAX;
	int32_t t18 = 12497052;

    t18 = (((x77-x78)>x79)^x80);

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	uint64_t x84 = 107090018601LLU;
	static uint64_t t19 = 4370034759073416085LLU;

    t19 = (((x81-x82)>x83)^x84);

    if (t19 != 107090018600LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 1770U;
	int16_t x88 = -1;
	volatile int32_t t20 = -4;

    t20 = (((x85-x86)>x87)^x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -1;
	volatile int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;
	uint8_t x92 = 30U;
	volatile int32_t t21 = -4467;

    t21 = (((x89-x90)>x91)^x92);

    if (t21 != 31) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x93 = 28U;
	int8_t x94 = 0;
	int32_t x95 = INT32_MIN;
	static volatile int32_t t22 = 98248319;

    t22 = (((x93-x94)>x95)^x96);

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x97 = INT8_MIN;
	static uint8_t x99 = 10U;
	uint16_t x100 = UINT16_MAX;

    t23 = (((x97-x98)>x99)^x100);

    if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;
	int64_t t24 = 231251LL;

    t24 = (((x101-x102)>x103)^x104);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	volatile int32_t x106 = INT32_MIN;
	volatile uint64_t x107 = 2513904542LLU;
	volatile int8_t x108 = -1;
	static int32_t t25 = 64502;

    t25 = (((x105-x106)>x107)^x108);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x113 = 123U;
	volatile int8_t x114 = INT8_MIN;
	volatile int64_t x115 = INT64_MAX;
	uint64_t t26 = UINT64_MAX;

    t26 = (((x113-x114)>x115)^x116);

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x117 = -4;
	int32_t x118 = -43;
	int16_t x119 = -1;
	int8_t x120 = 38;
	static int32_t t27 = -452;

    t27 = (((x117-x118)>x119)^x120);

    if (t27 != 39) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -1;
	volatile uint64_t t28 = UINT64_MAX;

    t28 = (((x121-x122)>x123)^x124);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x126 = 8970774544446629332LLU;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	int64_t t29 = INT64_MIN;

    t29 = (((x125-x126)>x127)^x128);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -3442804;

    t30 = (((x129-x130)>x131)^x132);

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x133 = INT8_MAX;
	volatile uint32_t x135 = 54099386U;
	static int16_t x136 = INT16_MAX;

    t31 = (((x133-x134)>x135)^x136);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = -803624766;
	static volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	volatile int64_t t32 = 1354430LL;

    t32 = (((x137-x138)>x139)^x140);

    if (t32 != 32377LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = UINT64_MAX;
	int8_t x150 = -1;
	volatile int16_t x151 = -1;
	static int32_t x152 = INT32_MIN;
	static int32_t t33 = INT32_MIN;

    t33 = (((x149-x150)>x151)^x152);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x153 = 23LLU;
	static int32_t x155 = INT32_MIN;
	uint32_t x156 = 7370445U;
	volatile uint32_t t34 = 246U;

    t34 = (((x153-x154)>x155)^x156);

    if (t34 != 7370444U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x157 = UINT16_MAX;
	volatile uint32_t x158 = 7U;
	int16_t x160 = -365;
	static int32_t t35 = -52;

    t35 = (((x157-x158)>x159)^x160);

    if (t35 != -366) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x161 = -1;
	int8_t x162 = -8;
	uint8_t x163 = UINT8_MAX;
	static uint8_t x164 = 61U;

    t36 = (((x161-x162)>x163)^x164);

    if (t36 != 61) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = -1LL;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t37 = 3865367;

    t37 = (((x165-x166)>x167)^x168);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x171 = 22515U;
	uint32_t x172 = 9030195U;
	volatile uint32_t t38 = 5701697U;

    t38 = (((x169-x170)>x171)^x172);

    if (t38 != 9030195U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x177 = INT64_MAX;
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t39 = -430;

    t39 = (((x177-x178)>x179)^x180);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MAX;
	int32_t x182 = -1;
	volatile uint64_t x183 = 5446160774532470002LLU;
	int32_t t40 = INT32_MAX;

    t40 = (((x181-x182)>x183)^x184);

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x185 = 242344155U;
	int32_t x186 = INT32_MAX;
	int64_t x187 = -16951740891646LL;
	volatile int32_t t41 = 52;

    t41 = (((x185-x186)>x187)^x188);

    if (t41 != -14) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x189 = UINT8_MAX;
	uint16_t x190 = 7964U;
	int32_t x192 = 292864;
	static int32_t t42 = 1;

    t42 = (((x189-x190)>x191)^x192);

    if (t42 != 292865) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = -1LL;
	int16_t x196 = INT16_MAX;
	volatile int32_t t43 = -54;

    t43 = (((x193-x194)>x195)^x196);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = -3833961129LL;
	int32_t x199 = INT32_MAX;
	static uint16_t x200 = 5U;
	int32_t t44 = -4668692;

    t44 = (((x197-x198)>x199)^x200);

    if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x202 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	volatile int32_t t45 = 4;

    t45 = (((x201-x202)>x203)^x204);

    if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x205 = 27269418LLU;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = -1;

    t46 = (((x205-x206)>x207)^x208);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = INT8_MAX;
	uint16_t x214 = 30U;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 49;
	volatile int32_t t47 = -4;

    t47 = (((x213-x214)>x215)^x216);

    if (t47 != 48) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x217 = INT16_MAX;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = 1U;
	volatile int32_t t48 = 23247;

    t48 = (((x217-x218)>x219)^x220);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x222 = -13591;
	int16_t x223 = 14619;
	int32_t x224 = INT32_MAX;
	int32_t t49 = INT32_MAX;

    t49 = (((x221-x222)>x223)^x224);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t t50 = 421;

    t50 = (((x225-x226)>x227)^x228);

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x229 = 73U;
	int64_t x231 = 69LL;
	static int8_t x232 = -1;
	int32_t t51 = 1138;

    t51 = (((x229-x230)>x231)^x232);

    if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x233 = 434892256LLU;
	static volatile int8_t x234 = -1;
	int8_t x235 = INT8_MAX;
	int64_t t52 = -177499LL;

    t52 = (((x233-x234)>x235)^x236);

    if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = 1;
	static int64_t x238 = -1LL;
	volatile int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;

    t53 = (((x237-x238)>x239)^x240);

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x243 = INT16_MIN;
	volatile int64_t x244 = -1LL;
	static volatile int64_t t54 = 7082123235115LL;

    t54 = (((x241-x242)>x243)^x244);

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x246 = INT16_MAX;

    t55 = (((x245-x246)>x247)^x248);

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = 1;
	int16_t x254 = -3188;
	uint16_t x256 = 7U;
	static int32_t t56 = -434231052;

    t56 = (((x253-x254)>x255)^x256);

    if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x257 = 1511U;
	volatile uint16_t x259 = 6707U;
	int64_t x260 = -4784858843683LL;

    t57 = (((x257-x258)>x259)^x260);

    if (t57 != -4784858843684LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = 3294;
	volatile int16_t x266 = INT16_MIN;
	uint8_t x267 = 0U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t58 = 2691943;

    t58 = (((x265-x266)>x267)^x268);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x270 = 7;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = 115196U;
	uint32_t t59 = 180070673U;

    t59 = (((x269-x270)>x271)^x272);

    if (t59 != 115196U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x275 = 3277U;

    t60 = (((x273-x274)>x275)^x276);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x277 = INT16_MIN;
	int16_t x278 = -1;
	static int16_t x279 = INT16_MAX;
	int16_t x280 = -1;
	int32_t t61 = 10323533;

    t61 = (((x277-x278)>x279)^x280);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x281 = INT16_MIN;
	static uint16_t x282 = UINT16_MAX;
	static uint8_t x283 = UINT8_MAX;
	uint32_t x284 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = (((x281-x282)>x283)^x284);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x285 = UINT32_MAX;
	int64_t x286 = INT64_MAX;
	static int64_t x287 = INT64_MAX;
	int64_t x288 = 5LL;
	volatile int64_t t63 = -20LL;

    t63 = (((x285-x286)>x287)^x288);

    if (t63 != 5LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x289 = 513791844U;
	int32_t x290 = -1;
	volatile uint32_t t64 = 598875U;

    t64 = (((x289-x290)>x291)^x292);

    if (t64 != 362265U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x293 = 372U;
	static int64_t x294 = 63095330891970401LL;
	int32_t x295 = 186941;
	int32_t t65 = -697;

    t65 = (((x293-x294)>x295)^x296);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = INT32_MAX;
	static volatile uint8_t x298 = UINT8_MAX;
	int64_t x300 = INT64_MIN;
	int64_t t66 = -1LL;

    t66 = (((x297-x298)>x299)^x300);

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x301 = 40U;
	int16_t x302 = -1;
	volatile int16_t x303 = 4;

    t67 = (((x301-x302)>x303)^x304);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = -1;
	volatile int32_t x306 = -21557471;
	static int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MAX;
	volatile int32_t t68 = -1408179;

    t68 = (((x305-x306)>x307)^x308);

    if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x309 = -1;
	uint32_t x311 = 45088U;
	int32_t x312 = -2075331;
	volatile int32_t t69 = 121;

    t69 = (((x309-x310)>x311)^x312);

    if (t69 != -2075332) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x313 = INT16_MIN;
	int32_t x314 = 124;
	uint64_t x315 = 16974153LLU;
	static volatile int32_t x316 = INT32_MAX;
	volatile int32_t t70 = -308;

    t70 = (((x313-x314)>x315)^x316);

    if (t70 != 2147483646) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	int32_t x320 = -1;
	static volatile int32_t t71 = -205;

    t71 = (((x317-x318)>x319)^x320);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x321 = UINT32_MAX;
	static uint32_t x322 = 7011U;
	static int16_t x323 = 0;
	uint16_t x324 = 12611U;
	int32_t t72 = 12729104;

    t72 = (((x321-x322)>x323)^x324);

    if (t72 != 12610) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x326 = -250516;
	static volatile int8_t x327 = 3;
	static int16_t x328 = -253;

    t73 = (((x325-x326)>x327)^x328);

    if (t73 != -254) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x329 = 4U;
	uint32_t x330 = 399688573U;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t74 = 1011;

    t74 = (((x329-x330)>x331)^x332);

    if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x334 = 7864LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t75 = -380;

    t75 = (((x333-x334)>x335)^x336);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x337 = UINT16_MAX;
	volatile int64_t x338 = INT64_MAX;
	volatile uint8_t x339 = UINT8_MAX;
	uint64_t t76 = UINT64_MAX;

    t76 = (((x337-x338)>x339)^x340);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 555067U;
	static volatile uint32_t t77 = 51257178U;

    t77 = (((x341-x342)>x343)^x344);

    if (t77 != 555067U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	int64_t x347 = INT64_MIN;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t78 = 3278;

    t78 = (((x345-x346)>x347)^x348);

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x349 = 2563LLU;
	static int32_t x350 = -1;
	int32_t x351 = 39741;
	volatile int8_t x352 = 2;
	volatile int32_t t79 = 2847353;

    t79 = (((x349-x350)>x351)^x352);

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x358 = INT32_MAX;
	int64_t x359 = -1111779142490LL;
	uint16_t x360 = UINT16_MAX;
	int32_t t80 = -2;

    t80 = (((x357-x358)>x359)^x360);

    if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x369 = -57035;
	static uint64_t x370 = 66916152070036LLU;
	volatile uint16_t x371 = 159U;
	int16_t x372 = INT16_MAX;
	volatile int32_t t81 = -1669;

    t81 = (((x369-x370)>x371)^x372);

    if (t81 != 32766) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x373 = -43;
	uint8_t x376 = 40U;
	static volatile int32_t t82 = -28225;

    t82 = (((x373-x374)>x375)^x376);

    if (t82 != 40) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = INT8_MAX;
	static volatile uint64_t x378 = UINT64_MAX;
	static uint32_t x379 = 946044U;
	int32_t t83 = 512946;

    t83 = (((x377-x378)>x379)^x380);

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = 19;
	volatile int8_t x382 = INT8_MIN;
	uint16_t x384 = 3435U;
	int32_t t84 = -21134;

    t84 = (((x381-x382)>x383)^x384);

    if (t84 != 3434) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x385 = 57059624766149390LLU;
	int8_t x386 = 3;
	int64_t x387 = INT64_MIN;
	static volatile uint8_t x388 = 89U;
	volatile int32_t t85 = -1;

    t85 = (((x385-x386)>x387)^x388);

    if (t85 != 89) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	volatile int32_t x392 = -1;
	volatile int32_t t86 = 0;

    t86 = (((x389-x390)>x391)^x392);

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x393 = UINT64_MAX;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -28274637778LL;
	int64_t t87 = -1434169689910940LL;

    t87 = (((x393-x394)>x395)^x396);

    if (t87 != -28274637778LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = 11;
	volatile int32_t t88 = 185125505;

    t88 = (((x397-x398)>x399)^x400);

    if (t88 != 11) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x405 = INT64_MIN;
	int8_t x406 = -28;
	int16_t x407 = -1;
	int32_t x408 = -1;

    t89 = (((x405-x406)>x407)^x408);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 394U;
	volatile int64_t x411 = 1013LL;
	volatile uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t90 = 54679LLU;

    t90 = (((x409-x410)>x411)^x412);

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x413 = -109703142385LL;
	static int8_t x414 = -1;
	static uint64_t x415 = 18246724632LLU;
	int16_t x416 = -3;

    t91 = (((x413-x414)>x415)^x416);

    if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = INT16_MAX;
	int8_t x418 = 1;
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;

    t92 = (((x417-x418)>x419)^x420);

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MAX;
	int32_t x423 = INT32_MAX;
	static uint32_t x424 = UINT32_MAX;
	volatile uint32_t t93 = UINT32_MAX;

    t93 = (((x421-x422)>x423)^x424);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MAX;
	volatile int32_t x427 = -1;
	int32_t t94 = -47;

    t94 = (((x425-x426)>x427)^x428);

    if (t94 != 2840) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x429 = -471;
	int32_t x430 = -64504545;
	volatile int32_t x432 = INT32_MIN;
	int32_t t95 = 4185;

    t95 = (((x429-x430)>x431)^x432);

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = -6;
	int64_t x435 = 0LL;
	static int64_t x436 = -4822834LL;
	int64_t t96 = -625LL;

    t96 = (((x433-x434)>x435)^x436);

    if (t96 != -4822833LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x437 = INT32_MIN;
	uint32_t x438 = UINT32_MAX;
	uint16_t x439 = 12172U;
	uint16_t x440 = UINT16_MAX;
	int32_t t97 = 7;

    t97 = (((x437-x438)>x439)^x440);

    if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x441 = 2U;
	static int32_t x444 = -1;
	int32_t t98 = 10;

    t98 = (((x441-x442)>x443)^x444);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x445 = -47232807926LL;
	int8_t x446 = INT8_MIN;
	uint32_t x447 = 1699715U;
	uint16_t x448 = 415U;
	volatile int32_t t99 = -76146813;

    t99 = (((x445-x446)>x447)^x448);

    if (t99 != 415) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x449 = INT16_MIN;
	int32_t x450 = INT32_MIN;
	static int8_t x451 = INT8_MIN;
	static uint8_t x452 = 1U;

    t100 = (((x449-x450)>x451)^x452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x453 = 50646LLU;
	int64_t x455 = -1LL;
	uint64_t x456 = 32186442584LLU;

    t101 = (((x453-x454)>x455)^x456);

    if (t101 != 32186442584LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x457 = 31U;
	static int16_t x458 = -1;
	static int8_t x460 = INT8_MIN;
	int32_t t102 = -4945104;

    t102 = (((x457-x458)>x459)^x460);

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x461 = -1;
	uint64_t x462 = 155LLU;
	volatile int32_t x464 = -10;
	volatile int32_t t103 = -417695637;

    t103 = (((x461-x462)>x463)^x464);

    if (t103 != -10) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	int8_t x467 = -1;
	volatile uint64_t t104 = UINT64_MAX;

    t104 = (((x465-x466)>x467)^x468);

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x469 = 2U;
	volatile uint16_t x470 = UINT16_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t105 = INT32_MIN;

    t105 = (((x469-x470)>x471)^x472);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x473 = 0;
	uint16_t x474 = 61U;
	int16_t x475 = 4633;
	int32_t x476 = INT32_MAX;
	static volatile int32_t t106 = INT32_MAX;

    t106 = (((x473-x474)>x475)^x476);

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x477 = 888U;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;

    t107 = (((x477-x478)>x479)^x480);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x482 = -1LL;
	volatile int64_t x483 = INT64_MAX;

    t108 = (((x481-x482)>x483)^x484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x486 = INT8_MAX;
	volatile int64_t x488 = INT64_MAX;

    t109 = (((x485-x486)>x487)^x488);

    if (t109 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x489 = INT16_MIN;
	int16_t x490 = -1;
	static volatile uint16_t x491 = UINT16_MAX;
	int32_t x492 = INT32_MIN;

    t110 = (((x489-x490)>x491)^x492);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = INT16_MIN;
	static uint64_t x494 = 386LLU;
	static uint64_t x496 = 780LLU;

    t111 = (((x493-x494)>x495)^x496);

    if (t111 != 781LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = -2;
	int64_t x498 = -1LL;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	static int32_t t112 = 128124075;

    t112 = (((x497-x498)>x499)^x500);

    if (t112 != -2147483647) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = -1;
	volatile int64_t x502 = 709755LL;
	static int64_t x503 = INT64_MIN;
	int32_t x504 = INT32_MAX;
	volatile int32_t t113 = -7;

    t113 = (((x501-x502)>x503)^x504);

    if (t113 != 2147483646) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x505 = UINT64_MAX;
	static int64_t x506 = -42840399LL;
	static int64_t x507 = -8280743111000LL;
	uint8_t x508 = 7U;
	volatile int32_t t114 = 58;

    t114 = (((x505-x506)>x507)^x508);

    if (t114 != 7) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x513 = 2U;
	volatile int8_t x514 = -1;
	int64_t x515 = INT64_MIN;
	int16_t x516 = -1;
	static volatile int32_t t115 = -496295;

    t115 = (((x513-x514)>x515)^x516);

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x517 = INT8_MIN;
	uint32_t x518 = 8072U;
	uint8_t x519 = 8U;
	int64_t x520 = INT64_MIN;
	int64_t t116 = -56379759LL;

    t116 = (((x517-x518)>x519)^x520);

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x522 = -1;
	int8_t x523 = 25;
	int8_t x524 = INT8_MIN;
	int32_t t117 = -20;

    t117 = (((x521-x522)>x523)^x524);

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x529 = 26629744LL;
	uint16_t x530 = UINT16_MAX;
	volatile int8_t x531 = INT8_MIN;
	static int32_t x532 = INT32_MIN;
	int32_t t118 = 966;

    t118 = (((x529-x530)>x531)^x532);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x533 = 6U;
	int8_t x534 = INT8_MAX;
	volatile int16_t x535 = -1;
	uint64_t t119 = UINT64_MAX;

    t119 = (((x533-x534)>x535)^x536);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x537 = -1;
	uint8_t x538 = UINT8_MAX;
	static int8_t x539 = INT8_MAX;
	static volatile uint64_t x540 = UINT64_MAX;

    t120 = (((x537-x538)>x539)^x540);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x543 = 111U;
	int8_t x544 = 0;

    t121 = (((x541-x542)>x543)^x544);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x546 = -502409;
	static int32_t x547 = INT32_MIN;
	volatile uint32_t t122 = 661311U;

    t122 = (((x545-x546)>x547)^x548);

    if (t122 != 4294967294U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x549 = 4;
	static uint32_t x551 = UINT32_MAX;
	volatile int64_t x552 = INT64_MAX;
	int64_t t123 = INT64_MAX;

    t123 = (((x549-x550)>x551)^x552);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x553 = INT16_MAX;
	static volatile int16_t x554 = INT16_MIN;
	static volatile int32_t t124 = -842837001;

    t124 = (((x553-x554)>x555)^x556);

    if (t124 != -96) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x557 = -1;
	uint8_t x558 = 3U;
	uint32_t x559 = 92U;
	int8_t x560 = INT8_MAX;
	volatile int32_t t125 = -272890250;

    t125 = (((x557-x558)>x559)^x560);

    if (t125 != 126) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x561 = 2155LLU;
	int16_t x563 = 1307;
	static volatile int32_t t126 = 18;

    t126 = (((x561-x562)>x563)^x564);

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x566 = INT8_MIN;
	int8_t x567 = -27;
	int32_t t127 = 24;

    t127 = (((x565-x566)>x567)^x568);

    if (t127 != 50) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x569 = -50172;
	int16_t x570 = INT16_MIN;
	static uint32_t x571 = 15U;
	int32_t x572 = -285567796;
	int32_t t128 = -10802;

    t128 = (((x569-x570)>x571)^x572);

    if (t128 != -285567795) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x573 = 484U;
	static int8_t x575 = INT8_MIN;

    t129 = (((x573-x574)>x575)^x576);

    if (t129 != 10) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x577 = 1U;
	int16_t x578 = INT16_MIN;
	int16_t x579 = INT16_MAX;
	volatile int32_t x580 = INT32_MAX;
	int32_t t130 = 122;

    t130 = (((x577-x578)>x579)^x580);

    if (t130 != 2147483646) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x581 = 471557U;
	int32_t x582 = 1981589;
	int32_t x583 = 892378588;

    t131 = (((x581-x582)>x583)^x584);

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x586 = 0;
	int16_t x587 = -31;
	static uint32_t t132 = 179351U;

    t132 = (((x585-x586)>x587)^x588);

    if (t132 != 262197706U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x589 = INT32_MIN;
	int8_t x590 = -7;
	volatile int64_t x591 = -7146955811LL;
	static uint16_t x592 = UINT16_MAX;

    t133 = (((x589-x590)>x591)^x592);

    if (t133 != 65534) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x593 = 7735U;
	int8_t x594 = INT8_MAX;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = 12350653753441LL;

    t134 = (((x593-x594)>x595)^x596);

    if (t134 != 12350653753440LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x597 = -3;
	int32_t x598 = -131675432;
	int32_t x599 = INT32_MIN;
	uint64_t t135 = 2936030722766LLU;

    t135 = (((x597-x598)>x599)^x600);

    if (t135 != 22368340LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x601 = 0U;
	uint8_t x603 = UINT8_MAX;
	uint32_t x604 = 788067361U;
	uint32_t t136 = 21U;

    t136 = (((x601-x602)>x603)^x604);

    if (t136 != 788067360U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x605 = -1;
	int8_t x606 = INT8_MIN;
	int8_t x608 = -1;
	int32_t t137 = -18554;

    t137 = (((x605-x606)>x607)^x608);

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x613 = 2375637750302LL;
	static int64_t x614 = -32283568165624903LL;
	volatile uint64_t x615 = 8086LLU;
	int32_t t138 = 139;

    t138 = (((x613-x614)>x615)^x616);

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x617 = -4;
	static uint16_t x618 = 0U;
	volatile int16_t x619 = INT16_MAX;
	int16_t x620 = 1;

    t139 = (((x617-x618)>x619)^x620);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x623 = INT64_MIN;
	int64_t x624 = 207972073628385LL;

    t140 = (((x621-x622)>x623)^x624);

    if (t140 != 207972073628384LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x626 = -643190;
	int32_t x627 = INT32_MIN;
	int32_t t141 = -13;

    t141 = (((x625-x626)>x627)^x628);

    if (t141 != -2307) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x629 = 0U;
	volatile uint8_t x630 = 14U;
	volatile int32_t x631 = INT32_MIN;
	static uint16_t x632 = 191U;
	volatile int32_t t142 = 39;

    t142 = (((x629-x630)>x631)^x632);

    if (t142 != 190) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x636 = -1;
	int32_t t143 = 1;

    t143 = (((x633-x634)>x635)^x636);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x637 = 2U;
	int8_t x638 = INT8_MIN;
	volatile int16_t x639 = -6323;
	int32_t x640 = -1;
	volatile int32_t t144 = -10;

    t144 = (((x637-x638)>x639)^x640);

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = -1;
	int8_t x643 = -27;

    t145 = (((x641-x642)>x643)^x644);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = -108541;
	int32_t x646 = -1;
	uint8_t x648 = 0U;

    t146 = (((x645-x646)>x647)^x648);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x649 = 282013033;
	volatile int16_t x650 = INT16_MAX;
	static int64_t x652 = INT64_MAX;
	volatile int64_t t147 = 336211791982LL;

    t147 = (((x649-x650)>x651)^x652);

    if (t147 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x653 = INT16_MIN;
	static int16_t x655 = 731;
	int16_t x656 = INT16_MIN;
	int32_t t148 = 3704057;

    t148 = (((x653-x654)>x655)^x656);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = -38;
	int64_t x659 = INT64_MIN;
	static uint32_t x660 = UINT32_MAX;

    t149 = (((x657-x658)>x659)^x660);

    if (t149 != 4294967294U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x663 = INT64_MIN;
	int16_t x664 = INT16_MIN;

    t150 = (((x661-x662)>x663)^x664);

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x665 = -1;
	static int8_t x667 = -1;
	int16_t x668 = INT16_MIN;
	static int32_t t151 = -7686;

    t151 = (((x665-x666)>x667)^x668);

    if (t151 != -32767) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = INT64_MAX;
	int8_t x671 = -1;
	static volatile uint8_t x672 = 56U;
	int32_t t152 = -108;

    t152 = (((x669-x670)>x671)^x672);

    if (t152 != 57) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x673 = INT8_MIN;
	uint64_t x674 = 246025062429306232LLU;
	static int8_t x675 = INT8_MIN;
	int64_t t153 = -120526587LL;

    t153 = (((x673-x674)>x675)^x676);

    if (t153 != -195710103LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x678 = 9U;
	int8_t x679 = -1;
	uint64_t x680 = 0LLU;
	volatile uint64_t t154 = 3073197632339054LLU;

    t154 = (((x677-x678)>x679)^x680);

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x681 = 14;
	int64_t x682 = -1LL;
	static uint8_t x683 = 1U;
	int32_t t155 = 264436115;

    t155 = (((x681-x682)>x683)^x684);

    if (t155 != -127) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x685 = 1434669412759101680LL;
	volatile uint8_t x686 = 49U;
	int64_t x688 = -1LL;
	int64_t t156 = 1343617LL;

    t156 = (((x685-x686)>x687)^x688);

    if (t156 != -2LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x690 = 0;
	volatile int16_t x691 = -1;
	int16_t x692 = 9;
	volatile int32_t t157 = 102188;

    t157 = (((x689-x690)>x691)^x692);

    if (t157 != 9) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x694 = 3106694287LL;
	int64_t x695 = -1LL;
	static int8_t x696 = INT8_MAX;
	volatile int32_t t158 = 1;

    t158 = (((x693-x694)>x695)^x696);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x698 = 7063U;
	static int8_t x700 = -1;
	volatile int32_t t159 = -175438453;

    t159 = (((x697-x698)>x699)^x700);

    if (t159 != -2) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x701 = -381675404142157987LL;
	static uint8_t x702 = 1U;
	int32_t x703 = INT32_MIN;
	volatile uint64_t t160 = 6063283825546762342LLU;

    t160 = (((x701-x702)>x703)^x704);

    if (t160 != 147452831LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x706 = 129LLU;
	uint8_t x707 = 5U;
	volatile int32_t t161 = 98640893;

    t161 = (((x705-x706)>x707)^x708);

    if (t161 != 32766) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x709 = UINT32_MAX;
	int8_t x710 = -1;
	static volatile int8_t x711 = INT8_MIN;

    t162 = (((x709-x710)>x711)^x712);

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x717 = 2060094;
	static uint32_t x718 = 10561604U;
	int32_t x719 = INT32_MAX;
	static int32_t t163 = -7;

    t163 = (((x717-x718)>x719)^x720);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x721 = INT64_MAX;
	uint64_t x722 = UINT64_MAX;
	static volatile int8_t x723 = INT8_MAX;
	static int64_t t164 = 23397209LL;

    t164 = (((x721-x722)>x723)^x724);

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x725 = 1U;
	volatile int16_t x726 = -1;
	static volatile int32_t t165 = 4279736;

    t165 = (((x725-x726)>x727)^x728);

    if (t165 != 42) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x735 = 0LLU;
	int64_t x736 = -64816LL;
	int64_t t166 = -9998425704LL;

    t166 = (((x733-x734)>x735)^x736);

    if (t166 != -64815LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x737 = 742968348U;
	int16_t x738 = -4;
	volatile int32_t x739 = INT32_MAX;
	int8_t x740 = INT8_MIN;
	int32_t t167 = 902280777;

    t167 = (((x737-x738)>x739)^x740);

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x741 = INT8_MIN;
	int64_t x742 = INT64_MIN;
	volatile uint32_t x744 = 1354U;
	volatile uint32_t t168 = 156U;

    t168 = (((x741-x742)>x743)^x744);

    if (t168 != 1355U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x749 = UINT8_MAX;
	uint32_t x751 = 21038969U;
	static int16_t x752 = INT16_MIN;

    t169 = (((x749-x750)>x751)^x752);

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x753 = UINT16_MAX;
	uint32_t x755 = UINT32_MAX;
	volatile uint32_t x756 = UINT32_MAX;

    t170 = (((x753-x754)>x755)^x756);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x760 = 3U;
	volatile int32_t t171 = -4;

    t171 = (((x757-x758)>x759)^x760);

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x761 = 0U;
	int64_t x764 = 28289090262601LL;

    t172 = (((x761-x762)>x763)^x764);

    if (t172 != 28289090262600LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x765 = -1LL;
	static volatile uint32_t x767 = UINT32_MAX;
	int64_t x768 = -1LL;

    t173 = (((x765-x766)>x767)^x768);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x769 = INT16_MAX;
	int8_t x771 = -1;
	int64_t x772 = 5412538572084742LL;
	volatile int64_t t174 = 3471088201879915LL;

    t174 = (((x769-x770)>x771)^x772);

    if (t174 != 5412538572084743LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x773 = INT32_MIN;
	uint64_t x774 = UINT64_MAX;
	uint64_t t175 = 12574325LLU;

    t175 = (((x773-x774)>x775)^x776);

    if (t175 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x782 = 0;
	int16_t x783 = 8630;
	int64_t t176 = 272906515514LL;

    t176 = (((x781-x782)>x783)^x784);

    if (t176 != -534891427586LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = UINT8_MAX;

    t177 = (((x785-x786)>x787)^x788);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x789 = 2;
	uint64_t x791 = 523273426934641LLU;
	static int64_t x792 = 4224550485419LL;
	volatile int64_t t178 = 0LL;

    t178 = (((x789-x790)>x791)^x792);

    if (t178 != 4224550485419LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x793 = INT32_MAX;
	int64_t x794 = -2LL;
	volatile uint64_t x795 = 85193353646529020LLU;
	volatile int64_t t179 = INT64_MIN;

    t179 = (((x793-x794)>x795)^x796);

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x797 = 57U;
	uint64_t x798 = 529279359044LLU;
	int8_t x799 = -1;
	int16_t x800 = 3;
	int32_t t180 = -4810406;

    t180 = (((x797-x798)>x799)^x800);

    if (t180 != 3) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x801 = -6;
	uint64_t x803 = 6859335LLU;
	static volatile int32_t x804 = -1;

    t181 = (((x801-x802)>x803)^x804);

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x807 = -115003112LL;
	int32_t t182 = 22;

    t182 = (((x805-x806)>x807)^x808);

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x810 = -254217690;
	uint8_t x811 = 60U;
	volatile int64_t t183 = 31796048967LL;

    t183 = (((x809-x810)>x811)^x812);

    if (t183 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x817 = INT16_MIN;
	int32_t x818 = INT32_MIN;
	static int8_t x819 = 14;
	uint64_t x820 = 116073902271109644LLU;
	static volatile uint64_t t184 = 224581174LLU;

    t184 = (((x817-x818)>x819)^x820);

    if (t184 != 116073902271109645LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x825 = 1648LLU;
	uint64_t x827 = 2978LLU;
	int16_t x828 = 13572;
	static int32_t t185 = -53231047;

    t185 = (((x825-x826)>x827)^x828);

    if (t185 != 13572) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x829 = 1;
	volatile int32_t x830 = -8;
	int8_t x831 = -1;
	uint16_t x832 = 26426U;

    t186 = (((x829-x830)>x831)^x832);

    if (t186 != 26427) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x834 = INT8_MAX;
	int32_t x835 = 242554465;
	uint16_t x836 = 1U;
	int32_t t187 = -38587;

    t187 = (((x833-x834)>x835)^x836);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x837 = 526;
	static int16_t x838 = -1;
	static int8_t x839 = INT8_MIN;
	static uint32_t x840 = 119005702U;

    t188 = (((x837-x838)>x839)^x840);

    if (t188 != 119005703U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x841 = 7U;
	static uint32_t x842 = 2U;
	static int16_t x843 = INT16_MAX;

    t189 = (((x841-x842)>x843)^x844);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x845 = 11;
	volatile int8_t x846 = INT8_MAX;
	static int16_t x847 = -1;
	static volatile uint8_t x848 = 8U;
	volatile int32_t t190 = 235;

    t190 = (((x845-x846)>x847)^x848);

    if (t190 != 8) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x849 = 3;
	uint16_t x850 = 47U;
	static int32_t x851 = INT32_MAX;
	static int16_t x852 = INT16_MAX;
	static volatile int32_t t191 = 51;

    t191 = (((x849-x850)>x851)^x852);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x853 = INT32_MAX;
	uint16_t x854 = 2U;
	uint8_t x855 = UINT8_MAX;
	int8_t x856 = -1;

    t192 = (((x853-x854)>x855)^x856);

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x857 = 16261U;
	uint8_t x858 = 1U;
	int64_t x859 = INT64_MAX;
	volatile int32_t t193 = 30036;

    t193 = (((x857-x858)>x859)^x860);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x861 = 14752201LL;
	uint8_t x862 = UINT8_MAX;
	static volatile int32_t t194 = -6070211;

    t194 = (((x861-x862)>x863)^x864);

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x865 = 2U;
	volatile uint32_t x866 = 622657U;
	uint16_t x867 = 5217U;
	int32_t x868 = INT32_MIN;
	int32_t t195 = -14007;

    t195 = (((x865-x866)>x867)^x868);

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x870 = UINT16_MAX;
	static uint16_t x872 = 6056U;
	static volatile int32_t t196 = -194566;

    t196 = (((x869-x870)>x871)^x872);

    if (t196 != 6057) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x873 = UINT8_MAX;
	int32_t x874 = -875458;
	volatile uint8_t x875 = 91U;
	int16_t x876 = 5017;
	volatile int32_t t197 = 221728477;

    t197 = (((x873-x874)>x875)^x876);

    if (t197 != 5016) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x877 = 377;
	int16_t x878 = -1;
	uint8_t x879 = UINT8_MAX;
	int64_t x880 = 2LL;
	static int64_t t198 = -48106361866382LL;

    t198 = (((x877-x878)>x879)^x880);

    if (t198 != 3LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x882 = INT64_MAX;
	int64_t x883 = INT64_MIN;
	int64_t x884 = 4241578205343850LL;
	volatile int64_t t199 = 12467LL;

    t199 = (((x881-x882)>x883)^x884);

    if (t199 != 4241578205343851LL) { NG(); } else { ; }
	
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

