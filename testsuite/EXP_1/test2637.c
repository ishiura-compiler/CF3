
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

int32_t x3 = INT32_MIN;
static int32_t x7 = INT32_MIN;
int64_t x9 = INT64_MIN;
int16_t x12 = INT16_MIN;
uint8_t x14 = UINT8_MAX;
uint64_t x26 = 200952414LLU;
volatile int8_t x28 = INT8_MAX;
int32_t t5 = 222;
volatile int16_t x32 = INT16_MAX;
int8_t x36 = INT8_MIN;
volatile int32_t t11 = -7;
int16_t x56 = -8436;
int16_t x59 = INT16_MIN;
volatile int32_t t13 = 694549;
int32_t x68 = 60800702;
uint64_t x70 = 42108736LLU;
uint64_t x72 = UINT64_MAX;
int64_t t17 = -6493506LL;
volatile int32_t x79 = INT32_MIN;
uint32_t x80 = 28155U;
static uint32_t x91 = UINT32_MAX;
volatile int16_t x98 = INT16_MIN;
static uint8_t x100 = UINT8_MAX;
int32_t x102 = 1008177;
volatile int32_t t24 = 1111803;
int16_t x114 = INT16_MAX;
volatile int64_t x118 = -1LL;
static int32_t x128 = INT32_MIN;
volatile uint64_t t32 = 230LLU;
int32_t x148 = -7;
volatile int32_t t36 = -58;
uint32_t x160 = 209U;
volatile int32_t x181 = -1;
static volatile int16_t x190 = -1303;
volatile uint16_t x194 = UINT16_MAX;
int64_t x195 = INT64_MIN;
int16_t x197 = INT16_MAX;
int64_t x199 = 576162469979LL;
int32_t x207 = -796485;
static volatile int32_t t51 = -1;
int32_t x215 = INT32_MIN;
int16_t x216 = INT16_MIN;
static volatile uint8_t x217 = 7U;
int16_t x218 = INT16_MAX;
volatile int64_t x221 = -1LL;
uint64_t x222 = 169048410383253LLU;
int16_t x225 = INT16_MIN;
static volatile int32_t t57 = 4819923;
static int32_t t60 = 558774579;
static volatile int16_t x253 = 2;
int64_t x260 = -36LL;
int64_t t63 = 4651635953228785LL;
static int32_t x263 = -1;
int32_t x266 = -1;
uint16_t x279 = 8U;
volatile int8_t x293 = INT8_MAX;
int8_t x300 = INT8_MAX;
volatile uint8_t x302 = UINT8_MAX;
uint32_t x315 = 6904087U;
int16_t x318 = -1;
int32_t x320 = -197531884;
int8_t x321 = -1;
int64_t x326 = INT64_MAX;
int32_t t79 = 8;
int32_t t81 = 3;
int32_t t82 = 39126;
uint8_t x346 = UINT8_MAX;
volatile uint16_t x348 = 1U;
uint8_t x351 = 1U;
int8_t x353 = -3;
int32_t x354 = INT32_MIN;
static volatile int32_t t86 = 1548103;
volatile int8_t x362 = INT8_MIN;
volatile uint32_t t88 = 1870U;
int8_t x369 = INT8_MIN;
int16_t x370 = -25;
static volatile int32_t t90 = -666008859;
static int8_t x379 = 0;
int8_t x387 = INT8_MIN;
int32_t x388 = INT32_MAX;
uint8_t x394 = UINT8_MAX;
int8_t x400 = INT8_MIN;
static int32_t t96 = 269211;
uint64_t x412 = UINT64_MAX;
int64_t x414 = INT64_MIN;
volatile int64_t x416 = INT64_MIN;
int32_t x424 = -1626;
uint8_t x437 = 71U;
static uint8_t x442 = 93U;
static uint32_t t106 = 820498653U;
uint16_t x445 = UINT16_MAX;
int64_t x446 = INT64_MAX;
static int8_t x447 = -1;
int64_t t107 = -3LL;
int32_t t109 = -105564;
int32_t x462 = -1;
uint16_t x467 = UINT16_MAX;
int16_t x471 = INT16_MAX;
volatile uint32_t x476 = 8U;
int16_t x484 = INT16_MIN;
int32_t x487 = INT32_MAX;
int32_t x492 = INT32_MAX;
volatile int32_t t117 = 4;
static uint8_t x497 = 18U;
uint16_t x504 = UINT16_MAX;
int32_t x508 = INT32_MAX;
static uint16_t x509 = 1U;
uint16_t x515 = 11521U;
static int32_t x519 = INT32_MAX;
uint16_t x524 = 1775U;
uint32_t x525 = 3U;
static int8_t x529 = INT8_MIN;
int8_t x531 = 0;
int64_t x532 = -1LL;
uint16_t x533 = UINT16_MAX;
int64_t t127 = -201369LL;
int64_t x539 = INT64_MIN;
int16_t x547 = INT16_MIN;
int32_t t132 = 222231023;
uint8_t x569 = 0U;
volatile int32_t t136 = 46;
int16_t x576 = INT16_MIN;
static volatile int16_t x588 = 1;
uint32_t x593 = 34111U;
static volatile uint64_t x604 = UINT64_MAX;
static int32_t x615 = INT32_MAX;
uint16_t x616 = UINT16_MAX;
int32_t t146 = 0;
uint8_t x622 = UINT8_MAX;
volatile int64_t t148 = 1325039560LL;
static int8_t x633 = INT8_MAX;
static volatile uint64_t x636 = 520887537004875LLU;
volatile uint64_t t150 = 236203332LLU;
int64_t x652 = -11LL;
uint64_t x655 = 96439LLU;
int8_t x656 = 1;
static int32_t x660 = INT32_MIN;
int32_t x666 = INT32_MIN;
int32_t x675 = -1;
uint16_t x682 = 30U;
uint16_t x683 = 2872U;
volatile int32_t t160 = -23441;
uint64_t x685 = UINT64_MAX;
uint32_t x691 = 0U;
static int8_t x700 = INT8_MAX;
volatile int8_t x702 = -12;
volatile int16_t x704 = 7;
volatile int32_t t165 = -960516;
uint64_t t168 = 1956493051884LLU;
int16_t x735 = -1;
static int16_t x740 = INT16_MIN;
int32_t t174 = -208199;
volatile int32_t t175 = 16;
static uint8_t x747 = UINT8_MAX;
uint32_t x748 = 26760U;
uint32_t t176 = 40219771U;
int16_t x757 = -1;
int64_t x758 = INT64_MIN;
static volatile int64_t x760 = -1LL;
int32_t x761 = 0;
int64_t x769 = 114958807491LL;
static volatile uint32_t x770 = 116631U;
volatile int32_t x771 = -1;
int32_t x782 = -6857;
volatile int16_t x795 = -2914;
volatile int32_t x796 = INT32_MAX;
volatile int64_t t189 = -10943LL;
int8_t x811 = INT8_MIN;
volatile uint64_t x812 = UINT64_MAX;
static volatile uint64_t x826 = UINT64_MAX;
uint8_t x827 = UINT8_MAX;
volatile int64_t t195 = -1075346094LL;
uint16_t x831 = UINT16_MAX;
int32_t x832 = -1;
static uint8_t x834 = 5U;
int32_t t197 = -11678;
int32_t t199 = 22;


void f0(void) {
    	int32_t x1 = 1;
	static volatile int32_t x2 = -858255;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -1808232;

    t0 = (((x1^x2)!=x3)%x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -6;
	uint32_t x6 = 332571310U;
	int32_t x8 = -581;
	int32_t t1 = 1;

    t1 = (((x5^x6)!=x7)%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	volatile int32_t t2 = -947157;

    t2 = (((x9^x10)!=x11)%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 14;

    t3 = (((x13^x14)!=x15)%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MAX;
	static uint16_t x19 = 43U;
	volatile uint32_t x20 = 1660663U;
	uint32_t t4 = 12U;

    t4 = (((x17^x18)!=x19)%x20);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x25 = INT8_MIN;
	int8_t x27 = INT8_MIN;

    t5 = (((x25^x26)!=x27)%x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 2282;
	volatile int32_t x30 = -1;
	static uint32_t x31 = 1928466U;
	volatile int32_t t6 = 7099;

    t6 = (((x29^x30)!=x31)%x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x33 = 4647953U;
	int16_t x34 = -10;
	uint32_t x35 = 13437738U;
	int32_t t7 = -514486;

    t7 = (((x33^x34)!=x35)%x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 516U;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = -1LL;
	static int8_t x40 = -56;
	volatile int32_t t8 = 3691;

    t8 = (((x37^x38)!=x39)%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 6U;
	static int32_t x42 = 10;
	int16_t x43 = -7;
	int32_t x44 = INT32_MAX;
	int32_t t9 = 678496;

    t9 = (((x41^x42)!=x43)%x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x45 = 1629U;
	int8_t x46 = -1;
	uint16_t x47 = 5241U;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t10 = 17289U;

    t10 = (((x45^x46)!=x47)%x48);

    if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -11;
	int64_t x50 = -1LL;
	int64_t x51 = -39066832941LL;
	int16_t x52 = 41;

    t11 = (((x49^x50)!=x51)%x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = 2;
	int32_t x54 = 1;
	volatile uint16_t x55 = 2U;
	int32_t t12 = 29;

    t12 = (((x53^x54)!=x55)%x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MAX;
	uint64_t x58 = UINT64_MAX;
	uint8_t x60 = UINT8_MAX;

    t13 = (((x57^x58)!=x59)%x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x61 = 1569407904503LLU;
	int32_t x62 = INT32_MIN;
	int16_t x63 = -1;
	uint8_t x64 = 122U;
	int32_t t14 = 2337;

    t14 = (((x61^x62)!=x63)%x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MAX;
	volatile int32_t t15 = -60120592;

    t15 = (((x65^x66)!=x67)%x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 789830488190LLU;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t t16 = 103564737LLU;

    t16 = (((x69^x70)!=x71)%x72);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -1;
	static int32_t x74 = -351337056;
	int16_t x75 = -1;
	static volatile int64_t x76 = INT64_MIN;

    t17 = (((x73^x74)!=x75)%x76);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -60;
	int64_t x78 = INT64_MIN;
	volatile uint32_t t18 = 16U;

    t18 = (((x77^x78)!=x79)%x80);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 15U;
	volatile uint8_t x82 = 12U;
	int32_t x83 = -867;
	static uint64_t x84 = 97040360992LLU;
	static volatile uint64_t t19 = 8LLU;

    t19 = (((x81^x82)!=x83)%x84);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = -5604266359030LL;
	int8_t x86 = 0;
	int8_t x87 = -1;
	uint32_t x88 = UINT32_MAX;
	uint32_t t20 = 205424872U;

    t20 = (((x85^x86)!=x87)%x88);

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = -9;
	int64_t x92 = INT64_MAX;
	static int64_t t21 = 1884803LL;

    t21 = (((x89^x90)!=x91)%x92);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MAX;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	static int64_t x96 = -1LL;
	int64_t t22 = 369728LL;

    t22 = (((x93^x94)!=x95)%x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = INT8_MIN;
	uint64_t x99 = 559952438LLU;
	int32_t t23 = 11334134;

    t23 = (((x97^x98)!=x99)%x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x101 = INT8_MAX;
	static int8_t x103 = INT8_MIN;
	volatile int8_t x104 = -30;

    t24 = (((x101^x102)!=x103)%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -2;
	int32_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t25 = 672;

    t25 = (((x105^x106)!=x107)%x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int32_t x110 = INT32_MIN;
	volatile int32_t x111 = -9041285;
	uint8_t x112 = UINT8_MAX;
	int32_t t26 = -12;

    t26 = (((x109^x110)!=x111)%x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x113 = INT64_MAX;
	int16_t x115 = -1;
	int8_t x116 = INT8_MIN;
	static int32_t t27 = -4554;

    t27 = (((x113^x114)!=x115)%x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 0U;
	static int8_t x119 = -29;
	volatile int32_t x120 = INT32_MAX;
	int32_t t28 = -15025406;

    t28 = (((x117^x118)!=x119)%x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x121 = -1;
	volatile uint16_t x122 = 1013U;
	int8_t x123 = -1;
	volatile int64_t x124 = 26353LL;
	int64_t t29 = 2583664426253201LL;

    t29 = (((x121^x122)!=x123)%x124);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MAX;
	int16_t x126 = 1;
	volatile int16_t x127 = INT16_MIN;
	volatile int32_t t30 = 84;

    t30 = (((x125^x126)!=x127)%x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x129 = UINT16_MAX;
	int16_t x130 = -1;
	int16_t x131 = -2073;
	static int16_t x132 = -1;
	int32_t t31 = -7682;

    t31 = (((x129^x130)!=x131)%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MAX;
	static int64_t x135 = 23108LL;
	uint64_t x136 = UINT64_MAX;

    t32 = (((x133^x134)!=x135)%x136);

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	volatile uint64_t x138 = UINT64_MAX;
	int32_t x139 = -6697135;
	int8_t x140 = -1;
	static volatile int32_t t33 = 83559;

    t33 = (((x137^x138)!=x139)%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = 9350586U;
	uint32_t t34 = 162429394U;

    t34 = (((x141^x142)!=x143)%x144);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MIN;
	static int8_t x146 = INT8_MAX;
	volatile int8_t x147 = INT8_MAX;
	volatile int32_t t35 = -191;

    t35 = (((x145^x146)!=x147)%x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = 15367;
	uint32_t x150 = 927731418U;
	volatile int64_t x151 = -1LL;
	static int32_t x152 = INT32_MIN;

    t36 = (((x149^x150)!=x151)%x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 11U;
	int64_t x154 = INT64_MAX;
	uint8_t x155 = UINT8_MAX;
	static volatile int32_t x156 = INT32_MIN;
	volatile int32_t t37 = 686799;

    t37 = (((x153^x154)!=x155)%x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = 14U;
	int64_t x158 = INT64_MIN;
	static int64_t x159 = INT64_MIN;
	static volatile uint32_t t38 = 188582U;

    t38 = (((x157^x158)!=x159)%x160);

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x161 = INT32_MIN;
	int8_t x162 = 23;
	int8_t x163 = -22;
	int64_t x164 = INT64_MIN;
	volatile int64_t t39 = 3716400374LL;

    t39 = (((x161^x162)!=x163)%x164);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	int16_t x167 = -3562;
	uint8_t x168 = 2U;
	volatile int32_t t40 = -293059508;

    t40 = (((x165^x166)!=x167)%x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x169 = 15U;
	volatile int8_t x170 = -5;
	int64_t x171 = INT64_MIN;
	int8_t x172 = -1;
	volatile int32_t t41 = 3;

    t41 = (((x169^x170)!=x171)%x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x173 = 253LLU;
	int8_t x174 = -1;
	static uint16_t x175 = 11726U;
	int8_t x176 = 9;
	volatile int32_t t42 = 0;

    t42 = (((x173^x174)!=x175)%x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 0U;
	uint32_t x178 = 1185U;
	static int16_t x179 = INT16_MIN;
	volatile int64_t x180 = 10917019836942LL;
	int64_t t43 = -730640951528091LL;

    t43 = (((x177^x178)!=x179)%x180);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x182 = -20;
	uint8_t x183 = 2U;
	int32_t x184 = INT32_MAX;
	volatile int32_t t44 = 72077950;

    t44 = (((x181^x182)!=x183)%x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = -1LL;
	static uint64_t x186 = 93480963LLU;
	uint8_t x187 = 9U;
	int32_t x188 = 15;
	int32_t t45 = 8;

    t45 = (((x185^x186)!=x187)%x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x191 = INT8_MIN;
	static volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t46 = 6243070037LLU;

    t46 = (((x189^x190)!=x191)%x192);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x196 = 6;
	static int32_t t47 = 0;

    t47 = (((x193^x194)!=x195)%x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x198 = -1;
	static uint64_t x200 = UINT64_MAX;
	volatile uint64_t t48 = 1968580720456523059LLU;

    t48 = (((x197^x198)!=x199)%x200);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = 502004492U;
	volatile int32_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int64_t x204 = -1LL;
	volatile int64_t t49 = 46138952020062186LL;

    t49 = (((x201^x202)!=x203)%x204);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = INT8_MIN;
	volatile int8_t x206 = -41;
	volatile uint32_t x208 = 1079172U;
	volatile uint32_t t50 = 7695926U;

    t50 = (((x205^x206)!=x207)%x208);

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -15;
	static uint32_t x210 = 244476U;
	static int32_t x211 = 7;
	uint16_t x212 = 3U;

    t51 = (((x209^x210)!=x211)%x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -1;
	volatile int64_t x214 = INT64_MAX;
	static volatile int32_t t52 = 10;

    t52 = (((x213^x214)!=x215)%x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x219 = INT8_MIN;
	static int16_t x220 = -1;
	volatile int32_t t53 = 77;

    t53 = (((x217^x218)!=x219)%x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x223 = INT8_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t54 = -237074415509042915LL;

    t54 = (((x221^x222)!=x223)%x224);

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x226 = 3U;
	int64_t x227 = -4378939815918824LL;
	int16_t x228 = 3591;
	int32_t t55 = 2;

    t55 = (((x225^x226)!=x227)%x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = INT32_MIN;
	uint16_t x230 = 11U;
	static uint64_t x231 = 0LLU;
	uint16_t x232 = 123U;
	int32_t t56 = 1090599;

    t56 = (((x229^x230)!=x231)%x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = UINT32_MAX;
	volatile int32_t x234 = -43461;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;

    t57 = (((x233^x234)!=x235)%x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x237 = 31245U;
	volatile int32_t x238 = INT32_MIN;
	static volatile uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 95782570U;
	static volatile uint32_t t58 = 9858U;

    t58 = (((x237^x238)!=x239)%x240);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x241 = INT32_MIN;
	volatile uint16_t x242 = 2U;
	int16_t x243 = -1;
	uint64_t x244 = 337277LLU;
	volatile uint64_t t59 = 76425987842LLU;

    t59 = (((x241^x242)!=x243)%x244);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x245 = -1;
	volatile int32_t x246 = INT32_MIN;
	volatile int8_t x247 = INT8_MAX;
	volatile int8_t x248 = 2;

    t60 = (((x245^x246)!=x247)%x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x249 = 1065LLU;
	static int16_t x250 = 2;
	int8_t x251 = 1;
	int64_t x252 = -1LL;
	volatile int64_t t61 = 4685858LL;

    t61 = (((x249^x250)!=x251)%x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x254 = INT16_MAX;
	static int64_t x255 = 115661694039LL;
	int32_t x256 = INT32_MAX;
	volatile int32_t t62 = 2359;

    t62 = (((x253^x254)!=x255)%x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = 63018836957415LL;
	int64_t x259 = 3490637882065LL;

    t63 = (((x257^x258)!=x259)%x260);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = -1LL;
	uint16_t x262 = 1447U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 29226LL;

    t64 = (((x261^x262)!=x263)%x264);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x267 = 163;
	volatile int16_t x268 = -3141;
	volatile int32_t t65 = -423;

    t65 = (((x265^x266)!=x267)%x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = INT8_MIN;
	static uint32_t x270 = 4052U;
	int64_t x271 = 1186672LL;
	int64_t x272 = INT64_MAX;
	int64_t t66 = 1LL;

    t66 = (((x269^x270)!=x271)%x272);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = 3U;
	uint64_t x276 = 2890873766LLU;
	uint64_t t67 = 2256613LLU;

    t67 = (((x273^x274)!=x275)%x276);

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	static uint32_t x280 = 4331566U;
	uint32_t t68 = 2778322U;

    t68 = (((x277^x278)!=x279)%x280);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = -1LL;
	volatile int32_t x282 = INT32_MAX;
	static int64_t x283 = -83540520977430622LL;
	int16_t x284 = INT16_MIN;
	int32_t t69 = 3466;

    t69 = (((x281^x282)!=x283)%x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = -9;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = INT32_MAX;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t70 = 29735363;

    t70 = (((x285^x286)!=x287)%x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x289 = 1736186U;
	int8_t x290 = -17;
	int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t71 = 0;

    t71 = (((x289^x290)!=x291)%x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x294 = INT16_MIN;
	int32_t x295 = -1;
	static int8_t x296 = -29;
	volatile int32_t t72 = -15151715;

    t72 = (((x293^x294)!=x295)%x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x297 = 32348U;
	volatile int64_t x298 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	volatile int32_t t73 = 792;

    t73 = (((x297^x298)!=x299)%x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x301 = 117U;
	int8_t x303 = INT8_MIN;
	int64_t x304 = -1LL;
	volatile int64_t t74 = -1617913948131882LL;

    t74 = (((x301^x302)!=x303)%x304);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x305 = 9432LL;
	int32_t x306 = 23178658;
	int32_t x307 = INT32_MIN;
	volatile int32_t x308 = -2578;
	int32_t t75 = -745137;

    t75 = (((x305^x306)!=x307)%x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	uint64_t x316 = 530652081034867371LLU;
	uint64_t t76 = 35LLU;

    t76 = (((x313^x314)!=x315)%x316);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x317 = 2629U;
	int8_t x319 = -1;
	static volatile int32_t t77 = -436;

    t77 = (((x317^x318)!=x319)%x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x322 = 22U;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t78 = -11066LL;

    t78 = (((x321^x322)!=x323)%x324);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x325 = INT64_MIN;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;

    t79 = (((x325^x326)!=x327)%x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 5U;
	static int16_t x331 = -1;
	static int32_t x332 = -1576;
	volatile int32_t t80 = 20;

    t80 = (((x329^x330)!=x331)%x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x333 = UINT16_MAX;
	static int32_t x334 = -1;
	uint8_t x335 = 60U;
	uint16_t x336 = UINT16_MAX;

    t81 = (((x333^x334)!=x335)%x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 3872632582776731LLU;
	int16_t x340 = INT16_MIN;

    t82 = (((x337^x338)!=x339)%x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = 3318;
	uint16_t x342 = UINT16_MAX;
	uint8_t x343 = UINT8_MAX;
	static int64_t x344 = -11461586LL;
	int64_t t83 = -50931957015LL;

    t83 = (((x341^x342)!=x343)%x344);

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x345 = -2781008;
	int64_t x347 = INT64_MIN;
	int32_t t84 = -60638;

    t84 = (((x345^x346)!=x347)%x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MIN;
	static uint64_t x352 = 123033526LLU;
	static uint64_t t85 = 838007422LLU;

    t85 = (((x349^x350)!=x351)%x352);

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;

    t86 = (((x353^x354)!=x355)%x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x361 = 269760806282530399LLU;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t87 = 2LLU;

    t87 = (((x361^x362)!=x363)%x364);

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile uint32_t x366 = 171226797U;
	static int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = UINT32_MAX;

    t88 = (((x365^x366)!=x367)%x368);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x371 = -1;
	uint16_t x372 = 17U;
	static volatile int32_t t89 = 342065496;

    t89 = (((x369^x370)!=x371)%x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x373 = 520822;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 58203446LLU;
	volatile int8_t x376 = -15;

    t90 = (((x373^x374)!=x375)%x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x377 = 1U;
	static uint64_t x378 = UINT64_MAX;
	uint64_t x380 = 7LLU;
	uint64_t t91 = 10017LLU;

    t91 = (((x377^x378)!=x379)%x380);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = 0;
	static uint8_t x383 = 0U;
	uint64_t x384 = 204395867564291LLU;
	volatile uint64_t t92 = 242144029280811954LLU;

    t92 = (((x381^x382)!=x383)%x384);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x385 = INT64_MIN;
	int16_t x386 = -1;
	int32_t t93 = -35;

    t93 = (((x385^x386)!=x387)%x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = 14U;
	int32_t x392 = INT32_MAX;
	volatile int32_t t94 = -50;

    t94 = (((x389^x390)!=x391)%x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x393 = 1U;
	volatile uint16_t x395 = 2039U;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t95 = 13102;

    t95 = (((x393^x394)!=x395)%x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;

    t96 = (((x397^x398)!=x399)%x400);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MAX;
	volatile uint8_t x406 = 54U;
	static volatile uint64_t x407 = UINT64_MAX;
	volatile int64_t x408 = INT64_MAX;
	volatile int64_t t97 = 807581LL;

    t97 = (((x405^x406)!=x407)%x408);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x409 = 1;
	static int64_t x410 = -1LL;
	uint32_t x411 = UINT32_MAX;
	volatile uint64_t t98 = 63282602039LLU;

    t98 = (((x409^x410)!=x411)%x412);

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x413 = -15;
	volatile uint16_t x415 = 0U;
	static int64_t t99 = -294375421LL;

    t99 = (((x413^x414)!=x415)%x416);

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x417 = 292U;
	static uint64_t x418 = UINT64_MAX;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MAX;
	int32_t t100 = -457;

    t100 = (((x417^x418)!=x419)%x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x421 = 24U;
	int8_t x422 = -2;
	uint16_t x423 = 8U;
	static volatile int32_t t101 = 151642669;

    t101 = (((x421^x422)!=x423)%x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = UINT64_MAX;
	volatile int16_t x427 = -1;
	volatile uint64_t x428 = 2020062857447LLU;
	uint64_t t102 = 6462155LLU;

    t102 = (((x425^x426)!=x427)%x428);

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = -1;
	int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MIN;
	int64_t t103 = -407574LL;

    t103 = (((x429^x430)!=x431)%x432);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x433 = 3145075371LLU;
	static int32_t x434 = -5;
	volatile int16_t x435 = INT16_MAX;
	uint16_t x436 = 935U;
	volatile int32_t t104 = -4935;

    t104 = (((x433^x434)!=x435)%x436);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x438 = 31391LL;
	uint8_t x439 = 7U;
	int8_t x440 = -1;
	int32_t t105 = -11;

    t105 = (((x437^x438)!=x439)%x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x441 = -1;
	static uint16_t x443 = 968U;
	uint32_t x444 = 1U;

    t106 = (((x441^x442)!=x443)%x444);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x448 = INT64_MIN;

    t107 = (((x445^x446)!=x447)%x448);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MAX;
	int8_t x450 = -1;
	static volatile int64_t x451 = -1LL;
	int32_t x452 = INT32_MIN;
	static int32_t t108 = 1;

    t108 = (((x449^x450)!=x451)%x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x453 = 13U;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;
	volatile int8_t x456 = INT8_MIN;

    t109 = (((x453^x454)!=x455)%x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	int64_t x460 = -1LL;
	int64_t t110 = 9200916844881LL;

    t110 = (((x457^x458)!=x459)%x460);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;
	static volatile int32_t t111 = 247;

    t111 = (((x461^x462)!=x463)%x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 173534217808181LLU;
	int16_t x468 = INT16_MIN;
	volatile int32_t t112 = -16593;

    t112 = (((x465^x466)!=x467)%x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x469 = 4U;
	static int64_t x470 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	int32_t t113 = -7230895;

    t113 = (((x469^x470)!=x471)%x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x473 = INT16_MAX;
	uint16_t x474 = UINT16_MAX;
	int8_t x475 = INT8_MIN;
	volatile uint32_t t114 = 1153U;

    t114 = (((x473^x474)!=x475)%x476);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = -2771176905185829619LL;
	uint64_t x482 = 626406096972LLU;
	volatile int8_t x483 = -1;
	int32_t t115 = 241659;

    t115 = (((x481^x482)!=x483)%x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x485 = INT8_MAX;
	uint64_t x486 = 16569LLU;
	uint16_t x488 = UINT16_MAX;
	static int32_t t116 = -3858616;

    t116 = (((x485^x486)!=x487)%x488);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x489 = 13U;
	volatile uint8_t x490 = 99U;
	uint64_t x491 = UINT64_MAX;

    t117 = (((x489^x490)!=x491)%x492);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x498 = UINT8_MAX;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = -1433774;
	static int32_t t118 = -9157613;

    t118 = (((x497^x498)!=x499)%x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x501 = INT32_MIN;
	static int8_t x502 = INT8_MIN;
	uint16_t x503 = UINT16_MAX;
	volatile int32_t t119 = 763;

    t119 = (((x501^x502)!=x503)%x504);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	volatile uint32_t x506 = UINT32_MAX;
	static volatile int32_t x507 = 6;
	int32_t t120 = -49;

    t120 = (((x505^x506)!=x507)%x508);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x510 = INT8_MIN;
	int64_t x511 = 3907897808184246LL;
	int16_t x512 = -1;
	int32_t t121 = -8;

    t121 = (((x509^x510)!=x511)%x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = -1;
	uint64_t x514 = 45323506309613LLU;
	static int8_t x516 = -7;
	volatile int32_t t122 = -7853851;

    t122 = (((x513^x514)!=x515)%x516);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = INT16_MAX;
	static int64_t x518 = 690023770054036788LL;
	int32_t x520 = INT32_MAX;
	static volatile int32_t t123 = -53077;

    t123 = (((x517^x518)!=x519)%x520);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = 120764020LL;
	static int64_t x522 = 62LL;
	int64_t x523 = INT64_MAX;
	volatile int32_t t124 = 2866;

    t124 = (((x521^x522)!=x523)%x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x526 = 9U;
	static volatile int64_t x527 = INT64_MIN;
	uint64_t x528 = 2087LLU;
	uint64_t t125 = 249513352955958LLU;

    t125 = (((x525^x526)!=x527)%x528);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x530 = INT32_MIN;
	volatile int64_t t126 = 219LL;

    t126 = (((x529^x530)!=x531)%x532);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x534 = 588LLU;
	volatile int16_t x535 = INT16_MAX;
	int64_t x536 = INT64_MIN;

    t127 = (((x533^x534)!=x535)%x536);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x537 = UINT16_MAX;
	int8_t x538 = -1;
	uint8_t x540 = 117U;
	int32_t t128 = -860461898;

    t128 = (((x537^x538)!=x539)%x540);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x541 = INT16_MAX;
	uint16_t x542 = 1U;
	int32_t x543 = -8;
	volatile int8_t x544 = INT8_MIN;
	int32_t t129 = -837669382;

    t129 = (((x541^x542)!=x543)%x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x545 = 6;
	uint32_t x546 = UINT32_MAX;
	static uint16_t x548 = UINT16_MAX;
	volatile int32_t t130 = -415855994;

    t130 = (((x545^x546)!=x547)%x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x549 = 495145100LLU;
	uint64_t x550 = 766904LLU;
	uint16_t x551 = 6U;
	int64_t x552 = INT64_MIN;
	int64_t t131 = 3257889916964LL;

    t131 = (((x549^x550)!=x551)%x552);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x553 = 42U;
	static int8_t x554 = 2;
	static volatile int64_t x555 = INT64_MAX;
	volatile int16_t x556 = INT16_MIN;

    t132 = (((x553^x554)!=x555)%x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x557 = INT64_MIN;
	uint8_t x558 = 13U;
	volatile int64_t x559 = INT64_MAX;
	uint32_t x560 = 23U;
	static uint32_t t133 = 1U;

    t133 = (((x557^x558)!=x559)%x560);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x561 = 11271345U;
	int32_t x562 = INT32_MIN;
	static int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;
	volatile int32_t t134 = -21197340;

    t134 = (((x561^x562)!=x563)%x564);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x565 = 76;
	uint32_t x566 = 158445855U;
	volatile int16_t x567 = INT16_MIN;
	uint64_t x568 = UINT64_MAX;
	volatile uint64_t t135 = 977LLU;

    t135 = (((x565^x566)!=x567)%x568);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x570 = -1;
	int64_t x571 = INT64_MAX;
	int32_t x572 = 1;

    t136 = (((x569^x570)!=x571)%x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = INT64_MIN;
	static volatile uint32_t x574 = 1727U;
	int32_t x575 = INT32_MIN;
	int32_t t137 = -1;

    t137 = (((x573^x574)!=x575)%x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x577 = 3;
	static volatile int16_t x578 = 0;
	int8_t x579 = INT8_MIN;
	int16_t x580 = INT16_MAX;
	volatile int32_t t138 = 61421036;

    t138 = (((x577^x578)!=x579)%x580);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x581 = INT32_MIN;
	uint16_t x582 = 1U;
	volatile uint8_t x583 = 48U;
	volatile uint16_t x584 = 37U;
	volatile int32_t t139 = -2;

    t139 = (((x581^x582)!=x583)%x584);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x585 = 799U;
	static int64_t x586 = INT64_MAX;
	static volatile uint32_t x587 = 865937917U;
	int32_t t140 = -537;

    t140 = (((x585^x586)!=x587)%x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x590 = 1281717574744488043LLU;
	int16_t x591 = -15421;
	uint32_t x592 = 102U;
	uint32_t t141 = 164565863U;

    t141 = (((x589^x590)!=x591)%x592);

    if (t141 != 1U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x594 = -1;
	int16_t x595 = INT16_MIN;
	static uint32_t x596 = UINT32_MAX;
	volatile uint32_t t142 = 13928345U;

    t142 = (((x593^x594)!=x595)%x596);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = 83;
	static int8_t x602 = -7;
	static uint16_t x603 = 23U;
	static uint64_t t143 = 238531614296072486LLU;

    t143 = (((x601^x602)!=x603)%x604);

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x605 = UINT64_MAX;
	int8_t x606 = -1;
	uint16_t x607 = 7106U;
	volatile uint32_t x608 = 3347U;
	uint32_t t144 = 2587489U;

    t144 = (((x605^x606)!=x607)%x608);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x609 = 90995223LLU;
	uint8_t x610 = UINT8_MAX;
	uint64_t x611 = 2834220956958565960LLU;
	volatile int64_t x612 = INT64_MAX;
	volatile int64_t t145 = 366782LL;

    t145 = (((x609^x610)!=x611)%x612);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x614 = -19;

    t146 = (((x613^x614)!=x615)%x616);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x617 = -1;
	uint8_t x618 = 14U;
	int16_t x619 = -4;
	int64_t x620 = 81122780787LL;
	volatile int64_t t147 = -270077213566434LL;

    t147 = (((x617^x618)!=x619)%x620);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x621 = -1;
	uint16_t x623 = 1866U;
	static int64_t x624 = -133206LL;

    t148 = (((x621^x622)!=x623)%x624);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x629 = 24347U;
	static int16_t x630 = INT16_MIN;
	static uint32_t x631 = 3189U;
	static volatile uint64_t x632 = 390335665973LLU;
	uint64_t t149 = 11942731236LLU;

    t149 = (((x629^x630)!=x631)%x632);

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x634 = INT64_MIN;
	int32_t x635 = -22903;

    t150 = (((x633^x634)!=x635)%x636);

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x641 = -1;
	int8_t x642 = 18;
	volatile int32_t x643 = INT32_MAX;
	static int8_t x644 = 10;
	static volatile int32_t t151 = -13588563;

    t151 = (((x641^x642)!=x643)%x644);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = INT8_MIN;
	int32_t x647 = INT32_MIN;
	static volatile int32_t x648 = -1;
	volatile int32_t t152 = -3931363;

    t152 = (((x645^x646)!=x647)%x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x649 = 0;
	uint8_t x650 = 3U;
	volatile uint8_t x651 = 30U;
	volatile int64_t t153 = 889624LL;

    t153 = (((x649^x650)!=x651)%x652);

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x653 = INT16_MIN;
	uint32_t x654 = 32U;
	volatile int32_t t154 = -45825;

    t154 = (((x653^x654)!=x655)%x656);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int64_t x658 = INT64_MIN;
	int8_t x659 = 0;
	static int32_t t155 = -1707;

    t155 = (((x657^x658)!=x659)%x660);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x665 = 7LLU;
	int8_t x667 = -1;
	static int32_t x668 = 13657;
	int32_t t156 = -393428;

    t156 = (((x665^x666)!=x667)%x668);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x669 = INT16_MIN;
	volatile int32_t x670 = -1;
	int32_t x671 = INT32_MAX;
	int32_t x672 = -1;
	volatile int32_t t157 = 225511422;

    t157 = (((x669^x670)!=x671)%x672);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x673 = 98U;
	uint16_t x674 = 229U;
	volatile int32_t x676 = -1;
	int32_t t158 = -2;

    t158 = (((x673^x674)!=x675)%x676);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x677 = -1;
	static int64_t x678 = INT64_MIN;
	static int32_t x679 = 193804;
	static int32_t x680 = 224564562;
	int32_t t159 = -68099;

    t159 = (((x677^x678)!=x679)%x680);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x681 = INT64_MIN;
	volatile int16_t x684 = INT16_MIN;

    t160 = (((x681^x682)!=x683)%x684);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x686 = 1U;
	uint64_t x687 = UINT64_MAX;
	uint16_t x688 = 770U;
	volatile int32_t t161 = 704776;

    t161 = (((x685^x686)!=x687)%x688);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x689 = 1U;
	uint64_t x690 = 429LLU;
	volatile uint64_t x692 = 513245855187LLU;
	static volatile uint64_t t162 = 1379008020LLU;

    t162 = (((x689^x690)!=x691)%x692);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MAX;
	volatile uint8_t x695 = 28U;
	int16_t x696 = INT16_MAX;
	int32_t t163 = 6130;

    t163 = (((x693^x694)!=x695)%x696);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x697 = 40418LLU;
	int64_t x698 = INT64_MIN;
	int32_t x699 = 0;
	static volatile int32_t t164 = 278986863;

    t164 = (((x697^x698)!=x699)%x700);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	uint64_t x703 = UINT64_MAX;

    t165 = (((x701^x702)!=x703)%x704);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x705 = -16037099884796298LL;
	uint8_t x706 = 62U;
	int64_t x707 = 15565517707826158LL;
	int16_t x708 = 3693;
	int32_t t166 = 367;

    t166 = (((x705^x706)!=x707)%x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x709 = INT64_MAX;
	uint8_t x710 = 0U;
	volatile int8_t x711 = INT8_MIN;
	uint8_t x712 = UINT8_MAX;
	int32_t t167 = 392;

    t167 = (((x709^x710)!=x711)%x712);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x713 = INT8_MIN;
	int8_t x714 = INT8_MAX;
	uint64_t x715 = UINT64_MAX;
	volatile uint64_t x716 = 634LLU;

    t168 = (((x713^x714)!=x715)%x716);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x717 = INT64_MAX;
	int64_t x718 = -961LL;
	int32_t x719 = -1;
	int64_t x720 = INT64_MIN;
	static volatile int64_t t169 = 173739942353914397LL;

    t169 = (((x717^x718)!=x719)%x720);

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x721 = INT64_MAX;
	volatile int16_t x722 = INT16_MIN;
	int64_t x723 = -329440LL;
	int32_t x724 = -1;
	int32_t t170 = 0;

    t170 = (((x721^x722)!=x723)%x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x725 = 0U;
	uint32_t x726 = 11U;
	static int32_t x727 = -3534;
	uint16_t x728 = 4U;
	volatile int32_t t171 = 2;

    t171 = (((x725^x726)!=x727)%x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x729 = 4721LLU;
	int32_t x730 = -215424273;
	int32_t x731 = -83884;
	uint16_t x732 = UINT16_MAX;
	static volatile int32_t t172 = 6160183;

    t172 = (((x729^x730)!=x731)%x732);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x734 = -1295;
	int16_t x736 = 64;
	volatile int32_t t173 = 92238995;

    t173 = (((x733^x734)!=x735)%x736);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x737 = 1;
	volatile int64_t x738 = -82566681084LL;
	int16_t x739 = INT16_MIN;

    t174 = (((x737^x738)!=x739)%x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x741 = INT16_MAX;
	uint16_t x742 = UINT16_MAX;
	static int64_t x743 = -1LL;
	int8_t x744 = -40;

    t175 = (((x741^x742)!=x743)%x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x745 = UINT16_MAX;
	uint16_t x746 = 606U;

    t176 = (((x745^x746)!=x747)%x748);

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x753 = -1LL;
	volatile int8_t x754 = -1;
	int64_t x755 = INT64_MAX;
	volatile uint16_t x756 = 15U;
	volatile int32_t t177 = -615695;

    t177 = (((x753^x754)!=x755)%x756);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x759 = UINT16_MAX;
	int64_t t178 = 5LL;

    t178 = (((x757^x758)!=x759)%x760);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x762 = INT32_MIN;
	int8_t x763 = -1;
	uint8_t x764 = 38U;
	int32_t t179 = -1;

    t179 = (((x761^x762)!=x763)%x764);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x765 = -179839;
	static uint32_t x766 = 1U;
	volatile uint32_t x767 = 46047U;
	static uint32_t x768 = 3U;
	static uint32_t t180 = 439U;

    t180 = (((x765^x766)!=x767)%x768);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x772 = INT8_MIN;
	volatile int32_t t181 = 7455445;

    t181 = (((x769^x770)!=x771)%x772);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x773 = INT32_MIN;
	uint32_t x774 = UINT32_MAX;
	static int64_t x775 = -1LL;
	static int64_t x776 = INT64_MIN;
	volatile int64_t t182 = -5318979LL;

    t182 = (((x773^x774)!=x775)%x776);

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x777 = -1;
	int32_t x778 = -1;
	uint32_t x779 = 8120617U;
	static int16_t x780 = INT16_MAX;
	int32_t t183 = 3459;

    t183 = (((x777^x778)!=x779)%x780);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x781 = 73U;
	volatile int32_t x783 = INT32_MIN;
	uint32_t x784 = 1U;
	volatile uint32_t t184 = 102U;

    t184 = (((x781^x782)!=x783)%x784);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x785 = 28U;
	int64_t x786 = 344780502444LL;
	uint16_t x787 = 1U;
	uint32_t x788 = UINT32_MAX;
	volatile uint32_t t185 = 778305U;

    t185 = (((x785^x786)!=x787)%x788);

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x789 = 5109LLU;
	volatile int8_t x790 = 4;
	static volatile int64_t x791 = -1LL;
	uint64_t x792 = UINT64_MAX;
	static uint64_t t186 = 161695LLU;

    t186 = (((x789^x790)!=x791)%x792);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x793 = 2381508311440546LLU;
	int64_t x794 = -11707195597011510LL;
	int32_t t187 = 1349;

    t187 = (((x793^x794)!=x795)%x796);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x797 = INT64_MIN;
	uint32_t x798 = UINT32_MAX;
	int32_t x799 = -1;
	int16_t x800 = INT16_MIN;
	int32_t t188 = 15;

    t188 = (((x797^x798)!=x799)%x800);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x801 = INT64_MIN;
	int16_t x802 = INT16_MIN;
	static int64_t x803 = 1650976LL;
	static int64_t x804 = -1LL;

    t189 = (((x801^x802)!=x803)%x804);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x805 = INT64_MAX;
	int64_t x806 = 16497723LL;
	static int64_t x807 = -52LL;
	volatile uint64_t x808 = UINT64_MAX;
	volatile uint64_t t190 = 22972212684951493LLU;

    t190 = (((x805^x806)!=x807)%x808);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x809 = INT16_MAX;
	int8_t x810 = 0;
	volatile uint64_t t191 = 348377220295640LLU;

    t191 = (((x809^x810)!=x811)%x812);

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x813 = -903;
	static int16_t x814 = INT16_MIN;
	uint16_t x815 = 35U;
	volatile uint64_t x816 = 970462508953964556LLU;
	volatile uint64_t t192 = 7346483786417359LLU;

    t192 = (((x813^x814)!=x815)%x816);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x817 = -1;
	uint64_t x818 = UINT64_MAX;
	uint64_t x819 = 1618387142946025LLU;
	int16_t x820 = INT16_MIN;
	static int32_t t193 = -861;

    t193 = (((x817^x818)!=x819)%x820);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x821 = -1;
	int32_t x822 = 1140378;
	static int32_t x823 = -19;
	uint8_t x824 = 117U;
	int32_t t194 = 5379982;

    t194 = (((x821^x822)!=x823)%x824);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = 7161;
	int64_t x828 = INT64_MIN;

    t195 = (((x825^x826)!=x827)%x828);

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = INT32_MIN;
	int32_t t196 = -8;

    t196 = (((x829^x830)!=x831)%x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = INT8_MAX;
	int32_t x835 = INT32_MIN;
	int16_t x836 = -1;

    t197 = (((x833^x834)!=x835)%x836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x837 = 277116395343647812LLU;
	static volatile int16_t x838 = INT16_MAX;
	static int32_t x839 = INT32_MAX;
	uint16_t x840 = UINT16_MAX;
	int32_t t198 = 26135588;

    t198 = (((x837^x838)!=x839)%x840);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x841 = INT32_MIN;
	int16_t x842 = 2;
	uint8_t x843 = UINT8_MAX;
	int32_t x844 = 63499;

    t199 = (((x841^x842)!=x843)%x844);

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

