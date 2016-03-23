
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

static volatile int8_t x6 = -4;
static int16_t x7 = 246;
uint8_t x10 = 0U;
static int32_t t2 = -37;
int64_t x15 = INT64_MIN;
int32_t x20 = -13449;
int16_t x24 = INT16_MIN;
uint16_t x26 = 27570U;
int32_t x33 = INT32_MIN;
int8_t x34 = -57;
uint64_t x37 = 789285479552573LLU;
int8_t x38 = 5;
volatile uint8_t x49 = 4U;
volatile int64_t x59 = -295347930LL;
int32_t x63 = -1;
int8_t x64 = INT8_MAX;
volatile int32_t t15 = -16;
volatile uint8_t x67 = 7U;
uint8_t x72 = 12U;
int64_t x74 = -15242706564LL;
int8_t x75 = -1;
volatile int32_t t18 = -2;
volatile uint64_t x83 = 115896321482627395LLU;
static uint8_t x91 = 1U;
volatile int32_t t22 = 545642;
volatile int64_t x95 = INT64_MAX;
int64_t x96 = INT64_MIN;
static uint64_t x100 = 9LLU;
uint8_t x104 = UINT8_MAX;
volatile uint8_t x110 = 2U;
uint64_t x115 = 364981451028LLU;
uint8_t x118 = 1U;
volatile int32_t t29 = -111;
int32_t t31 = -726;
uint64_t x134 = 1408986LLU;
volatile int16_t x135 = INT16_MIN;
volatile int32_t t34 = -60;
uint16_t x141 = 10U;
int32_t x144 = INT32_MIN;
int64_t x145 = -1LL;
int64_t x146 = INT64_MAX;
static uint32_t x151 = 466331U;
int32_t x166 = -455110239;
volatile int32_t t42 = 0;
volatile int32_t t43 = 5;
int8_t x180 = INT8_MIN;
volatile uint8_t x182 = UINT8_MAX;
int16_t x188 = 935;
int32_t t46 = -41;
volatile int32_t x192 = 48;
static uint64_t x195 = 15LLU;
static uint64_t x197 = UINT64_MAX;
int32_t t49 = -1;
volatile int64_t x201 = INT64_MIN;
static int32_t x204 = INT32_MIN;
static int32_t t51 = 25;
int32_t t52 = 0;
uint8_t x224 = UINT8_MAX;
static volatile int32_t t56 = -349;
int64_t x238 = INT64_MIN;
int16_t x249 = INT16_MAX;
int64_t x250 = INT64_MAX;
int32_t t62 = -13316129;
volatile uint32_t x258 = 1533092U;
int32_t t64 = 3;
static volatile int16_t x262 = -1;
int8_t x265 = INT8_MAX;
int32_t x268 = 23441831;
volatile int32_t t66 = 98536;
int16_t x271 = INT16_MIN;
uint16_t x272 = 505U;
uint16_t x284 = UINT16_MAX;
int32_t t74 = 217385;
int64_t x301 = INT64_MAX;
uint16_t x303 = UINT16_MAX;
int8_t x308 = -2;
volatile int32_t t76 = 146;
static int8_t x310 = INT8_MIN;
static int32_t x316 = INT32_MIN;
int32_t t78 = -5;
uint8_t x326 = UINT8_MAX;
int64_t x327 = -126599188754LL;
static uint32_t x328 = UINT32_MAX;
static int8_t x330 = INT8_MIN;
int16_t x331 = 0;
int64_t x335 = INT64_MIN;
int32_t t83 = 194;
static volatile int32_t t87 = 6473;
int32_t x356 = INT32_MAX;
static int32_t t88 = 1113772;
int64_t x357 = INT64_MAX;
int64_t x358 = 0LL;
static int32_t x359 = INT32_MAX;
int32_t t89 = -82502;
int64_t x364 = -1LL;
volatile int32_t t90 = -156426;
static int8_t x368 = -1;
int32_t x372 = 2651148;
int32_t t92 = -44936183;
volatile int64_t x374 = INT64_MAX;
int32_t x376 = -1;
int16_t x383 = INT16_MAX;
volatile int32_t t95 = -2307623;
static int64_t x385 = INT64_MIN;
volatile int16_t x387 = INT16_MAX;
int8_t x392 = INT8_MAX;
int16_t x394 = INT16_MIN;
volatile int16_t x395 = -1;
static int64_t x403 = INT64_MIN;
volatile int32_t t101 = 6;
uint8_t x414 = 28U;
volatile int8_t x416 = INT8_MAX;
static uint32_t x418 = UINT32_MAX;
static volatile int32_t t104 = 807856;
int64_t x425 = INT64_MIN;
static int32_t x436 = INT32_MAX;
static int32_t x440 = 617;
uint32_t x441 = UINT32_MAX;
static int32_t t111 = 38165;
static volatile int8_t x450 = 12;
int8_t x452 = 1;
volatile int32_t t112 = -54513;
static uint8_t x453 = 1U;
int32_t x459 = -1;
int16_t x463 = -3482;
uint32_t x467 = 116386710U;
static int16_t x468 = -2318;
int32_t t116 = -492498;
int16_t x473 = -6;
int16_t x474 = 11582;
int32_t t118 = 2575;
int8_t x480 = -1;
volatile uint64_t x482 = UINT64_MAX;
uint16_t x496 = 13786U;
volatile int32_t t123 = 1397;
volatile int32_t t124 = -3288;
int32_t x501 = -1;
volatile int8_t x513 = INT8_MAX;
uint64_t x515 = UINT64_MAX;
int8_t x516 = INT8_MIN;
volatile int32_t t129 = 808;
uint64_t x522 = 2576451321975432139LLU;
static uint8_t x524 = 3U;
volatile int32_t t131 = -13;
int16_t x531 = INT16_MIN;
uint32_t x539 = 13U;
volatile uint64_t x541 = 516651205686447LLU;
uint32_t x544 = 1041615417U;
uint64_t x546 = 65009740398370187LLU;
volatile int32_t t137 = -65593164;
static uint8_t x558 = UINT8_MAX;
int64_t x560 = -1LL;
volatile int32_t t139 = 29040;
static int8_t x565 = INT8_MAX;
int32_t t141 = -1;
int16_t x570 = -1;
int32_t x571 = -4090;
volatile int16_t x574 = INT16_MIN;
volatile int16_t x582 = INT16_MIN;
int64_t x588 = INT64_MAX;
uint16_t x589 = UINT16_MAX;
volatile int32_t t147 = 7491691;
int16_t x599 = 502;
int64_t x603 = -1LL;
int64_t x607 = -15991570827446497LL;
static int64_t x608 = INT64_MAX;
int32_t t151 = 1;
volatile int32_t t152 = 21694645;
int16_t x617 = INT16_MIN;
int32_t x618 = -1;
uint8_t x622 = UINT8_MAX;
int16_t x624 = INT16_MAX;
int64_t x626 = INT64_MAX;
volatile int32_t t156 = 128988119;
uint32_t x634 = UINT32_MAX;
int64_t x636 = INT64_MAX;
int16_t x644 = INT16_MAX;
int32_t t160 = -6;
volatile uint32_t x646 = 5U;
uint64_t x649 = 3513142183LLU;
uint64_t x655 = UINT64_MAX;
static uint32_t x662 = UINT32_MAX;
int32_t t166 = -54204702;
int8_t x676 = -1;
int16_t x678 = 1;
int64_t x679 = -59776724335694LL;
int32_t t169 = -14;
int16_t x684 = 5308;
static volatile int8_t x687 = INT8_MIN;
int64_t x695 = INT64_MIN;
static uint8_t x698 = 7U;
int16_t x700 = -2267;
static volatile int32_t t174 = 253;
static uint32_t x701 = 953U;
volatile int32_t t176 = 219420415;
uint16_t x725 = UINT16_MAX;
int32_t x729 = INT32_MAX;
int32_t t182 = -7667936;
int8_t x737 = -10;
int32_t x738 = -1;
static uint64_t x742 = 49258387762722LLU;
int8_t x753 = 0;
volatile int16_t x755 = -1;
uint8_t x756 = 9U;
volatile int32_t t188 = -56101;
int16_t x759 = 158;
int32_t x762 = INT32_MAX;
int64_t x764 = -1LL;
int32_t t191 = 7800600;
int32_t x769 = 9263395;
static int8_t x775 = -1;
static uint32_t x777 = UINT32_MAX;
volatile uint16_t x787 = 719U;
static int64_t x794 = INT64_MAX;
volatile int32_t t198 = 22;
volatile int64_t x797 = -1LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile uint32_t x2 = 11773U;
	volatile int16_t x3 = INT16_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -477;

    t0 = (x1>(x2==(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -20;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 299809391;

    t1 = (x5>(x6==(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 23U;
	int64_t x11 = INT64_MIN;
	volatile int8_t x12 = -32;

    t2 = (x9>(x10==(x11<=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	static uint32_t x14 = UINT32_MAX;
	static int8_t x16 = INT8_MAX;
	int32_t t3 = -237;

    t3 = (x13>(x14==(x15<=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 67;
	int8_t x18 = INT8_MIN;
	int64_t x19 = 1779777755LL;
	static volatile int32_t t4 = 121;

    t4 = (x17>(x18==(x19<=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MAX;
	int8_t x22 = -17;
	static volatile uint64_t x23 = 2830028573071903LLU;
	int32_t t5 = 4;

    t5 = (x21>(x22==(x23<=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 348U;
	static int64_t x27 = INT64_MIN;
	static volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 50177;

    t6 = (x25>(x26==(x27<=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -5;
	int64_t x30 = INT64_MIN;
	volatile int32_t x31 = INT32_MIN;
	volatile uint8_t x32 = 23U;
	int32_t t7 = -32209;

    t7 = (x29>(x30==(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x35 = 5U;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 2972;

    t8 = (x33>(x34==(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = -127114;
	volatile int8_t x40 = -1;
	volatile int32_t t9 = 2646;

    t9 = (x37>(x38==(x39<=x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MIN;
	volatile int64_t x42 = -1LL;
	int32_t x43 = INT32_MAX;
	int64_t x44 = 383006722969312858LL;
	volatile int32_t t10 = -249;

    t10 = (x41>(x42==(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile uint64_t x46 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 3U;
	int32_t t11 = -14784668;

    t11 = (x45>(x46==(x47<=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 6650760U;
	static int32_t t12 = -1265;

    t12 = (x49>(x50==(x51<=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MAX;
	int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 1;

    t13 = (x53>(x54==(x55<=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static uint64_t x58 = 1445643LLU;
	volatile int64_t x60 = -1LL;
	int32_t t14 = 27399634;

    t14 = (x57>(x58==(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 508U;
	uint16_t x62 = 6166U;

    t15 = (x61>(x62==(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = -20;
	uint64_t x66 = UINT64_MAX;
	int64_t x68 = 508493LL;
	int32_t t16 = 63;

    t16 = (x65>(x66==(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	int32_t t17 = -1217;

    t17 = (x69>(x70==(x71<=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 24211743882LLU;
	int32_t x76 = 0;

    t18 = (x73>(x74==(x75<=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 239082040U;
	uint64_t x78 = 318533429265999LLU;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 0U;
	volatile int32_t t19 = 1;

    t19 = (x77>(x78==(x79<=x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -553834;
	uint8_t x82 = 3U;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = -13961;

    t20 = (x81>(x82==(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	static int8_t x86 = INT8_MIN;
	static int8_t x87 = -31;
	static uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 12173142;

    t21 = (x85>(x86==(x87<=x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	uint16_t x92 = UINT16_MAX;

    t22 = (x89>(x90==(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	uint64_t x94 = 405750308167549001LLU;
	volatile int32_t t23 = -394973163;

    t23 = (x93>(x94==(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	uint64_t x98 = 1836LLU;
	volatile int64_t x99 = 254371778LL;
	volatile int32_t t24 = -167161764;

    t24 = (x97>(x98==(x99<=x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x101 = 28;
	int64_t x102 = -1LL;
	static int64_t x103 = INT64_MIN;
	static volatile int32_t t25 = -1;

    t25 = (x101>(x102==(x103<=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = 0U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 8694;

    t26 = (x105>(x106==(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -2;

    t27 = (x109>(x110==(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -1;
	volatile int8_t x114 = -1;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 90188;

    t28 = (x113>(x114==(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 137U;
	uint16_t x119 = 19834U;
	int32_t x120 = 700;

    t29 = (x117>(x118==(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = 36;
	static int32_t x122 = INT32_MIN;
	int64_t x123 = -31201LL;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -28;

    t30 = (x121>(x122==(x123<=x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -12;
	volatile uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MIN;

    t31 = (x125>(x126==(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	uint16_t x130 = UINT16_MAX;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 14U;
	int32_t t32 = -355;

    t32 = (x129>(x130==(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 2677U;
	static volatile uint32_t x136 = 4082U;
	volatile int32_t t33 = -22298340;

    t33 = (x133>(x134==(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	int64_t x138 = -4832LL;
	static volatile uint8_t x139 = 0U;
	uint64_t x140 = 25799368LLU;

    t34 = (x137>(x138==(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = 1;
	uint16_t x143 = 3432U;
	static volatile int32_t t35 = 68655148;

    t35 = (x141>(x142==(x143<=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	static volatile int32_t t36 = -74886120;

    t36 = (x145>(x146==(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -156;
	static int32_t x150 = -7125;
	int8_t x152 = 3;
	volatile int32_t t37 = -1;

    t37 = (x149>(x150==(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = -1;
	static volatile uint32_t x154 = 355572631U;
	int8_t x155 = INT8_MAX;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 117;

    t38 = (x153>(x154==(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	volatile int8_t x158 = -1;
	static int32_t x159 = 3;
	uint8_t x160 = 10U;
	int32_t t39 = -2;

    t39 = (x157>(x158==(x159<=x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -15373;
	int16_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -274103;

    t40 = (x161>(x162==(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x165 = 295442LLU;
	uint64_t x167 = 105717126LLU;
	int8_t x168 = 6;
	int32_t t41 = -40348903;

    t41 = (x165>(x166==(x167<=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 0U;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	int64_t x172 = INT64_MIN;

    t42 = (x169>(x170==(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	static int16_t x174 = INT16_MIN;
	volatile int32_t x175 = 0;
	int16_t x176 = -1;

    t43 = (x173>(x174==(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 4541404LLU;
	static uint16_t x178 = 8638U;
	int8_t x179 = INT8_MAX;
	volatile int32_t t44 = -1094125;

    t44 = (x177>(x178==(x179<=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = INT16_MIN;
	volatile int64_t x183 = -1LL;
	int8_t x184 = -34;
	volatile int32_t t45 = 45;

    t45 = (x181>(x182==(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = -1;

    t46 = (x185>(x186==(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	volatile int16_t x190 = INT16_MIN;
	uint8_t x191 = 74U;
	volatile int32_t t47 = 89460110;

    t47 = (x189>(x190==(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = 73;
	static int8_t x194 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -936684247;

    t48 = (x193>(x194==(x195<=x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = 790;
	static volatile int16_t x199 = 18;
	uint8_t x200 = 31U;

    t49 = (x197>(x198==(x199<=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = INT64_MIN;
	volatile int16_t x203 = -462;
	volatile int32_t t50 = -151647;

    t50 = (x201>(x202==(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	static int64_t x206 = -3648368163087668775LL;
	static uint64_t x207 = 765845393LLU;
	int16_t x208 = INT16_MIN;

    t51 = (x205>(x206==(x207<=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 2U;
	uint64_t x210 = 102735606LLU;
	static uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MAX;

    t52 = (x209>(x210==(x211<=x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = -1;
	volatile int64_t x214 = INT64_MIN;
	uint8_t x215 = 5U;
	static int8_t x216 = 1;
	int32_t t53 = 331331;

    t53 = (x213>(x214==(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = INT16_MAX;
	int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 455001U;
	int32_t t54 = 33964626;

    t54 = (x217>(x218==(x219<=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 27;
	static int32_t x222 = INT32_MIN;
	int32_t x223 = 285;
	int32_t t55 = -7;

    t55 = (x221>(x222==(x223<=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	static int64_t x226 = 467403872420LL;
	uint32_t x227 = 5U;
	int16_t x228 = 5;

    t56 = (x225>(x226==(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	volatile uint8_t x230 = 6U;
	static volatile int32_t x231 = INT32_MIN;
	volatile int8_t x232 = -7;
	volatile int32_t t57 = 1;

    t57 = (x229>(x230==(x231<=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	uint8_t x235 = 9U;
	static volatile int8_t x236 = -1;
	int32_t t58 = -46235247;

    t58 = (x233>(x234==(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 28;
	uint64_t x239 = 2LLU;
	int16_t x240 = INT16_MAX;
	int32_t t59 = -668580;

    t59 = (x237>(x238==(x239<=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = 1LLU;
	static int32_t x242 = INT32_MIN;
	volatile int64_t x243 = INT64_MAX;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 24244078;

    t60 = (x241>(x242==(x243<=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 1U;
	int8_t x246 = INT8_MIN;
	int16_t x247 = -16015;
	int8_t x248 = INT8_MAX;
	int32_t t61 = 11828061;

    t61 = (x245>(x246==(x247<=x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x251 = -8218009364LL;
	uint16_t x252 = UINT16_MAX;

    t62 = (x249>(x250==(x251<=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 58U;
	int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 71122;

    t63 = (x253>(x254==(x255<=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 1;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MIN;

    t64 = (x257>(x258==(x259<=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 309530U;
	int16_t x263 = -1;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 46149048;

    t65 = (x261>(x262==(x263<=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x266 = UINT8_MAX;
	volatile int64_t x267 = 1731497898980930LL;

    t66 = (x265>(x266==(x267<=x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	uint64_t x270 = 8346553670LLU;
	volatile int32_t t67 = 34256;

    t67 = (x269>(x270==(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	volatile int16_t x274 = -1;
	int16_t x275 = 3434;
	volatile uint64_t x276 = 16030346LLU;
	int32_t t68 = -280460650;

    t68 = (x273>(x274==(x275<=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -8;
	int64_t x278 = -8011013326LL;
	static volatile uint32_t x279 = 60805U;
	int8_t x280 = -1;
	static volatile int32_t t69 = 0;

    t69 = (x277>(x278==(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = 295;
	volatile int16_t x282 = 924;
	int8_t x283 = INT8_MIN;
	int32_t t70 = 3428361;

    t70 = (x281>(x282==(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	volatile uint64_t x286 = 3254398862LLU;
	volatile int8_t x287 = 1;
	uint32_t x288 = 5U;
	int32_t t71 = 1989207;

    t71 = (x285>(x286==(x287<=x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	volatile int8_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -46904091;

    t72 = (x289>(x290==(x291<=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	volatile int8_t x294 = INT8_MAX;
	uint16_t x295 = 1677U;
	int32_t x296 = -221015;
	int32_t t73 = -313238;

    t73 = (x293>(x294==(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 1251432331363726LLU;
	uint8_t x298 = 60U;
	int32_t x299 = -197952767;
	volatile int16_t x300 = INT16_MIN;

    t74 = (x297>(x298==(x299<=x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = -4477191207280LL;
	int8_t x304 = -1;
	volatile int32_t t75 = -1;

    t75 = (x301>(x302==(x303<=x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MIN;
	static volatile uint16_t x307 = 11482U;

    t76 = (x305>(x306==(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = -1;
	int64_t x311 = -8359540951LL;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = 1513728;

    t77 = (x309>(x310==(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = 261U;
	int16_t x314 = INT16_MIN;
	volatile int16_t x315 = INT16_MIN;

    t78 = (x313>(x314==(x315<=x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x317 = INT16_MAX;
	int32_t x318 = 24;
	int16_t x319 = 1;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = -200;

    t79 = (x317>(x318==(x319<=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -1LL;
	volatile int32_t t80 = -341091226;

    t80 = (x321>(x322==(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	static int32_t t81 = 3969063;

    t81 = (x325>(x326==(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 1035;
	uint32_t x332 = 66416439U;
	volatile int32_t t82 = -1;

    t82 = (x329>(x330==(x331<=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x333 = 20395U;
	int16_t x334 = -14830;
	int8_t x336 = INT8_MAX;

    t83 = (x333>(x334==(x335<=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x337 = 473625783324LLU;
	int32_t x338 = 895535;
	int16_t x339 = -95;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -10173024;

    t84 = (x337>(x338==(x339<=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	static uint64_t x342 = UINT64_MAX;
	static uint32_t x343 = 764042U;
	int8_t x344 = -1;
	volatile int32_t t85 = -2405522;

    t85 = (x341>(x342==(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MAX;
	int32_t x346 = -1;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = -1;
	volatile int32_t t86 = -106084;

    t86 = (x345>(x346==(x347<=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = -1;
	int64_t x350 = INT64_MAX;
	uint16_t x351 = 1930U;
	static uint32_t x352 = 112U;

    t87 = (x349>(x350==(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int32_t x354 = -1;
	int32_t x355 = INT32_MAX;

    t88 = (x353>(x354==(x355<=x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x360 = 1U;

    t89 = (x357>(x358==(x359<=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -2977;
	int8_t x362 = INT8_MIN;
	int64_t x363 = 802418636937469216LL;

    t90 = (x361>(x362==(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 1LL;
	static int8_t x366 = -1;
	static int64_t x367 = -15500281415LL;
	volatile int32_t t91 = -23;

    t91 = (x365>(x366==(x367<=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = -1;
	int16_t x370 = INT16_MAX;
	int64_t x371 = 238305443594543590LL;

    t92 = (x369>(x370==(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 580U;
	int64_t x375 = -1LL;
	int32_t t93 = 51871;

    t93 = (x373>(x374==(x375<=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	static int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = -5262580;

    t94 = (x377>(x378==(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 3198738U;
	static int8_t x382 = 61;
	uint32_t x384 = 174U;

    t95 = (x381>(x382==(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = -19;
	uint32_t x388 = 156U;
	volatile int32_t t96 = 336;

    t96 = (x385>(x386==(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 253;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -586325LL;
	int32_t t97 = -4746230;

    t97 = (x389>(x390==(x391<=x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 17162902805444583LLU;
	volatile int64_t x396 = 999973415575LL;
	int32_t t98 = -10054620;

    t98 = (x393>(x394==(x395<=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = UINT16_MAX;
	static volatile int32_t t99 = -2040;

    t99 = (x397>(x398==(x399<=x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x401 = UINT32_MAX;
	volatile int16_t x402 = INT16_MIN;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 0;

    t100 = (x401>(x402==(x403<=x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	volatile int64_t x406 = INT64_MIN;
	uint64_t x407 = 44166888485781LLU;
	int8_t x408 = INT8_MIN;

    t101 = (x405>(x406==(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 25764LL;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = 36;
	uint32_t x412 = 111U;
	static int32_t t102 = 389824593;

    t102 = (x409>(x410==(x411<=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	volatile uint64_t x415 = 10935062204LLU;
	int32_t t103 = 0;

    t103 = (x413>(x414==(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 4U;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = -1LL;

    t104 = (x417>(x418==(x419<=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 12;
	volatile uint64_t x422 = UINT64_MAX;
	static uint8_t x423 = 114U;
	int8_t x424 = INT8_MIN;
	static int32_t t105 = -1;

    t105 = (x421>(x422==(x423<=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = -1;
	uint32_t x427 = 1259600666U;
	int64_t x428 = INT64_MIN;
	volatile int32_t t106 = -1941;

    t106 = (x425>(x426==(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	int8_t x430 = 25;
	volatile int8_t x431 = INT8_MIN;
	static volatile int32_t x432 = INT32_MIN;
	static volatile int32_t t107 = -399;

    t107 = (x429>(x430==(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -3064660936879LL;
	uint64_t x434 = UINT64_MAX;
	int8_t x435 = -59;
	static int32_t t108 = 7516302;

    t108 = (x433>(x434==(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 103U;
	static int64_t x438 = 2LL;
	int8_t x439 = 37;
	volatile int32_t t109 = 48479120;

    t109 = (x437>(x438==(x439<=x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MIN;
	uint8_t x443 = UINT8_MAX;
	static int64_t x444 = -1LL;
	static int32_t t110 = 1;

    t110 = (x441>(x442==(x443<=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 3696U;
	uint16_t x446 = 32U;
	uint64_t x447 = 174721589780218LLU;
	int32_t x448 = INT32_MAX;

    t111 = (x445>(x446==(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 302396923;
	int16_t x451 = 1;

    t112 = (x449>(x450==(x451<=x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x454 = -45;
	int8_t x455 = 30;
	static volatile uint32_t x456 = UINT32_MAX;
	static int32_t t113 = 3250;

    t113 = (x453>(x454==(x455<=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = 7923103976039680LL;
	uint32_t x458 = 9U;
	uint32_t x460 = 1893612U;
	int32_t t114 = 13485569;

    t114 = (x457>(x458==(x459<=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 1;
	static volatile uint32_t x462 = 0U;
	int32_t x464 = INT32_MIN;
	int32_t t115 = -1;

    t115 = (x461>(x462==(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x466 = INT16_MAX;

    t116 = (x465>(x466==(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 1017U;
	uint16_t x471 = UINT16_MAX;
	uint64_t x472 = 11785900097172349LLU;
	int32_t t117 = -7247915;

    t117 = (x469>(x470==(x471<=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x475 = INT64_MAX;
	int8_t x476 = INT8_MIN;

    t118 = (x473>(x474==(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	uint64_t x478 = UINT64_MAX;
	volatile int16_t x479 = 132;
	static volatile int32_t t119 = -2833544;

    t119 = (x477>(x478==(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 3U;
	int8_t x483 = -1;
	int16_t x484 = -1;
	volatile int32_t t120 = -252134;

    t120 = (x481>(x482==(x483<=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	volatile int32_t x486 = -646;
	static uint16_t x487 = UINT16_MAX;
	static uint8_t x488 = 7U;
	volatile int32_t t121 = -68;

    t121 = (x485>(x486==(x487<=x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	int8_t x490 = 3;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = 0U;
	static volatile int32_t t122 = -613;

    t122 = (x489>(x490==(x491<=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MAX;
	static volatile int16_t x494 = INT16_MIN;
	int64_t x495 = INT64_MIN;

    t123 = (x493>(x494==(x495<=x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	static int64_t x498 = -1LL;
	static volatile uint8_t x499 = 62U;
	int64_t x500 = 3928028787336100606LL;

    t124 = (x497>(x498==(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = -120;
	int8_t x503 = INT8_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t125 = 71833314;

    t125 = (x501>(x502==(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = 1;
	static uint32_t x506 = UINT32_MAX;
	volatile int64_t x507 = INT64_MIN;
	uint8_t x508 = 49U;
	volatile int32_t t126 = -14814;

    t126 = (x505>(x506==(x507<=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x509 = INT8_MIN;
	static uint16_t x510 = UINT16_MAX;
	volatile uint8_t x511 = 2U;
	int32_t x512 = INT32_MIN;
	volatile int32_t t127 = 0;

    t127 = (x509>(x510==(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = -1;
	volatile int32_t t128 = 255;

    t128 = (x513>(x514==(x515<=x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	uint64_t x518 = UINT64_MAX;
	uint32_t x519 = 28531U;
	int32_t x520 = INT32_MAX;

    t129 = (x517>(x518==(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	uint8_t x523 = 1U;
	volatile int32_t t130 = 12647;

    t130 = (x521>(x522==(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x525 = UINT8_MAX;
	int32_t x526 = INT32_MIN;
	static int32_t x527 = INT32_MAX;
	int64_t x528 = INT64_MAX;

    t131 = (x525>(x526==(x527<=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	static uint8_t x530 = 0U;
	static uint8_t x532 = UINT8_MAX;
	static volatile int32_t t132 = -11780763;

    t132 = (x529>(x530==(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	int8_t x534 = -1;
	uint64_t x535 = 2587305517541LLU;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t133 = -4912;

    t133 = (x533>(x534==(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 221;
	int32_t x538 = -572224694;
	volatile uint64_t x540 = 1660LLU;
	int32_t t134 = 101;

    t134 = (x537>(x538==(x539<=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = 1;
	static uint32_t x543 = UINT32_MAX;
	volatile int32_t t135 = -180587;

    t135 = (x541>(x542==(x543<=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MAX;
	static volatile int64_t x547 = INT64_MAX;
	uint32_t x548 = 6618863U;
	int32_t t136 = 1005710;

    t136 = (x545>(x546==(x547<=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 37U;
	volatile int16_t x550 = INT16_MIN;
	volatile uint8_t x551 = UINT8_MAX;
	int64_t x552 = -1LL;

    t137 = (x549>(x550==(x551<=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	int64_t x554 = -1487916633996LL;
	uint64_t x555 = 5332663093062838LLU;
	int8_t x556 = -1;
	int32_t t138 = -5885478;

    t138 = (x553>(x554==(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -1;
	int32_t x559 = INT32_MIN;

    t139 = (x557>(x558==(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 0;
	int64_t x562 = INT64_MIN;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t140 = -151767306;

    t140 = (x561>(x562==(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x566 = INT32_MIN;
	int64_t x567 = INT64_MIN;
	int64_t x568 = 16760957453935273LL;

    t141 = (x565>(x566==(x567<=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	volatile int8_t x572 = INT8_MIN;
	int32_t t142 = 41;

    t142 = (x569>(x570==(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x575 = INT8_MIN;
	uint32_t x576 = UINT32_MAX;
	int32_t t143 = 195;

    t143 = (x573>(x574==(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 4887945268685LL;
	static int64_t x578 = INT64_MAX;
	int8_t x579 = 0;
	uint32_t x580 = UINT32_MAX;
	volatile int32_t t144 = -1840520;

    t144 = (x577>(x578==(x579<=x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	volatile uint32_t x583 = 0U;
	int8_t x584 = INT8_MAX;
	volatile int32_t t145 = 1025;

    t145 = (x581>(x582==(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	uint8_t x586 = UINT8_MAX;
	static int32_t x587 = INT32_MIN;
	int32_t t146 = -1606319;

    t146 = (x585>(x586==(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x590 = INT16_MIN;
	static uint16_t x591 = UINT16_MAX;
	uint64_t x592 = UINT64_MAX;

    t147 = (x589>(x590==(x591<=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 1U;
	static uint32_t x594 = 24930645U;
	int32_t x595 = INT32_MIN;
	uint32_t x596 = UINT32_MAX;
	int32_t t148 = -1150770;

    t148 = (x593>(x594==(x595<=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = 17468824U;
	static uint8_t x598 = 10U;
	uint32_t x600 = 24864617U;
	volatile int32_t t149 = -5684;

    t149 = (x597>(x598==(x599<=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 62U;
	int64_t x602 = INT64_MIN;
	int16_t x604 = INT16_MAX;
	int32_t t150 = -174236659;

    t150 = (x601>(x602==(x603<=x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	uint64_t x606 = 300828616851LLU;

    t151 = (x605>(x606==(x607<=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 60844599U;
	volatile uint8_t x610 = UINT8_MAX;
	int8_t x611 = -32;
	static volatile int16_t x612 = INT16_MAX;

    t152 = (x609>(x610==(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	int32_t x614 = INT32_MIN;
	volatile int64_t x615 = -1LL;
	int64_t x616 = -1LL;
	int32_t t153 = 26939;

    t153 = (x613>(x614==(x615<=x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x619 = 34325U;
	int64_t x620 = -1LL;
	int32_t t154 = 861;

    t154 = (x617>(x618==(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	static int16_t x623 = -1;
	volatile int32_t t155 = 569;

    t155 = (x621>(x622==(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	static uint64_t x627 = 57LLU;
	static uint8_t x628 = 2U;

    t156 = (x625>(x626==(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = UINT64_MAX;
	int64_t x630 = INT64_MIN;
	static int16_t x631 = -1;
	uint16_t x632 = UINT16_MAX;
	int32_t t157 = 12654;

    t157 = (x629>(x630==(x631<=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 2U;
	int8_t x635 = 1;
	static volatile int32_t t158 = 4240098;

    t158 = (x633>(x634==(x635<=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 17602878890LL;
	static uint32_t x638 = 3155254U;
	int16_t x639 = INT16_MIN;
	static uint16_t x640 = 3U;
	volatile int32_t t159 = 2093;

    t159 = (x637>(x638==(x639<=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x641 = 319U;
	volatile int8_t x642 = -62;
	int32_t x643 = INT32_MIN;

    t160 = (x641>(x642==(x643<=x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	int8_t x647 = -49;
	volatile int64_t x648 = INT64_MAX;
	volatile int32_t t161 = 192995;

    t161 = (x645>(x646==(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = INT8_MIN;
	static uint8_t x651 = 12U;
	uint8_t x652 = 10U;
	int32_t t162 = -7529110;

    t162 = (x649>(x650==(x651<=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	volatile int32_t x654 = INT32_MAX;
	volatile int8_t x656 = INT8_MAX;
	volatile int32_t t163 = -1;

    t163 = (x653>(x654==(x655<=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	int8_t x658 = INT8_MIN;
	static uint32_t x659 = 29U;
	volatile uint32_t x660 = 169438890U;
	volatile int32_t t164 = 772748485;

    t164 = (x657>(x658==(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 0U;
	int16_t x663 = -1;
	volatile int8_t x664 = -7;
	int32_t t165 = 40600;

    t165 = (x661>(x662==(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = -7871;
	int16_t x666 = 2061;
	volatile uint64_t x667 = UINT64_MAX;
	int16_t x668 = 5;

    t166 = (x665>(x666==(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -1;
	static uint64_t x670 = UINT64_MAX;
	uint16_t x671 = 119U;
	volatile uint8_t x672 = UINT8_MAX;
	static int32_t t167 = 46048;

    t167 = (x669>(x670==(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x674 = -72;
	int16_t x675 = INT16_MIN;
	int32_t t168 = 43;

    t168 = (x673>(x674==(x675<=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 3U;
	uint64_t x680 = UINT64_MAX;

    t169 = (x677>(x678==(x679<=x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	uint64_t x682 = UINT64_MAX;
	int16_t x683 = 10106;
	int32_t t170 = 68238;

    t170 = (x681>(x682==(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint32_t x686 = UINT32_MAX;
	uint32_t x688 = 373715779U;
	static volatile int32_t t171 = -189;

    t171 = (x685>(x686==(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MIN;
	int8_t x690 = -1;
	volatile int8_t x691 = INT8_MAX;
	uint8_t x692 = 28U;
	int32_t t172 = 1;

    t172 = (x689>(x690==(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = INT8_MIN;
	volatile int32_t x696 = INT32_MIN;
	volatile int32_t t173 = -112780535;

    t173 = (x693>(x694==(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	static int32_t x699 = INT32_MIN;

    t174 = (x697>(x698==(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = -502838870;
	static uint8_t x703 = 14U;
	uint32_t x704 = UINT32_MAX;
	static int32_t t175 = 787400666;

    t175 = (x701>(x702==(x703<=x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x705 = UINT32_MAX;
	int64_t x706 = -35215495022196057LL;
	volatile int32_t x707 = -49325;
	volatile int8_t x708 = INT8_MAX;

    t176 = (x705>(x706==(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	uint8_t x710 = 92U;
	int8_t x711 = INT8_MAX;
	volatile int32_t x712 = INT32_MIN;
	int32_t t177 = 6087;

    t177 = (x709>(x710==(x711<=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1300233LL;
	static int8_t x714 = INT8_MIN;
	volatile int64_t x715 = 1999421531118201215LL;
	volatile uint64_t x716 = UINT64_MAX;
	int32_t t178 = -133993456;

    t178 = (x713>(x714==(x715<=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 19LLU;
	int16_t x718 = INT16_MIN;
	int32_t x719 = -346878;
	int16_t x720 = -1;
	static int32_t t179 = 344;

    t179 = (x717>(x718==(x719<=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = 0;
	static uint8_t x722 = 31U;
	static int64_t x723 = -725302765032LL;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t180 = -144462917;

    t180 = (x721>(x722==(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x726 = UINT64_MAX;
	int16_t x727 = INT16_MIN;
	int16_t x728 = 6;
	volatile int32_t t181 = -2;

    t181 = (x725>(x726==(x727<=x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = INT32_MIN;
	volatile uint64_t x731 = 52LLU;
	volatile int64_t x732 = -1LL;

    t182 = (x729>(x730==(x731<=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = 1360285729552417LL;
	static int8_t x734 = -1;
	int8_t x735 = INT8_MIN;
	uint64_t x736 = 20LLU;
	int32_t t183 = 18877;

    t183 = (x733>(x734==(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x739 = INT32_MIN;
	static int8_t x740 = INT8_MIN;
	int32_t t184 = 43882;

    t184 = (x737>(x738==(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -1;
	int32_t x743 = -1;
	static uint32_t x744 = 247382U;
	int32_t t185 = 1;

    t185 = (x741>(x742==(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	int32_t x746 = -73501;
	uint8_t x747 = 1U;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 465144;

    t186 = (x745>(x746==(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	int32_t x750 = -1;
	int8_t x751 = INT8_MAX;
	static volatile uint64_t x752 = 998780LLU;
	int32_t t187 = -141;

    t187 = (x749>(x750==(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;

    t188 = (x753>(x754==(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MIN;
	uint8_t x760 = 71U;
	int32_t t189 = -100591889;

    t189 = (x757>(x758==(x759<=x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x761 = 20LLU;
	int16_t x763 = INT16_MAX;
	static int32_t t190 = 28;

    t190 = (x761>(x762==(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x765 = 50;
	volatile int64_t x766 = -1LL;
	static int16_t x767 = INT16_MAX;
	static volatile int16_t x768 = -1;

    t191 = (x765>(x766==(x767<=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x770 = UINT32_MAX;
	static uint16_t x771 = UINT16_MAX;
	uint8_t x772 = 3U;
	int32_t t192 = 7;

    t192 = (x769>(x770==(x771<=x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = 731477LL;
	volatile int8_t x774 = INT8_MIN;
	int8_t x776 = 15;
	volatile int32_t t193 = 668743;

    t193 = (x773>(x774==(x775<=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x778 = 5U;
	uint32_t x779 = 6U;
	uint64_t x780 = 316099LLU;
	volatile int32_t t194 = 67298;

    t194 = (x777>(x778==(x779<=x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = 3U;
	uint8_t x784 = 30U;
	int32_t t195 = 2524;

    t195 = (x781>(x782==(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x785 = -1LL;
	int32_t x786 = 3793;
	static int8_t x788 = INT8_MIN;
	static volatile int32_t t196 = -144189;

    t196 = (x785>(x786==(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -1;
	uint16_t x790 = UINT16_MAX;
	volatile uint64_t x791 = 836691984405LLU;
	volatile int16_t x792 = 2850;
	volatile int32_t t197 = 55353;

    t197 = (x789>(x790==(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x793 = INT16_MAX;
	int64_t x795 = INT64_MIN;
	static int32_t x796 = -4;

    t198 = (x793>(x794==(x795<=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	uint32_t x799 = 611U;
	int64_t x800 = 1LL;
	int32_t t199 = -5;

    t199 = (x797>(x798==(x799<=x800)));

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

