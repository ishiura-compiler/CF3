
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

int8_t x1 = 29;
int16_t x4 = INT16_MIN;
int16_t x7 = -2;
int32_t x8 = INT32_MIN;
uint64_t x29 = 58646052LLU;
int64_t x32 = -1LL;
volatile int32_t x34 = -305;
volatile uint64_t x42 = UINT64_MAX;
uint64_t x44 = 144989LLU;
int8_t x48 = 3;
uint16_t x60 = 96U;
int8_t x69 = INT8_MAX;
static int64_t x71 = -871933064020LL;
uint8_t x73 = 2U;
int16_t x75 = INT16_MAX;
int8_t x78 = INT8_MIN;
static volatile uint32_t x79 = 4154135U;
int16_t x80 = INT16_MAX;
uint16_t x82 = UINT16_MAX;
volatile uint64_t x89 = 858695107687573763LLU;
uint32_t x90 = 209U;
uint8_t x104 = 74U;
volatile int16_t x112 = 0;
int32_t t19 = 1664;
static uint8_t x117 = 115U;
int32_t x125 = -1;
static int64_t x126 = -1LL;
uint64_t x127 = 444685753107736LLU;
int32_t t22 = -1026552571;
int64_t x131 = -1LL;
uint32_t x133 = UINT32_MAX;
int32_t x134 = INT32_MIN;
int16_t x141 = -1;
volatile uint8_t x143 = UINT8_MAX;
uint8_t x166 = 27U;
volatile int32_t t29 = 3156560;
int8_t x176 = INT8_MAX;
uint8_t x184 = 118U;
int32_t t33 = 774019;
int16_t x188 = -1840;
int16_t x196 = INT16_MIN;
uint64_t x201 = 2895469665LLU;
int8_t x209 = -1;
int64_t x210 = INT64_MIN;
int8_t x217 = 50;
int32_t t41 = 120;
uint32_t x230 = UINT32_MAX;
int8_t x232 = -1;
int16_t x246 = INT16_MAX;
volatile uint32_t x248 = 0U;
int16_t x250 = -1;
int32_t t46 = -2;
uint16_t x254 = 9U;
static uint16_t x259 = UINT16_MAX;
int16_t x264 = 1;
volatile int32_t t49 = 204324;
volatile int16_t x271 = -11;
volatile int16_t x272 = -1;
int64_t x275 = -120241544953LL;
int8_t x276 = INT8_MIN;
int8_t x286 = 1;
volatile int16_t x288 = INT16_MAX;
uint8_t x289 = UINT8_MAX;
static int8_t x290 = -1;
volatile uint8_t x292 = UINT8_MAX;
static volatile int32_t t58 = 717355;
int64_t x305 = INT64_MAX;
uint16_t x307 = UINT16_MAX;
volatile int32_t t59 = -23402;
volatile int32_t x312 = -1;
int8_t x319 = INT8_MIN;
int16_t x323 = INT16_MIN;
volatile int32_t t63 = 33259648;
static volatile int32_t t65 = 297;
volatile int32_t t66 = -458864;
static int32_t x343 = 35;
uint8_t x346 = 25U;
static int8_t x347 = -1;
static volatile int32_t t68 = 86987545;
static int8_t x349 = INT8_MAX;
uint8_t x358 = 50U;
volatile int16_t x371 = INT16_MIN;
volatile uint64_t x379 = 38648121LLU;
int16_t x381 = INT16_MIN;
uint8_t x382 = UINT8_MAX;
static volatile uint16_t x390 = 1U;
volatile int32_t t76 = -15165;
uint32_t x400 = 73915U;
volatile int32_t t79 = 200951;
uint64_t x413 = 3153023367LLU;
volatile int32_t t81 = -2835384;
int32_t x421 = -87;
int8_t x423 = INT8_MIN;
uint32_t x426 = UINT32_MAX;
volatile uint64_t x434 = 115294918712LLU;
int64_t x435 = -1300097403369772LL;
int16_t x436 = INT16_MAX;
int8_t x438 = -3;
uint8_t x442 = UINT8_MAX;
uint8_t x455 = 3U;
int32_t t89 = 783355;
volatile int32_t x459 = INT32_MIN;
static volatile int32_t t90 = -923;
int64_t x471 = -1LL;
volatile int32_t t91 = 1629;
volatile int32_t x474 = INT32_MAX;
volatile int32_t x476 = -53;
volatile int32_t t92 = -24689;
static volatile int8_t x477 = -9;
volatile uint32_t x479 = 5273U;
uint8_t x485 = UINT8_MAX;
uint8_t x488 = 3U;
static int16_t x490 = 542;
int8_t x506 = INT8_MIN;
volatile int64_t x514 = 26LL;
uint8_t x515 = 17U;
int8_t x516 = 11;
int32_t t100 = 5;
volatile int64_t x519 = INT64_MIN;
volatile int32_t t102 = -11967;
volatile uint16_t x552 = UINT16_MAX;
uint32_t x563 = 147U;
int8_t x569 = -1;
static uint8_t x585 = UINT8_MAX;
uint8_t x588 = 2U;
int32_t t110 = -4;
static int16_t x593 = INT16_MIN;
uint32_t x603 = 10U;
volatile int64_t x604 = 359440801090LL;
int64_t x609 = -1LL;
volatile int8_t x611 = 21;
int32_t x619 = INT32_MAX;
static int16_t x629 = -1;
int16_t x632 = INT16_MAX;
volatile int32_t t118 = 110526173;
uint64_t x642 = 31348LLU;
volatile uint64_t x651 = 741057940LLU;
volatile int32_t t120 = -253;
int64_t x654 = -1LL;
int32_t x676 = 51751943;
int16_t x677 = INT16_MAX;
int32_t t129 = 1908;
int16_t x699 = -11318;
int32_t t130 = 10610173;
int16_t x705 = INT16_MIN;
uint64_t x707 = UINT64_MAX;
volatile int16_t x711 = 60;
int32_t t132 = -3360497;
int64_t x713 = 26LL;
int32_t x715 = -1;
int16_t x719 = INT16_MIN;
int16_t x720 = INT16_MIN;
int8_t x724 = INT8_MAX;
int16_t x725 = INT16_MIN;
int64_t x734 = -1LL;
volatile int32_t t137 = -5019691;
uint8_t x743 = 7U;
static volatile int16_t x750 = INT16_MIN;
int32_t t141 = -6;
uint16_t x755 = UINT16_MAX;
int64_t x762 = INT64_MAX;
int32_t t144 = -1623598;
int32_t x766 = -1;
int32_t t145 = 107306;
static uint8_t x771 = UINT8_MAX;
int64_t x772 = -1LL;
volatile int32_t t146 = -2;
int64_t x776 = -1LL;
int16_t x778 = INT16_MAX;
volatile int32_t t149 = 663089022;
int32_t t150 = -75901;
static int8_t x798 = INT8_MIN;
static int16_t x799 = INT16_MAX;
int64_t x800 = INT64_MAX;
uint64_t x802 = UINT64_MAX;
int32_t x803 = -1;
static uint32_t x820 = UINT32_MAX;
static volatile int32_t t156 = 6;
static int32_t x829 = 0;
uint32_t x832 = 9777U;
uint64_t x846 = 1193490024540358LLU;
static volatile int32_t t162 = -12051793;
uint64_t x854 = 130270363633LLU;
int32_t t167 = 3;
int8_t x873 = INT8_MAX;
static int32_t x874 = -35;
volatile int32_t t168 = -698445726;
uint16_t x879 = 3667U;
int8_t x886 = INT8_MIN;
static int64_t x894 = -14080129052LL;
int32_t t173 = 1;
int64_t x908 = INT64_MIN;
static int32_t t175 = -87;
volatile int32_t x909 = -1;
int32_t x910 = INT32_MAX;
static int8_t x912 = INT8_MAX;
int8_t x928 = -1;
static int32_t x931 = -415;
static uint16_t x953 = 3U;
volatile int32_t t185 = -48515;
volatile int64_t x957 = -1LL;
int64_t x991 = -48712907983LL;
int16_t x993 = INT16_MIN;
static int32_t t193 = 112920634;
int8_t x1007 = INT8_MAX;
int32_t t195 = 34962657;
int64_t x1013 = -1LL;
int64_t x1016 = -1LL;
volatile int32_t t197 = 0;
int32_t t198 = 138;
uint16_t x1023 = 712U;


void f0(void) {
    	static uint8_t x2 = 116U;
	int8_t x3 = -1;
	volatile int32_t t0 = 614;

    t0 = ((x1*(x2^x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	uint64_t x6 = 111212LLU;
	static volatile int32_t t1 = 76362;

    t1 = ((x5*(x6^x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = -1;
	uint16_t x14 = 455U;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t2 = 4;

    t2 = ((x13*(x14^x15))<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 44U;
	uint64_t x24 = 3255LLU;
	volatile int32_t t3 = 1;

    t3 = ((x21*(x22^x23))<=x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x30 = INT32_MIN;
	volatile int64_t x31 = 167LL;
	volatile int32_t t4 = 1010590;

    t4 = ((x29*(x30^x31))<=x32);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = INT8_MAX;
	static int8_t x35 = INT8_MIN;
	static int8_t x36 = -1;
	volatile int32_t t5 = 76;

    t5 = ((x33*(x34^x35))<=x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = INT16_MAX;
	int8_t x43 = 6;
	volatile int32_t t6 = 4;

    t6 = ((x41*(x42^x43))<=x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x45 = INT8_MIN;
	uint16_t x46 = 1U;
	uint64_t x47 = 88963322500661575LLU;
	volatile int32_t t7 = 12260117;

    t7 = ((x45*(x46^x47))<=x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x49 = 0LLU;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = 20251712746145LL;
	volatile int32_t t8 = 5750266;

    t8 = ((x49*(x50^x51))<=x52);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = INT32_MAX;
	int64_t x54 = 6541114LL;
	uint32_t x55 = 1544658405U;
	int32_t x56 = INT32_MAX;
	int32_t t9 = 11717;

    t9 = ((x53*(x54^x55))<=x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x57 = 0U;
	volatile int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int32_t t10 = -429;

    t10 = ((x57*(x58^x59))<=x60);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x70 = -291;
	static volatile uint8_t x72 = 6U;
	int32_t t11 = 188;

    t11 = ((x69*(x70^x71))<=x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x74 = INT16_MAX;
	volatile int16_t x76 = -502;
	int32_t t12 = -4937243;

    t12 = ((x73*(x74^x75))<=x76);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x77 = 1091305U;
	static volatile int32_t t13 = -92437920;

    t13 = ((x77*(x78^x79))<=x80);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x81 = INT16_MIN;
	static uint8_t x83 = 124U;
	volatile int8_t x84 = INT8_MIN;
	int32_t t14 = 56342280;

    t14 = ((x81*(x82^x83))<=x84);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x85 = -1;
	volatile int8_t x86 = INT8_MAX;
	static int8_t x87 = -24;
	int16_t x88 = 5;
	int32_t t15 = 6622;

    t15 = ((x85*(x86^x87))<=x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x91 = INT8_MIN;
	uint8_t x92 = 16U;
	int32_t t16 = -3057378;

    t16 = ((x89*(x90^x91))<=x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 0U;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -118544;
	static int32_t t17 = -18768130;

    t17 = ((x93*(x94^x95))<=x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = 35U;
	int32_t x102 = -1;
	static uint16_t x103 = 6474U;
	int32_t t18 = -18504635;

    t18 = ((x101*(x102^x103))<=x104);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = INT64_MAX;
	uint32_t x110 = 113U;
	uint64_t x111 = 2518790076703907281LLU;

    t19 = ((x109*(x110^x111))<=x112);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x113 = 45U;
	volatile uint64_t x114 = 8LLU;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 5920LLU;
	static int32_t t20 = -489386547;

    t20 = ((x113*(x114^x115))<=x116);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = 17;
	volatile int32_t t21 = 59775050;

    t21 = ((x117*(x118^x119))<=x120);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x128 = 9441U;

    t22 = ((x125*(x126^x127))<=x128);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t23 = 6198;

    t23 = ((x129*(x130^x131))<=x132);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x135 = 6;
	int32_t x136 = INT32_MIN;
	int32_t t24 = -84150;

    t24 = ((x133*(x134^x135))<=x136);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile int8_t x138 = -2;
	int8_t x139 = -1;
	static volatile int8_t x140 = INT8_MAX;
	volatile int32_t t25 = 275;

    t25 = ((x137*(x138^x139))<=x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x142 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t26 = -46;

    t26 = ((x141*(x142^x143))<=x144);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = 4242;
	static uint32_t x146 = 31703U;
	int64_t x147 = -1LL;
	int8_t x148 = INT8_MIN;
	static int32_t t27 = 208276;

    t27 = ((x145*(x146^x147))<=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x153 = 5LLU;
	volatile int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MAX;
	int64_t x156 = 2332543146308978LL;
	volatile int32_t t28 = -403;

    t28 = ((x153*(x154^x155))<=x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x165 = 1;
	int32_t x167 = -5899;
	static int32_t x168 = INT32_MIN;

    t29 = ((x165*(x166^x167))<=x168);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x169 = INT16_MIN;
	static volatile int8_t x170 = 1;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = -13;
	int32_t t30 = -12416;

    t30 = ((x169*(x170^x171))<=x172);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x173 = 1U;
	static uint8_t x174 = UINT8_MAX;
	volatile int8_t x175 = INT8_MAX;
	int32_t t31 = -35538935;

    t31 = ((x173*(x174^x175))<=x176);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x177 = INT32_MAX;
	int32_t x178 = -1;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t32 = 31;

    t32 = ((x177*(x178^x179))<=x180);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x181 = 667315LLU;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;

    t33 = ((x181*(x182^x183))<=x184);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x185 = 3763569U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MAX;
	int32_t t34 = -1103064;

    t34 = ((x185*(x186^x187))<=x188);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x193 = 977995228722LLU;
	int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	int32_t t35 = 65279629;

    t35 = ((x193*(x194^x195))<=x196);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x202 = INT64_MIN;
	static int64_t x203 = -1LL;
	volatile uint16_t x204 = UINT16_MAX;
	int32_t t36 = -2284;

    t36 = ((x201*(x202^x203))<=x204);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x205 = 0U;
	int32_t x206 = -1;
	int16_t x207 = 651;
	uint8_t x208 = 116U;
	int32_t t37 = -960314451;

    t37 = ((x205*(x206^x207))<=x208);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x211 = 12165LL;
	int16_t x212 = INT16_MAX;
	int32_t t38 = 5684;

    t38 = ((x209*(x210^x211))<=x212);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x213 = -107049782481755LL;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 88U;
	uint8_t x216 = 43U;
	int32_t t39 = -6;

    t39 = ((x213*(x214^x215))<=x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x218 = 31U;
	uint64_t x219 = 1774146LLU;
	uint32_t x220 = 139U;
	volatile int32_t t40 = 1169;

    t40 = ((x217*(x218^x219))<=x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x221 = 31;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 3466LLU;
	static volatile uint8_t x224 = UINT8_MAX;

    t41 = ((x221*(x222^x223))<=x224);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x225 = 6U;
	int32_t x226 = -1;
	int32_t x227 = -1;
	int16_t x228 = INT16_MAX;
	static volatile int32_t t42 = 25197;

    t42 = ((x225*(x226^x227))<=x228);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x229 = -4391788994LL;
	int8_t x231 = -1;
	volatile int32_t t43 = -1;

    t43 = ((x229*(x230^x231))<=x232);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = 202388170896LL;
	int64_t x244 = 764351335320640683LL;
	int32_t t44 = 1;

    t44 = ((x241*(x242^x243))<=x244);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x245 = 7U;
	static int16_t x247 = INT16_MAX;
	int32_t t45 = -3190;

    t45 = ((x245*(x246^x247))<=x248);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = INT32_MAX;
	int8_t x251 = -1;
	static uint64_t x252 = UINT64_MAX;

    t46 = ((x249*(x250^x251))<=x252);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = -1;
	int16_t x255 = INT16_MIN;
	volatile uint64_t x256 = 14516082LLU;
	volatile int32_t t47 = -3188;

    t47 = ((x253*(x254^x255))<=x256);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 258U;
	uint32_t x260 = 35891U;
	volatile int32_t t48 = 31887780;

    t48 = ((x257*(x258^x259))<=x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x261 = -1;
	static uint16_t x262 = 2606U;
	static int64_t x263 = INT64_MAX;

    t49 = ((x261*(x262^x263))<=x264);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x265 = INT16_MIN;
	volatile uint64_t x266 = 123764970LLU;
	volatile int32_t x267 = -1;
	int64_t x268 = -1LL;
	volatile int32_t t50 = 253963115;

    t50 = ((x265*(x266^x267))<=x268);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x269 = 66418291U;
	uint8_t x270 = 24U;
	int32_t t51 = 5;

    t51 = ((x269*(x270^x271))<=x272);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x273 = -1;
	volatile int64_t x274 = INT64_MIN;
	int32_t t52 = 1;

    t52 = ((x273*(x274^x275))<=x276);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x281 = 79U;
	static int8_t x282 = 3;
	int16_t x283 = INT16_MAX;
	int32_t x284 = 0;
	volatile int32_t t53 = 133210567;

    t53 = ((x281*(x282^x283))<=x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x285 = 3357U;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int32_t t54 = 66307394;

    t54 = ((x285*(x286^x287))<=x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x291 = 1;
	int32_t t55 = 163441018;

    t55 = ((x289*(x290^x291))<=x292);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x293 = INT32_MIN;
	static uint32_t x294 = 768U;
	int8_t x295 = -9;
	volatile int32_t x296 = INT32_MIN;
	static int32_t t56 = -986;

    t56 = ((x293*(x294^x295))<=x296);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x297 = INT8_MAX;
	uint64_t x298 = 16331651294333LLU;
	static int8_t x299 = -1;
	static uint64_t x300 = 16978156164650LLU;
	int32_t t57 = 1;

    t57 = ((x297*(x298^x299))<=x300);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x301 = 0;
	uint32_t x302 = 6564U;
	static int16_t x303 = INT16_MAX;
	volatile int16_t x304 = 14355;

    t58 = ((x301*(x302^x303))<=x304);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x306 = UINT64_MAX;
	int8_t x308 = -1;

    t59 = ((x305*(x306^x307))<=x308);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x309 = UINT16_MAX;
	static volatile uint16_t x310 = 12U;
	uint32_t x311 = 10U;
	static int32_t t60 = -49712933;

    t60 = ((x309*(x310^x311))<=x312);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = INT16_MAX;
	uint16_t x314 = 2774U;
	static volatile uint8_t x315 = 74U;
	uint32_t x316 = UINT32_MAX;
	int32_t t61 = -1;

    t61 = ((x313*(x314^x315))<=x316);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint32_t x318 = UINT32_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t62 = 7;

    t62 = ((x317*(x318^x319))<=x320);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = -3182;
	uint8_t x322 = UINT8_MAX;
	int32_t x324 = INT32_MAX;

    t63 = ((x321*(x322^x323))<=x324);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x325 = 218U;
	volatile int16_t x326 = INT16_MAX;
	volatile int16_t x327 = -1;
	volatile int8_t x328 = 50;
	int32_t t64 = -16;

    t64 = ((x325*(x326^x327))<=x328);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	volatile int8_t x335 = -1;
	volatile uint32_t x336 = 1065769740U;

    t65 = ((x333*(x334^x335))<=x336);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x337 = 1812U;
	volatile int8_t x338 = INT8_MAX;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = -7;

    t66 = ((x337*(x338^x339))<=x340);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x341 = UINT8_MAX;
	static uint64_t x342 = 2852111487427914LLU;
	int16_t x344 = -1;
	int32_t t67 = -332180230;

    t67 = ((x341*(x342^x343))<=x344);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x345 = 275978319904089LLU;
	volatile uint32_t x348 = UINT32_MAX;

    t68 = ((x345*(x346^x347))<=x348);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x350 = INT64_MAX;
	volatile int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = 10503310279LLU;
	volatile int32_t t69 = -2824;

    t69 = ((x349*(x350^x351))<=x352);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x357 = 12846U;
	uint16_t x359 = 2375U;
	int32_t x360 = -190;
	volatile int32_t t70 = 29559579;

    t70 = ((x357*(x358^x359))<=x360);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x361 = -115;
	int8_t x362 = INT8_MAX;
	int16_t x363 = 53;
	static volatile int8_t x364 = INT8_MAX;
	volatile int32_t t71 = 126020;

    t71 = ((x361*(x362^x363))<=x364);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x369 = UINT32_MAX;
	int32_t x370 = 371872057;
	static int8_t x372 = INT8_MAX;
	int32_t t72 = 13329;

    t72 = ((x369*(x370^x371))<=x372);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x378 = 31U;
	volatile uint8_t x380 = 110U;
	volatile int32_t t73 = -130;

    t73 = ((x377*(x378^x379))<=x380);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x383 = -1;
	int8_t x384 = -5;
	int32_t t74 = 126;

    t74 = ((x381*(x382^x383))<=x384);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x385 = -1;
	int16_t x386 = 1454;
	volatile int8_t x387 = -1;
	static int32_t x388 = -1;
	volatile int32_t t75 = 14145761;

    t75 = ((x385*(x386^x387))<=x388);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x389 = -1LL;
	volatile int64_t x391 = INT64_MAX;
	uint32_t x392 = 4U;

    t76 = ((x389*(x390^x391))<=x392);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = 44U;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;
	int32_t t77 = -152138018;

    t77 = ((x393*(x394^x395))<=x396);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = -1;
	static int16_t x399 = -183;
	volatile int32_t t78 = -959;

    t78 = ((x397*(x398^x399))<=x400);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x405 = -1;
	int64_t x406 = -822913065LL;
	int8_t x407 = -1;
	static uint64_t x408 = UINT64_MAX;

    t79 = ((x405*(x406^x407))<=x408);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x409 = 243986206U;
	int32_t x410 = INT32_MIN;
	volatile int16_t x411 = -1;
	uint8_t x412 = 0U;
	int32_t t80 = -78027;

    t80 = ((x409*(x410^x411))<=x412);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x414 = 1355883943LLU;
	volatile uint8_t x415 = UINT8_MAX;
	volatile int64_t x416 = 106615977016LL;

    t81 = ((x413*(x414^x415))<=x416);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x417 = 19U;
	uint64_t x418 = 531LLU;
	int16_t x419 = 0;
	int64_t x420 = 3864523024LL;
	volatile int32_t t82 = 33;

    t82 = ((x417*(x418^x419))<=x420);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x422 = INT8_MIN;
	volatile int16_t x424 = -1;
	static int32_t t83 = 574824074;

    t83 = ((x421*(x422^x423))<=x424);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x425 = -1;
	int8_t x427 = INT8_MAX;
	volatile uint8_t x428 = 4U;
	int32_t t84 = 123488;

    t84 = ((x425*(x426^x427))<=x428);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x433 = INT64_MAX;
	volatile int32_t t85 = -24490296;

    t85 = ((x433*(x434^x435))<=x436);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x437 = UINT32_MAX;
	static uint32_t x439 = UINT32_MAX;
	int64_t x440 = -53969196893LL;
	volatile int32_t t86 = -1469;

    t86 = ((x437*(x438^x439))<=x440);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x441 = INT16_MAX;
	int16_t x443 = -16239;
	static uint64_t x444 = 85610610465LLU;
	int32_t t87 = 0;

    t87 = ((x441*(x442^x443))<=x444);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x449 = -1LL;
	volatile int32_t x450 = INT32_MAX;
	volatile uint16_t x451 = 184U;
	int16_t x452 = INT16_MAX;
	static volatile int32_t t88 = 14789;

    t88 = ((x449*(x450^x451))<=x452);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x453 = 1904LLU;
	volatile uint8_t x454 = 10U;
	volatile int64_t x456 = -1LL;

    t89 = ((x453*(x454^x455))<=x456);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x457 = 61710845156028LLU;
	static uint32_t x458 = 847U;
	int8_t x460 = 4;

    t90 = ((x457*(x458^x459))<=x460);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x469 = 3577642U;
	uint32_t x470 = UINT32_MAX;
	int8_t x472 = 10;

    t91 = ((x469*(x470^x471))<=x472);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x473 = 1000U;
	volatile uint32_t x475 = UINT32_MAX;

    t92 = ((x473*(x474^x475))<=x476);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x478 = INT8_MIN;
	volatile int8_t x480 = -1;
	static volatile int32_t t93 = -50;

    t93 = ((x477*(x478^x479))<=x480);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x486 = INT16_MIN;
	volatile int8_t x487 = INT8_MIN;
	int32_t t94 = 2188714;

    t94 = ((x485*(x486^x487))<=x488);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x489 = 0;
	static volatile int16_t x491 = INT16_MIN;
	uint64_t x492 = 61LLU;
	volatile int32_t t95 = -110005;

    t95 = ((x489*(x490^x491))<=x492);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x493 = 173U;
	static uint16_t x494 = 629U;
	uint64_t x495 = 28859045220LLU;
	int8_t x496 = 48;
	volatile int32_t t96 = -7;

    t96 = ((x493*(x494^x495))<=x496);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x497 = -1;
	int32_t x498 = 152;
	int8_t x499 = INT8_MIN;
	volatile int8_t x500 = INT8_MAX;
	static volatile int32_t t97 = -3728501;

    t97 = ((x497*(x498^x499))<=x500);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x505 = INT8_MAX;
	uint32_t x507 = 2U;
	uint16_t x508 = UINT16_MAX;
	int32_t t98 = -69297;

    t98 = ((x505*(x506^x507))<=x508);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x509 = -1;
	int64_t x510 = INT64_MIN;
	int8_t x511 = INT8_MAX;
	volatile int16_t x512 = -367;
	volatile int32_t t99 = -2478;

    t99 = ((x509*(x510^x511))<=x512);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x513 = -15;

    t100 = ((x513*(x514^x515))<=x516);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x517 = INT64_MIN;
	int64_t x518 = INT64_MIN;
	uint64_t x520 = 30536379913LLU;
	volatile int32_t t101 = 106;

    t101 = ((x517*(x518^x519))<=x520);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x545 = 1U;
	volatile uint8_t x546 = UINT8_MAX;
	static uint8_t x547 = UINT8_MAX;
	static int64_t x548 = 178LL;

    t102 = ((x545*(x546^x547))<=x548);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x549 = -1;
	volatile int32_t x550 = -1;
	uint32_t x551 = 946974401U;
	int32_t t103 = -3939;

    t103 = ((x549*(x550^x551))<=x552);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x553 = 2U;
	uint32_t x554 = 11992U;
	uint8_t x555 = UINT8_MAX;
	uint8_t x556 = 19U;
	static int32_t t104 = -464;

    t104 = ((x553*(x554^x555))<=x556);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x557 = -1;
	int8_t x558 = INT8_MAX;
	int16_t x559 = -631;
	volatile uint16_t x560 = 12985U;
	volatile int32_t t105 = 36497288;

    t105 = ((x557*(x558^x559))<=x560);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x561 = INT8_MIN;
	volatile uint16_t x562 = 9923U;
	int16_t x564 = INT16_MIN;
	int32_t t106 = -15424;

    t106 = ((x561*(x562^x563))<=x564);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x570 = 1;
	static int64_t x571 = INT64_MIN;
	int32_t x572 = -1;
	int32_t t107 = -3019;

    t107 = ((x569*(x570^x571))<=x572);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x573 = 6340U;
	volatile int8_t x574 = INT8_MIN;
	uint32_t x575 = UINT32_MAX;
	volatile uint64_t x576 = 777LLU;
	volatile int32_t t108 = -60;

    t108 = ((x573*(x574^x575))<=x576);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x586 = -2;
	int32_t x587 = -1;
	int32_t t109 = 11936837;

    t109 = ((x585*(x586^x587))<=x588);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x589 = 47923226U;
	int32_t x590 = INT32_MAX;
	uint8_t x591 = 77U;
	volatile int16_t x592 = INT16_MIN;

    t110 = ((x589*(x590^x591))<=x592);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x594 = 3;
	volatile uint32_t x595 = 35U;
	int64_t x596 = 8437LL;
	int32_t t111 = -232;

    t111 = ((x593*(x594^x595))<=x596);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x597 = 260;
	int64_t x598 = -105694LL;
	volatile uint64_t x599 = UINT64_MAX;
	volatile uint8_t x600 = 1U;
	int32_t t112 = -16221;

    t112 = ((x597*(x598^x599))<=x600);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = 2;
	static int32_t t113 = 113;

    t113 = ((x601*(x602^x603))<=x604);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x610 = 1304004;
	int16_t x612 = -1;
	volatile int32_t t114 = 135607;

    t114 = ((x609*(x610^x611))<=x612);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 4044LLU;
	int64_t x616 = -83697870132LL;
	volatile int32_t t115 = -2;

    t115 = ((x613*(x614^x615))<=x616);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x617 = -1;
	volatile int32_t x618 = INT32_MAX;
	int32_t x620 = INT32_MIN;
	volatile int32_t t116 = -11;

    t116 = ((x617*(x618^x619))<=x620);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x625 = -1LL;
	int32_t x626 = INT32_MIN;
	uint64_t x627 = 119767492579LLU;
	uint64_t x628 = 8278922181175803134LLU;
	int32_t t117 = -10913188;

    t117 = ((x625*(x626^x627))<=x628);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x630 = -1;
	uint8_t x631 = 3U;

    t118 = ((x629*(x630^x631))<=x632);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x641 = INT16_MAX;
	static uint8_t x643 = UINT8_MAX;
	static int64_t x644 = -4328377267456LL;
	int32_t t119 = -2534;

    t119 = ((x641*(x642^x643))<=x644);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = INT32_MIN;
	int64_t x652 = 8321524861LL;

    t120 = ((x649*(x650^x651))<=x652);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x653 = INT8_MIN;
	int32_t x655 = 0;
	int32_t x656 = -1;
	static int32_t t121 = -1;

    t121 = ((x653*(x654^x655))<=x656);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x661 = INT16_MIN;
	uint64_t x662 = 5068850030LLU;
	static uint32_t x663 = 2855359U;
	int64_t x664 = INT64_MIN;
	int32_t t122 = -245741;

    t122 = ((x661*(x662^x663))<=x664);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x669 = 148444345568LLU;
	uint8_t x670 = UINT8_MAX;
	static int8_t x671 = 1;
	static int16_t x672 = INT16_MAX;
	int32_t t123 = -613156418;

    t123 = ((x669*(x670^x671))<=x672);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x673 = -1;
	static int64_t x674 = -3LL;
	static int8_t x675 = 1;
	int32_t t124 = 1022449418;

    t124 = ((x673*(x674^x675))<=x676);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x678 = -1;
	uint64_t x679 = 1LLU;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t125 = 186868;

    t125 = ((x677*(x678^x679))<=x680);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x681 = INT64_MAX;
	volatile uint64_t x682 = UINT64_MAX;
	volatile int32_t x683 = INT32_MIN;
	uint8_t x684 = 116U;
	static int32_t t126 = 0;

    t126 = ((x681*(x682^x683))<=x684);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x685 = INT8_MIN;
	static int8_t x686 = INT8_MIN;
	uint64_t x687 = 5311195LLU;
	uint64_t x688 = UINT64_MAX;
	static int32_t t127 = 11201;

    t127 = ((x685*(x686^x687))<=x688);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x689 = 4693250416LLU;
	int8_t x690 = INT8_MIN;
	static int16_t x691 = 1;
	int64_t x692 = INT64_MIN;
	static int32_t t128 = -61578;

    t128 = ((x689*(x690^x691))<=x692);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x693 = UINT32_MAX;
	int64_t x694 = -1LL;
	int32_t x695 = -1;
	int8_t x696 = 3;

    t129 = ((x693*(x694^x695))<=x696);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x697 = INT16_MIN;
	static volatile uint32_t x698 = UINT32_MAX;
	uint32_t x700 = UINT32_MAX;

    t130 = ((x697*(x698^x699))<=x700);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x706 = -1;
	uint32_t x708 = UINT32_MAX;
	int32_t t131 = 28647;

    t131 = ((x705*(x706^x707))<=x708);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x710 = 174;
	int64_t x712 = INT64_MIN;

    t132 = ((x709*(x710^x711))<=x712);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x714 = INT32_MIN;
	int16_t x716 = -1;
	volatile int32_t t133 = -211;

    t133 = ((x713*(x714^x715))<=x716);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	int32_t t134 = -8;

    t134 = ((x717*(x718^x719))<=x720);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x721 = 2941471LL;
	int8_t x722 = INT8_MAX;
	volatile uint16_t x723 = 47U;
	int32_t t135 = 530388;

    t135 = ((x721*(x722^x723))<=x724);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x726 = 119867LLU;
	int8_t x727 = -1;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t136 = -6320294;

    t136 = ((x725*(x726^x727))<=x728);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x733 = UINT64_MAX;
	volatile uint16_t x735 = UINT16_MAX;
	int8_t x736 = -1;

    t137 = ((x733*(x734^x735))<=x736);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = 1011977LL;
	volatile uint8_t x739 = 1U;
	uint32_t x740 = 4085966U;
	int32_t t138 = 0;

    t138 = ((x737*(x738^x739))<=x740);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x741 = 1U;
	static int16_t x742 = -12;
	static uint64_t x744 = 25564458368379LLU;
	int32_t t139 = -9592;

    t139 = ((x741*(x742^x743))<=x744);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x745 = 168635U;
	uint8_t x746 = 37U;
	volatile int64_t x747 = -1LL;
	volatile int64_t x748 = INT64_MAX;
	int32_t t140 = 5326;

    t140 = ((x745*(x746^x747))<=x748);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x749 = 0;
	static int8_t x751 = -1;
	int8_t x752 = 1;

    t141 = ((x749*(x750^x751))<=x752);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x753 = 0;
	int16_t x754 = 0;
	uint32_t x756 = 233U;
	int32_t t142 = 2352368;

    t142 = ((x753*(x754^x755))<=x756);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x757 = -1LL;
	uint8_t x758 = 0U;
	static int32_t x759 = INT32_MIN;
	static volatile uint8_t x760 = 0U;
	int32_t t143 = -404318998;

    t143 = ((x757*(x758^x759))<=x760);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x761 = 1U;
	uint8_t x763 = UINT8_MAX;
	int64_t x764 = INT64_MAX;

    t144 = ((x761*(x762^x763))<=x764);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x765 = 4;
	int16_t x767 = INT16_MIN;
	int32_t x768 = INT32_MIN;

    t145 = ((x765*(x766^x767))<=x768);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x769 = UINT16_MAX;
	int16_t x770 = INT16_MIN;

    t146 = ((x769*(x770^x771))<=x772);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	static int32_t x775 = INT32_MIN;
	int32_t t147 = 63011;

    t147 = ((x773*(x774^x775))<=x776);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x777 = INT64_MIN;
	uint64_t x779 = 8472677973582282324LLU;
	uint8_t x780 = 10U;
	int32_t t148 = -23984;

    t148 = ((x777*(x778^x779))<=x780);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x781 = 50U;
	volatile int32_t x782 = -1;
	uint32_t x783 = 71708731U;
	static volatile uint32_t x784 = UINT32_MAX;

    t149 = ((x781*(x782^x783))<=x784);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x785 = INT64_MAX;
	int16_t x786 = 11197;
	static volatile uint64_t x787 = UINT64_MAX;
	static int64_t x788 = INT64_MAX;

    t150 = ((x785*(x786^x787))<=x788);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x789 = -1LL;
	static int16_t x790 = INT16_MIN;
	static uint64_t x791 = 15469LLU;
	uint32_t x792 = 323201U;
	volatile int32_t t151 = 5260;

    t151 = ((x789*(x790^x791))<=x792);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x797 = -1;
	int32_t t152 = -903555142;

    t152 = ((x797*(x798^x799))<=x800);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x801 = INT8_MIN;
	uint64_t x804 = 2169002LLU;
	volatile int32_t t153 = 767229;

    t153 = ((x801*(x802^x803))<=x804);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x813 = -1;
	int16_t x814 = INT16_MIN;
	volatile int32_t x815 = INT32_MIN;
	uint64_t x816 = UINT64_MAX;
	static int32_t t154 = -1;

    t154 = ((x813*(x814^x815))<=x816);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint32_t x818 = UINT32_MAX;
	int16_t x819 = 0;
	static volatile int32_t t155 = 11863804;

    t155 = ((x817*(x818^x819))<=x820);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x821 = -1;
	int8_t x822 = INT8_MIN;
	int64_t x823 = INT64_MAX;
	int64_t x824 = -1LL;

    t156 = ((x821*(x822^x823))<=x824);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x825 = 12;
	uint8_t x826 = UINT8_MAX;
	volatile int8_t x827 = 23;
	static int8_t x828 = INT8_MIN;
	static volatile int32_t t157 = -453739;

    t157 = ((x825*(x826^x827))<=x828);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x830 = 481U;
	static uint8_t x831 = 27U;
	int32_t t158 = -14934;

    t158 = ((x829*(x830^x831))<=x832);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x833 = 7940171U;
	int32_t x834 = -1738296;
	uint16_t x835 = UINT16_MAX;
	int16_t x836 = INT16_MIN;
	volatile int32_t t159 = -23360;

    t159 = ((x833*(x834^x835))<=x836);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x837 = 246437878;
	uint32_t x838 = UINT32_MAX;
	int16_t x839 = INT16_MIN;
	uint32_t x840 = 6171002U;
	int32_t t160 = -430224;

    t160 = ((x837*(x838^x839))<=x840);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x845 = INT16_MAX;
	int16_t x847 = INT16_MIN;
	int8_t x848 = -1;
	int32_t t161 = 13;

    t161 = ((x845*(x846^x847))<=x848);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x850 = 1229056LL;
	int16_t x851 = -1;
	uint8_t x852 = 1U;

    t162 = ((x849*(x850^x851))<=x852);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x853 = -5;
	int16_t x855 = 100;
	volatile uint32_t x856 = UINT32_MAX;
	volatile int32_t t163 = -1586896;

    t163 = ((x853*(x854^x855))<=x856);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x857 = INT16_MIN;
	static int64_t x858 = -1LL;
	int8_t x859 = INT8_MAX;
	static volatile uint64_t x860 = UINT64_MAX;
	volatile int32_t t164 = 113;

    t164 = ((x857*(x858^x859))<=x860);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x861 = 15301LL;
	volatile uint32_t x862 = UINT32_MAX;
	int8_t x863 = -1;
	volatile uint32_t x864 = UINT32_MAX;
	int32_t t165 = 31145876;

    t165 = ((x861*(x862^x863))<=x864);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x865 = -1;
	static uint32_t x866 = UINT32_MAX;
	int8_t x867 = -1;
	int64_t x868 = 5040663LL;
	volatile int32_t t166 = 2813088;

    t166 = ((x865*(x866^x867))<=x868);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x869 = INT8_MIN;
	static uint16_t x870 = UINT16_MAX;
	uint8_t x871 = 29U;
	uint64_t x872 = 55558924752284LLU;

    t167 = ((x869*(x870^x871))<=x872);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x875 = 0U;
	int32_t x876 = -1;

    t168 = ((x873*(x874^x875))<=x876);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x877 = UINT8_MAX;
	uint64_t x878 = 3538022LLU;
	static uint32_t x880 = UINT32_MAX;
	static volatile int32_t t169 = -14;

    t169 = ((x877*(x878^x879))<=x880);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x881 = -1792;
	static int8_t x882 = INT8_MIN;
	volatile uint8_t x883 = 28U;
	int16_t x884 = -7;
	volatile int32_t t170 = -7;

    t170 = ((x881*(x882^x883))<=x884);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x885 = 4;
	int64_t x887 = -1LL;
	static int64_t x888 = -1180LL;
	static int32_t t171 = -25799;

    t171 = ((x885*(x886^x887))<=x888);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x889 = -1;
	volatile int32_t x890 = INT32_MIN;
	int32_t x891 = INT32_MIN;
	uint8_t x892 = UINT8_MAX;
	static volatile int32_t t172 = 5167;

    t172 = ((x889*(x890^x891))<=x892);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x893 = -1;
	static int64_t x895 = INT64_MIN;
	int8_t x896 = -1;

    t173 = ((x893*(x894^x895))<=x896);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x897 = 98;
	uint8_t x898 = 1U;
	uint64_t x899 = UINT64_MAX;
	uint64_t x900 = 42330780833LLU;
	volatile int32_t t174 = -140;

    t174 = ((x897*(x898^x899))<=x900);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x905 = INT32_MIN;
	int8_t x906 = -1;
	uint32_t x907 = 341U;

    t175 = ((x905*(x906^x907))<=x908);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x911 = 16337U;
	int32_t t176 = -1;

    t176 = ((x909*(x910^x911))<=x912);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x913 = INT32_MIN;
	static int16_t x914 = INT16_MAX;
	int64_t x915 = -1LL;
	int16_t x916 = INT16_MIN;
	int32_t t177 = -2389919;

    t177 = ((x913*(x914^x915))<=x916);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x917 = -273314LL;
	volatile uint16_t x918 = 28U;
	volatile int16_t x919 = INT16_MAX;
	int8_t x920 = -1;
	int32_t t178 = -1;

    t178 = ((x917*(x918^x919))<=x920);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x921 = 0U;
	static uint64_t x922 = 102135564003854LLU;
	volatile int32_t x923 = INT32_MIN;
	int32_t x924 = 169;
	volatile int32_t t179 = 933097;

    t179 = ((x921*(x922^x923))<=x924);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x925 = INT32_MIN;
	int16_t x926 = INT16_MIN;
	int16_t x927 = INT16_MIN;
	int32_t t180 = 325652;

    t180 = ((x925*(x926^x927))<=x928);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x929 = UINT8_MAX;
	int64_t x930 = 2513401LL;
	int16_t x932 = -12505;
	int32_t t181 = 83;

    t181 = ((x929*(x930^x931))<=x932);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x933 = 1U;
	int16_t x934 = INT16_MIN;
	int32_t x935 = INT32_MAX;
	int16_t x936 = INT16_MAX;
	int32_t t182 = -13001475;

    t182 = ((x933*(x934^x935))<=x936);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x937 = 1U;
	volatile int32_t x938 = 1295256;
	static uint8_t x939 = 5U;
	uint8_t x940 = 5U;
	int32_t t183 = 36;

    t183 = ((x937*(x938^x939))<=x940);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x945 = 5792U;
	int8_t x946 = INT8_MIN;
	uint16_t x947 = 127U;
	volatile uint32_t x948 = 7U;
	int32_t t184 = -15554851;

    t184 = ((x945*(x946^x947))<=x948);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x954 = INT32_MAX;
	int64_t x955 = -1LL;
	volatile int32_t x956 = -5;

    t185 = ((x953*(x954^x955))<=x956);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x958 = INT64_MAX;
	int32_t x959 = -97;
	int8_t x960 = INT8_MAX;
	static volatile int32_t t186 = 2;

    t186 = ((x957*(x958^x959))<=x960);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x961 = 329U;
	int8_t x962 = 20;
	uint8_t x963 = 1U;
	int32_t x964 = INT32_MAX;
	int32_t t187 = 11720;

    t187 = ((x961*(x962^x963))<=x964);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x965 = 9;
	int64_t x966 = -1LL;
	int8_t x967 = INT8_MIN;
	int64_t x968 = -1106720304370735LL;
	int32_t t188 = -78;

    t188 = ((x965*(x966^x967))<=x968);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x969 = -1LL;
	int64_t x970 = -1LL;
	volatile int8_t x971 = INT8_MIN;
	int64_t x972 = INT64_MIN;
	static volatile int32_t t189 = -3;

    t189 = ((x969*(x970^x971))<=x972);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x977 = UINT16_MAX;
	int8_t x978 = 20;
	int16_t x979 = -1;
	int8_t x980 = -56;
	int32_t t190 = 120;

    t190 = ((x977*(x978^x979))<=x980);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x985 = -97;
	uint16_t x986 = 14959U;
	uint32_t x987 = UINT32_MAX;
	int16_t x988 = 1700;
	int32_t t191 = -2301;

    t191 = ((x985*(x986^x987))<=x988);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x989 = 1;
	int32_t x990 = 972;
	volatile int32_t x992 = INT32_MAX;
	int32_t t192 = 9305880;

    t192 = ((x989*(x990^x991))<=x992);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x994 = 7369860850641LLU;
	static uint16_t x995 = UINT16_MAX;
	static volatile uint64_t x996 = 7754LLU;

    t193 = ((x993*(x994^x995))<=x996);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1001 = -1;
	int32_t x1002 = INT32_MIN;
	volatile uint64_t x1003 = 37878LLU;
	int64_t x1004 = 12510159198425034LL;
	static int32_t t194 = -131711;

    t194 = ((x1001*(x1002^x1003))<=x1004);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x1005 = 2958789203718702343LLU;
	volatile uint64_t x1006 = UINT64_MAX;
	static int8_t x1008 = -1;

    t195 = ((x1005*(x1006^x1007))<=x1008);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1009 = 37LLU;
	int32_t x1010 = -1;
	int16_t x1011 = 12352;
	static volatile int64_t x1012 = INT64_MIN;
	int32_t t196 = -803378098;

    t196 = ((x1009*(x1010^x1011))<=x1012);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1014 = INT64_MIN;
	int8_t x1015 = INT8_MIN;

    t197 = ((x1013*(x1014^x1015))<=x1016);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1017 = INT16_MAX;
	volatile int16_t x1018 = 0;
	static uint8_t x1019 = UINT8_MAX;
	int16_t x1020 = INT16_MIN;

    t198 = ((x1017*(x1018^x1019))<=x1020);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1021 = INT16_MIN;
	uint64_t x1022 = UINT64_MAX;
	int32_t x1024 = INT32_MIN;
	int32_t t199 = 1827476;

    t199 = ((x1021*(x1022^x1023))<=x1024);

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

