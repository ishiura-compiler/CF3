
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

uint8_t x8 = 90U;
int64_t x11 = INT64_MIN;
uint8_t x12 = 3U;
volatile uint32_t x15 = 2U;
static int8_t x23 = INT8_MIN;
static volatile int32_t t6 = -511116332;
static volatile int32_t t8 = -6;
int32_t t9 = -5416688;
int32_t t11 = -13;
int16_t x54 = INT16_MIN;
static int32_t x56 = INT32_MIN;
int32_t t14 = 326036733;
volatile int32_t t16 = 541;
int16_t x75 = -1951;
int16_t x80 = INT16_MIN;
int16_t x82 = INT16_MIN;
uint64_t x88 = 267097409046LLU;
volatile int32_t t22 = -3;
volatile int64_t x98 = 324LL;
volatile int16_t x99 = INT16_MIN;
int32_t x100 = INT32_MIN;
int8_t x101 = -1;
uint32_t x102 = 15U;
int8_t x106 = INT8_MAX;
static int32_t x115 = INT32_MIN;
int16_t x117 = INT16_MAX;
static volatile int64_t x120 = INT64_MIN;
static int8_t x121 = INT8_MIN;
volatile int32_t t30 = 4;
static int16_t x140 = 139;
int16_t x150 = -760;
int8_t x160 = -1;
int32_t t39 = 0;
volatile uint16_t x161 = UINT16_MAX;
int8_t x163 = INT8_MIN;
static int64_t x171 = INT64_MAX;
uint64_t x172 = 127111LLU;
volatile int32_t t45 = 480308;
int16_t x185 = -1;
int32_t x186 = -1;
volatile uint64_t x188 = UINT64_MAX;
volatile uint64_t x189 = UINT64_MAX;
static int32_t x192 = -47990642;
static int8_t x193 = -48;
int16_t x197 = INT16_MAX;
int64_t x198 = 281748812142174LL;
volatile uint64_t x199 = 172324550582202884LLU;
static int32_t t49 = 299131682;
int32_t x201 = INT32_MIN;
int32_t x203 = 1687;
int8_t x210 = INT8_MIN;
int32_t x218 = INT32_MIN;
volatile int32_t t56 = -32218278;
volatile int32_t t57 = -44;
int64_t x242 = INT64_MIN;
int32_t x244 = -1;
uint32_t x245 = 3U;
uint8_t x246 = 1U;
int16_t x252 = -1;
int8_t x254 = INT8_MAX;
static int16_t x266 = INT16_MIN;
int8_t x267 = 15;
uint32_t x269 = 1083U;
int16_t x277 = -21;
uint32_t x278 = UINT32_MAX;
static int8_t x279 = 1;
int8_t x280 = INT8_MAX;
int32_t t68 = 41;
int8_t x290 = 6;
int32_t t71 = 312462719;
uint16_t x293 = UINT16_MAX;
int16_t x294 = 6020;
volatile int64_t x296 = -1LL;
volatile int16_t x304 = INT16_MIN;
volatile int32_t t74 = 553;
int64_t x310 = -1LL;
int64_t x313 = INT64_MIN;
static volatile int32_t t78 = -3360770;
volatile int8_t x326 = 1;
static volatile int16_t x327 = INT16_MIN;
int8_t x328 = INT8_MIN;
volatile int32_t t82 = 3541682;
int16_t x339 = INT16_MAX;
static uint16_t x358 = 4102U;
volatile int32_t x364 = -2;
volatile int32_t t89 = 653;
int64_t x365 = INT64_MAX;
static int64_t x368 = -7593875172377144LL;
int32_t t90 = 2369;
static uint32_t x372 = UINT32_MAX;
int64_t x376 = INT64_MIN;
volatile int64_t x378 = -1LL;
int64_t x386 = -1LL;
uint16_t x397 = 4U;
int32_t x398 = -1;
volatile int32_t t98 = -867;
volatile int64_t x408 = -1LL;
static int32_t x412 = 59;
int32_t t101 = 6172;
volatile int16_t x418 = -3550;
volatile int64_t x424 = INT64_MAX;
volatile uint8_t x430 = UINT8_MAX;
int16_t x433 = INT16_MIN;
int32_t x435 = 608122;
int64_t x444 = INT64_MAX;
int64_t x445 = 54LL;
static volatile int32_t x447 = -1;
volatile uint64_t x448 = UINT64_MAX;
int32_t x452 = -1;
int32_t x453 = INT32_MIN;
volatile int32_t t111 = -568108;
static int16_t x472 = -486;
volatile int32_t t115 = 1723610;
int32_t x477 = INT32_MIN;
int64_t x478 = 131464803060248LL;
volatile int64_t x480 = INT64_MIN;
volatile int8_t x483 = INT8_MIN;
static int16_t x487 = INT16_MAX;
int64_t x490 = -835948107LL;
static int16_t x493 = INT16_MAX;
int32_t t121 = 2885;
volatile int32_t t122 = -87;
static int64_t x502 = -1LL;
int16_t x504 = 2709;
volatile uint64_t x513 = 290394737LLU;
int32_t t126 = 271129981;
int16_t x520 = -784;
int16_t x521 = 37;
static int16_t x524 = -1;
static int32_t x538 = -1292;
uint16_t x548 = 35U;
static int64_t x551 = INT64_MIN;
int64_t x554 = 0LL;
int64_t x557 = INT64_MAX;
uint8_t x562 = UINT8_MAX;
volatile int8_t x563 = -1;
uint8_t x565 = 33U;
static volatile int32_t t139 = 1;
int32_t x573 = 11;
volatile int64_t x576 = -1LL;
volatile int16_t x580 = INT16_MAX;
uint8_t x582 = 11U;
int32_t t143 = -765;
uint8_t x585 = 1U;
volatile int32_t x587 = INT32_MAX;
static int16_t x590 = INT16_MIN;
int64_t x593 = INT64_MIN;
int8_t x596 = -1;
int32_t x607 = -99;
volatile int8_t x610 = INT8_MIN;
static int64_t x611 = -246150403LL;
int32_t x612 = -1;
static volatile int32_t x613 = INT32_MAX;
volatile int8_t x618 = INT8_MIN;
static int64_t x619 = 1801310LL;
int8_t x623 = INT8_MIN;
int8_t x632 = INT8_MIN;
volatile int64_t x635 = INT64_MIN;
int64_t x639 = 1636821626096LL;
static int16_t x643 = -589;
int32_t t158 = 23659;
static int32_t t159 = -916495;
int32_t x668 = -1;
uint16_t x672 = UINT16_MAX;
uint16_t x674 = 281U;
int8_t x675 = INT8_MAX;
volatile int32_t t167 = 864014;
uint32_t x689 = 4U;
static volatile int16_t x693 = 1756;
int16_t x697 = INT16_MIN;
int64_t x698 = 3143812363256LL;
int16_t x702 = 419;
int32_t x712 = 1016358901;
int32_t x718 = -1;
int8_t x723 = INT8_MAX;
volatile uint64_t x729 = 19846610714LLU;
int16_t x730 = -7484;
int32_t t179 = 100561227;
int32_t t180 = 14018;
static volatile uint64_t x740 = UINT64_MAX;
int64_t x741 = 34411638331653LL;
static int16_t x748 = INT16_MIN;
volatile int32_t t184 = 371;
uint8_t x767 = 11U;
int32_t x770 = INT32_MIN;
int16_t x777 = -60;
int32_t t193 = -3;
uint16_t x796 = 5U;
volatile int32_t t195 = -2447101;
static int32_t t196 = 912604886;
uint8_t x803 = UINT8_MAX;
int32_t x812 = -15197;


void f0(void) {
    	volatile uint64_t x1 = 545078503013018243LLU;
	int16_t x2 = -336;
	int16_t x3 = -1;
	int8_t x4 = 13;
	int32_t t0 = 1;

    t0 = ((x1<=x2)>(x3%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 41924U;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = 1931U;
	volatile int32_t t1 = -36849;

    t1 = ((x5<=x6)>(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int64_t x10 = 11505544LL;
	int32_t t2 = 2;

    t2 = ((x9<=x10)>(x11%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 13672U;
	int32_t x14 = -1;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 1;

    t3 = ((x13<=x14)>(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = 10155;

    t4 = ((x17<=x18)>(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 14;
	int32_t x22 = 2;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -2547758;

    t5 = ((x21<=x22)>(x23%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 9U;
	uint16_t x27 = 29U;
	int16_t x28 = -1;

    t6 = ((x25<=x26)>(x27%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int16_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	static int64_t x32 = -249790009534LL;
	volatile int32_t t7 = 533639004;

    t7 = ((x29<=x30)>(x31%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;

    t8 = ((x33<=x34)>(x35%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 5;
	static int32_t x38 = 33221415;
	uint64_t x39 = 3728569905481958LLU;
	int8_t x40 = 2;

    t9 = ((x37<=x38)>(x39%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = -24;
	volatile uint64_t x44 = 216LLU;
	volatile int32_t t10 = -149456;

    t10 = ((x41<=x42)>(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = 92209LL;
	int64_t x46 = -317586493735562LL;
	volatile int32_t x47 = -1;
	int16_t x48 = INT16_MAX;

    t11 = ((x45<=x46)>(x47%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -6;

    t12 = ((x49<=x50)>(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x55 = -2515608679LL;
	volatile int32_t t13 = 13821555;

    t13 = ((x53<=x54)>(x55%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 139002932LLU;
	uint16_t x58 = 357U;
	int64_t x59 = -86032037941650LL;
	int8_t x60 = INT8_MAX;

    t14 = ((x57<=x58)>(x59%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 14;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 133558625LLU;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 0;

    t15 = ((x61<=x62)>(x63%x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	static int32_t x66 = INT32_MIN;
	static volatile int32_t x67 = INT32_MIN;
	uint8_t x68 = 1U;

    t16 = ((x65<=x66)>(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint64_t x70 = 62923219LLU;
	uint64_t x71 = 142759014112910494LLU;
	uint32_t x72 = 249U;
	volatile int32_t t17 = -4115752;

    t17 = ((x69<=x70)>(x71%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 4U;
	uint8_t x74 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -3;

    t18 = ((x73<=x74)>(x75%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x77 = 113U;
	volatile int64_t x78 = -1LL;
	static uint64_t x79 = 7471743LLU;
	volatile int32_t t19 = 4851;

    t19 = ((x77<=x78)>(x79%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	volatile uint8_t x83 = 24U;
	volatile uint16_t x84 = 1U;
	volatile int32_t t20 = -6956826;

    t20 = ((x81<=x82)>(x83%x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int32_t x87 = -1;
	volatile int32_t t21 = -13420;

    t21 = ((x85<=x86)>(x87%x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint32_t x90 = UINT32_MAX;
	static uint32_t x91 = 297686711U;
	int32_t x92 = INT32_MAX;

    t22 = ((x89<=x90)>(x91%x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 708216LLU;
	static volatile int8_t x94 = -1;
	volatile int32_t x95 = -11600582;
	int8_t x96 = -1;
	volatile int32_t t23 = -56;

    t23 = ((x93<=x94)>(x95%x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int32_t t24 = 8307023;

    t24 = ((x97<=x98)>(x99%x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 6U;
	int32_t t25 = -3;

    t25 = ((x101<=x102)>(x103%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -1611926504559510674LL;
	uint16_t x107 = 11424U;
	volatile int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -1;

    t26 = ((x105<=x106)>(x107%x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 974514U;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = 16606LL;
	int8_t x112 = -1;
	static int32_t t27 = -495334;

    t27 = ((x109<=x110)>(x111%x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	int32_t x116 = -1;
	static volatile int32_t t28 = 11368276;

    t28 = ((x113<=x114)>(x115%x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = 12438;
	volatile int64_t x119 = -45045802703LL;
	int32_t t29 = -16;

    t29 = ((x117<=x118)>(x119%x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x122 = 3LLU;
	uint32_t x123 = 22U;
	int64_t x124 = INT64_MIN;

    t30 = ((x121<=x122)>(x123%x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	volatile uint16_t x128 = 6120U;
	volatile int32_t t31 = -15287;

    t31 = ((x125<=x126)>(x127%x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = -2;
	volatile int64_t x131 = -1LL;
	int64_t x132 = 9LL;
	int32_t t32 = -501;

    t32 = ((x129<=x130)>(x131%x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -1392338819789596LL;
	int16_t x134 = 1466;
	uint32_t x135 = 25311058U;
	volatile uint64_t x136 = UINT64_MAX;
	volatile int32_t t33 = 0;

    t33 = ((x133<=x134)>(x135%x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 307412297U;
	static int64_t x139 = INT64_MIN;
	static volatile int32_t t34 = 29;

    t34 = ((x137<=x138)>(x139%x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x141 = UINT8_MAX;
	int64_t x142 = -4263432101474210LL;
	volatile int8_t x143 = -3;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = -24671;

    t35 = ((x141<=x142)>(x143%x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -11;
	uint64_t x146 = UINT64_MAX;
	volatile int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 33532041;

    t36 = ((x145<=x146)>(x147%x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	static int32_t x152 = -234529;
	volatile int32_t t37 = 6;

    t37 = ((x149<=x150)>(x151%x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	static uint64_t x154 = UINT64_MAX;
	static int8_t x155 = 2;
	static uint32_t x156 = 457U;
	volatile int32_t t38 = -15224;

    t38 = ((x153<=x154)>(x155%x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 120U;
	static int8_t x158 = INT8_MIN;
	volatile uint32_t x159 = 135U;

    t39 = ((x157<=x158)>(x159%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x162 = INT8_MIN;
	int16_t x164 = 7793;
	int32_t t40 = 138241815;

    t40 = ((x161<=x162)>(x163%x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -477951750;
	static uint32_t x166 = UINT32_MAX;
	int64_t x167 = 100124845179934LL;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 12253;

    t41 = ((x165<=x166)>(x167%x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MIN;
	int32_t t42 = 383829;

    t42 = ((x169<=x170)>(x171%x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint8_t x173 = 103U;
	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MAX;
	int8_t x176 = 8;
	volatile int32_t t43 = 13781973;

    t43 = ((x173<=x174)>(x175%x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x177 = 0U;
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 1U;
	uint32_t x180 = UINT32_MAX;
	static volatile int32_t t44 = 2112481;

    t44 = ((x177<=x178)>(x179%x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	volatile uint64_t x182 = 5368147470896007LLU;
	int8_t x183 = INT8_MAX;
	int16_t x184 = INT16_MIN;

    t45 = ((x181<=x182)>(x183%x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x187 = -1;
	static volatile int32_t t46 = -1596;

    t46 = ((x185<=x186)>(x187%x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x190 = INT32_MAX;
	int32_t x191 = INT32_MIN;
	volatile int32_t t47 = 66622;

    t47 = ((x189<=x190)>(x191%x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = 11718;
	int64_t x195 = INT64_MIN;
	int16_t x196 = -6650;
	volatile int32_t t48 = 2382021;

    t48 = ((x193<=x194)>(x195%x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x200 = -1;

    t49 = ((x197<=x198)>(x199%x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x202 = -1LL;
	static volatile uint8_t x204 = 1U;
	volatile int32_t t50 = 457;

    t50 = ((x201<=x202)>(x203%x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	static uint64_t x207 = 279279610LLU;
	int8_t x208 = -1;
	volatile int32_t t51 = -77;

    t51 = ((x205<=x206)>(x207%x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = 117;
	static int16_t x211 = INT16_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = 110451;

    t52 = ((x209<=x210)>(x211%x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 2900U;
	int32_t x214 = INT32_MIN;
	int8_t x215 = 17;
	uint16_t x216 = 3954U;
	int32_t t53 = -14099;

    t53 = ((x213<=x214)>(x215%x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = -912739;

    t54 = ((x217<=x218)>(x219%x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 60;
	volatile int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	static int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -61935996;

    t55 = ((x221<=x222)>(x223%x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MAX;

    t56 = ((x225<=x226)>(x227%x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	static int32_t x231 = INT32_MAX;
	volatile int64_t x232 = -1LL;

    t57 = ((x229<=x230)>(x231%x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = -96390LL;
	int8_t x235 = INT8_MIN;
	static uint16_t x236 = 14896U;
	volatile int32_t t58 = -210;

    t58 = ((x233<=x234)>(x235%x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = -1;
	int64_t x238 = -556706LL;
	uint16_t x239 = 902U;
	volatile int8_t x240 = 1;
	int32_t t59 = 3252;

    t59 = ((x237<=x238)>(x239%x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	int32_t t60 = -359;

    t60 = ((x241<=x242)>(x243%x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 640U;
	int32_t t61 = -1;

    t61 = ((x245<=x246)>(x247%x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x249 = 1;
	volatile int64_t x250 = -1LL;
	uint16_t x251 = 2U;
	int32_t t62 = 437042;

    t62 = ((x249<=x250)>(x251%x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 1LL;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 189LLU;
	int32_t t63 = -119435742;

    t63 = ((x253<=x254)>(x255%x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	static int32_t t64 = -4;

    t64 = ((x257<=x258)>(x259%x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = 2283484;
	uint8_t x268 = 59U;
	volatile int32_t t65 = 368377203;

    t65 = ((x265<=x266)>(x267%x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x270 = 12U;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t66 = 14607102;

    t66 = ((x269<=x270)>(x271%x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x273 = 8U;
	int32_t x274 = INT32_MIN;
	volatile int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t67 = 1043134;

    t67 = ((x273<=x274)>(x275%x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    

    t68 = ((x277<=x278)>(x279%x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 164005LLU;
	uint8_t x283 = 31U;
	uint32_t x284 = 3766U;
	volatile int32_t t69 = 48901;

    t69 = ((x281<=x282)>(x283%x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	uint8_t x287 = 23U;
	int64_t x288 = INT64_MAX;
	static volatile int32_t t70 = 8149056;

    t70 = ((x285<=x286)>(x287%x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x289 = UINT8_MAX;
	static uint64_t x291 = 22203250971054LLU;
	volatile int64_t x292 = INT64_MAX;

    t71 = ((x289<=x290)>(x291%x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x295 = -1;
	volatile int32_t t72 = -63386367;

    t72 = ((x293<=x294)>(x295%x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 9U;
	int32_t x300 = INT32_MAX;
	int32_t t73 = -59;

    t73 = ((x297<=x298)>(x299%x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = -3;
	volatile int32_t x303 = 253334;

    t74 = ((x301<=x302)>(x303%x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -1LL;
	volatile int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	static int32_t t75 = -502313548;

    t75 = ((x305<=x306)>(x307%x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x309 = INT8_MAX;
	static int16_t x311 = 746;
	int32_t x312 = 61;
	static volatile int32_t t76 = 5534;

    t76 = ((x309<=x310)>(x311%x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x314 = 7U;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 2932U;
	int32_t t77 = 84589478;

    t77 = ((x313<=x314)>(x315%x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x317 = 7;
	int8_t x318 = -57;
	int32_t x319 = INT32_MIN;
	int16_t x320 = -1137;

    t78 = ((x317<=x318)>(x319%x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MAX;
	int64_t x322 = 10268724680339LL;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = INT16_MAX;
	int32_t t79 = 47;

    t79 = ((x321<=x322)>(x323%x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = 65;
	int32_t t80 = 580586;

    t80 = ((x325<=x326)>(x327%x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = UINT64_MAX;
	static volatile int16_t x332 = INT16_MAX;
	int32_t t81 = 3035;

    t81 = ((x329<=x330)>(x331%x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = 248;
	int64_t x334 = -1033588080765778LL;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 7486084LLU;

    t82 = ((x333<=x334)>(x335%x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x337 = INT32_MIN;
	volatile int64_t x338 = INT64_MAX;
	int64_t x340 = 893416958284LL;
	int32_t t83 = -75709375;

    t83 = ((x337<=x338)>(x339%x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = 1;
	static int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t84 = -65582;

    t84 = ((x341<=x342)>(x343%x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = INT32_MIN;
	static int64_t x346 = -1LL;
	uint64_t x347 = 675087613LLU;
	int8_t x348 = -59;
	static int32_t t85 = -103;

    t85 = ((x345<=x346)>(x347%x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MIN;
	volatile uint32_t x352 = 24942237U;
	volatile int32_t t86 = 5710959;

    t86 = ((x349<=x350)>(x351%x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x354 = -1LL;
	static uint32_t x355 = 1132409U;
	volatile int8_t x356 = -1;
	volatile int32_t t87 = -779008824;

    t87 = ((x353<=x354)>(x355%x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = 44U;
	volatile int32_t x359 = 748734359;
	volatile int32_t x360 = INT32_MIN;
	int32_t t88 = 66106082;

    t88 = ((x357<=x358)>(x359%x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x361 = 57053449;
	int32_t x362 = -4;
	int32_t x363 = INT32_MAX;

    t89 = ((x361<=x362)>(x363%x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x366 = 8758776LLU;
	volatile uint32_t x367 = 7900406U;

    t90 = ((x365<=x366)>(x367%x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = 10U;
	int64_t x370 = -1LL;
	uint16_t x371 = 1054U;
	int32_t t91 = 258573581;

    t91 = ((x369<=x370)>(x371%x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint16_t x374 = 26463U;
	volatile int64_t x375 = -1LL;
	volatile int32_t t92 = -2548;

    t92 = ((x373<=x374)>(x375%x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x377 = INT16_MIN;
	static uint16_t x379 = 7897U;
	uint32_t x380 = 14883U;
	volatile int32_t t93 = 43936;

    t93 = ((x377<=x378)>(x379%x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x381 = UINT16_MAX;
	int8_t x382 = 1;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t94 = 6309;

    t94 = ((x381<=x382)>(x383%x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = 615U;
	uint64_t x387 = 31261003LLU;
	int64_t x388 = INT64_MIN;
	static int32_t t95 = 109530;

    t95 = ((x385<=x386)>(x387%x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x389 = 22315U;
	volatile int16_t x390 = INT16_MAX;
	static int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	static int32_t t96 = -2;

    t96 = ((x389<=x390)>(x391%x392));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = 385735776U;
	int16_t x394 = -39;
	int8_t x395 = -1;
	static int64_t x396 = 1927087270LL;
	int32_t t97 = -1006949;

    t97 = ((x393<=x394)>(x395%x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x399 = 0;
	int64_t x400 = -1LL;

    t98 = ((x397<=x398)>(x399%x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = INT16_MIN;
	static volatile int8_t x402 = 6;
	int16_t x403 = INT16_MIN;
	static int64_t x404 = -1LL;
	volatile int32_t t99 = -2;

    t99 = ((x401<=x402)>(x403%x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x405 = -11758;
	volatile int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MAX;
	volatile int32_t t100 = 1;

    t100 = ((x405<=x406)>(x407%x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x409 = 553143162347293913LLU;
	int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MAX;

    t101 = ((x409<=x410)>(x411%x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = INT8_MIN;
	static int8_t x414 = 4;
	static uint32_t x415 = UINT32_MAX;
	static uint16_t x416 = 2U;
	int32_t t102 = -2723;

    t102 = ((x413<=x414)>(x415%x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x417 = INT8_MIN;
	uint32_t x419 = UINT32_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t103 = -25765;

    t103 = ((x417<=x418)>(x419%x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = INT8_MAX;
	uint16_t x422 = 24U;
	volatile uint32_t x423 = 4395438U;
	int32_t t104 = 58;

    t104 = ((x421<=x422)>(x423%x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x425 = -1;
	uint8_t x426 = UINT8_MAX;
	int64_t x427 = 32310614LL;
	uint8_t x428 = 10U;
	volatile int32_t t105 = 1;

    t105 = ((x425<=x426)>(x427%x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x429 = -2459;
	uint32_t x431 = 100703333U;
	int32_t x432 = -1;
	int32_t t106 = 1;

    t106 = ((x429<=x430)>(x431%x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x434 = -1LL;
	int8_t x436 = -1;
	volatile int32_t t107 = 508;

    t107 = ((x433<=x434)>(x435%x436));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = 15332;
	int64_t x442 = 13175394539LL;
	uint16_t x443 = 29003U;
	int32_t t108 = -4;

    t108 = ((x441<=x442)>(x443%x444));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x446 = 46U;
	volatile int32_t t109 = -1;

    t109 = ((x445<=x446)>(x447%x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = 1315;
	static volatile int16_t x451 = 11;
	static volatile int32_t t110 = -120;

    t110 = ((x449<=x450)>(x451%x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x454 = 115U;
	volatile uint32_t x455 = 5643U;
	static volatile uint32_t x456 = 2008563553U;

    t111 = ((x453<=x454)>(x455%x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x457 = 1;
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t112 = -69;

    t112 = ((x457<=x458)>(x459%x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = INT64_MIN;
	volatile uint8_t x462 = UINT8_MAX;
	int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MAX;
	static volatile int32_t t113 = 1584714;

    t113 = ((x461<=x462)>(x463%x464));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x465 = 5U;
	volatile uint16_t x466 = UINT16_MAX;
	int8_t x467 = -1;
	int16_t x468 = INT16_MIN;
	volatile int32_t t114 = 173;

    t114 = ((x465<=x466)>(x467%x468));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x469 = 595U;
	static int8_t x470 = INT8_MIN;
	int32_t x471 = INT32_MIN;

    t115 = ((x469<=x470)>(x471%x472));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = INT16_MAX;
	int32_t x474 = INT32_MIN;
	static uint16_t x475 = 4080U;
	int8_t x476 = 52;
	int32_t t116 = 7;

    t116 = ((x473<=x474)>(x475%x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x479 = 7436LLU;
	int32_t t117 = -2827;

    t117 = ((x477<=x478)>(x479%x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x481 = 3931U;
	uint32_t x482 = 17181409U;
	int16_t x484 = -29;
	volatile int32_t t118 = 208739252;

    t118 = ((x481<=x482)>(x483%x484));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	int64_t x488 = 58921943275916351LL;
	int32_t t119 = 136580;

    t119 = ((x485<=x486)>(x487%x488));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x489 = -1LL;
	uint8_t x491 = UINT8_MAX;
	static uint8_t x492 = UINT8_MAX;
	int32_t t120 = 398465;

    t120 = ((x489<=x490)>(x491%x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x494 = 26340409611336113LLU;
	volatile uint8_t x495 = 115U;
	uint8_t x496 = 3U;

    t121 = ((x493<=x494)>(x495%x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x497 = 0U;
	static int16_t x498 = INT16_MIN;
	uint8_t x499 = 55U;
	uint32_t x500 = UINT32_MAX;

    t122 = ((x497<=x498)>(x499%x500));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = -350991257132096LL;
	int16_t x503 = -1;
	int32_t t123 = 164268842;

    t123 = ((x501<=x502)>(x503%x504));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile uint8_t x506 = 1U;
	int16_t x507 = INT16_MAX;
	uint16_t x508 = 32687U;
	static volatile int32_t t124 = 342878543;

    t124 = ((x505<=x506)>(x507%x508));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x509 = INT32_MAX;
	int8_t x510 = 7;
	int64_t x511 = 309983224808LL;
	static int32_t x512 = 17829;
	int32_t t125 = 2052;

    t125 = ((x509<=x510)>(x511%x512));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x514 = -4LL;
	int8_t x515 = INT8_MAX;
	uint8_t x516 = 52U;

    t126 = ((x513<=x514)>(x515%x516));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x517 = INT32_MIN;
	static int32_t x518 = 1917;
	int8_t x519 = -1;
	volatile int32_t t127 = 12778;

    t127 = ((x517<=x518)>(x519%x520));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x522 = 209004976290398475LLU;
	uint32_t x523 = UINT32_MAX;
	int32_t t128 = -11;

    t128 = ((x521<=x522)>(x523%x524));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x525 = 2701U;
	static volatile uint8_t x526 = 1U;
	static int8_t x527 = -7;
	int32_t x528 = 43;
	static int32_t t129 = -6;

    t129 = ((x525<=x526)>(x527%x528));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x529 = 950719138U;
	volatile uint64_t x530 = UINT64_MAX;
	int64_t x531 = -1LL;
	int8_t x532 = -9;
	volatile int32_t t130 = -789;

    t130 = ((x529<=x530)>(x531%x532));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = -1303311;
	volatile uint64_t x534 = 1310007LLU;
	uint8_t x535 = UINT8_MAX;
	int32_t x536 = -1;
	int32_t t131 = 9325;

    t131 = ((x533<=x534)>(x535%x536));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x539 = INT32_MIN;
	volatile int16_t x540 = 9;
	int32_t t132 = 79673437;

    t132 = ((x537<=x538)>(x539%x540));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x541 = UINT8_MAX;
	int8_t x542 = INT8_MIN;
	volatile uint8_t x543 = 2U;
	int32_t x544 = 108473;
	int32_t t133 = 155;

    t133 = ((x541<=x542)>(x543%x544));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x545 = INT8_MIN;
	volatile int64_t x546 = -1LL;
	uint16_t x547 = 93U;
	static volatile int32_t t134 = -268111447;

    t134 = ((x545<=x546)>(x547%x548));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x549 = 0;
	int64_t x550 = INT64_MIN;
	int8_t x552 = -1;
	volatile int32_t t135 = 325;

    t135 = ((x549<=x550)>(x551%x552));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x553 = UINT32_MAX;
	int8_t x555 = -3;
	volatile int8_t x556 = INT8_MAX;
	static volatile int32_t t136 = 71841;

    t136 = ((x553<=x554)>(x555%x556));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x558 = INT16_MIN;
	static int8_t x559 = INT8_MAX;
	static uint16_t x560 = UINT16_MAX;
	int32_t t137 = -235729;

    t137 = ((x557<=x558)>(x559%x560));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = -28;
	volatile int32_t x564 = 17;
	int32_t t138 = -309110;

    t138 = ((x561<=x562)>(x563%x564));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x566 = UINT16_MAX;
	volatile int8_t x567 = -3;
	int32_t x568 = -11;

    t139 = ((x565<=x566)>(x567%x568));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x569 = INT64_MIN;
	volatile int64_t x570 = 877694LL;
	int32_t x571 = -134504;
	volatile uint16_t x572 = UINT16_MAX;
	int32_t t140 = -515383121;

    t140 = ((x569<=x570)>(x571%x572));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x574 = -25;
	static uint8_t x575 = UINT8_MAX;
	static int32_t t141 = -69293;

    t141 = ((x573<=x574)>(x575%x576));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = -912695;
	uint16_t x578 = 26U;
	int32_t x579 = INT32_MIN;
	volatile int32_t t142 = -49291;

    t142 = ((x577<=x578)>(x579%x580));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x581 = 1303U;
	uint16_t x583 = 196U;
	int32_t x584 = -7262;

    t143 = ((x581<=x582)>(x583%x584));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x586 = 0;
	int8_t x588 = INT8_MAX;
	static volatile int32_t t144 = 1783758;

    t144 = ((x585<=x586)>(x587%x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x589 = UINT64_MAX;
	uint16_t x591 = UINT16_MAX;
	int32_t x592 = INT32_MAX;
	int32_t t145 = 143137902;

    t145 = ((x589<=x590)>(x591%x592));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x594 = -3839354262506969LL;
	int64_t x595 = -1LL;
	static int32_t t146 = 8592108;

    t146 = ((x593<=x594)>(x595%x596));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x598 = INT32_MIN;
	volatile int16_t x599 = 2;
	static uint16_t x600 = UINT16_MAX;
	volatile int32_t t147 = 8;

    t147 = ((x597<=x598)>(x599%x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x601 = 294;
	uint32_t x602 = 9008282U;
	int64_t x603 = INT64_MAX;
	int32_t x604 = 792;
	static int32_t t148 = -801;

    t148 = ((x601<=x602)>(x603%x604));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x605 = -1;
	uint8_t x606 = UINT8_MAX;
	volatile uint32_t x608 = 16U;
	volatile int32_t t149 = 12;

    t149 = ((x605<=x606)>(x607%x608));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x609 = 2115;
	int32_t t150 = 25688211;

    t150 = ((x609<=x610)>(x611%x612));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x614 = -1;
	volatile uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 1U;
	volatile int32_t t151 = 127;

    t151 = ((x613<=x614)>(x615%x616));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	int8_t x620 = INT8_MIN;
	int32_t t152 = -7320;

    t152 = ((x617<=x618)>(x619%x620));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x621 = UINT16_MAX;
	volatile uint8_t x622 = 24U;
	int64_t x624 = -4301208605LL;
	static int32_t t153 = -128;

    t153 = ((x621<=x622)>(x623%x624));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x625 = 13U;
	int16_t x626 = -1;
	int64_t x627 = -1LL;
	uint8_t x628 = 13U;
	int32_t t154 = -8;

    t154 = ((x625<=x626)>(x627%x628));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x629 = -4040;
	int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MAX;
	int32_t t155 = 1;

    t155 = ((x629<=x630)>(x631%x632));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x633 = INT16_MAX;
	uint16_t x634 = 163U;
	volatile int8_t x636 = 2;
	volatile int32_t t156 = 38149;

    t156 = ((x633<=x634)>(x635%x636));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x637 = -1LL;
	int8_t x638 = -10;
	int8_t x640 = -2;
	int32_t t157 = -14608;

    t157 = ((x637<=x638)>(x639%x640));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x641 = 8371805557LL;
	int8_t x642 = INT8_MIN;
	static int64_t x644 = -1LL;

    t158 = ((x641<=x642)>(x643%x644));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x645 = UINT16_MAX;
	static volatile uint8_t x646 = 0U;
	int32_t x647 = INT32_MIN;
	int32_t x648 = INT32_MAX;

    t159 = ((x645<=x646)>(x647%x648));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x649 = UINT64_MAX;
	uint8_t x650 = UINT8_MAX;
	volatile uint32_t x651 = UINT32_MAX;
	int32_t x652 = INT32_MIN;
	volatile int32_t t160 = 169;

    t160 = ((x649<=x650)>(x651%x652));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x653 = 3807;
	uint64_t x654 = UINT64_MAX;
	static int64_t x655 = INT64_MIN;
	int8_t x656 = 5;
	int32_t t161 = 4123913;

    t161 = ((x653<=x654)>(x655%x656));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x657 = INT8_MAX;
	int32_t x658 = INT32_MIN;
	int64_t x659 = 10413602286LL;
	uint64_t x660 = 861932LLU;
	volatile int32_t t162 = -746;

    t162 = ((x657<=x658)>(x659%x660));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x665 = 0U;
	uint16_t x666 = 0U;
	static int8_t x667 = INT8_MIN;
	int32_t t163 = -2123;

    t163 = ((x665<=x666)>(x667%x668));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MAX;
	uint64_t x671 = 2368760395491366990LLU;
	int32_t t164 = -9604536;

    t164 = ((x669<=x670)>(x671%x672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x673 = 544;
	int16_t x676 = INT16_MAX;
	volatile int32_t t165 = -56;

    t165 = ((x673<=x674)>(x675%x676));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x677 = 5U;
	static int32_t x678 = 4045727;
	static volatile uint32_t x679 = 2011644U;
	int8_t x680 = INT8_MIN;
	volatile int32_t t166 = -979;

    t166 = ((x677<=x678)>(x679%x680));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x681 = 23741397LL;
	static int8_t x682 = -1;
	int8_t x683 = INT8_MIN;
	static int16_t x684 = -1;

    t167 = ((x681<=x682)>(x683%x684));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = INT32_MAX;
	uint64_t x687 = 1LLU;
	volatile uint8_t x688 = UINT8_MAX;
	volatile int32_t t168 = -3000676;

    t168 = ((x685<=x686)>(x687%x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x690 = INT32_MIN;
	static int16_t x691 = -1779;
	uint32_t x692 = 1796U;
	static volatile int32_t t169 = -976;

    t169 = ((x689<=x690)>(x691%x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x694 = INT8_MIN;
	volatile int32_t x695 = INT32_MAX;
	int8_t x696 = -1;
	static int32_t t170 = 1698409;

    t170 = ((x693<=x694)>(x695%x696));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x699 = 1U;
	uint16_t x700 = 6339U;
	int32_t t171 = -3929;

    t171 = ((x697<=x698)>(x699%x700));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x701 = 104560682005417702LL;
	volatile int64_t x703 = -1LL;
	int8_t x704 = INT8_MIN;
	int32_t t172 = 0;

    t172 = ((x701<=x702)>(x703%x704));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = INT8_MAX;
	int32_t x706 = INT32_MIN;
	static int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t173 = 462;

    t173 = ((x705<=x706)>(x707%x708));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x709 = 2U;
	int8_t x710 = INT8_MIN;
	int8_t x711 = -6;
	static int32_t t174 = 339634;

    t174 = ((x709<=x710)>(x711%x712));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = INT64_MIN;
	uint16_t x714 = 24684U;
	int8_t x715 = 0;
	static int64_t x716 = -1LL;
	volatile int32_t t175 = 378002851;

    t175 = ((x713<=x714)>(x715%x716));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x717 = -1;
	int8_t x719 = -5;
	static int16_t x720 = -11900;
	volatile int32_t t176 = -411;

    t176 = ((x717<=x718)>(x719%x720));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x721 = 2;
	int16_t x722 = INT16_MIN;
	int64_t x724 = INT64_MIN;
	int32_t t177 = -1974;

    t177 = ((x721<=x722)>(x723%x724));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x725 = 1884239LLU;
	uint32_t x726 = 652662300U;
	static volatile uint8_t x727 = 15U;
	int16_t x728 = -14028;
	int32_t t178 = 1;

    t178 = ((x725<=x726)>(x727%x728));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x731 = INT16_MAX;
	uint8_t x732 = 5U;

    t179 = ((x729<=x730)>(x731%x732));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x733 = -1;
	int8_t x734 = INT8_MIN;
	int32_t x735 = -1;
	int64_t x736 = 3174925017410LL;

    t180 = ((x733<=x734)>(x735%x736));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = -3638LL;
	static int32_t x738 = INT32_MIN;
	static int64_t x739 = INT64_MIN;
	int32_t t181 = -13223057;

    t181 = ((x737<=x738)>(x739%x740));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x742 = UINT32_MAX;
	volatile uint64_t x743 = 10748735379009702LLU;
	static int8_t x744 = -1;
	volatile int32_t t182 = 30;

    t182 = ((x741<=x742)>(x743%x744));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x745 = 220377611076LLU;
	int32_t x746 = INT32_MIN;
	int16_t x747 = INT16_MIN;
	int32_t t183 = 14848;

    t183 = ((x745<=x746)>(x747%x748));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x749 = 103620468973117LLU;
	volatile int16_t x750 = 178;
	uint16_t x751 = 72U;
	int32_t x752 = -1;

    t184 = ((x749<=x750)>(x751%x752));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x753 = UINT16_MAX;
	volatile int64_t x754 = 222082505LL;
	uint32_t x755 = 279411199U;
	int64_t x756 = INT64_MIN;
	volatile int32_t t185 = -9405190;

    t185 = ((x753<=x754)>(x755%x756));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x757 = INT8_MIN;
	volatile int64_t x758 = -1LL;
	int16_t x759 = -1;
	int16_t x760 = INT16_MAX;
	volatile int32_t t186 = 72993;

    t186 = ((x757<=x758)>(x759%x760));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile int8_t x762 = INT8_MIN;
	uint8_t x763 = 11U;
	volatile int16_t x764 = INT16_MIN;
	int32_t t187 = -6254;

    t187 = ((x761<=x762)>(x763%x764));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x765 = 75U;
	static int16_t x766 = INT16_MIN;
	int8_t x768 = -1;
	volatile int32_t t188 = 625;

    t188 = ((x765<=x766)>(x767%x768));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x769 = 1;
	volatile int64_t x771 = 2105LL;
	uint16_t x772 = 190U;
	static int32_t t189 = 585;

    t189 = ((x769<=x770)>(x771%x772));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x773 = -1;
	volatile int64_t x774 = INT64_MIN;
	uint8_t x775 = 2U;
	volatile uint8_t x776 = 7U;
	int32_t t190 = 7;

    t190 = ((x773<=x774)>(x775%x776));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x778 = -1LL;
	static int64_t x779 = -1LL;
	int8_t x780 = INT8_MAX;
	volatile int32_t t191 = -405415090;

    t191 = ((x777<=x778)>(x779%x780));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x781 = 0;
	volatile uint64_t x782 = 432300138950919LLU;
	int32_t x783 = -633250;
	int16_t x784 = INT16_MAX;
	volatile int32_t t192 = 1;

    t192 = ((x781<=x782)>(x783%x784));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x785 = -1;
	int8_t x786 = INT8_MIN;
	uint8_t x787 = 33U;
	uint64_t x788 = UINT64_MAX;

    t193 = ((x785<=x786)>(x787%x788));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = INT32_MIN;
	int8_t x790 = INT8_MIN;
	int64_t x791 = -9LL;
	static uint64_t x792 = 522114LLU;
	int32_t t194 = 523372;

    t194 = ((x789<=x790)>(x791%x792));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = INT32_MIN;
	volatile uint64_t x794 = 3LLU;
	int32_t x795 = -1;

    t195 = ((x793<=x794)>(x795%x796));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = 736427608U;
	volatile int16_t x798 = -1;
	int64_t x799 = 1931711LL;
	int32_t x800 = -1;

    t196 = ((x797<=x798)>(x799%x800));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x801 = 21;
	int32_t x802 = 13514138;
	uint32_t x804 = 282455U;
	int32_t t197 = -3980707;

    t197 = ((x801<=x802)>(x803%x804));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x805 = 28U;
	volatile int32_t x806 = INT32_MIN;
	int64_t x807 = INT64_MAX;
	int64_t x808 = INT64_MAX;
	int32_t t198 = -4005859;

    t198 = ((x805<=x806)>(x807%x808));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x809 = 617146415397LL;
	int8_t x810 = INT8_MAX;
	int16_t x811 = INT16_MIN;
	int32_t t199 = 245734159;

    t199 = ((x809<=x810)>(x811%x812));

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

