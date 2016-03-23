
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

int8_t x7 = INT8_MAX;
int32_t x8 = INT32_MIN;
uint32_t x9 = UINT32_MAX;
uint16_t x11 = UINT16_MAX;
volatile int32_t t1 = 496740;
volatile int32_t t2 = 25;
uint8_t x24 = 69U;
volatile int32_t t5 = 19902054;
int32_t t6 = -25887;
volatile int16_t x38 = INT16_MIN;
int16_t x39 = -7;
int8_t x44 = 1;
volatile int32_t t10 = -379;
uint32_t x63 = UINT32_MAX;
volatile uint8_t x64 = 7U;
volatile uint8_t x73 = 2U;
volatile int16_t x75 = INT16_MIN;
int64_t x76 = 881448163253LL;
volatile int32_t x81 = INT32_MIN;
uint8_t x82 = 0U;
int32_t t16 = 2078469;
uint64_t x91 = 339LLU;
static int32_t x93 = 1415200;
volatile int32_t t20 = 16890184;
static int32_t x105 = -1;
int8_t x106 = INT8_MIN;
static int32_t x107 = 68863;
volatile int8_t x110 = -1;
int8_t x111 = 3;
volatile uint8_t x112 = 18U;
static volatile int32_t t23 = -862;
int32_t t24 = 32045;
static uint16_t x125 = 2901U;
volatile int8_t x128 = INT8_MIN;
int16_t x131 = INT16_MIN;
static volatile int8_t x147 = 3;
static volatile int32_t t34 = 26785;
int8_t x161 = -9;
int16_t x165 = INT16_MAX;
uint64_t x173 = UINT64_MAX;
uint32_t x174 = 1526308U;
uint64_t x178 = 29071952560966LLU;
volatile int16_t x183 = INT16_MAX;
volatile uint8_t x184 = 5U;
volatile uint64_t x186 = 2LLU;
int64_t x207 = -1LL;
int32_t x217 = -1;
static uint64_t x226 = UINT64_MAX;
int32_t x227 = INT32_MIN;
int32_t x230 = INT32_MAX;
uint8_t x231 = 31U;
int16_t x238 = INT16_MIN;
static int8_t x240 = INT8_MIN;
volatile int32_t t53 = 543;
uint16_t x249 = 10U;
static uint64_t x252 = UINT64_MAX;
int8_t x257 = INT8_MAX;
int8_t x280 = INT8_MIN;
volatile int32_t t59 = -46;
uint8_t x284 = 37U;
int32_t t60 = 8724232;
int64_t x287 = INT64_MAX;
static uint32_t x289 = 2066U;
volatile int32_t t62 = 3631;
uint8_t x293 = UINT8_MAX;
uint32_t x297 = 6U;
static int32_t x299 = 505623;
int64_t x304 = INT64_MIN;
static int64_t x319 = 229032LL;
volatile uint64_t x323 = 2533121870828LLU;
volatile int32_t x324 = 14707;
static int8_t x325 = -1;
uint16_t x327 = 535U;
static int32_t x328 = INT32_MIN;
volatile int16_t x335 = -1600;
int16_t x342 = INT16_MIN;
static volatile uint16_t x344 = 2606U;
volatile int32_t t72 = -295798;
int16_t x345 = 1750;
int32_t x347 = 314;
int8_t x348 = 0;
int32_t t73 = -184;
static uint8_t x349 = 82U;
volatile int8_t x350 = -1;
int32_t t75 = -186384;
int64_t x367 = INT64_MIN;
volatile int16_t x373 = -1;
int32_t x378 = INT32_MIN;
uint32_t x389 = 1434U;
static int64_t x394 = INT64_MIN;
volatile int32_t t83 = 58950;
int16_t x426 = INT16_MAX;
uint64_t x428 = UINT64_MAX;
uint8_t x431 = 8U;
uint32_t x433 = 14U;
static int64_t x443 = -30674611664LL;
static int32_t t92 = 2582840;
int32_t x456 = INT32_MIN;
int64_t x457 = INT64_MAX;
uint64_t x458 = UINT64_MAX;
volatile int32_t t99 = -623499;
uint32_t x486 = UINT32_MAX;
volatile int32_t t102 = -14583469;
int32_t t105 = -84901;
uint16_t x513 = 189U;
volatile uint8_t x515 = 1U;
volatile int32_t t106 = -490769;
int16_t x518 = -24;
int16_t x519 = INT16_MIN;
int32_t t107 = 1601477;
int8_t x525 = 1;
int64_t x531 = -1LL;
volatile int32_t x538 = INT32_MIN;
int8_t x546 = INT8_MAX;
static int16_t x547 = INT16_MIN;
static int16_t x550 = INT16_MIN;
static uint8_t x554 = 18U;
volatile int64_t x555 = INT64_MIN;
static int16_t x558 = 116;
uint32_t x561 = 3903U;
static volatile uint8_t x569 = UINT8_MAX;
int32_t x578 = -1;
volatile uint8_t x587 = 125U;
volatile uint8_t x590 = 1U;
int32_t x598 = 232728;
static int8_t x599 = INT8_MIN;
static int64_t x610 = 102259648LL;
uint64_t x611 = 6LLU;
int32_t t127 = -19413531;
static uint16_t x613 = UINT16_MAX;
volatile int32_t x614 = -1;
static uint32_t x615 = 163U;
int32_t x620 = INT32_MIN;
int32_t x631 = INT32_MIN;
static uint8_t x653 = 2U;
static int16_t x656 = INT16_MAX;
int8_t x659 = INT8_MAX;
volatile int32_t t138 = 559739;
static int16_t x667 = -2;
static volatile int32_t x668 = 972;
volatile uint16_t x670 = UINT16_MAX;
volatile int64_t x674 = -12265398640868LL;
static uint64_t x677 = 31765214653LLU;
volatile int8_t x680 = INT8_MAX;
int64_t x686 = INT64_MIN;
static int32_t x690 = -1;
uint64_t x692 = 860938807870014768LLU;
int64_t x695 = -1460278LL;
uint32_t x696 = 6010068U;
uint16_t x710 = 6914U;
uint32_t x711 = 4U;
volatile int8_t x717 = 0;
int32_t x718 = -1;
uint8_t x726 = 1U;
uint16_t x729 = 12U;
int32_t t155 = 110;
int8_t x742 = 13;
uint16_t x743 = 600U;
int32_t t158 = -28252395;
int32_t x750 = INT32_MIN;
int32_t t159 = -17643792;
static uint8_t x758 = 7U;
static uint64_t x760 = 3LLU;
int32_t t161 = 370061;
uint8_t x762 = 39U;
static volatile int32_t t162 = 52018191;
uint16_t x767 = 85U;
uint32_t x776 = 152004931U;
uint32_t x778 = 6103U;
volatile int16_t x779 = INT16_MIN;
static int64_t x780 = 357428593973189576LL;
static uint16_t x788 = 203U;
int32_t t167 = -6444;
uint16_t x791 = UINT16_MAX;
uint64_t x804 = 637LLU;
int32_t x809 = -1;
volatile int32_t x813 = -1;
static volatile int32_t t174 = -528422595;
uint16_t x825 = UINT16_MAX;
int16_t x827 = -1;
int32_t x828 = -177292068;
volatile int16_t x829 = INT16_MAX;
int16_t x832 = INT16_MIN;
volatile int32_t t178 = 364876391;
volatile int64_t x838 = 4LL;
volatile int64_t x845 = 23747345950LL;
volatile int32_t x848 = -1;
int32_t t182 = 205;
int8_t x855 = -26;
uint32_t x856 = 1317U;
volatile int32_t t183 = 59;
int32_t t184 = -9024;
int16_t x868 = INT16_MIN;
int32_t t185 = 208328615;
int32_t t186 = -7369;
int32_t x877 = INT32_MAX;
int8_t x880 = -1;
static volatile int8_t x881 = -1;
int32_t t190 = 7164;
int32_t t191 = -12274123;
uint64_t x895 = UINT64_MAX;
uint16_t x899 = UINT16_MAX;
int32_t t193 = 756495358;
int32_t t196 = 636;
uint32_t x915 = UINT32_MAX;
int32_t t198 = -126782197;


void f0(void) {
    	int64_t x5 = -1LL;
	int64_t x6 = -976997666LL;
	volatile int32_t t0 = -126385562;

    t0 = ((x5-(x6!=x7))==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x10 = 2LL;
	volatile int32_t x12 = INT32_MIN;

    t1 = ((x9-(x10!=x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -4;
	uint8_t x18 = UINT8_MAX;
	int8_t x19 = -17;
	static volatile uint16_t x20 = 2039U;

    t2 = ((x17-(x18!=x19))==x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = 54771;
	int16_t x22 = -1;
	int16_t x23 = 16;
	int32_t t3 = -72563;

    t3 = ((x21-(x22!=x23))==x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x25 = UINT64_MAX;
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t4 = -648684079;

    t4 = ((x25-(x26!=x27))==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x29 = 1U;
	int64_t x30 = INT64_MAX;
	int32_t x31 = -1;
	static volatile uint16_t x32 = 7U;

    t5 = ((x29-(x30!=x31))==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = INT64_MAX;
	int64_t x34 = 1461056998LL;
	int16_t x35 = INT16_MIN;
	int64_t x36 = 2863052LL;

    t6 = ((x33-(x34!=x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = -1;
	uint8_t x40 = 123U;
	int32_t t7 = 155306177;

    t7 = ((x37-(x38!=x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 531285U;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	int32_t t8 = 71;

    t8 = ((x41-(x42!=x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = -1;
	uint32_t x46 = 1688U;
	static uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = 66415127;

    t9 = ((x45-(x46!=x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = 7740419LL;
	int8_t x50 = -1;
	uint8_t x51 = 70U;
	uint16_t x52 = 124U;

    t10 = ((x49-(x50!=x51))==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = UINT32_MAX;
	static int64_t x58 = INT64_MIN;
	static int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t11 = 2;

    t11 = ((x57-(x58!=x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = INT8_MAX;
	uint64_t x62 = 65085LLU;
	int32_t t12 = -705573431;

    t12 = ((x61-(x62!=x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x65 = -1;
	volatile int64_t x66 = INT64_MAX;
	uint8_t x67 = UINT8_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	int32_t t13 = 558;

    t13 = ((x65-(x66!=x67))==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x69 = UINT64_MAX;
	static uint8_t x70 = 1U;
	uint64_t x71 = 742040701624208LLU;
	int16_t x72 = 4;
	volatile int32_t t14 = 30;

    t14 = ((x69-(x70!=x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x74 = 10067U;
	static int32_t t15 = -19;

    t15 = ((x73-(x74!=x75))==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x83 = 0;
	static uint64_t x84 = UINT64_MAX;

    t16 = ((x81-(x82!=x83))==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x85 = INT16_MIN;
	int8_t x86 = 0;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t17 = -3152285;

    t17 = ((x85-(x86!=x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x89 = 41596576U;
	volatile uint64_t x90 = 18023LLU;
	int32_t x92 = INT32_MIN;
	int32_t t18 = 1324;

    t18 = ((x89-(x90!=x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x94 = INT16_MAX;
	int16_t x95 = -1;
	int32_t x96 = INT32_MAX;
	volatile int32_t t19 = -227;

    t19 = ((x93-(x94!=x95))==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x97 = -1;
	volatile uint16_t x98 = 104U;
	int8_t x99 = 1;
	volatile int8_t x100 = INT8_MAX;

    t20 = ((x97-(x98!=x99))==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	int16_t x104 = INT16_MAX;
	int32_t t21 = -31119;

    t21 = ((x101-(x102!=x103))==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = 1;

    t22 = ((x105-(x106!=x107))==x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = -1LL;

    t23 = ((x109-(x110!=x111))==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = -4;
	int16_t x114 = INT16_MIN;
	static int32_t x115 = INT32_MAX;
	int32_t x116 = -1;

    t24 = ((x113-(x114!=x115))==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -2;
	uint32_t x122 = UINT32_MAX;
	static volatile int16_t x123 = INT16_MAX;
	volatile uint32_t x124 = 7887U;
	volatile int32_t t25 = -10526;

    t25 = ((x121-(x122!=x123))==x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x126 = UINT32_MAX;
	uint8_t x127 = UINT8_MAX;
	volatile int32_t t26 = -1344;

    t26 = ((x125-(x126!=x127))==x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x129 = UINT64_MAX;
	uint32_t x130 = UINT32_MAX;
	int64_t x132 = INT64_MIN;
	int32_t t27 = 6;

    t27 = ((x129-(x130!=x131))==x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MAX;
	volatile int32_t x134 = INT32_MAX;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = 2112;
	volatile int32_t t28 = 62;

    t28 = ((x133-(x134!=x135))==x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	static volatile int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	volatile int64_t x140 = INT64_MAX;
	volatile int32_t t29 = -4256505;

    t29 = ((x137-(x138!=x139))==x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x141 = 144LL;
	volatile int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t30 = 76632;

    t30 = ((x141-(x142!=x143))==x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 24694U;
	int16_t x146 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t31 = 14855301;

    t31 = ((x145-(x146!=x147))==x148);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x149 = 31;
	static int8_t x150 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile uint8_t x152 = 6U;
	volatile int32_t t32 = 6;

    t32 = ((x149-(x150!=x151))==x152);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -6;
	int16_t x156 = -88;
	int32_t t33 = -5608433;

    t33 = ((x153-(x154!=x155))==x156);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x157 = 430U;
	int16_t x158 = 119;
	volatile int32_t x159 = -1;
	volatile int16_t x160 = -10;

    t34 = ((x157-(x158!=x159))==x160);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x162 = 419044U;
	volatile int64_t x163 = 3023510951LL;
	int16_t x164 = -838;
	int32_t t35 = -1;

    t35 = ((x161-(x162!=x163))==x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t36 = -197793755;

    t36 = ((x165-(x166!=x167))==x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = INT32_MAX;
	static uint64_t x170 = 5264323501124LLU;
	volatile int16_t x171 = 1;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t37 = 192783293;

    t37 = ((x169-(x170!=x171))==x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	volatile int32_t t38 = -69788865;

    t38 = ((x173-(x174!=x175))==x176);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x177 = 375U;
	int32_t x179 = -1;
	int8_t x180 = -6;
	int32_t t39 = -777731759;

    t39 = ((x177-(x178!=x179))==x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x181 = 0U;
	volatile uint64_t x182 = UINT64_MAX;
	int32_t t40 = -73;

    t40 = ((x181-(x182!=x183))==x184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x185 = INT16_MAX;
	volatile int16_t x187 = INT16_MIN;
	int8_t x188 = 0;
	int32_t t41 = 19320020;

    t41 = ((x185-(x186!=x187))==x188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x189 = 117937697231LLU;
	static int32_t x190 = -31304253;
	int32_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	int32_t t42 = -1;

    t42 = ((x189-(x190!=x191))==x192);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = 1418;
	int64_t x194 = INT64_MIN;
	int32_t x195 = -4819683;
	int64_t x196 = 116LL;
	int32_t t43 = -2777;

    t43 = ((x193-(x194!=x195))==x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x201 = -971;
	int32_t x202 = -58;
	uint64_t x203 = 180699877379543LLU;
	volatile int16_t x204 = 3762;
	int32_t t44 = 557;

    t44 = ((x201-(x202!=x203))==x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t45 = -180;

    t45 = ((x205-(x206!=x207))==x208);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x209 = 21U;
	static int16_t x210 = 2697;
	int16_t x211 = -7;
	int32_t x212 = -1;
	volatile int32_t t46 = -3;

    t46 = ((x209-(x210!=x211))==x212);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = INT16_MIN;
	static uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 430LLU;
	int8_t x216 = INT8_MAX;
	int32_t t47 = 671485944;

    t47 = ((x213-(x214!=x215))==x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x218 = -795LL;
	volatile int64_t x219 = INT64_MIN;
	int8_t x220 = -1;
	int32_t t48 = 30832;

    t48 = ((x217-(x218!=x219))==x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = 28U;
	static int32_t x222 = INT32_MIN;
	int64_t x223 = 3109593389LL;
	int8_t x224 = 43;
	int32_t t49 = -12;

    t49 = ((x221-(x222!=x223))==x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x225 = 9857U;
	static int32_t x228 = INT32_MIN;
	int32_t t50 = -310537;

    t50 = ((x225-(x226!=x227))==x228);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x229 = 86U;
	uint16_t x232 = 1U;
	int32_t t51 = 380644020;

    t51 = ((x229-(x230!=x231))==x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = 71030211LL;
	int8_t x234 = -30;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	static volatile int32_t t52 = 538450;

    t52 = ((x233-(x234!=x235))==x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -14421;
	int16_t x239 = INT16_MIN;

    t53 = ((x237-(x238!=x239))==x240);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = INT64_MAX;
	int32_t x242 = -345;
	uint64_t x243 = UINT64_MAX;
	static volatile uint8_t x244 = 0U;
	int32_t t54 = -1790;

    t54 = ((x241-(x242!=x243))==x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t55 = -3;

    t55 = ((x245-(x246!=x247))==x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x250 = 118U;
	int8_t x251 = 5;
	int32_t t56 = 339;

    t56 = ((x249-(x250!=x251))==x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x258 = -1082121941784LL;
	int64_t x259 = INT64_MIN;
	int64_t x260 = 2199523151LL;
	static volatile int32_t t57 = 11193615;

    t57 = ((x257-(x258!=x259))==x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x261 = 268631540501563LLU;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = UINT64_MAX;
	volatile int16_t x264 = 1700;
	volatile int32_t t58 = -180185;

    t58 = ((x261-(x262!=x263))==x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x277 = 100U;
	static int64_t x278 = -1LL;
	volatile int32_t x279 = -827775;

    t59 = ((x277-(x278!=x279))==x280);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x281 = 16U;
	int32_t x282 = -7640994;
	static uint64_t x283 = 206544880379316503LLU;

    t60 = ((x281-(x282!=x283))==x284);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x285 = 23659;
	int8_t x286 = 1;
	int32_t x288 = -137768;
	volatile int32_t t61 = -384606;

    t61 = ((x285-(x286!=x287))==x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x290 = 30637491LLU;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MAX;

    t62 = ((x289-(x290!=x291))==x292);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x294 = UINT8_MAX;
	static uint32_t x295 = 707U;
	static uint32_t x296 = UINT32_MAX;
	int32_t t63 = 23;

    t63 = ((x293-(x294!=x295))==x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x298 = 1;
	static uint8_t x300 = UINT8_MAX;
	int32_t t64 = 71441;

    t64 = ((x297-(x298!=x299))==x300);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x301 = INT32_MAX;
	int64_t x302 = -1LL;
	int8_t x303 = -1;
	int32_t t65 = -38681401;

    t65 = ((x301-(x302!=x303))==x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x305 = 1U;
	volatile uint16_t x306 = UINT16_MAX;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = UINT8_MAX;
	static int32_t t66 = -14;

    t66 = ((x305-(x306!=x307))==x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = -1;
	int64_t x318 = INT64_MIN;
	uint32_t x320 = 2484U;
	static volatile int32_t t67 = 0;

    t67 = ((x317-(x318!=x319))==x320);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x321 = -3;
	uint16_t x322 = 1U;
	int32_t t68 = 5;

    t68 = ((x321-(x322!=x323))==x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x326 = 1191296LLU;
	int32_t t69 = -250;

    t69 = ((x325-(x326!=x327))==x328);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x333 = 3907U;
	static int32_t x334 = 0;
	uint16_t x336 = UINT16_MAX;
	int32_t t70 = 15911;

    t70 = ((x333-(x334!=x335))==x336);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x337 = 4671U;
	static uint8_t x338 = 8U;
	int32_t x339 = -1;
	int32_t x340 = 997960;
	int32_t t71 = -42;

    t71 = ((x337-(x338!=x339))==x340);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x341 = 6U;
	volatile uint32_t x343 = 3U;

    t72 = ((x341-(x342!=x343))==x344);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x346 = UINT32_MAX;

    t73 = ((x345-(x346!=x347))==x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x351 = 13U;
	uint16_t x352 = 24762U;
	static volatile int32_t t74 = 174412563;

    t74 = ((x349-(x350!=x351))==x352);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x353 = 1;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	static uint32_t x356 = UINT32_MAX;

    t75 = ((x353-(x354!=x355))==x356);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = INT16_MAX;
	volatile int64_t x362 = -1LL;
	int16_t x363 = 3310;
	volatile int64_t x364 = INT64_MAX;
	int32_t t76 = -3118864;

    t76 = ((x361-(x362!=x363))==x364);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x365 = INT64_MAX;
	uint32_t x366 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t77 = 11;

    t77 = ((x365-(x366!=x367))==x368);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x369 = 1722300603486778552LLU;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MIN;
	uint16_t x372 = 6802U;
	int32_t t78 = 864333;

    t78 = ((x369-(x370!=x371))==x372);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x374 = INT32_MIN;
	int16_t x375 = -1;
	volatile int64_t x376 = 12926385779707481LL;
	static volatile int32_t t79 = 822348267;

    t79 = ((x373-(x374!=x375))==x376);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x377 = INT8_MIN;
	uint32_t x379 = 45152077U;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t80 = 20492;

    t80 = ((x377-(x378!=x379))==x380);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x385 = INT16_MAX;
	volatile int16_t x386 = INT16_MIN;
	uint64_t x387 = 20167823218664409LLU;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int32_t t81 = -553769853;

    t81 = ((x385-(x386!=x387))==x388);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x390 = INT32_MAX;
	int16_t x391 = 3740;
	int32_t x392 = 1;
	volatile int32_t t82 = -1592450;

    t82 = ((x389-(x390!=x391))==x392);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x393 = -8;
	static int8_t x395 = 0;
	int16_t x396 = INT16_MIN;

    t83 = ((x393-(x394!=x395))==x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 1LLU;
	uint8_t x403 = 1U;
	int16_t x404 = INT16_MIN;
	int32_t t84 = 315;

    t84 = ((x401-(x402!=x403))==x404);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x409 = 27895LLU;
	int8_t x410 = -1;
	int8_t x411 = -7;
	int64_t x412 = INT64_MIN;
	static int32_t t85 = -13047998;

    t85 = ((x409-(x410!=x411))==x412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x421 = INT16_MAX;
	uint64_t x422 = 523732190LLU;
	volatile int8_t x423 = 25;
	int64_t x424 = INT64_MAX;
	int32_t t86 = -881456;

    t86 = ((x421-(x422!=x423))==x424);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x425 = INT8_MAX;
	int64_t x427 = -1LL;
	volatile int32_t t87 = -37;

    t87 = ((x425-(x426!=x427))==x428);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x429 = 4249LLU;
	volatile int16_t x430 = 4;
	static int32_t x432 = INT32_MIN;
	volatile int32_t t88 = 59976;

    t88 = ((x429-(x430!=x431))==x432);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x434 = 5;
	int16_t x435 = -1;
	int8_t x436 = 1;
	int32_t t89 = -489;

    t89 = ((x433-(x434!=x435))==x436);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x437 = 1U;
	volatile int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 70U;
	int32_t t90 = -1618;

    t90 = ((x437-(x438!=x439))==x440);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x441 = -1;
	static uint8_t x442 = 20U;
	int8_t x444 = INT8_MAX;
	volatile int32_t t91 = 1040;

    t91 = ((x441-(x442!=x443))==x444);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x449 = 818529LL;
	uint8_t x450 = 46U;
	static int8_t x451 = INT8_MIN;
	static int64_t x452 = -1LL;

    t92 = ((x449-(x450!=x451))==x452);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x453 = -35;
	uint16_t x454 = UINT16_MAX;
	volatile int8_t x455 = INT8_MIN;
	int32_t t93 = 7404;

    t93 = ((x453-(x454!=x455))==x456);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x459 = 12008U;
	int16_t x460 = 0;
	int32_t t94 = -29;

    t94 = ((x457-(x458!=x459))==x460);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x461 = UINT64_MAX;
	uint64_t x462 = 61858397736LLU;
	int16_t x463 = -537;
	volatile int32_t x464 = INT32_MIN;
	int32_t t95 = -9;

    t95 = ((x461-(x462!=x463))==x464);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x465 = INT16_MIN;
	int64_t x466 = INT64_MAX;
	static uint8_t x467 = UINT8_MAX;
	int8_t x468 = INT8_MIN;
	static volatile int32_t t96 = -27457;

    t96 = ((x465-(x466!=x467))==x468);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x469 = 2195U;
	static int16_t x470 = 46;
	volatile int32_t x471 = -650590;
	int8_t x472 = -1;
	static volatile int32_t t97 = 38880;

    t97 = ((x469-(x470!=x471))==x472);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x473 = 841844630289LL;
	static int64_t x474 = 1733022421954LL;
	static int8_t x475 = 0;
	static int8_t x476 = -1;
	int32_t t98 = -2;

    t98 = ((x473-(x474!=x475))==x476);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x481 = 120U;
	static uint32_t x482 = 16649088U;
	volatile int64_t x483 = INT64_MIN;
	int8_t x484 = -1;

    t99 = ((x481-(x482!=x483))==x484);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x485 = -17;
	int32_t x487 = -1;
	volatile int8_t x488 = 0;
	static volatile int32_t t100 = -1;

    t100 = ((x485-(x486!=x487))==x488);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x489 = -1;
	int16_t x490 = INT16_MAX;
	volatile int64_t x491 = -808092063865360LL;
	static int16_t x492 = -1;
	int32_t t101 = -1381545;

    t101 = ((x489-(x490!=x491))==x492);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x493 = 36991543729889772LLU;
	uint32_t x494 = 4U;
	uint8_t x495 = 0U;
	int16_t x496 = INT16_MAX;

    t102 = ((x493-(x494!=x495))==x496);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x497 = INT8_MAX;
	uint64_t x498 = 999202228753242LLU;
	static uint64_t x499 = UINT64_MAX;
	static uint32_t x500 = 1096U;
	int32_t t103 = 6786;

    t103 = ((x497-(x498!=x499))==x500);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x501 = 2U;
	static uint8_t x502 = 48U;
	uint32_t x503 = UINT32_MAX;
	int32_t x504 = INT32_MIN;
	volatile int32_t t104 = -2038820;

    t104 = ((x501-(x502!=x503))==x504);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = 7;
	int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MAX;
	int16_t x508 = INT16_MIN;

    t105 = ((x505-(x506!=x507))==x508);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x514 = 50818U;
	uint16_t x516 = 9337U;

    t106 = ((x513-(x514!=x515))==x516);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x517 = 13740LLU;
	int32_t x520 = -1897;

    t107 = ((x517-(x518!=x519))==x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x521 = 8;
	static int32_t x522 = INT32_MAX;
	volatile int16_t x523 = INT16_MIN;
	static uint64_t x524 = 9177LLU;
	volatile int32_t t108 = 200;

    t108 = ((x521-(x522!=x523))==x524);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x526 = UINT8_MAX;
	static int16_t x527 = -1;
	int64_t x528 = -5LL;
	static int32_t t109 = -145339959;

    t109 = ((x525-(x526!=x527))==x528);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x529 = -12492102945561LL;
	volatile uint16_t x530 = 42U;
	int16_t x532 = -1;
	volatile int32_t t110 = 477;

    t110 = ((x529-(x530!=x531))==x532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x537 = INT8_MAX;
	uint16_t x539 = 0U;
	int8_t x540 = -42;
	int32_t t111 = 0;

    t111 = ((x537-(x538!=x539))==x540);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x541 = INT32_MAX;
	volatile int64_t x542 = -188617LL;
	int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	volatile int32_t t112 = 1;

    t112 = ((x541-(x542!=x543))==x544);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x545 = -1;
	static int32_t x548 = -1;
	int32_t t113 = -109127;

    t113 = ((x545-(x546!=x547))==x548);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x551 = -331824121201825326LL;
	volatile uint8_t x552 = UINT8_MAX;
	volatile int32_t t114 = 20;

    t114 = ((x549-(x550!=x551))==x552);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x553 = 50U;
	volatile int8_t x556 = 3;
	static volatile int32_t t115 = 5;

    t115 = ((x553-(x554!=x555))==x556);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x557 = -14LL;
	int64_t x559 = INT64_MIN;
	int64_t x560 = -3078139851LL;
	int32_t t116 = 1137989;

    t116 = ((x557-(x558!=x559))==x560);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x562 = -5170;
	int16_t x563 = INT16_MAX;
	int32_t x564 = INT32_MIN;
	static volatile int32_t t117 = -1866;

    t117 = ((x561-(x562!=x563))==x564);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x565 = 3216290579LLU;
	volatile int32_t x566 = INT32_MAX;
	uint64_t x567 = UINT64_MAX;
	uint64_t x568 = 46992614LLU;
	int32_t t118 = 126470154;

    t118 = ((x565-(x566!=x567))==x568);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x570 = 1;
	volatile int32_t x571 = 136908;
	int16_t x572 = INT16_MIN;
	int32_t t119 = -7;

    t119 = ((x569-(x570!=x571))==x572);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x577 = -1;
	uint8_t x579 = 1U;
	static int8_t x580 = INT8_MIN;
	volatile int32_t t120 = -1;

    t120 = ((x577-(x578!=x579))==x580);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x581 = 13U;
	volatile int64_t x582 = 15289950185003169LL;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MAX;
	volatile int32_t t121 = -467224854;

    t121 = ((x581-(x582!=x583))==x584);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x585 = -1;
	uint8_t x586 = UINT8_MAX;
	int32_t x588 = INT32_MIN;
	static int32_t t122 = 453424;

    t122 = ((x585-(x586!=x587))==x588);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x589 = 0;
	static int16_t x591 = INT16_MIN;
	volatile int64_t x592 = INT64_MIN;
	int32_t t123 = -1;

    t123 = ((x589-(x590!=x591))==x592);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x593 = -1;
	int8_t x594 = 36;
	int32_t x595 = INT32_MAX;
	volatile int16_t x596 = 43;
	int32_t t124 = -135;

    t124 = ((x593-(x594!=x595))==x596);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x597 = -1;
	int32_t x600 = -1;
	static int32_t t125 = 608515286;

    t125 = ((x597-(x598!=x599))==x600);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x605 = UINT32_MAX;
	static int32_t x606 = 62907;
	uint16_t x607 = 62U;
	int16_t x608 = 1569;
	volatile int32_t t126 = -118;

    t126 = ((x605-(x606!=x607))==x608);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x609 = INT64_MAX;
	static uint8_t x612 = 110U;

    t127 = ((x609-(x610!=x611))==x612);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x616 = -1;
	int32_t t128 = 241440;

    t128 = ((x613-(x614!=x615))==x616);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x617 = INT8_MIN;
	static int64_t x618 = INT64_MIN;
	uint8_t x619 = 6U;
	volatile int32_t t129 = -19959815;

    t129 = ((x617-(x618!=x619))==x620);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x621 = -1LL;
	static int64_t x622 = INT64_MAX;
	int32_t x623 = -1;
	int64_t x624 = -167607LL;
	int32_t t130 = 1384;

    t130 = ((x621-(x622!=x623))==x624);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x629 = 586;
	int64_t x630 = -3770LL;
	uint8_t x632 = 3U;
	volatile int32_t t131 = 245;

    t131 = ((x629-(x630!=x631))==x632);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x633 = 13463342U;
	int32_t x634 = -2973;
	uint64_t x635 = UINT64_MAX;
	static int64_t x636 = -1LL;
	int32_t t132 = 625;

    t132 = ((x633-(x634!=x635))==x636);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x637 = -454324831;
	static int16_t x638 = -1;
	int32_t x639 = INT32_MIN;
	int32_t x640 = INT32_MIN;
	volatile int32_t t133 = 816;

    t133 = ((x637-(x638!=x639))==x640);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x641 = INT8_MIN;
	uint32_t x642 = 1968429975U;
	static volatile int32_t x643 = INT32_MAX;
	int64_t x644 = 1LL;
	int32_t t134 = 6;

    t134 = ((x641-(x642!=x643))==x644);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x645 = 66501LL;
	volatile int8_t x646 = INT8_MAX;
	int64_t x647 = INT64_MIN;
	int16_t x648 = -1;
	int32_t t135 = 742750;

    t135 = ((x645-(x646!=x647))==x648);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x649 = 26U;
	uint16_t x650 = 165U;
	volatile uint64_t x651 = 3060LLU;
	int8_t x652 = -5;
	volatile int32_t t136 = -56;

    t136 = ((x649-(x650!=x651))==x652);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x654 = INT64_MAX;
	int64_t x655 = INT64_MIN;
	static int32_t t137 = -1873;

    t137 = ((x653-(x654!=x655))==x656);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	int8_t x658 = INT8_MIN;
	volatile int32_t x660 = 390546;

    t138 = ((x657-(x658!=x659))==x660);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x661 = 502528992LLU;
	int64_t x662 = INT64_MIN;
	static volatile uint64_t x663 = UINT64_MAX;
	int16_t x664 = 94;
	volatile int32_t t139 = 2754;

    t139 = ((x661-(x662!=x663))==x664);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = -1;
	volatile int32_t t140 = 364205736;

    t140 = ((x665-(x666!=x667))==x668);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x669 = INT8_MIN;
	volatile int8_t x671 = INT8_MIN;
	int16_t x672 = 0;
	volatile int32_t t141 = 110071;

    t141 = ((x669-(x670!=x671))==x672);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x673 = -1LL;
	static int8_t x675 = -1;
	static int64_t x676 = 104LL;
	static volatile int32_t t142 = -117418823;

    t142 = ((x673-(x674!=x675))==x676);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x678 = INT32_MAX;
	volatile int8_t x679 = INT8_MIN;
	static int32_t t143 = 35241627;

    t143 = ((x677-(x678!=x679))==x680);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x681 = 1U;
	int64_t x682 = INT64_MIN;
	int32_t x683 = INT32_MIN;
	int32_t x684 = INT32_MIN;
	volatile int32_t t144 = 12855360;

    t144 = ((x681-(x682!=x683))==x684);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x687 = -1;
	int32_t x688 = INT32_MIN;
	int32_t t145 = -2225;

    t145 = ((x685-(x686!=x687))==x688);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x689 = 7U;
	volatile uint32_t x691 = 40U;
	int32_t t146 = -26257238;

    t146 = ((x689-(x690!=x691))==x692);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x693 = -4;
	int64_t x694 = INT64_MIN;
	int32_t t147 = -23;

    t147 = ((x693-(x694!=x695))==x696);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x697 = INT8_MAX;
	int32_t x698 = -1;
	int16_t x699 = -1;
	uint16_t x700 = UINT16_MAX;
	int32_t t148 = 0;

    t148 = ((x697-(x698!=x699))==x700);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x705 = 3989U;
	int16_t x706 = -7;
	int8_t x707 = INT8_MAX;
	int32_t x708 = -1;
	int32_t t149 = 3;

    t149 = ((x705-(x706!=x707))==x708);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x709 = -1;
	uint64_t x712 = UINT64_MAX;
	int32_t t150 = 1956;

    t150 = ((x709-(x710!=x711))==x712);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x713 = INT16_MIN;
	uint16_t x714 = 23U;
	int64_t x715 = INT64_MIN;
	int8_t x716 = -6;
	int32_t t151 = -179;

    t151 = ((x713-(x714!=x715))==x716);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x719 = INT16_MAX;
	uint64_t x720 = 763819320LLU;
	int32_t t152 = 371108222;

    t152 = ((x717-(x718!=x719))==x720);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x721 = -4747932;
	int32_t x722 = INT32_MIN;
	static uint64_t x723 = 53629547865LLU;
	int64_t x724 = INT64_MIN;
	int32_t t153 = 1422;

    t153 = ((x721-(x722!=x723))==x724);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x725 = -1LL;
	int8_t x727 = INT8_MIN;
	static uint16_t x728 = 191U;
	int32_t t154 = 14935;

    t154 = ((x725-(x726!=x727))==x728);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x730 = INT8_MAX;
	static int8_t x731 = INT8_MAX;
	volatile uint64_t x732 = 694670554LLU;

    t155 = ((x729-(x730!=x731))==x732);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x737 = 1381861522U;
	static int8_t x738 = INT8_MAX;
	int8_t x739 = -1;
	uint8_t x740 = 13U;
	volatile int32_t t156 = 42;

    t156 = ((x737-(x738!=x739))==x740);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x741 = 45U;
	static uint16_t x744 = UINT16_MAX;
	static int32_t t157 = -824706;

    t157 = ((x741-(x742!=x743))==x744);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x745 = INT16_MIN;
	int8_t x746 = INT8_MIN;
	int64_t x747 = 849124LL;
	volatile int32_t x748 = -320769;

    t158 = ((x745-(x746!=x747))==x748);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x749 = 1625U;
	volatile uint64_t x751 = UINT64_MAX;
	int32_t x752 = INT32_MIN;

    t159 = ((x749-(x750!=x751))==x752);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x753 = 0U;
	int8_t x754 = INT8_MIN;
	int64_t x755 = 28770069060076LL;
	int32_t x756 = -1;
	int32_t t160 = -244;

    t160 = ((x753-(x754!=x755))==x756);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x757 = INT32_MAX;
	uint32_t x759 = 1U;

    t161 = ((x757-(x758!=x759))==x760);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x761 = 4;
	int16_t x763 = 0;
	volatile int64_t x764 = -200LL;

    t162 = ((x761-(x762!=x763))==x764);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x765 = 0U;
	uint8_t x766 = 18U;
	uint64_t x768 = 13353936770523LLU;
	int32_t t163 = -144648914;

    t163 = ((x765-(x766!=x767))==x768);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x769 = 1U;
	int32_t x770 = INT32_MIN;
	uint64_t x771 = 838LLU;
	static int64_t x772 = -6387LL;
	volatile int32_t t164 = -974176;

    t164 = ((x769-(x770!=x771))==x772);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x773 = INT8_MAX;
	volatile int16_t x774 = INT16_MIN;
	uint32_t x775 = UINT32_MAX;
	volatile int32_t t165 = -3482;

    t165 = ((x773-(x774!=x775))==x776);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x777 = -6;
	int32_t t166 = -8035;

    t166 = ((x777-(x778!=x779))==x780);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = -1;
	int16_t x787 = INT16_MIN;

    t167 = ((x785-(x786!=x787))==x788);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x789 = -1;
	int16_t x790 = INT16_MIN;
	volatile int8_t x792 = -2;
	volatile int32_t t168 = -112182;

    t168 = ((x789-(x790!=x791))==x792);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x793 = INT16_MAX;
	volatile int32_t x794 = -1;
	int32_t x795 = INT32_MIN;
	uint32_t x796 = UINT32_MAX;
	int32_t t169 = 88976;

    t169 = ((x793-(x794!=x795))==x796);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x797 = -1;
	uint16_t x798 = 7195U;
	int8_t x799 = INT8_MIN;
	uint64_t x800 = 2702LLU;
	static volatile int32_t t170 = -59;

    t170 = ((x797-(x798!=x799))==x800);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x801 = -23;
	volatile int32_t x802 = 1;
	volatile int8_t x803 = INT8_MIN;
	volatile int32_t t171 = 0;

    t171 = ((x801-(x802!=x803))==x804);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x805 = INT16_MIN;
	int64_t x806 = -1LL;
	int64_t x807 = INT64_MAX;
	int64_t x808 = -402390639228936LL;
	volatile int32_t t172 = -19317;

    t172 = ((x805-(x806!=x807))==x808);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x810 = INT16_MIN;
	int64_t x811 = INT64_MIN;
	int32_t x812 = INT32_MAX;
	volatile int32_t t173 = -5629478;

    t173 = ((x809-(x810!=x811))==x812);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x814 = INT16_MIN;
	int64_t x815 = -48029315391589LL;
	volatile int8_t x816 = INT8_MAX;

    t174 = ((x813-(x814!=x815))==x816);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x817 = UINT64_MAX;
	static int32_t x818 = -1;
	static int32_t x819 = -1;
	int8_t x820 = INT8_MIN;
	int32_t t175 = 1;

    t175 = ((x817-(x818!=x819))==x820);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x821 = UINT32_MAX;
	int16_t x822 = -3;
	static int8_t x823 = INT8_MAX;
	int64_t x824 = 27LL;
	static int32_t t176 = -449855056;

    t176 = ((x821-(x822!=x823))==x824);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x826 = INT8_MIN;
	int32_t t177 = 148346;

    t177 = ((x825-(x826!=x827))==x828);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x830 = -1;
	uint64_t x831 = 2076514779886925104LLU;

    t178 = ((x829-(x830!=x831))==x832);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x833 = INT64_MAX;
	int16_t x834 = INT16_MIN;
	static volatile int64_t x835 = -1LL;
	volatile int32_t x836 = -1;
	volatile int32_t t179 = -4;

    t179 = ((x833-(x834!=x835))==x836);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x837 = 5509248927209605LLU;
	volatile int8_t x839 = INT8_MIN;
	static uint16_t x840 = UINT16_MAX;
	static int32_t t180 = -201238815;

    t180 = ((x837-(x838!=x839))==x840);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x846 = -146;
	volatile uint64_t x847 = 206LLU;
	int32_t t181 = 174;

    t181 = ((x845-(x846!=x847))==x848);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x850 = INT64_MIN;
	int16_t x851 = -1;
	volatile int64_t x852 = -128361186790589312LL;

    t182 = ((x849-(x850!=x851))==x852);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x853 = -1624960191995883LL;
	int32_t x854 = -11190896;

    t183 = ((x853-(x854!=x855))==x856);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t x858 = 438328658070LL;
	int64_t x859 = -7521164415LL;
	int64_t x860 = 235094412LL;

    t184 = ((x857-(x858!=x859))==x860);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x865 = 8365621LLU;
	int64_t x866 = INT64_MIN;
	static int64_t x867 = INT64_MAX;

    t185 = ((x865-(x866!=x867))==x868);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x869 = UINT8_MAX;
	int64_t x870 = 794823LL;
	static int16_t x871 = INT16_MIN;
	uint32_t x872 = UINT32_MAX;

    t186 = ((x869-(x870!=x871))==x872);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x873 = -1;
	int64_t x874 = INT64_MAX;
	int16_t x875 = 1;
	int8_t x876 = INT8_MAX;
	volatile int32_t t187 = 18784;

    t187 = ((x873-(x874!=x875))==x876);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x878 = 3277LL;
	uint32_t x879 = UINT32_MAX;
	int32_t t188 = 40;

    t188 = ((x877-(x878!=x879))==x880);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x882 = -6LL;
	volatile int16_t x883 = 0;
	static uint16_t x884 = 2U;
	int32_t t189 = 22;

    t189 = ((x881-(x882!=x883))==x884);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x885 = 23;
	int16_t x886 = INT16_MIN;
	static int16_t x887 = INT16_MAX;
	int8_t x888 = INT8_MIN;

    t190 = ((x885-(x886!=x887))==x888);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x889 = INT16_MIN;
	volatile int16_t x890 = INT16_MAX;
	static int32_t x891 = INT32_MIN;
	uint64_t x892 = 702878136LLU;

    t191 = ((x889-(x890!=x891))==x892);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x893 = INT8_MIN;
	int64_t x894 = INT64_MAX;
	static uint16_t x896 = UINT16_MAX;
	static volatile int32_t t192 = -340756;

    t192 = ((x893-(x894!=x895))==x896);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x897 = 106U;
	int8_t x898 = -1;
	int16_t x900 = -1;

    t193 = ((x897-(x898!=x899))==x900);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x901 = 636202107223LLU;
	int16_t x902 = INT16_MIN;
	int16_t x903 = -5516;
	int32_t x904 = 1030005;
	int32_t t194 = -296966;

    t194 = ((x901-(x902!=x903))==x904);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x905 = 7527886019LL;
	int32_t x906 = -1;
	int8_t x907 = INT8_MIN;
	int8_t x908 = INT8_MIN;
	volatile int32_t t195 = 1;

    t195 = ((x905-(x906!=x907))==x908);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x909 = INT16_MAX;
	static int32_t x910 = INT32_MAX;
	static int8_t x911 = -1;
	int8_t x912 = 9;

    t196 = ((x909-(x910!=x911))==x912);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x913 = 6;
	int32_t x914 = INT32_MIN;
	int32_t x916 = -1;
	int32_t t197 = 176676;

    t197 = ((x913-(x914!=x915))==x916);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x917 = INT32_MAX;
	uint32_t x918 = 130029220U;
	volatile int32_t x919 = INT32_MIN;
	static int64_t x920 = INT64_MIN;

    t198 = ((x917-(x918!=x919))==x920);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x925 = INT8_MIN;
	int64_t x926 = INT64_MAX;
	volatile int16_t x927 = INT16_MIN;
	int64_t x928 = 4230574702541LL;
	volatile int32_t t199 = -242800443;

    t199 = ((x925-(x926!=x927))==x928);

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

