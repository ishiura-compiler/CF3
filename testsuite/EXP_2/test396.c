
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

uint32_t x10 = UINT32_MAX;
uint8_t x13 = UINT8_MAX;
volatile uint64_t t6 = 3631LLU;
static uint16_t x38 = 243U;
int16_t x50 = -1;
static int32_t t8 = 10024;
int8_t x56 = INT8_MIN;
static volatile int8_t x58 = -1;
uint32_t t10 = 2U;
int64_t t11 = -45977695LL;
uint8_t x89 = 102U;
int8_t x92 = INT8_MIN;
int16_t x93 = INT16_MIN;
int64_t x114 = -1LL;
int64_t x125 = -64676943LL;
volatile int16_t x139 = 1;
int16_t x142 = INT16_MIN;
static uint32_t x143 = UINT32_MAX;
int8_t x157 = 53;
uint16_t x168 = UINT16_MAX;
uint64_t x184 = UINT64_MAX;
uint64_t x192 = 640787483292LLU;
int8_t x208 = INT8_MIN;
int64_t x209 = -1LL;
volatile uint64_t t33 = 4859LLU;
int16_t x215 = 0;
uint16_t x228 = UINT16_MAX;
int16_t x238 = INT16_MAX;
int8_t x239 = -1;
int32_t t37 = 26617359;
uint16_t x243 = 481U;
volatile uint32_t t38 = 225295375U;
int16_t x260 = INT16_MIN;
static int8_t x269 = INT8_MIN;
uint32_t x282 = 8312U;
uint32_t t42 = 138337850U;
int16_t x290 = INT16_MIN;
int64_t t44 = -2969719LL;
uint8_t x305 = UINT8_MAX;
int8_t x307 = INT8_MAX;
volatile int8_t x319 = INT8_MIN;
uint16_t x331 = 4957U;
int32_t x341 = INT32_MIN;
uint64_t x342 = UINT64_MAX;
volatile int64_t t57 = -48618LL;
int16_t x379 = -1475;
int32_t x395 = INT32_MIN;
volatile int64_t x397 = INT64_MAX;
static volatile int8_t x407 = INT8_MIN;
volatile uint16_t x410 = 2091U;
uint16_t x411 = 237U;
static uint8_t x433 = 1U;
int8_t x439 = -20;
int32_t t70 = -73;
uint64_t x448 = 48197LLU;
volatile uint64_t t72 = 444127728893601961LLU;
int8_t x450 = INT8_MIN;
uint16_t x453 = UINT16_MAX;
uint32_t x455 = 185U;
static int16_t x459 = -5182;
int64_t x481 = -479LL;
static int16_t x485 = INT16_MIN;
uint8_t x490 = 95U;
uint16_t x493 = UINT16_MAX;
uint16_t x497 = UINT16_MAX;
static int8_t x500 = INT8_MAX;
static volatile int8_t x501 = INT8_MAX;
volatile uint64_t t82 = 16365LLU;
static uint64_t t83 = 2059581744446LLU;
static uint32_t x511 = UINT32_MAX;
volatile uint32_t t87 = 984087530U;
static int64_t x540 = -1LL;
volatile int64_t t89 = -140005963274998LL;
static int32_t x541 = 32;
int8_t x542 = -1;
static uint32_t x543 = 63155148U;
int32_t x550 = 11488;
static uint64_t t92 = 2LLU;
int64_t x588 = 4464527508704233LL;
static volatile uint16_t x591 = 348U;
volatile int32_t t98 = -288386408;
int64_t x601 = INT64_MIN;
int8_t x606 = -1;
uint64_t x613 = UINT64_MAX;
uint64_t t102 = 1630738LLU;
volatile uint16_t x618 = UINT16_MAX;
volatile int16_t x619 = 2;
int32_t x621 = INT32_MIN;
volatile int32_t t104 = 2215814;
int32_t x632 = 140;
uint32_t x642 = UINT32_MAX;
int16_t x645 = -1;
volatile uint32_t x648 = UINT32_MAX;
volatile uint64_t x651 = UINT64_MAX;
uint64_t x655 = 139539501LLU;
int32_t x656 = -5036;
int16_t x662 = INT16_MIN;
volatile uint64_t t114 = 52279003140LLU;
static volatile int16_t x689 = -1;
volatile int16_t x690 = -1026;
int16_t x693 = INT16_MIN;
static int16_t x697 = 472;
int8_t x699 = INT8_MIN;
volatile uint64_t t117 = 85477576LLU;
volatile int64_t x709 = -72LL;
int64_t x711 = 475LL;
static int16_t x718 = -1;
uint16_t x726 = UINT16_MAX;
uint8_t x727 = UINT8_MAX;
int64_t x728 = -1LL;
volatile uint64_t t122 = 87742783397LLU;
uint32_t x729 = UINT32_MAX;
volatile int32_t t124 = 3;
int32_t x739 = -157537917;
static int16_t x741 = INT16_MIN;
static uint64_t x755 = 972550746983LLU;
volatile int32_t x757 = 314433773;
static volatile uint32_t x759 = UINT32_MAX;
uint32_t x760 = 3U;
int8_t x768 = INT8_MAX;
uint32_t x769 = UINT32_MAX;
volatile int8_t x776 = INT8_MIN;
int32_t x793 = -20181;
int8_t x808 = 1;
int32_t x813 = INT32_MIN;
static volatile int16_t x815 = INT16_MIN;
int32_t x821 = INT32_MIN;
volatile int32_t x826 = -24391;
uint32_t x836 = UINT32_MAX;
int16_t x847 = INT16_MAX;
volatile uint16_t x854 = 24U;
static volatile int16_t x855 = INT16_MAX;
uint16_t x857 = 3865U;
int32_t x858 = -1;
volatile int32_t x862 = INT32_MAX;
static uint64_t x863 = 122593LLU;
uint8_t x865 = 104U;
uint64_t x879 = UINT64_MAX;
volatile uint64_t t150 = 5327084270571069LLU;
static int8_t x893 = INT8_MIN;
uint8_t x894 = 44U;
volatile int32_t t152 = -3567547;
int32_t x901 = -1;
uint16_t x902 = 2482U;
static int32_t t154 = 11267893;
static int64_t x906 = -1LL;
static uint8_t x909 = 17U;
int8_t x910 = INT8_MIN;
int16_t x914 = -1;
volatile int16_t x915 = INT16_MIN;
int8_t x928 = -1;
int64_t t159 = -6029944849LL;
int8_t x932 = INT8_MIN;
int64_t t162 = -249485940392234LL;
static uint8_t x959 = 0U;
uint32_t x966 = UINT32_MAX;
uint64_t x967 = UINT64_MAX;
volatile int8_t x972 = INT8_MIN;
uint8_t x977 = 17U;
int16_t x979 = 0;
static int32_t x980 = 984;
int64_t x989 = 2196736LL;
volatile int16_t x998 = 1;
static int8_t x999 = INT8_MIN;
int32_t t171 = 37668;
uint64_t x1017 = UINT64_MAX;
int8_t x1022 = INT8_MIN;
volatile int16_t x1029 = -1;
static volatile uint64_t t174 = 62284111540LLU;
volatile int16_t x1047 = 2;
static int8_t x1061 = 1;
static int8_t x1062 = -38;
static volatile uint8_t x1085 = 116U;
int32_t x1092 = INT32_MAX;
volatile int32_t t186 = -29539;
int16_t x1099 = 119;
volatile int16_t x1107 = INT16_MAX;
static uint64_t x1115 = 4960474LLU;
volatile uint64_t t191 = 98494196583LLU;
int64_t x1127 = INT64_MAX;
volatile int64_t t192 = -496904701807253LL;
static volatile uint64_t t193 = 99368992LLU;
int16_t x1141 = -3816;
int8_t x1148 = -1;
static int64_t x1153 = -4068829LL;
static uint64_t x1154 = UINT64_MAX;
int16_t x1156 = 541;
volatile uint64_t t198 = 82782345686LLU;
int8_t x1159 = INT8_MAX;


void f0(void) {
    	int8_t x1 = 30;
	int16_t x2 = 245;
	uint32_t x3 = UINT32_MAX;
	static uint64_t x4 = 8976936305693LLU;
	volatile uint64_t t0 = 507703428943LLU;

    t0 = ((x1+(x2*x3))/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -5744168679LL;
	uint8_t x6 = 11U;
	static uint8_t x7 = UINT8_MAX;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 1271445060482LLU;

    t1 = ((x5+(x6*x7))/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	uint8_t x11 = UINT8_MAX;
	uint64_t x12 = 12LLU;
	volatile uint64_t t2 = 28122588423LLU;

    t2 = ((x9+(x10*x11))/x12);

    if (t2 != 2709LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = -306LL;
	int64_t x15 = -95479LL;
	uint16_t x16 = 336U;
	static volatile int64_t t3 = 3LL;

    t3 = ((x13+(x14*x15))/x16);

    if (t3 != 86954LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = UINT16_MAX;
	static int32_t x22 = -52;
	int32_t x23 = -1;
	int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -24;

    t4 = ((x21+(x22*x23))/x24);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	static uint32_t x27 = 2619777U;
	int8_t x28 = -1;
	static int64_t t5 = -2164341170748629714LL;

    t5 = ((x25+(x26*x27))/x28);

    if (t5 != 2619905LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = 60;
	uint64_t x30 = 7747380LLU;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = -1;

    t6 = ((x29+(x30*x31))/x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	uint16_t x39 = 5881U;
	int16_t x40 = INT16_MIN;
	volatile uint32_t t7 = 86U;

    t7 = ((x37+(x38*x39))/x40);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = 358519209;
	volatile int16_t x51 = 3;
	int32_t x52 = 136683;

    t8 = ((x49+(x50*x51))/x52);

    if (t8 != 2622) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = -1;
	static volatile uint16_t x54 = 3919U;
	static uint16_t x55 = UINT16_MAX;
	int32_t t9 = 163205;

    t9 = ((x53+(x54*x55))/x56);

    if (t9 != -2006497) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = UINT32_MAX;
	int32_t x59 = -5058123;
	volatile int16_t x60 = INT16_MIN;

    t10 = ((x57+(x58*x59))/x60);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = 249896693;
	int8_t x70 = 3;
	static uint16_t x71 = 3U;
	int64_t x72 = -300605182996LL;

    t11 = ((x69+(x70*x71))/x72);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x73 = INT8_MAX;
	static volatile uint64_t x74 = UINT64_MAX;
	int8_t x75 = -1;
	int32_t x76 = -1;
	uint64_t t12 = 27215112LLU;

    t12 = ((x73+(x74*x75))/x76);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x81 = 4267208249525122LLU;
	static volatile int64_t x82 = -1LL;
	static volatile int64_t x83 = -1LL;
	volatile uint32_t x84 = 54979380U;
	volatile uint64_t t13 = 16821966050687LLU;

    t13 = ((x81+(x82*x83))/x84);

    if (t13 != 77614702LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x90 = -1LL;
	int64_t x91 = INT64_MAX;
	int64_t t14 = -107322467LL;

    t14 = ((x89+(x90*x91))/x92);

    if (t14 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x94 = 2093960925LLU;
	uint16_t x95 = 130U;
	static uint16_t x96 = 11049U;
	uint64_t t15 = 2671615511LLU;

    t15 = ((x93+(x94*x95))/x96);

    if (t15 != 24637061LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x105 = INT32_MIN;
	int16_t x106 = 24;
	volatile uint32_t x107 = UINT32_MAX;
	volatile uint32_t x108 = 5441U;
	volatile uint32_t t16 = 38U;

    t16 = ((x105+(x106*x107))/x108);

    if (t16 != 394685U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x113 = 1U;
	int32_t x115 = INT32_MIN;
	volatile int16_t x116 = 2;
	volatile int64_t t17 = 0LL;

    t17 = ((x113+(x114*x115))/x116);

    if (t17 != 1073741824LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x121 = 40843941621LLU;
	int64_t x122 = 14731798512070LL;
	uint64_t x123 = 15LLU;
	volatile int8_t x124 = -1;
	volatile uint64_t t18 = 61LLU;

    t18 = ((x121+(x122*x123))/x124);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x126 = 116U;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t19 = 23622331LL;

    t19 = ((x125+(x126*x127))/x128);

    if (t19 != 445897LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MAX;
	static uint32_t x140 = 962148U;
	int64_t t20 = -3712932LL;

    t20 = ((x137+(x138*x139))/x140);

    if (t20 != 9586230013165LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x141 = 191782;
	volatile int32_t x144 = -1;
	static volatile uint32_t t21 = 69021936U;

    t21 = ((x141+(x142*x143))/x144);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x149 = 0;
	volatile uint8_t x150 = 0U;
	uint64_t x151 = 15770LLU;
	static int32_t x152 = INT32_MIN;
	static volatile uint64_t t22 = 3578179611583LLU;

    t22 = ((x149+(x150*x151))/x152);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x153 = -1;
	int32_t x154 = 220118;
	volatile int64_t x155 = 3563192LL;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t23 = -940LL;

    t23 = ((x153+(x154*x155))/x156);

    if (t23 != 11967997LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x158 = 1;
	int16_t x159 = -45;
	static int8_t x160 = INT8_MIN;
	int32_t t24 = -7008;

    t24 = ((x157+(x158*x159))/x160);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x161 = UINT8_MAX;
	int64_t x162 = -800301LL;
	int8_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t25 = 28050355514LLU;

    t25 = ((x161+(x162*x163))/x164);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MAX;
	int32_t x167 = -1;
	volatile int64_t t26 = -6851884271LL;

    t26 = ((x165+(x166*x167))/x168);

    if (t26 != -140739635806207LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x173 = 58315U;
	volatile uint16_t x174 = 126U;
	uint32_t x175 = UINT32_MAX;
	volatile int8_t x176 = INT8_MIN;
	volatile uint32_t t27 = 0U;

    t27 = ((x173+(x174*x175))/x176);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x181 = -11607894302474LL;
	static uint64_t x182 = 316223LLU;
	uint8_t x183 = UINT8_MAX;
	uint64_t t28 = 776550933LLU;

    t28 = ((x181+(x182*x183))/x184);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x189 = -1LL;
	int16_t x190 = -1;
	volatile int32_t x191 = -15669529;
	volatile uint64_t t29 = 44468268222227803LLU;

    t29 = ((x189+(x190*x191))/x192);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x193 = -1LL;
	uint16_t x194 = 248U;
	volatile int16_t x195 = INT16_MAX;
	int8_t x196 = INT8_MIN;
	int64_t t30 = -633914092LL;

    t30 = ((x193+(x194*x195))/x196);

    if (t30 != -63486LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x197 = INT8_MAX;
	int16_t x198 = -1;
	int64_t x199 = -1LL;
	static uint16_t x200 = 579U;
	int64_t t31 = 32038LL;

    t31 = ((x197+(x198*x199))/x200);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x205 = INT16_MIN;
	static uint64_t x206 = UINT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint64_t t32 = 17987LLU;

    t32 = ((x205+(x206*x207))/x208);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x210 = -1LL;
	uint64_t x211 = 2795639711480069LLU;
	volatile int16_t x212 = 1;

    t33 = ((x209+(x210*x211))/x212);

    if (t33 != 18443948433998071546LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x213 = INT16_MAX;
	int8_t x214 = INT8_MIN;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t34 = -260574225437078LL;

    t34 = ((x213+(x214*x215))/x216);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x217 = UINT16_MAX;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = 4140876807882713LL;
	uint32_t x220 = UINT32_MAX;
	static volatile uint64_t t35 = 1990215LLU;

    t35 = ((x217+(x218*x219))/x220);

    if (t35 != 4294003173LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x225 = 9U;
	volatile uint64_t x226 = UINT64_MAX;
	static int32_t x227 = -1;
	uint64_t t36 = 4LLU;

    t36 = ((x225+(x226*x227))/x228);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x237 = 12;
	int8_t x240 = INT8_MAX;

    t37 = ((x237+(x238*x239))/x240);

    if (t37 != -257) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x241 = -1;
	volatile uint32_t x242 = 0U;
	volatile int16_t x244 = -4463;

    t38 = ((x241+(x242*x243))/x244);

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x257 = INT8_MAX;
	static volatile int32_t x258 = INT32_MAX;
	static int16_t x259 = -1;
	static volatile int32_t t39 = -487108;

    t39 = ((x257+(x258*x259))/x260);

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x270 = 402U;
	volatile uint16_t x271 = 0U;
	int16_t x272 = -1;
	int32_t t40 = -280319;

    t40 = ((x269+(x270*x271))/x272);

    if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x273 = 1;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = -50;
	static int32_t x276 = -2;
	int32_t t41 = 28;

    t41 = ((x273+(x274*x275))/x276);

    if (t41 != 6374) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	volatile int8_t x284 = -1;

    t42 = ((x281+(x282*x283))/x284);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = INT8_MIN;
	uint64_t x287 = 15059341LLU;
	static volatile int8_t x288 = -1;
	volatile uint64_t t43 = 8289LLU;

    t43 = ((x285+(x286*x287))/x288);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x289 = -1LL;
	volatile int8_t x291 = INT8_MIN;
	static uint32_t x292 = UINT32_MAX;

    t44 = ((x289+(x290*x291))/x292);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x293 = 183325898286LLU;
	static int16_t x294 = INT16_MAX;
	int16_t x295 = -16267;
	int8_t x296 = -14;
	uint64_t t45 = 2009LLU;

    t45 = ((x293+(x294*x295))/x296);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x297 = -205;
	int32_t x298 = -1;
	uint16_t x299 = 0U;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t46 = 6641;

    t46 = ((x297+(x298*x299))/x300);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x301 = 521039LLU;
	uint64_t x302 = 4256909LLU;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 504966U;
	uint64_t t47 = 6269560374671713718LLU;

    t47 = ((x301+(x302*x303))/x304);

    if (t47 != 36530665300673LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x306 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t48 = 1;

    t48 = ((x305+(x306*x307))/x308);

    if (t48 != -62) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x313 = 6548U;
	int32_t x314 = -979;
	int8_t x315 = 3;
	int64_t x316 = INT64_MIN;
	static int64_t t49 = -173537LL;

    t49 = ((x313+(x314*x315))/x316);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x317 = 0;
	int8_t x318 = INT8_MIN;
	int8_t x320 = -1;
	volatile int32_t t50 = -15;

    t50 = ((x317+(x318*x319))/x320);

    if (t50 != -16384) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x329 = 1;
	int8_t x330 = INT8_MAX;
	uint32_t x332 = 517047449U;
	static volatile uint32_t t51 = 2068421243U;

    t51 = ((x329+(x330*x331))/x332);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x337 = 3;
	static int16_t x338 = INT16_MIN;
	uint16_t x339 = UINT16_MAX;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t52 = -5100;

    t52 = ((x337+(x338*x339))/x340);

    if (t52 != -8421375) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x343 = UINT32_MAX;
	static int16_t x344 = INT16_MIN;
	uint64_t t53 = 32133066179LLU;

    t53 = ((x341+(x342*x343))/x344);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x349 = -469;
	uint64_t x350 = 7410LLU;
	uint64_t x351 = 31509LLU;
	volatile int64_t x352 = INT64_MIN;
	static volatile uint64_t t54 = 408478282847LLU;

    t54 = ((x349+(x350*x351))/x352);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x361 = -271LL;
	int16_t x362 = 234;
	int64_t x363 = 8863136LL;
	uint8_t x364 = 37U;
	int64_t t55 = -28604802589983559LL;

    t55 = ((x361+(x362*x363))/x364);

    if (t55 != 56053339LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x365 = -63;
	volatile uint32_t x366 = UINT32_MAX;
	static int8_t x367 = INT8_MIN;
	static volatile int64_t x368 = INT64_MAX;
	volatile int64_t t56 = 129515299120580LL;

    t56 = ((x365+(x366*x367))/x368);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x373 = INT32_MAX;
	static int64_t x374 = -9752LL;
	int32_t x375 = 8702005;
	volatile int16_t x376 = 1;

    t57 = ((x373+(x374*x375))/x376);

    if (t57 != -82714469113LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x377 = INT16_MIN;
	uint16_t x378 = 1U;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t58 = -2;

    t58 = ((x377+(x378*x379))/x380);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x381 = 74444491U;
	static uint64_t x382 = 6972543777171LLU;
	uint16_t x383 = 112U;
	int16_t x384 = -1;
	volatile uint64_t t59 = 14059279LLU;

    t59 = ((x381+(x382*x383))/x384);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x385 = -1;
	volatile int32_t x386 = -1;
	int8_t x387 = -1;
	uint8_t x388 = 2U;
	volatile int32_t t60 = 154411294;

    t60 = ((x385+(x386*x387))/x388);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x389 = INT64_MAX;
	uint8_t x390 = 25U;
	uint64_t x391 = 18448911025LLU;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t61 = 7LLU;

    t61 = ((x389+(x390*x391))/x392);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x393 = -1;
	volatile int32_t x394 = 0;
	static int16_t x396 = -5;
	int32_t t62 = -7613;

    t62 = ((x393+(x394*x395))/x396);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 3359LLU;
	static uint16_t x400 = 59U;
	volatile uint64_t t63 = 314490284534LLU;

    t63 = ((x397+(x398*x399))/x400);

    if (t63 != 156328339611439116LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x405 = -12;
	int16_t x406 = -1;
	int8_t x408 = INT8_MAX;
	int32_t t64 = 40682556;

    t64 = ((x405+(x406*x407))/x408);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x409 = -383830235LL;
	static int64_t x412 = -1LL;
	static int64_t t65 = -1253734430661024LL;

    t65 = ((x409+(x410*x411))/x412);

    if (t65 != 383334668LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x417 = INT16_MIN;
	volatile int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = 21U;
	int32_t t66 = 2779;

    t66 = ((x417+(x418*x419))/x420);

    if (t66 != -780) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x421 = INT32_MAX;
	static int16_t x422 = INT16_MIN;
	uint64_t x423 = 20LLU;
	int64_t x424 = -1LL;
	uint64_t t67 = 8995099LLU;

    t67 = ((x421+(x422*x423))/x424);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x429 = INT64_MIN;
	uint8_t x430 = 1U;
	volatile int32_t x431 = INT32_MAX;
	int16_t x432 = -1;
	static volatile int64_t t68 = 18844271LL;

    t68 = ((x429+(x430*x431))/x432);

    if (t68 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x434 = INT16_MAX;
	volatile int16_t x435 = 1960;
	static int8_t x436 = INT8_MIN;
	int32_t t69 = -59193839;

    t69 = ((x433+(x434*x435))/x436);

    if (t69 != -501744) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x437 = INT16_MIN;
	uint16_t x438 = 18U;
	static int16_t x440 = INT16_MIN;

    t70 = ((x437+(x438*x439))/x440);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x441 = INT32_MAX;
	int16_t x442 = INT16_MAX;
	uint64_t x443 = 26LLU;
	int32_t x444 = -3963765;
	static volatile uint64_t t71 = 52130LLU;

    t71 = ((x441+(x442*x443))/x444);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x445 = INT16_MIN;
	uint32_t x446 = 4703U;
	uint8_t x447 = 0U;

    t72 = ((x445+(x446*x447))/x448);

    if (t72 != 89112LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x449 = -1;
	static volatile uint32_t x451 = 1413U;
	volatile uint16_t x452 = 6U;
	uint32_t t73 = 7U;

    t73 = ((x449+(x450*x451))/x452);

    if (t73 != 715797738U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x454 = -3943720;
	uint8_t x456 = 2U;
	volatile uint32_t t74 = 217958U;

    t74 = ((x453+(x454*x455))/x456);

    if (t74 != 1782722315U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x457 = INT16_MAX;
	static int64_t x458 = -1LL;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t75 = 365021827362961799LLU;

    t75 = ((x457+(x458*x459))/x460);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x465 = 46U;
	uint64_t x466 = 48425015354LLU;
	int64_t x467 = -1LL;
	int32_t x468 = INT32_MIN;
	static uint64_t t76 = 103401LLU;

    t76 = ((x465+(x466*x467))/x468);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x482 = 6934183;
	static uint8_t x483 = 19U;
	int16_t x484 = -1;
	volatile int64_t t77 = 2973579718LL;

    t77 = ((x481+(x482*x483))/x484);

    if (t77 != -131748998LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x486 = 652479213488LLU;
	uint8_t x487 = 23U;
	static uint8_t x488 = 96U;
	uint64_t t78 = 1224635951532606LLU;

    t78 = ((x485+(x486*x487))/x488);

    if (t78 != 156323144556LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x489 = INT32_MAX;
	static int8_t x491 = -56;
	volatile uint32_t x492 = 31807U;
	volatile uint32_t t79 = 2008U;

    t79 = ((x489+(x490*x491))/x492);

    if (t79 != 67515U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x494 = INT16_MIN;
	static int16_t x495 = -1;
	int32_t x496 = -1;
	volatile int32_t t80 = -2045522;

    t80 = ((x493+(x494*x495))/x496);

    if (t80 != -98303) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x498 = UINT8_MAX;
	volatile int64_t x499 = -1LL;
	int64_t t81 = 19413936536LL;

    t81 = ((x497+(x498*x499))/x500);

    if (t81 != 514LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x502 = UINT64_MAX;
	int32_t x503 = -1;
	uint32_t x504 = UINT32_MAX;

    t82 = ((x501+(x502*x503))/x504);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x505 = UINT16_MAX;
	int64_t x506 = 5239193LL;
	int8_t x507 = INT8_MIN;
	uint64_t x508 = UINT64_MAX;

    t83 = ((x505+(x506*x507))/x508);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x509 = -1LL;
	uint32_t x510 = 911281U;
	int16_t x512 = INT16_MIN;
	int64_t t84 = 824559LL;

    t84 = ((x509+(x510*x511))/x512);

    if (t84 != -131044LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x518 = INT8_MAX;
	int16_t x519 = 126;
	int8_t x520 = INT8_MIN;
	static int64_t t85 = 699716355668687257LL;

    t85 = ((x517+(x518*x519))/x520);

    if (t85 != 72057594037927810LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x525 = INT8_MAX;
	uint16_t x526 = UINT16_MAX;
	int8_t x527 = INT8_MAX;
	static int64_t x528 = -2563056361841LL;
	int64_t t86 = 6543182LL;

    t86 = ((x525+(x526*x527))/x528);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x529 = UINT32_MAX;
	int16_t x530 = -60;
	uint32_t x531 = 22U;
	uint16_t x532 = 3053U;

    t87 = ((x529+(x530*x531))/x532);

    if (t87 != 1406801U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x533 = 16U;
	int8_t x534 = -1;
	volatile int32_t x535 = -754;
	int16_t x536 = INT16_MAX;
	volatile int32_t t88 = 93202411;

    t88 = ((x533+(x534*x535))/x536);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x537 = 1U;
	static int16_t x538 = INT16_MIN;
	int16_t x539 = -3912;

    t89 = ((x537+(x538*x539))/x540);

    if (t89 != -128188417LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x544 = INT16_MIN;
	uint32_t t90 = 11U;

    t90 = ((x541+(x542*x543))/x544);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x549 = 89U;
	int32_t x551 = -1;
	uint8_t x552 = 115U;
	static int32_t t91 = -30;

    t91 = ((x549+(x550*x551))/x552);

    if (t91 != -99) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x565 = INT16_MAX;
	uint64_t x566 = 11LLU;
	volatile int8_t x567 = -1;
	uint16_t x568 = 526U;

    t92 = ((x565+(x566*x567))/x568);

    if (t92 != 62LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x573 = 194700766623552473LL;
	uint32_t x574 = 12979U;
	uint64_t x575 = 1847LLU;
	static uint32_t x576 = 268093302U;
	static volatile uint64_t t93 = 55306951718363193LLU;

    t93 = ((x573+(x574*x575))/x576);

    if (t93 != 726242562LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x577 = 178117629362185LLU;
	int8_t x578 = INT8_MIN;
	static int8_t x579 = -1;
	static int32_t x580 = -359161015;
	uint64_t t94 = 498107159LLU;

    t94 = ((x577+(x578*x579))/x580);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x581 = 3U;
	static volatile int8_t x582 = 31;
	uint32_t x583 = UINT32_MAX;
	volatile uint64_t x584 = UINT64_MAX;
	uint64_t t95 = 302678LLU;

    t95 = ((x581+(x582*x583))/x584);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x585 = 51U;
	static int64_t x586 = -1LL;
	int16_t x587 = INT16_MAX;
	int64_t t96 = -109136977LL;

    t96 = ((x585+(x586*x587))/x588);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x589 = -1LL;
	int64_t x590 = 19625355210990266LL;
	volatile uint64_t x592 = UINT64_MAX;
	static volatile uint64_t t97 = 25LLU;

    t97 = ((x589+(x590*x591))/x592);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x598 = -1;
	int8_t x599 = 0;
	int32_t x600 = 1;

    t98 = ((x597+(x598*x599))/x600);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x602 = 0U;
	uint64_t x603 = 5112631118192LLU;
	uint8_t x604 = 81U;
	volatile uint64_t t99 = 56200LLU;

    t99 = ((x601+(x602*x603))/x604);

    if (t99 != 113868790578454022LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x607 = -1;
	int32_t x608 = INT32_MAX;
	volatile int32_t t100 = 146;

    t100 = ((x605+(x606*x607))/x608);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x609 = -3;
	uint32_t x610 = 0U;
	int16_t x611 = INT16_MAX;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t101 = 116331526454LLU;

    t101 = ((x609+(x610*x611))/x612);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x614 = INT64_MIN;
	static uint64_t x615 = UINT64_MAX;
	int8_t x616 = -1;

    t102 = ((x613+(x614*x615))/x616);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x617 = 104U;
	static volatile uint8_t x620 = 54U;
	int32_t t103 = -3236646;

    t103 = ((x617+(x618*x619))/x620);

    if (t103 != 2429) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x622 = INT8_MAX;
	static int8_t x623 = INT8_MAX;
	int16_t x624 = INT16_MAX;

    t104 = ((x621+(x622*x623))/x624);

    if (t104 != -65537) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	uint16_t x626 = 0U;
	static int16_t x627 = INT16_MAX;
	int32_t x628 = 1;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x625+(x626*x627))/x628);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x629 = INT16_MAX;
	uint8_t x630 = 37U;
	int8_t x631 = INT8_MAX;
	static int32_t t106 = 59430659;

    t106 = ((x629+(x630*x631))/x632);

    if (t106 != 267) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x633 = 31U;
	int16_t x634 = INT16_MAX;
	int16_t x635 = INT16_MIN;
	static int8_t x636 = -1;
	static volatile int32_t t107 = 15;

    t107 = ((x633+(x634*x635))/x636);

    if (t107 != 1073709025) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x641 = 1046LLU;
	static volatile int8_t x643 = INT8_MAX;
	volatile uint8_t x644 = UINT8_MAX;
	uint64_t t108 = 5LLU;

    t108 = ((x641+(x642*x643))/x644);

    if (t108 != 16843012LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x646 = INT64_MAX;
	uint64_t x647 = 483497133LLU;
	uint64_t t109 = 530210608623874LLU;

    t109 = ((x645+(x646*x647))/x648);

    if (t109 != 2147483648LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x649 = 84U;
	int16_t x650 = INT16_MIN;
	uint32_t x652 = UINT32_MAX;
	uint64_t t110 = 189199LLU;

    t110 = ((x649+(x650*x651))/x652);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x653 = -1;
	uint16_t x654 = 31U;
	uint64_t t111 = 792848694LLU;

    t111 = ((x653+(x654*x655))/x656);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x661 = 708U;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MIN;
	volatile int32_t t112 = -27367594;

    t112 = ((x661+(x662*x663))/x664);

    if (t112 != -32773) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x665 = 393;
	volatile int16_t x666 = INT16_MAX;
	static uint16_t x667 = 13U;
	int32_t x668 = -1;
	volatile int32_t t113 = 9405402;

    t113 = ((x665+(x666*x667))/x668);

    if (t113 != -426364) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x681 = 6U;
	volatile int64_t x682 = -5379117126LL;
	uint64_t x683 = 680700999743636107LLU;
	static uint32_t x684 = 9992U;

    t114 = ((x681+(x682*x683))/x684);

    if (t114 != 1084599552445190LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x691 = UINT64_MAX;
	int32_t x692 = -1;
	uint64_t t115 = 122271311424506441LLU;

    t115 = ((x689+(x690*x691))/x692);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x694 = 55U;
	static int16_t x695 = INT16_MIN;
	static int32_t x696 = INT32_MIN;
	int32_t t116 = 25787;

    t116 = ((x693+(x694*x695))/x696);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x698 = -1LL;
	uint64_t x700 = 18LLU;

    t117 = ((x697+(x698*x699))/x700);

    if (t117 != 33LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x710 = 43023005U;
	int16_t x712 = INT16_MIN;
	int64_t t118 = -2093290LL;

    t118 = ((x709+(x710*x711))/x712);

    if (t118 != -623655LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x713 = 1603;
	uint64_t x714 = 214383313932500426LLU;
	volatile int8_t x715 = INT8_MAX;
	int16_t x716 = -7;
	uint64_t t119 = 925749744392829404LLU;

    t119 = ((x713+(x714*x715))/x716);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x717 = 26;
	uint16_t x719 = 1212U;
	uint8_t x720 = 37U;
	int32_t t120 = 196;

    t120 = ((x717+(x718*x719))/x720);

    if (t120 != -32) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x721 = 622710710LL;
	static int16_t x722 = 751;
	int8_t x723 = INT8_MIN;
	uint32_t x724 = 838190729U;
	volatile int64_t t121 = -57756400687LL;

    t121 = ((x721+(x722*x723))/x724);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x725 = UINT64_MAX;

    t122 = ((x725+(x726*x727))/x728);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x730 = 1U;
	int8_t x731 = 1;
	int16_t x732 = INT16_MIN;
	uint32_t t123 = 486U;

    t123 = ((x729+(x730*x731))/x732);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x733 = 53U;
	static int32_t x734 = 445;
	int8_t x735 = 39;
	uint16_t x736 = 4673U;

    t124 = ((x733+(x734*x735))/x736);

    if (t124 != 3) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x737 = -1LL;
	int64_t x738 = -1LL;
	volatile uint16_t x740 = UINT16_MAX;
	int64_t t125 = 234685LL;

    t125 = ((x737+(x738*x739))/x740);

    if (t125 != 2403LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x742 = INT8_MAX;
	int8_t x743 = INT8_MIN;
	static volatile int16_t x744 = INT16_MIN;
	static int32_t t126 = 5479231;

    t126 = ((x741+(x742*x743))/x744);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x753 = 29586U;
	int8_t x754 = -3;
	static int32_t x756 = INT32_MIN;
	uint64_t t127 = 293638240548512018LLU;

    t127 = ((x753+(x754*x755))/x756);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x758 = UINT32_MAX;
	volatile uint32_t t128 = 21263U;

    t128 = ((x757+(x758*x759))/x760);

    if (t128 != 104811258U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x765 = 1U;
	int32_t x766 = -18;
	int16_t x767 = 34;
	int32_t t129 = -58;

    t129 = ((x765+(x766*x767))/x768);

    if (t129 != -4) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x770 = UINT16_MAX;
	int16_t x771 = INT16_MIN;
	int32_t x772 = INT32_MIN;
	uint32_t t130 = 31414U;

    t130 = ((x769+(x770*x771))/x772);

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x773 = -1;
	int8_t x774 = -1;
	uint16_t x775 = 2U;
	int32_t t131 = 459578103;

    t131 = ((x773+(x774*x775))/x776);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x777 = 7U;
	int32_t x778 = -57;
	int16_t x779 = 0;
	int32_t x780 = 56;
	int32_t t132 = 8152;

    t132 = ((x777+(x778*x779))/x780);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x781 = UINT8_MAX;
	int64_t x782 = -1LL;
	int8_t x783 = -1;
	int64_t x784 = 1497LL;
	int64_t t133 = 8625LL;

    t133 = ((x781+(x782*x783))/x784);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x785 = 505356040148541LL;
	int16_t x786 = INT16_MAX;
	int16_t x787 = INT16_MAX;
	volatile int32_t x788 = -1;
	static volatile int64_t t134 = 5256998895LL;

    t134 = ((x785+(x786*x787))/x788);

    if (t134 != -505357113824830LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x789 = 7;
	static uint32_t x790 = UINT32_MAX;
	int32_t x791 = INT32_MIN;
	int64_t x792 = INT64_MIN;
	int64_t t135 = 41914910426659255LL;

    t135 = ((x789+(x790*x791))/x792);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x794 = INT16_MIN;
	static volatile uint32_t x795 = 509516U;
	volatile int16_t x796 = 3;
	static uint32_t t136 = 387481409U;

    t136 = ((x793+(x794*x795))/x796);

    if (t136 != 161342905U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MIN;
	uint16_t x799 = 13034U;
	volatile int8_t x800 = INT8_MAX;
	volatile int32_t t137 = 1678471;

    t137 = ((x797+(x798*x799))/x800);

    if (t137 != -3362978) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x805 = INT32_MIN;
	static volatile int8_t x806 = -2;
	int64_t x807 = 5186326984LL;
	volatile int64_t t138 = 139385807LL;

    t138 = ((x805+(x806*x807))/x808);

    if (t138 != -12520137616LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x814 = INT16_MIN;
	static uint16_t x816 = 839U;
	volatile int32_t t139 = 810;

    t139 = ((x813+(x814*x815))/x816);

    if (t139 != -1279787) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x822 = -1LL;
	uint8_t x823 = 5U;
	static int64_t x824 = -1LL;
	volatile int64_t t140 = -79LL;

    t140 = ((x821+(x822*x823))/x824);

    if (t140 != 2147483653LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x825 = 0LL;
	volatile int8_t x827 = INT8_MIN;
	int8_t x828 = INT8_MAX;
	int64_t t141 = 1613504LL;

    t141 = ((x825+(x826*x827))/x828);

    if (t141 != 24583LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x833 = -1;
	int16_t x834 = INT16_MIN;
	static int64_t x835 = 14549LL;
	volatile int64_t t142 = 44789346484LL;

    t142 = ((x833+(x834*x835))/x836);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x845 = -1;
	int8_t x846 = INT8_MIN;
	int32_t x848 = -117830061;
	static int32_t t143 = 15;

    t143 = ((x845+(x846*x847))/x848);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x849 = UINT32_MAX;
	uint8_t x850 = UINT8_MAX;
	static int16_t x851 = INT16_MIN;
	uint8_t x852 = UINT8_MAX;
	volatile uint32_t t144 = 17U;

    t144 = ((x849+(x850*x851))/x852);

    if (t144 != 16810241U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x853 = INT64_MIN;
	uint32_t x856 = 48304U;
	int64_t t145 = 1236171971192739LL;

    t145 = ((x853+(x854*x855))/x856);

    if (t145 != -190944270388663LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x859 = 761538289LLU;
	int8_t x860 = INT8_MAX;
	volatile uint64_t t146 = 1465098130796LLU;

    t146 = ((x857+(x858*x859))/x860);

    if (t146 != 145249953330299347LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x861 = -1;
	int32_t x864 = INT32_MIN;
	uint64_t t147 = 581LLU;

    t147 = ((x861+(x862*x863))/x864);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x866 = 3057U;
	volatile uint8_t x867 = 1U;
	uint64_t x868 = 250398648LLU;
	volatile uint64_t t148 = 0LLU;

    t148 = ((x865+(x866*x867))/x868);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x877 = INT32_MIN;
	uint64_t x878 = UINT64_MAX;
	int64_t x880 = -2010599935132LL;
	volatile uint64_t t149 = 24045162203LLU;

    t149 = ((x877+(x878*x879))/x880);

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x881 = UINT64_MAX;
	static volatile int16_t x882 = INT16_MIN;
	uint16_t x883 = UINT16_MAX;
	int16_t x884 = -6;

    t150 = ((x881+(x882*x883))/x884);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x889 = 1;
	int16_t x890 = INT16_MIN;
	static int16_t x891 = 4;
	int64_t x892 = 56771341159703LL;
	static int64_t t151 = -10LL;

    t151 = ((x889+(x890*x891))/x892);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x895 = 17;
	volatile uint16_t x896 = 59U;

    t152 = ((x893+(x894*x895))/x896);

    if (t152 != 10) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x897 = INT32_MIN;
	static volatile uint16_t x898 = 491U;
	int64_t x899 = -1LL;
	int8_t x900 = INT8_MIN;
	int64_t t153 = -126048872278LL;

    t153 = ((x897+(x898*x899))/x900);

    if (t153 != 16777219LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x903 = INT16_MIN;
	uint8_t x904 = 1U;

    t154 = ((x901+(x902*x903))/x904);

    if (t154 != -81330177) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x905 = 48;
	uint32_t x907 = UINT32_MAX;
	int8_t x908 = 7;
	static volatile int64_t t155 = 46LL;

    t155 = ((x905+(x906*x907))/x908);

    if (t155 != -613566749LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x911 = INT8_MAX;
	int32_t x912 = INT32_MAX;
	volatile int32_t t156 = -169975;

    t156 = ((x909+(x910*x911))/x912);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x913 = INT64_MIN;
	int16_t x916 = INT16_MIN;
	static int64_t t157 = 1LL;

    t157 = ((x913+(x914*x915))/x916);

    if (t157 != 281474976710655LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x921 = INT16_MIN;
	static uint8_t x922 = 94U;
	volatile int32_t x923 = -545925;
	static int16_t x924 = 6;
	volatile int32_t t158 = 42;

    t158 = ((x921+(x922*x923))/x924);

    if (t158 != -8558286) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x925 = 1821LL;
	uint32_t x926 = 92636U;
	int16_t x927 = 314;

    t159 = ((x925+(x926*x927))/x928);

    if (t159 != -29089525LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x929 = -1;
	int32_t x930 = INT32_MAX;
	int32_t x931 = -1;
	int32_t t160 = 30363;

    t160 = ((x929+(x930*x931))/x932);

    if (t160 != 16777216) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x937 = 801638231U;
	int8_t x938 = INT8_MIN;
	uint16_t x939 = 2874U;
	uint32_t x940 = UINT32_MAX;
	uint32_t t161 = 109402846U;

    t161 = ((x937+(x938*x939))/x940);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x953 = INT16_MIN;
	int64_t x954 = -1LL;
	uint8_t x955 = UINT8_MAX;
	static int16_t x956 = INT16_MIN;

    t162 = ((x953+(x954*x955))/x956);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x957 = -1;
	int32_t x958 = INT32_MIN;
	static uint8_t x960 = 1U;
	volatile int32_t t163 = -111110126;

    t163 = ((x957+(x958*x959))/x960);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x965 = UINT16_MAX;
	uint16_t x968 = 1U;
	uint64_t t164 = 3038LLU;

    t164 = ((x965+(x966*x967))/x968);

    if (t164 != 18446744069414649856LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x969 = 56985563;
	int8_t x970 = INT8_MIN;
	uint8_t x971 = 18U;
	volatile int32_t t165 = -27;

    t165 = ((x969+(x970*x971))/x972);

    if (t165 != -445181) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x978 = 5083336LL;
	volatile int64_t t166 = -3806855795036LL;

    t166 = ((x977+(x978*x979))/x980);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x985 = -1;
	int64_t x986 = 17172437209644LL;
	uint64_t x987 = UINT64_MAX;
	uint32_t x988 = 6629054U;
	volatile uint64_t t167 = 521222LLU;

    t167 = ((x985+(x986*x987))/x988);

    if (t167 != 2782708799969LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x990 = 2613U;
	uint8_t x991 = 30U;
	int64_t x992 = INT64_MIN;
	static int64_t t168 = -129031421LL;

    t168 = ((x989+(x990*x991))/x992);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x997 = 0U;
	int64_t x1000 = -58374121094LL;
	volatile int64_t t169 = 43310356533267LL;

    t169 = ((x997+(x998*x999))/x1000);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x1001 = INT64_MIN;
	volatile uint64_t x1002 = 4336674081126LLU;
	uint8_t x1003 = 9U;
	int64_t x1004 = 609725LL;
	volatile uint64_t t170 = 10345858LLU;

    t170 = ((x1001+(x1002*x1003))/x1004);

    if (t170 != 15127165635198LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1009 = INT8_MIN;
	int8_t x1010 = -1;
	static int16_t x1011 = -4559;
	int32_t x1012 = -1;

    t171 = ((x1009+(x1010*x1011))/x1012);

    if (t171 != -4431) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1018 = -1;
	int32_t x1019 = INT32_MAX;
	int8_t x1020 = INT8_MAX;
	volatile uint64_t t172 = 2LLU;

    t172 = ((x1017+(x1018*x1019))/x1020);

    if (t172 != 145249953319386361LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x1021 = 72U;
	int8_t x1023 = -1;
	int32_t x1024 = -1;
	volatile int32_t t173 = -1;

    t173 = ((x1021+(x1022*x1023))/x1024);

    if (t173 != -200) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1030 = 666664LLU;
	static int64_t x1031 = INT64_MIN;
	int32_t x1032 = INT32_MAX;

    t174 = ((x1029+(x1030*x1031))/x1032);

    if (t174 != 8589934596LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1033 = 2924U;
	static int8_t x1034 = -8;
	uint64_t x1035 = UINT64_MAX;
	uint8_t x1036 = UINT8_MAX;
	volatile uint64_t t175 = 96240757970399955LLU;

    t175 = ((x1033+(x1034*x1035))/x1036);

    if (t175 != 11LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1041 = UINT32_MAX;
	uint16_t x1042 = 18572U;
	int8_t x1043 = INT8_MIN;
	int8_t x1044 = 25;
	uint32_t t176 = 1254083U;

    t176 = ((x1041+(x1042*x1043))/x1044);

    if (t176 != 171703603U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x1045 = UINT32_MAX;
	int16_t x1046 = INT16_MIN;
	int32_t x1048 = INT32_MAX;
	uint32_t t177 = 1940U;

    t177 = ((x1045+(x1046*x1047))/x1048);

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1049 = -56841406057446064LL;
	static int64_t x1050 = 1951953784LL;
	static uint32_t x1051 = UINT32_MAX;
	int32_t x1052 = 104189;
	volatile int64_t t178 = -2476809770287LL;

    t178 = ((x1049+(x1050*x1051))/x1052);

    if (t178 != 79919533324766LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1053 = UINT16_MAX;
	int32_t x1054 = -1;
	uint16_t x1055 = UINT16_MAX;
	static int8_t x1056 = INT8_MAX;
	volatile int32_t t179 = -109;

    t179 = ((x1053+(x1054*x1055))/x1056);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1063 = -1;
	int8_t x1064 = -1;
	int32_t t180 = -135897;

    t180 = ((x1061+(x1062*x1063))/x1064);

    if (t180 != -39) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1069 = -1;
	int16_t x1070 = -1;
	int8_t x1071 = INT8_MIN;
	uint8_t x1072 = 3U;
	int32_t t181 = 49659306;

    t181 = ((x1069+(x1070*x1071))/x1072);

    if (t181 != 42) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1073 = 0LL;
	uint16_t x1074 = 6917U;
	uint64_t x1075 = 3116LLU;
	int16_t x1076 = -1;
	uint64_t t182 = 829730LLU;

    t182 = ((x1073+(x1074*x1075))/x1076);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x1077 = 1934LLU;
	uint8_t x1078 = 1U;
	int64_t x1079 = -590286288LL;
	volatile uint64_t x1080 = 128441627388681236LLU;
	uint64_t t183 = 12045947084786252LLU;

    t183 = ((x1077+(x1078*x1079))/x1080);

    if (t183 != 143LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1081 = 1U;
	int16_t x1082 = -1;
	volatile int16_t x1083 = -1;
	int16_t x1084 = INT16_MIN;
	int32_t t184 = 41183736;

    t184 = ((x1081+(x1082*x1083))/x1084);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1086 = INT16_MIN;
	int8_t x1087 = 8;
	uint8_t x1088 = 3U;
	int32_t t185 = -1462;

    t185 = ((x1085+(x1086*x1087))/x1088);

    if (t185 != -87342) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1089 = 57U;
	int32_t x1090 = -1;
	int32_t x1091 = 2396;

    t186 = ((x1089+(x1090*x1091))/x1092);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1093 = 8818LLU;
	int32_t x1094 = 1328;
	volatile int32_t x1095 = 0;
	uint16_t x1096 = 2U;
	uint64_t t187 = 15696LLU;

    t187 = ((x1093+(x1094*x1095))/x1096);

    if (t187 != 4409LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1097 = 19423796379619033LLU;
	int32_t x1098 = -5761146;
	int8_t x1100 = -1;
	volatile uint64_t t188 = 6733576443358LLU;

    t188 = ((x1097+(x1098*x1099))/x1100);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x1101 = INT64_MIN;
	int8_t x1102 = -27;
	static uint32_t x1103 = UINT32_MAX;
	static int8_t x1104 = INT8_MIN;
	volatile int64_t t189 = -845304LL;

    t189 = ((x1101+(x1102*x1103))/x1104);

    if (t189 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1105 = 5825917662249177LL;
	static uint8_t x1106 = UINT8_MAX;
	int8_t x1108 = 38;
	int64_t t190 = 232LL;

    t190 = ((x1105+(x1106*x1107))/x1108);

    if (t190 != 153313622910651LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1113 = INT8_MAX;
	uint32_t x1114 = 25787102U;
	volatile uint32_t x1116 = UINT32_MAX;

    t191 = ((x1113+(x1114*x1115))/x1116);

    if (t191 != 29782LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1125 = 19515317U;
	int8_t x1126 = -1;
	uint32_t x1128 = 4U;

    t192 = ((x1125+(x1126*x1127))/x1128);

    if (t192 != -2305843009208815122LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1133 = INT32_MIN;
	int32_t x1134 = -1;
	uint64_t x1135 = 120245LLU;
	static int64_t x1136 = 40213321797LL;

    t193 = ((x1133+(x1134*x1135))/x1136);

    if (t193 != 458722215LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1137 = INT16_MAX;
	static volatile int16_t x1138 = 1;
	int8_t x1139 = INT8_MIN;
	int8_t x1140 = INT8_MIN;
	int32_t t194 = 11261746;

    t194 = ((x1137+(x1138*x1139))/x1140);

    if (t194 != -254) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x1142 = UINT8_MAX;
	static uint16_t x1143 = 7U;
	int32_t x1144 = INT32_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x1141+(x1142*x1143))/x1144);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1145 = -1;
	uint8_t x1146 = 19U;
	uint32_t x1147 = 487U;
	uint32_t t196 = 3U;

    t196 = ((x1145+(x1146*x1147))/x1148);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1149 = INT16_MIN;
	static uint8_t x1150 = UINT8_MAX;
	static int32_t x1151 = -228224;
	int8_t x1152 = 11;
	static volatile int32_t t197 = 6833;

    t197 = ((x1149+(x1150*x1151))/x1152);

    if (t197 != -5293626) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1155 = 5U;

    t198 = ((x1153+(x1154*x1155))/x1156);

    if (t198 != 34097493666738415LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1157 = -1LL;
	static uint64_t x1158 = 365LLU;
	uint8_t x1160 = UINT8_MAX;
	volatile uint64_t t199 = 83710LLU;

    t199 = ((x1157+(x1158*x1159))/x1160);

    if (t199 != 181LLU) { NG(); } else { ; }
	
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

