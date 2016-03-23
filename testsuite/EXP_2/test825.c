
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

static volatile int64_t x2 = INT64_MIN;
uint64_t x4 = 312LLU;
static int16_t x5 = 16;
int8_t x13 = INT8_MIN;
int8_t x26 = INT8_MIN;
volatile uint64_t t4 = 3311293813682102LLU;
uint16_t x39 = 485U;
int32_t t5 = -3755421;
volatile int64_t x45 = -2869538490581639LL;
static int8_t x53 = INT8_MIN;
static int16_t x55 = 1;
int8_t x63 = INT8_MIN;
uint64_t x64 = 176167414703204847LLU;
static int32_t x71 = INT32_MIN;
volatile uint32_t x73 = UINT32_MAX;
uint32_t x77 = 325568U;
volatile uint64_t x79 = 63139107LLU;
int16_t x85 = 4999;
uint32_t x89 = UINT32_MAX;
volatile uint64_t x110 = 106157LLU;
int8_t x122 = -2;
uint64_t x136 = 236524LLU;
volatile uint64_t x138 = UINT64_MAX;
int8_t x144 = INT8_MIN;
static uint32_t x145 = UINT32_MAX;
static int64_t x148 = 19991401LL;
static volatile int16_t x152 = INT16_MIN;
int8_t x155 = -57;
int8_t x162 = -1;
int64_t x164 = INT64_MIN;
volatile int64_t x171 = INT64_MIN;
int64_t x179 = INT64_MIN;
volatile int64_t x180 = INT64_MIN;
static volatile int16_t x193 = INT16_MIN;
int8_t x196 = 38;
uint16_t x198 = 5U;
int16_t x199 = INT16_MIN;
int16_t x207 = INT16_MAX;
volatile int8_t x209 = -1;
int64_t x211 = INT64_MAX;
uint8_t x233 = UINT8_MAX;
int64_t t47 = -3330002745293LL;
int16_t x237 = -1;
int16_t x238 = INT16_MIN;
volatile int8_t x242 = 4;
int8_t x248 = INT8_MIN;
uint64_t x252 = UINT64_MAX;
int8_t x253 = 1;
uint64_t x256 = 6086126959140142LLU;
uint16_t x261 = 31187U;
volatile int32_t x291 = -1;
volatile uint64_t x292 = UINT64_MAX;
static volatile int8_t x294 = INT8_MIN;
int8_t x295 = -1;
volatile int32_t x296 = -16690662;
volatile int32_t t59 = -3422;
static int32_t x302 = -1;
volatile int32_t t61 = 481683849;
uint8_t x306 = UINT8_MAX;
int64_t x308 = INT64_MIN;
uint64_t t64 = 3834488489LLU;
int64_t x318 = INT64_MIN;
static uint16_t x319 = UINT16_MAX;
volatile uint8_t x322 = UINT8_MAX;
uint64_t x323 = 8754019479874181LLU;
uint64_t t66 = 21906LLU;
uint32_t x326 = 23U;
static int32_t x333 = 1;
volatile int32_t x334 = INT32_MIN;
int8_t x343 = INT8_MAX;
volatile int64_t t71 = -23574438LL;
volatile int64_t x354 = -1LL;
int64_t x355 = INT64_MAX;
int64_t x356 = 1533LL;
uint16_t x361 = UINT16_MAX;
volatile int64_t t76 = -156589970525644LL;
int16_t x373 = -1;
int64_t x374 = INT64_MIN;
int64_t x376 = INT64_MAX;
int16_t x380 = -1;
int64_t x381 = INT64_MAX;
int64_t x383 = 635LL;
int64_t x390 = -2157449LL;
uint64_t x393 = 2019LLU;
int16_t x400 = -472;
int64_t t84 = INT64_MAX;
int64_t t86 = 22585480745LL;
volatile int32_t x419 = INT32_MAX;
volatile int32_t t90 = -75;
int8_t x446 = INT8_MIN;
int16_t x449 = -1;
int16_t x450 = INT16_MIN;
int32_t x455 = -1;
static volatile int32_t x465 = INT32_MAX;
volatile int64_t t101 = 4LL;
static volatile int8_t x484 = 1;
static int8_t x486 = -3;
static int64_t x491 = INT64_MAX;
static int8_t x497 = INT8_MIN;
uint64_t x504 = 254980828597LLU;
static int64_t x507 = -1LL;
int64_t x521 = 307507918LL;
volatile int64_t t110 = 968LL;
volatile int64_t t111 = -35628LL;
uint16_t x534 = 358U;
volatile uint16_t x536 = 37U;
int8_t x537 = 12;
static uint16_t x539 = UINT16_MAX;
static uint8_t x557 = UINT8_MAX;
int16_t x565 = 352;
static volatile int64_t x566 = -269720117156227LL;
volatile uint32_t x573 = UINT32_MAX;
int8_t x574 = -1;
volatile uint32_t t120 = UINT32_MAX;
int64_t x579 = -28638233431LL;
static uint16_t x580 = UINT16_MAX;
static int16_t x583 = INT16_MIN;
int32_t x586 = -1;
int64_t x588 = -30047756LL;
int32_t x589 = INT32_MAX;
static uint32_t x592 = 2248U;
int64_t t125 = 20LL;
uint32_t x599 = 1484U;
int16_t x601 = INT16_MAX;
static int8_t x602 = INT8_MAX;
uint64_t x605 = UINT64_MAX;
volatile int8_t x607 = -36;
int64_t x610 = -1LL;
int64_t t129 = -65126LL;
static uint8_t x614 = UINT8_MAX;
int16_t x621 = -1;
volatile int32_t t132 = -2689906;
int8_t x626 = INT8_MIN;
int16_t x628 = INT16_MIN;
int32_t x630 = -1;
volatile uint32_t x632 = 14629934U;
volatile int64_t t134 = 4473731227611948105LL;
volatile uint64_t t135 = 244323861LLU;
int32_t x640 = -13342850;
volatile int64_t x647 = INT64_MIN;
uint64_t t138 = UINT64_MAX;
int64_t x652 = -1LL;
static volatile int64_t t139 = 50729231988742720LL;
int32_t x653 = 4226;
int8_t x654 = INT8_MAX;
uint8_t x656 = UINT8_MAX;
static int16_t x658 = INT16_MIN;
static volatile int8_t x662 = 3;
static int32_t x665 = INT32_MIN;
static int32_t x666 = 1;
int16_t x667 = 1;
int16_t x668 = INT16_MIN;
uint64_t x674 = 17164446LLU;
volatile int64_t x675 = INT64_MIN;
volatile uint64_t t145 = UINT64_MAX;
int32_t x685 = -122;
int16_t x690 = -94;
int8_t x692 = INT8_MIN;
volatile int16_t x695 = -2388;
int64_t x699 = 12189534762891LL;
uint16_t x706 = 38U;
static int64_t x717 = -1LL;
static int8_t x723 = -1;
static int32_t x732 = INT32_MIN;
uint64_t x743 = UINT64_MAX;
static int8_t x746 = INT8_MIN;
int16_t x748 = INT16_MIN;
int64_t t163 = 4967LL;
int64_t x768 = INT64_MAX;
uint8_t x772 = 62U;
static volatile uint32_t x781 = 128U;
static uint32_t x784 = 390U;
volatile int32_t x785 = INT32_MIN;
volatile uint64_t x798 = 121693106LLU;
int8_t x799 = INT8_MIN;
static int8_t x800 = INT8_MIN;
int64_t x806 = -1LL;
static uint64_t t173 = 5087LLU;
int16_t x815 = INT16_MAX;
int32_t t174 = 227;
int16_t x825 = -1;
uint64_t t179 = 183LLU;
int16_t x841 = INT16_MIN;
int32_t x844 = -1;
int8_t x855 = INT8_MIN;
int32_t t183 = -1519;
int32_t x859 = INT32_MAX;
volatile uint32_t t184 = 92U;
static volatile int64_t t185 = -4494975450635LL;
static volatile uint32_t x865 = 116710U;
int32_t x867 = -1;
uint64_t x871 = 1383518445098LLU;
uint64_t x877 = UINT64_MAX;
volatile int32_t x882 = INT32_MIN;
static volatile int8_t x894 = -1;
int32_t x909 = -144;
int8_t x913 = 0;
int16_t x916 = -1;
int16_t x922 = 5635;
uint32_t x926 = 1927759U;
uint8_t x928 = 1U;


void f0(void) {
    	static uint16_t x1 = 11U;
	int32_t x3 = -15216266;
	volatile uint64_t t0 = 101011720306835281LLU;

    t0 = ((x1*(x2%x3))|x4);

    if (t0 != 18446744073699022138LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x6 = 372U;
	static volatile int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -1220;

    t1 = ((x5*(x6%x7))|x8);

    if (t1 != -64) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x14 = UINT32_MAX;
	uint8_t x15 = UINT8_MAX;
	uint64_t x16 = 3420LLU;
	uint64_t t2 = 725868LLU;

    t2 = ((x13*(x14%x15))|x16);

    if (t2 != 3420LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = 79717221U;
	static volatile int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MAX;
	static uint32_t t3 = 130543816U;

    t3 = ((x25*(x26%x27))|x28);

    if (t3 != 2681097727U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;

    t4 = ((x33*(x34%x35))|x36);

    if (t4 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x37 = -1;
	int16_t x38 = INT16_MIN;
	int16_t x40 = -6;

    t5 = ((x37*(x38%x39))|x40);

    if (t5 != -5) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x41 = INT8_MAX;
	uint8_t x42 = 121U;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = -1;
	uint64_t t6 = UINT64_MAX;

    t6 = ((x41*(x42%x43))|x44);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	static uint32_t x48 = 1807184049U;
	static int64_t t7 = -55123687992LL;

    t7 = ((x45*(x46%x47))|x48);

    if (t7 != 2869538516890295LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = -8;
	static int16_t x50 = INT16_MIN;
	uint16_t x51 = UINT16_MAX;
	static uint16_t x52 = UINT16_MAX;
	int32_t t8 = -2;

    t8 = ((x49*(x50%x51))|x52);

    if (t8 != 327679) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x54 = UINT64_MAX;
	uint32_t x56 = 396U;
	uint64_t t9 = 29575727534941LLU;

    t9 = ((x53*(x54%x55))|x56);

    if (t9 != 396LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 463LLU;
	int64_t x58 = INT64_MAX;
	static int8_t x59 = INT8_MIN;
	volatile uint16_t x60 = 10341U;
	volatile uint64_t t10 = 52LLU;

    t10 = ((x57*(x58%x59))|x60);

    if (t10 != 60917LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 214087994856828312LLU;
	uint16_t x62 = 25U;
	volatile uint64_t t11 = 1978398819755298LLU;

    t11 = ((x61*(x62%x63))|x64);

    if (t11 != 5366003211397118975LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 19U;
	static uint64_t x70 = 5888397134424465LLU;
	static int32_t x72 = 32640;
	volatile uint64_t t12 = 61908749468LLU;

    t12 = ((x69*(x70%x71))|x72);

    if (t12 != 111879545554075587LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x74 = -1LL;
	static int8_t x75 = 1;
	int64_t x76 = INT64_MIN;
	static int64_t t13 = INT64_MIN;

    t13 = ((x73*(x74%x75))|x76);

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x78 = -29724373;
	volatile uint64_t x80 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = ((x77*(x78%x79))|x80);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x86 = 68442825;
	int64_t x87 = -3854430LL;
	volatile int64_t x88 = -255564055LL;
	volatile int64_t t15 = -47174925421614LL;

    t15 = ((x85*(x86%x87))|x88);

    if (t15 != -170625299LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x90 = 95;
	int16_t x91 = -83;
	volatile uint16_t x92 = 1U;
	volatile uint32_t t16 = 1195408675U;

    t16 = ((x89*(x90%x91))|x92);

    if (t16 != 4294967285U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = -1;
	static volatile uint8_t x94 = UINT8_MAX;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;
	int32_t t17 = 240409698;

    t17 = ((x93*(x94%x95))|x96);

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x101 = 6;
	int64_t x102 = -22259280219124823LL;
	static volatile uint32_t x103 = 85661637U;
	volatile int8_t x104 = -1;
	int64_t t18 = 24301186357LL;

    t18 = ((x101*(x102%x103))|x104);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x105 = UINT64_MAX;
	static int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	int32_t x108 = 36179;
	uint64_t t19 = 1183098808730862336LLU;

    t19 = ((x105*(x106%x107))|x108);

    if (t19 != 36179LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x109 = -3401343208765022040LL;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = UINT8_MAX;
	volatile uint64_t t20 = 2233570298940582LLU;

    t20 = ((x109*(x110%x111))|x112);

    if (t20 != 177485922318631423LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x121 = 0U;
	uint8_t x123 = 67U;
	int16_t x124 = -1;
	volatile int32_t t21 = 81;

    t21 = ((x121*(x122%x123))|x124);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x129 = 8U;
	int32_t x130 = INT32_MIN;
	volatile int32_t x131 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;
	static int32_t t22 = 69;

    t22 = ((x129*(x130%x131))|x132);

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	static int32_t x135 = INT32_MIN;
	uint64_t t23 = 31791277668LLU;

    t23 = ((x133*(x134%x135))|x136);

    if (t23 != 236525LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x137 = 321U;
	static volatile int64_t x139 = INT64_MAX;
	int16_t x140 = -3724;
	uint64_t t24 = 5313LLU;

    t24 = ((x137*(x138%x139))|x140);

    if (t24 != 18446744073709547893LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x141 = 34U;
	int16_t x142 = INT16_MIN;
	int32_t x143 = 8;
	int32_t t25 = 1171;

    t25 = ((x141*(x142%x143))|x144);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	uint64_t t26 = 8740639202550LLU;

    t26 = ((x145*(x146%x147))|x148);

    if (t26 != 545460846569LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x149 = 14;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	static volatile int64_t t27 = 30356464878590LL;

    t27 = ((x149*(x150%x151))|x152);

    if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = 1680U;
	uint32_t x154 = UINT32_MAX;
	static int8_t x156 = -1;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = ((x153*(x154%x155))|x156);

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x157 = INT16_MIN;
	static uint32_t x158 = 237569857U;
	int8_t x159 = -1;
	int16_t x160 = 1;
	uint32_t t29 = 187266U;

    t29 = ((x157*(x158%x159))|x160);

    if (t29 != 2086633473U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x161 = 2217434954LL;
	static int16_t x163 = INT16_MAX;
	int64_t t30 = 7484293LL;

    t30 = ((x161*(x162%x163))|x164);

    if (t30 != -2217434954LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = 549LLU;
	uint64_t t31 = 0LLU;

    t31 = ((x165*(x166%x167))|x168);

    if (t31 != 551LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x169 = 79185LL;
	uint32_t x170 = UINT32_MAX;
	int32_t x172 = 121140747;
	int64_t t32 = -1960082LL;

    t32 = ((x169*(x170%x171))|x172);

    if (t32 != 340096985267887LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x173 = -6;
	volatile uint8_t x174 = 3U;
	volatile int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t33 = -62;

    t33 = ((x173*(x174%x175))|x176);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x177 = INT16_MAX;
	static int8_t x178 = INT8_MIN;
	volatile int64_t t34 = 8033LL;

    t34 = ((x177*(x178%x179))|x180);

    if (t34 != -4194176LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x181 = -1;
	volatile int8_t x182 = 5;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -7;
	volatile int32_t t35 = 112030814;

    t35 = ((x181*(x182%x183))|x184);

    if (t35 != -5) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	volatile int16_t x188 = 1824;
	volatile int32_t t36 = -1292;

    t36 = ((x185*(x186%x187))|x188);

    if (t36 != -30944) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x194 = INT64_MAX;
	volatile int64_t x195 = -1LL;
	volatile int64_t t37 = 8127464LL;

    t37 = ((x193*(x194%x195))|x196);

    if (t37 != 38LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = -44;
	int32_t x200 = 0;
	int32_t t38 = 224568;

    t38 = ((x197*(x198%x199))|x200);

    if (t38 != -220) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x201 = 28U;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 1;
	volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t39 = UINT32_MAX;

    t39 = ((x201*(x202%x203))|x204);

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int32_t x206 = -15;
	volatile uint32_t x208 = UINT32_MAX;
	volatile uint32_t t40 = UINT32_MAX;

    t40 = ((x205*(x206%x207))|x208);

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x210 = 10;
	volatile int8_t x212 = INT8_MAX;
	volatile int64_t t41 = 17327188466463LL;

    t41 = ((x209*(x210%x211))|x212);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x213 = UINT32_MAX;
	static uint8_t x214 = 10U;
	volatile int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = ((x213*(x214%x215))|x216);

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = 1;
	static uint16_t x218 = 31523U;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -1LL;
	volatile int64_t t43 = 1223814838LL;

    t43 = ((x217*(x218%x219))|x220);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x222 = -83046LL;
	uint64_t x223 = 5147970073LLU;
	int64_t x224 = 50200231176994503LL;
	uint64_t t44 = 92026645089094LLU;

    t44 = ((x221*(x222%x223))|x224);

    if (t44 != 18446736362699652807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x225 = 18900LLU;
	uint16_t x226 = 7476U;
	uint32_t x227 = 106683U;
	uint16_t x228 = 17770U;
	volatile uint64_t t45 = 30724264068LLU;

    t45 = ((x225*(x226%x227))|x228);

    if (t45 != 141313914LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MAX;
	int32_t x231 = 1583659;
	volatile uint16_t x232 = 1479U;
	volatile int64_t t46 = -100LL;

    t46 = ((x229*(x230%x231))|x232);

    if (t46 != 1436630052622287LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x234 = INT8_MAX;
	int64_t x235 = INT64_MIN;
	volatile int32_t x236 = INT32_MIN;

    t47 = ((x233*(x234%x235))|x236);

    if (t47 != -2147451263LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x239 = UINT32_MAX;
	int16_t x240 = -278;
	volatile uint32_t t48 = 32119937U;

    t48 = ((x237*(x238%x239))|x240);

    if (t48 != 4294967018U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x241 = 980015U;
	static uint32_t x243 = UINT32_MAX;
	volatile uint16_t x244 = 1U;
	uint32_t t49 = 8458783U;

    t49 = ((x241*(x242%x243))|x244);

    if (t49 != 3920061U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x245 = 6U;
	int32_t x246 = 0;
	uint64_t x247 = 4306070487418LLU;
	volatile uint64_t t50 = 282940617567357469LLU;

    t50 = ((x245*(x246%x247))|x248);

    if (t50 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x249 = 1731U;
	static volatile uint16_t x250 = 3685U;
	int8_t x251 = INT8_MIN;
	uint64_t t51 = UINT64_MAX;

    t51 = ((x249*(x250%x251))|x252);

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x254 = 135;
	static uint32_t x255 = UINT32_MAX;
	static uint64_t t52 = 51039405886680222LLU;

    t52 = ((x253*(x254%x255))|x256);

    if (t52 != 6086126959140271LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x257 = 3U;
	int32_t x258 = -8;
	uint32_t x259 = 3173012U;
	static uint64_t x260 = 1312385120231491LLU;
	volatile uint64_t t53 = 35LLU;

    t53 = ((x257*(x258%x259))|x260);

    if (t53 != 1312385121281871LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x262 = -1;
	static uint32_t x263 = 5U;
	int64_t x264 = -1144157043LL;
	static int64_t t54 = 1LL;

    t54 = ((x261*(x262%x263))|x264);

    if (t54 != -1144157043LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = INT16_MIN;
	uint64_t x270 = 2171408430LLU;
	static int32_t x271 = 11468;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t55 = 43635358674021678LLU;

    t55 = ((x269*(x270%x271))|x272);

    if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x277 = 23603108U;
	uint32_t x278 = 45U;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = INT32_MIN;
	volatile uint32_t t56 = 1302415404U;

    t56 = ((x277*(x278%x279))|x280);

    if (t56 != 3209623508U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x285 = 41U;
	static volatile int16_t x286 = 592;
	int16_t x287 = 1356;
	volatile int32_t x288 = 86598895;
	int32_t t57 = -29290;

    t57 = ((x285*(x286%x287))|x288);

    if (t57 != 86605567) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x289 = -1;
	uint32_t x290 = 12232602U;
	static volatile uint64_t t58 = UINT64_MAX;

    t58 = ((x289*(x290%x291))|x292);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x293 = INT16_MIN;

    t59 = ((x293*(x294%x295))|x296);

    if (t59 != -16690662) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x297 = 247;
	static uint16_t x298 = 204U;
	int8_t x299 = INT8_MIN;
	int32_t x300 = 5306;
	static volatile int32_t t60 = 4602726;

    t60 = ((x297*(x298%x299))|x300);

    if (t60 != 24062) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x301 = -204896851;
	int8_t x303 = INT8_MAX;
	volatile uint16_t x304 = 36U;

    t61 = ((x301*(x302%x303))|x304);

    if (t61 != 204896887) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x305 = UINT32_MAX;
	uint32_t x307 = 3U;
	int64_t t62 = INT64_MIN;

    t62 = ((x305*(x306%x307))|x308);

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = 1;
	int64_t x310 = INT64_MIN;
	static volatile uint8_t x311 = 15U;
	uint64_t x312 = 2093131850189LLU;
	uint64_t t63 = 13858LLU;

    t63 = ((x309*(x310%x311))|x312);

    if (t63 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = 1;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 174094594046170LLU;
	int64_t x316 = 11414LL;

    t64 = ((x313*(x314%x315))|x316);

    if (t64 != 29077765471670LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x317 = 1;
	static volatile int16_t x320 = -1;
	int64_t t65 = -34433335614080604LL;

    t65 = ((x317*(x318%x319))|x320);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x321 = INT32_MIN;
	static int16_t x324 = INT16_MIN;

    t66 = ((x321*(x322%x323))|x324);

    if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x327 = 1;
	int64_t x328 = 4849564859602106LL;
	volatile int64_t t67 = -3989367LL;

    t67 = ((x325*(x326%x327))|x328);

    if (t67 != 4849564859602106LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x329 = 24U;
	int64_t x330 = 45767LL;
	static int32_t x331 = 3931;
	int32_t x332 = INT32_MIN;
	int64_t t68 = -21088478406478324LL;

    t68 = ((x329*(x330%x331))|x332);

    if (t68 != -2147423024LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x335 = -2349480LL;
	static volatile uint16_t x336 = UINT16_MAX;
	static int64_t t69 = 14574412625597LL;

    t69 = ((x333*(x334%x335))|x336);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x337 = 2U;
	static uint64_t x338 = 3LLU;
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = 23U;
	static volatile uint64_t t70 = 54471LLU;

    t70 = ((x337*(x338%x339))|x340);

    if (t70 != 23LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x341 = 28875U;
	int64_t x342 = -33550895122456513LL;
	static uint8_t x344 = 0U;

    t71 = ((x341*(x342%x343))|x344);

    if (t71 != -2541000LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = 103061644;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 3U;
	int16_t x348 = 9;
	static int64_t t72 = 205458LL;

    t72 = ((x345*(x346%x347))|x348);

    if (t72 != -206123287LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x349 = -1;
	int8_t x350 = -1;
	uint16_t x351 = 16259U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t73 = 112194;

    t73 = ((x349*(x350%x351))|x352);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x353 = INT8_MIN;
	volatile int64_t t74 = 194321270513291595LL;

    t74 = ((x353*(x354%x355))|x356);

    if (t74 != 1533LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x362 = 395737173LLU;
	uint16_t x363 = 5175U;
	uint64_t x364 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

    t75 = ((x361*(x362%x363))|x364);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x365 = 2;
	int64_t x366 = -1LL;
	static int32_t x367 = INT32_MIN;
	int16_t x368 = -5107;

    t76 = ((x365*(x366%x367))|x368);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	uint16_t x371 = 965U;
	uint32_t x372 = 4403U;
	uint32_t t77 = 124298U;

    t77 = ((x369*(x370%x371))|x372);

    if (t77 != 37171U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x375 = 62LL;
	volatile int64_t t78 = INT64_MAX;

    t78 = ((x373*(x374%x375))|x376);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x377 = -46;
	static uint8_t x378 = 1U;
	int32_t x379 = INT32_MAX;
	int32_t t79 = -22102;

    t79 = ((x377*(x378%x379))|x380);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x382 = -1;
	uint32_t x384 = 34338783U;
	int64_t t80 = -112533197LL;

    t80 = ((x381*(x382%x383))|x384);

    if (t80 != -9223372036820437025LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x389 = 104U;
	int16_t x391 = INT16_MAX;
	int16_t x392 = -1;
	int64_t t81 = 3134390LL;

    t81 = ((x389*(x390%x391))|x392);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x394 = 7LL;
	static uint16_t x395 = UINT16_MAX;
	uint8_t x396 = 39U;
	volatile uint64_t t82 = 3LLU;

    t82 = ((x393*(x394%x395))|x396);

    if (t82 != 14135LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x397 = -1LL;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	int64_t t83 = -125834715704154LL;

    t83 = ((x397*(x398%x399))|x400);

    if (t83 != -471LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x401 = -3656173837LL;
	int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = 13947U;
	int64_t x404 = INT64_MAX;

    t84 = ((x401*(x402%x403))|x404);

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x405 = INT64_MAX;
	int8_t x406 = -1;
	uint16_t x407 = 791U;
	int64_t x408 = INT64_MAX;
	int64_t t85 = -36LL;

    t85 = ((x405*(x406%x407))|x408);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x413 = INT8_MAX;
	volatile uint8_t x414 = UINT8_MAX;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = UINT8_MAX;

    t86 = ((x413*(x414%x415))|x416);

    if (t86 != 32511LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x417 = -92;
	static uint32_t x418 = UINT32_MAX;
	volatile uint8_t x420 = 85U;
	volatile uint32_t t87 = 20U;

    t87 = ((x417*(x418%x419))|x420);

    if (t87 != 4294967285U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x421 = -31;
	volatile int32_t x422 = INT32_MIN;
	volatile uint64_t x423 = 9LLU;
	int8_t x424 = INT8_MIN;
	uint64_t t88 = 88485455803LLU;

    t88 = ((x421*(x422%x423))|x424);

    if (t88 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = 258707944339440796LLU;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t89 = 41124029349428LLU;

    t89 = ((x425*(x426%x427))|x428);

    if (t89 != 10361766664986427647LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x429 = INT8_MIN;
	static volatile int8_t x430 = INT8_MIN;
	volatile int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MAX;

    t90 = ((x429*(x430%x431))|x432);

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x433 = 1LL;
	int16_t x434 = INT16_MAX;
	uint64_t x435 = UINT64_MAX;
	static int8_t x436 = INT8_MAX;
	volatile uint64_t t91 = 259199886520LLU;

    t91 = ((x433*(x434%x435))|x436);

    if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x437 = 16644005U;
	int32_t x438 = INT32_MAX;
	uint64_t x439 = 14121674392632245LLU;
	uint8_t x440 = 3U;
	static uint64_t t92 = 60LLU;

    t92 = ((x437*(x438%x439))|x440);

    if (t92 != 35742728558086235LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x441 = 0;
	volatile int8_t x442 = INT8_MAX;
	int8_t x443 = -4;
	volatile uint32_t x444 = 265U;
	uint32_t t93 = 318800373U;

    t93 = ((x441*(x442%x443))|x444);

    if (t93 != 265U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x445 = 2U;
	static int32_t x447 = INT32_MAX;
	int8_t x448 = -1;
	static int32_t t94 = 1;

    t94 = ((x445*(x446%x447))|x448);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x451 = UINT16_MAX;
	uint8_t x452 = 0U;
	static int32_t t95 = 1120;

    t95 = ((x449*(x450%x451))|x452);

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x453 = -29;
	static uint8_t x454 = UINT8_MAX;
	static int32_t x456 = -10362;
	volatile int32_t t96 = 111;

    t96 = ((x453*(x454%x455))|x456);

    if (t96 != -10362) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x457 = UINT16_MAX;
	int8_t x458 = -1;
	int32_t x459 = 175029;
	int16_t x460 = -1;
	static int32_t t97 = 12777522;

    t97 = ((x457*(x458%x459))|x460);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x461 = 92U;
	uint64_t x462 = UINT64_MAX;
	uint16_t x463 = UINT16_MAX;
	static uint16_t x464 = 157U;
	volatile uint64_t t98 = 73867024313905611LLU;

    t98 = ((x461*(x462%x463))|x464);

    if (t98 != 157LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x466 = 1;
	int64_t x467 = -7722LL;
	volatile int8_t x468 = INT8_MIN;
	int64_t t99 = 88811LL;

    t99 = ((x465*(x466%x467))|x468);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x469 = -1;
	int16_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	volatile uint64_t t100 = 1196908LLU;

    t100 = ((x469*(x470%x471))|x472);

    if (t100 != 65535LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x477 = -3982489543LL;
	int8_t x478 = 17;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = 569LL;

    t101 = ((x477*(x478%x479))|x480);

    if (t101 != -67702322183LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x481 = 0;
	uint8_t x482 = 13U;
	volatile int16_t x483 = INT16_MIN;
	int32_t t102 = -94;

    t102 = ((x481*(x482%x483))|x484);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x485 = UINT16_MAX;
	uint32_t x487 = 103U;
	static int8_t x488 = -16;
	volatile uint32_t t103 = 106391443U;

    t103 = ((x485*(x486%x487))|x488);

    if (t103 != 4294967284U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = -151337759206LL;
	uint32_t x492 = 58374U;
	static int64_t t104 = -1848901591859197LL;

    t104 = ((x489*(x490%x491))|x492);

    if (t104 != 19371233179398LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x498 = INT64_MIN;
	uint64_t x499 = 1046471650450413LLU;
	int16_t x500 = -47;
	volatile uint64_t t105 = 3LLU;

    t105 = ((x497*(x498%x499))|x500);

    if (t105 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x501 = 12U;
	uint16_t x502 = UINT16_MAX;
	volatile uint8_t x503 = 4U;
	volatile uint64_t t106 = 5790336621739LLU;

    t106 = ((x501*(x502%x503))|x504);

    if (t106 != 254980828597LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x505 = 266239;
	int64_t x506 = INT64_MAX;
	static int8_t x508 = INT8_MIN;
	volatile int64_t t107 = 4172363894045886740LL;

    t107 = ((x505*(x506%x507))|x508);

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x513 = -191;
	uint32_t x514 = UINT32_MAX;
	int8_t x515 = 3;
	volatile uint32_t x516 = UINT32_MAX;
	uint32_t t108 = UINT32_MAX;

    t108 = ((x513*(x514%x515))|x516);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x517 = 7;
	volatile uint16_t x518 = UINT16_MAX;
	int16_t x519 = -1;
	volatile uint16_t x520 = 3914U;
	volatile int32_t t109 = -3;

    t109 = ((x517*(x518%x519))|x520);

    if (t109 != 3914) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x522 = INT8_MAX;
	static int64_t x523 = INT64_MIN;
	uint32_t x524 = 2U;

    t110 = ((x521*(x522%x523))|x524);

    if (t110 != 39053505586LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x525 = 156LL;
	uint32_t x526 = UINT32_MAX;
	int32_t x527 = INT32_MAX;
	static int32_t x528 = INT32_MIN;

    t111 = ((x525*(x526%x527))|x528);

    if (t111 != -2147483492LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x529 = 25653210413869LLU;
	int8_t x530 = -1;
	uint8_t x531 = 4U;
	static volatile int16_t x532 = INT16_MIN;
	uint64_t t112 = 1LLU;

    t112 = ((x529*(x530%x531))|x532);

    if (t112 != 18446744073709520083LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x533 = 2U;
	uint16_t x535 = 153U;
	int32_t t113 = 3262368;

    t113 = ((x533*(x534%x535))|x536);

    if (t113 != 109) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x538 = 1371389LLU;
	uint8_t x540 = UINT8_MAX;
	volatile uint64_t t114 = 11326661351887801LLU;

    t114 = ((x537*(x538%x539))|x540);

    if (t114 != 728319LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x541 = 15;
	int16_t x542 = INT16_MIN;
	int32_t x543 = INT32_MAX;
	volatile int64_t x544 = -41476854066040LL;
	volatile int64_t t115 = -15287488LL;

    t115 = ((x541*(x542%x543))|x544);

    if (t115 != -469880LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x545 = INT32_MIN;
	volatile uint64_t x546 = 12745680703157340LLU;
	int32_t x547 = INT32_MAX;
	uint8_t x548 = 11U;
	volatile uint64_t t116 = 2LLU;

    t116 = ((x545*(x546%x547))|x548);

    if (t116 != 18047328543431458827LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x553 = 131059625U;
	int16_t x554 = INT16_MAX;
	static int64_t x555 = INT64_MAX;
	volatile int64_t x556 = INT64_MIN;
	volatile int64_t t117 = -2212229718774548LL;

    t117 = ((x553*(x554%x555))|x556);

    if (t117 != -9223367742424043433LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x558 = 1U;
	int32_t x559 = INT32_MIN;
	uint32_t x560 = 250183U;
	uint32_t t118 = 4U;

    t118 = ((x557*(x558%x559))|x560);

    if (t118 != 250367U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x567 = 16U;
	int32_t x568 = INT32_MIN;
	volatile int64_t t119 = -989863331291308LL;

    t119 = ((x565*(x566%x567))|x568);

    if (t119 != -1056LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x575 = 300;
	int16_t x576 = -1;

    t120 = ((x573*(x574%x575))|x576);

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x577 = 6495U;
	volatile uint64_t x578 = 56621654952709LLU;
	uint64_t t121 = 922LLU;

    t121 = ((x577*(x578%x579))|x580);

    if (t121 != 367757648917889023LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x581 = -1LL;
	static volatile int32_t x582 = 21650019;
	int64_t x584 = INT64_MIN;
	volatile int64_t t122 = 43034885494425683LL;

    t122 = ((x581*(x582%x583))|x584);

    if (t122 != -23139LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x585 = UINT16_MAX;
	uint8_t x587 = 4U;
	volatile int64_t t123 = -1LL;

    t123 = ((x585*(x586%x587))|x588);

    if (t123 != -32267LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x590 = 26U;
	uint8_t x591 = 1U;
	static volatile uint32_t t124 = 7U;

    t124 = ((x589*(x590%x591))|x592);

    if (t124 != 2248U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x593 = 4;
	int64_t x594 = INT64_MIN;
	volatile uint32_t x595 = UINT32_MAX;
	int16_t x596 = -1;

    t125 = ((x593*(x594%x595))|x596);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x597 = INT16_MIN;
	volatile int32_t x598 = INT32_MIN;
	volatile uint16_t x600 = UINT16_MAX;
	uint32_t t126 = 54589U;

    t126 = ((x597*(x598%x599))|x600);

    if (t126 != 4275240959U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x603 = UINT64_MAX;
	static int8_t x604 = INT8_MAX;
	static volatile uint64_t t127 = 1LLU;

    t127 = ((x601*(x602%x603))|x604);

    if (t127 != 4161535LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x606 = 25364LL;
	int16_t x608 = INT16_MIN;
	uint64_t t128 = 219677603320699081LLU;

    t128 = ((x605*(x606%x607))|x608);

    if (t128 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x609 = INT64_MAX;
	static int32_t x611 = INT32_MIN;
	int64_t x612 = -1LL;

    t129 = ((x609*(x610%x611))|x612);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x613 = -1074;
	volatile uint8_t x615 = UINT8_MAX;
	uint32_t x616 = UINT32_MAX;
	uint32_t t130 = UINT32_MAX;

    t130 = ((x613*(x614%x615))|x616);

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x617 = 2U;
	volatile uint32_t x618 = UINT32_MAX;
	int64_t x619 = -1LL;
	int8_t x620 = -1;
	volatile int64_t t131 = 8054769LL;

    t131 = ((x617*(x618%x619))|x620);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x622 = INT8_MIN;
	int8_t x623 = 2;
	uint16_t x624 = UINT16_MAX;

    t132 = ((x621*(x622%x623))|x624);

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x625 = INT32_MAX;
	volatile int64_t x627 = -1LL;
	volatile int64_t t133 = 10247534LL;

    t133 = ((x625*(x626%x627))|x628);

    if (t133 != -32768LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x629 = 6U;
	volatile int64_t x631 = 6524LL;

    t134 = ((x629*(x630%x631))|x632);

    if (t134 != -2LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x633 = INT64_MIN;
	volatile int64_t x634 = -1LL;
	uint64_t x635 = UINT64_MAX;
	uint8_t x636 = 12U;

    t135 = ((x633*(x634%x635))|x636);

    if (t135 != 12LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x637 = INT16_MIN;
	static uint8_t x638 = 10U;
	volatile int64_t x639 = INT64_MIN;
	static volatile int64_t t136 = -107501LL;

    t136 = ((x637*(x638%x639))|x640);

    if (t136 != -39042LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x641 = -268308LL;
	volatile int16_t x642 = 1114;
	volatile int64_t x643 = 369322460598LL;
	volatile int32_t x644 = INT32_MIN;
	int64_t t137 = 58LL;

    t137 = ((x641*(x642%x643))|x644);

    if (t137 != -298895112LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x645 = UINT64_MAX;
	uint32_t x646 = 3950653U;
	int64_t x648 = -1LL;

    t138 = ((x645*(x646%x647))|x648);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x649 = -19;
	int8_t x650 = 29;
	uint16_t x651 = 275U;

    t139 = ((x649*(x650%x651))|x652);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x655 = 13U;
	volatile int32_t t140 = 1274;

    t140 = ((x653*(x654%x655))|x656);

    if (t140 != 42495) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x657 = 956748003099099971LLU;
	int8_t x659 = 55;
	int32_t x660 = INT32_MAX;
	static volatile uint64_t t141 = 362222179374405583LLU;

    t141 = ((x657*(x658%x659))|x660);

    if (t141 != 14200068088610684927LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x661 = UINT8_MAX;
	volatile int64_t x663 = -321805LL;
	uint16_t x664 = 244U;
	volatile int64_t t142 = -1628465LL;

    t142 = ((x661*(x662%x663))|x664);

    if (t142 != 765LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t t143 = 223468522;

    t143 = ((x665*(x666%x667))|x668);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x673 = 65;
	int8_t x676 = INT8_MIN;
	uint64_t t144 = 14744061290LLU;

    t144 = ((x673*(x674%x675))|x676);

    if (t144 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x677 = 705519666526333LLU;
	int64_t x678 = -1LL;
	static int8_t x679 = 36;
	static int16_t x680 = -1;

    t145 = ((x677*(x678%x679))|x680);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x681 = UINT32_MAX;
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = 702947;
	static volatile int8_t x684 = INT8_MIN;
	volatile uint32_t t146 = 160U;

    t146 = ((x681*(x682%x683))|x684);

    if (t146 != 4294967288U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x686 = INT8_MIN;
	uint16_t x687 = 28210U;
	uint16_t x688 = 1U;
	volatile int32_t t147 = 14099758;

    t147 = ((x685*(x686%x687))|x688);

    if (t147 != 15617) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x689 = UINT32_MAX;
	int64_t x691 = 59081990LL;
	volatile int64_t t148 = 778LL;

    t148 = ((x689*(x690%x691))|x692);

    if (t148 != -34LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x693 = INT32_MIN;
	uint32_t x694 = 50249374U;
	int16_t x696 = -960;
	volatile uint32_t t149 = 260027462U;

    t149 = ((x693*(x694%x695))|x696);

    if (t149 != 4294966336U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x697 = UINT16_MAX;
	int32_t x698 = -1;
	volatile int8_t x700 = INT8_MAX;
	int64_t t150 = -2043LL;

    t150 = ((x697*(x698%x699))|x700);

    if (t150 != -65409LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = -759;
	int16_t x703 = -1;
	int32_t x704 = INT32_MIN;
	static volatile int64_t t151 = -160215LL;

    t151 = ((x701*(x702%x703))|x704);

    if (t151 != -2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x705 = 3836643876382LL;
	uint8_t x707 = 5U;
	int8_t x708 = 14;
	volatile int64_t t152 = -8231893890LL;

    t152 = ((x705*(x706%x707))|x708);

    if (t152 != 11509931629150LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MIN;
	static int32_t x712 = -1;
	volatile int32_t t153 = 42979011;

    t153 = ((x709*(x710%x711))|x712);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x718 = 61030238383LLU;
	volatile uint16_t x719 = 59U;
	int16_t x720 = INT16_MIN;
	volatile uint64_t t154 = 4481631LLU;

    t154 = ((x717*(x718%x719))|x720);

    if (t154 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x721 = INT16_MIN;
	int8_t x722 = -5;
	int32_t x724 = INT32_MIN;
	volatile int32_t t155 = INT32_MIN;

    t155 = ((x721*(x722%x723))|x724);

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x729 = -17630LL;
	int8_t x730 = -1;
	int64_t x731 = INT64_MAX;
	volatile int64_t t156 = -142543258LL;

    t156 = ((x729*(x730%x731))|x732);

    if (t156 != -2147466018LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x733 = -1;
	int16_t x734 = INT16_MIN;
	int32_t x735 = INT32_MIN;
	static volatile uint16_t x736 = UINT16_MAX;
	volatile int32_t t157 = 32486302;

    t157 = ((x733*(x734%x735))|x736);

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x737 = 224U;
	static uint8_t x738 = 51U;
	volatile uint16_t x739 = 1674U;
	volatile int64_t x740 = 1012618LL;
	int64_t t158 = -9714LL;

    t158 = ((x737*(x738%x739))|x740);

    if (t158 != 1015722LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x741 = 99U;
	int8_t x742 = -16;
	volatile int16_t x744 = 3952;
	volatile uint64_t t159 = 1795164LLU;

    t159 = ((x741*(x742%x743))|x744);

    if (t159 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x745 = 3U;
	int64_t x747 = -1LL;
	static volatile int64_t t160 = -263094135LL;

    t160 = ((x745*(x746%x747))|x748);

    if (t160 != -32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x749 = 16357001LLU;
	volatile int16_t x750 = INT16_MIN;
	static uint8_t x751 = 73U;
	uint32_t x752 = UINT32_MAX;
	uint64_t t161 = UINT64_MAX;

    t161 = ((x749*(x750%x751))|x752);

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x753 = INT16_MAX;
	int64_t x754 = 4413516867934433LL;
	volatile uint32_t x755 = 96U;
	volatile int64_t x756 = INT64_MAX;
	int64_t t162 = INT64_MAX;

    t162 = ((x753*(x754%x755))|x756);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x757 = 1527U;
	volatile int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MAX;
	int32_t x760 = INT32_MIN;

    t163 = ((x757*(x758%x759))|x760);

    if (t163 != -1527LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x761 = INT16_MAX;
	int64_t x762 = INT64_MAX;
	int16_t x763 = -1;
	static uint8_t x764 = 12U;
	volatile int64_t t164 = 28308442257LL;

    t164 = ((x761*(x762%x763))|x764);

    if (t164 != 12LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x765 = 874358U;
	volatile int64_t x766 = -1LL;
	uint16_t x767 = 138U;
	volatile int64_t t165 = -6846LL;

    t165 = ((x765*(x766%x767))|x768);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x769 = INT16_MAX;
	uint16_t x770 = UINT16_MAX;
	int8_t x771 = INT8_MIN;
	volatile int32_t t166 = 297105152;

    t166 = ((x769*(x770%x771))|x772);

    if (t166 != 4161471) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x777 = 389052024093LLU;
	int64_t x778 = -1LL;
	uint64_t x779 = UINT64_MAX;
	int32_t x780 = -3;
	volatile uint64_t t167 = 27991LLU;

    t167 = ((x777*(x778%x779))|x780);

    if (t167 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x782 = 1316212;
	static int8_t x783 = -1;
	uint32_t t168 = 1377528U;

    t168 = ((x781*(x782%x783))|x784);

    if (t168 != 390U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x786 = -380LL;
	uint8_t x787 = 123U;
	volatile int16_t x788 = -1;
	int64_t t169 = -4701LL;

    t169 = ((x785*(x786%x787))|x788);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x797 = -77;
	volatile uint64_t t170 = 845357637LLU;

    t170 = ((x797*(x798%x799))|x800);

    if (t170 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x801 = -19;
	static uint8_t x802 = UINT8_MAX;
	uint64_t x803 = 494152LLU;
	volatile uint64_t x804 = UINT64_MAX;
	uint64_t t171 = UINT64_MAX;

    t171 = ((x801*(x802%x803))|x804);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x805 = 732U;
	int16_t x807 = -1;
	uint8_t x808 = UINT8_MAX;
	volatile int64_t t172 = -24787008088LL;

    t172 = ((x805*(x806%x807))|x808);

    if (t172 != 255LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x809 = 892LLU;
	volatile int32_t x810 = -1306603;
	int32_t x811 = -1;
	volatile int16_t x812 = INT16_MAX;

    t173 = ((x809*(x810%x811))|x812);

    if (t173 != 32767LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x813 = -1;
	int32_t x814 = -362301;
	int32_t x816 = INT32_MIN;

    t174 = ((x813*(x814%x815))|x816);

    if (t174 != -2147481784) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x821 = INT64_MIN;
	volatile int32_t x822 = -14401409;
	static volatile uint64_t x823 = UINT64_MAX;
	int8_t x824 = -1;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = ((x821*(x822%x823))|x824);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x826 = INT64_MIN;
	volatile uint8_t x827 = 18U;
	static int8_t x828 = INT8_MIN;
	int64_t t176 = -120043LL;

    t176 = ((x825*(x826%x827))|x828);

    if (t176 != -120LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x829 = -1;
	uint32_t x830 = 21U;
	static int16_t x831 = INT16_MIN;
	uint64_t x832 = 155297468408735LLU;
	static uint64_t t177 = 1609861500133659489LLU;

    t177 = ((x829*(x830%x831))|x832);

    if (t177 != 155301722456063LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x833 = 50U;
	int8_t x834 = INT8_MIN;
	int32_t x835 = INT32_MIN;
	static uint16_t x836 = 3U;
	volatile int32_t t178 = 135707751;

    t178 = ((x833*(x834%x835))|x836);

    if (t178 != -6397) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x837 = 41858LLU;
	int8_t x838 = INT8_MIN;
	volatile int16_t x839 = INT16_MAX;
	int16_t x840 = 247;

    t179 = ((x837*(x838%x839))|x840);

    if (t179 != 18446744073704194039LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x842 = -1;
	int32_t x843 = -46;
	static volatile int32_t t180 = 167;

    t180 = ((x841*(x842%x843))|x844);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x845 = INT16_MIN;
	uint32_t x846 = 260259243U;
	static int16_t x847 = INT16_MAX;
	int32_t x848 = INT32_MIN;
	uint32_t t181 = 1738317946U;

    t181 = ((x845*(x846%x847))|x848);

    if (t181 != 3517415424U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x849 = -1;
	int32_t x850 = INT32_MAX;
	volatile int8_t x851 = 1;
	volatile uint64_t x852 = UINT64_MAX;
	uint64_t t182 = UINT64_MAX;

    t182 = ((x849*(x850%x851))|x852);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x853 = 15979;
	int8_t x854 = -1;
	volatile int32_t x856 = INT32_MIN;

    t183 = ((x853*(x854%x855))|x856);

    if (t183 != -15979) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x857 = INT16_MIN;
	static int32_t x858 = INT32_MAX;
	static uint32_t x860 = 1U;

    t184 = ((x857*(x858%x859))|x860);

    if (t184 != 1U) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x861 = UINT16_MAX;
	volatile int64_t x862 = INT64_MIN;
	int64_t x863 = 2404162806LL;
	static int32_t x864 = -1;

    t185 = ((x861*(x862%x863))|x864);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x866 = 68465LLU;
	int8_t x868 = INT8_MIN;
	volatile uint64_t t186 = 93884LLU;

    t186 = ((x865*(x866%x867))|x868);

    if (t186 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x869 = UINT32_MAX;
	static int32_t x870 = -1;
	uint64_t x872 = 14626057800031589LLU;
	volatile uint64_t t187 = 717402691751278LLU;

    t187 = ((x869*(x870%x871))|x872);

    if (t187 != 5475250675606003183LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x878 = INT8_MAX;
	static uint16_t x879 = UINT16_MAX;
	int64_t x880 = INT64_MIN;
	uint64_t t188 = 5073466125277931342LLU;

    t188 = ((x877*(x878%x879))|x880);

    if (t188 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x881 = INT8_MIN;
	int64_t x883 = INT64_MAX;
	static int16_t x884 = -13153;
	volatile int64_t t189 = -31812785LL;

    t189 = ((x881*(x882%x883))|x884);

    if (t189 != -13153LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x885 = INT8_MIN;
	volatile int64_t x886 = INT64_MIN;
	int16_t x887 = -1;
	volatile int16_t x888 = INT16_MAX;
	volatile int64_t t190 = 2538LL;

    t190 = ((x885*(x886%x887))|x888);

    if (t190 != 32767LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = INT32_MIN;
	static int32_t x891 = INT32_MIN;
	int8_t x892 = INT8_MIN;
	static int32_t t191 = 65778764;

    t191 = ((x889*(x890%x891))|x892);

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x893 = INT32_MIN;
	int32_t x895 = -1;
	static int32_t x896 = INT32_MIN;
	static int32_t t192 = INT32_MIN;

    t192 = ((x893*(x894%x895))|x896);

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x897 = UINT8_MAX;
	volatile int8_t x898 = 4;
	int8_t x899 = -1;
	static uint8_t x900 = 77U;
	int32_t t193 = -32;

    t193 = ((x897*(x898%x899))|x900);

    if (t193 != 77) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x901 = INT16_MIN;
	uint16_t x902 = 1U;
	volatile int32_t x903 = 13;
	int64_t x904 = -1LL;
	volatile int64_t t194 = 0LL;

    t194 = ((x901*(x902%x903))|x904);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = -5684;
	uint8_t x906 = 0U;
	static uint32_t x907 = 2480276U;
	int32_t x908 = INT32_MAX;
	uint32_t t195 = 3139320U;

    t195 = ((x905*(x906%x907))|x908);

    if (t195 != 2147483647U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x910 = -1;
	uint16_t x911 = 50U;
	int64_t x912 = INT64_MIN;
	volatile int64_t t196 = -442085144413737LL;

    t196 = ((x909*(x910%x911))|x912);

    if (t196 != -9223372036854775664LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x914 = INT8_MAX;
	uint32_t x915 = 28633U;
	uint32_t t197 = UINT32_MAX;

    t197 = ((x913*(x914%x915))|x916);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x921 = -1;
	volatile int8_t x923 = INT8_MIN;
	static int16_t x924 = -576;
	int32_t t198 = 75240;

    t198 = ((x921*(x922%x923))|x924);

    if (t198 != -3) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x925 = INT32_MIN;
	int32_t x927 = -1;
	volatile uint32_t t199 = 1702U;

    t199 = ((x925*(x926%x927))|x928);

    if (t199 != 2147483649U) { NG(); } else { ; }
	
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

