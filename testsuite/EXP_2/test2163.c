
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

static volatile int16_t x3 = INT16_MIN;
int64_t x4 = INT64_MIN;
volatile int32_t t0 = 0;
int16_t x5 = INT16_MIN;
int32_t x8 = INT32_MIN;
int16_t x10 = -11;
int64_t x12 = INT64_MIN;
int64_t x17 = INT64_MIN;
int32_t x18 = -1;
int16_t x19 = INT16_MAX;
uint8_t x22 = UINT8_MAX;
int16_t x34 = -1;
int16_t x36 = INT16_MIN;
static int32_t t7 = -1059202656;
uint64_t x43 = 15086314074LLU;
static int32_t t9 = -206;
int32_t x45 = INT32_MIN;
volatile uint32_t x56 = 36007U;
uint32_t x60 = 12996U;
int8_t x63 = INT8_MIN;
static int32_t x64 = 80;
static int32_t t14 = -713;
uint64_t x68 = 6621815LLU;
static int32_t x72 = INT32_MAX;
volatile int32_t t16 = 19235;
int16_t x73 = INT16_MIN;
uint8_t x76 = UINT8_MAX;
static int32_t x78 = -1;
static volatile int64_t x80 = -1LL;
static int8_t x82 = -10;
int16_t x85 = -523;
int32_t t20 = 0;
int8_t x89 = -1;
volatile uint32_t x90 = 62084U;
static uint8_t x91 = UINT8_MAX;
static volatile int8_t x93 = INT8_MIN;
uint16_t x96 = 5922U;
int16_t x107 = INT16_MIN;
int32_t x110 = -3315283;
static uint8_t x116 = 1U;
volatile int32_t x119 = INT32_MIN;
static volatile uint32_t x121 = 24608U;
volatile int16_t x122 = -48;
volatile int16_t x124 = INT16_MIN;
int32_t t31 = 3920424;
int8_t x138 = INT8_MAX;
static volatile int32_t x139 = -1;
uint16_t x140 = 609U;
int32_t t32 = -4;
static volatile int8_t x142 = -1;
int32_t x144 = INT32_MIN;
volatile int32_t t33 = -42;
int32_t x147 = -1;
static int8_t x152 = 19;
int32_t t35 = -216705130;
int8_t x157 = -1;
static int8_t x158 = INT8_MAX;
static int8_t x160 = INT8_MIN;
uint32_t x165 = 176293U;
volatile int32_t t39 = -893531229;
int16_t x171 = 519;
volatile int16_t x176 = -15939;
static volatile int8_t x179 = -1;
uint8_t x180 = UINT8_MAX;
int32_t t42 = 1;
int32_t t44 = 3;
int8_t x190 = -1;
uint64_t x193 = 2588782165886226841LLU;
static int16_t x194 = -1;
static int32_t x207 = 573;
int8_t x213 = INT8_MIN;
int32_t x219 = -30974862;
volatile int64_t x220 = -2843144859368569LL;
int16_t x221 = INT16_MIN;
volatile uint16_t x223 = 27U;
int8_t x227 = 1;
int32_t x235 = 249;
volatile uint32_t x247 = UINT32_MAX;
int32_t t59 = 1;
volatile int16_t x253 = -1;
int16_t x256 = -14797;
int32_t x258 = -1;
int64_t x264 = INT64_MAX;
volatile int16_t x289 = 473;
static volatile uint16_t x304 = 1419U;
volatile int32_t x305 = INT32_MAX;
int64_t x306 = INT64_MAX;
volatile int32_t t73 = -110637142;
uint32_t x309 = 86U;
int16_t x310 = -1;
static uint8_t x318 = UINT8_MAX;
static int32_t x319 = INT32_MIN;
static uint8_t x322 = 112U;
static int16_t x325 = INT16_MAX;
int16_t x326 = INT16_MAX;
int32_t t78 = 125032033;
uint64_t x329 = 870923479135548470LLU;
int32_t t79 = -180463;
static uint8_t x333 = 6U;
volatile uint32_t x336 = 1648U;
volatile uint16_t x365 = 5U;
volatile int32_t t91 = 189681151;
volatile int8_t x385 = INT8_MAX;
int8_t x390 = INT8_MAX;
int64_t x391 = -1LL;
volatile int32_t t96 = 1;
int8_t x405 = 25;
volatile uint16_t x407 = 28U;
int8_t x409 = INT8_MIN;
static int64_t x410 = INT64_MAX;
static int32_t t99 = -10150;
static int8_t x417 = INT8_MIN;
volatile int32_t x419 = 6802;
int16_t x422 = 6292;
int8_t x424 = INT8_MIN;
int64_t x426 = 11580LL;
volatile uint16_t x431 = 124U;
int16_t x432 = INT16_MAX;
static int32_t t103 = 6;
int32_t x437 = INT32_MIN;
static int32_t x438 = INT32_MAX;
int64_t x439 = INT64_MIN;
static int16_t x450 = 737;
int64_t x451 = INT64_MAX;
uint16_t x454 = 798U;
int16_t x461 = INT16_MIN;
int8_t x462 = INT8_MIN;
volatile int32_t t111 = -5;
uint8_t x465 = 51U;
static int32_t x466 = 244;
int8_t x468 = INT8_MIN;
volatile int16_t x469 = INT16_MIN;
int32_t x472 = INT32_MAX;
static volatile int32_t t113 = -959099963;
int32_t x485 = 125;
volatile int8_t x495 = INT8_MAX;
int32_t t118 = 855406;
uint16_t x500 = UINT16_MAX;
static uint64_t x502 = 2835LLU;
volatile uint64_t x505 = 181876347LLU;
uint8_t x539 = 0U;
volatile int64_t x542 = -1LL;
uint64_t x544 = UINT64_MAX;
uint32_t x548 = 16U;
int64_t x549 = -1LL;
volatile int32_t t131 = -3498232;
uint8_t x553 = UINT8_MAX;
static int16_t x556 = 3;
static volatile int32_t t134 = -2;
static volatile uint32_t x569 = 58750U;
static volatile int64_t x570 = INT64_MAX;
uint8_t x577 = UINT8_MAX;
int32_t x583 = 0;
static int32_t t138 = -83973196;
static uint8_t x585 = UINT8_MAX;
uint64_t x587 = 9LLU;
int32_t x588 = INT32_MAX;
uint32_t x602 = 33197086U;
volatile int16_t x627 = -46;
volatile int32_t t147 = -852;
int64_t x630 = 39LL;
volatile int32_t t148 = -6;
uint64_t x645 = UINT64_MAX;
uint64_t x659 = 89386351814LLU;
int8_t x665 = -1;
int8_t x666 = 14;
int64_t x667 = 689885449LL;
uint16_t x672 = UINT16_MAX;
int32_t x674 = INT32_MIN;
volatile int32_t x677 = INT32_MIN;
static int32_t x680 = -188774;
volatile int64_t x681 = -1LL;
volatile uint64_t x684 = UINT64_MAX;
volatile int32_t t161 = 50508684;
int32_t x693 = 190574214;
int16_t x697 = 15;
uint16_t x699 = 303U;
uint32_t x708 = 9995U;
static uint32_t x710 = 13U;
int32_t t165 = -15556474;
int64_t x713 = INT64_MAX;
int32_t t168 = -26800;
static int8_t x735 = 0;
uint16_t x743 = UINT16_MAX;
static int16_t x751 = -1;
static uint32_t x760 = 267U;
static int64_t x766 = INT64_MIN;
static uint16_t x767 = 76U;
static int32_t t178 = -2655;
uint32_t x774 = UINT32_MAX;
static volatile int32_t x789 = -24118020;
volatile int8_t x790 = -31;
uint8_t x794 = 22U;
static uint16_t x795 = UINT16_MAX;
uint8_t x797 = UINT8_MAX;
static uint32_t x799 = 224097U;
static int32_t t183 = 50;
volatile int32_t x801 = -54;
static uint8_t x803 = 25U;
volatile int32_t t184 = -5024894;
volatile int32_t x805 = -1;
static volatile int16_t x807 = INT16_MIN;
int16_t x811 = INT16_MIN;
volatile uint64_t x814 = 28246LLU;
volatile int32_t x819 = -5;
int64_t x840 = INT64_MIN;
uint32_t x842 = 1004540U;
static uint8_t x843 = 8U;
int16_t x844 = INT16_MAX;
volatile int32_t t192 = 312471;
int32_t x851 = -58278;
uint16_t x856 = 2U;
uint8_t x859 = 6U;
volatile int32_t x868 = INT32_MAX;
uint32_t x869 = 29797997U;
int32_t t198 = -65419;
uint16_t x879 = 0U;


void f0(void) {
    	uint32_t x1 = 9U;
	uint32_t x2 = UINT32_MAX;

    t0 = ((x1+(x2&x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = -1;
	volatile uint16_t x7 = 1452U;
	int32_t t1 = 991373705;

    t1 = ((x5+(x6&x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	static volatile int32_t t2 = 746860851;

    t2 = ((x9+(x10&x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = 81400;

    t3 = ((x17+(x18&x19))!=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	int16_t x24 = 2436;
	volatile int32_t t4 = -1;

    t4 = ((x21+(x22&x23))!=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MAX;
	int8_t x27 = 3;
	static volatile uint8_t x28 = 1U;
	int32_t t5 = -52;

    t5 = ((x25+(x26&x27))!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x29 = 5222U;
	volatile int8_t x30 = 1;
	int64_t x31 = INT64_MAX;
	static uint8_t x32 = 4U;
	volatile int32_t t6 = -1058431682;

    t6 = ((x29+(x30&x31))!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x33 = 7U;
	static int8_t x35 = INT8_MIN;

    t7 = ((x33+(x34&x35))!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = -3;
	int8_t x39 = INT8_MAX;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -49508293;

    t8 = ((x37+(x38&x39))!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	volatile int16_t x42 = INT16_MAX;
	int8_t x44 = 1;

    t9 = ((x41+(x42&x43))!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = 579547LL;
	uint32_t x47 = 582707U;
	static int32_t x48 = -414950;
	static int32_t t10 = 388339;

    t10 = ((x45+(x46&x47))!=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = INT16_MAX;
	volatile int8_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -532652792201563947LL;
	volatile int32_t t11 = -15932492;

    t11 = ((x49+(x50&x51))!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = 3;
	int8_t x54 = INT8_MAX;
	int16_t x55 = 0;
	volatile int32_t t12 = -5607;

    t12 = ((x53+(x54&x55))!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	uint8_t x58 = 23U;
	volatile int64_t x59 = 1LL;
	int32_t t13 = 788653078;

    t13 = ((x57+(x58&x59))!=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	int8_t x62 = 13;

    t14 = ((x61+(x62&x63))!=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MIN;
	volatile int16_t x67 = 1;
	int32_t t15 = -86067974;

    t15 = ((x65+(x66&x67))!=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -41394506;
	uint64_t x70 = UINT64_MAX;
	static volatile uint64_t x71 = 6920982074134LLU;

    t16 = ((x69+(x70&x71))!=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x74 = INT64_MIN;
	volatile uint64_t x75 = 2047LLU;
	int32_t t17 = 14675;

    t17 = ((x73+(x74&x75))!=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	static int32_t x79 = -1;
	volatile int32_t t18 = 51;

    t18 = ((x77+(x78&x79))!=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 3;
	volatile int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;
	int32_t t19 = -5681;

    t19 = ((x81+(x82&x83))!=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = -1;
	int32_t x87 = -64833;
	int64_t x88 = INT64_MIN;

    t20 = ((x85+(x86&x87))!=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x92 = -1;
	volatile int32_t t21 = -16580049;

    t21 = ((x89+(x90&x91))!=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x94 = 12806;
	int8_t x95 = -1;
	int32_t t22 = 207154985;

    t22 = ((x93+(x94&x95))!=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static int32_t x98 = -1;
	uint64_t x99 = 3LLU;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t23 = 47005621;

    t23 = ((x97+(x98&x99))!=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x101 = 50U;
	volatile int16_t x102 = -1;
	uint16_t x103 = 15U;
	int64_t x104 = INT64_MIN;
	int32_t t24 = 150949;

    t24 = ((x101+(x102&x103))!=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MAX;
	int8_t x106 = 36;
	uint8_t x108 = UINT8_MAX;
	static int32_t t25 = 14566;

    t25 = ((x105+(x106&x107))!=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x109 = -418;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	static int32_t t26 = 163637;

    t26 = ((x109+(x110&x111))!=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MAX;
	int64_t x114 = 563127LL;
	volatile int8_t x115 = -62;
	static int32_t t27 = 0;

    t27 = ((x113+(x114&x115))!=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x117 = -1;
	uint64_t x118 = 8LLU;
	uint32_t x120 = 4233989U;
	int32_t t28 = 7;

    t28 = ((x117+(x118&x119))!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x123 = -1;
	int32_t t29 = 29102622;

    t29 = ((x121+(x122&x123))!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = 2039442;
	int16_t x130 = INT16_MIN;
	volatile int16_t x131 = -1;
	uint32_t x132 = 498860U;
	static int32_t t30 = -266806829;

    t30 = ((x129+(x130&x131))!=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MIN;
	uint64_t x134 = 29076974302274LLU;
	uint64_t x135 = 7LLU;
	uint64_t x136 = 204646168144452347LLU;

    t31 = ((x133+(x134&x135))!=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MIN;

    t32 = ((x137+(x138&x139))!=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = UINT32_MAX;
	uint64_t x143 = 679877LLU;

    t33 = ((x141+(x142&x143))!=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x145 = 846U;
	uint32_t x146 = 58839U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t34 = -158220;

    t34 = ((x145+(x146&x147))!=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = 935986U;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MIN;

    t35 = ((x149+(x150&x151))!=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	uint16_t x154 = 2451U;
	uint8_t x155 = 3U;
	int16_t x156 = -8038;
	int32_t t36 = -1;

    t36 = ((x153+(x154&x155))!=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x159 = INT8_MAX;
	volatile int32_t t37 = 33194;

    t37 = ((x157+(x158&x159))!=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = 11;
	int8_t x162 = -1;
	volatile uint16_t x163 = 12907U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t38 = -174591108;

    t38 = ((x161+(x162&x163))!=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x166 = INT64_MIN;
	uint64_t x167 = 3146LLU;
	volatile uint64_t x168 = 85485808526LLU;

    t39 = ((x165+(x166&x167))!=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -1;
	volatile int64_t x170 = 41171LL;
	int16_t x172 = 231;
	volatile int32_t t40 = -2539200;

    t40 = ((x169+(x170&x171))!=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x173 = INT8_MAX;
	uint32_t x174 = 5U;
	int16_t x175 = INT16_MAX;
	int32_t t41 = 1;

    t41 = ((x173+(x174&x175))!=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x177 = UINT8_MAX;
	static int16_t x178 = 1;

    t42 = ((x177+(x178&x179))!=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = -417895;
	uint64_t x182 = 53957461968LLU;
	static volatile int64_t x183 = INT64_MAX;
	static int8_t x184 = INT8_MIN;
	static volatile int32_t t43 = -3943;

    t43 = ((x181+(x182&x183))!=x184);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	uint16_t x188 = 310U;

    t44 = ((x185+(x186&x187))!=x188);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x189 = 83;
	static int16_t x191 = -14;
	static int32_t x192 = -800;
	volatile int32_t t45 = -5;

    t45 = ((x189+(x190&x191))!=x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x195 = 8;
	int8_t x196 = INT8_MAX;
	volatile int32_t t46 = 1815;

    t46 = ((x193+(x194&x195))!=x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x197 = 1227170489135LLU;
	int8_t x198 = 4;
	int32_t x199 = INT32_MIN;
	static volatile int16_t x200 = -1;
	volatile int32_t t47 = -99013;

    t47 = ((x197+(x198&x199))!=x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = 22;
	static uint8_t x206 = 6U;
	int8_t x208 = -43;
	static int32_t t48 = -549781;

    t48 = ((x205+(x206&x207))!=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x209 = INT64_MAX;
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 2855348337369652880LLU;
	int8_t x212 = INT8_MIN;
	int32_t t49 = 7;

    t49 = ((x209+(x210&x211))!=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1LL;
	static volatile int32_t t50 = 252;

    t50 = ((x213+(x214&x215))!=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MAX;
	static uint32_t x218 = 91U;
	int32_t t51 = 707939698;

    t51 = ((x217+(x218&x219))!=x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = -1;

    t52 = ((x221+(x222&x223))!=x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = -236330434LL;
	int16_t x226 = -1;
	static int16_t x228 = -14;
	volatile int32_t t53 = 2;

    t53 = ((x225+(x226&x227))!=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = 47;
	static uint16_t x230 = 27751U;
	static volatile uint32_t x231 = 293U;
	uint8_t x232 = 12U;
	volatile int32_t t54 = 33035675;

    t54 = ((x229+(x230&x231))!=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x233 = 261783LL;
	int16_t x234 = INT16_MIN;
	int64_t x236 = 7506826521LL;
	int32_t t55 = 16435916;

    t55 = ((x233+(x234&x235))!=x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x237 = INT16_MIN;
	volatile int64_t x238 = INT64_MAX;
	static uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MAX;
	int32_t t56 = 213112080;

    t56 = ((x237+(x238&x239))!=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = -5;
	uint32_t x242 = 15934068U;
	static int32_t x243 = INT32_MAX;
	volatile int16_t x244 = -36;
	int32_t t57 = 305254430;

    t57 = ((x241+(x242&x243))!=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x245 = 20085125LLU;
	uint8_t x246 = 25U;
	volatile int8_t x248 = -1;
	static volatile int32_t t58 = -191;

    t58 = ((x245+(x246&x247))!=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = 23U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;

    t59 = ((x249+(x250&x251))!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x254 = 193370;
	static int64_t x255 = INT64_MAX;
	int32_t t60 = -310876;

    t60 = ((x253+(x254&x255))!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = -6963;
	volatile uint16_t x259 = UINT16_MAX;
	static int8_t x260 = INT8_MAX;
	int32_t t61 = -18;

    t61 = ((x257+(x258&x259))!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x261 = 16;
	static int32_t x262 = INT32_MIN;
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t t62 = -12192;

    t62 = ((x261+(x262&x263))!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x265 = 44063U;
	volatile int8_t x266 = 26;
	static uint32_t x267 = 518433156U;
	volatile int32_t x268 = INT32_MAX;
	int32_t t63 = -14521;

    t63 = ((x265+(x266&x267))!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x269 = -32881138031230LL;
	int8_t x270 = INT8_MIN;
	int64_t x271 = 15193960236150LL;
	static int64_t x272 = -1LL;
	volatile int32_t t64 = -56026125;

    t64 = ((x269+(x270&x271))!=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	static uint64_t x275 = 11580424283902LLU;
	static int64_t x276 = -704803319858LL;
	volatile int32_t t65 = -109314705;

    t65 = ((x273+(x274&x275))!=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = UINT8_MAX;
	volatile uint16_t x280 = 9U;
	int32_t t66 = 3;

    t66 = ((x277+(x278&x279))!=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;
	int16_t x284 = -6;
	int32_t t67 = -62673;

    t67 = ((x281+(x282&x283))!=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = 6;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t68 = -885;

    t68 = ((x285+(x286&x287))!=x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x290 = INT64_MIN;
	int32_t x291 = -283;
	static uint64_t x292 = 49LLU;
	static volatile int32_t t69 = 475396;

    t69 = ((x289+(x290&x291))!=x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	static uint16_t x295 = UINT16_MAX;
	static int8_t x296 = INT8_MIN;
	int32_t t70 = -248;

    t70 = ((x293+(x294&x295))!=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x297 = 3;
	uint64_t x298 = 414318686420200LLU;
	uint64_t x299 = 674649794475450LLU;
	int8_t x300 = INT8_MIN;
	int32_t t71 = -17310;

    t71 = ((x297+(x298&x299))!=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = 885613092338LL;
	volatile uint16_t x302 = UINT16_MAX;
	int32_t x303 = -1;
	volatile int32_t t72 = -10411354;

    t72 = ((x301+(x302&x303))!=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x307 = INT64_MIN;
	int64_t x308 = 6690372108506LL;

    t73 = ((x305+(x306&x307))!=x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x311 = -198756669LL;
	int8_t x312 = 24;
	static int32_t t74 = -434;

    t74 = ((x309+(x310&x311))!=x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	static int8_t x315 = INT8_MAX;
	static uint64_t x316 = 13772LLU;
	static int32_t t75 = -30245000;

    t75 = ((x313+(x314&x315))!=x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x317 = 0;
	int32_t x320 = -1;
	int32_t t76 = 28362054;

    t76 = ((x317+(x318&x319))!=x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x321 = 53046LLU;
	int32_t x323 = INT32_MAX;
	uint16_t x324 = 4187U;
	static int32_t t77 = -5;

    t77 = ((x321+(x322&x323))!=x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x327 = 1636057LL;
	int32_t x328 = 170428155;

    t78 = ((x325+(x326&x327))!=x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x330 = UINT32_MAX;
	int8_t x331 = 7;
	int64_t x332 = 935219644946LL;

    t79 = ((x329+(x330&x331))!=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x334 = 18U;
	uint8_t x335 = 37U;
	static int32_t t80 = 20913396;

    t80 = ((x333+(x334&x335))!=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x337 = 45U;
	int16_t x338 = INT16_MAX;
	static int64_t x339 = INT64_MIN;
	volatile int8_t x340 = -1;
	int32_t t81 = -174724426;

    t81 = ((x337+(x338&x339))!=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x341 = 0;
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MAX;
	volatile int16_t x344 = -3;
	volatile int32_t t82 = -50413;

    t82 = ((x341+(x342&x343))!=x344);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = UINT16_MAX;
	uint64_t x346 = 6928529736173LLU;
	uint8_t x347 = 41U;
	uint32_t x348 = 41571U;
	volatile int32_t t83 = 343053525;

    t83 = ((x345+(x346&x347))!=x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x349 = 27;
	volatile uint64_t x350 = 28861679161LLU;
	static int32_t x351 = -1;
	uint64_t x352 = 4LLU;
	int32_t t84 = 148486;

    t84 = ((x349+(x350&x351))!=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x357 = INT32_MAX;
	int32_t x358 = INT32_MIN;
	static uint16_t x359 = 248U;
	volatile int8_t x360 = -14;
	static int32_t t85 = -4889;

    t85 = ((x357+(x358&x359))!=x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x361 = 1035278411959994LLU;
	uint16_t x362 = 4269U;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -255036143695LL;
	volatile int32_t t86 = -40141;

    t86 = ((x361+(x362&x363))!=x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	int16_t x368 = 10;
	int32_t t87 = -4732575;

    t87 = ((x365+(x366&x367))!=x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x369 = 0U;
	static int64_t x370 = 1609LL;
	static volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = 14;
	static int32_t t88 = 55893035;

    t88 = ((x369+(x370&x371))!=x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x373 = INT16_MAX;
	int16_t x374 = 238;
	static int8_t x375 = 3;
	volatile uint8_t x376 = 1U;
	int32_t t89 = -1;

    t89 = ((x373+(x374&x375))!=x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x377 = 2U;
	int8_t x378 = INT8_MAX;
	static int16_t x379 = INT16_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t90 = 2957878;

    t90 = ((x377+(x378&x379))!=x380);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x381 = -1;
	int8_t x382 = INT8_MAX;
	volatile int32_t x383 = INT32_MAX;
	static uint8_t x384 = 36U;

    t91 = ((x381+(x382&x383))!=x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x386 = UINT16_MAX;
	volatile uint64_t x387 = 1LLU;
	static volatile int8_t x388 = INT8_MAX;
	volatile int32_t t92 = -265;

    t92 = ((x385+(x386&x387))!=x388);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x389 = 42U;
	uint16_t x392 = 73U;
	volatile int32_t t93 = -1;

    t93 = ((x389+(x390&x391))!=x392);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	uint16_t x395 = 1836U;
	volatile int64_t x396 = INT64_MAX;
	int32_t t94 = 203498840;

    t94 = ((x393+(x394&x395))!=x396);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x397 = 18U;
	int64_t x398 = 117043214890973LL;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	static int32_t t95 = 482576340;

    t95 = ((x397+(x398&x399))!=x400);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x401 = -1LL;
	int8_t x402 = INT8_MIN;
	int8_t x403 = -3;
	int32_t x404 = 14300;

    t96 = ((x401+(x402&x403))!=x404);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x406 = INT32_MIN;
	int8_t x408 = -1;
	int32_t t97 = 37;

    t97 = ((x405+(x406&x407))!=x408);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x411 = INT64_MIN;
	int64_t x412 = -1LL;
	static volatile int32_t t98 = 35228;

    t98 = ((x409+(x410&x411))!=x412);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x413 = 1;
	static int16_t x414 = INT16_MAX;
	uint8_t x415 = 42U;
	int32_t x416 = INT32_MIN;

    t99 = ((x413+(x414&x415))!=x416);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x418 = 641LL;
	int32_t x420 = 6392;
	int32_t t100 = -7905;

    t100 = ((x417+(x418&x419))!=x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x421 = 17U;
	static uint32_t x423 = 15U;
	int32_t t101 = -1;

    t101 = ((x421+(x422&x423))!=x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x425 = -54;
	int8_t x427 = 0;
	int8_t x428 = -1;
	static int32_t t102 = -3897;

    t102 = ((x425+(x426&x427))!=x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x429 = UINT64_MAX;
	volatile int64_t x430 = INT64_MAX;

    t103 = ((x429+(x430&x431))!=x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = -1;
	int8_t x434 = INT8_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint16_t x436 = UINT16_MAX;
	int32_t t104 = -104211;

    t104 = ((x433+(x434&x435))!=x436);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x440 = UINT8_MAX;
	static int32_t t105 = -1292741;

    t105 = ((x437+(x438&x439))!=x440);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 1618;
	int32_t x444 = INT32_MIN;
	volatile int32_t t106 = -155818;

    t106 = ((x441+(x442&x443))!=x444);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x445 = INT64_MIN;
	volatile uint32_t x446 = 0U;
	static int32_t x447 = INT32_MIN;
	int32_t x448 = -54264;
	volatile int32_t t107 = 5010;

    t107 = ((x445+(x446&x447))!=x448);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = INT8_MIN;
	uint64_t x452 = 15641569596904LLU;
	static volatile int32_t t108 = -358587;

    t108 = ((x449+(x450&x451))!=x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x453 = INT64_MIN;
	uint64_t x455 = 687177058485734498LLU;
	volatile int64_t x456 = INT64_MIN;
	static int32_t t109 = 7715120;

    t109 = ((x453+(x454&x455))!=x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x457 = INT32_MAX;
	static uint8_t x458 = 18U;
	int32_t x459 = INT32_MIN;
	int32_t x460 = -1;
	int32_t t110 = 1;

    t110 = ((x457+(x458&x459))!=x460);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x463 = UINT16_MAX;
	int32_t x464 = 2643861;

    t111 = ((x461+(x462&x463))!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x467 = 29U;
	volatile int32_t t112 = 30;

    t112 = ((x465+(x466&x467))!=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x470 = 2LLU;
	uint64_t x471 = UINT64_MAX;

    t113 = ((x469+(x470&x471))!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = -1;
	static int32_t x474 = INT32_MIN;
	volatile int64_t x475 = -1LL;
	int64_t x476 = -63764072LL;
	static volatile int32_t t114 = -1;

    t114 = ((x473+(x474&x475))!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x481 = 0U;
	int8_t x482 = -1;
	static volatile int32_t x483 = INT32_MAX;
	uint16_t x484 = 1U;
	int32_t t115 = 0;

    t115 = ((x481+(x482&x483))!=x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x486 = -1;
	uint16_t x487 = 6U;
	int8_t x488 = INT8_MIN;
	int32_t t116 = -16906;

    t116 = ((x485+(x486&x487))!=x488);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = 3723940;
	int32_t x490 = INT32_MIN;
	static volatile int64_t x491 = -745LL;
	static volatile int64_t x492 = -122LL;
	int32_t t117 = 960;

    t117 = ((x489+(x490&x491))!=x492);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = -2;
	uint8_t x494 = UINT8_MAX;
	int32_t x496 = -1;

    t118 = ((x493+(x494&x495))!=x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = -1;
	int32_t x498 = 956;
	static int32_t x499 = -2;
	volatile int32_t t119 = -176061249;

    t119 = ((x497+(x498&x499))!=x500);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x501 = 1U;
	int8_t x503 = -1;
	volatile int64_t x504 = INT64_MIN;
	volatile int32_t t120 = 4630968;

    t120 = ((x501+(x502&x503))!=x504);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x506 = INT64_MAX;
	int32_t x507 = 11006;
	uint16_t x508 = UINT16_MAX;
	int32_t t121 = -10726;

    t121 = ((x505+(x506&x507))!=x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x509 = -4;
	int8_t x510 = -1;
	uint64_t x511 = 62LLU;
	volatile int16_t x512 = INT16_MAX;
	int32_t t122 = -122643;

    t122 = ((x509+(x510&x511))!=x512);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x513 = -1593664124038352558LL;
	int16_t x514 = INT16_MIN;
	volatile int16_t x515 = INT16_MAX;
	static int16_t x516 = INT16_MIN;
	int32_t t123 = 11;

    t123 = ((x513+(x514&x515))!=x516);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int32_t x518 = INT32_MIN;
	uint64_t x519 = 2212765476627LLU;
	volatile int64_t x520 = -169791380LL;
	int32_t t124 = 85;

    t124 = ((x517+(x518&x519))!=x520);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x521 = 25LLU;
	int16_t x522 = -15;
	volatile int8_t x523 = -6;
	volatile uint16_t x524 = UINT16_MAX;
	static volatile int32_t t125 = 10362082;

    t125 = ((x521+(x522&x523))!=x524);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x529 = -234;
	uint32_t x530 = 23U;
	uint16_t x531 = 1495U;
	int64_t x532 = -1LL;
	static volatile int32_t t126 = -1411;

    t126 = ((x529+(x530&x531))!=x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x533 = 430184U;
	uint32_t x534 = 44U;
	uint32_t x535 = UINT32_MAX;
	uint32_t x536 = 6214U;
	static int32_t t127 = 962;

    t127 = ((x533+(x534&x535))!=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = -7;
	uint64_t x538 = UINT64_MAX;
	int32_t x540 = INT32_MIN;
	volatile int32_t t128 = -1037601840;

    t128 = ((x537+(x538&x539))!=x540);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x541 = 4LLU;
	int16_t x543 = INT16_MIN;
	int32_t t129 = 491;

    t129 = ((x541+(x542&x543))!=x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	volatile uint32_t x546 = 15U;
	int64_t x547 = -1LL;
	volatile int32_t t130 = -93899542;

    t130 = ((x545+(x546&x547))!=x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x550 = 1946054406855475227LLU;
	uint16_t x551 = 444U;
	int64_t x552 = INT64_MIN;

    t131 = ((x549+(x550&x551))!=x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x554 = INT64_MIN;
	volatile int8_t x555 = INT8_MIN;
	volatile int32_t t132 = -3;

    t132 = ((x553+(x554&x555))!=x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x561 = -2470087LL;
	static volatile int32_t x562 = INT32_MIN;
	int16_t x563 = 12;
	int64_t x564 = 2LL;
	static volatile int32_t t133 = -3;

    t133 = ((x561+(x562&x563))!=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x565 = INT16_MAX;
	volatile int64_t x566 = -1LL;
	volatile int32_t x567 = INT32_MIN;
	int16_t x568 = INT16_MIN;

    t134 = ((x565+(x566&x567))!=x568);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x571 = 2196358LLU;
	volatile int8_t x572 = INT8_MIN;
	volatile int32_t t135 = 1159549;

    t135 = ((x569+(x570&x571))!=x572);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MIN;
	volatile int8_t x574 = INT8_MAX;
	int8_t x575 = -1;
	static uint32_t x576 = UINT32_MAX;
	volatile int32_t t136 = -3004;

    t136 = ((x573+(x574&x575))!=x576);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x578 = 1;
	static volatile int8_t x579 = -1;
	int8_t x580 = INT8_MIN;
	volatile int32_t t137 = 27636;

    t137 = ((x577+(x578&x579))!=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x581 = INT32_MAX;
	volatile int64_t x582 = -250LL;
	int32_t x584 = 5;

    t138 = ((x581+(x582&x583))!=x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x586 = -1025;
	volatile int32_t t139 = 1855535;

    t139 = ((x585+(x586&x587))!=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x589 = -1LL;
	int16_t x590 = -1;
	static int16_t x591 = 253;
	uint16_t x592 = 29U;
	volatile int32_t t140 = -2270;

    t140 = ((x589+(x590&x591))!=x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x593 = INT16_MAX;
	uint64_t x594 = UINT64_MAX;
	uint16_t x595 = 22072U;
	static int16_t x596 = INT16_MIN;
	int32_t t141 = -111253;

    t141 = ((x593+(x594&x595))!=x596);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = INT32_MAX;
	int64_t x598 = -12396321269LL;
	int16_t x599 = -16;
	int8_t x600 = INT8_MIN;
	volatile int32_t t142 = -5;

    t142 = ((x597+(x598&x599))!=x600);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x601 = -10;
	static volatile int16_t x603 = INT16_MAX;
	int8_t x604 = -1;
	volatile int32_t t143 = -4;

    t143 = ((x601+(x602&x603))!=x604);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x605 = 0U;
	uint64_t x606 = UINT64_MAX;
	int64_t x607 = INT64_MIN;
	static int8_t x608 = INT8_MIN;
	static int32_t t144 = -656151715;

    t144 = ((x605+(x606&x607))!=x608);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x613 = INT8_MIN;
	int64_t x614 = -1693554677309821987LL;
	uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 1U;
	int32_t t145 = -3;

    t145 = ((x613+(x614&x615))!=x616);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x621 = -4291786522973649LL;
	static volatile uint32_t x622 = 18425U;
	volatile uint8_t x623 = 5U;
	uint16_t x624 = 53U;
	int32_t t146 = -161897846;

    t146 = ((x621+(x622&x623))!=x624);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x625 = UINT64_MAX;
	uint8_t x626 = 33U;
	uint32_t x628 = 6353U;

    t147 = ((x625+(x626&x627))!=x628);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x629 = 34U;
	volatile uint16_t x631 = 17U;
	uint16_t x632 = UINT16_MAX;

    t148 = ((x629+(x630&x631))!=x632);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x633 = -358671342;
	static volatile uint64_t x634 = UINT64_MAX;
	uint32_t x635 = 18U;
	int32_t x636 = 352317495;
	static volatile int32_t t149 = -255194;

    t149 = ((x633+(x634&x635))!=x636);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x637 = INT16_MIN;
	int64_t x638 = INT64_MAX;
	int32_t x639 = -1;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t150 = 297;

    t150 = ((x637+(x638&x639))!=x640);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x641 = -1;
	static uint32_t x642 = UINT32_MAX;
	volatile uint32_t x643 = 868U;
	static volatile uint8_t x644 = 0U;
	volatile int32_t t151 = -1797925;

    t151 = ((x641+(x642&x643))!=x644);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x646 = 46;
	int16_t x647 = INT16_MAX;
	uint16_t x648 = UINT16_MAX;
	int32_t t152 = -16;

    t152 = ((x645+(x646&x647))!=x648);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = INT16_MIN;
	int32_t x650 = 127;
	int32_t x651 = INT32_MAX;
	volatile int8_t x652 = INT8_MAX;
	int32_t t153 = 1398;

    t153 = ((x649+(x650&x651))!=x652);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint16_t x653 = UINT16_MAX;
	int16_t x654 = INT16_MIN;
	int16_t x655 = -7176;
	int8_t x656 = -1;
	int32_t t154 = 80;

    t154 = ((x653+(x654&x655))!=x656);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x657 = 14;
	volatile int8_t x658 = 0;
	int16_t x660 = INT16_MIN;
	int32_t t155 = 1287935;

    t155 = ((x657+(x658&x659))!=x660);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = INT32_MIN;
	int64_t x663 = INT64_MAX;
	uint64_t x664 = UINT64_MAX;
	static int32_t t156 = -18641;

    t156 = ((x661+(x662&x663))!=x664);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x668 = -13;
	volatile int32_t t157 = -145228087;

    t157 = ((x665+(x666&x667))!=x668);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x669 = -2;
	int8_t x670 = INT8_MAX;
	uint16_t x671 = UINT16_MAX;
	int32_t t158 = 1949739;

    t158 = ((x669+(x670&x671))!=x672);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x673 = INT16_MAX;
	uint32_t x675 = 156698U;
	int16_t x676 = INT16_MIN;
	static volatile int32_t t159 = 1055369394;

    t159 = ((x673+(x674&x675))!=x676);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x678 = 10490768U;
	volatile int16_t x679 = INT16_MIN;
	volatile int32_t t160 = 25301;

    t160 = ((x677+(x678&x679))!=x680);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x682 = INT16_MIN;
	int32_t x683 = -323041;

    t161 = ((x681+(x682&x683))!=x684);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = UINT8_MAX;
	uint64_t x696 = 791212LLU;
	volatile int32_t t162 = -51;

    t162 = ((x693+(x694&x695))!=x696);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x698 = 6U;
	int64_t x700 = 1945693465780LL;
	volatile int32_t t163 = 2273;

    t163 = ((x697+(x698&x699))!=x700);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x705 = -1;
	uint32_t x706 = 913795260U;
	int64_t x707 = 245LL;
	int32_t t164 = -331;

    t164 = ((x705+(x706&x707))!=x708);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x709 = INT16_MAX;
	static int64_t x711 = -29LL;
	static int32_t x712 = -1;

    t165 = ((x709+(x710&x711))!=x712);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x714 = INT64_MIN;
	volatile int8_t x715 = -1;
	int32_t x716 = 245064;
	int32_t t166 = 2450;

    t166 = ((x713+(x714&x715))!=x716);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MAX;
	volatile int32_t x719 = -1;
	static volatile int8_t x720 = INT8_MAX;
	volatile int32_t t167 = -3247810;

    t167 = ((x717+(x718&x719))!=x720);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = INT8_MIN;
	uint32_t x722 = 197826071U;
	int8_t x723 = INT8_MIN;
	static int64_t x724 = INT64_MIN;

    t168 = ((x721+(x722&x723))!=x724);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x725 = -1;
	static int16_t x726 = -7;
	volatile int64_t x727 = 7672809942237LL;
	volatile int64_t x728 = 1935782583LL;
	static int32_t t169 = 14852;

    t169 = ((x725+(x726&x727))!=x728);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x729 = INT16_MIN;
	uint64_t x730 = 7827LLU;
	volatile int16_t x731 = -1;
	uint8_t x732 = 4U;
	volatile int32_t t170 = 5;

    t170 = ((x729+(x730&x731))!=x732);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x733 = 11U;
	int8_t x734 = 1;
	uint64_t x736 = 408LLU;
	int32_t t171 = -4367;

    t171 = ((x733+(x734&x735))!=x736);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x737 = 245U;
	int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	uint64_t x740 = 876214678165320848LLU;
	volatile int32_t t172 = -3591777;

    t172 = ((x737+(x738&x739))!=x740);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x741 = INT32_MIN;
	volatile int64_t x742 = INT64_MAX;
	int16_t x744 = 1;
	static volatile int32_t t173 = -19660;

    t173 = ((x741+(x742&x743))!=x744);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x745 = -1;
	uint16_t x746 = 12U;
	uint32_t x747 = 36791U;
	volatile int64_t x748 = -1LL;
	int32_t t174 = 7559114;

    t174 = ((x745+(x746&x747))!=x748);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x749 = 9845546603839528LLU;
	volatile int16_t x750 = INT16_MIN;
	static uint8_t x752 = 2U;
	volatile int32_t t175 = 2386172;

    t175 = ((x749+(x750&x751))!=x752);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = -15964LL;
	int64_t x754 = -1LL;
	volatile int64_t x755 = -23LL;
	int32_t x756 = -1;
	int32_t t176 = -136;

    t176 = ((x753+(x754&x755))!=x756);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x757 = 13U;
	int8_t x758 = -36;
	volatile int16_t x759 = -1;
	int32_t t177 = 4;

    t177 = ((x757+(x758&x759))!=x760);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x765 = 10226866U;
	uint64_t x768 = 3207093009LLU;

    t178 = ((x765+(x766&x767))!=x768);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x773 = 0U;
	uint64_t x775 = 1055898691663242LLU;
	int64_t x776 = -1LL;
	volatile int32_t t179 = -742452734;

    t179 = ((x773+(x774&x775))!=x776);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = INT64_MAX;
	static uint32_t x787 = 7035U;
	uint8_t x788 = UINT8_MAX;
	int32_t t180 = 91148;

    t180 = ((x785+(x786&x787))!=x788);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x791 = INT8_MIN;
	int16_t x792 = 2524;
	volatile int32_t t181 = 28;

    t181 = ((x789+(x790&x791))!=x792);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x793 = 9U;
	int64_t x796 = INT64_MIN;
	volatile int32_t t182 = 9818038;

    t182 = ((x793+(x794&x795))!=x796);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x798 = INT32_MIN;
	int16_t x800 = 33;

    t183 = ((x797+(x798&x799))!=x800);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x802 = INT64_MIN;
	static int32_t x804 = INT32_MIN;

    t184 = ((x801+(x802&x803))!=x804);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x806 = INT16_MAX;
	uint8_t x808 = 70U;
	volatile int32_t t185 = 634959350;

    t185 = ((x805+(x806&x807))!=x808);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x809 = INT16_MAX;
	int16_t x810 = INT16_MAX;
	uint16_t x812 = 9U;
	volatile int32_t t186 = -26419;

    t186 = ((x809+(x810&x811))!=x812);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint8_t x815 = 3U;
	int64_t x816 = 6001504123422806LL;
	static volatile int32_t t187 = 904834;

    t187 = ((x813+(x814&x815))!=x816);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x817 = INT8_MIN;
	uint8_t x818 = 1U;
	int8_t x820 = INT8_MAX;
	int32_t t188 = 2495;

    t188 = ((x817+(x818&x819))!=x820);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x821 = 30U;
	volatile int32_t x822 = 3;
	volatile int32_t x823 = 0;
	uint32_t x824 = 0U;
	int32_t t189 = 417396016;

    t189 = ((x821+(x822&x823))!=x824);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x829 = INT32_MAX;
	uint8_t x830 = 3U;
	uint64_t x831 = 2291543392614863748LLU;
	int32_t x832 = -1;
	volatile int32_t t190 = 3543;

    t190 = ((x829+(x830&x831))!=x832);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x837 = 4738;
	int8_t x838 = INT8_MIN;
	static volatile int16_t x839 = -1;
	static volatile int32_t t191 = 1066348055;

    t191 = ((x837+(x838&x839))!=x840);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x841 = 3;

    t192 = ((x841+(x842&x843))!=x844);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x849 = 2776;
	uint32_t x850 = 11U;
	volatile uint32_t x852 = 21U;
	int32_t t193 = -1046564;

    t193 = ((x849+(x850&x851))!=x852);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x853 = 42230659651LLU;
	uint16_t x854 = UINT16_MAX;
	uint64_t x855 = 469460694222929144LLU;
	volatile int32_t t194 = -3;

    t194 = ((x853+(x854&x855))!=x856);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x857 = -1;
	int16_t x858 = INT16_MAX;
	int16_t x860 = -1;
	int32_t t195 = 27557661;

    t195 = ((x857+(x858&x859))!=x860);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x861 = 12U;
	volatile int8_t x862 = 24;
	int16_t x863 = -151;
	int8_t x864 = 0;
	int32_t t196 = 814293672;

    t196 = ((x861+(x862&x863))!=x864);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x865 = 0U;
	int32_t x866 = -1;
	uint8_t x867 = UINT8_MAX;
	static int32_t t197 = 1;

    t197 = ((x865+(x866&x867))!=x868);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x870 = 22U;
	int8_t x871 = INT8_MIN;
	int32_t x872 = -1;

    t198 = ((x869+(x870&x871))!=x872);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x877 = 2;
	int16_t x878 = INT16_MAX;
	volatile uint8_t x880 = 1U;
	volatile int32_t t199 = -57653388;

    t199 = ((x877+(x878&x879))!=x880);

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

