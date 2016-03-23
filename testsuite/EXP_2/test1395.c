
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

static int32_t x8 = INT32_MIN;
uint32_t x11 = 128U;
int32_t t2 = -1;
volatile uint32_t x16 = 1741505780U;
static volatile int32_t x18 = -1;
int32_t x19 = 19;
volatile int32_t t5 = 17879115;
int8_t x29 = INT8_MIN;
uint16_t x34 = UINT16_MAX;
static volatile uint32_t x36 = UINT32_MAX;
int8_t x38 = -1;
uint64_t x39 = 154017LLU;
uint32_t x42 = UINT32_MAX;
uint8_t x45 = 7U;
volatile int32_t t11 = 239967;
uint16_t x57 = UINT16_MAX;
uint64_t x61 = 2363630654LLU;
int16_t x62 = INT16_MIN;
int8_t x63 = 40;
int8_t x78 = -1;
int32_t x79 = INT32_MAX;
static volatile int32_t x80 = -1;
volatile int32_t t18 = 3474;
int16_t x81 = -1;
volatile uint32_t x82 = UINT32_MAX;
int64_t x83 = INT64_MIN;
static int64_t x84 = INT64_MIN;
int64_t x85 = INT64_MIN;
int64_t x95 = -25865542161LL;
static int32_t t23 = -53740835;
volatile int8_t x103 = -54;
int32_t t25 = 0;
int16_t x110 = 762;
int32_t x114 = INT32_MIN;
static uint8_t x115 = 30U;
int32_t t28 = -738;
int16_t x121 = 1;
uint64_t x127 = 2099931498LLU;
static uint64_t x130 = 10120245304LLU;
volatile int16_t x131 = INT16_MIN;
int64_t x133 = INT64_MIN;
int16_t x136 = 485;
int64_t x137 = -54110LL;
volatile int16_t x148 = -16098;
int32_t t35 = 468;
static volatile int8_t x150 = INT8_MIN;
int16_t x158 = 15;
static uint8_t x170 = UINT8_MAX;
uint64_t x182 = 6262LLU;
volatile int32_t t44 = 230;
volatile int64_t x185 = INT64_MIN;
int32_t x186 = INT32_MAX;
volatile int8_t x188 = 22;
uint32_t x189 = UINT32_MAX;
int32_t t47 = -6883;
static int64_t x199 = INT64_MIN;
static volatile uint8_t x203 = 20U;
uint16_t x204 = 7759U;
int32_t x206 = 0;
int32_t x210 = -308216;
int8_t x212 = INT8_MAX;
volatile uint64_t x214 = UINT64_MAX;
volatile int64_t x222 = INT64_MIN;
volatile int32_t t56 = -1;
uint8_t x234 = 0U;
static uint64_t x239 = 682536LLU;
static int32_t t58 = -29;
int32_t t59 = 1022393;
uint32_t x250 = UINT32_MAX;
static uint8_t x254 = UINT8_MAX;
int16_t x255 = INT16_MAX;
volatile int32_t x258 = -1;
int8_t x261 = INT8_MAX;
uint16_t x267 = UINT16_MAX;
int32_t x272 = -2165392;
int32_t t66 = 1843;
int32_t t67 = 46398;
int32_t x277 = -1;
volatile int64_t x281 = INT64_MIN;
volatile int64_t x283 = -1LL;
volatile int32_t t69 = 2937;
uint32_t x298 = UINT32_MAX;
volatile int16_t x300 = -1;
int32_t t74 = 11;
volatile int32_t x307 = 1088253;
volatile uint8_t x308 = 103U;
static int32_t x318 = INT32_MIN;
static volatile int32_t x320 = -54469;
static volatile int32_t t79 = -3703539;
int64_t x330 = -4232LL;
int8_t x333 = 0;
int32_t t82 = 6;
int8_t x340 = 2;
volatile int16_t x341 = INT16_MAX;
int64_t x353 = -1LL;
int32_t t87 = -14953378;
volatile int32_t x370 = INT32_MIN;
volatile int32_t t92 = -1844;
static int8_t x381 = INT8_MAX;
static volatile int8_t x388 = 13;
volatile int32_t t95 = -65476325;
static int32_t x389 = -1;
uint8_t x390 = UINT8_MAX;
uint16_t x392 = UINT16_MAX;
volatile int64_t x400 = -1LL;
volatile int32_t t101 = -7732;
int8_t x428 = -1;
int16_t x429 = INT16_MAX;
int64_t x432 = -1LL;
uint16_t x438 = UINT16_MAX;
int16_t x447 = INT16_MIN;
int64_t x451 = INT64_MAX;
static int16_t x453 = 2012;
static uint64_t x455 = 22638352016LLU;
int8_t x463 = 2;
volatile uint64_t x471 = 603626192062714033LLU;
int64_t x475 = INT64_MIN;
uint16_t x484 = 1U;
int64_t x488 = -1LL;
volatile int32_t t120 = 24;
uint64_t x500 = 44420LLU;
uint32_t x503 = 197391584U;
volatile int8_t x504 = 0;
volatile int32_t t124 = -7;
int64_t x515 = INT64_MAX;
int16_t x521 = 0;
int32_t x523 = INT32_MAX;
int64_t x524 = -499970470467LL;
int32_t t130 = 794826367;
int32_t t135 = -1604;
int32_t t136 = 45733;
int8_t x556 = -45;
int16_t x564 = INT16_MIN;
int32_t t140 = -1;
static int16_t x571 = -1;
volatile uint64_t x583 = UINT64_MAX;
uint64_t x584 = 1000360LLU;
static int32_t x586 = -1;
int64_t x592 = INT64_MAX;
int64_t x594 = -3772504403769173LL;
static int32_t t147 = 1537;
static volatile int64_t x597 = 28123317LL;
uint32_t x598 = 1U;
static int32_t t148 = 40084092;
volatile int8_t x602 = -1;
int32_t t149 = -280576;
int16_t x615 = INT16_MIN;
int32_t t152 = -1040696715;
volatile int32_t t153 = 868419;
static uint8_t x623 = 125U;
volatile int32_t t156 = 31738;
static uint8_t x638 = 15U;
int64_t x643 = 526058491LL;
static volatile int32_t t159 = 360463;
volatile uint64_t x650 = 428397301LLU;
int32_t x651 = INT32_MIN;
static volatile int16_t x655 = -1;
static volatile int32_t t162 = 15;
int16_t x658 = 3;
static int32_t x664 = INT32_MIN;
int64_t x665 = -1LL;
volatile int64_t x672 = 219997263738690733LL;
static uint64_t x678 = 456682508657LLU;
int64_t x690 = -386LL;
static int32_t t171 = -21;
int8_t x694 = INT8_MAX;
volatile int8_t x697 = INT8_MAX;
uint16_t x699 = 5U;
int16_t x705 = INT16_MIN;
volatile int32_t x707 = -1;
uint8_t x712 = UINT8_MAX;
int64_t x716 = INT64_MIN;
volatile int32_t t177 = 30920951;
uint16_t x719 = 3U;
int64_t x722 = -1LL;
int16_t x724 = INT16_MAX;
static int32_t t179 = 307;
int8_t x731 = INT8_MAX;
uint16_t x738 = UINT16_MAX;
int32_t x741 = INT32_MAX;
volatile uint8_t x745 = 119U;
int8_t x747 = -2;
volatile int32_t t185 = 1728;
int32_t t186 = -4;
static uint64_t x754 = 1355190506737711LLU;
int32_t t187 = 975262258;
int64_t x758 = -28113817459377247LL;
volatile int32_t t188 = -18934061;
volatile int32_t t190 = -19;
int64_t x769 = INT64_MIN;
int32_t x771 = INT32_MAX;
static int16_t x780 = 1;
uint32_t x782 = UINT32_MAX;
int16_t x784 = INT16_MIN;
int32_t t194 = 318;
int8_t x790 = 32;
volatile int64_t x792 = 95105119870302783LL;
volatile int32_t t197 = -16719;
int32_t x798 = 1890;
volatile int32_t t199 = -1079;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	uint8_t x2 = 34U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	static int32_t t0 = 3829610;

    t0 = ((x1-(x2==x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 15354U;
	int16_t x6 = INT16_MIN;
	int64_t x7 = 306699812LL;
	int32_t t1 = -436035;

    t1 = ((x5-(x6==x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 255U;
	static int16_t x10 = -1;
	uint16_t x12 = 233U;

    t2 = ((x9-(x10==x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 496U;
	static int32_t x14 = INT32_MAX;
	static volatile int64_t x15 = -1LL;
	volatile int32_t t3 = -715;

    t3 = ((x13-(x14==x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int8_t x20 = 38;
	static volatile int32_t t4 = -9240;

    t4 = ((x17-(x18==x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -130019LL;
	static int8_t x22 = -15;
	uint64_t x23 = 1061810165586962377LLU;
	volatile int32_t x24 = -1;

    t5 = ((x21-(x22==x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MAX;
	uint8_t x26 = UINT8_MAX;
	static int8_t x27 = -1;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = -673;

    t6 = ((x25-(x26==x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	int32_t x31 = 2455;
	uint32_t x32 = 7365U;
	int32_t t7 = -62855751;

    t7 = ((x29-(x30==x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x35 = -1;
	volatile int32_t t8 = -1;

    t8 = ((x33-(x34==x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint64_t x40 = 169215LLU;
	volatile int32_t t9 = -9;

    t9 = ((x37-(x38==x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x43 = -14269029LL;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -13;

    t10 = ((x41-(x42==x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int8_t x48 = -1;

    t11 = ((x45-(x46==x47))>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 34029472;
	int32_t x50 = -1;
	static int16_t x51 = INT16_MAX;
	static int32_t x52 = 3;
	volatile int32_t t12 = 6;

    t12 = ((x49-(x50==x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = 25U;
	uint32_t x54 = 807336U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = 6878;
	volatile int32_t t13 = -530292282;

    t13 = ((x53-(x54==x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	uint64_t x59 = 61LLU;
	int16_t x60 = INT16_MAX;
	int32_t t14 = -24377303;

    t14 = ((x57-(x58==x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = -2;

    t15 = ((x61-(x62==x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 3698684U;
	static int8_t x66 = -1;
	int8_t x67 = INT8_MAX;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 4647683;

    t16 = ((x65-(x66==x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 2U;
	volatile int16_t x70 = -992;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -125;
	int32_t t17 = 927001772;

    t17 = ((x69-(x70==x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;

    t18 = ((x77-(x78==x79))>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t t19 = -23;

    t19 = ((x81-(x82==x83))>x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x86 = 126U;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = 0U;
	int32_t t20 = -84;

    t20 = ((x85-(x86==x87))>x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = UINT32_MAX;
	static volatile int8_t x90 = 0;
	int64_t x91 = INT64_MIN;
	int16_t x92 = -1;
	static volatile int32_t t21 = 407883541;

    t21 = ((x89-(x90==x91))>x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = 26;
	int16_t x94 = INT16_MAX;
	int64_t x96 = 63934107LL;
	int32_t t22 = -1;

    t22 = ((x93-(x94==x95))>x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = 856;
	static volatile uint32_t x100 = UINT32_MAX;

    t23 = ((x97-(x98==x99))>x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = -1LL;
	volatile int8_t x102 = INT8_MIN;
	uint8_t x104 = 83U;
	int32_t t24 = -1580691;

    t24 = ((x101-(x102==x103))>x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x105 = INT64_MIN;
	uint16_t x106 = 32U;
	int16_t x107 = 4;
	static volatile int32_t x108 = -1;

    t25 = ((x105-(x106==x107))>x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 3U;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 52U;
	static volatile int32_t t26 = 9;

    t26 = ((x109-(x110==x111))>x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 54682830475825LLU;
	volatile int16_t x116 = INT16_MAX;
	int32_t t27 = 201;

    t27 = ((x113-(x114==x115))>x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	volatile int64_t x119 = INT64_MAX;
	static uint8_t x120 = 0U;

    t28 = ((x117-(x118==x119))>x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x122 = INT32_MAX;
	uint32_t x123 = UINT32_MAX;
	volatile int64_t x124 = 55LL;
	int32_t t29 = -8;

    t29 = ((x121-(x122==x123))>x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	static volatile int16_t x128 = INT16_MIN;
	int32_t t30 = -1;

    t30 = ((x125-(x126==x127))>x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = 17710U;
	uint8_t x132 = 26U;
	int32_t t31 = 727527;

    t31 = ((x129-(x130==x131))>x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MAX;
	int32_t t32 = -129314444;

    t32 = ((x133-(x134==x135))>x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x138 = INT16_MAX;
	uint16_t x139 = 1U;
	static int16_t x140 = -1;
	int32_t t33 = 583;

    t33 = ((x137-(x138==x139))>x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -3965;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MAX;
	int32_t t34 = -4125607;

    t34 = ((x141-(x142==x143))>x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x145 = 1280636U;
	volatile uint64_t x146 = 6LLU;
	volatile uint16_t x147 = 837U;

    t35 = ((x145-(x146==x147))>x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x149 = INT32_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = -1;
	volatile int32_t t36 = 442407542;

    t36 = ((x149-(x150==x151))>x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x153 = 1463818740090LLU;
	static uint16_t x154 = UINT16_MAX;
	int8_t x155 = -2;
	static uint16_t x156 = 0U;
	int32_t t37 = 2323866;

    t37 = ((x153-(x154==x155))>x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 36LLU;
	static uint64_t x159 = 343426128988LLU;
	int64_t x160 = INT64_MAX;
	volatile int32_t t38 = 0;

    t38 = ((x157-(x158==x159))>x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 0;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 16612201346LLU;
	static int64_t x164 = 7LL;
	int32_t t39 = -25883;

    t39 = ((x161-(x162==x163))>x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	volatile uint16_t x166 = 657U;
	uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	static int32_t t40 = -65302;

    t40 = ((x165-(x166==x167))>x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MIN;
	static int32_t x171 = 4985575;
	static int16_t x172 = 214;
	volatile int32_t t41 = -1222916;

    t41 = ((x169-(x170==x171))>x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x173 = UINT8_MAX;
	static volatile int16_t x174 = 4725;
	uint8_t x175 = UINT8_MAX;
	volatile int64_t x176 = -1LL;
	int32_t t42 = 12;

    t42 = ((x173-(x174==x175))>x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	static int16_t x178 = -3;
	int16_t x179 = -26;
	volatile uint8_t x180 = 10U;
	volatile int32_t t43 = -6264;

    t43 = ((x177-(x178==x179))>x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x181 = 2304934U;
	volatile uint8_t x183 = UINT8_MAX;
	uint32_t x184 = 2U;

    t44 = ((x181-(x182==x183))>x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x187 = INT64_MIN;
	volatile int32_t t45 = 1833;

    t45 = ((x185-(x186==x187))>x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x190 = INT16_MAX;
	static int32_t x191 = -295174436;
	volatile int64_t x192 = INT64_MAX;
	volatile int32_t t46 = 773225;

    t46 = ((x189-(x190==x191))>x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x193 = -72;
	uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 594755299LLU;
	int8_t x196 = 2;

    t47 = ((x193-(x194==x195))>x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = -8;
	static uint32_t x198 = UINT32_MAX;
	int64_t x200 = INT64_MIN;
	static int32_t t48 = 508894;

    t48 = ((x197-(x198==x199))>x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x201 = 1549U;
	int32_t x202 = 25;
	static volatile int32_t t49 = -13038486;

    t49 = ((x201-(x202==x203))>x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x205 = INT16_MIN;
	static uint32_t x207 = UINT32_MAX;
	static int64_t x208 = INT64_MIN;
	int32_t t50 = -2;

    t50 = ((x205-(x206==x207))>x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x209 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	volatile int32_t t51 = 290576039;

    t51 = ((x209-(x210==x211))>x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = 29LLU;
	uint32_t x215 = 11U;
	int16_t x216 = INT16_MIN;
	int32_t t52 = -12435;

    t52 = ((x213-(x214==x215))>x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = 41U;
	uint64_t x218 = 11350LLU;
	uint64_t x219 = 240LLU;
	static int64_t x220 = -5087LL;
	volatile int32_t t53 = 116066507;

    t53 = ((x217-(x218==x219))>x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = UINT16_MAX;
	int16_t x223 = -1;
	int8_t x224 = INT8_MAX;
	int32_t t54 = 2331;

    t54 = ((x221-(x222==x223))>x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = 0LL;
	volatile int64_t x226 = 8981691713512LL;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t55 = 37070882;

    t55 = ((x225-(x226==x227))>x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MIN;
	volatile int32_t x230 = INT32_MIN;
	static uint32_t x231 = UINT32_MAX;
	int32_t x232 = -1;

    t56 = ((x229-(x230==x231))>x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = UINT32_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 13;
	int32_t t57 = -4032517;

    t57 = ((x233-(x234==x235))>x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = INT8_MAX;
	volatile uint32_t x238 = 8031089U;
	volatile uint8_t x240 = UINT8_MAX;

    t58 = ((x237-(x238==x239))>x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = 439LLU;
	volatile int16_t x242 = -1;
	static int8_t x243 = 4;
	uint8_t x244 = 59U;

    t59 = ((x241-(x242==x243))>x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = UINT32_MAX;
	int8_t x246 = 45;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = INT64_MAX;
	int32_t t60 = -156818008;

    t60 = ((x245-(x246==x247))>x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x249 = 29764555U;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 49612U;
	int32_t t61 = -96852;

    t61 = ((x249-(x250==x251))>x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = 3;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t62 = 5049;

    t62 = ((x253-(x254==x255))>x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x257 = 20U;
	static volatile int16_t x259 = INT16_MIN;
	int64_t x260 = -3978125360011470LL;
	volatile int32_t t63 = 873;

    t63 = ((x257-(x258==x259))>x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x262 = -35;
	int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t64 = -3551811;

    t64 = ((x261-(x262==x263))>x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = INT64_MAX;
	int16_t x268 = INT16_MAX;
	int32_t t65 = -292;

    t65 = ((x265-(x266==x267))>x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x269 = INT64_MIN;
	uint64_t x270 = 420958LLU;
	uint16_t x271 = UINT16_MAX;

    t66 = ((x269-(x270==x271))>x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x273 = -251225354;
	volatile int16_t x274 = -1;
	volatile int64_t x275 = 16357966714801LL;
	uint64_t x276 = 98LLU;

    t67 = ((x273-(x274==x275))>x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x278 = UINT8_MAX;
	int32_t x279 = -1;
	int16_t x280 = -1;
	static volatile int32_t t68 = -20708;

    t68 = ((x277-(x278==x279))>x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MAX;

    t69 = ((x281-(x282==x283))>x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x285 = INT8_MAX;
	uint32_t x286 = UINT32_MAX;
	static int64_t x287 = 1989849829342209LL;
	int16_t x288 = -1;
	volatile int32_t t70 = -1;

    t70 = ((x285-(x286==x287))>x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t71 = -11566;

    t71 = ((x289-(x290==x291))>x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = -1;
	int64_t x294 = INT64_MAX;
	int64_t x295 = 3594946699LL;
	static volatile uint8_t x296 = UINT8_MAX;
	volatile int32_t t72 = -173897101;

    t72 = ((x293-(x294==x295))>x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x297 = -1;
	int32_t x299 = INT32_MIN;
	static volatile int32_t t73 = -6;

    t73 = ((x297-(x298==x299))>x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = 11581U;
	int64_t x302 = -4428445572460683LL;
	static uint32_t x303 = 371868U;
	static uint64_t x304 = UINT64_MAX;

    t74 = ((x301-(x302==x303))>x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = 329201316041138522LL;
	int32_t t75 = 1743;

    t75 = ((x305-(x306==x307))>x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x309 = 936U;
	uint8_t x310 = 125U;
	uint8_t x311 = 0U;
	uint64_t x312 = 6642831776130LLU;
	volatile int32_t t76 = -8115404;

    t76 = ((x309-(x310==x311))>x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x313 = 146717;
	static uint16_t x314 = 109U;
	volatile int16_t x315 = -1;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t77 = -22;

    t77 = ((x313-(x314==x315))>x316);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x317 = INT32_MIN;
	static int64_t x319 = INT64_MIN;
	int32_t t78 = 83751;

    t78 = ((x317-(x318==x319))>x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = -1;
	uint32_t x322 = 2U;
	volatile int32_t x323 = INT32_MAX;
	int8_t x324 = 25;

    t79 = ((x321-(x322==x323))>x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	uint16_t x326 = 2485U;
	int32_t x327 = -883;
	int16_t x328 = 3;
	volatile int32_t t80 = 29941;

    t80 = ((x325-(x326==x327))>x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x329 = 0;
	int32_t x331 = 440;
	static uint16_t x332 = UINT16_MAX;
	static int32_t t81 = -345;

    t81 = ((x329-(x330==x331))>x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x334 = INT8_MIN;
	uint16_t x335 = UINT16_MAX;
	static int64_t x336 = INT64_MIN;

    t82 = ((x333-(x334==x335))>x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = -9828;
	int32_t x338 = INT32_MIN;
	static uint16_t x339 = UINT16_MAX;
	volatile int32_t t83 = -827976;

    t83 = ((x337-(x338==x339))>x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t84 = -15;

    t84 = ((x341-(x342==x343))>x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MIN;
	static uint8_t x347 = 70U;
	int16_t x348 = -1;
	volatile int32_t t85 = -342360;

    t85 = ((x345-(x346==x347))>x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = 17308317653121758LL;
	int8_t x350 = INT8_MAX;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = 13794270;
	volatile int32_t t86 = 73;

    t86 = ((x349-(x350==x351))>x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x354 = UINT8_MAX;
	static volatile int64_t x355 = INT64_MIN;
	int64_t x356 = 14886LL;

    t87 = ((x353-(x354==x355))>x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = -77;
	int16_t x358 = INT16_MAX;
	static uint8_t x359 = 70U;
	int8_t x360 = INT8_MIN;
	static int32_t t88 = -81109;

    t88 = ((x357-(x358==x359))>x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x361 = 55U;
	uint16_t x362 = 95U;
	volatile int64_t x363 = -1LL;
	int32_t x364 = -1;
	int32_t t89 = -120387697;

    t89 = ((x361-(x362==x363))>x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = INT8_MIN;
	volatile int8_t x366 = INT8_MIN;
	uint64_t x367 = 3496876989361LLU;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t90 = 617;

    t90 = ((x365-(x366==x367))>x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = 0U;
	volatile int16_t x371 = INT16_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t91 = -452;

    t91 = ((x369-(x370==x371))>x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = -1LL;
	int16_t x374 = 4499;
	static int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;

    t92 = ((x373-(x374==x375))>x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -1;
	static int32_t x379 = -53955642;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t93 = 954;

    t93 = ((x377-(x378==x379))>x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x382 = INT8_MIN;
	static int32_t x383 = -4513;
	static int32_t x384 = -7095;
	static volatile int32_t t94 = -15864498;

    t94 = ((x381-(x382==x383))>x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = -1;
	int64_t x386 = 0LL;
	uint64_t x387 = UINT64_MAX;

    t95 = ((x385-(x386==x387))>x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x391 = 30U;
	int32_t t96 = 428;

    t96 = ((x389-(x390==x391))>x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = -29;
	int64_t x394 = -4087039831631LL;
	static uint32_t x395 = UINT32_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t97 = 0;

    t97 = ((x393-(x394==x395))>x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MAX;
	volatile int32_t x398 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t t98 = -568;

    t98 = ((x397-(x398==x399))>x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x401 = INT32_MIN;
	uint64_t x402 = UINT64_MAX;
	static uint32_t x403 = 517632U;
	uint64_t x404 = 3960589LLU;
	int32_t t99 = -10198784;

    t99 = ((x401-(x402==x403))>x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x405 = INT16_MAX;
	volatile uint32_t x406 = 7U;
	int64_t x407 = -1LL;
	uint8_t x408 = 14U;
	int32_t t100 = 1;

    t100 = ((x405-(x406==x407))>x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x409 = INT64_MAX;
	uint32_t x410 = 248553734U;
	int8_t x411 = INT8_MAX;
	uint64_t x412 = UINT64_MAX;

    t101 = ((x409-(x410==x411))>x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = 404;
	static uint16_t x414 = 48U;
	static uint16_t x415 = 3188U;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t102 = 0;

    t102 = ((x413-(x414==x415))>x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint64_t x418 = UINT64_MAX;
	volatile int16_t x419 = INT16_MIN;
	uint8_t x420 = 35U;
	volatile int32_t t103 = 591529;

    t103 = ((x417-(x418==x419))>x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = INT32_MIN;
	static uint8_t x422 = 39U;
	int32_t x423 = 1151;
	int64_t x424 = -1LL;
	volatile int32_t t104 = 9;

    t104 = ((x421-(x422==x423))>x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = -3755317449252LL;
	volatile uint32_t x426 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	int32_t t105 = -16;

    t105 = ((x425-(x426==x427))>x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x430 = INT8_MIN;
	uint16_t x431 = 142U;
	volatile int32_t t106 = 365;

    t106 = ((x429-(x430==x431))>x432);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x433 = -1;
	static uint64_t x434 = 464226LLU;
	int32_t x435 = -1;
	int32_t x436 = 304981;
	int32_t t107 = 27482145;

    t107 = ((x433-(x434==x435))>x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x437 = 7U;
	static volatile int64_t x439 = INT64_MAX;
	int16_t x440 = -159;
	volatile int32_t t108 = 32426;

    t108 = ((x437-(x438==x439))>x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x441 = 20U;
	int64_t x442 = -3948LL;
	int16_t x443 = -1;
	static volatile uint32_t x444 = 1612362U;
	static volatile int32_t t109 = -7;

    t109 = ((x441-(x442==x443))>x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x445 = INT32_MIN;
	volatile int32_t x446 = INT32_MIN;
	int64_t x448 = INT64_MIN;
	volatile int32_t t110 = -1;

    t110 = ((x445-(x446==x447))>x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = 99631LLU;
	int32_t x450 = INT32_MAX;
	int8_t x452 = INT8_MAX;
	int32_t t111 = -45052;

    t111 = ((x449-(x450==x451))>x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x454 = 5;
	static volatile int32_t x456 = -1;
	static int32_t t112 = -22;

    t112 = ((x453-(x454==x455))>x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x457 = -591241437302LL;
	volatile uint16_t x458 = 5434U;
	volatile int64_t x459 = INT64_MIN;
	int64_t x460 = 11106959LL;
	volatile int32_t t113 = -1;

    t113 = ((x457-(x458==x459))>x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = UINT8_MAX;
	uint32_t x462 = 801711U;
	uint64_t x464 = 509890230154341LLU;
	volatile int32_t t114 = -3304341;

    t114 = ((x461-(x462==x463))>x464);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x465 = 9U;
	uint8_t x466 = 84U;
	int8_t x467 = -1;
	int64_t x468 = -1096590645612960334LL;
	static int32_t t115 = 7904;

    t115 = ((x465-(x466==x467))>x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x469 = UINT32_MAX;
	int32_t x470 = INT32_MIN;
	static uint8_t x472 = 33U;
	static volatile int32_t t116 = 757633813;

    t116 = ((x469-(x470==x471))>x472);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x473 = INT64_MIN;
	uint16_t x474 = 3U;
	int8_t x476 = -1;
	int32_t t117 = 0;

    t117 = ((x473-(x474==x475))>x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x477 = 247040372188078245LLU;
	volatile int16_t x478 = -1;
	int32_t x479 = 630785476;
	int64_t x480 = -4560517474731183350LL;
	int32_t t118 = -5716;

    t118 = ((x477-(x478==x479))>x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x481 = INT8_MIN;
	volatile uint64_t x482 = 23988215708257LLU;
	int64_t x483 = -1LL;
	int32_t t119 = -530311;

    t119 = ((x481-(x482==x483))>x484);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x485 = 2;
	uint64_t x486 = 0LLU;
	static uint8_t x487 = 21U;

    t120 = ((x485-(x486==x487))>x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x489 = INT32_MIN;
	volatile uint64_t x490 = 389LLU;
	volatile uint8_t x491 = 64U;
	int16_t x492 = 1;
	static volatile int32_t t121 = 24434348;

    t121 = ((x489-(x490==x491))>x492);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x493 = 3904;
	volatile int32_t x494 = 13335;
	volatile int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MIN;
	int32_t t122 = 2944;

    t122 = ((x493-(x494==x495))>x496);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = -1;
	volatile int64_t x498 = INT64_MIN;
	static int16_t x499 = -1;
	static volatile int32_t t123 = -4027;

    t123 = ((x497-(x498==x499))>x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x501 = 1U;
	int64_t x502 = 442746689620944567LL;

    t124 = ((x501-(x502==x503))>x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x505 = -1746190838361547LL;
	int8_t x506 = INT8_MIN;
	int16_t x507 = INT16_MIN;
	int64_t x508 = -1LL;
	int32_t t125 = -54342902;

    t125 = ((x505-(x506==x507))>x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x509 = INT8_MIN;
	int16_t x510 = -10;
	int16_t x511 = -1;
	int32_t x512 = -56108;
	int32_t t126 = 259341834;

    t126 = ((x509-(x510==x511))>x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x513 = 3467LL;
	static int64_t x514 = 0LL;
	int16_t x516 = -1;
	volatile int32_t t127 = -405832852;

    t127 = ((x513-(x514==x515))>x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = INT32_MIN;
	volatile uint8_t x518 = 25U;
	int32_t x519 = -93834;
	int32_t x520 = -1;
	volatile int32_t t128 = -27;

    t128 = ((x517-(x518==x519))>x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x522 = INT16_MIN;
	volatile int32_t t129 = 1;

    t129 = ((x521-(x522==x523))>x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = -1;
	volatile int32_t x526 = INT32_MIN;
	volatile uint64_t x527 = UINT64_MAX;
	int8_t x528 = -26;

    t130 = ((x525-(x526==x527))>x528);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x529 = -456837;
	int8_t x530 = 6;
	volatile int64_t x531 = INT64_MIN;
	int32_t x532 = INT32_MIN;
	volatile int32_t t131 = -50827;

    t131 = ((x529-(x530==x531))>x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x533 = UINT32_MAX;
	static int16_t x534 = INT16_MIN;
	static int64_t x535 = -54684LL;
	int64_t x536 = INT64_MIN;
	static int32_t t132 = -5680443;

    t132 = ((x533-(x534==x535))>x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = INT8_MIN;
	volatile int16_t x538 = -1;
	int64_t x539 = INT64_MAX;
	uint64_t x540 = 58358502LLU;
	int32_t t133 = 1;

    t133 = ((x537-(x538==x539))>x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x541 = -1;
	int8_t x542 = -23;
	uint32_t x543 = 2073201292U;
	volatile int64_t x544 = INT64_MIN;
	static int32_t t134 = 0;

    t134 = ((x541-(x542==x543))>x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x545 = UINT32_MAX;
	static uint64_t x546 = 308575696224LLU;
	volatile int32_t x547 = 3088;
	int16_t x548 = INT16_MIN;

    t135 = ((x545-(x546==x547))>x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x549 = INT64_MIN;
	int32_t x550 = -46;
	volatile int16_t x551 = INT16_MIN;
	uint64_t x552 = 0LLU;

    t136 = ((x549-(x550==x551))>x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x553 = -1;
	volatile int16_t x554 = -1;
	int32_t x555 = -2055261;
	int32_t t137 = 917677191;

    t137 = ((x553-(x554==x555))>x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x557 = -1LL;
	uint8_t x558 = UINT8_MAX;
	static int16_t x559 = -1;
	volatile int32_t x560 = 0;
	volatile int32_t t138 = -359;

    t138 = ((x557-(x558==x559))>x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x561 = INT64_MIN;
	static int32_t x562 = INT32_MIN;
	static uint32_t x563 = UINT32_MAX;
	int32_t t139 = -1528618;

    t139 = ((x561-(x562==x563))>x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x565 = 164889479U;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MIN;
	int32_t x568 = -1;

    t140 = ((x565-(x566==x567))>x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x569 = INT8_MIN;
	volatile int32_t x570 = 39232;
	int16_t x572 = INT16_MIN;
	int32_t t141 = 2012;

    t141 = ((x569-(x570==x571))>x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = -442134660314LL;
	int16_t x574 = INT16_MAX;
	uint16_t x575 = UINT16_MAX;
	int8_t x576 = 0;
	volatile int32_t t142 = -3;

    t142 = ((x573-(x574==x575))>x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x577 = -1;
	volatile int16_t x578 = INT16_MIN;
	static int8_t x579 = INT8_MAX;
	int16_t x580 = -1;
	int32_t t143 = 1723330;

    t143 = ((x577-(x578==x579))>x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x581 = -1;
	static volatile int32_t x582 = INT32_MIN;
	int32_t t144 = -5966377;

    t144 = ((x581-(x582==x583))>x584);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x585 = INT32_MIN;
	uint64_t x587 = 3958438073405373465LLU;
	int8_t x588 = -1;
	int32_t t145 = 28459;

    t145 = ((x585-(x586==x587))>x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x589 = -4;
	static int16_t x590 = -5;
	int64_t x591 = INT64_MIN;
	static volatile int32_t t146 = -370597;

    t146 = ((x589-(x590==x591))>x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x593 = 2448838647967445748LL;
	uint8_t x595 = 34U;
	int64_t x596 = -1LL;

    t147 = ((x593-(x594==x595))>x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x599 = UINT64_MAX;
	static int8_t x600 = INT8_MIN;

    t148 = ((x597-(x598==x599))>x600);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x601 = INT8_MAX;
	uint32_t x603 = 7021762U;
	int32_t x604 = INT32_MIN;

    t149 = ((x601-(x602==x603))>x604);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x605 = 185082U;
	uint16_t x606 = 103U;
	static int8_t x607 = INT8_MIN;
	int64_t x608 = -1LL;
	int32_t t150 = -123708954;

    t150 = ((x605-(x606==x607))>x608);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x609 = INT8_MAX;
	uint64_t x610 = 2557LLU;
	int32_t x611 = INT32_MIN;
	uint64_t x612 = 3280449004LLU;
	int32_t t151 = 15787;

    t151 = ((x609-(x610==x611))>x612);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x613 = -1;
	static int16_t x614 = INT16_MIN;
	volatile int32_t x616 = INT32_MIN;

    t152 = ((x613-(x614==x615))>x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x617 = UINT64_MAX;
	static int64_t x618 = -1LL;
	uint8_t x619 = 1U;
	uint64_t x620 = UINT64_MAX;

    t153 = ((x617-(x618==x619))>x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x621 = 1748U;
	volatile int16_t x622 = INT16_MIN;
	static int32_t x624 = INT32_MIN;
	static int32_t t154 = 3;

    t154 = ((x621-(x622==x623))>x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x625 = 13126U;
	static uint8_t x626 = 23U;
	int64_t x627 = -8LL;
	int16_t x628 = 368;
	int32_t t155 = 13200;

    t155 = ((x625-(x626==x627))>x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x629 = 317U;
	volatile int8_t x630 = -1;
	uint64_t x631 = 1506278648044LLU;
	static uint32_t x632 = 0U;

    t156 = ((x629-(x630==x631))>x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = 0;
	int16_t x634 = -6250;
	volatile uint32_t x635 = 784105289U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t157 = 86802192;

    t157 = ((x633-(x634==x635))>x636);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x637 = 1;
	uint16_t x639 = 889U;
	static int16_t x640 = INT16_MAX;
	int32_t t158 = 56954;

    t158 = ((x637-(x638==x639))>x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x641 = -6;
	int16_t x642 = -1;
	uint32_t x644 = 476232U;

    t159 = ((x641-(x642==x643))>x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x645 = 4369250991740870641LL;
	static int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MAX;
	int8_t x648 = 50;
	int32_t t160 = 109079;

    t160 = ((x645-(x646==x647))>x648);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x649 = 0U;
	volatile uint8_t x652 = 91U;
	volatile int32_t t161 = 14652;

    t161 = ((x649-(x650==x651))>x652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x653 = 1026167U;
	volatile uint64_t x654 = UINT64_MAX;
	int16_t x656 = 2;

    t162 = ((x653-(x654==x655))>x656);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x657 = UINT8_MAX;
	int64_t x659 = INT64_MIN;
	int64_t x660 = INT64_MIN;
	static volatile int32_t t163 = -7155;

    t163 = ((x657-(x658==x659))>x660);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x661 = -211;
	int64_t x662 = -1LL;
	uint8_t x663 = 1U;
	int32_t t164 = 2;

    t164 = ((x661-(x662==x663))>x664);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x666 = INT16_MIN;
	int8_t x667 = INT8_MAX;
	int16_t x668 = INT16_MAX;
	volatile int32_t t165 = 4845;

    t165 = ((x665-(x666==x667))>x668);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x669 = 1;
	uint64_t x670 = UINT64_MAX;
	uint64_t x671 = UINT64_MAX;
	volatile int32_t t166 = 1931721;

    t166 = ((x669-(x670==x671))>x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x673 = -4680416578511122LL;
	volatile int64_t x674 = 839359510333129259LL;
	int16_t x675 = -665;
	int64_t x676 = -1LL;
	int32_t t167 = 5;

    t167 = ((x673-(x674==x675))>x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x677 = INT8_MIN;
	uint8_t x679 = 1U;
	volatile uint16_t x680 = 22208U;
	int32_t t168 = 7463918;

    t168 = ((x677-(x678==x679))>x680);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x681 = 10467988375LL;
	volatile uint8_t x682 = 2U;
	int8_t x683 = INT8_MIN;
	int32_t x684 = 63;
	static volatile int32_t t169 = -1;

    t169 = ((x681-(x682==x683))>x684);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x685 = INT64_MAX;
	static uint8_t x686 = UINT8_MAX;
	int64_t x687 = -1LL;
	static int16_t x688 = -3690;
	int32_t t170 = 26770950;

    t170 = ((x685-(x686==x687))>x688);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	uint64_t x691 = UINT64_MAX;
	int64_t x692 = INT64_MAX;

    t171 = ((x689-(x690==x691))>x692);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x693 = INT16_MIN;
	int8_t x695 = 0;
	static int64_t x696 = 1388LL;
	int32_t t172 = 20;

    t172 = ((x693-(x694==x695))>x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x698 = 13484879LLU;
	static volatile int16_t x700 = -1;
	volatile int32_t t173 = 326302816;

    t173 = ((x697-(x698==x699))>x700);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x701 = INT8_MIN;
	volatile int32_t x702 = -4060697;
	volatile int64_t x703 = INT64_MIN;
	int16_t x704 = INT16_MAX;
	volatile int32_t t174 = 3138731;

    t174 = ((x701-(x702==x703))>x704);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x706 = 0;
	int16_t x708 = INT16_MIN;
	int32_t t175 = 335;

    t175 = ((x705-(x706==x707))>x708);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x709 = INT32_MIN;
	int8_t x710 = INT8_MAX;
	volatile int64_t x711 = INT64_MIN;
	volatile int32_t t176 = -1;

    t176 = ((x709-(x710==x711))>x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x713 = 205944795LLU;
	int32_t x714 = -1;
	volatile int16_t x715 = INT16_MAX;

    t177 = ((x713-(x714==x715))>x716);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x717 = 4U;
	volatile uint64_t x718 = 137086984LLU;
	int32_t x720 = -1;
	int32_t t178 = 2851;

    t178 = ((x717-(x718==x719))>x720);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x721 = 1;
	static volatile uint16_t x723 = 31U;

    t179 = ((x721-(x722==x723))>x724);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x725 = 27515U;
	int32_t x726 = 6882;
	uint64_t x727 = 500052368245137LLU;
	static volatile int16_t x728 = -1;
	int32_t t180 = 1;

    t180 = ((x725-(x726==x727))>x728);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x729 = UINT16_MAX;
	uint64_t x730 = UINT64_MAX;
	int32_t x732 = 365150;
	volatile int32_t t181 = -50218;

    t181 = ((x729-(x730==x731))>x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x733 = -31;
	uint8_t x734 = UINT8_MAX;
	int16_t x735 = -1;
	int32_t x736 = -300965472;
	int32_t t182 = -112343;

    t182 = ((x733-(x734==x735))>x736);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x737 = UINT32_MAX;
	static int8_t x739 = 4;
	int32_t x740 = -982427;
	volatile int32_t t183 = -10;

    t183 = ((x737-(x738==x739))>x740);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x742 = INT64_MIN;
	uint32_t x743 = 64098U;
	volatile int32_t x744 = INT32_MIN;
	int32_t t184 = 2911;

    t184 = ((x741-(x742==x743))>x744);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x746 = 135U;
	static int32_t x748 = INT32_MAX;

    t185 = ((x745-(x746==x747))>x748);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x749 = UINT16_MAX;
	int64_t x750 = INT64_MAX;
	int32_t x751 = INT32_MAX;
	int64_t x752 = INT64_MIN;

    t186 = ((x749-(x750==x751))>x752);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x753 = UINT8_MAX;
	uint8_t x755 = 0U;
	static int32_t x756 = 324136;

    t187 = ((x753-(x754==x755))>x756);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	volatile int32_t x759 = INT32_MIN;
	uint32_t x760 = 191957U;

    t188 = ((x757-(x758==x759))>x760);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x761 = 1U;
	static volatile int32_t x762 = -1;
	int32_t x763 = -1;
	int16_t x764 = -6204;
	int32_t t189 = -499777;

    t189 = ((x761-(x762==x763))>x764);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x765 = 85U;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	int16_t x768 = INT16_MIN;

    t190 = ((x765-(x766==x767))>x768);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x770 = 5U;
	int16_t x772 = INT16_MIN;
	volatile int32_t t191 = 6821932;

    t191 = ((x769-(x770==x771))>x772);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x773 = 2U;
	int16_t x774 = INT16_MIN;
	volatile int16_t x775 = INT16_MAX;
	int8_t x776 = INT8_MIN;
	volatile int32_t t192 = 143336;

    t192 = ((x773-(x774==x775))>x776);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x777 = 49633330U;
	static int8_t x778 = -8;
	int16_t x779 = INT16_MIN;
	volatile int32_t t193 = -105790;

    t193 = ((x777-(x778==x779))>x780);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x781 = INT8_MAX;
	int64_t x783 = -40718159LL;

    t194 = ((x781-(x782==x783))>x784);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MIN;
	int64_t x787 = -22181128LL;
	volatile int16_t x788 = -10472;
	volatile int32_t t195 = -14;

    t195 = ((x785-(x786==x787))>x788);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	static int8_t x791 = -44;
	int32_t t196 = 223887220;

    t196 = ((x789-(x790==x791))>x792);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x793 = 0U;
	static int8_t x794 = 3;
	int32_t x795 = INT32_MIN;
	volatile int64_t x796 = INT64_MIN;

    t197 = ((x793-(x794==x795))>x796);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x797 = 57U;
	uint32_t x799 = UINT32_MAX;
	static int32_t x800 = -1;
	int32_t t198 = 822159;

    t198 = ((x797-(x798==x799))>x800);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x801 = INT16_MAX;
	int64_t x802 = INT64_MIN;
	uint16_t x803 = 20236U;
	int8_t x804 = INT8_MAX;

    t199 = ((x801-(x802==x803))>x804);

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

