
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

static int64_t x2 = -77LL;
static volatile int8_t x5 = INT8_MIN;
int16_t x6 = INT16_MAX;
volatile int8_t x7 = INT8_MAX;
static uint16_t x14 = 33U;
static int32_t x17 = 2990;
uint64_t x18 = 418707207735LLU;
static int32_t x48 = -1;
static volatile int32_t t12 = 5;
int8_t x53 = INT8_MIN;
int64_t x60 = -1LL;
int64_t x61 = -2092391398024LL;
static int16_t x65 = -15;
int8_t x71 = -40;
static uint64_t x74 = 44025724LLU;
uint32_t x76 = 43777953U;
volatile int16_t x80 = INT16_MAX;
int64_t x92 = INT64_MAX;
uint8_t x93 = 23U;
uint16_t x99 = 41U;
int8_t x104 = 14;
static volatile int16_t x105 = -1;
int32_t x106 = INT32_MIN;
volatile uint64_t x112 = UINT64_MAX;
int64_t x119 = -168524762938770LL;
int16_t x130 = -1;
volatile uint8_t x133 = UINT8_MAX;
uint32_t x139 = 1674U;
int32_t x155 = INT32_MIN;
static int32_t x156 = INT32_MIN;
int64_t x159 = -1LL;
int32_t t39 = 60;
uint64_t x169 = 919514618LLU;
static int32_t x176 = INT32_MIN;
volatile int64_t x181 = INT64_MAX;
uint64_t x189 = 780785836455LLU;
uint32_t x194 = UINT32_MAX;
int8_t x197 = -29;
uint8_t x198 = UINT8_MAX;
int64_t x208 = -1LL;
volatile int64_t t49 = 79517654LL;
int8_t x210 = INT8_MIN;
volatile uint64_t t50 = 67267849190075921LLU;
static uint32_t x215 = 65504294U;
uint8_t x236 = 6U;
volatile int32_t t56 = 7782;
uint64_t x237 = 1LLU;
uint16_t x250 = 1017U;
int32_t x258 = INT32_MIN;
static uint8_t x259 = 123U;
uint64_t t62 = 444018770601LLU;
static int64_t t63 = -2024429367250963641LL;
int16_t x268 = INT16_MIN;
volatile int64_t x269 = INT64_MIN;
int32_t x270 = -1;
int8_t x274 = -1;
static int8_t x276 = -1;
volatile int32_t t66 = 62;
int32_t x282 = INT32_MIN;
volatile int64_t x283 = -1LL;
static uint32_t x291 = 28366U;
int64_t t69 = 1388LL;
uint64_t x300 = UINT64_MAX;
uint16_t x305 = 825U;
static int32_t x309 = 801061650;
int64_t x313 = INT64_MAX;
static int32_t x318 = -260252528;
int32_t x321 = INT32_MIN;
int64_t x323 = INT64_MAX;
int64_t x324 = 730082LL;
static int64_t t76 = 3396082833LL;
static uint16_t x325 = 14U;
int32_t x334 = -1;
int64_t x336 = -200668206906046LL;
static int8_t x340 = -10;
uint64_t x342 = 99524LLU;
static volatile uint32_t t81 = 2252062U;
int8_t x350 = 5;
static volatile int32_t x364 = 13435893;
static uint16_t x366 = 5502U;
static int32_t x367 = INT32_MIN;
volatile int8_t x370 = INT8_MIN;
volatile int64_t x392 = -1LL;
volatile uint8_t x398 = UINT8_MAX;
static uint32_t x407 = UINT32_MAX;
uint8_t x408 = UINT8_MAX;
uint64_t x409 = 3336388272079LLU;
volatile uint64_t t98 = 1LLU;
static int64_t x413 = -1LL;
volatile int64_t t99 = 14619407LL;
volatile int64_t x419 = 42443184741458225LL;
volatile uint64_t t100 = 1792789578169830614LLU;
uint64_t x425 = 1117187379936802LLU;
uint64_t t102 = 84174LLU;
uint32_t x430 = UINT32_MAX;
int32_t x431 = -1;
int16_t x437 = INT16_MIN;
volatile int32_t t104 = 445398;
int32_t x444 = -86910;
int32_t t106 = -7274598;
uint32_t x451 = 4U;
uint16_t x457 = 57U;
uint64_t x459 = UINT64_MAX;
static int32_t x464 = INT32_MAX;
int8_t x477 = 1;
int8_t x478 = 27;
volatile uint16_t x483 = 401U;
int32_t x485 = 2;
volatile int16_t x487 = INT16_MIN;
volatile int32_t t115 = 154;
int32_t t117 = -12709976;
uint8_t x497 = UINT8_MAX;
int64_t t118 = 15LL;
static int16_t x502 = 192;
static uint8_t x504 = UINT8_MAX;
uint32_t t119 = 491397721U;
uint8_t x524 = UINT8_MAX;
volatile int8_t x532 = -37;
volatile int32_t x533 = -20152;
uint64_t t127 = 66423746LLU;
int64_t x542 = -16232706829LL;
volatile int8_t x546 = INT8_MAX;
volatile int64_t t129 = 3214581264621917487LL;
int8_t x554 = INT8_MAX;
uint64_t x555 = UINT64_MAX;
int32_t x579 = -283761;
int16_t x581 = -1;
static uint8_t x586 = 1U;
int64_t x588 = INT64_MAX;
uint8_t x592 = UINT8_MAX;
static uint64_t t140 = 8574213214670LLU;
volatile int32_t t147 = 1933698;
volatile int8_t x623 = INT8_MIN;
uint64_t x637 = UINT64_MAX;
uint64_t t152 = 328993825LLU;
int16_t x646 = INT16_MAX;
volatile int8_t x647 = INT8_MIN;
int64_t x649 = INT64_MAX;
int32_t x652 = 30272;
int32_t x662 = 225543;
int32_t x664 = -444;
int32_t x667 = 400;
int32_t t158 = 0;
int8_t x670 = INT8_MIN;
uint64_t t159 = 2331271476149470608LLU;
uint32_t x675 = UINT32_MAX;
int64_t x682 = INT64_MIN;
uint16_t x692 = 3626U;
int64_t x700 = -498013LL;
uint64_t x704 = UINT64_MAX;
volatile uint64_t t167 = 1600514050351360580LLU;
int64_t x706 = 170936810645706LL;
volatile int8_t x710 = -3;
static uint16_t x712 = UINT16_MAX;
uint32_t x713 = 356U;
int32_t x714 = 4;
int64_t t170 = 131834060600LL;
static int32_t x719 = -706;
int8_t x725 = INT8_MAX;
int32_t x733 = INT32_MIN;
static uint16_t x734 = 25555U;
static volatile uint8_t x737 = UINT8_MAX;
uint8_t x738 = 41U;
volatile uint16_t x740 = UINT16_MAX;
uint32_t x746 = UINT32_MAX;
static uint32_t x749 = 2664375U;
int16_t x752 = -1;
static int16_t x753 = INT16_MAX;
uint64_t x754 = 981LLU;
static uint64_t x755 = UINT64_MAX;
uint32_t t183 = 21659917U;
volatile int32_t x771 = INT32_MIN;
volatile int8_t x772 = 30;
int64_t x778 = -1LL;
volatile int32_t t186 = -1302480;
int64_t x781 = 240851LL;
int16_t x787 = 223;
int8_t x788 = -1;
int32_t x789 = 222477;
static int16_t x790 = INT16_MIN;
int32_t x791 = INT32_MIN;
int32_t t190 = 310909;
int16_t x797 = INT16_MAX;
volatile int32_t t191 = 152100;
int64_t t192 = -258760096989LL;
uint8_t x805 = UINT8_MAX;
static uint32_t x806 = UINT32_MAX;
static volatile uint32_t x810 = 67351046U;
volatile int32_t t194 = 7349353;
int32_t t195 = -28532672;
uint8_t x820 = UINT8_MAX;
volatile int16_t x829 = INT16_MAX;
int64_t x832 = -1074656600058LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int32_t x3 = -45405846;
	int32_t x4 = -1;
	volatile int32_t t0 = 323;

    t0 = ((x1^(x2>x3))/x4);

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x8 = INT16_MIN;
	int32_t t1 = 1563426;

    t1 = ((x5^(x6>x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile int64_t x10 = -3089627LL;
	volatile int64_t x11 = 297633672414312403LL;
	int8_t x12 = -47;
	int32_t t2 = -498011;

    t2 = ((x9^(x10>x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 252102332;

    t3 = ((x13^(x14>x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x19 = INT8_MAX;
	uint8_t x20 = 11U;
	static int32_t t4 = 57110675;

    t4 = ((x17^(x18>x19))/x20);

    if (t4 != 271) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 232380LL;
	volatile int32_t x22 = INT32_MAX;
	volatile int64_t x23 = -32858750153LL;
	volatile int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 3891294156682758LL;

    t5 = ((x21^(x22>x23))/x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 6U;
	static volatile int16_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 978135LL;

    t6 = ((x25^(x26>x27))/x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	int16_t x32 = 486;
	int32_t t7 = -11486573;

    t7 = ((x29^(x30>x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -3293669;
	int64_t x34 = 8586091889969957LL;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -11;

    t8 = ((x33^(x34>x35))/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 0;
	int64_t x38 = 202620326920LL;
	volatile int64_t x39 = 6182815351LL;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 118031571LL;

    t9 = ((x37^(x38>x39))/x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -3152749474323736240LL;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;
	volatile int64_t t10 = -150361280751810122LL;

    t10 = ((x41^(x42>x43))/x44);

    if (t10 != 3152749474323736240LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	int32_t x46 = 14047;
	volatile int8_t x47 = -1;
	int32_t t11 = 42;

    t11 = ((x45^(x46>x47))/x48);

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	static uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;

    t12 = ((x49^(x50>x51))/x52);

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -1LL;
	static uint8_t x55 = UINT8_MAX;
	volatile int64_t x56 = 4581911068LL;
	volatile int64_t t13 = -528LL;

    t13 = ((x53^(x54>x55))/x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MIN;
	int16_t x59 = 0;
	int64_t t14 = 472546536LL;

    t14 = ((x57^(x58>x59))/x60);

    if (t14 != 32768LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = -764227323710LL;
	uint64_t x63 = 46LLU;
	uint8_t x64 = 15U;
	volatile int64_t t15 = -2LL;

    t15 = ((x61^(x62>x63))/x64);

    if (t15 != -139492759868LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 113955747056132LLU;
	uint16_t x67 = UINT16_MAX;
	uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 15297341974LLU;

    t16 = ((x65^(x66>x67))/x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 0U;
	int64_t x70 = INT64_MIN;
	int8_t x72 = -1;
	int32_t t17 = -37858367;

    t17 = ((x69^(x70>x71))/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = -43;
	uint32_t x75 = 46U;
	uint32_t t18 = 42222985U;

    t18 = ((x73^(x74>x75))/x76);

    if (t18 != 98U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 3LL;
	int64_t x78 = -53311721267LL;
	int64_t x79 = 1325LL;
	volatile int64_t t19 = -13032207088807288LL;

    t19 = ((x77^(x78>x79))/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint32_t x82 = 76809826U;
	int16_t x83 = 4246;
	int8_t x84 = 4;
	int32_t t20 = 0;

    t20 = ((x81^(x82>x83))/x84);

    if (t20 != 536870911) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1LL;
	static volatile int16_t x90 = 3;
	uint32_t x91 = 10U;
	volatile int64_t t21 = -61963369282LL;

    t21 = ((x89^(x90>x91))/x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = INT64_MAX;
	uint16_t x95 = 9U;
	int8_t x96 = -1;
	static int32_t t22 = -92967118;

    t22 = ((x93^(x94>x95))/x96);

    if (t22 != -22) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	static int8_t x100 = INT8_MAX;
	static volatile int32_t t23 = -2761;

    t23 = ((x97^(x98>x99))/x100);

    if (t23 != 516) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int64_t x103 = 885251965514507491LL;
	static volatile int32_t t24 = 84935130;

    t24 = ((x101^(x102>x103))/x104);

    if (t24 != -153391689) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x107 = INT64_MIN;
	static uint64_t x108 = UINT64_MAX;
	static uint64_t t25 = 132213LLU;

    t25 = ((x105^(x106>x107))/x108);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = INT8_MAX;
	int8_t x110 = -1;
	int64_t x111 = -1LL;
	volatile uint64_t t26 = 44337135558LLU;

    t26 = ((x109^(x110>x111))/x112);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 619U;
	int8_t x114 = INT8_MAX;
	uint32_t x115 = UINT32_MAX;
	volatile int64_t x116 = -85LL;
	int64_t t27 = 317LL;

    t27 = ((x113^(x114>x115))/x116);

    if (t27 != -7LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x118 = -617820;
	uint16_t x120 = UINT16_MAX;
	int32_t t28 = -57977722;

    t28 = ((x117^(x118>x119))/x120);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x125 = 1599861;
	uint8_t x126 = UINT8_MAX;
	volatile int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MIN;
	int64_t t29 = -5531258854732764LL;

    t29 = ((x125^(x126>x127))/x128);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x129 = 61U;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 8U;
	static volatile uint32_t t30 = 40U;

    t30 = ((x129^(x130>x131))/x132);

    if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x134 = 24U;
	static uint32_t x135 = 1496851885U;
	uint8_t x136 = 1U;
	volatile int32_t t31 = -843185;

    t31 = ((x133^(x134>x135))/x136);

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = 0;
	volatile int8_t x138 = 60;
	uint8_t x140 = UINT8_MAX;
	int32_t t32 = 5;

    t32 = ((x137^(x138>x139))/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = 82033LLU;
	int16_t x142 = INT16_MIN;
	int32_t x143 = 3094026;
	int64_t x144 = -1LL;
	volatile uint64_t t33 = 2225956475050759017LLU;

    t33 = ((x141^(x142>x143))/x144);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x145 = -1LL;
	uint64_t x146 = 13030046798LLU;
	int8_t x147 = INT8_MIN;
	uint64_t x148 = 2227331505770089LLU;
	uint64_t t34 = 55133034278683009LLU;

    t34 = ((x145^(x146>x147))/x148);

    if (t34 != 8281LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = 6;
	static int64_t x150 = INT64_MAX;
	static int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;
	uint64_t t35 = 11716603829816155LLU;

    t35 = ((x149^(x150>x151))/x152);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int32_t t36 = 149266039;

    t36 = ((x153^(x154>x155))/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MIN;
	uint64_t x158 = 4186909914182575669LLU;
	int64_t x160 = INT64_MIN;
	volatile int64_t t37 = -7LL;

    t37 = ((x157^(x158>x159))/x160);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 145632U;
	int16_t x163 = -891;
	static volatile int64_t x164 = 31253159830LL;
	static int64_t t38 = -27306155654LL;

    t38 = ((x161^(x162>x163))/x164);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = 36287907;
	static int8_t x166 = 0;
	int16_t x167 = INT16_MIN;
	static int8_t x168 = INT8_MIN;

    t39 = ((x165^(x166>x167))/x168);

    if (t39 != -283499) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x170 = 242267011927603LLU;
	volatile uint8_t x171 = 6U;
	uint32_t x172 = 150867U;
	uint64_t t40 = 8179LLU;

    t40 = ((x169^(x170>x171))/x172);

    if (t40 != 6094LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MAX;
	static uint8_t x175 = 32U;
	static volatile int32_t t41 = 6448;

    t41 = ((x173^(x174>x175))/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 20627893;
	int32_t t42 = -253424042;

    t42 = ((x177^(x178>x179))/x180);

    if (t42 != -104) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x182 = UINT32_MAX;
	uint8_t x183 = 7U;
	volatile int16_t x184 = 439;
	int64_t t43 = -7671726569LL;

    t43 = ((x181^(x182>x183))/x184);

    if (t43 != 21009959081673748LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -1;
	volatile int16_t x186 = INT16_MIN;
	uint16_t x187 = 2U;
	uint16_t x188 = 6U;
	volatile int32_t t44 = -88450247;

    t44 = ((x185^(x186>x187))/x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x190 = UINT8_MAX;
	static volatile uint32_t x191 = UINT32_MAX;
	volatile int16_t x192 = INT16_MAX;
	volatile uint64_t t45 = 3LLU;

    t45 = ((x189^(x190>x191))/x192);

    if (t45 != 23828419LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = -12;
	static int8_t x195 = 10;
	uint64_t x196 = 99086749298712973LLU;
	uint64_t t46 = 22697131575015LLU;

    t46 = ((x193^(x194>x195))/x196);

    if (t46 != 186LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x199 = INT16_MIN;
	volatile int16_t x200 = -1;
	int32_t t47 = 104446;

    t47 = ((x197^(x198>x199))/x200);

    if (t47 != 30) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x201 = -1;
	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 16U;
	int32_t t48 = -44;

    t48 = ((x201^(x202>x203))/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MAX;
	uint8_t x206 = 20U;
	uint8_t x207 = UINT8_MAX;

    t49 = ((x205^(x206>x207))/x208);

    if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x209 = 247014636975LL;
	int8_t x211 = INT8_MAX;
	volatile uint64_t x212 = 2018002627948LLU;

    t50 = ((x209^(x210>x211))/x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x213 = 3684872232004LLU;
	static int8_t x214 = 1;
	volatile int32_t x216 = INT32_MIN;
	uint64_t t51 = 325609248LLU;

    t51 = ((x213^(x214>x215))/x216);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x217 = 0U;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	static uint32_t x220 = 146U;
	volatile uint32_t t52 = 1278U;

    t52 = ((x217^(x218>x219))/x220);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x221 = -1LL;
	int64_t x222 = -123925252735334LL;
	uint32_t x223 = 57351U;
	int64_t x224 = -1LL;
	volatile int64_t t53 = 26803086378LL;

    t53 = ((x221^(x222>x223))/x224);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MIN;
	int16_t x226 = 14928;
	static int32_t x227 = -62;
	uint8_t x228 = 3U;
	volatile int32_t t54 = 0;

    t54 = ((x225^(x226>x227))/x228);

    if (t54 != -42) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = 132632959LL;
	volatile uint32_t x230 = 3761440U;
	int8_t x231 = INT8_MIN;
	int16_t x232 = 2;
	volatile int64_t t55 = 264LL;

    t55 = ((x229^(x230>x231))/x232);

    if (t55 != 66316479LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -1;
	int8_t x234 = 11;
	static volatile int16_t x235 = INT16_MIN;

    t56 = ((x233^(x234>x235))/x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x238 = INT64_MAX;
	int8_t x239 = 1;
	int16_t x240 = -1;
	volatile uint64_t t57 = 4831LLU;

    t57 = ((x237^(x238>x239))/x240);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MIN;
	volatile int64_t x242 = INT64_MAX;
	int64_t x243 = INT64_MAX;
	int8_t x244 = -1;
	int32_t t58 = 8694942;

    t58 = ((x241^(x242>x243))/x244);

    if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = UINT32_MAX;
	static volatile int8_t x246 = INT8_MIN;
	static int8_t x247 = INT8_MIN;
	int32_t x248 = -1;
	volatile uint32_t t59 = 1917U;

    t59 = ((x245^(x246>x247))/x248);

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	volatile uint16_t x251 = 2418U;
	uint64_t x252 = 310LLU;
	static volatile uint64_t t60 = 64069903496736115LLU;

    t60 = ((x249^(x250>x251))/x252);

    if (t60 != 29752813022112180LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MAX;
	int64_t t61 = -4LL;

    t61 = ((x253^(x254>x255))/x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 8675845609LLU;
	static uint32_t x260 = 232152U;

    t62 = ((x257^(x258>x259))/x260);

    if (t62 != 37371LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = -15LL;
	volatile int32_t x262 = -1;
	uint32_t x263 = 352033U;
	uint8_t x264 = 18U;

    t63 = ((x261^(x262>x263))/x264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x265 = INT8_MIN;
	static int16_t x266 = INT16_MIN;
	uint32_t x267 = 371U;
	static volatile int32_t t64 = -180839;

    t64 = ((x265^(x266>x267))/x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x271 = -9818;
	int32_t x272 = INT32_MIN;
	int64_t t65 = -182716269237LL;

    t65 = ((x269^(x270>x271))/x272);

    if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = 19U;
	int8_t x275 = 14;

    t66 = ((x273^(x274>x275))/x276);

    if (t66 != -19) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x277 = 156U;
	uint16_t x278 = UINT16_MAX;
	static uint16_t x279 = 2003U;
	int32_t x280 = INT32_MAX;
	static volatile uint32_t t67 = 5463083U;

    t67 = ((x277^(x278>x279))/x280);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x281 = -10052;
	static volatile int16_t x284 = 1;
	int32_t t68 = -13153;

    t68 = ((x281^(x282>x283))/x284);

    if (t68 != -10052) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x289 = INT64_MAX;
	int8_t x290 = 5;
	static int16_t x292 = 7642;

    t69 = ((x289^(x290>x291))/x292);

    if (t69 != 1206931698096673LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = -8;
	static int64_t x294 = -1LL;
	uint8_t x295 = 25U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 15126692;

    t70 = ((x293^(x294>x295))/x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 16333803U;
	int64_t x298 = -119083746052468LL;
	int16_t x299 = INT16_MAX;
	volatile uint64_t t71 = 7638LLU;

    t71 = ((x297^(x298>x299))/x300);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x306 = 62;
	int32_t x307 = -264394;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t72 = -1;

    t72 = ((x305^(x306>x307))/x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x310 = -1LL;
	int8_t x311 = -1;
	uint32_t x312 = 354748084U;
	volatile uint32_t t73 = 0U;

    t73 = ((x309^(x310>x311))/x312);

    if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x314 = 263968U;
	int32_t x315 = INT32_MIN;
	static int16_t x316 = 47;
	static int64_t t74 = 150043908928935LL;

    t74 = ((x313^(x314>x315))/x316);

    if (t74 != 196241958230952676LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = -1LL;
	int8_t x319 = 49;
	uint8_t x320 = 37U;
	int64_t t75 = 56LL;

    t75 = ((x317^(x318>x319))/x320);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x322 = UINT8_MAX;

    t76 = ((x321^(x322>x323))/x324);

    if (t76 != -2941LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x326 = -1;
	volatile uint32_t x327 = 2330U;
	static volatile int64_t x328 = 16421278862LL;
	static int64_t t77 = -1007851085455404024LL;

    t77 = ((x325^(x326>x327))/x328);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x329 = -6;
	int16_t x330 = 1132;
	int8_t x331 = INT8_MAX;
	int64_t x332 = 1490322479142633LL;
	int64_t t78 = -1LL;

    t78 = ((x329^(x330>x331))/x332);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = -1;
	uint16_t x335 = 22U;
	volatile int64_t t79 = 3635LL;

    t79 = ((x333^(x334>x335))/x336);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = -1LL;
	volatile int32_t t80 = -1012181;

    t80 = ((x337^(x338>x339))/x340);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = -1;
	int16_t x343 = INT16_MAX;
	uint32_t x344 = 33739920U;

    t81 = ((x341^(x342>x343))/x344);

    if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x345 = UINT8_MAX;
	volatile int8_t x346 = 1;
	uint8_t x347 = 1U;
	uint32_t x348 = 31795592U;
	uint32_t t82 = 74529U;

    t82 = ((x345^(x346>x347))/x348);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = INT8_MAX;
	volatile int16_t x351 = -1;
	static uint8_t x352 = 28U;
	volatile int32_t t83 = 12763;

    t83 = ((x349^(x350>x351))/x352);

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x353 = -3758242LL;
	int8_t x354 = 1;
	int8_t x355 = -1;
	int32_t x356 = INT32_MIN;
	static int64_t t84 = -7924142815972LL;

    t84 = ((x353^(x354>x355))/x356);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = 10;
	int8_t x360 = INT8_MIN;
	int32_t t85 = 30332;

    t85 = ((x357^(x358>x359))/x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x361 = -1;
	static volatile int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	int32_t t86 = -2455538;

    t86 = ((x361^(x362>x363))/x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x365 = INT32_MIN;
	int16_t x368 = -40;
	static volatile int32_t t87 = 644;

    t87 = ((x365^(x366>x367))/x368);

    if (t87 != 53687091) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MAX;
	static volatile uint16_t x372 = 19167U;
	int64_t t88 = -6895884783LL;

    t88 = ((x369^(x370>x371))/x372);

    if (t88 != 481211041730827LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	volatile int32_t x376 = -6284;
	int32_t t89 = 199398;

    t89 = ((x373^(x374>x375))/x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = 169;
	uint16_t x378 = 386U;
	uint64_t x379 = 1375LLU;
	volatile int16_t x380 = -1;
	int32_t t90 = -11;

    t90 = ((x377^(x378>x379))/x380);

    if (t90 != -169) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	static int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MAX;
	volatile int32_t t91 = -95433223;

    t91 = ((x381^(x382>x383))/x384);

    if (t91 != -16909320) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x385 = INT64_MIN;
	volatile int32_t x386 = -710936751;
	volatile int64_t x387 = 25027657LL;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t92 = -172LL;

    t92 = ((x385^(x386>x387))/x388);

    if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x389 = -1LL;
	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	static int64_t t93 = 1060LL;

    t93 = ((x389^(x390>x391))/x392);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 7102683U;
	static int16_t x396 = -1;
	volatile int32_t t94 = -152510123;

    t94 = ((x393^(x394>x395))/x396);

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x397 = INT64_MIN;
	volatile int32_t x399 = -2471982;
	int64_t x400 = 72216LL;
	int64_t t95 = -32039343LL;

    t95 = ((x397^(x398>x399))/x400);

    if (t95 != -127719231705643LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = INT32_MIN;
	uint8_t x402 = UINT8_MAX;
	uint8_t x403 = 63U;
	static int64_t x404 = -1LL;
	volatile int64_t t96 = -2235145LL;

    t96 = ((x401^(x402>x403))/x404);

    if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 693564210U;
	int32_t t97 = 502417;

    t97 = ((x405^(x406>x407))/x408);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x410 = INT32_MAX;
	static int16_t x411 = 1990;
	static volatile int8_t x412 = INT8_MIN;

    t98 = ((x409^(x410>x411))/x412);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x414 = INT16_MIN;
	static int64_t x415 = 279208704290LL;
	int64_t x416 = -19652713LL;

    t99 = ((x413^(x414>x415))/x416);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = -6;
	int32_t x418 = INT32_MIN;
	uint64_t x420 = 99114826254LLU;

    t100 = ((x417^(x418>x419))/x420);

    if (t100 != 186114880LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = INT32_MIN;
	volatile int8_t x422 = INT8_MIN;
	static int16_t x423 = INT16_MIN;
	int64_t x424 = -4282290548LL;
	volatile int64_t t101 = 161823233LL;

    t101 = ((x421^(x422>x423))/x424);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = 45669302936282912LLU;

    t102 = ((x425^(x426>x427))/x428);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x429 = 3U;
	int8_t x432 = -35;
	volatile int32_t t103 = -2;

    t103 = ((x429^(x430>x431))/x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x438 = 54538LLU;
	static uint16_t x439 = 20U;
	int32_t x440 = INT32_MAX;

    t104 = ((x437^(x438>x439))/x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = 10U;
	static int8_t x442 = INT8_MIN;
	uint8_t x443 = 3U;
	int32_t t105 = -175923;

    t105 = ((x441^(x442>x443))/x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = 97;
	static int64_t x446 = INT64_MIN;
	int8_t x447 = -1;
	int32_t x448 = 497;

    t106 = ((x445^(x446>x447))/x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = 1LL;
	int16_t x450 = 124;
	static uint8_t x452 = 57U;
	volatile int64_t t107 = -46949666LL;

    t107 = ((x449^(x450>x451))/x452);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = 457758334205471LL;
	volatile int32_t x454 = INT32_MAX;
	uint16_t x455 = 1U;
	int8_t x456 = -52;
	volatile int64_t t108 = 5872LL;

    t108 = ((x453^(x454>x455))/x456);

    if (t108 != -8803044888566LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x458 = INT16_MIN;
	int8_t x460 = -24;
	int32_t t109 = -1700055;

    t109 = ((x457^(x458>x459))/x460);

    if (t109 != -2) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x461 = -118;
	static uint64_t x462 = UINT64_MAX;
	volatile int8_t x463 = INT8_MIN;
	volatile int32_t t110 = -74;

    t110 = ((x461^(x462>x463))/x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = 70794584570548031LLU;
	int32_t x466 = 6;
	int64_t x467 = INT64_MAX;
	volatile int8_t x468 = INT8_MIN;
	uint64_t t111 = 175852053023LLU;

    t111 = ((x465^(x466>x467))/x468);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x469 = 1U;
	int64_t x470 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MAX;
	int32_t t112 = -117485;

    t112 = ((x469^(x470>x471))/x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x479 = INT64_MIN;
	static volatile int64_t x480 = 274827LL;
	int64_t t113 = -589952157LL;

    t113 = ((x477^(x478>x479))/x480);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = 141672488219254LL;
	uint16_t x484 = UINT16_MAX;
	int64_t t114 = -314735099685LL;

    t114 = ((x481^(x482>x483))/x484);

    if (t114 != -140739635871744LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x486 = 10;
	int32_t x488 = INT32_MIN;

    t115 = ((x485^(x486>x487))/x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x489 = INT64_MIN;
	static uint64_t x490 = UINT64_MAX;
	uint16_t x491 = 122U;
	volatile uint8_t x492 = UINT8_MAX;
	int64_t t116 = -75994740557800942LL;

    t116 = ((x489^(x490>x491))/x492);

    if (t116 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x493 = UINT8_MAX;
	volatile int64_t x494 = 3596143LL;
	static int16_t x495 = INT16_MAX;
	int32_t x496 = INT32_MIN;

    t117 = ((x493^(x494>x495))/x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MIN;
	int64_t x500 = 837149797364926200LL;

    t118 = ((x497^(x498>x499))/x500);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x501 = 188U;
	uint64_t x503 = UINT64_MAX;

    t119 = ((x501^(x502>x503))/x504);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x505 = 23LL;
	int8_t x506 = -1;
	int8_t x507 = INT8_MAX;
	int64_t x508 = 609LL;
	volatile int64_t t120 = 2800207646487955LL;

    t120 = ((x505^(x506>x507))/x508);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x509 = INT16_MAX;
	int16_t x510 = INT16_MIN;
	int64_t x511 = 3286057270LL;
	uint16_t x512 = UINT16_MAX;
	int32_t t121 = 20;

    t121 = ((x509^(x510>x511))/x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = 5LL;
	int8_t x514 = INT8_MAX;
	int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MAX;
	int64_t t122 = -14LL;

    t122 = ((x513^(x514>x515))/x516);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x521 = INT8_MAX;
	static int64_t x522 = 3489LL;
	volatile uint8_t x523 = UINT8_MAX;
	int32_t t123 = 670869;

    t123 = ((x521^(x522>x523))/x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x525 = 1159U;
	volatile uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 1096275728447976034LLU;
	int32_t x528 = 1170;
	volatile uint32_t t124 = 3622U;

    t124 = ((x525^(x526>x527))/x528);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x529 = -98;
	static int8_t x530 = 28;
	int64_t x531 = INT64_MAX;
	volatile int32_t t125 = 45022;

    t125 = ((x529^(x530>x531))/x532);

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x534 = 21;
	volatile int32_t x535 = INT32_MIN;
	int32_t x536 = -1;
	int32_t t126 = 61835;

    t126 = ((x533^(x534>x535))/x536);

    if (t126 != 20151) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = INT64_MIN;
	uint16_t x539 = UINT16_MAX;
	int64_t x540 = -1LL;

    t127 = ((x537^(x538>x539))/x540);

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x541 = 84LLU;
	int16_t x543 = -3389;
	int16_t x544 = -1676;
	volatile uint64_t t128 = 14435510892LLU;

    t128 = ((x541^(x542>x543))/x544);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x545 = INT64_MIN;
	uint64_t x547 = 861433091238143LLU;
	int16_t x548 = INT16_MAX;

    t129 = ((x545^(x546>x547))/x548);

    if (t129 != -281483566907400LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = 0;
	volatile uint64_t x550 = 14621839711LLU;
	int8_t x551 = INT8_MIN;
	uint32_t x552 = 54577U;
	volatile uint32_t t130 = 64606595U;

    t130 = ((x549^(x550>x551))/x552);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x553 = 760411042U;
	int8_t x556 = -1;
	static volatile uint32_t t131 = 22526710U;

    t131 = ((x553^(x554>x555))/x556);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x557 = INT16_MAX;
	int16_t x558 = 6184;
	int8_t x559 = INT8_MIN;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t132 = -6;

    t132 = ((x557^(x558>x559))/x560);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x561 = -1;
	int16_t x562 = 5;
	uint64_t x563 = UINT64_MAX;
	static int64_t x564 = -1LL;
	static int64_t t133 = 33074LL;

    t133 = ((x561^(x562>x563))/x564);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x565 = -803786;
	static volatile int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MAX;
	int32_t t134 = 1;

    t134 = ((x565^(x566>x567))/x568);

    if (t134 != -6329) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x569 = INT16_MIN;
	static uint8_t x570 = 112U;
	volatile int32_t x571 = 1;
	static uint32_t x572 = 915876U;
	volatile uint32_t t135 = 317U;

    t135 = ((x569^(x570>x571))/x572);

    if (t135 != 4689U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = -1;
	static int64_t x574 = -4260847936963615384LL;
	int8_t x575 = INT8_MAX;
	static int16_t x576 = 1;
	volatile int32_t t136 = 506591;

    t136 = ((x573^(x574>x575))/x576);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x578 = 1U;
	int16_t x580 = INT16_MIN;
	volatile int32_t t137 = 426527;

    t137 = ((x577^(x578>x579))/x580);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x582 = -114727807LL;
	int64_t x583 = INT64_MAX;
	static volatile int8_t x584 = INT8_MAX;
	static volatile int32_t t138 = -1;

    t138 = ((x581^(x582>x583))/x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x585 = 1409250;
	int32_t x587 = INT32_MIN;
	static volatile int64_t t139 = 1734LL;

    t139 = ((x585^(x586>x587))/x588);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;

    t140 = ((x589^(x590>x591))/x592);

    if (t140 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = INT8_MAX;
	uint32_t x594 = 2063373U;
	volatile uint16_t x595 = 4598U;
	uint32_t x596 = 2272334U;
	volatile uint32_t t141 = 0U;

    t141 = ((x593^(x594>x595))/x596);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = INT32_MIN;
	volatile int16_t x598 = 1;
	uint16_t x599 = 1937U;
	static int16_t x600 = INT16_MIN;
	static volatile int32_t t142 = -31313;

    t142 = ((x597^(x598>x599))/x600);

    if (t142 != 65536) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = INT32_MIN;
	static uint16_t x602 = 0U;
	volatile int16_t x603 = INT16_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t143 = 172040;

    t143 = ((x601^(x602>x603))/x604);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = -1LL;
	volatile int32_t x606 = -587045263;
	int16_t x607 = INT16_MAX;
	int32_t x608 = INT32_MIN;
	volatile int64_t t144 = -164LL;

    t144 = ((x605^(x606>x607))/x608);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x609 = -1053541406674LL;
	int16_t x610 = INT16_MAX;
	volatile int16_t x611 = -11182;
	int16_t x612 = 17;
	int64_t t145 = 1811LL;

    t145 = ((x609^(x610>x611))/x612);

    if (t145 != -61973023921LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x613 = INT8_MAX;
	int64_t x614 = INT64_MIN;
	int64_t x615 = INT64_MIN;
	uint64_t x616 = 1968401962LLU;
	uint64_t t146 = 36184836171181038LLU;

    t146 = ((x613^(x614>x615))/x616);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = UINT16_MAX;
	uint8_t x618 = 1U;
	int64_t x619 = -105471LL;
	static int8_t x620 = -21;

    t147 = ((x617^(x618>x619))/x620);

    if (t147 != -3120) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x621 = 119LL;
	static int64_t x622 = INT64_MIN;
	uint32_t x624 = UINT32_MAX;
	int64_t t148 = -3232583637707216350LL;

    t148 = ((x621^(x622>x623))/x624);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = -1LL;
	uint16_t x626 = UINT16_MAX;
	volatile uint16_t x627 = UINT16_MAX;
	int16_t x628 = -11317;
	volatile int64_t t149 = 1929307912503592704LL;

    t149 = ((x625^(x626>x627))/x628);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = INT8_MIN;
	uint64_t x630 = UINT64_MAX;
	volatile uint8_t x631 = UINT8_MAX;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t150 = 26624543652340537LLU;

    t150 = ((x629^(x630>x631))/x632);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x638 = 11855467LLU;
	uint64_t x639 = UINT64_MAX;
	static volatile uint8_t x640 = 13U;
	uint64_t t151 = 411966091924LLU;

    t151 = ((x637^(x638>x639))/x640);

    if (t151 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x641 = 24U;
	int64_t x642 = INT64_MAX;
	int64_t x643 = 4085304839317LL;
	uint64_t x644 = 5829LLU;

    t152 = ((x641^(x642>x643))/x644);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x645 = INT16_MAX;
	uint16_t x648 = 14U;
	int32_t t153 = -15969;

    t153 = ((x645^(x646>x647))/x648);

    if (t153 != 2340) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x650 = -1;
	static int64_t x651 = -6LL;
	static volatile int64_t t154 = 4392632LL;

    t154 = ((x649^(x650>x651))/x652);

    if (t154 != 304683272887644LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x653 = -507236094;
	int64_t x654 = INT64_MIN;
	uint32_t x655 = UINT32_MAX;
	volatile int64_t x656 = INT64_MIN;
	static volatile int64_t t155 = 1003LL;

    t155 = ((x653^(x654>x655))/x656);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x658 = 7039;
	int32_t x659 = -8063;
	static int16_t x660 = INT16_MAX;
	int32_t t156 = 86460111;

    t156 = ((x657^(x658>x659))/x660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x661 = UINT16_MAX;
	static int8_t x663 = -1;
	volatile int32_t t157 = 2;

    t157 = ((x661^(x662>x663))/x664);

    if (t157 != -147) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x665 = INT16_MIN;
	int16_t x666 = INT16_MIN;
	int8_t x668 = INT8_MIN;

    t158 = ((x665^(x666>x667))/x668);

    if (t158 != 256) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x669 = 53123695605LLU;
	int32_t x671 = 0;
	uint16_t x672 = 166U;

    t159 = ((x669^(x670>x671))/x672);

    if (t159 != 320022262LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = INT8_MAX;
	int64_t x674 = INT64_MIN;
	static uint16_t x676 = 292U;
	volatile int32_t t160 = 521658;

    t160 = ((x673^(x674>x675))/x676);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x677 = 5U;
	int64_t x678 = INT64_MAX;
	uint32_t x679 = UINT32_MAX;
	static int16_t x680 = INT16_MIN;
	static volatile int32_t t161 = 2951574;

    t161 = ((x677^(x678>x679))/x680);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x681 = 9U;
	int8_t x683 = INT8_MAX;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t162 = -203366;

    t162 = ((x681^(x682>x683))/x684);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x685 = 81325534U;
	volatile int64_t x686 = INT64_MIN;
	int64_t x687 = INT64_MIN;
	int64_t x688 = -1LL;
	int64_t t163 = -12605398892LL;

    t163 = ((x685^(x686>x687))/x688);

    if (t163 != -81325534LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x689 = INT16_MIN;
	static uint64_t x690 = UINT64_MAX;
	int16_t x691 = 1251;
	static volatile int32_t t164 = -32;

    t164 = ((x689^(x690>x691))/x692);

    if (t164 != -9) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x693 = INT32_MAX;
	uint16_t x694 = 3189U;
	static int8_t x695 = -10;
	int16_t x696 = -1;
	int32_t t165 = -1;

    t165 = ((x693^(x694>x695))/x696);

    if (t165 != -2147483646) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x697 = INT64_MIN;
	static int32_t x698 = INT32_MIN;
	int64_t x699 = INT64_MIN;
	volatile int64_t t166 = -31693804934847LL;

    t166 = ((x697^(x698>x699))/x700);

    if (t166 != 18520343920449LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = -30;
	static int32_t x702 = -32265;
	volatile int8_t x703 = INT8_MIN;

    t167 = ((x701^(x702>x703))/x704);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x705 = UINT8_MAX;
	int64_t x707 = INT64_MIN;
	int32_t x708 = 48822052;
	volatile int32_t t168 = -251855;

    t168 = ((x705^(x706>x707))/x708);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x709 = -1;
	volatile int64_t x711 = INT64_MIN;
	int32_t t169 = 0;

    t169 = ((x709^(x710>x711))/x712);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x715 = -1;
	int64_t x716 = 55405LL;

    t170 = ((x713^(x714>x715))/x716);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x717 = -939191136168416234LL;
	static volatile int64_t x718 = INT64_MAX;
	int16_t x720 = INT16_MIN;
	int64_t t171 = -3635327526LL;

    t171 = ((x717^(x718>x719))/x720);

    if (t171 != 28661838872327LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x721 = 4049408229954567786LLU;
	uint8_t x722 = UINT8_MAX;
	int8_t x723 = INT8_MIN;
	int8_t x724 = -1;
	uint64_t t172 = 0LLU;

    t172 = ((x721^(x722>x723))/x724);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x726 = UINT16_MAX;
	int64_t x727 = -1LL;
	volatile uint64_t x728 = UINT64_MAX;
	uint64_t t173 = 10LLU;

    t173 = ((x725^(x726>x727))/x728);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x730 = -1LL;
	uint32_t x731 = 1930281563U;
	int8_t x732 = 8;
	volatile int32_t t174 = 166500;

    t174 = ((x729^(x730>x731))/x732);

    if (t174 != -16) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x735 = -1LL;
	int8_t x736 = INT8_MIN;
	volatile int32_t t175 = 0;

    t175 = ((x733^(x734>x735))/x736);

    if (t175 != 16777215) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x739 = INT8_MIN;
	int32_t t176 = 4472;

    t176 = ((x737^(x738>x739))/x740);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x741 = 9255U;
	uint16_t x742 = 473U;
	volatile int64_t x743 = 158092LL;
	volatile int16_t x744 = -12443;
	static uint32_t t177 = 873547U;

    t177 = ((x741^(x742>x743))/x744);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x745 = 0;
	static uint32_t x747 = 46055U;
	uint8_t x748 = 6U;
	int32_t t178 = 5863;

    t178 = ((x745^(x746>x747))/x748);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x750 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	volatile uint32_t t179 = 962U;

    t179 = ((x749^(x750>x751))/x752);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x756 = INT64_MAX;
	int64_t t180 = -30524570870655LL;

    t180 = ((x753^(x754>x755))/x756);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = INT32_MIN;
	volatile int8_t x758 = INT8_MAX;
	int8_t x759 = -1;
	int16_t x760 = INT16_MIN;
	static int32_t t181 = 23932384;

    t181 = ((x757^(x758>x759))/x760);

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x761 = INT16_MAX;
	int8_t x762 = INT8_MIN;
	uint32_t x763 = 18272U;
	int16_t x764 = -1;
	int32_t t182 = 931;

    t182 = ((x761^(x762>x763))/x764);

    if (t182 != -32766) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x765 = 0U;
	uint16_t x766 = 42U;
	static int16_t x767 = -1;
	static volatile uint32_t x768 = 26364U;

    t183 = ((x765^(x766>x767))/x768);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x769 = UINT32_MAX;
	static uint64_t x770 = 4651930619748526057LLU;
	static volatile uint32_t t184 = 160026U;

    t184 = ((x769^(x770>x771))/x772);

    if (t184 != 143165576U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x773 = 662642251586535587LLU;
	volatile uint64_t x774 = UINT64_MAX;
	static uint8_t x775 = UINT8_MAX;
	volatile uint64_t x776 = 46427302822840921LLU;
	uint64_t t185 = 178LLU;

    t185 = ((x773^(x774>x775))/x776);

    if (t185 != 14LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x777 = -1;
	int64_t x779 = INT64_MIN;
	uint8_t x780 = 1U;

    t186 = ((x777^(x778>x779))/x780);

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x782 = -1LL;
	volatile int32_t x783 = -194;
	volatile uint32_t x784 = 495949827U;
	static int64_t t187 = -507181815LL;

    t187 = ((x781^(x782>x783))/x784);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x785 = -7;
	uint16_t x786 = 139U;
	volatile int32_t t188 = 91694;

    t188 = ((x785^(x786>x787))/x788);

    if (t188 != 7) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x792 = UINT64_MAX;
	volatile uint64_t t189 = 1093LLU;

    t189 = ((x789^(x790>x791))/x792);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x793 = -1;
	volatile int32_t x794 = INT32_MAX;
	static int16_t x795 = INT16_MIN;
	volatile int16_t x796 = INT16_MAX;

    t190 = ((x793^(x794>x795))/x796);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x798 = -1;
	int8_t x799 = 63;
	static int16_t x800 = INT16_MIN;

    t191 = ((x797^(x798>x799))/x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x801 = 250391;
	int8_t x802 = 11;
	volatile uint16_t x803 = 7U;
	static volatile int64_t x804 = INT64_MIN;

    t192 = ((x801^(x802>x803))/x804);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x807 = INT64_MAX;
	uint32_t x808 = UINT32_MAX;
	uint32_t t193 = 10870360U;

    t193 = ((x805^(x806>x807))/x808);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x809 = INT16_MIN;
	int32_t x811 = -1;
	volatile int16_t x812 = 5752;

    t194 = ((x809^(x810>x811))/x812);

    if (t194 != -5) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x813 = INT16_MAX;
	uint32_t x814 = UINT32_MAX;
	int32_t x815 = -1;
	uint16_t x816 = 74U;

    t195 = ((x813^(x814>x815))/x816);

    if (t195 != 442) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x817 = -1;
	static uint64_t x818 = 105244LLU;
	int8_t x819 = INT8_MIN;
	int32_t t196 = -26898;

    t196 = ((x817^(x818>x819))/x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x821 = 34262390LLU;
	int32_t x822 = INT32_MIN;
	int16_t x823 = INT16_MIN;
	int8_t x824 = 3;
	uint64_t t197 = 246960410618602LLU;

    t197 = ((x821^(x822>x823))/x824);

    if (t197 != 11420796LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x825 = INT16_MAX;
	int8_t x826 = 25;
	uint64_t x827 = UINT64_MAX;
	static uint16_t x828 = 20U;
	int32_t t198 = -1323554;

    t198 = ((x825^(x826>x827))/x828);

    if (t198 != 1638) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x830 = INT16_MIN;
	volatile int16_t x831 = INT16_MIN;
	static volatile int64_t t199 = 491LL;

    t199 = ((x829^(x830>x831))/x832);

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

