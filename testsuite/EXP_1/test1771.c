
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

int16_t x4 = INT16_MIN;
uint32_t x8 = 9U;
static int8_t x12 = INT8_MIN;
int32_t x22 = INT32_MAX;
static int16_t x23 = INT16_MIN;
int64_t x28 = -1LL;
volatile int32_t t6 = -58807;
int32_t x29 = INT32_MAX;
volatile int64_t x32 = INT64_MIN;
int64_t x40 = INT64_MAX;
volatile int8_t x44 = INT8_MIN;
int64_t x45 = INT64_MIN;
uint8_t x46 = UINT8_MAX;
int32_t t12 = -4857;
static int16_t x57 = INT16_MAX;
int16_t x64 = -1;
int16_t x67 = INT16_MAX;
static volatile int32_t t16 = 1616404;
volatile int64_t x73 = -3127566LL;
int32_t t20 = 6;
static int16_t x85 = -1;
volatile int16_t x86 = INT16_MIN;
int32_t t21 = 5344885;
int8_t x90 = INT8_MIN;
static int8_t x97 = -1;
uint16_t x98 = UINT16_MAX;
static volatile int32_t t24 = -720256;
static int64_t x101 = INT64_MIN;
uint8_t x102 = 0U;
uint16_t x108 = UINT16_MAX;
int64_t x110 = INT64_MAX;
static int32_t x111 = 15111497;
int8_t x119 = -5;
int32_t t30 = 8945913;
int16_t x126 = INT16_MIN;
int8_t x134 = 38;
uint64_t x147 = 8199200LLU;
static volatile int64_t x148 = INT64_MAX;
static uint16_t x154 = 2249U;
volatile int64_t x156 = INT64_MIN;
volatile int32_t t38 = -74;
int32_t x159 = -1;
int8_t x161 = -20;
volatile int32_t t40 = 19407;
uint16_t x166 = UINT16_MAX;
int32_t t42 = 129037637;
uint32_t x175 = 108312656U;
int32_t t46 = -65391;
int32_t x192 = -1;
int32_t x197 = -1;
int64_t x198 = -1LL;
int64_t x199 = -1LL;
int32_t x200 = -14782206;
int32_t t49 = 1;
static volatile int32_t t50 = 195;
static uint64_t x205 = UINT64_MAX;
static volatile int32_t x208 = -703099298;
int8_t x212 = INT8_MAX;
int64_t x228 = INT64_MIN;
int32_t x229 = INT32_MIN;
int64_t x233 = -519LL;
static uint64_t x243 = UINT64_MAX;
volatile uint16_t x244 = UINT16_MAX;
uint8_t x256 = UINT8_MAX;
volatile int32_t x263 = -3658821;
static int64_t x264 = INT64_MIN;
int32_t t65 = 255881;
int8_t x278 = INT8_MIN;
static volatile int64_t x281 = -1LL;
uint16_t x282 = UINT16_MAX;
volatile uint8_t x283 = 60U;
volatile int64_t x284 = -1LL;
static int32_t x290 = -1;
int64_t x292 = 10677801382071462LL;
static int32_t t72 = 3828772;
int16_t x296 = INT16_MIN;
uint64_t x301 = 1LLU;
int64_t x304 = 31333477560LL;
volatile int8_t x311 = 1;
uint16_t x324 = 56U;
int8_t x328 = -3;
int32_t t81 = -31690509;
int64_t x335 = -1LL;
uint16_t x337 = UINT16_MAX;
int32_t x357 = 4379;
uint64_t x358 = 2626LLU;
static volatile uint16_t x379 = 6814U;
static uint32_t x382 = 1616216603U;
int32_t t94 = 22838155;
static int64_t x386 = INT64_MAX;
int32_t x387 = -1;
int8_t x391 = -61;
uint32_t x392 = UINT32_MAX;
int64_t x393 = INT64_MIN;
int32_t x395 = INT32_MIN;
int16_t x403 = INT16_MAX;
uint16_t x409 = 2931U;
volatile int8_t x410 = INT8_MIN;
int16_t x414 = INT16_MAX;
volatile uint32_t x420 = UINT32_MAX;
static int8_t x434 = -1;
uint8_t x435 = 21U;
uint32_t x460 = UINT32_MAX;
volatile int64_t x463 = INT64_MIN;
int8_t x465 = INT8_MIN;
static volatile int8_t x469 = INT8_MIN;
volatile int16_t x470 = INT16_MIN;
static uint64_t x484 = UINT64_MAX;
uint16_t x487 = 0U;
volatile int32_t t120 = 121220876;
int32_t t121 = 532402045;
volatile int8_t x493 = INT8_MIN;
int64_t x496 = -853182125279855444LL;
int16_t x497 = 1333;
uint64_t x498 = UINT64_MAX;
int16_t x511 = INT16_MAX;
uint64_t x512 = 1LLU;
int32_t x517 = -3551109;
static int64_t x519 = 329920295756511LL;
int32_t t130 = -358353;
static int64_t x529 = 383257876716415LL;
int32_t t131 = -1681900;
int32_t x533 = 106400;
int64_t x535 = 0LL;
static volatile int32_t t133 = 5229;
volatile int16_t x542 = -1;
uint64_t x545 = 23406414477240LLU;
static uint32_t x551 = 7U;
uint64_t x554 = 4811306662121LLU;
int8_t x558 = INT8_MAX;
volatile int32_t t139 = 2616;
int32_t t140 = -6246492;
volatile uint8_t x570 = 36U;
int64_t x575 = 7646352347927590LL;
uint32_t x579 = UINT32_MAX;
int64_t x580 = -1LL;
uint32_t x583 = UINT32_MAX;
uint64_t x588 = UINT64_MAX;
volatile uint16_t x607 = 4U;
int8_t x615 = INT8_MIN;
int64_t x617 = INT64_MIN;
volatile int32_t x618 = INT32_MAX;
static uint16_t x623 = 29U;
int16_t x629 = 1774;
int8_t x633 = 10;
volatile uint8_t x642 = 13U;
volatile int16_t x652 = 490;
int32_t x659 = -676;
volatile int32_t x661 = INT32_MIN;
int8_t x666 = INT8_MIN;
volatile int8_t x674 = INT8_MIN;
int64_t x679 = 1894535403870009371LL;
uint8_t x688 = 22U;
volatile int32_t t170 = 725999897;
static volatile int8_t x690 = INT8_MIN;
volatile int32_t x691 = INT32_MIN;
int16_t x695 = -1;
volatile int8_t x697 = -4;
int32_t t173 = 9;
int32_t x701 = -1;
static volatile uint32_t x707 = 69862U;
int16_t x708 = 0;
uint64_t x715 = 3676LLU;
int64_t x717 = INT64_MIN;
static uint16_t x718 = UINT16_MAX;
static uint32_t x724 = 945672828U;
uint8_t x728 = 51U;
volatile int32_t x734 = INT32_MAX;
volatile int32_t t181 = 28;
static int16_t x740 = -1;
int16_t x743 = -1;
uint64_t x745 = UINT64_MAX;
static volatile uint32_t x748 = 602567580U;
volatile int32_t x750 = INT32_MIN;
int32_t t187 = -862000052;
uint8_t x769 = 0U;
int16_t x772 = INT16_MAX;
int8_t x773 = INT8_MAX;
static int32_t x776 = INT32_MAX;
volatile int32_t t191 = -973;
int64_t x787 = INT64_MAX;
volatile uint8_t x796 = 1U;
volatile int32_t t196 = 55774790;
volatile int64_t x798 = -1LL;
int16_t x800 = INT16_MIN;
volatile int32_t t199 = -57594;


void f0(void) {
    	int64_t x1 = -1LL;
	volatile uint8_t x2 = 63U;
	uint32_t x3 = 659997323U;
	volatile int32_t t0 = -964004;

    t0 = (((x1<=x2)+x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint64_t x6 = 22LLU;
	static uint64_t x7 = 48632189133LLU;
	volatile int32_t t1 = -1679;

    t1 = (((x5<=x6)+x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 9527974;
	static int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MAX;
	int32_t t2 = 172;

    t2 = (((x9<=x10)+x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static uint64_t x14 = 840242339440LLU;
	static uint32_t x15 = 145088762U;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 708149;

    t3 = (((x13<=x14)+x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int16_t x18 = -34;
	volatile int16_t x19 = -1;
	static uint16_t x20 = 1044U;
	static volatile int32_t t4 = 27667;

    t4 = (((x17<=x18)+x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 15U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -8023;

    t5 = (((x21<=x22)+x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 12752U;
	int32_t x26 = 24292285;
	int32_t x27 = INT32_MIN;

    t6 = (((x25<=x26)+x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = INT16_MIN;
	static uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 7193808;

    t7 = (((x29<=x30)+x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 54U;
	static uint64_t x34 = 22436868LLU;
	uint64_t x35 = 4546089446163428916LLU;
	uint8_t x36 = 0U;
	volatile int32_t t8 = 6819314;

    t8 = (((x33<=x34)+x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 58LL;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	int32_t t9 = 21517174;

    t9 = (((x37<=x38)+x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	static uint16_t x42 = 8446U;
	volatile uint16_t x43 = 210U;
	static volatile int32_t t10 = -47960;

    t10 = (((x41<=x42)+x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x47 = 2U;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -474073;

    t11 = (((x45<=x46)+x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x49 = 18806LL;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;

    t12 = (((x49<=x50)+x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 96309;
	int64_t x54 = INT64_MAX;
	static uint8_t x55 = 0U;
	static uint8_t x56 = UINT8_MAX;
	static volatile int32_t t13 = 6;

    t13 = (((x53<=x54)+x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 3U;
	volatile int32_t x59 = INT32_MAX;
	volatile int64_t x60 = -3759LL;
	int32_t t14 = -1221;

    t14 = (((x57<=x58)+x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MIN;
	static int16_t x62 = INT16_MAX;
	static int16_t x63 = INT16_MIN;
	volatile int32_t t15 = 110727831;

    t15 = (((x61<=x62)+x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = -2611;
	static volatile uint64_t x68 = 781028795621LLU;

    t16 = (((x65<=x66)+x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	static int64_t x72 = INT64_MIN;
	static volatile int32_t t17 = -303;

    t17 = (((x69<=x70)+x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 15782133;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = -1;
	volatile int32_t t18 = -442;

    t18 = (((x73<=x74)+x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 378335741815LLU;
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = 98954036;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -19506;

    t19 = (((x77<=x78)+x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = -6;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = INT64_MIN;

    t20 = (((x81<=x82)+x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;

    t21 = (((x85<=x86)+x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 66U;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -413357234;

    t22 = (((x89<=x90)+x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -877096764080958745LL;
	int16_t x96 = -4742;
	static volatile int32_t t23 = -7749;

    t23 = (((x93<=x94)+x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x99 = INT16_MIN;
	uint8_t x100 = 0U;

    t24 = (((x97<=x98)+x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x103 = -1LL;
	int8_t x104 = -1;
	volatile int32_t t25 = -91;

    t25 = (((x101<=x102)+x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 8531;
	uint64_t x106 = UINT64_MAX;
	uint64_t x107 = 5514829LLU;
	volatile int32_t t26 = 460250;

    t26 = (((x105<=x106)+x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 203U;
	int8_t x112 = -1;
	int32_t t27 = 22654;

    t27 = (((x109<=x110)+x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 2;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 2;

    t28 = (((x113<=x114)+x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MIN;
	int64_t x120 = 1109LL;
	int32_t t29 = -47;

    t29 = (((x117<=x118)+x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -7779;
	int8_t x122 = -1;
	static int8_t x123 = INT8_MAX;
	static int32_t x124 = -1;

    t30 = (((x121<=x122)+x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	int16_t x127 = 7211;
	static int64_t x128 = -1LL;
	int32_t t31 = -362577;

    t31 = (((x125<=x126)+x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = UINT64_MAX;
	int8_t x130 = 2;
	int16_t x131 = -79;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 247;

    t32 = (((x129<=x130)+x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 5218LL;
	uint64_t x135 = 8197258962728726651LLU;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -26;

    t33 = (((x133<=x134)+x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MIN;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	int8_t x140 = 3;
	int32_t t34 = 39971198;

    t34 = (((x137<=x138)+x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -841LL;
	uint64_t x142 = UINT64_MAX;
	volatile uint16_t x143 = 63U;
	static int32_t x144 = -1;
	int32_t t35 = 4156604;

    t35 = (((x141<=x142)+x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MAX;
	int32_t t36 = 0;

    t36 = (((x145<=x146)+x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	volatile uint16_t x150 = 3U;
	int8_t x151 = -6;
	volatile int32_t x152 = INT32_MIN;
	static int32_t t37 = 141225940;

    t37 = (((x149<=x150)+x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint16_t x155 = UINT16_MAX;

    t38 = (((x153<=x154)+x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 119566464LLU;
	static int16_t x158 = 6;
	int8_t x160 = -1;
	volatile int32_t t39 = -243867;

    t39 = (((x157<=x158)+x159)!=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = INT16_MAX;
	uint64_t x163 = 18172197LLU;
	int8_t x164 = -1;

    t40 = (((x161<=x162)+x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = UINT32_MAX;
	int16_t x167 = -1;
	int16_t x168 = -2;
	volatile int32_t t41 = 0;

    t41 = (((x165<=x166)+x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 57U;
	int8_t x170 = -19;
	int64_t x171 = 450443547LL;
	static int64_t x172 = -3340620525937761LL;

    t42 = (((x169<=x170)+x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 6671639520324LL;
	uint8_t x174 = UINT8_MAX;
	int8_t x176 = INT8_MIN;
	static int32_t t43 = 2;

    t43 = (((x173<=x174)+x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	static int8_t x178 = 0;
	int64_t x179 = -1LL;
	volatile int32_t x180 = INT32_MAX;
	int32_t t44 = 5954;

    t44 = (((x177<=x178)+x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 6144859923LL;
	static int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 120338;

    t45 = (((x181<=x182)+x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 52U;
	int64_t x187 = INT64_MIN;
	static uint8_t x188 = UINT8_MAX;

    t46 = (((x185<=x186)+x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 30863335;
	uint32_t x190 = 3U;
	int64_t x191 = INT64_MIN;
	int32_t t47 = 1111;

    t47 = (((x189<=x190)+x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	static int32_t x194 = -1;
	static int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = -33921;

    t48 = (((x193<=x194)+x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    

    t49 = (((x197<=x198)+x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 1951U;
	volatile uint64_t x202 = UINT64_MAX;
	volatile uint8_t x203 = 28U;
	int16_t x204 = -1;

    t50 = (((x201<=x202)+x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = -174;
	volatile int16_t x207 = -22;
	volatile int32_t t51 = 106;

    t51 = (((x205<=x206)+x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	static int64_t x211 = -1LL;
	int32_t t52 = -87016466;

    t52 = (((x209<=x210)+x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MAX;
	volatile int32_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 2;

    t53 = (((x213<=x214)+x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -394;
	uint8_t x218 = 46U;
	static volatile int8_t x219 = -1;
	uint64_t x220 = 5217963616553418LLU;
	volatile int32_t t54 = 49746491;

    t54 = (((x217<=x218)+x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = INT32_MAX;
	int32_t x222 = 3129;
	int16_t x223 = -143;
	int16_t x224 = 23;
	volatile int32_t t55 = 6211311;

    t55 = (((x221<=x222)+x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	volatile int16_t x226 = -1180;
	int64_t x227 = INT64_MAX;
	int32_t t56 = -260941444;

    t56 = (((x225<=x226)+x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x230 = 12;
	volatile int8_t x231 = -44;
	static int32_t x232 = -1;
	volatile int32_t t57 = 103548;

    t57 = (((x229<=x230)+x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = -1;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 13U;
	volatile int32_t t58 = 5543211;

    t58 = (((x233<=x234)+x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	static int32_t x240 = INT32_MIN;
	static int32_t t59 = -152975;

    t59 = (((x237<=x238)+x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x241 = -1;
	int64_t x242 = 40878468367984LL;
	static int32_t t60 = 7829050;

    t60 = (((x241<=x242)+x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 183U;
	static volatile uint64_t x246 = UINT64_MAX;
	int32_t x247 = 100787;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 43600296;

    t61 = (((x245<=x246)+x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = -11689524;
	volatile int32_t t62 = -235975088;

    t62 = (((x249<=x250)+x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MAX;
	int16_t x255 = -13594;
	int32_t t63 = 0;

    t63 = (((x253<=x254)+x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	static int32_t x258 = INT32_MIN;
	static uint32_t x259 = 71912890U;
	static volatile int16_t x260 = -1;
	static int32_t t64 = -1;

    t64 = (((x257<=x258)+x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -396239;
	int8_t x262 = 1;

    t65 = (((x261<=x262)+x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MIN;
	int64_t x266 = -2974327725LL;
	uint64_t x267 = 121174LLU;
	volatile uint32_t x268 = 7U;
	volatile int32_t t66 = -36881;

    t66 = (((x265<=x266)+x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 80U;
	uint32_t x270 = 971081999U;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 64683473;

    t67 = (((x269<=x270)+x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MIN;
	volatile int16_t x274 = -1;
	static int16_t x275 = -1;
	int64_t x276 = INT64_MAX;
	int32_t t68 = -6967;

    t68 = (((x273<=x274)+x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -57775LL;
	volatile int32_t t69 = -1526;

    t69 = (((x277<=x278)+x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t t70 = 82041765;

    t70 = (((x281<=x282)+x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 122661U;
	int32_t x286 = INT32_MAX;
	int8_t x287 = -1;
	int64_t x288 = -1LL;
	int32_t t71 = -159;

    t71 = (((x285<=x286)+x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int16_t x291 = -1;

    t72 = (((x289<=x290)+x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	static int32_t t73 = 1725564;

    t73 = (((x293<=x294)+x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	volatile int8_t x298 = INT8_MIN;
	int16_t x299 = 12721;
	int16_t x300 = -1;
	int32_t t74 = 1;

    t74 = (((x297<=x298)+x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = -2918;
	int64_t x303 = 1095245510LL;
	static volatile int32_t t75 = -403298;

    t75 = (((x301<=x302)+x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MIN;
	volatile int64_t x307 = INT64_MIN;
	static int16_t x308 = INT16_MIN;
	static int32_t t76 = 149455;

    t76 = (((x305<=x306)+x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	static int32_t x310 = INT32_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -188609493;

    t77 = (((x309<=x310)+x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	static uint32_t x316 = 25587209U;
	int32_t t78 = -61741;

    t78 = (((x313<=x314)+x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	static int32_t x319 = 84973;
	static uint16_t x320 = 15972U;
	int32_t t79 = 6788661;

    t79 = (((x317<=x318)+x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x321 = 4U;
	static int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MIN;
	static int32_t t80 = -254;

    t80 = (((x321<=x322)+x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int8_t x326 = -33;
	static uint64_t x327 = 4LLU;

    t81 = (((x325<=x326)+x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int32_t x336 = 10414;
	static int32_t t82 = -89852;

    t82 = (((x333<=x334)+x335)!=x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	volatile int32_t x340 = -88523;
	static int32_t t83 = -16040896;

    t83 = (((x337<=x338)+x339)!=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x341 = INT64_MAX;
	uint8_t x342 = 26U;
	static uint8_t x343 = 9U;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t84 = -12;

    t84 = (((x341<=x342)+x343)!=x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = -8367;
	volatile int32_t x346 = INT32_MAX;
	volatile int32_t x347 = INT32_MIN;
	int64_t x348 = -226681LL;
	int32_t t85 = -10;

    t85 = (((x345<=x346)+x347)!=x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = INT8_MIN;
	uint16_t x350 = 52U;
	uint16_t x351 = 66U;
	static int32_t x352 = -1;
	int32_t t86 = -156;

    t86 = (((x349<=x350)+x351)!=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x353 = 5808U;
	volatile int8_t x354 = -8;
	int8_t x355 = -1;
	static uint32_t x356 = UINT32_MAX;
	volatile int32_t t87 = -321923;

    t87 = (((x353<=x354)+x355)!=x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x359 = 1U;
	volatile int16_t x360 = 0;
	volatile int32_t t88 = -306;

    t88 = (((x357<=x358)+x359)!=x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = -1LL;
	int64_t x362 = INT64_MAX;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = 617;
	static int32_t t89 = -156948834;

    t89 = (((x361<=x362)+x363)!=x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x365 = -73;
	uint32_t x366 = 25U;
	int16_t x367 = -15;
	static int16_t x368 = 29;
	int32_t t90 = 5436296;

    t90 = (((x365<=x366)+x367)!=x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	volatile int16_t x370 = -1;
	uint16_t x371 = 0U;
	static volatile int16_t x372 = INT16_MIN;
	volatile int32_t t91 = -110978554;

    t91 = (((x369<=x370)+x371)!=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x373 = 5289U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = -1;
	uint64_t x376 = 2606LLU;
	static volatile int32_t t92 = 212802326;

    t92 = (((x373<=x374)+x375)!=x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = -2;
	static int16_t x378 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	int32_t t93 = 5579407;

    t93 = (((x377<=x378)+x379)!=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = 0;
	static int8_t x383 = -1;
	uint64_t x384 = UINT64_MAX;

    t94 = (((x381<=x382)+x383)!=x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MAX;
	int64_t x388 = 854LL;
	int32_t t95 = -2707;

    t95 = (((x385<=x386)+x387)!=x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	volatile int32_t t96 = 13;

    t96 = (((x389<=x390)+x391)!=x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x394 = INT8_MIN;
	static int32_t x396 = -1;
	volatile int32_t t97 = -13705;

    t97 = (((x393<=x394)+x395)!=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = -5;
	uint8_t x398 = 78U;
	volatile int16_t x399 = 0;
	uint64_t x400 = 55266510692LLU;
	volatile int32_t t98 = -5288;

    t98 = (((x397<=x398)+x399)!=x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x401 = INT32_MIN;
	uint16_t x402 = 1U;
	static int32_t x404 = -1;
	volatile int32_t t99 = -11;

    t99 = (((x401<=x402)+x403)!=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	int64_t x407 = 49545932178LL;
	int16_t x408 = -1;
	volatile int32_t t100 = -23;

    t100 = (((x405<=x406)+x407)!=x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MAX;
	volatile int32_t t101 = -28;

    t101 = (((x409<=x410)+x411)!=x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x413 = UINT16_MAX;
	int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t102 = -480736;

    t102 = (((x413<=x414)+x415)!=x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x417 = INT64_MAX;
	int32_t x418 = -1;
	volatile uint16_t x419 = 2591U;
	int32_t t103 = -18803;

    t103 = (((x417<=x418)+x419)!=x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x421 = 21485U;
	int64_t x422 = INT64_MIN;
	volatile uint64_t x423 = 1305293179843028207LLU;
	int64_t x424 = INT64_MIN;
	int32_t t104 = 651967054;

    t104 = (((x421<=x422)+x423)!=x424);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x425 = -1;
	int64_t x426 = -1LL;
	uint16_t x427 = 2092U;
	int8_t x428 = INT8_MAX;
	int32_t t105 = 89090;

    t105 = (((x425<=x426)+x427)!=x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = -1747;
	int64_t x430 = INT64_MIN;
	int64_t x431 = -3878214105292186LL;
	int8_t x432 = INT8_MIN;
	int32_t t106 = -27680739;

    t106 = (((x429<=x430)+x431)!=x432);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	int64_t x436 = INT64_MIN;
	int32_t t107 = 471;

    t107 = (((x433<=x434)+x435)!=x436);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x437 = -50165121449LL;
	static uint64_t x438 = 22239LLU;
	int32_t x439 = INT32_MIN;
	int8_t x440 = 25;
	int32_t t108 = 22943319;

    t108 = (((x437<=x438)+x439)!=x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = 2;
	int64_t x442 = -1LL;
	int64_t x443 = INT64_MIN;
	static uint8_t x444 = 22U;
	int32_t t109 = 167;

    t109 = (((x441<=x442)+x443)!=x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = INT32_MIN;
	static uint64_t x446 = 1086071070495561792LLU;
	static int32_t x447 = 417083;
	int8_t x448 = 1;
	volatile int32_t t110 = 223;

    t110 = (((x445<=x446)+x447)!=x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x449 = 8;
	int16_t x450 = INT16_MIN;
	int8_t x451 = 11;
	int16_t x452 = INT16_MIN;
	static volatile int32_t t111 = 651;

    t111 = (((x449<=x450)+x451)!=x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	static uint8_t x455 = 5U;
	volatile uint16_t x456 = 1U;
	static volatile int32_t t112 = -106;

    t112 = (((x453<=x454)+x455)!=x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = INT8_MIN;
	volatile uint16_t x458 = 550U;
	static volatile uint64_t x459 = UINT64_MAX;
	int32_t t113 = -38301;

    t113 = (((x457<=x458)+x459)!=x460);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x461 = UINT16_MAX;
	static int32_t x462 = INT32_MAX;
	static int16_t x464 = 1159;
	volatile int32_t t114 = 1201142;

    t114 = (((x461<=x462)+x463)!=x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x466 = -1;
	static int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	volatile int32_t t115 = 2;

    t115 = (((x465<=x466)+x467)!=x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x471 = UINT8_MAX;
	volatile int16_t x472 = 1439;
	volatile int32_t t116 = 279;

    t116 = (((x469<=x470)+x471)!=x472);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x473 = INT64_MIN;
	volatile int64_t x474 = INT64_MAX;
	int32_t x475 = 15;
	int16_t x476 = -19;
	volatile int32_t t117 = -612682954;

    t117 = (((x473<=x474)+x475)!=x476);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x477 = -1327;
	int32_t x478 = INT32_MAX;
	int64_t x479 = -1151471305203933791LL;
	int8_t x480 = INT8_MIN;
	int32_t t118 = 1093728;

    t118 = (((x477<=x478)+x479)!=x480);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = INT16_MIN;
	uint32_t x482 = 47460330U;
	int64_t x483 = -1LL;
	volatile int32_t t119 = 35691;

    t119 = (((x481<=x482)+x483)!=x484);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x485 = -4032;
	static int16_t x486 = INT16_MIN;
	uint8_t x488 = UINT8_MAX;

    t120 = (((x485<=x486)+x487)!=x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = INT8_MAX;
	int32_t x490 = -1;
	static int16_t x491 = -1;
	static int32_t x492 = INT32_MAX;

    t121 = (((x489<=x490)+x491)!=x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x494 = -1;
	static uint8_t x495 = 19U;
	int32_t t122 = 54510;

    t122 = (((x493<=x494)+x495)!=x496);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x499 = INT16_MIN;
	static volatile int8_t x500 = -2;
	int32_t t123 = 385749595;

    t123 = (((x497<=x498)+x499)!=x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x501 = INT8_MIN;
	int64_t x502 = 722LL;
	int16_t x503 = INT16_MIN;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t124 = -123793;

    t124 = (((x501<=x502)+x503)!=x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	uint8_t x507 = 3U;
	int64_t x508 = -7199615LL;
	volatile int32_t t125 = 0;

    t125 = (((x505<=x506)+x507)!=x508);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	int8_t x510 = 0;
	int32_t t126 = -55979076;

    t126 = (((x509<=x510)+x511)!=x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x513 = INT32_MIN;
	uint16_t x514 = 48U;
	int64_t x515 = -55402LL;
	volatile uint32_t x516 = 149U;
	static int32_t t127 = 11;

    t127 = (((x513<=x514)+x515)!=x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x518 = INT32_MAX;
	int16_t x520 = -1;
	int32_t t128 = -2844926;

    t128 = (((x517<=x518)+x519)!=x520);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x521 = 1790U;
	volatile uint32_t x522 = 77185U;
	volatile int16_t x523 = -1;
	uint64_t x524 = 1532LLU;
	static volatile int32_t t129 = 13389;

    t129 = (((x521<=x522)+x523)!=x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x525 = 2;
	int32_t x526 = -1;
	volatile uint8_t x527 = 0U;
	int64_t x528 = 5171261182LL;

    t130 = (((x525<=x526)+x527)!=x528);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x530 = 798724094;
	int8_t x531 = 1;
	static int32_t x532 = -1;

    t131 = (((x529<=x530)+x531)!=x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x534 = 59141U;
	int16_t x536 = INT16_MIN;
	int32_t t132 = -524324;

    t132 = (((x533<=x534)+x535)!=x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = INT16_MAX;
	volatile int16_t x538 = INT16_MAX;
	static int64_t x539 = -12635737645LL;
	int64_t x540 = INT64_MIN;

    t133 = (((x537<=x538)+x539)!=x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x541 = -6;
	static int8_t x543 = INT8_MAX;
	static volatile uint32_t x544 = 481U;
	volatile int32_t t134 = -21;

    t134 = (((x541<=x542)+x543)!=x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x546 = INT32_MIN;
	static uint8_t x547 = 2U;
	int16_t x548 = INT16_MIN;
	int32_t t135 = 375;

    t135 = (((x545<=x546)+x547)!=x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x549 = -10LL;
	volatile uint16_t x550 = 15715U;
	uint16_t x552 = 13182U;
	volatile int32_t t136 = -69;

    t136 = (((x549<=x550)+x551)!=x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x553 = UINT64_MAX;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MIN;
	volatile int32_t t137 = -3;

    t137 = (((x553<=x554)+x555)!=x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = -118289412;
	uint64_t x559 = 108449112LLU;
	static int16_t x560 = INT16_MIN;
	int32_t t138 = 24777025;

    t138 = (((x557<=x558)+x559)!=x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MAX;
	volatile int32_t x563 = -1938537;
	int8_t x564 = 1;

    t139 = (((x561<=x562)+x563)!=x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x565 = 3U;
	uint32_t x566 = 4616U;
	uint16_t x567 = UINT16_MAX;
	uint64_t x568 = 518309875798598LLU;

    t140 = (((x565<=x566)+x567)!=x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int64_t x571 = -1LL;
	volatile int32_t x572 = 9240;
	volatile int32_t t141 = -71737;

    t141 = (((x569<=x570)+x571)!=x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x573 = -1;
	int16_t x574 = 1;
	uint8_t x576 = 2U;
	int32_t t142 = 321106501;

    t142 = (((x573<=x574)+x575)!=x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x577 = -21;
	int32_t x578 = INT32_MIN;
	volatile int32_t t143 = -83;

    t143 = (((x577<=x578)+x579)!=x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x581 = 47;
	uint8_t x582 = 2U;
	int8_t x584 = -1;
	static int32_t t144 = 130572507;

    t144 = (((x581<=x582)+x583)!=x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = -1;
	int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MIN;
	volatile int32_t t145 = 636;

    t145 = (((x585<=x586)+x587)!=x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = INT32_MIN;
	volatile int8_t x590 = INT8_MAX;
	uint32_t x591 = 28U;
	int64_t x592 = INT64_MIN;
	volatile int32_t t146 = 83341;

    t146 = (((x589<=x590)+x591)!=x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x593 = 5033432215LLU;
	int32_t x594 = -1;
	volatile int64_t x595 = INT64_MIN;
	uint16_t x596 = 1U;
	int32_t t147 = 1;

    t147 = (((x593<=x594)+x595)!=x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x597 = INT64_MAX;
	static volatile uint8_t x598 = UINT8_MAX;
	static uint32_t x599 = UINT32_MAX;
	static int64_t x600 = -1LL;
	int32_t t148 = 368377983;

    t148 = (((x597<=x598)+x599)!=x600);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x602 = -1;
	int32_t x603 = INT32_MIN;
	static uint8_t x604 = 15U;
	int32_t t149 = 0;

    t149 = (((x601<=x602)+x603)!=x604);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x605 = INT64_MIN;
	volatile uint8_t x606 = 0U;
	int64_t x608 = -2306854135LL;
	volatile int32_t t150 = 434;

    t150 = (((x605<=x606)+x607)!=x608);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x609 = 3960173253266521LL;
	uint8_t x610 = 0U;
	static int16_t x611 = INT16_MAX;
	static uint16_t x612 = UINT16_MAX;
	volatile int32_t t151 = -169;

    t151 = (((x609<=x610)+x611)!=x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x613 = -7;
	volatile int64_t x614 = -68360332240523464LL;
	volatile int8_t x616 = 0;
	static volatile int32_t t152 = 4;

    t152 = (((x613<=x614)+x615)!=x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x619 = 1016719;
	int16_t x620 = -1;
	int32_t t153 = 150;

    t153 = (((x617<=x618)+x619)!=x620);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x621 = -1;
	int8_t x622 = -2;
	int32_t x624 = -1;
	int32_t t154 = 106;

    t154 = (((x621<=x622)+x623)!=x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x625 = -17903;
	int64_t x626 = -1LL;
	int8_t x627 = INT8_MAX;
	uint16_t x628 = 4990U;
	volatile int32_t t155 = 243926;

    t155 = (((x625<=x626)+x627)!=x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x630 = INT32_MIN;
	static int16_t x631 = INT16_MIN;
	int8_t x632 = INT8_MIN;
	static volatile int32_t t156 = 482389106;

    t156 = (((x629<=x630)+x631)!=x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x634 = 441LLU;
	volatile int32_t x635 = 488560;
	static uint8_t x636 = 0U;
	int32_t t157 = -2;

    t157 = (((x633<=x634)+x635)!=x636);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x637 = 3665;
	volatile int32_t x638 = 376058;
	int32_t x639 = INT32_MIN;
	static uint16_t x640 = 43U;
	int32_t t158 = -19676178;

    t158 = (((x637<=x638)+x639)!=x640);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x641 = 548;
	uint16_t x643 = 12U;
	volatile uint64_t x644 = 43693796832121618LLU;
	volatile int32_t t159 = 18;

    t159 = (((x641<=x642)+x643)!=x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x645 = 2796U;
	static uint64_t x646 = 50LLU;
	int32_t x647 = INT32_MIN;
	int32_t x648 = INT32_MIN;
	volatile int32_t t160 = -5;

    t160 = (((x645<=x646)+x647)!=x648);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x649 = -1LL;
	int64_t x650 = -3181LL;
	static int16_t x651 = -1;
	int32_t t161 = -10204;

    t161 = (((x649<=x650)+x651)!=x652);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x653 = INT8_MIN;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 70322750089670609LLU;
	volatile int8_t x656 = INT8_MIN;
	volatile int32_t t162 = 4;

    t162 = (((x653<=x654)+x655)!=x656);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x657 = 2U;
	uint8_t x658 = UINT8_MAX;
	int32_t x660 = INT32_MIN;
	static int32_t t163 = -84;

    t163 = (((x657<=x658)+x659)!=x660);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x662 = 1;
	uint64_t x663 = 6LLU;
	int64_t x664 = -84238159039LL;
	int32_t t164 = 2561030;

    t164 = (((x661<=x662)+x663)!=x664);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x665 = 1890186U;
	int32_t x667 = -156;
	int8_t x668 = -1;
	int32_t t165 = -109161;

    t165 = (((x665<=x666)+x667)!=x668);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x669 = -1LL;
	int16_t x670 = INT16_MAX;
	uint32_t x671 = UINT32_MAX;
	int8_t x672 = INT8_MIN;
	static int32_t t166 = 68792;

    t166 = (((x669<=x670)+x671)!=x672);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x673 = INT32_MAX;
	int16_t x675 = -1;
	int32_t x676 = -2240779;
	int32_t t167 = 59;

    t167 = (((x673<=x674)+x675)!=x676);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x677 = 0;
	int32_t x678 = 0;
	uint32_t x680 = 27509U;
	static volatile int32_t t168 = 53;

    t168 = (((x677<=x678)+x679)!=x680);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x681 = -261341070513426LL;
	uint16_t x682 = 303U;
	static int16_t x683 = INT16_MIN;
	int32_t x684 = INT32_MAX;
	static int32_t t169 = 606;

    t169 = (((x681<=x682)+x683)!=x684);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x685 = 1U;
	int32_t x686 = INT32_MIN;
	uint16_t x687 = UINT16_MAX;

    t170 = (((x685<=x686)+x687)!=x688);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x689 = UINT16_MAX;
	static uint16_t x692 = 3U;
	static int32_t t171 = 8;

    t171 = (((x689<=x690)+x691)!=x692);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x693 = 55U;
	volatile int16_t x694 = 96;
	volatile int64_t x696 = INT64_MAX;
	volatile int32_t t172 = 3001856;

    t172 = (((x693<=x694)+x695)!=x696);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x698 = INT8_MIN;
	uint8_t x699 = 3U;
	int32_t x700 = INT32_MIN;

    t173 = (((x697<=x698)+x699)!=x700);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x702 = INT8_MIN;
	int32_t x703 = INT32_MAX;
	uint16_t x704 = 67U;
	int32_t t174 = -5;

    t174 = (((x701<=x702)+x703)!=x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x705 = -1;
	uint32_t x706 = 42U;
	static volatile int32_t t175 = -383;

    t175 = (((x705<=x706)+x707)!=x708);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x713 = 20;
	static volatile uint32_t x714 = 459806229U;
	int8_t x716 = INT8_MIN;
	volatile int32_t t176 = 10;

    t176 = (((x713<=x714)+x715)!=x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x719 = 1U;
	uint32_t x720 = 322681U;
	int32_t t177 = -549;

    t177 = (((x717<=x718)+x719)!=x720);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x721 = INT8_MAX;
	volatile int16_t x722 = -1;
	uint32_t x723 = UINT32_MAX;
	volatile int32_t t178 = 70;

    t178 = (((x721<=x722)+x723)!=x724);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x725 = UINT64_MAX;
	static uint64_t x726 = 402794439LLU;
	static volatile int16_t x727 = INT16_MIN;
	volatile int32_t t179 = 193903338;

    t179 = (((x725<=x726)+x727)!=x728);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x729 = 27U;
	int64_t x730 = INT64_MIN;
	volatile int8_t x731 = INT8_MIN;
	static uint64_t x732 = 0LLU;
	volatile int32_t t180 = -1;

    t180 = (((x729<=x730)+x731)!=x732);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x733 = INT64_MIN;
	static int16_t x735 = INT16_MAX;
	volatile uint16_t x736 = 1U;

    t181 = (((x733<=x734)+x735)!=x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x737 = -9;
	int64_t x738 = INT64_MIN;
	int32_t x739 = -920;
	volatile int32_t t182 = -23;

    t182 = (((x737<=x738)+x739)!=x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x741 = INT16_MIN;
	static int32_t x742 = 39;
	int8_t x744 = INT8_MIN;
	volatile int32_t t183 = -26587685;

    t183 = (((x741<=x742)+x743)!=x744);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x746 = 14479U;
	uint8_t x747 = 10U;
	volatile int32_t t184 = -5;

    t184 = (((x745<=x746)+x747)!=x748);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x749 = -14174724LL;
	int16_t x751 = INT16_MIN;
	volatile int64_t x752 = -1LL;
	int32_t t185 = 1177;

    t185 = (((x749<=x750)+x751)!=x752);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x753 = 0U;
	static int16_t x754 = INT16_MIN;
	int64_t x755 = INT64_MIN;
	uint64_t x756 = UINT64_MAX;
	static int32_t t186 = 52343718;

    t186 = (((x753<=x754)+x755)!=x756);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x757 = INT16_MAX;
	static int32_t x758 = INT32_MAX;
	int8_t x759 = INT8_MIN;
	volatile int8_t x760 = INT8_MIN;

    t187 = (((x757<=x758)+x759)!=x760);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x761 = INT64_MAX;
	volatile uint8_t x762 = 87U;
	static int8_t x763 = -1;
	uint16_t x764 = 17U;
	static volatile int32_t t188 = 323755376;

    t188 = (((x761<=x762)+x763)!=x764);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = -1;
	int32_t x766 = -255445894;
	int8_t x767 = INT8_MAX;
	uint32_t x768 = 2937865U;
	volatile int32_t t189 = -86065;

    t189 = (((x765<=x766)+x767)!=x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x770 = INT32_MIN;
	int8_t x771 = -1;
	volatile int32_t t190 = -3179266;

    t190 = (((x769<=x770)+x771)!=x772);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x774 = INT8_MIN;
	int32_t x775 = -1;

    t191 = (((x773<=x774)+x775)!=x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x777 = INT64_MIN;
	int32_t x778 = INT32_MIN;
	volatile uint8_t x779 = 7U;
	uint64_t x780 = 5723597LLU;
	volatile int32_t t192 = 1;

    t192 = (((x777<=x778)+x779)!=x780);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x781 = INT8_MAX;
	int16_t x782 = INT16_MIN;
	int8_t x783 = INT8_MAX;
	uint32_t x784 = 45137383U;
	volatile int32_t t193 = -19532146;

    t193 = (((x781<=x782)+x783)!=x784);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x785 = UINT32_MAX;
	static uint32_t x786 = 3486117U;
	int8_t x788 = INT8_MIN;
	int32_t t194 = -5655566;

    t194 = (((x785<=x786)+x787)!=x788);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x789 = -1;
	static int64_t x790 = 1LL;
	int16_t x791 = 0;
	uint16_t x792 = UINT16_MAX;
	static volatile int32_t t195 = -2504297;

    t195 = (((x789<=x790)+x791)!=x792);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint16_t x794 = 43U;
	static int64_t x795 = INT64_MIN;

    t196 = (((x793<=x794)+x795)!=x796);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x797 = INT32_MIN;
	uint16_t x799 = UINT16_MAX;
	static volatile int32_t t197 = 57465380;

    t197 = (((x797<=x798)+x799)!=x800);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile int16_t x802 = -3514;
	int8_t x803 = INT8_MAX;
	uint16_t x804 = 3112U;
	int32_t t198 = 15;

    t198 = (((x801<=x802)+x803)!=x804);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x805 = -7;
	uint16_t x806 = UINT16_MAX;
	int8_t x807 = -10;
	int16_t x808 = INT16_MIN;

    t199 = (((x805<=x806)+x807)!=x808);

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

