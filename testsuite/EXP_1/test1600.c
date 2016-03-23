
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

volatile int32_t x4 = INT32_MIN;
int8_t x6 = INT8_MIN;
uint32_t t1 = 3U;
int32_t t3 = 495045;
uint8_t x19 = 5U;
uint8_t x20 = 1U;
static int32_t x22 = INT32_MAX;
static volatile int32_t t5 = 751727;
int8_t x35 = 7;
volatile int32_t t8 = -6;
int8_t x38 = INT8_MAX;
uint16_t x39 = 1013U;
int32_t x40 = INT32_MAX;
int8_t x41 = -1;
int16_t x45 = INT16_MIN;
uint64_t t11 = 0LLU;
uint8_t x50 = 3U;
int32_t t12 = -4616905;
volatile int32_t x53 = INT32_MAX;
static int8_t x57 = 4;
static uint32_t x61 = UINT32_MAX;
uint16_t x62 = 514U;
static uint16_t x64 = 1382U;
volatile int64_t t16 = 925025576138246279LL;
static uint64_t x71 = 484LLU;
static uint64_t t17 = 1LLU;
uint8_t x83 = 1U;
static int64_t x87 = 455016310302LL;
static uint8_t x95 = 3U;
uint16_t x97 = 707U;
static uint32_t x100 = 179287909U;
volatile uint32_t t23 = 2U;
volatile int8_t x102 = 0;
int16_t x109 = 7531;
uint8_t x110 = UINT8_MAX;
int64_t x112 = 39266665LL;
uint16_t x116 = 3U;
volatile int64_t x117 = -30419459LL;
int32_t x122 = INT32_MIN;
int32_t x124 = INT32_MIN;
static int64_t x128 = INT64_MIN;
uint32_t x129 = UINT32_MAX;
static volatile uint32_t t32 = 13U;
int32_t x138 = INT32_MIN;
volatile int16_t x140 = -12;
uint16_t x149 = 161U;
int16_t x151 = INT16_MIN;
int64_t x153 = INT64_MIN;
int8_t x156 = 1;
int32_t t37 = 1858;
int32_t t46 = -47692597;
uint64_t t47 = 115131202290LLU;
int16_t x203 = 1;
int16_t x206 = INT16_MIN;
uint8_t x207 = 7U;
int16_t x208 = -5946;
int8_t x215 = -1;
volatile int32_t t51 = 103988;
int16_t x219 = 0;
int64_t x220 = INT64_MIN;
volatile int64_t t53 = 51562451932386LL;
int16_t x225 = 1;
int32_t x231 = -1;
int64_t x238 = -1LL;
static volatile int64_t t57 = -1359LL;
static int64_t x241 = INT64_MIN;
uint16_t x249 = 1U;
uint16_t x250 = 7U;
volatile int32_t t61 = 102379277;
int16_t x265 = -1;
volatile int64_t t64 = 23LL;
int8_t x271 = -1;
int32_t x278 = -1;
volatile int64_t x279 = 63337405911LL;
uint16_t x283 = 6U;
volatile int64_t t68 = 106LL;
uint64_t x288 = 7734541590140614LLU;
volatile int64_t t72 = -6405484LL;
int32_t x301 = 14;
int8_t x302 = -1;
uint64_t x304 = UINT64_MAX;
volatile int64_t x305 = INT64_MAX;
int32_t x309 = -1;
int64_t x314 = INT64_MIN;
uint64_t t76 = 1121833332895921639LLU;
static volatile int8_t x317 = INT8_MAX;
volatile int64_t x318 = INT64_MIN;
uint64_t x323 = 7338741662LLU;
volatile uint64_t t78 = 636164569412515LLU;
static int64_t x331 = INT64_MIN;
int16_t x332 = -1;
volatile uint32_t t82 = 259931U;
int8_t x343 = -1;
static int8_t x354 = INT8_MAX;
uint32_t x361 = 1660472U;
int32_t x363 = INT32_MAX;
int32_t x365 = INT32_MIN;
volatile uint64_t t88 = 683615048LLU;
int32_t x370 = -15535;
uint64_t x375 = 30311746509LLU;
int8_t x381 = -1;
volatile int32_t x382 = -730;
uint32_t x383 = UINT32_MAX;
volatile uint32_t t92 = 754389U;
int64_t t93 = 21947910846330054LL;
uint8_t x395 = 3U;
volatile int32_t t94 = 1624;
static volatile int64_t x400 = INT64_MAX;
int16_t x405 = INT16_MIN;
uint16_t x407 = 2U;
int8_t x409 = -1;
int32_t t98 = -3141;
int8_t x423 = 1;
uint64_t x424 = 6776872434LLU;
int32_t x427 = INT32_MAX;
static int32_t t101 = 3701;
static int16_t x432 = 6;
static volatile uint32_t t102 = 5U;
int32_t x441 = INT32_MAX;
int16_t x443 = -1;
int32_t t105 = -13;
volatile int32_t x448 = 836723005;
volatile int32_t t106 = -6529;
uint64_t x454 = 32872545413LLU;
int64_t t108 = -18LL;
int8_t x457 = -1;
int16_t x462 = INT16_MAX;
static int64_t x463 = INT64_MIN;
int16_t x472 = INT16_MIN;
uint32_t x476 = UINT32_MAX;
int64_t x480 = INT64_MIN;
static int8_t x481 = 1;
volatile int64_t x483 = -1LL;
volatile uint16_t x488 = 27489U;
uint16_t x498 = 872U;
int32_t x504 = -222325;
int16_t x516 = -417;
static volatile uint32_t t124 = 247664U;
static uint8_t x523 = 1U;
uint8_t x526 = 0U;
int64_t x529 = INT64_MIN;
uint16_t x538 = UINT16_MAX;
int64_t x539 = INT64_MIN;
uint8_t x540 = 56U;
uint64_t x548 = UINT64_MAX;
volatile uint32_t x555 = 29U;
uint64_t x558 = UINT64_MAX;
int32_t x561 = -1;
int64_t x563 = 3367193429721917232LL;
static int32_t x572 = 451565361;
static volatile int16_t x576 = INT16_MIN;
int64_t x587 = 1072576709619726369LL;
uint8_t x590 = UINT8_MAX;
static int16_t x597 = INT16_MAX;
int8_t x598 = INT8_MIN;
uint32_t x599 = 1152722U;
int32_t x603 = INT32_MIN;
static uint64_t x604 = UINT64_MAX;
uint32_t x605 = 56341805U;
int16_t x606 = -1;
int32_t x608 = INT32_MIN;
uint16_t x614 = 6090U;
int16_t x618 = 9;
static uint32_t t149 = 123U;
int32_t t150 = -3013;
int32_t x629 = INT32_MIN;
uint32_t x634 = 194U;
volatile uint16_t x639 = UINT16_MAX;
volatile int16_t x643 = -1;
volatile uint32_t t154 = 2013814U;
volatile uint32_t x646 = 708417927U;
int16_t x649 = INT16_MIN;
volatile int16_t x652 = 5176;
static int32_t t156 = -116308555;
static uint64_t t159 = 60319419141535LLU;
volatile int64_t x670 = INT64_MIN;
volatile int64_t x673 = 101174921LL;
int64_t x693 = -3LL;
uint32_t x694 = 25159U;
int8_t x695 = 9;
volatile int16_t x696 = 1;
uint32_t x697 = UINT32_MAX;
volatile int32_t t168 = 2179;
static int64_t x714 = INT64_MAX;
volatile int32_t x718 = INT32_MAX;
int32_t x731 = 14;
int32_t t176 = -1814796;
int32_t x736 = -1;
int16_t x744 = INT16_MIN;
static int32_t x746 = INT32_MIN;
int32_t t180 = -270570;
static int32_t x750 = -1;
int64_t x758 = -2029828136961992LL;
uint64_t x763 = UINT64_MAX;
int8_t x770 = INT8_MIN;
int8_t x771 = INT8_MIN;
static int8_t x772 = INT8_MIN;
volatile int32_t t186 = -3574710;
int8_t x778 = INT8_MAX;
volatile int64_t x779 = INT64_MIN;
volatile int64_t x789 = INT64_MIN;
uint64_t x792 = 114223337348209LLU;
uint8_t x798 = UINT8_MAX;
int32_t x807 = -415589;
uint16_t x812 = UINT16_MAX;
uint8_t x815 = 5U;
volatile int8_t x816 = 2;
uint64_t t197 = 7184934LLU;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MAX;
	static volatile int8_t x3 = -12;
	static int32_t t0 = -2868505;

    t0 = (((x1>x2)*x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static volatile uint32_t x7 = 0U;
	uint32_t x8 = 1631589U;

    t1 = (((x5>x6)*x7)/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int32_t x10 = 24116110;
	uint16_t x11 = 28U;
	static int16_t x12 = -426;
	int32_t t2 = -3;

    t2 = (((x9>x10)*x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	static int64_t x14 = 3LL;
	int32_t x15 = 2580;
	static uint16_t x16 = UINT16_MAX;

    t3 = (((x13>x14)*x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 23070356;
	int32_t x18 = 1468191;
	int32_t t4 = 2779;

    t4 = (((x17>x18)*x19)/x20);

    if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	volatile uint8_t x24 = 3U;

    t5 = (((x21>x22)*x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -15822458298LL;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -7658251;
	static int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = -1502;

    t6 = (((x25>x26)*x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile uint16_t x30 = 222U;
	int16_t x31 = INT16_MIN;
	static volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -17418;

    t7 = (((x29>x30)*x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	static volatile uint16_t x34 = UINT16_MAX;
	int8_t x36 = INT8_MIN;

    t8 = (((x33>x34)*x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static volatile int32_t t9 = -382763;

    t9 = (((x37>x38)*x39)/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -1;
	int64_t x43 = -237815LL;
	uint16_t x44 = UINT16_MAX;
	int64_t t10 = -1401853660369LL;

    t10 = (((x41>x42)*x43)/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	static volatile int32_t x48 = -1;

    t11 = (((x45>x46)*x47)/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 6;
	uint16_t x51 = 100U;
	volatile int32_t x52 = -34175;

    t12 = (((x49>x50)*x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = 431173210U;
	volatile uint8_t x55 = 8U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 103440;

    t13 = (((x53>x54)*x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = -96702;
	int32_t x59 = INT32_MIN;
	static uint32_t x60 = 14031092U;
	uint32_t t14 = 160U;

    t14 = (((x57>x58)*x59)/x60);

    if (t14 != 153U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = INT64_MIN;
	static int64_t t15 = -7521LL;

    t15 = (((x61>x62)*x63)/x64);

    if (t15 != -6673930562123571LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int64_t x66 = -1LL;
	int8_t x67 = -1;
	int64_t x68 = 125889038778115665LL;

    t16 = (((x65>x66)*x67)/x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	static int8_t x72 = -1;

    t17 = (((x69>x70)*x71)/x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	volatile uint16_t x74 = 1U;
	static volatile int8_t x75 = 53;
	int16_t x76 = 111;
	int32_t t18 = -34;

    t18 = (((x73>x74)*x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 22U;
	static int8_t x82 = -1;
	int16_t x84 = -1;
	int32_t t19 = -929364524;

    t19 = (((x81>x82)*x83)/x84);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 11U;
	volatile int8_t x86 = -20;
	int32_t x88 = -984054;
	int64_t t20 = -1066465592155239349LL;

    t20 = (((x85>x86)*x87)/x88);

    if (t20 != -462389LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1LL;
	int32_t x90 = -1;
	uint32_t x91 = 124027U;
	static int8_t x92 = INT8_MIN;
	volatile uint32_t t21 = 338236U;

    t21 = (((x89>x90)*x91)/x92);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 352U;
	volatile int32_t x94 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	int64_t t22 = 2LL;

    t22 = (((x93>x94)*x95)/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = -7888998;
	uint16_t x99 = 1U;

    t23 = (((x97>x98)*x99)/x100);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MAX;
	int32_t x103 = 9342702;
	int8_t x104 = INT8_MAX;
	static int32_t t24 = 108777;

    t24 = (((x101>x102)*x103)/x104);

    if (t24 != 73564) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	volatile uint32_t x106 = 1918U;
	volatile int8_t x107 = INT8_MAX;
	uint64_t x108 = 36369513932LLU;
	uint64_t t25 = 11016LLU;

    t25 = (((x105>x106)*x107)/x108);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x111 = 11U;
	static volatile int64_t t26 = -5964175LL;

    t26 = (((x109>x110)*x111)/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = -1;
	int64_t x114 = -1LL;
	int8_t x115 = INT8_MAX;
	static volatile int32_t t27 = -71;

    t27 = (((x113>x114)*x115)/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MAX;
	uint16_t x120 = UINT16_MAX;
	int64_t t28 = 62LL;

    t28 = (((x117>x118)*x119)/x120);

    if (t28 != 140739635871744LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 1066143804179529143LLU;
	volatile int64_t x123 = INT64_MIN;
	volatile int64_t t29 = 273LL;

    t29 = (((x121>x122)*x123)/x124);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = 1;
	static uint8_t x126 = 32U;
	uint8_t x127 = 1U;
	int64_t t30 = 1658784602LL;

    t30 = (((x125>x126)*x127)/x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x130 = 3;
	int64_t x131 = -20556709LL;
	uint32_t x132 = 3U;
	volatile int64_t t31 = -696523141142LL;

    t31 = (((x129>x130)*x131)/x132);

    if (t31 != -6852236LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint8_t x133 = UINT8_MAX;
	static uint64_t x134 = 239LLU;
	uint32_t x135 = 2027U;
	uint8_t x136 = 110U;

    t32 = (((x133>x134)*x135)/x136);

    if (t32 != 18U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 60786050LLU;
	uint32_t x139 = 1286U;
	static uint32_t t33 = 6563356U;

    t33 = (((x137>x138)*x139)/x140);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = -36;
	static int8_t x143 = 6;
	uint8_t x144 = 12U;
	static int32_t t34 = -217;

    t34 = (((x141>x142)*x143)/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = 0;
	uint32_t x152 = 95906161U;
	volatile uint32_t t35 = 5011U;

    t35 = (((x149>x150)*x151)/x152);

    if (t35 != 44U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x154 = 0;
	uint16_t x155 = 1502U;
	volatile int32_t t36 = 0;

    t36 = (((x153>x154)*x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	volatile int32_t x158 = 10511;
	int32_t x159 = 33;
	int32_t x160 = -1;

    t37 = (((x157>x158)*x159)/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x161 = INT32_MIN;
	uint8_t x162 = 8U;
	int32_t x163 = INT32_MAX;
	int8_t x164 = 2;
	int32_t t38 = -109414233;

    t38 = (((x161>x162)*x163)/x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = 67302013U;
	int8_t x167 = INT8_MIN;
	volatile int64_t x168 = INT64_MAX;
	volatile int64_t t39 = -14LL;

    t39 = (((x165>x166)*x167)/x168);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x169 = INT8_MIN;
	int16_t x170 = 423;
	volatile int32_t x171 = INT32_MAX;
	uint64_t x172 = 461596163291052112LLU;
	volatile uint64_t t40 = 14702070LLU;

    t40 = (((x169>x170)*x171)/x172);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = 5;
	uint64_t x174 = 509542LLU;
	static int32_t x175 = INT32_MAX;
	uint64_t x176 = 37714711521225LLU;
	volatile uint64_t t41 = 178430054152571LLU;

    t41 = (((x173>x174)*x175)/x176);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = -1;
	volatile int64_t x178 = INT64_MAX;
	static volatile int16_t x179 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;
	uint32_t t42 = 20807U;

    t42 = (((x177>x178)*x179)/x180);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x181 = INT64_MAX;
	uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile uint8_t x184 = UINT8_MAX;
	uint64_t t43 = 183484LLU;

    t43 = (((x181>x182)*x183)/x184);

    if (t43 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = 61U;
	int8_t x186 = 35;
	static int16_t x187 = -115;
	uint64_t x188 = 26LLU;
	uint64_t t44 = 2LLU;

    t44 = (((x185>x186)*x187)/x188);

    if (t44 != 709490156681136596LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x189 = 62U;
	int64_t x190 = INT64_MIN;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;
	int32_t t45 = 2;

    t45 = (((x189>x190)*x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x193 = 1883;
	int64_t x194 = -540LL;
	int32_t x195 = -1;
	int16_t x196 = INT16_MIN;

    t46 = (((x193>x194)*x195)/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 3324776355159467735LLU;

    t47 = (((x197>x198)*x199)/x200);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = UINT64_MAX;
	static int32_t x202 = INT32_MAX;
	static int32_t x204 = -127228150;
	static volatile int32_t t48 = 28175;

    t48 = (((x201>x202)*x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	volatile int32_t t49 = -3311;

    t49 = (((x205>x206)*x207)/x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = 285;
	int8_t x210 = -2;
	int8_t x211 = INT8_MIN;
	static volatile int8_t x212 = -1;
	volatile int32_t t50 = 13182;

    t50 = (((x209>x210)*x211)/x212);

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 8902817826216LLU;
	int64_t x214 = INT64_MIN;
	static int32_t x216 = -4;

    t51 = (((x213>x214)*x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -64867;
	static uint16_t x218 = 52U;
	int64_t t52 = 125653LL;

    t52 = (((x217>x218)*x219)/x220);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	static uint32_t x222 = 775191U;
	volatile int64_t x223 = INT64_MIN;
	int8_t x224 = INT8_MIN;

    t53 = (((x221>x222)*x223)/x224);

    if (t53 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x226 = 31560U;
	int16_t x227 = INT16_MAX;
	volatile int8_t x228 = 1;
	static volatile int32_t t54 = 1;

    t54 = (((x225>x226)*x227)/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = -256435350;
	int32_t x230 = INT32_MAX;
	int8_t x232 = 43;
	int32_t t55 = 100;

    t55 = (((x229>x230)*x231)/x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = 4873;
	static uint8_t x236 = 2U;
	volatile int32_t t56 = 99488;

    t56 = (((x233>x234)*x235)/x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = UINT16_MAX;
	int64_t x239 = INT64_MAX;
	int16_t x240 = -145;

    t57 = (((x237>x238)*x239)/x240);

    if (t57 != -63609462323136384LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x242 = -1;
	uint64_t x243 = 78498480597193LLU;
	static int16_t x244 = INT16_MIN;
	volatile uint64_t t58 = 3044064081922835LLU;

    t58 = (((x241>x242)*x243)/x244);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MAX;
	int64_t x246 = 880LL;
	uint64_t x247 = 5866264LLU;
	int16_t x248 = -1;
	uint64_t t59 = 1464917LLU;

    t59 = (((x245>x246)*x247)/x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x251 = INT64_MAX;
	volatile uint16_t x252 = 1U;
	volatile int64_t t60 = 7126438736377LL;

    t60 = (((x249>x250)*x251)/x252);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MAX;
	volatile int32_t x254 = 0;
	int8_t x255 = INT8_MIN;
	static int32_t x256 = 26724906;

    t61 = (((x253>x254)*x255)/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 83942LLU;
	volatile uint64_t x258 = 37LLU;
	static uint16_t x259 = 3258U;
	uint64_t x260 = UINT64_MAX;
	uint64_t t62 = 65284827940LLU;

    t62 = (((x257>x258)*x259)/x260);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x261 = -1004;
	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = 1346461638243LL;
	uint32_t x264 = 424077174U;
	volatile int64_t t63 = -11198820328709LL;

    t63 = (((x261>x262)*x263)/x264);

    if (t63 != 3175LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	static int16_t x268 = -1;

    t64 = (((x265>x266)*x267)/x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -750003;
	uint64_t x270 = 220880355LLU;
	volatile int16_t x272 = -7502;
	volatile int32_t t65 = -22;

    t65 = (((x269>x270)*x271)/x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x273 = 10459LLU;
	int64_t x274 = -15437758879734521LL;
	uint8_t x275 = UINT8_MAX;
	static int64_t x276 = -1LL;
	int64_t t66 = -1456906986LL;

    t66 = (((x273>x274)*x275)/x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x277 = 0U;
	int32_t x280 = INT32_MIN;
	volatile int64_t t67 = -1828165312182174044LL;

    t67 = (((x277>x278)*x279)/x280);

    if (t67 != -29LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int64_t x284 = INT64_MAX;

    t68 = (((x281>x282)*x283)/x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = INT64_MAX;
	volatile uint64_t t69 = 2405665743668906LLU;

    t69 = (((x285>x286)*x287)/x288);

    if (t69 != 1192LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x289 = 11U;
	int16_t x290 = INT16_MIN;
	volatile int64_t x291 = INT64_MAX;
	int8_t x292 = -1;
	int64_t t70 = 52552308635LL;

    t70 = (((x289>x290)*x291)/x292);

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 348104961U;
	int8_t x294 = 4;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = 396416640986467LL;
	int64_t t71 = 148870971242LL;

    t71 = (((x293>x294)*x295)/x296);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	uint64_t x298 = 56774531262LLU;
	volatile int64_t x299 = INT64_MIN;
	static uint32_t x300 = 51169820U;

    t72 = (((x297>x298)*x299)/x300);

    if (t72 != -180250234158LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x303 = -1;
	volatile uint64_t t73 = 14277711814897996LLU;

    t73 = (((x301>x302)*x303)/x304);

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x306 = INT16_MAX;
	volatile uint16_t x307 = 16288U;
	uint8_t x308 = UINT8_MAX;
	int32_t t74 = 152923014;

    t74 = (((x305>x306)*x307)/x308);

    if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x310 = 0U;
	uint32_t x311 = 26U;
	static volatile int32_t x312 = -7860;
	static uint32_t t75 = 266U;

    t75 = (((x309>x310)*x311)/x312);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 1;
	uint64_t x315 = 1391651302620725821LLU;
	uint16_t x316 = 97U;

    t76 = (((x313>x314)*x315)/x316);

    if (t76 != 14346920645574493LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x319 = -1;
	volatile int64_t x320 = -296010LL;
	int64_t t77 = -6481563547LL;

    t77 = (((x317>x318)*x319)/x320);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x321 = 0U;
	int64_t x322 = 252136035470875LL;
	volatile uint64_t x324 = 1222LLU;

    t78 = (((x321>x322)*x323)/x324);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -68;
	int16_t x328 = 27;
	int32_t t79 = -732408883;

    t79 = (((x325>x326)*x327)/x328);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -1LL;
	volatile uint32_t x330 = UINT32_MAX;
	volatile int64_t t80 = -10391597LL;

    t80 = (((x329>x330)*x331)/x332);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -1;
	int32_t x334 = INT32_MIN;
	volatile uint8_t x335 = 61U;
	int32_t x336 = -1;
	static int32_t t81 = -267;

    t81 = (((x333>x334)*x335)/x336);

    if (t81 != -61) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = INT8_MAX;
	volatile int16_t x338 = -1;
	uint32_t x339 = 5U;
	int8_t x340 = INT8_MIN;

    t82 = (((x337>x338)*x339)/x340);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = 3621228;
	static int32_t x342 = INT32_MIN;
	volatile int16_t x344 = -1;
	int32_t t83 = -1064122;

    t83 = (((x341>x342)*x343)/x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = INT32_MIN;
	int64_t x346 = -1LL;
	volatile uint16_t x347 = 880U;
	volatile int16_t x348 = INT16_MAX;
	int32_t t84 = -124655791;

    t84 = (((x345>x346)*x347)/x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x353 = UINT8_MAX;
	static volatile int8_t x355 = INT8_MIN;
	volatile uint8_t x356 = 7U;
	int32_t t85 = -312209;

    t85 = (((x353>x354)*x355)/x356);

    if (t85 != -18) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x357 = UINT64_MAX;
	volatile int16_t x358 = 357;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t86 = 2;

    t86 = (((x357>x358)*x359)/x360);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x362 = INT8_MIN;
	int32_t x364 = -9941440;
	int32_t t87 = 25;

    t87 = (((x361>x362)*x363)/x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x366 = UINT64_MAX;
	static volatile int16_t x367 = INT16_MIN;
	volatile uint64_t x368 = 98484343204LLU;

    t88 = (((x365>x366)*x367)/x368);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = INT16_MAX;
	int64_t x371 = 2123782759555306LL;
	int32_t x372 = -1;
	int64_t t89 = 0LL;

    t89 = (((x369>x370)*x371)/x372);

    if (t89 != -2123782759555306LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x373 = 7850LLU;
	int64_t x374 = INT64_MIN;
	uint64_t x376 = 1984697662190225LLU;
	static uint64_t t90 = 2992207686941LLU;

    t90 = (((x373>x374)*x375)/x376);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x377 = -1;
	volatile int32_t x378 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	volatile int64_t x380 = INT64_MIN;
	volatile uint64_t t91 = 4248704165425843041LLU;

    t91 = (((x377>x378)*x379)/x380);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x384 = -1;

    t92 = (((x381>x382)*x383)/x384);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x389 = INT64_MIN;
	static uint32_t x390 = 8684801U;
	static int64_t x391 = -1LL;
	int8_t x392 = -1;

    t93 = (((x389>x390)*x391)/x392);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = UINT16_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int32_t x396 = -1;

    t94 = (((x393>x394)*x395)/x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x397 = 85265959U;
	int64_t x398 = 4LL;
	int32_t x399 = INT32_MIN;
	int64_t t95 = -35453LL;

    t95 = (((x397>x398)*x399)/x400);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x406 = INT64_MIN;
	volatile int16_t x408 = INT16_MAX;
	volatile int32_t t96 = 478;

    t96 = (((x405>x406)*x407)/x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x410 = INT32_MIN;
	static volatile int16_t x411 = INT16_MIN;
	uint64_t x412 = 5LLU;
	static volatile uint64_t t97 = 72091816113LLU;

    t97 = (((x409>x410)*x411)/x412);

    if (t97 != 3689348814741903769LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x413 = 0U;
	int32_t x414 = -219356;
	static int32_t x415 = INT32_MIN;
	static int8_t x416 = INT8_MIN;

    t98 = (((x413>x414)*x415)/x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x417 = 26;
	volatile uint32_t x418 = 21408U;
	int8_t x419 = 1;
	uint32_t x420 = UINT32_MAX;
	static uint32_t t99 = 504450U;

    t99 = (((x417>x418)*x419)/x420);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MAX;
	uint32_t x422 = UINT32_MAX;
	volatile uint64_t t100 = 0LLU;

    t100 = (((x421>x422)*x423)/x424);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = -1;
	volatile int32_t x426 = INT32_MAX;
	int32_t x428 = -1;

    t101 = (((x425>x426)*x427)/x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = INT16_MAX;
	int64_t x430 = INT64_MAX;
	uint32_t x431 = 1806827U;

    t102 = (((x429>x430)*x431)/x432);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = INT64_MAX;
	static volatile int64_t x434 = -11566038835LL;
	static int32_t x435 = -1;
	int64_t x436 = INT64_MIN;
	static int64_t t103 = 1017478159202LL;

    t103 = (((x433>x434)*x435)/x436);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = -1LL;
	int64_t x438 = -115939306226661205LL;
	uint16_t x439 = 26U;
	static int16_t x440 = INT16_MAX;
	int32_t t104 = -120;

    t104 = (((x437>x438)*x439)/x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x442 = -1;
	uint8_t x444 = 13U;

    t105 = (((x441>x442)*x443)/x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = INT64_MIN;
	static volatile uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MIN;

    t106 = (((x445>x446)*x447)/x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = -1;
	uint64_t x450 = UINT64_MAX;
	uint16_t x451 = 190U;
	static uint16_t x452 = 28U;
	int32_t t107 = -40931;

    t107 = (((x449>x450)*x451)/x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x453 = UINT64_MAX;
	int8_t x455 = -1;
	int64_t x456 = INT64_MIN;

    t108 = (((x453>x454)*x455)/x456);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x458 = INT32_MAX;
	uint8_t x459 = 29U;
	volatile int8_t x460 = INT8_MAX;
	int32_t t109 = -190544448;

    t109 = (((x457>x458)*x459)/x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x461 = 12284053U;
	int32_t x464 = 3;
	volatile int64_t t110 = 173703168638LL;

    t110 = (((x461>x462)*x463)/x464);

    if (t110 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = -1;
	int16_t x466 = INT16_MIN;
	int64_t x467 = -1LL;
	volatile int32_t x468 = 205609554;
	volatile int64_t t111 = -1463220231LL;

    t111 = (((x465>x466)*x467)/x468);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -438937918358211LL;
	static int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	int32_t t112 = 11613;

    t112 = (((x469>x470)*x471)/x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MAX;
	int64_t x475 = 0LL;
	volatile int64_t t113 = -4176834LL;

    t113 = (((x473>x474)*x475)/x476);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = INT16_MIN;
	volatile int32_t x478 = INT32_MIN;
	static uint32_t x479 = UINT32_MAX;
	volatile int64_t t114 = -8181647585903578LL;

    t114 = (((x477>x478)*x479)/x480);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x482 = INT16_MAX;
	int8_t x484 = 4;
	static volatile int64_t t115 = -274428689465LL;

    t115 = (((x481>x482)*x483)/x484);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x485 = UINT64_MAX;
	static int32_t x486 = INT32_MAX;
	int64_t x487 = INT64_MIN;
	static volatile int64_t t116 = 465351505515440LL;

    t116 = (((x485>x486)*x487)/x488);

    if (t116 != -335529558618166LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x489 = 36177967891314LLU;
	static int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MAX;
	uint32_t x492 = 494618986U;
	int64_t t117 = 343807736861LL;

    t117 = (((x489>x490)*x491)/x492);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = -31;
	uint64_t x494 = 35507732LLU;
	int64_t x495 = 820777825080891LL;
	int32_t x496 = INT32_MIN;
	int64_t t118 = 456905409576409378LL;

    t118 = (((x493>x494)*x495)/x496);

    if (t118 != -382204LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x497 = 8170U;
	static int16_t x499 = 0;
	volatile int16_t x500 = -1;
	int32_t t119 = -47228;

    t119 = (((x497>x498)*x499)/x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = -1;
	volatile int16_t x502 = 49;
	int8_t x503 = 17;
	volatile int32_t t120 = -6290800;

    t120 = (((x501>x502)*x503)/x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x505 = UINT16_MAX;
	static uint8_t x506 = UINT8_MAX;
	int16_t x507 = INT16_MIN;
	static volatile int16_t x508 = -1;
	int32_t t121 = -448;

    t121 = (((x505>x506)*x507)/x508);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x509 = 34U;
	int64_t x510 = INT64_MIN;
	static int8_t x511 = 6;
	uint8_t x512 = 2U;
	int32_t t122 = 3;

    t122 = (((x509>x510)*x511)/x512);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x513 = 4U;
	int8_t x514 = INT8_MAX;
	int16_t x515 = INT16_MIN;
	static int32_t t123 = 14782;

    t123 = (((x513>x514)*x515)/x516);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = INT64_MIN;
	uint16_t x518 = UINT16_MAX;
	static int32_t x519 = -1;
	uint32_t x520 = 50U;

    t124 = (((x517>x518)*x519)/x520);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x521 = 11;
	static int32_t x522 = INT32_MIN;
	int64_t x524 = -21771458352658469LL;
	volatile int64_t t125 = 112570607LL;

    t125 = (((x521>x522)*x523)/x524);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x525 = 325U;
	int8_t x527 = INT8_MIN;
	volatile int16_t x528 = -15;
	volatile int32_t t126 = 10;

    t126 = (((x525>x526)*x527)/x528);

    if (t126 != 8) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x530 = 25U;
	uint16_t x531 = 7768U;
	int32_t x532 = INT32_MIN;
	int32_t t127 = 9822;

    t127 = (((x529>x530)*x531)/x532);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x533 = 3U;
	int16_t x534 = -1;
	int64_t x535 = 500783839214190LL;
	static int32_t x536 = -1;
	volatile int64_t t128 = -243171LL;

    t128 = (((x533>x534)*x535)/x536);

    if (t128 != -500783839214190LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = 2051587338287567LL;
	int64_t t129 = -26061509LL;

    t129 = (((x537>x538)*x539)/x540);

    if (t129 != -164703072086692425LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = INT16_MIN;
	volatile uint64_t x542 = 34246299782777LLU;
	uint64_t x543 = UINT64_MAX;
	int8_t x544 = 1;
	uint64_t t130 = UINT64_MAX;

    t130 = (((x541>x542)*x543)/x544);

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x545 = 9269908897120078LLU;
	int32_t x546 = INT32_MIN;
	int64_t x547 = 1150917710087225039LL;
	uint64_t t131 = 13177460318LLU;

    t131 = (((x545>x546)*x547)/x548);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x549 = INT16_MAX;
	volatile int16_t x550 = INT16_MIN;
	int32_t x551 = INT32_MIN;
	volatile int32_t x552 = INT32_MIN;
	volatile int32_t t132 = -188985;

    t132 = (((x549>x550)*x551)/x552);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -1LL;
	int64_t x554 = -1LL;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t133 = 52302U;

    t133 = (((x553>x554)*x555)/x556);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x557 = INT16_MAX;
	static volatile uint32_t x559 = 146U;
	uint16_t x560 = 859U;
	uint32_t t134 = 83032045U;

    t134 = (((x557>x558)*x559)/x560);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x562 = -6;
	volatile int8_t x564 = 10;
	int64_t t135 = -71679720625LL;

    t135 = (((x561>x562)*x563)/x564);

    if (t135 != 336719342972191723LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = INT32_MAX;
	volatile int64_t x566 = INT64_MAX;
	int8_t x567 = INT8_MIN;
	static uint64_t x568 = 854LLU;
	volatile uint64_t t136 = 147LLU;

    t136 = (((x565>x566)*x567)/x568);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x569 = 168839LL;
	int32_t x570 = INT32_MAX;
	uint64_t x571 = 380LLU;
	volatile uint64_t t137 = 42389LLU;

    t137 = (((x569>x570)*x571)/x572);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x573 = -48;
	int64_t x574 = -10985635218845315LL;
	uint32_t x575 = 217023U;
	volatile uint32_t t138 = 3916894U;

    t138 = (((x573>x574)*x575)/x576);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = 0;
	int8_t x579 = -1;
	int64_t x580 = INT64_MIN;
	volatile int64_t t139 = -2338LL;

    t139 = (((x577>x578)*x579)/x580);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = -1;
	int32_t x582 = -1;
	volatile uint32_t x583 = 0U;
	uint16_t x584 = 14U;
	uint32_t t140 = 879U;

    t140 = (((x581>x582)*x583)/x584);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = 360050;
	int64_t x586 = 1821434LL;
	uint16_t x588 = 2618U;
	volatile int64_t t141 = -322251LL;

    t141 = (((x585>x586)*x587)/x588);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x589 = INT64_MIN;
	int16_t x591 = INT16_MIN;
	uint32_t x592 = 825141564U;
	volatile uint32_t t142 = 0U;

    t142 = (((x589>x590)*x591)/x592);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x600 = INT32_MAX;
	volatile uint32_t t143 = 4719180U;

    t143 = (((x597>x598)*x599)/x600);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x601 = INT64_MIN;
	int64_t x602 = INT64_MIN;
	uint64_t t144 = 3955799221975892339LLU;

    t144 = (((x601>x602)*x603)/x604);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x607 = INT16_MIN;
	volatile int32_t t145 = 414609739;

    t145 = (((x605>x606)*x607)/x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x609 = 15675U;
	volatile int32_t x610 = -1;
	volatile int64_t x611 = INT64_MIN;
	uint32_t x612 = 356491684U;
	volatile int64_t t146 = -4024589562944611702LL;

    t146 = (((x609>x610)*x611)/x612);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x613 = -1;
	int64_t x615 = 716193606LL;
	volatile uint8_t x616 = 1U;
	volatile int64_t t147 = 1344LL;

    t147 = (((x613>x614)*x615)/x616);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x617 = 0U;
	static int64_t x619 = INT64_MIN;
	int16_t x620 = INT16_MAX;
	static volatile int64_t t148 = 16635LL;

    t148 = (((x617>x618)*x619)/x620);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x621 = -1LL;
	uint16_t x622 = UINT16_MAX;
	static volatile int16_t x623 = -1;
	uint32_t x624 = 226643U;

    t149 = (((x621>x622)*x623)/x624);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x625 = INT64_MIN;
	int16_t x626 = INT16_MIN;
	volatile int8_t x627 = INT8_MIN;
	uint8_t x628 = 18U;

    t150 = (((x625>x626)*x627)/x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x630 = 60882857951831LLU;
	static int16_t x631 = INT16_MIN;
	static uint16_t x632 = 85U;
	int32_t t151 = 524677;

    t151 = (((x629>x630)*x631)/x632);

    if (t151 != -385) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x633 = 423860LLU;
	volatile int64_t x635 = -12188LL;
	static uint8_t x636 = 11U;
	volatile int64_t t152 = 47307835LL;

    t152 = (((x633>x634)*x635)/x636);

    if (t152 != -1108LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x637 = -1LL;
	uint32_t x638 = 169258U;
	int64_t x640 = INT64_MAX;
	int64_t t153 = 14401962322683LL;

    t153 = (((x637>x638)*x639)/x640);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x641 = 10U;
	int64_t x642 = INT64_MIN;
	uint32_t x644 = 69265U;

    t154 = (((x641>x642)*x643)/x644);

    if (t154 != 62007U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x645 = INT64_MIN;
	volatile uint32_t x647 = 16027U;
	uint16_t x648 = 2U;
	volatile uint32_t t155 = 120696940U;

    t155 = (((x645>x646)*x647)/x648);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x650 = INT16_MIN;
	volatile int32_t x651 = -15093927;

    t156 = (((x649>x650)*x651)/x652);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x653 = UINT16_MAX;
	uint64_t x654 = 16763281509167LLU;
	uint16_t x655 = UINT16_MAX;
	int32_t x656 = -1;
	int32_t t157 = -1;

    t157 = (((x653>x654)*x655)/x656);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x657 = INT64_MIN;
	uint8_t x658 = 4U;
	volatile int8_t x659 = INT8_MIN;
	int16_t x660 = -1;
	static volatile int32_t t158 = -19787054;

    t158 = (((x657>x658)*x659)/x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x661 = 22U;
	int16_t x662 = INT16_MIN;
	uint64_t x663 = 1754934LLU;
	uint32_t x664 = 261267004U;

    t159 = (((x661>x662)*x663)/x664);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = -2834;
	int64_t x666 = INT64_MIN;
	int8_t x667 = INT8_MIN;
	static uint64_t x668 = 1400470539188155720LLU;
	volatile uint64_t t160 = 6993568415045595LLU;

    t160 = (((x665>x666)*x667)/x668);

    if (t160 != 13LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x669 = 6090925319024707969LLU;
	int32_t x671 = -4173403;
	volatile int32_t x672 = -3755;
	int32_t t161 = 607;

    t161 = (((x669>x670)*x671)/x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x674 = 1U;
	int8_t x675 = -1;
	int16_t x676 = 1;
	int32_t t162 = -21918;

    t162 = (((x673>x674)*x675)/x676);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x678 = 877839LL;
	volatile int64_t x679 = -15967894937LL;
	static uint16_t x680 = 14U;
	int64_t t163 = 6999122587LL;

    t163 = (((x677>x678)*x679)/x680);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MIN;
	volatile int32_t x682 = -119707;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = UINT8_MAX;
	static int64_t t164 = -6572312LL;

    t164 = (((x681>x682)*x683)/x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = INT32_MAX;
	int64_t x686 = INT64_MIN;
	volatile uint64_t x687 = UINT64_MAX;
	static uint8_t x688 = 4U;
	uint64_t t165 = 20263475LLU;

    t165 = (((x685>x686)*x687)/x688);

    if (t165 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x689 = INT8_MAX;
	static int64_t x690 = INT64_MAX;
	static volatile int64_t x691 = INT64_MIN;
	int32_t x692 = -145366;
	volatile int64_t t166 = -20114941164703LL;

    t166 = (((x689>x690)*x691)/x692);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t t167 = 13699;

    t167 = (((x693>x694)*x695)/x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x698 = 2311;
	int16_t x699 = INT16_MAX;
	int16_t x700 = 5389;

    t168 = (((x697>x698)*x699)/x700);

    if (t168 != 6) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = 818089377;
	uint32_t x702 = 12096U;
	static int16_t x703 = INT16_MAX;
	static uint32_t x704 = 2U;
	volatile uint32_t t169 = 109395U;

    t169 = (((x701>x702)*x703)/x704);

    if (t169 != 16383U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x705 = UINT16_MAX;
	uint64_t x706 = UINT64_MAX;
	int32_t x707 = INT32_MIN;
	int8_t x708 = 1;
	volatile int32_t t170 = 64598;

    t170 = (((x705>x706)*x707)/x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	volatile int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MIN;
	volatile int8_t x712 = 10;
	volatile int64_t t171 = -14325595020416098LL;

    t171 = (((x709>x710)*x711)/x712);

    if (t171 != -922337203685477580LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x713 = -52;
	int8_t x715 = -1;
	uint16_t x716 = 4014U;
	volatile int32_t t172 = -553705795;

    t172 = (((x713>x714)*x715)/x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = -57;
	int32_t x719 = 13967914;
	static int32_t x720 = INT32_MAX;
	static volatile int32_t t173 = 393839459;

    t173 = (((x717>x718)*x719)/x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x721 = INT64_MIN;
	uint8_t x722 = UINT8_MAX;
	int32_t x723 = INT32_MAX;
	uint16_t x724 = 1064U;
	static volatile int32_t t174 = 215602905;

    t174 = (((x721>x722)*x723)/x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x725 = UINT32_MAX;
	int64_t x726 = INT64_MIN;
	int8_t x727 = -1;
	uint64_t x728 = 3253000821352892LLU;
	static uint64_t t175 = 13LLU;

    t175 = (((x725>x726)*x727)/x728);

    if (t175 != 5670LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x729 = 12LLU;
	static int32_t x730 = INT32_MIN;
	int8_t x732 = INT8_MIN;

    t176 = (((x729>x730)*x731)/x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x733 = -326367LL;
	int64_t x734 = 307540850667925LL;
	int64_t x735 = 4219LL;
	volatile int64_t t177 = 7787327447LL;

    t177 = (((x733>x734)*x735)/x736);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x737 = 66906787U;
	static int16_t x738 = INT16_MAX;
	static int32_t x739 = INT32_MIN;
	int32_t x740 = INT32_MAX;
	int32_t t178 = -31495073;

    t178 = (((x737>x738)*x739)/x740);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = -424570LL;
	uint64_t x742 = UINT64_MAX;
	volatile int64_t x743 = 1587707LL;
	volatile int64_t t179 = 50661192977458LL;

    t179 = (((x741>x742)*x743)/x744);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x745 = UINT8_MAX;
	volatile int8_t x747 = -6;
	volatile int8_t x748 = -11;

    t180 = (((x745>x746)*x747)/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x749 = -513159260LL;
	static uint8_t x751 = UINT8_MAX;
	static uint64_t x752 = UINT64_MAX;
	volatile uint64_t t181 = 891814651LLU;

    t181 = (((x749>x750)*x751)/x752);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x757 = INT16_MIN;
	int64_t x759 = INT64_MAX;
	int32_t x760 = -1;
	int64_t t182 = -17042301379094LL;

    t182 = (((x757>x758)*x759)/x760);

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x761 = 1824U;
	int16_t x762 = INT16_MIN;
	uint8_t x764 = UINT8_MAX;
	uint64_t t183 = 0LLU;

    t183 = (((x761>x762)*x763)/x764);

    if (t183 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x765 = 2;
	uint32_t x766 = UINT32_MAX;
	int32_t x767 = -1;
	volatile int16_t x768 = INT16_MAX;
	volatile int32_t t184 = 94;

    t184 = (((x765>x766)*x767)/x768);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x769 = INT32_MIN;
	int32_t t185 = 238956;

    t185 = (((x769>x770)*x771)/x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x773 = INT32_MIN;
	static int16_t x774 = INT16_MAX;
	int16_t x775 = INT16_MAX;
	volatile int8_t x776 = -2;

    t186 = (((x773>x774)*x775)/x776);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x777 = 600669539;
	volatile uint32_t x780 = 46U;
	volatile int64_t t187 = -12470758001287LL;

    t187 = (((x777>x778)*x779)/x780);

    if (t187 != -200508087757712517LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x781 = -1;
	static uint32_t x782 = 0U;
	int32_t x783 = INT32_MIN;
	int8_t x784 = 19;
	volatile int32_t t188 = -1;

    t188 = (((x781>x782)*x783)/x784);

    if (t188 != -113025455) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x786 = 346695LLU;
	volatile int16_t x787 = INT16_MAX;
	int32_t x788 = INT32_MIN;
	int32_t t189 = 32940647;

    t189 = (((x785>x786)*x787)/x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x790 = 2483U;
	volatile int64_t x791 = INT64_MAX;
	uint64_t t190 = 7111686697131887LLU;

    t190 = (((x789>x790)*x791)/x792);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x793 = 10464LLU;
	static int64_t x794 = INT64_MIN;
	int32_t x795 = INT32_MIN;
	uint16_t x796 = 29668U;
	int32_t t191 = 368706821;

    t191 = (((x793>x794)*x795)/x796);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = INT16_MAX;
	int16_t x799 = -1;
	int32_t x800 = INT32_MAX;
	static int32_t t192 = 651;

    t192 = (((x797>x798)*x799)/x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x805 = -1;
	uint16_t x806 = 253U;
	int16_t x808 = -1;
	volatile int32_t t193 = -53738977;

    t193 = (((x805>x806)*x807)/x808);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x809 = -60;
	static int64_t x810 = -1LL;
	static volatile int64_t x811 = -1LL;
	static int64_t t194 = 0LL;

    t194 = (((x809>x810)*x811)/x812);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x813 = 1LLU;
	int8_t x814 = 1;
	int32_t t195 = 107119;

    t195 = (((x813>x814)*x815)/x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x817 = 22653;
	int64_t x818 = INT64_MAX;
	static volatile int16_t x819 = -1;
	uint16_t x820 = 381U;
	int32_t t196 = 1703;

    t196 = (((x817>x818)*x819)/x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	int64_t x822 = INT64_MAX;
	volatile int16_t x823 = -1;
	uint64_t x824 = 29180LLU;

    t197 = (((x821>x822)*x823)/x824);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x825 = 4052;
	uint16_t x826 = UINT16_MAX;
	uint8_t x827 = UINT8_MAX;
	uint32_t x828 = 1126U;
	uint32_t t198 = 3586U;

    t198 = (((x825>x826)*x827)/x828);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x829 = 24213236909583360LLU;
	static volatile int32_t x830 = INT32_MIN;
	int64_t x831 = 15223LL;
	static uint32_t x832 = UINT32_MAX;
	volatile int64_t t199 = -267928354151211LL;

    t199 = (((x829>x830)*x831)/x832);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

