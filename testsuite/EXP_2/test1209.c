
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

int16_t x1 = INT16_MIN;
int8_t x2 = 62;
int64_t x3 = INT64_MAX;
uint8_t x4 = 100U;
int64_t x5 = INT64_MIN;
volatile uint8_t x9 = 9U;
uint8_t x10 = 11U;
volatile int32_t x11 = -1;
static volatile int8_t x19 = INT8_MIN;
volatile int32_t t4 = 307571;
uint8_t x21 = 28U;
volatile int16_t x23 = INT16_MIN;
int16_t x28 = INT16_MAX;
volatile int16_t x37 = INT16_MIN;
int8_t x38 = -1;
int16_t x45 = -2;
uint64_t x46 = UINT64_MAX;
uint8_t x49 = UINT8_MAX;
static volatile int64_t x54 = INT64_MAX;
uint16_t x57 = UINT16_MAX;
int32_t x58 = -196924170;
uint64_t x62 = UINT64_MAX;
static volatile int16_t x65 = INT16_MAX;
int32_t x68 = INT32_MIN;
volatile int8_t x72 = INT8_MIN;
uint64_t x74 = 1011779LLU;
uint16_t x75 = 0U;
volatile int64_t x76 = INT64_MIN;
volatile uint16_t x77 = 231U;
uint64_t x82 = 898002037314LLU;
static int16_t x87 = INT16_MIN;
int64_t x88 = INT64_MIN;
int8_t x89 = -1;
static volatile uint32_t x92 = UINT32_MAX;
uint32_t x96 = UINT32_MAX;
volatile int16_t x97 = 2;
int8_t x101 = INT8_MIN;
int64_t x103 = -136333188LL;
int32_t x106 = INT32_MIN;
uint64_t x139 = 1872830008373145LLU;
volatile int64_t t34 = -525844001960541363LL;
uint8_t x151 = 3U;
static int8_t x153 = INT8_MIN;
int16_t x161 = INT16_MIN;
uint64_t t39 = 2005366807LLU;
static int64_t x176 = -1LL;
volatile int32_t x183 = INT32_MIN;
static volatile uint64_t x195 = 487718599358LLU;
volatile uint8_t x203 = UINT8_MAX;
int8_t x211 = INT8_MIN;
static int32_t x215 = INT32_MIN;
volatile uint64_t t51 = 132909529LLU;
uint8_t x219 = 6U;
volatile int8_t x221 = -1;
uint64_t x222 = 13LLU;
uint8_t x224 = 2U;
int64_t x231 = -1LL;
volatile int8_t x233 = INT8_MAX;
uint8_t x235 = 34U;
int64_t x248 = 1LL;
int16_t x250 = -1;
static int32_t x255 = -1;
static int64_t x260 = INT64_MAX;
int32_t x265 = 19583;
int8_t x266 = INT8_MIN;
int32_t x271 = -1;
static uint64_t t63 = 347177LLU;
int64_t x273 = 4273156488365130LL;
volatile int64_t t64 = -26390013555LL;
volatile uint8_t x281 = UINT8_MAX;
uint64_t x282 = 408896LLU;
uint32_t x287 = UINT32_MAX;
uint32_t t67 = 415070812U;
int8_t x289 = INT8_MIN;
static int64_t x294 = INT64_MAX;
uint8_t x306 = 1U;
volatile uint8_t x312 = UINT8_MAX;
int32_t t73 = -38354543;
uint64_t x313 = 44136021LLU;
int32_t t75 = 2812;
int32_t x325 = INT32_MAX;
volatile int64_t x327 = -1LL;
volatile int32_t x331 = INT32_MIN;
int8_t x338 = INT8_MIN;
uint64_t t80 = 3759650022LLU;
int32_t t81 = 7990546;
int32_t t83 = 43;
uint64_t x356 = 19498981232398640LLU;
uint16_t x363 = 2U;
uint8_t x365 = UINT8_MAX;
volatile int32_t x366 = -1;
int8_t x367 = -1;
int32_t x368 = -10735;
static int32_t x378 = INT32_MIN;
static int8_t x379 = INT8_MIN;
int32_t t91 = 143247;
int16_t x388 = -1;
int32_t x389 = INT32_MAX;
static volatile uint32_t t93 = 1378U;
static int64_t x396 = -9532370399195748LL;
volatile int64_t t94 = 1229099LL;
int64_t x401 = INT64_MIN;
uint64_t x402 = 2LLU;
static int8_t x403 = INT8_MIN;
uint16_t x416 = 7U;
static uint8_t x429 = UINT8_MAX;
static int8_t x435 = INT8_MAX;
static volatile uint16_t x437 = UINT16_MAX;
int32_t x442 = -1;
int32_t x452 = INT32_MIN;
static int32_t x454 = 295;
int16_t x463 = INT16_MAX;
int32_t x464 = -118882;
int16_t x465 = INT16_MAX;
static uint32_t x466 = UINT32_MAX;
uint64_t x467 = UINT64_MAX;
int32_t t112 = -30;
uint16_t x469 = 181U;
uint16_t x471 = 885U;
static uint8_t x475 = UINT8_MAX;
uint32_t x477 = UINT32_MAX;
volatile int64_t x483 = -1LL;
volatile uint16_t x484 = 6U;
uint32_t x489 = 111U;
static int8_t x490 = INT8_MIN;
uint32_t t118 = 17939684U;
int16_t x495 = 1;
uint64_t x498 = 529LLU;
volatile int8_t x500 = -30;
volatile int32_t t120 = -5964401;
int32_t x511 = INT32_MAX;
uint32_t x513 = UINT32_MAX;
volatile uint32_t t124 = 1U;
volatile int8_t x518 = INT8_MIN;
static int16_t x521 = 102;
volatile int32_t t126 = -7982;
int32_t x530 = INT32_MAX;
volatile int16_t x531 = INT16_MAX;
volatile int64_t t128 = -4033464LL;
static int32_t x553 = INT32_MAX;
int64_t x559 = 1LL;
static int8_t x563 = -1;
uint32_t x568 = 61609078U;
int16_t x572 = INT16_MIN;
volatile int32_t t138 = 177;
uint16_t x578 = 10068U;
volatile uint8_t x582 = UINT8_MAX;
int32_t x584 = -1;
volatile int16_t x594 = 1;
volatile uint64_t x602 = UINT64_MAX;
volatile int64_t t144 = -1520129817955661LL;
volatile int32_t x606 = -318455;
uint32_t x612 = 137036U;
uint32_t t146 = 26042U;
static uint64_t x613 = 404951165LLU;
uint64_t x614 = 555403808661LLU;
int64_t x615 = -95584490LL;
uint64_t t147 = 236384272487709079LLU;
volatile int64_t x620 = INT64_MAX;
int16_t x644 = INT16_MIN;
volatile uint16_t x648 = UINT16_MAX;
static int16_t x662 = -1;
uint32_t x663 = UINT32_MAX;
static int32_t x664 = INT32_MIN;
static int16_t x676 = INT16_MIN;
static int16_t x680 = INT16_MIN;
volatile int16_t x684 = -1;
int16_t x686 = INT16_MIN;
volatile uint64_t x688 = 9950770655923975LLU;
volatile int16_t x691 = INT16_MIN;
volatile uint16_t x692 = 412U;
uint64_t t167 = 15839LLU;
int32_t x704 = -5740668;
uint64_t x708 = 1791LLU;
int64_t t171 = -8635708134703091LL;
int16_t x717 = -1;
int8_t x727 = INT8_MIN;
int8_t x731 = INT8_MAX;
uint16_t x732 = 3591U;
static int64_t x739 = INT64_MAX;
static volatile int32_t t179 = 3;
static int32_t t180 = -16667701;
static uint8_t x758 = 55U;
int64_t x759 = 7501342008897264LL;
uint16_t x761 = UINT16_MAX;
static volatile uint32_t x762 = 7012150U;
int64_t t182 = 57861615086209LL;
static int64_t x766 = -1LL;
int64_t x773 = -1LL;
int32_t x774 = 432;
int8_t x779 = INT8_MIN;
int64_t x781 = INT64_MAX;
int64_t x783 = INT64_MAX;
static int16_t x797 = 16;
int16_t x801 = INT16_MAX;
int8_t x803 = -1;
static uint8_t x804 = 32U;
static uint16_t x805 = 1U;
static int8_t x806 = 56;
int64_t t194 = -4813590096503542LL;
volatile int32_t x813 = INT32_MIN;
int16_t x814 = INT16_MAX;
int16_t x815 = INT16_MIN;
volatile int32_t t196 = -57;
int8_t x821 = INT8_MIN;
int64_t x822 = -677692787LL;


void f0(void) {
    	volatile int32_t t0 = -118;

    t0 = ((x1*(x2!=x3))%x4);

    if (t0 != -68) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	static volatile int64_t t1 = 485087168493421LL;

    t1 = ((x5*(x6!=x7))%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -24563;

    t2 = ((x9*(x10!=x11))%x12);

    if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static uint32_t x14 = 4498U;
	uint16_t x15 = 1666U;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 20034973LL;

    t3 = ((x13*(x14!=x15))%x16);

    if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static int8_t x18 = -16;
	volatile int16_t x20 = 12366;

    t4 = ((x17*(x18!=x19))%x20);

    if (t4 != -8036) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	int64_t x24 = -13LL;
	int64_t t5 = -437376LL;

    t5 = ((x21*(x22!=x23))%x24);

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 97U;
	int16_t x26 = -44;
	int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 0;

    t6 = ((x25*(x26!=x27))%x28);

    if (t6 != 97) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -108723508439689880LL;
	volatile uint32_t x30 = 0U;
	static int8_t x31 = 1;
	int32_t x32 = -1;
	int64_t t7 = -235261013596093LL;

    t7 = ((x29*(x30!=x31))%x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	static int8_t x35 = -1;
	volatile int8_t x36 = 4;
	int32_t t8 = -929568;

    t8 = ((x33*(x34!=x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x39 = 103U;
	uint16_t x40 = 22147U;
	volatile int32_t t9 = -389423;

    t9 = ((x37*(x38!=x39))%x40);

    if (t9 != -10621) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -218950;

    t10 = ((x45*(x46!=x47))%x48);

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x50 = 6222U;
	static int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	volatile int64_t t11 = 42314141LL;

    t11 = ((x49*(x50!=x51))%x52);

    if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	uint8_t x55 = 21U;
	int64_t x56 = 72LL;
	volatile int64_t t12 = 5LL;

    t12 = ((x53*(x54!=x55))%x56);

    if (t12 != -8LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x59 = UINT32_MAX;
	static int8_t x60 = 36;
	int32_t t13 = 25;

    t13 = ((x57*(x58!=x59))%x60);

    if (t13 != 15) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x61 = 5U;
	uint64_t x63 = 26107458767LLU;
	static uint64_t x64 = 109721772146LLU;
	uint64_t t14 = 100477968007080LLU;

    t14 = ((x61*(x62!=x63))%x64);

    if (t14 != 5LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	static int32_t t15 = 435964;

    t15 = ((x65*(x66!=x67))%x68);

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x69 = UINT32_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile int32_t x71 = INT32_MAX;
	static volatile uint32_t t16 = 6594U;

    t16 = ((x69*(x70!=x71))%x72);

    if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile int64_t t17 = 8115419916327LL;

    t17 = ((x73*(x74!=x75))%x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = -10846;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	int32_t t18 = 731880;

    t18 = ((x77*(x78!=x79))%x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 57306758LLU;
	static volatile uint64_t x83 = 1063823386LLU;
	int64_t x84 = -51LL;
	uint64_t t19 = 8905204LLU;

    t19 = ((x81*(x82!=x83))%x84);

    if (t19 != 57306758LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x85 = 1U;
	int64_t x86 = -583031587496982LL;
	int64_t t20 = -3342356154362LL;

    t20 = ((x85*(x86!=x87))%x88);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = INT16_MAX;
	uint8_t x91 = 78U;
	uint32_t t21 = 1U;

    t21 = ((x89*(x90!=x91))%x92);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = 0;
	volatile int32_t x94 = 32;
	int32_t x95 = INT32_MAX;
	volatile uint32_t t22 = 109778U;

    t22 = ((x93*(x94!=x95))%x96);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = 98656;
	static int64_t x99 = INT64_MIN;
	uint16_t x100 = 747U;
	volatile int32_t t23 = -1642;

    t23 = ((x97*(x98!=x99))%x100);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x102 = INT8_MAX;
	static int16_t x104 = INT16_MIN;
	static volatile int32_t t24 = 22820775;

    t24 = ((x101*(x102!=x103))%x104);

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 1;
	int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MAX;
	int64_t t25 = -1084844851832747980LL;

    t25 = ((x105*(x106!=x107))%x108);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x109 = -1;
	uint8_t x110 = 2U;
	int16_t x111 = INT16_MAX;
	volatile int32_t x112 = -1;
	volatile int32_t t26 = -2450159;

    t26 = ((x109*(x110!=x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = INT16_MAX;
	uint64_t x114 = 10538134455893LLU;
	uint64_t x115 = 7160LLU;
	int16_t x116 = -1;
	volatile int32_t t27 = 2626480;

    t27 = ((x113*(x114!=x115))%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 12U;
	volatile uint16_t x118 = UINT16_MAX;
	static uint16_t x119 = UINT16_MAX;
	uint8_t x120 = 5U;
	volatile int32_t t28 = -7396;

    t28 = ((x117*(x118!=x119))%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x121 = -4;
	int32_t x122 = INT32_MIN;
	static int64_t x123 = -110309182840LL;
	int8_t x124 = INT8_MIN;
	int32_t t29 = 237083;

    t29 = ((x121*(x122!=x123))%x124);

    if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 65334U;
	int16_t x126 = -1;
	int64_t x127 = -1LL;
	uint16_t x128 = 3506U;
	volatile uint32_t t30 = 3U;

    t30 = ((x125*(x126!=x127))%x128);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = -1;
	uint8_t x130 = 1U;
	uint64_t x131 = 49323652553188LLU;
	uint8_t x132 = 3U;
	static int32_t t31 = -5;

    t31 = ((x129*(x130!=x131))%x132);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -170728241LL;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = 1541799206LLU;
	uint16_t x136 = 2U;
	static int64_t t32 = 13LL;

    t32 = ((x133*(x134!=x135))%x136);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = 5832275LL;
	uint8_t x138 = 3U;
	volatile int32_t x140 = INT32_MAX;
	volatile int64_t t33 = 11051668102LL;

    t33 = ((x137*(x138!=x139))%x140);

    if (t33 != 5832275LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x141 = 268168511U;
	int32_t x142 = INT32_MAX;
	static int64_t x143 = -20LL;
	volatile int64_t x144 = -1LL;

    t34 = ((x141*(x142!=x143))%x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = 13;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = 0;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 897824;

    t35 = ((x145*(x146!=x147))%x148);

    if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	static int64_t x150 = INT64_MAX;
	int32_t x152 = -180040672;
	static volatile int32_t t36 = -1446;

    t36 = ((x149*(x150!=x151))%x152);

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x154 = INT32_MIN;
	int64_t x155 = 1548978897234LL;
	static int32_t x156 = -1;
	volatile int32_t t37 = -2;

    t37 = ((x153*(x154!=x155))%x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -1LL;
	static uint16_t x158 = UINT16_MAX;
	static volatile uint32_t x159 = 575U;
	int8_t x160 = INT8_MAX;
	volatile int64_t t38 = 28912682735LL;

    t38 = ((x157*(x158!=x159))%x160);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x162 = INT32_MIN;
	uint32_t x163 = 0U;
	uint64_t x164 = UINT64_MAX;

    t39 = ((x161*(x162!=x163))%x164);

    if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	volatile int8_t x167 = 1;
	int64_t x168 = -1LL;
	volatile int64_t t40 = 524051474LL;

    t40 = ((x165*(x166!=x167))%x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = -1;
	static int8_t x171 = 0;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t41 = -1;

    t41 = ((x169*(x170!=x171))%x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x173 = 1;
	volatile int64_t x174 = INT64_MIN;
	static int64_t x175 = INT64_MAX;
	int64_t t42 = 1000932038446LL;

    t42 = ((x173*(x174!=x175))%x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x177 = INT8_MIN;
	static uint8_t x178 = 35U;
	uint16_t x179 = 11U;
	int8_t x180 = INT8_MIN;
	int32_t t43 = 122864298;

    t43 = ((x177*(x178!=x179))%x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x181 = 11;
	int8_t x182 = -21;
	int32_t x184 = INT32_MAX;
	volatile int32_t t44 = 0;

    t44 = ((x181*(x182!=x183))%x184);

    if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x185 = 1;
	volatile int64_t x186 = 462708032149596LL;
	int32_t x187 = 1815115;
	int64_t x188 = 504202125946022100LL;
	volatile int64_t t45 = 121LL;

    t45 = ((x185*(x186!=x187))%x188);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = -1;
	int64_t x194 = INT64_MAX;
	static int16_t x196 = INT16_MAX;
	int32_t t46 = -1486;

    t46 = ((x193*(x194!=x195))%x196);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = -1;
	static int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MAX;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -5882;

    t47 = ((x197*(x198!=x199))%x200);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 6U;
	volatile int8_t x202 = INT8_MIN;
	volatile int16_t x204 = INT16_MIN;
	int32_t t48 = 1;

    t48 = ((x201*(x202!=x203))%x204);

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -6;
	uint8_t x206 = 81U;
	volatile int16_t x207 = -10;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t49 = -27;

    t49 = ((x205*(x206!=x207))%x208);

    if (t49 != -6) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = 4561659825LL;
	int16_t x210 = 26;
	volatile int64_t x212 = INT64_MAX;
	int64_t t50 = 12699526606923LL;

    t50 = ((x209*(x210!=x211))%x212);

    if (t50 != 4561659825LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MIN;
	uint64_t x216 = 31117603547308293LLU;

    t51 = ((x213*(x214!=x215))%x216);

    if (t51 != 25122771555558512LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = UINT64_MAX;
	uint32_t x218 = 5540U;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t52 = 194787LLU;

    t52 = ((x217*(x218!=x219))%x220);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x223 = INT64_MIN;
	volatile int32_t t53 = 146312;

    t53 = ((x221*(x222!=x223))%x224);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MIN;
	static int32_t x226 = -1;
	uint32_t x227 = 144U;
	static volatile int16_t x228 = -1;
	volatile int32_t t54 = -115;

    t54 = ((x225*(x226!=x227))%x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x229 = 125U;
	volatile uint32_t x230 = 261204U;
	volatile int8_t x232 = INT8_MIN;
	static volatile uint32_t t55 = 13U;

    t55 = ((x229*(x230!=x231))%x232);

    if (t55 != 125U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x234 = UINT8_MAX;
	static int16_t x236 = INT16_MAX;
	int32_t t56 = -6843;

    t56 = ((x233*(x234!=x235))%x236);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 3804684U;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t57 = 3LLU;

    t57 = ((x237*(x238!=x239))%x240);

    if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = 0;
	uint64_t x246 = 802082824295559LLU;
	int16_t x247 = -5;
	static int64_t t58 = 3980108339734LL;

    t58 = ((x245*(x246!=x247))%x248);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x249 = -1;
	int8_t x251 = 1;
	uint16_t x252 = 10U;
	static int32_t t59 = -180341450;

    t59 = ((x249*(x250!=x251))%x252);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = 2U;
	volatile uint64_t x254 = 29671LLU;
	static int16_t x256 = INT16_MIN;
	static volatile int32_t t60 = -2511;

    t60 = ((x253*(x254!=x255))%x256);

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	volatile int8_t x258 = -1;
	uint64_t x259 = 105399529499LLU;
	int64_t t61 = -1670729936LL;

    t61 = ((x257*(x258!=x259))%x260);

    if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x267 = 517338732719LL;
	uint16_t x268 = UINT16_MAX;
	static volatile int32_t t62 = 14869698;

    t62 = ((x265*(x266!=x267))%x268);

    if (t62 != 19583) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x269 = 104666LLU;
	int64_t x270 = 184707740851LL;
	volatile int16_t x272 = INT16_MAX;

    t63 = ((x269*(x270!=x271))%x272);

    if (t63 != 6365LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x274 = UINT32_MAX;
	int16_t x275 = 164;
	static int16_t x276 = -3;

    t64 = ((x273*(x274!=x275))%x276);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = 1U;
	int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	int32_t t65 = -4323;

    t65 = ((x277*(x278!=x279))%x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t66 = 15941930;

    t66 = ((x281*(x282!=x283))%x284);

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = 26U;
	int32_t x286 = 5186;
	uint32_t x288 = 3132U;

    t67 = ((x285*(x286!=x287))%x288);

    if (t67 != 26U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x290 = 31U;
	int8_t x291 = INT8_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	uint32_t t68 = 292U;

    t68 = ((x289*(x290!=x291))%x292);

    if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x293 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t69 = 1185292;

    t69 = ((x293*(x294!=x295))%x296);

    if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x297 = UINT8_MAX;
	uint32_t x298 = UINT32_MAX;
	static uint32_t x299 = 196U;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t70 = -15975;

    t70 = ((x297*(x298!=x299))%x300);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x301 = 1182;
	uint16_t x302 = 1300U;
	int32_t x303 = 566021;
	int8_t x304 = INT8_MAX;
	int32_t t71 = -15;

    t71 = ((x301*(x302!=x303))%x304);

    if (t71 != 39) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = -1;
	static volatile uint32_t x307 = 178795U;
	uint8_t x308 = 1U;
	volatile int32_t t72 = 3;

    t72 = ((x305*(x306!=x307))%x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	static uint64_t x311 = UINT64_MAX;

    t73 = ((x309*(x310!=x311))%x312);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x314 = 7312241819LLU;
	static uint16_t x315 = 3U;
	uint32_t x316 = 5791660U;
	static volatile uint64_t t74 = 0LLU;

    t74 = ((x313*(x314!=x315))%x316);

    if (t74 != 3594401LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MAX;
	uint16_t x318 = 2882U;
	int32_t x319 = 1;
	volatile uint16_t x320 = 88U;

    t75 = ((x317*(x318!=x319))%x320);

    if (t75 != 23) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = 12106187628173LL;
	int64_t x322 = -1453894LL;
	volatile int16_t x323 = -14;
	uint16_t x324 = UINT16_MAX;
	volatile int64_t t76 = 24947357098153LL;

    t76 = ((x321*(x322!=x323))%x324);

    if (t76 != 6803LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x326 = UINT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t77 = -18509;

    t77 = ((x325*(x326!=x327))%x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x329 = 209U;
	static uint16_t x330 = UINT16_MAX;
	static uint16_t x332 = UINT16_MAX;
	int32_t t78 = 8048710;

    t78 = ((x329*(x330!=x331))%x332);

    if (t78 != 209) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x333 = UINT8_MAX;
	int8_t x334 = 1;
	volatile int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 9720U;
	uint32_t t79 = 18418807U;

    t79 = ((x333*(x334!=x335))%x336);

    if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x337 = 140002875767473942LLU;
	static uint16_t x339 = 486U;
	uint64_t x340 = 8453922451LLU;

    t80 = ((x337*(x338!=x339))%x340);

    if (t80 != 2233198242LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x341 = -853;
	int16_t x342 = INT16_MIN;
	int32_t x343 = -364075066;
	int8_t x344 = INT8_MAX;

    t81 = ((x341*(x342!=x343))%x344);

    if (t81 != -91) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x345 = INT64_MIN;
	static uint8_t x346 = 0U;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = -3;
	volatile int64_t t82 = -16886604747083315LL;

    t82 = ((x345*(x346!=x347))%x348);

    if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x349 = INT8_MAX;
	uint16_t x350 = 272U;
	int16_t x351 = -1;
	uint8_t x352 = UINT8_MAX;

    t83 = ((x349*(x350!=x351))%x352);

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x353 = -1;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = 57;
	uint64_t t84 = 61462824LLU;

    t84 = ((x353*(x354!=x355))%x356);

    if (t84 != 707827860438175LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = INT8_MAX;
	volatile int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t85 = -50008;

    t85 = ((x357*(x358!=x359))%x360);

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x361 = UINT64_MAX;
	static int64_t x362 = 158226307LL;
	static uint32_t x364 = UINT32_MAX;
	volatile uint64_t t86 = 3565952LLU;

    t86 = ((x361*(x362!=x363))%x364);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t t87 = 3860;

    t87 = ((x365*(x366!=x367))%x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	static uint8_t x371 = 7U;
	int8_t x372 = 8;
	int32_t t88 = -3;

    t88 = ((x369*(x370!=x371))%x372);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = -7;
	uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = -1;
	int16_t x376 = 257;
	int32_t t89 = 14656388;

    t89 = ((x373*(x374!=x375))%x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = -1;
	int16_t x380 = -4;
	int32_t t90 = -39;

    t90 = ((x377*(x378!=x379))%x380);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = INT16_MAX;
	static uint32_t x382 = UINT32_MAX;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = -1;

    t91 = ((x381*(x382!=x383))%x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = 0;
	static int8_t x386 = -19;
	int32_t x387 = 0;
	int32_t t92 = -10060131;

    t92 = ((x385*(x386!=x387))%x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x390 = 7259949868773LLU;
	uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 7567U;

    t93 = ((x389*(x390!=x391))%x392);

    if (t93 != 6882U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = 76U;
	static int16_t x394 = -3;
	int16_t x395 = 739;

    t94 = ((x393*(x394!=x395))%x396);

    if (t94 != 76LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x397 = -1;
	static volatile int16_t x398 = INT16_MIN;
	static uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t95 = -1395138;

    t95 = ((x397*(x398!=x399))%x400);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x404 = INT64_MAX;
	volatile int64_t t96 = -129878829270424892LL;

    t96 = ((x401*(x402!=x403))%x404);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = INT32_MIN;
	static int64_t x406 = INT64_MIN;
	int64_t x407 = -1LL;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t97 = -1419041214190358LL;

    t97 = ((x405*(x406!=x407))%x408);

    if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = INT64_MIN;
	uint16_t x410 = 14U;
	volatile int16_t x411 = 3440;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t98 = 554265321LLU;

    t98 = ((x409*(x410!=x411))%x412);

    if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x413 = 6700083607873LLU;
	static int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	static volatile uint64_t t99 = 2977756564LLU;

    t99 = ((x413*(x414!=x415))%x416);

    if (t99 != 5LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	volatile int64_t x418 = INT64_MAX;
	int32_t x419 = -25970166;
	uint8_t x420 = UINT8_MAX;
	volatile uint64_t t100 = 1036784152986284LLU;

    t100 = ((x417*(x418!=x419))%x420);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x421 = -1;
	volatile int32_t x422 = INT32_MIN;
	int64_t x423 = -2020927LL;
	int8_t x424 = INT8_MIN;
	int32_t t101 = -1102;

    t101 = ((x421*(x422!=x423))%x424);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x425 = 1U;
	int32_t x426 = -1968093;
	volatile int8_t x427 = -9;
	static int16_t x428 = -1;
	int32_t t102 = -3452952;

    t102 = ((x425*(x426!=x427))%x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x430 = INT16_MIN;
	static volatile int8_t x431 = INT8_MIN;
	uint64_t x432 = 1LLU;
	static uint64_t t103 = 201753615414560LLU;

    t103 = ((x429*(x430!=x431))%x432);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MIN;
	uint16_t x434 = UINT16_MAX;
	int16_t x436 = INT16_MIN;
	static int32_t t104 = 2441;

    t104 = ((x433*(x434!=x435))%x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x438 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	static uint16_t x440 = 36U;
	static int32_t t105 = -12888;

    t105 = ((x437*(x438!=x439))%x440);

    if (t105 != 15) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x441 = INT64_MAX;
	int16_t x443 = INT16_MIN;
	int64_t x444 = 1LL;
	int64_t t106 = -31LL;

    t106 = ((x441*(x442!=x443))%x444);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x445 = 158U;
	int16_t x446 = INT16_MAX;
	volatile uint8_t x447 = 105U;
	int16_t x448 = INT16_MAX;
	uint32_t t107 = 3618810U;

    t107 = ((x445*(x446!=x447))%x448);

    if (t107 != 158U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x449 = 0;
	int64_t x450 = -1LL;
	uint64_t x451 = UINT64_MAX;
	int32_t t108 = 1260;

    t108 = ((x449*(x450!=x451))%x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x453 = INT32_MIN;
	volatile uint16_t x455 = 0U;
	uint64_t x456 = UINT64_MAX;
	static volatile uint64_t t109 = 1163204605641LLU;

    t109 = ((x453*(x454!=x455))%x456);

    if (t109 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x457 = -1LL;
	uint32_t x458 = 921937U;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MAX;
	static volatile int64_t t110 = 1069487100253044LL;

    t110 = ((x457*(x458!=x459))%x460);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x461 = 8U;
	int64_t x462 = INT64_MAX;
	volatile int32_t t111 = 43857;

    t111 = ((x461*(x462!=x463))%x464);

    if (t111 != 8) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x468 = 11U;

    t112 = ((x465*(x466!=x467))%x468);

    if (t112 != 9) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x470 = 33843426U;
	int8_t x472 = -1;
	static volatile int32_t t113 = 25341;

    t113 = ((x469*(x470!=x471))%x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x473 = -1;
	int8_t x474 = -1;
	int64_t x476 = INT64_MIN;
	volatile int64_t t114 = 269885946656LL;

    t114 = ((x473*(x474!=x475))%x476);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MIN;
	volatile int64_t x480 = INT64_MIN;
	static volatile int64_t t115 = 660775LL;

    t115 = ((x477*(x478!=x479))%x480);

    if (t115 != 4294967295LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = -1;
	uint8_t x482 = 7U;
	int32_t t116 = -64573;

    t116 = ((x481*(x482!=x483))%x484);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x485 = 366;
	static volatile int64_t x486 = INT64_MAX;
	uint32_t x487 = UINT32_MAX;
	static int16_t x488 = INT16_MIN;
	int32_t t117 = 3;

    t117 = ((x485*(x486!=x487))%x488);

    if (t117 != 366) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x491 = UINT64_MAX;
	int8_t x492 = -1;

    t118 = ((x489*(x490!=x491))%x492);

    if (t118 != 111U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x493 = 31618U;
	int8_t x494 = -1;
	int64_t x496 = 14923LL;
	static volatile int64_t t119 = -5LL;

    t119 = ((x493*(x494!=x495))%x496);

    if (t119 != 1772LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x497 = 2771;
	int8_t x499 = INT8_MAX;

    t120 = ((x497*(x498!=x499))%x500);

    if (t120 != 11) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x501 = UINT64_MAX;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = 1363LL;
	int8_t x504 = INT8_MIN;
	uint64_t t121 = 4630LLU;

    t121 = ((x501*(x502!=x503))%x504);

    if (t121 != 127LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x505 = INT8_MAX;
	uint8_t x506 = 0U;
	volatile int16_t x507 = -1;
	int16_t x508 = 381;
	int32_t t122 = -557;

    t122 = ((x505*(x506!=x507))%x508);

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x509 = 0U;
	int16_t x510 = -82;
	int8_t x512 = INT8_MIN;
	volatile int32_t t123 = 2242;

    t123 = ((x509*(x510!=x511))%x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x514 = -1;
	static int32_t x515 = INT32_MAX;
	int8_t x516 = 12;

    t124 = ((x513*(x514!=x515))%x516);

    if (t124 != 3U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = 1;
	volatile int8_t x519 = -56;
	static volatile uint64_t x520 = 24567461730858LLU;
	volatile uint64_t t125 = 15LLU;

    t125 = ((x517*(x518!=x519))%x520);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	static uint16_t x524 = UINT16_MAX;

    t126 = ((x521*(x522!=x523))%x524);

    if (t126 != 102) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x525 = 51U;
	int32_t x526 = 237;
	int8_t x527 = -1;
	uint16_t x528 = 57U;
	int32_t t127 = 1;

    t127 = ((x525*(x526!=x527))%x528);

    if (t127 != 51) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = INT64_MIN;
	static int32_t x532 = INT32_MAX;

    t128 = ((x529*(x530!=x531))%x532);

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x533 = UINT8_MAX;
	uint32_t x534 = 341273014U;
	int8_t x535 = INT8_MIN;
	static int64_t x536 = INT64_MIN;
	volatile int64_t t129 = 1250708097LL;

    t129 = ((x533*(x534!=x535))%x536);

    if (t129 != 255LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x537 = 1;
	uint8_t x538 = UINT8_MAX;
	static uint64_t x539 = 266414685598151LLU;
	int8_t x540 = INT8_MIN;
	int32_t t130 = -12816594;

    t130 = ((x537*(x538!=x539))%x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x541 = UINT32_MAX;
	int16_t x542 = -1;
	int16_t x543 = INT16_MAX;
	static volatile int8_t x544 = INT8_MIN;
	volatile uint32_t t131 = 974679U;

    t131 = ((x541*(x542!=x543))%x544);

    if (t131 != 127U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x545 = INT8_MAX;
	int64_t x546 = -1LL;
	int16_t x547 = 7;
	int8_t x548 = -5;
	volatile int32_t t132 = -123961;

    t132 = ((x545*(x546!=x547))%x548);

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = INT8_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	int8_t x551 = INT8_MIN;
	static int16_t x552 = -1;
	volatile int32_t t133 = 96334;

    t133 = ((x549*(x550!=x551))%x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x554 = -1;
	int16_t x555 = INT16_MAX;
	int64_t x556 = -1LL;
	int64_t t134 = -1427231029828961447LL;

    t134 = ((x553*(x554!=x555))%x556);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x557 = -1;
	int16_t x558 = -14969;
	uint32_t x560 = 995U;
	volatile uint32_t t135 = 5421185U;

    t135 = ((x557*(x558!=x559))%x560);

    if (t135 != 45U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = 662567940815LLU;
	volatile int8_t x562 = INT8_MIN;
	uint16_t x564 = 1890U;
	uint64_t t136 = 19908578577LLU;

    t136 = ((x561*(x562!=x563))%x564);

    if (t136 != 95LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x565 = 18130U;
	static int8_t x566 = INT8_MAX;
	int32_t x567 = -1;
	uint32_t t137 = 2694355U;

    t137 = ((x565*(x566!=x567))%x568);

    if (t137 != 18130U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x569 = 1U;
	volatile int8_t x570 = INT8_MIN;
	static volatile int16_t x571 = INT16_MAX;

    t138 = ((x569*(x570!=x571))%x572);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = INT8_MAX;
	int8_t x579 = 2;
	volatile int16_t x580 = -1;
	volatile int32_t t139 = 14;

    t139 = ((x577*(x578!=x579))%x580);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x581 = 526611703U;
	static uint64_t x583 = 3455797052683LLU;
	uint32_t t140 = 212418269U;

    t140 = ((x581*(x582!=x583))%x584);

    if (t140 != 526611703U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = -1LL;
	uint16_t x587 = 1U;
	int16_t x588 = 44;
	int64_t t141 = -34419288328485379LL;

    t141 = ((x585*(x586!=x587))%x588);

    if (t141 != -8LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x593 = INT16_MIN;
	uint16_t x595 = 7282U;
	int8_t x596 = -1;
	int32_t t142 = 1615;

    t142 = ((x593*(x594!=x595))%x596);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x597 = 218;
	uint8_t x598 = UINT8_MAX;
	int64_t x599 = INT64_MAX;
	uint16_t x600 = 6U;
	int32_t t143 = -1126474;

    t143 = ((x597*(x598!=x599))%x600);

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = 1LL;
	static volatile int16_t x603 = -15;
	volatile int16_t x604 = -1;

    t144 = ((x601*(x602!=x603))%x604);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x607 = -1;
	int16_t x608 = -1;
	int32_t t145 = -972;

    t145 = ((x605*(x606!=x607))%x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x609 = 5;
	volatile int64_t x610 = INT64_MIN;
	volatile int8_t x611 = -5;

    t146 = ((x609*(x610!=x611))%x612);

    if (t146 != 5U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x616 = UINT32_MAX;

    t147 = ((x613*(x614!=x615))%x616);

    if (t147 != 404951165LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x617 = 0U;
	uint8_t x618 = 5U;
	int64_t x619 = INT64_MAX;
	int64_t t148 = 13395LL;

    t148 = ((x617*(x618!=x619))%x620);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x621 = -9300;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = INT8_MAX;
	volatile int32_t x624 = INT32_MAX;
	int32_t t149 = -18;

    t149 = ((x621*(x622!=x623))%x624);

    if (t149 != -9300) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = INT8_MAX;
	int64_t x626 = INT64_MIN;
	volatile int64_t x627 = INT64_MAX;
	uint16_t x628 = 16120U;
	int32_t t150 = 117;

    t150 = ((x625*(x626!=x627))%x628);

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x629 = -1;
	static uint64_t x630 = 2255LLU;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = 5;
	int32_t t151 = 319651;

    t151 = ((x629*(x630!=x631))%x632);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MIN;
	uint32_t x635 = 1858734U;
	int32_t x636 = 51183;
	volatile int32_t t152 = -1821176;

    t152 = ((x633*(x634!=x635))%x636);

    if (t152 != -49700) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = -391848;
	volatile int32_t x638 = -130347631;
	uint64_t x639 = 202294LLU;
	static volatile uint64_t x640 = UINT64_MAX;
	volatile uint64_t t153 = 3553850144519391LLU;

    t153 = ((x637*(x638!=x639))%x640);

    if (t153 != 18446744073709159768LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = -66401392LL;
	uint32_t x642 = 19U;
	int64_t x643 = -82351981533LL;
	static int64_t t154 = -115020LL;

    t154 = ((x641*(x642!=x643))%x644);

    if (t154 != -13424LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = INT32_MIN;
	volatile int16_t x646 = -1;
	int16_t x647 = INT16_MIN;
	static volatile int32_t t155 = 1682;

    t155 = ((x645*(x646!=x647))%x648);

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x649 = 28;
	volatile int32_t x650 = INT32_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile uint64_t x652 = 2734052122833522874LLU;
	static uint64_t t156 = 28199938847LLU;

    t156 = ((x649*(x650!=x651))%x652);

    if (t156 != 28LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x653 = 8U;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 113862113LLU;
	uint8_t x656 = 20U;
	int32_t t157 = -144326344;

    t157 = ((x653*(x654!=x655))%x656);

    if (t157 != 8) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x657 = 445;
	static volatile uint8_t x658 = UINT8_MAX;
	int16_t x659 = -136;
	uint16_t x660 = 11U;
	volatile int32_t t158 = 95677360;

    t158 = ((x657*(x658!=x659))%x660);

    if (t158 != 5) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x661 = -1LL;
	static volatile int64_t t159 = 305744535068LL;

    t159 = ((x661*(x662!=x663))%x664);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x669 = -1;
	volatile uint64_t x670 = UINT64_MAX;
	uint32_t x671 = 191513U;
	int32_t x672 = -54;
	int32_t t160 = 156179;

    t160 = ((x669*(x670!=x671))%x672);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x673 = 57143106356722546LLU;
	uint64_t x674 = 934LLU;
	static int32_t x675 = -113161;
	uint64_t t161 = 139679087LLU;

    t161 = ((x673*(x674!=x675))%x676);

    if (t161 != 57143106356722546LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x677 = 6045;
	static uint16_t x678 = UINT16_MAX;
	volatile int16_t x679 = INT16_MAX;
	int32_t t162 = -179;

    t162 = ((x677*(x678!=x679))%x680);

    if (t162 != 6045) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MIN;
	static volatile int16_t x683 = 14;
	volatile int32_t t163 = 851;

    t163 = ((x681*(x682!=x683))%x684);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	uint64_t t164 = 349370829770379LLU;

    t164 = ((x685*(x686!=x687))%x688);

    if (t164 != 7966048282425813LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x689 = 0U;
	int64_t x690 = -1LL;
	static volatile int32_t t165 = 371144032;

    t165 = ((x689*(x690!=x691))%x692);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x693 = INT64_MIN;
	static int32_t x694 = -1;
	static int16_t x695 = -10314;
	static volatile uint32_t x696 = 57U;
	int64_t t166 = -3980198363646LL;

    t166 = ((x693*(x694!=x695))%x696);

    if (t166 != -56LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x697 = INT32_MIN;
	static int16_t x698 = 26;
	static uint64_t x699 = 468946297406781550LLU;
	uint64_t x700 = 97282LLU;

    t167 = ((x697*(x698!=x699))%x700);

    if (t167 != 13964LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = 1;
	int8_t x702 = -25;
	uint32_t x703 = 212U;
	int32_t t168 = 421076;

    t168 = ((x701*(x702!=x703))%x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x705 = 3888;
	static volatile int8_t x706 = INT8_MIN;
	int32_t x707 = -1;
	static uint64_t t169 = 7981008822800LLU;

    t169 = ((x705*(x706!=x707))%x708);

    if (t169 != 306LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x709 = 5U;
	volatile int8_t x710 = -1;
	volatile int32_t x711 = INT32_MAX;
	int64_t x712 = -1LL;
	int64_t t170 = -11079216222LL;

    t170 = ((x709*(x710!=x711))%x712);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x713 = -36935;
	static uint16_t x714 = 7U;
	static int32_t x715 = 1;
	volatile int64_t x716 = INT64_MAX;

    t171 = ((x713*(x714!=x715))%x716);

    if (t171 != -36935LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x718 = -1;
	volatile int32_t x719 = -1;
	int8_t x720 = INT8_MAX;
	static int32_t t172 = -241552;

    t172 = ((x717*(x718!=x719))%x720);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x721 = -4168791LL;
	volatile uint16_t x722 = 9U;
	int32_t x723 = INT32_MIN;
	int64_t x724 = -1LL;
	volatile int64_t t173 = -721331293328LL;

    t173 = ((x721*(x722!=x723))%x724);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x725 = 46;
	volatile int64_t x726 = 30433324829073086LL;
	volatile int64_t x728 = INT64_MIN;
	int64_t t174 = 255099416773LL;

    t174 = ((x725*(x726!=x727))%x728);

    if (t174 != 46LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x729 = UINT8_MAX;
	static uint16_t x730 = 15156U;
	int32_t t175 = 3;

    t175 = ((x729*(x730!=x731))%x732);

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x733 = 1;
	uint64_t x734 = 517LLU;
	int32_t x735 = INT32_MAX;
	static int16_t x736 = INT16_MIN;
	volatile int32_t t176 = 168353807;

    t176 = ((x733*(x734!=x735))%x736);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x737 = INT32_MAX;
	volatile uint16_t x738 = 74U;
	static int32_t x740 = -1;
	static volatile int32_t t177 = 10498711;

    t177 = ((x737*(x738!=x739))%x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x741 = 2114064;
	static uint32_t x742 = 232U;
	static volatile uint32_t x743 = 2993199U;
	uint64_t x744 = UINT64_MAX;
	uint64_t t178 = 5LLU;

    t178 = ((x741*(x742!=x743))%x744);

    if (t178 != 2114064LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x745 = 949U;
	uint16_t x746 = 419U;
	static int32_t x747 = INT32_MIN;
	int8_t x748 = -1;

    t179 = ((x745*(x746!=x747))%x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x753 = 810;
	int64_t x754 = -170152215598962269LL;
	volatile int32_t x755 = 0;
	int32_t x756 = -369974;

    t180 = ((x753*(x754!=x755))%x756);

    if (t180 != 810) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x757 = 0U;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t181 = -145945;

    t181 = ((x757*(x758!=x759))%x760);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x763 = 10950U;
	volatile int64_t x764 = -971958306370LL;

    t182 = ((x761*(x762!=x763))%x764);

    if (t182 != 65535LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x767 = 3;
	int8_t x768 = -1;
	volatile int32_t t183 = 578402055;

    t183 = ((x765*(x766!=x767))%x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	uint64_t x770 = 85858581949496LLU;
	volatile uint64_t x771 = 0LLU;
	static uint8_t x772 = UINT8_MAX;
	volatile uint64_t t184 = 7370321039158339818LLU;

    t184 = ((x769*(x770!=x771))%x772);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x775 = 6;
	int8_t x776 = INT8_MIN;
	static volatile int64_t t185 = -13911778063840LL;

    t185 = ((x773*(x774!=x775))%x776);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x777 = INT32_MIN;
	int8_t x778 = 0;
	int16_t x780 = -1;
	static volatile int32_t t186 = 88820806;

    t186 = ((x777*(x778!=x779))%x780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x782 = 14538567U;
	int64_t x784 = INT64_MAX;
	volatile int64_t t187 = -144908LL;

    t187 = ((x781*(x782!=x783))%x784);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x785 = 157494560U;
	volatile int64_t x786 = INT64_MAX;
	uint64_t x787 = UINT64_MAX;
	static int32_t x788 = INT32_MIN;
	static uint32_t t188 = 781U;

    t188 = ((x785*(x786!=x787))%x788);

    if (t188 != 157494560U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x789 = -1LL;
	int64_t x790 = INT64_MAX;
	int16_t x791 = INT16_MAX;
	volatile int16_t x792 = -494;
	static int64_t t189 = 139930894LL;

    t189 = ((x789*(x790!=x791))%x792);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x793 = INT32_MIN;
	static volatile int64_t x794 = -1LL;
	int8_t x795 = INT8_MIN;
	static volatile int64_t x796 = -422381007LL;
	static int64_t t190 = -6243LL;

    t190 = ((x793*(x794!=x795))%x796);

    if (t190 != -35578613LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x798 = UINT16_MAX;
	static int32_t x799 = 21;
	uint16_t x800 = UINT16_MAX;
	int32_t t191 = 0;

    t191 = ((x797*(x798!=x799))%x800);

    if (t191 != 16) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x802 = 1;
	volatile int32_t t192 = 1374;

    t192 = ((x801*(x802!=x803))%x804);

    if (t192 != 31) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x807 = -1;
	static int32_t x808 = INT32_MAX;
	volatile int32_t t193 = -103;

    t193 = ((x805*(x806!=x807))%x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x809 = -1LL;
	int64_t x810 = -1LL;
	uint32_t x811 = UINT32_MAX;
	int16_t x812 = INT16_MAX;

    t194 = ((x809*(x810!=x811))%x812);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x816 = 59900U;
	static volatile uint32_t t195 = 3351U;

    t195 = ((x813*(x814!=x815))%x816);

    if (t195 != 8748U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x817 = -1;
	static uint16_t x818 = 3976U;
	int32_t x819 = 33417408;
	volatile int16_t x820 = INT16_MAX;

    t196 = ((x817*(x818!=x819))%x820);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x823 = -1;
	int32_t x824 = INT32_MIN;
	volatile int32_t t197 = -1643;

    t197 = ((x821*(x822!=x823))%x824);

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x826 = -1;
	volatile int64_t x827 = INT64_MIN;
	uint16_t x828 = 7876U;
	volatile int32_t t198 = -41;

    t198 = ((x825*(x826!=x827))%x828);

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x833 = -94983295888062LL;
	static uint64_t x834 = 161954045613096709LLU;
	volatile int64_t x835 = INT64_MAX;
	int64_t x836 = 270364LL;
	int64_t t199 = -10737288255LL;

    t199 = ((x833*(x834!=x835))%x836);

    if (t199 != -73750LL) { NG(); } else { ; }
	
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

