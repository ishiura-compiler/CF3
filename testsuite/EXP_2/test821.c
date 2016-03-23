
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

uint16_t x1 = UINT16_MAX;
static uint64_t x2 = UINT64_MAX;
uint8_t x6 = UINT8_MAX;
int8_t x11 = -1;
static int32_t t2 = 44435;
int32_t x15 = INT32_MIN;
uint32_t x18 = UINT32_MAX;
static volatile int8_t x19 = INT8_MIN;
int64_t x20 = -1LL;
static int32_t t5 = 4627;
uint32_t x32 = 16U;
static int8_t x33 = INT8_MAX;
uint16_t x40 = 13541U;
volatile int32_t t9 = -143408;
int32_t t10 = 1924;
uint8_t x47 = 85U;
int32_t x59 = 5803627;
volatile int32_t x65 = -1631135;
uint64_t x66 = 7LLU;
uint16_t x69 = 0U;
int32_t x71 = -1;
volatile int32_t t16 = -1;
int16_t x78 = INT16_MIN;
int32_t x80 = INT32_MIN;
uint16_t x81 = UINT16_MAX;
volatile int16_t x82 = -1;
volatile uint32_t x86 = UINT32_MAX;
uint8_t x95 = UINT8_MAX;
uint32_t x97 = 11U;
static int8_t x102 = 16;
int8_t x106 = -1;
int64_t x114 = INT64_MIN;
static volatile int32_t x117 = -24;
volatile uint64_t x120 = UINT64_MAX;
int16_t x122 = 5;
uint32_t x123 = UINT32_MAX;
volatile int8_t x138 = INT8_MIN;
volatile int64_t x139 = INT64_MIN;
int64_t x142 = -1LL;
volatile int32_t t34 = 120;
uint32_t x150 = 94065134U;
int32_t x151 = -62295;
int16_t x153 = INT16_MIN;
int16_t x156 = INT16_MIN;
uint64_t x165 = UINT64_MAX;
int8_t x168 = INT8_MIN;
int16_t x173 = INT16_MIN;
int64_t x176 = -1LL;
int32_t t41 = -1;
volatile int16_t x180 = INT16_MAX;
int32_t x182 = 7;
int8_t x183 = INT8_MIN;
volatile int32_t t43 = -1;
volatile int32_t t44 = 698250;
static int64_t x196 = -27LL;
static volatile int32_t t46 = 151;
int8_t x201 = INT8_MAX;
int8_t x203 = -1;
int32_t t49 = -747;
static int32_t x213 = 178;
uint8_t x218 = 39U;
static uint64_t x221 = 2LLU;
int32_t t52 = 325607138;
volatile int16_t x228 = INT16_MIN;
static volatile int32_t t53 = -23619971;
int8_t x229 = INT8_MIN;
int64_t x250 = INT64_MIN;
volatile int32_t t59 = 712803434;
int64_t x263 = INT64_MAX;
uint64_t x269 = 148085522652936781LLU;
int64_t x272 = -144532073468851034LL;
static int32_t x281 = -12;
uint64_t x287 = 74LLU;
volatile int32_t t66 = 808848664;
uint64_t x300 = 3929440368777LLU;
static uint16_t x302 = UINT16_MAX;
int64_t x305 = 211381643105176LL;
int32_t x308 = -1454;
volatile int32_t t71 = 75320315;
volatile int16_t x316 = INT16_MIN;
int32_t t72 = -8291998;
int8_t x321 = 1;
static volatile int32_t t74 = -562288943;
int64_t x336 = -1LL;
int64_t x337 = INT64_MAX;
static int16_t x344 = INT16_MAX;
int64_t x349 = INT64_MIN;
int8_t x356 = INT8_MIN;
int64_t x366 = 272136282145676023LL;
int32_t x371 = -1;
uint16_t x382 = 0U;
int32_t x383 = INT32_MAX;
uint64_t x391 = UINT64_MAX;
int32_t x392 = -281922112;
volatile int64_t x396 = INT64_MAX;
uint64_t x399 = 1843LLU;
volatile uint32_t x401 = 246577U;
volatile int16_t x404 = -5223;
static int64_t x405 = 3185716954197LL;
volatile int32_t x406 = 152165;
volatile int64_t x407 = INT64_MIN;
static int32_t t97 = -11;
int64_t x421 = INT64_MAX;
static uint16_t x424 = 959U;
volatile int32_t t98 = -495790155;
int32_t t99 = 6;
uint32_t x440 = 130307U;
static int32_t t102 = 623195;
int32_t x446 = -41029;
int32_t t104 = -234;
static uint16_t x453 = 13256U;
static int8_t x455 = 14;
static int8_t x457 = -1;
volatile int32_t t106 = -133098415;
uint64_t x466 = UINT64_MAX;
volatile int8_t x474 = 1;
int64_t x479 = INT64_MAX;
uint16_t x485 = 3198U;
uint16_t x493 = 2484U;
int8_t x494 = -1;
static int16_t x495 = -386;
volatile int16_t x496 = INT16_MIN;
int64_t x499 = -13118LL;
int64_t x511 = 78715LL;
int64_t x524 = INT64_MIN;
int64_t x530 = INT64_MIN;
static int32_t x532 = 0;
int32_t x535 = INT32_MIN;
static int32_t t123 = 6112595;
static uint8_t x542 = 1U;
volatile uint16_t x545 = 1U;
uint8_t x546 = 0U;
int64_t x550 = 3538734718LL;
int32_t t126 = -1718995;
int16_t x558 = INT16_MIN;
static volatile int8_t x562 = INT8_MIN;
uint32_t x572 = UINT32_MAX;
static volatile uint32_t x581 = 14279633U;
uint32_t x583 = 13U;
int64_t x586 = -5409831409314LL;
static int32_t x589 = INT32_MIN;
uint8_t x591 = UINT8_MAX;
volatile int32_t x609 = INT32_MIN;
int32_t x610 = INT32_MIN;
volatile int16_t x616 = 1691;
int64_t x618 = -1LL;
uint16_t x623 = 40U;
volatile int16_t x624 = 1207;
volatile int32_t x628 = INT32_MIN;
volatile int32_t t143 = -3;
int64_t x630 = -1LL;
volatile int32_t t144 = 22625542;
uint32_t x639 = 390U;
int32_t t148 = 109740293;
int32_t t149 = 1600397;
int64_t x653 = -1096173506600LL;
uint8_t x666 = 1U;
int16_t x667 = -25;
uint32_t x670 = UINT32_MAX;
int8_t x676 = -1;
int64_t x678 = -12LL;
volatile int32_t t154 = -2;
volatile int64_t x689 = INT64_MAX;
int32_t x690 = INT32_MIN;
volatile uint16_t x693 = 1387U;
int64_t x695 = INT64_MAX;
static volatile int32_t t158 = -2283549;
volatile int32_t t159 = 3512004;
static int32_t t160 = -645196762;
volatile int32_t x705 = -8447428;
int32_t x706 = INT32_MIN;
int16_t x708 = INT16_MIN;
int16_t x712 = 3912;
static int16_t x717 = -1;
uint32_t x722 = 29753140U;
static volatile int32_t x723 = -1;
static uint8_t x726 = UINT8_MAX;
volatile int32_t x728 = -1;
int32_t t166 = 1;
static int8_t x734 = -1;
int64_t x738 = 321554341LL;
static volatile int32_t t170 = 6451;
int16_t x762 = INT16_MAX;
uint64_t x763 = UINT64_MAX;
int16_t x764 = -1;
static volatile int8_t x765 = 3;
volatile int8_t x773 = -20;
static volatile int32_t x786 = INT32_MIN;
volatile int16_t x788 = INT16_MIN;
int64_t x804 = -1LL;
static int16_t x812 = INT16_MIN;
int32_t t183 = 20;
uint32_t x842 = 1853997U;
int8_t x845 = 27;
volatile uint32_t x857 = 264U;
volatile uint16_t x858 = 10U;
int32_t x870 = -1;


void f0(void) {
    	volatile uint64_t x3 = 342LLU;
	uint32_t x4 = 343026U;
	volatile int32_t t0 = -594946104;

    t0 = ((x1*(x2%x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	uint16_t x7 = 1498U;
	uint8_t x8 = 10U;
	volatile int32_t t1 = -18323;

    t1 = ((x5*(x6%x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = 22U;
	uint32_t x10 = 57407U;
	uint16_t x12 = 0U;

    t2 = ((x9*(x10%x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x16 = 1809;
	volatile int32_t t3 = 75820995;

    t3 = ((x13*(x14%x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 5654U;
	int32_t t4 = -24;

    t4 = ((x17*(x18%x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -173947053142216LL;
	volatile int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	static volatile int16_t x24 = INT16_MIN;

    t5 = ((x21*(x22%x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -39;
	int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MAX;
	int32_t t6 = 206598;

    t6 = ((x25*(x26%x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 3908U;
	uint16_t x30 = 0U;
	volatile uint32_t x31 = 2U;
	volatile int32_t t7 = 2048538;

    t7 = ((x29*(x30%x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = UINT64_MAX;
	static int32_t x35 = INT32_MIN;
	volatile int8_t x36 = -1;
	int32_t t8 = -6189081;

    t8 = ((x33*(x34%x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 6U;
	static volatile int8_t x38 = -1;
	static int64_t x39 = INT64_MIN;

    t9 = ((x37*(x38%x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 47;
	int8_t x42 = 7;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MAX;

    t10 = ((x41*(x42%x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static volatile uint8_t x46 = UINT8_MAX;
	int32_t x48 = -818925548;
	static volatile int32_t t11 = -1294;

    t11 = ((x45*(x46%x47))>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int64_t x50 = 44LL;
	volatile uint64_t x51 = 126LLU;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -13492892;

    t12 = ((x49*(x50%x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 0;
	static volatile int64_t x58 = INT64_MIN;
	int64_t x60 = 11LL;
	volatile int32_t t13 = -15926456;

    t13 = ((x57*(x58%x59))>x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = INT32_MAX;
	uint32_t x62 = 7422316U;
	volatile int16_t x63 = -7;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = -3712;

    t14 = ((x61*(x62%x63))>x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x67 = 1U;
	int8_t x68 = INT8_MIN;
	int32_t t15 = 0;

    t15 = ((x65*(x66%x67))>x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x70 = 320LLU;
	static int32_t x72 = INT32_MAX;

    t16 = ((x69*(x70%x71))>x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x73 = 627LLU;
	static volatile uint16_t x74 = UINT16_MAX;
	int64_t x75 = INT64_MAX;
	int64_t x76 = -1LL;
	static int32_t t17 = 1053;

    t17 = ((x73*(x74%x75))>x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = -1;
	uint32_t x79 = 1026353473U;
	int32_t t18 = 483389129;

    t18 = ((x77*(x78%x79))>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x83 = 3005392325477LLU;
	uint32_t x84 = 0U;
	volatile int32_t t19 = 6165;

    t19 = ((x81*(x82%x83))>x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	static int16_t x88 = -11955;
	volatile int32_t t20 = 85283414;

    t20 = ((x85*(x86%x87))>x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	volatile int8_t x90 = INT8_MIN;
	int32_t x91 = -10485936;
	int16_t x92 = -1207;
	static int32_t t21 = 23093;

    t21 = ((x89*(x90%x91))>x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x93 = 235U;
	volatile int8_t x94 = -1;
	static uint32_t x96 = 1U;
	static volatile int32_t t22 = -204957551;

    t22 = ((x93*(x94%x95))>x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x98 = 901296760U;
	uint64_t x99 = UINT64_MAX;
	static int32_t x100 = -793223;
	int32_t t23 = 16055559;

    t23 = ((x97*(x98%x99))>x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -1;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = 10119883;

    t24 = ((x101*(x102%x103))>x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x105 = -31875LL;
	static uint32_t x107 = UINT32_MAX;
	static int8_t x108 = INT8_MAX;
	int32_t t25 = -14342;

    t25 = ((x105*(x106%x107))>x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 341U;
	int32_t t26 = 59;

    t26 = ((x109*(x110%x111))>x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = -1;
	static int32_t x115 = -1414;
	volatile uint64_t x116 = 407581704LLU;
	volatile int32_t t27 = 48475;

    t27 = ((x113*(x114%x115))>x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x118 = 2;
	int32_t x119 = 91682;
	int32_t t28 = -2646;

    t28 = ((x117*(x118%x119))>x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x124 = -1;
	int32_t t29 = -204;

    t29 = ((x121*(x122%x123))>x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = 3;
	int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MAX;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t30 = -176447373;

    t30 = ((x125*(x126%x127))>x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = UINT8_MAX;
	volatile uint64_t x130 = 20841452885315289LLU;
	int16_t x131 = 119;
	static volatile int64_t x132 = INT64_MIN;
	int32_t t31 = 0;

    t31 = ((x129*(x130%x131))>x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x137 = 44829LL;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t32 = 506688069;

    t32 = ((x137*(x138%x139))>x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = 778903;
	volatile uint16_t x143 = UINT16_MAX;
	static int8_t x144 = -1;
	volatile int32_t t33 = -203;

    t33 = ((x141*(x142%x143))>x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MIN;
	uint64_t x147 = 40459732LLU;
	int64_t x148 = INT64_MIN;

    t34 = ((x145*(x146%x147))>x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MAX;
	static int32_t x152 = INT32_MIN;
	static volatile int32_t t35 = 95046294;

    t35 = ((x149*(x150%x151))>x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x154 = INT16_MIN;
	volatile int16_t x155 = -77;
	volatile int32_t t36 = -4;

    t36 = ((x153*(x154%x155))>x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = 60U;
	static volatile int32_t x158 = INT32_MAX;
	static volatile int8_t x159 = 30;
	static int16_t x160 = 0;
	int32_t t37 = 326435818;

    t37 = ((x157*(x158%x159))>x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x161 = 3358U;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 10537604U;
	uint8_t x164 = 6U;
	volatile int32_t t38 = -54;

    t38 = ((x161*(x162%x163))>x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	static int32_t t39 = 16331127;

    t39 = ((x165*(x166%x167))>x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -6027LL;
	volatile int16_t x170 = INT16_MIN;
	static uint8_t x171 = 14U;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t40 = -63;

    t40 = ((x169*(x170%x171))>x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x174 = INT32_MIN;
	volatile uint16_t x175 = 189U;

    t41 = ((x173*(x174%x175))>x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x177 = INT16_MIN;
	uint16_t x178 = 6U;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t t42 = 22121348;

    t42 = ((x177*(x178%x179))>x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MAX;
	static int64_t x184 = INT64_MAX;

    t43 = ((x181*(x182%x183))>x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = INT16_MIN;
	uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	static volatile uint8_t x188 = 7U;

    t44 = ((x185*(x186%x187))>x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = -1;
	volatile int8_t x190 = 0;
	int8_t x191 = 18;
	uint32_t x192 = 359518996U;
	volatile int32_t t45 = 3;

    t45 = ((x189*(x190%x191))>x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	static int16_t x194 = INT16_MIN;
	uint8_t x195 = 1U;

    t46 = ((x193*(x194%x195))>x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x197 = 3;
	volatile int16_t x198 = 1;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 58756600129291LLU;
	volatile int32_t t47 = -904037779;

    t47 = ((x197*(x198%x199))>x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = INT64_MIN;
	static uint64_t x204 = 952414587128025541LLU;
	volatile int32_t t48 = -12191;

    t48 = ((x201*(x202%x203))>x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MAX;
	int8_t x206 = -13;
	static int64_t x207 = -1LL;
	static int32_t x208 = INT32_MIN;

    t49 = ((x205*(x206%x207))>x208);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x214 = 0;
	uint64_t x215 = 2977168LLU;
	int16_t x216 = INT16_MIN;
	int32_t t50 = -1991887;

    t50 = ((x213*(x214%x215))>x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = 12365LL;
	volatile int32_t t51 = 175635;

    t51 = ((x217*(x218%x219))>x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x222 = 21916U;
	uint16_t x223 = 102U;
	static volatile uint16_t x224 = 1004U;

    t52 = ((x221*(x222%x223))>x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x225 = INT32_MIN;
	volatile int64_t x226 = INT64_MIN;
	uint8_t x227 = 37U;

    t53 = ((x225*(x226%x227))>x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x230 = 2U;
	volatile int64_t x231 = -1220696447282760LL;
	static int32_t x232 = -2739814;
	int32_t t54 = 849845;

    t54 = ((x229*(x230%x231))>x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x237 = 883U;
	uint16_t x238 = 21921U;
	int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t55 = 4;

    t55 = ((x237*(x238%x239))>x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -3983;
	volatile int16_t x243 = -1;
	int64_t x244 = -10352939572095708LL;
	volatile int32_t t56 = 3;

    t56 = ((x241*(x242%x243))>x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -1;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = 10U;
	int32_t t57 = 1574276;

    t57 = ((x249*(x250%x251))>x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	static volatile int16_t x255 = INT16_MIN;
	int8_t x256 = 0;
	int32_t t58 = -1964;

    t58 = ((x253*(x254%x255))>x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = 228902544377238764LL;
	static volatile int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MAX;
	int16_t x260 = 7462;

    t59 = ((x257*(x258%x259))>x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x261 = -94;
	static uint32_t x262 = 263080U;
	int8_t x264 = -1;
	int32_t t60 = 129241253;

    t60 = ((x261*(x262%x263))>x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x265 = 14U;
	int32_t x266 = INT32_MIN;
	volatile uint16_t x267 = 515U;
	uint64_t x268 = 1LLU;
	int32_t t61 = -238;

    t61 = ((x265*(x266%x267))>x268);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x270 = INT16_MIN;
	int16_t x271 = 15;
	volatile int32_t t62 = -6;

    t62 = ((x269*(x270%x271))>x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x277 = -1;
	int16_t x278 = -1;
	uint32_t x279 = 36226U;
	int32_t x280 = -1;
	static volatile int32_t t63 = 16297986;

    t63 = ((x277*(x278%x279))>x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x282 = INT8_MAX;
	int16_t x283 = 3936;
	static int8_t x284 = INT8_MAX;
	int32_t t64 = 1633323;

    t64 = ((x281*(x282%x283))>x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x285 = UINT32_MAX;
	static volatile int64_t x286 = -471LL;
	int32_t x288 = 103497273;
	static volatile int32_t t65 = -758;

    t65 = ((x285*(x286%x287))>x288);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x289 = INT8_MIN;
	int32_t x290 = 173466097;
	volatile int8_t x291 = -1;
	int64_t x292 = 0LL;

    t66 = ((x289*(x290%x291))>x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x293 = -1LL;
	int16_t x294 = 13095;
	uint16_t x295 = UINT16_MAX;
	volatile uint8_t x296 = 4U;
	int32_t t67 = 12;

    t67 = ((x293*(x294%x295))>x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x297 = 86U;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	int32_t t68 = 828;

    t68 = ((x297*(x298%x299))>x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x301 = 410822U;
	int32_t x303 = -1;
	uint64_t x304 = 68489394111899LLU;
	static volatile int32_t t69 = 7;

    t69 = ((x301*(x302%x303))>x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -1LL;
	int32_t t70 = 3936;

    t70 = ((x305*(x306%x307))>x308);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x309 = 98U;
	int16_t x310 = 498;
	volatile int8_t x311 = -1;
	volatile uint16_t x312 = 0U;

    t71 = ((x309*(x310%x311))>x312);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x313 = 1U;
	uint64_t x314 = 11036LLU;
	uint32_t x315 = 40157U;

    t72 = ((x313*(x314%x315))>x316);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = 379;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 895902794934375851LLU;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t73 = -1247;

    t73 = ((x317*(x318%x319))>x320);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = 1;
	static int16_t x323 = 337;
	static int8_t x324 = 23;

    t74 = ((x321*(x322%x323))>x324);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = 1;
	static uint64_t x326 = UINT64_MAX;
	int16_t x327 = -1;
	int16_t x328 = -16;
	volatile int32_t t75 = -5;

    t75 = ((x325*(x326%x327))>x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = -256;
	int8_t x332 = -34;
	static volatile int32_t t76 = -3;

    t76 = ((x329*(x330%x331))>x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 18U;
	uint16_t x335 = UINT16_MAX;
	volatile int32_t t77 = -87805321;

    t77 = ((x333*(x334%x335))>x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x338 = 0U;
	static volatile int64_t x339 = INT64_MAX;
	uint64_t x340 = 530366554329432LLU;
	int32_t t78 = -210115749;

    t78 = ((x337*(x338%x339))>x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x342 = -1;
	volatile int64_t x343 = INT64_MIN;
	int32_t t79 = -1965978;

    t79 = ((x341*(x342%x343))>x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = -33;
	int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	uint8_t x348 = 0U;
	int32_t t80 = -2298;

    t80 = ((x345*(x346%x347))>x348);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x350 = 1;
	volatile uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t81 = -1011;

    t81 = ((x349*(x350%x351))>x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	volatile uint16_t x354 = 51U;
	int32_t x355 = INT32_MAX;
	int32_t t82 = -9;

    t82 = ((x353*(x354%x355))>x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = INT32_MAX;
	uint32_t x358 = 494630015U;
	static uint8_t x359 = 2U;
	volatile int16_t x360 = -1;
	int32_t t83 = 3;

    t83 = ((x357*(x358%x359))>x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x361 = 124515LLU;
	volatile uint8_t x362 = UINT8_MAX;
	volatile int32_t x363 = -53;
	static int64_t x364 = -119761990LL;
	int32_t t84 = 75;

    t84 = ((x361*(x362%x363))>x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = INT8_MIN;
	uint32_t x367 = 2153896U;
	static int8_t x368 = 6;
	static volatile int32_t t85 = 398;

    t85 = ((x365*(x366%x367))>x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x369 = -1440902001LL;
	int64_t x370 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t86 = 120378;

    t86 = ((x369*(x370%x371))>x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x373 = -1;
	volatile uint8_t x374 = 1U;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t87 = 1049156699;

    t87 = ((x373*(x374%x375))>x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = 824151U;
	volatile uint16_t x379 = 4U;
	int64_t x380 = 10528009006LL;
	volatile int32_t t88 = -164441;

    t88 = ((x377*(x378%x379))>x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x381 = INT32_MIN;
	uint8_t x384 = 0U;
	static volatile int32_t t89 = -59;

    t89 = ((x381*(x382%x383))>x384);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x385 = -11467;
	static uint64_t x386 = UINT64_MAX;
	static uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t90 = 95;

    t90 = ((x385*(x386%x387))>x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	volatile int32_t t91 = 3391;

    t91 = ((x389*(x390%x391))>x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x393 = 1U;
	int16_t x394 = 2548;
	volatile uint8_t x395 = UINT8_MAX;
	int32_t t92 = 31;

    t92 = ((x393*(x394%x395))>x396);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = INT32_MIN;
	volatile uint16_t x398 = 7505U;
	volatile uint8_t x400 = 62U;
	static int32_t t93 = 152;

    t93 = ((x397*(x398%x399))>x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x402 = -1;
	volatile int64_t x403 = 2768393178383LL;
	volatile int32_t t94 = -31;

    t94 = ((x401*(x402%x403))>x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x408 = INT64_MIN;
	volatile int32_t t95 = 79905;

    t95 = ((x405*(x406%x407))>x408);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile int16_t x410 = -1;
	uint16_t x411 = 554U;
	static int64_t x412 = -1LL;
	volatile int32_t t96 = -1327;

    t96 = ((x409*(x410%x411))>x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x413 = 429;
	int32_t x414 = 11;
	uint8_t x415 = 46U;
	volatile int32_t x416 = -14;

    t97 = ((x413*(x414%x415))>x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x422 = INT64_MIN;
	volatile uint64_t x423 = 6769121954984712429LLU;

    t98 = ((x421*(x422%x423))>x424);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x425 = 1U;
	uint32_t x426 = 296199220U;
	uint8_t x427 = 42U;
	int64_t x428 = -1LL;

    t99 = ((x425*(x426%x427))>x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x433 = UINT64_MAX;
	uint64_t x434 = 31LLU;
	volatile int8_t x435 = -1;
	int64_t x436 = INT64_MAX;
	volatile int32_t t100 = -154614;

    t100 = ((x433*(x434%x435))>x436);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x437 = 0;
	volatile uint64_t x438 = UINT64_MAX;
	static int16_t x439 = 2;
	static volatile int32_t t101 = 123526449;

    t101 = ((x437*(x438%x439))>x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x441 = UINT8_MAX;
	static int8_t x442 = INT8_MAX;
	static int16_t x443 = INT16_MIN;
	volatile int32_t x444 = INT32_MIN;

    t102 = ((x441*(x442%x443))>x444);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint32_t x445 = 844U;
	int8_t x447 = 21;
	uint16_t x448 = 1U;
	static volatile int32_t t103 = 4113;

    t103 = ((x445*(x446%x447))>x448);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MIN;
	volatile int64_t x450 = INT64_MIN;
	int32_t x451 = -1;
	static int64_t x452 = -33349955040LL;

    t104 = ((x449*(x450%x451))>x452);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x454 = UINT16_MAX;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t105 = -1344;

    t105 = ((x453*(x454%x455))>x456);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x458 = -43;
	uint64_t x459 = 7671571131689LLU;
	int16_t x460 = INT16_MIN;

    t106 = ((x457*(x458%x459))>x460);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	static int32_t x463 = -1;
	uint64_t x464 = UINT64_MAX;
	static volatile int32_t t107 = -39;

    t107 = ((x461*(x462%x463))>x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x465 = 46U;
	int64_t x467 = INT64_MIN;
	static volatile int64_t x468 = INT64_MAX;
	int32_t t108 = -1692590;

    t108 = ((x465*(x466%x467))>x468);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x473 = UINT8_MAX;
	static int8_t x475 = -1;
	int32_t x476 = INT32_MIN;
	static volatile int32_t t109 = 13435;

    t109 = ((x473*(x474%x475))>x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x477 = UINT64_MAX;
	uint16_t x478 = UINT16_MAX;
	static int32_t x480 = INT32_MIN;
	volatile int32_t t110 = -2627;

    t110 = ((x477*(x478%x479))>x480);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x481 = INT16_MIN;
	static int64_t x482 = INT64_MIN;
	static uint64_t x483 = 57LLU;
	int64_t x484 = INT64_MIN;
	volatile int32_t t111 = -203212;

    t111 = ((x481*(x482%x483))>x484);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x486 = -6;
	int64_t x487 = -1LL;
	int16_t x488 = INT16_MIN;
	volatile int32_t t112 = -576;

    t112 = ((x485*(x486%x487))>x488);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t t113 = -1265646;

    t113 = ((x493*(x494%x495))>x496);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x497 = 115U;
	static int8_t x498 = INT8_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t114 = 1;

    t114 = ((x497*(x498%x499))>x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x501 = UINT64_MAX;
	int32_t x502 = INT32_MIN;
	uint16_t x503 = UINT16_MAX;
	volatile int8_t x504 = INT8_MIN;
	static int32_t t115 = -454681;

    t115 = ((x501*(x502%x503))>x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = INT16_MAX;
	static int32_t x506 = -1;
	volatile uint16_t x507 = UINT16_MAX;
	static uint32_t x508 = 151U;
	int32_t t116 = -46;

    t116 = ((x505*(x506%x507))>x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = INT8_MIN;
	volatile uint32_t x510 = UINT32_MAX;
	int32_t x512 = INT32_MIN;
	int32_t t117 = -3565;

    t117 = ((x509*(x510%x511))>x512);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x513 = INT8_MIN;
	int64_t x514 = -16265488107LL;
	uint32_t x515 = 26U;
	int64_t x516 = INT64_MIN;
	int32_t t118 = 8245124;

    t118 = ((x513*(x514%x515))>x516);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x517 = 254;
	static volatile int8_t x518 = INT8_MAX;
	int32_t x519 = 11057;
	uint32_t x520 = UINT32_MAX;
	int32_t t119 = -167;

    t119 = ((x517*(x518%x519))>x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x521 = INT8_MIN;
	volatile uint64_t x522 = 6719153096211LLU;
	uint16_t x523 = 489U;
	int32_t t120 = -1290276;

    t120 = ((x521*(x522%x523))>x524);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x525 = 2U;
	volatile int64_t x526 = INT64_MIN;
	static uint64_t x527 = 3245LLU;
	uint16_t x528 = 28U;
	volatile int32_t t121 = -781288;

    t121 = ((x525*(x526%x527))>x528);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = -1LL;
	uint16_t x531 = 27U;
	volatile int32_t t122 = -196027752;

    t122 = ((x529*(x530%x531))>x532);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint64_t x533 = 828381784775515LLU;
	int8_t x534 = -12;
	uint32_t x536 = 27705U;

    t123 = ((x533*(x534%x535))>x536);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x541 = UINT32_MAX;
	int64_t x543 = INT64_MIN;
	uint64_t x544 = 197024364929645LLU;
	volatile int32_t t124 = -5052;

    t124 = ((x541*(x542%x543))>x544);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x547 = -13;
	volatile int64_t x548 = -245LL;
	volatile int32_t t125 = 10645137;

    t125 = ((x545*(x546%x547))>x548);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x549 = UINT32_MAX;
	int32_t x551 = -1;
	uint64_t x552 = UINT64_MAX;

    t126 = ((x549*(x550%x551))>x552);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x553 = 101U;
	uint8_t x554 = 10U;
	int32_t x555 = 3;
	int16_t x556 = -1;
	static int32_t t127 = 297666;

    t127 = ((x553*(x554%x555))>x556);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x557 = -1;
	volatile uint16_t x559 = UINT16_MAX;
	static int16_t x560 = INT16_MIN;
	static int32_t t128 = 695;

    t128 = ((x557*(x558%x559))>x560);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x561 = INT32_MAX;
	static int64_t x563 = 329745491LL;
	int32_t x564 = INT32_MAX;
	volatile int32_t t129 = -116;

    t129 = ((x561*(x562%x563))>x564);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x565 = -367805;
	volatile uint16_t x566 = UINT16_MAX;
	uint16_t x567 = UINT16_MAX;
	int16_t x568 = 455;
	volatile int32_t t130 = 62;

    t130 = ((x565*(x566%x567))>x568);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int8_t x570 = 0;
	uint64_t x571 = 54703378486775826LLU;
	int32_t t131 = 0;

    t131 = ((x569*(x570%x571))>x572);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x573 = UINT32_MAX;
	static int32_t x574 = INT32_MIN;
	volatile int64_t x575 = -3463156438788246LL;
	int64_t x576 = INT64_MAX;
	int32_t t132 = -5072;

    t132 = ((x573*(x574%x575))>x576);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x577 = 0U;
	uint8_t x578 = UINT8_MAX;
	volatile int8_t x579 = -1;
	volatile int16_t x580 = INT16_MIN;
	volatile int32_t t133 = -290;

    t133 = ((x577*(x578%x579))>x580);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x582 = INT8_MIN;
	int32_t x584 = INT32_MAX;
	int32_t t134 = -15442;

    t134 = ((x581*(x582%x583))>x584);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x585 = -4158496306LL;
	int64_t x587 = -1LL;
	int8_t x588 = INT8_MIN;
	volatile int32_t t135 = 19;

    t135 = ((x585*(x586%x587))>x588);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x590 = 3717436U;
	int64_t x592 = -1LL;
	volatile int32_t t136 = 1170;

    t136 = ((x589*(x590%x591))>x592);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x593 = -1832;
	volatile int8_t x594 = INT8_MIN;
	uint8_t x595 = 62U;
	int32_t x596 = INT32_MIN;
	static volatile int32_t t137 = -15922497;

    t137 = ((x593*(x594%x595))>x596);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x601 = -5;
	volatile int64_t x602 = -1LL;
	volatile int64_t x603 = INT64_MAX;
	static int64_t x604 = INT64_MAX;
	int32_t t138 = 17954076;

    t138 = ((x601*(x602%x603))>x604);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x611 = INT32_MIN;
	volatile int32_t x612 = INT32_MAX;
	volatile int32_t t139 = 31;

    t139 = ((x609*(x610%x611))>x612);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	static uint8_t x614 = 0U;
	uint16_t x615 = 2351U;
	volatile int32_t t140 = 2771;

    t140 = ((x613*(x614%x615))>x616);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = INT8_MIN;
	static int8_t x619 = INT8_MIN;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t141 = 89;

    t141 = ((x617*(x618%x619))>x620);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x621 = 26120683U;
	int16_t x622 = -1;
	static int32_t t142 = -782301;

    t142 = ((x621*(x622%x623))>x624);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x625 = 14U;
	int16_t x626 = -1;
	int64_t x627 = INT64_MIN;

    t143 = ((x625*(x626%x627))>x628);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x631 = 135346;
	uint64_t x632 = 1LLU;

    t144 = ((x629*(x630%x631))>x632);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x633 = 2913U;
	int32_t x634 = INT32_MAX;
	uint64_t x635 = UINT64_MAX;
	static int32_t x636 = -104404518;
	int32_t t145 = 6970152;

    t145 = ((x633*(x634%x635))>x636);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x637 = INT8_MAX;
	uint32_t x638 = 20021105U;
	int32_t x640 = 1;
	int32_t t146 = -14085;

    t146 = ((x637*(x638%x639))>x640);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x641 = -14971;
	static uint8_t x642 = 0U;
	uint16_t x643 = 1U;
	int32_t x644 = INT32_MIN;
	int32_t t147 = 0;

    t147 = ((x641*(x642%x643))>x644);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x645 = 86U;
	static uint64_t x646 = 15182LLU;
	static volatile int8_t x647 = INT8_MIN;
	uint64_t x648 = 175LLU;

    t148 = ((x645*(x646%x647))>x648);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x649 = 0;
	int8_t x650 = -1;
	int16_t x651 = -1;
	static volatile int16_t x652 = INT16_MIN;

    t149 = ((x649*(x650%x651))>x652);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x654 = 2U;
	int64_t x655 = 158335157162LL;
	static volatile uint16_t x656 = UINT16_MAX;
	int32_t t150 = -24906;

    t150 = ((x653*(x654%x655))>x656);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x665 = INT64_MIN;
	static int32_t x668 = INT32_MIN;
	int32_t t151 = -20767084;

    t151 = ((x665*(x666%x667))>x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = -1LL;
	int16_t x671 = 3;
	int64_t x672 = INT64_MIN;
	volatile int32_t t152 = 35504826;

    t152 = ((x669*(x670%x671))>x672);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x673 = INT32_MIN;
	uint16_t x674 = 1U;
	volatile int32_t x675 = 377361334;
	int32_t t153 = 27824;

    t153 = ((x673*(x674%x675))>x676);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x679 = INT64_MIN;
	volatile int32_t x680 = INT32_MIN;

    t154 = ((x677*(x678%x679))>x680);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = 1977LL;
	uint8_t x682 = 10U;
	static int64_t x683 = INT64_MIN;
	static uint8_t x684 = UINT8_MAX;
	volatile int32_t t155 = -165;

    t155 = ((x681*(x682%x683))>x684);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x685 = -1LL;
	volatile int16_t x686 = INT16_MIN;
	uint8_t x687 = 18U;
	int16_t x688 = INT16_MAX;
	volatile int32_t t156 = -939745731;

    t156 = ((x685*(x686%x687))>x688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x691 = INT16_MIN;
	int32_t x692 = INT32_MAX;
	volatile int32_t t157 = 1;

    t157 = ((x689*(x690%x691))>x692);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x694 = INT8_MAX;
	int32_t x696 = -8037;

    t158 = ((x693*(x694%x695))>x696);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = -1;
	static int32_t x698 = -1;
	uint16_t x699 = UINT16_MAX;
	int32_t x700 = INT32_MIN;

    t159 = ((x697*(x698%x699))>x700);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x701 = 0U;
	int8_t x702 = -18;
	volatile uint16_t x703 = UINT16_MAX;
	int64_t x704 = INT64_MIN;

    t160 = ((x701*(x702%x703))>x704);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x707 = UINT8_MAX;
	int32_t t161 = 139681;

    t161 = ((x705*(x706%x707))>x708);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x709 = UINT32_MAX;
	static int64_t x710 = INT64_MIN;
	static int32_t x711 = -1;
	volatile int32_t t162 = 1176;

    t162 = ((x709*(x710%x711))>x712);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = -1;
	static uint8_t x714 = 24U;
	int8_t x715 = -6;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t163 = 14;

    t163 = ((x713*(x714%x715))>x716);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x718 = 17135192LL;
	int64_t x719 = 1649270536048LL;
	int8_t x720 = -1;
	volatile int32_t t164 = -1;

    t164 = ((x717*(x718%x719))>x720);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x724 = INT16_MIN;
	int32_t t165 = 1;

    t165 = ((x721*(x722%x723))>x724);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int32_t x727 = -1;

    t166 = ((x725*(x726%x727))>x728);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x730 = 228945647LLU;
	int16_t x731 = -1;
	int8_t x732 = -1;
	static int32_t t167 = 15217089;

    t167 = ((x729*(x730%x731))>x732);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x733 = 7U;
	volatile uint8_t x735 = 1U;
	static uint8_t x736 = 6U;
	volatile int32_t t168 = -55;

    t168 = ((x733*(x734%x735))>x736);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x737 = INT32_MIN;
	volatile uint64_t x739 = UINT64_MAX;
	int16_t x740 = INT16_MIN;
	volatile int32_t t169 = 35;

    t169 = ((x737*(x738%x739))>x740);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x741 = INT16_MIN;
	volatile int32_t x742 = INT32_MAX;
	int32_t x743 = -1;
	volatile uint32_t x744 = 530133021U;

    t170 = ((x741*(x742%x743))>x744);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x753 = 1909030680U;
	int64_t x754 = -1LL;
	int16_t x755 = INT16_MAX;
	int8_t x756 = -7;
	static volatile int32_t t171 = -42;

    t171 = ((x753*(x754%x755))>x756);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MIN;
	int64_t x759 = -60867663484LL;
	int16_t x760 = INT16_MAX;
	int32_t t172 = -59618531;

    t172 = ((x757*(x758%x759))>x760);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x761 = 71308228602713760LL;
	int32_t t173 = 14;

    t173 = ((x761*(x762%x763))>x764);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x766 = UINT64_MAX;
	int8_t x767 = -1;
	uint32_t x768 = 1735076U;
	volatile int32_t t174 = -243130579;

    t174 = ((x765*(x766%x767))>x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x769 = 631152148LLU;
	int64_t x770 = 443097854503979573LL;
	static int16_t x771 = INT16_MIN;
	int16_t x772 = -5866;
	int32_t t175 = 0;

    t175 = ((x769*(x770%x771))>x772);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x774 = -279551267;
	static int16_t x775 = INT16_MIN;
	uint8_t x776 = 7U;
	volatile int32_t t176 = 64728275;

    t176 = ((x773*(x774%x775))>x776);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x781 = -106147;
	int64_t x782 = -1LL;
	int32_t x783 = -1;
	int16_t x784 = 115;
	volatile int32_t t177 = -63503;

    t177 = ((x781*(x782%x783))>x784);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	volatile int8_t x787 = INT8_MIN;
	static int32_t t178 = 3569;

    t178 = ((x785*(x786%x787))>x788);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x793 = UINT16_MAX;
	volatile int16_t x794 = 2182;
	static int8_t x795 = INT8_MIN;
	uint16_t x796 = UINT16_MAX;
	int32_t t179 = 43;

    t179 = ((x793*(x794%x795))>x796);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x797 = 1146418890766564678LL;
	static volatile uint64_t x798 = 16285904324260251LLU;
	volatile uint32_t x799 = UINT32_MAX;
	int64_t x800 = -30374098031850LL;
	int32_t t180 = -15708109;

    t180 = ((x797*(x798%x799))>x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x801 = -1;
	static volatile uint16_t x802 = 50U;
	int16_t x803 = -1;
	int32_t t181 = 7587203;

    t181 = ((x801*(x802%x803))>x804);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x805 = UINT8_MAX;
	int8_t x806 = INT8_MAX;
	int64_t x807 = INT64_MIN;
	int16_t x808 = INT16_MIN;
	static int32_t t182 = 1779;

    t182 = ((x805*(x806%x807))>x808);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x809 = UINT8_MAX;
	int32_t x810 = -1;
	static int16_t x811 = 60;

    t183 = ((x809*(x810%x811))>x812);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x813 = INT8_MAX;
	uint16_t x814 = 8843U;
	static int64_t x815 = 3347329293738LL;
	static int8_t x816 = 9;
	int32_t t184 = -381;

    t184 = ((x813*(x814%x815))>x816);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x817 = 47U;
	int16_t x818 = -57;
	int32_t x819 = INT32_MIN;
	int16_t x820 = -1;
	int32_t t185 = -16167353;

    t185 = ((x817*(x818%x819))>x820);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x821 = -1;
	uint64_t x822 = UINT64_MAX;
	int64_t x823 = INT64_MIN;
	int16_t x824 = INT16_MIN;
	volatile int32_t t186 = 1233432;

    t186 = ((x821*(x822%x823))>x824);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x825 = -1;
	int64_t x826 = -1LL;
	uint64_t x827 = 4165684659234LLU;
	volatile int32_t x828 = -79655825;
	int32_t t187 = 4427;

    t187 = ((x825*(x826%x827))>x828);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x829 = INT16_MIN;
	static uint32_t x830 = UINT32_MAX;
	volatile int64_t x831 = INT64_MIN;
	static uint16_t x832 = UINT16_MAX;
	int32_t t188 = -5;

    t188 = ((x829*(x830%x831))>x832);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x833 = INT16_MIN;
	volatile int64_t x834 = 15341491425121LL;
	static int64_t x835 = -1LL;
	int16_t x836 = INT16_MIN;
	int32_t t189 = 59;

    t189 = ((x833*(x834%x835))>x836);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x837 = INT8_MIN;
	volatile int32_t x838 = 13393499;
	static int8_t x839 = 1;
	static int16_t x840 = INT16_MAX;
	static volatile int32_t t190 = 15732172;

    t190 = ((x837*(x838%x839))>x840);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x841 = INT32_MAX;
	static uint32_t x843 = 284808528U;
	static uint64_t x844 = 1885421873018LLU;
	static int32_t t191 = -8449;

    t191 = ((x841*(x842%x843))>x844);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x846 = INT8_MIN;
	volatile uint64_t x847 = 9331LLU;
	int8_t x848 = -1;
	static volatile int32_t t192 = -47;

    t192 = ((x845*(x846%x847))>x848);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x849 = UINT8_MAX;
	static int16_t x850 = INT16_MIN;
	uint8_t x851 = UINT8_MAX;
	volatile int16_t x852 = INT16_MIN;
	volatile int32_t t193 = -61886;

    t193 = ((x849*(x850%x851))>x852);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x853 = INT8_MIN;
	static volatile int16_t x854 = -1;
	int64_t x855 = INT64_MAX;
	uint64_t x856 = 145387LLU;
	int32_t t194 = 2;

    t194 = ((x853*(x854%x855))>x856);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x859 = INT16_MAX;
	int8_t x860 = -1;
	static volatile int32_t t195 = -38689099;

    t195 = ((x857*(x858%x859))>x860);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x865 = -1LL;
	volatile int32_t x866 = INT32_MAX;
	uint64_t x867 = 236149689412315LLU;
	uint64_t x868 = 6911164587817395LLU;
	volatile int32_t t196 = -9467370;

    t196 = ((x865*(x866%x867))>x868);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x869 = 0U;
	int8_t x871 = INT8_MAX;
	volatile int16_t x872 = -207;
	volatile int32_t t197 = -1182185;

    t197 = ((x869*(x870%x871))>x872);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x873 = -1000461LL;
	int32_t x874 = 25;
	static volatile uint32_t x875 = 49649U;
	volatile int32_t x876 = 270;
	static volatile int32_t t198 = 3842;

    t198 = ((x873*(x874%x875))>x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x877 = INT8_MIN;
	volatile int64_t x878 = -1LL;
	static int16_t x879 = -1;
	int32_t x880 = -1;
	int32_t t199 = 1;

    t199 = ((x877*(x878%x879))>x880);

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

