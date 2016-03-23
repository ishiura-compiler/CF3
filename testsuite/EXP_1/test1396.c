
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

volatile uint16_t x11 = 11723U;
volatile int32_t x13 = INT32_MIN;
int16_t x43 = 28;
volatile int16_t x47 = INT16_MIN;
volatile uint8_t x48 = 3U;
volatile uint8_t x49 = 33U;
volatile uint16_t x54 = 0U;
int16_t x56 = 700;
int64_t x59 = -398238528LL;
int16_t x63 = -5;
static volatile int64_t x65 = INT64_MIN;
int16_t x66 = -1;
static volatile int32_t t14 = 1;
static uint8_t x70 = UINT8_MAX;
volatile int32_t t15 = -671274;
volatile int8_t x74 = INT8_MIN;
int64_t x75 = 38133711LL;
uint16_t x76 = 253U;
uint16_t x81 = 84U;
volatile int32_t x86 = INT32_MIN;
int32_t t21 = -2010;
volatile uint16_t x105 = 1173U;
volatile int32_t t24 = 45570641;
volatile uint32_t x112 = 55013U;
volatile uint8_t x113 = 6U;
uint8_t x120 = 1U;
int32_t t27 = -212;
static int8_t x121 = -1;
int32_t x132 = 109;
static int16_t x134 = INT16_MIN;
volatile int32_t t31 = 177;
uint32_t x141 = 6741723U;
volatile int16_t x144 = 568;
static volatile int64_t x145 = INT64_MIN;
uint64_t x152 = UINT64_MAX;
int8_t x154 = INT8_MAX;
int64_t x155 = -1LL;
int16_t x165 = INT16_MAX;
int16_t x167 = INT16_MAX;
volatile int32_t t39 = -12999915;
volatile int32_t t40 = 6535088;
volatile uint32_t x183 = 2340U;
volatile int32_t t43 = -129814;
volatile int32_t t44 = 508283;
volatile int32_t t46 = -3;
static int16_t x202 = 865;
int32_t t51 = 799553518;
uint8_t x221 = 3U;
static volatile int64_t x226 = INT64_MIN;
int64_t x231 = -1949LL;
int32_t x240 = 110531561;
uint16_t x242 = UINT16_MAX;
volatile uint16_t x243 = 48U;
uint8_t x260 = 3U;
static int8_t x263 = INT8_MAX;
int64_t x265 = INT64_MIN;
int64_t x270 = -1LL;
int32_t x272 = INT32_MAX;
int32_t x273 = INT32_MIN;
volatile int32_t t65 = 137707;
int16_t x287 = -1;
int32_t t66 = -825321015;
int64_t x291 = INT64_MAX;
int8_t x295 = -10;
int64_t x296 = -46817727LL;
int32_t x303 = 2045709;
uint16_t x304 = 69U;
int16_t x308 = -1;
static int32_t x314 = -423188634;
uint16_t x322 = 4962U;
int32_t x325 = -1;
volatile int32_t x328 = -386;
static int32_t t76 = 565387;
int8_t x345 = INT8_MAX;
int8_t x362 = INT8_MAX;
uint8_t x364 = UINT8_MAX;
int32_t t82 = -12088;
uint32_t x368 = 1477184U;
int32_t t83 = 255;
uint16_t x370 = UINT16_MAX;
static uint8_t x386 = 2U;
int32_t t89 = 2;
static int8_t x401 = -1;
uint8_t x402 = UINT8_MAX;
volatile int32_t t91 = 381;
uint8_t x408 = UINT8_MAX;
volatile int32_t t93 = -1365974;
int8_t x414 = -1;
static uint16_t x416 = 29615U;
int16_t x422 = -1;
volatile uint32_t x423 = 1471153U;
int32_t x424 = INT32_MAX;
static int16_t x428 = INT16_MIN;
volatile int32_t t99 = -53;
volatile int64_t x442 = INT64_MIN;
volatile int32_t x453 = INT32_MIN;
int64_t x454 = INT64_MIN;
int8_t x455 = INT8_MIN;
volatile uint8_t x456 = 27U;
volatile int32_t t103 = 1;
volatile int8_t x463 = INT8_MAX;
static int16_t x468 = 33;
volatile int8_t x471 = INT8_MIN;
int32_t t107 = -64;
int16_t x474 = 6;
uint32_t x479 = 700U;
volatile int32_t t111 = 252007;
int8_t x492 = INT8_MIN;
int8_t x498 = INT8_MAX;
static int8_t x502 = INT8_MAX;
int32_t x507 = 15290188;
volatile int32_t t116 = -44681868;
int16_t x511 = INT16_MAX;
uint64_t x512 = 491370LLU;
static int16_t x513 = -1;
volatile int32_t t118 = -4753617;
uint64_t x518 = UINT64_MAX;
volatile int8_t x519 = -15;
int64_t x520 = INT64_MIN;
static uint8_t x524 = UINT8_MAX;
volatile int32_t t120 = -114639657;
volatile int64_t x527 = INT64_MAX;
uint16_t x537 = UINT16_MAX;
static int32_t t123 = -1;
static volatile int8_t x552 = -1;
int8_t x555 = -1;
int16_t x556 = INT16_MIN;
uint32_t x557 = 25469U;
volatile int16_t x566 = 930;
int32_t x568 = -1;
int8_t x573 = -1;
int32_t x574 = INT32_MIN;
static int32_t t130 = 3430;
static volatile int32_t t131 = 3472570;
static int16_t x588 = -1;
volatile uint64_t x589 = 227LLU;
static uint64_t x591 = 484942484979875LLU;
int8_t x594 = INT8_MIN;
volatile int32_t t135 = -3599;
int64_t x597 = INT64_MAX;
static int16_t x606 = -1088;
uint8_t x612 = 3U;
volatile int32_t x613 = 2535;
int32_t x615 = 15278;
int32_t x618 = INT32_MIN;
uint64_t x623 = UINT64_MAX;
int16_t x631 = -24;
int8_t x635 = -1;
int64_t x642 = INT64_MIN;
static volatile int32_t t149 = -82;
volatile int32_t t150 = -49306845;
uint32_t x659 = 1921U;
static uint64_t x663 = UINT64_MAX;
int32_t x666 = INT32_MAX;
volatile int32_t t153 = -728957;
volatile int32_t t155 = -4299930;
static volatile int32_t x677 = INT32_MIN;
static volatile int16_t x689 = INT16_MIN;
uint8_t x693 = 7U;
uint64_t x695 = 1LLU;
static int32_t t160 = 1;
static int32_t x700 = INT32_MIN;
volatile int64_t x703 = INT64_MAX;
static uint64_t x705 = 12632650232LLU;
int32_t x706 = -3243891;
static volatile int64_t x707 = -3208LL;
int32_t t164 = 26;
int64_t x713 = INT64_MIN;
volatile int32_t t165 = -1;
volatile int16_t x719 = -1704;
static int8_t x728 = INT8_MIN;
int8_t x732 = -1;
static uint16_t x734 = 968U;
volatile int32_t x739 = INT32_MAX;
int64_t x740 = INT64_MIN;
static volatile int32_t t171 = -2;
int16_t x742 = INT16_MIN;
volatile int8_t x743 = -1;
uint64_t x763 = UINT64_MAX;
int64_t x769 = -50348LL;
int8_t x771 = 5;
int8_t x787 = INT8_MAX;
int64_t x791 = -363062669584052LL;
int16_t x792 = INT16_MAX;
uint8_t x794 = 0U;
volatile int64_t x796 = 4680278195LL;
int64_t x801 = -1LL;
uint32_t x806 = 570373U;
int32_t t184 = 10;
uint32_t x812 = 59524U;
int32_t x813 = -1;
uint8_t x816 = 9U;
volatile int8_t x824 = INT8_MIN;
static uint64_t x827 = UINT64_MAX;
static volatile int32_t t189 = 673;
uint8_t x838 = 0U;
int64_t x846 = INT64_MIN;
uint16_t x848 = UINT16_MAX;
int32_t x850 = INT32_MAX;
int8_t x858 = INT8_MAX;
int8_t x863 = INT8_MIN;
int32_t t197 = -11;
volatile int64_t x870 = -7096672LL;
static int64_t x873 = -1LL;
int64_t x875 = -1LL;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	uint8_t x6 = 45U;
	uint64_t x7 = 4LLU;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t0 = 139;

    t0 = (((x5==x6)-x7)<=x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	int32_t x10 = 485789;
	static uint16_t x12 = 371U;
	int32_t t1 = -266618546;

    t1 = (((x9==x10)-x11)<=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x14 = -726;
	static int32_t x15 = -29263;
	uint64_t x16 = 2LLU;
	volatile int32_t t2 = -30078893;

    t2 = (((x13==x14)-x15)<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -8328;
	volatile int32_t x18 = -1;
	static int8_t x19 = 0;
	volatile uint32_t x20 = 1704U;
	static int32_t t3 = 1;

    t3 = (((x17==x18)-x19)<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int32_t x22 = -1;
	static uint8_t x23 = 32U;
	volatile uint8_t x24 = UINT8_MAX;
	int32_t t4 = 1432296;

    t4 = (((x21==x22)-x23)<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = INT16_MIN;
	static uint16_t x26 = UINT16_MAX;
	volatile int8_t x27 = -4;
	volatile int64_t x28 = INT64_MIN;
	static volatile int32_t t5 = -672461603;

    t5 = (((x25==x26)-x27)<=x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MAX;
	volatile int16_t x31 = INT16_MAX;
	int16_t x32 = -1;
	static int32_t t6 = 8345353;

    t6 = (((x29==x30)-x31)<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 0;
	uint64_t x38 = UINT64_MAX;
	static volatile int16_t x39 = INT16_MIN;
	static volatile uint32_t x40 = 28919U;
	int32_t t7 = 630327842;

    t7 = (((x37==x38)-x39)<=x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x41 = INT32_MAX;
	int16_t x42 = 685;
	static volatile int32_t x44 = INT32_MIN;
	int32_t t8 = 176887177;

    t8 = (((x41==x42)-x43)<=x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 6;
	int32_t x46 = INT32_MIN;
	int32_t t9 = -51;

    t9 = (((x45==x46)-x47)<=x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile uint32_t x52 = 706720359U;
	static volatile int32_t t10 = 2;

    t10 = (((x49==x50)-x51)<=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x55 = -6699;
	int32_t t11 = 1133;

    t11 = (((x53==x54)-x55)<=x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 6417837540LL;
	int64_t x58 = INT64_MIN;
	volatile int64_t x60 = INT64_MAX;
	int32_t t12 = -5413;

    t12 = (((x57==x58)-x59)<=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = 484;
	int32_t x62 = -1;
	int8_t x64 = 0;
	volatile int32_t t13 = 33464;

    t13 = (((x61==x62)-x63)<=x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MAX;

    t14 = (((x65==x66)-x67)<=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 16117390036LLU;
	static int8_t x71 = INT8_MIN;
	volatile uint64_t x72 = UINT64_MAX;

    t15 = (((x69==x70)-x71)<=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 1U;
	volatile int32_t t16 = 925186;

    t16 = (((x73==x74)-x75)<=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -286547;
	static volatile uint8_t x80 = UINT8_MAX;
	static volatile int32_t t17 = -1648953;

    t17 = (((x77==x78)-x79)<=x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MAX;
	int32_t t18 = -81131425;

    t18 = (((x81==x82)-x83)<=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x85 = 5087U;
	volatile uint16_t x87 = 2U;
	static int32_t x88 = INT32_MIN;
	volatile int32_t t19 = -12;

    t19 = (((x85==x86)-x87)<=x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 0;
	uint32_t x90 = 3U;
	uint8_t x91 = 3U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t20 = -108213588;

    t20 = (((x89==x90)-x91)<=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x93 = 9749U;
	int32_t x94 = -1;
	volatile uint32_t x95 = UINT32_MAX;
	static uint64_t x96 = 8755626623414246LLU;

    t21 = (((x93==x94)-x95)<=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 0U;
	int8_t x98 = 0;
	int64_t x99 = -1LL;
	static uint8_t x100 = 0U;
	static int32_t t22 = -29446;

    t22 = (((x97==x98)-x99)<=x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x101 = INT16_MAX;
	uint64_t x102 = 95729634927155LLU;
	int64_t x103 = INT64_MAX;
	volatile int16_t x104 = 14;
	int32_t t23 = 457529226;

    t23 = (((x101==x102)-x103)<=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x106 = INT64_MIN;
	uint64_t x107 = 64714LLU;
	volatile uint16_t x108 = 3U;

    t24 = (((x105==x106)-x107)<=x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -167004;
	static int8_t x110 = INT8_MIN;
	uint64_t x111 = 553997733635LLU;
	volatile int32_t t25 = 72;

    t25 = (((x109==x110)-x111)<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x114 = 10419U;
	int8_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t26 = -219125;

    t26 = (((x113==x114)-x115)<=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x117 = 1431582U;
	static uint64_t x118 = UINT64_MAX;
	static int32_t x119 = -1;

    t27 = (((x117==x118)-x119)<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x122 = -1;
	int32_t x123 = -1;
	static uint8_t x124 = UINT8_MAX;
	int32_t t28 = -1012002;

    t28 = (((x121==x122)-x123)<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 15U;
	volatile int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	int32_t t29 = 558643774;

    t29 = (((x129==x130)-x131)<=x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x133 = UINT16_MAX;
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = 526998360382554LL;
	volatile int32_t t30 = -262;

    t30 = (((x133==x134)-x135)<=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 15U;
	static int64_t x138 = INT64_MIN;
	int16_t x139 = 796;
	uint8_t x140 = UINT8_MAX;

    t31 = (((x137==x138)-x139)<=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x142 = 7373526LLU;
	int64_t x143 = -1LL;
	static volatile int32_t t32 = -5213;

    t32 = (((x141==x142)-x143)<=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x146 = 105U;
	static int16_t x147 = INT16_MIN;
	static int16_t x148 = -5931;
	volatile int32_t t33 = -256;

    t33 = (((x145==x146)-x147)<=x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = -1;
	int8_t x150 = -1;
	int8_t x151 = INT8_MAX;
	int32_t t34 = 1;

    t34 = (((x149==x150)-x151)<=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x153 = -1;
	uint32_t x156 = 3U;
	volatile int32_t t35 = -38;

    t35 = (((x153==x154)-x155)<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	static int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	int32_t t36 = -283769;

    t36 = (((x157==x158)-x159)<=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -1692904;
	uint32_t x162 = 2005990981U;
	volatile int8_t x163 = 1;
	int8_t x164 = -1;
	volatile int32_t t37 = -24799;

    t37 = (((x161==x162)-x163)<=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x166 = INT8_MIN;
	static int64_t x168 = -1LL;
	int32_t t38 = 96903360;

    t38 = (((x165==x166)-x167)<=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = -23;
	volatile uint16_t x172 = UINT16_MAX;

    t39 = (((x169==x170)-x171)<=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = 1;
	int32_t x174 = -1;
	volatile uint64_t x175 = 427624556021695777LLU;
	volatile uint32_t x176 = 121807U;

    t40 = (((x173==x174)-x175)<=x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = INT8_MAX;
	uint16_t x178 = 2561U;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t41 = 38168718;

    t41 = (((x177==x178)-x179)<=x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MAX;
	uint8_t x184 = UINT8_MAX;
	int32_t t42 = 1817447;

    t42 = (((x181==x182)-x183)<=x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MAX;
	static int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 2377U;

    t43 = (((x185==x186)-x187)<=x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = 43U;
	int64_t x190 = INT64_MIN;
	int64_t x191 = -14LL;
	uint32_t x192 = 30U;

    t44 = (((x189==x190)-x191)<=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x193 = 3;
	uint16_t x194 = 137U;
	int32_t x195 = 1720;
	static volatile int16_t x196 = INT16_MIN;
	int32_t t45 = -2;

    t45 = (((x193==x194)-x195)<=x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 6752U;
	static volatile int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	uint16_t x200 = 11U;

    t46 = (((x197==x198)-x199)<=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x201 = INT8_MAX;
	volatile int64_t x203 = 658LL;
	static int64_t x204 = INT64_MAX;
	int32_t t47 = -29;

    t47 = (((x201==x202)-x203)<=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = 3173U;
	static int32_t x206 = 119010109;
	int64_t x207 = -215591452768053874LL;
	int8_t x208 = INT8_MAX;
	volatile int32_t t48 = -24579535;

    t48 = (((x205==x206)-x207)<=x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = -1;
	int8_t x210 = 3;
	int8_t x211 = -1;
	volatile uint16_t x212 = 10U;
	volatile int32_t t49 = 1;

    t49 = (((x209==x210)-x211)<=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x213 = INT16_MIN;
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint16_t x216 = 675U;
	int32_t t50 = -209;

    t50 = (((x213==x214)-x215)<=x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MIN;
	int64_t x218 = 935154LL;
	uint32_t x219 = 758561429U;
	int32_t x220 = INT32_MAX;

    t51 = (((x217==x218)-x219)<=x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = -3;
	int16_t x224 = -2;
	int32_t t52 = -174429681;

    t52 = (((x221==x222)-x223)<=x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x225 = UINT32_MAX;
	int64_t x227 = INT64_MAX;
	static int64_t x228 = INT64_MIN;
	static int32_t t53 = 1;

    t53 = (((x225==x226)-x227)<=x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x229 = UINT16_MAX;
	uint16_t x230 = UINT16_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t54 = -33;

    t54 = (((x229==x230)-x231)<=x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = INT8_MIN;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	static int64_t x236 = -1LL;
	static volatile int32_t t55 = -17659;

    t55 = (((x233==x234)-x235)<=x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x237 = 36U;
	static volatile int64_t x238 = 115620930799286729LL;
	int32_t x239 = 1;
	volatile int32_t t56 = 56689;

    t56 = (((x237==x238)-x239)<=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = INT64_MAX;
	uint32_t x244 = 532758916U;
	int32_t t57 = -459;

    t57 = (((x241==x242)-x243)<=x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = -1;
	static volatile int8_t x250 = -1;
	uint8_t x251 = 12U;
	static volatile int32_t x252 = INT32_MIN;
	static int32_t t58 = 10;

    t58 = (((x249==x250)-x251)<=x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int16_t x259 = -2258;
	volatile int32_t t59 = 18302;

    t59 = (((x257==x258)-x259)<=x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x261 = 15U;
	volatile uint16_t x262 = UINT16_MAX;
	static uint16_t x264 = 3U;
	int32_t t60 = 9;

    t60 = (((x261==x262)-x263)<=x264);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x266 = 35424775LL;
	volatile uint64_t x267 = 8625406773411130812LLU;
	volatile int64_t x268 = -1LL;
	int32_t t61 = 902930998;

    t61 = (((x265==x266)-x267)<=x268);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = -1;
	volatile int32_t x271 = INT32_MAX;
	int32_t t62 = 266424233;

    t62 = (((x269==x270)-x271)<=x272);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x274 = 29558LLU;
	uint64_t x275 = 30730324137465LLU;
	int16_t x276 = -3575;
	int32_t t63 = -564714927;

    t63 = (((x273==x274)-x275)<=x276);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	uint32_t x279 = 28475851U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t64 = 72539;

    t64 = (((x277==x278)-x279)<=x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = -1;
	int16_t x282 = -19;
	volatile int8_t x283 = INT8_MIN;
	int8_t x284 = 2;

    t65 = (((x281==x282)-x283)<=x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = -1;
	uint8_t x286 = 5U;
	volatile int32_t x288 = 20797376;

    t66 = (((x285==x286)-x287)<=x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int16_t x292 = -1;
	int32_t t67 = -255567;

    t67 = (((x289==x290)-x291)<=x292);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = 1;
	int8_t x294 = -3;
	int32_t t68 = 22;

    t68 = (((x293==x294)-x295)<=x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 1U;
	int32_t x300 = INT32_MIN;
	int32_t t69 = -1249371;

    t69 = (((x297==x298)-x299)<=x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = INT64_MIN;
	int32_t x302 = 0;
	static volatile int32_t t70 = 1;

    t70 = (((x301==x302)-x303)<=x304);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x305 = 639U;
	int16_t x306 = -1;
	int32_t x307 = -36611794;
	int32_t t71 = -14849966;

    t71 = (((x305==x306)-x307)<=x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x313 = 2U;
	int16_t x315 = -7;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t72 = 3;

    t72 = (((x313==x314)-x315)<=x316);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = INT16_MIN;
	static int8_t x318 = -1;
	uint32_t x319 = 83U;
	int16_t x320 = INT16_MAX;
	static volatile int32_t t73 = -284;

    t73 = (((x317==x318)-x319)<=x320);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x321 = -2493844;
	uint8_t x323 = 1U;
	static int16_t x324 = -1;
	static int32_t t74 = 3178;

    t74 = (((x321==x322)-x323)<=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x326 = INT16_MIN;
	int32_t x327 = -2825;
	int32_t t75 = 908;

    t75 = (((x325==x326)-x327)<=x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x329 = 1712LLU;
	uint16_t x330 = 384U;
	int8_t x331 = -57;
	int64_t x332 = INT64_MIN;

    t76 = (((x329==x330)-x331)<=x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x333 = -1LL;
	uint16_t x334 = UINT16_MAX;
	volatile int8_t x335 = 5;
	static volatile int8_t x336 = -1;
	static int32_t t77 = 493;

    t77 = (((x333==x334)-x335)<=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x341 = 851U;
	static int64_t x342 = INT64_MIN;
	int8_t x343 = -1;
	uint32_t x344 = 126U;
	static volatile int32_t t78 = -264265307;

    t78 = (((x341==x342)-x343)<=x344);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	int32_t x348 = 2925329;
	int32_t t79 = 3;

    t79 = (((x345==x346)-x347)<=x348);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x349 = INT8_MAX;
	volatile uint64_t x350 = 838373LLU;
	int32_t x351 = -1;
	uint32_t x352 = 2320U;
	static int32_t t80 = -183;

    t80 = (((x349==x350)-x351)<=x352);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x357 = 1924U;
	int64_t x358 = -111LL;
	static uint64_t x359 = 707529LLU;
	uint32_t x360 = 3979U;
	int32_t t81 = -2229554;

    t81 = (((x357==x358)-x359)<=x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x361 = 98U;
	int16_t x363 = -3147;

    t82 = (((x361==x362)-x363)<=x364);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x366 = INT8_MIN;
	int16_t x367 = 7112;

    t83 = (((x365==x366)-x367)<=x368);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x371 = 1;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t84 = -284996173;

    t84 = (((x369==x370)-x371)<=x372);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 0U;
	static uint16_t x376 = 250U;
	volatile int32_t t85 = 923480746;

    t85 = (((x373==x374)-x375)<=x376);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x377 = 8167298148LLU;
	uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = 10U;
	int64_t x380 = INT64_MIN;
	int32_t t86 = -1;

    t86 = (((x377==x378)-x379)<=x380);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	uint16_t x383 = 3634U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t87 = -29713905;

    t87 = (((x381==x382)-x383)<=x384);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x385 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile int16_t x388 = INT16_MIN;
	int32_t t88 = -2335;

    t88 = (((x385==x386)-x387)<=x388);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MIN;
	int16_t x390 = -91;
	volatile uint16_t x391 = 60U;
	static volatile int64_t x392 = INT64_MAX;

    t89 = (((x389==x390)-x391)<=x392);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x397 = INT16_MIN;
	int16_t x398 = 2;
	volatile int32_t x399 = -16152249;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t90 = 501267584;

    t90 = (((x397==x398)-x399)<=x400);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x403 = 1395;
	volatile int64_t x404 = INT64_MAX;

    t91 = (((x401==x402)-x403)<=x404);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x405 = 6701LL;
	int16_t x406 = -1;
	volatile int16_t x407 = -7011;
	volatile int32_t t92 = -409;

    t92 = (((x405==x406)-x407)<=x408);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x409 = INT64_MIN;
	volatile uint32_t x410 = 36U;
	uint64_t x411 = UINT64_MAX;
	volatile uint32_t x412 = 2601U;

    t93 = (((x409==x410)-x411)<=x412);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x413 = 41U;
	int32_t x415 = -1;
	int32_t t94 = 12872;

    t94 = (((x413==x414)-x415)<=x416);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x417 = 3448955U;
	static int8_t x418 = INT8_MAX;
	int64_t x419 = 13673529712LL;
	int32_t x420 = -91306;
	int32_t t95 = 70;

    t95 = (((x417==x418)-x419)<=x420);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x421 = 0U;
	volatile int32_t t96 = 12;

    t96 = (((x421==x422)-x423)<=x424);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = -9;
	static int32_t x426 = INT32_MIN;
	int32_t x427 = INT32_MAX;
	volatile int32_t t97 = -1817;

    t97 = (((x425==x426)-x427)<=x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x429 = INT64_MIN;
	static int8_t x430 = INT8_MIN;
	uint32_t x431 = 1U;
	int64_t x432 = 0LL;
	int32_t t98 = -1;

    t98 = (((x429==x430)-x431)<=x432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x437 = -13031714979LL;
	uint64_t x438 = 11475LLU;
	int16_t x439 = INT16_MAX;
	uint32_t x440 = 21136039U;

    t99 = (((x437==x438)-x439)<=x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = INT64_MAX;
	uint64_t x443 = UINT64_MAX;
	uint8_t x444 = 68U;
	static int32_t t100 = 117978541;

    t100 = (((x441==x442)-x443)<=x444);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1146;
	int16_t x447 = 31;
	int8_t x448 = INT8_MIN;
	volatile int32_t t101 = 150429381;

    t101 = (((x445==x446)-x447)<=x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x449 = INT8_MAX;
	static int64_t x450 = INT64_MIN;
	static volatile int16_t x451 = -11;
	volatile uint8_t x452 = 4U;
	volatile int32_t t102 = 427630;

    t102 = (((x449==x450)-x451)<=x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    

    t103 = (((x453==x454)-x455)<=x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x457 = -759902;
	int16_t x458 = -945;
	int16_t x459 = -1;
	int32_t x460 = INT32_MIN;
	int32_t t104 = 120223613;

    t104 = (((x457==x458)-x459)<=x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = 483935178698163186LL;
	uint32_t x462 = 2044377U;
	static uint64_t x464 = UINT64_MAX;
	static volatile int32_t t105 = -17037;

    t105 = (((x461==x462)-x463)<=x464);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x465 = INT8_MIN;
	int32_t x466 = 145636232;
	static int64_t x467 = 794411209122LL;
	int32_t t106 = 1;

    t106 = (((x465==x466)-x467)<=x468);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x469 = 25190U;
	int8_t x470 = INT8_MIN;
	int32_t x472 = 1218;

    t107 = (((x469==x470)-x471)<=x472);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x473 = 519652LLU;
	int64_t x475 = 214931814396611LL;
	volatile int8_t x476 = INT8_MAX;
	static int32_t t108 = -6;

    t108 = (((x473==x474)-x475)<=x476);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = -1;
	int16_t x478 = -1;
	static int64_t x480 = -1LL;
	int32_t t109 = 45;

    t109 = (((x477==x478)-x479)<=x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x481 = 0LLU;
	int16_t x482 = -1;
	static uint16_t x483 = 199U;
	volatile int16_t x484 = INT16_MIN;
	static volatile int32_t t110 = -1691095;

    t110 = (((x481==x482)-x483)<=x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x485 = UINT8_MAX;
	int32_t x486 = INT32_MIN;
	volatile int64_t x487 = INT64_MAX;
	volatile int16_t x488 = 2387;

    t111 = (((x485==x486)-x487)<=x488);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x489 = 6246973LL;
	static uint8_t x490 = UINT8_MAX;
	uint32_t x491 = 61U;
	static int32_t t112 = -84;

    t112 = (((x489==x490)-x491)<=x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x493 = INT32_MIN;
	uint16_t x494 = 1094U;
	volatile uint64_t x495 = 250462458988061LLU;
	volatile uint8_t x496 = UINT8_MAX;
	static volatile int32_t t113 = -31;

    t113 = (((x493==x494)-x495)<=x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x499 = -19;
	volatile uint8_t x500 = UINT8_MAX;
	static volatile int32_t t114 = 2956623;

    t114 = (((x497==x498)-x499)<=x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x501 = UINT32_MAX;
	int64_t x503 = 5431158560LL;
	int32_t x504 = -1;
	int32_t t115 = -13959;

    t115 = (((x501==x502)-x503)<=x504);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x505 = INT8_MAX;
	int32_t x506 = -14466731;
	int8_t x508 = INT8_MIN;

    t116 = (((x505==x506)-x507)<=x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x509 = INT32_MAX;
	int32_t x510 = INT32_MIN;
	volatile int32_t t117 = 2541;

    t117 = (((x509==x510)-x511)<=x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x514 = 98614111LL;
	int32_t x515 = 5558;
	int64_t x516 = INT64_MIN;

    t118 = (((x513==x514)-x515)<=x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x517 = INT32_MIN;
	int32_t t119 = -1971;

    t119 = (((x517==x518)-x519)<=x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x521 = 3895;
	volatile uint64_t x522 = UINT64_MAX;
	int64_t x523 = 224031237384LL;

    t120 = (((x521==x522)-x523)<=x524);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x525 = -1LL;
	int64_t x526 = INT64_MIN;
	uint8_t x528 = 30U;
	volatile int32_t t121 = 3;

    t121 = (((x525==x526)-x527)<=x528);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x538 = INT8_MIN;
	uint8_t x539 = UINT8_MAX;
	static int64_t x540 = INT64_MIN;
	static int32_t t122 = 79;

    t122 = (((x537==x538)-x539)<=x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x541 = UINT8_MAX;
	int8_t x542 = -1;
	static int32_t x543 = -1;
	int32_t x544 = -1;

    t123 = (((x541==x542)-x543)<=x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x545 = -1;
	int8_t x546 = INT8_MAX;
	uint16_t x547 = 788U;
	static uint64_t x548 = 3943085754280748918LLU;
	static volatile int32_t t124 = -1828901;

    t124 = (((x545==x546)-x547)<=x548);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x549 = 22811U;
	uint16_t x550 = 11756U;
	uint64_t x551 = UINT64_MAX;
	int32_t t125 = -32766;

    t125 = (((x549==x550)-x551)<=x552);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x553 = -1;
	uint16_t x554 = UINT16_MAX;
	static volatile int32_t t126 = -77330395;

    t126 = (((x553==x554)-x555)<=x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x558 = 435918973972991LL;
	int8_t x559 = 0;
	int8_t x560 = INT8_MAX;
	int32_t t127 = 185208878;

    t127 = (((x557==x558)-x559)<=x560);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x565 = 29;
	int64_t x567 = -1LL;
	int32_t t128 = 262;

    t128 = (((x565==x566)-x567)<=x568);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x569 = 710665U;
	uint16_t x570 = 269U;
	int64_t x571 = -134093478559688LL;
	uint64_t x572 = UINT64_MAX;
	int32_t t129 = 19958;

    t129 = (((x569==x570)-x571)<=x572);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x575 = 6657708577050632LL;
	volatile int8_t x576 = 38;

    t130 = (((x573==x574)-x575)<=x576);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x577 = INT64_MAX;
	static int64_t x578 = INT64_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	uint64_t x580 = UINT64_MAX;

    t131 = (((x577==x578)-x579)<=x580);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x581 = INT16_MIN;
	uint8_t x582 = 46U;
	int64_t x583 = 120873074998009015LL;
	int64_t x584 = 203720LL;
	int32_t t132 = 38134;

    t132 = (((x581==x582)-x583)<=x584);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x585 = -1;
	int16_t x586 = -6;
	int32_t x587 = -1;
	int32_t t133 = 317607016;

    t133 = (((x585==x586)-x587)<=x588);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x590 = INT32_MAX;
	int8_t x592 = -1;
	int32_t t134 = 0;

    t134 = (((x589==x590)-x591)<=x592);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x593 = 17383U;
	int16_t x595 = -1;
	uint8_t x596 = UINT8_MAX;

    t135 = (((x593==x594)-x595)<=x596);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x598 = INT32_MIN;
	int64_t x599 = -1LL;
	static volatile int16_t x600 = 9553;
	volatile int32_t t136 = -1226;

    t136 = (((x597==x598)-x599)<=x600);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x601 = -1LL;
	uint64_t x602 = 24902989929370LLU;
	int64_t x603 = -15003929LL;
	uint8_t x604 = 95U;
	volatile int32_t t137 = 107745;

    t137 = (((x601==x602)-x603)<=x604);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x605 = 2847620U;
	static volatile uint32_t x607 = 153U;
	int32_t x608 = 6;
	int32_t t138 = 76085;

    t138 = (((x605==x606)-x607)<=x608);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x609 = INT16_MIN;
	uint32_t x610 = UINT32_MAX;
	static uint8_t x611 = 2U;
	volatile int32_t t139 = 12162;

    t139 = (((x609==x610)-x611)<=x612);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x614 = UINT32_MAX;
	uint16_t x616 = UINT16_MAX;
	int32_t t140 = 43211;

    t140 = (((x613==x614)-x615)<=x616);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = INT16_MIN;
	volatile int16_t x619 = INT16_MIN;
	uint8_t x620 = 22U;
	int32_t t141 = 0;

    t141 = (((x617==x618)-x619)<=x620);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x621 = INT8_MIN;
	static uint8_t x622 = 3U;
	volatile uint32_t x624 = 0U;
	int32_t t142 = 163791;

    t142 = (((x621==x622)-x623)<=x624);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x625 = UINT64_MAX;
	int32_t x626 = INT32_MIN;
	uint16_t x627 = 19875U;
	int32_t x628 = 0;
	int32_t t143 = 8;

    t143 = (((x625==x626)-x627)<=x628);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x629 = INT64_MAX;
	int8_t x630 = -1;
	uint64_t x632 = UINT64_MAX;
	int32_t t144 = 6;

    t144 = (((x629==x630)-x631)<=x632);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x633 = INT64_MIN;
	uint8_t x634 = UINT8_MAX;
	int16_t x636 = -1;
	static volatile int32_t t145 = -37786528;

    t145 = (((x633==x634)-x635)<=x636);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x637 = INT16_MIN;
	static int16_t x638 = 142;
	int8_t x639 = INT8_MIN;
	uint8_t x640 = 0U;
	static volatile int32_t t146 = 139182;

    t146 = (((x637==x638)-x639)<=x640);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x641 = 22746650464260LL;
	uint32_t x643 = UINT32_MAX;
	static uint16_t x644 = UINT16_MAX;
	volatile int32_t t147 = 1208;

    t147 = (((x641==x642)-x643)<=x644);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x645 = 6522323LL;
	uint8_t x646 = UINT8_MAX;
	int16_t x647 = INT16_MIN;
	static int32_t x648 = 3;
	int32_t t148 = 1;

    t148 = (((x645==x646)-x647)<=x648);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x649 = INT64_MAX;
	static uint16_t x650 = UINT16_MAX;
	volatile uint32_t x651 = 338460095U;
	uint16_t x652 = 42U;

    t149 = (((x649==x650)-x651)<=x652);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x653 = 2;
	uint8_t x654 = UINT8_MAX;
	volatile uint16_t x655 = 3919U;
	int8_t x656 = INT8_MIN;

    t150 = (((x653==x654)-x655)<=x656);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x657 = INT16_MIN;
	volatile int16_t x658 = INT16_MAX;
	uint16_t x660 = 1U;
	volatile int32_t t151 = 94595;

    t151 = (((x657==x658)-x659)<=x660);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = INT64_MIN;
	volatile int8_t x662 = 1;
	uint32_t x664 = UINT32_MAX;
	volatile int32_t t152 = -1051391;

    t152 = (((x661==x662)-x663)<=x664);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x665 = 332314084807495814LLU;
	uint16_t x667 = 9617U;
	uint32_t x668 = UINT32_MAX;

    t153 = (((x665==x666)-x667)<=x668);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x669 = -1;
	uint16_t x670 = UINT16_MAX;
	uint32_t x671 = 5U;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t154 = 2347109;

    t154 = (((x669==x670)-x671)<=x672);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x673 = INT64_MAX;
	int8_t x674 = 11;
	uint32_t x675 = 7614U;
	int64_t x676 = INT64_MIN;

    t155 = (((x673==x674)-x675)<=x676);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x678 = -6372665;
	static uint8_t x679 = UINT8_MAX;
	int64_t x680 = INT64_MIN;
	volatile int32_t t156 = 61890;

    t156 = (((x677==x678)-x679)<=x680);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x681 = INT64_MIN;
	static uint32_t x682 = UINT32_MAX;
	int8_t x683 = -2;
	int32_t x684 = -1;
	static int32_t t157 = 1028474191;

    t157 = (((x681==x682)-x683)<=x684);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x685 = UINT16_MAX;
	uint16_t x686 = 48U;
	volatile int16_t x687 = 48;
	int16_t x688 = -1;
	int32_t t158 = 14;

    t158 = (((x685==x686)-x687)<=x688);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x690 = 506964752616423LLU;
	volatile uint16_t x691 = UINT16_MAX;
	static int32_t x692 = INT32_MAX;
	int32_t t159 = 164;

    t159 = (((x689==x690)-x691)<=x692);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x694 = 211U;
	uint32_t x696 = UINT32_MAX;

    t160 = (((x693==x694)-x695)<=x696);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x697 = 192U;
	static volatile uint64_t x698 = 3518435641460605766LLU;
	static volatile uint8_t x699 = 0U;
	static volatile int32_t t161 = 965510;

    t161 = (((x697==x698)-x699)<=x700);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x701 = UINT32_MAX;
	int32_t x702 = INT32_MIN;
	int64_t x704 = INT64_MAX;
	volatile int32_t t162 = 7;

    t162 = (((x701==x702)-x703)<=x704);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x708 = INT64_MIN;
	int32_t t163 = 1;

    t163 = (((x705==x706)-x707)<=x708);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MIN;

    t164 = (((x709==x710)-x711)<=x712);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x714 = -35;
	int16_t x715 = INT16_MAX;
	int16_t x716 = -1;

    t165 = (((x713==x714)-x715)<=x716);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x717 = UINT64_MAX;
	volatile uint16_t x718 = 21U;
	int64_t x720 = 500979LL;
	volatile int32_t t166 = 4129501;

    t166 = (((x717==x718)-x719)<=x720);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = 3609;
	volatile uint32_t x723 = UINT32_MAX;
	int16_t x724 = INT16_MIN;
	int32_t t167 = -117688;

    t167 = (((x721==x722)-x723)<=x724);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x725 = -1;
	static uint8_t x726 = 2U;
	int16_t x727 = 55;
	volatile int32_t t168 = -2;

    t168 = (((x725==x726)-x727)<=x728);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x729 = INT64_MIN;
	uint16_t x730 = 3U;
	int64_t x731 = 297714020889396LL;
	int32_t t169 = -60;

    t169 = (((x729==x730)-x731)<=x732);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x733 = -1;
	static int64_t x735 = -87840877LL;
	uint32_t x736 = 1445255U;
	int32_t t170 = 5735;

    t170 = (((x733==x734)-x735)<=x736);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x737 = -1;
	uint16_t x738 = UINT16_MAX;

    t171 = (((x737==x738)-x739)<=x740);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x741 = 632269U;
	volatile int8_t x744 = INT8_MAX;
	int32_t t172 = 4272;

    t172 = (((x741==x742)-x743)<=x744);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x753 = 601877LLU;
	uint64_t x754 = 7115351LLU;
	volatile int8_t x755 = INT8_MIN;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t173 = -1895952;

    t173 = (((x753==x754)-x755)<=x756);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x761 = 46069414447LLU;
	static volatile int16_t x762 = 1102;
	int64_t x764 = -1LL;
	volatile int32_t t174 = 21990;

    t174 = (((x761==x762)-x763)<=x764);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x770 = -11825853;
	int64_t x772 = INT64_MAX;
	volatile int32_t t175 = -759645760;

    t175 = (((x769==x770)-x771)<=x772);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x773 = INT8_MAX;
	uint16_t x774 = UINT16_MAX;
	static volatile uint8_t x775 = 29U;
	int32_t x776 = INT32_MIN;
	static int32_t t176 = -46755633;

    t176 = (((x773==x774)-x775)<=x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x777 = INT64_MIN;
	uint64_t x778 = UINT64_MAX;
	volatile int32_t x779 = INT32_MAX;
	uint32_t x780 = 91U;
	volatile int32_t t177 = -87408;

    t177 = (((x777==x778)-x779)<=x780);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x781 = 56U;
	static uint64_t x782 = 317736387LLU;
	uint32_t x783 = 1445U;
	uint8_t x784 = 2U;
	int32_t t178 = 1552;

    t178 = (((x781==x782)-x783)<=x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x785 = -1;
	static uint16_t x786 = 143U;
	int64_t x788 = 117108102202500LL;
	int32_t t179 = -895592014;

    t179 = (((x785==x786)-x787)<=x788);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x789 = 1U;
	uint16_t x790 = 3282U;
	volatile int32_t t180 = 2893;

    t180 = (((x789==x790)-x791)<=x792);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x793 = INT16_MIN;
	uint16_t x795 = 5856U;
	int32_t t181 = 70251;

    t181 = (((x793==x794)-x795)<=x796);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x797 = 34LL;
	uint16_t x798 = UINT16_MAX;
	int32_t x799 = -1;
	uint64_t x800 = 3175446LLU;
	int32_t t182 = -865050693;

    t182 = (((x797==x798)-x799)<=x800);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x802 = -1LL;
	int8_t x803 = -1;
	uint64_t x804 = 1156960181392684LLU;
	volatile int32_t t183 = 2;

    t183 = (((x801==x802)-x803)<=x804);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x805 = 4LL;
	int64_t x807 = 11699LL;
	volatile int32_t x808 = INT32_MIN;

    t184 = (((x805==x806)-x807)<=x808);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x809 = -2;
	static int8_t x810 = INT8_MIN;
	int16_t x811 = INT16_MIN;
	volatile int32_t t185 = 3;

    t185 = (((x809==x810)-x811)<=x812);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x814 = 6U;
	int64_t x815 = INT64_MAX;
	int32_t t186 = 83;

    t186 = (((x813==x814)-x815)<=x816);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x817 = 513U;
	uint64_t x818 = 497904413574059LLU;
	volatile uint32_t x819 = 45518535U;
	int64_t x820 = -1LL;
	static int32_t t187 = -21468;

    t187 = (((x817==x818)-x819)<=x820);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x821 = 8234LLU;
	int16_t x822 = INT16_MAX;
	uint64_t x823 = 7391349LLU;
	int32_t t188 = 410;

    t188 = (((x821==x822)-x823)<=x824);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x825 = -1;
	uint8_t x826 = UINT8_MAX;
	static volatile int64_t x828 = 5359751433LL;

    t189 = (((x825==x826)-x827)<=x828);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x829 = 14LLU;
	volatile int8_t x830 = INT8_MAX;
	volatile int8_t x831 = INT8_MIN;
	int16_t x832 = INT16_MAX;
	int32_t t190 = -7;

    t190 = (((x829==x830)-x831)<=x832);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint16_t x834 = 2106U;
	volatile int8_t x835 = -4;
	int32_t x836 = INT32_MAX;
	volatile int32_t t191 = 1;

    t191 = (((x833==x834)-x835)<=x836);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x839 = -157;
	int8_t x840 = -27;
	int32_t t192 = 11;

    t192 = (((x837==x838)-x839)<=x840);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x845 = 174;
	uint64_t x847 = 6421325LLU;
	static int32_t t193 = 146294973;

    t193 = (((x845==x846)-x847)<=x848);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x849 = -32;
	uint8_t x851 = 3U;
	static volatile int32_t x852 = INT32_MAX;
	volatile int32_t t194 = -338886;

    t194 = (((x849==x850)-x851)<=x852);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x857 = 1008U;
	static volatile int16_t x859 = 1;
	int64_t x860 = INT64_MIN;
	volatile int32_t t195 = 27;

    t195 = (((x857==x858)-x859)<=x860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x861 = 933180241LL;
	uint32_t x862 = 6343740U;
	int16_t x864 = INT16_MIN;
	volatile int32_t t196 = 57929;

    t196 = (((x861==x862)-x863)<=x864);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x865 = -159039754;
	static int32_t x866 = INT32_MIN;
	volatile int32_t x867 = -1;
	static uint16_t x868 = 89U;

    t197 = (((x865==x866)-x867)<=x868);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x869 = INT64_MIN;
	int32_t x871 = 177290;
	int16_t x872 = 1450;
	volatile int32_t t198 = -85875;

    t198 = (((x869==x870)-x871)<=x872);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x874 = INT8_MAX;
	static int64_t x876 = -1LL;
	int32_t t199 = 1355702;

    t199 = (((x873==x874)-x875)<=x876);

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

