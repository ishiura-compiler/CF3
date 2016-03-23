
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

static int16_t x1 = -22;
static int8_t x3 = INT8_MAX;
static int64_t x5 = -1LL;
volatile int16_t x15 = -1;
volatile int32_t t3 = -1;
static int64_t x18 = 1100502317LL;
uint64_t x19 = 86407022955595565LLU;
int8_t x20 = INT8_MIN;
int8_t x22 = INT8_MAX;
volatile int32_t t7 = 85;
int16_t x39 = INT16_MIN;
static int32_t t9 = 13319;
static volatile int64_t t10 = 1119494698050LL;
volatile int16_t x49 = -3;
static int64_t t12 = 236365870LL;
uint16_t x56 = UINT16_MAX;
uint32_t x63 = 553306337U;
static volatile uint64_t t16 = 706193068LLU;
static int32_t t17 = 0;
uint8_t x80 = UINT8_MAX;
volatile int32_t t19 = 1;
int64_t x87 = 51639044942LL;
static volatile uint64_t x97 = 2646089506308825LLU;
int32_t x98 = INT32_MIN;
uint32_t x99 = UINT32_MAX;
static int8_t x105 = INT8_MAX;
int64_t x107 = 464LL;
static uint16_t x109 = UINT16_MAX;
static volatile int16_t x114 = -1;
int32_t x115 = INT32_MAX;
volatile uint32_t x116 = UINT32_MAX;
volatile int32_t x117 = -807292096;
int32_t t29 = 177648;
static int64_t x121 = INT64_MIN;
int32_t x125 = INT32_MAX;
int32_t x132 = -1;
static volatile uint64_t t32 = 1623061285033LLU;
int16_t x136 = 1;
int64_t x143 = -1LL;
static int32_t x148 = INT32_MAX;
int16_t x149 = -1;
static uint8_t x151 = 45U;
static uint64_t x153 = UINT64_MAX;
static int32_t x155 = INT32_MIN;
volatile int64_t x156 = INT64_MAX;
static int32_t x164 = INT32_MAX;
uint32_t x166 = 3U;
volatile int16_t x169 = INT16_MIN;
uint16_t x173 = UINT16_MAX;
int16_t x174 = INT16_MIN;
int8_t x177 = -1;
int32_t x179 = -1;
int32_t x183 = 59042;
int16_t x199 = INT16_MIN;
static int64_t t49 = -316868LL;
int8_t x206 = -1;
int32_t x209 = -1;
volatile uint64_t x218 = UINT64_MAX;
uint64_t x223 = UINT64_MAX;
int64_t x224 = INT64_MAX;
int64_t t56 = INT64_MIN;
volatile int8_t x234 = INT8_MAX;
static volatile uint64_t x237 = UINT64_MAX;
volatile uint16_t x239 = UINT16_MAX;
volatile uint64_t x242 = UINT64_MAX;
int32_t t60 = 1;
int32_t t61 = 6093010;
int32_t x249 = INT32_MIN;
int8_t x250 = INT8_MIN;
static volatile int16_t x263 = INT16_MIN;
static int32_t t65 = 1097;
int64_t x271 = INT64_MIN;
uint16_t x276 = 3U;
int8_t x290 = -1;
volatile uint16_t x293 = 0U;
volatile int8_t x298 = -5;
int8_t x300 = -7;
int8_t x301 = -1;
int64_t t76 = 16657278802LL;
int64_t x311 = 0LL;
volatile int64_t t77 = 183684397426LL;
volatile uint16_t x331 = UINT16_MAX;
volatile int32_t t82 = 259191;
uint64_t x335 = 461056737853356333LLU;
int16_t x336 = INT16_MIN;
int64_t x347 = -74555039LL;
int32_t t87 = INT32_MAX;
int8_t x355 = INT8_MAX;
uint8_t x367 = UINT8_MAX;
int64_t x377 = -1LL;
uint64_t x386 = 526067985522161116LLU;
int64_t x387 = INT64_MAX;
int64_t x388 = INT64_MAX;
int16_t x390 = INT16_MIN;
static uint16_t x392 = UINT16_MAX;
int32_t x393 = 10045;
int16_t x404 = INT16_MIN;
volatile int32_t x405 = -360;
volatile uint8_t x420 = 0U;
int32_t t107 = 98;
volatile int32_t x433 = -1;
int8_t x435 = -7;
int32_t t108 = -5;
uint8_t x438 = UINT8_MAX;
volatile int16_t x440 = INT16_MIN;
volatile int32_t x441 = 28513;
int64_t x443 = -189719818LL;
volatile uint32_t x445 = 235237157U;
volatile uint32_t x450 = UINT32_MAX;
volatile uint64_t t112 = 49077910LLU;
volatile uint16_t x456 = 771U;
static int32_t x457 = -3769614;
volatile uint16_t x465 = 464U;
int64_t x466 = INT64_MAX;
int64_t x468 = INT64_MIN;
int32_t t117 = 7276686;
volatile int16_t x475 = INT16_MIN;
uint16_t x488 = 32U;
int32_t t121 = -176415;
volatile int16_t x492 = INT16_MIN;
volatile int16_t x497 = -1;
uint64_t x505 = UINT64_MAX;
int8_t x506 = INT8_MIN;
static int64_t x511 = -116919407090LL;
int32_t x514 = -738;
int16_t x522 = INT16_MIN;
int8_t x528 = INT8_MIN;
static int16_t x529 = INT16_MIN;
int32_t t133 = 2527689;
int64_t x540 = INT64_MIN;
volatile int64_t t134 = INT64_MAX;
int16_t x542 = 95;
static volatile int16_t x553 = 269;
int32_t x558 = INT32_MIN;
volatile int8_t x563 = INT8_MIN;
static volatile int32_t t140 = 167577527;
volatile uint32_t t141 = 257U;
static int8_t x575 = -1;
volatile int32_t t147 = 77684637;
static int32_t x602 = INT32_MIN;
volatile int8_t x606 = -27;
int16_t x610 = INT16_MAX;
volatile int32_t x613 = -5;
uint8_t x615 = 20U;
volatile int32_t x617 = INT32_MIN;
volatile int16_t x624 = INT16_MIN;
int16_t x636 = INT16_MIN;
int32_t x638 = -52278;
int32_t x643 = INT32_MIN;
volatile int16_t x650 = -1;
int64_t x658 = -1LL;
static volatile int32_t x659 = -110;
int64_t t164 = 71842751521542674LL;
int16_t x666 = INT16_MIN;
int64_t x667 = INT64_MIN;
static int16_t x671 = -1;
int64_t x672 = 745429915348LL;
int64_t t167 = -160854597356LL;
int8_t x674 = 0;
uint32_t x677 = 158745141U;
int8_t x679 = INT8_MIN;
static int8_t x685 = 1;
int32_t t171 = -9776;
uint16_t x689 = 242U;
int16_t x694 = -1;
static uint32_t x695 = 309U;
int8_t x700 = -27;
volatile uint64_t t175 = 236LLU;
volatile int16_t x707 = INT16_MAX;
static int16_t x710 = INT16_MIN;
int64_t t178 = -40753290LL;
int8_t x724 = INT8_MIN;
uint16_t x728 = UINT16_MAX;
static int32_t x729 = INT32_MIN;
uint32_t x732 = 15897140U;
volatile int16_t x734 = INT16_MIN;
volatile int32_t t183 = 0;
int8_t x740 = INT8_MIN;
int8_t x742 = 7;
int32_t x743 = -11669042;
volatile uint32_t t186 = 510U;
static int64_t x749 = -1LL;
int64_t x751 = INT64_MIN;
int64_t x762 = INT64_MIN;
volatile uint8_t x763 = 57U;
volatile uint32_t t190 = 4U;
static int16_t x765 = -1;
uint8_t x769 = 13U;
int32_t t193 = -816;
int32_t x777 = INT32_MIN;
uint8_t x778 = 7U;
uint64_t x790 = UINT64_MAX;
uint32_t x791 = 132182987U;
volatile int64_t t197 = 15101080LL;
int32_t x794 = INT32_MIN;
int32_t x795 = -3;
volatile int32_t t198 = 406;
int32_t x798 = INT32_MIN;


void f0(void) {
    	volatile int16_t x2 = INT16_MAX;
	static uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 424181286;

    t0 = (((x1<=x2)*x3)^x4);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 33U;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = -11824680735LL;

    t1 = (((x5<=x6)*x7)^x8);

    if (t1 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	uint64_t x11 = 10LLU;
	uint32_t x12 = UINT32_MAX;
	volatile uint64_t t2 = 183646101321408LLU;

    t2 = (((x9<=x10)*x11)^x12);

    if (t2 != 4294967285LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = UINT16_MAX;
	volatile uint16_t x14 = 1U;
	int16_t x16 = INT16_MIN;

    t3 = (((x13<=x14)*x15)^x16);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint64_t t4 = 7LLU;

    t4 = (((x17<=x18)*x19)^x20);

    if (t4 != 18360337050753956013LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	static int16_t x23 = 49;
	volatile int32_t x24 = -1;
	volatile int32_t t5 = 3459001;

    t5 = (((x21<=x22)*x23)^x24);

    if (t5 != -50) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 1746U;
	int8_t x26 = INT8_MAX;
	uint32_t x27 = 931U;
	int16_t x28 = 1;
	static uint32_t t6 = 30658879U;

    t6 = (((x25<=x26)*x27)^x28);

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int64_t x30 = 89555LL;
	int8_t x31 = -1;
	static int16_t x32 = -1494;

    t7 = (((x29<=x30)*x31)^x32);

    if (t7 != 1493) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 38804000LLU;
	uint32_t x34 = UINT32_MAX;
	static int64_t x35 = -1LL;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -127LL;

    t8 = (((x33<=x34)*x35)^x36);

    if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	static int32_t x38 = INT32_MAX;
	int8_t x40 = -11;

    t9 = (((x37<=x38)*x39)^x40);

    if (t9 != 32757) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	static int32_t x42 = -17485717;
	volatile uint32_t x43 = 2U;
	volatile int64_t x44 = 357968111503LL;

    t10 = (((x41<=x42)*x43)^x44);

    if (t10 != 357968111501LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -7;
	static uint32_t x46 = 112820304U;
	volatile int32_t x47 = INT32_MIN;
	volatile uint16_t x48 = 388U;
	int32_t t11 = -7325354;

    t11 = (((x45<=x46)*x47)^x48);

    if (t11 != 388) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MAX;
	int8_t x51 = -4;
	int64_t x52 = INT64_MIN;

    t12 = (((x49<=x50)*x51)^x52);

    if (t12 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	int64_t x54 = INT64_MAX;
	static volatile int64_t x55 = INT64_MIN;
	static int64_t t13 = 91601LL;

    t13 = (((x53<=x54)*x55)^x56);

    if (t13 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	static int8_t x60 = INT8_MIN;
	static int32_t t14 = 9;

    t14 = (((x57<=x58)*x59)^x60);

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 352828U;
	uint8_t x62 = UINT8_MAX;
	int64_t x64 = INT64_MAX;
	static int64_t t15 = INT64_MAX;

    t15 = (((x61<=x62)*x63)^x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	uint16_t x66 = 0U;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = 4U;

    t16 = (((x65<=x66)*x67)^x68);

    if (t16 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	uint8_t x71 = 45U;
	int32_t x72 = -1;

    t17 = (((x69<=x70)*x71)^x72);

    if (t17 != -46) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 1U;
	int64_t x74 = INT64_MAX;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	volatile int64_t t18 = -1128683453233424LL;

    t18 = (((x73<=x74)*x75)^x76);

    if (t18 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	static int16_t x78 = 3;
	uint16_t x79 = UINT16_MAX;

    t19 = (((x77<=x78)*x79)^x80);

    if (t19 != 65280) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MAX;
	uint32_t x83 = 3754349U;
	volatile int64_t x84 = -671744649LL;
	int64_t t20 = -803LL;

    t20 = (((x81<=x82)*x83)^x84);

    if (t20 != -674450406LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 166U;
	static volatile int64_t x86 = INT64_MIN;
	static int8_t x88 = -1;
	int64_t t21 = 643588LL;

    t21 = (((x85<=x86)*x87)^x88);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = 8089;
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	volatile int8_t x92 = INT8_MAX;
	int32_t t22 = -603815341;

    t22 = (((x89<=x90)*x91)^x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = INT64_MAX;

    t23 = (((x93<=x94)*x95)^x96);

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x100 = INT32_MAX;
	static uint32_t t24 = 137515410U;

    t24 = (((x97<=x98)*x99)^x100);

    if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 31LLU;
	static int32_t x104 = INT32_MIN;
	uint64_t t25 = 73787527966183785LLU;

    t25 = (((x101<=x102)*x103)^x104);

    if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = UINT8_MAX;
	int32_t x108 = -1;
	static volatile int64_t t26 = -3263034482472769LL;

    t26 = (((x105<=x106)*x107)^x108);

    if (t26 != -465LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = INT16_MAX;
	int64_t x111 = -1LL;
	static int32_t x112 = INT32_MAX;
	volatile int64_t t27 = 199835LL;

    t27 = (((x109<=x110)*x111)^x112);

    if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (((x113<=x114)*x115)^x116);

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = INT8_MIN;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = 29;

    t29 = (((x117<=x118)*x119)^x120);

    if (t29 != 65506) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 1814694039233LLU;
	int16_t x123 = INT16_MIN;
	int64_t x124 = -1LL;
	int64_t t30 = -52611799458275LL;

    t30 = (((x121<=x122)*x123)^x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x126 = 107LLU;
	static uint8_t x127 = 84U;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -122867105;

    t31 = (((x125<=x126)*x127)^x128);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 2LLU;
	int16_t x130 = INT16_MAX;
	static uint64_t x131 = 1711714070790307864LLU;

    t32 = (((x129<=x130)*x131)^x132);

    if (t32 != 16735030002919243751LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	static int64_t x135 = INT64_MIN;
	static volatile int64_t t33 = 501805582213LL;

    t33 = (((x133<=x134)*x135)^x136);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x137 = 3U;
	volatile int32_t x138 = INT32_MAX;
	static int32_t x139 = INT32_MIN;
	int32_t x140 = 48742;
	int32_t t34 = 41364856;

    t34 = (((x137<=x138)*x139)^x140);

    if (t34 != -2147434906) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int16_t x142 = INT16_MAX;
	volatile uint32_t x144 = UINT32_MAX;
	int64_t t35 = -8850257183441976LL;

    t35 = (((x141<=x142)*x143)^x144);

    if (t35 != -4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MAX;
	volatile int32_t t36 = 748703215;

    t36 = (((x145<=x146)*x147)^x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = UINT8_MAX;
	int64_t x152 = -1LL;
	static volatile int64_t t37 = -1906364924LL;

    t37 = (((x149<=x150)*x151)^x152);

    if (t37 != -46LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 8;
	volatile int64_t t38 = INT64_MAX;

    t38 = (((x153<=x154)*x155)^x156);

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 847352098;
	int16_t x158 = INT16_MIN;
	static volatile int64_t x159 = 208LL;
	volatile int8_t x160 = -1;
	int64_t t39 = 657780772216943LL;

    t39 = (((x157<=x158)*x159)^x160);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile int8_t x162 = -1;
	int32_t x163 = INT32_MIN;
	int32_t t40 = 3961352;

    t40 = (((x161<=x162)*x163)^x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int8_t x167 = -7;
	int8_t x168 = -1;
	volatile int32_t t41 = -2679615;

    t41 = (((x165<=x166)*x167)^x168);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = -1;
	int64_t x171 = -1LL;
	static uint16_t x172 = UINT16_MAX;
	int64_t t42 = 8110218181013LL;

    t42 = (((x169<=x170)*x171)^x172);

    if (t42 != -65536LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x175 = INT32_MIN;
	uint8_t x176 = 1U;
	static int32_t t43 = 1;

    t43 = (((x173<=x174)*x175)^x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t44 = INT32_MAX;

    t44 = (((x177<=x178)*x179)^x180);

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int16_t x182 = 0;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

    t45 = (((x181<=x182)*x183)^x184);

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	static int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 0U;
	static int32_t t46 = 14616;

    t46 = (((x185<=x186)*x187)^x188);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	int16_t x190 = -482;
	volatile int8_t x191 = INT8_MAX;
	int16_t x192 = 50;
	int32_t t47 = 233458;

    t47 = (((x189<=x190)*x191)^x192);

    if (t47 != 50) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static uint8_t x194 = UINT8_MAX;
	volatile int16_t x195 = INT16_MIN;
	static int64_t x196 = INT64_MIN;
	int64_t t48 = -394719297078633019LL;

    t48 = (((x193<=x194)*x195)^x196);

    if (t48 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	int64_t x200 = 90577030594916LL;

    t49 = (((x197<=x198)*x199)^x200);

    if (t49 != -90577030594204LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = -5062804825403LL;
	int64_t t50 = 154147LL;

    t50 = (((x201<=x202)*x203)^x204);

    if (t50 != -5062804825403LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = 382165;
	volatile int32_t x207 = -1;
	int8_t x208 = 12;
	volatile int32_t t51 = -6;

    t51 = (((x205<=x206)*x207)^x208);

    if (t51 != 12) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = UINT32_MAX;
	int8_t x211 = 0;
	int8_t x212 = 1;
	volatile int32_t t52 = -29957254;

    t52 = (((x209<=x210)*x211)^x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = -1LL;
	volatile int32_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	volatile uint16_t x216 = 0U;
	static uint64_t t53 = UINT64_MAX;

    t53 = (((x213<=x214)*x215)^x216);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	int8_t x219 = 1;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -119887662;

    t54 = (((x217<=x218)*x219)^x220);

    if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	uint16_t x222 = 6925U;
	volatile uint64_t t55 = 18749213187LLU;

    t55 = (((x221<=x222)*x223)^x224);

    if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	uint64_t x226 = 363174220LLU;
	static int32_t x227 = 508;
	int64_t x228 = INT64_MIN;

    t56 = (((x225<=x226)*x227)^x228);

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 482087484115713LLU;
	volatile uint32_t x230 = 14845775U;
	uint16_t x231 = 19555U;
	volatile uint32_t x232 = UINT32_MAX;
	volatile uint32_t t57 = UINT32_MAX;

    t57 = (((x229<=x230)*x231)^x232);

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x235 = -1;
	int32_t x236 = INT32_MAX;
	int32_t t58 = INT32_MIN;

    t58 = (((x233<=x234)*x235)^x236);

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t59 = UINT32_MAX;

    t59 = (((x237<=x238)*x239)^x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = UINT8_MAX;
	static int16_t x243 = INT16_MAX;
	static int8_t x244 = INT8_MIN;

    t60 = (((x241<=x242)*x243)^x244);

    if (t60 != -32641) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 32817945652LL;
	int16_t x246 = -1;
	int32_t x247 = -1;
	static int8_t x248 = -4;

    t61 = (((x245<=x246)*x247)^x248);

    if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x251 = UINT8_MAX;
	int16_t x252 = -1;
	int32_t t62 = 176761589;

    t62 = (((x249<=x250)*x251)^x252);

    if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	static int8_t x254 = INT8_MAX;
	int32_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	uint32_t t63 = 4795828U;

    t63 = (((x253<=x254)*x255)^x256);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 32349668;
	int32_t x258 = -4625;
	static volatile int16_t x259 = INT16_MIN;
	uint8_t x260 = 63U;
	static volatile int32_t t64 = -2;

    t64 = (((x257<=x258)*x259)^x260);

    if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int64_t x262 = INT64_MAX;
	static int16_t x264 = INT16_MIN;

    t65 = (((x261<=x262)*x263)^x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 3628220830740337LL;
	static uint8_t x266 = 19U;
	uint16_t x267 = 32538U;
	int32_t x268 = INT32_MIN;
	int32_t t66 = INT32_MIN;

    t66 = (((x265<=x266)*x267)^x268);

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = INT32_MIN;
	static volatile uint16_t x270 = UINT16_MAX;
	int16_t x272 = -138;
	int64_t t67 = -4171LL;

    t67 = (((x269<=x270)*x271)^x272);

    if (t67 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	uint8_t x275 = 106U;
	int32_t t68 = -1039419;

    t68 = (((x273<=x274)*x275)^x276);

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	uint64_t x278 = 3635066063596LLU;
	volatile uint64_t x279 = 908524433495142LLU;
	int32_t x280 = INT32_MIN;
	uint64_t t69 = 3568932576819996648LLU;

    t69 = (((x277<=x278)*x279)^x280);

    if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	uint8_t x282 = 7U;
	int8_t x283 = 2;
	int16_t x284 = -1;
	int32_t t70 = 4910;

    t70 = (((x281<=x282)*x283)^x284);

    if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = UINT32_MAX;
	static volatile int64_t x288 = INT64_MAX;
	int64_t t71 = INT64_MAX;

    t71 = (((x285<=x286)*x287)^x288);

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 84581976943610LLU;
	int32_t x291 = 14940522;
	static uint8_t x292 = 119U;
	volatile int32_t t72 = 31;

    t72 = (((x289<=x290)*x291)^x292);

    if (t72 != 14940445) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -3600871334260196675LL;
	int8_t x295 = -38;
	int64_t x296 = -1LL;
	volatile int64_t t73 = 13LL;

    t73 = (((x293<=x294)*x295)^x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 474;
	int32_t x299 = 1;
	int32_t t74 = 1;

    t74 = (((x297<=x298)*x299)^x300);

    if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x302 = 0LLU;
	int8_t x303 = INT8_MAX;
	static volatile int64_t x304 = -1LL;
	static volatile int64_t t75 = -318LL;

    t75 = (((x301<=x302)*x303)^x304);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = 0;
	int32_t x306 = INT32_MAX;
	volatile int64_t x307 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;

    t76 = (((x305<=x306)*x307)^x308);

    if (t76 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x309 = 48U;
	static int32_t x310 = INT32_MIN;
	int16_t x312 = 30;

    t77 = (((x309<=x310)*x311)^x312);

    if (t77 != 30LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 25;
	static int64_t x314 = 411LL;
	int8_t x315 = 9;
	static volatile uint8_t x316 = 0U;
	volatile int32_t t78 = 14654399;

    t78 = (((x313<=x314)*x315)^x316);

    if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 5;
	uint8_t x318 = 0U;
	uint16_t x319 = 29U;
	volatile int32_t x320 = -1;
	volatile int32_t t79 = -479352;

    t79 = (((x317<=x318)*x319)^x320);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	int8_t x322 = INT8_MAX;
	uint32_t x323 = 31030U;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t80 = 2060572U;

    t80 = (((x321<=x322)*x323)^x324);

    if (t80 != 4294965558U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	static uint8_t x326 = UINT8_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	static volatile uint64_t x328 = 207143832285LLU;
	volatile uint64_t t81 = 287254320LLU;

    t81 = (((x325<=x326)*x327)^x328);

    if (t81 != 207143832285LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = -1;
	uint8_t x330 = 34U;
	uint16_t x332 = 2U;

    t82 = (((x329<=x330)*x331)^x332);

    if (t82 != 65533) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	volatile int16_t x334 = -1605;
	static uint64_t t83 = 1019019962LLU;

    t83 = (((x333<=x334)*x335)^x336);

    if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 99U;
	int64_t x340 = INT64_MIN;
	int64_t t84 = 34LL;

    t84 = (((x337<=x338)*x339)^x340);

    if (t84 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	volatile int64_t x342 = INT64_MAX;
	volatile int64_t x343 = -724630LL;
	int64_t x344 = -1LL;
	int64_t t85 = 46586LL;

    t85 = (((x341<=x342)*x343)^x344);

    if (t85 != 724629LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	volatile uint64_t x348 = 37109215951LLU;
	static uint64_t t86 = 31422672794701LLU;

    t86 = (((x345<=x346)*x347)^x348);

    if (t86 != 18446744036538569646LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	int16_t x351 = -1;
	int32_t x352 = INT32_MAX;

    t87 = (((x349<=x350)*x351)^x352);

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = 96U;
	int64_t x356 = INT64_MAX;
	volatile int64_t t88 = INT64_MAX;

    t88 = (((x353<=x354)*x355)^x356);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 62U;
	static int64_t x358 = 51276LL;
	uint32_t x359 = UINT32_MAX;
	static int8_t x360 = INT8_MIN;
	uint32_t t89 = 355912U;

    t89 = (((x357<=x358)*x359)^x360);

    if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -141185551286LL;
	int32_t x362 = INT32_MAX;
	static int32_t x363 = 2747723;
	uint32_t x364 = UINT32_MAX;
	uint32_t t90 = 30318645U;

    t90 = (((x361<=x362)*x363)^x364);

    if (t90 != 4292219572U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 26LLU;
	int64_t x366 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t91 = 1287812U;

    t91 = (((x365<=x366)*x367)^x368);

    if (t91 != 4294967040U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = 10U;
	int64_t t92 = 747LL;

    t92 = (((x369<=x370)*x371)^x372);

    if (t92 != 10LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = 1;
	volatile int32_t x376 = INT32_MIN;
	static volatile int32_t t93 = 3;

    t93 = (((x373<=x374)*x375)^x376);

    if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MAX;
	int8_t x379 = 1;
	uint64_t x380 = UINT64_MAX;
	uint64_t t94 = 82857714LLU;

    t94 = (((x377<=x378)*x379)^x380);

    if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 6;

    t95 = (((x381<=x382)*x383)^x384);

    if (t95 != -2147450881) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	int64_t t96 = INT64_MAX;

    t96 = (((x385<=x386)*x387)^x388);

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 9LL;
	uint8_t x391 = 0U;
	static int32_t t97 = -465599;

    t97 = (((x389<=x390)*x391)^x392);

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = -7923;
	int64_t x395 = -1LL;
	int16_t x396 = 11754;
	volatile int64_t t98 = 2348297660740248LL;

    t98 = (((x393<=x394)*x395)^x396);

    if (t98 != 11754LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MAX;
	volatile int32_t x398 = 2;
	uint64_t x399 = 16326148LLU;
	static int8_t x400 = -1;
	uint64_t t99 = UINT64_MAX;

    t99 = (((x397<=x398)*x399)^x400);

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = -18;
	uint64_t x402 = 25845407686911435LLU;
	int16_t x403 = 35;
	int32_t t100 = 236162;

    t100 = (((x401<=x402)*x403)^x404);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = -1LL;
	uint64_t x407 = UINT64_MAX;
	int64_t x408 = 1LL;
	volatile uint64_t t101 = 114234734391LLU;

    t101 = (((x405<=x406)*x407)^x408);

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = 69U;
	volatile int8_t x410 = -58;
	volatile uint32_t x411 = UINT32_MAX;
	static uint16_t x412 = 11288U;
	volatile uint32_t t102 = 111353662U;

    t102 = (((x409<=x410)*x411)^x412);

    if (t102 != 4294956007U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MAX;
	static uint64_t x415 = 0LLU;
	int64_t x416 = INT64_MAX;
	static volatile uint64_t t103 = 2333508659481449LLU;

    t103 = (((x413<=x414)*x415)^x416);

    if (t103 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MIN;
	static int32_t x419 = INT32_MAX;
	static volatile int32_t t104 = INT32_MAX;

    t104 = (((x417<=x418)*x419)^x420);

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 15051;
	volatile uint16_t x422 = UINT16_MAX;
	static uint64_t x423 = 1184189350909774LLU;
	static volatile uint8_t x424 = 62U;
	uint64_t t105 = 694917993681616LLU;

    t105 = (((x421<=x422)*x423)^x424);

    if (t105 != 1184189350909808LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 6847547U;
	int16_t x426 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	static int16_t x428 = -1;
	volatile int32_t t106 = 302718;

    t106 = (((x425<=x426)*x427)^x428);

    if (t106 != -256) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -8;
	int8_t x430 = INT8_MAX;
	static int16_t x431 = INT16_MIN;
	uint8_t x432 = 68U;

    t107 = (((x429<=x430)*x431)^x432);

    if (t107 != -32700) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -1;
	int32_t x436 = 250318143;

    t108 = (((x433<=x434)*x435)^x436);

    if (t108 != -250318138) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -266102334;
	uint16_t x439 = 2U;
	volatile int32_t t109 = 13503;

    t109 = (((x437<=x438)*x439)^x440);

    if (t109 != -32766) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x442 = UINT8_MAX;
	volatile uint64_t x444 = UINT64_MAX;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = (((x441<=x442)*x443)^x444);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = INT16_MIN;
	uint8_t x447 = 0U;
	int8_t x448 = -1;
	int32_t t111 = -207;

    t111 = (((x445<=x446)*x447)^x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x451 = -1;
	volatile uint64_t x452 = 39422331435373LLU;

    t112 = (((x449<=x450)*x451)^x452);

    if (t112 != 18446704651378116242LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 3;
	volatile uint64_t x454 = 102161582657431LLU;
	int16_t x455 = INT16_MIN;
	static int32_t t113 = -4456;

    t113 = (((x453<=x454)*x455)^x456);

    if (t113 != -31997) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = -1;
	volatile int32_t x459 = 0;
	int16_t x460 = INT16_MAX;
	int32_t t114 = -1;

    t114 = (((x457<=x458)*x459)^x460);

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 28390101LLU;
	volatile uint16_t x462 = 10U;
	static uint32_t x463 = 1U;
	static uint32_t x464 = UINT32_MAX;
	uint32_t t115 = UINT32_MAX;

    t115 = (((x461<=x462)*x463)^x464);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x467 = INT64_MAX;
	volatile int64_t t116 = -104046LL;

    t116 = (((x465<=x466)*x467)^x468);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 73773227792LLU;
	static volatile int8_t x470 = -1;
	int8_t x471 = -1;
	static volatile int8_t x472 = INT8_MIN;

    t117 = (((x469<=x470)*x471)^x472);

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MIN;
	static int8_t x476 = -21;
	int32_t t118 = 216569623;

    t118 = (((x473<=x474)*x475)^x476);

    if (t118 != -21) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = -1;
	volatile int8_t x479 = INT8_MIN;
	static uint32_t x480 = 2219864U;
	volatile uint32_t t119 = 6782246U;

    t119 = (((x477<=x478)*x479)^x480);

    if (t119 != 4292747480U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	uint32_t x482 = 117U;
	int32_t x483 = INT32_MAX;
	int16_t x484 = 8;
	int32_t t120 = -22446;

    t120 = (((x481<=x482)*x483)^x484);

    if (t120 != 8) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	static volatile int64_t x486 = 718730120529955LL;
	int16_t x487 = INT16_MIN;

    t121 = (((x485<=x486)*x487)^x488);

    if (t121 != -32736) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MIN;
	int64_t x490 = -20516797564858LL;
	int64_t x491 = -663591052451LL;
	volatile int64_t t122 = 217409LL;

    t122 = (((x489<=x490)*x491)^x492);

    if (t122 != 663591033693LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	int16_t x494 = -6833;
	int16_t x495 = 0;
	static int64_t x496 = -1LL;
	volatile int64_t t123 = 23082584LL;

    t123 = (((x493<=x494)*x495)^x496);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x498 = INT8_MAX;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = 628233857U;
	volatile uint32_t t124 = 26908674U;

    t124 = (((x497<=x498)*x499)^x500);

    if (t124 != 628233982U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MIN;
	volatile int32_t x502 = -1;
	static uint64_t x503 = UINT64_MAX;
	int64_t x504 = -1LL;
	volatile uint64_t t125 = 33402LLU;

    t125 = (((x501<=x502)*x503)^x504);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x507 = -58413LL;
	int16_t x508 = INT16_MIN;
	int64_t t126 = -29381214365148LL;

    t126 = (((x505<=x506)*x507)^x508);

    if (t126 != -32768LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MAX;
	int16_t x512 = INT16_MAX;
	static volatile int64_t t127 = -1714984481001797LL;

    t127 = (((x509<=x510)*x511)^x512);

    if (t127 != 32767LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	uint16_t x515 = 6U;
	int64_t x516 = 23755069LL;
	int64_t t128 = -175093782859282748LL;

    t128 = (((x513<=x514)*x515)^x516);

    if (t128 != 23755069LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 7;
	int8_t x518 = INT8_MAX;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = 766356888;
	uint64_t t129 = 1808383012973425LLU;

    t129 = (((x517<=x518)*x519)^x520);

    if (t129 != 18446744072943194727LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	static int64_t x523 = INT64_MIN;
	int8_t x524 = -1;
	volatile int64_t t130 = INT64_MAX;

    t130 = (((x521<=x522)*x523)^x524);

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = INT64_MIN;
	int64_t x526 = INT64_MIN;
	uint64_t x527 = UINT64_MAX;
	volatile uint64_t t131 = 7047275LLU;

    t131 = (((x525<=x526)*x527)^x528);

    if (t131 != 127LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MAX;
	volatile int64_t x531 = INT64_MIN;
	uint32_t x532 = 6335185U;
	int64_t t132 = -6390LL;

    t132 = (((x529<=x530)*x531)^x532);

    if (t132 != -9223372036848440623LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = -669945;
	int32_t x534 = -63;
	volatile uint8_t x535 = UINT8_MAX;
	volatile uint16_t x536 = 2045U;

    t133 = (((x533<=x534)*x535)^x536);

    if (t133 != 1794) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = INT16_MIN;
	volatile int8_t x538 = 8;
	int16_t x539 = -1;

    t134 = (((x537<=x538)*x539)^x540);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 15U;
	volatile int8_t x543 = INT8_MAX;
	static uint16_t x544 = UINT16_MAX;
	volatile int32_t t135 = 356896459;

    t135 = (((x541<=x542)*x543)^x544);

    if (t135 != 65408) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile uint64_t x546 = 33227272160LLU;
	int8_t x547 = INT8_MAX;
	volatile int16_t x548 = -536;
	int32_t t136 = -638224684;

    t136 = (((x545<=x546)*x547)^x548);

    if (t136 != -536) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 262302449768485879LLU;
	uint8_t x550 = 5U;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = -843;
	uint32_t t137 = 63U;

    t137 = (((x549<=x550)*x551)^x552);

    if (t137 != 4294966453U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = UINT16_MAX;
	uint8_t x555 = 4U;
	int8_t x556 = -1;
	int32_t t138 = -372;

    t138 = (((x553<=x554)*x555)^x556);

    if (t138 != -5) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	static uint64_t x559 = 7298031045155388LLU;
	static int8_t x560 = -14;
	volatile uint64_t t139 = 782329366LLU;

    t139 = (((x557<=x558)*x559)^x560);

    if (t139 != 18439446042664396238LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = 6355631123015LLU;
	int16_t x562 = -1;
	uint16_t x564 = 3251U;

    t140 = (((x561<=x562)*x563)^x564);

    if (t140 != -3277) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x565 = 12U;
	int8_t x566 = -7;
	uint32_t x567 = 111443U;
	uint8_t x568 = UINT8_MAX;

    t141 = (((x565<=x566)*x567)^x568);

    if (t141 != 255U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x569 = INT32_MAX;
	static uint16_t x570 = UINT16_MAX;
	int64_t x571 = 2LL;
	int64_t x572 = INT64_MIN;
	int64_t t142 = INT64_MIN;

    t142 = (((x569<=x570)*x571)^x572);

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	uint32_t x574 = 10565U;
	uint8_t x576 = UINT8_MAX;
	int32_t t143 = 0;

    t143 = (((x573<=x574)*x575)^x576);

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	static uint16_t x578 = 3026U;
	volatile int16_t x579 = INT16_MIN;
	int64_t x580 = INT64_MIN;
	int64_t t144 = 370LL;

    t144 = (((x577<=x578)*x579)^x580);

    if (t144 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = INT32_MIN;
	volatile int8_t x582 = -6;
	uint64_t x583 = UINT64_MAX;
	uint16_t x584 = 4082U;
	uint64_t t145 = 3547069066LLU;

    t145 = (((x581<=x582)*x583)^x584);

    if (t145 != 18446744073709547533LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 0;
	int8_t x586 = INT8_MAX;
	uint64_t x587 = 641044853911691267LLU;
	int64_t x588 = -1LL;
	volatile uint64_t t146 = 111LLU;

    t146 = (((x585<=x586)*x587)^x588);

    if (t146 != 17805699219797860348LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	static int32_t x590 = INT32_MAX;
	static volatile uint16_t x591 = 1037U;
	int8_t x592 = 1;

    t147 = (((x589<=x590)*x591)^x592);

    if (t147 != 1036) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x593 = UINT8_MAX;
	int16_t x594 = -1;
	volatile int8_t x595 = INT8_MAX;
	uint16_t x596 = 3328U;
	int32_t t148 = 245346;

    t148 = (((x593<=x594)*x595)^x596);

    if (t148 != 3328) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	static volatile int32_t x598 = INT32_MIN;
	int64_t x599 = INT64_MIN;
	uint16_t x600 = UINT16_MAX;
	static int64_t t149 = 33LL;

    t149 = (((x597<=x598)*x599)^x600);

    if (t149 != 65535LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 215U;
	int64_t x603 = -292184694174672LL;
	static uint64_t x604 = 163023161947LLU;
	uint64_t t150 = 48948LLU;

    t150 = (((x601<=x602)*x603)^x604);

    if (t150 != 18446452048278341227LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 2766U;
	uint8_t x607 = 62U;
	volatile int8_t x608 = 0;
	volatile int32_t t151 = -39896;

    t151 = (((x605<=x606)*x607)^x608);

    if (t151 != 62) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x611 = INT64_MAX;
	int8_t x612 = -14;
	volatile int64_t t152 = -20LL;

    t152 = (((x609<=x610)*x611)^x612);

    if (t152 != -14LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MIN;
	uint8_t x616 = 1U;
	volatile int32_t t153 = 351075;

    t153 = (((x613<=x614)*x615)^x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x618 = 1U;
	static int64_t x619 = -1LL;
	static uint32_t x620 = 816669U;
	int64_t t154 = -25110LL;

    t154 = (((x617<=x618)*x619)^x620);

    if (t154 != -816670LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -2;
	uint64_t x622 = 7892573446892757LLU;
	int32_t x623 = 0;
	volatile int32_t t155 = 468575010;

    t155 = (((x621<=x622)*x623)^x624);

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -13146093576244577LL;
	int32_t x626 = 20;
	static int8_t x627 = -1;
	static int32_t x628 = -1;
	int32_t t156 = -4175439;

    t156 = (((x625<=x626)*x627)^x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = INT16_MAX;
	static int8_t x631 = INT8_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t157 = 23754121;

    t157 = (((x629<=x630)*x631)^x632);

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 534U;
	volatile uint64_t x634 = 62028920220450334LLU;
	uint64_t x635 = UINT64_MAX;
	uint64_t t158 = 482042537403549270LLU;

    t158 = (((x633<=x634)*x635)^x636);

    if (t158 != 32767LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x637 = 3018246513964709978LLU;
	uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 1154309U;
	volatile uint32_t t159 = 586461937U;

    t159 = (((x637<=x638)*x639)^x640);

    if (t159 != 1139450U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	int64_t x642 = INT64_MIN;
	static int64_t x644 = INT64_MIN;
	static int64_t t160 = INT64_MIN;

    t160 = (((x641<=x642)*x643)^x644);

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = -1;
	static uint16_t x646 = 10212U;
	volatile int32_t x647 = INT32_MAX;
	uint16_t x648 = 18699U;
	static volatile int32_t t161 = 13;

    t161 = (((x645<=x646)*x647)^x648);

    if (t161 != 2147464948) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x649 = UINT16_MAX;
	int32_t x651 = INT32_MIN;
	int64_t x652 = -35749159808873754LL;
	volatile int64_t t162 = 80676LL;

    t162 = (((x649<=x650)*x651)^x652);

    if (t162 != -35749159808873754LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 5151082LL;
	uint64_t x654 = 59347706796999751LLU;
	uint8_t x655 = 57U;
	int32_t x656 = INT32_MIN;
	static int32_t t163 = 3882;

    t163 = (((x653<=x654)*x655)^x656);

    if (t163 != -2147483591) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = 0;
	int64_t x660 = -1LL;

    t164 = (((x657<=x658)*x659)^x660);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x661 = 64U;
	int8_t x662 = 2;
	static int32_t x663 = -1;
	static int16_t x664 = INT16_MAX;
	int32_t t165 = 10050224;

    t165 = (((x661<=x662)*x663)^x664);

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = -1;
	volatile uint16_t x668 = UINT16_MAX;
	static int64_t t166 = 1977439786LL;

    t166 = (((x665<=x666)*x667)^x668);

    if (t166 != 65535LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = INT32_MIN;

    t167 = (((x669<=x670)*x671)^x672);

    if (t167 != -745429915349LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MAX;
	static uint16_t x675 = UINT16_MAX;
	static int8_t x676 = -1;
	int32_t t168 = -39;

    t168 = (((x673<=x674)*x675)^x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x678 = INT32_MIN;
	int64_t x680 = 0LL;
	static volatile int64_t t169 = 6195593LL;

    t169 = (((x677<=x678)*x679)^x680);

    if (t169 != -128LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int32_t x682 = -1;
	int8_t x683 = INT8_MAX;
	volatile int64_t x684 = INT64_MIN;
	int64_t t170 = 6131912LL;

    t170 = (((x681<=x682)*x683)^x684);

    if (t170 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x686 = 3160U;
	uint8_t x687 = 96U;
	static int16_t x688 = INT16_MAX;

    t171 = (((x685<=x686)*x687)^x688);

    if (t171 != 32671) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = UINT8_MAX;
	volatile int16_t x691 = INT16_MAX;
	uint32_t x692 = UINT32_MAX;
	volatile uint32_t t172 = 1091373U;

    t172 = (((x689<=x690)*x691)^x692);

    if (t172 != 4294934528U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 15U;
	volatile int32_t x696 = 9672102;
	uint32_t t173 = 1U;

    t173 = (((x693<=x694)*x695)^x696);

    if (t173 != 9672102U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 31U;
	uint8_t x698 = 6U;
	volatile uint64_t x699 = 3491LLU;
	volatile uint64_t t174 = 2914935110121LLU;

    t174 = (((x697<=x698)*x699)^x700);

    if (t174 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int16_t x702 = 847;
	uint64_t x703 = 4368LLU;
	volatile int32_t x704 = 64289;

    t175 = (((x701<=x702)*x703)^x704);

    if (t175 != 59953LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	static uint16_t x706 = 3498U;
	int64_t x708 = 1LL;
	static volatile int64_t t176 = -13693125LL;

    t176 = (((x705<=x706)*x707)^x708);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	static int8_t x711 = INT8_MIN;
	int64_t x712 = INT64_MAX;
	volatile int64_t t177 = INT64_MAX;

    t177 = (((x709<=x710)*x711)^x712);

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -1LL;
	int64_t x714 = 225196LL;
	int64_t x715 = INT64_MIN;
	uint8_t x716 = 7U;

    t178 = (((x713<=x714)*x715)^x716);

    if (t178 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MIN;
	volatile uint64_t x719 = UINT64_MAX;
	volatile uint8_t x720 = 2U;
	uint64_t t179 = 130207599221669LLU;

    t179 = (((x717<=x718)*x719)^x720);

    if (t179 != 2LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	static int8_t x722 = INT8_MIN;
	uint16_t x723 = 4U;
	int32_t t180 = -147698;

    t180 = (((x721<=x722)*x723)^x724);

    if (t180 != -124) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = 8;
	int16_t x726 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	int32_t t181 = 93834;

    t181 = (((x725<=x726)*x727)^x728);

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x730 = INT16_MAX;
	uint8_t x731 = UINT8_MAX;
	uint32_t t182 = 37368528U;

    t182 = (((x729<=x730)*x731)^x732);

    if (t182 != 15897291U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = 17U;
	volatile uint8_t x735 = UINT8_MAX;
	volatile int16_t x736 = INT16_MAX;

    t183 = (((x733<=x734)*x735)^x736);

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -665559682LL;
	static uint64_t x738 = 3992702716024146288LLU;
	uint64_t x739 = 663LLU;
	uint64_t t184 = 4653290026298967LLU;

    t184 = (((x737<=x738)*x739)^x740);

    if (t184 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	static int16_t x744 = INT16_MIN;
	volatile int32_t t185 = -116603568;

    t185 = (((x741<=x742)*x743)^x744);

    if (t185 != 11694542) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile uint64_t x746 = 49LLU;
	uint32_t x747 = 10200U;
	uint16_t x748 = UINT16_MAX;

    t186 = (((x745<=x746)*x747)^x748);

    if (t186 != 65535U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x750 = 1;
	int16_t x752 = INT16_MIN;
	static int64_t t187 = 336744141960679534LL;

    t187 = (((x749<=x750)*x751)^x752);

    if (t187 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = -2;
	int64_t x754 = INT64_MAX;
	static int16_t x755 = 0;
	static uint32_t x756 = 14852U;
	volatile uint32_t t188 = 58379U;

    t188 = (((x753<=x754)*x755)^x756);

    if (t188 != 14852U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 13915421364LLU;
	volatile int32_t x758 = INT32_MAX;
	uint64_t x759 = 122694LLU;
	static int8_t x760 = -1;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = (((x757<=x758)*x759)^x760);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 8181U;
	uint32_t x764 = 2728785U;

    t190 = (((x761<=x762)*x763)^x764);

    if (t190 != 2728785U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = -1;
	int16_t x767 = INT16_MIN;
	static int32_t x768 = -1;
	volatile int32_t t191 = 8683;

    t191 = (((x765<=x766)*x767)^x768);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x770 = 2333052;
	uint16_t x771 = 14U;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t192 = 16062577110581449LLU;

    t192 = (((x769<=x770)*x771)^x772);

    if (t192 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = -1;
	int8_t x774 = -1;
	int16_t x775 = -11;
	volatile uint8_t x776 = UINT8_MAX;

    t193 = (((x773<=x774)*x775)^x776);

    if (t193 != -246) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x779 = 195615528;
	volatile int16_t x780 = -1;
	volatile int32_t t194 = 1260234;

    t194 = (((x777<=x778)*x779)^x780);

    if (t194 != -195615529) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 1183;
	int32_t x782 = INT32_MAX;
	volatile uint32_t x783 = 8494846U;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t195 = 16755648454557LLU;

    t195 = (((x781<=x782)*x783)^x784);

    if (t195 != 18446744073701056769LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	static uint8_t x786 = 0U;
	int64_t x787 = INT64_MAX;
	uint32_t x788 = 2478719U;
	volatile int64_t t196 = -121568913583LL;

    t196 = (((x785<=x786)*x787)^x788);

    if (t196 != 2478719LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	int64_t x792 = -1LL;

    t197 = (((x789<=x790)*x791)^x792);

    if (t197 != -132182988LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	int16_t x796 = -1;

    t198 = (((x793<=x794)*x795)^x796);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	uint16_t x799 = UINT16_MAX;
	static volatile int16_t x800 = -678;
	int32_t t199 = 189746006;

    t199 = (((x797<=x798)*x799)^x800);

    if (t199 != -678) { NG(); } else { ; }
	
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

