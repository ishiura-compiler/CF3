
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

volatile uint16_t x11 = UINT16_MAX;
static volatile int8_t x12 = INT8_MIN;
static volatile int64_t x19 = 1697LL;
static int32_t x22 = -1;
int32_t x23 = 45180;
volatile int32_t t6 = 8665;
volatile int32_t t9 = -1421607;
uint8_t x65 = 5U;
volatile uint32_t x67 = 31746U;
static volatile int32_t x68 = 87;
int64_t x71 = INT64_MIN;
static int16_t x72 = -1;
int64_t x83 = 1857199823222LL;
int8_t x84 = -1;
static int8_t x87 = INT8_MIN;
int32_t x88 = 2;
int32_t x94 = -1;
static int16_t x115 = -38;
volatile int32_t t28 = 184312;
int32_t t29 = -2;
int16_t x143 = -1;
static int8_t x145 = INT8_MAX;
int32_t t33 = -34;
int64_t x150 = INT64_MIN;
int64_t x151 = INT64_MIN;
volatile uint32_t x158 = 189485697U;
int16_t x160 = INT16_MAX;
volatile int64_t x171 = INT64_MAX;
int16_t x172 = INT16_MIN;
static int32_t t39 = -372;
volatile int32_t t40 = 8110731;
uint8_t x179 = UINT8_MAX;
volatile int16_t x183 = 1;
uint8_t x189 = 7U;
volatile int32_t t43 = -165;
int8_t x198 = INT8_MIN;
int32_t t48 = -20;
int32_t x218 = -2549;
int8_t x219 = INT8_MIN;
int32_t t49 = -516461;
static uint8_t x238 = 0U;
int16_t x242 = INT16_MIN;
volatile int32_t x244 = INT32_MIN;
uint64_t x246 = 32315LLU;
static volatile int32_t t55 = -230;
static volatile int64_t x250 = 110988754652414992LL;
volatile int32_t x272 = INT32_MIN;
int8_t x273 = 13;
volatile int32_t t60 = 8482297;
uint8_t x282 = 85U;
static volatile int8_t x286 = -1;
volatile uint16_t x287 = 7958U;
volatile int32_t t63 = 56461;
int16_t x297 = INT16_MIN;
int16_t x300 = 23;
int16_t x302 = -1;
uint32_t x303 = UINT32_MAX;
int8_t x312 = INT8_MIN;
int32_t t67 = -41;
int16_t x324 = INT16_MAX;
int16_t x328 = -160;
static int16_t x340 = 4564;
volatile uint8_t x341 = UINT8_MAX;
int8_t x343 = -3;
volatile int32_t t74 = 1;
int8_t x349 = -1;
int32_t t75 = -53565;
volatile uint64_t x366 = 149952LLU;
static uint32_t x373 = UINT32_MAX;
volatile int8_t x377 = -1;
static volatile int32_t t81 = -17068;
uint32_t x395 = UINT32_MAX;
int8_t x405 = 0;
int16_t x414 = INT16_MIN;
int64_t x415 = INT64_MAX;
volatile int64_t x421 = INT64_MAX;
volatile int8_t x423 = INT8_MIN;
volatile int32_t t94 = 77630;
int32_t x462 = INT32_MAX;
int64_t x470 = 125222852LL;
volatile int32_t t101 = -63;
int8_t x484 = -1;
volatile int32_t t104 = -47;
int16_t x498 = INT16_MAX;
int32_t x499 = INT32_MIN;
volatile uint64_t x508 = 161847854828448568LLU;
static int64_t x516 = INT64_MAX;
volatile int32_t t109 = -418114165;
int16_t x518 = INT16_MIN;
int32_t t112 = 1;
int32_t t113 = 22;
static volatile int32_t x539 = -1;
static volatile int32_t t114 = 9763631;
static volatile int32_t t115 = 63;
int8_t x550 = -1;
volatile int16_t x557 = -1;
uint32_t x568 = 49U;
static int32_t x569 = INT32_MAX;
int16_t x571 = -1393;
int16_t x586 = -570;
int32_t x587 = INT32_MAX;
int16_t x588 = INT16_MIN;
int32_t x589 = -1;
volatile int64_t x590 = 1LL;
int64_t x591 = INT64_MIN;
int64_t x595 = INT64_MIN;
uint16_t x596 = 6647U;
uint64_t x602 = UINT64_MAX;
uint16_t x609 = UINT16_MAX;
uint32_t x618 = UINT32_MAX;
int32_t t130 = 56124920;
static int64_t x631 = INT64_MAX;
int16_t x640 = -102;
static int32_t x643 = INT32_MIN;
static volatile int8_t x644 = INT8_MAX;
volatile int32_t t137 = 12247;
uint32_t x655 = UINT32_MAX;
int64_t x658 = -1LL;
volatile int16_t x664 = INT16_MIN;
uint64_t x665 = 1540819099LLU;
int16_t x666 = INT16_MIN;
uint8_t x669 = 12U;
uint16_t x678 = 7947U;
static int32_t t143 = 2994;
static uint8_t x685 = 5U;
uint8_t x698 = 28U;
uint32_t x702 = 20U;
volatile int32_t t147 = 982672;
volatile uint64_t x707 = UINT64_MAX;
uint16_t x708 = 3126U;
static uint32_t x713 = 239076U;
static int32_t x714 = -1;
uint16_t x717 = 3U;
int32_t x722 = -94850;
static uint32_t x729 = UINT32_MAX;
static int32_t t155 = 7660124;
uint64_t x737 = UINT64_MAX;
int32_t t156 = -101710561;
static int8_t x745 = -1;
int8_t x748 = INT8_MIN;
volatile int32_t t158 = -1;
int32_t t159 = -454554799;
static uint8_t x757 = 3U;
volatile int32_t t161 = 2646132;
int32_t x771 = -40360;
volatile uint16_t x777 = 0U;
volatile int32_t t165 = 129513571;
uint8_t x787 = UINT8_MAX;
int16_t x789 = INT16_MIN;
volatile int8_t x790 = INT8_MIN;
volatile int32_t t167 = 30987;
volatile int32_t t168 = 300820;
static uint64_t x798 = 14873452LLU;
int32_t x803 = INT32_MAX;
int8_t x804 = INT8_MAX;
volatile uint16_t x805 = 1731U;
uint8_t x808 = 23U;
static int32_t x817 = INT32_MIN;
uint16_t x825 = UINT16_MAX;
int64_t x829 = 935469178750093926LL;
int16_t x832 = INT16_MIN;
int32_t x843 = INT32_MAX;
static int64_t x849 = INT64_MIN;
uint16_t x850 = UINT16_MAX;
int64_t x851 = INT64_MAX;
int32_t t180 = -252;
int16_t x854 = -1;
volatile int32_t t181 = -1880285;
uint64_t x862 = 2617452305831835LLU;
static uint8_t x863 = UINT8_MAX;
volatile uint16_t x868 = UINT16_MAX;
int32_t t183 = -47;
uint8_t x872 = 51U;
int32_t t185 = 2497936;
uint16_t x884 = 165U;
volatile int32_t t187 = 0;
static int32_t x894 = -26;
uint64_t x896 = UINT64_MAX;
uint64_t x901 = 312905LLU;
int16_t x910 = INT16_MIN;
volatile int32_t t192 = 24175;
volatile int8_t x914 = 7;
volatile int16_t x919 = INT16_MIN;
int32_t x930 = -227;
volatile int32_t t198 = 1;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 10U;
	int64_t x3 = -1LL;
	uint16_t x4 = 31U;
	volatile int32_t t0 = -257473;

    t0 = (((x1+x2)&x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -273;
	static int8_t x6 = -25;
	int16_t x7 = INT16_MIN;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = -91;

    t1 = (((x5+x6)&x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	int16_t x10 = INT16_MIN;
	volatile int32_t t2 = 407555010;

    t2 = (((x9+x10)&x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	volatile uint8_t x14 = 60U;
	volatile int32_t x15 = 118960887;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = 54621912;

    t3 = (((x13+x14)&x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MAX;
	uint32_t x20 = UINT32_MAX;
	static int32_t t4 = -267;

    t4 = (((x17+x18)&x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	int64_t x24 = 1524948LL;
	int32_t t5 = -48;

    t5 = (((x21+x22)&x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	volatile uint64_t x26 = UINT64_MAX;
	static int16_t x27 = -1;
	uint64_t x28 = 246673240207413LLU;

    t6 = (((x25+x26)&x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MAX;
	volatile uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = -24187991;

    t7 = (((x29+x30)&x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = 39367835LL;
	int32_t t8 = 11424070;

    t8 = (((x33+x34)&x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MIN;
	volatile int32_t x40 = -88528;

    t9 = (((x37+x38)&x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = 38U;
	static volatile int32_t t10 = 126;

    t10 = (((x41+x42)&x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 1U;
	static int32_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	int32_t t11 = -9;

    t11 = (((x49+x50)&x51)!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	int64_t x54 = -42845310LL;
	int16_t x55 = -16;
	int64_t x56 = -135928971LL;
	int32_t t12 = -24251;

    t12 = (((x53+x54)&x55)!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	static int8_t x60 = INT8_MIN;
	int32_t t13 = 1052142077;

    t13 = (((x57+x58)&x59)!=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	static int16_t x63 = -1;
	int16_t x64 = -30;
	int32_t t14 = 1048793636;

    t14 = (((x61+x62)&x63)!=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = -1LL;
	static volatile int32_t t15 = -23;

    t15 = (((x65+x66)&x67)!=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 548U;
	uint32_t x70 = 881278198U;
	int32_t t16 = -181475;

    t16 = (((x69+x70)&x71)!=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x73 = INT32_MIN;
	volatile int64_t x74 = 11006074638908LL;
	volatile int8_t x75 = -24;
	volatile int8_t x76 = INT8_MAX;
	int32_t t17 = 104;

    t17 = (((x73+x74)&x75)!=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 1554155078U;
	static uint32_t x82 = 39026745U;
	int32_t t18 = -1;

    t18 = (((x81+x82)&x83)!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x85 = -1;
	uint64_t x86 = 248494633844051LLU;
	static int32_t t19 = -82713;

    t19 = (((x85+x86)&x87)!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 34U;
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = 57;
	int16_t x92 = 5569;
	int32_t t20 = -54;

    t20 = (((x89+x90)&x91)!=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = UINT64_MAX;
	uint32_t x95 = UINT32_MAX;
	static uint8_t x96 = 1U;
	static volatile int32_t t21 = 6520;

    t21 = (((x93+x94)&x95)!=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 89251234LLU;
	int16_t x98 = -1;
	static int32_t x99 = INT32_MIN;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t22 = 31990;

    t22 = (((x97+x98)&x99)!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	static uint64_t x103 = 212984955743LLU;
	static int32_t x104 = INT32_MIN;
	int32_t t23 = -1465;

    t23 = (((x101+x102)&x103)!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x109 = 90U;
	int64_t x110 = -2919753466LL;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MAX;
	int32_t t24 = -65104032;

    t24 = (((x109+x110)&x111)!=x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = 105293207U;
	int16_t x116 = INT16_MIN;
	int32_t t25 = 98626088;

    t25 = (((x113+x114)&x115)!=x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x117 = 50U;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MIN;
	int16_t x120 = -13809;
	static int32_t t26 = 146377611;

    t26 = (((x117+x118)&x119)!=x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -5;
	int64_t x122 = INT64_MAX;
	int16_t x123 = 0;
	int32_t x124 = -9;
	volatile int32_t t27 = 885;

    t27 = (((x121+x122)&x123)!=x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x125 = 53;
	uint16_t x126 = UINT16_MAX;
	static volatile uint16_t x127 = 302U;
	int8_t x128 = INT8_MIN;

    t28 = (((x125+x126)&x127)!=x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 6U;
	int8_t x130 = -1;
	volatile int64_t x131 = -1LL;
	volatile int64_t x132 = INT64_MAX;

    t29 = (((x129+x130)&x131)!=x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x133 = 31286223633918LLU;
	static uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 0U;
	int16_t x136 = -23;
	int32_t t30 = -3171;

    t30 = (((x133+x134)&x135)!=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = INT32_MAX;
	uint64_t x138 = 23265810LLU;
	int32_t x139 = INT32_MAX;
	static volatile uint64_t x140 = UINT64_MAX;
	volatile int32_t t31 = 1;

    t31 = (((x137+x138)&x139)!=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	uint64_t x144 = 8903510LLU;
	volatile int32_t t32 = 1;

    t32 = (((x141+x142)&x143)!=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x146 = -29LL;
	volatile int64_t x147 = -1LL;
	int16_t x148 = -1868;

    t33 = (((x145+x146)&x147)!=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = 3LL;
	static int16_t x152 = -2;
	volatile int32_t t34 = -92;

    t34 = (((x149+x150)&x151)!=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x153 = 17603078U;
	static int8_t x154 = 15;
	int16_t x155 = -1;
	int16_t x156 = INT16_MIN;
	static int32_t t35 = 15543;

    t35 = (((x153+x154)&x155)!=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t t36 = -15699;

    t36 = (((x157+x158)&x159)!=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x161 = 3470294879LLU;
	uint16_t x162 = 1U;
	volatile int64_t x163 = INT64_MAX;
	volatile uint64_t x164 = 6103165205818LLU;
	int32_t t37 = -42;

    t37 = (((x161+x162)&x163)!=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = UINT64_MAX;
	volatile int16_t x166 = 1;
	static uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 287078531587087LLU;
	static int32_t t38 = -84;

    t38 = (((x165+x166)&x167)!=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -18LL;
	static uint64_t x170 = 10027599LLU;

    t39 = (((x169+x170)&x171)!=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x173 = UINT16_MAX;
	int64_t x174 = -1LL;
	int8_t x175 = INT8_MAX;
	uint64_t x176 = 11692742223LLU;

    t40 = (((x173+x174)&x175)!=x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	int32_t x180 = INT32_MAX;
	int32_t t41 = 1251;

    t41 = (((x177+x178)&x179)!=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x181 = -438;
	int8_t x182 = INT8_MIN;
	static int8_t x184 = -1;
	static volatile int32_t t42 = 129949;

    t42 = (((x181+x182)&x183)!=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x190 = INT64_MIN;
	volatile uint8_t x191 = 1U;
	static uint64_t x192 = UINT64_MAX;

    t43 = (((x189+x190)&x191)!=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1112LL;
	volatile int64_t x196 = INT64_MIN;
	int32_t t44 = -4566;

    t44 = (((x193+x194)&x195)!=x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x197 = -1;
	int32_t x199 = -1;
	static int32_t x200 = -91;
	volatile int32_t t45 = -182719709;

    t45 = (((x197+x198)&x199)!=x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = -24040996652LL;
	int8_t x202 = 1;
	static uint8_t x203 = UINT8_MAX;
	volatile uint8_t x204 = 1U;
	int32_t t46 = 57;

    t46 = (((x201+x202)&x203)!=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x205 = UINT64_MAX;
	int32_t x206 = 307;
	int8_t x207 = -27;
	int8_t x208 = 0;
	static volatile int32_t t47 = -2;

    t47 = (((x205+x206)&x207)!=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = 5U;
	int32_t x210 = 115;
	int16_t x211 = 189;
	int64_t x212 = INT64_MIN;

    t48 = (((x209+x210)&x211)!=x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	int8_t x220 = 0;

    t49 = (((x217+x218)&x219)!=x220);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = -1;
	static int16_t x222 = -16;
	int64_t x223 = -1LL;
	volatile int64_t x224 = 28207197LL;
	volatile int32_t t50 = 58917589;

    t50 = (((x221+x222)&x223)!=x224);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x229 = 0U;
	volatile int8_t x230 = -9;
	static int32_t x231 = -95840;
	volatile uint32_t x232 = 24U;
	volatile int32_t t51 = 693496;

    t51 = (((x229+x230)&x231)!=x232);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	static uint64_t x235 = 17LLU;
	int32_t x236 = INT32_MAX;
	static int32_t t52 = -11;

    t52 = (((x233+x234)&x235)!=x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x237 = -15783872752LL;
	uint64_t x239 = 987311938467407LLU;
	static int64_t x240 = -1LL;
	int32_t t53 = -368;

    t53 = (((x237+x238)&x239)!=x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x241 = 1U;
	int8_t x243 = INT8_MIN;
	volatile int32_t t54 = -35;

    t54 = (((x241+x242)&x243)!=x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x245 = UINT8_MAX;
	uint8_t x247 = UINT8_MAX;
	static uint8_t x248 = 2U;

    t55 = (((x245+x246)&x247)!=x248);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x249 = 24719228;
	volatile int64_t x251 = INT64_MIN;
	static volatile uint32_t x252 = 15882850U;
	int32_t t56 = 105;

    t56 = (((x249+x250)&x251)!=x252);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MIN;
	uint64_t x258 = 1640194484393436303LLU;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = INT64_MAX;
	static int32_t t57 = 2528231;

    t57 = (((x257+x258)&x259)!=x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x265 = INT32_MIN;
	int8_t x266 = 16;
	uint32_t x267 = 12096U;
	int8_t x268 = -1;
	int32_t t58 = -1127;

    t58 = (((x265+x266)&x267)!=x268);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x269 = -155828858260LL;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -14;
	int32_t t59 = -1678;

    t59 = (((x269+x270)&x271)!=x272);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x274 = 393LL;
	uint64_t x275 = 24450285507156304LLU;
	int64_t x276 = INT64_MIN;

    t60 = (((x273+x274)&x275)!=x276);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = 16;
	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = -1;
	volatile int16_t x280 = -3413;
	volatile int32_t t61 = -31;

    t61 = (((x277+x278)&x279)!=x280);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x283 = 8U;
	int8_t x284 = -25;
	int32_t t62 = 3775816;

    t62 = (((x281+x282)&x283)!=x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x285 = 34739604733099LLU;
	volatile int32_t x288 = -1;

    t63 = (((x285+x286)&x287)!=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x298 = 34312;
	volatile int32_t x299 = -1;
	static int32_t t64 = -3438;

    t64 = (((x297+x298)&x299)!=x300);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x301 = INT32_MAX;
	int64_t x304 = 212989LL;
	int32_t t65 = 15644905;

    t65 = (((x301+x302)&x303)!=x304);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x305 = 30895452U;
	uint64_t x306 = 8162LLU;
	int8_t x307 = INT8_MIN;
	static int64_t x308 = INT64_MIN;
	static int32_t t66 = 281;

    t66 = (((x305+x306)&x307)!=x308);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	static int32_t x311 = INT32_MIN;

    t67 = (((x309+x310)&x311)!=x312);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x317 = 12;
	static uint16_t x318 = UINT16_MAX;
	volatile int16_t x319 = -1;
	static int64_t x320 = 106139LL;
	int32_t t68 = 1;

    t68 = (((x317+x318)&x319)!=x320);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = 1338;
	static uint32_t x322 = 44U;
	int8_t x323 = -1;
	int32_t t69 = 11911917;

    t69 = (((x321+x322)&x323)!=x324);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x325 = INT16_MAX;
	static int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -1;
	static volatile int32_t t70 = -93757;

    t70 = (((x325+x326)&x327)!=x328);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x329 = 14064U;
	int64_t x330 = -1LL;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = -165LL;
	volatile int32_t t71 = 18936205;

    t71 = (((x329+x330)&x331)!=x332);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x333 = 0U;
	volatile int16_t x334 = INT16_MIN;
	volatile uint64_t x335 = 61437552060930968LLU;
	int8_t x336 = 55;
	static int32_t t72 = -42;

    t72 = (((x333+x334)&x335)!=x336);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x337 = 3U;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -22840499537801629LL;
	int32_t t73 = -1;

    t73 = (((x337+x338)&x339)!=x340);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x342 = 59U;
	static int16_t x344 = INT16_MAX;

    t74 = (((x341+x342)&x343)!=x344);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -6051;

    t75 = (((x349+x350)&x351)!=x352);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x353 = -1;
	volatile uint8_t x354 = 5U;
	volatile int16_t x355 = -1;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t76 = -223327018;

    t76 = (((x353+x354)&x355)!=x356);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x361 = 86U;
	uint64_t x362 = 6790208498284017273LLU;
	uint32_t x363 = 56878782U;
	uint32_t x364 = UINT32_MAX;
	static volatile int32_t t77 = -109967;

    t77 = (((x361+x362)&x363)!=x364);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x365 = -1;
	int8_t x367 = INT8_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t78 = 1;

    t78 = (((x365+x366)&x367)!=x368);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MAX;
	volatile int64_t x371 = -1LL;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t79 = 14152;

    t79 = (((x369+x370)&x371)!=x372);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x374 = INT8_MIN;
	static uint16_t x375 = 8325U;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t80 = 144;

    t80 = (((x373+x374)&x375)!=x376);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x378 = 6531236;
	int8_t x379 = INT8_MAX;
	volatile int32_t x380 = INT32_MIN;

    t81 = (((x377+x378)&x379)!=x380);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x381 = 434;
	int32_t x382 = -10533741;
	int8_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t82 = 0;

    t82 = (((x381+x382)&x383)!=x384);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x393 = INT64_MAX;
	volatile uint64_t x394 = UINT64_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t83 = -14810;

    t83 = (((x393+x394)&x395)!=x396);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	volatile int16_t x398 = -10;
	volatile uint16_t x399 = 43U;
	uint8_t x400 = UINT8_MAX;
	int32_t t84 = -86236173;

    t84 = (((x397+x398)&x399)!=x400);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = -8;
	uint64_t x402 = 3236495LLU;
	int8_t x403 = 10;
	static int8_t x404 = INT8_MIN;
	static int32_t t85 = 25244201;

    t85 = (((x401+x402)&x403)!=x404);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x406 = INT64_MAX;
	int8_t x407 = -1;
	volatile int32_t x408 = 5680;
	static volatile int32_t t86 = 4698173;

    t86 = (((x405+x406)&x407)!=x408);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x409 = INT16_MIN;
	volatile int32_t x410 = -1;
	volatile int64_t x411 = 154LL;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t87 = 10;

    t87 = (((x409+x410)&x411)!=x412);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x413 = 145U;
	volatile uint32_t x416 = 86U;
	static int32_t t88 = 0;

    t88 = (((x413+x414)&x415)!=x416);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x417 = -1;
	static volatile int16_t x418 = INT16_MIN;
	static int16_t x419 = 1;
	static volatile int8_t x420 = -1;
	static volatile int32_t t89 = 821;

    t89 = (((x417+x418)&x419)!=x420);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x422 = -1;
	int32_t x424 = INT32_MIN;
	int32_t t90 = -40739760;

    t90 = (((x421+x422)&x423)!=x424);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = 652369;
	int64_t x426 = INT64_MIN;
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t91 = -1139;

    t91 = (((x425+x426)&x427)!=x428);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MAX;
	static int16_t x431 = 2312;
	int64_t x432 = -8998965122627LL;
	int32_t t92 = -7938;

    t92 = (((x429+x430)&x431)!=x432);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x437 = 1087791U;
	static uint16_t x438 = 1U;
	uint16_t x439 = 25U;
	static volatile int64_t x440 = 20672982120LL;
	volatile int32_t t93 = -66507908;

    t93 = (((x437+x438)&x439)!=x440);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x441 = 213840650789442736LL;
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	volatile int32_t x444 = -1;

    t94 = (((x441+x442)&x443)!=x444);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x445 = 2168511U;
	int32_t x446 = -22104;
	int32_t x447 = 78951;
	uint8_t x448 = 31U;
	static volatile int32_t t95 = 31382670;

    t95 = (((x445+x446)&x447)!=x448);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x449 = 79U;
	int16_t x450 = INT16_MIN;
	static int32_t x451 = 15;
	int64_t x452 = INT64_MIN;
	static int32_t t96 = 1;

    t96 = (((x449+x450)&x451)!=x452);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	int16_t x454 = -1;
	int8_t x455 = 1;
	uint16_t x456 = UINT16_MAX;
	int32_t t97 = 121709820;

    t97 = (((x453+x454)&x455)!=x456);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = 0;
	int32_t x459 = INT32_MIN;
	int8_t x460 = -14;
	volatile int32_t t98 = 80596666;

    t98 = (((x457+x458)&x459)!=x460);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x461 = INT32_MIN;
	int8_t x463 = 48;
	uint64_t x464 = 2348115726116235540LLU;
	volatile int32_t t99 = -420;

    t99 = (((x461+x462)&x463)!=x464);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x469 = -1;
	volatile int32_t x471 = INT32_MIN;
	int32_t x472 = 0;
	int32_t t100 = 134211759;

    t100 = (((x469+x470)&x471)!=x472);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x477 = INT32_MIN;
	int64_t x478 = -19617504680273065LL;
	int32_t x479 = 39333;
	volatile uint8_t x480 = 11U;

    t101 = (((x477+x478)&x479)!=x480);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x482 = -1;
	int16_t x483 = -253;
	volatile int32_t t102 = -321399;

    t102 = (((x481+x482)&x483)!=x484);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint64_t x486 = 61135626LLU;
	int8_t x487 = 1;
	int64_t x488 = -6960078549235431LL;
	int32_t t103 = 6484;

    t103 = (((x485+x486)&x487)!=x488);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x489 = 971122U;
	int16_t x490 = INT16_MIN;
	int32_t x491 = INT32_MAX;
	int32_t x492 = INT32_MAX;

    t104 = (((x489+x490)&x491)!=x492);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x497 = INT16_MIN;
	static uint32_t x500 = 3498698U;
	volatile int32_t t105 = 1554469;

    t105 = (((x497+x498)&x499)!=x500);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x501 = -1;
	int16_t x502 = INT16_MAX;
	static int64_t x503 = INT64_MAX;
	static uint8_t x504 = UINT8_MAX;
	int32_t t106 = -688479;

    t106 = (((x501+x502)&x503)!=x504);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x505 = -3774;
	int16_t x506 = INT16_MIN;
	int8_t x507 = -3;
	volatile int32_t t107 = 502;

    t107 = (((x505+x506)&x507)!=x508);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x509 = INT8_MAX;
	static uint16_t x510 = UINT16_MAX;
	int8_t x511 = -1;
	int16_t x512 = INT16_MIN;
	volatile int32_t t108 = -61799;

    t108 = (((x509+x510)&x511)!=x512);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x513 = 0U;
	volatile int16_t x514 = INT16_MIN;
	static uint8_t x515 = 51U;

    t109 = (((x513+x514)&x515)!=x516);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x517 = 4U;
	static uint32_t x519 = UINT32_MAX;
	int16_t x520 = INT16_MAX;
	int32_t t110 = 12364225;

    t110 = (((x517+x518)&x519)!=x520);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x521 = 0U;
	uint64_t x522 = 39750433017785LLU;
	uint16_t x523 = 0U;
	int64_t x524 = -1972721604165150LL;
	int32_t t111 = -16;

    t111 = (((x521+x522)&x523)!=x524);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x529 = UINT64_MAX;
	int16_t x530 = INT16_MIN;
	static int8_t x531 = -1;
	int16_t x532 = INT16_MIN;

    t112 = (((x529+x530)&x531)!=x532);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x533 = 3U;
	int32_t x534 = INT32_MIN;
	int8_t x535 = 45;
	uint8_t x536 = 28U;

    t113 = (((x533+x534)&x535)!=x536);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x537 = 8266951916625LLU;
	uint8_t x538 = 5U;
	int8_t x540 = -1;

    t114 = (((x537+x538)&x539)!=x540);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x541 = 0LL;
	static uint64_t x542 = UINT64_MAX;
	volatile uint8_t x543 = UINT8_MAX;
	static uint8_t x544 = UINT8_MAX;

    t115 = (((x541+x542)&x543)!=x544);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x545 = UINT64_MAX;
	static int16_t x546 = -1;
	int64_t x547 = INT64_MIN;
	int32_t x548 = -1;
	volatile int32_t t116 = 2;

    t116 = (((x545+x546)&x547)!=x548);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x549 = 562276997169LLU;
	int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	volatile int32_t t117 = -12;

    t117 = (((x549+x550)&x551)!=x552);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x553 = -1;
	int16_t x554 = -8;
	int32_t x555 = -1;
	uint16_t x556 = 44U;
	volatile int32_t t118 = 5;

    t118 = (((x553+x554)&x555)!=x556);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x558 = 7742U;
	volatile uint32_t x559 = 685U;
	uint32_t x560 = 1622203971U;
	static volatile int32_t t119 = 26708;

    t119 = (((x557+x558)&x559)!=x560);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x561 = 543;
	volatile int8_t x562 = -1;
	uint8_t x563 = 14U;
	int8_t x564 = -1;
	int32_t t120 = -670;

    t120 = (((x561+x562)&x563)!=x564);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x565 = 3;
	uint32_t x566 = UINT32_MAX;
	volatile uint16_t x567 = 1003U;
	volatile int32_t t121 = -136992089;

    t121 = (((x565+x566)&x567)!=x568);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x570 = 906929992551LLU;
	int8_t x572 = INT8_MAX;
	int32_t t122 = 340700527;

    t122 = (((x569+x570)&x571)!=x572);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x585 = 314;
	volatile int32_t t123 = 8048087;

    t123 = (((x585+x586)&x587)!=x588);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x592 = INT64_MAX;
	int32_t t124 = -1828;

    t124 = (((x589+x590)&x591)!=x592);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x593 = UINT32_MAX;
	uint16_t x594 = UINT16_MAX;
	int32_t t125 = 23567539;

    t125 = (((x593+x594)&x595)!=x596);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x601 = INT64_MIN;
	uint8_t x603 = 0U;
	uint32_t x604 = 3527U;
	static volatile int32_t t126 = 8164;

    t126 = (((x601+x602)&x603)!=x604);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x605 = INT32_MIN;
	uint16_t x606 = 0U;
	uint64_t x607 = 2158682084868LLU;
	uint32_t x608 = 474010270U;
	int32_t t127 = -1;

    t127 = (((x605+x606)&x607)!=x608);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x610 = INT8_MAX;
	volatile uint64_t x611 = 520694557LLU;
	static volatile int16_t x612 = INT16_MIN;
	int32_t t128 = -23062;

    t128 = (((x609+x610)&x611)!=x612);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x613 = -26;
	volatile int8_t x614 = INT8_MIN;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = INT8_MAX;
	volatile int32_t t129 = 98;

    t129 = (((x613+x614)&x615)!=x616);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x617 = INT8_MIN;
	int8_t x619 = INT8_MAX;
	volatile int16_t x620 = INT16_MIN;

    t130 = (((x617+x618)&x619)!=x620);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x621 = -1;
	static volatile int16_t x622 = INT16_MIN;
	static uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 63U;
	volatile int32_t t131 = -3473;

    t131 = (((x621+x622)&x623)!=x624);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x625 = UINT64_MAX;
	static int64_t x626 = 5LL;
	int16_t x627 = -954;
	int32_t x628 = INT32_MIN;
	int32_t t132 = 0;

    t132 = (((x625+x626)&x627)!=x628);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x629 = INT8_MIN;
	static int64_t x630 = 86LL;
	int64_t x632 = 1026280143600LL;
	int32_t t133 = 319036;

    t133 = (((x629+x630)&x631)!=x632);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x633 = 206919921751381384LLU;
	uint16_t x634 = 3302U;
	static int64_t x635 = -78122344LL;
	volatile uint64_t x636 = 5428034625807LLU;
	int32_t t134 = -2321686;

    t134 = (((x633+x634)&x635)!=x636);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x637 = 52604406;
	int16_t x638 = -1;
	static volatile int64_t x639 = 328670897LL;
	int32_t t135 = -25589;

    t135 = (((x637+x638)&x639)!=x640);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x641 = -1LL;
	int64_t x642 = 102979186664208LL;
	static volatile int32_t t136 = 1;

    t136 = (((x641+x642)&x643)!=x644);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x649 = INT32_MIN;
	uint64_t x650 = UINT64_MAX;
	uint16_t x651 = 381U;
	int8_t x652 = -1;

    t137 = (((x649+x650)&x651)!=x652);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x653 = 32U;
	int16_t x654 = INT16_MAX;
	int64_t x656 = 145LL;
	static int32_t t138 = 424524892;

    t138 = (((x653+x654)&x655)!=x656);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x657 = -1;
	uint64_t x659 = UINT64_MAX;
	int64_t x660 = INT64_MIN;
	int32_t t139 = 41348833;

    t139 = (((x657+x658)&x659)!=x660);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x661 = UINT32_MAX;
	int16_t x662 = 2713;
	static uint64_t x663 = 184122LLU;
	int32_t t140 = -1221;

    t140 = (((x661+x662)&x663)!=x664);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x667 = -1;
	uint32_t x668 = 246591U;
	volatile int32_t t141 = 44;

    t141 = (((x665+x666)&x667)!=x668);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x670 = -1;
	int8_t x671 = -1;
	int8_t x672 = INT8_MAX;
	static volatile int32_t t142 = 818587;

    t142 = (((x669+x670)&x671)!=x672);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x677 = -140971;
	static volatile int64_t x679 = 4249917712LL;
	int16_t x680 = INT16_MIN;

    t143 = (((x677+x678)&x679)!=x680);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x686 = INT32_MIN;
	int32_t x687 = INT32_MAX;
	int16_t x688 = 5;
	volatile int32_t t144 = 217;

    t144 = (((x685+x686)&x687)!=x688);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x689 = INT8_MAX;
	int16_t x690 = -1;
	static volatile int32_t x691 = INT32_MIN;
	int8_t x692 = -15;
	volatile int32_t t145 = 3611;

    t145 = (((x689+x690)&x691)!=x692);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x697 = 5;
	int64_t x699 = -1LL;
	uint8_t x700 = 5U;
	volatile int32_t t146 = 1;

    t146 = (((x697+x698)&x699)!=x700);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x701 = -1LL;
	uint16_t x703 = 0U;
	uint8_t x704 = 62U;

    t147 = (((x701+x702)&x703)!=x704);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x705 = 0;
	uint32_t x706 = 1426U;
	volatile int32_t t148 = 70829455;

    t148 = (((x705+x706)&x707)!=x708);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	uint32_t x710 = 210888346U;
	uint16_t x711 = 3U;
	volatile uint64_t x712 = 81LLU;
	static volatile int32_t t149 = 3189;

    t149 = (((x709+x710)&x711)!=x712);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x715 = -84056LL;
	static volatile int8_t x716 = INT8_MAX;
	volatile int32_t t150 = -273297;

    t150 = (((x713+x714)&x715)!=x716);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x718 = 1740325U;
	int16_t x719 = -1;
	static int8_t x720 = INT8_MIN;
	int32_t t151 = -1819042;

    t151 = (((x717+x718)&x719)!=x720);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x721 = 1U;
	int32_t x723 = INT32_MAX;
	int8_t x724 = 2;
	static int32_t t152 = -854966286;

    t152 = (((x721+x722)&x723)!=x724);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x725 = 531LL;
	uint32_t x726 = 14276442U;
	static int8_t x727 = -1;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t153 = 454111;

    t153 = (((x725+x726)&x727)!=x728);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x730 = INT32_MAX;
	static volatile int8_t x731 = INT8_MAX;
	uint16_t x732 = UINT16_MAX;
	static volatile int32_t t154 = -260490584;

    t154 = (((x729+x730)&x731)!=x732);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x733 = -31LL;
	int8_t x734 = 7;
	int8_t x735 = INT8_MIN;
	uint64_t x736 = 392233LLU;

    t155 = (((x733+x734)&x735)!=x736);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x738 = UINT32_MAX;
	uint64_t x739 = 40255732449441327LLU;
	static volatile uint8_t x740 = 71U;

    t156 = (((x737+x738)&x739)!=x740);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x741 = -7617LL;
	uint16_t x742 = 97U;
	uint32_t x743 = 9176U;
	uint32_t x744 = 167806U;
	volatile int32_t t157 = 771;

    t157 = (((x741+x742)&x743)!=x744);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x746 = INT16_MIN;
	uint8_t x747 = UINT8_MAX;

    t158 = (((x745+x746)&x747)!=x748);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x753 = 99U;
	static volatile int16_t x754 = INT16_MAX;
	int32_t x755 = INT32_MIN;
	int16_t x756 = INT16_MAX;

    t159 = (((x753+x754)&x755)!=x756);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x758 = 53U;
	static int16_t x759 = -1;
	int32_t x760 = -239118;
	int32_t t160 = 8974;

    t160 = (((x757+x758)&x759)!=x760);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x761 = -1;
	int64_t x762 = -16LL;
	uint32_t x763 = 301365040U;
	uint32_t x764 = 70239808U;

    t161 = (((x761+x762)&x763)!=x764);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x765 = UINT8_MAX;
	int16_t x766 = -1;
	volatile uint8_t x767 = 9U;
	int16_t x768 = INT16_MIN;
	volatile int32_t t162 = 15;

    t162 = (((x765+x766)&x767)!=x768);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x769 = INT32_MAX;
	int16_t x770 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	volatile int32_t t163 = 22;

    t163 = (((x769+x770)&x771)!=x772);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x778 = INT32_MIN;
	static int32_t x779 = INT32_MIN;
	volatile int32_t x780 = INT32_MAX;
	int32_t t164 = 0;

    t164 = (((x777+x778)&x779)!=x780);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x781 = 1;
	static uint16_t x782 = 93U;
	int8_t x783 = INT8_MIN;
	int8_t x784 = 4;

    t165 = (((x781+x782)&x783)!=x784);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x785 = -1;
	int8_t x786 = -1;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t166 = -8;

    t166 = (((x785+x786)&x787)!=x788);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x791 = -14;
	static int64_t x792 = INT64_MIN;

    t167 = (((x789+x790)&x791)!=x792);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x793 = 0U;
	uint32_t x794 = 1488007U;
	static int64_t x795 = 228559729027LL;
	int32_t x796 = -1;

    t168 = (((x793+x794)&x795)!=x796);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x797 = 6U;
	volatile int64_t x799 = INT64_MAX;
	volatile uint32_t x800 = 4491681U;
	static volatile int32_t t169 = 0;

    t169 = (((x797+x798)&x799)!=x800);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x801 = 820U;
	uint16_t x802 = 112U;
	int32_t t170 = 25;

    t170 = (((x801+x802)&x803)!=x804);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x806 = INT64_MIN;
	int32_t x807 = -1;
	int32_t t171 = 530215;

    t171 = (((x805+x806)&x807)!=x808);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x813 = INT16_MAX;
	int16_t x814 = 1;
	uint16_t x815 = 15460U;
	int64_t x816 = INT64_MIN;
	volatile int32_t t172 = 156741;

    t172 = (((x813+x814)&x815)!=x816);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x818 = INT8_MAX;
	int32_t x819 = INT32_MIN;
	int32_t x820 = INT32_MAX;
	volatile int32_t t173 = -1;

    t173 = (((x817+x818)&x819)!=x820);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x821 = 0U;
	uint32_t x822 = 10605445U;
	volatile uint64_t x823 = UINT64_MAX;
	static int8_t x824 = -1;
	static volatile int32_t t174 = 113143055;

    t174 = (((x821+x822)&x823)!=x824);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x826 = -1;
	uint32_t x827 = 11U;
	static int32_t x828 = INT32_MIN;
	int32_t t175 = 2117708;

    t175 = (((x825+x826)&x827)!=x828);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x830 = INT32_MIN;
	volatile int16_t x831 = -16;
	volatile int32_t t176 = -195;

    t176 = (((x829+x830)&x831)!=x832);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x833 = 13U;
	volatile int16_t x834 = INT16_MAX;
	int16_t x835 = -1;
	uint64_t x836 = 8521LLU;
	volatile int32_t t177 = -2740357;

    t177 = (((x833+x834)&x835)!=x836);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x837 = 1LL;
	volatile int8_t x838 = -1;
	static int8_t x839 = INT8_MAX;
	uint32_t x840 = UINT32_MAX;
	volatile int32_t t178 = -11637004;

    t178 = (((x837+x838)&x839)!=x840);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x841 = 5044U;
	int16_t x842 = -274;
	uint64_t x844 = 138927370LLU;
	int32_t t179 = -1;

    t179 = (((x841+x842)&x843)!=x844);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x852 = INT16_MIN;

    t180 = (((x849+x850)&x851)!=x852);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x853 = 81;
	int8_t x855 = INT8_MIN;
	int16_t x856 = INT16_MIN;

    t181 = (((x853+x854)&x855)!=x856);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x861 = 51;
	static volatile int16_t x864 = INT16_MIN;
	static volatile int32_t t182 = -22;

    t182 = (((x861+x862)&x863)!=x864);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x865 = UINT8_MAX;
	int64_t x866 = -12LL;
	volatile uint64_t x867 = 963143LLU;

    t183 = (((x865+x866)&x867)!=x868);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x869 = INT32_MIN;
	int16_t x870 = INT16_MAX;
	int8_t x871 = -1;
	int32_t t184 = -4688588;

    t184 = (((x869+x870)&x871)!=x872);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x873 = INT64_MIN;
	static int32_t x874 = INT32_MAX;
	volatile int64_t x875 = -6LL;
	static volatile int8_t x876 = -7;

    t185 = (((x873+x874)&x875)!=x876);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x877 = 5085414LLU;
	int8_t x878 = -14;
	int64_t x879 = INT64_MIN;
	volatile int8_t x880 = -1;
	volatile int32_t t186 = 18;

    t186 = (((x877+x878)&x879)!=x880);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x881 = 1U;
	static volatile int8_t x882 = -1;
	static uint8_t x883 = 13U;

    t187 = (((x881+x882)&x883)!=x884);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x893 = 124LL;
	volatile int32_t x895 = INT32_MIN;
	volatile int32_t t188 = -1;

    t188 = (((x893+x894)&x895)!=x896);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x897 = 465338LL;
	volatile uint8_t x898 = 1U;
	volatile int64_t x899 = -44LL;
	static int8_t x900 = INT8_MAX;
	int32_t t189 = -31528739;

    t189 = (((x897+x898)&x899)!=x900);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x902 = 3U;
	uint32_t x903 = UINT32_MAX;
	static int64_t x904 = INT64_MIN;
	static int32_t t190 = -310663479;

    t190 = (((x901+x902)&x903)!=x904);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x905 = INT64_MIN;
	volatile uint16_t x906 = 66U;
	static int8_t x907 = INT8_MIN;
	int16_t x908 = INT16_MIN;
	int32_t t191 = 15;

    t191 = (((x905+x906)&x907)!=x908);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x909 = UINT32_MAX;
	uint8_t x911 = UINT8_MAX;
	static volatile uint8_t x912 = 104U;

    t192 = (((x909+x910)&x911)!=x912);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x913 = INT8_MAX;
	int32_t x915 = INT32_MIN;
	uint16_t x916 = UINT16_MAX;
	volatile int32_t t193 = 0;

    t193 = (((x913+x914)&x915)!=x916);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x917 = 399;
	int16_t x918 = -1;
	int8_t x920 = INT8_MIN;
	int32_t t194 = 10433480;

    t194 = (((x917+x918)&x919)!=x920);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x921 = 115U;
	int8_t x922 = INT8_MAX;
	int8_t x923 = -30;
	uint16_t x924 = UINT16_MAX;
	static int32_t t195 = 8297862;

    t195 = (((x921+x922)&x923)!=x924);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x925 = INT64_MIN;
	static uint8_t x926 = UINT8_MAX;
	int32_t x927 = -2083787;
	int32_t x928 = 15;
	int32_t t196 = 425537;

    t196 = (((x925+x926)&x927)!=x928);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x929 = INT64_MAX;
	int16_t x931 = INT16_MIN;
	uint64_t x932 = 27165849228129543LLU;
	int32_t t197 = -97192;

    t197 = (((x929+x930)&x931)!=x932);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x933 = INT64_MAX;
	int8_t x934 = INT8_MIN;
	static uint32_t x935 = 278310U;
	int32_t x936 = INT32_MIN;

    t198 = (((x933+x934)&x935)!=x936);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x937 = -50;
	static int16_t x938 = -1;
	static int8_t x939 = -1;
	uint64_t x940 = UINT64_MAX;
	static volatile int32_t t199 = -140585300;

    t199 = (((x937+x938)&x939)!=x940);

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

