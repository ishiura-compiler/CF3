
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

int8_t x1 = INT8_MIN;
volatile int32_t x3 = INT32_MAX;
int32_t x15 = 0;
uint8_t x27 = 0U;
int64_t x31 = INT64_MIN;
int16_t x32 = 8;
static volatile int16_t x38 = -1;
uint32_t x40 = 960860U;
int64_t t9 = 1836905LL;
static uint64_t x52 = 222LLU;
uint64_t x63 = 42911232070936LLU;
volatile uint64_t x64 = UINT64_MAX;
static volatile uint64_t t13 = 977445222400LLU;
int64_t x65 = -657833924244LL;
int64_t x66 = INT64_MIN;
int64_t x71 = 3243LL;
static uint64_t x75 = UINT64_MAX;
volatile int32_t t16 = INT32_MIN;
volatile int32_t t17 = 28939097;
uint32_t x82 = 16947U;
int8_t x86 = INT8_MIN;
static volatile int64_t x92 = INT64_MAX;
volatile int8_t x100 = INT8_MIN;
int16_t x102 = 0;
int8_t x103 = INT8_MIN;
int64_t x115 = -1026838LL;
uint8_t x119 = UINT8_MAX;
int64_t x122 = INT64_MAX;
static volatile int32_t x123 = INT32_MIN;
int32_t x127 = -880;
int8_t x130 = -20;
uint64_t x131 = 1468LLU;
static int64_t x132 = INT64_MAX;
static int32_t t30 = 53;
uint64_t x135 = 686338LLU;
int32_t x137 = -82724693;
int32_t x141 = -1;
int32_t x161 = -298468438;
int64_t x168 = -1LL;
uint64_t x172 = UINT64_MAX;
int32_t t40 = 135164;
volatile int32_t t43 = INT32_MIN;
int16_t x186 = 17;
static int16_t x189 = -4607;
int8_t x190 = INT8_MIN;
volatile int32_t t45 = 4925;
int32_t x194 = 110275;
int64_t x196 = 176375558323LL;
int8_t x201 = -1;
int64_t x207 = 8204343914LL;
int32_t x208 = INT32_MAX;
static int16_t x211 = INT16_MIN;
volatile uint32_t x220 = 17U;
volatile int32_t t52 = -3729;
int32_t x224 = -1;
volatile int64_t x225 = INT64_MIN;
volatile uint32_t x228 = UINT32_MAX;
int32_t x232 = -1;
static volatile int8_t x233 = INT8_MAX;
int8_t x236 = INT8_MAX;
uint32_t x245 = 21598U;
volatile int8_t x250 = -1;
int16_t x262 = 320;
int8_t x266 = INT8_MIN;
volatile int32_t t64 = -185309;
int8_t x271 = INT8_MIN;
static volatile int64_t t65 = -156LL;
uint64_t x274 = 62250472696LLU;
int8_t x275 = -1;
int8_t x278 = INT8_MIN;
uint16_t x286 = UINT16_MAX;
int16_t x295 = -1;
int16_t x296 = -1;
static int64_t x300 = -117994322456LL;
static volatile uint16_t x306 = UINT16_MAX;
int8_t x313 = INT8_MAX;
volatile uint32_t x316 = UINT32_MAX;
volatile int32_t t77 = INT32_MIN;
int32_t x326 = -10017486;
uint8_t x327 = 53U;
int32_t t79 = 0;
int8_t x330 = INT8_MIN;
int64_t x337 = INT64_MIN;
int32_t x347 = INT32_MAX;
int8_t x348 = 1;
int64_t x352 = INT64_MIN;
int8_t x355 = INT8_MIN;
volatile int32_t t88 = INT32_MAX;
static int8_t x368 = INT8_MIN;
uint8_t x369 = 109U;
volatile int32_t t90 = -84225;
static int64_t x373 = INT64_MIN;
int64_t x378 = 271447776148LL;
volatile int8_t x386 = -1;
volatile uint8_t x387 = 1U;
static volatile uint64_t x393 = UINT64_MAX;
static volatile uint64_t t96 = UINT64_MAX;
int8_t x402 = INT8_MIN;
static int64_t x406 = -255837479757117LL;
int32_t x408 = INT32_MIN;
static uint32_t x409 = 1892U;
volatile int8_t x413 = INT8_MIN;
uint32_t x415 = 9036U;
int8_t x417 = INT8_MIN;
uint32_t t103 = UINT32_MAX;
uint16_t x425 = UINT16_MAX;
int16_t x444 = -4;
uint64_t x445 = 113344265LLU;
volatile int8_t x454 = -1;
int32_t x458 = -1;
static int64_t x463 = INT64_MIN;
static volatile int32_t x464 = INT32_MIN;
static uint32_t x472 = 20628803U;
volatile int32_t t118 = -1;
static int32_t x490 = INT32_MIN;
int64_t x491 = 31LL;
int32_t x508 = -1;
int32_t t124 = -24072089;
volatile int16_t x511 = -6835;
static int8_t x513 = INT8_MIN;
static int32_t t127 = -10;
int64_t x523 = 4440336944792LL;
int32_t x525 = -34214282;
uint32_t x527 = UINT32_MAX;
volatile int8_t x532 = -1;
volatile uint32_t t131 = UINT32_MAX;
uint32_t x541 = 9592U;
static int16_t x543 = 0;
uint32_t x545 = 211202102U;
static volatile int32_t x547 = -109;
volatile uint32_t t134 = 10914064U;
int32_t x550 = 240864;
volatile int8_t x553 = INT8_MAX;
int32_t x556 = -895708;
uint8_t x557 = UINT8_MAX;
static int16_t x561 = 335;
int32_t t138 = 119;
volatile int32_t t139 = INT32_MIN;
volatile int64_t x571 = -1LL;
int8_t x572 = 1;
int64_t x573 = -11568452269126317LL;
uint16_t x575 = 5186U;
uint8_t x578 = UINT8_MAX;
int16_t x580 = -1;
int8_t x581 = INT8_MAX;
uint32_t x582 = UINT32_MAX;
static volatile int32_t t143 = -2042;
int64_t x585 = -1LL;
static volatile uint32_t t145 = 600U;
static uint32_t x596 = 28850U;
int64_t x605 = -1LL;
int16_t x614 = -415;
static uint64_t x618 = UINT64_MAX;
uint16_t x620 = UINT16_MAX;
int64_t x621 = INT64_MAX;
static volatile uint16_t x626 = UINT16_MAX;
static uint16_t x628 = UINT16_MAX;
uint8_t x629 = 31U;
int32_t x630 = INT32_MAX;
static int64_t x632 = 43507LL;
volatile uint32_t x636 = UINT32_MAX;
int32_t t158 = -2;
volatile int32_t t160 = INT32_MIN;
static uint32_t x662 = UINT32_MAX;
volatile int8_t x663 = INT8_MIN;
uint16_t x665 = UINT16_MAX;
uint32_t x666 = 3U;
int64_t x671 = INT64_MIN;
int16_t x672 = INT16_MIN;
int64_t t165 = INT64_MIN;
volatile uint64_t x684 = 9498853283754LLU;
uint8_t x689 = 24U;
uint32_t x691 = 5911U;
int16_t x692 = -410;
volatile int32_t t169 = 18095;
uint8_t x702 = 1U;
volatile int32_t t173 = -22032;
uint64_t x715 = 105LLU;
volatile uint8_t x717 = 15U;
int16_t x722 = INT16_MAX;
uint8_t x724 = 0U;
volatile int32_t t176 = -647849291;
int16_t x726 = INT16_MAX;
int32_t x730 = INT32_MAX;
static int64_t x733 = INT64_MIN;
int8_t x734 = INT8_MIN;
static int16_t x736 = -1;
int8_t x740 = INT8_MAX;
static uint8_t x741 = UINT8_MAX;
volatile int32_t t181 = -61637392;
static int32_t x747 = 127963731;
volatile int64_t t182 = 11725189268160090LL;
static int64_t x752 = 48797141640052LL;
static int8_t x760 = 12;
int16_t x761 = -1;
volatile int16_t x766 = INT16_MIN;
volatile uint8_t x768 = 1U;
volatile int16_t x776 = -500;
volatile int16_t x780 = -28;
volatile int16_t x781 = INT16_MIN;
volatile int32_t t191 = -872465;
static volatile int32_t t192 = -20040915;
int64_t x790 = -1LL;
uint64_t x791 = 3691LLU;
volatile uint64_t t195 = 15717871653400LLU;
static int32_t x811 = INT32_MIN;


void f0(void) {
    	static uint16_t x2 = 357U;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = -3448856;

    t0 = (x1/(x2!=(x3==x4)));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	volatile uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 8805308U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 255;

    t1 = (x5/(x6!=(x7==x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 0U;
	static uint16_t x10 = 963U;
	int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = -3331;

    t2 = (x9/(x10!=(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	volatile uint8_t x14 = UINT8_MAX;
	static int32_t x16 = -1;
	volatile int32_t t3 = -126628;

    t3 = (x13/(x14!=(x15==x16)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile uint32_t x18 = 57496U;
	volatile uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -1619;

    t4 = (x17/(x18!=(x19==x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = 0;
	int32_t x22 = INT32_MAX;
	volatile int64_t x23 = INT64_MAX;
	static int8_t x24 = -9;
	volatile int32_t t5 = 60;

    t5 = (x21/(x22!=(x23==x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 38606939;

    t6 = (x25/(x26!=(x27==x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 10128U;
	uint64_t x30 = 1672528895939LLU;
	static volatile uint32_t t7 = 2U;

    t7 = (x29/(x30!=(x31==x32)));

    if (t7 != 10128U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = INT64_MIN;
	static int32_t x39 = 166026400;
	volatile int64_t t8 = INT64_MIN;

    t8 = (x37/(x38!=(x39==x40)));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	int16_t x48 = 0;

    t9 = (x45/(x46!=(x47==x48)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	uint64_t x50 = 185045LLU;
	uint8_t x51 = 7U;
	int32_t t10 = INT32_MAX;

    t10 = (x49/(x50!=(x51==x52)));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 27217434LLU;
	int16_t x54 = -731;
	volatile int8_t x55 = 3;
	uint8_t x56 = UINT8_MAX;
	uint64_t t11 = 1787922179929500566LLU;

    t11 = (x53/(x54!=(x55==x56)));

    if (t11 != 27217434LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x57 = UINT8_MAX;
	int32_t x58 = -1;
	volatile int8_t x59 = -1;
	uint8_t x60 = 1U;
	static int32_t t12 = 0;

    t12 = (x57/(x58!=(x59==x60)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x61 = 10993LLU;
	int8_t x62 = -1;

    t13 = (x61/(x62!=(x63==x64)));

    if (t13 != 10993LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x67 = 58U;
	uint64_t x68 = 33985850182LLU;
	volatile int64_t t14 = 247058403LL;

    t14 = (x65/(x66!=(x67==x68)));

    if (t14 != -657833924244LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	static int32_t x70 = -3586;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t15 = INT32_MIN;

    t15 = (x69/(x70!=(x71==x72)));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	uint64_t x76 = UINT64_MAX;

    t16 = (x73/(x74!=(x75==x76)));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = INT16_MAX;
	static int64_t x78 = INT64_MIN;
	int16_t x79 = -1;
	static int8_t x80 = INT8_MIN;

    t17 = (x77/(x78!=(x79==x80)));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MIN;
	static int16_t x83 = INT16_MAX;
	volatile int64_t x84 = 819218LL;
	volatile int32_t t18 = 486693;

    t18 = (x81/(x82!=(x83==x84)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MAX;
	uint8_t x87 = 11U;
	volatile int64_t x88 = -1LL;
	int64_t t19 = INT64_MAX;

    t19 = (x85/(x86!=(x87==x88)));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x89 = 1U;
	int64_t x90 = -3566695766058105LL;
	volatile uint8_t x91 = 18U;
	int32_t t20 = 3927221;

    t20 = (x89/(x90!=(x91==x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int16_t x96 = -1;
	static uint64_t t21 = UINT64_MAX;

    t21 = (x93/(x94!=(x95==x96)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = UINT32_MAX;
	volatile int8_t x98 = -56;
	int8_t x99 = -1;
	uint32_t t22 = UINT32_MAX;

    t22 = (x97/(x98!=(x99==x100)));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x101 = -10501716;
	volatile int8_t x104 = INT8_MIN;
	static volatile int32_t t23 = 376389;

    t23 = (x101/(x102!=(x103==x104)));

    if (t23 != -10501716) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -462792LL;
	static int32_t x106 = INT32_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MAX;
	volatile int64_t t24 = -2594980587706469045LL;

    t24 = (x105/(x106!=(x107==x108)));

    if (t24 != -462792LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = 4;
	volatile uint32_t x110 = 22U;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 575247090;

    t25 = (x109/(x110!=(x111==x112)));

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	uint32_t x116 = 4091001U;
	volatile int32_t t26 = INT32_MIN;

    t26 = (x113/(x114!=(x115==x116)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t27 = -847575;

    t27 = (x117/(x118!=(x119==x120)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -1;
	static int8_t x124 = INT8_MAX;
	static volatile int32_t t28 = -3;

    t28 = (x121/(x122!=(x123==x124)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 1;
	static int16_t x126 = -1;
	static int64_t x128 = 16496089465889LL;
	int32_t t29 = 14252936;

    t29 = (x125/(x126!=(x127==x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = 7U;

    t30 = (x129/(x130!=(x131==x132)));

    if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 63U;
	int8_t x134 = -1;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t31 = 69093523;

    t31 = (x133/(x134!=(x135==x136)));

    if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x138 = INT16_MIN;
	int16_t x139 = 232;
	int32_t x140 = -1;
	volatile int32_t t32 = 67569904;

    t32 = (x137/(x138!=(x139==x140)));

    if (t32 != -82724693) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x142 = 194;
	uint8_t x143 = 5U;
	volatile int64_t x144 = INT64_MAX;
	volatile int32_t t33 = 33495;

    t33 = (x141/(x142!=(x143==x144)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = 895;
	int16_t x146 = -1;
	int16_t x147 = -947;
	int16_t x148 = INT16_MIN;
	int32_t t34 = -1;

    t34 = (x145/(x146!=(x147==x148)));

    if (t34 != 895) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = 1;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	int16_t x152 = 141;
	int32_t t35 = 169;

    t35 = (x149/(x150!=(x151==x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	uint64_t x154 = 53579336139LLU;
	int64_t x155 = -30914926592074LL;
	volatile int64_t x156 = INT64_MIN;
	static volatile int64_t t36 = INT64_MIN;

    t36 = (x153/(x154!=(x155==x156)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -1LL;
	volatile int32_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	static uint8_t x160 = UINT8_MAX;
	int64_t t37 = 208741073880059LL;

    t37 = (x157/(x158!=(x159==x160)));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x162 = 577811U;
	uint32_t x163 = 90133586U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t38 = 43377762;

    t38 = (x161/(x162!=(x163==x164)));

    if (t38 != -298468438) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint64_t x166 = 500743476LLU;
	volatile uint16_t x167 = UINT16_MAX;
	volatile int32_t t39 = INT32_MIN;

    t39 = (x165/(x166!=(x167==x168)));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x170 = -4;
	uint64_t x171 = 129159584539307LLU;

    t40 = (x169/(x170!=(x171==x172)));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = 0U;
	uint32_t x176 = 3509U;
	static volatile uint32_t t41 = UINT32_MAX;

    t41 = (x173/(x174!=(x175==x176)));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -1LL;
	volatile int64_t x178 = -20960825LL;
	int64_t x179 = -1LL;
	uint8_t x180 = 95U;
	int64_t t42 = -7300343386LL;

    t42 = (x177/(x178!=(x179==x180)));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x181 = INT32_MIN;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = UINT16_MAX;
	volatile int16_t x184 = INT16_MIN;

    t43 = (x181/(x182!=(x183==x184)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = 37;
	int64_t x187 = INT64_MIN;
	int8_t x188 = 0;
	volatile int32_t t44 = -144283804;

    t44 = (x185/(x186!=(x187==x188)));

    if (t44 != 37) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x191 = 3116027LLU;
	uint8_t x192 = 3U;

    t45 = (x189/(x190!=(x191==x192)));

    if (t45 != -4607) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x193 = 46642968U;
	int8_t x195 = INT8_MIN;
	static volatile uint32_t t46 = 2004348U;

    t46 = (x193/(x194!=(x195==x196)));

    if (t46 != 46642968U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MAX;
	int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MAX;
	static int32_t x200 = -1;
	volatile int64_t t47 = INT64_MAX;

    t47 = (x197/(x198!=(x199==x200)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x202 = INT32_MIN;
	int32_t x203 = -4771;
	int8_t x204 = -1;
	int32_t t48 = 57065;

    t48 = (x201/(x202!=(x203==x204)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = 435;
	uint32_t x206 = 3890032U;
	int32_t t49 = 1;

    t49 = (x205/(x206!=(x207==x208)));

    if (t49 != 435) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MAX;
	static volatile uint64_t x212 = UINT64_MAX;
	int32_t t50 = -13840169;

    t50 = (x209/(x210!=(x211==x212)));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x213 = 2236563LL;
	static int32_t x214 = INT32_MIN;
	static volatile int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = -268195539290LL;

    t51 = (x213/(x214!=(x215==x216)));

    if (t51 != 2236563LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = -1;
	volatile uint32_t x218 = 5U;
	static uint64_t x219 = UINT64_MAX;

    t52 = (x217/(x218!=(x219==x220)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x221 = -22;
	uint16_t x222 = 192U;
	uint8_t x223 = 7U;
	int32_t t53 = -789992;

    t53 = (x221/(x222!=(x223==x224)));

    if (t53 != -22) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x226 = -1;
	static int8_t x227 = -1;
	int64_t t54 = INT64_MIN;

    t54 = (x225/(x226!=(x227==x228)));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x229 = INT16_MIN;
	static int8_t x230 = -1;
	static int64_t x231 = INT64_MIN;
	static volatile int32_t t55 = 15;

    t55 = (x229/(x230!=(x231==x232)));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x234 = 20U;
	uint16_t x235 = 53U;
	int32_t t56 = 10594427;

    t56 = (x233/(x234!=(x235==x236)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = 1;
	int8_t x238 = -1;
	int16_t x239 = INT16_MAX;
	volatile int16_t x240 = 7;
	volatile int32_t t57 = 815218;

    t57 = (x237/(x238!=(x239==x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	static int64_t x244 = INT64_MIN;
	volatile int32_t t58 = INT32_MIN;

    t58 = (x241/(x242!=(x243==x244)));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x246 = INT32_MAX;
	int64_t x247 = 615LL;
	int64_t x248 = 29642472960374LL;
	static volatile uint32_t t59 = 8U;

    t59 = (x245/(x246!=(x247==x248)));

    if (t59 != 21598U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 27U;
	int8_t x251 = 3;
	int32_t x252 = 6279;
	int32_t t60 = 895;

    t60 = (x249/(x250!=(x251==x252)));

    if (t60 != 27) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -1;
	uint8_t x254 = 1U;
	uint8_t x255 = 29U;
	volatile int64_t x256 = -1LL;
	static volatile int32_t t61 = -3;

    t61 = (x253/(x254!=(x255==x256)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x257 = 90;
	static int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = 112U;
	volatile int32_t t62 = 107840;

    t62 = (x257/(x258!=(x259==x260)));

    if (t62 != 90) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = 32U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t63 = 7043587;

    t63 = (x261/(x262!=(x263==x264)));

    if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x265 = -1;
	int8_t x267 = INT8_MAX;
	static volatile uint16_t x268 = 0U;

    t64 = (x265/(x266!=(x267==x268)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = 1335LL;
	volatile uint64_t x270 = 22LLU;
	static int64_t x272 = 5231LL;

    t65 = (x269/(x270!=(x271==x272)));

    if (t65 != 1335LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x276 = 447017030;
	int64_t t66 = INT64_MIN;

    t66 = (x273/(x274!=(x275==x276)));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x277 = INT32_MAX;
	static int16_t x279 = INT16_MAX;
	int16_t x280 = 24;
	volatile int32_t t67 = INT32_MAX;

    t67 = (x277/(x278!=(x279==x280)));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x281 = 9U;
	uint64_t x282 = 50870522949714LLU;
	volatile int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	volatile int32_t t68 = 99;

    t68 = (x281/(x282!=(x283==x284)));

    if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x285 = UINT8_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t69 = 4;

    t69 = (x285/(x286!=(x287==x288)));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x289 = -1;
	static volatile int8_t x290 = INT8_MAX;
	static int32_t x291 = -1;
	volatile int64_t x292 = 2LL;
	int32_t t70 = 5;

    t70 = (x289/(x290!=(x291==x292)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x293 = INT16_MAX;
	static volatile int32_t x294 = -1;
	int32_t t71 = -834462;

    t71 = (x293/(x294!=(x295==x296)));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = -1;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = INT32_MIN;
	int32_t t72 = -124;

    t72 = (x297/(x298!=(x299==x300)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MIN;
	static volatile int16_t x303 = INT16_MIN;
	static int32_t x304 = -1;
	int64_t t73 = INT64_MIN;

    t73 = (x301/(x302!=(x303==x304)));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -65323556;
	uint32_t x307 = 2324U;
	uint64_t x308 = 722LLU;
	volatile int32_t t74 = 31;

    t74 = (x305/(x306!=(x307==x308)));

    if (t74 != -65323556) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x309 = 25267602U;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;
	uint32_t t75 = 587749U;

    t75 = (x309/(x310!=(x311==x312)));

    if (t75 != 25267602U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x314 = UINT16_MAX;
	volatile int32_t x315 = INT32_MIN;
	volatile int32_t t76 = 2;

    t76 = (x313/(x314!=(x315==x316)));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = INT32_MIN;
	static volatile int64_t x318 = -262253048902031998LL;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 51305427521706074LLU;

    t77 = (x317/(x318!=(x319==x320)));

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -3;
	static uint64_t x322 = 31183256551263LLU;
	uint8_t x323 = 13U;
	uint8_t x324 = 3U;
	int32_t t78 = -91;

    t78 = (x321/(x322!=(x323==x324)));

    if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = 0;
	static int64_t x328 = INT64_MAX;

    t79 = (x325/(x326!=(x327==x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x329 = -825;
	int32_t x331 = 47275;
	volatile uint32_t x332 = 9U;
	static int32_t t80 = -2946;

    t80 = (x329/(x330!=(x331==x332)));

    if (t80 != -825) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = UINT16_MAX;
	int32_t x334 = INT32_MIN;
	volatile int8_t x335 = 30;
	int32_t x336 = 106284437;
	int32_t t81 = 518946;

    t81 = (x333/(x334!=(x335==x336)));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = 8897;
	int64_t t82 = INT64_MIN;

    t82 = (x337/(x338!=(x339==x340)));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 1430U;
	volatile int32_t t83 = -1;

    t83 = (x341/(x342!=(x343==x344)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = -1;
	int16_t x346 = INT16_MIN;
	static volatile int32_t t84 = 99636573;

    t84 = (x345/(x346!=(x347==x348)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x349 = 82U;
	int32_t x350 = INT32_MIN;
	int16_t x351 = -1;
	volatile int32_t t85 = 1;

    t85 = (x349/(x350!=(x351==x352)));

    if (t85 != 82) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = -1LL;
	static int16_t x354 = -1;
	volatile int64_t x356 = 3109LL;
	volatile int64_t t86 = -5803742LL;

    t86 = (x353/(x354!=(x355==x356)));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = -1LL;
	uint64_t x358 = UINT64_MAX;
	static int64_t x359 = INT64_MAX;
	volatile int32_t x360 = -991536;
	volatile int64_t t87 = -95940157098758016LL;

    t87 = (x357/(x358!=(x359==x360)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = INT32_MAX;
	volatile int32_t x362 = 4220;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = -1;

    t88 = (x361/(x362!=(x363==x364)));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = 1837;
	int32_t x366 = INT32_MIN;
	uint64_t x367 = 86LLU;
	volatile int32_t t89 = 523029;

    t89 = (x365/(x366!=(x367==x368)));

    if (t89 != 1837) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x370 = INT64_MAX;
	int32_t x371 = 304882547;
	static int16_t x372 = INT16_MAX;

    t90 = (x369/(x370!=(x371==x372)));

    if (t90 != 109) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x374 = 565U;
	volatile uint64_t x375 = 1903302562334769951LLU;
	int8_t x376 = INT8_MAX;
	static int64_t t91 = INT64_MIN;

    t91 = (x373/(x374!=(x375==x376)));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	uint8_t x379 = 6U;
	static uint64_t x380 = 5857LLU;
	int32_t t92 = -1710533;

    t92 = (x377/(x378!=(x379==x380)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = INT32_MIN;
	volatile int8_t x382 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	uint16_t x384 = UINT16_MAX;
	static int32_t t93 = INT32_MIN;

    t93 = (x381/(x382!=(x383==x384)));

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = UINT16_MAX;
	int32_t x388 = 1672;
	static volatile int32_t t94 = -21509;

    t94 = (x385/(x386!=(x387==x388)));

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = -1LL;
	uint8_t x390 = 5U;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	volatile int64_t t95 = 16262LL;

    t95 = (x389/(x390!=(x391==x392)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	static volatile int8_t x396 = -7;

    t96 = (x393/(x394!=(x395==x396)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x397 = INT8_MIN;
	int16_t x398 = 9398;
	int64_t x399 = -1LL;
	int32_t x400 = -1;
	volatile int32_t t97 = -2;

    t97 = (x397/(x398!=(x399==x400)));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	int64_t x404 = 12982935LL;
	volatile int32_t t98 = -6946635;

    t98 = (x401/(x402!=(x403==x404)));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = UINT32_MAX;
	int8_t x407 = INT8_MIN;
	uint32_t t99 = UINT32_MAX;

    t99 = (x405/(x406!=(x407==x408)));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x410 = INT16_MIN;
	volatile int64_t x411 = INT64_MIN;
	int8_t x412 = 1;
	volatile uint32_t t100 = 2951361U;

    t100 = (x409/(x410!=(x411==x412)));

    if (t100 != 1892U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x414 = UINT8_MAX;
	int64_t x416 = INT64_MIN;
	int32_t t101 = -481;

    t101 = (x413/(x414!=(x415==x416)));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x418 = INT16_MAX;
	uint16_t x419 = 5599U;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t102 = 1770379;

    t102 = (x417/(x418!=(x419==x420)));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x421 = UINT32_MAX;
	uint64_t x422 = UINT64_MAX;
	static int64_t x423 = -14LL;
	int8_t x424 = -25;

    t103 = (x421/(x422!=(x423==x424)));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x426 = -1;
	int64_t x427 = INT64_MIN;
	volatile uint8_t x428 = UINT8_MAX;
	int32_t t104 = -13653954;

    t104 = (x425/(x426!=(x427==x428)));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x429 = INT8_MIN;
	volatile int32_t x430 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = -1437;
	int32_t t105 = -6305419;

    t105 = (x429/(x430!=(x431==x432)));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = 46;
	int32_t x434 = -541754284;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t106 = -7035299;

    t106 = (x433/(x434!=(x435==x436)));

    if (t106 != 46) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = UINT32_MAX;
	uint32_t x438 = UINT32_MAX;
	uint32_t x439 = UINT32_MAX;
	volatile uint32_t x440 = 3U;
	uint32_t t107 = UINT32_MAX;

    t107 = (x437/(x438!=(x439==x440)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x441 = -3739865;
	uint32_t x442 = 14037285U;
	static uint32_t x443 = 932353782U;
	int32_t t108 = 89860367;

    t108 = (x441/(x442!=(x443==x444)));

    if (t108 != -3739865) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x446 = 999148496U;
	int64_t x447 = 3454295942LL;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t109 = 969027130193383LLU;

    t109 = (x445/(x446!=(x447==x448)));

    if (t109 != 113344265LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint32_t x450 = 1U;
	volatile int32_t x451 = INT32_MAX;
	volatile int32_t x452 = -1;
	volatile int32_t t110 = -45099;

    t110 = (x449/(x450!=(x451==x452)));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MIN;
	static int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	volatile int32_t t111 = INT32_MIN;

    t111 = (x453/(x454!=(x455==x456)));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x457 = INT64_MIN;
	volatile int64_t x459 = -1LL;
	int8_t x460 = INT8_MIN;
	int64_t t112 = INT64_MIN;

    t112 = (x457/(x458!=(x459==x460)));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = -66839438LL;
	uint8_t x462 = UINT8_MAX;
	static int64_t t113 = -7LL;

    t113 = (x461/(x462!=(x463==x464)));

    if (t113 != -66839438LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = 8394064874415LL;
	static int64_t x466 = -1LL;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = -79143678;
	int64_t t114 = 41538653727345523LL;

    t114 = (x465/(x466!=(x467==x468)));

    if (t114 != 8394064874415LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile uint16_t x470 = 4U;
	volatile int32_t x471 = -1;
	uint32_t t115 = UINT32_MAX;

    t115 = (x469/(x470!=(x471==x472)));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x473 = 503334;
	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	volatile int64_t x476 = INT64_MIN;
	volatile int32_t t116 = -228702547;

    t116 = (x473/(x474!=(x475==x476)));

    if (t116 != 503334) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x477 = 1U;
	int32_t x478 = INT32_MIN;
	int16_t x479 = -1;
	int8_t x480 = -7;
	uint32_t t117 = 50U;

    t117 = (x477/(x478!=(x479==x480)));

    if (t117 != 1U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x481 = UINT8_MAX;
	int32_t x482 = -1;
	int32_t x483 = INT32_MIN;
	static uint8_t x484 = 0U;

    t118 = (x481/(x482!=(x483==x484)));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x485 = UINT64_MAX;
	volatile int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MIN;
	uint8_t x488 = 35U;
	static volatile uint64_t t119 = UINT64_MAX;

    t119 = (x485/(x486!=(x487==x488)));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x489 = 10242U;
	int16_t x492 = INT16_MIN;
	uint32_t t120 = 52U;

    t120 = (x489/(x490!=(x491==x492)));

    if (t120 != 10242U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x493 = -1LL;
	static int8_t x494 = -17;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = INT16_MIN;
	volatile int64_t t121 = -727502032837934867LL;

    t121 = (x493/(x494!=(x495==x496)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x497 = -1;
	uint64_t x498 = 172827777848LLU;
	int64_t x499 = -29650772729723LL;
	int8_t x500 = INT8_MAX;
	int32_t t122 = -561231816;

    t122 = (x497/(x498!=(x499==x500)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MIN;
	int16_t x503 = 1725;
	static uint32_t x504 = 2555U;
	volatile int64_t t123 = INT64_MIN;

    t123 = (x501/(x502!=(x503==x504)));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	volatile int64_t x506 = 5576875LL;
	static int8_t x507 = INT8_MAX;

    t124 = (x505/(x506!=(x507==x508)));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x509 = INT32_MIN;
	volatile int64_t x510 = INT64_MAX;
	static uint8_t x512 = UINT8_MAX;
	int32_t t125 = INT32_MIN;

    t125 = (x509/(x510!=(x511==x512)));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x515 = -178;
	int32_t x516 = -1;
	volatile int32_t t126 = 0;

    t126 = (x513/(x514!=(x515==x516)));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x517 = -497;
	int32_t x518 = INT32_MAX;
	int8_t x519 = INT8_MIN;
	static int16_t x520 = INT16_MAX;

    t127 = (x517/(x518!=(x519==x520)));

    if (t127 != -497) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = -61;
	int8_t x522 = INT8_MIN;
	volatile int8_t x524 = INT8_MIN;
	static int32_t t128 = -2;

    t128 = (x521/(x522!=(x523==x524)));

    if (t128 != -61) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x526 = INT16_MIN;
	int64_t x528 = INT64_MAX;
	static int32_t t129 = 1;

    t129 = (x525/(x526!=(x527==x528)));

    if (t129 != -34214282) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x529 = 1U;
	int32_t x530 = INT32_MIN;
	int8_t x531 = INT8_MAX;
	volatile int32_t t130 = -3;

    t130 = (x529/(x530!=(x531==x532)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x533 = UINT32_MAX;
	int64_t x534 = -156134LL;
	static volatile int16_t x535 = INT16_MIN;
	int64_t x536 = -1LL;

    t131 = (x533/(x534!=(x535==x536)));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x537 = 2128724926864LLU;
	static uint32_t x538 = UINT32_MAX;
	uint8_t x539 = 33U;
	static int8_t x540 = INT8_MIN;
	volatile uint64_t t132 = 245489LLU;

    t132 = (x537/(x538!=(x539==x540)));

    if (t132 != 2128724926864LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x542 = UINT16_MAX;
	uint64_t x544 = 26162391LLU;
	uint32_t t133 = 13003501U;

    t133 = (x541/(x542!=(x543==x544)));

    if (t133 != 9592U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x546 = -1;
	int8_t x548 = INT8_MIN;

    t134 = (x545/(x546!=(x547==x548)));

    if (t134 != 211202102U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x549 = INT64_MIN;
	int8_t x551 = 1;
	int8_t x552 = INT8_MAX;
	int64_t t135 = INT64_MIN;

    t135 = (x549/(x550!=(x551==x552)));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x554 = INT32_MAX;
	static int16_t x555 = INT16_MAX;
	int32_t t136 = -65147;

    t136 = (x553/(x554!=(x555==x556)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x558 = INT64_MAX;
	int32_t x559 = INT32_MIN;
	volatile int8_t x560 = -2;
	volatile int32_t t137 = -1;

    t137 = (x557/(x558!=(x559==x560)));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x562 = 6229U;
	int16_t x563 = -1;
	uint8_t x564 = UINT8_MAX;

    t138 = (x561/(x562!=(x563==x564)));

    if (t138 != 335) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = INT32_MIN;
	uint32_t x566 = 3919U;
	int16_t x567 = INT16_MIN;
	static uint32_t x568 = UINT32_MAX;

    t139 = (x565/(x566!=(x567==x568)));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x569 = 10121U;
	int64_t x570 = -1LL;
	int32_t t140 = 384285;

    t140 = (x569/(x570!=(x571==x572)));

    if (t140 != 10121) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x574 = -1;
	static int8_t x576 = INT8_MIN;
	volatile int64_t t141 = 3129LL;

    t141 = (x573/(x574!=(x575==x576)));

    if (t141 != -11568452269126317LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x579 = INT8_MIN;
	volatile int32_t t142 = 2;

    t142 = (x577/(x578!=(x579==x580)));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;

    t143 = (x581/(x582!=(x583==x584)));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x586 = 24;
	volatile uint16_t x587 = 22717U;
	int8_t x588 = 1;
	static int64_t t144 = -29946260268702LL;

    t144 = (x585/(x586!=(x587==x588)));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x589 = 276U;
	int16_t x590 = INT16_MAX;
	static int32_t x591 = 29032;
	int16_t x592 = INT16_MIN;

    t145 = (x589/(x590!=(x591==x592)));

    if (t145 != 276U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x593 = 2711U;
	volatile uint8_t x594 = UINT8_MAX;
	static uint64_t x595 = 3931LLU;
	volatile int32_t t146 = 0;

    t146 = (x593/(x594!=(x595==x596)));

    if (t146 != 2711) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MIN;
	static int16_t x599 = INT16_MIN;
	int32_t x600 = INT32_MIN;
	int32_t t147 = INT32_MIN;

    t147 = (x597/(x598!=(x599==x600)));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x606 = 7250U;
	int64_t x607 = INT64_MAX;
	uint8_t x608 = 3U;
	int64_t t148 = 13133027LL;

    t148 = (x605/(x606!=(x607==x608)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x609 = -22LL;
	uint8_t x610 = UINT8_MAX;
	static int64_t x611 = INT64_MAX;
	uint32_t x612 = 0U;
	volatile int64_t t149 = 103263672524LL;

    t149 = (x609/(x610!=(x611==x612)));

    if (t149 != -22LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x613 = INT16_MIN;
	int16_t x615 = INT16_MIN;
	int8_t x616 = 26;
	int32_t t150 = -46492816;

    t150 = (x613/(x614!=(x615==x616)));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x617 = INT8_MIN;
	int8_t x619 = -1;
	int32_t t151 = 0;

    t151 = (x617/(x618!=(x619==x620)));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x622 = INT64_MIN;
	static int8_t x623 = 1;
	uint64_t x624 = UINT64_MAX;
	static volatile int64_t t152 = INT64_MAX;

    t152 = (x621/(x622!=(x623==x624)));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = INT16_MIN;
	volatile int32_t x627 = 876;
	int32_t t153 = 579;

    t153 = (x625/(x626!=(x627==x628)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x631 = UINT64_MAX;
	volatile int32_t t154 = 15;

    t154 = (x629/(x630!=(x631==x632)));

    if (t154 != 31) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	uint8_t x634 = 1U;
	volatile int16_t x635 = 881;
	volatile int32_t t155 = 171270;

    t155 = (x633/(x634!=(x635==x636)));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x637 = 2U;
	uint32_t x638 = 37U;
	uint32_t x639 = UINT32_MAX;
	uint16_t x640 = 1021U;
	int32_t t156 = 1;

    t156 = (x637/(x638!=(x639==x640)));

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x641 = 92U;
	static int8_t x642 = INT8_MIN;
	volatile int32_t x643 = INT32_MIN;
	uint8_t x644 = 101U;
	static volatile uint32_t t157 = 642258700U;

    t157 = (x641/(x642!=(x643==x644)));

    if (t157 != 92U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x645 = 1U;
	uint8_t x646 = 90U;
	static int16_t x647 = -1;
	volatile uint32_t x648 = 1951909310U;

    t158 = (x645/(x646!=(x647==x648)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x649 = -1;
	int8_t x650 = 13;
	static int64_t x651 = INT64_MIN;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t159 = 1;

    t159 = (x649/(x650!=(x651==x652)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x653 = INT32_MIN;
	int8_t x654 = INT8_MIN;
	int32_t x655 = 21334931;
	int32_t x656 = -15;

    t160 = (x653/(x654!=(x655==x656)));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x657 = 25458U;
	uint16_t x658 = 5290U;
	uint64_t x659 = 27386LLU;
	static int32_t x660 = INT32_MIN;
	volatile uint32_t t161 = 2835533U;

    t161 = (x657/(x658!=(x659==x660)));

    if (t161 != 25458U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x661 = -1;
	int8_t x664 = 1;
	volatile int32_t t162 = 4081;

    t162 = (x661/(x662!=(x663==x664)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x667 = 1U;
	int8_t x668 = -2;
	volatile int32_t t163 = 164314;

    t163 = (x665/(x666!=(x667==x668)));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = 29U;
	int8_t x670 = INT8_MIN;
	int32_t t164 = 62144252;

    t164 = (x669/(x670!=(x671==x672)));

    if (t164 != 29) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x673 = INT64_MIN;
	volatile int64_t x674 = INT64_MIN;
	int64_t x675 = INT64_MIN;
	static int32_t x676 = -1;

    t165 = (x673/(x674!=(x675==x676)));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x677 = INT32_MIN;
	uint64_t x678 = 52605931496174LLU;
	int8_t x679 = INT8_MAX;
	int32_t x680 = -1789074;
	int32_t t166 = INT32_MIN;

    t166 = (x677/(x678!=(x679==x680)));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = INT8_MIN;
	int32_t x682 = -2;
	int32_t x683 = 418193715;
	volatile int32_t t167 = -2259;

    t167 = (x681/(x682!=(x683==x684)));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x685 = -29372454LL;
	int16_t x686 = -12522;
	int16_t x687 = 1447;
	static int16_t x688 = 448;
	volatile int64_t t168 = 4242179000038532455LL;

    t168 = (x685/(x686!=(x687==x688)));

    if (t168 != -29372454LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x690 = 5068U;

    t169 = (x689/(x690!=(x691==x692)));

    if (t169 != 24) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x693 = 35U;
	volatile int64_t x694 = INT64_MIN;
	int16_t x695 = -1;
	int64_t x696 = INT64_MIN;
	int32_t t170 = 25;

    t170 = (x693/(x694!=(x695==x696)));

    if (t170 != 35) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x701 = INT64_MIN;
	int8_t x703 = INT8_MIN;
	volatile uint32_t x704 = UINT32_MAX;
	int64_t t171 = INT64_MIN;

    t171 = (x701/(x702!=(x703==x704)));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = -221960899324276174LL;
	int64_t x706 = INT64_MAX;
	static int16_t x707 = INT16_MIN;
	uint8_t x708 = 11U;
	volatile int64_t t172 = -4205932374LL;

    t172 = (x705/(x706!=(x707==x708)));

    if (t172 != -221960899324276174LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = -6052;
	static int8_t x711 = 46;
	static volatile uint16_t x712 = 18U;

    t173 = (x709/(x710!=(x711==x712)));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = 371698492;
	int64_t x714 = -1LL;
	static uint8_t x716 = 35U;
	static volatile int32_t t174 = -16645;

    t174 = (x713/(x714!=(x715==x716)));

    if (t174 != 371698492) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x718 = INT16_MIN;
	volatile int64_t x719 = -2262968406479235730LL;
	uint32_t x720 = 31902437U;
	static int32_t t175 = -312878;

    t175 = (x717/(x718!=(x719==x720)));

    if (t175 != 15) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x721 = INT8_MIN;
	uint16_t x723 = 4223U;

    t176 = (x721/(x722!=(x723==x724)));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 423127U;
	int16_t x727 = 3509;
	int32_t x728 = -1;
	uint32_t t177 = 7292U;

    t177 = (x725/(x726!=(x727==x728)));

    if (t177 != 423127U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x731 = 277769803LLU;
	volatile uint16_t x732 = UINT16_MAX;
	int64_t t178 = INT64_MIN;

    t178 = (x729/(x730!=(x731==x732)));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x735 = 49U;
	static volatile int64_t t179 = INT64_MIN;

    t179 = (x733/(x734!=(x735==x736)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x737 = 2U;
	int16_t x738 = INT16_MIN;
	int8_t x739 = -1;
	volatile int32_t t180 = 1767;

    t180 = (x737/(x738!=(x739==x740)));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x742 = 69U;
	static int16_t x743 = -1;
	static int16_t x744 = INT16_MIN;

    t181 = (x741/(x742!=(x743==x744)));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x745 = -103316254126LL;
	static int64_t x746 = INT64_MAX;
	int32_t x748 = 76;

    t182 = (x745/(x746!=(x747==x748)));

    if (t182 != -103316254126LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x749 = -1;
	int8_t x750 = 2;
	int64_t x751 = -1LL;
	int32_t t183 = -35836;

    t183 = (x749/(x750!=(x751==x752)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x753 = 272878712398549861LLU;
	int64_t x754 = -47485259LL;
	int8_t x755 = INT8_MIN;
	static int64_t x756 = -102515454078169LL;
	uint64_t t184 = 1232026009451943075LLU;

    t184 = (x753/(x754!=(x755==x756)));

    if (t184 != 272878712398549861LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x757 = UINT32_MAX;
	volatile int64_t x758 = INT64_MAX;
	uint16_t x759 = 3269U;
	uint32_t t185 = UINT32_MAX;

    t185 = (x757/(x758!=(x759==x760)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x762 = INT8_MIN;
	int8_t x763 = INT8_MIN;
	int16_t x764 = INT16_MIN;
	volatile int32_t t186 = 105654;

    t186 = (x761/(x762!=(x763==x764)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x765 = 16367U;
	uint8_t x767 = UINT8_MAX;
	static int32_t t187 = 2097;

    t187 = (x765/(x766!=(x767==x768)));

    if (t187 != 16367) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x769 = 0U;
	int32_t x770 = INT32_MIN;
	int64_t x771 = -105254963LL;
	uint16_t x772 = UINT16_MAX;
	volatile int32_t t188 = -2050101;

    t188 = (x769/(x770!=(x771==x772)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x773 = 1U;
	int16_t x774 = -1;
	int32_t x775 = INT32_MIN;
	volatile uint32_t t189 = 41019U;

    t189 = (x773/(x774!=(x775==x776)));

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x777 = 13U;
	int8_t x778 = -53;
	volatile uint16_t x779 = UINT16_MAX;
	int32_t t190 = 44898;

    t190 = (x777/(x778!=(x779==x780)));

    if (t190 != 13) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x782 = INT64_MIN;
	uint16_t x783 = 473U;
	uint16_t x784 = UINT16_MAX;

    t191 = (x781/(x782!=(x783==x784)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -1;
	int64_t x786 = 49854005LL;
	int64_t x787 = 367045486225107773LL;
	volatile int8_t x788 = INT8_MIN;

    t192 = (x785/(x786!=(x787==x788)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = INT16_MIN;
	uint8_t x792 = 123U;
	int32_t t193 = 368282484;

    t193 = (x789/(x790!=(x791==x792)));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x793 = UINT32_MAX;
	int16_t x794 = INT16_MIN;
	uint64_t x795 = 107259712270LLU;
	int8_t x796 = INT8_MIN;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = (x793/(x794!=(x795==x796)));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x797 = 2652LLU;
	int64_t x798 = INT64_MAX;
	int8_t x799 = -1;
	int8_t x800 = 42;

    t195 = (x797/(x798!=(x799==x800)));

    if (t195 != 2652LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = INT8_MIN;
	int32_t x802 = INT32_MIN;
	volatile uint64_t x803 = 1029396603LLU;
	int64_t x804 = -4LL;
	static volatile int32_t t196 = 8420;

    t196 = (x801/(x802!=(x803==x804)));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x805 = 23822U;
	int8_t x806 = INT8_MAX;
	volatile int16_t x807 = -1;
	int64_t x808 = 2802324142LL;
	volatile int32_t t197 = -6529881;

    t197 = (x805/(x806!=(x807==x808)));

    if (t197 != 23822) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x809 = UINT16_MAX;
	int32_t x810 = INT32_MIN;
	static uint64_t x812 = 10090351905296LLU;
	volatile int32_t t198 = 4018;

    t198 = (x809/(x810!=(x811==x812)));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x813 = -1;
	int64_t x814 = 55509238LL;
	int32_t x815 = INT32_MAX;
	int8_t x816 = -1;
	volatile int32_t t199 = -882852359;

    t199 = (x813/(x814!=(x815==x816)));

    if (t199 != -1) { NG(); } else { ; }
	
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

