
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

static uint16_t x1 = 125U;
static uint32_t x3 = 31919916U;
static uint8_t x5 = UINT8_MAX;
int8_t x9 = -1;
int32_t x13 = INT32_MAX;
static int16_t x16 = INT16_MAX;
static volatile int32_t t3 = 4;
int32_t t4 = -5;
static uint64_t x36 = UINT64_MAX;
volatile int32_t t7 = -228555465;
int8_t x38 = INT8_MIN;
volatile uint32_t x41 = 94545U;
volatile int8_t x46 = 1;
int32_t x52 = INT32_MAX;
int8_t x53 = INT8_MIN;
int64_t x58 = 67907071LL;
static int64_t x62 = 66586606879563LL;
int16_t x66 = INT16_MAX;
static volatile int16_t x67 = -74;
int32_t t15 = -19482888;
int32_t x78 = -1;
uint8_t x80 = 23U;
int8_t x81 = INT8_MAX;
volatile uint8_t x83 = UINT8_MAX;
uint64_t x84 = UINT64_MAX;
volatile int16_t x85 = INT16_MIN;
uint32_t x90 = UINT32_MAX;
int32_t t21 = 608482988;
volatile int64_t x93 = 59468893871007617LL;
int32_t t22 = -3839;
uint16_t x98 = 42U;
static int64_t x104 = INT64_MAX;
int64_t x107 = -1LL;
int16_t x113 = INT16_MIN;
int16_t x122 = -6;
int64_t x128 = -1LL;
uint16_t x137 = 1U;
int16_t x138 = -7;
volatile int32_t t32 = 354;
int32_t x145 = INT32_MIN;
uint32_t x155 = 346657U;
int16_t x156 = INT16_MAX;
int32_t t36 = 5;
int16_t x159 = INT16_MIN;
int32_t t37 = -56264982;
int64_t x161 = INT64_MIN;
static uint64_t x164 = 200326733693366153LLU;
uint16_t x165 = UINT16_MAX;
int16_t x168 = 438;
static int64_t x169 = INT64_MIN;
int32_t t40 = -12523172;
static uint8_t x173 = 1U;
static volatile int32_t t41 = -192650846;
int8_t x178 = INT8_MIN;
volatile int64_t x187 = INT64_MIN;
uint16_t x191 = 12U;
static int32_t x195 = INT32_MIN;
volatile int32_t t46 = -6647936;
int32_t t47 = -6;
int32_t x201 = -166075670;
int32_t t50 = 120795523;
int32_t x214 = -1;
int32_t x220 = INT32_MAX;
int32_t x223 = 464555089;
int32_t t53 = 244283;
int8_t x232 = INT8_MIN;
int32_t t58 = -813;
int8_t x246 = INT8_MIN;
static int32_t x248 = INT32_MAX;
volatile int16_t x249 = INT16_MIN;
uint8_t x250 = UINT8_MAX;
uint16_t x252 = UINT16_MAX;
static uint64_t x263 = 232LLU;
int64_t x271 = -1LL;
volatile uint8_t x278 = 10U;
static uint8_t x284 = 10U;
static uint16_t x286 = UINT16_MAX;
int16_t x288 = INT16_MIN;
static int32_t t66 = -5178;
int32_t t69 = -2115284;
static int8_t x303 = -10;
static int64_t x307 = -2738LL;
volatile int32_t t71 = 137223264;
volatile int8_t x316 = -1;
volatile int32_t t73 = 8071;
static int32_t t76 = -204;
int64_t x333 = INT64_MAX;
uint8_t x349 = UINT8_MAX;
static uint64_t x355 = UINT64_MAX;
int32_t x357 = INT32_MIN;
volatile uint64_t x359 = 195901577977126362LLU;
static volatile int32_t t84 = -5932690;
int8_t x368 = INT8_MAX;
int32_t x374 = INT32_MIN;
int32_t t87 = -192634959;
uint16_t x379 = 18U;
int32_t t88 = 1541912;
static volatile uint64_t x385 = 1079167580257242704LLU;
static int16_t x387 = INT16_MIN;
int32_t x389 = 7734344;
volatile int16_t x391 = INT16_MIN;
uint32_t x393 = 10U;
int64_t x400 = -1LL;
volatile int32_t t93 = -994;
int32_t x410 = INT32_MIN;
int64_t x414 = INT64_MIN;
volatile int32_t x417 = 56;
static uint32_t x420 = 1760368362U;
int16_t x426 = INT16_MIN;
static int32_t t99 = -88;
uint32_t x429 = 1916U;
int16_t x432 = INT16_MIN;
int16_t x434 = 1338;
volatile int32_t x444 = INT32_MAX;
int16_t x445 = INT16_MAX;
int8_t x460 = INT8_MAX;
volatile int32_t t106 = 724320;
uint64_t x470 = 857200368343595LLU;
static int64_t x471 = -1LL;
uint8_t x478 = 36U;
int8_t x487 = 6;
static volatile int8_t x489 = -1;
static volatile int16_t x492 = INT16_MIN;
int32_t t115 = -3957126;
int16_t x503 = 5;
uint32_t x507 = 343891988U;
int64_t x511 = INT64_MIN;
static volatile int8_t x522 = INT8_MIN;
volatile int64_t x523 = -1LL;
int8_t x535 = -3;
uint32_t x539 = 3899812U;
static volatile int32_t t124 = 154;
int64_t x543 = INT64_MAX;
static volatile int8_t x549 = -1;
static uint8_t x556 = 7U;
int32_t x557 = -1;
int64_t x560 = INT64_MIN;
uint32_t x564 = 664U;
int32_t t132 = -23;
int16_t x576 = INT16_MAX;
volatile int32_t x592 = INT32_MIN;
int16_t x608 = -1;
uint64_t x620 = 1259942226210167148LLU;
volatile int32_t t143 = -1;
int64_t x621 = INT64_MIN;
int64_t x627 = -64LL;
int32_t t145 = -961365;
static int64_t x637 = INT64_MAX;
volatile int64_t x642 = 2968350LL;
volatile int32_t x646 = INT32_MIN;
uint8_t x653 = 19U;
volatile uint64_t x654 = UINT64_MAX;
uint8_t x656 = UINT8_MAX;
volatile int8_t x666 = INT8_MIN;
int16_t x674 = -1;
int32_t x683 = -1;
uint16_t x691 = 55U;
uint8_t x692 = 1U;
static uint8_t x693 = UINT8_MAX;
volatile int32_t t161 = -2;
static uint32_t x703 = 244U;
int64_t x719 = INT64_MAX;
volatile int32_t t167 = 334982;
static int64_t x730 = 3264187723428176434LL;
uint32_t x733 = 29U;
uint64_t x738 = 35LLU;
volatile int16_t x740 = 50;
uint64_t x746 = UINT64_MAX;
int16_t x747 = 33;
static volatile int8_t x751 = INT8_MAX;
int64_t x759 = INT64_MAX;
uint8_t x762 = UINT8_MAX;
volatile int8_t x764 = INT8_MAX;
static int8_t x767 = INT8_MIN;
int32_t x777 = 99505;
uint64_t x778 = 13879041448762LLU;
int32_t t182 = -2417;
int32_t x793 = -1;
volatile int8_t x797 = INT8_MIN;
volatile int64_t x798 = 95LL;
uint16_t x799 = UINT16_MAX;
int32_t t185 = 2156;
int8_t x805 = INT8_MAX;
static int32_t x806 = -1;
volatile int32_t t186 = 0;
int8_t x821 = 0;
volatile int64_t x823 = -853042039845767LL;
volatile int16_t x827 = INT16_MIN;
static int32_t x831 = INT32_MIN;
static volatile int8_t x837 = INT8_MIN;
int64_t x840 = INT64_MAX;
int8_t x846 = -1;
uint16_t x850 = UINT16_MAX;
int8_t x853 = INT8_MAX;
int32_t t197 = 28302;
volatile uint32_t x858 = 18U;
static volatile int32_t t198 = 674;
volatile int32_t t199 = -4;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -66130;

    t0 = ((x1+(x2/x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = 6768626;
	uint16_t x7 = 249U;
	int32_t x8 = -1;
	volatile int32_t t1 = 1655;

    t1 = ((x5+(x6/x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = 1;
	int8_t x11 = INT8_MAX;
	volatile uint8_t x12 = UINT8_MAX;
	static int32_t t2 = -15711640;

    t2 = ((x9+(x10/x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x14 = 7086696270618708LLU;
	int32_t x15 = 1001;

    t3 = ((x13+(x14/x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int32_t x18 = -228;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -1LL;

    t4 = ((x17+(x18/x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint32_t x22 = 23U;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = 1998387;

    t5 = ((x21+(x22/x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	static uint64_t x26 = 1372529LLU;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 5205U;
	volatile int32_t t6 = 0;

    t6 = ((x25+(x26/x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x33 = UINT32_MAX;
	static int8_t x34 = -6;
	volatile int8_t x35 = -6;

    t7 = ((x33+(x34/x35))==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	int16_t x40 = 211;
	volatile int32_t t8 = -161;

    t8 = ((x37+(x38/x39))==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = 877408512U;
	int32_t x43 = INT32_MIN;
	static int8_t x44 = INT8_MAX;
	int32_t t9 = -216870;

    t9 = ((x41+(x42/x43))==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MAX;
	uint16_t x47 = 3204U;
	int16_t x48 = 0;
	static int32_t t10 = 2190;

    t10 = ((x45+(x46/x47))==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	int16_t x50 = -53;
	uint64_t x51 = 1794956LLU;
	volatile int32_t t11 = 2;

    t11 = ((x49+(x50/x51))==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x54 = -1;
	int64_t x55 = 635110LL;
	static int64_t x56 = -1LL;
	int32_t t12 = -1;

    t12 = ((x53+(x54/x55))==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 40;
	int16_t x59 = -1;
	static uint16_t x60 = UINT16_MAX;
	static volatile int32_t t13 = -6875707;

    t13 = ((x57+(x58/x59))==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = INT32_MIN;
	uint64_t x63 = 8569486713717650LLU;
	int8_t x64 = INT8_MAX;
	static volatile int32_t t14 = 130889462;

    t14 = ((x61+(x62/x63))==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x65 = -3;
	static volatile uint32_t x68 = 375557U;

    t15 = ((x65+(x66/x67))==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x69 = 93U;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = 1045LL;
	static int16_t x72 = -1;
	int32_t t16 = 216805077;

    t16 = ((x69+(x70/x71))==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 14337;
	int64_t x74 = -5688147LL;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t17 = -496;

    t17 = ((x73+(x74/x75))==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	static uint8_t x79 = 53U;
	static volatile int32_t t18 = -705;

    t18 = ((x77+(x78/x79))==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x82 = 0U;
	int32_t t19 = 523342;

    t19 = ((x81+(x82/x83))==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = 90;
	int32_t t20 = -895526934;

    t20 = ((x85+(x86/x87))==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1;
	int64_t x91 = -7183825628640LL;
	volatile int8_t x92 = INT8_MIN;

    t21 = ((x89+(x90/x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x94 = 9U;
	int16_t x95 = -1;
	volatile int16_t x96 = INT16_MAX;

    t22 = ((x93+(x94/x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	static uint32_t x99 = 282720911U;
	static int16_t x100 = INT16_MIN;
	int32_t t23 = -20232;

    t23 = ((x97+(x98/x99))==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	static int64_t x103 = -1LL;
	volatile int32_t t24 = 3;

    t24 = ((x101+(x102/x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = 105612;
	int64_t x106 = -768714LL;
	volatile uint16_t x108 = 3663U;
	volatile int32_t t25 = -65670759;

    t25 = ((x105+(x106/x107))==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x109 = -1LL;
	int8_t x110 = 40;
	int16_t x111 = 466;
	int16_t x112 = INT16_MIN;
	volatile int32_t t26 = 28694;

    t26 = ((x109+(x110/x111))==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = INT16_MAX;
	uint32_t x116 = UINT32_MAX;
	static volatile int32_t t27 = -4;

    t27 = ((x113+(x114/x115))==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 14U;
	int64_t x123 = 3102505627780323894LL;
	int16_t x124 = INT16_MIN;
	int32_t t28 = 1;

    t28 = ((x121+(x122/x123))==x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x125 = 56U;
	uint8_t x126 = 0U;
	int32_t x127 = INT32_MIN;
	static volatile int32_t t29 = 9;

    t29 = ((x125+(x126/x127))==x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x129 = 60732035LLU;
	volatile uint32_t x130 = 2418U;
	uint16_t x131 = 15U;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t30 = 266063;

    t30 = ((x129+(x130/x131))==x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = -11817;
	volatile uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 80U;
	uint64_t x136 = UINT64_MAX;
	int32_t t31 = 178;

    t31 = ((x133+(x134/x135))==x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x139 = 1360934LLU;
	uint64_t x140 = 379783445042290LLU;

    t32 = ((x137+(x138/x139))==x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x141 = 0U;
	int8_t x142 = INT8_MAX;
	static int16_t x143 = INT16_MIN;
	uint32_t x144 = UINT32_MAX;
	int32_t t33 = -626;

    t33 = ((x141+(x142/x143))==x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x146 = 19383214337LLU;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -1;
	static volatile int32_t t34 = 19945477;

    t34 = ((x145+(x146/x147))==x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x149 = 200U;
	int8_t x150 = -1;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;
	static int32_t t35 = 2391274;

    t35 = ((x149+(x150/x151))==x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	volatile int64_t x154 = -1LL;

    t36 = ((x153+(x154/x155))==x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	volatile int32_t x158 = -253515;
	int32_t x160 = INT32_MIN;

    t37 = ((x157+(x158/x159))==x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	volatile int32_t t38 = 12488;

    t38 = ((x161+(x162/x163))==x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x166 = 266818560688LLU;
	volatile uint32_t x167 = UINT32_MAX;
	volatile int32_t t39 = 22;

    t39 = ((x165+(x166/x167))==x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x170 = -3;
	int8_t x171 = INT8_MAX;
	static int8_t x172 = INT8_MAX;

    t40 = ((x169+(x170/x171))==x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = -1LL;
	volatile int32_t x175 = -1;
	uint64_t x176 = 2746807224093LLU;

    t41 = ((x173+(x174/x175))==x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = -240;
	uint8_t x179 = 20U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t42 = -306;

    t42 = ((x177+(x178/x179))==x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x181 = 15081488LL;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 8U;
	int8_t x184 = -4;
	volatile int32_t t43 = 640;

    t43 = ((x181+(x182/x183))==x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = INT8_MIN;
	volatile uint64_t x186 = 486788624LLU;
	uint64_t x188 = 234008597372298LLU;
	int32_t t44 = 843181;

    t44 = ((x185+(x186/x187))==x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 1310031U;
	volatile int64_t x190 = INT64_MAX;
	static int32_t x192 = -1257484;
	volatile int32_t t45 = -5863;

    t45 = ((x189+(x190/x191))==x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = INT16_MIN;
	int64_t x194 = -4526683809LL;
	int16_t x196 = INT16_MAX;

    t46 = ((x193+(x194/x195))==x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x197 = 7211U;
	volatile int32_t x198 = INT32_MIN;
	static int64_t x199 = INT64_MIN;
	volatile int32_t x200 = 11553;

    t47 = ((x197+(x198/x199))==x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x202 = 64U;
	volatile uint32_t x203 = 15072224U;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t48 = -1524848;

    t48 = ((x201+(x202/x203))==x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = INT32_MIN;
	static int8_t x206 = -5;
	int8_t x207 = -41;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t49 = 23;

    t49 = ((x205+(x206/x207))==x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = -10;
	volatile int64_t x210 = 81735LL;
	uint8_t x211 = 31U;
	volatile int32_t x212 = -105;

    t50 = ((x209+(x210/x211))==x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = 1761930281490162318LL;
	int64_t x215 = 1310427944036LL;
	int32_t x216 = 21099215;
	int32_t t51 = -140456186;

    t51 = ((x213+(x214/x215))==x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = INT16_MIN;
	uint16_t x218 = 23018U;
	volatile int16_t x219 = -4;
	static volatile int32_t t52 = 174;

    t52 = ((x217+(x218/x219))==x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 6573962477227057650LLU;
	uint64_t x222 = UINT64_MAX;
	static volatile int16_t x224 = 1;

    t53 = ((x221+(x222/x223))==x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x225 = INT32_MAX;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = -1;
	uint64_t x228 = 370998905588LLU;
	volatile int32_t t54 = 2;

    t54 = ((x225+(x226/x227))==x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x229 = -1;
	int64_t x230 = -1LL;
	uint64_t x231 = UINT64_MAX;
	int32_t t55 = 774868840;

    t55 = ((x229+(x230/x231))==x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = INT8_MAX;
	uint32_t x234 = UINT32_MAX;
	static uint8_t x235 = UINT8_MAX;
	int32_t x236 = -1;
	int32_t t56 = 13;

    t56 = ((x233+(x234/x235))==x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x237 = INT8_MIN;
	int32_t x238 = -1;
	uint32_t x239 = 3U;
	int32_t x240 = INT32_MIN;
	int32_t t57 = 592;

    t57 = ((x237+(x238/x239))==x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -1LL;
	int32_t x242 = INT32_MIN;
	static volatile int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MAX;

    t58 = ((x241+(x242/x243))==x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 0U;
	static int8_t x247 = INT8_MAX;
	volatile int32_t t59 = -21389;

    t59 = ((x245+(x246/x247))==x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x251 = -1;
	int32_t t60 = 545;

    t60 = ((x249+(x250/x251))==x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x257 = 1LLU;
	int8_t x258 = -11;
	static int32_t x259 = 105;
	int32_t x260 = -1072;
	static int32_t t61 = 1905;

    t61 = ((x257+(x258/x259))==x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = UINT8_MAX;
	int64_t x262 = INT64_MIN;
	volatile int32_t x264 = -1;
	volatile int32_t t62 = 2;

    t62 = ((x261+(x262/x263))==x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = 16;
	int32_t x270 = 19;
	int64_t x272 = INT64_MIN;
	volatile int32_t t63 = -1928055;

    t63 = ((x269+(x270/x271))==x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = -1;
	volatile int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MIN;
	static volatile int32_t t64 = 513448628;

    t64 = ((x277+(x278/x279))==x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x281 = 26214U;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = UINT8_MAX;
	volatile int32_t t65 = 842;

    t65 = ((x281+(x282/x283))==x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = 1;
	volatile int8_t x287 = INT8_MAX;

    t66 = ((x285+(x286/x287))==x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x289 = INT8_MAX;
	volatile int64_t x290 = INT64_MIN;
	int32_t x291 = 440502;
	int32_t x292 = -1;
	volatile int32_t t67 = -8437220;

    t67 = ((x289+(x290/x291))==x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x293 = 8746U;
	uint16_t x294 = 471U;
	volatile uint32_t x295 = 120015329U;
	int16_t x296 = 203;
	static int32_t t68 = -82900;

    t68 = ((x293+(x294/x295))==x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 39U;

    t69 = ((x297+(x298/x299))==x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = -1594946LL;
	uint64_t x302 = 1006714LLU;
	int16_t x304 = -1;
	static volatile int32_t t70 = -147479;

    t70 = ((x301+(x302/x303))==x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;

    t71 = ((x305+(x306/x307))==x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x309 = -90LL;
	volatile uint8_t x310 = 6U;
	int64_t x311 = INT64_MIN;
	int16_t x312 = 27;
	volatile int32_t t72 = 81369533;

    t72 = ((x309+(x310/x311))==x312);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x313 = -548915098420837799LL;
	volatile uint64_t x314 = 7445LLU;
	int8_t x315 = INT8_MAX;

    t73 = ((x313+(x314/x315))==x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x321 = 6164U;
	volatile int16_t x322 = -25;
	volatile int64_t x323 = -1LL;
	int8_t x324 = -1;
	int32_t t74 = -258138735;

    t74 = ((x321+(x322/x323))==x324);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t75 = 9400;

    t75 = ((x325+(x326/x327))==x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x329 = INT32_MAX;
	volatile uint8_t x330 = 1U;
	int32_t x331 = INT32_MAX;
	uint16_t x332 = 225U;

    t76 = ((x329+(x330/x331))==x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x334 = 2U;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = INT8_MAX;
	volatile int32_t t77 = 13883;

    t77 = ((x333+(x334/x335))==x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x337 = 2146127104U;
	volatile uint16_t x338 = 424U;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 96946U;
	volatile int32_t t78 = -1;

    t78 = ((x337+(x338/x339))==x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x341 = INT16_MIN;
	uint8_t x342 = 104U;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	int32_t t79 = -335;

    t79 = ((x341+(x342/x343))==x344);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MAX;
	volatile int16_t x348 = -1;
	int32_t t80 = -15;

    t80 = ((x345+(x346/x347))==x348);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x350 = 28;
	int64_t x351 = 34161471241570LL;
	int64_t x352 = INT64_MIN;
	int32_t t81 = -494;

    t81 = ((x349+(x350/x351))==x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 1U;
	uint8_t x356 = 1U;
	static int32_t t82 = 33056783;

    t82 = ((x353+(x354/x355))==x356);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x358 = INT32_MIN;
	uint32_t x360 = 1891132714U;
	volatile int32_t t83 = -1;

    t83 = ((x357+(x358/x359))==x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x361 = -10587;
	static int32_t x362 = INT32_MIN;
	static int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;

    t84 = ((x361+(x362/x363))==x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = 28;
	volatile uint64_t x366 = 16LLU;
	volatile int32_t x367 = INT32_MIN;
	volatile int32_t t85 = 272914;

    t85 = ((x365+(x366/x367))==x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t86 = -1938;

    t86 = ((x369+(x370/x371))==x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x373 = 1350U;
	static int16_t x375 = INT16_MIN;
	uint16_t x376 = 18687U;

    t87 = ((x373+(x374/x375))==x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x377 = 1;
	uint8_t x378 = UINT8_MAX;
	int8_t x380 = -49;

    t88 = ((x377+(x378/x379))==x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x386 = -593;
	static uint64_t x388 = UINT64_MAX;
	static volatile int32_t t89 = 1095;

    t89 = ((x385+(x386/x387))==x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x390 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t90 = 251978139;

    t90 = ((x389+(x390/x391))==x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x394 = -5088;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t91 = -1832;

    t91 = ((x393+(x394/x395))==x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x397 = 247LLU;
	int64_t x398 = -3LL;
	volatile int8_t x399 = 1;
	int32_t t92 = -102893023;

    t92 = ((x397+(x398/x399))==x400);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x401 = 13440U;
	int16_t x402 = -1;
	static int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;

    t93 = ((x401+(x402/x403))==x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	int32_t t94 = 7821177;

    t94 = ((x405+(x406/x407))==x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x409 = INT64_MIN;
	uint64_t x411 = 8718594358283731023LLU;
	int16_t x412 = 13;
	int32_t t95 = -11;

    t95 = ((x409+(x410/x411))==x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x413 = 13;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t96 = 39871;

    t96 = ((x413+(x414/x415))==x416);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x418 = 31451529198902262LL;
	volatile int8_t x419 = INT8_MIN;
	volatile int32_t t97 = -1526;

    t97 = ((x417+(x418/x419))==x420);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x421 = 277;
	static volatile int16_t x422 = 1;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	int32_t t98 = -92599;

    t98 = ((x421+(x422/x423))==x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	int64_t x427 = 23367401361680LL;
	int16_t x428 = -1;

    t99 = ((x425+(x426/x427))==x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x430 = -1;
	uint16_t x431 = 157U;
	static volatile int32_t t100 = 93;

    t100 = ((x429+(x430/x431))==x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x433 = 11852U;
	int32_t x435 = 84183;
	uint16_t x436 = 56U;
	volatile int32_t t101 = 45757959;

    t101 = ((x433+(x434/x435))==x436);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x441 = INT64_MIN;
	uint16_t x442 = UINT16_MAX;
	uint8_t x443 = 29U;
	volatile int32_t t102 = 35398;

    t102 = ((x441+(x442/x443))==x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x446 = INT32_MAX;
	int8_t x447 = 21;
	uint32_t x448 = 99U;
	int32_t t103 = 30;

    t103 = ((x445+(x446/x447))==x448);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x449 = -1;
	volatile uint16_t x450 = 26387U;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 27U;
	int32_t t104 = 1;

    t104 = ((x449+(x450/x451))==x452);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x453 = INT16_MIN;
	static uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 4419558U;
	uint64_t x456 = UINT64_MAX;
	static int32_t t105 = 167090;

    t105 = ((x453+(x454/x455))==x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x457 = 5;
	int8_t x458 = -1;
	uint64_t x459 = 122158426710471529LLU;

    t106 = ((x457+(x458/x459))==x460);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x461 = INT64_MIN;
	static int64_t x462 = 3506941318634651LL;
	int8_t x463 = INT8_MAX;
	static int8_t x464 = -11;
	static int32_t t107 = 0;

    t107 = ((x461+(x462/x463))==x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x465 = INT32_MAX;
	int64_t x466 = -1LL;
	static int32_t x467 = INT32_MIN;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t108 = 1802;

    t108 = ((x465+(x466/x467))==x468);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	int32_t x472 = -1;
	volatile int32_t t109 = -4113890;

    t109 = ((x469+(x470/x471))==x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	int8_t x474 = -1;
	volatile uint16_t x475 = 1635U;
	int64_t x476 = INT64_MIN;
	int32_t t110 = 993108889;

    t110 = ((x473+(x474/x475))==x476);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x477 = UINT16_MAX;
	volatile uint64_t x479 = 5632228872171336LLU;
	uint8_t x480 = UINT8_MAX;
	int32_t t111 = 20;

    t111 = ((x477+(x478/x479))==x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x481 = INT8_MIN;
	int8_t x482 = INT8_MAX;
	uint16_t x483 = 1U;
	uint64_t x484 = 1577LLU;
	int32_t t112 = 18496;

    t112 = ((x481+(x482/x483))==x484);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x485 = INT16_MIN;
	int64_t x486 = -1LL;
	volatile uint8_t x488 = 3U;
	int32_t t113 = -1755;

    t113 = ((x485+(x486/x487))==x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x490 = -1491;
	int8_t x491 = -10;
	volatile int32_t t114 = -157272519;

    t114 = ((x489+(x490/x491))==x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x493 = 16833743236515LL;
	int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	int64_t x496 = 3479419LL;

    t115 = ((x493+(x494/x495))==x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x501 = INT16_MAX;
	volatile int32_t x502 = 3;
	int32_t x504 = 4;
	static int32_t t116 = 123921226;

    t116 = ((x501+(x502/x503))==x504);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x505 = -1;
	uint32_t x506 = 7756006U;
	static int8_t x508 = -11;
	static int32_t t117 = -186;

    t117 = ((x505+(x506/x507))==x508);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x509 = UINT64_MAX;
	static volatile int64_t x510 = INT64_MIN;
	volatile int8_t x512 = INT8_MAX;
	volatile int32_t t118 = -2;

    t118 = ((x509+(x510/x511))==x512);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x513 = -820;
	volatile int8_t x514 = -2;
	volatile int64_t x515 = INT64_MAX;
	int8_t x516 = -1;
	int32_t t119 = 8403;

    t119 = ((x513+(x514/x515))==x516);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = INT32_MAX;
	int32_t x518 = INT32_MAX;
	uint32_t x519 = UINT32_MAX;
	uint16_t x520 = UINT16_MAX;
	int32_t t120 = 1;

    t120 = ((x517+(x518/x519))==x520);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x521 = INT32_MAX;
	volatile int32_t x524 = INT32_MAX;
	static int32_t t121 = -10546;

    t121 = ((x521+(x522/x523))==x524);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x529 = 28;
	uint16_t x530 = 5U;
	int8_t x531 = 58;
	int32_t x532 = -1;
	int32_t t122 = -1064579579;

    t122 = ((x529+(x530/x531))==x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x533 = INT32_MAX;
	int8_t x534 = 0;
	uint64_t x536 = 252089348LLU;
	volatile int32_t t123 = -16151425;

    t123 = ((x533+(x534/x535))==x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = 22392454LLU;
	uint32_t x540 = 506360017U;

    t124 = ((x537+(x538/x539))==x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x541 = UINT32_MAX;
	uint64_t x542 = 4227887641184499862LLU;
	volatile int64_t x544 = INT64_MIN;
	volatile int32_t t125 = -5296;

    t125 = ((x541+(x542/x543))==x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x545 = INT16_MAX;
	uint16_t x546 = 5U;
	static uint32_t x547 = UINT32_MAX;
	uint32_t x548 = 20693589U;
	int32_t t126 = 2323;

    t126 = ((x545+(x546/x547))==x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x550 = INT64_MIN;
	int16_t x551 = 1008;
	volatile int64_t x552 = 139LL;
	int32_t t127 = 82862627;

    t127 = ((x549+(x550/x551))==x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x553 = INT16_MIN;
	static int16_t x554 = 4;
	volatile int32_t x555 = INT32_MIN;
	volatile int32_t t128 = 2001;

    t128 = ((x553+(x554/x555))==x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x558 = 0;
	int8_t x559 = INT8_MAX;
	volatile int32_t t129 = -12493;

    t129 = ((x557+(x558/x559))==x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x561 = INT32_MIN;
	volatile int64_t x562 = -8LL;
	uint64_t x563 = UINT64_MAX;
	int32_t t130 = 1973;

    t130 = ((x561+(x562/x563))==x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	int32_t x566 = INT32_MIN;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MIN;
	int32_t t131 = 1330072;

    t131 = ((x565+(x566/x567))==x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x569 = -1;
	static int8_t x570 = 25;
	static volatile uint32_t x571 = 641973532U;
	volatile uint8_t x572 = UINT8_MAX;

    t132 = ((x569+(x570/x571))==x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x573 = -1LL;
	int8_t x574 = 19;
	static uint32_t x575 = UINT32_MAX;
	int32_t t133 = 35661;

    t133 = ((x573+(x574/x575))==x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x577 = 0;
	uint16_t x578 = 0U;
	uint32_t x579 = UINT32_MAX;
	int32_t x580 = -1;
	int32_t t134 = -6;

    t134 = ((x577+(x578/x579))==x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x585 = -98;
	uint64_t x586 = 327LLU;
	static int64_t x587 = 294782216947LL;
	int32_t x588 = 126;
	volatile int32_t t135 = -911;

    t135 = ((x585+(x586/x587))==x588);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	static volatile int64_t x590 = INT64_MAX;
	uint64_t x591 = 9LLU;
	int32_t t136 = 0;

    t136 = ((x589+(x590/x591))==x592);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x593 = 7865720005LLU;
	static int16_t x594 = INT16_MIN;
	int8_t x595 = -35;
	volatile int16_t x596 = -164;
	volatile int32_t t137 = -1444;

    t137 = ((x593+(x594/x595))==x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x597 = INT8_MAX;
	int8_t x598 = 0;
	int64_t x599 = INT64_MIN;
	int64_t x600 = -2229866LL;
	volatile int32_t t138 = 7332;

    t138 = ((x597+(x598/x599))==x600);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x601 = 13345;
	volatile uint32_t x602 = 37790207U;
	volatile int8_t x603 = INT8_MAX;
	static int32_t x604 = 1198;
	volatile int32_t t139 = -798305103;

    t139 = ((x601+(x602/x603))==x604);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x605 = UINT32_MAX;
	int8_t x606 = INT8_MAX;
	int64_t x607 = 381735173256702283LL;
	volatile int32_t t140 = 2979375;

    t140 = ((x605+(x606/x607))==x608);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x609 = INT16_MIN;
	uint16_t x610 = UINT16_MAX;
	static int16_t x611 = INT16_MIN;
	volatile int64_t x612 = INT64_MAX;
	static volatile int32_t t141 = -2;

    t141 = ((x609+(x610/x611))==x612);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x613 = INT16_MIN;
	int8_t x614 = INT8_MAX;
	static int16_t x615 = INT16_MAX;
	volatile uint16_t x616 = UINT16_MAX;
	int32_t t142 = 137926;

    t142 = ((x613+(x614/x615))==x616);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x617 = INT16_MAX;
	uint64_t x618 = 1061778983325LLU;
	static volatile uint64_t x619 = 785134LLU;

    t143 = ((x617+(x618/x619))==x620);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x622 = 1U;
	volatile int8_t x623 = -1;
	int32_t x624 = INT32_MIN;
	volatile int32_t t144 = 815608773;

    t144 = ((x621+(x622/x623))==x624);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x625 = -1235;
	int16_t x626 = INT16_MIN;
	static int16_t x628 = INT16_MAX;

    t145 = ((x625+(x626/x627))==x628);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x629 = INT16_MIN;
	volatile uint8_t x630 = UINT8_MAX;
	int8_t x631 = INT8_MIN;
	static uint32_t x632 = 39945U;
	static int32_t t146 = -5;

    t146 = ((x629+(x630/x631))==x632);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x633 = 1;
	static uint32_t x634 = UINT32_MAX;
	static int16_t x635 = INT16_MAX;
	int16_t x636 = -3877;
	int32_t t147 = 11;

    t147 = ((x633+(x634/x635))==x636);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x638 = -1;
	int32_t x639 = INT32_MIN;
	uint64_t x640 = 6366883383331465596LLU;
	static volatile int32_t t148 = 3925411;

    t148 = ((x637+(x638/x639))==x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x641 = UINT64_MAX;
	int64_t x643 = INT64_MAX;
	int16_t x644 = INT16_MAX;
	int32_t t149 = 38915844;

    t149 = ((x641+(x642/x643))==x644);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x645 = 5;
	static volatile int8_t x647 = INT8_MIN;
	int8_t x648 = -21;
	volatile int32_t t150 = 34056;

    t150 = ((x645+(x646/x647))==x648);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x655 = UINT64_MAX;
	volatile int32_t t151 = 142325827;

    t151 = ((x653+(x654/x655))==x656);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x657 = 471658U;
	uint8_t x658 = 3U;
	uint32_t x659 = UINT32_MAX;
	static int16_t x660 = -3;
	static volatile int32_t t152 = 8819374;

    t152 = ((x657+(x658/x659))==x660);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x661 = 54204U;
	int8_t x662 = INT8_MIN;
	uint32_t x663 = UINT32_MAX;
	static int64_t x664 = 11495570952463432LL;
	int32_t t153 = -326;

    t153 = ((x661+(x662/x663))==x664);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x665 = -1LL;
	int16_t x667 = INT16_MAX;
	static int8_t x668 = INT8_MAX;
	volatile int32_t t154 = -210;

    t154 = ((x665+(x666/x667))==x668);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x670 = -42;
	uint64_t x671 = 75204570LLU;
	volatile uint16_t x672 = 3436U;
	int32_t t155 = 516943645;

    t155 = ((x669+(x670/x671))==x672);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x673 = 18901669606LL;
	static volatile uint64_t x675 = 195735LLU;
	int32_t x676 = INT32_MIN;
	int32_t t156 = -61;

    t156 = ((x673+(x674/x675))==x676);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x677 = -1;
	volatile uint8_t x678 = 19U;
	volatile int64_t x679 = INT64_MIN;
	volatile int16_t x680 = INT16_MAX;
	int32_t t157 = -545894;

    t157 = ((x677+(x678/x679))==x680);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x681 = 476031168U;
	uint16_t x682 = UINT16_MAX;
	volatile int64_t x684 = 1744LL;
	int32_t t158 = 14757484;

    t158 = ((x681+(x682/x683))==x684);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x689 = 765448LLU;
	int64_t x690 = 177087881275LL;
	static volatile int32_t t159 = 913736;

    t159 = ((x689+(x690/x691))==x692);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x694 = INT64_MIN;
	volatile int16_t x695 = INT16_MIN;
	static int16_t x696 = -1;
	int32_t t160 = -1177;

    t160 = ((x693+(x694/x695))==x696);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x697 = UINT64_MAX;
	static uint8_t x698 = 5U;
	volatile int8_t x699 = -1;
	uint32_t x700 = 2U;

    t161 = ((x697+(x698/x699))==x700);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x701 = 928U;
	int16_t x702 = INT16_MIN;
	static int32_t x704 = INT32_MIN;
	volatile int32_t t162 = -808256;

    t162 = ((x701+(x702/x703))==x704);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x705 = 7731;
	int8_t x706 = 23;
	int8_t x707 = INT8_MAX;
	uint8_t x708 = 0U;
	int32_t t163 = 14;

    t163 = ((x705+(x706/x707))==x708);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x713 = -62;
	int64_t x714 = 57249LL;
	static uint32_t x715 = 5526812U;
	static uint16_t x716 = 6U;
	volatile int32_t t164 = -590;

    t164 = ((x713+(x714/x715))==x716);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x717 = 33620666528LL;
	static int32_t x718 = INT32_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t165 = 721023405;

    t165 = ((x717+(x718/x719))==x720);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x721 = 11LLU;
	static int16_t x722 = INT16_MAX;
	volatile int64_t x723 = 25294LL;
	int8_t x724 = INT8_MAX;
	int32_t t166 = 123;

    t166 = ((x721+(x722/x723))==x724);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x725 = 1;
	static volatile int8_t x726 = INT8_MAX;
	int32_t x727 = 53695203;
	volatile int32_t x728 = INT32_MIN;

    t167 = ((x725+(x726/x727))==x728);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x729 = 1188U;
	int64_t x731 = 23803427192LL;
	static int32_t x732 = INT32_MIN;
	static volatile int32_t t168 = -14;

    t168 = ((x729+(x730/x731))==x732);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x734 = 8634U;
	uint64_t x735 = 163391071800493564LLU;
	uint64_t x736 = 1LLU;
	static volatile int32_t t169 = 1;

    t169 = ((x733+(x734/x735))==x736);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x737 = INT8_MIN;
	uint16_t x739 = UINT16_MAX;
	volatile int32_t t170 = 199392;

    t170 = ((x737+(x738/x739))==x740);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x741 = -253;
	int64_t x742 = INT64_MIN;
	static int16_t x743 = INT16_MIN;
	int32_t x744 = -11422;
	volatile int32_t t171 = -145;

    t171 = ((x741+(x742/x743))==x744);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x745 = UINT16_MAX;
	uint64_t x748 = UINT64_MAX;
	int32_t t172 = -29;

    t172 = ((x745+(x746/x747))==x748);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x749 = 341257934452LLU;
	int32_t x750 = INT32_MAX;
	uint16_t x752 = 199U;
	volatile int32_t t173 = -765971490;

    t173 = ((x749+(x750/x751))==x752);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x757 = -1;
	uint64_t x758 = 4907424162770988703LLU;
	uint8_t x760 = 12U;
	volatile int32_t t174 = 28;

    t174 = ((x757+(x758/x759))==x760);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x761 = UINT16_MAX;
	int32_t x763 = INT32_MIN;
	static volatile int32_t t175 = 263;

    t175 = ((x761+(x762/x763))==x764);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	uint64_t x766 = UINT64_MAX;
	static int32_t x768 = INT32_MIN;
	int32_t t176 = -1319569;

    t176 = ((x765+(x766/x767))==x768);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = 41;
	volatile uint8_t x771 = 4U;
	int64_t x772 = 1086LL;
	volatile int32_t t177 = 0;

    t177 = ((x769+(x770/x771))==x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x773 = -10499;
	static int32_t x774 = -1;
	static int8_t x775 = -1;
	int32_t x776 = INT32_MAX;
	volatile int32_t t178 = 5267528;

    t178 = ((x773+(x774/x775))==x776);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x779 = UINT16_MAX;
	uint64_t x780 = UINT64_MAX;
	int32_t t179 = -1;

    t179 = ((x777+(x778/x779))==x780);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x782 = INT16_MIN;
	int32_t x783 = -4;
	volatile uint64_t x784 = 4183040232082469684LLU;
	volatile int32_t t180 = -5;

    t180 = ((x781+(x782/x783))==x784);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x785 = 13232U;
	int16_t x786 = -68;
	volatile int8_t x787 = INT8_MIN;
	uint64_t x788 = UINT64_MAX;
	static int32_t t181 = 34814886;

    t181 = ((x785+(x786/x787))==x788);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x789 = 21;
	int16_t x790 = INT16_MIN;
	volatile int64_t x791 = INT64_MIN;
	uint64_t x792 = UINT64_MAX;

    t182 = ((x789+(x790/x791))==x792);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x794 = INT8_MIN;
	int64_t x795 = INT64_MIN;
	int64_t x796 = -1LL;
	static int32_t t183 = -21776946;

    t183 = ((x793+(x794/x795))==x796);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x800 = 413U;
	static int32_t t184 = -14070079;

    t184 = ((x797+(x798/x799))==x800);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x801 = INT32_MIN;
	static volatile int32_t x802 = 8;
	int64_t x803 = 1LL;
	int64_t x804 = INT64_MIN;

    t185 = ((x801+(x802/x803))==x804);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x807 = UINT32_MAX;
	uint16_t x808 = 44U;

    t186 = ((x805+(x806/x807))==x808);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x813 = UINT16_MAX;
	int8_t x814 = 27;
	static int16_t x815 = INT16_MAX;
	int8_t x816 = -3;
	volatile int32_t t187 = -196390674;

    t187 = ((x813+(x814/x815))==x816);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x817 = INT64_MAX;
	static int8_t x818 = INT8_MIN;
	int64_t x819 = 13735266753017LL;
	int32_t x820 = -219490;
	static int32_t t188 = -100;

    t188 = ((x817+(x818/x819))==x820);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x822 = INT16_MIN;
	int32_t x824 = 38614472;
	static volatile int32_t t189 = -86677;

    t189 = ((x821+(x822/x823))==x824);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x825 = -13060;
	int8_t x826 = -1;
	int8_t x828 = INT8_MIN;
	int32_t t190 = -457279690;

    t190 = ((x825+(x826/x827))==x828);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x829 = INT32_MAX;
	int8_t x830 = 1;
	int64_t x832 = 454LL;
	int32_t t191 = 4494;

    t191 = ((x829+(x830/x831))==x832);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x833 = 1;
	uint32_t x834 = 20694U;
	uint16_t x835 = 207U;
	int64_t x836 = 1951423282389463LL;
	int32_t t192 = -183222641;

    t192 = ((x833+(x834/x835))==x836);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x838 = INT64_MAX;
	uint64_t x839 = 51890391LLU;
	volatile int32_t t193 = 197870;

    t193 = ((x837+(x838/x839))==x840);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x841 = 0U;
	uint64_t x842 = 688517773763LLU;
	volatile uint8_t x843 = 19U;
	volatile int8_t x844 = 2;
	volatile int32_t t194 = -49367228;

    t194 = ((x841+(x842/x843))==x844);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x845 = INT64_MAX;
	int16_t x847 = -164;
	int16_t x848 = -51;
	volatile int32_t t195 = -104895;

    t195 = ((x845+(x846/x847))==x848);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x849 = INT8_MIN;
	int32_t x851 = -1;
	uint16_t x852 = 1835U;
	int32_t t196 = 2206049;

    t196 = ((x849+(x850/x851))==x852);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x854 = 4675830U;
	int64_t x855 = -1LL;
	volatile uint32_t x856 = UINT32_MAX;

    t197 = ((x853+(x854/x855))==x856);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x857 = 57U;
	static uint32_t x859 = 446474U;
	volatile int64_t x860 = INT64_MIN;

    t198 = ((x857+(x858/x859))==x860);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x861 = INT32_MIN;
	int16_t x862 = INT16_MAX;
	int16_t x863 = INT16_MIN;
	int16_t x864 = INT16_MAX;

    t199 = ((x861+(x862/x863))==x864);

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

