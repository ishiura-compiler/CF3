
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

static int16_t x6 = 73;
int8_t x15 = -1;
int8_t x22 = INT8_MIN;
int8_t x36 = -36;
volatile int32_t t7 = 40269;
uint16_t x53 = UINT16_MAX;
volatile uint64_t t10 = 8641846LLU;
int32_t x67 = 2382285;
int32_t x71 = INT32_MIN;
int16_t x73 = INT16_MIN;
int32_t x74 = 2702856;
int16_t x83 = 1652;
uint64_t t15 = 51LLU;
int16_t x90 = INT16_MIN;
static int8_t x93 = -14;
int16_t x96 = -1;
static uint64_t t19 = 8500633506887172LLU;
volatile int64_t x101 = -1LL;
int64_t x103 = INT64_MIN;
volatile int64_t t21 = 114767134660552LL;
int8_t x113 = INT8_MIN;
int64_t x116 = INT64_MAX;
int32_t t24 = -13457;
int8_t x129 = INT8_MAX;
uint16_t x137 = 14298U;
static uint32_t x150 = 129565820U;
uint8_t x156 = UINT8_MAX;
uint32_t x165 = UINT32_MAX;
int16_t x168 = -1;
uint32_t t35 = 3055U;
int64_t t37 = -22088903353260LL;
static volatile int8_t x181 = -22;
int32_t x185 = INT32_MIN;
static volatile uint64_t x186 = 13273574464LLU;
int16_t x207 = INT16_MAX;
static uint8_t x214 = UINT8_MAX;
volatile int64_t x215 = INT64_MIN;
int16_t x218 = INT16_MIN;
static int8_t x220 = INT8_MAX;
int64_t t45 = 539358653567LL;
int16_t x222 = 589;
uint64_t x227 = UINT64_MAX;
uint32_t x232 = UINT32_MAX;
static uint16_t x233 = 6853U;
int16_t x236 = INT16_MIN;
int32_t x240 = INT32_MIN;
int64_t x241 = INT64_MAX;
static int16_t x245 = INT16_MIN;
volatile int8_t x246 = -1;
int64_t x247 = 22033442203LL;
uint8_t x251 = 11U;
int16_t x260 = 33;
int32_t x262 = -2022729;
static uint16_t x264 = UINT16_MAX;
uint32_t x269 = 235U;
volatile int8_t x271 = INT8_MAX;
int16_t x288 = 1682;
int8_t x294 = 5;
uint16_t x301 = 392U;
volatile uint64_t x307 = 49149LLU;
volatile uint32_t x309 = 670874291U;
int32_t x310 = -1;
uint8_t x320 = 10U;
int16_t x321 = INT16_MIN;
volatile int64_t t70 = -1LL;
static volatile int16_t x325 = -1;
static uint16_t x329 = 1U;
uint64_t x332 = 15LLU;
uint16_t x334 = UINT16_MAX;
static int8_t x346 = -1;
int32_t t74 = 484904;
volatile uint8_t x349 = 1U;
int32_t x353 = INT32_MAX;
static uint32_t x361 = UINT32_MAX;
int8_t x364 = INT8_MIN;
int64_t t79 = -17038180753707LL;
uint16_t x395 = 2071U;
int8_t x399 = INT8_MIN;
int8_t x400 = 1;
int16_t x406 = -1;
volatile int16_t x407 = 60;
uint64_t x416 = UINT64_MAX;
int16_t x420 = INT16_MAX;
static volatile uint32_t t92 = 5U;
volatile int8_t x427 = INT8_MAX;
volatile int8_t x434 = 0;
uint16_t x435 = 6819U;
int8_t x436 = INT8_MAX;
int64_t t95 = 2441852463LL;
int64_t x453 = INT64_MAX;
int16_t x455 = INT16_MIN;
int64_t t98 = 48061LL;
static volatile uint16_t x457 = 6852U;
int8_t x465 = 0;
uint16_t x477 = 8U;
int64_t x486 = 52LL;
volatile uint8_t x489 = 33U;
static int16_t x491 = INT16_MAX;
static int64_t x492 = -1LL;
int8_t x494 = INT8_MIN;
static int8_t x499 = -1;
int32_t x502 = -1;
uint8_t x505 = 4U;
int32_t t110 = -3649262;
static uint32_t x509 = 60274U;
volatile uint32_t t112 = 19210U;
volatile int16_t x517 = -2697;
int64_t x521 = -1LL;
static int8_t x524 = INT8_MIN;
volatile int8_t x529 = 4;
static int16_t x531 = INT16_MIN;
int64_t x535 = INT64_MIN;
uint32_t x538 = 987998U;
int64_t t120 = 62992LL;
volatile int16_t x550 = INT16_MAX;
volatile int32_t t121 = -19536905;
static uint8_t x561 = UINT8_MAX;
volatile int8_t x564 = -1;
int32_t x568 = INT32_MIN;
volatile uint16_t x574 = 14945U;
int32_t x576 = -48;
int64_t x587 = 1LL;
int8_t x597 = INT8_MIN;
int32_t x601 = 917872;
uint8_t x613 = 4U;
volatile int8_t x625 = 3;
volatile int64_t t137 = 29764222LL;
volatile uint32_t x629 = 105192U;
uint16_t x635 = 30U;
int32_t t139 = 91721842;
uint32_t x640 = 1840433229U;
uint32_t t140 = 908461881U;
volatile uint64_t t141 = 226340757081293981LLU;
volatile int64_t t142 = -15058893921LL;
uint16_t x654 = UINT16_MAX;
int16_t x662 = -119;
int64_t x663 = INT64_MAX;
static uint16_t x664 = 14364U;
uint32_t x669 = 506146U;
int8_t x674 = 44;
uint16_t x675 = 6U;
volatile uint64_t t148 = 1438804695258709LLU;
static uint8_t x684 = UINT8_MAX;
uint64_t x686 = UINT64_MAX;
volatile int64_t x687 = INT64_MIN;
static volatile int16_t x688 = -438;
volatile int64_t x695 = -853247111326446120LL;
int64_t t153 = -2054952394LL;
uint64_t x704 = UINT64_MAX;
uint64_t x706 = 15223024523LLU;
int32_t x708 = 68107526;
volatile uint64_t t157 = 377LLU;
volatile int64_t x716 = 212406852595383541LL;
volatile int64_t t158 = 2039LL;
volatile uint64_t t159 = 2005012303495065586LLU;
uint32_t x724 = 5498U;
int16_t x728 = INT16_MIN;
int64_t t162 = -2522309901LL;
uint32_t x745 = 72U;
static int32_t x748 = INT32_MIN;
int64_t t165 = -59996111187055LL;
static int64_t x766 = 223LL;
static int32_t x769 = INT32_MIN;
int64_t x771 = -1LL;
static volatile int64_t x779 = -1LL;
volatile int32_t x780 = INT32_MAX;
static int32_t x795 = INT32_MIN;
int64_t x799 = 7660LL;
int32_t x800 = -1;
int16_t x804 = -1;
volatile int32_t t178 = -1;
int8_t x819 = INT8_MIN;
int32_t x820 = -35857;
static volatile int16_t x830 = INT16_MIN;
static int64_t x833 = INT64_MIN;
volatile int64_t t186 = 75806168122135LL;
int64_t x840 = -1LL;
uint8_t x842 = 1U;
int32_t t188 = 3848;
uint64_t x870 = 2047340459249LLU;
volatile uint64_t t194 = 2836130858986398LLU;
uint32_t x884 = UINT32_MAX;
volatile int16_t x887 = INT16_MAX;
int64_t x892 = -167554295975LL;
uint16_t x893 = UINT16_MAX;
int64_t x895 = -1LL;
int16_t x899 = 27;
volatile int32_t x900 = -6014372;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static volatile int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = 4U;
	volatile int64_t t0 = 26LL;

    t0 = ((x1+(x2/x3))/x4);

    if (t0 != 16383LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	static uint32_t x7 = UINT32_MAX;
	uint8_t x8 = 22U;
	volatile uint32_t t1 = 3U;

    t1 = ((x5+(x6/x7))/x8);

    if (t1 != 195224296U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MAX;
	static int64_t x11 = INT64_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 4LLU;

    t2 = ((x9+(x10/x11))/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	uint64_t t3 = 77226LLU;

    t3 = ((x13+(x14/x15))/x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -112;
	int64_t x23 = -1LL;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 31710216429659LL;

    t4 = ((x21+(x22/x23))/x24);

    if (t4 != -16LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = 1878817049907718973LL;
	volatile int64_t x26 = 4699LL;
	uint64_t x27 = 934223763LLU;
	uint16_t x28 = UINT16_MAX;
	volatile uint64_t t5 = 129537LLU;

    t5 = ((x25+(x26/x27))/x28);

    if (t5 != 28668910504428LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 1;

    t6 = ((x29+(x30/x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x33 = 122U;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;

    t7 = ((x33+(x34/x35))/x36);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x49 = 105558019U;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = 45;
	uint16_t x52 = 907U;
	int64_t t8 = 225394195LL;

    t8 = ((x49+(x50/x51))/x52);

    if (t8 != -225979959135236LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x54 = INT16_MIN;
	uint8_t x55 = UINT8_MAX;
	volatile uint8_t x56 = 32U;
	static volatile int32_t t9 = -602;

    t9 = ((x53+(x54/x55))/x56);

    if (t9 != 2043) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 95807094LLU;
	int16_t x58 = -1;
	uint64_t x59 = 924668619123817LLU;
	uint64_t x60 = 407641LLU;

    t10 = ((x57+(x58/x59))/x60);

    if (t10 != 235LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t11 = -32;

    t11 = ((x65+(x66/x67))/x68);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = -1;
	volatile uint16_t x70 = 7761U;
	static int16_t x72 = -563;
	volatile int32_t t12 = 266289;

    t12 = ((x69+(x70/x71))/x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x75 = -1;
	volatile int8_t x76 = 6;
	volatile int32_t t13 = -106;

    t13 = ((x73+(x74/x75))/x76);

    if (t13 != -455937) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = -9LL;
	int64_t x78 = INT64_MAX;
	volatile int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t14 = 114223251LL;

    t14 = ((x77+(x78/x79))/x80);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x81 = INT8_MAX;
	uint64_t x82 = 4031696LLU;
	volatile int64_t x84 = -86964171970LL;

    t15 = ((x81+(x82/x83))/x84);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x85 = 7;
	int16_t x86 = INT16_MAX;
	uint16_t x87 = 31U;
	uint16_t x88 = 5187U;
	int32_t t16 = -33;

    t16 = ((x85+(x86/x87))/x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = INT64_MIN;
	static uint32_t x91 = 85461U;
	int64_t x92 = 29397LL;
	static int64_t t17 = -32LL;

    t17 = ((x89+(x90/x91))/x92);

    if (t17 != -313752152833783LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x94 = 12;
	static int32_t x95 = INT32_MIN;
	static volatile int32_t t18 = 4743;

    t18 = ((x93+(x94/x95))/x96);

    if (t18 != 14) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x97 = INT8_MAX;
	static uint64_t x98 = 2LLU;
	volatile int32_t x99 = -1;
	static volatile int64_t x100 = 1LL;

    t19 = ((x97+(x98/x99))/x100);

    if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x102 = UINT8_MAX;
	static int16_t x104 = INT16_MIN;
	volatile int64_t t20 = -23643958LL;

    t20 = ((x101+(x102/x103))/x104);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x106 = -619290LL;
	uint16_t x107 = 2U;
	static uint16_t x108 = UINT16_MAX;

    t21 = ((x105+(x106/x107))/x108);

    if (t21 != -32773LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x109 = 11;
	int8_t x110 = INT8_MAX;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = 5LLU;
	uint64_t t22 = 22306670238LLU;

    t22 = ((x109+(x110/x111))/x112);

    if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	static volatile int64_t t23 = 391188962LL;

    t23 = ((x113+(x114/x115))/x116);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	static volatile uint8_t x120 = 80U;

    t24 = ((x117+(x118/x119))/x120);

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = 676456326U;
	int16_t x127 = INT16_MAX;
	int8_t x128 = 43;
	uint32_t t25 = 143170U;

    t25 = ((x125+(x126/x127))/x128);

    if (t25 != 477U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x130 = -175;
	int8_t x131 = -1;
	int32_t x132 = 10;
	volatile int32_t t26 = -3845766;

    t26 = ((x129+(x130/x131))/x132);

    if (t26 != 30) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = -1;
	static int8_t x134 = -1;
	static volatile uint32_t x135 = UINT32_MAX;
	uint16_t x136 = 485U;
	static volatile uint32_t t27 = 5740171U;

    t27 = ((x133+(x134/x135))/x136);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x138 = 2U;
	int8_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t28 = 250LLU;

    t28 = ((x137+(x138/x139))/x140);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	volatile int64_t x143 = -14237735LL;
	static uint32_t x144 = UINT32_MAX;
	volatile int64_t t29 = 607118479343LL;

    t29 = ((x141+(x142/x143))/x144);

    if (t29 != 150LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x149 = INT8_MAX;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MAX;
	volatile uint32_t t30 = 321U;

    t30 = ((x149+(x150/x151))/x152);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = INT64_MIN;
	static int64_t x154 = -1LL;
	uint8_t x155 = 4U;
	int64_t t31 = -1063272LL;

    t31 = ((x153+(x154/x155))/x156);

    if (t31 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = 0;
	static volatile int16_t x159 = INT16_MIN;
	static int32_t x160 = INT32_MAX;
	volatile int32_t t32 = 0;

    t32 = ((x157+(x158/x159))/x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x161 = -4LL;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	int64_t t33 = 859736LL;

    t33 = ((x161+(x162/x163))/x164);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x166 = 4U;
	int32_t x167 = INT32_MAX;
	static uint32_t t34 = 43864875U;

    t34 = ((x165+(x166/x167))/x168);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = 3268;
	volatile int8_t x170 = 0;
	uint32_t x171 = UINT32_MAX;
	static int32_t x172 = INT32_MIN;

    t35 = ((x169+(x170/x171))/x172);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x173 = 44U;
	int64_t x174 = 6616124LL;
	uint64_t x175 = UINT64_MAX;
	uint32_t x176 = UINT32_MAX;
	uint64_t t36 = 1170824628LLU;

    t36 = ((x173+(x174/x175))/x176);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	volatile int16_t x179 = -6149;
	int8_t x180 = INT8_MIN;

    t37 = ((x177+(x178/x179))/x180);

    if (t37 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x182 = -1;
	int32_t x183 = 1;
	uint8_t x184 = 1U;
	volatile int32_t t38 = 15772;

    t38 = ((x181+(x182/x183))/x184);

    if (t38 != -23) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x187 = -1;
	int16_t x188 = INT16_MAX;
	static volatile uint64_t t39 = 1257LLU;

    t39 = ((x185+(x186/x187))/x188);

    if (t39 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x193 = INT8_MIN;
	uint64_t x194 = 359607429LLU;
	volatile int8_t x195 = 4;
	int32_t x196 = INT32_MIN;
	uint64_t t40 = 16075555279625LLU;

    t40 = ((x193+(x194/x195))/x196);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = INT32_MAX;
	int16_t x198 = -541;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = 3U;
	volatile int32_t t41 = 117604;

    t41 = ((x197+(x198/x199))/x200);

    if (t41 != 715827882) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x205 = 4U;
	uint32_t x206 = 276356U;
	volatile uint64_t x208 = UINT64_MAX;
	volatile uint64_t t42 = 38798328543870LLU;

    t42 = ((x205+(x206/x207))/x208);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x209 = 22;
	int64_t x210 = 28844571190949260LL;
	volatile uint16_t x211 = UINT16_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int64_t t43 = -482251639880LL;

    t43 = ((x209+(x210/x211))/x212);

    if (t43 != 6716105LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x213 = INT16_MAX;
	int8_t x216 = -1;
	volatile int64_t t44 = 63316062LL;

    t44 = ((x213+(x214/x215))/x216);

    if (t44 != -32767LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = -27269687462576LL;
	volatile int16_t x219 = -1;

    t45 = ((x217+(x218/x219))/x220);

    if (t45 != -214721948266LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x221 = UINT8_MAX;
	static int16_t x223 = INT16_MAX;
	static int32_t x224 = -1;
	int32_t t46 = -723;

    t46 = ((x221+(x222/x223))/x224);

    if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x225 = -1;
	int16_t x226 = -1;
	int8_t x228 = -20;
	uint64_t t47 = 5533015091292LLU;

    t47 = ((x225+(x226/x227))/x228);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = INT16_MIN;
	volatile int64_t x230 = -1LL;
	uint64_t x231 = 13208666074619707LLU;
	static uint64_t t48 = 68737LLU;

    t48 = ((x229+(x230/x231))/x232);

    if (t48 != 4294967296LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x234 = -1;
	static int16_t x235 = 232;
	int32_t t49 = 11657;

    t49 = ((x233+(x234/x235))/x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x237 = -7;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	volatile int32_t t50 = 25;

    t50 = ((x237+(x238/x239))/x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x242 = UINT64_MAX;
	uint64_t x243 = UINT64_MAX;
	static volatile int64_t x244 = INT64_MIN;
	uint64_t t51 = 8621391240055472443LLU;

    t51 = ((x241+(x242/x243))/x244);

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t52 = 3419LL;

    t52 = ((x245+(x246/x247))/x248);

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x249 = INT32_MAX;
	int64_t x250 = -1LL;
	int8_t x252 = INT8_MAX;
	volatile int64_t t53 = 3LL;

    t53 = ((x249+(x250/x251))/x252);

    if (t53 != 16909320LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x253 = -21;
	uint8_t x254 = 12U;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = -1;
	int32_t t54 = -712685407;

    t54 = ((x253+(x254/x255))/x256);

    if (t54 != 21) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x257 = 3719209024996LL;
	int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	static volatile int64_t t55 = -1940373889697LL;

    t55 = ((x257+(x258/x259))/x260);

    if (t55 != 112703303787LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = INT8_MIN;
	volatile uint8_t x263 = 1U;
	volatile int32_t t56 = -2;

    t56 = ((x261+(x262/x263))/x264);

    if (t56 != -30) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x265 = UINT64_MAX;
	static int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t57 = 1688264LLU;

    t57 = ((x265+(x266/x267))/x268);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x270 = 1;
	int64_t x272 = INT64_MAX;
	static volatile int64_t t58 = -42LL;

    t58 = ((x269+(x270/x271))/x272);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x273 = 205U;
	int8_t x274 = 41;
	int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t59 = 11U;

    t59 = ((x273+(x274/x275))/x276);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x281 = 89LLU;
	int8_t x282 = INT8_MAX;
	int64_t x283 = -3890962795328224LL;
	volatile int8_t x284 = INT8_MAX;
	static uint64_t t60 = 644851LLU;

    t60 = ((x281+(x282/x283))/x284);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = -140305380LL;
	volatile uint16_t x286 = UINT16_MAX;
	uint32_t x287 = UINT32_MAX;
	int64_t t61 = 69937438774571609LL;

    t61 = ((x285+(x286/x287))/x288);

    if (t61 != -83415LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x289 = -2553399;
	volatile uint64_t x290 = 11654171LLU;
	static volatile int16_t x291 = INT16_MAX;
	int32_t x292 = -187;
	uint64_t t62 = 110170266LLU;

    t62 = ((x289+(x290/x291))/x292);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x293 = -268;
	int64_t x295 = INT64_MIN;
	volatile int32_t x296 = INT32_MAX;
	volatile int64_t t63 = -1424057615LL;

    t63 = ((x293+(x294/x295))/x296);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x297 = 1U;
	uint8_t x298 = 90U;
	int8_t x299 = -1;
	uint64_t x300 = 31LLU;
	volatile uint64_t t64 = 1708850055028657527LLU;

    t64 = ((x297+(x298/x299))/x300);

    if (t64 != 595056260442243597LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x302 = 9081909256944466736LLU;
	static int64_t x303 = 135LL;
	int8_t x304 = INT8_MIN;
	static volatile uint64_t t65 = 368448LLU;

    t65 = ((x301+(x302/x303))/x304);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MIN;
	uint64_t x308 = 1165619558912258LLU;
	volatile uint64_t t66 = 1786122021500923133LLU;

    t66 = ((x305+(x306/x307))/x308);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MAX;
	volatile uint32_t t67 = 68306986U;

    t67 = ((x309+(x310/x311))/x312);

    if (t67 != 20474U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x313 = 0U;
	volatile int8_t x314 = -5;
	static uint32_t x315 = 181291U;
	volatile int32_t x316 = INT32_MIN;
	volatile uint32_t t68 = 358171U;

    t68 = ((x313+(x314/x315))/x316);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = -347487822;
	int8_t x319 = -1;
	static volatile int32_t t69 = -764377582;

    t69 = ((x317+(x318/x319))/x320);

    if (t69 != 34748769) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x322 = 3U;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MAX;

    t70 = ((x321+(x322/x323))/x324);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x326 = -1;
	static uint64_t x327 = 26292747690303LLU;
	volatile int16_t x328 = -1;
	uint64_t t71 = 1576LLU;

    t71 = ((x325+(x326/x327))/x328);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	volatile uint64_t t72 = 2370493LLU;

    t72 = ((x329+(x330/x331))/x332);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = INT16_MIN;
	uint8_t x335 = 100U;
	int8_t x336 = INT8_MAX;
	volatile int32_t t73 = -24;

    t73 = ((x333+(x334/x335))/x336);

    if (t73 != -252) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x345 = 411U;
	int32_t x347 = 5893;
	int8_t x348 = INT8_MIN;

    t74 = ((x345+(x346/x347))/x348);

    if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t75 = -4;

    t75 = ((x349+(x350/x351))/x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x354 = 6896LLU;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -49;
	uint64_t t76 = 2329637307LLU;

    t76 = ((x353+(x354/x355))/x356);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = INT16_MAX;
	int16_t x358 = 215;
	static int64_t x359 = INT64_MIN;
	uint8_t x360 = 91U;
	int64_t t77 = -1136573315758425533LL;

    t77 = ((x357+(x358/x359))/x360);

    if (t77 != 360LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x362 = INT32_MAX;
	static int64_t x363 = -1LL;
	int64_t t78 = -22LL;

    t78 = ((x361+(x362/x363))/x364);

    if (t78 != -16777216LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x365 = 2LL;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = -12LL;
	int32_t x368 = INT32_MIN;

    t79 = ((x365+(x366/x367))/x368);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = 3;
	uint16_t x372 = UINT16_MAX;
	volatile uint32_t t80 = 127U;

    t80 = ((x369+(x370/x371))/x372);

    if (t80 != 21846U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x374 = UINT8_MAX;
	static int32_t x375 = INT32_MAX;
	static uint32_t x376 = UINT32_MAX;
	uint32_t t81 = 2U;

    t81 = ((x373+(x374/x375))/x376);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x377 = 14003LLU;
	uint8_t x378 = UINT8_MAX;
	volatile int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	uint64_t t82 = 35635086060018LLU;

    t82 = ((x377+(x378/x379))/x380);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x381 = 29476U;
	int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = UINT8_MAX;
	uint8_t x384 = 2U;
	int32_t t83 = -50;

    t83 = ((x381+(x382/x383))/x384);

    if (t83 != 14738) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 335005522915485LLU;
	uint64_t t84 = 2LLU;

    t84 = ((x385+(x386/x387))/x388);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 65U;
	volatile int32_t t85 = 60448;

    t85 = ((x389+(x390/x391))/x392);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x393 = 35796U;
	volatile int16_t x394 = INT16_MAX;
	int8_t x396 = 3;
	uint32_t t86 = 1281071975U;

    t86 = ((x393+(x394/x395))/x396);

    if (t86 != 11937U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x397 = -1;
	static volatile int64_t x398 = INT64_MIN;
	int64_t t87 = -5542218085343LL;

    t87 = ((x397+(x398/x399))/x400);

    if (t87 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x401 = -1;
	volatile int64_t x402 = 510012338976136592LL;
	volatile int16_t x403 = 26;
	uint16_t x404 = 3U;
	volatile int64_t t88 = -2LL;

    t88 = ((x401+(x402/x403))/x404);

    if (t88 != 6538619730463289LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x405 = 0U;
	uint8_t x408 = 45U;
	volatile int32_t t89 = 253;

    t89 = ((x405+(x406/x407))/x408);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x413 = INT64_MAX;
	volatile int32_t x414 = INT32_MAX;
	int16_t x415 = -98;
	volatile uint64_t t90 = 347858445852581184LLU;

    t90 = ((x413+(x414/x415))/x416);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x417 = INT16_MIN;
	uint64_t x418 = 198LLU;
	uint16_t x419 = 14U;
	uint64_t t91 = 232867429219997217LLU;

    t91 = ((x417+(x418/x419))/x420);

    if (t91 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = -68;
	uint32_t x422 = UINT32_MAX;
	uint16_t x423 = UINT16_MAX;
	static volatile int32_t x424 = INT32_MAX;

    t92 = ((x421+(x422/x423))/x424);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = 8837;
	static int8_t x426 = -1;
	int64_t x428 = 160721374LL;
	volatile int64_t t93 = 3776616280852145506LL;

    t93 = ((x425+(x426/x427))/x428);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x433 = INT16_MAX;
	int32_t t94 = 122136937;

    t94 = ((x433+(x434/x435))/x436);

    if (t94 != 258) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x441 = 5277190622LL;
	volatile int16_t x442 = INT16_MIN;
	volatile uint8_t x443 = UINT8_MAX;
	int32_t x444 = INT32_MIN;

    t95 = ((x441+(x442/x443))/x444);

    if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x445 = INT64_MIN;
	int8_t x446 = 16;
	volatile int16_t x447 = 6;
	volatile int16_t x448 = 7;
	int64_t t96 = 4217992940189LL;

    t96 = ((x445+(x446/x447))/x448);

    if (t96 != -1317624576693539400LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x449 = INT64_MAX;
	int64_t x450 = -1LL;
	int32_t x451 = 54;
	uint64_t x452 = 5423740824LLU;
	uint64_t t97 = 41LLU;

    t97 = ((x449+(x450/x451))/x452);

    if (t97 != 1700555453LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x454 = INT8_MIN;
	int8_t x456 = -20;

    t98 = ((x453+(x454/x455))/x456);

    if (t98 != -461168601842738790LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x458 = -1LL;
	int32_t x459 = -1;
	volatile uint64_t x460 = 57025868929LLU;
	uint64_t t99 = 2006309185479493565LLU;

    t99 = ((x457+(x458/x459))/x460);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	int32_t x462 = -2;
	static int8_t x463 = INT8_MIN;
	int16_t x464 = -1;
	volatile uint32_t t100 = 434627229U;

    t100 = ((x461+(x462/x463))/x464);

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x466 = -1;
	volatile int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MIN;
	volatile int64_t t101 = 7721984330233LL;

    t101 = ((x465+(x466/x467))/x468);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x473 = -1;
	int8_t x474 = -1;
	int8_t x475 = INT8_MAX;
	uint32_t x476 = UINT32_MAX;
	uint32_t t102 = 8623217U;

    t102 = ((x473+(x474/x475))/x476);

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x478 = INT16_MAX;
	int16_t x479 = INT16_MAX;
	int32_t x480 = -3;
	volatile int32_t t103 = -2184;

    t103 = ((x477+(x478/x479))/x480);

    if (t103 != -3) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x481 = -1382415834LL;
	uint16_t x482 = UINT16_MAX;
	int16_t x483 = 92;
	int16_t x484 = -65;
	int64_t t104 = 382957LL;

    t104 = ((x481+(x482/x483))/x484);

    if (t104 != 21267924LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x485 = INT32_MIN;
	volatile int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MAX;
	volatile int64_t t105 = 2679LL;

    t105 = ((x485+(x486/x487))/x488);

    if (t105 != -16909320LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x490 = INT32_MIN;
	static int64_t t106 = -444884969102LL;

    t106 = ((x489+(x490/x491))/x492);

    if (t106 != 65505LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x493 = -2583231;
	int16_t x495 = INT16_MIN;
	volatile int8_t x496 = INT8_MAX;
	int32_t t107 = -124814211;

    t107 = ((x493+(x494/x495))/x496);

    if (t107 != -20340) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = 1;
	int8_t x498 = INT8_MIN;
	volatile uint32_t x500 = UINT32_MAX;
	volatile uint32_t t108 = 183251U;

    t108 = ((x497+(x498/x499))/x500);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x501 = 7;
	uint8_t x503 = 5U;
	static uint32_t x504 = 170844624U;
	uint32_t t109 = 21659573U;

    t109 = ((x501+(x502/x503))/x504);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x506 = -412;
	volatile uint16_t x507 = 3U;
	int32_t x508 = -1;

    t110 = ((x505+(x506/x507))/x508);

    if (t110 != 133) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x510 = 675U;
	int64_t x511 = -1LL;
	uint64_t x512 = 32391262510LLU;
	volatile uint64_t t111 = 13848LLU;

    t111 = ((x509+(x510/x511))/x512);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x513 = 24405U;
	int16_t x514 = 10554;
	static volatile int16_t x515 = -3112;
	volatile uint32_t x516 = 140243U;

    t112 = ((x513+(x514/x515))/x516);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x518 = INT64_MIN;
	uint8_t x519 = 16U;
	int32_t x520 = -9859;
	int64_t t113 = 6LL;

    t113 = ((x517+(x518/x519))/x520);

    if (t113 != 58470509413066LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x522 = -1460106979LL;
	int8_t x523 = -18;
	volatile int64_t t114 = -458082276577564119LL;

    t114 = ((x521+(x522/x523))/x524);

    if (t114 != -633726LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x525 = INT64_MAX;
	int32_t x526 = INT32_MIN;
	volatile int8_t x527 = INT8_MAX;
	uint16_t x528 = UINT16_MAX;
	volatile int64_t t115 = -3538700120LL;

    t115 = ((x525+(x526/x527))/x528);

    if (t115 != 140739635871486LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x530 = 2757932813LLU;
	static uint64_t x532 = 2945095LLU;
	static uint64_t t116 = 229504068LLU;

    t116 = ((x529+(x530/x531))/x532);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = 1;
	static int8_t x534 = INT8_MIN;
	static uint8_t x536 = 4U;
	volatile int64_t t117 = 260875603514LL;

    t117 = ((x533+(x534/x535))/x536);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 240406LLU;
	uint64_t t118 = 437155790LLU;

    t118 = ((x537+(x538/x539))/x540);

    if (t118 != 38365814650444LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x541 = -2;
	int64_t x542 = -1LL;
	volatile int32_t x543 = 31971;
	int16_t x544 = INT16_MIN;
	volatile int64_t t119 = -472898484824LL;

    t119 = ((x541+(x542/x543))/x544);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MAX;
	volatile int16_t x547 = 5;
	uint16_t x548 = UINT16_MAX;

    t120 = ((x545+(x546/x547))/x548);

    if (t120 != -140739635871744LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x549 = INT16_MIN;
	volatile int32_t x551 = INT32_MIN;
	static uint8_t x552 = UINT8_MAX;

    t121 = ((x549+(x550/x551))/x552);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x553 = INT8_MAX;
	uint16_t x554 = 25590U;
	uint32_t x555 = UINT32_MAX;
	static int32_t x556 = -2259808;
	volatile uint32_t t122 = 1U;

    t122 = ((x553+(x554/x555))/x556);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x562 = 70U;
	int8_t x563 = INT8_MAX;
	volatile int32_t t123 = 12156797;

    t123 = ((x561+(x562/x563))/x564);

    if (t123 != -255) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x565 = INT32_MIN;
	static int16_t x566 = 315;
	int32_t x567 = 237698862;
	int32_t t124 = 21970;

    t124 = ((x565+(x566/x567))/x568);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x569 = 0U;
	uint32_t x570 = UINT32_MAX;
	volatile uint64_t x571 = 3484967830301860778LLU;
	volatile int8_t x572 = -1;
	uint64_t t125 = 254995LLU;

    t125 = ((x569+(x570/x571))/x572);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x573 = 83U;
	uint8_t x575 = UINT8_MAX;
	int32_t t126 = 18;

    t126 = ((x573+(x574/x575))/x576);

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x577 = UINT16_MAX;
	volatile int8_t x578 = 49;
	volatile int64_t x579 = INT64_MAX;
	int8_t x580 = INT8_MAX;
	static int64_t t127 = -219368195175193821LL;

    t127 = ((x577+(x578/x579))/x580);

    if (t127 != 516LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x585 = INT64_MIN;
	uint64_t x586 = UINT64_MAX;
	static uint16_t x588 = 3U;
	static volatile uint64_t t128 = 1933LLU;

    t128 = ((x585+(x586/x587))/x588);

    if (t128 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = -28;
	static int32_t x591 = -1;
	uint32_t x592 = 15203U;
	volatile uint32_t t129 = 1453U;

    t129 = ((x589+(x590/x591))/x592);

    if (t129 != 282507U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x593 = 152519170LLU;
	int16_t x594 = INT16_MAX;
	int16_t x595 = INT16_MAX;
	int16_t x596 = INT16_MIN;
	static uint64_t t130 = 635314229220529LLU;

    t130 = ((x593+(x594/x595))/x596);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x598 = INT8_MIN;
	uint32_t x599 = 6U;
	static volatile int64_t x600 = -224609321200633LL;
	volatile int64_t t131 = -66850LL;

    t131 = ((x597+(x598/x599))/x600);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x602 = -1LL;
	volatile uint64_t x603 = 33469882286185LLU;
	uint8_t x604 = UINT8_MAX;
	static uint64_t t132 = 1853612137LLU;

    t132 = ((x601+(x602/x603))/x604);

    if (t132 != 5760LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x605 = -1;
	volatile uint16_t x606 = UINT16_MAX;
	uint64_t x607 = 50896902822591859LLU;
	uint8_t x608 = UINT8_MAX;
	uint64_t t133 = 4447738175599189915LLU;

    t133 = ((x605+(x606/x607))/x608);

    if (t133 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = -1;
	volatile int16_t x610 = -1;
	static uint16_t x611 = UINT16_MAX;
	volatile int64_t x612 = INT64_MIN;
	int64_t t134 = 6973857093LL;

    t134 = ((x609+(x610/x611))/x612);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x614 = INT32_MIN;
	volatile int64_t x615 = 87024287449LL;
	int32_t x616 = -106489;
	int64_t t135 = 16548LL;

    t135 = ((x613+(x614/x615))/x616);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x617 = 684U;
	int8_t x618 = -1;
	volatile int32_t x619 = 7673523;
	static int64_t x620 = 604264463538LL;
	static volatile int64_t t136 = -797531964331LL;

    t136 = ((x617+(x618/x619))/x620);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x626 = INT8_MIN;
	int8_t x627 = -1;
	int64_t x628 = -191894LL;

    t137 = ((x625+(x626/x627))/x628);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x630 = -1;
	uint64_t x631 = 2479807602542LLU;
	int16_t x632 = -94;
	static volatile uint64_t t138 = 3369702979327151LLU;

    t138 = ((x629+(x630/x631))/x632);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x633 = INT16_MIN;
	uint8_t x634 = UINT8_MAX;
	volatile int32_t x636 = -1;

    t139 = ((x633+(x634/x635))/x636);

    if (t139 != 32760) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x637 = 8;
	static int32_t x638 = INT32_MIN;
	uint16_t x639 = 1350U;

    t140 = ((x637+(x638/x639))/x640);

    if (t140 != 2U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x641 = -1;
	int8_t x642 = 1;
	static uint64_t x643 = UINT64_MAX;
	static uint64_t x644 = UINT64_MAX;

    t141 = ((x641+(x642/x643))/x644);

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x645 = INT32_MIN;
	static int8_t x646 = INT8_MAX;
	int32_t x647 = 27483;
	int64_t x648 = INT64_MIN;

    t142 = ((x645+(x646/x647))/x648);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x653 = -1LL;
	static uint8_t x655 = 4U;
	int8_t x656 = -1;
	static volatile int64_t t143 = 302LL;

    t143 = ((x653+(x654/x655))/x656);

    if (t143 != -16382LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x657 = -1;
	int64_t x658 = -30229038087LL;
	int32_t x659 = -5;
	uint64_t x660 = 923293175399275398LLU;
	uint64_t t144 = 1LLU;

    t144 = ((x657+(x658/x659))/x660);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x661 = UINT64_MAX;
	uint64_t t145 = 6020558488969475153LLU;

    t145 = ((x661+(x662/x663))/x664);

    if (t145 != 1284234480208128LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x665 = 1;
	int8_t x666 = -1;
	volatile int8_t x667 = -7;
	volatile uint16_t x668 = 5U;
	static int32_t t146 = -421;

    t146 = ((x665+(x666/x667))/x668);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x670 = 342615924U;
	volatile int8_t x671 = INT8_MAX;
	uint64_t x672 = 284927302814521587LLU;
	volatile uint64_t t147 = 0LLU;

    t147 = ((x669+(x670/x671))/x672);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x673 = 980LLU;
	volatile int16_t x676 = INT16_MAX;

    t148 = ((x673+(x674/x675))/x676);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x677 = INT8_MIN;
	int16_t x678 = 5166;
	int32_t x679 = -3382;
	int8_t x680 = INT8_MAX;
	volatile int32_t t149 = -1;

    t149 = ((x677+(x678/x679))/x680);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x681 = 1258423U;
	uint32_t x682 = 77U;
	static volatile uint16_t x683 = 29U;
	uint32_t t150 = 130320873U;

    t150 = ((x681+(x682/x683))/x684);

    if (t150 != 4935U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x685 = -1LL;
	uint64_t t151 = 32636728622785946LLU;

    t151 = ((x685+(x686/x687))/x688);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x689 = -1LL;
	static int64_t x690 = INT64_MIN;
	int8_t x691 = -14;
	static volatile int64_t x692 = -1LL;
	volatile int64_t t152 = 856983980677523LL;

    t152 = ((x689+(x690/x691))/x692);

    if (t152 != -658812288346769699LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x693 = 48302U;
	int8_t x694 = -5;
	int32_t x696 = -1;

    t153 = ((x693+(x694/x695))/x696);

    if (t153 != -48302LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x697 = -1LL;
	volatile int16_t x698 = INT16_MIN;
	uint16_t x699 = 5432U;
	uint64_t x700 = UINT64_MAX;
	uint64_t t154 = 17425LLU;

    t154 = ((x697+(x698/x699))/x700);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x701 = 968;
	volatile uint32_t x702 = 3197945U;
	uint8_t x703 = 13U;
	volatile uint64_t t155 = 2064434973676406865LLU;

    t155 = ((x701+(x702/x703))/x704);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x705 = -2891646LL;
	int8_t x707 = INT8_MIN;
	static uint64_t t156 = 303LLU;

    t156 = ((x705+(x706/x707))/x708);

    if (t156 != 270847366761LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x709 = 1014853U;
	uint64_t x710 = 25540896093LLU;
	static uint64_t x711 = 1254914219682800LLU;
	uint32_t x712 = UINT32_MAX;

    t157 = ((x709+(x710/x711))/x712);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x713 = -2;
	uint32_t x714 = UINT32_MAX;
	uint16_t x715 = 13012U;

    t158 = ((x713+(x714/x715))/x716);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x718 = -1;
	uint64_t x719 = 1LLU;
	int16_t x720 = -1612;

    t159 = ((x717+(x718/x719))/x720);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x721 = -1LL;
	volatile int64_t x722 = INT64_MIN;
	static volatile uint64_t x723 = UINT64_MAX;
	uint64_t t160 = 34740LLU;

    t160 = ((x721+(x722/x723))/x724);

    if (t160 != 3355173531049390LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x725 = -41668580;
	static int16_t x726 = -1;
	volatile uint8_t x727 = 23U;
	volatile int32_t t161 = 148297304;

    t161 = ((x725+(x726/x727))/x728);

    if (t161 != 1271) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x729 = -1;
	static int16_t x730 = 247;
	int64_t x731 = INT64_MAX;
	volatile int32_t x732 = INT32_MAX;

    t162 = ((x729+(x730/x731))/x732);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x737 = -461;
	static volatile int16_t x738 = INT16_MAX;
	int8_t x739 = INT8_MIN;
	volatile uint64_t x740 = 523258645593643LLU;
	volatile uint64_t t163 = 307706393350692923LLU;

    t163 = ((x737+(x738/x739))/x740);

    if (t163 != 35253LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x741 = 509466829254LLU;
	volatile uint8_t x742 = 9U;
	uint32_t x743 = 177892619U;
	static uint32_t x744 = UINT32_MAX;
	volatile uint64_t t164 = 22870012183238557LLU;

    t164 = ((x741+(x742/x743))/x744);

    if (t164 != 118LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x746 = -1LL;
	int16_t x747 = INT16_MIN;

    t165 = ((x745+(x746/x747))/x748);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x749 = 35U;
	uint8_t x750 = 11U;
	static volatile uint64_t x751 = UINT64_MAX;
	uint8_t x752 = 1U;
	volatile uint64_t t166 = 283930774606100630LLU;

    t166 = ((x749+(x750/x751))/x752);

    if (t166 != 35LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x753 = -1;
	int64_t x754 = -20656LL;
	uint8_t x755 = UINT8_MAX;
	volatile int8_t x756 = 1;
	volatile int64_t t167 = -135373151528699LL;

    t167 = ((x753+(x754/x755))/x756);

    if (t167 != -82LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x757 = INT16_MAX;
	int16_t x758 = -5;
	static int64_t x759 = -2228118717260399LL;
	uint8_t x760 = 15U;
	volatile int64_t t168 = 104278590LL;

    t168 = ((x757+(x758/x759))/x760);

    if (t168 != 2184LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x761 = 455U;
	static int16_t x762 = -1924;
	int32_t x763 = 55238;
	int16_t x764 = INT16_MIN;
	volatile int32_t t169 = 656765;

    t169 = ((x761+(x762/x763))/x764);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x765 = 1364106LL;
	volatile int8_t x767 = INT8_MAX;
	int64_t x768 = 13961607LL;
	int64_t t170 = 7LL;

    t170 = ((x765+(x766/x767))/x768);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x770 = INT16_MAX;
	static int32_t x772 = 1635;
	static volatile int64_t t171 = 53639LL;

    t171 = ((x769+(x770/x771))/x772);

    if (t171 != -1313465LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = 26U;
	int64_t x774 = INT64_MIN;
	static int64_t x775 = INT64_MIN;
	static int8_t x776 = -1;
	int64_t t172 = 327LL;

    t172 = ((x773+(x774/x775))/x776);

    if (t172 != -27LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x777 = -1;
	int64_t x778 = INT64_MAX;
	static int64_t t173 = -60834764610580822LL;

    t173 = ((x777+(x778/x779))/x780);

    if (t173 != -4294967298LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x781 = 85U;
	int32_t x782 = -1;
	int16_t x783 = INT16_MAX;
	int32_t x784 = INT32_MIN;
	volatile int32_t t174 = 141282;

    t174 = ((x781+(x782/x783))/x784);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x789 = -1;
	uint32_t x790 = 1305709158U;
	int32_t x791 = -1;
	uint16_t x792 = 1012U;
	uint32_t t175 = 2U;

    t175 = ((x789+(x790/x791))/x792);

    if (t175 != 4244038U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	volatile int16_t x794 = 0;
	int32_t x796 = INT32_MIN;
	int32_t t176 = -1;

    t176 = ((x793+(x794/x795))/x796);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x797 = -5;
	static uint32_t x798 = 1U;
	int64_t t177 = -878300080426644308LL;

    t177 = ((x797+(x798/x799))/x800);

    if (t177 != 5LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x801 = -80769870;
	uint16_t x802 = 50U;
	int8_t x803 = INT8_MIN;

    t178 = ((x801+(x802/x803))/x804);

    if (t178 != 80769870) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x805 = INT64_MAX;
	static uint8_t x806 = UINT8_MAX;
	int16_t x807 = INT16_MAX;
	static int64_t x808 = INT64_MAX;
	int64_t t179 = 112183133824004379LL;

    t179 = ((x805+(x806/x807))/x808);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	static uint8_t x810 = UINT8_MAX;
	volatile int8_t x811 = INT8_MAX;
	int64_t x812 = -10LL;
	int64_t t180 = -833230191LL;

    t180 = ((x809+(x810/x811))/x812);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x813 = UINT64_MAX;
	int64_t x814 = 74719341639LL;
	volatile int8_t x815 = -40;
	int16_t x816 = 3361;
	volatile uint64_t t181 = 277700375777LLU;

    t181 = ((x813+(x814/x815))/x816);

    if (t181 != 5488468929438133LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x817 = 18U;
	volatile int64_t x818 = 33346317LL;
	int64_t t182 = 1093LL;

    t182 = ((x817+(x818/x819))/x820);

    if (t182 != 7LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x821 = -1LL;
	int32_t x822 = INT32_MAX;
	uint16_t x823 = 1428U;
	int8_t x824 = INT8_MAX;
	int64_t t183 = -3245456666LL;

    t183 = ((x821+(x822/x823))/x824);

    if (t183 != 11841LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x825 = UINT16_MAX;
	uint32_t x826 = UINT32_MAX;
	int64_t x827 = -8120283959553644LL;
	volatile uint16_t x828 = UINT16_MAX;
	volatile int64_t t184 = 4162463220LL;

    t184 = ((x825+(x826/x827))/x828);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x829 = -1370LL;
	int8_t x831 = INT8_MIN;
	uint16_t x832 = 14U;
	volatile int64_t t185 = -3165237786959LL;

    t185 = ((x829+(x830/x831))/x832);

    if (t185 != -79LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x834 = -648671684;
	int8_t x835 = INT8_MIN;
	int16_t x836 = 1;

    t186 = ((x833+(x834/x835))/x836);

    if (t186 != -9223372036849708061LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x837 = 2U;
	int32_t x838 = INT32_MIN;
	static uint16_t x839 = 78U;
	volatile int64_t t187 = 66938048LL;

    t187 = ((x837+(x838/x839))/x840);

    if (t187 != 27531839LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x841 = INT32_MAX;
	static int8_t x843 = -1;
	volatile uint16_t x844 = 10U;

    t188 = ((x841+(x842/x843))/x844);

    if (t188 != 214748364) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x849 = -46;
	int32_t x850 = INT32_MIN;
	static int32_t x851 = -402655;
	uint32_t x852 = 22400U;
	uint32_t t189 = 23757081U;

    t189 = ((x849+(x850/x851))/x852);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x853 = -1LL;
	int32_t x854 = INT32_MIN;
	uint64_t x855 = 2050LLU;
	int16_t x856 = INT16_MAX;
	uint64_t t190 = 1LLU;

    t190 = ((x853+(x854/x855))/x856);

    if (t190 != 274618114024LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x861 = -1LL;
	volatile int32_t x862 = INT32_MIN;
	static int64_t x863 = 10LL;
	static int32_t x864 = -1;
	volatile int64_t t191 = -1LL;

    t191 = ((x861+(x862/x863))/x864);

    if (t191 != 214748365LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x865 = 1336188628717333958LL;
	int8_t x866 = INT8_MIN;
	volatile int64_t x867 = -7182294LL;
	uint16_t x868 = UINT16_MAX;
	int64_t t192 = 86797080LL;

    t192 = ((x865+(x866/x867))/x868);

    if (t192 != 20388931543714LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x869 = INT8_MIN;
	int32_t x871 = 1;
	int32_t x872 = 1;
	volatile uint64_t t193 = 1735095372854811LLU;

    t193 = ((x869+(x870/x871))/x872);

    if (t193 != 2047340459121LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x873 = UINT64_MAX;
	uint64_t x874 = 60LLU;
	uint8_t x875 = UINT8_MAX;
	uint32_t x876 = 44496028U;

    t194 = ((x873+(x874/x875))/x876);

    if (t194 != 414570578607LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x881 = UINT64_MAX;
	int16_t x882 = -28;
	int32_t x883 = INT32_MIN;
	uint64_t t195 = 909141826275608871LLU;

    t195 = ((x881+(x882/x883))/x884);

    if (t195 != 4294967297LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x885 = 0;
	static int16_t x886 = INT16_MAX;
	int16_t x888 = -1;
	int32_t t196 = -10;

    t196 = ((x885+(x886/x887))/x888);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x889 = -90118LL;
	static int64_t x890 = INT64_MAX;
	uint16_t x891 = 1157U;
	volatile int64_t t197 = 940LL;

    t197 = ((x889+(x890/x891))/x892);

    if (t197 != -47577LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x894 = 837;
	uint8_t x896 = 2U;
	int64_t t198 = -30068688369598LL;

    t198 = ((x893+(x894/x895))/x896);

    if (t198 != 32349LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x897 = -487;
	int64_t x898 = INT64_MAX;
	int64_t t199 = 5805379LL;

    t199 = ((x897+(x898/x899))/x900);

    if (t199 != -56798344321LL) { NG(); } else { ; }
	
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

