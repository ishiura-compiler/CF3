
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

uint8_t x3 = 3U;
int16_t x5 = INT16_MIN;
uint16_t x6 = 3217U;
uint8_t x13 = UINT8_MAX;
uint8_t x19 = UINT8_MAX;
volatile uint32_t x23 = UINT32_MAX;
uint32_t x25 = 554U;
uint32_t x27 = UINT32_MAX;
volatile int16_t x34 = 409;
int32_t t8 = -25549;
static int16_t x37 = -1;
int64_t x49 = 4876LL;
uint32_t x50 = 17713U;
int16_t x53 = INT16_MIN;
uint32_t x56 = 2150U;
static volatile int16_t x62 = INT16_MIN;
volatile int8_t x64 = INT8_MIN;
volatile int32_t t15 = -93638939;
uint16_t x66 = UINT16_MAX;
uint8_t x67 = UINT8_MAX;
int64_t x71 = INT64_MAX;
uint16_t x86 = 11U;
int16_t x93 = INT16_MIN;
volatile uint16_t x99 = 22434U;
int64_t x103 = -738198143LL;
int8_t x107 = -3;
int16_t x110 = INT16_MAX;
int16_t x114 = INT16_MIN;
int8_t x117 = INT8_MIN;
int32_t t31 = 2561;
int32_t x134 = 0;
int16_t x138 = INT16_MIN;
volatile int32_t t34 = 6761;
int16_t x151 = -1;
volatile int32_t x153 = INT32_MIN;
int64_t x157 = INT64_MAX;
static volatile int8_t x169 = -18;
int64_t x171 = 23007513689181899LL;
int32_t t42 = 334993;
int64_t x173 = INT64_MIN;
int32_t t43 = 10500129;
int16_t x177 = -170;
static int32_t x178 = -1;
int32_t t45 = 6618;
uint64_t x192 = UINT64_MAX;
volatile int32_t t47 = -418979;
int32_t x196 = -36245677;
int32_t t48 = -1;
int8_t x234 = -1;
uint8_t x236 = 1U;
volatile int32_t x241 = -1;
int8_t x251 = INT8_MIN;
uint8_t x267 = UINT8_MAX;
volatile int32_t t62 = -760815433;
uint64_t x276 = 14163674591153LLU;
uint64_t x284 = 915852190658330LLU;
int8_t x303 = -1;
volatile uint16_t x308 = 10260U;
static int32_t x312 = -1;
int32_t t73 = 14938;
uint32_t x323 = 31571U;
int16_t x326 = INT16_MIN;
volatile uint8_t x330 = 1U;
int32_t x333 = INT32_MIN;
int32_t x356 = INT32_MIN;
uint16_t x358 = 0U;
static int32_t t83 = -61;
int16_t x367 = 42;
uint64_t x376 = UINT64_MAX;
int64_t x377 = -883LL;
static uint16_t x380 = 768U;
int8_t x382 = INT8_MIN;
static volatile int32_t t88 = 1;
int64_t x386 = -1LL;
volatile int32_t t89 = 285134629;
static int16_t x396 = INT16_MIN;
static int32_t t92 = -65;
static int64_t x403 = -406LL;
uint64_t x407 = UINT64_MAX;
int32_t t94 = 413;
volatile int64_t x409 = -1LL;
uint8_t x412 = 5U;
int64_t x416 = -4721080303807853LL;
static uint32_t x425 = UINT32_MAX;
int32_t x431 = INT32_MIN;
static uint64_t x434 = UINT64_MAX;
uint8_t x436 = UINT8_MAX;
volatile int32_t x438 = INT32_MIN;
int32_t t100 = -235827;
static int32_t t101 = -61;
volatile int32_t x445 = -1459;
uint64_t x447 = 754429829316022666LLU;
int8_t x448 = 12;
uint32_t x457 = 3U;
int32_t t104 = 12090;
int32_t x469 = -14548;
volatile int16_t x472 = -1;
int16_t x473 = INT16_MAX;
static uint32_t x491 = 242805U;
int32_t x502 = INT32_MIN;
uint8_t x508 = 39U;
int8_t x511 = INT8_MIN;
int16_t x515 = INT16_MIN;
volatile int16_t x517 = -989;
static uint64_t x521 = 7833273LLU;
volatile int32_t t119 = -3;
int8_t x531 = -1;
static volatile int32_t t121 = 1;
uint8_t x542 = 25U;
volatile int32_t t123 = -4806;
volatile uint16_t x561 = UINT16_MAX;
volatile int16_t x572 = 354;
int64_t x575 = INT64_MIN;
uint32_t x578 = 58440349U;
static uint32_t x588 = 182513U;
int64_t x595 = INT64_MIN;
static int32_t t135 = 161;
int32_t x609 = INT32_MIN;
volatile int64_t x610 = INT64_MIN;
volatile uint16_t x612 = 3U;
static int32_t t137 = -45869;
int8_t x622 = INT8_MIN;
volatile int32_t t139 = 11;
static uint16_t x630 = 106U;
int64_t x632 = -1LL;
uint32_t x634 = 453U;
int32_t t141 = 1;
uint32_t x642 = 137634U;
volatile int32_t t144 = 6310;
int64_t x662 = 7221825LL;
int64_t x664 = -1LL;
volatile int64_t x666 = -6LL;
int32_t t148 = 59;
int64_t x669 = INT64_MAX;
int16_t x675 = INT16_MIN;
volatile uint64_t x684 = 13139461198LLU;
volatile int16_t x685 = INT16_MIN;
static int32_t x686 = INT32_MAX;
uint32_t x690 = UINT32_MAX;
static int32_t t153 = -1035130;
uint8_t x695 = UINT8_MAX;
int32_t t155 = 110;
int64_t x706 = 7750LL;
int8_t x708 = INT8_MIN;
static uint32_t x718 = 4641090U;
uint16_t x719 = 3052U;
static int32_t x726 = 255435;
uint32_t x727 = 35001714U;
static int16_t x728 = 0;
volatile int32_t x736 = -282;
int64_t x737 = -267662LL;
volatile int32_t t164 = 14;
int32_t x744 = -8;
static volatile int32_t t165 = -8188;
int32_t x746 = INT32_MIN;
uint8_t x754 = UINT8_MAX;
uint64_t x759 = 1684LLU;
volatile int16_t x769 = 0;
int64_t x773 = INT64_MIN;
volatile int32_t x778 = -62739864;
volatile int32_t t173 = 3;
static volatile uint8_t x783 = 89U;
volatile uint64_t x787 = 1168536256841831LLU;
uint64_t x790 = 19658411372LLU;
volatile int32_t t176 = 15427;
int32_t x793 = -182;
volatile int8_t x794 = INT8_MIN;
static volatile int32_t t177 = 895208;
int16_t x797 = INT16_MIN;
static uint16_t x798 = UINT16_MAX;
int64_t x803 = INT64_MIN;
uint32_t x810 = UINT32_MAX;
int32_t t182 = -910;
volatile int32_t t183 = 27;
int16_t x823 = INT16_MAX;
int16_t x831 = INT16_MIN;
int32_t x832 = INT32_MAX;
volatile int32_t t188 = 82;
uint16_t x855 = UINT16_MAX;
static uint64_t x856 = UINT64_MAX;
uint32_t x859 = UINT32_MAX;
volatile int32_t t191 = 0;
int8_t x861 = -30;
uint64_t x864 = 4699601493456469LLU;
static int16_t x866 = INT16_MAX;
static volatile uint64_t x878 = 40576194983786682LLU;
int8_t x881 = -1;
int64_t x883 = INT64_MAX;
int32_t t198 = 774462397;
volatile int8_t x890 = -1;
static volatile int8_t x891 = INT8_MIN;


void f0(void) {
    	volatile int16_t x1 = 56;
	int64_t x2 = INT64_MAX;
	int32_t x4 = -1;
	int32_t t0 = 6531;

    t0 = (((x1^x2)+x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x7 = INT16_MIN;
	uint8_t x8 = 88U;
	volatile int32_t t1 = -939;

    t1 = (((x5^x6)+x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x10 = -1;
	static uint64_t x11 = 210761729188238LLU;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = -3;

    t2 = (((x9^x10)+x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -653;
	volatile int32_t t3 = 1262113;

    t3 = (((x13^x14)+x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	volatile int64_t x20 = -449120809LL;
	volatile int32_t t4 = 11942;

    t4 = (((x17^x18)+x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 854281388994LL;
	static int16_t x22 = 1;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -793367;

    t5 = (((x21^x22)+x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x26 = 462762927426LLU;
	int32_t x28 = 168302;
	volatile int32_t t6 = -406;

    t6 = (((x25^x26)+x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = 5;
	volatile uint8_t x31 = 4U;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 967277;

    t7 = (((x29^x30)+x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint8_t x35 = 2U;
	static uint16_t x36 = 251U;

    t8 = (((x33^x34)+x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 15U;
	volatile int64_t x39 = INT64_MIN;
	static int32_t x40 = -1;
	static int32_t t9 = 506895;

    t9 = (((x37^x38)+x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = -1LL;
	uint8_t x42 = 0U;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 67;

    t10 = (((x41^x42)+x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	static uint64_t x46 = 2295001403334LLU;
	static uint32_t x47 = UINT32_MAX;
	static uint16_t x48 = 197U;
	int32_t t11 = -164730565;

    t11 = (((x45^x46)+x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = -1;
	int8_t x52 = -1;
	volatile int32_t t12 = 32745687;

    t12 = (((x49^x50)+x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = UINT64_MAX;
	int32_t x55 = 539536659;
	int32_t t13 = -13;

    t13 = (((x53^x54)+x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	static int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -27559883;

    t14 = (((x57^x58)+x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static int16_t x63 = -1;

    t15 = (((x61^x62)+x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 639445;

    t16 = (((x65^x66)+x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -1;
	static volatile int32_t x70 = 5586526;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 1;

    t17 = (((x69^x70)+x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 330;
	int16_t x74 = -17;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = 100;

    t18 = (((x73^x74)+x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x77 = 447LLU;
	int32_t x78 = -650;
	int8_t x79 = 1;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -455;

    t19 = (((x77^x78)+x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -3491;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = UINT64_MAX;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = -13648279;

    t20 = (((x81^x82)+x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = 2695U;
	int32_t t21 = -946998;

    t21 = (((x85^x86)+x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -9;
	uint16_t x90 = UINT16_MAX;
	static uint64_t x91 = 346081018LLU;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = -1;

    t22 = (((x89^x90)+x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x94 = -1;
	uint32_t x95 = 5148327U;
	int8_t x96 = -58;
	static volatile int32_t t23 = 423;

    t23 = (((x93^x94)+x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 652150;

    t24 = (((x97^x98)+x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	static int32_t x102 = -1;
	uint32_t x104 = UINT32_MAX;
	static int32_t t25 = -28086;

    t25 = (((x101^x102)+x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -1LL;
	uint64_t x106 = UINT64_MAX;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = 61;

    t26 = (((x105^x106)+x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 4181027627788935LLU;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -9170954;

    t27 = (((x109^x110)+x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 230U;
	volatile int16_t x115 = 444;
	volatile int8_t x116 = INT8_MIN;
	int32_t t28 = -911;

    t28 = (((x113^x114)+x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MAX;
	volatile int16_t x119 = INT16_MAX;
	int64_t x120 = 312778LL;
	volatile int32_t t29 = -514317896;

    t29 = (((x117^x118)+x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	volatile uint16_t x124 = 7U;
	int32_t t30 = -834651;

    t30 = (((x121^x122)+x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 9093976311778591LLU;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = 11802652LLU;
	volatile int8_t x128 = INT8_MIN;

    t31 = (((x125^x126)+x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 11;
	int8_t x130 = -1;
	static int32_t x131 = -1;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 0;

    t32 = (((x129^x130)+x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x133 = 3U;
	uint64_t x135 = 145597513736017LLU;
	uint8_t x136 = 1U;
	volatile int32_t t33 = 211410;

    t33 = (((x133^x134)+x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = -62;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = 4U;

    t34 = (((x137^x138)+x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = -125839;

    t35 = (((x141^x142)+x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = UINT32_MAX;
	int16_t x146 = -14;
	static int32_t x147 = -1;
	volatile uint8_t x148 = 30U;
	int32_t t36 = 0;

    t36 = (((x145^x146)+x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 11U;
	int64_t x150 = INT64_MAX;
	int64_t x152 = -372551019789768891LL;
	volatile int32_t t37 = -59610;

    t37 = (((x149^x150)+x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = 1U;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = -278983671;
	int32_t t38 = -23955904;

    t38 = (((x153^x154)+x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = 489857579735110LL;
	uint64_t x159 = 14044126599LLU;
	static volatile uint64_t x160 = 872421268872319002LLU;
	volatile int32_t t39 = 361668;

    t39 = (((x157^x158)+x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -53412187352LL;
	volatile int64_t x162 = INT64_MIN;
	uint16_t x163 = 116U;
	int8_t x164 = -1;
	int32_t t40 = -24;

    t40 = (((x161^x162)+x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = 23;
	static uint8_t x167 = 10U;
	static uint8_t x168 = 80U;
	volatile int32_t t41 = 76720;

    t41 = (((x165^x166)+x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = 19;
	int8_t x172 = 1;

    t42 = (((x169^x170)+x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 8U;
	uint16_t x175 = 676U;
	uint16_t x176 = 677U;

    t43 = (((x173^x174)+x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x179 = INT8_MAX;
	volatile int64_t x180 = INT64_MIN;
	static volatile int32_t t44 = 11785;

    t44 = (((x177^x178)+x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static volatile int16_t x182 = -7;
	static int8_t x183 = -8;
	uint16_t x184 = UINT16_MAX;

    t45 = (((x181^x182)+x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	uint64_t x186 = UINT64_MAX;
	static int64_t x187 = -1LL;
	volatile uint32_t x188 = 43749U;
	volatile int32_t t46 = 1;

    t46 = (((x185^x186)+x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = INT32_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -1;

    t47 = (((x189^x190)+x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 25U;
	uint64_t x194 = 1478LLU;
	volatile int32_t x195 = INT32_MAX;

    t48 = (((x193^x194)+x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -8216171;
	volatile int32_t x198 = INT32_MIN;
	static volatile int16_t x199 = INT16_MIN;
	int16_t x200 = 735;
	volatile int32_t t49 = -571811212;

    t49 = (((x197^x198)+x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	static uint8_t x202 = UINT8_MAX;
	static volatile int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = -6;

    t50 = (((x201^x202)+x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = 1428602524818978LL;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 4357U;
	volatile int32_t t51 = -217;

    t51 = (((x209^x210)+x211)>x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x218 = 4896129437LL;
	uint64_t x219 = 22LLU;
	int32_t x220 = -5630;
	int32_t t52 = -889965;

    t52 = (((x217^x218)+x219)>x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x221 = 3;
	static int32_t x222 = 349077734;
	int16_t x223 = INT16_MAX;
	int32_t x224 = -1;
	static volatile int32_t t53 = 915950984;

    t53 = (((x221^x222)+x223)>x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	static int8_t x231 = 1;
	static uint16_t x232 = UINT16_MAX;
	int32_t t54 = -35;

    t54 = (((x229^x230)+x231)>x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = -1;
	volatile int64_t x235 = -1879582LL;
	static volatile int32_t t55 = 660638;

    t55 = (((x233^x234)+x235)>x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x237 = -247;
	uint32_t x238 = 69951U;
	int64_t x239 = -107374825299708158LL;
	static int32_t x240 = INT32_MIN;
	int32_t t56 = 9255517;

    t56 = (((x237^x238)+x239)>x240);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x242 = 360331LLU;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 1925813822LL;
	volatile int32_t t57 = -2;

    t57 = (((x241^x242)+x243)>x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x245 = 1488015387U;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 534789798U;
	uint16_t x248 = 2U;
	static volatile int32_t t58 = -118929;

    t58 = (((x245^x246)+x247)>x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = 12U;
	int16_t x252 = INT16_MIN;
	volatile int32_t t59 = 10456;

    t59 = (((x249^x250)+x251)>x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = -1;
	static volatile int32_t x254 = INT32_MAX;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t60 = 14368093;

    t60 = (((x253^x254)+x255)>x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x261 = INT64_MIN;
	uint16_t x262 = 1509U;
	int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t61 = -3606641;

    t61 = (((x261^x262)+x263)>x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = 114210825;
	volatile uint8_t x268 = 45U;

    t62 = (((x265^x266)+x267)>x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x269 = -9;
	int32_t x270 = -260;
	int16_t x271 = INT16_MIN;
	static int64_t x272 = INT64_MAX;
	int32_t t63 = -7462;

    t63 = (((x269^x270)+x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MAX;
	static uint8_t x274 = 7U;
	static uint64_t x275 = 53LLU;
	int32_t t64 = 10791;

    t64 = (((x273^x274)+x275)>x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = UINT8_MAX;
	int16_t x278 = -1029;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t65 = -1258;

    t65 = (((x277^x278)+x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x281 = UINT16_MAX;
	uint64_t x282 = UINT64_MAX;
	static int64_t x283 = -1LL;
	static int32_t t66 = -29358908;

    t66 = (((x281^x282)+x283)>x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = -1LL;
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t67 = 6;

    t67 = (((x285^x286)+x287)>x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	uint32_t x296 = 36U;
	int32_t t68 = 9734484;

    t68 = (((x293^x294)+x295)>x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x301 = 4106U;
	volatile int8_t x302 = INT8_MIN;
	int32_t x304 = -1;
	volatile int32_t t69 = -3;

    t69 = (((x301^x302)+x303)>x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = -1;
	int16_t x306 = 0;
	static int8_t x307 = -7;
	int32_t t70 = -2919678;

    t70 = (((x305^x306)+x307)>x308);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int32_t t71 = 0;

    t71 = (((x309^x310)+x311)>x312);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 19319941U;
	uint16_t x316 = 26305U;
	int32_t t72 = 7768;

    t72 = (((x313^x314)+x315)>x316);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -1;
	volatile uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	int64_t x320 = INT64_MIN;

    t73 = (((x317^x318)+x319)>x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	uint16_t x322 = 269U;
	volatile uint32_t x324 = 4U;
	int32_t t74 = 1;

    t74 = (((x321^x322)+x323)>x324);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = 1;
	int64_t x327 = 153LL;
	int16_t x328 = INT16_MIN;
	volatile int32_t t75 = -48;

    t75 = (((x325^x326)+x327)>x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = -1;
	uint32_t x331 = 1413920U;
	static int8_t x332 = -25;
	volatile int32_t t76 = -6;

    t76 = (((x329^x330)+x331)>x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x334 = INT16_MAX;
	volatile int8_t x335 = 0;
	volatile int8_t x336 = INT8_MIN;
	int32_t t77 = -143031887;

    t77 = (((x333^x334)+x335)>x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -1;
	static int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MIN;
	static int32_t t78 = -79;

    t78 = (((x337^x338)+x339)>x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x341 = 22U;
	uint8_t x342 = 50U;
	static int32_t x343 = 172392;
	uint64_t x344 = 218LLU;
	volatile int32_t t79 = 165610;

    t79 = (((x341^x342)+x343)>x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = INT16_MAX;
	volatile int32_t x350 = INT32_MIN;
	volatile int32_t x351 = 30861;
	int8_t x352 = 0;
	static volatile int32_t t80 = 216535;

    t80 = (((x349^x350)+x351)>x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile int8_t x354 = INT8_MAX;
	uint8_t x355 = 6U;
	volatile int32_t t81 = -12405;

    t81 = (((x353^x354)+x355)>x356);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x357 = INT32_MAX;
	int64_t x359 = INT64_MIN;
	int64_t x360 = INT64_MIN;
	static int32_t t82 = 9;

    t82 = (((x357^x358)+x359)>x360);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = 4774;
	int16_t x362 = -1;
	uint64_t x363 = 938227800072965122LLU;
	static uint8_t x364 = UINT8_MAX;

    t83 = (((x361^x362)+x363)>x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x365 = INT8_MIN;
	static volatile int64_t x366 = INT64_MIN;
	uint8_t x368 = 3U;
	int32_t t84 = 11;

    t84 = (((x365^x366)+x367)>x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x369 = 975;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 1;
	int64_t x372 = -7626122LL;
	int32_t t85 = 57;

    t85 = (((x369^x370)+x371)>x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = 6133;
	int8_t x374 = 30;
	uint16_t x375 = UINT16_MAX;
	int32_t t86 = 4010;

    t86 = (((x373^x374)+x375)>x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x378 = 395U;
	int64_t x379 = -1LL;
	volatile int32_t t87 = -25;

    t87 = (((x377^x378)+x379)>x380);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 5043798LLU;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;

    t88 = (((x381^x382)+x383)>x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x385 = 26U;
	volatile int64_t x387 = -55886LL;
	int16_t x388 = -1;

    t89 = (((x385^x386)+x387)>x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x389 = 0U;
	int64_t x390 = -36146581LL;
	uint32_t x391 = 249556240U;
	int32_t x392 = 1;
	volatile int32_t t90 = 52750136;

    t90 = (((x389^x390)+x391)>x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x393 = -222318447;
	volatile int64_t x394 = INT64_MAX;
	uint32_t x395 = 109U;
	int32_t t91 = -1;

    t91 = (((x393^x394)+x395)>x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = 75444LLU;
	uint32_t x399 = UINT32_MAX;
	static int32_t x400 = 0;

    t92 = (((x397^x398)+x399)>x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x401 = 12U;
	volatile int32_t x402 = 107464;
	int64_t x404 = 1891416775506249LL;
	int32_t t93 = -479;

    t93 = (((x401^x402)+x403)>x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MIN;
	uint32_t x408 = 1U;

    t94 = (((x405^x406)+x407)>x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x410 = INT32_MAX;
	static int32_t x411 = INT32_MIN;
	volatile int32_t t95 = -242849;

    t95 = (((x409^x410)+x411)>x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = -1;
	int32_t x415 = INT32_MIN;
	int32_t t96 = 3445;

    t96 = (((x413^x414)+x415)>x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x426 = 10U;
	volatile uint32_t x427 = UINT32_MAX;
	uint16_t x428 = UINT16_MAX;
	int32_t t97 = 230743786;

    t97 = (((x425^x426)+x427)>x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x429 = 36;
	static int32_t x430 = INT32_MAX;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t98 = -74;

    t98 = (((x429^x430)+x431)>x432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x433 = INT64_MIN;
	static int8_t x435 = -1;
	volatile int32_t t99 = -125798369;

    t99 = (((x433^x434)+x435)>x436);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x437 = UINT32_MAX;
	int64_t x439 = -1LL;
	int16_t x440 = INT16_MIN;

    t100 = (((x437^x438)+x439)>x440);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x441 = -1;
	int64_t x442 = -1LL;
	int8_t x443 = INT8_MAX;
	volatile uint64_t x444 = 64880580738LLU;

    t101 = (((x441^x442)+x443)>x444);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x446 = 1U;
	int32_t t102 = -376921359;

    t102 = (((x445^x446)+x447)>x448);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MAX;
	int8_t x455 = -1;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t103 = -539692741;

    t103 = (((x453^x454)+x455)>x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x458 = -9200;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;

    t104 = (((x457^x458)+x459)>x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x465 = 1584657631U;
	uint64_t x466 = UINT64_MAX;
	volatile int64_t x467 = INT64_MAX;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t105 = 48;

    t105 = (((x465^x466)+x467)>x468);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x470 = UINT32_MAX;
	volatile int64_t x471 = INT64_MIN;
	volatile int32_t t106 = 16497;

    t106 = (((x469^x470)+x471)>x472);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x474 = UINT32_MAX;
	uint32_t x475 = 8426U;
	static uint32_t x476 = UINT32_MAX;
	int32_t t107 = -1052531;

    t107 = (((x473^x474)+x475)>x476);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x477 = 1;
	int32_t x478 = -947;
	static int8_t x479 = INT8_MIN;
	static int16_t x480 = 2;
	static int32_t t108 = -1089709;

    t108 = (((x477^x478)+x479)>x480);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x481 = 1U;
	int64_t x482 = INT64_MAX;
	int16_t x483 = -160;
	static int16_t x484 = INT16_MIN;
	int32_t t109 = 2878;

    t109 = (((x481^x482)+x483)>x484);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = -1;
	volatile int16_t x487 = -1;
	static int32_t x488 = 10478567;
	int32_t t110 = -6;

    t110 = (((x485^x486)+x487)>x488);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x489 = -1;
	int32_t x490 = -5433;
	volatile uint32_t x492 = UINT32_MAX;
	volatile int32_t t111 = 27;

    t111 = (((x489^x490)+x491)>x492);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x497 = 7U;
	int8_t x498 = INT8_MIN;
	static int32_t x499 = -4;
	uint8_t x500 = UINT8_MAX;
	int32_t t112 = 21607;

    t112 = (((x497^x498)+x499)>x500);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x501 = -1;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = UINT32_MAX;
	int32_t t113 = 352682;

    t113 = (((x501^x502)+x503)>x504);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x505 = 13;
	int16_t x506 = INT16_MIN;
	static int64_t x507 = -1LL;
	volatile int32_t t114 = 36;

    t114 = (((x505^x506)+x507)>x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = INT32_MIN;
	volatile uint8_t x512 = 17U;
	volatile int32_t t115 = 3310361;

    t115 = (((x509^x510)+x511)>x512);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = 0U;
	static uint32_t x514 = 1378461U;
	static int32_t x516 = -188619;
	int32_t t116 = 326795;

    t116 = (((x513^x514)+x515)>x516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x518 = INT16_MIN;
	uint8_t x519 = 9U;
	int64_t x520 = 15837LL;
	volatile int32_t t117 = 84876781;

    t117 = (((x517^x518)+x519)>x520);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x522 = 14607;
	int32_t x523 = -5132;
	volatile uint64_t x524 = 6448487LLU;
	static int32_t t118 = 319984;

    t118 = (((x521^x522)+x523)>x524);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x525 = INT8_MIN;
	uint64_t x526 = UINT64_MAX;
	static int16_t x527 = -1;
	int16_t x528 = INT16_MIN;

    t119 = (((x525^x526)+x527)>x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x529 = UINT16_MAX;
	volatile int8_t x530 = INT8_MAX;
	int32_t x532 = INT32_MIN;
	static volatile int32_t t120 = 497;

    t120 = (((x529^x530)+x531)>x532);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	static int8_t x534 = -1;
	static int16_t x535 = INT16_MIN;
	uint32_t x536 = 1502737636U;

    t121 = (((x533^x534)+x535)>x536);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x537 = 0LLU;
	int16_t x538 = -1;
	uint32_t x539 = 906281045U;
	volatile int64_t x540 = -171138377157LL;
	int32_t t122 = 794;

    t122 = (((x537^x538)+x539)>x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x541 = 0;
	static int64_t x543 = INT64_MIN;
	int32_t x544 = -1;

    t123 = (((x541^x542)+x543)>x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x549 = -4126292LL;
	int32_t x550 = INT32_MAX;
	uint64_t x551 = UINT64_MAX;
	int8_t x552 = INT8_MAX;
	int32_t t124 = -215;

    t124 = (((x549^x550)+x551)>x552);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = 101042016062456LLU;
	int32_t x555 = INT32_MIN;
	static int16_t x556 = INT16_MIN;
	static volatile int32_t t125 = -22;

    t125 = (((x553^x554)+x555)>x556);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	uint8_t x564 = 79U;
	int32_t t126 = 679;

    t126 = (((x561^x562)+x563)>x564);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x565 = -14196286;
	static int16_t x566 = -310;
	int64_t x567 = INT64_MIN;
	int32_t x568 = INT32_MIN;
	volatile int32_t t127 = 111701598;

    t127 = (((x565^x566)+x567)>x568);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x569 = 2206U;
	static uint8_t x570 = 8U;
	uint8_t x571 = 6U;
	volatile int32_t t128 = 64695;

    t128 = (((x569^x570)+x571)>x572);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x573 = 3U;
	uint8_t x574 = 1U;
	volatile uint32_t x576 = 123U;
	int32_t t129 = -394940;

    t129 = (((x573^x574)+x575)>x576);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x577 = 2U;
	uint8_t x579 = 14U;
	int64_t x580 = INT64_MAX;
	static volatile int32_t t130 = 3910226;

    t130 = (((x577^x578)+x579)>x580);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t x582 = INT32_MIN;
	int16_t x583 = 8;
	int16_t x584 = -1;
	volatile int32_t t131 = -10430;

    t131 = (((x581^x582)+x583)>x584);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x585 = -1;
	uint16_t x586 = 12U;
	int8_t x587 = INT8_MIN;
	volatile int32_t t132 = 43053428;

    t132 = (((x585^x586)+x587)>x588);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x593 = 1610833LLU;
	int16_t x594 = -15;
	static int32_t x596 = -42051;
	static volatile int32_t t133 = 1;

    t133 = (((x593^x594)+x595)>x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MAX;
	volatile int32_t x603 = INT32_MIN;
	volatile uint32_t x604 = UINT32_MAX;
	volatile int32_t t134 = 2935;

    t134 = (((x601^x602)+x603)>x604);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x605 = -3;
	uint32_t x606 = 20U;
	uint16_t x607 = UINT16_MAX;
	int64_t x608 = INT64_MAX;

    t135 = (((x605^x606)+x607)>x608);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x611 = 35U;
	int32_t t136 = -91436;

    t136 = (((x609^x610)+x611)>x612);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x613 = -45223LL;
	int16_t x614 = -1;
	volatile int64_t x615 = 112748290799LL;
	uint32_t x616 = 852U;

    t137 = (((x613^x614)+x615)>x616);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x617 = -1;
	int32_t x618 = -1;
	static int32_t x619 = INT32_MAX;
	int8_t x620 = INT8_MAX;
	int32_t t138 = -125376;

    t138 = (((x617^x618)+x619)>x620);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x621 = 154785687U;
	static uint64_t x623 = 1607390873321666LLU;
	uint32_t x624 = 4U;

    t139 = (((x621^x622)+x623)>x624);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x629 = INT64_MAX;
	volatile int64_t x631 = -1LL;
	static int32_t t140 = 19107277;

    t140 = (((x629^x630)+x631)>x632);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x633 = INT32_MAX;
	static int8_t x635 = -1;
	uint32_t x636 = 1790U;

    t141 = (((x633^x634)+x635)>x636);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x637 = -2;
	uint32_t x638 = 32439674U;
	int64_t x639 = INT64_MIN;
	int32_t x640 = -1;
	int32_t t142 = 17;

    t142 = (((x637^x638)+x639)>x640);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x641 = INT32_MIN;
	static int32_t x643 = -1;
	int32_t x644 = INT32_MIN;
	volatile int32_t t143 = -11991;

    t143 = (((x641^x642)+x643)>x644);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x645 = -13036;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = 2U;
	static volatile uint32_t x648 = 235365U;

    t144 = (((x645^x646)+x647)>x648);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x649 = 1812702U;
	static uint8_t x650 = 33U;
	static int8_t x651 = 5;
	volatile uint64_t x652 = 0LLU;
	int32_t t145 = 5323615;

    t145 = (((x649^x650)+x651)>x652);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x657 = -1;
	uint64_t x658 = UINT64_MAX;
	int16_t x659 = INT16_MIN;
	static int64_t x660 = INT64_MIN;
	volatile int32_t t146 = -61903;

    t146 = (((x657^x658)+x659)>x660);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x661 = INT32_MAX;
	int64_t x663 = 1592051LL;
	int32_t t147 = 215;

    t147 = (((x661^x662)+x663)>x664);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x665 = -1;
	int8_t x667 = INT8_MIN;
	int16_t x668 = INT16_MAX;

    t148 = (((x665^x666)+x667)>x668);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x670 = -1;
	uint16_t x671 = 29U;
	int16_t x672 = INT16_MIN;
	int32_t t149 = -1;

    t149 = (((x669^x670)+x671)>x672);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x673 = INT8_MIN;
	uint64_t x674 = UINT64_MAX;
	uint16_t x676 = UINT16_MAX;
	static int32_t t150 = 1012304814;

    t150 = (((x673^x674)+x675)>x676);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x681 = -1LL;
	int64_t x682 = -1LL;
	uint64_t x683 = UINT64_MAX;
	int32_t t151 = -60686779;

    t151 = (((x681^x682)+x683)>x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x687 = INT64_MAX;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t152 = -1;

    t152 = (((x685^x686)+x687)>x688);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x689 = -12;
	volatile int8_t x691 = INT8_MIN;
	uint16_t x692 = 6283U;

    t153 = (((x689^x690)+x691)>x692);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x693 = 1U;
	static int32_t x694 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	volatile int32_t t154 = 323;

    t154 = (((x693^x694)+x695)>x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x701 = -1;
	static int8_t x702 = -1;
	uint16_t x703 = UINT16_MAX;
	int32_t x704 = -1;

    t155 = (((x701^x702)+x703)>x704);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x705 = INT8_MIN;
	uint64_t x707 = UINT64_MAX;
	int32_t t156 = 1004691442;

    t156 = (((x705^x706)+x707)>x708);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x709 = 13894731LLU;
	int64_t x710 = 264920347101LL;
	int32_t x711 = INT32_MIN;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t157 = 44911;

    t157 = (((x709^x710)+x711)>x712);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x713 = UINT32_MAX;
	int64_t x714 = 6662LL;
	static int32_t x715 = -1898689;
	uint64_t x716 = UINT64_MAX;
	static int32_t t158 = -252;

    t158 = (((x713^x714)+x715)>x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x717 = INT64_MIN;
	static uint64_t x720 = UINT64_MAX;
	volatile int32_t t159 = 413916;

    t159 = (((x717^x718)+x719)>x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x721 = 308U;
	static volatile uint32_t x722 = 739061U;
	static volatile int8_t x723 = INT8_MIN;
	uint64_t x724 = 1468287458064LLU;
	int32_t t160 = -2686;

    t160 = (((x721^x722)+x723)>x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x725 = UINT8_MAX;
	volatile int32_t t161 = -8373595;

    t161 = (((x725^x726)+x727)>x728);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint64_t x730 = UINT64_MAX;
	int32_t x731 = INT32_MAX;
	int64_t x732 = INT64_MAX;
	int32_t t162 = -6;

    t162 = (((x729^x730)+x731)>x732);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MIN;
	int8_t x735 = INT8_MIN;
	static volatile int32_t t163 = -1;

    t163 = (((x733^x734)+x735)>x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x738 = INT32_MIN;
	uint64_t x739 = 35763174LLU;
	int8_t x740 = INT8_MIN;

    t164 = (((x737^x738)+x739)>x740);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x741 = 500910815659LL;
	int16_t x742 = 240;
	int64_t x743 = INT64_MIN;

    t165 = (((x741^x742)+x743)>x744);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x745 = -3929;
	int64_t x747 = -1LL;
	int32_t x748 = INT32_MAX;
	int32_t t166 = -146;

    t166 = (((x745^x746)+x747)>x748);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x749 = INT32_MIN;
	volatile int64_t x750 = INT64_MAX;
	int8_t x751 = -1;
	uint64_t x752 = 188559417LLU;
	int32_t t167 = -12762;

    t167 = (((x749^x750)+x751)>x752);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x753 = 11898130311LL;
	volatile int8_t x755 = -1;
	volatile int8_t x756 = 8;
	int32_t t168 = 267303;

    t168 = (((x753^x754)+x755)>x756);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = INT8_MIN;
	uint32_t x758 = 915746050U;
	static int32_t x760 = 122;
	int32_t t169 = -419;

    t169 = (((x757^x758)+x759)>x760);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x765 = -15572;
	int64_t x766 = 6179LL;
	int64_t x767 = -1LL;
	uint16_t x768 = 8262U;
	volatile int32_t t170 = -1;

    t170 = (((x765^x766)+x767)>x768);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x770 = -399630;
	int64_t x771 = 260LL;
	volatile int64_t x772 = 30969LL;
	volatile int32_t t171 = 43;

    t171 = (((x769^x770)+x771)>x772);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x774 = INT64_MIN;
	int32_t x775 = 817;
	int8_t x776 = INT8_MIN;
	volatile int32_t t172 = 2;

    t172 = (((x773^x774)+x775)>x776);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x777 = -1;
	uint64_t x779 = 923772484LLU;
	uint64_t x780 = 633LLU;

    t173 = (((x777^x778)+x779)>x780);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x781 = -48671551;
	uint8_t x782 = UINT8_MAX;
	static uint16_t x784 = 19U;
	static int32_t t174 = 41784;

    t174 = (((x781^x782)+x783)>x784);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x785 = 245153LLU;
	volatile int8_t x786 = INT8_MIN;
	volatile int64_t x788 = INT64_MIN;
	int32_t t175 = 1;

    t175 = (((x785^x786)+x787)>x788);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x791 = -1;
	int32_t x792 = INT32_MIN;

    t176 = (((x789^x790)+x791)>x792);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x795 = UINT8_MAX;
	static uint8_t x796 = 6U;

    t177 = (((x793^x794)+x795)>x796);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x799 = INT16_MIN;
	static int64_t x800 = -1LL;
	volatile int32_t t178 = 3;

    t178 = (((x797^x798)+x799)>x800);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = INT64_MIN;
	static int32_t x802 = INT32_MIN;
	static uint8_t x804 = 46U;
	static int32_t t179 = -4074906;

    t179 = (((x801^x802)+x803)>x804);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x805 = 1727U;
	int16_t x806 = INT16_MAX;
	volatile uint32_t x807 = UINT32_MAX;
	static volatile int32_t x808 = -60;
	volatile int32_t t180 = -119661;

    t180 = (((x805^x806)+x807)>x808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x811 = INT8_MAX;
	static volatile uint64_t x812 = 12LLU;
	int32_t t181 = 2440998;

    t181 = (((x809^x810)+x811)>x812);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x813 = 1;
	static volatile int64_t x814 = -1LL;
	uint64_t x815 = UINT64_MAX;
	static uint8_t x816 = UINT8_MAX;

    t182 = (((x813^x814)+x815)>x816);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x817 = -217LL;
	int64_t x818 = -1LL;
	volatile uint32_t x819 = 261081755U;
	volatile int16_t x820 = INT16_MIN;

    t183 = (((x817^x818)+x819)>x820);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x821 = -1;
	uint16_t x822 = UINT16_MAX;
	static uint32_t x824 = 522U;
	volatile int32_t t184 = 549;

    t184 = (((x821^x822)+x823)>x824);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x825 = INT8_MIN;
	static int8_t x826 = INT8_MIN;
	uint32_t x827 = 0U;
	uint64_t x828 = UINT64_MAX;
	int32_t t185 = 929508145;

    t185 = (((x825^x826)+x827)>x828);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x829 = 24U;
	int32_t x830 = INT32_MIN;
	volatile int32_t t186 = -4191;

    t186 = (((x829^x830)+x831)>x832);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	static volatile int8_t x834 = INT8_MIN;
	uint8_t x835 = UINT8_MAX;
	int32_t x836 = -346947;
	volatile int32_t t187 = 126;

    t187 = (((x833^x834)+x835)>x836);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x837 = INT16_MAX;
	volatile int16_t x838 = INT16_MIN;
	uint64_t x839 = UINT64_MAX;
	static int32_t x840 = INT32_MIN;

    t188 = (((x837^x838)+x839)>x840);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x849 = INT64_MAX;
	int64_t x850 = -1LL;
	int64_t x851 = INT64_MAX;
	int8_t x852 = 1;
	int32_t t189 = -64900707;

    t189 = (((x849^x850)+x851)>x852);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x853 = -1LL;
	int16_t x854 = -5;
	volatile int32_t t190 = -110858774;

    t190 = (((x853^x854)+x855)>x856);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x857 = 7U;
	volatile uint32_t x858 = UINT32_MAX;
	int32_t x860 = INT32_MIN;

    t191 = (((x857^x858)+x859)>x860);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x862 = INT32_MAX;
	uint16_t x863 = 62U;
	volatile int32_t t192 = -179924;

    t192 = (((x861^x862)+x863)>x864);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x865 = 1377U;
	int16_t x867 = -15638;
	int32_t x868 = -997468;
	int32_t t193 = 8133353;

    t193 = (((x865^x866)+x867)>x868);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x869 = -1;
	int64_t x870 = INT64_MIN;
	uint64_t x871 = 1002722LLU;
	int32_t x872 = -3477;
	static int32_t t194 = 281984;

    t194 = (((x869^x870)+x871)>x872);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x873 = -52;
	int16_t x874 = 1;
	int16_t x875 = -1;
	volatile int32_t x876 = -28847;
	int32_t t195 = 0;

    t195 = (((x873^x874)+x875)>x876);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x877 = INT64_MAX;
	uint64_t x879 = UINT64_MAX;
	int16_t x880 = INT16_MIN;
	int32_t t196 = -21622;

    t196 = (((x877^x878)+x879)>x880);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x882 = INT64_MAX;
	int64_t x884 = INT64_MAX;
	int32_t t197 = 431240821;

    t197 = (((x881^x882)+x883)>x884);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x885 = UINT32_MAX;
	static int8_t x886 = INT8_MAX;
	static volatile uint32_t x887 = 65962209U;
	uint16_t x888 = UINT16_MAX;

    t198 = (((x885^x886)+x887)>x888);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x889 = 11U;
	uint16_t x892 = UINT16_MAX;
	volatile int32_t t199 = -14143423;

    t199 = (((x889^x890)+x891)>x892);

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

