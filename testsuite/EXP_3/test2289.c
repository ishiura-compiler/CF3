
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

int16_t x1 = INT16_MIN;
static int8_t x8 = INT8_MIN;
static volatile uint64_t x13 = 13711LLU;
volatile int32_t x21 = INT32_MIN;
volatile int64_t x22 = INT64_MIN;
volatile uint16_t x28 = 337U;
volatile uint8_t x29 = 61U;
int64_t x35 = 4062413630384875LL;
uint8_t x36 = 0U;
static int64_t x37 = -1LL;
static volatile int8_t x38 = INT8_MIN;
int16_t x45 = -1;
volatile int8_t x48 = -1;
volatile int16_t x50 = -11;
int32_t x51 = INT32_MIN;
int32_t x54 = INT32_MIN;
uint64_t x68 = 52359940LLU;
int64_t x70 = 1190815251877710117LL;
volatile int16_t x71 = 15;
int32_t t17 = -131;
int32_t x77 = -1;
int64_t x84 = 2252609LL;
int8_t x85 = -1;
static int32_t x88 = -158633;
static int32_t t21 = -116574611;
int8_t x89 = INT8_MIN;
int16_t x91 = INT16_MIN;
static int32_t t23 = 6260;
static int8_t x98 = INT8_MAX;
static volatile int32_t x99 = 752440;
int32_t x102 = 68565898;
volatile uint16_t x106 = 26741U;
volatile uint64_t x111 = UINT64_MAX;
int16_t x117 = INT16_MAX;
static volatile uint8_t x119 = UINT8_MAX;
uint16_t x122 = UINT16_MAX;
int64_t x124 = 6152899LL;
int8_t x131 = INT8_MIN;
volatile int32_t t32 = -959179416;
static uint8_t x134 = UINT8_MAX;
int64_t x136 = -618LL;
static volatile int32_t t33 = 4850;
int64_t x141 = -7583382011540LL;
int32_t x143 = 2;
int32_t t35 = -80578;
int8_t x149 = -62;
static uint64_t x150 = UINT64_MAX;
int8_t x162 = INT8_MIN;
int8_t x164 = -1;
int8_t x167 = -1;
int16_t x170 = INT16_MIN;
int16_t x175 = -1;
uint8_t x178 = UINT8_MAX;
uint16_t x184 = 27U;
int8_t x185 = INT8_MIN;
volatile int32_t t48 = -2127394;
uint16_t x197 = 340U;
uint16_t x206 = UINT16_MAX;
int16_t x215 = 48;
int64_t x216 = INT64_MIN;
static uint8_t x221 = 36U;
int64_t x232 = 1448LL;
uint16_t x237 = 1291U;
static int64_t x240 = 5LL;
static volatile uint8_t x245 = UINT8_MAX;
static uint16_t x248 = 141U;
static int32_t t61 = 1008688;
int32_t x255 = INT32_MIN;
int8_t x259 = 0;
uint16_t x263 = UINT16_MAX;
int16_t x265 = 22;
static uint64_t x269 = 3660LLU;
int8_t x270 = INT8_MIN;
uint64_t x272 = 978LLU;
static int32_t x283 = INT32_MIN;
volatile int32_t t70 = -207179;
static uint16_t x289 = 14287U;
uint32_t x304 = 10918634U;
uint64_t x310 = UINT64_MAX;
static int64_t x320 = INT64_MAX;
volatile int32_t x321 = -1;
int8_t x322 = 14;
volatile uint8_t x325 = 1U;
uint64_t x330 = UINT64_MAX;
int32_t x331 = INT32_MAX;
int64_t x336 = INT64_MIN;
volatile int32_t t85 = 221;
static int32_t t86 = -683104424;
static volatile int16_t x351 = INT16_MIN;
volatile int64_t x358 = -1LL;
int64_t x364 = 866LL;
uint64_t x371 = 2938817978491306LLU;
int16_t x376 = INT16_MIN;
volatile uint64_t x380 = 222904253327791358LLU;
static volatile int8_t x381 = INT8_MIN;
int64_t x385 = -1LL;
uint8_t x391 = 65U;
int16_t x394 = INT16_MIN;
int8_t x397 = INT8_MIN;
volatile int32_t t99 = -454;
int32_t x401 = -1;
volatile int32_t t100 = -27;
uint16_t x409 = UINT16_MAX;
static uint16_t x412 = 1070U;
int32_t t105 = 1;
int16_t x425 = -1;
int32_t x428 = 1;
volatile uint8_t x433 = UINT8_MAX;
uint64_t x442 = 952086721423914288LLU;
volatile int32_t t110 = 54339559;
static volatile int32_t x445 = INT32_MIN;
uint8_t x448 = 74U;
int8_t x471 = 5;
int32_t t117 = 2;
int8_t x480 = INT8_MIN;
volatile int32_t t122 = 13701160;
int64_t x502 = INT64_MIN;
int8_t x504 = -25;
static uint32_t x508 = UINT32_MAX;
static volatile int32_t t130 = 11156;
volatile int64_t x529 = 60LL;
volatile int8_t x534 = -23;
volatile int32_t x542 = INT32_MIN;
volatile uint64_t x545 = UINT64_MAX;
int32_t x553 = INT32_MAX;
uint8_t x555 = 7U;
static int8_t x558 = -1;
volatile int8_t x561 = -1;
volatile int32_t t140 = -12;
volatile int32_t x565 = -1;
int8_t x570 = INT8_MIN;
int16_t x578 = INT16_MIN;
int16_t x579 = INT16_MIN;
int64_t x581 = INT64_MIN;
static volatile uint8_t x582 = 2U;
int32_t x585 = INT32_MAX;
uint64_t x589 = 105LLU;
volatile int32_t t147 = 10;
int64_t x596 = INT64_MAX;
static int64_t x600 = INT64_MIN;
volatile uint16_t x604 = 125U;
int32_t t150 = -542;
int64_t x606 = INT64_MIN;
int64_t x611 = -1LL;
int16_t x612 = INT16_MAX;
int16_t x613 = INT16_MIN;
volatile int8_t x616 = -1;
static int32_t t153 = 1;
int32_t x617 = 5352;
volatile int8_t x624 = -1;
volatile int32_t t155 = 3367;
uint16_t x625 = 15185U;
int8_t x629 = -3;
uint32_t x631 = 3U;
static volatile int8_t x636 = -1;
int64_t x637 = INT64_MIN;
int32_t x642 = 2432;
int8_t x643 = INT8_MIN;
uint8_t x647 = 81U;
int64_t x660 = INT64_MIN;
static int16_t x661 = -1;
int32_t t165 = -11679;
int8_t x667 = 0;
uint32_t x674 = 33564U;
uint8_t x675 = 36U;
volatile uint16_t x682 = 708U;
volatile uint8_t x683 = UINT8_MAX;
volatile int8_t x685 = INT8_MIN;
static volatile int32_t t171 = -10806804;
volatile int32_t t172 = 193460;
uint64_t x693 = 19000673LLU;
static int16_t x695 = -1;
static uint64_t x696 = UINT64_MAX;
int64_t x706 = 5512646139708LL;
uint8_t x708 = 9U;
uint64_t x719 = 3835961370232493LLU;
volatile int32_t t179 = 512646;
int8_t x721 = INT8_MIN;
int32_t x722 = 41;
uint16_t x724 = 2U;
static uint8_t x725 = 0U;
volatile int32_t t181 = 30043713;
static int64_t x730 = INT64_MIN;
volatile int32_t t183 = 0;
static int32_t x751 = 0;
volatile int32_t t187 = -56;
int32_t x753 = INT32_MIN;
static volatile int32_t t188 = -2048986;
int16_t x762 = INT16_MAX;
uint64_t x770 = UINT64_MAX;
volatile int8_t x774 = -4;
uint16_t x779 = 2U;
volatile int32_t t195 = 666669243;
int64_t x789 = -1578289663992167LL;
uint8_t x791 = 3U;


void f0(void) {
    	static volatile uint16_t x2 = UINT16_MAX;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 37931993844669LLU;
	int32_t t0 = -44328976;

    t0 = ((x1<=x2)!=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 70U;
	uint64_t x6 = 11289LLU;
	int16_t x7 = -1;
	static int32_t t1 = -15352484;

    t1 = ((x5<=x6)!=(x7&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MAX;
	int32_t x10 = -1;
	static uint64_t x11 = 937667960444LLU;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -6;

    t2 = ((x9<=x10)!=(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = 871961U;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	static volatile int32_t t3 = 0;

    t3 = ((x13<=x14)!=(x15&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1898479U;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = 13;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 833750;

    t4 = ((x17<=x18)!=(x19&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = -231;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -27874;

    t5 = ((x21<=x22)!=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int8_t x26 = -1;
	volatile int64_t x27 = 471101094673LL;
	volatile int32_t t6 = 856849104;

    t6 = ((x25<=x26)!=(x27&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x30 = -6;
	static volatile int64_t x31 = INT64_MAX;
	int32_t x32 = -19823;
	int32_t t7 = -3936;

    t7 = ((x29<=x30)!=(x31&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint32_t x34 = 2236U;
	static int32_t t8 = -126326480;

    t8 = ((x33<=x34)!=(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = 15955462;
	volatile int16_t x40 = -37;
	static int32_t t9 = 9;

    t9 = ((x37<=x38)!=(x39&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 11;
	int32_t x42 = INT32_MAX;
	uint32_t x43 = 1U;
	int32_t x44 = 60059875;
	volatile int32_t t10 = 3055012;

    t10 = ((x41<=x42)!=(x43&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x46 = 51U;
	int8_t x47 = -2;
	volatile int32_t t11 = 19;

    t11 = ((x45<=x46)!=(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	volatile int8_t x52 = -1;
	int32_t t12 = 96429067;

    t12 = ((x49<=x50)!=(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 1664U;
	volatile int32_t x55 = -1;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -1994309;

    t13 = ((x53<=x54)!=(x55&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 975029LLU;
	int64_t x58 = 6806663148313221LL;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t14 = 46;

    t14 = ((x57<=x58)!=(x59&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	volatile uint16_t x62 = 324U;
	volatile int64_t x63 = INT64_MIN;
	uint64_t x64 = 828315573307LLU;
	int32_t t15 = 14336;

    t15 = ((x61<=x62)!=(x63&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	int64_t x66 = 80440699151LL;
	volatile uint8_t x67 = 93U;
	volatile int32_t t16 = -14326;

    t16 = ((x65<=x66)!=(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -531;
	uint8_t x72 = 7U;

    t17 = ((x69<=x70)!=(x71&x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	uint32_t x74 = 5614U;
	int16_t x75 = -1;
	volatile int32_t x76 = -1;
	static volatile int32_t t18 = -251;

    t18 = ((x73<=x74)!=(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = INT8_MIN;
	uint16_t x79 = 2U;
	static volatile int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 6507;

    t19 = ((x77<=x78)!=(x79&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MAX;
	static uint64_t x82 = 66281907409601731LLU;
	uint16_t x83 = 3U;
	int32_t t20 = 4;

    t20 = ((x81<=x82)!=(x83&x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = -1LL;
	static int64_t x87 = 722524LL;

    t21 = ((x85<=x86)!=(x87&x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -9;
	uint16_t x92 = 51U;
	int32_t t22 = -1823;

    t22 = ((x89<=x90)!=(x91&x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 21U;
	int32_t x94 = 3;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;

    t23 = ((x93<=x94)!=(x95&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 91373;

    t24 = ((x97<=x98)!=(x99&x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile int8_t x103 = INT8_MIN;
	static uint16_t x104 = UINT16_MAX;
	int32_t t25 = -13590387;

    t25 = ((x101<=x102)!=(x103&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 2791U;
	int64_t x107 = 2275384419LL;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 64601101;

    t26 = ((x105<=x106)!=(x107&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MAX;
	uint64_t x112 = 1687LLU;
	static int32_t t27 = -30;

    t27 = ((x109<=x110)!=(x111&x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	uint32_t x115 = 454U;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 2776833;

    t28 = ((x113<=x114)!=(x115&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x118 = 2554031543LLU;
	int8_t x120 = -1;
	int32_t t29 = 280564;

    t29 = ((x117<=x118)!=(x119&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 3;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = -1334;

    t30 = ((x121<=x122)!=(x123&x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 1U;
	static volatile uint64_t x126 = 212332389LLU;
	int64_t x127 = INT64_MIN;
	volatile uint8_t x128 = 0U;
	volatile int32_t t31 = -12;

    t31 = ((x125<=x126)!=(x127&x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 15958U;
	uint64_t x130 = 10127LLU;
	uint16_t x132 = UINT16_MAX;

    t32 = ((x129<=x130)!=(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 2616U;
	uint32_t x135 = 1348010756U;

    t33 = ((x133<=x134)!=(x135&x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -1;
	static int16_t x138 = INT16_MAX;
	static int8_t x139 = 54;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t34 = 775;

    t34 = ((x137<=x138)!=(x139&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = -1;
	int16_t x144 = INT16_MIN;

    t35 = ((x141<=x142)!=(x143&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 828346393LL;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = 11673409878LLU;
	volatile int16_t x148 = -1;
	int32_t t36 = 96958948;

    t36 = ((x145<=x146)!=(x147&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x151 = INT16_MIN;
	static int32_t x152 = -2761886;
	int32_t t37 = 4757413;

    t37 = ((x149<=x150)!=(x151&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	volatile uint16_t x154 = 6U;
	int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -72134459;

    t38 = ((x153<=x154)!=(x155&x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 116U;
	static volatile int64_t x158 = INT64_MIN;
	volatile int16_t x159 = 0;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 1;

    t39 = ((x157<=x158)!=(x159&x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	static int32_t t40 = -477388666;

    t40 = ((x161<=x162)!=(x163&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static uint32_t x166 = 19U;
	int16_t x168 = -2590;
	int32_t t41 = 4;

    t41 = ((x165<=x166)!=(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 32U;
	int8_t x171 = 0;
	uint16_t x172 = UINT16_MAX;
	int32_t t42 = 207370208;

    t42 = ((x169<=x170)!=(x171&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	static uint16_t x174 = 1604U;
	int8_t x176 = -1;
	volatile int32_t t43 = 1;

    t43 = ((x173<=x174)!=(x175&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = -6;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 3746;

    t44 = ((x177<=x178)!=(x179&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 219036609;
	volatile uint32_t x182 = 22118541U;
	int64_t x183 = INT64_MAX;
	int32_t t45 = 736828;

    t45 = ((x181<=x182)!=(x183&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	uint32_t x188 = 9U;
	static volatile int32_t t46 = 77297;

    t46 = ((x185<=x186)!=(x187&x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 0U;
	static int32_t x190 = INT32_MIN;
	volatile int8_t x191 = 14;
	uint16_t x192 = UINT16_MAX;
	int32_t t47 = -125841;

    t47 = ((x189<=x190)!=(x191&x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = 8275663193LL;
	static int8_t x194 = -1;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int64_t x196 = INT64_MIN;

    t48 = ((x193<=x194)!=(x195&x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	volatile int16_t x199 = -1;
	volatile int16_t x200 = -1;
	volatile int32_t t49 = 16284700;

    t49 = ((x197<=x198)!=(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 16;
	int8_t x202 = INT8_MAX;
	uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 1U;
	volatile int32_t t50 = -14;

    t50 = ((x201<=x202)!=(x203&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	uint64_t x207 = 33004618LLU;
	volatile int32_t x208 = 4276260;
	int32_t t51 = 7263429;

    t51 = ((x205<=x206)!=(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -1LL;
	uint64_t x210 = UINT64_MAX;
	static volatile int16_t x211 = 12;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 9706253;

    t52 = ((x209<=x210)!=(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static uint32_t x214 = 64728671U;
	int32_t t53 = 13;

    t53 = ((x213<=x214)!=(x215&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	static int8_t x218 = -1;
	int16_t x219 = INT16_MIN;
	static volatile int16_t x220 = -8;
	static int32_t t54 = -115;

    t54 = ((x217<=x218)!=(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 1365084136LLU;
	uint16_t x223 = 12370U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -13847;

    t55 = ((x221<=x222)!=(x223&x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	volatile uint16_t x226 = 0U;
	int64_t x227 = -102168LL;
	int8_t x228 = -14;
	int32_t t56 = 13;

    t56 = ((x225<=x226)!=(x227&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 89;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = -207843;
	int32_t t57 = -730;

    t57 = ((x229<=x230)!=(x231&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	int64_t x234 = -1LL;
	uint64_t x235 = 1885LLU;
	static volatile int64_t x236 = 75LL;
	volatile int32_t t58 = -55013;

    t58 = ((x233<=x234)!=(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = 1;
	int8_t x239 = INT8_MAX;
	volatile int32_t t59 = -23230;

    t59 = ((x237<=x238)!=(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = 11141;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 27657216;

    t60 = ((x241<=x242)!=(x243&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	int32_t x247 = -2666;

    t61 = ((x245<=x246)!=(x247&x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	volatile int64_t x250 = 3456875758172850LL;
	int32_t x251 = -1;
	static volatile int32_t x252 = -1;
	volatile int32_t t62 = 1;

    t62 = ((x249<=x250)!=(x251&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 80U;
	uint64_t x254 = 55071415825839LLU;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 109570;

    t63 = ((x253<=x254)!=(x255&x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	static uint16_t x258 = 2081U;
	int8_t x260 = 4;
	volatile int32_t t64 = -13524334;

    t64 = ((x257<=x258)!=(x259&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	volatile int8_t x262 = -1;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = -7290170;

    t65 = ((x261<=x262)!=(x263&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	static int64_t x268 = INT64_MAX;
	static volatile int32_t t66 = 2645;

    t66 = ((x265<=x266)!=(x267&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x271 = 2249595577LL;
	volatile int32_t t67 = -239190;

    t67 = ((x269<=x270)!=(x271&x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 60U;
	static int16_t x274 = -16;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 2997LLU;
	volatile int32_t t68 = 1;

    t68 = ((x273<=x274)!=(x275&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int8_t x278 = -1;
	int32_t x279 = -1665;
	static int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = -15232838;

    t69 = ((x277<=x278)!=(x279&x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	int32_t x284 = 0;

    t70 = ((x281<=x282)!=(x283&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	static int64_t x287 = -1LL;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 0;

    t71 = ((x285<=x286)!=(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x290 = -1;
	int32_t x291 = INT32_MIN;
	static int32_t x292 = INT32_MAX;
	int32_t t72 = 1923621;

    t72 = ((x289<=x290)!=(x291&x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint8_t x294 = 100U;
	int32_t x295 = INT32_MAX;
	static int64_t x296 = INT64_MAX;
	int32_t t73 = -1;

    t73 = ((x293<=x294)!=(x295&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 119U;
	int8_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	static int16_t x300 = -1527;
	volatile int32_t t74 = 410206111;

    t74 = ((x297<=x298)!=(x299&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	volatile int16_t x302 = INT16_MAX;
	int32_t x303 = -1;
	int32_t t75 = 3935;

    t75 = ((x301<=x302)!=(x303&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int64_t x306 = -6748669306LL;
	volatile uint16_t x307 = UINT16_MAX;
	uint32_t x308 = 594177U;
	int32_t t76 = 1;

    t76 = ((x305<=x306)!=(x307&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	static uint8_t x311 = 19U;
	int8_t x312 = -1;
	int32_t t77 = 147371;

    t77 = ((x309<=x310)!=(x311&x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	volatile int8_t x314 = INT8_MIN;
	int32_t x315 = 610955079;
	static int8_t x316 = INT8_MAX;
	int32_t t78 = -7694;

    t78 = ((x313<=x314)!=(x315&x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	static uint64_t x318 = UINT64_MAX;
	static volatile int8_t x319 = -1;
	volatile int32_t t79 = 1553;

    t79 = ((x317<=x318)!=(x319&x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x323 = 36;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -15;

    t80 = ((x321<=x322)!=(x323&x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -304773;

    t81 = ((x325<=x326)!=(x327&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	static uint64_t x332 = 184LLU;
	volatile int32_t t82 = -62602;

    t82 = ((x329<=x330)!=(x331&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = -560200457015738LL;
	int8_t x334 = -1;
	volatile int8_t x335 = INT8_MIN;
	int32_t t83 = 4955;

    t83 = ((x333<=x334)!=(x335&x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = -10;
	int32_t t84 = 11871326;

    t84 = ((x337<=x338)!=(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 269;
	uint64_t x342 = UINT64_MAX;
	static volatile int32_t x343 = INT32_MIN;
	static int32_t x344 = -176086;

    t85 = ((x341<=x342)!=(x343&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 86623890766785LLU;
	int64_t x346 = INT64_MIN;
	static int16_t x347 = INT16_MIN;
	volatile uint64_t x348 = UINT64_MAX;

    t86 = ((x345<=x346)!=(x347&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -5;
	static uint32_t x350 = UINT32_MAX;
	static int32_t x352 = INT32_MIN;
	static int32_t t87 = 2359;

    t87 = ((x349<=x350)!=(x351&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = INT16_MAX;
	uint32_t x354 = 306U;
	uint16_t x355 = 13U;
	int8_t x356 = 38;
	volatile int32_t t88 = 2;

    t88 = ((x353<=x354)!=(x355&x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	static uint8_t x359 = 101U;
	static uint64_t x360 = 11282LLU;
	int32_t t89 = -2;

    t89 = ((x357<=x358)!=(x359&x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -197332;
	uint16_t x362 = 4037U;
	int8_t x363 = 0;
	int32_t t90 = -31380618;

    t90 = ((x361<=x362)!=(x363&x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 173;

    t91 = ((x365<=x366)!=(x367&x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int64_t x370 = -1LL;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = -5101858;

    t92 = ((x369<=x370)!=(x371&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = -1LL;
	int64_t x374 = 69793LL;
	static uint64_t x375 = 166LLU;
	static volatile int32_t t93 = 3;

    t93 = ((x373<=x374)!=(x375&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	int64_t x378 = -133342389018905672LL;
	int8_t x379 = -1;
	static int32_t t94 = -26;

    t94 = ((x377<=x378)!=(x379&x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x382 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = -1;
	volatile int32_t t95 = 8;

    t95 = ((x381<=x382)!=(x383&x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = 0;
	volatile int16_t x387 = INT16_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t96 = -2749;

    t96 = ((x385<=x386)!=(x387&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x389 = 20U;
	int16_t x390 = -107;
	int16_t x392 = 5;
	int32_t t97 = 76;

    t97 = ((x389<=x390)!=(x391&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 100001224161757364LLU;
	int8_t x395 = INT8_MIN;
	int64_t x396 = 58376684LL;
	static int32_t t98 = 4;

    t98 = ((x393<=x394)!=(x395&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x398 = 13888486202805575LLU;
	uint8_t x399 = 1U;
	static int8_t x400 = -14;

    t99 = ((x397<=x398)!=(x399&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -1;
	int8_t x403 = -12;
	int16_t x404 = INT16_MIN;

    t100 = ((x401<=x402)!=(x403&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = INT16_MAX;
	static int8_t x406 = 1;
	volatile int64_t x407 = -1LL;
	static int8_t x408 = 5;
	int32_t t101 = 165944367;

    t101 = ((x405<=x406)!=(x407&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x410 = -1;
	volatile uint32_t x411 = 15U;
	volatile int32_t t102 = 652907;

    t102 = ((x409<=x410)!=(x411&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 108U;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	volatile int16_t x416 = 88;
	int32_t t103 = -6344403;

    t103 = ((x413<=x414)!=(x415&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	int32_t x418 = 246548515;
	int32_t x419 = 72;
	int16_t x420 = INT16_MAX;
	volatile int32_t t104 = -129436;

    t104 = ((x417<=x418)!=(x419&x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	static int16_t x422 = INT16_MIN;
	uint8_t x423 = 64U;
	static int64_t x424 = INT64_MIN;

    t105 = ((x421<=x422)!=(x423&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = 577598191903793517LLU;
	static volatile int16_t x427 = 1;
	static int32_t t106 = 15599083;

    t106 = ((x425<=x426)!=(x427&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x430 = 1U;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = -2939;

    t107 = ((x429<=x430)!=(x431&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	volatile int64_t x435 = 9565423950941812LL;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = 493;

    t108 = ((x433<=x434)!=(x435&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = 8829;
	int64_t x438 = INT64_MIN;
	uint32_t x439 = 29U;
	int64_t x440 = INT64_MIN;
	int32_t t109 = -9;

    t109 = ((x437<=x438)!=(x439&x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;
	static uint16_t x444 = 13641U;

    t110 = ((x441<=x442)!=(x443&x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x446 = 61914415;
	static uint32_t x447 = UINT32_MAX;
	int32_t t111 = 289699647;

    t111 = ((x445<=x446)!=(x447&x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = -1;
	int16_t x450 = -1;
	volatile int32_t x451 = -28;
	int64_t x452 = INT64_MIN;
	static int32_t t112 = -46;

    t112 = ((x449<=x450)!=(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	int64_t x454 = INT64_MIN;
	static int16_t x455 = 117;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t113 = -232329;

    t113 = ((x453<=x454)!=(x455&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -7;
	int16_t x458 = 13485;
	volatile uint8_t x459 = 0U;
	static volatile int32_t x460 = -2409;
	int32_t t114 = 0;

    t114 = ((x457<=x458)!=(x459&x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	volatile int16_t x462 = INT16_MIN;
	uint16_t x463 = 39U;
	int8_t x464 = INT8_MIN;
	int32_t t115 = -1030116473;

    t115 = ((x461<=x462)!=(x463&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -483;
	int8_t x466 = 1;
	static uint16_t x467 = 16U;
	uint32_t x468 = UINT32_MAX;
	static int32_t t116 = 20;

    t116 = ((x465<=x466)!=(x467&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -1;
	volatile int8_t x470 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;

    t117 = ((x469<=x470)!=(x471&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = INT32_MAX;
	static volatile int64_t x474 = 631911183170466LL;
	uint16_t x475 = UINT16_MAX;
	volatile uint64_t x476 = 62477LLU;
	int32_t t118 = 745;

    t118 = ((x473<=x474)!=(x475&x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 266986654U;
	static uint64_t x478 = 1057944LLU;
	int16_t x479 = INT16_MIN;
	int32_t t119 = -20260;

    t119 = ((x477<=x478)!=(x479&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 22U;
	int64_t x482 = INT64_MIN;
	uint32_t x483 = 1518923305U;
	int32_t x484 = 1800195;
	volatile int32_t t120 = 1667913;

    t120 = ((x481<=x482)!=(x483&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x486 = -21;
	int64_t x487 = -21870621645293528LL;
	int32_t x488 = INT32_MAX;
	int32_t t121 = -3647424;

    t121 = ((x485<=x486)!=(x487&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -26;
	int64_t x490 = -1LL;
	int32_t x491 = -2;
	volatile int8_t x492 = INT8_MIN;

    t122 = ((x489<=x490)!=(x491&x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = INT8_MIN;
	volatile uint8_t x494 = 31U;
	int32_t x495 = -1;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = 0;

    t123 = ((x493<=x494)!=(x495&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -56515LL;
	uint16_t x498 = 4U;
	volatile int8_t x499 = -39;
	uint32_t x500 = 39161778U;
	volatile int32_t t124 = -1;

    t124 = ((x497<=x498)!=(x499&x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	uint32_t x503 = 12291973U;
	static int32_t t125 = 14;

    t125 = ((x501<=x502)!=(x503&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -9783;
	volatile int8_t x506 = INT8_MIN;
	static int32_t x507 = INT32_MIN;
	volatile int32_t t126 = 45;

    t126 = ((x505<=x506)!=(x507&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	int32_t x511 = -1;
	static int8_t x512 = -1;
	static volatile int32_t t127 = -6964;

    t127 = ((x509<=x510)!=(x511&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	uint32_t x514 = 48346711U;
	int16_t x515 = 86;
	uint64_t x516 = UINT64_MAX;
	static int32_t t128 = 28;

    t128 = ((x513<=x514)!=(x515&x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 0;
	volatile uint16_t x518 = 1934U;
	uint32_t x519 = 126048129U;
	uint8_t x520 = 15U;
	int32_t t129 = -38932913;

    t129 = ((x517<=x518)!=(x519&x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 7564916;
	uint32_t x522 = UINT32_MAX;
	int64_t x523 = INT64_MIN;
	int8_t x524 = -1;

    t130 = ((x521<=x522)!=(x523&x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = INT8_MAX;
	volatile int8_t x526 = -1;
	int16_t x527 = -1;
	int64_t x528 = -1LL;
	volatile int32_t t131 = 6842221;

    t131 = ((x525<=x526)!=(x527&x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	uint64_t x531 = 100628757171074LLU;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 7;

    t132 = ((x529<=x530)!=(x531&x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = 25237U;
	static volatile uint32_t x535 = 1U;
	int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -226;

    t133 = ((x533<=x534)!=(x535&x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MIN;
	static int32_t x538 = INT32_MAX;
	int32_t x539 = INT32_MAX;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = -36610974;

    t134 = ((x537<=x538)!=(x539&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = -1;
	volatile uint32_t x543 = 970740205U;
	int64_t x544 = 795LL;
	int32_t t135 = -104280;

    t135 = ((x541<=x542)!=(x543&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = UINT8_MAX;
	volatile uint32_t x547 = 119015U;
	int64_t x548 = -1LL;
	volatile int32_t t136 = -445225;

    t136 = ((x545<=x546)!=(x547&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = 0;
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = INT8_MIN;
	volatile int64_t x552 = -1LL;
	volatile int32_t t137 = -30;

    t137 = ((x549<=x550)!=(x551&x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = UINT64_MAX;
	uint32_t x556 = 2322U;
	int32_t t138 = 12649;

    t138 = ((x553<=x554)!=(x555&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	int64_t x559 = 118829LL;
	uint8_t x560 = 10U;
	int32_t t139 = 146;

    t139 = ((x557<=x558)!=(x559&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MIN;
	int64_t x563 = -1LL;
	uint64_t x564 = 1LLU;

    t140 = ((x561<=x562)!=(x563&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x566 = INT16_MIN;
	int8_t x567 = -12;
	int16_t x568 = -1;
	int32_t t141 = 423;

    t141 = ((x565<=x566)!=(x567&x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 19141018;
	int8_t x571 = -1;
	static int64_t x572 = INT64_MIN;
	int32_t t142 = -6;

    t142 = ((x569<=x570)!=(x571&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = UINT64_MAX;
	int64_t x574 = -1LL;
	int64_t x575 = -5710699229162580LL;
	static int32_t x576 = -1;
	int32_t t143 = 797954;

    t143 = ((x573<=x574)!=(x575&x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -2218733;
	static int16_t x580 = -1;
	int32_t t144 = 3040;

    t144 = ((x577<=x578)!=(x579&x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x583 = -530275660;
	int8_t x584 = 0;
	int32_t t145 = 769;

    t145 = ((x581<=x582)!=(x583&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 41;
	int16_t x587 = -1;
	volatile int64_t x588 = 71174458296LL;
	static int32_t t146 = -336784;

    t146 = ((x585<=x586)!=(x587&x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = 2;
	int16_t x591 = -1;
	volatile int8_t x592 = -1;

    t147 = ((x589<=x590)!=(x591&x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = 11699;
	int64_t x594 = -1LL;
	static uint32_t x595 = UINT32_MAX;
	volatile int32_t t148 = -3549;

    t148 = ((x593<=x594)!=(x595&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -46;
	static int64_t x598 = INT64_MIN;
	volatile int8_t x599 = -8;
	static volatile int32_t t149 = -15513819;

    t149 = ((x597<=x598)!=(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = -525;
	uint8_t x602 = 2U;
	int16_t x603 = -1;

    t150 = ((x601<=x602)!=(x603&x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int16_t x607 = INT16_MAX;
	static volatile int8_t x608 = -1;
	int32_t t151 = -129272980;

    t151 = ((x605<=x606)!=(x607&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	static volatile int16_t x610 = -2;
	static volatile int32_t t152 = -22056134;

    t152 = ((x609<=x610)!=(x611&x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x614 = UINT16_MAX;
	uint32_t x615 = UINT32_MAX;

    t153 = ((x613<=x614)!=(x615&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x618 = 65U;
	int32_t x619 = -1;
	int32_t x620 = -1;
	static volatile int32_t t154 = -60248;

    t154 = ((x617<=x618)!=(x619&x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -1;
	int64_t x622 = INT64_MAX;
	int16_t x623 = INT16_MIN;

    t155 = ((x621<=x622)!=(x623&x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x626 = 1941U;
	uint16_t x627 = UINT16_MAX;
	volatile uint8_t x628 = 44U;
	int32_t t156 = 2;

    t156 = ((x625<=x626)!=(x627&x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = -1;
	int8_t x632 = INT8_MAX;
	static int32_t t157 = -416647732;

    t157 = ((x629<=x630)!=(x631&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = 174065;
	uint8_t x634 = 43U;
	int32_t x635 = INT32_MAX;
	volatile int32_t t158 = -2735782;

    t158 = ((x633<=x634)!=(x635&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x638 = INT8_MIN;
	int64_t x639 = -1LL;
	int32_t x640 = INT32_MIN;
	int32_t t159 = 50617;

    t159 = ((x637<=x638)!=(x639&x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 131U;
	volatile int64_t x644 = INT64_MIN;
	int32_t t160 = 12;

    t160 = ((x641<=x642)!=(x643&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = -67;
	uint8_t x646 = 10U;
	int64_t x648 = 5336333028493562LL;
	static volatile int32_t t161 = 33599742;

    t161 = ((x645<=x646)!=(x647&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = -2;
	uint64_t x650 = 1679491313947LLU;
	int8_t x651 = INT8_MIN;
	int64_t x652 = INT64_MAX;
	static int32_t t162 = 135272959;

    t162 = ((x649<=x650)!=(x651&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = UINT8_MAX;
	volatile int16_t x654 = INT16_MIN;
	uint64_t x655 = 58170LLU;
	volatile int16_t x656 = INT16_MIN;
	int32_t t163 = 899584608;

    t163 = ((x653<=x654)!=(x655&x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = 1588037LL;
	volatile uint64_t x658 = 3787595049639927663LLU;
	volatile uint64_t x659 = 3101146948704214LLU;
	int32_t t164 = 418852;

    t164 = ((x657<=x658)!=(x659&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MAX;
	static int64_t x663 = INT64_MIN;
	uint64_t x664 = 3254LLU;

    t165 = ((x661<=x662)!=(x663&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int8_t x666 = INT8_MAX;
	uint32_t x668 = 7540U;
	volatile int32_t t166 = 250;

    t166 = ((x665<=x666)!=(x667&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 5247U;
	volatile int8_t x670 = INT8_MIN;
	int32_t x671 = INT32_MAX;
	int8_t x672 = -1;
	static volatile int32_t t167 = 868631;

    t167 = ((x669<=x670)!=(x671&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -783394391LL;
	int16_t x676 = -1;
	int32_t t168 = -7;

    t168 = ((x673<=x674)!=(x675&x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x677 = 15U;
	static uint32_t x678 = 2181902U;
	int64_t x679 = -5753228LL;
	static int64_t x680 = -36663920445LL;
	int32_t t169 = -10;

    t169 = ((x677<=x678)!=(x679&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 3;
	int64_t x684 = INT64_MIN;
	int32_t t170 = 169162;

    t170 = ((x681<=x682)!=(x683&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MIN;
	int64_t x687 = 9602539LL;
	int64_t x688 = INT64_MAX;

    t171 = ((x685<=x686)!=(x687&x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MAX;
	int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	volatile int32_t x692 = -1;

    t172 = ((x689<=x690)!=(x691&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x694 = INT32_MIN;
	volatile int32_t t173 = -359883;

    t173 = ((x693<=x694)!=(x695&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 7U;
	static int8_t x698 = INT8_MIN;
	static int16_t x699 = 4;
	static volatile int32_t x700 = INT32_MAX;
	int32_t t174 = 1;

    t174 = ((x697<=x698)!=(x699&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	volatile int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MIN;
	int16_t x704 = INT16_MIN;
	volatile int32_t t175 = -714953951;

    t175 = ((x701<=x702)!=(x703&x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -642468;
	int16_t x707 = INT16_MIN;
	volatile int32_t t176 = 2817;

    t176 = ((x705<=x706)!=(x707&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x709 = UINT8_MAX;
	int16_t x710 = -1;
	static int32_t x711 = 4880;
	static int64_t x712 = INT64_MIN;
	int32_t t177 = -7;

    t177 = ((x709<=x710)!=(x711&x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	int32_t x714 = INT32_MIN;
	uint64_t x715 = UINT64_MAX;
	volatile int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -889419683;

    t178 = ((x713<=x714)!=(x715&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = 39U;
	uint8_t x718 = 1U;
	int64_t x720 = -156142743558200264LL;

    t179 = ((x717<=x718)!=(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x723 = 0LL;
	static int32_t t180 = 3;

    t180 = ((x721<=x722)!=(x723&x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = -16;
	static int16_t x727 = 98;
	volatile uint64_t x728 = 323LLU;

    t181 = ((x725<=x726)!=(x727&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = -1176;
	uint32_t x731 = 1226U;
	volatile uint8_t x732 = UINT8_MAX;
	static volatile int32_t t182 = -1014424;

    t182 = ((x729<=x730)!=(x731&x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 1U;
	volatile int64_t x734 = INT64_MIN;
	volatile uint32_t x735 = 202713U;
	int64_t x736 = 0LL;

    t183 = ((x733<=x734)!=(x735&x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	volatile uint32_t x738 = 1299U;
	int16_t x739 = 7282;
	volatile uint8_t x740 = 3U;
	int32_t t184 = -1513;

    t184 = ((x737<=x738)!=(x739&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = -1LL;
	uint16_t x742 = 37U;
	static int8_t x743 = -38;
	uint32_t x744 = 103023593U;
	int32_t t185 = 14;

    t185 = ((x741<=x742)!=(x743&x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile int32_t x746 = INT32_MIN;
	int64_t x747 = INT64_MAX;
	uint64_t x748 = 925697LLU;
	int32_t t186 = -40732;

    t186 = ((x745<=x746)!=(x747&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MIN;
	uint16_t x750 = UINT16_MAX;
	int8_t x752 = INT8_MIN;

    t187 = ((x749<=x750)!=(x751&x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x754 = -1LL;
	int64_t x755 = -8611022985422012LL;
	uint16_t x756 = UINT16_MAX;

    t188 = ((x753<=x754)!=(x755&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x757 = 323U;
	int32_t x758 = INT32_MIN;
	volatile int32_t x759 = 35;
	volatile uint64_t x760 = UINT64_MAX;
	int32_t t189 = -1;

    t189 = ((x757<=x758)!=(x759&x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 15829U;
	int64_t x763 = INT64_MAX;
	int16_t x764 = -13;
	int32_t t190 = 29731323;

    t190 = ((x761<=x762)!=(x763&x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	volatile int64_t x766 = -1LL;
	int32_t x767 = -78883;
	uint8_t x768 = 1U;
	static int32_t t191 = -310308;

    t191 = ((x765<=x766)!=(x767&x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = INT64_MAX;
	static int8_t x771 = INT8_MIN;
	volatile uint32_t x772 = 62U;
	volatile int32_t t192 = 30656842;

    t192 = ((x769<=x770)!=(x771&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MAX;
	uint64_t x775 = 20691LLU;
	int16_t x776 = -1;
	int32_t t193 = -322536;

    t193 = ((x773<=x774)!=(x775&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 12358U;
	int32_t x778 = -4847;
	int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 505280;

    t194 = ((x777<=x778)!=(x779&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint32_t x782 = 2734402U;
	static int64_t x783 = -2184323639621LL;
	int64_t x784 = -134131344523308LL;

    t195 = ((x781<=x782)!=(x783&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -39;
	int32_t x786 = INT32_MAX;
	int8_t x787 = 63;
	static volatile int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 962;

    t196 = ((x785<=x786)!=(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = -289;
	static uint8_t x792 = UINT8_MAX;
	static int32_t t197 = 82;

    t197 = ((x789<=x790)!=(x791&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	volatile int32_t x794 = 667884323;
	int64_t x795 = INT64_MIN;
	uint64_t x796 = 26916LLU;
	int32_t t198 = 11;

    t198 = ((x793<=x794)!=(x795&x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 17U;
	volatile uint16_t x798 = UINT16_MAX;
	uint8_t x799 = UINT8_MAX;
	static int64_t x800 = INT64_MIN;
	volatile int32_t t199 = -385488;

    t199 = ((x797<=x798)!=(x799&x800));

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

