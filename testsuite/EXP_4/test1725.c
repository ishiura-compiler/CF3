
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

static int32_t x2 = -1;
int32_t x4 = INT32_MAX;
static volatile int8_t x7 = INT8_MIN;
uint8_t x9 = 29U;
int32_t x10 = INT32_MIN;
uint64_t x11 = 514306578LLU;
volatile int8_t x16 = 0;
static uint16_t x21 = 0U;
uint64_t x22 = UINT64_MAX;
static int8_t x26 = INT8_MIN;
uint16_t x28 = UINT16_MAX;
static int8_t x30 = INT8_MAX;
static int64_t x31 = 1754765980LL;
volatile int32_t t7 = 76690546;
volatile int16_t x33 = -1;
static uint8_t x35 = 82U;
volatile int64_t x42 = INT64_MIN;
volatile int32_t x60 = -13949;
int32_t t15 = -53;
int32_t x65 = 150328460;
int64_t x83 = -287725480149304030LL;
int8_t x84 = -1;
uint8_t x87 = 2U;
int32_t x88 = INT32_MIN;
static int32_t x91 = 54;
static volatile int32_t x92 = 2407719;
uint32_t t22 = 1280485U;
int64_t x94 = INT64_MAX;
int8_t x96 = INT8_MIN;
int8_t x101 = INT8_MIN;
uint64_t t25 = 6317009697549519064LLU;
uint32_t x107 = 1U;
uint8_t x116 = UINT8_MAX;
static uint64_t t28 = 82269LLU;
int64_t x118 = INT64_MAX;
volatile int8_t x119 = -1;
static int32_t x122 = -170701281;
int16_t x130 = 7;
uint8_t x138 = UINT8_MAX;
volatile int16_t x139 = 24;
int64_t t35 = 550259134888132015LL;
static volatile uint16_t x149 = UINT16_MAX;
int32_t x152 = INT32_MIN;
static uint8_t x155 = 16U;
int8_t x160 = -1;
volatile int64_t t41 = 23707075LL;
int8_t x169 = INT8_MIN;
volatile uint64_t x171 = 41134LLU;
int64_t x173 = INT64_MIN;
int32_t x180 = INT32_MIN;
uint8_t x186 = UINT8_MAX;
static volatile uint64_t x187 = UINT64_MAX;
int16_t x195 = INT16_MIN;
volatile int64_t t48 = 1561793644167416LL;
volatile int32_t x209 = INT32_MAX;
static uint8_t x210 = 0U;
volatile int64_t x211 = -13956LL;
uint64_t x212 = 441497897LLU;
volatile int16_t x214 = -1;
volatile int8_t x216 = 0;
uint16_t x218 = 11945U;
volatile uint64_t t55 = 613326929718506364LLU;
int8_t x232 = INT8_MIN;
int16_t x233 = -1;
volatile int32_t t58 = 1;
volatile int64_t x238 = INT64_MAX;
static volatile int64_t t59 = -3201867LL;
uint8_t x246 = UINT8_MAX;
int64_t x249 = 343582753136324942LL;
volatile int32_t x257 = -1;
int8_t x280 = -1;
int32_t x281 = INT32_MAX;
int8_t x291 = INT8_MIN;
volatile int64_t t73 = 2494060230LL;
static uint32_t x297 = UINT32_MAX;
int16_t x301 = INT16_MIN;
static int64_t x303 = 1LL;
uint64_t x305 = 3521LLU;
volatile uint64_t t76 = 9412062537253LLU;
volatile int64_t t77 = 31LL;
int64_t x314 = 102413353752490LL;
volatile uint8_t x316 = UINT8_MAX;
volatile int64_t t78 = 119560770425LL;
int32_t x320 = -446;
uint64_t t80 = 5341476225906LLU;
uint8_t x327 = 31U;
static int16_t x330 = INT16_MIN;
int32_t t83 = 711355958;
int8_t x340 = -1;
int8_t x342 = INT8_MIN;
int8_t x343 = INT8_MIN;
volatile int8_t x351 = 5;
volatile uint32_t t87 = 441U;
volatile int8_t x354 = -1;
volatile int32_t t88 = 14902095;
int8_t x357 = -1;
int32_t x367 = 4;
volatile uint64_t t91 = 673627531559LLU;
int32_t x371 = 358058645;
int16_t x381 = -1;
uint32_t x383 = 898590U;
volatile int32_t x387 = INT32_MIN;
uint64_t t98 = 653278066215297LLU;
volatile int8_t x400 = -1;
int16_t x414 = 3346;
static volatile int64_t x415 = 569972396787392923LL;
int8_t x419 = -1;
volatile int32_t x430 = -454999;
volatile int16_t x431 = INT16_MIN;
int64_t x440 = -1LL;
uint64_t t110 = 18208898142703LLU;
int16_t x451 = -1;
int32_t t112 = 342891;
int64_t t113 = 452LL;
static int32_t t114 = 6731;
int32_t x463 = -1;
static int8_t x464 = -1;
int8_t x467 = INT8_MAX;
static uint16_t x468 = 128U;
volatile int16_t x470 = INT16_MAX;
int16_t x477 = INT16_MAX;
int32_t x478 = INT32_MAX;
static uint8_t x480 = UINT8_MAX;
int32_t t119 = -969;
static int16_t x481 = -1446;
int16_t x484 = INT16_MIN;
uint8_t x485 = 13U;
int16_t x490 = 14;
static int8_t x498 = -1;
int32_t t124 = 1;
static volatile int8_t x506 = INT8_MIN;
int16_t x507 = INT16_MIN;
volatile uint64_t t127 = 81LLU;
int32_t x514 = 3309626;
uint64_t x516 = UINT64_MAX;
volatile int64_t x517 = INT64_MAX;
volatile uint16_t x519 = 52U;
int64_t x527 = -1LL;
int16_t x528 = -2666;
static uint64_t t131 = UINT64_MAX;
volatile uint16_t x534 = UINT16_MAX;
uint64_t x535 = UINT64_MAX;
volatile int8_t x536 = -1;
uint8_t x548 = 3U;
int16_t x559 = -1;
int8_t x561 = INT8_MIN;
uint64_t x562 = UINT64_MAX;
volatile int16_t x563 = 20;
static int16_t x569 = INT16_MIN;
int32_t x575 = INT32_MIN;
int16_t x576 = INT16_MIN;
int64_t t143 = 38250LL;
int32_t x577 = 2351;
uint32_t x578 = 8653U;
int8_t x587 = -58;
int16_t x590 = INT16_MIN;
int16_t x597 = 834;
int32_t x601 = 1451126;
uint16_t x606 = 4154U;
uint64_t t151 = 15LLU;
int8_t x617 = -1;
uint16_t x618 = UINT16_MAX;
static uint8_t x621 = 42U;
uint32_t x622 = 1279U;
uint64_t x627 = 34342141345632381LLU;
static int64_t t156 = -1963450461003LL;
int16_t x630 = INT16_MIN;
int64_t x632 = -1LL;
int32_t x634 = 2484;
int8_t x644 = INT8_MIN;
static int8_t x645 = INT8_MAX;
int32_t x646 = INT32_MIN;
uint64_t t162 = 2050251LLU;
static volatile int32_t x656 = INT32_MIN;
volatile uint32_t t163 = 373429U;
int16_t x669 = INT16_MAX;
int32_t t167 = -23408930;
int32_t x676 = -1;
int16_t x677 = INT16_MAX;
int64_t x678 = INT64_MAX;
int64_t x679 = -5926744LL;
static int16_t x683 = -2;
uint64_t x687 = 128270205LLU;
volatile uint64_t t171 = 4258345009788LLU;
int8_t x694 = INT8_MIN;
volatile int32_t x700 = -578715;
uint64_t t175 = 22029LLU;
static uint16_t x707 = UINT16_MAX;
uint32_t x710 = UINT32_MAX;
uint16_t x714 = 10202U;
int8_t x715 = -1;
int32_t t178 = -916;
uint8_t x727 = UINT8_MAX;
int32_t x728 = INT32_MAX;
volatile int16_t x730 = INT16_MIN;
static int16_t x731 = INT16_MIN;
volatile int8_t x732 = -1;
volatile uint32_t x735 = 586825898U;
int8_t x741 = 9;
int32_t t185 = 17;
int32_t x755 = -1;
static volatile int32_t t188 = -61519;
int64_t x764 = -1LL;
uint16_t x765 = 8376U;
int16_t x766 = INT16_MIN;
uint16_t x768 = UINT16_MAX;
volatile int32_t t191 = -207916;
static int64_t x773 = INT64_MIN;
uint32_t x775 = 29733U;
uint8_t x777 = UINT8_MAX;
static volatile int32_t t194 = 20033;
uint32_t x784 = 3944U;
volatile uint64_t t197 = UINT64_MAX;
volatile int32_t t198 = 11;


void f0(void) {
    	int64_t x1 = -2327130LL;
	uint16_t x3 = 1U;
	int64_t t0 = -209320LL;

    t0 = (x1*(x2&(x3>x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1;
	int16_t x6 = INT16_MIN;
	uint16_t x8 = 14862U;
	int32_t t1 = 4173390;

    t1 = (x5*(x6&(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x12 = 61U;
	volatile int32_t t2 = -141;

    t2 = (x9*(x10&(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 67U;
	uint8_t x14 = 1U;
	static int8_t x15 = INT8_MAX;
	static int32_t t3 = -5577;

    t3 = (x13*(x14&(x15>x16)));

    if (t3 != 67) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 117574;
	int64_t x18 = INT64_MIN;
	int16_t x19 = 18;
	uint32_t x20 = 2334826U;
	static int64_t t4 = 0LL;

    t4 = (x17*(x18&(x19>x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x23 = 6810U;
	static int64_t x24 = INT64_MIN;
	uint64_t t5 = 505856735899LLU;

    t5 = (x21*(x22&(x23>x24)));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	static int16_t x27 = -967;
	uint32_t t6 = 26U;

    t6 = (x25*(x26&(x27>x28)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MAX;
	int16_t x32 = 10;

    t7 = (x29*(x30&(x31>x32)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MIN;
	int64_t x36 = 493044608LL;
	volatile int32_t t8 = 64066;

    t8 = (x33*(x34&(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	uint16_t x38 = 1U;
	static int32_t x39 = 3738182;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = -1318;

    t9 = (x37*(x38&(x39>x40)));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint8_t x43 = 20U;
	uint16_t x44 = 4U;
	volatile int64_t t10 = -10382402954442743LL;

    t10 = (x41*(x42&(x43>x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 36U;
	int32_t x46 = -21279;
	int64_t x47 = INT64_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 735;

    t11 = (x45*(x46&(x47>x48)));

    if (t11 != 36) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 206U;
	uint64_t t12 = 6710LLU;

    t12 = (x49*(x50&(x51>x52)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	int8_t x54 = -60;
	int32_t x55 = INT32_MAX;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -328195;

    t13 = (x53*(x54&(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = -1324;
	volatile int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	static volatile int32_t t14 = 186885071;

    t14 = (x57*(x58&(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = -1;
	volatile int32_t x62 = -1;
	volatile int8_t x63 = INT8_MAX;
	static int8_t x64 = INT8_MIN;

    t15 = (x61*(x62&(x63>x64)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 42U;
	static uint64_t x67 = 48LLU;
	volatile uint8_t x68 = 0U;
	static volatile int32_t t16 = 112295;

    t16 = (x65*(x66&(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -16047814118244LL;
	uint8_t x70 = 53U;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;
	volatile int64_t t17 = -35744238764637374LL;

    t17 = (x69*(x70&(x71>x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = 915U;
	static int16_t x76 = 3;
	int32_t t18 = 6865;

    t18 = (x73*(x74&(x75>x76)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 3998;
	uint8_t x78 = UINT8_MAX;
	static uint16_t x79 = 14U;
	int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 0;

    t19 = (x77*(x78&(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	int64_t t20 = -316155392998330LL;

    t20 = (x81*(x82&(x83>x84)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 119U;
	volatile uint32_t t21 = UINT32_MAX;

    t21 = (x85*(x86&(x87>x88)));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -416;
	static volatile uint32_t x90 = 108670544U;

    t22 = (x89*(x90&(x91>x92)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 1310LLU;
	uint64_t x95 = 29710978024LLU;
	uint64_t t23 = 1044729343116969LLU;

    t23 = (x93*(x94&(x95>x96)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	volatile int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MAX;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 327557;

    t24 = (x97*(x98&(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 48256127649310LLU;
	uint8_t x103 = UINT8_MAX;
	static volatile int16_t x104 = -2328;

    t25 = (x101*(x102&(x103>x104)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -59;
	static int8_t x106 = INT8_MIN;
	volatile uint8_t x108 = 0U;
	int32_t t26 = 373048;

    t26 = (x105*(x106&(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	int16_t x110 = INT16_MAX;
	volatile int16_t x111 = INT16_MIN;
	int64_t x112 = -370012993825773LL;
	volatile int32_t t27 = 375;

    t27 = (x109*(x110&(x111>x112)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 25U;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MIN;

    t28 = (x113*(x114&(x115>x116)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x117 = INT16_MAX;
	int32_t x120 = -1537575;
	volatile int64_t t29 = -4179434LL;

    t29 = (x117*(x118&(x119>x120)));

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MIN;
	static int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;
	static int32_t t30 = 101019;

    t30 = (x121*(x122&(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = 217;
	uint8_t x126 = 0U;
	static volatile int8_t x127 = -1;
	int64_t x128 = 45LL;
	int32_t t31 = -1;

    t31 = (x125*(x126&(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MAX;
	static uint8_t x132 = 7U;
	int32_t t32 = INT32_MIN;

    t32 = (x129*(x130&(x131>x132)));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 292U;
	int64_t x134 = -1LL;
	int8_t x135 = -1;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 7616LL;

    t33 = (x133*(x134&(x135>x136)));

    if (t33 != 292LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MIN;
	static int8_t x140 = 31;
	static int32_t t34 = 1166537;

    t34 = (x137*(x138&(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	int32_t x144 = -1;

    t35 = (x141*(x142&(x143>x144)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 24;
	static uint8_t x146 = 0U;
	int64_t x147 = 61LL;
	static uint16_t x148 = 17969U;
	int32_t t36 = 2894;

    t36 = (x145*(x146&(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = -1LL;
	volatile int16_t x151 = 117;
	volatile int64_t t37 = -3012898972LL;

    t37 = (x149*(x150&(x151>x152)));

    if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -14;
	uint16_t x154 = 7815U;
	uint8_t x156 = 1U;
	int32_t t38 = 732;

    t38 = (x153*(x154&(x155>x156)));

    if (t38 != -14) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = 13880U;
	int64_t x158 = -145316LL;
	static int32_t x159 = -1;
	volatile int64_t t39 = 26590583773079290LL;

    t39 = (x157*(x158&(x159>x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 59358LLU;
	int32_t x162 = -5;
	int64_t x163 = INT64_MIN;
	uint64_t x164 = 3716978982113944LLU;
	uint64_t t40 = 3718287LLU;

    t40 = (x161*(x162&(x163>x164)));

    if (t40 != 59358LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	int16_t x168 = -47;

    t41 = (x165*(x166&(x167>x168)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = 47783809834339LL;
	int64_t x172 = INT64_MAX;
	volatile int64_t t42 = 985LL;

    t42 = (x169*(x170&(x171>x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MAX;
	static volatile int64_t t43 = -1461511582519696LL;

    t43 = (x173*(x174&(x175>x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = 22;
	int64_t x179 = INT64_MIN;
	volatile int64_t t44 = 639803899075140LL;

    t44 = (x177*(x178&(x179>x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -5506170369LL;
	uint8_t x182 = 2U;
	volatile int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MAX;
	volatile int64_t t45 = 4038435357781LL;

    t45 = (x181*(x182&(x183>x184)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 40U;
	volatile int64_t x188 = -1LL;
	static uint32_t t46 = 4621U;

    t46 = (x185*(x186&(x187>x188)));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 432105LL;
	int64_t x190 = 252207347LL;
	uint32_t x191 = 1U;
	static volatile uint16_t x192 = UINT16_MAX;
	int64_t t47 = 466380376LL;

    t47 = (x189*(x190&(x191>x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = -1899869547704417551LL;
	int16_t x194 = 11825;
	int16_t x196 = -1;

    t48 = (x193*(x194&(x195>x196)));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 892236828LLU;
	uint8_t x198 = UINT8_MAX;
	static int32_t x199 = INT32_MAX;
	int32_t x200 = 29;
	uint64_t t49 = 305769764365197LLU;

    t49 = (x197*(x198&(x199>x200)));

    if (t49 != 892236828LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	static volatile int8_t x202 = INT8_MIN;
	uint32_t x203 = 396U;
	int8_t x204 = 6;
	volatile int32_t t50 = 18613;

    t50 = (x201*(x202&(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 11;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;
	int32_t t51 = -32373644;

    t51 = (x205*(x206&(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t t52 = 2882436;

    t52 = (x209*(x210&(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -10LL;
	volatile uint16_t x215 = 383U;
	int64_t t53 = -175128LL;

    t53 = (x213*(x214&(x215>x216)));

    if (t53 != -10LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint16_t x219 = 11U;
	int8_t x220 = 1;
	int32_t t54 = INT32_MIN;

    t54 = (x217*(x218&(x219>x220)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 132U;
	uint64_t x223 = 1397846682537995147LLU;
	int8_t x224 = INT8_MAX;

    t55 = (x221*(x222&(x223>x224)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	int64_t x226 = -260288032908LL;
	uint16_t x227 = 17577U;
	static volatile uint8_t x228 = 7U;
	volatile int64_t t56 = 67907108534LL;

    t56 = (x225*(x226&(x227>x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 1U;
	int64_t x230 = 2145710205856190LL;
	static uint8_t x231 = 2U;
	int64_t t57 = 1LL;

    t57 = (x229*(x230&(x231>x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = 4071U;
	volatile int16_t x235 = INT16_MIN;
	volatile int64_t x236 = 177LL;

    t58 = (x233*(x234&(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	uint8_t x239 = 1U;
	int32_t x240 = INT32_MIN;

    t59 = (x237*(x238&(x239>x240)));

    if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -6;
	static int8_t x242 = INT8_MIN;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = -1;
	int32_t t60 = -93262;

    t60 = (x241*(x242&(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -4078;
	static volatile int32_t t61 = 10257;

    t61 = (x245*(x246&(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x250 = INT32_MAX;
	uint64_t x251 = UINT64_MAX;
	volatile int16_t x252 = INT16_MAX;
	static volatile int64_t t62 = 27011LL;

    t62 = (x249*(x250&(x251>x252)));

    if (t62 != 343582753136324942LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -191526LL;
	int16_t x254 = -1;
	int64_t x255 = -223439128LL;
	int8_t x256 = INT8_MIN;
	volatile int64_t t63 = -26LL;

    t63 = (x253*(x254&(x255>x256)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MIN;
	int8_t x259 = 4;
	volatile int64_t x260 = INT64_MAX;
	static volatile int64_t t64 = -13075506245399976LL;

    t64 = (x257*(x258&(x259>x260)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	int8_t x262 = 1;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = 12889588971418LL;
	volatile int32_t t65 = 46426197;

    t65 = (x261*(x262&(x263>x264)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	static int64_t x266 = INT64_MIN;
	uint8_t x267 = 1U;
	uint32_t x268 = 80199U;
	volatile int64_t t66 = 678LL;

    t66 = (x265*(x266&(x267>x268)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	int8_t x271 = -1;
	uint16_t x272 = 71U;
	static int64_t t67 = -990837615166LL;

    t67 = (x269*(x270&(x271>x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	uint16_t x274 = 8U;
	int8_t x275 = -13;
	int16_t x276 = -6461;
	static volatile int64_t t68 = 477265032LL;

    t68 = (x273*(x274&(x275>x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 60U;
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = INT32_MAX;
	volatile int32_t t69 = -2;

    t69 = (x277*(x278&(x279>x280)));

    if (t69 != 60) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	uint32_t x283 = 650293U;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -477;

    t70 = (x281*(x282&(x283>x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = -1;
	static uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 46U;
	int16_t x288 = 93;
	uint64_t t71 = 1079LLU;

    t71 = (x285*(x286&(x287>x288)));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MIN;
	uint64_t x292 = 4LLU;
	uint64_t t72 = 941970LLU;

    t72 = (x289*(x290&(x291>x292)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	int8_t x294 = 0;
	volatile uint32_t x295 = 1U;
	int16_t x296 = -1;

    t73 = (x293*(x294&(x295>x296)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x298 = UINT64_MAX;
	static int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MAX;
	volatile uint64_t t74 = 236432275116021LLU;

    t74 = (x297*(x298&(x299>x300)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = INT32_MAX;
	uint16_t x304 = 0U;
	int32_t t75 = -55190278;

    t75 = (x301*(x302&(x303>x304)));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = UINT16_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile uint64_t x308 = 445968LLU;

    t76 = (x305*(x306&(x307>x308)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = 1;
	static uint32_t x311 = 37U;
	uint16_t x312 = 2429U;

    t77 = (x309*(x310&(x311>x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int16_t x315 = 57;

    t78 = (x313*(x314&(x315>x316)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 987U;
	int32_t x318 = INT32_MAX;
	uint8_t x319 = 3U;
	int32_t t79 = 442565;

    t79 = (x317*(x318&(x319>x320)));

    if (t79 != 987) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	int8_t x323 = 58;
	int32_t x324 = 1256656;

    t80 = (x321*(x322&(x323>x324)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = -5355;
	uint8_t x326 = UINT8_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -1748512;

    t81 = (x325*(x326&(x327>x328)));

    if (t81 != -5355) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 1U;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t82 = -672804;

    t82 = (x329*(x330&(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = 1;
	uint32_t x336 = UINT32_MAX;

    t83 = (x333*(x334&(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = -1;
	uint16_t x338 = 1U;
	static volatile int16_t x339 = 903;
	int32_t t84 = -5179854;

    t84 = (x337*(x338&(x339>x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = UINT8_MAX;
	int64_t x344 = -3LL;
	int32_t t85 = -4;

    t85 = (x341*(x342&(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = -3067535296645888265LL;
	volatile int32_t x346 = -5397;
	static int8_t x347 = INT8_MAX;
	int64_t x348 = -1LL;
	volatile int64_t t86 = -1026108123873632919LL;

    t86 = (x345*(x346&(x347>x348)));

    if (t86 != -3067535296645888265LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x349 = 1457668414U;
	static int32_t x350 = INT32_MIN;
	uint8_t x352 = 2U;

    t87 = (x349*(x350&(x351>x352)));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x355 = 6;
	int32_t x356 = INT32_MIN;

    t88 = (x353*(x354&(x355>x356)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = UINT16_MAX;
	int8_t x359 = 2;
	uint8_t x360 = 74U;
	int32_t t89 = 1377813;

    t89 = (x357*(x358&(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 1LLU;
	int32_t x364 = INT32_MAX;
	volatile int64_t t90 = 369537654LL;

    t90 = (x361*(x362&(x363>x364)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 1590402185687550516LLU;
	int64_t x366 = -1LL;
	int16_t x368 = 0;

    t91 = (x365*(x366&(x367>x368)));

    if (t91 != 1590402185687550516LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	uint16_t x370 = UINT16_MAX;
	uint8_t x372 = 28U;
	volatile int32_t t92 = -2816;

    t92 = (x369*(x370&(x371>x372)));

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -558;
	uint8_t x374 = 85U;
	static int16_t x375 = -4;
	uint32_t x376 = 3U;
	volatile int32_t t93 = 14;

    t93 = (x373*(x374&(x375>x376)));

    if (t93 != -558) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	static volatile int32_t t94 = -363716946;

    t94 = (x377*(x378&(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = 10437;
	static int32_t x384 = 0;
	volatile int32_t t95 = 1477006;

    t95 = (x381*(x382&(x383>x384)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MAX;
	uint32_t x388 = 9447U;
	volatile int32_t t96 = INT32_MIN;

    t96 = (x385*(x386&(x387>x388)));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -246904931741360LL;
	int32_t x390 = 124046;
	volatile int16_t x391 = INT16_MAX;
	int32_t x392 = INT32_MIN;
	int64_t t97 = 151LL;

    t97 = (x389*(x390&(x391>x392)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 958040LLU;
	uint16_t x394 = 436U;
	uint64_t x395 = 5857965688896LLU;
	uint32_t x396 = 402U;

    t98 = (x393*(x394&(x395>x396)));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MIN;
	static uint8_t x398 = UINT8_MAX;
	volatile int32_t x399 = -1;
	static int32_t t99 = 207;

    t99 = (x397*(x398&(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	static int8_t x402 = -1;
	static int8_t x403 = INT8_MIN;
	volatile int32_t x404 = -1;
	int32_t t100 = -15139;

    t100 = (x401*(x402&(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	static int8_t x406 = INT8_MIN;
	uint8_t x407 = 0U;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = -1;

    t101 = (x405*(x406&(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	static int16_t x410 = -24;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	int64_t t102 = -1790224418LL;

    t102 = (x409*(x410&(x411>x412)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 4U;
	uint32_t x416 = UINT32_MAX;
	int32_t t103 = -22;

    t103 = (x413*(x414&(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 116U;
	volatile int16_t x418 = INT16_MAX;
	static uint32_t x420 = UINT32_MAX;
	uint32_t t104 = 212245785U;

    t104 = (x417*(x418&(x419>x420)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 5U;
	uint32_t x422 = UINT32_MAX;
	int8_t x423 = 0;
	int32_t x424 = 1297;
	volatile uint32_t t105 = 97862U;

    t105 = (x421*(x422&(x423>x424)));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	int64_t x427 = 36286228LL;
	int16_t x428 = 11;
	volatile int64_t t106 = -7359LL;

    t106 = (x425*(x426&(x427>x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = -1;
	int64_t x432 = -1LL;
	volatile int32_t t107 = 36667442;

    t107 = (x429*(x430&(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int8_t x434 = INT8_MAX;
	volatile int16_t x435 = -1;
	int64_t x436 = INT64_MIN;
	uint32_t t108 = UINT32_MAX;

    t108 = (x433*(x434&(x435>x436)));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x437 = -11;
	int16_t x438 = -18;
	uint64_t x439 = 98089456414644LLU;
	int32_t t109 = 1;

    t109 = (x437*(x438&(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MAX;
	int32_t x444 = INT32_MAX;

    t110 = (x441*(x442&(x443>x444)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 0;
	int16_t x446 = INT16_MIN;
	volatile int8_t x447 = INT8_MIN;
	int32_t x448 = 212701;
	static int32_t t111 = 6;

    t111 = (x445*(x446&(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	uint16_t x450 = UINT16_MAX;
	int8_t x452 = INT8_MAX;

    t112 = (x449*(x450&(x451>x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MAX;
	int64_t x454 = INT64_MIN;
	static volatile int64_t x455 = INT64_MAX;
	static uint64_t x456 = UINT64_MAX;

    t113 = (x453*(x454&(x455>x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	static int32_t x458 = INT32_MIN;
	volatile uint16_t x459 = UINT16_MAX;
	static int64_t x460 = -1LL;

    t114 = (x457*(x458&(x459>x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	int8_t x462 = INT8_MIN;
	volatile uint32_t t115 = 82316U;

    t115 = (x461*(x462&(x463>x464)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -88;
	int8_t x466 = -1;
	volatile int32_t t116 = -1718731;

    t116 = (x465*(x466&(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	int32_t x471 = 213939;
	int16_t x472 = INT16_MAX;
	int32_t t117 = -26171784;

    t117 = (x469*(x470&(x471>x472)));

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 32246U;
	uint8_t x474 = 0U;
	int64_t x475 = -1LL;
	int16_t x476 = INT16_MIN;
	int32_t t118 = 1399;

    t118 = (x473*(x474&(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x479 = -1;

    t119 = (x477*(x478&(x479>x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x482 = 6040LLU;
	static uint64_t x483 = 525122879693537527LLU;
	uint64_t t120 = 3231361737507868LLU;

    t120 = (x481*(x482&(x483>x484)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x486 = UINT64_MAX;
	int8_t x487 = INT8_MIN;
	static int8_t x488 = INT8_MIN;
	uint64_t t121 = 295655368609934LLU;

    t121 = (x485*(x486&(x487>x488)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	uint64_t x491 = UINT64_MAX;
	int8_t x492 = -1;
	volatile int32_t t122 = -13;

    t122 = (x489*(x490&(x491>x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x493 = 8U;
	uint8_t x494 = UINT8_MAX;
	uint64_t x495 = UINT64_MAX;
	static int16_t x496 = INT16_MAX;
	volatile uint32_t t123 = 8785U;

    t123 = (x493*(x494&(x495>x496)));

    if (t123 != 8U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = 1;
	int32_t x499 = INT32_MIN;
	int8_t x500 = 0;

    t124 = (x497*(x498&(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = -401382651263026LL;
	uint16_t x502 = UINT16_MAX;
	uint16_t x503 = 0U;
	uint32_t x504 = 52U;
	static volatile int64_t t125 = 1LL;

    t125 = (x501*(x502&(x503>x504)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x505 = INT16_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 0;

    t126 = (x505*(x506&(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = 5290764LLU;
	static uint16_t x510 = 1245U;
	int16_t x511 = 7;
	int8_t x512 = INT8_MIN;

    t127 = (x509*(x510&(x511>x512)));

    if (t127 != 5290764LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 2U;
	int32_t x515 = INT32_MIN;
	static volatile int32_t t128 = -1;

    t128 = (x513*(x514&(x515>x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x518 = 22U;
	volatile uint64_t x520 = 62088103761403LLU;
	static int64_t t129 = 5586551248LL;

    t129 = (x517*(x518&(x519>x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 161U;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = 3;
	static volatile uint64_t x524 = 80LLU;
	uint32_t t130 = 156401532U;

    t130 = (x521*(x522&(x523>x524)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1LL;
	static volatile uint64_t x526 = 5891793655LLU;

    t131 = (x525*(x526&(x527>x528)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	static uint32_t x530 = UINT32_MAX;
	int16_t x531 = INT16_MIN;
	int64_t x532 = -6668239997651LL;
	volatile uint32_t t132 = 3688957U;

    t132 = (x529*(x530&(x531>x532)));

    if (t132 != 4294967168U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	volatile int32_t t133 = -159376;

    t133 = (x533*(x534&(x535>x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MAX;
	uint64_t x538 = 91LLU;
	volatile int16_t x539 = INT16_MIN;
	volatile int64_t x540 = INT64_MIN;
	uint64_t t134 = 7137846364007705169LLU;

    t134 = (x537*(x538&(x539>x540)));

    if (t134 != 127LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile int32_t x544 = -50796911;
	int32_t t135 = 32;

    t135 = (x541*(x542&(x543>x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 27U;
	int8_t x546 = INT8_MAX;
	static int8_t x547 = -59;
	volatile int32_t t136 = -653179;

    t136 = (x545*(x546&(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	static volatile uint8_t x550 = UINT8_MAX;
	static int8_t x551 = INT8_MIN;
	static volatile int8_t x552 = 0;
	int32_t t137 = 15002;

    t137 = (x549*(x550&(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x553 = 83200853LLU;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = 159;
	static uint32_t x556 = 1277953U;
	volatile uint64_t t138 = 3LLU;

    t138 = (x553*(x554&(x555>x556)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -1;
	static uint64_t x558 = UINT64_MAX;
	volatile int64_t x560 = INT64_MIN;
	static volatile uint64_t t139 = UINT64_MAX;

    t139 = (x557*(x558&(x559>x560)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x564 = 19U;
	static uint64_t t140 = 786535677263958LLU;

    t140 = (x561*(x562&(x563>x564)));

    if (t140 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = -1;
	int8_t x567 = -1;
	uint64_t x568 = 4618915545494961LLU;
	int32_t t141 = INT32_MIN;

    t141 = (x565*(x566&(x567>x568)));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -1LL;
	volatile uint16_t x571 = UINT16_MAX;
	static uint8_t x572 = UINT8_MAX;
	volatile int64_t t142 = -8430271062320131LL;

    t142 = (x569*(x570&(x571>x572)));

    if (t142 != -32768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 2720;
	int64_t x574 = 179146153283676LL;

    t143 = (x573*(x574&(x575>x576)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x579 = UINT32_MAX;
	volatile int8_t x580 = INT8_MAX;
	volatile uint32_t t144 = 561U;

    t144 = (x577*(x578&(x579>x580)));

    if (t144 != 2351U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -3;
	int32_t x582 = -1;
	static uint64_t x583 = UINT64_MAX;
	static int8_t x584 = INT8_MIN;
	volatile int32_t t145 = 114710151;

    t145 = (x581*(x582&(x583>x584)));

    if (t145 != -3) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	uint16_t x586 = 7509U;
	volatile int16_t x588 = INT16_MIN;
	static int64_t t146 = 113916549LL;

    t146 = (x585*(x586&(x587>x588)));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	uint16_t x591 = UINT16_MAX;
	static int16_t x592 = INT16_MAX;
	int32_t t147 = 26788417;

    t147 = (x589*(x590&(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int32_t x594 = -1;
	int16_t x595 = -901;
	volatile int64_t x596 = -1LL;
	volatile int32_t t148 = 3;

    t148 = (x593*(x594&(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = -1;
	uint16_t x599 = 57U;
	uint32_t x600 = 4034U;
	volatile int32_t t149 = 20123546;

    t149 = (x597*(x598&(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = -2;
	uint16_t x603 = UINT16_MAX;
	int8_t x604 = INT8_MAX;
	volatile int32_t t150 = -31;

    t150 = (x601*(x602&(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 34821LLU;
	static int8_t x607 = INT8_MIN;
	volatile int16_t x608 = INT16_MIN;

    t151 = (x605*(x606&(x607>x608)));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -11;
	int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MIN;
	int8_t x612 = -14;
	static int64_t t152 = -52470717629LL;

    t152 = (x609*(x610&(x611>x612)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -31;
	volatile uint8_t x614 = 2U;
	int16_t x615 = INT16_MIN;
	volatile uint64_t x616 = 841232783LLU;
	volatile int32_t t153 = 608951026;

    t153 = (x613*(x614&(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x619 = INT8_MIN;
	uint16_t x620 = 63U;
	volatile int32_t t154 = 2527;

    t154 = (x617*(x618&(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x623 = 9U;
	int64_t x624 = -1275640LL;
	static volatile uint32_t t155 = 12034U;

    t155 = (x621*(x622&(x623>x624)));

    if (t155 != 42U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -2056;
	volatile int64_t x626 = INT64_MIN;
	int16_t x628 = 453;

    t156 = (x625*(x626&(x627>x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MIN;
	uint64_t x631 = 55620172791118LLU;
	int32_t t157 = -1;

    t157 = (x629*(x630&(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	volatile int32_t x635 = -508376546;
	static volatile int8_t x636 = -23;
	int32_t t158 = -395;

    t158 = (x633*(x634&(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = 0U;
	int64_t x638 = INT64_MIN;
	volatile int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	volatile int64_t t159 = -2175764880LL;

    t159 = (x637*(x638&(x639>x640)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MIN;
	int8_t x643 = 0;
	volatile int64_t t160 = 209LL;

    t160 = (x641*(x642&(x643>x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x647 = 39U;
	int8_t x648 = INT8_MIN;
	int32_t t161 = -2;

    t161 = (x645*(x646&(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 39161LLU;
	uint64_t x650 = 56900769LLU;
	int16_t x651 = 14;
	volatile uint32_t x652 = 29571U;

    t162 = (x649*(x650&(x651>x652)));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -6;
	uint32_t x654 = UINT32_MAX;
	uint16_t x655 = 0U;

    t163 = (x653*(x654&(x655>x656)));

    if (t163 != 4294967290U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 139U;
	static int16_t x658 = -3;
	static int64_t x659 = INT64_MIN;
	static uint16_t x660 = 15U;
	volatile uint32_t t164 = 21241U;

    t164 = (x657*(x658&(x659>x660)));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 3828927418049669339LLU;
	static uint32_t x662 = 130381U;
	int64_t x663 = -1LL;
	uint64_t x664 = UINT64_MAX;
	uint64_t t165 = 12440LLU;

    t165 = (x661*(x662&(x663>x664)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x666 = INT32_MAX;
	int64_t x667 = -43LL;
	int32_t x668 = INT32_MAX;
	volatile int32_t t166 = -1;

    t166 = (x665*(x666&(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x670 = -1;
	int64_t x671 = 10108838780637353LL;
	int64_t x672 = 121884LL;

    t167 = (x669*(x670&(x671>x672)));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int8_t x674 = INT8_MIN;
	static volatile uint8_t x675 = UINT8_MAX;
	volatile int32_t t168 = -47104502;

    t168 = (x673*(x674&(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x680 = 57918U;
	static int64_t t169 = -37983361166LL;

    t169 = (x677*(x678&(x679>x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = -1LL;
	volatile int32_t x682 = -22323;
	int64_t x684 = -820LL;
	int64_t t170 = 103105LL;

    t170 = (x681*(x682&(x683>x684)));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	volatile uint64_t x686 = 213242368760LLU;
	uint32_t x688 = 585285271U;

    t171 = (x685*(x686&(x687>x688)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -1;
	static uint64_t x690 = 6769526779442LLU;
	int8_t x691 = INT8_MIN;
	int8_t x692 = -17;
	volatile uint64_t t172 = 1124032739LLU;

    t172 = (x689*(x690&(x691>x692)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x693 = 14U;
	uint8_t x695 = 35U;
	int32_t x696 = INT32_MIN;
	static volatile uint32_t t173 = 6U;

    t173 = (x693*(x694&(x695>x696)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x697 = 29302330243058LLU;
	int16_t x698 = -1;
	int64_t x699 = 3LL;
	uint64_t t174 = 854LLU;

    t174 = (x697*(x698&(x699>x700)));

    if (t174 != 29302330243058LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = UINT64_MAX;
	int8_t x702 = -1;
	int8_t x703 = 1;
	uint16_t x704 = 104U;

    t175 = (x701*(x702&(x703>x704)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = -20;
	int16_t x708 = -1;
	volatile int32_t t176 = -7977528;

    t176 = (x705*(x706&(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x709 = 601LL;
	volatile int8_t x711 = -3;
	int8_t x712 = INT8_MIN;
	static volatile int64_t t177 = -1281358512LL;

    t177 = (x709*(x710&(x711>x712)));

    if (t177 != 601LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -98;
	uint64_t x716 = 21425108LLU;

    t178 = (x713*(x714&(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	static int32_t x718 = 1334805;
	uint32_t x719 = 616U;
	int32_t x720 = INT32_MIN;
	volatile int32_t t179 = -9;

    t179 = (x717*(x718&(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 8483420676579370LLU;
	int8_t x722 = INT8_MIN;
	static int32_t x723 = -1;
	static int64_t x724 = 93317LL;
	uint64_t t180 = 27747226699043LLU;

    t180 = (x721*(x722&(x723>x724)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x725 = -1;
	volatile int8_t x726 = INT8_MAX;
	int32_t t181 = -36023853;

    t181 = (x725*(x726&(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MAX;
	volatile int32_t t182 = 100679;

    t182 = (x729*(x730&(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int32_t x736 = -17;
	volatile int32_t t183 = 10;

    t183 = (x733*(x734&(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	static int16_t x738 = INT16_MIN;
	static uint8_t x739 = 3U;
	uint64_t x740 = UINT64_MAX;
	volatile int64_t t184 = -247142364LL;

    t184 = (x737*(x738&(x739>x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x742 = -48;
	volatile int32_t x743 = INT32_MAX;
	volatile uint16_t x744 = 6U;

    t185 = (x741*(x742&(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 2343642850194LLU;
	static int32_t x746 = INT32_MIN;
	int64_t x747 = -13753699442345280LL;
	volatile uint32_t x748 = 1636799500U;
	uint64_t t186 = 29232LLU;

    t186 = (x745*(x746&(x747>x748)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 7555308042869LLU;
	int32_t x750 = -1;
	uint8_t x751 = 4U;
	int64_t x752 = 34LL;
	volatile uint64_t t187 = 2729978463837LLU;

    t187 = (x749*(x750&(x751>x752)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 38U;
	int8_t x754 = INT8_MAX;
	int16_t x756 = INT16_MIN;

    t188 = (x753*(x754&(x755>x756)));

    if (t188 != 38) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 37512U;
	int32_t x758 = INT32_MAX;
	volatile int16_t x759 = INT16_MAX;
	volatile int64_t x760 = -1LL;
	volatile uint32_t t189 = 424498565U;

    t189 = (x757*(x758&(x759>x760)));

    if (t189 != 37512U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	uint32_t x762 = 366929989U;
	static volatile uint64_t x763 = 77LLU;
	volatile uint32_t t190 = 2051874210U;

    t190 = (x761*(x762&(x763>x764)));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x767 = INT8_MAX;

    t191 = (x765*(x766&(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MAX;
	uint16_t x770 = UINT16_MAX;
	volatile int32_t x771 = 1;
	static int8_t x772 = -12;
	int32_t t192 = INT32_MAX;

    t192 = (x769*(x770&(x771>x772)));

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = 13;
	uint32_t x776 = 24178U;
	static volatile int64_t t193 = INT64_MIN;

    t193 = (x773*(x774&(x775>x776)));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x778 = INT16_MIN;
	volatile int16_t x779 = 1;
	int16_t x780 = 1181;

    t194 = (x777*(x778&(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 24969LLU;
	int16_t x782 = INT16_MIN;
	int64_t x783 = INT64_MIN;
	volatile uint64_t t195 = 60522944960953732LLU;

    t195 = (x781*(x782&(x783>x784)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = -127252049084740056LL;
	int8_t x787 = INT8_MAX;
	volatile int64_t x788 = INT64_MAX;
	int64_t t196 = -133264291043LL;

    t196 = (x785*(x786&(x787>x788)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	int8_t x790 = -1;
	int64_t x791 = 230874222723359320LL;
	static uint16_t x792 = 28096U;

    t197 = (x789*(x790&(x791>x792)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x794 = INT16_MIN;
	int16_t x795 = -1;
	int32_t x796 = 29441123;

    t198 = (x793*(x794&(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	volatile int8_t x798 = -1;
	int16_t x799 = 41;
	int16_t x800 = INT16_MIN;
	volatile int64_t t199 = INT64_MIN;

    t199 = (x797*(x798&(x799>x800)));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

