
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

static volatile int8_t x2 = INT8_MAX;
int16_t x7 = -1;
static volatile uint16_t x8 = UINT16_MAX;
static uint8_t x10 = 0U;
int32_t t2 = -356545230;
int16_t x41 = INT16_MIN;
static uint8_t x49 = 28U;
int64_t x57 = 61LL;
uint64_t x59 = 186716007103552363LLU;
static volatile int16_t x60 = INT16_MAX;
uint32_t x63 = 11466U;
uint32_t x66 = 59954765U;
int64_t t15 = 532460483490482003LL;
uint8_t x82 = 2U;
int16_t x85 = INT16_MIN;
volatile int32_t t20 = -1;
static volatile int32_t x93 = INT32_MAX;
uint16_t x95 = 2426U;
static int32_t x99 = INT32_MIN;
int16_t x100 = INT16_MIN;
volatile uint32_t x102 = UINT32_MAX;
volatile uint32_t t23 = 226970703U;
uint8_t x107 = UINT8_MAX;
static int64_t t24 = -666556LL;
static int16_t x113 = INT16_MAX;
static volatile uint8_t x114 = UINT8_MAX;
uint64_t x118 = 26875616161095027LLU;
volatile int64_t t27 = 12590LL;
int16_t x123 = -1274;
int32_t x132 = -1652043;
volatile int8_t x137 = INT8_MAX;
uint32_t x138 = UINT32_MAX;
uint64_t x139 = 3LLU;
int8_t x140 = -51;
int64_t x143 = -1LL;
int32_t x147 = INT32_MIN;
int64_t t33 = 12856268204LL;
int32_t x159 = 2497820;
uint32_t x167 = 7998U;
int64_t x168 = INT64_MAX;
volatile int8_t x169 = INT8_MAX;
int8_t x171 = -1;
uint8_t x173 = 5U;
uint8_t x174 = UINT8_MAX;
uint8_t x182 = 12U;
uint16_t x187 = UINT16_MAX;
uint64_t x189 = UINT64_MAX;
int16_t x193 = -70;
int8_t x195 = INT8_MIN;
uint16_t x196 = 95U;
int32_t t45 = -515;
int64_t x197 = INT64_MIN;
uint64_t x209 = UINT64_MAX;
int64_t x221 = -1LL;
static int64_t x224 = -53606LL;
volatile int32_t t51 = 1495;
int32_t x242 = -1;
volatile uint8_t x243 = 0U;
static volatile int64_t t54 = -18LL;
uint32_t x263 = 1356551849U;
volatile int16_t x276 = -1;
static int8_t x286 = 0;
int8_t x296 = INT8_MAX;
int16_t x297 = INT16_MIN;
int16_t x298 = -1;
int8_t x305 = INT8_MAX;
uint8_t x308 = UINT8_MAX;
uint64_t x309 = UINT64_MAX;
uint16_t x310 = UINT16_MAX;
static int16_t x313 = -1;
uint64_t t69 = 4LLU;
int64_t x317 = 10384000407LL;
int32_t x325 = INT32_MAX;
int64_t x329 = -25597104602LL;
int32_t x330 = 0;
int32_t x353 = -1;
int32_t t78 = -4;
int32_t x368 = -88769659;
volatile int64_t t84 = -1134775543LL;
uint64_t x389 = 1215296110029507507LLU;
static uint16_t x394 = 17921U;
int16_t x400 = INT16_MIN;
volatile int32_t t87 = 0;
int8_t x412 = INT8_MIN;
int8_t x421 = INT8_MIN;
volatile uint8_t x428 = 11U;
volatile uint32_t x429 = UINT32_MAX;
volatile int64_t x432 = INT64_MAX;
int16_t x435 = -1;
int64_t x437 = INT64_MIN;
int64_t x441 = 54726002969697LL;
volatile int8_t x443 = -1;
int8_t x447 = -1;
volatile int64_t t98 = 179385LL;
static uint8_t x461 = 3U;
int8_t x466 = 31;
int32_t x469 = -1;
uint16_t x476 = UINT16_MAX;
static int32_t t104 = -1335988;
uint8_t x477 = 6U;
static int32_t t106 = -10580523;
volatile uint64_t x485 = 61350LLU;
int8_t x497 = 3;
static volatile int32_t t110 = -1030562;
uint64_t x502 = 1694907LLU;
int64_t x504 = 9989289678474820LL;
int16_t x509 = INT16_MIN;
static uint32_t x511 = 42137858U;
int32_t x526 = 10;
int64_t x532 = INT64_MIN;
uint16_t x533 = 9U;
static uint32_t x537 = 2990U;
static int64_t x549 = INT64_MAX;
uint16_t x553 = UINT16_MAX;
static volatile int32_t t122 = -519138915;
int16_t x562 = INT16_MAX;
uint16_t x574 = 5U;
int8_t x575 = 21;
int8_t x578 = 3;
volatile uint32_t t127 = 1U;
int16_t x585 = 6;
static uint64_t x587 = 91LLU;
int64_t x589 = INT64_MIN;
volatile int32_t t130 = 1;
uint32_t x618 = 11040U;
volatile int32_t x621 = INT32_MIN;
int16_t x624 = INT16_MIN;
int32_t t135 = -4;
uint8_t x638 = 6U;
volatile uint16_t x648 = UINT16_MAX;
static int16_t x650 = INT16_MAX;
int8_t x652 = -1;
uint16_t x661 = 49U;
static int32_t x662 = -97;
int8_t x664 = -8;
volatile int32_t t144 = -252570607;
int16_t x670 = INT16_MAX;
static int8_t x673 = INT8_MAX;
static volatile int32_t x675 = -1;
volatile uint8_t x679 = 3U;
volatile int32_t t147 = 31927318;
static int64_t x687 = -1LL;
int8_t x688 = INT8_MAX;
int64_t x700 = -1LL;
uint8_t x714 = UINT8_MAX;
static volatile int32_t x718 = INT32_MIN;
int32_t t158 = 902906;
static int8_t x735 = 1;
int32_t t160 = -2829895;
int8_t x737 = INT8_MIN;
int32_t t161 = -8494150;
int32_t x744 = -6149;
int32_t x748 = INT32_MIN;
uint32_t x750 = 250U;
int32_t x753 = INT32_MAX;
volatile uint32_t x770 = 56U;
int64_t x785 = -1LL;
int8_t x794 = INT8_MIN;
uint16_t x801 = 74U;
uint16_t x804 = UINT16_MAX;
uint8_t x806 = 6U;
int8_t x813 = -1;
volatile int32_t t179 = 3425;
static int64_t x821 = -63642788558LL;
uint16_t x828 = 2460U;
static int8_t x837 = -1;
static int8_t x839 = INT8_MAX;
static int64_t x843 = INT64_MIN;
uint16_t x845 = 2U;
int16_t x848 = INT16_MIN;
volatile int64_t x857 = 110736208220651LL;
volatile int32_t x868 = INT32_MIN;
volatile int64_t x872 = 136989114539243LL;
int8_t x889 = -1;
uint16_t x895 = 1U;
int8_t x897 = INT8_MIN;
static int16_t x899 = INT16_MIN;
int32_t t196 = 0;
static int32_t x906 = -1;
volatile uint64_t x910 = 30391309192086LLU;
int32_t x911 = INT32_MAX;
int16_t x912 = 559;
volatile int32_t t198 = 162485;
int8_t x916 = INT8_MIN;


void f0(void) {
    	uint32_t x1 = 325U;
	volatile int8_t x3 = 48;
	int32_t x4 = -1;
	int32_t t0 = -91809;

    t0 = ((x1<=(x2+x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int32_t x6 = 2402071;
	volatile int32_t t1 = -68416;

    t1 = ((x5<=(x6+x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;

    t2 = ((x9<=(x10+x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 872450105;

    t3 = ((x13<=(x14+x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MAX;
	int32_t x22 = -670479;
	static int8_t x23 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 97810871U;

    t4 = ((x21<=(x22+x23))/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	static uint64_t x27 = UINT64_MAX;
	volatile uint32_t x28 = 209763U;
	uint32_t t5 = 491013448U;

    t5 = ((x25<=(x26+x27))/x28);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = -1LL;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 981177549LL;
	static int64_t t6 = -14488LL;

    t6 = ((x29<=(x30+x31))/x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x33 = INT32_MIN;
	int8_t x34 = -39;
	volatile uint16_t x35 = UINT16_MAX;
	volatile int32_t x36 = 430387;
	int32_t t7 = -887;

    t7 = ((x33<=(x34+x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 305309291283LLU;
	int16_t x38 = -239;
	int64_t x39 = -1LL;
	static int16_t x40 = INT16_MAX;
	volatile int32_t t8 = 2;

    t8 = ((x37<=(x38+x39))/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = 0;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 66752276LLU;
	volatile uint64_t t9 = 117287LLU;

    t9 = ((x41<=(x42+x43))/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	volatile int32_t x46 = INT32_MIN;
	static int8_t x47 = 1;
	int32_t x48 = INT32_MIN;
	int32_t t10 = 82;

    t10 = ((x45<=(x46+x47))/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = INT16_MIN;
	static uint16_t x51 = UINT16_MAX;
	uint64_t x52 = 16424974959591757LLU;
	uint64_t t11 = 30249816572060LLU;

    t11 = ((x49<=(x50+x51))/x52);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	volatile int8_t x54 = INT8_MAX;
	static volatile uint64_t x55 = 8901517491669LLU;
	uint32_t x56 = 7U;
	uint32_t t12 = 1U;

    t12 = ((x53<=(x54+x55))/x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x58 = -454;
	volatile int32_t t13 = -530;

    t13 = ((x57<=(x58+x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 15U;
	volatile int64_t x64 = INT64_MAX;
	static int64_t t14 = 1283LL;

    t14 = ((x61<=(x62+x63))/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = -1;
	static volatile int8_t x67 = INT8_MIN;
	int64_t x68 = -1LL;

    t15 = ((x65<=(x66+x67))/x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	uint32_t x70 = 163806U;
	static int64_t x71 = -1LL;
	int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 28478278;

    t16 = ((x69<=(x70+x71))/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 6U;
	static volatile int16_t x74 = -1;
	int32_t x75 = 1041121215;
	volatile int64_t x76 = 1LL;
	int64_t t17 = -1LL;

    t17 = ((x73<=(x74+x75))/x76);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 48886533U;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	static volatile uint64_t x80 = 686225984275404392LLU;
	static volatile uint64_t t18 = 523819186LLU;

    t18 = ((x77<=(x78+x79))/x80);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 16U;
	static int8_t x83 = -8;
	int8_t x84 = -1;
	volatile int32_t t19 = -27930;

    t19 = ((x81<=(x82+x83))/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = INT8_MAX;
	int8_t x87 = 26;
	int16_t x88 = INT16_MAX;

    t20 = ((x85<=(x86+x87))/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = INT8_MIN;
	int8_t x96 = 1;
	int32_t t21 = 1;

    t21 = ((x93<=(x94+x95))/x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = INT32_MIN;
	uint32_t x98 = 1U;
	int32_t t22 = 0;

    t22 = ((x97<=(x98+x99))/x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -18;
	int8_t x103 = 47;
	uint32_t x104 = UINT32_MAX;

    t23 = ((x101<=(x102+x103))/x104);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 72;
	uint16_t x106 = UINT16_MAX;
	volatile int64_t x108 = 212LL;

    t24 = ((x105<=(x106+x107))/x108);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	uint32_t x111 = 31346656U;
	int8_t x112 = -1;
	volatile int32_t t25 = 43;

    t25 = ((x109<=(x110+x111))/x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t26 = 2492827LLU;

    t26 = ((x113<=(x114+x115))/x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = 57523852LL;
	uint8_t x119 = 7U;
	int64_t x120 = INT64_MAX;

    t27 = ((x117<=(x118+x119))/x120);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	int64_t x122 = 1LL;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t28 = 141;

    t28 = ((x121<=(x122+x123))/x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -1;
	int8_t x126 = INT8_MAX;
	static int8_t x127 = -1;
	int32_t x128 = INT32_MIN;
	int32_t t29 = -236;

    t29 = ((x125<=(x126+x127))/x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x129 = 6264U;
	int64_t x130 = 13158427942752LL;
	int64_t x131 = 39702LL;
	static volatile int32_t t30 = -14;

    t30 = ((x129<=(x130+x131))/x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t t31 = 101;

    t31 = ((x137<=(x138+x139))/x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MAX;
	static uint64_t x144 = 36218820977LLU;
	volatile uint64_t t32 = 3930273LLU;

    t32 = ((x141<=(x142+x143))/x144);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MAX;
	uint8_t x146 = 4U;
	int64_t x148 = INT64_MIN;

    t33 = ((x145<=(x146+x147))/x148);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	int32_t x150 = -1;
	volatile uint16_t x151 = UINT16_MAX;
	static uint8_t x152 = 2U;
	volatile int32_t t34 = -1992;

    t34 = ((x149<=(x150+x151))/x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -1;
	volatile int64_t x154 = -1LL;
	static uint64_t x155 = 87556LLU;
	int64_t x156 = INT64_MAX;
	static int64_t t35 = 876680548899664LL;

    t35 = ((x153<=(x154+x155))/x156);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	volatile uint32_t x160 = 2123468235U;
	volatile uint32_t t36 = 43923U;

    t36 = ((x157<=(x158+x159))/x160);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = 0;
	static int32_t x162 = 2;
	volatile int8_t x163 = -26;
	int8_t x164 = INT8_MIN;
	int32_t t37 = -27910;

    t37 = ((x161<=(x162+x163))/x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = -6;
	static int8_t x166 = INT8_MAX;
	volatile int64_t t38 = -243442847LL;

    t38 = ((x165<=(x166+x167))/x168);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x170 = -1;
	int32_t x172 = 251436054;
	volatile int32_t t39 = -1429382;

    t39 = ((x169<=(x170+x171))/x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x175 = INT16_MAX;
	static volatile int8_t x176 = 1;
	volatile int32_t t40 = 1358804;

    t40 = ((x173<=(x174+x175))/x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int8_t x179 = 5;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t41 = -3;

    t41 = ((x177<=(x178+x179))/x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x181 = INT8_MIN;
	volatile int16_t x183 = -1;
	uint64_t x184 = 3600778082757LLU;
	volatile uint64_t t42 = 22197360LLU;

    t42 = ((x181<=(x182+x183))/x184);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = 4219380418930601963LL;
	int64_t x186 = -3467859LL;
	uint64_t x188 = 493748006LLU;
	volatile uint64_t t43 = 1532572705575LLU;

    t43 = ((x185<=(x186+x187))/x188);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x190 = -1;
	int32_t x191 = -1964;
	uint8_t x192 = 99U;
	volatile int32_t t44 = -14775244;

    t44 = ((x189<=(x190+x191))/x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x194 = 78533310343493570LL;

    t45 = ((x193<=(x194+x195))/x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t46 = 86;

    t46 = ((x197<=(x198+x199))/x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x210 = -417435313;
	uint32_t x211 = 43U;
	static volatile uint8_t x212 = 2U;
	volatile int32_t t47 = -65115165;

    t47 = ((x209<=(x210+x211))/x212);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = -27;
	static int64_t x218 = 209696568LL;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = INT16_MIN;
	static int32_t t48 = -78097929;

    t48 = ((x217<=(x218+x219))/x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x222 = -1;
	uint32_t x223 = 1U;
	int64_t t49 = 4084180470LL;

    t49 = ((x221<=(x222+x223))/x224);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = INT64_MIN;
	static int16_t x230 = INT16_MIN;
	int32_t x231 = -190610387;
	volatile int32_t x232 = INT32_MIN;
	int32_t t50 = -68067;

    t50 = ((x229<=(x230+x231))/x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = 1;
	static uint16_t x235 = UINT16_MAX;
	int16_t x236 = 411;

    t51 = ((x233<=(x234+x235))/x236);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x241 = INT16_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t52 = 699601;

    t52 = ((x241<=(x242+x243))/x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x245 = -91;
	uint32_t x246 = 54U;
	int64_t x247 = -1LL;
	volatile uint32_t x248 = 173321U;
	static uint32_t t53 = 8394U;

    t53 = ((x245<=(x246+x247))/x248);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = -15120LL;
	uint16_t x250 = 322U;
	static int8_t x251 = -1;
	int64_t x252 = INT64_MIN;

    t54 = ((x249<=(x250+x251))/x252);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x253 = 20454;
	int8_t x254 = 1;
	int16_t x255 = 1;
	uint32_t x256 = 1712482U;
	uint32_t t55 = 242702472U;

    t55 = ((x253<=(x254+x255))/x256);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = -6052LL;
	int16_t x258 = 0;
	int8_t x259 = INT8_MIN;
	static int32_t x260 = INT32_MIN;
	int32_t t56 = -923034848;

    t56 = ((x257<=(x258+x259))/x260);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x261 = -186310107LL;
	volatile int32_t x262 = INT32_MIN;
	static uint8_t x264 = 11U;
	volatile int32_t t57 = 72457;

    t57 = ((x261<=(x262+x263))/x264);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 30U;
	uint8_t x268 = 5U;
	volatile int32_t t58 = -55623;

    t58 = ((x265<=(x266+x267))/x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x269 = -637;
	volatile int64_t x270 = 30199LL;
	uint16_t x271 = 7U;
	uint16_t x272 = 1U;
	int32_t t59 = -3698866;

    t59 = ((x269<=(x270+x271))/x272);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x273 = 223614744450LLU;
	uint32_t x274 = 0U;
	int32_t x275 = INT32_MIN;
	int32_t t60 = -86;

    t60 = ((x273<=(x274+x275))/x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x277 = -1;
	uint16_t x278 = 9885U;
	int16_t x279 = -1702;
	volatile uint64_t x280 = 951223LLU;
	static uint64_t t61 = 153164137482127LLU;

    t61 = ((x277<=(x278+x279))/x280);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x285 = -29763150608504LL;
	int8_t x287 = INT8_MIN;
	static int16_t x288 = -1722;
	int32_t t62 = 0;

    t62 = ((x285<=(x286+x287))/x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x289 = 2U;
	int64_t x290 = 1876506428LL;
	static int16_t x291 = INT16_MAX;
	int32_t x292 = 1;
	static volatile int32_t t63 = 14017;

    t63 = ((x289<=(x290+x291))/x292);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	uint64_t x295 = 463198489LLU;
	volatile int32_t t64 = 51373;

    t64 = ((x293<=(x294+x295))/x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x299 = 0U;
	static volatile int16_t x300 = INT16_MIN;
	volatile int32_t t65 = -7785;

    t65 = ((x297<=(x298+x299))/x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = INT16_MIN;
	static int16_t x302 = -1;
	uint16_t x303 = 272U;
	int32_t x304 = INT32_MIN;
	int32_t t66 = 10484;

    t66 = ((x301<=(x302+x303))/x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x306 = 2199U;
	int32_t x307 = -33;
	int32_t t67 = -4025877;

    t67 = ((x305<=(x306+x307))/x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x311 = 78129851259365LLU;
	uint64_t x312 = 15549892939LLU;
	volatile uint64_t t68 = 11381869485737913LLU;

    t68 = ((x309<=(x310+x311))/x312);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x314 = 531U;
	int64_t x315 = INT64_MIN;
	uint64_t x316 = UINT64_MAX;

    t69 = ((x313<=(x314+x315))/x316);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x318 = -44;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MAX;
	volatile int32_t t70 = 4030;

    t70 = ((x317<=(x318+x319))/x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = INT32_MAX;
	volatile uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;
	static uint32_t x324 = 6U;
	static volatile uint32_t t71 = 363U;

    t71 = ((x321<=(x322+x323))/x324);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x326 = INT32_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t x328 = -1;
	int32_t t72 = 98050525;

    t72 = ((x325<=(x326+x327))/x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t73 = 22972573LLU;

    t73 = ((x329<=(x330+x331))/x332);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = 1;
	int16_t x334 = -4;
	int32_t x335 = -9468812;
	int64_t x336 = -1LL;
	volatile int64_t t74 = 43LL;

    t74 = ((x333<=(x334+x335))/x336);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = INT8_MAX;
	static int8_t x338 = INT8_MIN;
	int32_t x339 = 522;
	int64_t x340 = 275576615967871932LL;
	volatile int64_t t75 = -4422311678384LL;

    t75 = ((x337<=(x338+x339))/x340);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x345 = -2;
	volatile int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t76 = 23U;

    t76 = ((x345<=(x346+x347))/x348);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x349 = -1;
	volatile int32_t x350 = INT32_MIN;
	static volatile uint32_t x351 = UINT32_MAX;
	volatile int64_t x352 = INT64_MIN;
	static volatile int64_t t77 = 818563075LL;

    t77 = ((x349<=(x350+x351))/x352);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x354 = -2;
	int8_t x355 = 0;
	int16_t x356 = INT16_MIN;

    t78 = ((x353<=(x354+x355))/x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x357 = -1LL;
	static volatile uint32_t x358 = 50621838U;
	uint32_t x359 = 107714236U;
	uint16_t x360 = 29U;
	int32_t t79 = -55;

    t79 = ((x357<=(x358+x359))/x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = -376LL;
	static int32_t x366 = 1822292;
	uint64_t x367 = 1678597621831LLU;
	int32_t t80 = 1070;

    t80 = ((x365<=(x366+x367))/x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x369 = INT32_MAX;
	static uint8_t x370 = 0U;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = 16104;
	volatile int32_t t81 = -164094841;

    t81 = ((x369<=(x370+x371))/x372);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = INT16_MAX;
	uint16_t x375 = UINT16_MAX;
	static int32_t x376 = -1;
	int32_t t82 = 3;

    t82 = ((x373<=(x374+x375))/x376);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = -12;
	volatile int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t83 = 1830865;

    t83 = ((x381<=(x382+x383))/x384);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;

    t84 = ((x385<=(x386+x387))/x388);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x390 = -3;
	uint8_t x391 = 20U;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t85 = -3042167;

    t85 = ((x389<=(x390+x391))/x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x393 = INT64_MIN;
	volatile int32_t x395 = -2;
	int8_t x396 = -1;
	volatile int32_t t86 = -26264250;

    t86 = ((x393<=(x394+x395))/x396);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x397 = 1237U;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 1891U;

    t87 = ((x397<=(x398+x399))/x400);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = -1;
	int32_t x408 = INT32_MAX;
	volatile int32_t t88 = -51;

    t88 = ((x405<=(x406+x407))/x408);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x409 = INT64_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile int32_t x411 = -32;
	volatile int32_t t89 = -52605922;

    t89 = ((x409<=(x410+x411))/x412);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x413 = 115151LL;
	static int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	int64_t x416 = 107558513959LL;
	volatile int64_t t90 = -43LL;

    t90 = ((x413<=(x414+x415))/x416);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = INT64_MAX;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	static uint16_t x420 = UINT16_MAX;
	int32_t t91 = 722832889;

    t91 = ((x417<=(x418+x419))/x420);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x422 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t92 = 769466625;

    t92 = ((x421<=(x422+x423))/x424);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x425 = UINT32_MAX;
	static int32_t x426 = INT32_MIN;
	uint16_t x427 = UINT16_MAX;
	volatile int32_t t93 = -16252509;

    t93 = ((x425<=(x426+x427))/x428);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x430 = UINT64_MAX;
	volatile int64_t x431 = INT64_MIN;
	int64_t t94 = 3077621639314228802LL;

    t94 = ((x429<=(x430+x431))/x432);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x433 = -1;
	volatile uint8_t x434 = 37U;
	int16_t x436 = INT16_MIN;
	int32_t t95 = 219686807;

    t95 = ((x433<=(x434+x435))/x436);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x438 = 3086;
	static uint32_t x439 = 11091U;
	int32_t x440 = -1;
	volatile int32_t t96 = -29328832;

    t96 = ((x437<=(x438+x439))/x440);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x442 = 309U;
	static volatile int64_t x444 = INT64_MAX;
	int64_t t97 = 7LL;

    t97 = ((x441<=(x442+x443))/x444);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x445 = INT32_MAX;
	uint32_t x446 = 6069U;
	int64_t x448 = INT64_MIN;

    t98 = ((x445<=(x446+x447))/x448);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x450 = 351752426;
	uint8_t x451 = 52U;
	int32_t x452 = INT32_MAX;
	int32_t t99 = -286137;

    t99 = ((x449<=(x450+x451))/x452);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = INT8_MIN;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	static int64_t x460 = INT64_MIN;
	volatile int64_t t100 = -120LL;

    t100 = ((x457<=(x458+x459))/x460);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x462 = 7465678011422LLU;
	int16_t x463 = 2;
	static uint32_t x464 = 6787618U;
	uint32_t t101 = 2U;

    t101 = ((x461<=(x462+x463))/x464);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MIN;
	volatile int32_t t102 = -39104;

    t102 = ((x465<=(x466+x467))/x468);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x470 = INT64_MAX;
	volatile int64_t x471 = -394264412570LL;
	volatile int32_t x472 = INT32_MIN;
	int32_t t103 = 41;

    t103 = ((x469<=(x470+x471))/x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x473 = -1;
	int16_t x474 = -1;
	int64_t x475 = -2401926239933404751LL;

    t104 = ((x473<=(x474+x475))/x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x478 = 7U;
	uint8_t x479 = UINT8_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t105 = 23192612;

    t105 = ((x477<=(x478+x479))/x480);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x481 = 11942U;
	volatile int16_t x482 = 1;
	int64_t x483 = INT64_MIN;
	int8_t x484 = -1;

    t106 = ((x481<=(x482+x483))/x484);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x486 = 7U;
	static int32_t x487 = -1;
	static volatile int8_t x488 = -1;
	int32_t t107 = 14131;

    t107 = ((x485<=(x486+x487))/x488);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x489 = UINT16_MAX;
	static int16_t x490 = -11909;
	uint32_t x491 = UINT32_MAX;
	int32_t x492 = INT32_MAX;
	int32_t t108 = -222618125;

    t108 = ((x489<=(x490+x491))/x492);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x493 = 157553969LL;
	uint64_t x494 = 15LLU;
	static int64_t x495 = -3641919958071151LL;
	int32_t x496 = -1;
	volatile int32_t t109 = -28;

    t109 = ((x493<=(x494+x495))/x496);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x498 = 476953796LLU;
	uint8_t x499 = 0U;
	int8_t x500 = INT8_MIN;

    t110 = ((x497<=(x498+x499))/x500);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x501 = -1LL;
	static uint64_t x503 = 50891LLU;
	volatile int64_t t111 = 7845455006LL;

    t111 = ((x501<=(x502+x503))/x504);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x505 = INT64_MIN;
	int64_t x506 = INT64_MAX;
	uint16_t x507 = 0U;
	static int64_t x508 = INT64_MIN;
	int64_t t112 = 58876775LL;

    t112 = ((x505<=(x506+x507))/x508);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x510 = INT64_MIN;
	uint16_t x512 = 11U;
	volatile int32_t t113 = -34005334;

    t113 = ((x509<=(x510+x511))/x512);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	uint32_t x515 = 1U;
	int64_t x516 = 4934826LL;
	int64_t t114 = 3047813918LL;

    t114 = ((x513<=(x514+x515))/x516);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x521 = INT64_MIN;
	int64_t x522 = -1LL;
	uint32_t x523 = UINT32_MAX;
	int32_t x524 = INT32_MIN;
	volatile int32_t t115 = -1;

    t115 = ((x521<=(x522+x523))/x524);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x525 = 14512666650689956LLU;
	int8_t x527 = INT8_MAX;
	int8_t x528 = -40;
	volatile int32_t t116 = 1149163;

    t116 = ((x525<=(x526+x527))/x528);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x529 = 56U;
	int8_t x530 = INT8_MAX;
	static volatile int16_t x531 = INT16_MIN;
	int64_t t117 = 444625051LL;

    t117 = ((x529<=(x530+x531))/x532);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x534 = INT16_MIN;
	static int64_t x535 = INT64_MAX;
	int8_t x536 = -1;
	int32_t t118 = -2;

    t118 = ((x533<=(x534+x535))/x536);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x538 = 120U;
	volatile int16_t x539 = INT16_MAX;
	volatile int32_t x540 = -4092449;
	static volatile int32_t t119 = -1987117;

    t119 = ((x537<=(x538+x539))/x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x541 = INT8_MIN;
	uint32_t x542 = UINT32_MAX;
	static uint64_t x543 = UINT64_MAX;
	static int32_t x544 = -1;
	volatile int32_t t120 = -527500;

    t120 = ((x541<=(x542+x543))/x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x550 = UINT8_MAX;
	int8_t x551 = INT8_MIN;
	static volatile int8_t x552 = INT8_MIN;
	volatile int32_t t121 = 14373090;

    t121 = ((x549<=(x550+x551))/x552);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x554 = 330557U;
	uint32_t x555 = 424U;
	uint16_t x556 = UINT16_MAX;

    t122 = ((x553<=(x554+x555))/x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x557 = 514260686201696LL;
	int8_t x558 = -1;
	int64_t x559 = INT64_MAX;
	static uint32_t x560 = UINT32_MAX;
	static uint32_t t123 = 12465U;

    t123 = ((x557<=(x558+x559))/x560);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x561 = -1;
	uint32_t x563 = 2200323U;
	uint32_t x564 = 205750625U;
	uint32_t t124 = 311692U;

    t124 = ((x561<=(x562+x563))/x564);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x569 = INT64_MAX;
	volatile int32_t x570 = -1;
	static int32_t x571 = INT32_MAX;
	uint32_t x572 = UINT32_MAX;
	volatile uint32_t t125 = 28834777U;

    t125 = ((x569<=(x570+x571))/x572);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x573 = INT8_MIN;
	int16_t x576 = INT16_MIN;
	int32_t t126 = 6;

    t126 = ((x573<=(x574+x575))/x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = 6670;
	int16_t x579 = -1;
	volatile uint32_t x580 = 651U;

    t127 = ((x577<=(x578+x579))/x580);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x581 = 3U;
	volatile uint64_t x582 = 3905394LLU;
	uint16_t x583 = 857U;
	static uint16_t x584 = 3U;
	int32_t t128 = 1747967;

    t128 = ((x581<=(x582+x583))/x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x586 = 0;
	int8_t x588 = INT8_MIN;
	int32_t t129 = -62;

    t129 = ((x585<=(x586+x587))/x588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x590 = UINT8_MAX;
	int64_t x591 = -127813649418634LL;
	uint8_t x592 = 29U;

    t130 = ((x589<=(x590+x591))/x592);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x597 = INT8_MAX;
	int8_t x598 = -1;
	uint8_t x599 = 54U;
	uint16_t x600 = 45U;
	static volatile int32_t t131 = -320;

    t131 = ((x597<=(x598+x599))/x600);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x601 = -1LL;
	volatile uint64_t x602 = 10LLU;
	static int16_t x603 = -1;
	int8_t x604 = INT8_MIN;
	int32_t t132 = 2737;

    t132 = ((x601<=(x602+x603))/x604);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = 27;
	int16_t x615 = 20;
	int64_t x616 = INT64_MAX;
	int64_t t133 = -16502751588LL;

    t133 = ((x613<=(x614+x615))/x616);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x617 = -1;
	int64_t x619 = -23853425LL;
	int8_t x620 = -1;
	int32_t t134 = -1329;

    t134 = ((x617<=(x618+x619))/x620);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x622 = -1;
	static int8_t x623 = INT8_MIN;

    t135 = ((x621<=(x622+x623))/x624);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x625 = INT8_MIN;
	volatile int32_t x626 = INT32_MAX;
	static int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MAX;
	static int32_t t136 = -169;

    t136 = ((x625<=(x626+x627))/x628);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x629 = INT32_MIN;
	uint8_t x630 = UINT8_MAX;
	int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MIN;
	volatile int32_t t137 = -16;

    t137 = ((x629<=(x630+x631))/x632);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x637 = INT16_MIN;
	uint64_t x639 = 3774415456906539LLU;
	uint16_t x640 = UINT16_MAX;
	int32_t t138 = 8;

    t138 = ((x637<=(x638+x639))/x640);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = INT8_MAX;
	static int64_t x642 = 21543LL;
	int16_t x643 = INT16_MAX;
	int64_t x644 = -1LL;
	volatile int64_t t139 = 4701LL;

    t139 = ((x641<=(x642+x643))/x644);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x646 = 831737298LLU;
	int16_t x647 = -1;
	static int32_t t140 = -24;

    t140 = ((x645<=(x646+x647))/x648);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x649 = 3U;
	volatile int16_t x651 = INT16_MIN;
	int32_t t141 = 105;

    t141 = ((x649<=(x650+x651))/x652);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x653 = 1;
	int8_t x654 = INT8_MAX;
	volatile int16_t x655 = -1;
	volatile int8_t x656 = INT8_MIN;
	static int32_t t142 = 3;

    t142 = ((x653<=(x654+x655))/x656);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x657 = 7U;
	int8_t x658 = 2;
	int32_t x659 = -1052;
	int8_t x660 = -1;
	int32_t t143 = 0;

    t143 = ((x657<=(x658+x659))/x660);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x663 = 10U;

    t144 = ((x661<=(x662+x663))/x664);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	volatile uint64_t x671 = 135143839945659LLU;
	int16_t x672 = INT16_MIN;
	volatile int32_t t145 = -25;

    t145 = ((x669<=(x670+x671))/x672);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x674 = -1;
	static volatile uint32_t x676 = 334U;
	volatile uint32_t t146 = 28U;

    t146 = ((x673<=(x674+x675))/x676);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x677 = -12;
	int64_t x678 = -2LL;
	volatile int32_t x680 = 973;

    t147 = ((x677<=(x678+x679))/x680);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x681 = 119U;
	static int16_t x682 = INT16_MAX;
	int8_t x683 = 14;
	int8_t x684 = 35;
	volatile int32_t t148 = 110787;

    t148 = ((x681<=(x682+x683))/x684);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x685 = 382;
	int8_t x686 = INT8_MIN;
	volatile int32_t t149 = -115487;

    t149 = ((x685<=(x686+x687))/x688);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x689 = INT32_MIN;
	int8_t x690 = INT8_MIN;
	uint32_t x691 = UINT32_MAX;
	int64_t x692 = -1LL;
	static int64_t t150 = -1395243LL;

    t150 = ((x689<=(x690+x691))/x692);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x693 = 5U;
	static uint64_t x694 = 989274862225LLU;
	int32_t x695 = INT32_MIN;
	int32_t x696 = -1;
	int32_t t151 = 8426068;

    t151 = ((x693<=(x694+x695))/x696);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = 0;
	int8_t x698 = 2;
	static uint64_t x699 = UINT64_MAX;
	volatile int64_t t152 = 5894951713916169LL;

    t152 = ((x697<=(x698+x699))/x700);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x701 = UINT16_MAX;
	int64_t x702 = -1LL;
	volatile uint16_t x703 = UINT16_MAX;
	int16_t x704 = 36;
	volatile int32_t t153 = 0;

    t153 = ((x701<=(x702+x703))/x704);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x705 = INT16_MIN;
	uint64_t x706 = 1LLU;
	int16_t x707 = INT16_MAX;
	int32_t x708 = -1201701;
	int32_t t154 = 0;

    t154 = ((x705<=(x706+x707))/x708);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	static volatile uint64_t x715 = UINT64_MAX;
	uint64_t x716 = 21659461956LLU;
	volatile uint64_t t155 = 96333983543757LLU;

    t155 = ((x713<=(x714+x715))/x716);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x717 = 33U;
	volatile uint64_t x719 = 2998358LLU;
	int8_t x720 = 11;
	volatile int32_t t156 = -7477663;

    t156 = ((x717<=(x718+x719))/x720);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x721 = 11U;
	int8_t x722 = INT8_MIN;
	uint8_t x723 = 2U;
	int8_t x724 = INT8_MIN;
	int32_t t157 = 782579;

    t157 = ((x721<=(x722+x723))/x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x725 = -2;
	int8_t x726 = INT8_MIN;
	volatile int64_t x727 = -1LL;
	int16_t x728 = -1;

    t158 = ((x725<=(x726+x727))/x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x729 = INT32_MIN;
	uint16_t x730 = 11385U;
	int32_t x731 = 11546;
	uint64_t x732 = 101782616263LLU;
	volatile uint64_t t159 = 25458671484LLU;

    t159 = ((x729<=(x730+x731))/x732);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x733 = 5U;
	int8_t x734 = INT8_MIN;
	int32_t x736 = INT32_MAX;

    t160 = ((x733<=(x734+x735))/x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x738 = INT16_MIN;
	volatile int16_t x739 = -1;
	uint16_t x740 = UINT16_MAX;

    t161 = ((x737<=(x738+x739))/x740);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x741 = INT8_MIN;
	static int8_t x742 = INT8_MIN;
	static volatile int8_t x743 = INT8_MIN;
	static volatile int32_t t162 = 486608901;

    t162 = ((x741<=(x742+x743))/x744);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x745 = 227230795;
	uint64_t x746 = 421119724017LLU;
	static int32_t x747 = INT32_MAX;
	volatile int32_t t163 = -5955631;

    t163 = ((x745<=(x746+x747))/x748);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x749 = -40177LL;
	int8_t x751 = INT8_MIN;
	int32_t x752 = INT32_MAX;
	int32_t t164 = 957984;

    t164 = ((x749<=(x750+x751))/x752);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x754 = 3U;
	int64_t x755 = INT64_MIN;
	uint16_t x756 = 2560U;
	volatile int32_t t165 = 10796632;

    t165 = ((x753<=(x754+x755))/x756);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x757 = INT32_MIN;
	volatile uint64_t x758 = 15147930LLU;
	uint16_t x759 = 998U;
	static volatile uint32_t x760 = 56U;
	uint32_t t166 = 356161U;

    t166 = ((x757<=(x758+x759))/x760);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint32_t x762 = 10882U;
	int16_t x763 = INT16_MAX;
	uint16_t x764 = UINT16_MAX;
	int32_t t167 = 1520;

    t167 = ((x761<=(x762+x763))/x764);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x765 = -10;
	volatile uint16_t x766 = 15739U;
	int16_t x767 = -1;
	static int64_t x768 = 727722225267271999LL;
	volatile int64_t t168 = 3498697755LL;

    t168 = ((x765<=(x766+x767))/x768);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x769 = 1;
	static volatile int8_t x771 = INT8_MIN;
	static int64_t x772 = INT64_MAX;
	int64_t t169 = 8103599LL;

    t169 = ((x769<=(x770+x771))/x772);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x773 = -1;
	int32_t x774 = INT32_MIN;
	uint64_t x775 = UINT64_MAX;
	int16_t x776 = INT16_MIN;
	volatile int32_t t170 = -321470;

    t170 = ((x773<=(x774+x775))/x776);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x777 = 3435U;
	volatile int16_t x778 = -1;
	int16_t x779 = 9;
	volatile int16_t x780 = -1;
	volatile int32_t t171 = 8;

    t171 = ((x777<=(x778+x779))/x780);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x781 = INT8_MIN;
	static int64_t x782 = INT64_MIN;
	int64_t x783 = 0LL;
	int64_t x784 = -473LL;
	volatile int64_t t172 = -25240965675898155LL;

    t172 = ((x781<=(x782+x783))/x784);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x786 = INT8_MAX;
	int32_t x787 = INT32_MIN;
	uint16_t x788 = 1U;
	static volatile int32_t t173 = 67008;

    t173 = ((x785<=(x786+x787))/x788);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x789 = INT16_MIN;
	int64_t x790 = INT64_MAX;
	int8_t x791 = -2;
	int64_t x792 = INT64_MIN;
	int64_t t174 = 2LL;

    t174 = ((x789<=(x790+x791))/x792);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x793 = 5257U;
	int64_t x795 = -468814LL;
	uint8_t x796 = 9U;
	volatile int32_t t175 = 2860301;

    t175 = ((x793<=(x794+x795))/x796);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x802 = -1;
	int32_t x803 = -1;
	int32_t t176 = -63509610;

    t176 = ((x801<=(x802+x803))/x804);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x805 = UINT32_MAX;
	static int32_t x807 = INT32_MIN;
	int16_t x808 = INT16_MIN;
	static int32_t t177 = -7250;

    t177 = ((x805<=(x806+x807))/x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x809 = INT8_MIN;
	static uint8_t x810 = 6U;
	int16_t x811 = -1;
	uint32_t x812 = UINT32_MAX;
	volatile uint32_t t178 = 61426U;

    t178 = ((x809<=(x810+x811))/x812);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x814 = 1U;
	int32_t x815 = -4362398;
	uint16_t x816 = 5U;

    t179 = ((x813<=(x814+x815))/x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x822 = UINT8_MAX;
	int16_t x823 = -5;
	int8_t x824 = INT8_MAX;
	int32_t t180 = -14438;

    t180 = ((x821<=(x822+x823))/x824);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x825 = UINT8_MAX;
	uint64_t x826 = 8LLU;
	int16_t x827 = -1;
	volatile int32_t t181 = 24;

    t181 = ((x825<=(x826+x827))/x828);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x829 = 24U;
	volatile uint16_t x830 = UINT16_MAX;
	int32_t x831 = -1;
	static int64_t x832 = -1LL;
	int64_t t182 = -14498809905075297LL;

    t182 = ((x829<=(x830+x831))/x832);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x833 = INT64_MIN;
	static int8_t x834 = -1;
	volatile uint16_t x835 = 6U;
	volatile uint64_t x836 = 1LLU;
	uint64_t t183 = 14LLU;

    t183 = ((x833<=(x834+x835))/x836);

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x838 = 1;
	volatile uint64_t x840 = UINT64_MAX;
	volatile uint64_t t184 = 63590LLU;

    t184 = ((x837<=(x838+x839))/x840);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x841 = -1545079978794067948LL;
	volatile uint8_t x842 = 109U;
	uint16_t x844 = UINT16_MAX;
	volatile int32_t t185 = 999627333;

    t185 = ((x841<=(x842+x843))/x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x846 = -1;
	int8_t x847 = 38;
	int32_t t186 = 59320740;

    t186 = ((x845<=(x846+x847))/x848);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x849 = INT32_MIN;
	uint16_t x850 = UINT16_MAX;
	uint16_t x851 = 6938U;
	int8_t x852 = -16;
	volatile int32_t t187 = 4027792;

    t187 = ((x849<=(x850+x851))/x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x858 = -864;
	uint64_t x859 = 6213581763953912150LLU;
	uint8_t x860 = UINT8_MAX;
	int32_t t188 = 216163823;

    t188 = ((x857<=(x858+x859))/x860);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x861 = INT64_MIN;
	int64_t x862 = -87291495278703LL;
	int8_t x863 = INT8_MAX;
	volatile int64_t x864 = INT64_MIN;
	volatile int64_t t189 = 1LL;

    t189 = ((x861<=(x862+x863))/x864);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x865 = -1;
	uint32_t x866 = UINT32_MAX;
	uint16_t x867 = UINT16_MAX;
	int32_t t190 = -125205660;

    t190 = ((x865<=(x866+x867))/x868);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x869 = INT32_MAX;
	static int8_t x870 = -1;
	uint64_t x871 = UINT64_MAX;
	volatile int64_t t191 = -705735310792422555LL;

    t191 = ((x869<=(x870+x871))/x872);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x873 = UINT8_MAX;
	int64_t x874 = 955463339LL;
	uint64_t x875 = UINT64_MAX;
	volatile int32_t x876 = INT32_MIN;
	int32_t t192 = 14;

    t192 = ((x873<=(x874+x875))/x876);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x881 = UINT64_MAX;
	int64_t x882 = INT64_MIN;
	int8_t x883 = 61;
	static uint64_t x884 = 252245894962391LLU;
	volatile uint64_t t193 = 7LLU;

    t193 = ((x881<=(x882+x883))/x884);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x890 = INT8_MIN;
	uint8_t x891 = UINT8_MAX;
	volatile int64_t x892 = 3120225125928247LL;
	volatile int64_t t194 = 25986442650LL;

    t194 = ((x889<=(x890+x891))/x892);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x893 = 4;
	uint16_t x894 = 5625U;
	int8_t x896 = -10;
	int32_t t195 = -13706108;

    t195 = ((x893<=(x894+x895))/x896);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x898 = INT16_MIN;
	int32_t x900 = -1;

    t196 = ((x897<=(x898+x899))/x900);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x905 = 1;
	volatile int64_t x907 = INT64_MAX;
	int32_t x908 = INT32_MIN;
	int32_t t197 = -9029391;

    t197 = ((x905<=(x906+x907))/x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x909 = INT32_MIN;

    t198 = ((x909<=(x910+x911))/x912);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x913 = UINT16_MAX;
	uint64_t x914 = 7642798970695LLU;
	volatile int64_t x915 = INT64_MIN;
	int32_t t199 = 296160;

    t199 = ((x913<=(x914+x915))/x916);

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

