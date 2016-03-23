
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

static int8_t x1 = INT8_MIN;
int16_t x8 = INT16_MAX;
static volatile uint64_t t1 = 94551859LLU;
volatile int32_t x9 = INT32_MAX;
static volatile int16_t x17 = INT16_MAX;
volatile int8_t x18 = -11;
static int8_t x20 = INT8_MIN;
static int8_t x26 = -1;
int32_t t6 = -10875343;
uint8_t x37 = 2U;
static volatile int16_t x40 = INT16_MIN;
static uint8_t x42 = UINT8_MAX;
uint64_t x50 = 5606062465LLU;
int64_t x60 = INT64_MAX;
uint64_t x62 = 46861309681784035LLU;
static int64_t x63 = 2331125230LL;
volatile int8_t x67 = INT8_MIN;
uint8_t x74 = 123U;
volatile int16_t x76 = -1;
uint8_t x85 = UINT8_MAX;
int32_t t19 = 1;
int8_t x94 = INT8_MAX;
static int8_t x96 = INT8_MIN;
static int8_t x97 = -1;
int32_t x106 = -124973704;
int16_t x116 = -1;
volatile uint16_t x117 = 54U;
int32_t x119 = -456275051;
int32_t t27 = 2;
static int8_t x129 = 1;
uint16_t x140 = 1985U;
volatile int64_t t33 = 8LL;
static int16_t x157 = INT16_MIN;
uint64_t x164 = 11LLU;
int8_t x166 = -25;
volatile int32_t x167 = INT32_MIN;
volatile int64_t t39 = 2075320056912540864LL;
int32_t x173 = INT32_MIN;
volatile int8_t x178 = INT8_MIN;
static volatile int8_t x181 = -1;
static uint64_t x183 = 31843566939215717LLU;
static volatile int8_t x184 = -33;
volatile uint64_t t42 = 2269746362729839717LLU;
uint8_t x185 = UINT8_MAX;
uint64_t x192 = 12846829LLU;
uint32_t x195 = 272U;
uint8_t x198 = 2U;
int64_t x200 = INT64_MIN;
volatile int32_t t46 = 4;
volatile int32_t t49 = INT32_MIN;
int8_t x229 = INT8_MAX;
static volatile int8_t x232 = INT8_MIN;
static uint32_t x246 = 1184U;
static uint32_t x248 = 123917U;
volatile uint64_t x255 = 626762166LLU;
volatile int32_t x257 = INT32_MIN;
int32_t x262 = -271553809;
static int32_t t61 = 579290065;
int32_t x266 = INT32_MIN;
uint64_t t62 = 119532LLU;
static volatile int32_t t63 = -544052;
uint16_t x275 = 17U;
static volatile int32_t t64 = -874;
int16_t x281 = INT16_MIN;
static volatile int32_t t66 = 2064;
int32_t x292 = INT32_MIN;
volatile int64_t t68 = -21476LL;
volatile int64_t x296 = -22596215842LL;
static int8_t x299 = INT8_MAX;
uint16_t x304 = UINT16_MAX;
static uint16_t x306 = UINT16_MAX;
int32_t x309 = INT32_MAX;
int64_t x310 = INT64_MIN;
volatile int8_t x319 = 0;
uint16_t x329 = UINT16_MAX;
int16_t x344 = INT16_MIN;
volatile int64_t t80 = -27274174LL;
int16_t x346 = -8818;
int64_t x351 = -1LL;
uint32_t x359 = UINT32_MAX;
static int32_t x365 = -1;
static int64_t x370 = 127576661742670LL;
int16_t x374 = INT16_MIN;
uint16_t x378 = 3U;
uint16_t x380 = 1U;
int8_t x382 = -6;
int16_t x383 = INT16_MIN;
uint8_t x384 = 44U;
static uint8_t x385 = 18U;
uint32_t x386 = UINT32_MAX;
int16_t x388 = 48;
static int64_t x390 = INT64_MIN;
volatile int32_t t93 = 20606;
uint16_t x398 = UINT16_MAX;
int32_t t94 = 1428;
int32_t x407 = INT32_MIN;
static int8_t x419 = 0;
int16_t x425 = INT16_MAX;
uint16_t x426 = 2U;
static int8_t x429 = INT8_MAX;
int64_t x439 = -1LL;
uint64_t t104 = 36060297658289068LLU;
int16_t x444 = -1;
volatile int32_t t106 = 3;
uint32_t x450 = 229041725U;
volatile int32_t x454 = -195851680;
static volatile int32_t x455 = -1;
volatile uint16_t x461 = 7972U;
static int16_t x464 = 17;
uint16_t x474 = 1160U;
volatile int32_t t113 = -3497;
uint8_t x482 = 4U;
int16_t x498 = INT16_MIN;
volatile uint32_t x500 = UINT32_MAX;
volatile int32_t t118 = -479;
int16_t x501 = INT16_MIN;
int16_t x507 = INT16_MIN;
int8_t x509 = INT8_MIN;
int64_t x512 = INT64_MAX;
uint16_t x515 = UINT16_MAX;
volatile int64_t t122 = -129517584137817130LL;
int32_t t124 = -26;
volatile int64_t x528 = 1LL;
int32_t t126 = -13;
static int32_t x534 = -156159257;
static int16_t x540 = -1;
int64_t x552 = 924461228839456LL;
static uint16_t x557 = 7213U;
uint64_t x566 = UINT64_MAX;
volatile int64_t t136 = -4296275576451LL;
volatile int16_t x573 = 1;
int8_t x578 = INT8_MIN;
int32_t t138 = -3;
int8_t x589 = INT8_MIN;
volatile int16_t x591 = -1;
static volatile int64_t t142 = -49679375369234793LL;
uint32_t x603 = UINT32_MAX;
int64_t x604 = -4725405414LL;
int16_t x606 = INT16_MIN;
uint64_t x607 = 64534593734093904LLU;
static volatile int32_t t148 = -6711931;
int64_t x624 = -1LL;
int64_t t149 = 1482952473892716577LL;
static int8_t x625 = INT8_MAX;
int8_t x626 = INT8_MIN;
int8_t x630 = INT8_MIN;
volatile uint16_t x646 = 186U;
int8_t x647 = -2;
volatile int16_t x654 = 5;
volatile int16_t x660 = INT16_MIN;
static uint16_t x664 = 1708U;
int8_t x670 = INT8_MIN;
int64_t t162 = -262334765558109LL;
volatile int16_t x682 = INT16_MAX;
uint32_t x695 = UINT32_MAX;
uint8_t x696 = UINT8_MAX;
static uint32_t t167 = 57118724U;
uint64_t x713 = UINT64_MAX;
volatile int64_t x719 = -1LL;
int32_t x729 = INT32_MIN;
uint16_t x736 = 987U;
static volatile uint32_t x741 = 84066U;
static uint32_t x744 = UINT32_MAX;
volatile uint32_t t178 = 437U;
uint32_t x745 = 270133408U;
volatile int64_t t179 = -429136091462684523LL;
int8_t x751 = -1;
static int16_t x755 = INT16_MIN;
int32_t x756 = 65259387;
static int16_t x759 = INT16_MIN;
static int64_t x760 = -20LL;
volatile int16_t x762 = INT16_MAX;
uint64_t x765 = 39LLU;
static uint32_t x766 = 17837495U;
uint32_t x769 = 124572U;
int64_t x770 = INT64_MIN;
static int64_t x771 = INT64_MAX;
uint64_t x772 = 8805260185LLU;
static uint8_t x777 = 125U;
int32_t x794 = -1;
uint32_t x798 = 2U;
uint8_t x800 = UINT8_MAX;
uint32_t x803 = 869U;
volatile uint32_t t193 = 349U;
uint32_t x806 = UINT32_MAX;
int64_t x808 = 21229LL;
static volatile uint32_t t194 = 13U;
uint16_t x810 = 440U;
uint32_t x814 = UINT32_MAX;
volatile uint32_t t196 = 1U;
int16_t x817 = -16;
int32_t x818 = 4901555;
int32_t x819 = INT32_MIN;
static int16_t x820 = 6;
uint32_t x825 = UINT32_MAX;
int32_t x827 = -1;


void f0(void) {
    	volatile uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 7U;
	static volatile uint64_t t0 = 107059375338460LLU;

    t0 = ((x1/x2)-(x3>x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 6490996LLU;
	int64_t x6 = INT64_MIN;
	volatile uint64_t x7 = 13LLU;

    t1 = ((x5/x6)-(x7>x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 981LLU;
	volatile int32_t x11 = INT32_MAX;
	uint64_t x12 = 47884432986LLU;
	uint64_t t2 = 6472261089846848LLU;

    t2 = ((x9/x10)-(x11>x12));

    if (t2 != 2189076LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x19 = INT8_MIN;
	int32_t t3 = -7142332;

    t3 = ((x17/x18)-(x19>x20));

    if (t3 != -2978) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -1LL;
	volatile int32_t x22 = INT32_MAX;
	static int8_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	volatile int64_t t4 = 108335797830219994LL;

    t4 = ((x21/x22)-(x23>x24));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -152;
	int32_t x27 = -1;
	static uint8_t x28 = UINT8_MAX;
	int32_t t5 = 36340;

    t5 = ((x25/x26)-(x27>x28));

    if (t5 != 152) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x29 = 1U;
	volatile int16_t x30 = INT16_MIN;
	static volatile int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MIN;

    t6 = ((x29/x30)-(x31>x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MIN;
	uint16_t x34 = UINT16_MAX;
	static uint8_t x35 = 25U;
	volatile uint64_t x36 = UINT64_MAX;
	static int32_t t7 = 267446;

    t7 = ((x33/x34)-(x35>x36));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	volatile int32_t t8 = -1;

    t8 = ((x37/x38)-(x39>x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	int8_t x43 = 4;
	uint16_t x44 = 18844U;
	volatile int64_t t9 = 35754LL;

    t9 = ((x41/x42)-(x43>x44));

    if (t9 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = INT16_MIN;
	int8_t x46 = 1;
	uint8_t x47 = 114U;
	volatile uint32_t x48 = 251U;
	int32_t t10 = -746485917;

    t10 = ((x45/x46)-(x47>x48));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MIN;
	int16_t x51 = 1;
	uint8_t x52 = 1U;
	volatile uint64_t t11 = 35567623446404922LLU;

    t11 = ((x49/x50)-(x51>x52));

    if (t11 != 3290499203LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = INT64_MAX;
	static uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MAX;
	int8_t x56 = INT8_MIN;
	int64_t t12 = 41819077975950252LL;

    t12 = ((x53/x54)-(x55>x56));

    if (t12 != 140739635871743LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x57 = UINT64_MAX;
	int16_t x58 = -1;
	static int64_t x59 = 625506783LL;
	uint64_t t13 = 49LLU;

    t13 = ((x57/x58)-(x59>x60));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = INT32_MAX;
	int16_t x64 = INT16_MIN;
	uint64_t t14 = UINT64_MAX;

    t14 = ((x61/x62)-(x63>x64));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = 15562455250954463LL;
	int64_t x68 = INT64_MAX;
	int64_t t15 = 219265930098171337LL;

    t15 = ((x65/x66)-(x67>x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 92732211718666231LLU;
	volatile int32_t t16 = -96287;

    t16 = ((x69/x70)-(x71>x72));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = INT32_MIN;
	static uint8_t x75 = 22U;
	static int32_t t17 = -491395495;

    t17 = ((x73/x74)-(x75>x76));

    if (t17 != -17459217) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	int8_t x83 = -1;
	static int8_t x84 = INT8_MAX;
	int64_t t18 = -969569687430864791LL;

    t18 = ((x81/x82)-(x83>x84));

    if (t18 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x86 = INT8_MAX;
	int64_t x87 = -1LL;
	int64_t x88 = INT64_MAX;

    t19 = ((x85/x86)-(x87>x88));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = -267;
	static volatile uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	uint32_t t20 = 123946717U;

    t20 = ((x89/x90)-(x91>x92));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = -4LL;
	int64_t x95 = INT64_MAX;
	int64_t t21 = 394037976092726323LL;

    t21 = ((x93/x94)-(x95>x96));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x98 = 30U;
	int8_t x99 = INT8_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	int32_t t22 = 4536;

    t22 = ((x97/x98)-(x99>x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MAX;
	uint32_t x102 = UINT32_MAX;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	volatile int64_t t23 = -6LL;

    t23 = ((x101/x102)-(x103>x104));

    if (t23 != 2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	int32_t x107 = INT32_MAX;
	uint8_t x108 = 0U;
	volatile int64_t t24 = -2640896LL;

    t24 = ((x105/x106)-(x107>x108));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MIN;
	int8_t x111 = -3;
	static int32_t x112 = -1;
	volatile int32_t t25 = -15765;

    t25 = ((x109/x110)-(x111>x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = 3;
	static volatile int16_t x114 = INT16_MAX;
	int32_t x115 = -1;
	volatile int32_t t26 = -384178259;

    t26 = ((x113/x114)-(x115>x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x118 = INT32_MIN;
	uint16_t x120 = UINT16_MAX;

    t27 = ((x117/x118)-(x119>x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = 43U;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MAX;
	uint64_t x124 = UINT64_MAX;
	int32_t t28 = -150148;

    t28 = ((x121/x122)-(x123>x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 647U;
	int64_t x127 = 482775399036631LL;
	int64_t x128 = -1LL;
	static volatile uint32_t t29 = 6381U;

    t29 = ((x125/x126)-(x127>x128));

    if (t29 != 6638279U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x130 = -1;
	uint16_t x131 = 91U;
	static uint8_t x132 = 5U;
	static int32_t t30 = 131;

    t30 = ((x129/x130)-(x131>x132));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x137 = 82413335;
	uint16_t x138 = 25U;
	uint32_t x139 = UINT32_MAX;
	volatile int32_t t31 = 44368093;

    t31 = ((x137/x138)-(x139>x140));

    if (t31 != 3296532) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x141 = INT64_MAX;
	int16_t x142 = 21;
	static int32_t x143 = -269876749;
	int64_t x144 = INT64_MAX;
	int64_t t32 = -2LL;

    t32 = ((x141/x142)-(x143>x144));

    if (t32 != 439208192231179800LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -1LL;
	volatile uint64_t x148 = 3470557LLU;

    t33 = ((x145/x146)-(x147>x148));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MAX;
	static int32_t x151 = 11157626;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t34 = 10372276;

    t34 = ((x149/x150)-(x151>x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MIN;
	uint16_t x154 = 1U;
	int32_t x155 = -1;
	int64_t x156 = INT64_MIN;
	volatile int32_t t35 = -53626;

    t35 = ((x153/x154)-(x155>x156));

    if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x158 = INT16_MAX;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t36 = 56;

    t36 = ((x157/x158)-(x159>x160));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x161 = 7118966U;
	static volatile int64_t x162 = INT64_MIN;
	int16_t x163 = -12;
	int64_t t37 = -26364817512399913LL;

    t37 = ((x161/x162)-(x163>x164));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = -1;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t38 = 570032171;

    t38 = ((x165/x166)-(x167>x168));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MAX;
	int8_t x171 = 0;
	int16_t x172 = -5;

    t39 = ((x169/x170)-(x171>x172));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x174 = -46;
	int8_t x175 = -1;
	int16_t x176 = -1;
	int32_t t40 = 120;

    t40 = ((x173/x174)-(x175>x176));

    if (t40 != 46684427) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x177 = 30;
	int64_t x179 = INT64_MIN;
	int64_t x180 = 536344563394028LL;
	int32_t t41 = -1306;

    t41 = ((x177/x178)-(x179>x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x182 = UINT64_MAX;

    t42 = ((x181/x182)-(x183>x184));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x186 = -1;
	volatile int64_t x187 = INT64_MIN;
	static uint8_t x188 = 28U;
	int32_t t43 = 345314;

    t43 = ((x185/x186)-(x187>x188));

    if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = 46680337U;
	static int32_t x190 = -1;
	static int64_t x191 = INT64_MAX;
	uint32_t t44 = UINT32_MAX;

    t44 = ((x189/x190)-(x191>x192));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int64_t t45 = 143LL;

    t45 = ((x193/x194)-(x195>x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = -1;
	int64_t x199 = INT64_MAX;

    t46 = ((x197/x198)-(x199>x200));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 110961113826LLU;
	int32_t t47 = -844766;

    t47 = ((x201/x202)-(x203>x204));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	static uint32_t x206 = 2933U;
	static int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	uint32_t t48 = 48U;

    t48 = ((x205/x206)-(x207>x208));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = INT32_MIN;
	uint8_t x210 = 1U;
	uint16_t x211 = 37U;
	uint64_t x212 = UINT64_MAX;

    t49 = ((x209/x210)-(x211>x212));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	int8_t x214 = -1;
	int64_t x215 = 7497842106LL;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t50 = 138479615;

    t50 = ((x213/x214)-(x215>x216));

    if (t50 != -256) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = 278LL;
	volatile uint8_t x222 = 126U;
	uint16_t x223 = 4934U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t51 = -24728682822740699LL;

    t51 = ((x221/x222)-(x223>x224));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = INT32_MAX;
	volatile uint64_t x228 = 5218LLU;
	int32_t t52 = -348;

    t52 = ((x225/x226)-(x227>x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x230 = 7796537LL;
	int16_t x231 = INT16_MIN;
	static volatile int64_t t53 = 249541214LL;

    t53 = ((x229/x230)-(x231>x232));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MIN;
	uint16_t x234 = 407U;
	int8_t x235 = INT8_MAX;
	volatile uint8_t x236 = 123U;
	volatile int32_t t54 = 13;

    t54 = ((x233/x234)-(x235>x236));

    if (t54 != -81) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -1;
	int32_t x238 = -1;
	int16_t x239 = 60;
	int8_t x240 = INT8_MAX;
	volatile int32_t t55 = -1231161;

    t55 = ((x237/x238)-(x239>x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x241 = 2U;
	int32_t x242 = INT32_MIN;
	static volatile int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;
	volatile uint32_t t56 = 1988642014U;

    t56 = ((x241/x242)-(x243>x244));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = -1;
	uint8_t x247 = 54U;
	uint32_t t57 = 182581U;

    t57 = ((x245/x246)-(x247>x248));

    if (t57 != 3627506U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x249 = 1403U;
	uint8_t x250 = 53U;
	int32_t x251 = 0;
	int64_t x252 = INT64_MAX;
	int32_t t58 = -7586829;

    t58 = ((x249/x250)-(x251>x252));

    if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = INT64_MIN;
	static volatile int8_t x254 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	int64_t t59 = -254167002729LL;

    t59 = ((x253/x254)-(x255>x256));

    if (t59 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x258 = 981590805337LLU;
	int8_t x259 = INT8_MIN;
	int32_t x260 = -21320;
	volatile uint64_t t60 = 2038551LLU;

    t60 = ((x257/x258)-(x259>x260));

    if (t60 != 18792701LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x261 = -1;
	uint64_t x263 = 5862618LLU;
	volatile int8_t x264 = INT8_MIN;

    t61 = ((x261/x262)-(x263>x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x267 = -11;
	static uint16_t x268 = 12162U;

    t62 = ((x265/x266)-(x267>x268));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = INT8_MAX;
	int16_t x270 = 8353;
	int16_t x271 = -50;
	int16_t x272 = INT16_MIN;

    t63 = ((x269/x270)-(x271>x272));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = 23U;
	int8_t x274 = -1;
	int16_t x276 = INT16_MIN;

    t64 = ((x273/x274)-(x275>x276));

    if (t64 != -24) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x277 = 75U;
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MIN;
	int64_t x280 = 9771630LL;
	static int64_t t65 = 2396443LL;

    t65 = ((x277/x278)-(x279>x280));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x282 = 20U;
	int16_t x283 = -1;
	uint8_t x284 = 73U;

    t66 = ((x281/x282)-(x283>x284));

    if (t66 != -1638) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = -10;
	volatile uint32_t x286 = 6131081U;
	int16_t x287 = -552;
	int32_t x288 = INT32_MAX;
	static volatile uint32_t t67 = 57U;

    t67 = ((x285/x286)-(x287>x288));

    if (t67 != 700U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -8575LL;
	static int32_t x290 = INT32_MAX;
	int16_t x291 = INT16_MIN;

    t68 = ((x289/x290)-(x291>x292));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x293 = -1;
	uint16_t x294 = 10U;
	int64_t x295 = INT64_MAX;
	int32_t t69 = -6703071;

    t69 = ((x293/x294)-(x295>x296));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x297 = -383;
	uint8_t x298 = 56U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t70 = 0;

    t70 = ((x297/x298)-(x299>x300));

    if (t70 != -7) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MAX;
	static int16_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	static int32_t t71 = -2228025;

    t71 = ((x301/x302)-(x303>x304));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t72 = 35318817;

    t72 = ((x305/x306)-(x307>x308));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x311 = INT64_MIN;
	static int16_t x312 = -1;
	volatile int64_t t73 = 101939628337255LL;

    t73 = ((x309/x310)-(x311>x312));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x313 = INT32_MAX;
	int64_t x314 = INT64_MIN;
	int8_t x315 = 3;
	volatile uint32_t x316 = UINT32_MAX;
	int64_t t74 = -20LL;

    t74 = ((x313/x314)-(x315>x316));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t75 = 1147924731699491LLU;

    t75 = ((x317/x318)-(x319>x320));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x321 = 24185U;
	int16_t x322 = INT16_MAX;
	int8_t x323 = -1;
	int16_t x324 = INT16_MIN;
	static uint32_t t76 = UINT32_MAX;

    t76 = ((x321/x322)-(x323>x324));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x325 = -26;
	static volatile uint32_t x326 = 5948U;
	uint8_t x327 = 86U;
	int8_t x328 = -1;
	volatile uint32_t t77 = 3205224U;

    t77 = ((x325/x326)-(x327>x328));

    if (t77 != 722084U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x330 = -1;
	static uint8_t x331 = UINT8_MAX;
	static volatile uint8_t x332 = 12U;
	int32_t t78 = -258212883;

    t78 = ((x329/x330)-(x331>x332));

    if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x337 = INT64_MAX;
	int16_t x338 = -99;
	int32_t x339 = -4;
	volatile uint16_t x340 = 14U;
	volatile int64_t t79 = 12633394719LL;

    t79 = ((x337/x338)-(x339>x340));

    if (t79 != -93165374109644200LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x341 = INT16_MIN;
	volatile int64_t x342 = -497687475LL;
	int64_t x343 = INT64_MIN;

    t80 = ((x341/x342)-(x343>x344));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x345 = -3;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = 58;
	volatile int32_t t81 = 13133988;

    t81 = ((x345/x346)-(x347>x348));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 1U;
	int32_t x352 = INT32_MIN;
	uint32_t t82 = 62368U;

    t82 = ((x349/x350)-(x351>x352));

    if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = INT64_MIN;
	volatile int32_t x355 = 800;
	static uint16_t x356 = UINT16_MAX;
	volatile int64_t t83 = 4LL;

    t83 = ((x353/x354)-(x355>x356));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MAX;
	volatile int32_t x360 = -140528961;
	volatile int32_t t84 = 357791;

    t84 = ((x357/x358)-(x359>x360));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	static int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	volatile int32_t t85 = -533227;

    t85 = ((x361/x362)-(x363>x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x366 = -1LL;
	static int16_t x367 = 200;
	uint16_t x368 = 1014U;
	volatile int64_t t86 = -1LL;

    t86 = ((x365/x366)-(x367>x368));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x369 = UINT8_MAX;
	int32_t x371 = 252801163;
	int16_t x372 = -15;
	volatile int64_t t87 = 17358345633676LL;

    t87 = ((x369/x370)-(x371>x372));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = -1;
	static volatile int32_t x375 = -1;
	uint8_t x376 = 8U;
	int32_t t88 = 305;

    t88 = ((x373/x374)-(x375>x376));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x377 = 8594719LLU;
	static int16_t x379 = INT16_MIN;
	static volatile uint64_t t89 = 56067128285LLU;

    t89 = ((x377/x378)-(x379>x380));

    if (t89 != 2864906LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x381 = -1;
	volatile int32_t t90 = -70003808;

    t90 = ((x381/x382)-(x383>x384));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x387 = UINT64_MAX;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = ((x385/x386)-(x387>x388));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x389 = UINT64_MAX;
	int64_t x391 = -1LL;
	static int64_t x392 = INT64_MIN;
	uint64_t t92 = 9105LLU;

    t92 = ((x389/x390)-(x391>x392));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = -1;
	volatile uint16_t x394 = UINT16_MAX;
	volatile int16_t x395 = INT16_MAX;
	static uint16_t x396 = 72U;

    t93 = ((x393/x394)-(x395>x396));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = -1;
	int64_t x399 = 5314579135LL;
	int16_t x400 = -1;

    t94 = ((x397/x398)-(x399>x400));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x401 = INT8_MIN;
	volatile uint8_t x402 = 1U;
	static uint64_t x403 = 789806196826065298LLU;
	int32_t x404 = -1;
	volatile int32_t t95 = -34159455;

    t95 = ((x401/x402)-(x403>x404));

    if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x405 = INT64_MAX;
	uint8_t x406 = UINT8_MAX;
	static uint32_t x408 = 2175626U;
	volatile int64_t t96 = -18084682LL;

    t96 = ((x405/x406)-(x407>x408));

    if (t96 != 36170086419038335LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	uint8_t x411 = 123U;
	int16_t x412 = -1;
	static volatile uint64_t t97 = 2627705125621LLU;

    t97 = ((x409/x410)-(x411>x412));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x413 = 350670523;
	static volatile int8_t x414 = 8;
	int32_t x415 = 56;
	uint32_t x416 = UINT32_MAX;
	static volatile int32_t t98 = 14616376;

    t98 = ((x413/x414)-(x415>x416));

    if (t98 != 43833815) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = UINT32_MAX;
	static volatile int64_t x420 = INT64_MIN;
	volatile uint32_t t99 = UINT32_MAX;

    t99 = ((x417/x418)-(x419>x420));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x421 = INT32_MIN;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = -1LL;
	uint64_t x424 = UINT64_MAX;
	int32_t t100 = 0;

    t100 = ((x421/x422)-(x423>x424));

    if (t100 != -65538) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x427 = 5832645191067207LL;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t101 = -102414;

    t101 = ((x425/x426)-(x427>x428));

    if (t101 != 16382) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x430 = -1;
	uint16_t x431 = 100U;
	static uint8_t x432 = UINT8_MAX;
	static int32_t t102 = 1;

    t102 = ((x429/x430)-(x431>x432));

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x433 = 2708LLU;
	static uint8_t x434 = 1U;
	static uint64_t x435 = UINT64_MAX;
	int64_t x436 = 525408887853148LL;
	volatile uint64_t t103 = 253196404726LLU;

    t103 = ((x433/x434)-(x435>x436));

    if (t103 != 2707LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x437 = INT16_MIN;
	uint64_t x438 = UINT64_MAX;
	uint16_t x440 = 5875U;

    t104 = ((x437/x438)-(x439>x440));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = -1LL;
	static uint16_t x442 = 2422U;
	uint64_t x443 = 244337LLU;
	volatile int64_t t105 = 7677164460734706LL;

    t105 = ((x441/x442)-(x443>x444));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = INT16_MIN;
	static int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = INT64_MAX;

    t106 = ((x445/x446)-(x447>x448));

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x449 = 732U;
	volatile uint64_t x451 = UINT64_MAX;
	volatile int8_t x452 = 5;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = ((x449/x450)-(x451>x452));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = 1;
	int64_t x456 = -1LL;
	static volatile int32_t t108 = 481821;

    t108 = ((x453/x454)-(x455>x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x457 = UINT8_MAX;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = -1;
	static uint32_t x460 = UINT32_MAX;
	static volatile int32_t t109 = -45363379;

    t109 = ((x457/x458)-(x459>x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x462 = INT32_MIN;
	uint16_t x463 = UINT16_MAX;
	int32_t t110 = 27905370;

    t110 = ((x461/x462)-(x463>x464));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x469 = 5946136LL;
	volatile int64_t x470 = -1LL;
	static volatile uint32_t x471 = 9770U;
	uint8_t x472 = 13U;
	static volatile int64_t t111 = -339231426LL;

    t111 = ((x469/x470)-(x471>x472));

    if (t111 != -5946137LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x473 = -1;
	int64_t x475 = INT64_MAX;
	uint64_t x476 = 2679673268LLU;
	static volatile int32_t t112 = 5;

    t112 = ((x473/x474)-(x475>x476));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x477 = 1;
	int8_t x478 = INT8_MAX;
	uint32_t x479 = UINT32_MAX;
	volatile uint8_t x480 = UINT8_MAX;

    t113 = ((x477/x478)-(x479>x480));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x481 = 7180;
	uint16_t x483 = UINT16_MAX;
	static uint64_t x484 = 73444353328LLU;
	int32_t t114 = -18857561;

    t114 = ((x481/x482)-(x483>x484));

    if (t114 != 1795) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x485 = 4U;
	int8_t x486 = INT8_MAX;
	uint64_t x487 = 12433LLU;
	uint8_t x488 = 36U;
	volatile uint32_t t115 = UINT32_MAX;

    t115 = ((x485/x486)-(x487>x488));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x489 = UINT8_MAX;
	uint64_t x490 = UINT64_MAX;
	int8_t x491 = 4;
	volatile int64_t x492 = -1279628079009033111LL;
	volatile uint64_t t116 = UINT64_MAX;

    t116 = ((x489/x490)-(x491>x492));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x493 = 2315U;
	volatile uint8_t x494 = 19U;
	uint8_t x495 = 3U;
	static uint32_t x496 = UINT32_MAX;
	static int32_t t117 = 53778;

    t117 = ((x493/x494)-(x495>x496));

    if (t117 != 121) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x497 = INT16_MIN;
	int16_t x499 = 1;

    t118 = ((x497/x498)-(x499>x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x502 = 6U;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = UINT32_MAX;
	int32_t t119 = -34857;

    t119 = ((x501/x502)-(x503>x504));

    if (t119 != -5461) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x505 = 1;
	static int16_t x506 = -1;
	static int64_t x508 = 1222092685677485LL;
	int32_t t120 = 3771991;

    t120 = ((x505/x506)-(x507>x508));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x510 = INT8_MIN;
	int64_t x511 = INT64_MIN;
	int32_t t121 = -554800;

    t121 = ((x509/x510)-(x511>x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x513 = INT64_MAX;
	int16_t x514 = 14;
	int32_t x516 = INT32_MAX;

    t122 = ((x513/x514)-(x515>x516));

    if (t122 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x517 = INT32_MIN;
	volatile int64_t x518 = -11LL;
	static int32_t x519 = INT32_MIN;
	volatile int8_t x520 = 0;
	int64_t t123 = 8729092033LL;

    t123 = ((x517/x518)-(x519>x520));

    if (t123 != 195225786LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x521 = 10U;
	int32_t x522 = INT32_MIN;
	uint16_t x523 = 695U;
	int16_t x524 = INT16_MAX;

    t124 = ((x521/x522)-(x523>x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MIN;
	int32_t x526 = INT32_MIN;
	static volatile int32_t x527 = -1;
	static volatile int32_t t125 = -114904258;

    t125 = ((x525/x526)-(x527>x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x529 = INT16_MIN;
	static int32_t x530 = 1060;
	int64_t x531 = INT64_MAX;
	static volatile int32_t x532 = INT32_MIN;

    t126 = ((x529/x530)-(x531>x532));

    if (t126 != -31) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = INT32_MAX;
	static uint64_t x535 = UINT64_MAX;
	int8_t x536 = 1;
	volatile int32_t t127 = 12148;

    t127 = ((x533/x534)-(x535>x536));

    if (t127 != -14) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x537 = 8558;
	volatile uint8_t x538 = 23U;
	static uint16_t x539 = UINT16_MAX;
	static int32_t t128 = -244721333;

    t128 = ((x537/x538)-(x539>x540));

    if (t128 != 371) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x541 = 350U;
	int8_t x542 = INT8_MIN;
	uint32_t x543 = 7354806U;
	uint64_t x544 = UINT64_MAX;
	int32_t t129 = -183;

    t129 = ((x541/x542)-(x543>x544));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = INT8_MAX;
	uint32_t x546 = 20U;
	volatile uint64_t x547 = UINT64_MAX;
	int8_t x548 = -3;
	volatile uint32_t t130 = 86482979U;

    t130 = ((x545/x546)-(x547>x548));

    if (t130 != 5U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = 548;
	uint32_t x550 = 207232U;
	static int32_t x551 = INT32_MAX;
	volatile uint32_t t131 = 14109U;

    t131 = ((x549/x550)-(x551>x552));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x553 = INT64_MAX;
	int64_t x554 = -1LL;
	volatile uint32_t x555 = 9573U;
	uint16_t x556 = 267U;
	int64_t t132 = INT64_MIN;

    t132 = ((x553/x554)-(x555>x556));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x558 = INT16_MAX;
	uint32_t x559 = 405U;
	static uint64_t x560 = 17225442665576456LLU;
	static int32_t t133 = -243961118;

    t133 = ((x557/x558)-(x559>x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x561 = 1U;
	int8_t x562 = -1;
	volatile int8_t x563 = -1;
	static int64_t x564 = 508632106039905821LL;
	int32_t t134 = 2;

    t134 = ((x561/x562)-(x563>x564));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x565 = INT8_MIN;
	static uint8_t x567 = UINT8_MAX;
	static int32_t x568 = INT32_MAX;
	uint64_t t135 = 5818781LLU;

    t135 = ((x565/x566)-(x567>x568));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x569 = INT64_MIN;
	uint32_t x570 = 1400494U;
	uint32_t x571 = 156769379U;
	uint8_t x572 = 92U;

    t136 = ((x569/x570)-(x571>x572));

    if (t136 != -6585799037236LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x574 = UINT16_MAX;
	uint64_t x575 = 2005718LLU;
	volatile int16_t x576 = -1;
	volatile int32_t t137 = 31;

    t137 = ((x573/x574)-(x575>x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = INT8_MAX;
	int16_t x579 = -1;
	volatile uint16_t x580 = UINT16_MAX;

    t138 = ((x577/x578)-(x579>x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x581 = INT16_MIN;
	uint64_t x582 = 2452149714482205LLU;
	static int16_t x583 = -5276;
	static uint16_t x584 = UINT16_MAX;
	uint64_t t139 = 124843345291358322LLU;

    t139 = ((x581/x582)-(x583>x584));

    if (t139 != 7522LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 10141U;
	static int64_t x586 = 5270842551066617LL;
	uint8_t x587 = 5U;
	uint16_t x588 = 5100U;
	int64_t t140 = 27538800189LL;

    t140 = ((x585/x586)-(x587>x588));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x590 = INT32_MAX;
	static int8_t x592 = -1;
	volatile int32_t t141 = 64789094;

    t141 = ((x589/x590)-(x591>x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x593 = 62U;
	static int64_t x594 = INT64_MAX;
	volatile uint64_t x595 = 67217430376819665LLU;
	int64_t x596 = INT64_MIN;

    t142 = ((x593/x594)-(x595>x596));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x597 = INT16_MIN;
	int8_t x598 = INT8_MIN;
	int32_t x599 = INT32_MIN;
	static int8_t x600 = -1;
	int32_t t143 = -1;

    t143 = ((x597/x598)-(x599>x600));

    if (t143 != 256) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	int8_t x602 = INT8_MIN;
	volatile int32_t t144 = 8;

    t144 = ((x601/x602)-(x603>x604));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MIN;
	uint32_t x608 = UINT32_MAX;
	int32_t t145 = 26005191;

    t145 = ((x605/x606)-(x607>x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x609 = 23U;
	static int16_t x610 = 25;
	int64_t x611 = -1LL;
	volatile int64_t x612 = INT64_MIN;
	volatile uint32_t t146 = UINT32_MAX;

    t146 = ((x609/x610)-(x611>x612));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x613 = 3;
	int32_t x614 = -1622;
	int16_t x615 = -1;
	uint32_t x616 = UINT32_MAX;
	static volatile int32_t t147 = 625;

    t147 = ((x613/x614)-(x615>x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = INT8_MIN;
	static uint16_t x618 = UINT16_MAX;
	volatile int64_t x619 = -32560096987LL;
	int16_t x620 = INT16_MIN;

    t148 = ((x617/x618)-(x619>x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x621 = -1LL;
	uint32_t x622 = UINT32_MAX;
	int64_t x623 = INT64_MIN;

    t149 = ((x621/x622)-(x623>x624));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x627 = 1271101340794477LLU;
	uint64_t x628 = UINT64_MAX;
	static volatile int32_t t150 = 1;

    t150 = ((x625/x626)-(x627>x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x629 = 955253029LL;
	int64_t x631 = -286029396LL;
	uint8_t x632 = UINT8_MAX;
	static volatile int64_t t151 = -3786816703559LL;

    t151 = ((x629/x630)-(x631>x632));

    if (t151 != -7462914LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x633 = 0U;
	int64_t x634 = -914250127561LL;
	int32_t x635 = 0;
	int64_t x636 = -41435367503776LL;
	volatile int64_t t152 = -1552LL;

    t152 = ((x633/x634)-(x635>x636));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	volatile uint32_t x638 = UINT32_MAX;
	static int8_t x639 = INT8_MAX;
	static int8_t x640 = INT8_MIN;
	static uint32_t t153 = 19991U;

    t153 = ((x637/x638)-(x639>x640));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = 345482LL;
	uint8_t x642 = UINT8_MAX;
	int32_t x643 = -1;
	int8_t x644 = 31;
	static int64_t t154 = 112008624LL;

    t154 = ((x641/x642)-(x643>x644));

    if (t154 != 1354LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x645 = -42LL;
	int64_t x648 = 36LL;
	int64_t t155 = -1867958042125304074LL;

    t155 = ((x645/x646)-(x647>x648));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x650 = UINT32_MAX;
	int64_t x651 = INT64_MAX;
	static volatile int64_t x652 = -144755137986LL;
	static uint32_t t156 = UINT32_MAX;

    t156 = ((x649/x650)-(x651>x652));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x653 = -11631346;
	int64_t x655 = INT64_MIN;
	int8_t x656 = 15;
	int32_t t157 = -55;

    t157 = ((x653/x654)-(x655>x656));

    if (t157 != -2326269) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x657 = -5;
	uint16_t x658 = 25U;
	int32_t x659 = -1;
	static volatile int32_t t158 = 36822571;

    t158 = ((x657/x658)-(x659>x660));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x661 = 501U;
	uint16_t x662 = 10U;
	static int16_t x663 = -10631;
	int32_t t159 = -780;

    t159 = ((x661/x662)-(x663>x664));

    if (t159 != 50) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x665 = INT32_MAX;
	uint64_t x666 = 1356465132153LLU;
	uint8_t x667 = UINT8_MAX;
	static int8_t x668 = INT8_MAX;
	uint64_t t160 = UINT64_MAX;

    t160 = ((x665/x666)-(x667>x668));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x669 = 25U;
	int64_t x671 = -1LL;
	static int8_t x672 = -1;
	volatile int32_t t161 = -2042621;

    t161 = ((x669/x670)-(x671>x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x677 = UINT32_MAX;
	int64_t x678 = -10968253532678055LL;
	int32_t x679 = 185223110;
	volatile int32_t x680 = -26;

    t162 = ((x677/x678)-(x679>x680));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x681 = INT8_MIN;
	volatile uint32_t x683 = 12122839U;
	uint32_t x684 = 11957624U;
	volatile int32_t t163 = -67;

    t163 = ((x681/x682)-(x683>x684));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x685 = UINT64_MAX;
	uint16_t x686 = 2U;
	volatile int8_t x687 = -1;
	int32_t x688 = INT32_MIN;
	uint64_t t164 = 43446351646LLU;

    t164 = ((x685/x686)-(x687>x688));

    if (t164 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x689 = 1053670126918038LL;
	int16_t x690 = INT16_MAX;
	volatile int64_t x691 = 2215883066641882582LL;
	int32_t x692 = -1;
	int64_t t165 = -93843551LL;

    t165 = ((x689/x690)-(x691>x692));

    if (t165 != 32156441751LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x693 = 2U;
	static int32_t x694 = -1767564;
	volatile int32_t t166 = -5;

    t166 = ((x693/x694)-(x695>x696));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x697 = UINT32_MAX;
	volatile int8_t x698 = 12;
	static uint32_t x699 = UINT32_MAX;
	int32_t x700 = -1;

    t167 = ((x697/x698)-(x699>x700));

    if (t167 != 357913941U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x701 = 34214656124035240LL;
	int32_t x702 = INT32_MIN;
	uint8_t x703 = 125U;
	uint8_t x704 = 0U;
	int64_t t168 = 1828742781738LL;

    t168 = ((x701/x702)-(x703>x704));

    if (t168 != -15932441LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = -58;
	int32_t x706 = 9;
	int64_t x707 = 761LL;
	static uint16_t x708 = 19U;
	static int32_t t169 = -84;

    t169 = ((x705/x706)-(x707>x708));

    if (t169 != -7) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MIN;
	uint32_t x711 = 9826665U;
	int8_t x712 = INT8_MIN;
	int32_t t170 = 116;

    t170 = ((x709/x710)-(x711>x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x714 = INT8_MIN;
	int8_t x715 = INT8_MAX;
	int16_t x716 = INT16_MAX;
	static uint64_t t171 = 21LLU;

    t171 = ((x713/x714)-(x715>x716));

    if (t171 != 1LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = INT8_MAX;
	int8_t x718 = -4;
	static uint8_t x720 = UINT8_MAX;
	volatile int32_t t172 = -248744491;

    t172 = ((x717/x718)-(x719>x720));

    if (t172 != -31) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x721 = 821008117;
	uint64_t x722 = UINT64_MAX;
	volatile uint8_t x723 = 1U;
	int16_t x724 = INT16_MIN;
	static uint64_t t173 = UINT64_MAX;

    t173 = ((x721/x722)-(x723>x724));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x725 = UINT8_MAX;
	int64_t x726 = 38991883LL;
	int64_t x727 = INT64_MAX;
	int32_t x728 = INT32_MIN;
	volatile int64_t t174 = 10416273419550LL;

    t174 = ((x725/x726)-(x727>x728));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x730 = 543U;
	int64_t x731 = -1LL;
	int64_t x732 = 35970407218447LL;
	static int32_t t175 = -490;

    t175 = ((x729/x730)-(x731>x732));

    if (t175 != -3954850) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x733 = UINT16_MAX;
	uint64_t x734 = UINT64_MAX;
	uint64_t x735 = 225886504045502857LLU;
	uint64_t t176 = UINT64_MAX;

    t176 = ((x733/x734)-(x735>x736));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x737 = 77U;
	uint32_t x738 = 1792942U;
	int16_t x739 = INT16_MIN;
	int16_t x740 = -1;
	uint32_t t177 = 9735055U;

    t177 = ((x737/x738)-(x739>x740));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x742 = 110985935U;
	uint32_t x743 = 5642846U;

    t178 = ((x741/x742)-(x743>x744));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x746 = 115038LL;
	int64_t x747 = 125095104557499LL;
	uint32_t x748 = UINT32_MAX;

    t179 = ((x745/x746)-(x747>x748));

    if (t179 != 2347LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x749 = 505939848;
	volatile int64_t x750 = 124LL;
	uint32_t x752 = UINT32_MAX;
	int64_t t180 = -66622980980588LL;

    t180 = ((x749/x750)-(x751>x752));

    if (t180 != 4080160LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x753 = -1;
	uint16_t x754 = 105U;
	static int32_t t181 = -81;

    t181 = ((x753/x754)-(x755>x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x757 = INT64_MIN;
	volatile uint64_t x758 = 256626LLU;
	static uint64_t t182 = 283129LLU;

    t182 = ((x757/x758)-(x759>x760));

    if (t182 != 35940910261839LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x761 = UINT16_MAX;
	int32_t x763 = -131006;
	volatile uint8_t x764 = 109U;
	static volatile int32_t t183 = -172784;

    t183 = ((x761/x762)-(x763>x764));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x767 = INT64_MIN;
	uint8_t x768 = 100U;
	static uint64_t t184 = 653664040402LLU;

    t184 = ((x765/x766)-(x767>x768));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t t185 = 545678082976808388LL;

    t185 = ((x769/x770)-(x771>x772));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x773 = 988U;
	static int32_t x774 = -1;
	int32_t x775 = 1;
	int8_t x776 = INT8_MAX;
	volatile uint32_t t186 = 38U;

    t186 = ((x773/x774)-(x775>x776));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MAX;
	volatile int64_t x780 = -3488710701LL;
	static int32_t t187 = -31;

    t187 = ((x777/x778)-(x779>x780));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = INT32_MIN;
	volatile int32_t x782 = INT32_MIN;
	int32_t x783 = INT32_MIN;
	volatile int8_t x784 = INT8_MAX;
	static int32_t t188 = 8888;

    t188 = ((x781/x782)-(x783>x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x785 = -6413;
	volatile int64_t x786 = INT64_MAX;
	static int16_t x787 = INT16_MAX;
	uint16_t x788 = UINT16_MAX;
	static volatile int64_t t189 = -206746334LL;

    t189 = ((x785/x786)-(x787>x788));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x789 = INT8_MAX;
	uint64_t x790 = 1814312060060LLU;
	int8_t x791 = -1;
	volatile uint32_t x792 = 41192U;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = ((x789/x790)-(x791>x792));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	uint64_t x795 = 8180595766294161LLU;
	int16_t x796 = -1;
	static volatile int32_t t191 = 30;

    t191 = ((x793/x794)-(x795>x796));

    if (t191 != -255) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = INT32_MIN;
	uint32_t x799 = 7704U;
	uint32_t t192 = 970U;

    t192 = ((x797/x798)-(x799>x800));

    if (t192 != 1073741823U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x801 = INT8_MIN;
	uint32_t x802 = 19379386U;
	volatile uint32_t x804 = 478680540U;

    t193 = ((x801/x802)-(x803>x804));

    if (t193 != 221U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = INT32_MIN;
	int8_t x807 = INT8_MAX;

    t194 = ((x805/x806)-(x807>x808));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x809 = 25163538U;
	volatile uint8_t x811 = 0U;
	int64_t x812 = -831330884840LL;
	static uint32_t t195 = 5U;

    t195 = ((x809/x810)-(x811>x812));

    if (t195 != 57188U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = -159;
	int8_t x815 = INT8_MIN;
	volatile int32_t x816 = 3;

    t196 = ((x813/x814)-(x815>x816));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t t197 = -2411;

    t197 = ((x817/x818)-(x819>x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x821 = 1541893666210536233LLU;
	int16_t x822 = 30;
	int16_t x823 = INT16_MIN;
	uint16_t x824 = 82U;
	static uint64_t t198 = 1689102LLU;

    t198 = ((x821/x822)-(x823>x824));

    if (t198 != 51396455540351207LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x826 = INT64_MIN;
	static volatile int64_t x828 = -48693LL;
	volatile int64_t t199 = 6846735469052LL;

    t199 = ((x825/x826)-(x827>x828));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

