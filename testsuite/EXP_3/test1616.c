
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

uint32_t x6 = 369U;
int16_t x9 = -1;
int32_t x12 = INT32_MAX;
volatile int8_t x20 = -7;
static uint32_t t4 = 169U;
int16_t x23 = -1446;
int32_t x25 = INT32_MIN;
uint16_t x30 = 2490U;
int16_t x40 = 27;
uint64_t x44 = 1112460955554949LLU;
uint64_t x45 = 604562687765469793LLU;
static uint64_t t10 = 22232293349153LLU;
int64_t x51 = -1LL;
volatile int16_t x63 = INT16_MIN;
static uint64_t t13 = 66792073478871LLU;
static uint8_t x70 = 2U;
uint32_t x76 = 382U;
int64_t t16 = 299126134442009615LL;
int32_t x87 = INT32_MIN;
static int8_t x92 = INT8_MAX;
static int32_t t20 = -7576925;
int16_t x103 = INT16_MAX;
int16_t x104 = INT16_MIN;
static int64_t x115 = INT64_MIN;
volatile int64_t t24 = 122292390LL;
int32_t x118 = INT32_MAX;
int8_t x121 = -1;
int32_t t26 = -8515;
int64_t x126 = -51627LL;
static uint32_t x127 = UINT32_MAX;
static int16_t x128 = INT16_MIN;
uint16_t x129 = UINT16_MAX;
static int64_t x132 = INT64_MIN;
int64_t x139 = -1912210151LL;
volatile int64_t x146 = INT64_MIN;
uint8_t x149 = 4U;
int32_t x164 = INT32_MAX;
uint64_t t35 = 132955761LLU;
uint64_t x171 = 44298730994393LLU;
static int16_t x172 = -1;
volatile uint32_t t37 = 55U;
uint64_t x183 = 454192LLU;
volatile uint16_t x203 = 46U;
static uint16_t x205 = 4671U;
int16_t x218 = INT16_MIN;
uint16_t x221 = 7164U;
volatile int8_t x229 = INT8_MAX;
volatile int16_t x250 = -4;
volatile int32_t t50 = 908;
int32_t x253 = INT32_MIN;
int16_t x255 = INT16_MAX;
uint64_t x258 = 19LLU;
static int64_t x261 = -1LL;
int8_t x263 = -1;
uint64_t x265 = 20LLU;
uint32_t x269 = UINT32_MAX;
int16_t x275 = 1;
uint64_t x276 = 103LLU;
volatile uint32_t t56 = 0U;
int8_t x278 = 23;
int64_t x280 = INT64_MIN;
int8_t x284 = INT8_MIN;
int8_t x287 = -1;
volatile int8_t x288 = INT8_MAX;
volatile int32_t t60 = -66642;
int32_t x297 = INT32_MIN;
volatile int32_t x299 = 973273313;
uint8_t x305 = 3U;
int64_t x310 = -639969LL;
int8_t x316 = 28;
static int32_t x322 = INT32_MIN;
int16_t x324 = INT16_MIN;
volatile int32_t t67 = 35719;
int8_t x360 = 1;
uint32_t x361 = UINT32_MAX;
int8_t x371 = -1;
int32_t x372 = -1;
int64_t x375 = INT64_MIN;
uint64_t x376 = UINT64_MAX;
int16_t x380 = INT16_MIN;
volatile uint32_t x387 = UINT32_MAX;
volatile int32_t x394 = -1;
uint64_t x422 = 3854405175622LLU;
int8_t x430 = INT8_MAX;
int16_t x434 = -5;
int64_t t85 = -656304704815LL;
int64_t x453 = -1LL;
uint32_t t89 = 1U;
int8_t x468 = 1;
volatile uint16_t x473 = 5U;
static uint8_t x475 = 17U;
int64_t x483 = 22358270817LL;
int32_t x484 = INT32_MIN;
uint8_t x486 = UINT8_MAX;
int8_t x493 = INT8_MIN;
int8_t x494 = INT8_MIN;
uint64_t x496 = UINT64_MAX;
static uint64_t x502 = 3943689LLU;
int8_t x508 = -54;
volatile int8_t x513 = INT8_MIN;
uint32_t x532 = UINT32_MAX;
uint16_t x535 = 3U;
int16_t x541 = 22;
static volatile uint16_t x551 = 61U;
uint32_t x558 = 3U;
uint64_t x561 = 10LLU;
volatile int64_t x562 = INT64_MAX;
int32_t x564 = INT32_MIN;
volatile uint64_t t110 = 957660597204692LLU;
static volatile int32_t x569 = -1;
int8_t x571 = INT8_MIN;
int64_t x580 = INT64_MIN;
int32_t x581 = 172014953;
int8_t x583 = -9;
volatile int32_t t114 = 508764254;
int32_t t117 = -2;
uint8_t x603 = 2U;
int16_t x607 = INT16_MIN;
int32_t x608 = INT32_MAX;
static int64_t x619 = INT64_MIN;
uint32_t x629 = 16U;
uint32_t x632 = UINT32_MAX;
uint8_t x636 = UINT8_MAX;
int8_t x637 = INT8_MAX;
volatile int64_t x639 = INT64_MIN;
int16_t x641 = INT16_MAX;
volatile int32_t t125 = -37;
static int8_t x647 = INT8_MAX;
uint64_t t126 = 77LLU;
int32_t x656 = INT32_MIN;
static uint64_t x658 = UINT64_MAX;
static int8_t x665 = INT8_MIN;
volatile int64_t x667 = 122458829469083037LL;
static volatile uint32_t t131 = 3219U;
int8_t x675 = 27;
static int8_t x680 = 0;
volatile int64_t x681 = INT64_MIN;
static volatile int64_t t134 = 56289878LL;
int32_t x688 = INT32_MAX;
static int64_t x694 = -1LL;
int8_t x714 = INT8_MAX;
static volatile uint8_t x721 = 31U;
volatile int8_t x732 = INT8_MAX;
int16_t x733 = INT16_MIN;
volatile int8_t x734 = -27;
volatile int64_t x735 = INT64_MAX;
int32_t t144 = 5891;
volatile uint8_t x737 = 7U;
volatile int32_t t145 = -244;
volatile int8_t x742 = INT8_MIN;
uint64_t x744 = 2857LLU;
uint64_t x749 = UINT64_MAX;
int8_t x750 = INT8_MAX;
int32_t x751 = -1;
static volatile uint8_t x758 = 94U;
int16_t x760 = INT16_MIN;
uint64_t x764 = 11996988LLU;
int32_t x767 = INT32_MIN;
int32_t x768 = INT32_MAX;
int8_t x771 = -1;
volatile int8_t x774 = INT8_MAX;
int16_t x780 = -1;
int8_t x781 = INT8_MIN;
static volatile int8_t x783 = -1;
volatile int64_t t155 = -12321002438871734LL;
int8_t x799 = INT8_MIN;
int32_t t158 = -2336;
int64_t x804 = -1LL;
int32_t x805 = -1;
int16_t x816 = -5;
volatile uint8_t x821 = 1U;
volatile int64_t x829 = INT64_MIN;
uint64_t x842 = 73712042LLU;
int16_t x854 = INT16_MIN;
volatile uint8_t x858 = 1U;
static int8_t x873 = INT8_MIN;
volatile uint32_t t174 = 104608U;
static uint8_t x889 = 78U;
int32_t x895 = INT32_MIN;
int32_t x896 = INT32_MIN;
volatile int32_t x903 = INT32_MAX;
volatile uint64_t x905 = 296603457LLU;
uint64_t t178 = 1127777315408LLU;
int8_t x909 = 14;
int64_t x911 = 710332LL;
uint8_t x915 = 0U;
uint64_t x919 = 64407617661565930LLU;
uint32_t x936 = 187578U;
volatile int64_t x939 = INT64_MAX;
int32_t t185 = -10681062;
uint64_t x942 = UINT64_MAX;
volatile int32_t x945 = INT32_MIN;
volatile uint64_t x949 = 128316LLU;
int64_t x950 = INT64_MAX;
volatile uint64_t t188 = 13804554125942LLU;
static int64_t x958 = -1LL;
int32_t x959 = INT32_MIN;
volatile int8_t x961 = -1;
int32_t x964 = INT32_MIN;
static uint32_t t191 = 11U;
int16_t x970 = INT16_MIN;
volatile int16_t x973 = INT16_MIN;
int16_t x975 = 19;
uint16_t x981 = 1U;
static int64_t x994 = INT64_MAX;


void f0(void) {
    	uint8_t x1 = 45U;
	int64_t x2 = INT64_MIN;
	uint32_t x3 = 44791U;
	int16_t x4 = -1;
	static int64_t t0 = 4198826565597LL;

    t0 = ((x1/x2)<<(x3>x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	uint8_t x7 = 0U;
	int64_t x8 = INT64_MIN;
	uint32_t t1 = 362858U;

    t1 = ((x5/x6)<<(x7>x8));

    if (t1 != 11639476U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -1;
	uint32_t x11 = 186072822U;
	static int32_t t2 = -6912;

    t2 = ((x9/x10)<<(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = INT16_MIN;
	volatile int32_t x14 = 1715654;
	int32_t x15 = -1;
	int64_t x16 = 29245LL;
	volatile int32_t t3 = -55740446;

    t3 = ((x13/x14)<<(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 15U;
	uint32_t x18 = UINT32_MAX;
	static volatile int32_t x19 = -30167485;

    t4 = ((x17/x18)<<(x19>x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int32_t x22 = 6;
	uint64_t x24 = 167274055LLU;
	int32_t t5 = -60952;

    t5 = ((x21/x22)<<(x23>x24));

    if (t5 != 715827882) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 1U;
	int64_t x28 = INT64_MIN;
	uint32_t t6 = 32U;

    t6 = ((x25/x26)<<(x27>x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 0;
	int32_t x31 = -133;
	int64_t x32 = -1LL;
	volatile int32_t t7 = -12045;

    t7 = ((x29/x30)<<(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 16488356U;
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = 5633454;
	volatile uint32_t t8 = 3483166U;

    t8 = ((x37/x38)<<(x39>x40));

    if (t8 != 1006U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x41 = 113U;
	volatile int8_t x42 = INT8_MIN;
	uint32_t x43 = 2U;
	uint32_t t9 = 268295329U;

    t9 = ((x41/x42)<<(x43>x44));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x46 = INT8_MAX;
	static int16_t x47 = INT16_MIN;
	static int16_t x48 = INT16_MIN;

    t10 = ((x45/x46)<<(x47>x48));

    if (t10 != 4760336124137557LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 570U;
	uint16_t x52 = 7U;
	static uint32_t t11 = 31681789U;

    t11 = ((x49/x50)<<(x51>x52));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	static volatile int8_t x54 = INT8_MIN;
	static int64_t x55 = 176LL;
	static uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = 3979357;

    t12 = ((x53/x54)<<(x55>x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x62 = UINT64_MAX;
	uint64_t x64 = 6659606208LLU;

    t13 = ((x61/x62)<<(x63>x64));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 3U;
	int16_t x66 = 7026;
	int8_t x67 = INT8_MIN;
	int16_t x68 = -512;
	volatile int32_t t14 = 881;

    t14 = ((x65/x66)<<(x67>x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = 206;
	uint16_t x71 = UINT16_MAX;
	static uint64_t x72 = 5245002052342LLU;
	volatile int32_t t15 = -27;

    t15 = ((x69/x70)<<(x71>x72));

    if (t15 != 103) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x73 = INT16_MIN;
	int64_t x74 = 21916952LL;
	uint64_t x75 = 6526444935LLU;

    t16 = ((x73/x74)<<(x75>x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x77 = 1U;
	int8_t x78 = -3;
	volatile int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	int32_t t17 = 14832;

    t17 = ((x77/x78)<<(x79>x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x85 = -1;
	int64_t x86 = INT64_MAX;
	uint8_t x88 = 100U;
	int64_t t18 = -1964313009196347135LL;

    t18 = ((x85/x86)<<(x87>x88));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = INT64_MIN;
	static int16_t x91 = INT16_MAX;
	volatile int64_t t19 = -58287663660938661LL;

    t19 = ((x89/x90)<<(x91>x92));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = UINT8_MAX;
	static int32_t x94 = INT32_MAX;
	int16_t x95 = 15878;
	volatile uint32_t x96 = 7532U;

    t20 = ((x93/x94)<<(x95>x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	volatile int16_t x99 = 8583;
	static uint64_t x100 = UINT64_MAX;
	volatile uint64_t t21 = 229911014363800969LLU;

    t21 = ((x97/x98)<<(x99>x100));

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = -1;
	volatile uint8_t x102 = 4U;
	static int32_t t22 = -213911;

    t22 = ((x101/x102)<<(x103>x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x109 = 38204U;
	volatile int16_t x110 = -1;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 3329796U;
	static uint32_t t23 = 162U;

    t23 = ((x109/x110)<<(x111>x112));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = 43;
	int64_t x114 = INT64_MAX;
	int8_t x116 = INT8_MIN;

    t24 = ((x113/x114)<<(x115>x116));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = 1521LL;
	int64_t x119 = -1LL;
	int16_t x120 = -421;
	volatile int64_t t25 = -3464LL;

    t25 = ((x117/x118)<<(x119>x120));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x122 = 822;
	static uint64_t x123 = UINT64_MAX;
	uint64_t x124 = 178LLU;

    t26 = ((x121/x122)<<(x123>x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = INT16_MAX;
	volatile int64_t t27 = 2710796198664911194LL;

    t27 = ((x125/x126)<<(x127>x128));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x130 = 71U;
	static int32_t x131 = 23644;
	int32_t t28 = -50172546;

    t28 = ((x129/x130)<<(x131>x132));

    if (t28 != 1846) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x133 = -50;
	static volatile uint16_t x134 = 60U;
	int8_t x135 = 3;
	uint32_t x136 = UINT32_MAX;
	int32_t t29 = -86;

    t29 = ((x133/x134)<<(x135>x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = UINT32_MAX;
	static uint16_t x138 = 1U;
	int16_t x140 = 20;
	volatile uint32_t t30 = UINT32_MAX;

    t30 = ((x137/x138)<<(x139>x140));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	volatile int16_t x143 = -1;
	uint16_t x144 = 4U;
	int32_t t31 = -267647000;

    t31 = ((x141/x142)<<(x143>x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x145 = 0U;
	static uint8_t x147 = 0U;
	int8_t x148 = 6;
	volatile int64_t t32 = -1194913121109181762LL;

    t32 = ((x145/x146)<<(x147>x148));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x150 = INT16_MAX;
	static uint8_t x151 = 31U;
	static int8_t x152 = INT8_MIN;
	int32_t t33 = 50374320;

    t33 = ((x149/x150)<<(x151>x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x157 = 1U;
	static int16_t x158 = INT16_MIN;
	uint32_t x159 = 1112U;
	static uint16_t x160 = 511U;
	int32_t t34 = -95;

    t34 = ((x157/x158)<<(x159>x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x161 = 708836703442856LLU;
	uint16_t x162 = 4775U;
	static int64_t x163 = -1LL;

    t35 = ((x161/x162)<<(x163>x164));

    if (t35 != 148447477160LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x169 = UINT16_MAX;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t t36 = -1;

    t36 = ((x169/x170)<<(x171>x172));

    if (t36 != 257) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x173 = 12918U;
	volatile uint8_t x174 = 2U;
	uint16_t x175 = 10830U;
	uint16_t x176 = 2490U;

    t37 = ((x173/x174)<<(x175>x176));

    if (t37 != 12918U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x181 = UINT16_MAX;
	int16_t x182 = 3845;
	int32_t x184 = -1;
	static int32_t t38 = -89852;

    t38 = ((x181/x182)<<(x183>x184));

    if (t38 != 17) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = -2541;
	static int32_t x186 = INT32_MAX;
	int64_t x187 = INT64_MAX;
	uint16_t x188 = 336U;
	static int32_t t39 = -1657971;

    t39 = ((x185/x186)<<(x187>x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x189 = 2637749041578734807LLU;
	static int32_t x190 = INT32_MAX;
	int64_t x191 = -1LL;
	volatile int8_t x192 = -1;
	static uint64_t t40 = 5817450171045201098LLU;

    t40 = ((x189/x190)<<(x191>x192));

    if (t40 != 1228297614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x197 = -1;
	uint16_t x198 = UINT16_MAX;
	static uint8_t x199 = 127U;
	uint8_t x200 = UINT8_MAX;
	int32_t t41 = -274422687;

    t41 = ((x197/x198)<<(x199>x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x201 = 12969140394LLU;
	static int16_t x202 = INT16_MAX;
	int8_t x204 = -1;
	volatile uint64_t t42 = 522226377615829831LLU;

    t42 = ((x201/x202)<<(x203>x204));

    if (t42 != 791596LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x206 = INT32_MIN;
	static uint32_t x207 = 1318U;
	uint32_t x208 = UINT32_MAX;
	int32_t t43 = -453;

    t43 = ((x205/x206)<<(x207>x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = INT8_MIN;
	uint32_t x214 = 227U;
	static volatile int32_t x215 = -1;
	volatile int32_t x216 = INT32_MIN;
	volatile uint32_t t44 = 81U;

    t44 = ((x213/x214)<<(x215>x216));

    if (t44 != 37841120U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x217 = 12606105LLU;
	uint64_t x219 = 192034042787449274LLU;
	int8_t x220 = INT8_MIN;
	static volatile uint64_t t45 = 58303LLU;

    t45 = ((x217/x218)<<(x219>x220));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x222 = 1U;
	volatile uint64_t x223 = 4678LLU;
	int16_t x224 = INT16_MAX;
	volatile int32_t t46 = -111084154;

    t46 = ((x221/x222)<<(x223>x224));

    if (t46 != 7164) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x230 = -714;
	static uint64_t x231 = UINT64_MAX;
	int32_t x232 = -30981258;
	static volatile int32_t t47 = -41678;

    t47 = ((x229/x230)<<(x231>x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x241 = -1;
	int32_t x242 = -1;
	int8_t x243 = -1;
	static int16_t x244 = -78;
	static int32_t t48 = -392131442;

    t48 = ((x241/x242)<<(x243>x244));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x245 = INT8_MAX;
	volatile int16_t x246 = INT16_MIN;
	static int8_t x247 = INT8_MIN;
	int32_t x248 = -1;
	volatile int32_t t49 = 0;

    t49 = ((x245/x246)<<(x247>x248));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = INT32_MIN;
	volatile int64_t x251 = 108558720134LL;
	static int8_t x252 = -1;

    t50 = ((x249/x250)<<(x251>x252));

    if (t50 != 1073741824) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x254 = 305712LLU;
	int8_t x256 = INT8_MIN;
	uint64_t t51 = 236890317031051077LLU;

    t51 = ((x253/x254)<<(x255>x256));

    if (t51 != 120680536397406LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x257 = 2LLU;
	volatile int8_t x259 = INT8_MIN;
	int16_t x260 = -7640;
	volatile uint64_t t52 = 5LLU;

    t52 = ((x257/x258)<<(x259>x260));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x262 = UINT64_MAX;
	int8_t x264 = 1;
	static uint64_t t53 = 2849737055LLU;

    t53 = ((x261/x262)<<(x263>x264));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = 1U;
	int64_t x268 = INT64_MAX;
	uint64_t t54 = 127436LLU;

    t54 = ((x265/x266)<<(x267>x268));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	volatile uint32_t t55 = 648754U;

    t55 = ((x269/x270)<<(x271>x272));

    if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x273 = -4;
	uint32_t x274 = 2871U;

    t56 = ((x273/x274)<<(x275>x276));

    if (t56 != 1495983U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = -1;
	static uint64_t x279 = 313991LLU;
	volatile int32_t t57 = 0;

    t57 = ((x277/x278)<<(x279>x280));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x281 = 1332417821759LLU;
	int16_t x282 = INT16_MIN;
	static int8_t x283 = INT8_MAX;
	volatile uint64_t t58 = 131217719920LLU;

    t58 = ((x281/x282)<<(x283>x284));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x285 = UINT8_MAX;
	uint16_t x286 = UINT16_MAX;
	volatile int32_t t59 = -74925347;

    t59 = ((x285/x286)<<(x287>x288));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	volatile int16_t x295 = 24;
	int16_t x296 = INT16_MIN;

    t60 = ((x293/x294)<<(x295>x296));

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x298 = 10680213LLU;
	int16_t x300 = 3613;
	static volatile uint64_t t61 = 503LLU;

    t61 = ((x297/x298)<<(x299>x300));

    if (t61 != 3454377561862LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = -1LL;
	static uint64_t x303 = 6486LLU;
	int64_t x304 = INT64_MAX;
	int64_t t62 = -128872236LL;

    t62 = ((x301/x302)<<(x303>x304));

    if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x306 = -2772;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t63 = 605;

    t63 = ((x305/x306)<<(x307>x308));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x309 = 1211665LLU;
	uint64_t x311 = 3617538805772637432LLU;
	uint8_t x312 = 114U;
	uint64_t t64 = 542902066LLU;

    t64 = ((x309/x310)<<(x311>x312));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x313 = 20;
	static volatile uint32_t x314 = UINT32_MAX;
	uint32_t x315 = 110U;
	uint32_t t65 = 2551U;

    t65 = ((x313/x314)<<(x315>x316));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x321 = -1LL;
	int64_t x323 = INT64_MIN;
	volatile int64_t t66 = 4158457LL;

    t66 = ((x321/x322)<<(x323>x324));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x333 = 19512;
	static uint8_t x334 = 25U;
	int16_t x335 = INT16_MAX;
	static volatile int8_t x336 = 8;

    t67 = ((x333/x334)<<(x335>x336));

    if (t67 != 1560) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	int64_t x339 = -1LL;
	int16_t x340 = -1;
	volatile int32_t t68 = -34639952;

    t68 = ((x337/x338)<<(x339>x340));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x345 = 1368U;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	static int16_t x348 = -1;
	int64_t t69 = -3LL;

    t69 = ((x345/x346)<<(x347>x348));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	volatile int64_t t70 = 957787388LL;

    t70 = ((x357/x358)<<(x359>x360));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x362 = 21;
	int32_t x363 = 565850;
	uint8_t x364 = UINT8_MAX;
	volatile uint32_t t71 = 2158124U;

    t71 = ((x361/x362)<<(x363>x364));

    if (t71 != 409044504U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MIN;
	static uint32_t x367 = 973576647U;
	volatile int16_t x368 = INT16_MIN;
	volatile int64_t t72 = 9192695456LL;

    t72 = ((x365/x366)<<(x367>x368));

    if (t72 != 4294967296LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x369 = 2U;
	uint8_t x370 = UINT8_MAX;
	static volatile int32_t t73 = 127132308;

    t73 = ((x369/x370)<<(x371>x372));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = INT8_MIN;
	static int64_t x374 = 93753759070416LL;
	volatile int64_t t74 = -443LL;

    t74 = ((x373/x374)<<(x375>x376));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x377 = 44LLU;
	uint64_t x378 = 7990LLU;
	int8_t x379 = 1;
	uint64_t t75 = 2115434481LLU;

    t75 = ((x377/x378)<<(x379>x380));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x385 = UINT8_MAX;
	volatile uint16_t x386 = 38U;
	static uint8_t x388 = 6U;
	volatile int32_t t76 = -100693678;

    t76 = ((x385/x386)<<(x387>x388));

    if (t76 != 12) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x393 = -1;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = -1;
	static volatile int32_t t77 = -974;

    t77 = ((x393/x394)<<(x395>x396));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -3217;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t78 = -1LL;

    t78 = ((x405/x406)<<(x407>x408));

    if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint32_t x409 = UINT32_MAX;
	volatile uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MAX;
	uint16_t x412 = 1009U;
	volatile uint32_t t79 = 47501639U;

    t79 = ((x409/x410)<<(x411>x412));

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x413 = 0U;
	static int16_t x414 = INT16_MIN;
	volatile int32_t x415 = 1;
	static int16_t x416 = -490;
	int32_t t80 = 519032;

    t80 = ((x413/x414)<<(x415>x416));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x421 = INT8_MIN;
	volatile int8_t x423 = -1;
	int32_t x424 = INT32_MAX;
	uint64_t t81 = 1204822699833473147LLU;

    t81 = ((x421/x422)<<(x423>x424));

    if (t81 != 4785886LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x425 = INT32_MIN;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MAX;
	uint16_t x428 = 15039U;
	int32_t t82 = 7632832;

    t82 = ((x425/x426)<<(x427>x428));

    if (t82 != 131072) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x429 = 34U;
	int64_t x431 = INT64_MIN;
	uint64_t x432 = 83LLU;
	volatile int32_t t83 = 2744062;

    t83 = ((x429/x430)<<(x431>x432));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x433 = 0U;
	static int8_t x435 = -1;
	uint64_t x436 = 1859405480LLU;
	volatile int32_t t84 = -35;

    t84 = ((x433/x434)<<(x435>x436));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x437 = INT64_MIN;
	volatile int32_t x438 = INT32_MIN;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = -1;

    t85 = ((x437/x438)<<(x439>x440));

    if (t85 != 8589934592LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x441 = UINT64_MAX;
	volatile int16_t x442 = INT16_MIN;
	int8_t x443 = -14;
	int16_t x444 = INT16_MAX;
	uint64_t t86 = 55214LLU;

    t86 = ((x441/x442)<<(x443>x444));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x449 = UINT32_MAX;
	static int16_t x450 = INT16_MIN;
	static volatile int32_t x451 = INT32_MIN;
	int64_t x452 = INT64_MIN;
	volatile uint32_t t87 = 663U;

    t87 = ((x449/x450)<<(x451>x452));

    if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x454 = INT64_MIN;
	uint32_t x455 = 16U;
	volatile int32_t x456 = INT32_MIN;
	static int64_t t88 = 154966294LL;

    t88 = ((x453/x454)<<(x455>x456));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x461 = UINT32_MAX;
	volatile int16_t x462 = INT16_MAX;
	volatile int16_t x463 = 2027;
	static uint64_t x464 = 958904987569606LLU;

    t89 = ((x461/x462)<<(x463>x464));

    if (t89 != 131076U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x465 = INT32_MIN;
	static int32_t x466 = -229489;
	volatile uint32_t x467 = 33485085U;
	int32_t t90 = 72;

    t90 = ((x465/x466)<<(x467>x468));

    if (t90 != 18714) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x474 = INT32_MAX;
	uint32_t x476 = UINT32_MAX;
	int32_t t91 = -811;

    t91 = ((x473/x474)<<(x475>x476));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MAX;
	volatile int32_t x479 = -14659282;
	static int64_t x480 = INT64_MIN;
	volatile int32_t t92 = -3773854;

    t92 = ((x477/x478)<<(x479>x480));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	static volatile uint8_t x482 = UINT8_MAX;
	volatile int32_t t93 = 62422;

    t93 = ((x481/x482)<<(x483>x484));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x485 = INT8_MIN;
	uint32_t x487 = 24271U;
	int32_t x488 = -267801159;
	static volatile int32_t t94 = 452175;

    t94 = ((x485/x486)<<(x487>x488));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x495 = 7U;
	volatile int32_t t95 = -1731;

    t95 = ((x493/x494)<<(x495>x496));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x497 = INT64_MIN;
	volatile int64_t x498 = -1072715941552682413LL;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	int64_t t96 = -486409237096754235LL;

    t96 = ((x497/x498)<<(x499>x500));

    if (t96 != 8LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x501 = 87U;
	static int16_t x503 = -12;
	volatile int16_t x504 = INT16_MAX;
	volatile uint64_t t97 = 35764LLU;

    t97 = ((x501/x502)<<(x503>x504));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x505 = INT8_MIN;
	uint16_t x506 = UINT16_MAX;
	volatile uint32_t x507 = 82680U;
	int32_t t98 = 4248987;

    t98 = ((x505/x506)<<(x507>x508));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	volatile int32_t x511 = INT32_MIN;
	int8_t x512 = INT8_MAX;
	static volatile int32_t t99 = 117110;

    t99 = ((x509/x510)<<(x511>x512));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x514 = -6;
	int32_t x515 = -28408962;
	uint8_t x516 = 0U;
	int32_t t100 = 98;

    t100 = ((x513/x514)<<(x515>x516));

    if (t100 != 21) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x525 = 733005049LLU;
	volatile int32_t x526 = -1;
	static int64_t x527 = INT64_MAX;
	uint32_t x528 = 345251423U;
	uint64_t t101 = 488208813555037461LLU;

    t101 = ((x525/x526)<<(x527>x528));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x529 = -1;
	int8_t x530 = -1;
	int16_t x531 = -4524;
	int32_t t102 = -43;

    t102 = ((x529/x530)<<(x531>x532));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int16_t x534 = INT16_MAX;
	static int32_t x536 = -15094655;
	uint64_t t103 = 83207093LLU;

    t103 = ((x533/x534)<<(x535>x536));

    if (t103 != 1125934267629600LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x537 = 0;
	volatile int8_t x538 = INT8_MIN;
	uint8_t x539 = 71U;
	static int8_t x540 = -1;
	static volatile int32_t t104 = -209234976;

    t104 = ((x537/x538)<<(x539>x540));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x542 = INT32_MIN;
	int16_t x543 = INT16_MIN;
	int32_t x544 = INT32_MIN;
	static int32_t t105 = -1;

    t105 = ((x541/x542)<<(x543>x544));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x545 = UINT32_MAX;
	static uint8_t x546 = 5U;
	static int8_t x547 = -5;
	uint32_t x548 = 205335862U;
	uint32_t t106 = 0U;

    t106 = ((x545/x546)<<(x547>x548));

    if (t106 != 1717986918U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x549 = 62U;
	uint64_t x550 = 345LLU;
	volatile int8_t x552 = INT8_MIN;
	volatile uint64_t t107 = 3599760501836281LLU;

    t107 = ((x549/x550)<<(x551>x552));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x553 = -36;
	int64_t x554 = 1486175241254048LL;
	int32_t x555 = INT32_MIN;
	int16_t x556 = -1;
	int64_t t108 = -68817245473089543LL;

    t108 = ((x553/x554)<<(x555>x556));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x557 = 2U;
	int8_t x559 = INT8_MAX;
	int8_t x560 = INT8_MIN;
	uint32_t t109 = 7U;

    t109 = ((x557/x558)<<(x559>x560));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x563 = INT64_MIN;

    t110 = ((x561/x562)<<(x563>x564));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x570 = -7912;
	int16_t x572 = -1;
	volatile int32_t t111 = -76353;

    t111 = ((x569/x570)<<(x571>x572));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x573 = 839;
	static uint16_t x574 = 789U;
	volatile int8_t x575 = INT8_MIN;
	static uint16_t x576 = 140U;
	volatile int32_t t112 = -3656969;

    t112 = ((x573/x574)<<(x575>x576));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x577 = INT16_MIN;
	volatile int8_t x578 = INT8_MIN;
	uint8_t x579 = 8U;
	int32_t t113 = -1913243;

    t113 = ((x577/x578)<<(x579>x580));

    if (t113 != 512) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x582 = 400;
	int16_t x584 = INT16_MAX;

    t114 = ((x581/x582)<<(x583>x584));

    if (t114 != 430037) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x589 = UINT32_MAX;
	volatile int16_t x590 = 1747;
	int64_t x591 = INT64_MAX;
	static uint32_t x592 = 83622549U;
	volatile uint32_t t115 = 244U;

    t115 = ((x589/x590)<<(x591>x592));

    if (t115 != 4916962U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x593 = INT32_MAX;
	static volatile int8_t x594 = INT8_MAX;
	uint32_t x595 = 2666888U;
	int32_t x596 = 60460;
	volatile int32_t t116 = -3;

    t116 = ((x593/x594)<<(x595>x596));

    if (t116 != 33818640) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x597 = INT16_MIN;
	uint16_t x598 = UINT16_MAX;
	volatile int16_t x599 = INT16_MAX;
	uint16_t x600 = 4U;

    t117 = ((x597/x598)<<(x599>x600));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x601 = 473U;
	int16_t x602 = INT16_MIN;
	static int32_t x604 = 2975;
	volatile int32_t t118 = 8221;

    t118 = ((x601/x602)<<(x603>x604));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x605 = INT8_MIN;
	uint32_t x606 = UINT32_MAX;
	static uint32_t t119 = 2138220643U;

    t119 = ((x605/x606)<<(x607>x608));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x617 = -47;
	int16_t x618 = -2;
	uint16_t x620 = 722U;
	static int32_t t120 = -3;

    t120 = ((x617/x618)<<(x619>x620));

    if (t120 != 23) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x621 = -1;
	int64_t x622 = INT64_MAX;
	int8_t x623 = 2;
	volatile uint16_t x624 = 1648U;
	int64_t t121 = 500868910367801596LL;

    t121 = ((x621/x622)<<(x623>x624));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x630 = INT32_MIN;
	static uint8_t x631 = 26U;
	uint32_t t122 = 102U;

    t122 = ((x629/x630)<<(x631>x632));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x633 = 6249283LLU;
	int8_t x634 = INT8_MIN;
	int16_t x635 = -196;
	volatile uint64_t t123 = 17905123087692755LLU;

    t123 = ((x633/x634)<<(x635>x636));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x638 = INT16_MAX;
	uint32_t x640 = 0U;
	int32_t t124 = -14818;

    t124 = ((x637/x638)<<(x639>x640));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x642 = INT16_MIN;
	int16_t x643 = 975;
	static int32_t x644 = -1;

    t125 = ((x641/x642)<<(x643>x644));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x645 = INT8_MAX;
	static uint64_t x646 = UINT64_MAX;
	static int64_t x648 = -1LL;

    t126 = ((x645/x646)<<(x647>x648));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x653 = 685U;
	int16_t x654 = -1;
	static int16_t x655 = -1;
	volatile uint32_t t127 = 13148U;

    t127 = ((x653/x654)<<(x655>x656));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x657 = INT16_MIN;
	int64_t x659 = 5927683206LL;
	int16_t x660 = -1;
	static volatile uint64_t t128 = 423006781091LLU;

    t128 = ((x657/x658)<<(x659>x660));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x661 = -1;
	static int32_t x662 = -313895;
	static uint16_t x663 = 7U;
	static int8_t x664 = -44;
	volatile int32_t t129 = 10072474;

    t129 = ((x661/x662)<<(x663>x664));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x666 = -18;
	static int32_t x668 = INT32_MIN;
	volatile int32_t t130 = 12397;

    t130 = ((x665/x666)<<(x667>x668));

    if (t130 != 14) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x669 = 17;
	volatile uint32_t x670 = 1955363478U;
	int64_t x671 = INT64_MIN;
	static volatile uint32_t x672 = 3947296U;

    t131 = ((x669/x670)<<(x671>x672));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x673 = -1;
	int16_t x674 = INT16_MAX;
	volatile int16_t x676 = INT16_MAX;
	int32_t t132 = 243;

    t132 = ((x673/x674)<<(x675>x676));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x677 = INT32_MAX;
	int16_t x678 = INT16_MAX;
	uint64_t x679 = UINT64_MAX;
	volatile int32_t t133 = 107507;

    t133 = ((x677/x678)<<(x679>x680));

    if (t133 != 131076) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x682 = INT64_MIN;
	static int16_t x683 = INT16_MIN;
	int64_t x684 = -1LL;

    t134 = ((x681/x682)<<(x683>x684));

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x685 = INT64_MAX;
	int16_t x686 = 2980;
	int64_t x687 = INT64_MIN;
	int64_t t135 = -4805266454LL;

    t135 = ((x685/x686)<<(x687>x688));

    if (t135 != 3095091287535159LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x689 = 1U;
	uint16_t x690 = 21370U;
	int32_t x691 = INT32_MIN;
	volatile uint16_t x692 = UINT16_MAX;
	volatile int32_t t136 = 0;

    t136 = ((x689/x690)<<(x691>x692));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x693 = UINT64_MAX;
	int32_t x695 = 16073629;
	int32_t x696 = 265171;
	uint64_t t137 = 135478LLU;

    t137 = ((x693/x694)<<(x695>x696));

    if (t137 != 2LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x701 = 7U;
	int8_t x702 = INT8_MIN;
	static uint16_t x703 = 5U;
	int32_t x704 = INT32_MIN;
	volatile uint32_t t138 = 142U;

    t138 = ((x701/x702)<<(x703>x704));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x709 = 2349142U;
	int8_t x710 = 3;
	volatile uint8_t x711 = 3U;
	int64_t x712 = 602630748540662LL;
	uint32_t t139 = 96245290U;

    t139 = ((x709/x710)<<(x711>x712));

    if (t139 != 783047U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x713 = 10430;
	int8_t x715 = INT8_MIN;
	static int16_t x716 = -1;
	volatile int32_t t140 = 826;

    t140 = ((x713/x714)<<(x715>x716));

    if (t140 != 82) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x722 = INT64_MAX;
	volatile int64_t x723 = INT64_MIN;
	volatile uint8_t x724 = UINT8_MAX;
	int64_t t141 = -241111470952965LL;

    t141 = ((x721/x722)<<(x723>x724));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x725 = 35U;
	int16_t x726 = INT16_MIN;
	int32_t x727 = -1700248;
	int64_t x728 = INT64_MIN;
	volatile int32_t t142 = -88;

    t142 = ((x725/x726)<<(x727>x728));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x729 = INT64_MAX;
	uint64_t x730 = 79580605934857182LLU;
	int64_t x731 = -1LL;
	volatile uint64_t t143 = 2210855805512726LLU;

    t143 = ((x729/x730)<<(x731>x732));

    if (t143 != 115LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x736 = 2LLU;

    t144 = ((x733/x734)<<(x735>x736));

    if (t144 != 2426) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x738 = INT32_MIN;
	int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MIN;

    t145 = ((x737/x738)<<(x739>x740));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x741 = 24U;
	int32_t x743 = 11969;
	volatile int32_t t146 = 19406050;

    t146 = ((x741/x742)<<(x743>x744));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x752 = 464LL;
	static uint64_t t147 = 989161764239LLU;

    t147 = ((x749/x750)<<(x751>x752));

    if (t147 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x753 = -1;
	int16_t x754 = -109;
	int64_t x755 = -11LL;
	static int8_t x756 = INT8_MAX;
	static int32_t t148 = -48184117;

    t148 = ((x753/x754)<<(x755>x756));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x757 = 73263LLU;
	static int64_t x759 = INT64_MAX;
	uint64_t t149 = 167641LLU;

    t149 = ((x757/x758)<<(x759>x760));

    if (t149 != 1558LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x761 = 6505U;
	int64_t x762 = -10036LL;
	int64_t x763 = INT64_MIN;
	static int64_t t150 = 1940603944012065304LL;

    t150 = ((x761/x762)<<(x763>x764));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x765 = UINT32_MAX;
	int8_t x766 = INT8_MIN;
	uint32_t t151 = 10379463U;

    t151 = ((x765/x766)<<(x767>x768));

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x769 = 52U;
	int64_t x770 = INT64_MIN;
	uint8_t x772 = UINT8_MAX;
	static volatile int64_t t152 = -6326385LL;

    t152 = ((x769/x770)<<(x771>x772));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile uint8_t x775 = 0U;
	int8_t x776 = INT8_MAX;
	uint32_t t153 = 2U;

    t153 = ((x773/x774)<<(x775>x776));

    if (t153 != 33818640U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = 3LL;
	static int16_t x779 = INT16_MIN;
	int64_t t154 = -5614305385116747LL;

    t154 = ((x777/x778)<<(x779>x780));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x782 = INT64_MIN;
	int16_t x784 = INT16_MIN;

    t155 = ((x781/x782)<<(x783>x784));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x789 = 252167381LLU;
	volatile int16_t x790 = 270;
	uint16_t x791 = 8992U;
	int64_t x792 = INT64_MIN;
	static volatile uint64_t t156 = 250758264958LLU;

    t156 = ((x789/x790)<<(x791>x792));

    if (t156 != 1867906LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x793 = INT16_MIN;
	volatile uint64_t x794 = UINT64_MAX;
	static volatile uint64_t x795 = UINT64_MAX;
	int16_t x796 = -207;
	uint64_t t157 = 240424336LLU;

    t157 = ((x793/x794)<<(x795>x796));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x797 = -6;
	int32_t x798 = -1;
	uint16_t x800 = 10488U;

    t158 = ((x797/x798)<<(x799>x800));

    if (t158 != 6) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x801 = 16U;
	int8_t x802 = 1;
	volatile uint64_t x803 = 22278399548LLU;
	static volatile int32_t t159 = -7340;

    t159 = ((x801/x802)<<(x803>x804));

    if (t159 != 16) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x806 = INT8_MAX;
	int8_t x807 = INT8_MIN;
	volatile int16_t x808 = -1;
	int32_t t160 = -32;

    t160 = ((x805/x806)<<(x807>x808));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x813 = 11263505643310LLU;
	int32_t x814 = INT32_MIN;
	static uint32_t x815 = UINT32_MAX;
	uint64_t t161 = 396583405022181634LLU;

    t161 = ((x813/x814)<<(x815>x816));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x817 = INT64_MAX;
	uint16_t x818 = 16U;
	int16_t x819 = INT16_MIN;
	int64_t x820 = -1LL;
	volatile int64_t t162 = 317290572LL;

    t162 = ((x817/x818)<<(x819>x820));

    if (t162 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x822 = INT16_MAX;
	int8_t x823 = 61;
	static int32_t x824 = INT32_MAX;
	static int32_t t163 = -252;

    t163 = ((x821/x822)<<(x823>x824));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x830 = 4460533996498LLU;
	int32_t x831 = INT32_MAX;
	int32_t x832 = -1;
	volatile uint64_t t164 = 266543024046388492LLU;

    t164 = ((x829/x830)<<(x831>x832));

    if (t164 != 4135546LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x833 = 61999037761008LLU;
	uint32_t x834 = 542857U;
	int16_t x835 = -101;
	static int64_t x836 = -1LL;
	volatile uint64_t t165 = 4974713886056253LLU;

    t165 = ((x833/x834)<<(x835>x836));

    if (t165 != 114208783LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x841 = INT32_MIN;
	volatile int64_t x843 = 1872672799489627LL;
	uint64_t x844 = UINT64_MAX;
	volatile uint64_t t166 = 33551331905LLU;

    t166 = ((x841/x842)<<(x843>x844));

    if (t166 != 250254145334LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x845 = 0U;
	int64_t x846 = INT64_MIN;
	int16_t x847 = -1;
	int8_t x848 = 62;
	static int64_t t167 = -5137463LL;

    t167 = ((x845/x846)<<(x847>x848));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x849 = 36;
	static int64_t x850 = INT64_MIN;
	int16_t x851 = 1101;
	int32_t x852 = INT32_MIN;
	int64_t t168 = -63718590396LL;

    t168 = ((x849/x850)<<(x851>x852));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x853 = INT8_MAX;
	int64_t x855 = INT64_MIN;
	uint16_t x856 = 1U;
	volatile int32_t t169 = 30368727;

    t169 = ((x853/x854)<<(x855>x856));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x857 = 446LLU;
	volatile uint64_t x859 = 177698057210528143LLU;
	int16_t x860 = -53;
	uint64_t t170 = 4516LLU;

    t170 = ((x857/x858)<<(x859>x860));

    if (t170 != 446LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x861 = 0LLU;
	uint64_t x862 = UINT64_MAX;
	int32_t x863 = INT32_MIN;
	int8_t x864 = INT8_MAX;
	uint64_t t171 = 60LLU;

    t171 = ((x861/x862)<<(x863>x864));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x865 = INT16_MIN;
	static volatile int8_t x866 = -22;
	static uint8_t x867 = 0U;
	int16_t x868 = -24;
	volatile int32_t t172 = 16021960;

    t172 = ((x865/x866)<<(x867>x868));

    if (t172 != 2978) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x874 = INT8_MIN;
	int8_t x875 = -1;
	static volatile int8_t x876 = INT8_MIN;
	int32_t t173 = -59754972;

    t173 = ((x873/x874)<<(x875>x876));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x877 = UINT32_MAX;
	volatile uint16_t x878 = UINT16_MAX;
	volatile int8_t x879 = INT8_MAX;
	uint64_t x880 = 11720883833821LLU;

    t174 = ((x877/x878)<<(x879>x880));

    if (t174 != 65537U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x890 = 1020416U;
	int32_t x891 = INT32_MAX;
	int32_t x892 = 105326;
	static uint32_t t175 = 13441U;

    t175 = ((x889/x890)<<(x891>x892));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x893 = 11261U;
	int64_t x894 = INT64_MIN;
	volatile int64_t t176 = -91109117761759199LL;

    t176 = ((x893/x894)<<(x895>x896));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x901 = INT64_MIN;
	int16_t x902 = INT16_MIN;
	uint64_t x904 = 2404962516528LLU;
	volatile int64_t t177 = 3521268986225592344LL;

    t177 = ((x901/x902)<<(x903>x904));

    if (t177 != 281474976710656LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x906 = INT8_MIN;
	volatile int16_t x907 = INT16_MIN;
	volatile int8_t x908 = INT8_MAX;

    t178 = ((x905/x906)<<(x907>x908));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x910 = UINT8_MAX;
	int8_t x912 = 31;
	static volatile int32_t t179 = 9599;

    t179 = ((x909/x910)<<(x911>x912));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x913 = INT8_MIN;
	static int64_t x914 = -44660383703334373LL;
	int8_t x916 = INT8_MAX;
	volatile int64_t t180 = 283LL;

    t180 = ((x913/x914)<<(x915>x916));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x917 = -1;
	uint8_t x918 = UINT8_MAX;
	uint16_t x920 = UINT16_MAX;
	volatile int32_t t181 = -186;

    t181 = ((x917/x918)<<(x919>x920));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x921 = 48;
	uint32_t x922 = UINT32_MAX;
	volatile uint16_t x923 = UINT16_MAX;
	int8_t x924 = -1;
	static volatile uint32_t t182 = 13U;

    t182 = ((x921/x922)<<(x923>x924));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x929 = -7201430675149321LL;
	static uint64_t x930 = 2147585804940644519LLU;
	int8_t x931 = INT8_MIN;
	int8_t x932 = -1;
	volatile uint64_t t183 = 65LLU;

    t183 = ((x929/x930)<<(x931>x932));

    if (t183 != 8LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x933 = INT8_MAX;
	static uint32_t x934 = UINT32_MAX;
	int16_t x935 = INT16_MIN;
	volatile uint32_t t184 = 0U;

    t184 = ((x933/x934)<<(x935>x936));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x937 = INT8_MAX;
	int8_t x938 = 1;
	uint16_t x940 = 3775U;

    t185 = ((x937/x938)<<(x939>x940));

    if (t185 != 254) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x941 = INT64_MIN;
	int32_t x943 = INT32_MIN;
	static volatile uint32_t x944 = UINT32_MAX;
	static volatile uint64_t t186 = 193057LLU;

    t186 = ((x941/x942)<<(x943>x944));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x946 = -10983;
	volatile int64_t x947 = INT64_MAX;
	uint32_t x948 = UINT32_MAX;
	volatile int32_t t187 = 224;

    t187 = ((x945/x946)<<(x947>x948));

    if (t187 != 391054) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x951 = INT64_MIN;
	uint16_t x952 = 2U;

    t188 = ((x949/x950)<<(x951>x952));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x953 = 10;
	uint8_t x954 = UINT8_MAX;
	static int32_t x955 = -1;
	uint64_t x956 = 771871991208LLU;
	int32_t t189 = 3;

    t189 = ((x953/x954)<<(x955>x956));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x957 = 1037123181LLU;
	uint8_t x960 = 24U;
	volatile uint64_t t190 = 148138232333187LLU;

    t190 = ((x957/x958)<<(x959>x960));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x962 = 10591240U;
	volatile uint16_t x963 = 21U;

    t191 = ((x961/x962)<<(x963>x964));

    if (t191 != 810U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x969 = 46U;
	uint16_t x971 = 12U;
	uint16_t x972 = 500U;
	static int32_t t192 = 3212377;

    t192 = ((x969/x970)<<(x971>x972));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x974 = -18725253007LL;
	uint32_t x976 = 82300U;
	int64_t t193 = 6606846301699LL;

    t193 = ((x973/x974)<<(x975>x976));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x977 = 0U;
	int8_t x978 = -1;
	uint64_t x979 = UINT64_MAX;
	static int8_t x980 = 1;
	volatile int32_t t194 = 2780;

    t194 = ((x977/x978)<<(x979>x980));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x982 = -2;
	uint32_t x983 = 1U;
	uint16_t x984 = 3292U;
	volatile int32_t t195 = -210657;

    t195 = ((x981/x982)<<(x983>x984));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x985 = 2921;
	int64_t x986 = INT64_MIN;
	volatile uint8_t x987 = 3U;
	uint32_t x988 = 562216U;
	int64_t t196 = -117623074LL;

    t196 = ((x985/x986)<<(x987>x988));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x993 = -1;
	uint8_t x995 = 57U;
	int32_t x996 = INT32_MIN;
	volatile int64_t t197 = -107617671179LL;

    t197 = ((x993/x994)<<(x995>x996));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x997 = 224861716819LLU;
	static int8_t x998 = -6;
	int8_t x999 = INT8_MIN;
	volatile int16_t x1000 = 6;
	uint64_t t198 = 12612275600990156LLU;

    t198 = ((x997/x998)<<(x999>x1000));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1001 = UINT16_MAX;
	uint8_t x1002 = 3U;
	int8_t x1003 = INT8_MAX;
	uint16_t x1004 = UINT16_MAX;
	int32_t t199 = -73859;

    t199 = ((x1001/x1002)<<(x1003>x1004));

    if (t199 != 21845) { NG(); } else { ; }
	
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

