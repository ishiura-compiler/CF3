
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

int8_t x9 = INT8_MIN;
volatile int32_t x16 = INT32_MIN;
volatile uint8_t x21 = 1U;
int64_t x22 = -7954LL;
int16_t x24 = INT16_MIN;
uint8_t x25 = 1U;
int32_t x26 = 4952892;
static int8_t x32 = 45;
static int32_t x41 = 25;
volatile int64_t x43 = 8552446003006885LL;
uint64_t x45 = 831377683493578524LLU;
volatile int64_t x48 = INT64_MIN;
volatile int32_t t9 = -1;
int64_t x55 = INT64_MIN;
static volatile int32_t t11 = 127055;
int16_t x58 = -6127;
volatile int16_t x60 = INT16_MAX;
int32_t x64 = INT32_MIN;
volatile int32_t t13 = -3;
volatile int8_t x68 = INT8_MIN;
int8_t x74 = INT8_MAX;
int8_t x79 = -1;
int64_t x80 = INT64_MIN;
volatile int32_t t17 = 187729;
volatile int64_t x86 = 352LL;
int64_t x87 = INT64_MIN;
int32_t x94 = INT32_MAX;
uint32_t x96 = UINT32_MAX;
int32_t t20 = 0;
uint64_t x99 = 250321708396607LLU;
uint16_t x100 = 359U;
static int32_t t21 = 401;
int64_t x101 = INT64_MAX;
uint16_t x105 = 64U;
volatile uint8_t x106 = UINT8_MAX;
static int8_t x109 = INT8_MIN;
volatile int32_t x117 = INT32_MAX;
uint32_t x118 = UINT32_MAX;
static volatile int8_t x128 = INT8_MIN;
int8_t x134 = -1;
int32_t t31 = 6051395;
int16_t x147 = INT16_MAX;
int16_t x148 = -1;
volatile int32_t t32 = 30;
volatile int16_t x155 = -1;
static volatile int32_t t34 = 3;
static uint32_t x158 = 25116U;
int32_t t35 = -1;
int16_t x161 = INT16_MIN;
int8_t x162 = INT8_MAX;
int16_t x164 = INT16_MIN;
volatile uint8_t x167 = 1U;
uint8_t x170 = 26U;
int64_t x172 = INT64_MIN;
int8_t x174 = INT8_MIN;
static int32_t t39 = 430;
int8_t x180 = INT8_MIN;
uint16_t x183 = 12U;
static volatile int32_t t41 = -442;
int8_t x187 = INT8_MIN;
int64_t x188 = INT64_MAX;
volatile int32_t t42 = 0;
int16_t x200 = 157;
volatile int32_t t43 = -107738903;
volatile int32_t x201 = INT32_MIN;
int8_t x202 = INT8_MAX;
int8_t x208 = INT8_MAX;
uint64_t x214 = UINT64_MAX;
int32_t t46 = -59800;
volatile int32_t x219 = INT32_MIN;
uint8_t x230 = 25U;
volatile int64_t x232 = -65LL;
int32_t t49 = -210481;
int16_t x233 = INT16_MIN;
int8_t x237 = INT8_MIN;
int32_t t51 = 1;
static volatile int16_t x241 = INT16_MIN;
int8_t x242 = INT8_MAX;
int64_t x243 = INT64_MIN;
int8_t x244 = 0;
int16_t x245 = -87;
int32_t t53 = -498104;
int64_t x249 = INT64_MAX;
uint16_t x258 = 736U;
static int8_t x267 = 1;
uint16_t x268 = UINT16_MAX;
volatile int32_t t58 = -39;
static int64_t x273 = -1LL;
int64_t x276 = INT64_MIN;
uint32_t x278 = 20396U;
volatile int32_t x284 = 43945;
int32_t t61 = 3808218;
static uint64_t x297 = UINT64_MAX;
int16_t x321 = INT16_MIN;
int8_t x331 = INT8_MIN;
int8_t x341 = INT8_MAX;
int32_t x342 = INT32_MIN;
int32_t t73 = -6322;
volatile uint32_t x350 = UINT32_MAX;
int32_t t75 = 52117;
static int16_t x362 = 24;
int64_t x363 = -1LL;
volatile int32_t t78 = 14287;
int32_t x365 = INT32_MIN;
volatile uint64_t x366 = UINT64_MAX;
volatile int32_t t80 = 526460851;
uint16_t x382 = UINT16_MAX;
int8_t x383 = INT8_MIN;
volatile int32_t t83 = -942068;
static int16_t x389 = INT16_MAX;
int64_t x390 = -15LL;
static volatile int32_t t89 = -1899075;
static volatile uint64_t x419 = UINT64_MAX;
uint32_t x422 = 1682330U;
int32_t x425 = 997;
int8_t x427 = INT8_MIN;
uint8_t x430 = UINT8_MAX;
int32_t t94 = -937;
volatile uint16_t x444 = UINT16_MAX;
volatile uint8_t x450 = 36U;
int32_t x452 = -1;
int64_t x454 = INT64_MIN;
int16_t x455 = INT16_MAX;
int8_t x457 = 2;
int32_t x459 = INT32_MIN;
int32_t t100 = 0;
volatile uint16_t x465 = 2U;
int16_t x478 = -116;
static volatile int16_t x489 = -12;
int16_t x490 = 13615;
int8_t x492 = INT8_MIN;
int32_t x494 = -1;
int32_t x500 = -466;
volatile int8_t x508 = 30;
int16_t x509 = INT16_MIN;
int32_t t111 = -6;
static uint32_t x515 = UINT32_MAX;
uint32_t x520 = 654430U;
uint32_t x522 = 45052U;
uint8_t x527 = UINT8_MAX;
uint16_t x529 = UINT16_MAX;
uint32_t x538 = UINT32_MAX;
volatile int32_t t117 = -291905321;
uint32_t x543 = UINT32_MAX;
uint32_t x551 = UINT32_MAX;
volatile int32_t t120 = -1000;
volatile int16_t x554 = INT16_MIN;
int64_t x557 = -1LL;
int8_t x559 = 0;
static volatile uint64_t x567 = UINT64_MAX;
volatile int32_t t124 = -38768325;
static int8_t x588 = -1;
uint32_t x589 = 12289U;
int32_t x593 = INT32_MIN;
static int16_t x596 = -1;
uint16_t x606 = UINT16_MAX;
int32_t x607 = INT32_MIN;
static volatile int32_t x626 = 31;
static uint32_t x629 = UINT32_MAX;
volatile uint64_t x630 = 15987705597517LLU;
static int8_t x633 = -1;
static volatile int16_t x655 = 1;
static volatile int64_t x656 = INT64_MIN;
static int32_t t144 = -6337;
volatile uint64_t x658 = 35214LLU;
volatile int32_t t146 = -1;
static int8_t x674 = INT8_MIN;
int8_t x683 = INT8_MIN;
int16_t x684 = INT16_MIN;
uint64_t x685 = UINT64_MAX;
int16_t x686 = INT16_MAX;
int8_t x688 = -1;
static volatile int32_t x689 = INT32_MIN;
volatile int32_t x695 = INT32_MAX;
int64_t x697 = 62132057110LL;
volatile int32_t x698 = -1;
volatile uint32_t x702 = 332525U;
volatile int32_t t156 = 23338;
static volatile int32_t x709 = 3;
int16_t x713 = INT16_MIN;
uint8_t x726 = 69U;
static int64_t x729 = INT64_MIN;
int16_t x732 = INT16_MIN;
volatile int16_t x733 = 235;
int64_t x735 = -1LL;
int64_t x744 = INT64_MAX;
int8_t x745 = -11;
volatile uint32_t x749 = 1037545573U;
int64_t x752 = INT64_MIN;
int64_t x758 = -72LL;
int16_t x765 = 1;
int8_t x766 = 0;
static int64_t x767 = INT64_MIN;
static int64_t x768 = -1LL;
volatile int64_t x772 = -1LL;
volatile int32_t t170 = -1730;
static int32_t x773 = 36;
int16_t x774 = -113;
static int16_t x776 = INT16_MAX;
int16_t x777 = -1;
int16_t x779 = -152;
uint16_t x795 = 3U;
volatile int32_t t175 = 4521;
static int16_t x803 = -1;
volatile uint64_t x805 = UINT64_MAX;
int32_t x807 = -1;
uint64_t x814 = UINT64_MAX;
static int32_t t180 = -13;
uint64_t x822 = 3LLU;
static uint16_t x824 = UINT16_MAX;
uint8_t x828 = 23U;
int32_t t184 = -6;
int64_t x846 = 111258231LL;
uint64_t x849 = 237140857345045LLU;
static int32_t x850 = -1;
static volatile int32_t t186 = -112329;
int16_t x853 = -1;
static int32_t x855 = -1;
static volatile int32_t t187 = -4758;
static volatile int32_t t188 = -3615077;
volatile int32_t t189 = 6762;
int64_t x865 = -1LL;
volatile uint8_t x870 = 27U;
int64_t x871 = -997162721273764484LL;
int8_t x872 = -38;
volatile int64_t x883 = INT64_MIN;
static uint64_t x884 = UINT64_MAX;
volatile int32_t t192 = -59007;
int8_t x887 = INT8_MAX;
uint16_t x888 = UINT16_MAX;
int32_t x889 = -1;
uint16_t x893 = 3U;
static volatile int16_t x895 = -1;
static volatile int32_t t195 = 1;
int32_t x904 = -2263;
int32_t t197 = -7;
int64_t x905 = INT64_MIN;
static volatile uint64_t x909 = 67068993683924526LLU;
int8_t x910 = -1;


void f0(void) {
    	int8_t x5 = 29;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MAX;
	int64_t x8 = -1225LL;
	volatile int32_t t0 = 7;

    t0 = ((x5%(x6+x7))>x8);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	int8_t x12 = -1;
	int32_t t1 = -6140714;

    t1 = ((x9%(x10+x11))>x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 53U;
	static uint8_t x14 = UINT8_MAX;
	int16_t x15 = INT16_MAX;
	int32_t t2 = -5902;

    t2 = ((x13%(x14+x15))>x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 2466855U;
	int16_t x20 = INT16_MAX;
	volatile int32_t t3 = 4134006;

    t3 = ((x17%(x18+x19))>x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x23 = -182673887882443619LL;
	volatile int32_t t4 = 56316619;

    t4 = ((x21%(x22+x23))>x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -3;

    t5 = ((x25%(x26+x27))>x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	int32_t t6 = 1;

    t6 = ((x29%(x30+x31))>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	uint32_t x38 = 1506552704U;
	int32_t x39 = 8;
	uint16_t x40 = 186U;
	int32_t t7 = -12545240;

    t7 = ((x37%(x38+x39))>x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x42 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	volatile int32_t t8 = -6112;

    t8 = ((x41%(x42+x43))>x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = -1;
	static int64_t x47 = -1LL;

    t9 = ((x45%(x46+x47))>x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 762086U;
	int32_t t10 = 0;

    t10 = ((x49%(x50+x51))>x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -53;
	static int32_t x54 = INT32_MAX;
	volatile uint16_t x56 = 1740U;

    t11 = ((x53%(x54+x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 3LLU;
	int64_t x59 = 52303256LL;
	int32_t t12 = -1;

    t12 = ((x57%(x58+x59))>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = -1;

    t13 = ((x61%(x62+x63))>x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	volatile int32_t t14 = -6420;

    t14 = ((x65%(x66+x67))>x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = 0U;
	int8_t x70 = -49;
	volatile int64_t x71 = INT64_MAX;
	volatile int16_t x72 = 0;
	volatile int32_t t15 = -828597417;

    t15 = ((x69%(x70+x71))>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = 1U;
	uint32_t x75 = UINT32_MAX;
	uint64_t x76 = UINT64_MAX;
	static volatile int32_t t16 = 357;

    t16 = ((x73%(x74+x75))>x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x77 = UINT32_MAX;
	static int64_t x78 = 1772367485272LL;

    t17 = ((x77%(x78+x79))>x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = UINT64_MAX;
	static uint8_t x82 = 1U;
	uint16_t x83 = 1U;
	volatile uint32_t x84 = UINT32_MAX;
	static int32_t t18 = -321904;

    t18 = ((x81%(x82+x83))>x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	int32_t t19 = -131923;

    t19 = ((x85%(x86+x87))>x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 3U;
	int64_t x95 = 355240106LL;

    t20 = ((x93%(x94+x95))>x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = -1;
	int8_t x98 = INT8_MAX;

    t21 = ((x97%(x98+x99))>x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x102 = INT16_MIN;
	static uint64_t x103 = 26421698967497427LLU;
	int8_t x104 = INT8_MIN;
	int32_t t22 = 656312871;

    t22 = ((x101%(x102+x103))>x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x107 = INT8_MIN;
	static int16_t x108 = INT16_MIN;
	int32_t t23 = 15240970;

    t23 = ((x105%(x106+x107))>x108);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x110 = 13111U;
	uint32_t x111 = 442661808U;
	static uint64_t x112 = 2761454142744203207LLU;
	volatile int32_t t24 = -1023;

    t24 = ((x109%(x110+x111))>x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 53U;
	static int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MAX;
	int16_t x116 = -45;
	static int32_t t25 = -68;

    t25 = ((x113%(x114+x115))>x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x119 = -1;
	static volatile int16_t x120 = 3094;
	volatile int32_t t26 = 116447594;

    t26 = ((x117%(x118+x119))>x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = INT32_MIN;
	int32_t x123 = 15;
	static int64_t x124 = INT64_MAX;
	volatile int32_t t27 = 37753171;

    t27 = ((x121%(x122+x123))>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MAX;
	int8_t x127 = -19;
	volatile int32_t t28 = 424;

    t28 = ((x125%(x126+x127))>x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x133 = INT64_MIN;
	int64_t x135 = -1LL;
	int64_t x136 = 4388883819932332LL;
	volatile int32_t t29 = 208;

    t29 = ((x133%(x134+x135))>x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = 1U;
	volatile int64_t x138 = INT64_MIN;
	volatile int16_t x139 = INT16_MAX;
	int16_t x140 = -30;
	int32_t t30 = 0;

    t30 = ((x137%(x138+x139))>x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = INT8_MIN;
	volatile uint8_t x142 = 6U;
	int8_t x143 = INT8_MAX;
	int8_t x144 = -1;

    t31 = ((x141%(x142+x143))>x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = -1;
	static uint32_t x146 = 10689U;

    t32 = ((x145%(x146+x147))>x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MAX;
	uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 99U;
	volatile int32_t t33 = -53;

    t33 = ((x149%(x150+x151))>x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x153 = INT8_MIN;
	volatile int16_t x154 = 0;
	static int16_t x156 = -1;

    t34 = ((x153%(x154+x155))>x156);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = UINT32_MAX;

    t35 = ((x157%(x158+x159))>x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x163 = 109575356LL;
	volatile int32_t t36 = 0;

    t36 = ((x161%(x162+x163))>x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = -13;
	uint8_t x166 = 0U;
	int64_t x168 = -117882518LL;
	volatile int32_t t37 = 1;

    t37 = ((x165%(x166+x167))>x168);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	int32_t t38 = 2423;

    t38 = ((x169%(x170+x171))>x172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x173 = 274;
	int32_t x175 = 678037;
	volatile uint32_t x176 = 544452U;

    t39 = ((x173%(x174+x175))>x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MAX;
	static int8_t x178 = INT8_MAX;
	uint16_t x179 = UINT16_MAX;
	static int32_t t40 = -8;

    t40 = ((x177%(x178+x179))>x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x181 = -1LL;
	static int16_t x182 = INT16_MIN;
	static int32_t x184 = 0;

    t41 = ((x181%(x182+x183))>x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint32_t x185 = 33238U;
	int16_t x186 = INT16_MIN;

    t42 = ((x185%(x186+x187))>x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x197 = INT32_MIN;
	uint16_t x198 = 3U;
	int64_t x199 = 486578042LL;

    t43 = ((x197%(x198+x199))>x200);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x203 = -1;
	int8_t x204 = 10;
	static volatile int32_t t44 = 26084;

    t44 = ((x201%(x202+x203))>x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = UINT32_MAX;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	int32_t t45 = 4957;

    t45 = ((x205%(x206+x207))>x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x213 = 35250LL;
	int16_t x215 = -373;
	uint64_t x216 = 360092473LLU;

    t46 = ((x213%(x214+x215))>x216);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = INT8_MAX;
	uint64_t x218 = UINT64_MAX;
	static int32_t x220 = INT32_MAX;
	int32_t t47 = -1;

    t47 = ((x217%(x218+x219))>x220);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x221 = 10;
	static int32_t x222 = INT32_MAX;
	int32_t x223 = -1;
	volatile int64_t x224 = -1LL;
	int32_t t48 = -53;

    t48 = ((x221%(x222+x223))>x224);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x229 = -1036079;
	int16_t x231 = -3313;

    t49 = ((x229%(x230+x231))>x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x234 = 0U;
	int64_t x235 = INT64_MIN;
	static int16_t x236 = -3389;
	static volatile int32_t t50 = 308366;

    t50 = ((x233%(x234+x235))>x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x238 = INT16_MAX;
	uint64_t x239 = 377306993934223017LLU;
	uint8_t x240 = UINT8_MAX;

    t51 = ((x237%(x238+x239))>x240);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t t52 = -26172;

    t52 = ((x241%(x242+x243))>x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x246 = -3179;
	int16_t x247 = -7632;
	uint32_t x248 = UINT32_MAX;

    t53 = ((x245%(x246+x247))>x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x250 = 192U;
	static uint8_t x251 = 1U;
	int16_t x252 = INT16_MIN;
	volatile int32_t t54 = 450773;

    t54 = ((x249%(x250+x251))>x252);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x253 = INT8_MAX;
	static int8_t x254 = INT8_MIN;
	int64_t x255 = 62313717080266LL;
	volatile int32_t x256 = -206837;
	static int32_t t55 = 32761775;

    t55 = ((x253%(x254+x255))>x256);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = INT64_MAX;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = 0;
	volatile int32_t t56 = -771;

    t56 = ((x257%(x258+x259))>x260);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x265 = 5U;
	uint32_t x266 = 2246231U;
	volatile int32_t t57 = -105187728;

    t57 = ((x265%(x266+x267))>x268);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x269 = 3770789656142010943LLU;
	int64_t x270 = -874065172234LL;
	uint64_t x271 = 282561LLU;
	volatile int16_t x272 = INT16_MIN;

    t58 = ((x269%(x270+x271))>x272);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x274 = -1LL;
	volatile int8_t x275 = INT8_MIN;
	int32_t t59 = 79561906;

    t59 = ((x273%(x274+x275))>x276);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x277 = INT16_MAX;
	uint32_t x279 = 654116055U;
	volatile int8_t x280 = -1;
	volatile int32_t t60 = -115;

    t60 = ((x277%(x278+x279))>x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x281 = INT64_MIN;
	static uint64_t x282 = 105498788LLU;
	uint16_t x283 = 2U;

    t61 = ((x281%(x282+x283))>x284);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x289 = 3042687399831957861LL;
	static volatile uint32_t x290 = 14977U;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -1;
	volatile int32_t t62 = 146723;

    t62 = ((x289%(x290+x291))>x292);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x298 = -117LL;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	int32_t t63 = -1685075;

    t63 = ((x297%(x298+x299))>x300);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = -988LL;
	static int32_t x302 = -1;
	int16_t x303 = -1;
	int64_t x304 = -1LL;
	volatile int32_t t64 = 71152;

    t64 = ((x301%(x302+x303))>x304);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x305 = -4;
	int32_t x306 = 296402825;
	int32_t x307 = 0;
	uint8_t x308 = 3U;
	int32_t t65 = -1848774;

    t65 = ((x305%(x306+x307))>x308);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x309 = INT16_MIN;
	static volatile uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t66 = -481;

    t66 = ((x309%(x310+x311))>x312);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x313 = 15;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 1597U;
	int64_t x316 = -1LL;
	int32_t t67 = -1;

    t67 = ((x313%(x314+x315))>x316);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x322 = -34918433LL;
	static int32_t x323 = INT32_MIN;
	static int32_t x324 = 0;
	volatile int32_t t68 = -1;

    t68 = ((x321%(x322+x323))>x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = 10;
	volatile uint32_t x326 = UINT32_MAX;
	volatile uint64_t x327 = 17709812756LLU;
	int16_t x328 = INT16_MIN;
	volatile int32_t t69 = 169747;

    t69 = ((x325%(x326+x327))>x328);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x329 = UINT32_MAX;
	static int64_t x330 = 189LL;
	static uint8_t x332 = 33U;
	volatile int32_t t70 = 64124338;

    t70 = ((x329%(x330+x331))>x332);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x333 = 3058249827887961LLU;
	static volatile int16_t x334 = INT16_MAX;
	static uint32_t x335 = 1653224U;
	static int8_t x336 = INT8_MIN;
	int32_t t71 = 5564;

    t71 = ((x333%(x334+x335))>x336);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = INT8_MIN;
	volatile int64_t x339 = INT64_MAX;
	static volatile int16_t x340 = 315;
	volatile int32_t t72 = -1209477;

    t72 = ((x337%(x338+x339))>x340);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x343 = -100254435LL;
	int8_t x344 = INT8_MIN;

    t73 = ((x341%(x342+x343))>x344);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x345 = UINT16_MAX;
	int32_t x346 = 1633601;
	int16_t x347 = 59;
	uint16_t x348 = 1U;
	volatile int32_t t74 = 18;

    t74 = ((x345%(x346+x347))>x348);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x349 = 46041562U;
	volatile int8_t x351 = INT8_MAX;
	int64_t x352 = INT64_MAX;

    t75 = ((x349%(x350+x351))>x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x353 = INT8_MIN;
	static uint8_t x354 = 26U;
	uint8_t x355 = 0U;
	int8_t x356 = 1;
	volatile int32_t t76 = -112303901;

    t76 = ((x353%(x354+x355))>x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = -3094;
	static int32_t x358 = INT32_MAX;
	uint32_t x359 = 8304492U;
	int8_t x360 = INT8_MIN;
	int32_t t77 = -2050920;

    t77 = ((x357%(x358+x359))>x360);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = INT64_MIN;
	uint8_t x364 = 8U;

    t78 = ((x361%(x362+x363))>x364);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x367 = UINT16_MAX;
	int32_t x368 = -164199;
	volatile int32_t t79 = -6054093;

    t79 = ((x365%(x366+x367))>x368);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = -5;
	static uint32_t x375 = 64615910U;
	int16_t x376 = INT16_MAX;

    t80 = ((x373%(x374+x375))>x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x377 = 0U;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = -24235;
	volatile int32_t t81 = -15;

    t81 = ((x377%(x378+x379))>x380);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x381 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t82 = 108780230;

    t82 = ((x381%(x382+x383))>x384);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x385 = INT64_MIN;
	int16_t x386 = 0;
	uint64_t x387 = 608865166LLU;
	int16_t x388 = INT16_MAX;

    t83 = ((x385%(x386+x387))>x388);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x391 = 285394U;
	int8_t x392 = -3;
	static int32_t t84 = 421546;

    t84 = ((x389%(x390+x391))>x392);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = 49;
	int8_t x394 = INT8_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MAX;
	volatile int32_t t85 = -6151697;

    t85 = ((x393%(x394+x395))>x396);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = -1;
	static int32_t x398 = -1;
	uint64_t x399 = 21LLU;
	int64_t x400 = -5780390616107LL;
	volatile int32_t t86 = -2687;

    t86 = ((x397%(x398+x399))>x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t87 = -10;

    t87 = ((x401%(x402+x403))>x404);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x409 = UINT16_MAX;
	volatile int16_t x410 = INT16_MIN;
	volatile int64_t x411 = 572606867420367483LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t88 = -824749203;

    t88 = ((x409%(x410+x411))>x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x413 = -22;
	uint64_t x414 = 5LLU;
	int64_t x415 = 0LL;
	int64_t x416 = INT64_MAX;

    t89 = ((x413%(x414+x415))>x416);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x417 = UINT16_MAX;
	static uint16_t x418 = UINT16_MAX;
	uint32_t x420 = 39862U;
	volatile int32_t t90 = 1;

    t90 = ((x417%(x418+x419))>x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x421 = 384190201U;
	int32_t x423 = 489392;
	static volatile uint64_t x424 = 1850LLU;
	volatile int32_t t91 = -7885021;

    t91 = ((x421%(x422+x423))>x424);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x426 = -1;
	uint16_t x428 = 993U;
	volatile int32_t t92 = 2;

    t92 = ((x425%(x426+x427))>x428);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x429 = 11U;
	static uint32_t x431 = UINT32_MAX;
	static int32_t x432 = INT32_MAX;
	volatile int32_t t93 = 9995;

    t93 = ((x429%(x430+x431))>x432);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x437 = 23898957469336LLU;
	volatile int8_t x438 = INT8_MIN;
	int8_t x439 = -1;
	static uint32_t x440 = 7U;

    t94 = ((x437%(x438+x439))>x440);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x441 = INT16_MAX;
	int8_t x442 = INT8_MAX;
	volatile int16_t x443 = 41;
	static int32_t t95 = -2;

    t95 = ((x441%(x442+x443))>x444);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x445 = 12;
	static int8_t x446 = -6;
	volatile uint64_t x447 = UINT64_MAX;
	static int64_t x448 = 1369018LL;
	volatile int32_t t96 = -94732461;

    t96 = ((x445%(x446+x447))>x448);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x449 = UINT32_MAX;
	int16_t x451 = INT16_MAX;
	static int32_t t97 = -163;

    t97 = ((x449%(x450+x451))>x452);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x453 = UINT32_MAX;
	int64_t x456 = INT64_MAX;
	int32_t t98 = 5390986;

    t98 = ((x453%(x454+x455))>x456);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x458 = 3857901169LLU;
	uint32_t x460 = 15591U;
	int32_t t99 = 0;

    t99 = ((x457%(x458+x459))>x460);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x461 = -26888;
	uint16_t x462 = 25108U;
	volatile uint16_t x463 = 329U;
	volatile uint64_t x464 = 3LLU;

    t100 = ((x461%(x462+x463))>x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x466 = INT8_MAX;
	uint16_t x467 = 1U;
	int64_t x468 = -9499761856815792LL;
	int32_t t101 = -39018218;

    t101 = ((x465%(x466+x467))>x468);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x469 = INT32_MIN;
	volatile int16_t x470 = INT16_MIN;
	int16_t x471 = INT16_MAX;
	int32_t x472 = -1;
	int32_t t102 = 0;

    t102 = ((x469%(x470+x471))>x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x473 = 14209934314834679LLU;
	int64_t x474 = INT64_MIN;
	volatile int8_t x475 = INT8_MAX;
	int64_t x476 = -14645239407LL;
	static volatile int32_t t103 = 0;

    t103 = ((x473%(x474+x475))>x476);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x477 = -1LL;
	static int32_t x479 = INT32_MAX;
	volatile int32_t x480 = INT32_MIN;
	int32_t t104 = -8218872;

    t104 = ((x477%(x478+x479))>x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint8_t x486 = UINT8_MAX;
	volatile int8_t x487 = -27;
	int32_t x488 = 3;
	int32_t t105 = 249067;

    t105 = ((x485%(x486+x487))>x488);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x491 = -1;
	volatile int32_t t106 = -47648955;

    t106 = ((x489%(x490+x491))>x492);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x493 = 87LLU;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = -1;
	int32_t t107 = 333730367;

    t107 = ((x493%(x494+x495))>x496);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x497 = 1U;
	int16_t x498 = INT16_MAX;
	int16_t x499 = INT16_MIN;
	int32_t t108 = 135718;

    t108 = ((x497%(x498+x499))>x500);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x501 = UINT8_MAX;
	int16_t x502 = 5492;
	int64_t x503 = INT64_MIN;
	static int32_t x504 = INT32_MIN;
	static volatile int32_t t109 = -217732;

    t109 = ((x501%(x502+x503))>x504);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint32_t x506 = 3042581U;
	uint8_t x507 = 2U;
	int32_t t110 = 38867;

    t110 = ((x505%(x506+x507))>x508);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x510 = 1869LLU;
	static uint32_t x511 = 0U;
	static int16_t x512 = -3386;

    t111 = ((x509%(x510+x511))>x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x513 = 102972U;
	uint32_t x514 = UINT32_MAX;
	int64_t x516 = INT64_MAX;
	static volatile int32_t t112 = -99;

    t112 = ((x513%(x514+x515))>x516);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x517 = 1338409176LL;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = 709261U;
	volatile int32_t t113 = 6;

    t113 = ((x517%(x518+x519))>x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = -1;
	int32_t x523 = INT32_MAX;
	volatile uint64_t x524 = UINT64_MAX;
	volatile int32_t t114 = 326;

    t114 = ((x521%(x522+x523))>x524);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x525 = 0U;
	uint32_t x526 = 4854U;
	int8_t x528 = INT8_MIN;
	int32_t t115 = 217238;

    t115 = ((x525%(x526+x527))>x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x530 = 1203U;
	int16_t x531 = -15665;
	int8_t x532 = INT8_MAX;
	volatile int32_t t116 = -550803;

    t116 = ((x529%(x530+x531))>x532);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x537 = INT32_MIN;
	uint16_t x539 = 332U;
	volatile int64_t x540 = INT64_MIN;

    t117 = ((x537%(x538+x539))>x540);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = 2;
	static uint16_t x542 = UINT16_MAX;
	static int16_t x544 = INT16_MIN;
	volatile int32_t t118 = 94768377;

    t118 = ((x541%(x542+x543))>x544);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = INT8_MIN;
	volatile int32_t x546 = INT32_MIN;
	volatile uint16_t x547 = UINT16_MAX;
	volatile int16_t x548 = INT16_MIN;
	static volatile int32_t t119 = -154;

    t119 = ((x545%(x546+x547))>x548);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x549 = INT64_MIN;
	static uint64_t x550 = UINT64_MAX;
	static int16_t x552 = -1;

    t120 = ((x549%(x550+x551))>x552);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x553 = INT64_MIN;
	int16_t x555 = -1;
	int8_t x556 = INT8_MIN;
	int32_t t121 = 727586655;

    t121 = ((x553%(x554+x555))>x556);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x558 = -2500;
	uint32_t x560 = 3570198U;
	static int32_t t122 = 291512796;

    t122 = ((x557%(x558+x559))>x560);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x561 = -51912;
	uint64_t x562 = UINT64_MAX;
	int32_t x563 = -160689;
	volatile int64_t x564 = INT64_MAX;
	int32_t t123 = 708883;

    t123 = ((x561%(x562+x563))>x564);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x565 = 1U;
	int16_t x566 = -1;
	uint16_t x568 = UINT16_MAX;

    t124 = ((x565%(x566+x567))>x568);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x569 = 9243U;
	static uint8_t x570 = 30U;
	int8_t x571 = INT8_MAX;
	int8_t x572 = INT8_MIN;
	int32_t t125 = 55422410;

    t125 = ((x569%(x570+x571))>x572);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x573 = 106U;
	uint64_t x574 = 1LLU;
	static int8_t x575 = INT8_MAX;
	static int8_t x576 = -1;
	int32_t t126 = 19713;

    t126 = ((x573%(x574+x575))>x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x577 = UINT8_MAX;
	int16_t x578 = -58;
	static int32_t x579 = INT32_MAX;
	int64_t x580 = INT64_MAX;
	volatile int32_t t127 = 23409844;

    t127 = ((x577%(x578+x579))>x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x581 = -17882879307140LL;
	int32_t x582 = INT32_MIN;
	int64_t x583 = INT64_MAX;
	volatile int16_t x584 = -157;
	int32_t t128 = -5387;

    t128 = ((x581%(x582+x583))>x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x585 = -1LL;
	int64_t x586 = -4299778543448770LL;
	int32_t x587 = -1;
	volatile int32_t t129 = 14258;

    t129 = ((x585%(x586+x587))>x588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x590 = -1;
	static int64_t x591 = 3LL;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t130 = -305;

    t130 = ((x589%(x590+x591))>x592);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x594 = -1;
	int64_t x595 = INT64_MAX;
	int32_t t131 = 36817818;

    t131 = ((x593%(x594+x595))>x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x597 = 0;
	int64_t x598 = -2344634107507478094LL;
	int64_t x599 = -61717160837623LL;
	static int64_t x600 = INT64_MAX;
	volatile int32_t t132 = 46411;

    t132 = ((x597%(x598+x599))>x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x601 = -1;
	volatile uint8_t x602 = 12U;
	int8_t x603 = 53;
	uint8_t x604 = 4U;
	int32_t t133 = -58;

    t133 = ((x601%(x602+x603))>x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x605 = -1LL;
	uint8_t x608 = UINT8_MAX;
	static volatile int32_t t134 = 127098922;

    t134 = ((x605%(x606+x607))>x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x613 = INT16_MIN;
	static volatile int16_t x614 = INT16_MIN;
	static volatile uint64_t x615 = UINT64_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t135 = 58765301;

    t135 = ((x613%(x614+x615))>x616);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x617 = INT64_MIN;
	static int8_t x618 = INT8_MIN;
	uint8_t x619 = 111U;
	int16_t x620 = INT16_MIN;
	int32_t t136 = 868633;

    t136 = ((x617%(x618+x619))>x620);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = -59;
	int32_t x622 = 66407;
	static volatile int64_t x623 = INT64_MIN;
	uint32_t x624 = 575628U;
	volatile int32_t t137 = 727572;

    t137 = ((x621%(x622+x623))>x624);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x625 = -1LL;
	volatile int8_t x627 = INT8_MIN;
	int8_t x628 = 39;
	int32_t t138 = 1;

    t138 = ((x625%(x626+x627))>x628);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x631 = INT8_MAX;
	uint8_t x632 = UINT8_MAX;
	int32_t t139 = -7659907;

    t139 = ((x629%(x630+x631))>x632);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x634 = INT16_MIN;
	int16_t x635 = -1;
	static int64_t x636 = INT64_MIN;
	volatile int32_t t140 = 79123641;

    t140 = ((x633%(x634+x635))>x636);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x637 = -14795LL;
	static int16_t x638 = INT16_MIN;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t141 = -210685264;

    t141 = ((x637%(x638+x639))>x640);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x645 = UINT8_MAX;
	int32_t x646 = INT32_MIN;
	volatile int16_t x647 = INT16_MAX;
	int8_t x648 = INT8_MIN;
	volatile int32_t t142 = 5707;

    t142 = ((x645%(x646+x647))>x648);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x649 = 7308723LLU;
	uint8_t x650 = UINT8_MAX;
	int32_t x651 = INT32_MIN;
	static uint64_t x652 = 21814LLU;
	static volatile int32_t t143 = 2014494;

    t143 = ((x649%(x650+x651))>x652);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x653 = 6616912LLU;
	int16_t x654 = -210;

    t144 = ((x653%(x654+x655))>x656);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x657 = INT64_MAX;
	uint8_t x659 = 2U;
	int64_t x660 = -1LL;
	volatile int32_t t145 = -3;

    t145 = ((x657%(x658+x659))>x660);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x661 = 21681;
	uint32_t x662 = 45U;
	volatile int16_t x663 = INT16_MAX;
	uint32_t x664 = 663331624U;

    t146 = ((x661%(x662+x663))>x664);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x665 = -1;
	int8_t x666 = INT8_MAX;
	int16_t x667 = -1;
	uint64_t x668 = 354091961395245824LLU;
	volatile int32_t t147 = -2627482;

    t147 = ((x665%(x666+x667))>x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x673 = 28U;
	int16_t x675 = -79;
	uint64_t x676 = UINT64_MAX;
	static volatile int32_t t148 = -68502348;

    t148 = ((x673%(x674+x675))>x676);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -1LL;
	int16_t x680 = -10;
	static volatile int32_t t149 = -798094;

    t149 = ((x677%(x678+x679))>x680);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x681 = 141418U;
	uint32_t x682 = 0U;
	volatile int32_t t150 = 49;

    t150 = ((x681%(x682+x683))>x684);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x687 = UINT16_MAX;
	volatile int32_t t151 = -663;

    t151 = ((x685%(x686+x687))>x688);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x690 = 14910871LL;
	int32_t x691 = INT32_MIN;
	volatile uint32_t x692 = 880845592U;
	static int32_t t152 = 0;

    t152 = ((x689%(x690+x691))>x692);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x693 = 16889281;
	static int64_t x694 = INT64_MIN;
	volatile uint16_t x696 = 3923U;
	static volatile int32_t t153 = 179847983;

    t153 = ((x693%(x694+x695))>x696);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x699 = 3784622845170129LL;
	static uint16_t x700 = 89U;
	volatile int32_t t154 = -111552;

    t154 = ((x697%(x698+x699))>x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x701 = 1629U;
	int32_t x703 = 121346;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t155 = -1;

    t155 = ((x701%(x702+x703))>x704);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x705 = 1;
	int64_t x706 = 33133LL;
	volatile int64_t x707 = -218LL;
	int16_t x708 = -3;

    t156 = ((x705%(x706+x707))>x708);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MIN;
	uint16_t x712 = 30U;
	int32_t t157 = -15889;

    t157 = ((x709%(x710+x711))>x712);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x714 = -75455096051880490LL;
	uint64_t x715 = 8145513150492LLU;
	int32_t x716 = -308911;
	int32_t t158 = 6;

    t158 = ((x713%(x714+x715))>x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x717 = 0;
	int64_t x718 = -1963982511511LL;
	uint64_t x719 = 9774LLU;
	static int64_t x720 = INT64_MAX;
	volatile int32_t t159 = -8489;

    t159 = ((x717%(x718+x719))>x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x725 = -1LL;
	int32_t x727 = INT32_MIN;
	int32_t x728 = -1;
	int32_t t160 = 11;

    t160 = ((x725%(x726+x727))>x728);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x730 = UINT16_MAX;
	int8_t x731 = INT8_MAX;
	int32_t t161 = 8659003;

    t161 = ((x729%(x730+x731))>x732);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x734 = 0;
	int32_t x736 = -32383;
	static int32_t t162 = 1579;

    t162 = ((x733%(x734+x735))>x736);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x741 = 2454U;
	uint16_t x742 = 6561U;
	uint32_t x743 = 0U;
	int32_t t163 = 95260;

    t163 = ((x741%(x742+x743))>x744);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x746 = INT32_MIN;
	static int8_t x747 = INT8_MAX;
	int32_t x748 = INT32_MIN;
	volatile int32_t t164 = -212;

    t164 = ((x745%(x746+x747))>x748);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x750 = 9333022U;
	volatile uint64_t x751 = 2089325401527919804LLU;
	volatile int32_t t165 = -113;

    t165 = ((x749%(x750+x751))>x752);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x753 = UINT16_MAX;
	int64_t x754 = INT64_MIN;
	volatile int8_t x755 = 63;
	uint64_t x756 = 8472876110077865715LLU;
	int32_t t166 = -15781;

    t166 = ((x753%(x754+x755))>x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x757 = 7509716294778LLU;
	volatile int32_t x759 = INT32_MAX;
	volatile int16_t x760 = -22;
	static int32_t t167 = -1491297;

    t167 = ((x757%(x758+x759))>x760);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x761 = INT8_MIN;
	uint8_t x762 = 64U;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = 0;
	static int32_t t168 = 0;

    t168 = ((x761%(x762+x763))>x764);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t t169 = 1;

    t169 = ((x765%(x766+x767))>x768);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x769 = -249;
	uint32_t x770 = 23U;
	volatile int64_t x771 = INT64_MIN;

    t170 = ((x769%(x770+x771))>x772);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x775 = -1;
	volatile int32_t t171 = 0;

    t171 = ((x773%(x774+x775))>x776);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x778 = UINT8_MAX;
	int16_t x780 = -1;
	volatile int32_t t172 = -330441839;

    t172 = ((x777%(x778+x779))>x780);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x781 = -1;
	int32_t x782 = INT32_MAX;
	int32_t x783 = -532111;
	volatile uint8_t x784 = 7U;
	volatile int32_t t173 = -9107133;

    t173 = ((x781%(x782+x783))>x784);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x785 = INT64_MIN;
	static int64_t x786 = 5922064247LL;
	static int32_t x787 = INT32_MIN;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t174 = -2381;

    t174 = ((x785%(x786+x787))>x788);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x793 = 8138207;
	int8_t x794 = INT8_MIN;
	static int16_t x796 = INT16_MIN;

    t175 = ((x793%(x794+x795))>x796);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x797 = 7313U;
	uint64_t x798 = UINT64_MAX;
	static volatile int32_t x799 = INT32_MIN;
	int64_t x800 = -1LL;
	static int32_t t176 = -71;

    t176 = ((x797%(x798+x799))>x800);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x801 = INT64_MIN;
	volatile uint64_t x802 = UINT64_MAX;
	int64_t x804 = -4488643414297148154LL;
	volatile int32_t t177 = 348;

    t177 = ((x801%(x802+x803))>x804);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x806 = 101U;
	uint8_t x808 = 37U;
	int32_t t178 = 82433;

    t178 = ((x805%(x806+x807))>x808);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x813 = 10728U;
	int32_t x815 = 652269418;
	static int16_t x816 = INT16_MIN;
	static int32_t t179 = -539;

    t179 = ((x813%(x814+x815))>x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x817 = 96U;
	int16_t x818 = INT16_MAX;
	volatile uint32_t x819 = 7239701U;
	uint32_t x820 = 80U;

    t180 = ((x817%(x818+x819))>x820);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	uint64_t x823 = 2LLU;
	int32_t t181 = -22491984;

    t181 = ((x821%(x822+x823))>x824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x825 = INT8_MAX;
	int8_t x826 = -1;
	static uint16_t x827 = 6537U;
	volatile int32_t t182 = -806242;

    t182 = ((x825%(x826+x827))>x828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x829 = INT16_MIN;
	int64_t x830 = INT64_MAX;
	static int32_t x831 = INT32_MIN;
	uint64_t x832 = 115711343569LLU;
	int32_t t183 = -1029963;

    t183 = ((x829%(x830+x831))>x832);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x837 = -1;
	int64_t x838 = INT64_MIN;
	int64_t x839 = INT64_MAX;
	int64_t x840 = 3760723634913184LL;

    t184 = ((x837%(x838+x839))>x840);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x845 = -1LL;
	int8_t x847 = INT8_MIN;
	volatile int16_t x848 = INT16_MIN;
	volatile int32_t t185 = 182646096;

    t185 = ((x845%(x846+x847))>x848);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x851 = -456223928548LL;
	volatile int64_t x852 = INT64_MIN;

    t186 = ((x849%(x850+x851))>x852);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x854 = -1;
	static uint8_t x856 = 116U;

    t187 = ((x853%(x854+x855))>x856);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = INT64_MIN;
	int64_t x858 = 1LL;
	volatile uint16_t x859 = UINT16_MAX;
	int64_t x860 = 1382LL;

    t188 = ((x857%(x858+x859))>x860);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x861 = 306U;
	int8_t x862 = INT8_MIN;
	volatile int32_t x863 = -1;
	static volatile int8_t x864 = INT8_MIN;

    t189 = ((x861%(x862+x863))>x864);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x866 = INT32_MAX;
	static int16_t x867 = -1;
	volatile uint16_t x868 = 102U;
	int32_t t190 = -809391;

    t190 = ((x865%(x866+x867))>x868);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x869 = 1806002U;
	static int32_t t191 = 1628;

    t191 = ((x869%(x870+x871))>x872);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x881 = UINT8_MAX;
	uint16_t x882 = UINT16_MAX;

    t192 = ((x881%(x882+x883))>x884);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x885 = 1U;
	uint64_t x886 = 207874291251199003LLU;
	volatile int32_t t193 = -134;

    t193 = ((x885%(x886+x887))>x888);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x890 = 26;
	static uint16_t x891 = UINT16_MAX;
	uint8_t x892 = 41U;
	volatile int32_t t194 = 216;

    t194 = ((x889%(x890+x891))>x892);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x894 = INT16_MIN;
	int8_t x896 = -3;

    t195 = ((x893%(x894+x895))>x896);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x897 = INT32_MAX;
	volatile int16_t x898 = -6588;
	static int8_t x899 = INT8_MAX;
	int8_t x900 = 5;
	int32_t t196 = 0;

    t196 = ((x897%(x898+x899))>x900);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x901 = -5;
	int16_t x902 = INT16_MIN;
	static int64_t x903 = -2277942143LL;

    t197 = ((x901%(x902+x903))>x904);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x906 = -1LL;
	int8_t x907 = INT8_MIN;
	volatile int8_t x908 = INT8_MAX;
	int32_t t198 = 1076;

    t198 = ((x905%(x906+x907))>x908);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x911 = UINT8_MAX;
	static uint64_t x912 = 475097847385459LLU;
	static volatile int32_t t199 = 5;

    t199 = ((x909%(x910+x911))>x912);

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

