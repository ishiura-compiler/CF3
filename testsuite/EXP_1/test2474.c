
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

uint64_t x1 = 208782678LLU;
uint16_t x8 = UINT16_MAX;
int64_t x11 = INT64_MAX;
uint8_t x12 = 3U;
int32_t t3 = 298397;
static int32_t t4 = 9419;
int16_t x22 = INT16_MAX;
volatile int32_t x30 = INT32_MIN;
static volatile int64_t x36 = 1293LL;
int32_t x40 = INT32_MIN;
int32_t t9 = 494660;
volatile int16_t x41 = INT16_MIN;
static uint8_t x42 = 21U;
static int32_t t10 = -1;
static int8_t x45 = INT8_MAX;
uint64_t x53 = UINT64_MAX;
static uint32_t x54 = 3446U;
int64_t x56 = INT64_MAX;
int32_t t13 = 0;
volatile int32_t t15 = 6;
uint8_t x68 = 8U;
volatile int32_t x71 = 355;
volatile int32_t t17 = 1154020;
int16_t x75 = -1;
uint16_t x77 = 1479U;
uint32_t x80 = 395U;
int16_t x83 = INT16_MAX;
static volatile uint64_t x90 = UINT64_MAX;
volatile int32_t x97 = INT32_MAX;
uint64_t x99 = 6765LLU;
int32_t x101 = -1;
static uint32_t x105 = 31857101U;
uint8_t x108 = 0U;
volatile int32_t t26 = 2896;
volatile int32_t t27 = 292573456;
int8_t x113 = INT8_MAX;
int16_t x119 = INT16_MAX;
int32_t x120 = -4;
int64_t x126 = INT64_MIN;
volatile int32_t t31 = -27131919;
uint16_t x133 = 4839U;
int32_t t33 = -1792;
int16_t x137 = 3400;
volatile int16_t x139 = INT16_MIN;
int16_t x144 = INT16_MIN;
int32_t t35 = -825;
static uint8_t x147 = 78U;
int32_t t36 = 174963633;
uint16_t x150 = UINT16_MAX;
int16_t x151 = -1902;
volatile uint8_t x155 = UINT8_MAX;
int16_t x161 = INT16_MIN;
volatile int16_t x164 = -42;
int32_t x166 = INT32_MIN;
volatile int32_t t41 = -338738;
volatile int32_t t42 = 2401;
uint16_t x175 = 352U;
volatile int32_t t43 = -14380544;
volatile uint32_t x179 = 73U;
int16_t x188 = -1;
uint32_t x194 = UINT32_MAX;
static uint32_t x202 = UINT32_MAX;
volatile int32_t t51 = -101;
volatile uint16_t x211 = 44U;
volatile int32_t t52 = 1961707;
static int8_t x218 = INT8_MIN;
int8_t x221 = -2;
int32_t x222 = -1852;
static uint32_t x231 = UINT32_MAX;
int32_t t58 = -543;
static int16_t x242 = -1612;
int16_t x246 = INT16_MAX;
static uint32_t x248 = 29U;
uint8_t x253 = 1U;
int32_t x256 = INT32_MIN;
volatile int64_t x260 = INT64_MIN;
volatile uint32_t x263 = 130759333U;
uint16_t x273 = UINT16_MAX;
int32_t x274 = INT32_MAX;
int32_t x276 = INT32_MIN;
volatile int32_t t68 = 7;
volatile uint8_t x277 = 9U;
int32_t t69 = 264;
volatile int32_t t70 = -231267;
int64_t x286 = 145868315LL;
int64_t x288 = -1LL;
volatile int32_t t71 = 676108;
static int64_t x289 = -1LL;
int32_t x292 = -1;
int16_t x300 = 1;
uint16_t x308 = UINT16_MAX;
volatile int8_t x311 = INT8_MAX;
static int64_t x314 = INT64_MAX;
int16_t x316 = -751;
static volatile uint8_t x320 = 35U;
static volatile int32_t x335 = -13411;
int64_t x341 = 13LL;
int32_t x346 = INT32_MIN;
int32_t x354 = -1;
static volatile int32_t t90 = 122740;
uint16_t x367 = 424U;
int32_t t92 = -14010;
uint64_t x377 = 1572772LLU;
volatile uint64_t x381 = UINT64_MAX;
volatile uint16_t x384 = 5U;
int32_t x385 = INT32_MAX;
volatile int32_t t96 = 1;
static uint32_t x389 = 13U;
volatile uint8_t x396 = 1U;
volatile int32_t t98 = -482847800;
volatile int32_t t100 = 5695891;
uint16_t x411 = UINT16_MAX;
int16_t x419 = INT16_MIN;
volatile int32_t t104 = -621511304;
uint64_t x421 = 1750463LLU;
int32_t t106 = -100;
static volatile int32_t t109 = 3316400;
uint16_t x443 = 173U;
int16_t x447 = -1;
uint32_t x457 = 221838U;
uint32_t x461 = 527597212U;
uint8_t x463 = UINT8_MAX;
int8_t x464 = -1;
int32_t t115 = 150;
int32_t t116 = -178;
int16_t x469 = -1;
int16_t x480 = -1;
int32_t t121 = -1198992;
static volatile int32_t t122 = -88264;
volatile int32_t t124 = 28550;
volatile uint32_t x503 = 157343U;
int32_t t125 = 124;
static int16_t x508 = 243;
int32_t x510 = 1;
volatile uint16_t x511 = UINT16_MAX;
volatile int32_t t127 = -36189141;
int16_t x514 = -1;
int64_t x516 = -2995739709178611LL;
uint16_t x519 = 507U;
uint16_t x521 = 0U;
int8_t x528 = INT8_MIN;
int32_t t131 = -335;
uint16_t x530 = UINT16_MAX;
int16_t x533 = 1;
uint16_t x534 = 1U;
volatile uint8_t x545 = 4U;
volatile int32_t t136 = -522028682;
int64_t x552 = -1LL;
volatile int32_t t138 = 2;
uint16_t x560 = 1U;
static uint8_t x562 = UINT8_MAX;
uint32_t x567 = 23U;
int32_t t142 = 1518;
static uint16_t x580 = UINT16_MAX;
uint16_t x583 = UINT16_MAX;
static volatile int64_t x588 = 7226668LL;
static int64_t x592 = INT64_MAX;
int64_t x599 = INT64_MAX;
static volatile int32_t t149 = -940682561;
uint16_t x604 = 1U;
static volatile int32_t t150 = -616190601;
uint16_t x606 = UINT16_MAX;
static uint8_t x609 = UINT8_MAX;
static volatile int16_t x620 = INT16_MAX;
volatile int32_t t154 = 16218188;
int8_t x622 = 0;
uint8_t x626 = 5U;
int32_t x632 = -1;
uint16_t x635 = 49U;
int8_t x645 = 25;
static int8_t x647 = INT8_MIN;
int32_t x657 = 5;
static int8_t x660 = INT8_MIN;
uint8_t x663 = UINT8_MAX;
int32_t t165 = -401102113;
static volatile int8_t x665 = -13;
uint32_t x669 = UINT32_MAX;
int32_t t167 = 179130;
int16_t x675 = -816;
int16_t x678 = INT16_MAX;
uint16_t x682 = UINT16_MAX;
int8_t x698 = INT8_MAX;
uint64_t x715 = UINT64_MAX;
static int8_t x719 = INT8_MIN;
uint32_t x722 = 37473438U;
uint16_t x723 = UINT16_MAX;
uint16_t x724 = 21U;
volatile int32_t t180 = -19449;
int32_t x732 = -17517;
int8_t x741 = -1;
volatile int32_t x744 = INT32_MAX;
volatile int32_t t187 = 72301;
uint64_t x756 = 598638LLU;
volatile int32_t t188 = -67;
int16_t x758 = -1;
uint32_t x760 = 22338U;
int8_t x763 = INT8_MIN;
volatile int32_t t192 = 16281;
int32_t x773 = -9;
int8_t x776 = 0;
volatile int16_t x778 = INT16_MAX;
int32_t x780 = -3;
uint16_t x781 = UINT16_MAX;
static uint8_t x786 = 0U;
int64_t x788 = INT64_MIN;
int64_t x791 = 208715716584LL;
int32_t t197 = -2;
int8_t x797 = INT8_MAX;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	static uint32_t x4 = 950U;
	static volatile int32_t t0 = 3078483;

    t0 = (((x1|x2)>x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MAX;
	static volatile int32_t t1 = -5695589;

    t1 = (((x5|x6)>x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int16_t x10 = -73;
	volatile int32_t t2 = -160283;

    t2 = (((x9|x10)>x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 1U;

    t3 = (((x13|x14)>x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 1LLU;
	static volatile uint16_t x20 = UINT16_MAX;

    t4 = (((x17|x18)>x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 11;
	uint16_t x23 = 518U;
	static uint16_t x24 = 3U;
	int32_t t5 = 32710;

    t5 = (((x21|x22)>x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = -7LL;
	static int32_t x27 = INT32_MIN;
	static int32_t x28 = INT32_MIN;
	int32_t t6 = -218;

    t6 = (((x25|x26)>x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = 1931;
	static volatile int32_t x31 = INT32_MAX;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = 3431;

    t7 = (((x29|x30)>x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	static volatile int32_t t8 = -4105;

    t8 = (((x33|x34)>x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 1416U;
	volatile int32_t x38 = -1;
	int16_t x39 = INT16_MIN;

    t9 = (((x37|x38)>x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x43 = 559;
	volatile int64_t x44 = INT64_MIN;

    t10 = (((x41|x42)>x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MAX;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = 22290956;

    t11 = (((x45|x46)>x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -23461;
	int64_t x50 = INT64_MIN;
	static uint64_t x51 = UINT64_MAX;
	static int16_t x52 = 0;
	int32_t t12 = 672784;

    t12 = (((x49|x50)>x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = -1;

    t13 = (((x53|x54)>x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	volatile int32_t x58 = 1566088;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = 11129078877143LL;
	static int32_t t14 = 7;

    t14 = (((x57|x58)>x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	volatile int64_t x62 = INT64_MIN;
	uint8_t x63 = 0U;
	uint8_t x64 = 92U;

    t15 = (((x61|x62)>x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 15717200;
	uint8_t x66 = UINT8_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = 24907;

    t16 = (((x65|x66)>x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	static uint8_t x72 = UINT8_MAX;

    t17 = (((x69|x70)>x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -8132958;
	int8_t x74 = INT8_MIN;
	volatile int8_t x76 = -8;
	static int32_t t18 = 5;

    t18 = (((x73|x74)>x75)<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x78 = -1LL;
	uint64_t x79 = UINT64_MAX;
	int32_t t19 = -435485;

    t19 = (((x77|x78)>x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 5U;
	static uint8_t x82 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = -5467;

    t20 = (((x81|x82)>x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = 41121312U;
	int16_t x88 = -1;
	int32_t t21 = 3661302;

    t21 = (((x85|x86)>x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -5;
	static int8_t x91 = INT8_MIN;
	static int8_t x92 = -1;
	volatile int32_t t22 = -209;

    t22 = (((x89|x90)>x91)<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	static int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 10248440;

    t23 = (((x93|x94)>x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = -6;
	volatile int32_t x100 = -1;
	int32_t t24 = -3352543;

    t24 = (((x97|x98)>x99)<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x102 = INT64_MAX;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 13956;

    t25 = (((x101|x102)>x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x106 = INT8_MAX;
	volatile uint16_t x107 = 27U;

    t26 = (((x105|x106)>x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = -416849802LL;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;

    t27 = (((x109|x110)>x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 2;
	static volatile int32_t t28 = 0;

    t28 = (((x113|x114)>x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MAX;
	volatile int32_t t29 = -283;

    t29 = (((x117|x118)>x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 58;
	static uint64_t x122 = 423726LLU;
	int32_t x123 = -1;
	uint16_t x124 = 3192U;
	int32_t t30 = 37;

    t30 = (((x121|x122)>x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -75446;
	volatile int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MIN;

    t31 = (((x125|x126)>x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 0;
	uint16_t x130 = 125U;
	volatile int32_t x131 = -1;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 214395;

    t32 = (((x129|x130)>x131)<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x134 = 210;
	uint32_t x135 = 1508U;
	int64_t x136 = INT64_MAX;

    t33 = (((x133|x134)>x135)<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x138 = UINT16_MAX;
	int16_t x140 = -1;
	volatile int32_t t34 = -1736;

    t34 = (((x137|x138)>x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	uint8_t x142 = 16U;
	int32_t x143 = 0;

    t35 = (((x141|x142)>x143)<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MIN;
	static int32_t x146 = INT32_MIN;
	static int32_t x148 = INT32_MAX;

    t36 = (((x145|x146)>x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -15068910;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 44231;

    t37 = (((x149|x150)>x151)<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = -1;
	uint16_t x154 = 640U;
	uint32_t x156 = 469U;
	static int32_t t38 = -19;

    t38 = (((x153|x154)>x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	static uint16_t x158 = 153U;
	static uint32_t x159 = 808310U;
	uint16_t x160 = 0U;
	volatile int32_t t39 = 33282201;

    t39 = (((x157|x158)>x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x162 = INT16_MIN;
	static uint64_t x163 = UINT64_MAX;
	volatile int32_t t40 = -183012540;

    t40 = (((x161|x162)>x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -1LL;
	volatile int8_t x167 = 0;
	uint64_t x168 = 321200431450673374LLU;

    t41 = (((x165|x166)>x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = -1LL;
	uint32_t x171 = 54U;
	static int32_t x172 = 218472;

    t42 = (((x169|x170)>x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 916U;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x176 = 2U;

    t43 = (((x173|x174)>x175)<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	static int32_t x178 = INT32_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = 13385083;

    t44 = (((x177|x178)>x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = -1;
	int32_t x182 = -1;
	volatile int64_t x183 = 6744333674827LL;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 12871;

    t45 = (((x181|x182)>x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	static int64_t x186 = 15571207993LL;
	int8_t x187 = 1;
	static int32_t t46 = 3;

    t46 = (((x185|x186)>x187)<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	static int64_t x190 = INT64_MAX;
	static uint8_t x191 = 92U;
	uint32_t x192 = 88U;
	volatile int32_t t47 = -394367;

    t47 = (((x189|x190)>x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 201422LLU;
	volatile uint64_t x195 = 188LLU;
	int8_t x196 = -1;
	volatile int32_t t48 = -955;

    t48 = (((x193|x194)>x195)<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -44467794475425432LL;
	uint32_t x198 = 279045483U;
	int8_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 563870;

    t49 = (((x197|x198)>x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	int16_t x203 = 18;
	int64_t x204 = -1LL;
	static int32_t t50 = -1521229;

    t50 = (((x201|x202)>x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = -1;
	static int64_t x206 = INT64_MIN;
	static uint32_t x207 = 407U;
	static int64_t x208 = INT64_MIN;

    t51 = (((x205|x206)>x207)<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 3900506LLU;
	static uint16_t x210 = 23486U;
	volatile int64_t x212 = -1LL;

    t52 = (((x209|x210)>x211)<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	volatile uint16_t x214 = 1U;
	int16_t x215 = -1;
	int16_t x216 = INT16_MAX;
	static int32_t t53 = -40741;

    t53 = (((x213|x214)>x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int32_t x219 = -1;
	int16_t x220 = -1;
	static int32_t t54 = -30385;

    t54 = (((x217|x218)>x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = INT32_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	int32_t t55 = 3072326;

    t55 = (((x221|x222)>x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	int8_t x226 = 13;
	static uint16_t x227 = 6U;
	int8_t x228 = -1;
	static int32_t t56 = 53661614;

    t56 = (((x225|x226)>x227)<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 22029U;
	static volatile uint64_t x230 = 494751846966LLU;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 25474;

    t57 = (((x229|x230)>x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MIN;
	volatile uint32_t x235 = 5518117U;
	uint16_t x236 = UINT16_MAX;

    t58 = (((x233|x234)>x235)<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -24;
	static int64_t x238 = INT64_MIN;
	volatile uint32_t x239 = 178U;
	static volatile uint32_t x240 = UINT32_MAX;
	static volatile int32_t t59 = -1;

    t59 = (((x237|x238)>x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x241 = 18U;
	volatile int32_t x243 = INT32_MIN;
	int64_t x244 = -2858756954978LL;
	volatile int32_t t60 = 118479;

    t60 = (((x241|x242)>x243)<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 8010;
	uint32_t x247 = 2420U;
	volatile int32_t t61 = -3600;

    t61 = (((x245|x246)>x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	static uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 2U;
	int64_t x252 = INT64_MIN;
	int32_t t62 = 7580;

    t62 = (((x249|x250)>x251)<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x254 = 3;
	uint8_t x255 = 0U;
	volatile int32_t t63 = 1956889;

    t63 = (((x253|x254)>x255)<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 76;
	static int32_t x258 = -832042;
	uint32_t x259 = UINT32_MAX;
	static int32_t t64 = 35;

    t64 = (((x257|x258)>x259)<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 6715045;

    t65 = (((x261|x262)>x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = -1;
	int8_t x266 = INT8_MAX;
	int64_t x267 = INT64_MIN;
	static uint64_t x268 = UINT64_MAX;
	int32_t t66 = -935468493;

    t66 = (((x265|x266)>x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = INT32_MAX;
	int32_t x270 = 75;
	int16_t x271 = -209;
	int32_t x272 = 47;
	volatile int32_t t67 = 228779816;

    t67 = (((x269|x270)>x271)<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x275 = -42;

    t68 = (((x273|x274)>x275)<=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = 142575737770990695LL;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = -270194364865200LL;

    t69 = (((x277|x278)>x279)<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 1;
	static uint16_t x282 = 1U;
	static uint32_t x283 = 1U;
	uint64_t x284 = 12662125029LLU;

    t70 = (((x281|x282)>x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	static uint16_t x287 = 0U;

    t71 = (((x285|x286)>x287)<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 132381185;
	int8_t x291 = INT8_MIN;
	volatile int32_t t72 = 45069;

    t72 = (((x289|x290)>x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = 2200;
	int32_t x294 = INT32_MIN;
	uint64_t x295 = 7231549708LLU;
	volatile int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -200;

    t73 = (((x293|x294)>x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -6469914475604422LL;
	int32_t x298 = INT32_MAX;
	int64_t x299 = INT64_MIN;
	volatile int32_t t74 = 43;

    t74 = (((x297|x298)>x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = 93661752;
	volatile int32_t t75 = -17700;

    t75 = (((x301|x302)>x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 21171LLU;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = -3;
	static volatile int32_t t76 = -19766618;

    t76 = (((x305|x306)>x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MIN;
	volatile int64_t x310 = INT64_MIN;
	int16_t x312 = -10862;
	volatile int32_t t77 = 124896231;

    t77 = (((x309|x310)>x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint8_t x315 = 14U;
	int32_t t78 = 8;

    t78 = (((x313|x314)>x315)<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MAX;
	static uint16_t x318 = UINT16_MAX;
	volatile int32_t x319 = 985;
	int32_t t79 = 62846177;

    t79 = (((x317|x318)>x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 80598447573564146LLU;
	int16_t x322 = 267;
	static uint8_t x323 = UINT8_MAX;
	uint16_t x324 = 9480U;
	static int32_t t80 = 21;

    t80 = (((x321|x322)>x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -1;
	volatile uint16_t x326 = 7U;
	static int64_t x327 = -1LL;
	volatile int16_t x328 = INT16_MAX;
	int32_t t81 = -1;

    t81 = (((x325|x326)>x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -274569;

    t82 = (((x329|x330)>x331)<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	volatile int8_t x334 = INT8_MAX;
	volatile int64_t x336 = INT64_MIN;
	int32_t t83 = -519217;

    t83 = (((x333|x334)>x335)<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	int16_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -24765;

    t84 = (((x337|x338)>x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x342 = 7090165192LL;
	volatile uint64_t x343 = 1560LLU;
	uint32_t x344 = 912U;
	volatile int32_t t85 = 26964;

    t85 = (((x341|x342)>x343)<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 1885;
	int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MIN;
	int32_t t86 = -43;

    t86 = (((x345|x346)>x347)<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 9203LLU;
	static int8_t x350 = -1;
	volatile int64_t x351 = -2LL;
	int32_t x352 = -1;
	volatile int32_t t87 = 4;

    t87 = (((x349|x350)>x351)<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	int16_t x355 = INT16_MIN;
	int16_t x356 = -1;
	int32_t t88 = -148351814;

    t88 = (((x353|x354)>x355)<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = INT8_MIN;
	static uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = 80;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 622;

    t89 = (((x357|x358)>x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = -9;
	static volatile int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MAX;
	volatile uint16_t x364 = UINT16_MAX;

    t90 = (((x361|x362)>x363)<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int16_t x366 = 0;
	static volatile int8_t x368 = INT8_MIN;
	int32_t t91 = 92;

    t91 = (((x365|x366)>x367)<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = INT8_MAX;
	uint64_t x370 = 66443200534214LLU;
	static int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MAX;

    t92 = (((x369|x370)>x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = INT8_MAX;
	static int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = 2LL;
	int32_t t93 = -1007071948;

    t93 = (((x373|x374)>x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 15U;
	volatile int32_t t94 = 22497;

    t94 = (((x377|x378)>x379)<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x382 = UINT16_MAX;
	static volatile int64_t x383 = INT64_MAX;
	static volatile int32_t t95 = 99216;

    t95 = (((x381|x382)>x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x386 = 1U;
	uint32_t x387 = UINT32_MAX;
	static int8_t x388 = INT8_MAX;

    t96 = (((x385|x386)>x387)<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = INT8_MAX;
	static volatile int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -52435067;

    t97 = (((x389|x390)>x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 4U;
	static int16_t x394 = -14;
	int32_t x395 = INT32_MIN;

    t98 = (((x393|x394)>x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	uint16_t x398 = 14017U;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = -1;
	volatile int32_t t99 = -25324423;

    t99 = (((x397|x398)>x399)<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = -53;
	uint32_t x402 = 200970U;
	int64_t x403 = INT64_MIN;
	uint64_t x404 = 4888418324605661LLU;

    t100 = (((x401|x402)>x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x406 = -1093913LL;
	int32_t x407 = INT32_MAX;
	static uint8_t x408 = 26U;
	int32_t t101 = 20319;

    t101 = (((x405|x406)>x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	volatile int16_t x410 = INT16_MIN;
	int64_t x412 = -1LL;
	int32_t t102 = -31370;

    t102 = (((x409|x410)>x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	volatile int8_t x414 = INT8_MAX;
	volatile int32_t x415 = INT32_MIN;
	static volatile int16_t x416 = INT16_MAX;
	volatile int32_t t103 = 507024505;

    t103 = (((x413|x414)>x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	static int16_t x418 = INT16_MAX;
	static int8_t x420 = -29;

    t104 = (((x417|x418)>x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;
	int32_t t105 = -3;

    t105 = (((x421|x422)>x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = -1;
	volatile int8_t x427 = 5;
	int16_t x428 = -1;

    t106 = (((x425|x426)>x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -55;
	static int64_t x430 = 3786993873LL;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 25U;
	static int32_t t107 = 2;

    t107 = (((x429|x430)>x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	static volatile int8_t x434 = INT8_MIN;
	static int32_t x435 = -1;
	uint32_t x436 = UINT32_MAX;
	static int32_t t108 = 5860;

    t108 = (((x433|x434)>x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x437 = 19U;
	int32_t x438 = INT32_MIN;
	int64_t x439 = -1LL;
	int8_t x440 = INT8_MIN;

    t109 = (((x437|x438)>x439)<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = 108U;
	int8_t x442 = INT8_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t110 = 15899;

    t110 = (((x441|x442)>x443)<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int8_t x446 = INT8_MAX;
	volatile int16_t x448 = INT16_MAX;
	int32_t t111 = 1719528;

    t111 = (((x445|x446)>x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = 0U;
	uint64_t x450 = 30031370623223237LLU;
	int16_t x451 = INT16_MAX;
	volatile int64_t x452 = INT64_MIN;
	int32_t t112 = 21130538;

    t112 = (((x449|x450)>x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = 859;
	volatile int8_t x454 = 1;
	int32_t x455 = -1;
	int32_t x456 = INT32_MIN;
	volatile int32_t t113 = -16195113;

    t113 = (((x453|x454)>x455)<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x458 = INT16_MIN;
	uint32_t x459 = 71744865U;
	int16_t x460 = INT16_MIN;
	static int32_t t114 = -70594102;

    t114 = (((x457|x458)>x459)<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x462 = UINT8_MAX;

    t115 = (((x461|x462)>x463)<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int8_t x466 = INT8_MIN;
	int32_t x467 = 16130157;
	int8_t x468 = -39;

    t116 = (((x465|x466)>x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = INT64_MIN;
	volatile uint32_t x471 = 0U;
	uint32_t x472 = 2080215740U;
	volatile int32_t t117 = 399696;

    t117 = (((x469|x470)>x471)<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 1;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = -1;
	uint32_t x476 = 306763586U;
	int32_t t118 = -239;

    t118 = (((x473|x474)>x475)<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = 3782U;
	uint8_t x478 = 23U;
	volatile int32_t x479 = INT32_MIN;
	volatile int32_t t119 = 510;

    t119 = (((x477|x478)>x479)<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 499162824790LLU;
	static uint32_t x482 = 108855898U;
	uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -139502007;

    t120 = (((x481|x482)>x483)<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = 31U;
	int64_t x486 = -1LL;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;

    t121 = (((x485|x486)>x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 3266U;
	static int8_t x490 = INT8_MIN;
	int8_t x491 = -1;
	int8_t x492 = INT8_MIN;

    t122 = (((x489|x490)>x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 3674525317105059496LLU;
	uint64_t x494 = UINT64_MAX;
	int32_t x495 = 0;
	int16_t x496 = -1;
	volatile int32_t t123 = -172565;

    t123 = (((x493|x494)>x495)<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -1LL;
	int64_t x498 = INT64_MIN;
	int8_t x499 = -1;
	static uint16_t x500 = 36U;

    t124 = (((x497|x498)>x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = 1;
	int16_t x502 = -1767;
	int64_t x504 = -1225839296027879976LL;

    t125 = (((x501|x502)>x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 384LL;
	volatile int32_t x506 = 217248981;
	int32_t x507 = 0;
	static int32_t t126 = 13157113;

    t126 = (((x505|x506)>x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	uint32_t x512 = UINT32_MAX;

    t127 = (((x509|x510)>x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	int32_t x515 = -1;
	int32_t t128 = -860395882;

    t128 = (((x513|x514)>x515)<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	static volatile uint8_t x518 = 3U;
	int32_t x520 = -1;
	volatile int32_t t129 = -6;

    t129 = (((x517|x518)>x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	static uint8_t x523 = 12U;
	int64_t x524 = -8936627762552LL;
	int32_t t130 = -458886007;

    t130 = (((x521|x522)>x523)<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MAX;
	static int64_t x526 = INT64_MAX;
	int16_t x527 = INT16_MIN;

    t131 = (((x525|x526)>x527)<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x529 = 208U;
	uint16_t x531 = 5134U;
	static uint16_t x532 = 296U;
	int32_t t132 = -9;

    t132 = (((x529|x530)>x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x535 = 3404060U;
	int16_t x536 = -1;
	static volatile int32_t t133 = -3793747;

    t133 = (((x533|x534)>x535)<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x538 = -130;
	int8_t x539 = 52;
	int32_t x540 = INT32_MAX;
	volatile int32_t t134 = -11;

    t134 = (((x537|x538)>x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 3U;
	static volatile int32_t x542 = INT32_MIN;
	int32_t x543 = INT32_MIN;
	volatile int16_t x544 = 1927;
	int32_t t135 = 1;

    t135 = (((x541|x542)>x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x546 = UINT16_MAX;
	uint32_t x547 = 1U;
	static int16_t x548 = INT16_MIN;

    t136 = (((x545|x546)>x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	volatile int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MIN;
	static int32_t t137 = 172;

    t137 = (((x549|x550)>x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	int64_t x554 = -30404911013989LL;
	int64_t x555 = INT64_MIN;
	int64_t x556 = INT64_MIN;

    t138 = (((x553|x554)>x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	volatile int16_t x558 = 3;
	int32_t x559 = -14401840;
	volatile int32_t t139 = -109;

    t139 = (((x557|x558)>x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -32;
	uint32_t x563 = 194159U;
	int8_t x564 = -18;
	static int32_t t140 = -676332174;

    t140 = (((x561|x562)>x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	static int64_t x566 = 41801448497634048LL;
	int16_t x568 = 18;
	volatile int32_t t141 = -71;

    t141 = (((x565|x566)>x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = 1U;
	volatile int32_t x570 = -97082603;
	int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MIN;

    t142 = (((x569|x570)>x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	static volatile int8_t x574 = -4;
	int32_t x575 = 150899;
	static int64_t x576 = INT64_MAX;
	static volatile int32_t t143 = 12672425;

    t143 = (((x573|x574)>x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = INT64_MIN;
	int64_t x578 = 11172518624LL;
	volatile int16_t x579 = -35;
	int32_t t144 = -254629380;

    t144 = (((x577|x578)>x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 9U;
	volatile int32_t x582 = 3;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = -4;

    t145 = (((x581|x582)>x583)<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	uint64_t x586 = 15451287LLU;
	int64_t x587 = INT64_MIN;
	int32_t t146 = -337;

    t146 = (((x585|x586)>x587)<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = -16022;
	int16_t x590 = 5695;
	volatile int64_t x591 = INT64_MIN;
	static int32_t t147 = 5;

    t147 = (((x589|x590)>x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 1;
	int64_t x594 = INT64_MIN;
	volatile uint32_t x595 = 510598932U;
	static uint32_t x596 = UINT32_MAX;
	int32_t t148 = -44625;

    t148 = (((x593|x594)>x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = 1132064395814580683LL;
	static int16_t x598 = 1;
	uint8_t x600 = 8U;

    t149 = (((x597|x598)>x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = 814;
	int32_t x602 = 15906;
	int8_t x603 = INT8_MIN;

    t150 = (((x601|x602)>x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = 68;
	int8_t x607 = -1;
	static int64_t x608 = INT64_MAX;
	volatile int32_t t151 = -445604;

    t151 = (((x605|x606)>x607)<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MIN;
	uint32_t x612 = 15U;
	static int32_t t152 = -135643444;

    t152 = (((x609|x610)>x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 1516U;
	int64_t x614 = INT64_MIN;
	int64_t x615 = -1LL;
	static volatile int16_t x616 = -1;
	volatile int32_t t153 = -616851959;

    t153 = (((x613|x614)>x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int8_t x618 = INT8_MIN;
	uint8_t x619 = 14U;

    t154 = (((x617|x618)>x619)<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	uint8_t x623 = 35U;
	int8_t x624 = INT8_MAX;
	static volatile int32_t t155 = -1;

    t155 = (((x621|x622)>x623)<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x625 = UINT8_MAX;
	uint64_t x627 = 2897675877265279LLU;
	uint16_t x628 = 886U;
	static int32_t t156 = -10;

    t156 = (((x625|x626)>x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x629 = UINT16_MAX;
	uint8_t x630 = 1U;
	uint32_t x631 = UINT32_MAX;
	int32_t t157 = 2;

    t157 = (((x629|x630)>x631)<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -766187545052860655LL;
	uint64_t x634 = 11699967001568228LLU;
	static int32_t x636 = -1;
	int32_t t158 = 105711999;

    t158 = (((x633|x634)>x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -7;
	static uint32_t x638 = 25U;
	uint64_t x639 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	int32_t t159 = 1;

    t159 = (((x637|x638)>x639)<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 108334741573076LLU;
	uint64_t x642 = 1635271LLU;
	static int32_t x643 = -478451;
	int64_t x644 = -103LL;
	static volatile int32_t t160 = -221;

    t160 = (((x641|x642)>x643)<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = 2319;
	int8_t x648 = INT8_MIN;
	static int32_t t161 = -1808;

    t161 = (((x645|x646)>x647)<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	uint16_t x650 = 17U;
	uint64_t x651 = 23701964751651912LLU;
	uint16_t x652 = 2U;
	int32_t t162 = 319047;

    t162 = (((x649|x650)>x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MIN;
	int32_t x654 = INT32_MIN;
	static uint32_t x655 = 3685518U;
	int16_t x656 = 189;
	volatile int32_t t163 = -12586379;

    t163 = (((x653|x654)>x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x658 = 7U;
	uint64_t x659 = UINT64_MAX;
	static volatile int32_t t164 = 962;

    t164 = (((x657|x658)>x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	uint32_t x662 = UINT32_MAX;
	int32_t x664 = 136;

    t165 = (((x661|x662)>x663)<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	uint32_t x667 = 4U;
	int64_t x668 = 1LL;
	int32_t t166 = -6097;

    t166 = (((x665|x666)>x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = 656583U;
	int8_t x671 = -1;
	int64_t x672 = INT64_MIN;

    t167 = (((x669|x670)>x671)<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	uint8_t x674 = 7U;
	uint32_t x676 = 1973762U;
	int32_t t168 = -674;

    t168 = (((x673|x674)>x675)<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 3U;
	static volatile int16_t x679 = -1;
	uint16_t x680 = UINT16_MAX;
	volatile int32_t t169 = 64465;

    t169 = (((x677|x678)>x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	int64_t x683 = INT64_MIN;
	uint16_t x684 = 0U;
	static volatile int32_t t170 = 22174;

    t170 = (((x681|x682)>x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 7089U;
	int32_t x686 = 60;
	static uint8_t x687 = UINT8_MAX;
	volatile int64_t x688 = INT64_MIN;
	volatile int32_t t171 = -8342635;

    t171 = (((x685|x686)>x687)<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x689 = INT64_MAX;
	uint16_t x690 = 4U;
	int8_t x691 = -1;
	static volatile int16_t x692 = INT16_MIN;
	int32_t t172 = -338363;

    t172 = (((x689|x690)>x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 60U;
	int16_t x694 = INT16_MIN;
	uint64_t x695 = 3146382LLU;
	uint64_t x696 = UINT64_MAX;
	static volatile int32_t t173 = -12;

    t173 = (((x693|x694)>x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -2;
	int64_t x699 = INT64_MIN;
	int64_t x700 = INT64_MIN;
	volatile int32_t t174 = -5;

    t174 = (((x697|x698)>x699)<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x702 = UINT32_MAX;
	volatile uint16_t x703 = UINT16_MAX;
	int8_t x704 = INT8_MAX;
	static volatile int32_t t175 = 23;

    t175 = (((x701|x702)>x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	uint16_t x706 = UINT16_MAX;
	static uint32_t x707 = 25672943U;
	uint8_t x708 = 0U;
	volatile int32_t t176 = -125;

    t176 = (((x705|x706)>x707)<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = 0U;
	int64_t x710 = -1LL;
	int32_t x711 = -1;
	int8_t x712 = INT8_MAX;
	volatile int32_t t177 = -10;

    t177 = (((x709|x710)>x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 94U;
	int16_t x714 = -465;
	int64_t x716 = INT64_MIN;
	static int32_t t178 = -240928416;

    t178 = (((x713|x714)>x715)<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 122786LLU;
	int64_t x718 = INT64_MIN;
	int8_t x720 = INT8_MIN;
	volatile int32_t t179 = -6896;

    t179 = (((x717|x718)>x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = -1;

    t180 = (((x721|x722)>x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = -1;
	int64_t x726 = -116028798436089043LL;
	static volatile int8_t x727 = INT8_MIN;
	volatile int16_t x728 = -34;
	int32_t t181 = -30328424;

    t181 = (((x725|x726)>x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1131694;
	uint16_t x730 = 151U;
	uint16_t x731 = UINT16_MAX;
	volatile int32_t t182 = 1081;

    t182 = (((x729|x730)>x731)<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MIN;
	static int32_t x734 = -937860326;
	static uint16_t x735 = 15U;
	int8_t x736 = INT8_MAX;
	static int32_t t183 = -2772132;

    t183 = (((x733|x734)>x735)<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	uint32_t x738 = 23117U;
	int64_t x739 = INT64_MIN;
	volatile int64_t x740 = -74389447887LL;
	volatile int32_t t184 = -90;

    t184 = (((x737|x738)>x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x742 = UINT16_MAX;
	int8_t x743 = INT8_MIN;
	int32_t t185 = -20;

    t185 = (((x741|x742)>x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = -872;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = INT64_MIN;
	static volatile int64_t x748 = INT64_MIN;
	int32_t t186 = 55;

    t186 = (((x745|x746)>x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	uint8_t x750 = 83U;
	uint8_t x751 = 2U;
	static volatile uint16_t x752 = 1U;

    t187 = (((x749|x750)>x751)<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 45U;
	int16_t x754 = -27;
	int64_t x755 = 0LL;

    t188 = (((x753|x754)>x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = 0;
	int8_t x759 = -1;
	int32_t t189 = 57;

    t189 = (((x757|x758)>x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MAX;
	volatile int32_t x764 = INT32_MIN;
	static volatile int32_t t190 = 56;

    t190 = (((x761|x762)>x763)<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -216366517094552034LL;
	static int8_t x766 = -1;
	static int64_t x767 = INT64_MAX;
	uint8_t x768 = 13U;
	int32_t t191 = 290;

    t191 = (((x765|x766)>x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 1U;
	static int32_t x770 = 2;
	int64_t x771 = INT64_MAX;
	int8_t x772 = INT8_MAX;

    t192 = (((x769|x770)>x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = INT64_MIN;
	volatile int8_t x775 = -1;
	static volatile int32_t t193 = 226;

    t193 = (((x773|x774)>x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MIN;
	static int64_t x779 = INT64_MIN;
	volatile int32_t t194 = 168314860;

    t194 = (((x777|x778)>x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = 39208094LL;
	volatile int32_t x783 = INT32_MIN;
	static volatile int8_t x784 = INT8_MAX;
	int32_t t195 = -34007;

    t195 = (((x781|x782)>x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -1;
	int32_t x787 = 1;
	volatile int32_t t196 = 891;

    t196 = (((x785|x786)>x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = -1407;
	volatile uint32_t x790 = UINT32_MAX;
	volatile uint16_t x792 = 273U;

    t197 = (((x789|x790)>x791)<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x794 = INT64_MAX;
	int8_t x795 = INT8_MAX;
	int16_t x796 = INT16_MAX;
	int32_t t198 = 80360449;

    t198 = (((x793|x794)>x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x798 = 657526U;
	volatile uint32_t x799 = 4027988U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 1;

    t199 = (((x797|x798)>x799)<=x800);

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

