
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

static uint16_t x2 = 19579U;
uint32_t x9 = UINT32_MAX;
int8_t x15 = INT8_MAX;
volatile int32_t t3 = INT32_MIN;
uint8_t x23 = 15U;
uint8_t x35 = 20U;
int32_t t9 = 1190;
volatile int16_t x46 = INT16_MIN;
int32_t t10 = 0;
int8_t x49 = -1;
int16_t x53 = INT16_MIN;
static uint16_t x54 = 17574U;
static volatile int64_t x62 = -1LL;
static volatile uint64_t x64 = 4385389492562910453LLU;
static uint32_t x67 = 20169U;
volatile int64_t x68 = -1LL;
int16_t x72 = INT16_MIN;
uint8_t x74 = UINT8_MAX;
uint8_t x78 = 1U;
int8_t x86 = 58;
uint16_t x91 = 2402U;
int16_t x93 = 3;
int16_t x96 = INT16_MAX;
uint64_t x97 = 234LLU;
static volatile int32_t x99 = INT32_MIN;
static uint64_t x108 = UINT64_MAX;
uint16_t x110 = UINT16_MAX;
int32_t x115 = INT32_MIN;
int8_t x119 = 1;
int32_t x120 = 3;
static int8_t x121 = INT8_MAX;
int16_t x122 = -1;
int32_t t28 = 3215162;
uint16_t x130 = 12U;
volatile uint64_t x137 = 1523LLU;
int32_t x138 = -28030;
static volatile int64_t x143 = -1LL;
static int8_t x156 = -1;
uint16_t x158 = 7U;
int64_t x159 = -41772288617159843LL;
int8_t x160 = 10;
static int8_t x163 = INT8_MIN;
volatile int32_t t38 = 65529374;
static uint32_t x170 = UINT32_MAX;
static int64_t x172 = INT64_MAX;
uint64_t x173 = UINT64_MAX;
int8_t x183 = 0;
int32_t t44 = -16;
volatile uint32_t x205 = UINT32_MAX;
int8_t x211 = -15;
int8_t x212 = INT8_MIN;
uint64_t t49 = 21673904257043809LLU;
int32_t x225 = INT32_MAX;
static uint16_t x235 = UINT16_MAX;
int8_t x242 = -10;
static volatile int32_t t55 = 757932484;
int64_t x250 = 2726LL;
volatile int8_t x255 = INT8_MIN;
volatile int32_t t59 = 81;
int16_t x267 = -17;
uint8_t x270 = 17U;
int16_t x286 = INT16_MIN;
uint32_t x287 = 25279U;
volatile int64_t t66 = -18325038801LL;
volatile int8_t x294 = -46;
uint8_t x295 = 124U;
int8_t x297 = 48;
int64_t x308 = INT64_MIN;
volatile int64_t t70 = INT64_MIN;
static uint64_t t72 = 567LLU;
int8_t x321 = 2;
static volatile int16_t x325 = INT16_MAX;
int16_t x334 = INT16_MIN;
static int16_t x341 = INT16_MIN;
int16_t x345 = 1;
volatile int8_t x350 = -1;
volatile uint8_t x352 = UINT8_MAX;
int32_t x353 = INT32_MAX;
static int8_t x355 = -2;
volatile int32_t t83 = -40917;
volatile uint64_t t85 = 1681524775LLU;
uint16_t x373 = 249U;
volatile int16_t x385 = -3;
volatile int8_t x388 = -1;
volatile int32_t t90 = -9193951;
volatile int32_t t91 = -445485525;
int32_t x418 = 1956827;
int16_t x420 = INT16_MAX;
int64_t x423 = -7837506908262LL;
int32_t t98 = 1;
uint32_t x437 = 23U;
volatile int8_t x439 = -10;
static uint32_t x440 = UINT32_MAX;
uint64_t x469 = 7LLU;
volatile uint64_t x475 = 1741531164LLU;
static int32_t t108 = 117992045;
static uint32_t x481 = UINT32_MAX;
uint16_t x483 = 2U;
static int16_t x489 = INT16_MIN;
static volatile int32_t t114 = -22697;
static int64_t x510 = INT64_MAX;
int32_t x516 = INT32_MIN;
int64_t x523 = INT64_MIN;
static int8_t x529 = INT8_MIN;
volatile int32_t t120 = -123;
volatile int16_t x542 = -1;
int16_t x543 = INT16_MIN;
static volatile int16_t x550 = INT16_MIN;
uint16_t x559 = 450U;
int8_t x563 = 0;
static int16_t x574 = INT16_MAX;
int64_t x576 = INT64_MAX;
static uint32_t t131 = 77U;
static volatile uint64_t x605 = 956LLU;
int64_t x607 = -1LL;
volatile int32_t t136 = INT32_MIN;
int32_t x610 = INT32_MAX;
uint32_t x615 = 6988673U;
volatile int32_t t139 = -58630;
uint8_t x622 = UINT8_MAX;
volatile int32_t t140 = -39790479;
volatile int64_t x625 = -2672455670327703LL;
int16_t x631 = INT16_MAX;
volatile int64_t t143 = INT64_MAX;
uint8_t x638 = 15U;
uint32_t x640 = 29207670U;
int64_t x642 = INT64_MAX;
int32_t x654 = -150;
static int64_t x671 = INT64_MAX;
int64_t x681 = INT64_MAX;
static volatile uint64_t x682 = UINT64_MAX;
static volatile int32_t x688 = INT32_MIN;
uint64_t x692 = 9079419LLU;
uint64_t x695 = UINT64_MAX;
int64_t x696 = INT64_MIN;
int16_t x699 = -1;
int32_t t159 = INT32_MIN;
int32_t x708 = -1;
int32_t t161 = -11;
int16_t x715 = INT16_MIN;
volatile int8_t x717 = -1;
uint64_t t163 = UINT64_MAX;
uint32_t x722 = UINT32_MAX;
volatile int32_t t166 = 206070;
int64_t x739 = 2151422136050LL;
static int8_t x742 = INT8_MAX;
int16_t x744 = INT16_MIN;
static uint16_t x749 = 3U;
uint8_t x754 = 0U;
uint32_t x756 = UINT32_MAX;
uint32_t t170 = UINT32_MAX;
int32_t x758 = INT32_MIN;
uint8_t x760 = 105U;
int64_t x768 = INT64_MIN;
int64_t t173 = INT64_MIN;
int16_t x772 = INT16_MIN;
int32_t t174 = 2696891;
int16_t x782 = 5603;
uint32_t x785 = 168U;
int64_t t178 = -6067956LL;
uint8_t x791 = UINT8_MAX;
int64_t x792 = -1018122300872241788LL;
int16_t x798 = -3;
uint8_t x803 = 26U;
int64_t x805 = 0LL;
volatile int64_t x809 = -487680715LL;
volatile uint32_t x813 = 833123U;
int8_t x814 = -1;
int32_t x819 = -1;
static int32_t t185 = -12;
int16_t x823 = -1;
int8_t x826 = INT8_MIN;
uint8_t x833 = 70U;
volatile int16_t x835 = INT16_MAX;
int32_t x837 = INT32_MIN;
volatile int32_t x848 = 67;
int8_t x849 = 0;
static volatile uint32_t x850 = 1098729462U;
static uint32_t x852 = UINT32_MAX;
static uint8_t x853 = 18U;
uint16_t x860 = UINT16_MAX;
int8_t x865 = INT8_MIN;
volatile int64_t x867 = INT64_MIN;
int64_t t197 = -251305384309766299LL;
static uint8_t x875 = 3U;
volatile int32_t t198 = 3;
volatile uint64_t x882 = 24811LLU;
volatile int32_t t199 = 0;


void f0(void) {
    	static volatile int32_t x1 = 7973415;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 6U;
	uint32_t t0 = 14494668U;

    t0 = (((x1-x2)==x3)|x4);

    if (t0 != 6U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 2692U;
	int16_t x6 = 51;
	uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 26U;
	volatile int32_t t1 = -96675;

    t1 = (((x5-x6)==x7)|x8);

    if (t1 != 26) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 23289U;
	int16_t x11 = -1;
	int8_t x12 = 47;
	volatile int32_t t2 = 166;

    t2 = (((x9-x10)==x11)|x12);

    if (t2 != 47) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 335U;
	uint16_t x14 = 7U;
	int32_t x16 = INT32_MIN;

    t3 = (((x13-x14)==x15)|x16);

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static uint64_t x18 = 0LLU;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

    t4 = (((x17-x18)==x19)|x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MAX;
	static uint8_t x22 = UINT8_MAX;
	static volatile int32_t x24 = INT32_MIN;
	int32_t t5 = INT32_MIN;

    t5 = (((x21-x22)==x23)|x24);

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	int8_t x32 = -1;
	volatile int32_t t6 = 5;

    t6 = (((x29-x30)==x31)|x32);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x33 = 16639U;
	int64_t x34 = -267164618LL;
	int64_t x36 = -43545939LL;
	volatile int64_t t7 = -422697324717LL;

    t7 = (((x33-x34)==x35)|x36);

    if (t7 != -43545939LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 71;
	int8_t x38 = -15;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = INT32_MIN;

    t8 = (((x37-x38)==x39)|x40);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	static int8_t x42 = INT8_MIN;
	volatile int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MAX;

    t9 = (((x41-x42)==x43)|x44);

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	volatile uint16_t x47 = 766U;
	int8_t x48 = INT8_MIN;

    t10 = (((x45-x46)==x47)|x48);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x50 = -3;
	static int8_t x51 = INT8_MIN;
	uint64_t x52 = 34LLU;
	volatile uint64_t t11 = 4047484683LLU;

    t11 = (((x49-x50)==x51)|x52);

    if (t11 != 34LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x55 = -1;
	static int64_t x56 = INT64_MAX;
	static int64_t t12 = INT64_MAX;

    t12 = (((x53-x54)==x55)|x56);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -134977117493339208LL;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	static volatile uint64_t x60 = 3376037484684647LLU;
	static uint64_t t13 = 663821677LLU;

    t13 = (((x57-x58)==x59)|x60);

    if (t13 != 3376037484684647LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x61 = INT8_MAX;
	int64_t x63 = 2123476388659LL;
	uint64_t t14 = 96292852396845LLU;

    t14 = (((x61-x62)==x63)|x64);

    if (t14 != 4385389492562910453LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	static uint32_t x66 = UINT32_MAX;
	volatile int64_t t15 = 7LL;

    t15 = (((x65-x66)==x67)|x68);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 6LL;
	uint32_t x70 = 379519U;
	uint8_t x71 = 106U;
	volatile int32_t t16 = -106548133;

    t16 = (((x69-x70)==x71)|x72);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	static int8_t x76 = 0;
	volatile int32_t t17 = -6;

    t17 = (((x73-x74)==x75)|x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 8;
	static int32_t t18 = -2;

    t18 = (((x77-x78)==x79)|x80);

    if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MAX;
	uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 1463978LLU;
	volatile uint64_t t19 = 326229591436LLU;

    t19 = (((x81-x82)==x83)|x84);

    if (t19 != 1463978LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x85 = INT16_MAX;
	int16_t x87 = -1;
	int16_t x88 = -1;
	int32_t t20 = -1471;

    t20 = (((x85-x86)==x87)|x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x89 = -1;
	int16_t x90 = -1;
	int16_t x92 = INT16_MAX;
	int32_t t21 = 8805;

    t21 = (((x89-x90)==x91)|x92);

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x94 = -418;
	int64_t x95 = INT64_MIN;
	volatile int32_t t22 = -54731;

    t22 = (((x93-x94)==x95)|x96);

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x98 = 1U;
	static volatile int64_t x100 = INT64_MAX;
	volatile int64_t t23 = INT64_MAX;

    t23 = (((x97-x98)==x99)|x100);

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x105 = INT32_MIN;
	uint32_t x106 = 195547U;
	int32_t x107 = 202065594;
	static volatile uint64_t t24 = UINT64_MAX;

    t24 = (((x105-x106)==x107)|x108);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x109 = -89636105;
	int16_t x111 = 212;
	int64_t x112 = -1LL;
	volatile int64_t t25 = -6LL;

    t25 = (((x109-x110)==x111)|x112);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -1;
	uint16_t x114 = 242U;
	static uint16_t x116 = 1U;
	static volatile int32_t t26 = 45;

    t26 = (((x113-x114)==x115)|x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	int32_t x118 = -180140870;
	int32_t t27 = -478689;

    t27 = (((x117-x118)==x119)|x120);

    if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x123 = INT32_MIN;
	static int16_t x124 = INT16_MIN;

    t28 = (((x121-x122)==x123)|x124);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = -25;
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MAX;
	static int32_t t29 = -12987200;

    t29 = (((x125-x126)==x127)|x128);

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x129 = -15937;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;
	int32_t t30 = 60474022;

    t30 = (((x129-x130)==x131)|x132);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 10U;
	uint16_t x134 = 210U;
	volatile int8_t x135 = 1;
	uint8_t x136 = 112U;
	volatile int32_t t31 = -608684937;

    t31 = (((x133-x134)==x135)|x136);

    if (t31 != 112) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = -564;
	volatile int32_t t32 = 5;

    t32 = (((x137-x138)==x139)|x140);

    if (t32 != -564) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x141 = 7U;
	int64_t x142 = -916062535610LL;
	int32_t x144 = -1;
	static volatile int32_t t33 = -337263389;

    t33 = (((x141-x142)==x143)|x144);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	volatile uint32_t x152 = UINT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = (((x149-x150)==x151)|x152);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MAX;
	static uint64_t x154 = UINT64_MAX;
	volatile uint32_t x155 = 425641U;
	static int32_t t35 = -188;

    t35 = (((x153-x154)==x155)|x156);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	static int32_t t36 = -1;

    t36 = (((x157-x158)==x159)|x160);

    if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x161 = INT32_MAX;
	static int16_t x162 = INT16_MAX;
	static uint32_t x164 = 623069581U;
	uint32_t t37 = 31U;

    t37 = (((x161-x162)==x163)|x164);

    if (t37 != 623069581U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x166 = INT16_MAX;
	volatile int64_t x167 = -1052179002784063LL;
	volatile uint16_t x168 = UINT16_MAX;

    t38 = (((x165-x166)==x167)|x168);

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = 44;
	uint8_t x171 = 14U;
	volatile int64_t t39 = INT64_MAX;

    t39 = (((x169-x170)==x171)|x172);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x174 = 5558LL;
	int64_t x175 = 4519499026LL;
	int16_t x176 = INT16_MIN;
	int32_t t40 = -51;

    t40 = (((x173-x174)==x175)|x176);

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x181 = -15737930180LL;
	int16_t x182 = -1;
	volatile uint64_t x184 = 11593696043235827LLU;
	volatile uint64_t t41 = 3520010LLU;

    t41 = (((x181-x182)==x183)|x184);

    if (t41 != 11593696043235827LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = 0;
	static volatile int32_t t42 = 22487;

    t42 = (((x185-x186)==x187)|x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x189 = 6051U;
	int64_t x190 = -1LL;
	uint64_t x191 = 98LLU;
	int8_t x192 = -1;
	volatile int32_t t43 = -1213832;

    t43 = (((x189-x190)==x191)|x192);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x193 = 1275U;
	static int8_t x194 = 1;
	uint16_t x195 = UINT16_MAX;
	uint16_t x196 = 10616U;

    t44 = (((x193-x194)==x195)|x196);

    if (t44 != 10616) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x197 = -3142;
	volatile int16_t x198 = INT16_MIN;
	static int8_t x199 = INT8_MIN;
	static uint64_t x200 = UINT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = (((x197-x198)==x199)|x200);

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = -83406;
	static volatile int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 24787U;
	volatile uint32_t t46 = 279U;

    t46 = (((x201-x202)==x203)|x204);

    if (t46 != 24787U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x206 = -1;
	uint64_t x207 = 369809578128LLU;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t47 = UINT64_MAX;

    t47 = (((x205-x206)==x207)|x208);

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 0U;
	static volatile uint16_t x210 = 741U;
	volatile int32_t t48 = 0;

    t48 = (((x209-x210)==x211)|x212);

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = INT16_MIN;
	uint8_t x214 = 1U;
	static uint32_t x215 = 627969U;
	volatile uint64_t x216 = 204LLU;

    t49 = (((x213-x214)==x215)|x216);

    if (t49 != 204LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -16555709LL;
	int8_t x222 = 27;
	int8_t x223 = INT8_MIN;
	static volatile int64_t x224 = INT64_MAX;
	static int64_t t50 = INT64_MAX;

    t50 = (((x221-x222)==x223)|x224);

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x226 = 1131499U;
	int8_t x227 = -1;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t51 = 279;

    t51 = (((x225-x226)==x227)|x228);

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x229 = -1;
	uint8_t x230 = 2U;
	int16_t x231 = 2;
	int16_t x232 = 2;
	volatile int32_t t52 = 3821568;

    t52 = (((x229-x230)==x231)|x232);

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x233 = INT8_MAX;
	int32_t x234 = -188;
	int8_t x236 = INT8_MIN;
	int32_t t53 = -3287;

    t53 = (((x233-x234)==x235)|x236);

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = -2;
	uint8_t x238 = 67U;
	int8_t x239 = -1;
	uint8_t x240 = 1U;
	volatile int32_t t54 = 16941585;

    t54 = (((x237-x238)==x239)|x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	volatile int16_t x244 = INT16_MAX;

    t55 = (((x241-x242)==x243)|x244);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x245 = INT32_MIN;
	uint64_t x246 = 91749069333597990LLU;
	static uint64_t x247 = UINT64_MAX;
	static volatile uint64_t x248 = 386LLU;
	static volatile uint64_t t56 = 15346131855LLU;

    t56 = (((x245-x246)==x247)|x248);

    if (t56 != 386LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	static int16_t x252 = INT16_MIN;
	int32_t t57 = -1;

    t57 = (((x249-x250)==x251)|x252);

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x253 = 401742U;
	volatile int8_t x254 = -3;
	int16_t x256 = INT16_MIN;
	volatile int32_t t58 = -394942261;

    t58 = (((x253-x254)==x255)|x256);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = -1LL;
	static int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	static uint8_t x260 = 15U;

    t59 = (((x257-x258)==x259)|x260);

    if (t59 != 15) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x261 = INT16_MIN;
	volatile int64_t x262 = -1LL;
	static int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t60 = 59624934;

    t60 = (((x261-x262)==x263)|x264);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x265 = 115926552LL;
	volatile uint8_t x266 = UINT8_MAX;
	uint32_t x268 = 0U;
	static volatile uint32_t t61 = 0U;

    t61 = (((x265-x266)==x267)|x268);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = 62353516300616LL;
	uint64_t x271 = 246713591687315LLU;
	int32_t x272 = -1;
	int32_t t62 = -4989;

    t62 = (((x269-x270)==x271)|x272);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x273 = 523422593318LLU;
	int16_t x274 = -1;
	int16_t x275 = INT16_MAX;
	int8_t x276 = -13;
	volatile int32_t t63 = -721;

    t63 = (((x273-x274)==x275)|x276);

    if (t63 != -13) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MAX;
	static int64_t x278 = 39910245498692724LL;
	int16_t x279 = -1;
	int16_t x280 = -8582;
	int32_t t64 = -590895;

    t64 = (((x277-x278)==x279)|x280);

    if (t64 != -8582) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MAX;
	int32_t t65 = INT32_MAX;

    t65 = (((x281-x282)==x283)|x284);

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x285 = 5U;
	int64_t x288 = -1LL;

    t66 = (((x285-x286)==x287)|x288);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x289 = 2U;
	uint64_t x290 = UINT64_MAX;
	volatile int64_t x291 = -2539858357528946031LL;
	int32_t x292 = 125914;
	volatile int32_t t67 = 14;

    t67 = (((x289-x290)==x291)|x292);

    if (t67 != 125914) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = 0U;
	volatile int8_t x296 = 0;
	static volatile int32_t t68 = -138;

    t68 = (((x293-x294)==x295)|x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x298 = INT16_MIN;
	int32_t x299 = 0;
	int32_t x300 = INT32_MIN;
	static int32_t t69 = INT32_MIN;

    t69 = (((x297-x298)==x299)|x300);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x305 = 2080;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = -1;

    t70 = (((x305-x306)==x307)|x308);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x309 = 46717U;
	int32_t x310 = -25;
	static int64_t x311 = -1LL;
	int8_t x312 = -42;
	volatile int32_t t71 = 2020696;

    t71 = (((x309-x310)==x311)|x312);

    if (t71 != -42) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = -236;
	int32_t x314 = -8134821;
	volatile uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 2467886456LLU;

    t72 = (((x313-x314)==x315)|x316);

    if (t72 != 2467886456LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x317 = INT16_MAX;
	int64_t x318 = 15247772789693374LL;
	volatile uint8_t x319 = 24U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t73 = -760957860;

    t73 = (((x317-x318)==x319)|x320);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x322 = 0;
	int64_t x323 = -1LL;
	static volatile int16_t x324 = -65;
	volatile int32_t t74 = -27;

    t74 = (((x321-x322)==x323)|x324);

    if (t74 != -65) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x326 = 52726271953LLU;
	int32_t x327 = -1;
	static uint64_t x328 = 1867794021106LLU;
	uint64_t t75 = 200696637595106696LLU;

    t75 = (((x325-x326)==x327)|x328);

    if (t75 != 1867794021106LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = INT8_MIN;
	static uint32_t x330 = UINT32_MAX;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = -2866918574385LL;
	int64_t t76 = -102235537964049LL;

    t76 = (((x329-x330)==x331)|x332);

    if (t76 != -2866918574385LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x333 = 19U;
	volatile int64_t x335 = -1LL;
	int8_t x336 = 29;
	int32_t t77 = 0;

    t77 = (((x333-x334)==x335)|x336);

    if (t77 != 29) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = -1LL;
	int8_t x338 = INT8_MIN;
	int32_t x339 = -313;
	int32_t x340 = 75118309;
	int32_t t78 = -46;

    t78 = (((x337-x338)==x339)|x340);

    if (t78 != 75118309) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x342 = 0;
	static int32_t x343 = INT32_MAX;
	volatile int8_t x344 = INT8_MAX;
	volatile int32_t t79 = 22874;

    t79 = (((x341-x342)==x343)|x344);

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x346 = INT8_MIN;
	volatile uint32_t x347 = 19U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t80 = -3861131;

    t80 = (((x345-x346)==x347)|x348);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x349 = UINT8_MAX;
	int64_t x351 = -1LL;
	volatile int32_t t81 = 88;

    t81 = (((x349-x350)==x351)|x352);

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x354 = 0U;
	uint8_t x356 = UINT8_MAX;
	int32_t t82 = -280;

    t82 = (((x353-x354)==x355)|x356);

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -1;
	static int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = INT16_MIN;

    t83 = (((x361-x362)==x363)|x364);

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = -1;
	uint8_t x366 = 6U;
	int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = 25232436740589345LLU;
	volatile uint64_t t84 = 804128829150LLU;

    t84 = (((x365-x366)==x367)|x368);

    if (t84 != 25232436740589345LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = -1;
	volatile uint64_t x372 = 399387LLU;

    t85 = (((x369-x370)==x371)|x372);

    if (t85 != 399387LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = 32;
	int32_t t86 = -22364;

    t86 = (((x373-x374)==x375)|x376);

    if (t86 != 32) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = INT32_MIN;
	int64_t x378 = 254551162099568669LL;
	uint32_t x379 = 1098363U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t87 = INT32_MIN;

    t87 = (((x377-x378)==x379)|x380);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = INT16_MIN;
	uint16_t x382 = 17339U;
	volatile int64_t x383 = -1LL;
	int16_t x384 = -1;
	volatile int32_t t88 = 742980;

    t88 = (((x381-x382)==x383)|x384);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x386 = 16U;
	int64_t x387 = -1LL;
	volatile int32_t t89 = 13599;

    t89 = (((x385-x386)==x387)|x388);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x393 = -1LL;
	int16_t x394 = 7485;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;

    t90 = (((x393-x394)==x395)|x396);

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x397 = -1;
	uint32_t x398 = 0U;
	volatile int16_t x399 = 1;
	volatile uint16_t x400 = 8119U;

    t91 = (((x397-x398)==x399)|x400);

    if (t91 != 8119) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	static int64_t x407 = 2LL;
	int8_t x408 = -1;
	volatile int32_t t92 = 59143;

    t92 = (((x405-x406)==x407)|x408);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x409 = -1;
	int64_t x410 = 3466LL;
	int32_t x411 = INT32_MAX;
	volatile uint32_t x412 = 20745435U;
	uint32_t t93 = 31U;

    t93 = (((x409-x410)==x411)|x412);

    if (t93 != 20745435U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = 14;
	int8_t x414 = INT8_MIN;
	int64_t x415 = -19564536512LL;
	uint16_t x416 = 31988U;
	int32_t t94 = 1;

    t94 = (((x413-x414)==x415)|x416);

    if (t94 != 31988) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = -274;
	static int64_t x419 = INT64_MIN;
	int32_t t95 = 1;

    t95 = (((x417-x418)==x419)|x420);

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x421 = INT8_MIN;
	uint32_t x422 = 566309338U;
	volatile uint16_t x424 = 36U;
	volatile int32_t t96 = 22190;

    t96 = (((x421-x422)==x423)|x424);

    if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x425 = INT32_MAX;
	static uint8_t x426 = 14U;
	int16_t x427 = INT16_MAX;
	volatile int32_t x428 = INT32_MIN;
	int32_t t97 = INT32_MIN;

    t97 = (((x425-x426)==x427)|x428);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile int32_t x432 = -3;

    t98 = (((x429-x430)==x431)|x432);

    if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x438 = 29186479;
	uint32_t t99 = UINT32_MAX;

    t99 = (((x437-x438)==x439)|x440);

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x441 = UINT64_MAX;
	int16_t x442 = -11;
	uint64_t x443 = UINT64_MAX;
	volatile int64_t x444 = INT64_MIN;
	int64_t t100 = INT64_MIN;

    t100 = (((x441-x442)==x443)|x444);

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x445 = 20;
	uint32_t x446 = 135940U;
	int32_t x447 = -1;
	uint64_t x448 = 36284LLU;
	uint64_t t101 = 3869183341706611133LLU;

    t101 = (((x445-x446)==x447)|x448);

    if (t101 != 36284LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x449 = 0;
	int64_t x450 = INT64_MAX;
	static int32_t x451 = INT32_MIN;
	uint64_t x452 = 13267451799798LLU;
	volatile uint64_t t102 = 187458LLU;

    t102 = (((x449-x450)==x451)|x452);

    if (t102 != 13267451799798LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x453 = UINT64_MAX;
	static volatile uint16_t x454 = 3744U;
	uint32_t x455 = 40257818U;
	int32_t x456 = INT32_MAX;
	volatile int32_t t103 = INT32_MAX;

    t103 = (((x453-x454)==x455)|x456);

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x457 = -1;
	uint64_t x458 = 10527279248LLU;
	volatile uint8_t x459 = 9U;
	uint64_t x460 = 2695LLU;
	uint64_t t104 = 14LLU;

    t104 = (((x457-x458)==x459)|x460);

    if (t104 != 2695LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x461 = -891400214;
	int16_t x462 = -6;
	static int32_t x463 = -1;
	int32_t x464 = INT32_MIN;
	int32_t t105 = INT32_MIN;

    t105 = (((x461-x462)==x463)|x464);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = -245;
	volatile uint64_t x466 = UINT64_MAX;
	int32_t x467 = 7313080;
	static int8_t x468 = -1;
	volatile int32_t t106 = 29;

    t106 = (((x465-x466)==x467)|x468);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x470 = -1LL;
	uint8_t x471 = 38U;
	volatile uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t107 = UINT64_MAX;

    t107 = (((x469-x470)==x471)|x472);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x473 = UINT64_MAX;
	uint16_t x474 = UINT16_MAX;
	int8_t x476 = 11;

    t108 = (((x473-x474)==x475)|x476);

    if (t108 != 11) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x477 = INT16_MAX;
	volatile uint32_t x478 = 69538834U;
	volatile int64_t x479 = -15494074LL;
	volatile uint32_t x480 = UINT32_MAX;
	uint32_t t109 = UINT32_MAX;

    t109 = (((x477-x478)==x479)|x480);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x482 = INT8_MIN;
	volatile int32_t x484 = INT32_MIN;
	volatile int32_t t110 = INT32_MIN;

    t110 = (((x481-x482)==x483)|x484);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x490 = 1;
	int8_t x491 = 18;
	int16_t x492 = 247;
	static volatile int32_t t111 = -740;

    t111 = (((x489-x490)==x491)|x492);

    if (t111 != 247) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = INT8_MIN;
	static uint64_t x495 = 279918015518618LLU;
	volatile uint32_t x496 = UINT32_MAX;
	volatile uint32_t t112 = UINT32_MAX;

    t112 = (((x493-x494)==x495)|x496);

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x497 = -17;
	uint32_t x498 = 6491602U;
	uint8_t x499 = 35U;
	static int32_t x500 = -42709621;
	int32_t t113 = -63376;

    t113 = (((x497-x498)==x499)|x500);

    if (t113 != -42709621) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x501 = 1LLU;
	static volatile int16_t x502 = INT16_MIN;
	int8_t x503 = -1;
	int8_t x504 = INT8_MAX;

    t114 = (((x501-x502)==x503)|x504);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x505 = 0;
	int8_t x506 = -1;
	int16_t x507 = INT16_MAX;
	volatile int64_t x508 = -1LL;
	volatile int64_t t115 = 42456257177LL;

    t115 = (((x505-x506)==x507)|x508);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = -1;
	volatile int16_t x511 = INT16_MAX;
	int32_t x512 = INT32_MIN;
	static int32_t t116 = INT32_MIN;

    t116 = (((x509-x510)==x511)|x512);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x513 = 59U;
	static volatile int16_t x514 = -1;
	uint8_t x515 = 1U;
	int32_t t117 = INT32_MIN;

    t117 = (((x513-x514)==x515)|x516);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x517 = UINT8_MAX;
	uint8_t x518 = UINT8_MAX;
	volatile int64_t x519 = INT64_MAX;
	int64_t x520 = INT64_MIN;
	static volatile int64_t t118 = INT64_MIN;

    t118 = (((x517-x518)==x519)|x520);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x521 = 46658;
	int8_t x522 = INT8_MAX;
	static uint8_t x524 = UINT8_MAX;
	int32_t t119 = -4438;

    t119 = (((x521-x522)==x523)|x524);

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x530 = INT8_MIN;
	uint16_t x531 = 26U;
	volatile uint8_t x532 = 93U;

    t120 = (((x529-x530)==x531)|x532);

    if (t120 != 93) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x537 = 3660108LL;
	volatile int8_t x538 = INT8_MIN;
	uint64_t x539 = 659LLU;
	uint8_t x540 = 34U;
	int32_t t121 = -4;

    t121 = (((x537-x538)==x539)|x540);

    if (t121 != 34) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x541 = 2065124636LLU;
	int64_t x544 = -77265LL;
	int64_t t122 = 1859039LL;

    t122 = (((x541-x542)==x543)|x544);

    if (t122 != -77265LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x545 = -1;
	int32_t x546 = INT32_MIN;
	int32_t x547 = INT32_MAX;
	int64_t x548 = -174653740435435963LL;
	volatile int64_t t123 = 11872698567684LL;

    t123 = (((x545-x546)==x547)|x548);

    if (t123 != -174653740435435963LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x549 = -1;
	volatile int16_t x551 = 1;
	uint64_t x552 = 117276735631824274LLU;
	volatile uint64_t t124 = 717LLU;

    t124 = (((x549-x550)==x551)|x552);

    if (t124 != 117276735631824274LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x553 = INT32_MAX;
	int16_t x554 = 0;
	int8_t x555 = -1;
	int64_t x556 = INT64_MAX;
	int64_t t125 = INT64_MAX;

    t125 = (((x553-x554)==x555)|x556);

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	volatile uint32_t x558 = 219U;
	int32_t x560 = INT32_MIN;
	int32_t t126 = INT32_MIN;

    t126 = (((x557-x558)==x559)|x560);

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x561 = 13;
	uint32_t x562 = 2674U;
	volatile uint32_t x564 = UINT32_MAX;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (((x561-x562)==x563)|x564);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x565 = INT16_MAX;
	volatile uint64_t x566 = 5LLU;
	uint64_t x567 = 3184971LLU;
	int64_t x568 = INT64_MIN;
	int64_t t128 = INT64_MIN;

    t128 = (((x565-x566)==x567)|x568);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x573 = -2445;
	int32_t x575 = -30131191;
	int64_t t129 = INT64_MAX;

    t129 = (((x573-x574)==x575)|x576);

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x578 = 160364LL;
	int8_t x579 = INT8_MIN;
	uint64_t x580 = 12915377LLU;
	static volatile uint64_t t130 = 45745509305356LLU;

    t130 = (((x577-x578)==x579)|x580);

    if (t130 != 12915377LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x585 = -1;
	volatile int32_t x586 = -3645172;
	volatile int32_t x587 = -1;
	static volatile uint32_t x588 = 539U;

    t131 = (((x585-x586)==x587)|x588);

    if (t131 != 539U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x589 = 39739275LLU;
	int8_t x590 = 10;
	uint32_t x591 = 26596699U;
	int8_t x592 = -1;
	volatile int32_t t132 = -553408134;

    t132 = (((x589-x590)==x591)|x592);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x594 = 29LLU;
	volatile int8_t x595 = INT8_MIN;
	int64_t x596 = INT64_MIN;
	static int64_t t133 = INT64_MIN;

    t133 = (((x593-x594)==x595)|x596);

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x597 = INT16_MIN;
	int16_t x598 = -1;
	int16_t x599 = -1;
	int8_t x600 = -1;
	static int32_t t134 = 5;

    t134 = (((x597-x598)==x599)|x600);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x601 = UINT16_MAX;
	int16_t x602 = INT16_MIN;
	int32_t x603 = 153015;
	static volatile int32_t x604 = INT32_MIN;
	static int32_t t135 = INT32_MIN;

    t135 = (((x601-x602)==x603)|x604);

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x606 = 16U;
	int32_t x608 = INT32_MIN;

    t136 = (((x605-x606)==x607)|x608);

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x609 = INT8_MAX;
	volatile int8_t x611 = INT8_MIN;
	volatile int8_t x612 = 12;
	static volatile int32_t t137 = 304011965;

    t137 = (((x609-x610)==x611)|x612);

    if (t137 != 12) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 4U;
	int8_t x616 = INT8_MIN;
	volatile int32_t t138 = -415676;

    t138 = (((x613-x614)==x615)|x616);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x617 = -2;
	int8_t x618 = INT8_MIN;
	volatile int16_t x619 = INT16_MIN;
	static volatile int8_t x620 = INT8_MAX;

    t139 = (((x617-x618)==x619)|x620);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x621 = -59389084;
	int16_t x623 = INT16_MIN;
	static volatile int32_t x624 = -9;

    t140 = (((x621-x622)==x623)|x624);

    if (t140 != -9) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x626 = UINT16_MAX;
	static uint8_t x627 = 0U;
	int64_t x628 = INT64_MIN;
	volatile int64_t t141 = INT64_MIN;

    t141 = (((x625-x626)==x627)|x628);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	static int8_t x630 = -3;
	int16_t x632 = INT16_MIN;
	int32_t t142 = 6707182;

    t142 = (((x629-x630)==x631)|x632);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x633 = UINT8_MAX;
	int32_t x634 = INT32_MAX;
	uint16_t x635 = 1992U;
	static int64_t x636 = INT64_MAX;

    t143 = (((x633-x634)==x635)|x636);

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x637 = 0;
	static uint8_t x639 = 39U;
	volatile uint32_t t144 = 6952054U;

    t144 = (((x637-x638)==x639)|x640);

    if (t144 != 29207670U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x641 = -1;
	int64_t x643 = INT64_MAX;
	int16_t x644 = 0;
	static volatile int32_t t145 = 9342021;

    t145 = (((x641-x642)==x643)|x644);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x645 = UINT16_MAX;
	static volatile uint32_t x646 = UINT32_MAX;
	static int16_t x647 = INT16_MIN;
	int8_t x648 = INT8_MIN;
	int32_t t146 = 297512229;

    t146 = (((x645-x646)==x647)|x648);

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x649 = 23957598829654167LLU;
	static volatile int16_t x650 = INT16_MIN;
	uint8_t x651 = 13U;
	uint8_t x652 = 1U;
	int32_t t147 = -133965959;

    t147 = (((x649-x650)==x651)|x652);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x653 = INT8_MIN;
	volatile int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;
	int32_t t148 = 0;

    t148 = (((x653-x654)==x655)|x656);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x657 = INT16_MIN;
	volatile int64_t x658 = -1LL;
	uint64_t x659 = UINT64_MAX;
	uint32_t x660 = 1591369119U;
	volatile uint32_t t149 = 5570752U;

    t149 = (((x657-x658)==x659)|x660);

    if (t149 != 1591369119U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x661 = 14U;
	uint16_t x662 = UINT16_MAX;
	int16_t x663 = -1;
	uint32_t x664 = 6529790U;
	uint32_t t150 = 301919U;

    t150 = (((x661-x662)==x663)|x664);

    if (t150 != 6529790U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x669 = INT16_MIN;
	uint64_t x670 = 196709567062LLU;
	uint64_t x672 = 59262804LLU;
	uint64_t t151 = 991LLU;

    t151 = (((x669-x670)==x671)|x672);

    if (t151 != 59262804LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x673 = INT16_MIN;
	volatile int8_t x674 = INT8_MIN;
	static volatile int64_t x675 = -1LL;
	uint8_t x676 = 0U;
	int32_t t152 = -98874;

    t152 = (((x673-x674)==x675)|x676);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x677 = 144244468489746340LL;
	static int16_t x678 = -2;
	static int8_t x679 = 1;
	int32_t x680 = INT32_MIN;
	static volatile int32_t t153 = INT32_MIN;

    t153 = (((x677-x678)==x679)|x680);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x683 = UINT32_MAX;
	uint32_t x684 = 1440U;
	volatile uint32_t t154 = 51972039U;

    t154 = (((x681-x682)==x683)|x684);

    if (t154 != 1440U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	uint16_t x687 = 14227U;
	int32_t t155 = INT32_MIN;

    t155 = (((x685-x686)==x687)|x688);

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = INT16_MAX;
	static int8_t x690 = 0;
	int64_t x691 = INT64_MIN;
	uint64_t t156 = 7050307850661LLU;

    t156 = (((x689-x690)==x691)|x692);

    if (t156 != 9079419LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = -1;
	int8_t x694 = -1;
	int64_t t157 = INT64_MIN;

    t157 = (((x693-x694)==x695)|x696);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x697 = -1;
	int32_t x698 = 465;
	int16_t x700 = INT16_MIN;
	static volatile int32_t t158 = 1441723;

    t158 = (((x697-x698)==x699)|x700);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MIN;
	int64_t x703 = -1LL;
	volatile int32_t x704 = INT32_MIN;

    t159 = (((x701-x702)==x703)|x704);

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = INT16_MAX;
	volatile int8_t x706 = -1;
	uint64_t x707 = 8522405LLU;
	volatile int32_t t160 = 534971807;

    t160 = (((x705-x706)==x707)|x708);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x709 = 1497LLU;
	int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	int8_t x712 = INT8_MIN;

    t161 = (((x709-x710)==x711)|x712);

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x713 = 242700187132284LL;
	uint16_t x714 = 2U;
	int64_t x716 = INT64_MAX;
	volatile int64_t t162 = INT64_MAX;

    t162 = (((x713-x714)==x715)|x716);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x718 = INT16_MAX;
	int64_t x719 = INT64_MIN;
	uint64_t x720 = UINT64_MAX;

    t163 = (((x717-x718)==x719)|x720);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x721 = INT16_MAX;
	int64_t x723 = INT64_MIN;
	uint8_t x724 = 43U;
	int32_t t164 = -37459;

    t164 = (((x721-x722)==x723)|x724);

    if (t164 != 43) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x725 = -7395;
	volatile int32_t x726 = 3466737;
	int8_t x727 = -1;
	static uint32_t x728 = 14510U;
	volatile uint32_t t165 = 429206225U;

    t165 = (((x725-x726)==x727)|x728);

    if (t165 != 14510U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x733 = -7895659320LL;
	int8_t x734 = 1;
	volatile int32_t x735 = INT32_MIN;
	uint16_t x736 = UINT16_MAX;

    t166 = (((x733-x734)==x735)|x736);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x737 = UINT32_MAX;
	static volatile uint8_t x738 = UINT8_MAX;
	int32_t x740 = INT32_MAX;
	int32_t t167 = INT32_MAX;

    t167 = (((x737-x738)==x739)|x740);

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x741 = UINT32_MAX;
	static uint32_t x743 = UINT32_MAX;
	static int32_t t168 = 274452372;

    t168 = (((x741-x742)==x743)|x744);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x750 = UINT16_MAX;
	int8_t x751 = -2;
	uint8_t x752 = 1U;
	volatile int32_t t169 = -679358;

    t169 = (((x749-x750)==x751)|x752);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x753 = 89;
	uint64_t x755 = 0LLU;

    t170 = (((x753-x754)==x755)|x756);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x757 = 3742896170423452LLU;
	int16_t x759 = INT16_MIN;
	int32_t t171 = 14;

    t171 = (((x757-x758)==x759)|x760);

    if (t171 != 105) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x761 = 1475U;
	int16_t x762 = -1;
	int64_t x763 = INT64_MAX;
	uint16_t x764 = 260U;
	volatile int32_t t172 = -2772;

    t172 = (((x761-x762)==x763)|x764);

    if (t172 != 260) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x765 = INT64_MIN;
	uint64_t x766 = 225258445084370185LLU;
	int64_t x767 = -3061861743194221793LL;

    t173 = (((x765-x766)==x767)|x768);

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x769 = -1;
	int64_t x770 = 37748014750LL;
	int32_t x771 = INT32_MAX;

    t174 = (((x769-x770)==x771)|x772);

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x773 = -1;
	uint16_t x774 = 4018U;
	volatile int64_t x775 = INT64_MIN;
	int64_t x776 = 15316178899LL;
	int64_t t175 = -2185875LL;

    t175 = (((x773-x774)==x775)|x776);

    if (t175 != 15316178899LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x777 = 305U;
	volatile int32_t x778 = 633270370;
	static int8_t x779 = 48;
	int64_t x780 = INT64_MAX;
	int64_t t176 = INT64_MAX;

    t176 = (((x777-x778)==x779)|x780);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x781 = 1984LLU;
	static int8_t x783 = 2;
	uint64_t x784 = 1204250245061107743LLU;
	static uint64_t t177 = 1998460694803832LLU;

    t177 = (((x781-x782)==x783)|x784);

    if (t177 != 1204250245061107743LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x786 = INT8_MAX;
	static int64_t x787 = INT64_MIN;
	volatile int64_t x788 = -5819197211190400LL;

    t178 = (((x785-x786)==x787)|x788);

    if (t178 != -5819197211190400LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x789 = INT8_MIN;
	volatile uint64_t x790 = 906LLU;
	int64_t t179 = -5803251LL;

    t179 = (((x789-x790)==x791)|x792);

    if (t179 != -1018122300872241788LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	static uint8_t x799 = UINT8_MAX;
	static volatile int8_t x800 = INT8_MAX;
	volatile int32_t t180 = -64;

    t180 = (((x797-x798)==x799)|x800);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x801 = 1;
	int8_t x802 = INT8_MAX;
	int16_t x804 = -1;
	volatile int32_t t181 = -197;

    t181 = (((x801-x802)==x803)|x804);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x806 = 1914U;
	static uint16_t x807 = UINT16_MAX;
	volatile int32_t x808 = -1;
	volatile int32_t t182 = -290067900;

    t182 = (((x805-x806)==x807)|x808);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x810 = INT8_MIN;
	static uint16_t x811 = 2436U;
	static volatile int8_t x812 = INT8_MIN;
	int32_t t183 = 4;

    t183 = (((x809-x810)==x811)|x812);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x815 = INT8_MAX;
	int64_t x816 = INT64_MIN;
	volatile int64_t t184 = INT64_MIN;

    t184 = (((x813-x814)==x815)|x816);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x817 = INT8_MAX;
	int64_t x818 = -73823398LL;
	int8_t x820 = INT8_MAX;

    t185 = (((x817-x818)==x819)|x820);

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x821 = UINT64_MAX;
	int64_t x822 = INT64_MIN;
	int16_t x824 = INT16_MIN;
	volatile int32_t t186 = -13;

    t186 = (((x821-x822)==x823)|x824);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x825 = -958;
	int16_t x827 = INT16_MIN;
	int64_t x828 = INT64_MIN;
	static int64_t t187 = INT64_MIN;

    t187 = (((x825-x826)==x827)|x828);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x829 = -1;
	volatile int32_t x830 = 23167001;
	volatile int16_t x831 = 2;
	int64_t x832 = INT64_MIN;
	volatile int64_t t188 = INT64_MIN;

    t188 = (((x829-x830)==x831)|x832);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x834 = INT64_MAX;
	uint64_t x836 = UINT64_MAX;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (((x833-x834)==x835)|x836);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x838 = UINT64_MAX;
	uint16_t x839 = 0U;
	int16_t x840 = INT16_MAX;
	int32_t t190 = 344082;

    t190 = (((x837-x838)==x839)|x840);

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x841 = UINT64_MAX;
	uint32_t x842 = 1390426U;
	volatile uint64_t x843 = UINT64_MAX;
	int32_t x844 = -1;
	volatile int32_t t191 = 762116508;

    t191 = (((x841-x842)==x843)|x844);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x845 = 133264071838945LL;
	volatile int32_t x846 = -1;
	int8_t x847 = -1;
	volatile int32_t t192 = -38;

    t192 = (((x845-x846)==x847)|x848);

    if (t192 != 67) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x851 = 0U;
	uint32_t t193 = UINT32_MAX;

    t193 = (((x849-x850)==x851)|x852);

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x854 = 9174863467523083LL;
	static int16_t x855 = INT16_MAX;
	int64_t x856 = INT64_MIN;
	static int64_t t194 = INT64_MIN;

    t194 = (((x853-x854)==x855)|x856);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x857 = INT16_MIN;
	int16_t x858 = -771;
	int8_t x859 = INT8_MIN;
	volatile int32_t t195 = 67767200;

    t195 = (((x857-x858)==x859)|x860);

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x861 = INT16_MIN;
	int8_t x862 = 1;
	int64_t x863 = 11414725900138496LL;
	static volatile int16_t x864 = INT16_MAX;
	static volatile int32_t t196 = 950210;

    t196 = (((x861-x862)==x863)|x864);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x866 = -1;
	static int64_t x868 = -1LL;

    t197 = (((x865-x866)==x867)|x868);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x873 = UINT64_MAX;
	static volatile int8_t x874 = INT8_MAX;
	uint16_t x876 = UINT16_MAX;

    t198 = (((x873-x874)==x875)|x876);

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x881 = 2;
	volatile uint8_t x883 = 37U;
	int16_t x884 = INT16_MAX;

    t199 = (((x881-x882)==x883)|x884);

    if (t199 != 32767) { NG(); } else { ; }
	
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

