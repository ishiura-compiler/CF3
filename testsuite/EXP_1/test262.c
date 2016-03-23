
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

int64_t x16 = INT64_MIN;
int8_t x22 = -1;
int16_t x35 = INT16_MIN;
int32_t t7 = 197127;
static uint16_t x39 = 1U;
int64_t x49 = 90235881517594281LL;
uint64_t x73 = UINT64_MAX;
static int64_t x74 = INT64_MIN;
int8_t x93 = 59;
volatile int16_t x95 = -1;
volatile int32_t t17 = -1;
int32_t t18 = -387997100;
int8_t x113 = INT8_MIN;
uint32_t x120 = 7377345U;
volatile int32_t t23 = 17802607;
volatile int32_t x125 = -1;
int16_t x130 = INT16_MIN;
static volatile int8_t x131 = INT8_MIN;
int32_t t27 = 82;
uint64_t x153 = 451527779070825588LLU;
static int32_t x160 = -1;
static volatile int64_t x168 = -1LL;
int64_t x174 = INT64_MAX;
static int8_t x182 = INT8_MAX;
int8_t x194 = -22;
int32_t t38 = 1096708;
uint64_t x202 = 3076251893601LLU;
int64_t x205 = INT64_MIN;
int64_t x213 = -1LL;
uint32_t x217 = 76536U;
int16_t x224 = INT16_MAX;
uint8_t x225 = UINT8_MAX;
uint64_t x226 = 110118990680437LLU;
volatile int32_t t45 = -124439;
int64_t x231 = 71606909LL;
uint32_t x240 = UINT32_MAX;
volatile int32_t t49 = -836376;
uint8_t x250 = 0U;
uint64_t x252 = 4LLU;
int16_t x261 = INT16_MIN;
uint64_t x264 = 25390812LLU;
static int8_t x268 = INT8_MAX;
static int16_t x271 = -5;
int8_t x277 = INT8_MIN;
volatile int32_t t56 = -47049542;
volatile int8_t x284 = -1;
volatile int64_t x285 = 23718045948219704LL;
static int8_t x288 = 1;
volatile int32_t t60 = -10879267;
uint32_t x301 = 1587U;
static int8_t x305 = INT8_MAX;
volatile int32_t t62 = 1;
uint32_t x312 = UINT32_MAX;
uint64_t x316 = 10490136LLU;
int64_t x321 = INT64_MIN;
int64_t x323 = 3LL;
static volatile int32_t t66 = -21792;
volatile uint32_t x336 = 0U;
int64_t x343 = -1LL;
volatile int32_t x344 = INT32_MAX;
int16_t x361 = INT16_MIN;
int64_t x363 = 217371050821LL;
int32_t t72 = 99;
static int8_t x372 = INT8_MIN;
int32_t t76 = 0;
int16_t x404 = INT16_MIN;
static volatile uint64_t x405 = UINT64_MAX;
static int32_t x406 = 2;
uint16_t x411 = 124U;
int32_t t80 = -1528;
volatile int16_t x432 = -1;
int8_t x435 = INT8_MIN;
int64_t x438 = INT64_MIN;
static int64_t x441 = INT64_MIN;
static int8_t x442 = -30;
int8_t x444 = -1;
int32_t x445 = -1;
int16_t x448 = -22;
static volatile uint64_t x451 = 5127161046750LLU;
uint8_t x466 = UINT8_MAX;
int64_t x471 = INT64_MIN;
volatile int32_t x476 = -1;
uint8_t x478 = 11U;
static volatile uint32_t x480 = 131651U;
volatile int32_t t93 = 764;
int8_t x485 = INT8_MAX;
volatile int32_t x488 = INT32_MIN;
static int32_t t94 = 7;
static int32_t x490 = INT32_MIN;
volatile int32_t t98 = 45;
int32_t x514 = INT32_MIN;
int64_t x515 = INT64_MIN;
int32_t t99 = -52273375;
static volatile int16_t x521 = INT16_MIN;
int64_t x537 = -1LL;
static volatile int32_t t105 = 1729;
static int64_t x551 = -89130816079LL;
int8_t x560 = 0;
volatile int32_t t110 = 1;
int16_t x568 = 10534;
static int32_t t111 = -236684;
int32_t x570 = INT32_MAX;
int16_t x571 = -1;
int64_t x580 = -3883059239LL;
uint8_t x585 = UINT8_MAX;
int16_t x590 = -36;
volatile uint16_t x602 = UINT16_MAX;
volatile int16_t x616 = INT16_MAX;
int32_t t122 = 1;
int16_t x619 = INT16_MAX;
volatile int64_t x621 = INT64_MIN;
int64_t x625 = INT64_MAX;
int64_t x643 = 6703062338LL;
volatile int32_t t127 = -1852504;
uint16_t x672 = 18U;
int16_t x673 = INT16_MAX;
volatile int32_t t133 = -4893;
int16_t x683 = 869;
int32_t t135 = -205;
int32_t t136 = 48266953;
static uint64_t x696 = 6LLU;
int32_t x699 = INT32_MAX;
int32_t x701 = 533813146;
uint16_t x707 = 53U;
volatile int16_t x714 = INT16_MAX;
int32_t t144 = 553994;
int32_t t145 = 13;
static volatile int32_t x727 = 60;
volatile uint64_t x728 = UINT64_MAX;
int64_t x729 = 60684LL;
int32_t x731 = -36698773;
volatile uint8_t x741 = 2U;
int64_t x744 = INT64_MIN;
static int8_t x751 = -55;
int64_t x754 = -209760784482LL;
int8_t x763 = -1;
int8_t x769 = 0;
uint16_t x777 = 2358U;
static int32_t t158 = -7286437;
volatile int32_t t161 = 0;
static int32_t x802 = -82;
volatile int32_t t163 = -1531;
uint64_t x813 = UINT64_MAX;
uint8_t x815 = UINT8_MAX;
int32_t x827 = INT32_MAX;
int8_t x834 = INT8_MIN;
uint8_t x838 = 5U;
volatile int64_t x841 = 858052402487682991LL;
int16_t x842 = INT16_MIN;
uint8_t x843 = UINT8_MAX;
int8_t x844 = INT8_MIN;
volatile int32_t t171 = 319480;
volatile int32_t x858 = -626682;
volatile int16_t x861 = INT16_MAX;
int8_t x871 = -43;
static volatile int64_t x872 = -233LL;
volatile int64_t x876 = -1LL;
static int32_t t177 = -332663;
uint32_t x881 = UINT32_MAX;
static int32_t x882 = -1;
uint32_t x888 = 32U;
int8_t x900 = INT8_MAX;
uint8_t x906 = 5U;
uint16_t x938 = UINT16_MAX;
int32_t t190 = -676599;
int64_t x950 = 101618487LL;
volatile int32_t t191 = -28848051;
uint64_t x955 = 2LLU;
static int8_t x957 = 6;
uint8_t x967 = 5U;
static uint8_t x972 = 4U;
int8_t x975 = INT8_MIN;
int32_t t198 = 3;
volatile int32_t t199 = 207742533;


void f0(void) {
    	static int32_t x1 = -7;
	int8_t x2 = -57;
	static volatile int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 1688669;

    t0 = (((x1-x2)%x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = 249941;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 151;

    t1 = (((x5-x6)%x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	static volatile int8_t x14 = 1;
	uint64_t x15 = 165761245452664LLU;
	static volatile int32_t t2 = 53938;

    t2 = (((x13-x14)%x15)<=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = 3;
	int8_t x18 = 1;
	int16_t x19 = 3;
	volatile uint64_t x20 = 529872986275LLU;
	volatile int32_t t3 = -2;

    t3 = (((x17-x18)%x19)<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = -3;
	static int16_t x23 = INT16_MIN;
	volatile int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -55376;

    t4 = (((x21-x22)%x23)<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int64_t x27 = 29160212420LL;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = 162453966;

    t5 = (((x25-x26)%x27)<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	volatile int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	int32_t t6 = 59819066;

    t6 = (((x29-x30)%x31)<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 98;
	int8_t x34 = INT8_MIN;
	uint16_t x36 = 54U;

    t7 = (((x33-x34)%x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 349U;
	static uint32_t x38 = 3614861U;
	uint8_t x40 = UINT8_MAX;
	int32_t t8 = -160945955;

    t8 = (((x37-x38)%x39)<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x50 = INT32_MIN;
	static int32_t x51 = INT32_MIN;
	uint32_t x52 = 4238978U;
	int32_t t9 = -3;

    t9 = (((x49-x50)%x51)<=x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = 2U;
	uint64_t x62 = 20704999022910LLU;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MIN;
	static int32_t t10 = 0;

    t10 = (((x61-x62)%x63)<=x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x65 = 2LL;
	int64_t x66 = -2177472973546993LL;
	static int16_t x67 = 10;
	static uint8_t x68 = 15U;
	static int32_t t11 = -173;

    t11 = (((x65-x66)%x67)<=x68);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x69 = 3983;
	int32_t x70 = INT32_MAX;
	volatile uint16_t x71 = 11U;
	int64_t x72 = 125340180775LL;
	int32_t t12 = 941;

    t12 = (((x69-x70)%x71)<=x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x75 = -3421;
	volatile int32_t x76 = -1;
	volatile int32_t t13 = 5658714;

    t13 = (((x73-x74)%x75)<=x76);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = 29LL;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t14 = -134346;

    t14 = (((x77-x78)%x79)<=x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 2879378872446LLU;
	int64_t x88 = -1382LL;
	int32_t t15 = -1554591;

    t15 = (((x85-x86)%x87)<=x88);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile uint8_t x90 = 7U;
	uint64_t x91 = UINT64_MAX;
	uint16_t x92 = 138U;
	volatile int32_t t16 = -384;

    t16 = (((x89-x90)%x91)<=x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x94 = -468971816023063633LL;
	int32_t x96 = 1;

    t17 = (((x93-x94)%x95)<=x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x97 = -7;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	static int32_t x100 = INT32_MIN;

    t18 = (((x97-x98)%x99)<=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x101 = 109U;
	volatile uint8_t x102 = UINT8_MAX;
	static int8_t x103 = INT8_MIN;
	uint32_t x104 = 18420U;
	volatile int32_t t19 = -30055827;

    t19 = (((x101-x102)%x103)<=x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x109 = 0;
	int8_t x110 = 29;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t20 = 29096090;

    t20 = (((x109-x110)%x111)<=x112);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x114 = INT64_MIN;
	static int32_t x115 = INT32_MIN;
	volatile int16_t x116 = INT16_MIN;
	int32_t t21 = -755375852;

    t21 = (((x113-x114)%x115)<=x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x117 = 861;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = INT16_MAX;
	int32_t t22 = -59409219;

    t22 = (((x117-x118)%x119)<=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x121 = INT8_MIN;
	static uint64_t x122 = UINT64_MAX;
	int64_t x123 = 167756298361LL;
	int16_t x124 = INT16_MAX;

    t23 = (((x121-x122)%x123)<=x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x126 = 81;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 13303LLU;
	int32_t t24 = -57777650;

    t24 = (((x125-x126)%x127)<=x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x129 = 121U;
	uint64_t x132 = 207072623066155LLU;
	volatile int32_t t25 = 179310;

    t25 = (((x129-x130)%x131)<=x132);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x133 = INT16_MAX;
	uint8_t x134 = 9U;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = 1138;
	volatile int32_t t26 = 166224;

    t26 = (((x133-x134)%x135)<=x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x137 = INT32_MIN;
	uint64_t x138 = 27LLU;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;

    t27 = (((x137-x138)%x139)<=x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x149 = 152U;
	uint16_t x150 = 640U;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t28 = 91;

    t28 = (((x149-x150)%x151)<=x152);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x154 = 5U;
	int64_t x155 = -1LL;
	volatile int64_t x156 = INT64_MIN;
	int32_t t29 = 388068;

    t29 = (((x153-x154)%x155)<=x156);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x157 = 1911U;
	int8_t x158 = INT8_MAX;
	volatile int16_t x159 = -1;
	int32_t t30 = 31498126;

    t30 = (((x157-x158)%x159)<=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = 83;
	int32_t x162 = -5;
	static int16_t x163 = -1;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t31 = 0;

    t31 = (((x161-x162)%x163)<=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x165 = 105U;
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = INT32_MAX;
	static int32_t t32 = -107;

    t32 = (((x165-x166)%x167)<=x168);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = INT16_MIN;
	static uint8_t x170 = UINT8_MAX;
	volatile int16_t x171 = INT16_MAX;
	volatile uint16_t x172 = UINT16_MAX;
	int32_t t33 = -207736787;

    t33 = (((x169-x170)%x171)<=x172);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x173 = 1U;
	volatile int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t34 = -115;

    t34 = (((x173-x174)%x175)<=x176);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x177 = -1LL;
	static int16_t x178 = -6;
	int8_t x179 = INT8_MIN;
	static volatile uint64_t x180 = 520912759799854144LLU;
	int32_t t35 = -4733;

    t35 = (((x177-x178)%x179)<=x180);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = -57;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	int32_t t36 = -127;

    t36 = (((x181-x182)%x183)<=x184);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x189 = INT16_MAX;
	int32_t x190 = -2007313;
	uint32_t x191 = UINT32_MAX;
	uint8_t x192 = 87U;
	volatile int32_t t37 = 6946;

    t37 = (((x189-x190)%x191)<=x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x193 = INT64_MIN;
	static uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 10U;

    t38 = (((x193-x194)%x195)<=x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x197 = UINT32_MAX;
	static int32_t x198 = -1;
	int16_t x199 = INT16_MIN;
	static int8_t x200 = -1;
	volatile int32_t t39 = -41240;

    t39 = (((x197-x198)%x199)<=x200);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x201 = -12197;
	static int32_t x203 = -1496703;
	int32_t x204 = INT32_MAX;
	volatile int32_t t40 = 34684;

    t40 = (((x201-x202)%x203)<=x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x206 = INT32_MIN;
	uint8_t x207 = 19U;
	int8_t x208 = INT8_MIN;
	int32_t t41 = -8017342;

    t41 = (((x205-x206)%x207)<=x208);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x214 = -1;
	volatile uint8_t x215 = UINT8_MAX;
	uint64_t x216 = 663LLU;
	volatile int32_t t42 = 0;

    t42 = (((x213-x214)%x215)<=x216);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x218 = INT16_MIN;
	int16_t x219 = 118;
	uint8_t x220 = 61U;
	int32_t t43 = -22257293;

    t43 = (((x217-x218)%x219)<=x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x221 = 1356U;
	int16_t x222 = -1226;
	uint16_t x223 = 1U;
	static volatile int32_t t44 = -778;

    t44 = (((x221-x222)%x223)<=x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x227 = INT64_MIN;
	uint64_t x228 = 245490832154892533LLU;

    t45 = (((x225-x226)%x227)<=x228);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x229 = 82LLU;
	volatile int16_t x230 = INT16_MIN;
	static int16_t x232 = INT16_MAX;
	static int32_t t46 = 9342;

    t46 = (((x229-x230)%x231)<=x232);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x233 = -6434;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = 3189284235807234LLU;
	static int32_t t47 = 929;

    t47 = (((x233-x234)%x235)<=x236);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x237 = -989;
	static int16_t x238 = -1;
	uint64_t x239 = 2536LLU;
	int32_t t48 = 31133533;

    t48 = (((x237-x238)%x239)<=x240);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x245 = INT8_MAX;
	int32_t x246 = 2595320;
	volatile int32_t x247 = -1;
	uint16_t x248 = 122U;

    t49 = (((x245-x246)%x247)<=x248);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x249 = UINT16_MAX;
	int8_t x251 = -1;
	int32_t t50 = 64993;

    t50 = (((x249-x250)%x251)<=x252);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x253 = INT16_MIN;
	static uint64_t x254 = 1LLU;
	uint32_t x255 = 627557205U;
	int16_t x256 = 6;
	volatile int32_t t51 = 2293;

    t51 = (((x253-x254)%x255)<=x256);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x257 = INT8_MAX;
	int32_t x258 = 119388;
	uint64_t x259 = 464LLU;
	uint8_t x260 = UINT8_MAX;
	int32_t t52 = -1018648162;

    t52 = (((x257-x258)%x259)<=x260);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x262 = 21U;
	uint64_t x263 = 506938495897374958LLU;
	int32_t t53 = 394302486;

    t53 = (((x261-x262)%x263)<=x264);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x265 = INT32_MIN;
	int32_t x266 = -3992;
	int64_t x267 = 142559LL;
	volatile int32_t t54 = 8476617;

    t54 = (((x265-x266)%x267)<=x268);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x269 = 248222LLU;
	int64_t x270 = INT64_MAX;
	static volatile uint32_t x272 = 1589355U;
	volatile int32_t t55 = 2695;

    t55 = (((x269-x270)%x271)<=x272);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x278 = -958;
	static int64_t x279 = -1LL;
	static int32_t x280 = 18146146;

    t56 = (((x277-x278)%x279)<=x280);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x281 = -1;
	int16_t x282 = 14;
	int8_t x283 = -1;
	int32_t t57 = 1;

    t57 = (((x281-x282)%x283)<=x284);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x286 = INT64_MAX;
	static uint64_t x287 = 33978550191LLU;
	int32_t t58 = -451327301;

    t58 = (((x285-x286)%x287)<=x288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	uint32_t x295 = UINT32_MAX;
	uint32_t x296 = 615U;
	volatile int32_t t59 = -45177821;

    t59 = (((x293-x294)%x295)<=x296);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x297 = 18487669701093LL;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 34178581LLU;
	int16_t x300 = INT16_MIN;

    t60 = (((x297-x298)%x299)<=x300);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x302 = INT8_MAX;
	int16_t x303 = 58;
	int16_t x304 = INT16_MAX;
	volatile int32_t t61 = 8921578;

    t61 = (((x301-x302)%x303)<=x304);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x306 = 505U;
	static volatile int32_t x307 = -125781397;
	static int16_t x308 = -1;

    t62 = (((x305-x306)%x307)<=x308);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = 0;
	static int64_t x310 = 498828466601755671LL;
	int64_t x311 = INT64_MIN;
	volatile int32_t t63 = -57666326;

    t63 = (((x309-x310)%x311)<=x312);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = 1;
	volatile int8_t x315 = INT8_MAX;
	int32_t t64 = -5903;

    t64 = (((x313-x314)%x315)<=x316);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x322 = 3281105838904940LLU;
	uint8_t x324 = 7U;
	int32_t t65 = 0;

    t65 = (((x321-x322)%x323)<=x324);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = -13;
	uint16_t x327 = UINT16_MAX;
	static int32_t x328 = INT32_MAX;

    t66 = (((x325-x326)%x327)<=x328);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x333 = 11911305252LLU;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	int32_t t67 = -20;

    t67 = (((x333-x334)%x335)<=x336);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x337 = INT32_MIN;
	static int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static volatile int8_t x340 = INT8_MAX;
	int32_t t68 = -94216;

    t68 = (((x337-x338)%x339)<=x340);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x341 = 0;
	uint32_t x342 = UINT32_MAX;
	int32_t t69 = -1923453;

    t69 = (((x341-x342)%x343)<=x344);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x353 = UINT32_MAX;
	static int64_t x354 = INT64_MAX;
	int8_t x355 = 30;
	static int16_t x356 = -1;
	volatile int32_t t70 = 442906;

    t70 = (((x353-x354)%x355)<=x356);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x362 = 57;
	int32_t x364 = -25213;
	volatile int32_t t71 = 153111322;

    t71 = (((x361-x362)%x363)<=x364);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MAX;
	uint8_t x367 = 14U;
	static int16_t x368 = INT16_MIN;

    t72 = (((x365-x366)%x367)<=x368);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x369 = 11848;
	volatile int8_t x370 = INT8_MIN;
	int16_t x371 = 1;
	volatile int32_t t73 = 15;

    t73 = (((x369-x370)%x371)<=x372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x373 = INT16_MIN;
	static uint32_t x374 = 1646300292U;
	static volatile uint32_t x375 = 511494U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t74 = 1;

    t74 = (((x373-x374)%x375)<=x376);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x381 = 132742268U;
	static int8_t x382 = INT8_MAX;
	uint64_t x383 = 909822536266970LLU;
	int64_t x384 = INT64_MIN;
	int32_t t75 = -1;

    t75 = (((x381-x382)%x383)<=x384);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x389 = 25524728U;
	volatile int8_t x390 = 1;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = INT32_MIN;

    t76 = (((x389-x390)%x391)<=x392);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x401 = -1LL;
	static uint16_t x402 = 7807U;
	volatile uint32_t x403 = UINT32_MAX;
	volatile int32_t t77 = -26;

    t77 = (((x401-x402)%x403)<=x404);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MAX;
	int32_t t78 = 53;

    t78 = (((x405-x406)%x407)<=x408);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x409 = 1;
	volatile uint64_t x410 = UINT64_MAX;
	int64_t x412 = INT64_MAX;
	volatile int32_t t79 = 6774302;

    t79 = (((x409-x410)%x411)<=x412);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x413 = -3;
	uint64_t x414 = 7LLU;
	static int8_t x415 = INT8_MAX;
	static int64_t x416 = INT64_MIN;

    t80 = (((x413-x414)%x415)<=x416);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x421 = -2LL;
	uint16_t x422 = 12U;
	int8_t x423 = INT8_MIN;
	int64_t x424 = INT64_MAX;
	int32_t t81 = 609;

    t81 = (((x421-x422)%x423)<=x424);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x429 = -58;
	int32_t x430 = -1;
	static volatile uint64_t x431 = 6LLU;
	int32_t t82 = 2466231;

    t82 = (((x429-x430)%x431)<=x432);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = UINT8_MAX;
	volatile uint8_t x436 = 1U;
	static volatile int32_t t83 = -3417;

    t83 = (((x433-x434)%x435)<=x436);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x437 = INT64_MIN;
	volatile uint32_t x439 = 105489934U;
	volatile uint8_t x440 = 22U;
	int32_t t84 = -12531579;

    t84 = (((x437-x438)%x439)<=x440);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x443 = 1U;
	volatile int32_t t85 = -2;

    t85 = (((x441-x442)%x443)<=x444);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x446 = -1;
	uint32_t x447 = 29U;
	int32_t t86 = -98;

    t86 = (((x445-x446)%x447)<=x448);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x449 = INT64_MIN;
	volatile int64_t x450 = INT64_MIN;
	int32_t x452 = -1;
	volatile int32_t t87 = 1;

    t87 = (((x449-x450)%x451)<=x452);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x453 = -1;
	int16_t x454 = INT16_MIN;
	volatile int8_t x455 = -1;
	static uint8_t x456 = UINT8_MAX;
	volatile int32_t t88 = 70;

    t88 = (((x453-x454)%x455)<=x456);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x465 = -1;
	volatile uint32_t x467 = 14876616U;
	uint32_t x468 = 32341689U;
	static int32_t t89 = 7294921;

    t89 = (((x465-x466)%x467)<=x468);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x469 = 91U;
	int16_t x470 = INT16_MAX;
	volatile uint32_t x472 = UINT32_MAX;
	volatile int32_t t90 = 6828;

    t90 = (((x469-x470)%x471)<=x472);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x473 = INT64_MAX;
	int16_t x474 = 1704;
	int8_t x475 = -11;
	int32_t t91 = -921652003;

    t91 = (((x473-x474)%x475)<=x476);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x477 = INT32_MAX;
	int16_t x479 = INT16_MIN;
	volatile int32_t t92 = -1;

    t92 = (((x477-x478)%x479)<=x480);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x481 = 3085118050LLU;
	uint32_t x482 = 39594818U;
	int8_t x483 = INT8_MAX;
	int32_t x484 = -9;

    t93 = (((x481-x482)%x483)<=x484);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x486 = 574LL;
	int64_t x487 = INT64_MIN;

    t94 = (((x485-x486)%x487)<=x488);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x489 = -1;
	uint32_t x491 = 29U;
	int8_t x492 = -1;
	static int32_t t95 = 779;

    t95 = (((x489-x490)%x491)<=x492);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = INT32_MIN;
	int32_t x495 = -1;
	int64_t x496 = -1LL;
	volatile int32_t t96 = 17516990;

    t96 = (((x493-x494)%x495)<=x496);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x497 = -1LL;
	int16_t x498 = -593;
	static int16_t x499 = INT16_MIN;
	int16_t x500 = 7459;
	int32_t t97 = 11;

    t97 = (((x497-x498)%x499)<=x500);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x501 = INT8_MAX;
	uint64_t x502 = 546400675941LLU;
	int16_t x503 = -1;
	uint16_t x504 = 2U;

    t98 = (((x501-x502)%x503)<=x504);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x513 = 2090598422078456212LLU;
	static uint32_t x516 = UINT32_MAX;

    t99 = (((x513-x514)%x515)<=x516);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x518 = -1LL;
	static int64_t x519 = INT64_MIN;
	static int32_t x520 = INT32_MIN;
	static int32_t t100 = -11945;

    t100 = (((x517-x518)%x519)<=x520);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x522 = -1;
	int64_t x523 = INT64_MIN;
	int64_t x524 = -1LL;
	int32_t t101 = -3278408;

    t101 = (((x521-x522)%x523)<=x524);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x525 = 407959720LL;
	volatile int16_t x526 = INT16_MAX;
	uint64_t x527 = 39584155LLU;
	volatile uint64_t x528 = 57122200498367480LLU;
	int32_t t102 = -292635;

    t102 = (((x525-x526)%x527)<=x528);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x529 = 231U;
	uint32_t x530 = 1291U;
	volatile int32_t x531 = -612;
	static uint64_t x532 = 1843553LLU;
	int32_t t103 = -107111;

    t103 = (((x529-x530)%x531)<=x532);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x533 = INT64_MIN;
	volatile uint64_t x534 = 181LLU;
	static uint16_t x535 = UINT16_MAX;
	int32_t x536 = -42467849;
	int32_t t104 = -147;

    t104 = (((x533-x534)%x535)<=x536);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x538 = 21U;
	int64_t x539 = INT64_MIN;
	uint8_t x540 = 34U;

    t105 = (((x537-x538)%x539)<=x540);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x541 = INT8_MIN;
	uint8_t x542 = 67U;
	int16_t x543 = INT16_MIN;
	static int32_t x544 = -121;
	volatile int32_t t106 = 15688;

    t106 = (((x541-x542)%x543)<=x544);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x545 = INT32_MIN;
	int64_t x546 = 53090LL;
	static uint32_t x547 = UINT32_MAX;
	int16_t x548 = 1;
	int32_t t107 = 1467;

    t107 = (((x545-x546)%x547)<=x548);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x549 = INT16_MIN;
	static volatile int8_t x550 = INT8_MIN;
	uint8_t x552 = 1U;
	volatile int32_t t108 = -9;

    t108 = (((x549-x550)%x551)<=x552);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MIN;
	uint16_t x559 = 1U;
	volatile int32_t t109 = -3095;

    t109 = (((x557-x558)%x559)<=x560);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x561 = 11089;
	static int16_t x562 = INT16_MIN;
	uint16_t x563 = 106U;
	uint8_t x564 = UINT8_MAX;

    t110 = (((x561-x562)%x563)<=x564);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x565 = INT16_MAX;
	static int32_t x566 = -1;
	int16_t x567 = 2925;

    t111 = (((x565-x566)%x567)<=x568);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x569 = 0;
	int32_t x572 = INT32_MIN;
	static int32_t t112 = 9353;

    t112 = (((x569-x570)%x571)<=x572);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x573 = 528614451873LLU;
	int8_t x574 = -1;
	uint8_t x575 = 1U;
	static uint8_t x576 = 1U;
	volatile int32_t t113 = -390;

    t113 = (((x573-x574)%x575)<=x576);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x577 = -1;
	volatile int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MIN;
	volatile int32_t t114 = 23562317;

    t114 = (((x577-x578)%x579)<=x580);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x581 = UINT32_MAX;
	uint32_t x582 = UINT32_MAX;
	int32_t x583 = INT32_MIN;
	int32_t x584 = -2118;
	int32_t t115 = -258621390;

    t115 = (((x581-x582)%x583)<=x584);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x586 = -115248758;
	int64_t x587 = INT64_MIN;
	static int32_t x588 = 166323;
	int32_t t116 = 17582811;

    t116 = (((x585-x586)%x587)<=x588);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x589 = 21624805U;
	uint64_t x591 = UINT64_MAX;
	uint16_t x592 = UINT16_MAX;
	static volatile int32_t t117 = 11928;

    t117 = (((x589-x590)%x591)<=x592);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x593 = INT32_MIN;
	static volatile uint64_t x594 = 508072444616311LLU;
	uint32_t x595 = 12227U;
	int8_t x596 = INT8_MAX;
	static int32_t t118 = 167;

    t118 = (((x593-x594)%x595)<=x596);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x597 = -1;
	int64_t x598 = -1LL;
	uint8_t x599 = UINT8_MAX;
	int8_t x600 = INT8_MIN;
	static int32_t t119 = -2;

    t119 = (((x597-x598)%x599)<=x600);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x601 = INT64_MAX;
	static int32_t x603 = INT32_MAX;
	uint8_t x604 = 115U;
	volatile int32_t t120 = -182229;

    t120 = (((x601-x602)%x603)<=x604);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x605 = -1;
	int64_t x606 = -32651240209LL;
	static int64_t x607 = 45710552LL;
	uint8_t x608 = 6U;
	volatile int32_t t121 = 328;

    t121 = (((x605-x606)%x607)<=x608);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x613 = -1;
	static int8_t x614 = INT8_MIN;
	volatile int32_t x615 = INT32_MIN;

    t122 = (((x613-x614)%x615)<=x616);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x617 = 63U;
	int64_t x618 = -1LL;
	static int32_t x620 = INT32_MIN;
	int32_t t123 = 30920343;

    t123 = (((x617-x618)%x619)<=x620);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x622 = -1;
	int16_t x623 = INT16_MAX;
	static int8_t x624 = -54;
	int32_t t124 = 0;

    t124 = (((x621-x622)%x623)<=x624);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x626 = INT64_MAX;
	volatile int32_t x627 = INT32_MIN;
	volatile int16_t x628 = -1;
	static volatile int32_t t125 = -89452138;

    t125 = (((x625-x626)%x627)<=x628);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x637 = UINT8_MAX;
	volatile int32_t x638 = 21;
	volatile int32_t x639 = INT32_MIN;
	static volatile int16_t x640 = INT16_MIN;
	static volatile int32_t t126 = -29358771;

    t126 = (((x637-x638)%x639)<=x640);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x641 = INT8_MIN;
	uint64_t x642 = 1739841676283312LLU;
	static int32_t x644 = -1;

    t127 = (((x641-x642)%x643)<=x644);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x645 = INT8_MIN;
	static uint8_t x646 = 122U;
	static volatile int16_t x647 = 942;
	static volatile uint32_t x648 = 1U;
	int32_t t128 = -206550;

    t128 = (((x645-x646)%x647)<=x648);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x649 = UINT64_MAX;
	volatile int32_t x650 = -249591;
	volatile int8_t x651 = INT8_MIN;
	int16_t x652 = 5;
	int32_t t129 = 76387032;

    t129 = (((x649-x650)%x651)<=x652);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 0U;
	int32_t x655 = INT32_MIN;
	uint8_t x656 = 2U;
	static int32_t t130 = 1;

    t130 = (((x653-x654)%x655)<=x656);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x661 = 251LL;
	int8_t x662 = 58;
	static volatile int64_t x663 = -1LL;
	int32_t x664 = -186999;
	int32_t t131 = 136513169;

    t131 = (((x661-x662)%x663)<=x664);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x669 = 0;
	static int64_t x670 = -1LL;
	int32_t x671 = INT32_MAX;
	int32_t t132 = -1;

    t132 = (((x669-x670)%x671)<=x672);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x674 = -1;
	int32_t x675 = INT32_MIN;
	static volatile int8_t x676 = 11;

    t133 = (((x673-x674)%x675)<=x676);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x677 = 0;
	volatile uint64_t x678 = 1120764911417767770LLU;
	uint8_t x679 = 30U;
	static int64_t x680 = -1LL;
	static volatile int32_t t134 = 34;

    t134 = (((x677-x678)%x679)<=x680);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x681 = 22;
	int32_t x682 = INT32_MAX;
	volatile int16_t x684 = INT16_MIN;

    t135 = (((x681-x682)%x683)<=x684);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x685 = -38;
	int16_t x686 = INT16_MIN;
	int8_t x687 = -1;
	volatile int8_t x688 = INT8_MIN;

    t136 = (((x685-x686)%x687)<=x688);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x689 = -1;
	static uint32_t x690 = 5552157U;
	static uint16_t x691 = 2U;
	int32_t x692 = INT32_MIN;
	int32_t t137 = -630368;

    t137 = (((x689-x690)%x691)<=x692);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x693 = -1540285551LL;
	volatile int8_t x694 = INT8_MAX;
	int16_t x695 = -1;
	int32_t t138 = -3994;

    t138 = (((x693-x694)%x695)<=x696);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x697 = 4U;
	int32_t x698 = -1;
	uint8_t x700 = 8U;
	volatile int32_t t139 = -160;

    t139 = (((x697-x698)%x699)<=x700);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x702 = INT8_MAX;
	int16_t x703 = -4557;
	volatile int16_t x704 = INT16_MAX;
	static int32_t t140 = 117;

    t140 = (((x701-x702)%x703)<=x704);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x705 = 21U;
	static volatile uint8_t x706 = 0U;
	static int64_t x708 = INT64_MIN;
	int32_t t141 = 112153;

    t141 = (((x705-x706)%x707)<=x708);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x709 = 0;
	int8_t x710 = 0;
	volatile uint32_t x711 = 63970U;
	static int8_t x712 = -1;
	volatile int32_t t142 = 3835820;

    t142 = (((x709-x710)%x711)<=x712);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	uint8_t x715 = 27U;
	static int32_t x716 = -1;
	volatile int32_t t143 = -321;

    t143 = (((x713-x714)%x715)<=x716);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x717 = -76780302;
	int64_t x718 = INT64_MIN;
	static volatile int64_t x719 = INT64_MAX;
	volatile int64_t x720 = INT64_MAX;

    t144 = (((x717-x718)%x719)<=x720);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x721 = INT8_MAX;
	int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	int32_t x724 = INT32_MIN;

    t145 = (((x721-x722)%x723)<=x724);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x725 = 107U;
	int64_t x726 = INT64_MAX;
	int32_t t146 = 1799;

    t146 = (((x725-x726)%x727)<=x728);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x730 = 52U;
	int16_t x732 = -1;
	static int32_t t147 = 717;

    t147 = (((x729-x730)%x731)<=x732);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x733 = INT16_MAX;
	static uint16_t x734 = 2227U;
	int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t148 = 29088;

    t148 = (((x733-x734)%x735)<=x736);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x737 = -1;
	static int32_t x738 = -1;
	int64_t x739 = INT64_MAX;
	int16_t x740 = 8351;
	volatile int32_t t149 = 14606806;

    t149 = (((x737-x738)%x739)<=x740);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x742 = INT16_MIN;
	uint64_t x743 = UINT64_MAX;
	int32_t t150 = -3492;

    t150 = (((x741-x742)%x743)<=x744);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x745 = UINT16_MAX;
	uint64_t x746 = 9420031195LLU;
	volatile int32_t x747 = -1;
	uint64_t x748 = 2364LLU;
	int32_t t151 = -1;

    t151 = (((x745-x746)%x747)<=x748);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int64_t x750 = 228350001436142LL;
	uint8_t x752 = 1U;
	static volatile int32_t t152 = 301;

    t152 = (((x749-x750)%x751)<=x752);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x753 = -1;
	static volatile int32_t x755 = 620145618;
	uint8_t x756 = UINT8_MAX;
	int32_t t153 = 16;

    t153 = (((x753-x754)%x755)<=x756);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x761 = INT32_MIN;
	volatile int32_t x762 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	int32_t t154 = -2034408;

    t154 = (((x761-x762)%x763)<=x764);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x770 = UINT16_MAX;
	volatile int16_t x771 = INT16_MIN;
	uint64_t x772 = 13255806LLU;
	int32_t t155 = -890;

    t155 = (((x769-x770)%x771)<=x772);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x773 = UINT32_MAX;
	int64_t x774 = -1LL;
	int16_t x775 = INT16_MIN;
	int32_t x776 = INT32_MIN;
	int32_t t156 = 1480;

    t156 = (((x773-x774)%x775)<=x776);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x778 = -1LL;
	uint8_t x779 = 8U;
	int8_t x780 = -26;
	int32_t t157 = 0;

    t157 = (((x777-x778)%x779)<=x780);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x781 = INT8_MIN;
	volatile int16_t x782 = -457;
	static volatile int8_t x783 = INT8_MIN;
	uint16_t x784 = 503U;

    t158 = (((x781-x782)%x783)<=x784);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x785 = -1509;
	int64_t x786 = -1LL;
	int64_t x787 = -499639LL;
	static uint8_t x788 = UINT8_MAX;
	static int32_t t159 = 293743580;

    t159 = (((x785-x786)%x787)<=x788);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 13477U;
	int8_t x791 = INT8_MIN;
	int32_t x792 = 1388;
	int32_t t160 = 31;

    t160 = (((x789-x790)%x791)<=x792);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x793 = 6U;
	int8_t x794 = -1;
	volatile int16_t x795 = -1;
	volatile uint32_t x796 = 11383U;

    t161 = (((x793-x794)%x795)<=x796);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x797 = 1U;
	int8_t x798 = 1;
	static uint8_t x799 = 38U;
	int64_t x800 = INT64_MAX;
	volatile int32_t t162 = 5022;

    t162 = (((x797-x798)%x799)<=x800);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x801 = 7406U;
	volatile int64_t x803 = INT64_MIN;
	uint32_t x804 = 3377658U;

    t163 = (((x801-x802)%x803)<=x804);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x814 = -5;
	int32_t x816 = -1;
	int32_t t164 = -30;

    t164 = (((x813-x814)%x815)<=x816);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x821 = 1998271514152LL;
	volatile uint32_t x822 = 944555845U;
	uint16_t x823 = 982U;
	volatile int64_t x824 = -1LL;
	int32_t t165 = -825;

    t165 = (((x821-x822)%x823)<=x824);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x825 = 8U;
	int32_t x826 = -1;
	static int8_t x828 = 0;
	int32_t t166 = -4621248;

    t166 = (((x825-x826)%x827)<=x828);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x833 = INT64_MIN;
	static int64_t x835 = INT64_MIN;
	volatile uint8_t x836 = 2U;
	int32_t t167 = 37911;

    t167 = (((x833-x834)%x835)<=x836);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x837 = -109;
	static int32_t x839 = INT32_MAX;
	int64_t x840 = INT64_MAX;
	static int32_t t168 = 44;

    t168 = (((x837-x838)%x839)<=x840);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t t169 = -11420;

    t169 = (((x841-x842)%x843)<=x844);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x845 = UINT32_MAX;
	int16_t x846 = -1376;
	volatile int8_t x847 = 4;
	int8_t x848 = -1;
	volatile int32_t t170 = 15713042;

    t170 = (((x845-x846)%x847)<=x848);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x849 = INT8_MIN;
	uint32_t x850 = UINT32_MAX;
	int16_t x851 = INT16_MIN;
	volatile uint32_t x852 = 41748220U;

    t171 = (((x849-x850)%x851)<=x852);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x853 = INT64_MIN;
	int32_t x854 = -4967245;
	int64_t x855 = INT64_MAX;
	int16_t x856 = INT16_MAX;
	int32_t t172 = 41;

    t172 = (((x853-x854)%x855)<=x856);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x857 = -1LL;
	int16_t x859 = INT16_MAX;
	uint64_t x860 = UINT64_MAX;
	int32_t t173 = 3636413;

    t173 = (((x857-x858)%x859)<=x860);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x862 = INT16_MIN;
	uint32_t x863 = 244U;
	static int16_t x864 = INT16_MIN;
	int32_t t174 = -3194;

    t174 = (((x861-x862)%x863)<=x864);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x865 = UINT16_MAX;
	uint32_t x866 = UINT32_MAX;
	uint8_t x867 = UINT8_MAX;
	uint16_t x868 = UINT16_MAX;
	static int32_t t175 = 51688106;

    t175 = (((x865-x866)%x867)<=x868);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x869 = -1;
	uint16_t x870 = UINT16_MAX;
	static int32_t t176 = -50716;

    t176 = (((x869-x870)%x871)<=x872);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x873 = INT64_MAX;
	static int32_t x874 = 363144363;
	int8_t x875 = -2;

    t177 = (((x873-x874)%x875)<=x876);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x883 = 2;
	uint16_t x884 = 1U;
	volatile int32_t t178 = 5137381;

    t178 = (((x881-x882)%x883)<=x884);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x885 = INT16_MIN;
	uint32_t x886 = UINT32_MAX;
	static uint16_t x887 = 14U;
	static volatile int32_t t179 = -7530;

    t179 = (((x885-x886)%x887)<=x888);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x889 = INT8_MIN;
	static uint8_t x890 = 55U;
	static int64_t x891 = -7003101LL;
	uint32_t x892 = 2014394U;
	volatile int32_t t180 = -386;

    t180 = (((x889-x890)%x891)<=x892);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x893 = -1;
	uint8_t x894 = 2U;
	static int8_t x895 = INT8_MIN;
	int16_t x896 = 1558;
	static volatile int32_t t181 = -1707;

    t181 = (((x893-x894)%x895)<=x896);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x897 = UINT64_MAX;
	uint8_t x898 = 5U;
	int8_t x899 = INT8_MIN;
	volatile int32_t t182 = 26232;

    t182 = (((x897-x898)%x899)<=x900);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x901 = UINT32_MAX;
	static uint32_t x902 = 0U;
	volatile int16_t x903 = INT16_MIN;
	int8_t x904 = INT8_MIN;
	volatile int32_t t183 = 1257;

    t183 = (((x901-x902)%x903)<=x904);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x905 = INT8_MIN;
	volatile int16_t x907 = -1;
	int16_t x908 = 1478;
	int32_t t184 = -846912096;

    t184 = (((x905-x906)%x907)<=x908);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x913 = INT64_MIN;
	volatile int64_t x914 = INT64_MIN;
	volatile int8_t x915 = INT8_MAX;
	uint8_t x916 = 56U;
	int32_t t185 = 1;

    t185 = (((x913-x914)%x915)<=x916);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x925 = INT16_MIN;
	static int16_t x926 = INT16_MAX;
	static uint32_t x927 = UINT32_MAX;
	static int8_t x928 = -6;
	volatile int32_t t186 = 1647964;

    t186 = (((x925-x926)%x927)<=x928);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x929 = 58U;
	volatile uint8_t x930 = 1U;
	int8_t x931 = INT8_MIN;
	int32_t x932 = INT32_MIN;
	int32_t t187 = -463959;

    t187 = (((x929-x930)%x931)<=x932);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x933 = INT16_MAX;
	static int8_t x934 = INT8_MAX;
	int16_t x935 = -1;
	int32_t x936 = INT32_MAX;
	volatile int32_t t188 = -7868;

    t188 = (((x933-x934)%x935)<=x936);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x937 = 24U;
	int64_t x939 = -8286713608053LL;
	uint8_t x940 = UINT8_MAX;
	volatile int32_t t189 = 1038635983;

    t189 = (((x937-x938)%x939)<=x940);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x941 = -5;
	volatile int64_t x942 = -1LL;
	uint8_t x943 = 40U;
	int64_t x944 = -1LL;

    t190 = (((x941-x942)%x943)<=x944);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x949 = -1LL;
	static int32_t x951 = INT32_MIN;
	uint8_t x952 = UINT8_MAX;

    t191 = (((x949-x950)%x951)<=x952);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x953 = -1;
	int16_t x954 = INT16_MIN;
	uint32_t x956 = 1070145648U;
	static volatile int32_t t192 = -26498955;

    t192 = (((x953-x954)%x955)<=x956);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x958 = -1LL;
	uint16_t x959 = UINT16_MAX;
	static int64_t x960 = -4105413387LL;
	int32_t t193 = -932772;

    t193 = (((x957-x958)%x959)<=x960);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x961 = INT32_MIN;
	uint64_t x962 = 216604355LLU;
	uint64_t x963 = UINT64_MAX;
	static int8_t x964 = INT8_MIN;
	static int32_t t194 = 7344;

    t194 = (((x961-x962)%x963)<=x964);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x965 = UINT8_MAX;
	int16_t x966 = -4;
	static int32_t x968 = -1666;
	volatile int32_t t195 = 408471;

    t195 = (((x965-x966)%x967)<=x968);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x969 = 1054438U;
	volatile uint64_t x970 = 133682209098LLU;
	int64_t x971 = INT64_MAX;
	int32_t t196 = 3650688;

    t196 = (((x969-x970)%x971)<=x972);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x973 = 17016104LL;
	int32_t x974 = INT32_MIN;
	uint16_t x976 = 15824U;
	int32_t t197 = 4;

    t197 = (((x973-x974)%x975)<=x976);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x977 = -1;
	int16_t x978 = 1;
	int8_t x979 = -1;
	volatile int64_t x980 = INT64_MAX;

    t198 = (((x977-x978)%x979)<=x980);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x981 = 883212455567964143LLU;
	int32_t x982 = INT32_MIN;
	uint32_t x983 = 22200U;
	uint16_t x984 = UINT16_MAX;

    t199 = (((x981-x982)%x983)<=x984);

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

