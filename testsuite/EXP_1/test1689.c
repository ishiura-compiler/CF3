
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

static int64_t x2 = INT64_MIN;
int16_t x3 = -1;
static volatile int16_t x8 = INT16_MIN;
int16_t x11 = 178;
static int8_t x16 = 1;
uint16_t x22 = 31U;
int32_t x23 = INT32_MIN;
static uint32_t x25 = 2713975U;
volatile int16_t x27 = INT16_MIN;
volatile int16_t x31 = -496;
uint32_t x36 = 1038457781U;
int8_t x38 = -5;
uint32_t x43 = UINT32_MAX;
int8_t x47 = INT8_MIN;
int32_t x50 = -1;
uint8_t x53 = 125U;
static volatile int64_t x54 = -135688019LL;
static uint8_t x60 = 6U;
int32_t t14 = 91;
int32_t t15 = -14119796;
volatile int32_t t19 = -314896;
uint32_t x82 = UINT32_MAX;
uint8_t x99 = UINT8_MAX;
volatile int32_t t25 = 1;
int16_t x110 = 1;
int16_t x119 = INT16_MIN;
uint16_t x122 = 0U;
static volatile int16_t x129 = -1;
uint8_t x133 = 12U;
int32_t x140 = INT32_MAX;
volatile uint32_t x143 = 2496069U;
uint32_t x147 = UINT32_MAX;
int64_t x151 = 647465373832067517LL;
int32_t x157 = INT32_MAX;
int32_t x159 = 109100824;
int32_t t39 = 2055550;
volatile int32_t t40 = -5;
uint8_t x166 = 26U;
int8_t x172 = -9;
int8_t x173 = 1;
int16_t x175 = INT16_MIN;
int32_t t43 = -1085781;
int64_t x183 = 23961048LL;
int64_t x190 = INT64_MIN;
static int64_t x191 = -1LL;
static int16_t x192 = -1;
int8_t x193 = INT8_MIN;
uint8_t x203 = 1U;
uint16_t x205 = UINT16_MAX;
static int64_t x206 = -1LL;
int16_t x209 = INT16_MAX;
int32_t t52 = -5003521;
int32_t x214 = -1;
int32_t x222 = 335;
static int16_t x224 = INT16_MAX;
static int32_t t56 = -230663997;
int32_t x229 = 4851085;
uint16_t x230 = UINT16_MAX;
volatile int32_t t57 = 42739;
uint32_t x235 = UINT32_MAX;
volatile uint32_t x236 = 588U;
static volatile uint64_t x238 = UINT64_MAX;
uint64_t x240 = 31765944887599628LLU;
int32_t t59 = 1;
int64_t x243 = INT64_MIN;
int64_t x244 = INT64_MIN;
volatile int32_t t61 = -43;
volatile uint64_t x250 = 10218458LLU;
static int32_t x253 = INT32_MIN;
int32_t x260 = -1;
volatile uint16_t x261 = UINT16_MAX;
uint16_t x266 = UINT16_MAX;
static volatile int16_t x272 = 31;
volatile int32_t t68 = -102820767;
volatile int8_t x277 = -5;
int32_t t69 = 86596574;
volatile int32_t t70 = -435056;
uint64_t x296 = 114406926889273091LLU;
int32_t t73 = -32138310;
int32_t t74 = -28124;
int64_t x303 = -5LL;
uint64_t x305 = 96378864LLU;
int32_t t76 = 6330;
static volatile int16_t x316 = INT16_MAX;
int32_t x318 = 212961369;
static int64_t x323 = -1LL;
volatile int32_t t82 = 0;
volatile uint8_t x333 = 27U;
int64_t x349 = 78910116LL;
uint64_t x350 = 37358215973LLU;
static int32_t x357 = INT32_MIN;
int16_t x360 = -1;
int64_t x361 = -308876740LL;
int64_t x362 = 2249906273985LL;
int32_t t91 = -50964715;
volatile int32_t t94 = 97780;
int64_t x381 = -30464728068720LL;
int16_t x387 = INT16_MIN;
int8_t x396 = 9;
int32_t x398 = INT32_MIN;
uint16_t x402 = UINT16_MAX;
int8_t x407 = 2;
int32_t x420 = -14816;
volatile int16_t x422 = INT16_MIN;
volatile uint64_t x424 = UINT64_MAX;
int8_t x425 = INT8_MAX;
static volatile uint32_t x429 = 29U;
uint32_t x432 = 6520893U;
static int64_t x434 = -1LL;
uint64_t x436 = 958729273607624LLU;
static int8_t x438 = INT8_MIN;
int32_t x450 = INT32_MAX;
uint16_t x458 = 15980U;
int32_t x460 = INT32_MIN;
static int32_t t114 = 19160;
int64_t x461 = INT64_MIN;
int64_t x462 = -1LL;
int32_t x463 = 437177;
int32_t t115 = 23182;
int32_t x478 = -85442;
int16_t x479 = INT16_MIN;
int32_t t120 = -22980;
uint8_t x487 = 3U;
static uint8_t x490 = 9U;
int32_t t122 = 8127448;
int32_t t123 = 9133;
uint16_t x497 = UINT16_MAX;
int32_t t124 = -639804;
static int64_t x502 = INT64_MAX;
int32_t t128 = -1;
volatile uint16_t x520 = 3U;
int32_t t129 = 7;
int64_t x524 = INT64_MAX;
volatile int32_t t130 = 104109;
int64_t x526 = -1LL;
volatile int32_t x535 = INT32_MIN;
int32_t t133 = -6771;
uint8_t x537 = UINT8_MAX;
int32_t t134 = 16679;
uint16_t x544 = 22U;
volatile int64_t x547 = -7917304LL;
volatile int16_t x548 = 0;
volatile int32_t t136 = 1016;
int32_t t137 = -241;
int32_t x553 = 1068835;
uint32_t x558 = 3889096U;
int32_t t139 = -12776281;
int8_t x561 = INT8_MIN;
static int32_t x569 = INT32_MAX;
uint16_t x580 = UINT16_MAX;
uint8_t x581 = 61U;
volatile uint64_t x592 = 33996LLU;
static uint8_t x594 = UINT8_MAX;
uint8_t x597 = UINT8_MAX;
volatile int32_t t149 = -100;
uint8_t x602 = 1U;
volatile int32_t t150 = 241;
int32_t x609 = -1;
uint8_t x610 = 0U;
int64_t x612 = -1LL;
uint16_t x614 = 91U;
uint16_t x615 = 5U;
static int16_t x619 = -116;
int32_t t155 = -202;
int32_t x627 = INT32_MIN;
volatile int32_t t157 = -19;
int16_t x633 = INT16_MAX;
int64_t x634 = -581019LL;
volatile int16_t x640 = INT16_MAX;
int32_t t161 = 475;
int16_t x654 = -47;
uint32_t x655 = UINT32_MAX;
int32_t t165 = 1;
volatile int64_t x672 = INT64_MAX;
int32_t x673 = -333;
static int32_t x678 = -33;
static int32_t t169 = 7101;
static volatile int32_t x684 = INT32_MIN;
volatile int32_t x686 = 0;
volatile int32_t t173 = 57070047;
volatile int8_t x697 = -1;
volatile int32_t x705 = INT32_MIN;
static int64_t x709 = 2770515880206LL;
uint16_t x710 = 4U;
int64_t x713 = INT64_MIN;
int8_t x717 = 0;
static volatile int64_t x718 = -1LL;
static int16_t x722 = INT16_MIN;
int8_t x723 = INT8_MAX;
uint8_t x724 = 34U;
int32_t x725 = -1;
static int8_t x735 = 0;
uint16_t x739 = 5230U;
int32_t t185 = -3746;
volatile int32_t x748 = INT32_MAX;
int64_t x749 = INT64_MIN;
int8_t x756 = INT8_MIN;
int32_t t188 = -82598856;
int32_t t190 = 697680203;
volatile int32_t t191 = -2275907;
uint32_t x776 = UINT32_MAX;
volatile int32_t t193 = -5508;
int64_t x777 = INT64_MIN;
uint64_t x781 = 1085908770869506632LLU;
uint8_t x789 = 41U;
int16_t x790 = INT16_MAX;
uint64_t x792 = UINT64_MAX;
int32_t t198 = -331;
int64_t x798 = INT64_MIN;
int32_t t199 = -14;


void f0(void) {
    	int32_t x1 = 45226;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -57927;

    t0 = (((x1>x2)>x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 16044;

    t1 = (((x5>x6)>x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -8877403848755131LL;
	uint64_t x10 = 248179003LLU;
	volatile uint16_t x12 = 13391U;
	int32_t t2 = 110661;

    t2 = (((x9>x10)>x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 432U;
	volatile uint8_t x14 = 88U;
	uint32_t x15 = 15818U;
	int32_t t3 = -1;

    t3 = (((x13>x14)>x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -10433;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -849;

    t4 = (((x17>x18)>x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 21695524;

    t5 = (((x21>x22)>x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = UINT16_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 34;

    t6 = (((x25>x26)>x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 81U;
	static int32_t x30 = -1;
	volatile uint64_t x32 = 1068512755002242995LLU;
	static int32_t t7 = 2409799;

    t7 = (((x29>x30)>x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	static uint64_t x35 = 10123LLU;
	volatile int32_t t8 = 146;

    t8 = (((x33>x34)>x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 20;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	static int32_t t9 = 3334;

    t9 = (((x37>x38)>x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1954;
	int8_t x42 = INT8_MIN;
	int8_t x44 = -1;
	int32_t t10 = 62926099;

    t10 = (((x41>x42)>x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x45 = 1647687619U;
	int32_t x46 = INT32_MIN;
	uint32_t x48 = 1810212U;
	volatile int32_t t11 = -312;

    t11 = (((x45>x46)>x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	int8_t x51 = INT8_MIN;
	static uint64_t x52 = 29579516143LLU;
	volatile int32_t t12 = -578862;

    t12 = (((x49>x50)>x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = 62;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = -1;

    t13 = (((x53>x54)>x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = INT8_MAX;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = -1;

    t14 = (((x57>x58)>x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 12147553250LLU;
	static int64_t x62 = INT64_MIN;
	int16_t x63 = -1;
	int16_t x64 = INT16_MIN;

    t15 = (((x61>x62)>x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -1;
	int64_t x66 = INT64_MAX;
	volatile int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 2;

    t16 = (((x65>x66)>x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 5;
	int8_t x70 = -1;
	static int32_t x71 = -252;
	int8_t x72 = -1;
	volatile int32_t t17 = 551;

    t17 = (((x69>x70)>x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -13520;
	static int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MAX;
	int64_t x76 = -4568858323LL;
	volatile int32_t t18 = 13317;

    t18 = (((x73>x74)>x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 2U;
	uint8_t x78 = 10U;
	volatile uint32_t x79 = 23100994U;
	uint16_t x80 = 6U;

    t19 = (((x77>x78)>x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static uint8_t x83 = 15U;
	int64_t x84 = INT64_MAX;
	static int32_t t20 = -7084156;

    t20 = (((x81>x82)>x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 5U;
	static int32_t x86 = INT32_MIN;
	static uint64_t x87 = 733546902744103328LLU;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 1;

    t21 = (((x85>x86)>x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x89 = UINT8_MAX;
	int8_t x90 = 1;
	uint8_t x91 = UINT8_MAX;
	int8_t x92 = -1;
	int32_t t22 = 2;

    t22 = (((x89>x90)>x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -7415;

    t23 = (((x93>x94)>x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = UINT64_MAX;
	static int64_t x98 = -1LL;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -2;

    t24 = (((x97>x98)>x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = 18989196U;
	uint64_t x104 = UINT64_MAX;

    t25 = (((x101>x102)>x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 59U;
	int16_t x106 = INT16_MAX;
	volatile int32_t x107 = INT32_MIN;
	uint64_t x108 = 9576243793042LLU;
	volatile int32_t t26 = 217833;

    t26 = (((x105>x106)>x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	int64_t x112 = -1LL;
	int32_t t27 = 6;

    t27 = (((x109>x110)>x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -4803LL;
	static int8_t x114 = -14;
	uint32_t x115 = 2829U;
	static int64_t x116 = INT64_MIN;
	static int32_t t28 = 1371;

    t28 = (((x113>x114)>x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = -48;

    t29 = (((x117>x118)>x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	uint32_t x123 = 0U;
	int8_t x124 = 1;
	volatile int32_t t30 = 31189319;

    t30 = (((x121>x122)>x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -1;
	int8_t x126 = INT8_MIN;
	volatile int8_t x127 = -2;
	uint32_t x128 = 1950U;
	static volatile int32_t t31 = -12256;

    t31 = (((x125>x126)>x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x130 = 968U;
	volatile int8_t x131 = 0;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 320118;

    t32 = (((x129>x130)>x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = 428878939LLU;
	volatile int16_t x135 = INT16_MIN;
	static int64_t x136 = 3LL;
	volatile int32_t t33 = 15518694;

    t33 = (((x133>x134)>x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	static uint16_t x139 = UINT16_MAX;
	int32_t t34 = 6261916;

    t34 = (((x137>x138)>x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	volatile int16_t x142 = -13;
	uint32_t x144 = 1315U;
	int32_t t35 = -390680;

    t35 = (((x141>x142)>x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 94923U;
	static int32_t x146 = -4002244;
	static int32_t x148 = 115;
	volatile int32_t t36 = -2749;

    t36 = (((x145>x146)>x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 15655U;
	volatile uint32_t x150 = 32381834U;
	static int32_t x152 = -1;
	int32_t t37 = 990;

    t37 = (((x149>x150)>x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	int64_t x154 = -1LL;
	volatile int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = -45385757;

    t38 = (((x153>x154)>x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MIN;
	static volatile uint16_t x160 = 88U;

    t39 = (((x157>x158)>x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = INT16_MIN;
	int64_t x162 = 4073746422711LL;
	int32_t x163 = INT32_MAX;
	int8_t x164 = -12;

    t40 = (((x161>x162)>x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 2U;
	static int64_t x167 = 651948353423LL;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = 64948;

    t41 = (((x165>x166)>x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	static uint32_t x171 = UINT32_MAX;
	static volatile int32_t t42 = -1328708;

    t42 = (((x169>x170)>x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = UINT16_MAX;
	int32_t x176 = INT32_MIN;

    t43 = (((x173>x174)>x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	uint32_t x180 = 1312U;
	volatile int32_t t44 = 51;

    t44 = (((x177>x178)>x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 0U;
	static int32_t x182 = INT32_MIN;
	volatile int64_t x184 = INT64_MAX;
	volatile int32_t t45 = -64307648;

    t45 = (((x181>x182)>x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = 1794U;
	volatile int64_t x186 = -1LL;
	int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 484089;

    t46 = (((x185>x186)>x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 1U;
	int32_t t47 = 2;

    t47 = (((x189>x190)>x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = -2;
	uint8_t x195 = 24U;
	uint8_t x196 = 3U;
	int32_t t48 = -220;

    t48 = (((x193>x194)>x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = 276;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	volatile int32_t t49 = -201577086;

    t49 = (((x197>x198)>x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -620;
	volatile int32_t x202 = -1;
	uint8_t x204 = 1U;
	static int32_t t50 = -2742308;

    t50 = (((x201>x202)>x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x207 = 12LLU;
	uint8_t x208 = 29U;
	int32_t t51 = -7059;

    t51 = (((x205>x206)>x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;

    t52 = (((x209>x210)>x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 295862U;
	int16_t x215 = -420;
	uint32_t x216 = 38005U;
	static volatile int32_t t53 = 115260;

    t53 = (((x213>x214)>x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int32_t x218 = 5766287;
	static int32_t x219 = -107029008;
	volatile uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = 376;

    t54 = (((x217>x218)>x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x221 = 558336U;
	uint8_t x223 = UINT8_MAX;
	static volatile int32_t t55 = 61473328;

    t55 = (((x221>x222)>x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 25478184437358LLU;
	int8_t x226 = INT8_MIN;
	int64_t x227 = 26213538LL;
	uint64_t x228 = 1LLU;

    t56 = (((x225>x226)>x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x231 = INT64_MIN;
	uint64_t x232 = 6335579584730LLU;

    t57 = (((x229>x230)>x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 8U;
	static uint16_t x234 = 0U;
	volatile int32_t t58 = -1628044;

    t58 = (((x233>x234)>x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = 15568;
	int16_t x239 = INT16_MIN;

    t59 = (((x237>x238)>x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	static uint16_t x242 = UINT16_MAX;
	volatile int32_t t60 = 339;

    t60 = (((x241>x242)>x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 2LL;
	int8_t x246 = 13;
	int8_t x247 = INT8_MAX;
	static int8_t x248 = INT8_MAX;

    t61 = (((x245>x246)>x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 1U;
	static uint32_t x251 = 51215U;
	int8_t x252 = 2;
	int32_t t62 = 2;

    t62 = (((x249>x250)>x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MAX;
	static uint8_t x256 = 3U;
	volatile int32_t t63 = -40750;

    t63 = (((x253>x254)>x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x257 = UINT16_MAX;
	static int64_t x258 = INT64_MIN;
	int8_t x259 = -1;
	volatile int32_t t64 = -7;

    t64 = (((x257>x258)>x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = -3538540641503055LL;
	static volatile uint64_t x263 = 2779545LLU;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -1759576;

    t65 = (((x261>x262)>x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 2598226306LLU;
	static volatile uint32_t x267 = UINT32_MAX;
	static uint32_t x268 = 3153U;
	volatile int32_t t66 = -27653719;

    t66 = (((x265>x266)>x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = 8U;
	int16_t x270 = -1;
	static uint8_t x271 = UINT8_MAX;
	static volatile int32_t t67 = 402577;

    t67 = (((x269>x270)>x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	static volatile int32_t x274 = INT32_MAX;
	static int8_t x275 = 0;
	volatile int64_t x276 = -51LL;

    t68 = (((x273>x274)>x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = UINT16_MAX;
	uint16_t x279 = 9U;
	int32_t x280 = INT32_MIN;

    t69 = (((x277>x278)>x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = INT16_MIN;
	static int64_t x282 = INT64_MIN;
	uint64_t x283 = 2936425060997LLU;
	int64_t x284 = -3186006690LL;

    t70 = (((x281>x282)>x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 265322660LLU;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = 1;
	int8_t x288 = -1;
	int32_t t71 = -832966792;

    t71 = (((x285>x286)>x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	uint32_t x290 = 32640876U;
	uint32_t x291 = 1854727U;
	static volatile int8_t x292 = INT8_MIN;
	int32_t t72 = -96;

    t72 = (((x289>x290)>x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -3851;
	static int16_t x294 = -1;
	int64_t x295 = INT64_MIN;

    t73 = (((x293>x294)>x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 692713468U;
	int32_t x298 = -484;
	volatile uint64_t x299 = 1LLU;
	volatile uint8_t x300 = 91U;

    t74 = (((x297>x298)>x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	uint8_t x302 = 1U;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 881;

    t75 = (((x301>x302)>x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x306 = INT8_MIN;
	static int8_t x307 = -1;
	volatile uint16_t x308 = UINT16_MAX;

    t76 = (((x305>x306)>x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = 204649LLU;
	int16_t x310 = INT16_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 2492636;

    t77 = (((x309>x310)>x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = -1;
	static int16_t x314 = -1;
	int32_t x315 = -110329154;
	volatile int32_t t78 = 7968;

    t78 = (((x313>x314)>x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	uint64_t x319 = 7793322255046499979LLU;
	int16_t x320 = -1;
	int32_t t79 = 15195;

    t79 = (((x317>x318)>x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 689601918;
	volatile int64_t x322 = 211094837111LL;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 18374181;

    t80 = (((x321>x322)>x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	int32_t x326 = -1;
	volatile int16_t x327 = INT16_MIN;
	volatile uint8_t x328 = 2U;
	int32_t t81 = -1999;

    t81 = (((x325>x326)>x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MAX;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 881588LLU;
	int16_t x332 = -1;

    t82 = (((x329>x330)>x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x334 = 125;
	int64_t x335 = 8622164674999LL;
	int32_t x336 = INT32_MAX;
	volatile int32_t t83 = -1;

    t83 = (((x333>x334)>x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	static int64_t x338 = 45785200452LL;
	int32_t x339 = 2697415;
	volatile int8_t x340 = 0;
	volatile int32_t t84 = -135196;

    t84 = (((x337>x338)>x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	static int16_t x343 = INT16_MIN;
	uint32_t x344 = 563592U;
	int32_t t85 = 4;

    t85 = (((x341>x342)>x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 61548;

    t86 = (((x345>x346)>x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x351 = -1;
	int32_t x352 = 2;
	int32_t t87 = -9;

    t87 = (((x349>x350)>x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x354 = -8467LL;
	int8_t x355 = INT8_MIN;
	uint32_t x356 = 2265U;
	volatile int32_t t88 = -850580612;

    t88 = (((x353>x354)>x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MAX;
	static volatile int32_t t89 = 3296;

    t89 = (((x357>x358)>x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x363 = INT8_MIN;
	static volatile int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 1119;

    t90 = (((x361>x362)>x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MAX;
	int64_t x366 = 2142592710700LL;
	volatile uint16_t x367 = 1U;
	static uint64_t x368 = 353798752LLU;

    t91 = (((x365>x366)>x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 51;
	static int64_t x370 = 145807444LL;
	static int8_t x371 = INT8_MIN;
	static int8_t x372 = INT8_MIN;
	int32_t t92 = 150992;

    t92 = (((x369>x370)>x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t93 = -23244;

    t93 = (((x373>x374)>x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = 0;
	volatile int16_t x378 = 4875;
	int8_t x379 = 9;
	volatile int64_t x380 = INT64_MAX;

    t94 = (((x377>x378)>x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x382 = 148U;
	static uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = 32970;

    t95 = (((x381>x382)>x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t96 = -7827057;

    t96 = (((x385>x386)>x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -14;
	int32_t x390 = INT32_MAX;
	static volatile int32_t x391 = INT32_MIN;
	uint32_t x392 = 302105U;
	int32_t t97 = -50;

    t97 = (((x389>x390)>x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MIN;
	static int32_t x394 = -1;
	static uint32_t x395 = 40U;
	int32_t t98 = -1;

    t98 = (((x393>x394)>x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = UINT32_MAX;
	static volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 65475721U;
	int32_t t99 = -1738329;

    t99 = (((x397>x398)>x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 1U;
	int64_t x403 = INT64_MAX;
	int64_t x404 = 24153LL;
	volatile int32_t t100 = -51;

    t100 = (((x401>x402)>x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 58149LLU;
	static uint8_t x406 = UINT8_MAX;
	int32_t x408 = INT32_MIN;
	static volatile int32_t t101 = -30805858;

    t101 = (((x405>x406)>x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = 8024230745853LL;
	volatile uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -485299315482271LL;
	int64_t x412 = INT64_MAX;
	int32_t t102 = -7191;

    t102 = (((x409>x410)>x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	uint16_t x414 = 223U;
	static volatile uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t103 = -14115;

    t103 = (((x413>x414)>x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = 6U;
	int64_t x419 = 20LL;
	volatile int32_t t104 = 208375;

    t104 = (((x417>x418)>x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint32_t x423 = 9148U;
	int32_t t105 = 2;

    t105 = (((x421>x422)>x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = -1LL;
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MAX;
	int32_t t106 = -108498;

    t106 = (((x425>x426)>x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x430 = 37U;
	uint32_t x431 = UINT32_MAX;
	static volatile int32_t t107 = -1101;

    t107 = (((x429>x430)>x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	uint32_t x435 = 36804U;
	int32_t t108 = 1695811;

    t108 = (((x433>x434)>x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static uint16_t x439 = 13U;
	int32_t x440 = INT32_MAX;
	int32_t t109 = -14;

    t109 = (((x437>x438)>x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 0U;
	int16_t x444 = INT16_MIN;
	int32_t t110 = -7;

    t110 = (((x441>x442)>x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x445 = INT16_MAX;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MIN;
	volatile uint8_t x448 = 64U;
	static int32_t t111 = 5786;

    t111 = (((x445>x446)>x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 65276763397LLU;
	static int16_t x451 = INT16_MIN;
	volatile int8_t x452 = 2;
	volatile int32_t t112 = 1;

    t112 = (((x449>x450)>x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	uint8_t x454 = 84U;
	int32_t x455 = -12383838;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t113 = 1;

    t113 = (((x453>x454)>x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = 1041423875380963652LLU;
	uint64_t x459 = 1010LLU;

    t114 = (((x457>x458)>x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x464 = -25LL;

    t115 = (((x461>x462)>x463)>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 3809264261303591LL;
	int32_t x466 = INT32_MIN;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = -1;
	int32_t t116 = -6;

    t116 = (((x465>x466)>x467)>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	int32_t x471 = -1;
	uint32_t x472 = 1315U;
	static int32_t t117 = 1663220;

    t117 = (((x469>x470)>x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 263921346LL;
	uint32_t x474 = 2300467U;
	uint16_t x475 = 11594U;
	uint8_t x476 = UINT8_MAX;
	static volatile int32_t t118 = 5;

    t118 = (((x473>x474)>x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 144624203LL;
	int16_t x480 = INT16_MAX;
	int32_t t119 = 3527612;

    t119 = (((x477>x478)>x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	static volatile int32_t x482 = -2;
	int64_t x483 = INT64_MIN;
	int32_t x484 = -1;

    t120 = (((x481>x482)>x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = -14;
	static uint32_t x486 = 1295U;
	uint16_t x488 = UINT16_MAX;
	static volatile int32_t t121 = 15034540;

    t121 = (((x485>x486)>x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint16_t x491 = 243U;
	static int16_t x492 = INT16_MAX;

    t122 = (((x489>x490)>x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x493 = 15U;
	static uint16_t x494 = 653U;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MIN;

    t123 = (((x493>x494)>x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MIN;

    t124 = (((x497>x498)>x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x501 = 40U;
	volatile int8_t x503 = INT8_MIN;
	volatile uint8_t x504 = 0U;
	static volatile int32_t t125 = 833604571;

    t125 = (((x501>x502)>x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x505 = 25U;
	static int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -5332590;

    t126 = (((x505>x506)>x507)>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	static int32_t x510 = 9673;
	int16_t x511 = 63;
	int32_t x512 = -31298772;
	volatile int32_t t127 = 521779;

    t127 = (((x509>x510)>x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int16_t x514 = -944;
	uint32_t x515 = 52424719U;
	int64_t x516 = INT64_MAX;

    t128 = (((x513>x514)>x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -1LL;
	static int8_t x518 = 3;
	volatile int32_t x519 = -25;

    t129 = (((x517>x518)>x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 9;
	volatile uint8_t x522 = 7U;
	int8_t x523 = 1;

    t130 = (((x521>x522)>x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 4495508524093516LL;
	static int8_t x527 = INT8_MIN;
	static int16_t x528 = -1;
	volatile int32_t t131 = -38498868;

    t131 = (((x525>x526)>x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = -1;
	int8_t x530 = -1;
	int32_t x531 = -1541390;
	volatile int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 471924;

    t132 = (((x529>x530)>x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x533 = 10204048785978356LL;
	volatile int32_t x534 = INT32_MIN;
	uint32_t x536 = 0U;

    t133 = (((x533>x534)>x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = INT64_MAX;
	static int8_t x539 = -1;
	int32_t x540 = INT32_MIN;

    t134 = (((x537>x538)>x539)>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -671899;
	int32_t x542 = 19;
	static volatile int16_t x543 = -3775;
	static int32_t t135 = -83115;

    t135 = (((x541>x542)>x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x545 = UINT16_MAX;
	int32_t x546 = INT32_MIN;

    t136 = (((x545>x546)>x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	static uint8_t x550 = UINT8_MAX;
	volatile int32_t x551 = -1;
	int8_t x552 = -5;

    t137 = (((x549>x550)>x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x554 = -180;
	static uint32_t x555 = 190674U;
	int16_t x556 = 24;
	static int32_t t138 = -8978;

    t138 = (((x553>x554)>x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x557 = 20;
	int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MAX;

    t139 = (((x557>x558)>x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = UINT16_MAX;
	volatile int8_t x563 = -1;
	static volatile int8_t x564 = 0;
	volatile int32_t t140 = -1853558;

    t140 = (((x561>x562)>x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = INT64_MAX;
	volatile uint64_t x566 = 133617962166LLU;
	int64_t x567 = INT64_MAX;
	volatile int32_t x568 = -24;
	volatile int32_t t141 = 2425233;

    t141 = (((x565>x566)>x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = UINT32_MAX;
	static uint8_t x571 = 2U;
	volatile int8_t x572 = INT8_MIN;
	volatile int32_t t142 = 396;

    t142 = (((x569>x570)>x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	volatile uint16_t x574 = 14941U;
	int8_t x575 = 11;
	int16_t x576 = INT16_MAX;
	volatile int32_t t143 = 5845;

    t143 = (((x573>x574)>x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = INT16_MAX;
	int8_t x579 = -32;
	int32_t t144 = 47104;

    t144 = (((x577>x578)>x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = -1LL;
	int64_t x583 = -1LL;
	static volatile uint8_t x584 = 1U;
	volatile int32_t t145 = -263505238;

    t145 = (((x581>x582)>x583)>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -11;
	int64_t x586 = INT64_MIN;
	int16_t x587 = -1;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t146 = 16524270;

    t146 = (((x585>x586)>x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MAX;
	volatile int8_t x590 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	static volatile int32_t t147 = -4;

    t147 = (((x589>x590)>x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x595 = INT16_MIN;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = 2821617;

    t148 = (((x593>x594)>x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x598 = INT32_MAX;
	int32_t x599 = -89565674;
	int16_t x600 = INT16_MIN;

    t149 = (((x597>x598)>x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -21;
	uint8_t x603 = 1U;
	int16_t x604 = INT16_MIN;

    t150 = (((x601>x602)>x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = INT16_MAX;
	uint64_t x606 = UINT64_MAX;
	int8_t x607 = INT8_MIN;
	int8_t x608 = -1;
	int32_t t151 = 90;

    t151 = (((x605>x606)>x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x611 = INT8_MIN;
	int32_t t152 = -5502122;

    t152 = (((x609>x610)>x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MAX;
	int64_t x616 = INT64_MAX;
	int32_t t153 = 4;

    t153 = (((x613>x614)>x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	uint32_t x618 = 2U;
	volatile uint32_t x620 = 2U;
	int32_t t154 = -309;

    t154 = (((x617>x618)>x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 3738231LLU;
	int32_t x622 = INT32_MAX;
	volatile int8_t x623 = INT8_MIN;
	static volatile uint32_t x624 = 27205U;

    t155 = (((x621>x622)>x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 1995841945085673LL;
	uint64_t x626 = 1488098698732377257LLU;
	int32_t x628 = INT32_MIN;
	int32_t t156 = -5;

    t156 = (((x625>x626)>x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int32_t x630 = -1;
	int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;

    t157 = (((x629>x630)>x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x635 = -57658581LL;
	uint16_t x636 = UINT16_MAX;
	int32_t t158 = -219465;

    t158 = (((x633>x634)>x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = -1;
	int8_t x638 = INT8_MIN;
	static volatile uint8_t x639 = UINT8_MAX;
	volatile int32_t t159 = -1;

    t159 = (((x637>x638)>x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 7;
	int8_t x642 = INT8_MIN;
	uint64_t x643 = 44786734195701LLU;
	static int32_t x644 = INT32_MIN;
	static volatile int32_t t160 = -14637989;

    t160 = (((x641>x642)>x643)>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MIN;
	int8_t x648 = 0;

    t161 = (((x645>x646)>x647)>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x649 = INT64_MIN;
	uint64_t x650 = UINT64_MAX;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 171395249;

    t162 = (((x649>x650)>x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = 0;
	static int64_t x656 = 542463935214LL;
	static int32_t t163 = 3832;

    t163 = (((x653>x654)>x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 20045U;
	int64_t x658 = INT64_MAX;
	int32_t x659 = -351915;
	static int16_t x660 = -1;
	volatile int32_t t164 = 3779319;

    t164 = (((x657>x658)>x659)>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	volatile uint16_t x662 = 8U;
	volatile int16_t x663 = INT16_MIN;
	int32_t x664 = -187345422;

    t165 = (((x661>x662)>x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -6309;
	int16_t x666 = 320;
	int16_t x667 = INT16_MAX;
	int64_t x668 = 0LL;
	volatile int32_t t166 = -1;

    t166 = (((x665>x666)>x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	int32_t x671 = 964445;
	static int32_t t167 = 2166;

    t167 = (((x669>x670)>x671)>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x674 = 3U;
	int8_t x675 = INT8_MIN;
	volatile int32_t x676 = INT32_MIN;
	int32_t t168 = 1981165;

    t168 = (((x673>x674)>x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -10;
	int8_t x679 = 19;
	uint32_t x680 = 25U;

    t169 = (((x677>x678)>x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 120U;
	int32_t x682 = INT32_MIN;
	int64_t x683 = 826113390LL;
	int32_t t170 = 34;

    t170 = (((x681>x682)>x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -245149;
	int32_t x687 = INT32_MAX;
	volatile int16_t x688 = INT16_MIN;
	static volatile int32_t t171 = -192896;

    t171 = (((x685>x686)>x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x689 = 27103U;
	volatile uint32_t x690 = 43376750U;
	int16_t x691 = 6;
	int8_t x692 = INT8_MIN;
	int32_t t172 = 96650;

    t172 = (((x689>x690)>x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	uint64_t x694 = 232556190217073959LLU;
	volatile uint32_t x695 = 210U;
	volatile int16_t x696 = -72;

    t173 = (((x693>x694)>x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x698 = UINT8_MAX;
	volatile int32_t x699 = INT32_MAX;
	static int8_t x700 = INT8_MAX;
	static int32_t t174 = 340158;

    t174 = (((x697>x698)>x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	volatile int32_t x702 = INT32_MIN;
	int32_t x703 = -1;
	volatile int64_t x704 = INT64_MIN;
	int32_t t175 = 28123;

    t175 = (((x701>x702)>x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x706 = INT64_MAX;
	int16_t x707 = INT16_MAX;
	uint16_t x708 = 108U;
	int32_t t176 = 1888674;

    t176 = (((x705>x706)>x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x711 = INT32_MIN;
	int32_t x712 = -1;
	volatile int32_t t177 = -2;

    t177 = (((x709>x710)>x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -445736434LL;
	uint32_t x715 = UINT32_MAX;
	static uint32_t x716 = 1402U;
	volatile int32_t t178 = 5403132;

    t178 = (((x713>x714)>x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x719 = INT8_MIN;
	static int32_t x720 = -1;
	volatile int32_t t179 = 911;

    t179 = (((x717>x718)>x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MAX;
	int32_t t180 = 197726;

    t180 = (((x721>x722)>x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x726 = UINT64_MAX;
	int32_t x727 = INT32_MAX;
	static volatile int64_t x728 = INT64_MIN;
	static int32_t t181 = 8;

    t181 = (((x725>x726)>x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	static uint8_t x730 = UINT8_MAX;
	static int64_t x731 = 84186247304179LL;
	static int32_t x732 = -1;
	volatile int32_t t182 = -3339123;

    t182 = (((x729>x730)>x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	static uint16_t x734 = UINT16_MAX;
	static int64_t x736 = INT64_MAX;
	volatile int32_t t183 = -1117537;

    t183 = (((x733>x734)>x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x737 = 17U;
	uint32_t x738 = 4230949U;
	int16_t x740 = -1;
	int32_t t184 = -1;

    t184 = (((x737>x738)>x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int8_t x742 = INT8_MIN;
	static uint8_t x743 = UINT8_MAX;
	int16_t x744 = INT16_MIN;

    t185 = (((x741>x742)>x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 2246U;
	static volatile uint8_t x746 = UINT8_MAX;
	uint16_t x747 = 2U;
	volatile int32_t t186 = 4759;

    t186 = (((x745>x746)>x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 0;
	uint16_t x751 = 2169U;
	volatile int16_t x752 = INT16_MIN;
	static int32_t t187 = -670158813;

    t187 = (((x749>x750)>x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 13216LLU;
	uint32_t x754 = UINT32_MAX;
	int16_t x755 = 19;

    t188 = (((x753>x754)>x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 63058751841LLU;
	uint8_t x758 = 2U;
	int64_t x759 = INT64_MIN;
	int32_t x760 = INT32_MIN;
	static int32_t t189 = -51399;

    t189 = (((x757>x758)>x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	volatile int8_t x762 = INT8_MIN;
	uint32_t x763 = 899573U;
	int8_t x764 = 1;

    t190 = (((x761>x762)>x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -10LL;
	int64_t x766 = INT64_MIN;
	int64_t x767 = 30620259LL;
	volatile int32_t x768 = 7621;

    t191 = (((x765>x766)>x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 2U;
	uint32_t x770 = 257260725U;
	static volatile int32_t x771 = 23349;
	int16_t x772 = INT16_MAX;
	int32_t t192 = 40950;

    t192 = (((x769>x770)>x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 37U;
	static int32_t x774 = 1693014;
	volatile int8_t x775 = 0;

    t193 = (((x773>x774)>x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = -1;
	static int64_t x779 = -2497558487LL;
	static volatile int32_t x780 = -1;
	int32_t t194 = -1;

    t194 = (((x777>x778)>x779)>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x782 = 799U;
	int16_t x783 = 616;
	volatile int64_t x784 = INT64_MIN;
	static volatile int32_t t195 = -7;

    t195 = (((x781>x782)>x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	int64_t x786 = INT64_MAX;
	volatile int8_t x787 = -1;
	static uint64_t x788 = 11201560608166LLU;
	static volatile int32_t t196 = 0;

    t196 = (((x785>x786)>x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x791 = -1;
	static int32_t t197 = -106775;

    t197 = (((x789>x790)>x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 2019870U;
	int32_t x794 = -1;
	int8_t x795 = -12;
	uint8_t x796 = 11U;

    t198 = (((x793>x794)>x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = 17864707;
	static uint64_t x799 = 611673868LLU;
	int16_t x800 = 48;

    t199 = (((x797>x798)>x799)>x800);

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

