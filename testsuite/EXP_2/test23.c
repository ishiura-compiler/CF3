
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

static int8_t x9 = -1;
uint32_t x22 = UINT32_MAX;
int32_t t7 = 4073;
static uint32_t x46 = UINT32_MAX;
int16_t x61 = INT16_MIN;
volatile int32_t t13 = -1;
static uint64_t x85 = 104LLU;
int32_t t15 = -7378153;
static uint16_t x93 = UINT16_MAX;
static int32_t t17 = -12365836;
volatile int64_t x108 = 15120721953476463LL;
volatile int16_t x117 = -1;
uint8_t x118 = 17U;
int32_t t23 = 410632;
static uint8_t x121 = UINT8_MAX;
uint16_t x122 = UINT16_MAX;
volatile int32_t t24 = 135;
static int16_t x135 = INT16_MIN;
uint64_t x148 = UINT64_MAX;
static int64_t x152 = INT64_MIN;
uint32_t x153 = 287006544U;
int64_t x155 = INT64_MAX;
volatile int8_t x161 = INT8_MIN;
int16_t x168 = 260;
int8_t x171 = INT8_MAX;
uint32_t x177 = 11321473U;
int32_t x179 = 64957;
int32_t t36 = -13530815;
int64_t x189 = 2119263088LL;
static volatile int64_t x190 = -337539582627LL;
int32_t x191 = 128769879;
int16_t x198 = INT16_MIN;
volatile uint16_t x199 = 1045U;
uint16_t x200 = 2U;
static int32_t t40 = 1772;
uint32_t x210 = UINT32_MAX;
int32_t t44 = 400496441;
volatile uint64_t x222 = 30947556LLU;
uint32_t x231 = 3U;
volatile int16_t x237 = INT16_MAX;
volatile uint8_t x238 = 106U;
int64_t x247 = -1LL;
volatile uint8_t x250 = UINT8_MAX;
int8_t x251 = INT8_MIN;
int16_t x252 = 2;
static int8_t x254 = INT8_MIN;
int32_t t52 = 71985124;
static int16_t x269 = 1;
static uint32_t x274 = UINT32_MAX;
int32_t t58 = 8227163;
uint16_t x289 = UINT16_MAX;
static uint64_t x292 = UINT64_MAX;
static volatile int32_t t59 = 9554563;
int64_t x293 = 869286070506873457LL;
int32_t x294 = -1311;
int32_t t60 = 22566450;
int32_t x304 = -1;
static volatile int32_t t63 = -906044;
volatile int16_t x309 = INT16_MIN;
static int16_t x315 = INT16_MIN;
volatile int8_t x334 = -1;
int32_t t71 = 41727192;
int32_t t73 = 184287809;
volatile int32_t t74 = 132358439;
volatile int32_t t77 = 102833963;
int8_t x397 = INT8_MIN;
int8_t x400 = -22;
int32_t t79 = 1;
int32_t x411 = INT32_MIN;
volatile int32_t t80 = -16619605;
int32_t x413 = -14087;
uint32_t x417 = 75621U;
uint32_t x420 = 3U;
int8_t x430 = 1;
int64_t x435 = INT64_MIN;
int64_t x438 = 3934604955393LL;
int16_t x439 = INT16_MIN;
static volatile uint32_t x441 = 9733370U;
int64_t x444 = INT64_MIN;
uint16_t x447 = UINT16_MAX;
volatile int32_t x448 = INT32_MIN;
int32_t t89 = 8;
int64_t x457 = -15679LL;
int64_t x461 = 42LL;
static uint64_t x465 = 179348888LLU;
volatile int64_t x469 = INT64_MIN;
static int64_t x470 = INT64_MIN;
static int32_t x474 = 35081;
volatile int64_t x479 = -1LL;
uint8_t x484 = UINT8_MAX;
volatile uint64_t x486 = 1736950266002LLU;
volatile int8_t x488 = -1;
static volatile int16_t x491 = -1;
static volatile uint16_t x492 = UINT16_MAX;
volatile int64_t x495 = -1LL;
static volatile int32_t t100 = 9382;
int64_t x502 = INT64_MAX;
uint8_t x513 = 0U;
int64_t x514 = 3765836110859942435LL;
int8_t x519 = 0;
int32_t x529 = -14;
volatile int32_t x546 = 466;
uint32_t x548 = 2U;
volatile int32_t t112 = 0;
uint32_t x559 = 4404U;
int8_t x570 = -1;
uint16_t x572 = 1855U;
int32_t t117 = 147;
uint8_t x591 = 1U;
int8_t x592 = INT8_MIN;
int8_t x597 = -33;
volatile int8_t x600 = -1;
int16_t x608 = INT16_MIN;
uint16_t x609 = 6U;
uint8_t x610 = 5U;
volatile uint32_t x615 = 65689245U;
int32_t x617 = -1;
int64_t x623 = -1LL;
uint64_t x626 = UINT64_MAX;
int32_t x628 = INT32_MIN;
static volatile int16_t x633 = -13;
static int32_t x648 = INT32_MAX;
volatile int16_t x655 = 739;
int16_t x673 = INT16_MAX;
int16_t x675 = INT16_MAX;
int8_t x677 = 20;
int32_t x679 = INT32_MAX;
static int32_t x680 = -59420;
uint16_t x690 = 6U;
static volatile int64_t x691 = -4LL;
uint16_t x692 = UINT16_MAX;
volatile int32_t t139 = 0;
volatile uint32_t x693 = 1373U;
volatile int32_t x695 = -13610794;
static volatile int32_t t141 = -11097936;
int8_t x705 = 1;
volatile int32_t x706 = -1;
int8_t x707 = -1;
int32_t x736 = -1;
volatile int32_t t146 = -6911942;
volatile int32_t t147 = -40383764;
uint16_t x751 = UINT16_MAX;
int64_t x756 = INT64_MIN;
uint8_t x759 = 1U;
int32_t x765 = -1;
volatile int16_t x766 = INT16_MIN;
int32_t t153 = -63097;
static int32_t x769 = -1;
int32_t t155 = 74;
int16_t x786 = INT16_MIN;
volatile int32_t t158 = -1478;
volatile int32_t t163 = 1;
int8_t x814 = INT8_MAX;
volatile int8_t x821 = INT8_MIN;
int32_t x824 = -1;
int64_t x831 = -2194772397380LL;
uint32_t x845 = 541704491U;
int32_t t170 = 959110570;
volatile int32_t x853 = -1;
uint16_t x859 = 1U;
volatile int32_t x864 = -1268532;
static int16_t x865 = -1;
volatile uint64_t x867 = UINT64_MAX;
int64_t x869 = INT64_MIN;
int16_t x875 = INT16_MIN;
int32_t t177 = -20;
volatile int16_t x885 = -1;
int32_t t181 = -1;
volatile int32_t t183 = -8037839;
int32_t x913 = 1;
volatile uint8_t x916 = 1U;
int64_t x920 = INT64_MAX;
int16_t x921 = INT16_MIN;
int64_t x934 = 265LL;
int32_t t189 = 36538;
int64_t x937 = -1571156783416099LL;
int32_t x950 = -64936652;
volatile int8_t x951 = INT8_MIN;
volatile uint16_t x960 = UINT16_MAX;
static int32_t x967 = INT32_MIN;
static int8_t x969 = 15;
static uint8_t x970 = UINT8_MAX;
static int8_t x978 = INT8_MIN;
static volatile int32_t t199 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int64_t x2 = INT64_MIN;
	static uint32_t x3 = 153325U;
	int32_t x4 = 8;
	volatile int32_t t0 = -58977;

    t0 = ((x1-(x2+x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -13;
	int8_t x6 = -1;
	uint64_t x7 = 1013400180315785LLU;
	static volatile int8_t x8 = -1;
	volatile int32_t t1 = 5342342;

    t1 = ((x5-(x6+x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	int16_t x11 = 172;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = 806988;

    t2 = ((x9-(x10+x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = -7266LL;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 18U;
	int64_t x20 = 4004566795210655535LL;
	static int32_t t3 = 7224501;

    t3 = ((x17-(x18+x19))>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x21 = 19LL;
	volatile int32_t x23 = INT32_MIN;
	volatile int16_t x24 = INT16_MAX;
	static int32_t t4 = -8653855;

    t4 = ((x21-(x22+x23))>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = -5;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = -1;
	uint8_t x28 = 1U;
	static int32_t t5 = 180;

    t5 = ((x25-(x26+x27))>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = -1;
	int8_t x34 = INT8_MIN;
	uint8_t x35 = 0U;
	volatile uint8_t x36 = 7U;
	static volatile int32_t t6 = -721;

    t6 = ((x33-(x34+x35))>x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x37 = -1;
	static uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MAX;
	volatile int16_t x40 = -1;

    t7 = ((x37-(x38+x39))>x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = -39;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 1;
	int32_t t8 = -7;

    t8 = ((x45-(x46+x47))>x48);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	int64_t x50 = 16701289150813LL;
	uint16_t x51 = UINT16_MAX;
	volatile uint32_t x52 = 6U;
	int32_t t9 = -528;

    t9 = ((x49-(x50+x51))>x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 8U;
	int32_t x55 = INT32_MIN;
	static int32_t x56 = INT32_MIN;
	int32_t t10 = 126;

    t10 = ((x53-(x54+x55))>x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x57 = 273U;
	int8_t x58 = 52;
	static int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	volatile int32_t t11 = -1;

    t11 = ((x57-(x58+x59))>x60);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x62 = INT64_MIN;
	static uint64_t x63 = 16552596204279859LLU;
	static volatile uint8_t x64 = 6U;
	int32_t t12 = 97466960;

    t12 = ((x61-(x62+x63))>x64);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x69 = 271U;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MAX;

    t13 = ((x69-(x70+x71))>x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = -1;
	uint16_t x78 = 0U;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MAX;
	static volatile int32_t t14 = 6;

    t14 = ((x77-(x78+x79))>x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x86 = INT16_MAX;
	int8_t x87 = -1;
	volatile int64_t x88 = -1LL;

    t15 = ((x85-(x86+x87))>x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	uint8_t x91 = UINT8_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t16 = 4;

    t16 = ((x89-(x90+x91))>x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x94 = -1;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;

    t17 = ((x93-(x94+x95))>x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x97 = 11U;
	uint8_t x98 = 9U;
	int16_t x99 = -1;
	static int16_t x100 = -1440;
	volatile int32_t t18 = -32230288;

    t18 = ((x97-(x98+x99))>x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MIN;
	static int64_t x103 = 413149LL;
	int16_t x104 = INT16_MIN;
	volatile int32_t t19 = -26711;

    t19 = ((x101-(x102+x103))>x104);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = 8;
	volatile uint16_t x106 = 263U;
	int64_t x107 = INT64_MIN;
	int32_t t20 = -1;

    t20 = ((x105-(x106+x107))>x108);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 221U;
	int32_t x112 = INT32_MIN;
	int32_t t21 = 17;

    t21 = ((x109-(x110+x111))>x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = 61;
	uint16_t x114 = 18U;
	static volatile uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 4850746114500783090LLU;
	volatile int32_t t22 = -71658786;

    t22 = ((x113-(x114+x115))>x116);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x119 = 93784LLU;
	uint64_t x120 = UINT64_MAX;

    t23 = ((x117-(x118+x119))>x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x123 = UINT16_MAX;
	uint64_t x124 = 8150984975LLU;

    t24 = ((x121-(x122+x123))>x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x129 = UINT64_MAX;
	static uint64_t x130 = 7LLU;
	volatile int8_t x131 = INT8_MIN;
	volatile int64_t x132 = INT64_MIN;
	int32_t t25 = 146446730;

    t25 = ((x129-(x130+x131))>x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x133 = 1U;
	static int64_t x134 = 3768103844267433531LL;
	int32_t x136 = -10480757;
	int32_t t26 = -5129;

    t26 = ((x133-(x134+x135))>x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = -1;
	int8_t x142 = INT8_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	int8_t x144 = -1;
	static int32_t t27 = 4;

    t27 = ((x141-(x142+x143))>x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x145 = 10LLU;
	volatile uint32_t x146 = 2U;
	uint64_t x147 = 287009579509301043LLU;
	volatile int32_t t28 = 426990298;

    t28 = ((x145-(x146+x147))>x148);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x149 = INT16_MAX;
	static int16_t x150 = INT16_MIN;
	uint8_t x151 = 6U;
	int32_t t29 = 66930;

    t29 = ((x149-(x150+x151))>x152);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x154 = -1;
	int16_t x156 = -1;
	static int32_t t30 = 7;

    t30 = ((x153-(x154+x155))>x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x162 = 7U;
	int16_t x163 = -14576;
	int64_t x164 = INT64_MAX;
	volatile int32_t t31 = -206674;

    t31 = ((x161-(x162+x163))>x164);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = 40;
	int8_t x166 = -3;
	int8_t x167 = -1;
	int32_t t32 = 1006;

    t32 = ((x165-(x166+x167))>x168);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = 2915U;
	volatile int64_t x170 = 31LL;
	volatile int16_t x172 = -6;
	volatile int32_t t33 = 5;

    t33 = ((x169-(x170+x171))>x172);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MAX;
	volatile int32_t x176 = 264377836;
	int32_t t34 = 5;

    t34 = ((x173-(x174+x175))>x176);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x178 = INT8_MIN;
	volatile uint64_t x180 = 3350235945488728LLU;
	int32_t t35 = 769169;

    t35 = ((x177-(x178+x179))>x180);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x181 = -1;
	uint64_t x182 = 8LLU;
	uint64_t x183 = 0LLU;
	int32_t x184 = 22;

    t36 = ((x181-(x182+x183))>x184);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x192 = 7;
	volatile int32_t t37 = 17259094;

    t37 = ((x189-(x190+x191))>x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x193 = INT8_MIN;
	volatile int64_t x194 = INT64_MAX;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static int32_t t38 = 189952049;

    t38 = ((x193-(x194+x195))>x196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x197 = INT64_MIN;
	static int32_t t39 = 16231171;

    t39 = ((x197-(x198+x199))>x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x201 = 361U;
	int64_t x202 = -1LL;
	int8_t x203 = INT8_MIN;
	volatile int16_t x204 = INT16_MIN;

    t40 = ((x201-(x202+x203))>x204);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = UINT64_MAX;
	volatile uint32_t x207 = 1944272458U;
	static uint64_t x208 = UINT64_MAX;
	int32_t t41 = -16856;

    t41 = ((x205-(x206+x207))>x208);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x209 = INT32_MAX;
	static int8_t x211 = 6;
	int8_t x212 = INT8_MIN;
	int32_t t42 = 908;

    t42 = ((x209-(x210+x211))>x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x213 = INT8_MIN;
	uint8_t x214 = UINT8_MAX;
	static int16_t x215 = -1;
	static int64_t x216 = INT64_MIN;
	int32_t t43 = 0;

    t43 = ((x213-(x214+x215))>x216);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x217 = 8428U;
	int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -261729190661785LL;

    t44 = ((x217-(x218+x219))>x220);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x221 = INT16_MIN;
	int32_t x223 = -51499188;
	static uint16_t x224 = 12U;
	int32_t t45 = -25159;

    t45 = ((x221-(x222+x223))>x224);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x229 = INT16_MIN;
	uint64_t x230 = 1896LLU;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t46 = -9149908;

    t46 = ((x229-(x230+x231))>x232);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x233 = INT32_MIN;
	int8_t x234 = -36;
	int8_t x235 = 10;
	static int64_t x236 = 7793949094140010LL;
	int32_t t47 = -842737;

    t47 = ((x233-(x234+x235))>x236);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x239 = -1LL;
	static int32_t x240 = -1;
	volatile int32_t t48 = 37;

    t48 = ((x237-(x238+x239))>x240);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x241 = 6U;
	int8_t x242 = INT8_MIN;
	static volatile int8_t x243 = INT8_MAX;
	volatile int32_t x244 = INT32_MIN;
	int32_t t49 = 90;

    t49 = ((x241-(x242+x243))>x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x245 = 2037345408960LL;
	int32_t x246 = -1;
	static volatile int8_t x248 = -1;
	static int32_t t50 = -21167;

    t50 = ((x245-(x246+x247))>x248);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = -569572;
	static int32_t t51 = -26078734;

    t51 = ((x249-(x250+x251))>x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x253 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;

    t52 = ((x253-(x254+x255))>x256);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x257 = -1;
	int8_t x258 = -1;
	int32_t x259 = 628835;
	int32_t x260 = -91725;
	int32_t t53 = 113;

    t53 = ((x257-(x258+x259))>x260);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x261 = 0LL;
	uint8_t x262 = 12U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t54 = -5963452;

    t54 = ((x261-(x262+x263))>x264);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int8_t x272 = -1;
	int32_t t55 = -34909;

    t55 = ((x269-(x270+x271))>x272);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x273 = -1LL;
	volatile int32_t x275 = -1;
	int32_t x276 = INT32_MAX;
	int32_t t56 = 3490638;

    t56 = ((x273-(x274+x275))>x276);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = 0;
	static int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t57 = 25;

    t57 = ((x277-(x278+x279))>x280);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x285 = 2U;
	int32_t x286 = INT32_MAX;
	static int64_t x287 = -1LL;
	uint8_t x288 = UINT8_MAX;

    t58 = ((x285-(x286+x287))>x288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x290 = 10030627U;
	volatile uint16_t x291 = UINT16_MAX;

    t59 = ((x289-(x290+x291))>x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x295 = -1;
	volatile uint64_t x296 = 30LLU;

    t60 = ((x293-(x294+x295))>x296);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x297 = INT64_MAX;
	uint8_t x298 = 5U;
	static uint64_t x299 = 269990654008373LLU;
	int8_t x300 = -8;
	volatile int32_t t61 = 301716485;

    t61 = ((x297-(x298+x299))>x300);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	static uint32_t x303 = UINT32_MAX;
	static int32_t t62 = 25618800;

    t62 = ((x301-(x302+x303))>x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x305 = UINT32_MAX;
	int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	static volatile int64_t x308 = INT64_MIN;

    t63 = ((x305-(x306+x307))>x308);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x310 = 19105U;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 2864U;
	volatile int32_t t64 = -14179515;

    t64 = ((x309-(x310+x311))>x312);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = -29LL;
	int32_t x316 = -6409;
	volatile int32_t t65 = -3700;

    t65 = ((x313-(x314+x315))>x316);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x317 = 220U;
	uint32_t x318 = UINT32_MAX;
	volatile int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t66 = 530809892;

    t66 = ((x317-(x318+x319))>x320);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MAX;
	uint64_t x324 = UINT64_MAX;
	int32_t t67 = -20035;

    t67 = ((x321-(x322+x323))>x324);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x333 = INT64_MIN;
	uint64_t x335 = 37815152LLU;
	volatile int16_t x336 = 385;
	volatile int32_t t68 = 44;

    t68 = ((x333-(x334+x335))>x336);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x337 = INT16_MIN;
	uint16_t x338 = 162U;
	uint16_t x339 = 10U;
	volatile int64_t x340 = INT64_MIN;
	int32_t t69 = -28;

    t69 = ((x337-(x338+x339))>x340);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x349 = 333692493721LLU;
	static int64_t x350 = -1LL;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 7U;
	int32_t t70 = 1711068;

    t70 = ((x349-(x350+x351))>x352);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x353 = -1;
	volatile int32_t x354 = INT32_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;

    t71 = ((x353-(x354+x355))>x356);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x365 = INT16_MAX;
	int8_t x366 = INT8_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile uint8_t x368 = 7U;
	int32_t t72 = 1;

    t72 = ((x365-(x366+x367))>x368);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x369 = INT8_MAX;
	volatile uint64_t x370 = 513LLU;
	volatile int64_t x371 = 13496966665LL;
	int8_t x372 = INT8_MIN;

    t73 = ((x369-(x370+x371))>x372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x377 = 2U;
	volatile int8_t x378 = INT8_MAX;
	int32_t x379 = -1;
	static int8_t x380 = INT8_MIN;

    t74 = ((x377-(x378+x379))>x380);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x381 = 0U;
	uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 1U;
	int64_t x384 = INT64_MIN;
	volatile int32_t t75 = 2;

    t75 = ((x381-(x382+x383))>x384);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	static int32_t x387 = 417769248;
	int8_t x388 = -1;
	int32_t t76 = -32676;

    t76 = ((x385-(x386+x387))>x388);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x389 = 20U;
	static int16_t x390 = INT16_MIN;
	volatile uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 0U;

    t77 = ((x389-(x390+x391))>x392);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x398 = 108U;
	uint64_t x399 = 13691247LLU;
	int32_t t78 = -136776;

    t78 = ((x397-(x398+x399))>x400);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x401 = -3;
	int32_t x402 = INT32_MAX;
	uint32_t x403 = 7U;
	uint32_t x404 = UINT32_MAX;

    t79 = ((x401-(x402+x403))>x404);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x409 = -13;
	volatile int64_t x410 = 494LL;
	volatile int32_t x412 = INT32_MIN;

    t80 = ((x409-(x410+x411))>x412);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x414 = -2;
	int16_t x415 = INT16_MAX;
	static int16_t x416 = INT16_MIN;
	int32_t t81 = 4769;

    t81 = ((x413-(x414+x415))>x416);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x418 = -423528LL;
	int16_t x419 = -1;
	static int32_t t82 = 9;

    t82 = ((x417-(x418+x419))>x420);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x421 = 1935063213U;
	int64_t x422 = 169143449LL;
	int16_t x423 = INT16_MAX;
	static int64_t x424 = INT64_MIN;
	int32_t t83 = -6;

    t83 = ((x421-(x422+x423))>x424);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile int32_t x431 = -2226070;
	int32_t x432 = 1;
	static int32_t t84 = 223;

    t84 = ((x429-(x430+x431))>x432);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x433 = INT64_MIN;
	static volatile int32_t x434 = INT32_MAX;
	int16_t x436 = INT16_MIN;
	int32_t t85 = -52615552;

    t85 = ((x433-(x434+x435))>x436);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x437 = INT8_MAX;
	volatile int64_t x440 = INT64_MIN;
	volatile int32_t t86 = 38;

    t86 = ((x437-(x438+x439))>x440);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x442 = INT32_MAX;
	static int32_t x443 = INT32_MIN;
	static int32_t t87 = 66701103;

    t87 = ((x441-(x442+x443))>x444);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x445 = 910032U;
	volatile int8_t x446 = INT8_MIN;
	int32_t t88 = -208;

    t88 = ((x445-(x446+x447))>x448);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x453 = 1;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	static uint16_t x456 = 0U;

    t89 = ((x453-(x454+x455))>x456);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x458 = -138226564998133964LL;
	int8_t x459 = -1;
	volatile int16_t x460 = -1;
	volatile int32_t t90 = 4205294;

    t90 = ((x457-(x458+x459))>x460);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x462 = 2U;
	int16_t x463 = INT16_MIN;
	int16_t x464 = -7872;
	volatile int32_t t91 = -422;

    t91 = ((x461-(x462+x463))>x464);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x466 = -380286523217LL;
	uint16_t x467 = 1375U;
	static int32_t x468 = INT32_MAX;
	int32_t t92 = -62;

    t92 = ((x465-(x466+x467))>x468);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x471 = 576351384LL;
	int32_t x472 = 303526;
	int32_t t93 = 30493;

    t93 = ((x469-(x470+x471))>x472);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x475 = INT32_MIN;
	static int64_t x476 = -844281008057LL;
	int32_t t94 = 15902;

    t94 = ((x473-(x474+x475))>x476);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x477 = -1LL;
	static int32_t x478 = INT32_MIN;
	volatile uint64_t x480 = 4736368962836LLU;
	volatile int32_t t95 = -110;

    t95 = ((x477-(x478+x479))>x480);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x481 = -1;
	static volatile int32_t x482 = 224196200;
	uint64_t x483 = 56LLU;
	int32_t t96 = -507;

    t96 = ((x481-(x482+x483))>x484);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x485 = 0U;
	static volatile int8_t x487 = -1;
	volatile int32_t t97 = 934671840;

    t97 = ((x485-(x486+x487))>x488);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x489 = 8871705528267059LLU;
	int16_t x490 = 5;
	volatile int32_t t98 = -700251769;

    t98 = ((x489-(x490+x491))>x492);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x493 = INT32_MIN;
	int64_t x494 = -1LL;
	volatile int32_t x496 = -14782;
	volatile int32_t t99 = -1949;

    t99 = ((x493-(x494+x495))>x496);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x497 = INT32_MIN;
	volatile int8_t x498 = -1;
	static int32_t x499 = -1;
	static volatile uint8_t x500 = UINT8_MAX;

    t100 = ((x497-(x498+x499))>x500);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = INT16_MIN;
	int32_t t101 = 742433;

    t101 = ((x501-(x502+x503))>x504);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x505 = -1;
	int8_t x506 = INT8_MIN;
	volatile int64_t x507 = -1LL;
	static int64_t x508 = -1596937746LL;
	volatile int32_t t102 = 11138105;

    t102 = ((x505-(x506+x507))>x508);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x515 = INT8_MAX;
	int64_t x516 = INT64_MIN;
	volatile int32_t t103 = 0;

    t103 = ((x513-(x514+x515))>x516);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x517 = INT16_MAX;
	static int8_t x518 = INT8_MIN;
	uint64_t x520 = 3329239752024LLU;
	volatile int32_t t104 = -37454;

    t104 = ((x517-(x518+x519))>x520);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x521 = UINT64_MAX;
	static uint8_t x522 = 89U;
	int32_t x523 = INT32_MIN;
	int8_t x524 = INT8_MIN;
	volatile int32_t t105 = 1528;

    t105 = ((x521-(x522+x523))>x524);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = -1;
	volatile uint32_t x527 = 278599840U;
	int64_t x528 = INT64_MAX;
	static volatile int32_t t106 = -17;

    t106 = ((x525-(x526+x527))>x528);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x530 = 1001U;
	int16_t x531 = INT16_MAX;
	uint32_t x532 = UINT32_MAX;
	int32_t t107 = -30119;

    t107 = ((x529-(x530+x531))>x532);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x533 = 92U;
	int32_t x534 = -1;
	int64_t x535 = -112747413LL;
	int16_t x536 = 16229;
	static volatile int32_t t108 = 495832;

    t108 = ((x533-(x534+x535))>x536);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x537 = -1;
	int16_t x538 = -1;
	volatile int16_t x539 = INT16_MIN;
	uint16_t x540 = 153U;
	volatile int32_t t109 = 25;

    t109 = ((x537-(x538+x539))>x540);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x541 = -29;
	static int16_t x542 = 3;
	int16_t x543 = -1;
	int16_t x544 = -18;
	volatile int32_t t110 = 8;

    t110 = ((x541-(x542+x543))>x544);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x545 = UINT16_MAX;
	static volatile int8_t x547 = INT8_MIN;
	volatile int32_t t111 = -4155470;

    t111 = ((x545-(x546+x547))>x548);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x553 = INT8_MAX;
	volatile int64_t x554 = INT64_MAX;
	int32_t x555 = -16193615;
	uint32_t x556 = 191U;

    t112 = ((x553-(x554+x555))>x556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x557 = -3;
	uint8_t x558 = 1U;
	int16_t x560 = INT16_MIN;
	int32_t t113 = -1;

    t113 = ((x557-(x558+x559))>x560);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x565 = 1584337925LLU;
	volatile int8_t x566 = -1;
	static int32_t x567 = INT32_MAX;
	volatile int8_t x568 = INT8_MIN;
	int32_t t114 = -46743106;

    t114 = ((x565-(x566+x567))>x568);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x569 = 7127490U;
	volatile int64_t x571 = -1LL;
	static int32_t t115 = -217;

    t115 = ((x569-(x570+x571))>x572);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x581 = 7LLU;
	int8_t x582 = INT8_MIN;
	int16_t x583 = -1;
	static uint8_t x584 = 9U;
	int32_t t116 = 0;

    t116 = ((x581-(x582+x583))>x584);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x586 = 44U;
	uint32_t x587 = UINT32_MAX;
	uint64_t x588 = UINT64_MAX;

    t117 = ((x585-(x586+x587))>x588);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x589 = INT8_MIN;
	static int64_t x590 = 920250780LL;
	static int32_t t118 = 1166;

    t118 = ((x589-(x590+x591))>x592);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x593 = 54181815084LLU;
	uint16_t x594 = UINT16_MAX;
	int16_t x595 = INT16_MIN;
	int16_t x596 = -1;
	int32_t t119 = 10;

    t119 = ((x593-(x594+x595))>x596);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x598 = 97877531514072756LLU;
	uint16_t x599 = 1931U;
	int32_t t120 = 389125514;

    t120 = ((x597-(x598+x599))>x600);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x601 = 4039U;
	volatile uint32_t x602 = 6595157U;
	volatile int16_t x603 = INT16_MAX;
	static uint8_t x604 = 9U;
	volatile int32_t t121 = -176;

    t121 = ((x601-(x602+x603))>x604);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x605 = INT64_MAX;
	int32_t x606 = INT32_MIN;
	static uint64_t x607 = 8219750196815629398LLU;
	int32_t t122 = 1;

    t122 = ((x605-(x606+x607))>x608);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x611 = -1;
	volatile uint32_t x612 = 352798926U;
	int32_t t123 = 43041;

    t123 = ((x609-(x610+x611))>x612);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x613 = -801;
	int32_t x614 = INT32_MAX;
	int8_t x616 = INT8_MIN;
	static int32_t t124 = 143;

    t124 = ((x613-(x614+x615))>x616);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x618 = INT16_MAX;
	uint32_t x619 = UINT32_MAX;
	volatile int32_t x620 = INT32_MAX;
	int32_t t125 = -22271926;

    t125 = ((x617-(x618+x619))>x620);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x621 = -446LL;
	int16_t x622 = INT16_MAX;
	uint32_t x624 = 9664069U;
	volatile int32_t t126 = -19;

    t126 = ((x621-(x622+x623))>x624);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x625 = UINT32_MAX;
	int64_t x627 = INT64_MAX;
	volatile int32_t t127 = 4091;

    t127 = ((x625-(x626+x627))>x628);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x634 = INT16_MIN;
	volatile int8_t x635 = 1;
	static uint64_t x636 = 296392514518997LLU;
	int32_t t128 = -52030;

    t128 = ((x633-(x634+x635))>x636);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MIN;
	int16_t x639 = -384;
	uint32_t x640 = 4U;
	int32_t t129 = 622;

    t129 = ((x637-(x638+x639))>x640);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x641 = -1LL;
	uint16_t x642 = 15U;
	int16_t x643 = INT16_MIN;
	volatile int8_t x644 = INT8_MIN;
	static volatile int32_t t130 = 122251795;

    t130 = ((x641-(x642+x643))>x644);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x645 = 1;
	int16_t x646 = -1;
	volatile int64_t x647 = 504167773354649282LL;
	static volatile int32_t t131 = 10352130;

    t131 = ((x645-(x646+x647))>x648);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x653 = 476U;
	uint64_t x654 = UINT64_MAX;
	int8_t x656 = INT8_MIN;
	int32_t t132 = -177;

    t132 = ((x653-(x654+x655))>x656);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x661 = INT64_MIN;
	int32_t x662 = INT32_MAX;
	uint64_t x663 = 28478950155113370LLU;
	volatile int8_t x664 = INT8_MIN;
	int32_t t133 = 242838;

    t133 = ((x661-(x662+x663))>x664);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x669 = -1;
	int64_t x670 = -94832LL;
	static volatile uint16_t x671 = 181U;
	int16_t x672 = INT16_MAX;
	volatile int32_t t134 = -46438650;

    t134 = ((x669-(x670+x671))>x672);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x674 = 183;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t135 = 2091402;

    t135 = ((x673-(x674+x675))>x676);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x678 = INT16_MIN;
	volatile int32_t t136 = 297755;

    t136 = ((x677-(x678+x679))>x680);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x681 = 11;
	static uint16_t x682 = 2U;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = 29;
	int32_t t137 = 1;

    t137 = ((x681-(x682+x683))>x684);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x685 = 3509U;
	uint32_t x686 = UINT32_MAX;
	uint16_t x687 = 28U;
	volatile uint8_t x688 = 23U;
	volatile int32_t t138 = -368439186;

    t138 = ((x685-(x686+x687))>x688);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x689 = INT64_MAX;

    t139 = ((x689-(x690+x691))>x692);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x694 = UINT16_MAX;
	uint32_t x696 = 81U;
	int32_t t140 = 133703438;

    t140 = ((x693-(x694+x695))>x696);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x697 = 1042731;
	int16_t x698 = -1;
	int16_t x699 = INT16_MIN;
	volatile int32_t x700 = INT32_MAX;

    t141 = ((x697-(x698+x699))>x700);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x708 = INT16_MIN;
	volatile int32_t t142 = 4240;

    t142 = ((x705-(x706+x707))>x708);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x713 = 0LL;
	int64_t x714 = -1LL;
	uint16_t x715 = 20452U;
	int16_t x716 = INT16_MIN;
	volatile int32_t t143 = 353;

    t143 = ((x713-(x714+x715))>x716);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x721 = -1LL;
	uint64_t x722 = UINT64_MAX;
	int64_t x723 = INT64_MAX;
	int16_t x724 = INT16_MIN;
	int32_t t144 = -148861767;

    t144 = ((x721-(x722+x723))>x724);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x725 = -1;
	uint8_t x726 = 47U;
	volatile uint64_t x727 = 42044082381145300LLU;
	volatile int8_t x728 = INT8_MIN;
	int32_t t145 = -3068546;

    t145 = ((x725-(x726+x727))>x728);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x733 = 1LLU;
	int8_t x734 = -1;
	int32_t x735 = INT32_MAX;

    t146 = ((x733-(x734+x735))>x736);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x741 = INT64_MAX;
	static int16_t x742 = 342;
	uint32_t x743 = UINT32_MAX;
	int16_t x744 = INT16_MAX;

    t147 = ((x741-(x742+x743))>x744);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x745 = INT32_MIN;
	uint64_t x746 = 94428916865LLU;
	static int16_t x747 = INT16_MIN;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t148 = 249117;

    t148 = ((x745-(x746+x747))>x748);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x749 = -247;
	uint16_t x750 = 20U;
	int16_t x752 = INT16_MAX;
	int32_t t149 = 279063131;

    t149 = ((x749-(x750+x751))>x752);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x753 = 2U;
	static int8_t x754 = -1;
	int16_t x755 = INT16_MIN;
	static int32_t t150 = 425294;

    t150 = ((x753-(x754+x755))>x756);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x757 = 3U;
	int8_t x758 = -1;
	int8_t x760 = INT8_MIN;
	volatile int32_t t151 = 31584;

    t151 = ((x757-(x758+x759))>x760);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x761 = 31340870742LL;
	uint8_t x762 = 10U;
	int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	int32_t t152 = -6943922;

    t152 = ((x761-(x762+x763))>x764);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x767 = 12;
	static uint16_t x768 = 3U;

    t153 = ((x765-(x766+x767))>x768);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x770 = 3;
	uint32_t x771 = 13U;
	uint32_t x772 = 207088U;
	static int32_t t154 = 22;

    t154 = ((x769-(x770+x771))>x772);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x773 = INT16_MIN;
	int16_t x774 = INT16_MIN;
	int8_t x775 = 0;
	int16_t x776 = -9275;

    t155 = ((x773-(x774+x775))>x776);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x777 = -1;
	uint8_t x778 = 58U;
	static int16_t x779 = INT16_MAX;
	int16_t x780 = -1;
	volatile int32_t t156 = 838825823;

    t156 = ((x777-(x778+x779))>x780);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x781 = -1;
	static uint16_t x782 = 3U;
	uint32_t x783 = 1492U;
	static int32_t x784 = INT32_MIN;
	volatile int32_t t157 = 5079117;

    t157 = ((x781-(x782+x783))>x784);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x785 = 1U;
	volatile uint32_t x787 = UINT32_MAX;
	int64_t x788 = -6383419LL;

    t158 = ((x785-(x786+x787))>x788);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x789 = 5127LL;
	int32_t x790 = -35;
	static int32_t x791 = INT32_MAX;
	static int8_t x792 = -3;
	volatile int32_t t159 = 3;

    t159 = ((x789-(x790+x791))>x792);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x793 = 44;
	volatile int8_t x794 = INT8_MAX;
	int16_t x795 = 8753;
	int32_t x796 = INT32_MIN;
	static volatile int32_t t160 = -42775603;

    t160 = ((x793-(x794+x795))>x796);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x797 = -1077990204026LL;
	int16_t x798 = -974;
	static int8_t x799 = INT8_MAX;
	volatile int8_t x800 = INT8_MIN;
	int32_t t161 = 55;

    t161 = ((x797-(x798+x799))>x800);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x801 = UINT16_MAX;
	int8_t x802 = -25;
	uint32_t x803 = 26860527U;
	int8_t x804 = INT8_MIN;
	static int32_t t162 = 1;

    t162 = ((x801-(x802+x803))>x804);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x805 = INT16_MIN;
	uint32_t x806 = 451617132U;
	uint32_t x807 = 40U;
	int16_t x808 = INT16_MIN;

    t163 = ((x805-(x806+x807))>x808);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x809 = INT16_MIN;
	volatile int8_t x810 = -50;
	int32_t x811 = 1;
	int16_t x812 = 1280;
	static int32_t t164 = 3268179;

    t164 = ((x809-(x810+x811))>x812);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x813 = -1;
	int16_t x815 = 47;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t165 = -767332;

    t165 = ((x813-(x814+x815))>x816);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x822 = 953U;
	int8_t x823 = -1;
	volatile int32_t t166 = -1080;

    t166 = ((x821-(x822+x823))>x824);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x829 = 828LLU;
	volatile uint32_t x830 = 6411U;
	uint16_t x832 = UINT16_MAX;
	static int32_t t167 = -3884838;

    t167 = ((x829-(x830+x831))>x832);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x837 = 6U;
	volatile uint64_t x838 = 517537LLU;
	int64_t x839 = INT64_MIN;
	int64_t x840 = -1LL;
	static volatile int32_t t168 = -8407;

    t168 = ((x837-(x838+x839))>x840);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x841 = UINT8_MAX;
	int16_t x842 = INT16_MAX;
	uint8_t x843 = UINT8_MAX;
	volatile int16_t x844 = -1;
	volatile int32_t t169 = 87460;

    t169 = ((x841-(x842+x843))>x844);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x846 = 1U;
	int8_t x847 = INT8_MAX;
	int32_t x848 = INT32_MIN;

    t170 = ((x845-(x846+x847))>x848);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x849 = INT32_MIN;
	volatile int8_t x850 = INT8_MIN;
	int32_t x851 = -143;
	volatile uint16_t x852 = 45U;
	int32_t t171 = -9013;

    t171 = ((x849-(x850+x851))>x852);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x854 = UINT8_MAX;
	static uint64_t x855 = 63263633LLU;
	int32_t x856 = -763308314;
	volatile int32_t t172 = 10;

    t172 = ((x853-(x854+x855))>x856);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x857 = 39LLU;
	int16_t x858 = INT16_MAX;
	int8_t x860 = INT8_MIN;
	static volatile int32_t t173 = 127;

    t173 = ((x857-(x858+x859))>x860);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x861 = UINT32_MAX;
	static volatile int64_t x862 = -1778LL;
	static volatile int32_t x863 = 243843;
	volatile int32_t t174 = 79146;

    t174 = ((x861-(x862+x863))>x864);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x866 = INT8_MIN;
	int16_t x868 = INT16_MIN;
	static int32_t t175 = 243307815;

    t175 = ((x865-(x866+x867))>x868);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x870 = INT64_MIN;
	volatile uint8_t x871 = 0U;
	volatile int8_t x872 = INT8_MAX;
	int32_t t176 = 140541;

    t176 = ((x869-(x870+x871))>x872);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x873 = INT32_MAX;
	volatile uint64_t x874 = UINT64_MAX;
	volatile int32_t x876 = INT32_MAX;

    t177 = ((x873-(x874+x875))>x876);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x881 = -3;
	int32_t x882 = 123;
	int64_t x883 = INT64_MIN;
	int32_t x884 = INT32_MIN;
	volatile int32_t t178 = 507116734;

    t178 = ((x881-(x882+x883))>x884);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x886 = INT16_MAX;
	int8_t x887 = INT8_MIN;
	static uint8_t x888 = UINT8_MAX;
	static volatile int32_t t179 = 9400;

    t179 = ((x885-(x886+x887))>x888);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x893 = -165;
	int32_t x894 = -1;
	int8_t x895 = -3;
	int16_t x896 = -1;
	volatile int32_t t180 = -207990;

    t180 = ((x893-(x894+x895))>x896);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x901 = -9;
	int64_t x902 = 26LL;
	static uint16_t x903 = UINT16_MAX;
	int8_t x904 = 17;

    t181 = ((x901-(x902+x903))>x904);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x905 = INT16_MAX;
	static int32_t x906 = -1;
	int16_t x907 = -29;
	static uint16_t x908 = 5U;
	int32_t t182 = -235462743;

    t182 = ((x905-(x906+x907))>x908);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x909 = 117335893294LLU;
	volatile int8_t x910 = -45;
	uint8_t x911 = 45U;
	uint8_t x912 = UINT8_MAX;

    t183 = ((x909-(x910+x911))>x912);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x914 = UINT64_MAX;
	volatile int16_t x915 = 273;
	static int32_t t184 = 352648;

    t184 = ((x913-(x914+x915))>x916);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x917 = 107169142981507157LL;
	static uint8_t x918 = 19U;
	int32_t x919 = -1;
	static int32_t t185 = -4020;

    t185 = ((x917-(x918+x919))>x920);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x922 = -1;
	static int8_t x923 = INT8_MAX;
	uint64_t x924 = UINT64_MAX;
	volatile int32_t t186 = -8;

    t186 = ((x921-(x922+x923))>x924);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x925 = INT16_MIN;
	int64_t x926 = 45561257062LL;
	uint32_t x927 = 2911751U;
	uint64_t x928 = UINT64_MAX;
	volatile int32_t t187 = 17487;

    t187 = ((x925-(x926+x927))>x928);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x929 = -293365;
	volatile int8_t x930 = INT8_MIN;
	static int8_t x931 = 14;
	int16_t x932 = INT16_MIN;
	static int32_t t188 = 21;

    t188 = ((x929-(x930+x931))>x932);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x933 = INT8_MAX;
	volatile uint16_t x935 = 6534U;
	volatile int8_t x936 = 25;

    t189 = ((x933-(x934+x935))>x936);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x938 = -1;
	int16_t x939 = INT16_MIN;
	static int8_t x940 = INT8_MIN;
	volatile int32_t t190 = -3156368;

    t190 = ((x937-(x938+x939))>x940);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x941 = 65U;
	uint16_t x942 = 9U;
	static volatile uint32_t x943 = UINT32_MAX;
	uint64_t x944 = 266749374763590LLU;
	int32_t t191 = -3348898;

    t191 = ((x941-(x942+x943))>x944);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x945 = -538552794272009008LL;
	static uint32_t x946 = 28U;
	uint8_t x947 = 0U;
	int8_t x948 = 46;
	int32_t t192 = -96;

    t192 = ((x945-(x946+x947))>x948);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x949 = UINT16_MAX;
	int8_t x952 = -1;
	int32_t t193 = 3315;

    t193 = ((x949-(x950+x951))>x952);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x953 = 43;
	int8_t x954 = -1;
	uint8_t x955 = UINT8_MAX;
	int8_t x956 = INT8_MIN;
	volatile int32_t t194 = -22473094;

    t194 = ((x953-(x954+x955))>x956);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x957 = INT64_MAX;
	uint64_t x958 = 15837975900004LLU;
	static int8_t x959 = INT8_MIN;
	int32_t t195 = -204;

    t195 = ((x957-(x958+x959))>x960);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x965 = -1;
	uint64_t x966 = UINT64_MAX;
	int64_t x968 = 1LL;
	volatile int32_t t196 = 743312;

    t196 = ((x965-(x966+x967))>x968);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x971 = 12060443628710LLU;
	uint8_t x972 = UINT8_MAX;
	int32_t t197 = -6;

    t197 = ((x969-(x970+x971))>x972);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x973 = -24943174LL;
	uint8_t x974 = 101U;
	uint64_t x975 = UINT64_MAX;
	static int64_t x976 = INT64_MAX;
	volatile int32_t t198 = -7;

    t198 = ((x973-(x974+x975))>x976);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x977 = -1LL;
	int16_t x979 = INT16_MIN;
	int8_t x980 = -1;

    t199 = ((x977-(x978+x979))>x980);

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

