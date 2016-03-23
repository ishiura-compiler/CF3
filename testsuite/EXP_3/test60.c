
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

static int32_t x1 = -1;
static int16_t x2 = INT16_MIN;
int32_t x7 = INT32_MIN;
uint8_t x11 = 6U;
int64_t t2 = 0LL;
volatile uint16_t x15 = 176U;
uint64_t t4 = 4409977265636382499LLU;
uint8_t x32 = UINT8_MAX;
int64_t t6 = 3685980524723LL;
int64_t x33 = INT64_MIN;
static int64_t t7 = 5595616LL;
int8_t x41 = -1;
static uint16_t x44 = 85U;
static uint16_t x50 = 204U;
uint16_t x52 = UINT16_MAX;
uint16_t x59 = 1797U;
int64_t t13 = -474652270LL;
volatile int32_t x70 = INT32_MIN;
uint16_t x88 = UINT16_MAX;
volatile int64_t t20 = 6644978192LL;
int16_t x97 = INT16_MIN;
volatile uint32_t x98 = 2298U;
uint64_t x104 = UINT64_MAX;
static int16_t x105 = INT16_MIN;
int8_t x106 = -1;
uint32_t x107 = 2100467717U;
uint32_t x113 = 6247721U;
static uint8_t x114 = UINT8_MAX;
uint16_t x116 = 1U;
uint8_t x139 = 3U;
static uint8_t x144 = UINT8_MAX;
uint64_t t32 = 58738898139LLU;
int16_t x150 = -1883;
volatile uint32_t x159 = 945567509U;
uint16_t x160 = 7U;
uint8_t x163 = 45U;
volatile int64_t x177 = INT64_MIN;
int16_t x185 = INT16_MIN;
uint16_t x192 = 21761U;
int8_t x196 = INT8_MIN;
int32_t t43 = 118579679;
uint32_t x200 = 69U;
volatile uint16_t x201 = UINT16_MAX;
static int64_t x202 = INT64_MIN;
int64_t x204 = 10178490LL;
volatile int64_t x212 = -1LL;
volatile int64_t x213 = -1LL;
uint8_t x214 = 16U;
int32_t t49 = 3359;
int64_t x221 = INT64_MIN;
int32_t x229 = INT32_MIN;
int16_t x237 = INT16_MIN;
int16_t x239 = INT16_MAX;
int8_t x248 = INT8_MAX;
volatile uint64_t t54 = 17LLU;
int8_t x249 = INT8_MIN;
static int64_t t55 = -430LL;
volatile uint8_t x287 = UINT8_MAX;
uint16_t x296 = 2376U;
volatile int16_t x298 = -1;
uint32_t x311 = 15508374U;
static uint64_t x312 = 722014111627896LLU;
int64_t x313 = INT64_MIN;
static uint16_t x317 = UINT16_MAX;
static int8_t x318 = INT8_MIN;
static volatile int32_t x328 = INT32_MIN;
uint16_t x332 = 188U;
static uint64_t x335 = UINT64_MAX;
static volatile uint64_t t75 = 3LLU;
int64_t x361 = INT64_MIN;
int32_t x386 = 16;
static volatile uint64_t t80 = 93LLU;
int64_t x400 = -313567827367457LL;
int8_t x405 = 1;
uint8_t x407 = UINT8_MAX;
int16_t x419 = -1;
int32_t x421 = -12307996;
int64_t x433 = INT64_MIN;
int64_t x454 = -1LL;
uint64_t x456 = 451804LLU;
static int8_t x459 = INT8_MIN;
int32_t t95 = -790;
volatile int32_t t96 = -1;
int32_t x475 = INT32_MAX;
static int32_t x478 = INT32_MIN;
int16_t x479 = INT16_MIN;
static volatile int32_t x484 = INT32_MIN;
int64_t x486 = INT64_MIN;
int64_t t100 = 91593089753566836LL;
uint8_t x491 = UINT8_MAX;
uint64_t t102 = 105198LLU;
uint32_t x499 = UINT32_MAX;
int64_t t103 = 1643289789663779LL;
int64_t t105 = 184885LL;
static int32_t x524 = -91104;
static volatile uint8_t x527 = 1U;
int8_t x528 = INT8_MAX;
volatile uint8_t x531 = 124U;
uint32_t x541 = 113017518U;
uint8_t x543 = 13U;
static volatile int8_t x544 = INT8_MIN;
volatile uint32_t x546 = UINT32_MAX;
static uint64_t t112 = 48907320LLU;
int32_t x560 = INT32_MIN;
static int8_t x561 = 4;
int16_t x575 = INT16_MIN;
int16_t x580 = INT16_MIN;
static int8_t x581 = INT8_MIN;
volatile int64_t x585 = -518828LL;
uint64_t x591 = UINT64_MAX;
uint64_t t121 = 200143093379093LLU;
int8_t x596 = INT8_MIN;
volatile uint16_t x610 = 2041U;
volatile uint32_t x619 = 41781U;
int64_t x622 = INT64_MIN;
volatile int32_t x641 = 2689;
int64_t x645 = INT64_MIN;
int32_t x647 = 20004936;
int8_t x657 = INT8_MIN;
int32_t x680 = -2291;
volatile uint64_t t139 = 2788219900203554198LLU;
volatile uint32_t x693 = 71599945U;
int16_t x694 = INT16_MIN;
int64_t x700 = INT64_MIN;
volatile int16_t x703 = -1;
static volatile uint64_t x705 = UINT64_MAX;
uint8_t x714 = UINT8_MAX;
int64_t x715 = INT64_MIN;
uint64_t x717 = 2851638360LLU;
volatile int32_t x719 = -46934;
int64_t x720 = INT64_MAX;
static int32_t x724 = 4871;
uint8_t x730 = 1U;
volatile int32_t x733 = -1;
volatile int64_t x738 = -2186LL;
volatile uint16_t x739 = UINT16_MAX;
static uint16_t x743 = 47U;
volatile int64_t x746 = -1LL;
static int8_t x755 = INT8_MAX;
int64_t x780 = INT64_MIN;
uint8_t x781 = 5U;
static volatile int32_t x782 = -1;
uint32_t x810 = 3198U;
volatile int64_t t167 = -133198751063146LL;
volatile int64_t x816 = INT64_MIN;
uint64_t x817 = UINT64_MAX;
volatile int64_t t170 = -1123577341428341LL;
uint32_t x830 = 96910U;
int64_t x831 = -9LL;
int16_t x835 = -1;
volatile int16_t x838 = INT16_MAX;
static int64_t x842 = 1580662854370300089LL;
static uint16_t x844 = 227U;
static int64_t t175 = -31853311258018158LL;
volatile int32_t t177 = -137161822;
volatile uint64_t x857 = UINT64_MAX;
int16_t x874 = INT16_MAX;
volatile uint64_t t181 = 0LLU;
volatile int8_t x878 = INT8_MIN;
int16_t x879 = 165;
int16_t x885 = -3914;
int8_t x893 = INT8_MIN;
int16_t x904 = INT16_MIN;
volatile int8_t x909 = -1;
int64_t x910 = 619796084LL;
volatile int32_t x915 = -18;
uint64_t t190 = 7417LLU;
uint16_t x927 = 6363U;
uint64_t x929 = 87565525LLU;
static int64_t x936 = INT64_MIN;
volatile int8_t x953 = INT8_MAX;
uint32_t x954 = 58034537U;
int8_t x962 = -1;
static int16_t x963 = -1;
int16_t x964 = INT16_MIN;
int8_t x966 = INT8_MIN;
int32_t x968 = -68;


void f0(void) {
    	int32_t x3 = -23429515;
	static volatile uint32_t x4 = 30378U;
	uint32_t t0 = 168U;

    t0 = ((x1%x2)/(x3+x4));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 48U;
	uint32_t x6 = UINT32_MAX;
	uint8_t x8 = 7U;
	static uint32_t t1 = 27221916U;

    t1 = ((x5%x6)/(x7+x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 1921503255LL;
	int8_t x10 = INT8_MAX;
	volatile int64_t x12 = 3702828697882200817LL;

    t2 = ((x9%x10)/(x11+x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -96427;
	static volatile int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -785002LL;

    t3 = ((x13%x14)/(x15+x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 623U;
	volatile uint64_t x18 = UINT64_MAX;
	static uint16_t x19 = 5520U;
	volatile int16_t x20 = INT16_MAX;

    t4 = ((x17%x18)/(x19+x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	static int8_t x22 = -1;
	uint32_t x23 = 43464U;
	int64_t x24 = -1LL;
	int64_t t5 = -4LL;

    t5 = ((x21%x22)/(x23+x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x29 = 2459U;
	int32_t x30 = INT32_MAX;
	int64_t x31 = -4411351LL;

    t6 = ((x29%x30)/(x31+x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x34 = -1;
	uint8_t x35 = 26U;
	int16_t x36 = -1;

    t7 = ((x33%x34)/(x35+x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = 79238787275219857LL;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	int64_t t8 = -560325090727783951LL;

    t8 = ((x37%x38)/(x39+x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MIN;
	static int32_t x43 = -1;
	int32_t t9 = -1042;

    t9 = ((x41%x42)/(x43+x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 15LLU;
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int16_t x48 = INT16_MIN;
	static volatile uint64_t t10 = 50657739LLU;

    t10 = ((x45%x46)/(x47+x48));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -5;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t t11 = 23216U;

    t11 = ((x49%x50)/(x51+x52));

    if (t11 != 65537U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 2639U;
	volatile uint32_t t12 = 293502U;

    t12 = ((x53%x54)/(x55+x56));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 0;
	uint16_t x58 = 81U;
	volatile int64_t x60 = 83LL;

    t13 = ((x57%x58)/(x59+x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x61 = 12U;
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = INT8_MIN;
	int64_t x64 = 281132379LL;
	int64_t t14 = -45LL;

    t14 = ((x61%x62)/(x63+x64));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x66 = 3348063U;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t15 = 8198105U;

    t15 = ((x65%x66)/(x67+x68));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x69 = 0U;
	static volatile int64_t x71 = INT64_MIN;
	volatile uint16_t x72 = 0U;
	static int64_t t16 = 166LL;

    t16 = ((x69%x70)/(x71+x72));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x77 = INT16_MIN;
	static volatile int64_t x78 = -1036074LL;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = -1LL;
	int64_t t17 = 4508135LL;

    t17 = ((x77%x78)/(x79+x80));

    if (t17 != -129LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x85 = 11U;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 0U;
	int32_t t18 = 9658;

    t18 = ((x85%x86)/(x87+x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 58U;
	int16_t x90 = INT16_MAX;
	volatile uint8_t x91 = 0U;
	int32_t x92 = INT32_MAX;
	volatile uint32_t t19 = 8U;

    t19 = ((x89%x90)/(x91+x92));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x94 = 62LL;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MAX;

    t20 = ((x93%x94)/(x95+x96));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x99 = 13U;
	volatile int16_t x100 = 2;
	volatile uint32_t t21 = 93524U;

    t21 = ((x97%x98)/(x99+x100));

    if (t21 != 6U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MIN;
	int64_t x102 = -1LL;
	volatile int32_t x103 = -1;
	static volatile uint64_t t22 = 3353887LLU;

    t22 = ((x101%x102)/(x103+x104));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x108 = 3065;
	uint32_t t23 = 15751345U;

    t23 = ((x105%x106)/(x107+x108));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = -12;
	volatile uint16_t x112 = 1305U;
	int32_t t24 = -232;

    t24 = ((x109%x110)/(x111+x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x115 = INT32_MIN;
	uint32_t t25 = 29843U;

    t25 = ((x113%x114)/(x115+x116));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 27U;
	int8_t x122 = 10;
	uint16_t x123 = 0U;
	uint8_t x124 = 1U;
	static volatile int32_t t26 = -424205;

    t26 = ((x121%x122)/(x123+x124));

    if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = 0;
	volatile uint64_t x126 = 130813817781232LLU;
	uint32_t x127 = 3922946U;
	int16_t x128 = INT16_MIN;
	volatile uint64_t t27 = 8129597934414882LLU;

    t27 = ((x125%x126)/(x127+x128));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = 6;
	int16_t x131 = 0;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t28 = 25;

    t28 = ((x129%x130)/(x131+x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 14U;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t29 = 672U;

    t29 = ((x133%x134)/(x135+x136));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = 1;
	volatile int16_t x138 = INT16_MIN;
	int32_t x140 = -1;
	int32_t t30 = 3176;

    t30 = ((x137%x138)/(x139+x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = UINT32_MAX;
	static int8_t x142 = 5;
	int8_t x143 = 5;
	static uint32_t t31 = 696568U;

    t31 = ((x141%x142)/(x143+x144));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 273418023869642LLU;
	int16_t x146 = INT16_MAX;
	volatile int64_t x147 = -81546022586LL;
	volatile int32_t x148 = 63954876;

    t32 = ((x145%x146)/(x147+x148));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x151 = -588335858;
	volatile uint16_t x152 = 10083U;
	uint32_t t33 = 218768U;

    t33 = ((x149%x150)/(x151+x152));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x153 = INT64_MAX;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = 35159562980LLU;
	static int64_t x156 = -1LL;
	uint64_t t34 = 2358782692898303311LLU;

    t34 = ((x153%x154)/(x155+x156));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t t35 = 312U;

    t35 = ((x157%x158)/(x159+x160));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = UINT16_MAX;
	uint64_t x162 = UINT64_MAX;
	static int8_t x164 = INT8_MAX;
	static volatile uint64_t t36 = 809LLU;

    t36 = ((x161%x162)/(x163+x164));

    if (t36 != 381LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = -1;
	uint64_t x166 = 105518837LLU;
	volatile int16_t x167 = INT16_MAX;
	volatile int64_t x168 = -1LL;
	volatile uint64_t t37 = 28100544603960750LLU;

    t37 = ((x165%x166)/(x167+x168));

    if (t37 != 1236LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = 753188U;
	uint16_t x170 = 13U;
	volatile int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MAX;
	uint32_t t38 = 3046U;

    t38 = ((x169%x170)/(x171+x172));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = 1;
	static int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int8_t x176 = -1;
	int32_t t39 = -795968;

    t39 = ((x173%x174)/(x175+x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x178 = 20423636603374LLU;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t40 = 115369076198LLU;

    t40 = ((x177%x178)/(x179+x180));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x186 = INT8_MAX;
	int32_t x187 = -1;
	int16_t x188 = INT16_MAX;
	volatile int32_t t41 = -4315;

    t41 = ((x185%x186)/(x187+x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x189 = 275LLU;
	uint64_t x190 = 415922654271LLU;
	int32_t x191 = INT32_MIN;
	volatile uint64_t t42 = 135053417LLU;

    t42 = ((x189%x190)/(x191+x192));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MAX;
	int8_t x194 = 10;
	uint16_t x195 = UINT16_MAX;

    t43 = ((x193%x194)/(x195+x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x197 = 3792293;
	static volatile uint16_t x198 = 509U;
	uint8_t x199 = 5U;
	volatile uint32_t t44 = 8U;

    t44 = ((x197%x198)/(x199+x200));

    if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x203 = INT32_MIN;
	int64_t t45 = 110938135872718LL;

    t45 = ((x201%x202)/(x203+x204));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = INT16_MIN;
	uint64_t x206 = UINT64_MAX;
	volatile int32_t x207 = 799328028;
	uint64_t x208 = UINT64_MAX;
	uint64_t t46 = 1186892955LLU;

    t46 = ((x205%x206)/(x207+x208));

    if (t46 != 23077814677LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = -22;
	volatile int32_t x210 = INT32_MAX;
	static volatile int16_t x211 = INT16_MIN;
	volatile int64_t t47 = -11139161LL;

    t47 = ((x209%x210)/(x211+x212));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x215 = INT16_MAX;
	uint32_t x216 = 248U;
	static volatile int64_t t48 = -32559974LL;

    t48 = ((x213%x214)/(x215+x216));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -47907;
	static int32_t x220 = -1;

    t49 = ((x217%x218)/(x219+x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x222 = -16;
	uint16_t x223 = 2U;
	int32_t x224 = 3042812;
	static int64_t t50 = 265521517041774128LL;

    t50 = ((x221%x222)/(x223+x224));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x225 = 271133747296LL;
	static int32_t x226 = INT32_MIN;
	uint64_t x227 = 1LLU;
	uint16_t x228 = 852U;
	static uint64_t t51 = 23855800694006446LLU;

    t51 = ((x225%x226)/(x227+x228));

    if (t51 != 645729LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x230 = 179342392819LLU;
	uint64_t x231 = 1411572333833663LLU;
	static uint8_t x232 = 2U;
	uint64_t t52 = 287030265346730440LLU;

    t52 = ((x229%x230)/(x231+x232));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x238 = -1;
	uint32_t x240 = 159175736U;
	static volatile uint32_t t53 = 0U;

    t53 = ((x237%x238)/(x239+x240));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x245 = 36505LLU;
	int16_t x246 = INT16_MAX;
	uint16_t x247 = UINT16_MAX;

    t54 = ((x245%x246)/(x247+x248));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x250 = -4240159921524668LL;
	int32_t x251 = -670;
	int8_t x252 = -1;

    t55 = ((x249%x250)/(x251+x252));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x253 = 0U;
	static int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 473LLU;
	volatile uint64_t t56 = 138988563LLU;

    t56 = ((x253%x254)/(x255+x256));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = 3901LL;
	static int32_t x258 = INT32_MIN;
	uint32_t x259 = 33154U;
	uint16_t x260 = UINT16_MAX;
	static volatile int64_t t57 = 300364129LL;

    t57 = ((x257%x258)/(x259+x260));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x261 = 14692U;
	uint64_t x262 = 4048042723889273252LLU;
	int8_t x263 = -1;
	int32_t x264 = -3;
	volatile uint64_t t58 = 6005LLU;

    t58 = ((x261%x262)/(x263+x264));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x269 = INT64_MIN;
	volatile int32_t x270 = -1;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = INT16_MIN;
	int64_t t59 = -12715472913LL;

    t59 = ((x269%x270)/(x271+x272));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x273 = -1;
	volatile int16_t x274 = 10;
	static volatile int64_t x275 = -1LL;
	uint16_t x276 = 16265U;
	static volatile int64_t t60 = -18684703289242950LL;

    t60 = ((x273%x274)/(x275+x276));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 83U;
	int32_t t61 = -116375;

    t61 = ((x281%x282)/(x283+x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x285 = -11072958LL;
	static int16_t x286 = 6;
	int64_t x288 = 596562692LL;
	volatile int64_t t62 = 2997168630151431719LL;

    t62 = ((x285%x286)/(x287+x288));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x289 = UINT8_MAX;
	uint16_t x290 = UINT16_MAX;
	uint64_t x291 = 1016LLU;
	static int64_t x292 = -1LL;
	uint64_t t63 = 6839775LLU;

    t63 = ((x289%x290)/(x291+x292));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x293 = 787920387;
	static uint8_t x294 = 3U;
	static int32_t x295 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = ((x293%x294)/(x295+x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = 171183003LL;
	uint64_t t65 = 1515419261131LLU;

    t65 = ((x297%x298)/(x299+x300));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = INT16_MAX;
	static uint64_t x302 = UINT64_MAX;
	int8_t x303 = -1;
	uint16_t x304 = 5914U;
	volatile uint64_t t66 = 56427387808LLU;

    t66 = ((x301%x302)/(x303+x304));

    if (t66 != 5LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x309 = INT8_MAX;
	static volatile int8_t x310 = INT8_MAX;
	uint64_t t67 = 30344091LLU;

    t67 = ((x309%x310)/(x311+x312));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x314 = 6652U;
	static int64_t x315 = 458142400364LL;
	int16_t x316 = -1;
	volatile int64_t t68 = 60648443593896LL;

    t68 = ((x313%x314)/(x315+x316));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x319 = 42U;
	uint64_t x320 = 1294219LLU;
	uint64_t t69 = 47539584661364LLU;

    t69 = ((x317%x318)/(x319+x320));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x321 = INT8_MIN;
	int64_t x322 = -97421941LL;
	int16_t x323 = -271;
	uint8_t x324 = UINT8_MAX;
	int64_t t70 = -6LL;

    t70 = ((x321%x322)/(x323+x324));

    if (t70 != 8LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x325 = -1;
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 32U;
	uint32_t t71 = 476505364U;

    t71 = ((x325%x326)/(x327+x328));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x329 = -41LL;
	static int8_t x330 = 4;
	uint8_t x331 = UINT8_MAX;
	static volatile int64_t t72 = 3099299240LL;

    t72 = ((x329%x330)/(x331+x332));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;
	uint64_t t73 = 51875340700LLU;

    t73 = ((x333%x334)/(x335+x336));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x337 = 7U;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = 64381489U;
	uint16_t x340 = UINT16_MAX;
	int64_t t74 = -13015151440LL;

    t74 = ((x337%x338)/(x339+x340));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = 269450143982644LL;
	int64_t x342 = 1299004403610378LL;
	uint64_t x343 = 675486848LLU;
	volatile int64_t x344 = -973118338471LL;

    t75 = ((x341%x342)/(x343+x344));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x362 = -7670LL;
	int16_t x363 = INT16_MAX;
	uint16_t x364 = 3U;
	int64_t t76 = -86758553290550LL;

    t76 = ((x361%x362)/(x363+x364));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x369 = INT64_MIN;
	static int64_t x370 = -1017558602066754204LL;
	uint16_t x371 = 0U;
	volatile int8_t x372 = INT8_MIN;
	static int64_t t77 = -160696LL;

    t77 = ((x369%x370)/(x371+x372));

    if (t77 != 510504830109281LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x373 = -105652LL;
	volatile uint64_t x374 = 140900952662344922LLU;
	int32_t x375 = 34754357;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t78 = 2LLU;

    t78 = ((x373%x374)/(x375+x376));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	int64_t x379 = 206388683LL;
	int8_t x380 = -1;
	static int64_t t79 = 6894LL;

    t79 = ((x377%x378)/(x379+x380));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x385 = 170712774LLU;
	static int64_t x387 = -1LL;
	int32_t x388 = INT32_MIN;

    t80 = ((x385%x386)/(x387+x388));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = -14LL;
	uint64_t x392 = 121454316033712LLU;
	volatile uint64_t t81 = 8476504150LLU;

    t81 = ((x389%x390)/(x391+x392));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x393 = 496220385U;
	uint16_t x394 = 13299U;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MIN;
	static int64_t t82 = 1375LL;

    t82 = ((x393%x394)/(x395+x396));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x397 = 0;
	int8_t x398 = INT8_MIN;
	volatile int16_t x399 = INT16_MAX;
	volatile int64_t t83 = -1784452216983LL;

    t83 = ((x397%x398)/(x399+x400));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x406 = 1U;
	int16_t x408 = 3;
	int32_t t84 = -23;

    t84 = ((x405%x406)/(x407+x408));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t85 = 85238;

    t85 = ((x409%x410)/(x411+x412));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x417 = -1LL;
	static int8_t x418 = INT8_MIN;
	uint32_t x420 = 3U;
	volatile int64_t t86 = 2135717LL;

    t86 = ((x417%x418)/(x419+x420));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x422 = UINT32_MAX;
	int16_t x423 = -1;
	uint16_t x424 = 60U;
	uint32_t t87 = 20211U;

    t87 = ((x421%x422)/(x423+x424));

    if (t87 != 72587445U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x425 = INT32_MAX;
	int8_t x426 = INT8_MAX;
	int64_t x427 = -226930122LL;
	volatile int32_t x428 = INT32_MAX;
	int64_t t88 = -1LL;

    t88 = ((x425%x426)/(x427+x428));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x429 = INT32_MIN;
	int32_t x430 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	uint16_t x432 = 1446U;
	static uint32_t t89 = 2736U;

    t89 = ((x429%x430)/(x431+x432));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x434 = -1LL;
	uint8_t x435 = 30U;
	uint8_t x436 = UINT8_MAX;
	static volatile int64_t t90 = -2543094LL;

    t90 = ((x433%x434)/(x435+x436));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x437 = INT64_MIN;
	uint64_t x438 = 902431737LLU;
	static uint16_t x439 = 60U;
	volatile int16_t x440 = -1;
	volatile uint64_t t91 = 149369481223079LLU;

    t91 = ((x437%x438)/(x439+x440));

    if (t91 != 7592506LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x445 = -9;
	uint32_t x446 = UINT32_MAX;
	volatile int64_t x447 = -1LL;
	uint16_t x448 = 6290U;
	int64_t t92 = -131240177110247LL;

    t92 = ((x445%x446)/(x447+x448));

    if (t92 != 682933LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x453 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	volatile uint64_t t93 = 25639LLU;

    t93 = ((x453%x454)/(x455+x456));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x457 = 29U;
	static uint32_t x458 = 61174U;
	volatile int64_t x460 = -11119831101LL;
	static int64_t t94 = -2063860832531LL;

    t94 = ((x457%x458)/(x459+x460));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x461 = -1;
	volatile int32_t x462 = INT32_MAX;
	int8_t x463 = 1;
	static int8_t x464 = 33;

    t95 = ((x461%x462)/(x463+x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x469 = -1;
	static volatile int32_t x470 = INT32_MIN;
	int16_t x471 = -2;
	int16_t x472 = INT16_MIN;

    t96 = ((x469%x470)/(x471+x472));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x473 = 6U;
	int64_t x474 = -1LL;
	uint32_t x476 = 136886U;
	int64_t t97 = -2552288321994182LL;

    t97 = ((x473%x474)/(x475+x476));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x480 = INT8_MIN;
	int32_t t98 = -431652;

    t98 = ((x477%x478)/(x479+x480));

    if (t98 != -65280) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MAX;
	int64_t x483 = INT64_MAX;
	static int64_t t99 = -119764LL;

    t99 = ((x481%x482)/(x483+x484));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x485 = -1;
	int16_t x487 = 221;
	static uint8_t x488 = 54U;

    t100 = ((x485%x486)/(x487+x488));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x489 = 87713171689189629LL;
	int16_t x490 = 1801;
	static int32_t x492 = 1936769;
	int64_t t101 = -4992428LL;

    t101 = ((x489%x490)/(x491+x492));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x493 = 222112837;
	volatile uint64_t x494 = 7170719681061LLU;
	int8_t x495 = INT8_MIN;
	uint32_t x496 = 52387U;

    t102 = ((x493%x494)/(x495+x496));

    if (t102 != 4250LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MIN;
	int64_t x500 = -2241615660629460LL;

    t103 = ((x497%x498)/(x499+x500));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x501 = 109U;
	int8_t x502 = INT8_MAX;
	int16_t x503 = INT16_MIN;
	volatile uint32_t x504 = 630U;
	volatile uint32_t t104 = 6110540U;

    t104 = ((x501%x502)/(x503+x504));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x505 = 80;
	static int32_t x506 = 1;
	int64_t x507 = -1LL;
	volatile int32_t x508 = INT32_MAX;

    t105 = ((x505%x506)/(x507+x508));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = 1;
	int16_t x514 = 443;
	uint16_t x515 = UINT16_MAX;
	uint16_t x516 = UINT16_MAX;
	int32_t t106 = 0;

    t106 = ((x513%x514)/(x515+x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x521 = -1;
	int64_t x522 = -1LL;
	int16_t x523 = -1;
	volatile int64_t t107 = 94LL;

    t107 = ((x521%x522)/(x523+x524));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x525 = 1362U;
	int32_t x526 = INT32_MIN;
	static int32_t t108 = 21;

    t108 = ((x525%x526)/(x527+x528));

    if (t108 != 10) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x529 = 29290LLU;
	uint32_t x530 = 1U;
	volatile uint8_t x532 = UINT8_MAX;
	uint64_t t109 = 38941874839LLU;

    t109 = ((x529%x530)/(x531+x532));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x537 = -94;
	uint32_t x538 = UINT32_MAX;
	int32_t x539 = 0;
	uint32_t x540 = 5111U;
	volatile uint32_t t110 = 944155U;

    t110 = ((x537%x538)/(x539+x540));

    if (t110 != 840337U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x542 = 73U;
	volatile uint32_t t111 = 738653092U;

    t111 = ((x541%x542)/(x543+x544));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x545 = 545U;
	static uint64_t x547 = UINT64_MAX;
	int32_t x548 = -1;

    t112 = ((x545%x546)/(x547+x548));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x557 = INT64_MIN;
	static uint64_t x558 = 44813LLU;
	static volatile uint16_t x559 = 217U;
	volatile uint64_t t113 = 58036831802843LLU;

    t113 = ((x557%x558)/(x559+x560));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x562 = -131128548936693437LL;
	volatile int16_t x563 = -1;
	int16_t x564 = -11541;
	volatile int64_t t114 = -5LL;

    t114 = ((x561%x562)/(x563+x564));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x565 = 125401719U;
	int16_t x566 = INT16_MIN;
	static volatile uint32_t x567 = UINT32_MAX;
	uint32_t x568 = 2410833U;
	volatile uint32_t t115 = 3U;

    t115 = ((x565%x566)/(x567+x568));

    if (t115 != 52U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x569 = UINT32_MAX;
	int32_t x570 = -1;
	int8_t x571 = INT8_MIN;
	static uint64_t x572 = UINT64_MAX;
	volatile uint64_t t116 = 2478512414LLU;

    t116 = ((x569%x570)/(x571+x572));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x573 = 308LLU;
	uint64_t x574 = 8595726088137207575LLU;
	uint64_t x576 = 604LLU;
	volatile uint64_t t117 = 5889421434344LLU;

    t117 = ((x573%x574)/(x575+x576));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x577 = INT16_MIN;
	int8_t x578 = 1;
	volatile uint32_t x579 = UINT32_MAX;
	volatile uint32_t t118 = 2197420U;

    t118 = ((x577%x578)/(x579+x580));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x582 = INT8_MIN;
	int32_t x583 = -1;
	int16_t x584 = -1;
	int32_t t119 = 71356633;

    t119 = ((x581%x582)/(x583+x584));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x586 = INT64_MIN;
	int8_t x587 = -1;
	int16_t x588 = -1;
	int64_t t120 = -94169084635928268LL;

    t120 = ((x585%x586)/(x587+x588));

    if (t120 != 259414LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x589 = UINT32_MAX;
	int16_t x590 = INT16_MIN;
	static int16_t x592 = INT16_MAX;

    t121 = ((x589%x590)/(x591+x592));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x593 = 2075239U;
	int16_t x594 = -54;
	volatile int16_t x595 = INT16_MIN;
	uint32_t t122 = 1201252890U;

    t122 = ((x593%x594)/(x595+x596));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x597 = INT64_MIN;
	volatile int8_t x598 = -22;
	static uint8_t x599 = 54U;
	static int64_t x600 = -7982811444LL;
	int64_t t123 = 518782064716980521LL;

    t123 = ((x597%x598)/(x599+x600));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x609 = INT16_MAX;
	int32_t x611 = -53415304;
	int8_t x612 = INT8_MIN;
	volatile int32_t t124 = 169;

    t124 = ((x609%x610)/(x611+x612));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x617 = 8;
	int32_t x618 = -3;
	int32_t x620 = INT32_MIN;
	volatile uint32_t t125 = 80U;

    t125 = ((x617%x618)/(x619+x620));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x621 = -1;
	int16_t x623 = INT16_MIN;
	volatile int64_t x624 = INT64_MAX;
	int64_t t126 = 59867929166LL;

    t126 = ((x621%x622)/(x623+x624));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x625 = -150;
	uint64_t x626 = UINT64_MAX;
	int8_t x627 = 19;
	static int16_t x628 = INT16_MIN;
	uint64_t t127 = 380407638254598348LLU;

    t127 = ((x625%x626)/(x627+x628));

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x629 = -1;
	uint64_t x630 = 1001412192LLU;
	uint16_t x631 = UINT16_MAX;
	uint16_t x632 = 108U;
	volatile uint64_t t128 = 472662710033606LLU;

    t128 = ((x629%x630)/(x631+x632));

    if (t128 != 7810LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MIN;
	uint16_t x635 = 21U;
	static int16_t x636 = -112;
	static int32_t t129 = -421;

    t129 = ((x633%x634)/(x635+x636));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x637 = -2;
	volatile int64_t x638 = -1LL;
	int32_t x639 = 629003;
	uint8_t x640 = 1U;
	int64_t t130 = 1LL;

    t130 = ((x637%x638)/(x639+x640));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x642 = 61718737;
	uint64_t x643 = 4939656LLU;
	int32_t x644 = -18533;
	static uint64_t t131 = 376LLU;

    t131 = ((x641%x642)/(x643+x644));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x646 = INT8_MAX;
	static volatile int8_t x648 = INT8_MIN;
	static int64_t t132 = 14294551881392LL;

    t132 = ((x645%x646)/(x647+x648));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x649 = 4102161U;
	uint64_t x650 = 26207505518954LLU;
	int8_t x651 = INT8_MAX;
	int16_t x652 = INT16_MAX;
	volatile uint64_t t133 = 48930001026649086LLU;

    t133 = ((x649%x650)/(x651+x652));

    if (t133 != 124LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x653 = INT16_MIN;
	uint32_t x654 = 979440221U;
	int32_t x655 = 2;
	int8_t x656 = INT8_MIN;
	uint32_t t134 = 9U;

    t134 = ((x653%x654)/(x655+x656));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x658 = 20;
	volatile uint16_t x659 = UINT16_MAX;
	int16_t x660 = -1;
	volatile int32_t t135 = -11;

    t135 = ((x657%x658)/(x659+x660));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x661 = -1;
	int8_t x662 = -1;
	uint32_t x663 = UINT32_MAX;
	uint32_t x664 = 3U;
	uint32_t t136 = 541841006U;

    t136 = ((x661%x662)/(x663+x664));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x669 = -45703297754381LL;
	int8_t x670 = INT8_MIN;
	volatile int8_t x671 = INT8_MAX;
	static volatile int8_t x672 = INT8_MIN;
	volatile int64_t t137 = -58578266909LL;

    t137 = ((x669%x670)/(x671+x672));

    if (t137 != 13LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x673 = -1;
	static volatile int64_t x674 = INT64_MIN;
	volatile int32_t x675 = -1;
	static uint32_t x676 = 446765U;
	static int64_t t138 = 836472958225324183LL;

    t138 = ((x673%x674)/(x675+x676));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x677 = UINT64_MAX;
	int64_t x678 = INT64_MAX;
	uint32_t x679 = 3106590U;

    t139 = ((x677%x678)/(x679+x680));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x681 = 9;
	static volatile int8_t x682 = 1;
	static uint32_t x683 = 13450599U;
	uint32_t x684 = UINT32_MAX;
	volatile uint32_t t140 = 16807861U;

    t140 = ((x681%x682)/(x683+x684));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x685 = INT32_MAX;
	static int32_t x686 = -18;
	int32_t x687 = -122585207;
	uint8_t x688 = UINT8_MAX;
	int32_t t141 = 8213934;

    t141 = ((x685%x686)/(x687+x688));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;
	uint64_t x692 = 63097LLU;
	uint64_t t142 = 12LLU;

    t142 = ((x689%x690)/(x691+x692));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x695 = 6U;
	static uint32_t x696 = 6301U;
	volatile uint32_t t143 = 15699300U;

    t143 = ((x693%x694)/(x695+x696));

    if (t143 != 11352U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x697 = 31U;
	int8_t x698 = 57;
	static int8_t x699 = 51;
	int64_t t144 = -1801268601408LL;

    t144 = ((x697%x698)/(x699+x700));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x701 = -1;
	int64_t x702 = -1LL;
	uint16_t x704 = 31942U;
	static volatile int64_t t145 = -3998962LL;

    t145 = ((x701%x702)/(x703+x704));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x706 = -1;
	static int16_t x707 = INT16_MAX;
	uint16_t x708 = 8182U;
	volatile uint64_t t146 = 6LLU;

    t146 = ((x705%x706)/(x707+x708));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int32_t x710 = INT32_MIN;
	int16_t x711 = INT16_MAX;
	int16_t x712 = INT16_MIN;
	static volatile uint32_t t147 = 14U;

    t147 = ((x709%x710)/(x711+x712));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x713 = 6LL;
	static volatile int32_t x716 = INT32_MAX;
	int64_t t148 = -75936389480953567LL;

    t148 = ((x713%x714)/(x715+x716));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x718 = INT8_MIN;
	static volatile uint64_t t149 = 5115742LLU;

    t149 = ((x717%x718)/(x719+x720));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x721 = UINT8_MAX;
	int16_t x722 = INT16_MIN;
	uint64_t x723 = 80456568939494701LLU;
	uint64_t t150 = 12LLU;

    t150 = ((x721%x722)/(x723+x724));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x725 = 1;
	static int8_t x726 = INT8_MAX;
	volatile uint16_t x727 = UINT16_MAX;
	int64_t x728 = INT64_MIN;
	volatile int64_t t151 = 159672937595437636LL;

    t151 = ((x725%x726)/(x727+x728));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x729 = 1U;
	volatile int64_t x731 = 36884085864371LL;
	int32_t x732 = INT32_MAX;
	volatile int64_t t152 = -1LL;

    t152 = ((x729%x730)/(x731+x732));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x734 = INT64_MAX;
	int8_t x735 = INT8_MAX;
	int16_t x736 = -9;
	volatile int64_t t153 = 482232546767863LL;

    t153 = ((x733%x734)/(x735+x736));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x737 = INT64_MAX;
	volatile uint16_t x740 = UINT16_MAX;
	volatile int64_t t154 = -32154969LL;

    t154 = ((x737%x738)/(x739+x740));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x741 = UINT32_MAX;
	int32_t x742 = INT32_MIN;
	static int8_t x744 = INT8_MIN;
	volatile uint32_t t155 = 130754283U;

    t155 = ((x741%x742)/(x743+x744));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x745 = UINT64_MAX;
	volatile uint8_t x747 = UINT8_MAX;
	uint16_t x748 = UINT16_MAX;
	volatile uint64_t t156 = 244205593344647515LLU;

    t156 = ((x745%x746)/(x747+x748));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x753 = -3089;
	uint8_t x754 = 2U;
	int8_t x756 = INT8_MIN;
	volatile int32_t t157 = 52884;

    t157 = ((x753%x754)/(x755+x756));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x757 = -1;
	uint16_t x758 = UINT16_MAX;
	volatile uint32_t x759 = 187U;
	uint8_t x760 = UINT8_MAX;
	uint32_t t158 = 745406U;

    t158 = ((x757%x758)/(x759+x760));

    if (t158 != 9717120U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x765 = 0U;
	int32_t x766 = INT32_MAX;
	uint32_t x767 = 297U;
	uint64_t x768 = 15LLU;
	volatile uint64_t t159 = 116207LLU;

    t159 = ((x765%x766)/(x767+x768));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x769 = 3U;
	uint32_t x770 = 6062635U;
	static volatile int64_t x771 = -6545744LL;
	static uint64_t x772 = 2LLU;
	static uint64_t t160 = 4843642666431LLU;

    t160 = ((x769%x770)/(x771+x772));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x777 = 1U;
	uint64_t x778 = 1724LLU;
	volatile uint32_t x779 = 1769U;
	volatile uint64_t t161 = 345LLU;

    t161 = ((x777%x778)/(x779+x780));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x783 = -1;
	int64_t x784 = 915385006LL;
	volatile int64_t t162 = -3750894281271LL;

    t162 = ((x781%x782)/(x783+x784));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x785 = INT32_MAX;
	volatile int64_t x786 = INT64_MAX;
	int32_t x787 = -63719109;
	int8_t x788 = INT8_MIN;
	volatile int64_t t163 = 32296909455LL;

    t163 = ((x785%x786)/(x787+x788));

    if (t163 != -33LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x793 = INT8_MAX;
	volatile int64_t x794 = INT64_MIN;
	volatile int8_t x795 = -1;
	int16_t x796 = INT16_MIN;
	static int64_t t164 = 2515031449668LL;

    t164 = ((x793%x794)/(x795+x796));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x797 = -1;
	int16_t x798 = INT16_MIN;
	int64_t x799 = -1LL;
	uint64_t x800 = UINT64_MAX;
	uint64_t t165 = 14800LLU;

    t165 = ((x797%x798)/(x799+x800));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x805 = 143869182845121132LL;
	int8_t x806 = INT8_MAX;
	int16_t x807 = INT16_MIN;
	static volatile uint64_t x808 = 5213284806647883LLU;
	static uint64_t t166 = 1485391795007312LLU;

    t166 = ((x805%x806)/(x807+x808));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x809 = INT32_MIN;
	volatile int16_t x811 = INT16_MIN;
	int64_t x812 = 11659LL;

    t167 = ((x809%x810)/(x811+x812));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x813 = 2LL;
	volatile int32_t x814 = -1;
	int64_t x815 = INT64_MAX;
	volatile int64_t t168 = 6730532208LL;

    t168 = ((x813%x814)/(x815+x816));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x818 = 1;
	uint32_t x819 = 48878701U;
	int16_t x820 = 30;
	static uint64_t t169 = 1015421575644624590LLU;

    t169 = ((x817%x818)/(x819+x820));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x821 = -1;
	int32_t x822 = INT32_MIN;
	int64_t x823 = -1LL;
	uint8_t x824 = UINT8_MAX;

    t170 = ((x821%x822)/(x823+x824));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x825 = INT32_MAX;
	volatile int16_t x826 = INT16_MIN;
	uint64_t x827 = 845LLU;
	int16_t x828 = -1;
	uint64_t t171 = 0LLU;

    t171 = ((x825%x826)/(x827+x828));

    if (t171 != 38LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x829 = 390317486LLU;
	int64_t x832 = -1LL;
	static uint64_t t172 = 3216528141506LLU;

    t172 = ((x829%x830)/(x831+x832));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x833 = INT64_MIN;
	int64_t x834 = -127268355LL;
	volatile uint8_t x836 = 11U;
	int64_t t173 = -13LL;

    t173 = ((x833%x834)/(x835+x836));

    if (t173 != -9217248LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x837 = -1LL;
	int16_t x839 = INT16_MIN;
	static int8_t x840 = -1;
	int64_t t174 = -933LL;

    t174 = ((x837%x838)/(x839+x840));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x841 = INT16_MIN;
	volatile int16_t x843 = INT16_MIN;

    t175 = ((x841%x842)/(x843+x844));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x845 = -1LL;
	int64_t x846 = 1860795547LL;
	uint16_t x847 = UINT16_MAX;
	uint32_t x848 = UINT32_MAX;
	int64_t t176 = -435675153824964109LL;

    t176 = ((x845%x846)/(x847+x848));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x849 = INT32_MIN;
	int16_t x850 = -1;
	static int8_t x851 = INT8_MIN;
	int8_t x852 = -1;

    t177 = ((x849%x850)/(x851+x852));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x853 = UINT32_MAX;
	int16_t x854 = -204;
	static int64_t x855 = -1LL;
	static uint64_t x856 = 229500375159LLU;
	static volatile uint64_t t178 = 927554600161814LLU;

    t178 = ((x853%x854)/(x855+x856));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x858 = -1;
	int8_t x859 = -30;
	int32_t x860 = INT32_MAX;
	volatile uint64_t t179 = 1338229646284339333LLU;

    t179 = ((x857%x858)/(x859+x860));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x869 = INT16_MAX;
	uint32_t x870 = UINT32_MAX;
	int8_t x871 = -47;
	uint8_t x872 = UINT8_MAX;
	volatile uint32_t t180 = 1U;

    t180 = ((x869%x870)/(x871+x872));

    if (t180 != 157U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x873 = -2;
	int32_t x875 = INT32_MAX;
	static uint64_t x876 = UINT64_MAX;

    t181 = ((x873%x874)/(x875+x876));

    if (t181 != 8589934600LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x877 = 7U;
	volatile int16_t x880 = INT16_MAX;
	volatile uint32_t t182 = 2U;

    t182 = ((x877%x878)/(x879+x880));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x881 = 26828LLU;
	int8_t x882 = 20;
	int64_t x883 = -8280181LL;
	int32_t x884 = -1;
	volatile uint64_t t183 = 76LLU;

    t183 = ((x881%x882)/(x883+x884));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x886 = 1541559U;
	int32_t x887 = INT32_MIN;
	volatile int64_t x888 = INT64_MAX;
	static volatile int64_t t184 = 29508LL;

    t184 = ((x885%x886)/(x887+x888));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x889 = 65U;
	uint64_t x890 = 61583666LLU;
	volatile int64_t x891 = 35637LL;
	int32_t x892 = INT32_MIN;
	volatile uint64_t t185 = 6928106491LLU;

    t185 = ((x889%x890)/(x891+x892));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x894 = UINT64_MAX;
	int32_t x895 = -4254951;
	uint32_t x896 = 5U;
	static volatile uint64_t t186 = 458572157468LLU;

    t186 = ((x893%x894)/(x895+x896));

    if (t186 != 4299226461LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x901 = 571;
	static volatile int8_t x902 = INT8_MAX;
	volatile int8_t x903 = -1;
	volatile int32_t t187 = 43;

    t187 = ((x901%x902)/(x903+x904));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x905 = 1967U;
	int16_t x906 = 11270;
	volatile int8_t x907 = -1;
	volatile uint32_t x908 = 9U;
	uint32_t t188 = 31774U;

    t188 = ((x905%x906)/(x907+x908));

    if (t188 != 245U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x911 = 50;
	volatile uint8_t x912 = UINT8_MAX;
	int64_t t189 = 1465980580415LL;

    t189 = ((x909%x910)/(x911+x912));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x913 = 16533LL;
	static volatile uint64_t x914 = UINT64_MAX;
	static int16_t x916 = 1476;

    t190 = ((x913%x914)/(x915+x916));

    if (t190 != 11LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x917 = -1LL;
	uint64_t x918 = 44661165463386096LLU;
	uint8_t x919 = UINT8_MAX;
	int8_t x920 = INT8_MIN;
	uint64_t t191 = 13970LLU;

    t191 = ((x917%x918)/(x919+x920));

    if (t191 != 13249900244834LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x925 = -5;
	static int16_t x926 = INT16_MAX;
	int8_t x928 = INT8_MAX;
	static int32_t t192 = 13099;

    t192 = ((x925%x926)/(x927+x928));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x930 = -989722065819244LL;
	volatile int8_t x931 = INT8_MIN;
	uint64_t x932 = UINT64_MAX;
	uint64_t t193 = 195845720144LLU;

    t193 = ((x929%x930)/(x931+x932));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x933 = -30452LL;
	static int16_t x934 = INT16_MIN;
	uint16_t x935 = 2U;
	int64_t t194 = 2170490345722704LL;

    t194 = ((x933%x934)/(x935+x936));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x941 = 202LLU;
	volatile uint8_t x942 = 15U;
	volatile uint8_t x943 = 0U;
	int64_t x944 = -1322340422LL;
	static uint64_t t195 = 1093258562929332891LLU;

    t195 = ((x941%x942)/(x943+x944));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x955 = 2053282771U;
	int64_t x956 = -19LL;
	volatile int64_t t196 = -112891752825605LL;

    t196 = ((x953%x954)/(x955+x956));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x957 = -723821720918784603LL;
	volatile int64_t x958 = 3494083082502926LL;
	static uint16_t x959 = UINT16_MAX;
	int8_t x960 = INT8_MAX;
	static int64_t t197 = 6837225270863LL;

    t197 = ((x957%x958)/(x959+x960));

    if (t197 != -8323274354LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x961 = UINT16_MAX;
	volatile int32_t t198 = -469755684;

    t198 = ((x961%x962)/(x963+x964));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x965 = INT16_MIN;
	int8_t x967 = INT8_MAX;
	int32_t t199 = 176728;

    t199 = ((x965%x966)/(x967+x968));

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

