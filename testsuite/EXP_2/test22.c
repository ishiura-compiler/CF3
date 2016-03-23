
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
int16_t x3 = INT16_MIN;
int8_t x6 = 1;
volatile int32_t t3 = 0;
static int16_t x18 = INT16_MIN;
static uint64_t x29 = 310730665LLU;
static uint8_t x30 = 9U;
int32_t t7 = -1;
volatile int32_t t8 = -1;
int32_t x44 = -1;
static uint32_t x45 = UINT32_MAX;
uint16_t x53 = 5U;
volatile int16_t x59 = -1;
int32_t t14 = 478;
int16_t x89 = INT16_MIN;
int16_t x90 = -1;
static uint8_t x91 = 7U;
static volatile int32_t t21 = -4;
int16_t x116 = -1;
int32_t t24 = 227;
int16_t x131 = INT16_MIN;
volatile int32_t t26 = -691;
uint16_t x135 = UINT16_MAX;
int8_t x141 = 13;
static uint32_t x144 = UINT32_MAX;
int64_t x148 = -1431923LL;
static volatile int32_t x155 = INT32_MIN;
uint32_t x157 = UINT32_MAX;
int32_t t33 = -7160;
volatile uint32_t x174 = 162940U;
static int32_t x177 = -61267007;
uint8_t x190 = 9U;
static uint32_t x191 = 651097078U;
int16_t x196 = INT16_MAX;
static int16_t x203 = -1;
int8_t x207 = INT8_MIN;
volatile uint64_t x221 = UINT64_MAX;
int8_t x222 = INT8_MAX;
uint32_t x224 = 23U;
int8_t x225 = -1;
volatile int16_t x226 = -13424;
int32_t x227 = INT32_MAX;
int16_t x230 = INT16_MIN;
int32_t t49 = 1062866544;
volatile int32_t t51 = 7812;
uint8_t x247 = UINT8_MAX;
int64_t x248 = INT64_MAX;
int64_t x251 = -1LL;
static int64_t x256 = INT64_MIN;
volatile uint8_t x257 = 1U;
int32_t t55 = -25887097;
static volatile uint32_t x265 = 2255433U;
int8_t x266 = 0;
uint16_t x268 = 31U;
static volatile int32_t t57 = -618315015;
int64_t x269 = INT64_MAX;
int32_t t58 = 1;
int32_t t59 = 262288;
int8_t x290 = -37;
static uint16_t x292 = UINT16_MAX;
int32_t t63 = -16890;
static volatile int32_t t64 = -107;
uint16_t x312 = 1U;
volatile int32_t t66 = 5910;
int8_t x313 = INT8_MIN;
static uint8_t x320 = 17U;
volatile int8_t x323 = -1;
int64_t x328 = INT64_MAX;
int16_t x333 = INT16_MAX;
volatile uint8_t x334 = 0U;
int16_t x343 = INT16_MIN;
int32_t x348 = 45;
int64_t x349 = INT64_MIN;
int32_t t74 = -54690335;
uint32_t x355 = 25U;
int32_t t75 = 881;
volatile int32_t x358 = -1322695;
int32_t t76 = -224;
int16_t x362 = 3809;
volatile uint32_t x369 = 7260U;
int16_t x381 = INT16_MIN;
volatile int16_t x388 = INT16_MIN;
static volatile int16_t x394 = INT16_MAX;
volatile int32_t t83 = 442545928;
volatile int32_t t85 = -3082682;
volatile int8_t x406 = 54;
volatile int32_t t87 = -436234;
int8_t x423 = INT8_MIN;
int8_t x425 = INT8_MIN;
int16_t x426 = INT16_MAX;
static volatile int16_t x440 = INT16_MIN;
static int32_t t92 = 3023780;
static volatile int16_t x447 = -1;
static volatile int32_t t93 = 1;
static volatile int8_t x456 = INT8_MAX;
int64_t x460 = 1LL;
int32_t t96 = 116;
int64_t x473 = -1LL;
int64_t x475 = INT64_MIN;
int8_t x477 = INT8_MAX;
uint8_t x491 = 0U;
int8_t x494 = -1;
static volatile int64_t x497 = -1LL;
uint8_t x501 = UINT8_MAX;
int8_t x512 = INT8_MIN;
static int32_t t105 = -477;
uint64_t x518 = 984386LLU;
int8_t x521 = -1;
int32_t x523 = 6;
uint8_t x525 = 105U;
int16_t x529 = INT16_MIN;
volatile int32_t t109 = 0;
int32_t x533 = 1007628;
volatile int16_t x536 = -1;
static volatile int32_t t111 = 2901;
static uint32_t x544 = UINT32_MAX;
volatile int32_t t113 = 1949;
int8_t x566 = -1;
static int16_t x574 = INT16_MIN;
int16_t x580 = INT16_MIN;
int32_t t118 = 2189;
uint64_t x584 = 11054494914945966LLU;
static int16_t x594 = INT16_MAX;
int32_t t121 = -28;
uint64_t x598 = 2022425798LLU;
static int32_t t122 = -305;
uint64_t x620 = UINT64_MAX;
int32_t t125 = -507804253;
int16_t x636 = -31;
static int16_t x639 = -1;
int32_t t128 = 439238;
volatile int32_t t129 = 401;
int32_t x662 = INT32_MAX;
static int8_t x663 = 0;
uint8_t x664 = 107U;
volatile int32_t t132 = -492926;
uint64_t x667 = UINT64_MAX;
volatile int32_t t133 = -1683162;
static int32_t x677 = INT32_MAX;
uint32_t x680 = 7649U;
int8_t x684 = INT8_MAX;
uint8_t x694 = 2U;
int32_t x706 = INT32_MIN;
static uint64_t x707 = UINT64_MAX;
int64_t x709 = -6185143957LL;
int16_t x713 = INT16_MIN;
uint8_t x718 = 0U;
int32_t x723 = 6806;
int64_t x724 = INT64_MIN;
volatile int32_t t146 = 515161824;
volatile uint8_t x736 = 1U;
static uint8_t x751 = 29U;
int8_t x754 = INT8_MIN;
uint64_t x758 = 172LLU;
int32_t x760 = 656930;
static volatile int32_t t154 = 3868;
uint16_t x771 = 8160U;
int32_t x781 = INT32_MIN;
volatile int8_t x783 = INT8_MIN;
int16_t x790 = -1;
volatile int32_t t158 = 149;
volatile uint8_t x799 = UINT8_MAX;
int32_t t162 = 388352;
static int16_t x837 = INT16_MAX;
int64_t x839 = -14094LL;
uint16_t x842 = UINT16_MAX;
uint64_t x847 = 544407122215593LLU;
volatile int32_t x851 = 1427780;
volatile uint32_t x854 = 0U;
int64_t x859 = -763060LL;
int32_t t170 = 78924353;
int16_t x882 = INT16_MIN;
int32_t t175 = -2337;
int16_t x893 = 1;
static int64_t x894 = -1LL;
uint8_t x896 = 116U;
uint8_t x897 = UINT8_MAX;
static int32_t x909 = INT32_MIN;
uint64_t x911 = 31976927464636500LLU;
int64_t x913 = -1LL;
int32_t x925 = INT32_MIN;
uint32_t x927 = 26183274U;
int32_t t181 = 821184;
int64_t x934 = -387445LL;
int32_t x936 = INT32_MIN;
int8_t x944 = -1;
volatile uint16_t x956 = UINT16_MAX;
int64_t x961 = -381085155090LL;
static volatile uint8_t x963 = UINT8_MAX;
static volatile int32_t t189 = -22;
int32_t t190 = -20;
static int32_t t191 = 3851;
int16_t x978 = INT16_MIN;
int16_t x983 = 17;
volatile uint16_t x984 = 2U;
int32_t t193 = 10;
static int64_t x985 = -11677632109LL;
uint16_t x990 = UINT16_MAX;
volatile uint32_t x999 = 78U;
static int16_t x1004 = -2;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	int64_t x4 = -5187594320814856LL;
	volatile int32_t t0 = 182117;

    t0 = ((x1-(x2+x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 916;
	int32_t x7 = -1;
	int8_t x8 = -1;
	volatile int32_t t1 = 60768;

    t1 = ((x5-(x6+x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int64_t x10 = -94173032121275LL;
	static volatile int16_t x11 = 38;
	uint32_t x12 = UINT32_MAX;
	static int32_t t2 = -88;

    t2 = ((x9-(x10+x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 302788469339891LLU;

    t3 = ((x13-(x14+x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 3371U;
	static uint16_t x19 = UINT16_MAX;
	volatile uint16_t x20 = 3298U;
	volatile int32_t t4 = 39911446;

    t4 = ((x17-(x18+x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int16_t x22 = INT16_MAX;
	int16_t x23 = -1;
	uint16_t x24 = 167U;
	int32_t t5 = -15;

    t5 = ((x21-(x22+x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 56;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = 3037496;
	int8_t x28 = 11;
	volatile int32_t t6 = -2923;

    t6 = ((x25-(x26+x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x31 = 26U;
	uint32_t x32 = UINT32_MAX;

    t7 = ((x29-(x30+x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 613127U;
	uint8_t x40 = UINT8_MAX;

    t8 = ((x37-(x38+x39))==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MAX;
	static int64_t x42 = 40426262726614496LL;
	uint8_t x43 = UINT8_MAX;
	int32_t t9 = -688779;

    t9 = ((x41-(x42+x43))==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = INT64_MAX;
	int8_t x47 = -43;
	int32_t x48 = INT32_MAX;
	int32_t t10 = -61422066;

    t10 = ((x45-(x46+x47))==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -72727;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = UINT32_MAX;
	uint8_t x52 = 0U;
	static volatile int32_t t11 = -61;

    t11 = ((x49-(x50+x51))==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x54 = -1;
	static int16_t x55 = -5;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = 191;

    t12 = ((x53-(x54+x55))==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	volatile int32_t x58 = INT32_MAX;
	static uint8_t x60 = 126U;
	int32_t t13 = -39959572;

    t13 = ((x57-(x58+x59))==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = 3371;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = UINT64_MAX;
	volatile uint16_t x64 = 4U;

    t14 = ((x61-(x62+x63))==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint32_t x66 = 19U;
	volatile uint64_t x67 = 521909LLU;
	int16_t x68 = -29;
	volatile int32_t t15 = 456006958;

    t15 = ((x65-(x66+x67))==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MAX;
	uint32_t x79 = 44861374U;
	int8_t x80 = 5;
	volatile int32_t t16 = -1395423;

    t16 = ((x77-(x78+x79))==x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x81 = INT64_MAX;
	volatile uint64_t x82 = 686085230651676333LLU;
	uint8_t x83 = 4U;
	static int32_t x84 = INT32_MAX;
	int32_t t17 = -785277807;

    t17 = ((x81-(x82+x83))==x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 901130610507109LLU;
	uint64_t x86 = UINT64_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t18 = -637669;

    t18 = ((x85-(x86+x87))==x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x92 = -29538;
	static volatile int32_t t19 = 0;

    t19 = ((x89-(x90+x91))==x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = -119611;
	int16_t x94 = -1;
	uint32_t x95 = 1778954964U;
	int32_t x96 = INT32_MIN;
	int32_t t20 = 4548904;

    t20 = ((x93-(x94+x95))==x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x97 = -1;
	static int16_t x98 = -1;
	static int32_t x99 = -1;
	uint64_t x100 = UINT64_MAX;

    t21 = ((x97-(x98+x99))==x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MIN;
	volatile int8_t x102 = 3;
	uint32_t x103 = 1890U;
	static int16_t x104 = -1;
	int32_t t22 = 703;

    t22 = ((x101-(x102+x103))==x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x109 = 450958;
	volatile int64_t x110 = -1LL;
	int8_t x111 = 0;
	uint64_t x112 = 221932LLU;
	int32_t t23 = 349;

    t23 = ((x109-(x110+x111))==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = INT32_MIN;
	int8_t x114 = -19;
	static int32_t x115 = -1;

    t24 = ((x113-(x114+x115))==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = 1;
	static uint8_t x118 = 122U;
	static volatile int8_t x119 = -1;
	volatile int64_t x120 = -1LL;
	int32_t t25 = -97862409;

    t25 = ((x117-(x118+x119))==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x129 = -49;
	volatile int32_t x130 = -1;
	static uint8_t x132 = 3U;

    t26 = ((x129-(x130+x131))==x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x133 = 6984LL;
	int32_t x134 = INT32_MIN;
	volatile int16_t x136 = INT16_MAX;
	int32_t t27 = -12636794;

    t27 = ((x133-(x134+x135))==x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 709683U;
	int32_t t28 = -234125;

    t28 = ((x141-(x142+x143))==x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = -1;
	uint32_t x146 = UINT32_MAX;
	int8_t x147 = INT8_MIN;
	volatile int32_t t29 = -1989;

    t29 = ((x145-(x146+x147))==x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = 1058994;
	int64_t x150 = -1LL;
	volatile uint8_t x151 = 1U;
	static int32_t x152 = 44461;
	int32_t t30 = 35;

    t30 = ((x149-(x150+x151))==x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x153 = -1;
	static uint64_t x154 = 89665LLU;
	static int16_t x156 = 1;
	static int32_t t31 = -308279;

    t31 = ((x153-(x154+x155))==x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x158 = -10;
	int32_t x159 = -6356;
	volatile uint64_t x160 = 225199996888447LLU;
	int32_t t32 = -8322686;

    t32 = ((x157-(x158+x159))==x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x161 = INT32_MIN;
	uint64_t x162 = 516LLU;
	int32_t x163 = INT32_MAX;
	int64_t x164 = 1426516LL;

    t33 = ((x161-(x162+x163))==x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x165 = 0U;
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 247U;
	volatile int16_t x168 = INT16_MIN;
	int32_t t34 = 37430;

    t34 = ((x165-(x166+x167))==x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = -1LL;
	int64_t x170 = -6759573685194LL;
	static uint16_t x171 = 3397U;
	int8_t x172 = -1;
	volatile int32_t t35 = 1144566;

    t35 = ((x169-(x170+x171))==x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x173 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = -1;
	volatile int32_t t36 = 4411376;

    t36 = ((x173-(x174+x175))==x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x178 = 6U;
	uint64_t x179 = 62035729198LLU;
	uint16_t x180 = 8U;
	int32_t t37 = -75247;

    t37 = ((x177-(x178+x179))==x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x181 = 1742;
	volatile int16_t x182 = -1;
	int16_t x183 = INT16_MIN;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t38 = -62;

    t38 = ((x181-(x182+x183))==x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x185 = UINT64_MAX;
	static uint32_t x186 = 18812U;
	int16_t x187 = INT16_MAX;
	volatile int64_t x188 = 7LL;
	volatile int32_t t39 = -6;

    t39 = ((x185-(x186+x187))==x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x189 = INT8_MAX;
	int64_t x192 = INT64_MIN;
	volatile int32_t t40 = 357;

    t40 = ((x189-(x190+x191))==x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x193 = -27;
	int32_t x194 = 2645;
	volatile int32_t x195 = -468602846;
	static int32_t t41 = -602746;

    t41 = ((x193-(x194+x195))==x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x197 = INT8_MIN;
	static uint64_t x198 = UINT64_MAX;
	uint32_t x199 = 5U;
	int64_t x200 = INT64_MIN;
	static int32_t t42 = -2;

    t42 = ((x197-(x198+x199))==x200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x201 = 8571682346403LLU;
	uint16_t x202 = 5U;
	volatile int8_t x204 = -25;
	int32_t t43 = -13167160;

    t43 = ((x201-(x202+x203))==x204);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x205 = -1LL;
	static int64_t x206 = -189300238661672863LL;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t44 = -23845;

    t44 = ((x205-(x206+x207))==x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x217 = UINT8_MAX;
	volatile int16_t x218 = INT16_MIN;
	static int8_t x219 = -1;
	static uint16_t x220 = 534U;
	int32_t t45 = 15516159;

    t45 = ((x217-(x218+x219))==x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x223 = INT16_MIN;
	volatile int32_t t46 = -1;

    t46 = ((x221-(x222+x223))==x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x228 = UINT32_MAX;
	volatile int32_t t47 = 10;

    t47 = ((x225-(x226+x227))==x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x229 = -128648;
	volatile int32_t x231 = -1;
	volatile uint16_t x232 = 5703U;
	volatile int32_t t48 = -122225526;

    t48 = ((x229-(x230+x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x233 = 286708687U;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = UINT32_MAX;
	volatile uint64_t x236 = 48715LLU;

    t49 = ((x233-(x234+x235))==x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x237 = -1;
	int64_t x238 = INT64_MIN;
	volatile uint16_t x239 = 2U;
	static volatile int32_t x240 = INT32_MAX;
	int32_t t50 = 54;

    t50 = ((x237-(x238+x239))==x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 5U;
	volatile int16_t x242 = -1;
	uint8_t x243 = 3U;
	static int16_t x244 = INT16_MIN;

    t51 = ((x241-(x242+x243))==x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x245 = -1;
	volatile int8_t x246 = INT8_MIN;
	static int32_t t52 = -497220589;

    t52 = ((x245-(x246+x247))==x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x252 = 5935;
	int32_t t53 = 0;

    t53 = ((x249-(x250+x251))==x252);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x253 = INT16_MAX;
	volatile int8_t x254 = 13;
	uint64_t x255 = 831143215491206434LLU;
	int32_t t54 = -13300;

    t54 = ((x253-(x254+x255))==x256);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x258 = 28033U;
	int64_t x259 = 25967751LL;
	uint32_t x260 = UINT32_MAX;

    t55 = ((x257-(x258+x259))==x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x261 = INT32_MIN;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = 43;
	int64_t x264 = 5LL;
	volatile int32_t t56 = 9819665;

    t56 = ((x261-(x262+x263))==x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x267 = UINT16_MAX;

    t57 = ((x265-(x266+x267))==x268);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	int16_t x272 = 7302;

    t58 = ((x269-(x270+x271))==x272);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = 28717182990LL;
	volatile int32_t x274 = -1;
	volatile uint32_t x275 = 1107U;
	volatile int32_t x276 = -2;

    t59 = ((x273-(x274+x275))==x276);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = INT16_MIN;
	volatile uint32_t x286 = UINT32_MAX;
	static int64_t x287 = INT64_MIN;
	uint64_t x288 = 559356299848074876LLU;
	volatile int32_t t60 = 88;

    t60 = ((x285-(x286+x287))==x288);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x289 = 453607075U;
	uint16_t x291 = 80U;
	static volatile int32_t t61 = -75309836;

    t61 = ((x289-(x290+x291))==x292);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x293 = INT64_MAX;
	uint16_t x294 = 4U;
	static uint64_t x295 = 73720LLU;
	volatile uint32_t x296 = 97U;
	int32_t t62 = -2168283;

    t62 = ((x293-(x294+x295))==x296);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x297 = 4162026;
	volatile int16_t x298 = INT16_MIN;
	volatile int16_t x299 = INT16_MIN;
	uint32_t x300 = 9U;

    t63 = ((x297-(x298+x299))==x300);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 52775U;
	static volatile uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MAX;

    t64 = ((x301-(x302+x303))==x304);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x305 = -1;
	static int64_t x306 = INT64_MIN;
	static uint32_t x307 = UINT32_MAX;
	volatile int64_t x308 = -63351LL;
	static int32_t t65 = 0;

    t65 = ((x305-(x306+x307))==x308);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x309 = -1;
	int64_t x310 = 98660684930148LL;
	uint16_t x311 = 210U;

    t66 = ((x309-(x310+x311))==x312);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x314 = INT32_MAX;
	uint64_t x315 = 3796LLU;
	volatile int64_t x316 = INT64_MIN;
	static volatile int32_t t67 = 41836;

    t67 = ((x313-(x314+x315))==x316);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x317 = 5689U;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = 3;
	int32_t t68 = -233;

    t68 = ((x317-(x318+x319))==x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x321 = UINT64_MAX;
	static int8_t x322 = 1;
	static int64_t x324 = -5563525LL;
	int32_t t69 = 293;

    t69 = ((x321-(x322+x323))==x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = -12;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 10682446LLU;
	int32_t t70 = 395049731;

    t70 = ((x325-(x326+x327))==x328);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t71 = -6;

    t71 = ((x333-(x334+x335))==x336);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x341 = 68U;
	static int8_t x342 = INT8_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t72 = 248;

    t72 = ((x341-(x342+x343))==x344);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x345 = 3U;
	int32_t x346 = -1;
	int16_t x347 = 643;
	volatile int32_t t73 = 393679;

    t73 = ((x345-(x346+x347))==x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x350 = 77835166LLU;
	int64_t x351 = 5783833450684LL;
	int16_t x352 = -1;

    t74 = ((x349-(x350+x351))==x352);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MAX;
	static volatile int8_t x356 = INT8_MIN;

    t75 = ((x353-(x354+x355))==x356);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x357 = -8478808013109LL;
	volatile uint64_t x359 = 245722152LLU;
	uint16_t x360 = UINT16_MAX;

    t76 = ((x357-(x358+x359))==x360);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x361 = INT16_MIN;
	static int8_t x363 = -1;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t77 = 77;

    t77 = ((x361-(x362+x363))==x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x365 = 1823626U;
	static int64_t x366 = -1LL;
	int64_t x367 = -1LL;
	volatile int32_t x368 = INT32_MAX;
	static volatile int32_t t78 = 0;

    t78 = ((x365-(x366+x367))==x368);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x370 = UINT16_MAX;
	int8_t x371 = -15;
	int32_t x372 = -381579198;
	volatile int32_t t79 = 57783602;

    t79 = ((x369-(x370+x371))==x372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x377 = 0U;
	uint32_t x378 = 1U;
	static int16_t x379 = 0;
	static uint16_t x380 = 10554U;
	volatile int32_t t80 = 2;

    t80 = ((x377-(x378+x379))==x380);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x382 = 80U;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = -82;
	static int32_t t81 = -202;

    t81 = ((x381-(x382+x383))==x384);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x385 = 1U;
	int8_t x386 = -21;
	static int8_t x387 = -22;
	static int32_t t82 = 12;

    t82 = ((x385-(x386+x387))==x388);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = 5;
	int8_t x395 = 7;
	uint16_t x396 = 89U;

    t83 = ((x393-(x394+x395))==x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MAX;
	int64_t x399 = -19254268597926LL;
	int16_t x400 = INT16_MIN;
	volatile int32_t t84 = -12474389;

    t84 = ((x397-(x398+x399))==x400);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x401 = 735860385209LLU;
	int64_t x402 = INT64_MIN;
	volatile int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;

    t85 = ((x401-(x402+x403))==x404);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x405 = 742U;
	volatile int64_t x407 = 3337716397904276515LL;
	int64_t x408 = -268762641503457446LL;
	volatile int32_t t86 = 0;

    t86 = ((x405-(x406+x407))==x408);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x417 = 0;
	int16_t x418 = INT16_MIN;
	static volatile uint32_t x419 = 0U;
	int8_t x420 = 0;

    t87 = ((x417-(x418+x419))==x420);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t88 = 6410424;

    t88 = ((x421-(x422+x423))==x424);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x427 = INT32_MIN;
	int32_t x428 = 6925202;
	static int32_t t89 = 1107;

    t89 = ((x425-(x426+x427))==x428);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x429 = INT32_MIN;
	uint32_t x430 = UINT32_MAX;
	int32_t x431 = INT32_MAX;
	int8_t x432 = -1;
	int32_t t90 = 2;

    t90 = ((x429-(x430+x431))==x432);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x433 = 20986111LLU;
	int16_t x434 = INT16_MAX;
	static uint8_t x435 = 59U;
	int32_t x436 = 1382345;
	int32_t t91 = -4007;

    t91 = ((x433-(x434+x435))==x436);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x437 = INT32_MAX;
	int32_t x438 = -1;
	uint32_t x439 = 67068U;

    t92 = ((x437-(x438+x439))==x440);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x445 = INT64_MIN;
	static int16_t x446 = INT16_MIN;
	volatile int32_t x448 = -1;

    t93 = ((x445-(x446+x447))==x448);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x453 = INT16_MAX;
	int32_t x454 = 238;
	int8_t x455 = 4;
	volatile int32_t t94 = 0;

    t94 = ((x453-(x454+x455))==x456);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x457 = 44LLU;
	static int16_t x458 = -1;
	uint8_t x459 = 1U;
	volatile int32_t t95 = -12292;

    t95 = ((x457-(x458+x459))==x460);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x465 = 0LL;
	uint8_t x466 = UINT8_MAX;
	uint64_t x467 = 119960237332621248LLU;
	int64_t x468 = -1LL;

    t96 = ((x465-(x466+x467))==x468);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x474 = 1;
	int16_t x476 = -1;
	volatile int32_t t97 = 35993020;

    t97 = ((x473-(x474+x475))==x476);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x478 = UINT64_MAX;
	uint8_t x479 = 3U;
	static volatile uint32_t x480 = UINT32_MAX;
	volatile int32_t t98 = -1255;

    t98 = ((x477-(x478+x479))==x480);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile int16_t x482 = -3160;
	uint8_t x483 = 81U;
	int64_t x484 = INT64_MAX;
	volatile int32_t t99 = 51368650;

    t99 = ((x481-(x482+x483))==x484);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MAX;
	int64_t x488 = 129071101389202670LL;
	int32_t t100 = -96611204;

    t100 = ((x485-(x486+x487))==x488);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	static volatile int16_t x492 = 999;
	int32_t t101 = 52719345;

    t101 = ((x489-(x490+x491))==x492);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x493 = 13U;
	uint64_t x495 = UINT64_MAX;
	static volatile uint16_t x496 = 14U;
	int32_t t102 = 143;

    t102 = ((x493-(x494+x495))==x496);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x498 = 16198995563LL;
	int64_t x499 = -5438869372102655LL;
	static int64_t x500 = -1LL;
	int32_t t103 = -120020;

    t103 = ((x497-(x498+x499))==x500);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x502 = -1;
	volatile uint16_t x503 = UINT16_MAX;
	static uint64_t x504 = 6350952676496LLU;
	int32_t t104 = 34378809;

    t104 = ((x501-(x502+x503))==x504);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x509 = -1;
	uint8_t x510 = UINT8_MAX;
	int64_t x511 = 3681215LL;

    t105 = ((x509-(x510+x511))==x512);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x517 = INT64_MIN;
	uint32_t x519 = 7875U;
	int8_t x520 = INT8_MIN;
	int32_t t106 = 5671129;

    t106 = ((x517-(x518+x519))==x520);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x522 = INT16_MIN;
	int16_t x524 = INT16_MAX;
	int32_t t107 = 701340;

    t107 = ((x521-(x522+x523))==x524);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x526 = INT8_MAX;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;
	int32_t t108 = -1;

    t108 = ((x525-(x526+x527))==x528);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x530 = 6;
	int8_t x531 = -14;
	static int16_t x532 = -1;

    t109 = ((x529-(x530+x531))==x532);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x534 = INT8_MIN;
	static int16_t x535 = -1;
	int32_t t110 = -462137802;

    t110 = ((x533-(x534+x535))==x536);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x537 = -604332992073373169LL;
	volatile int8_t x538 = 49;
	static int16_t x539 = INT16_MIN;
	static uint8_t x540 = UINT8_MAX;

    t111 = ((x537-(x538+x539))==x540);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x541 = 1869509532687948492LLU;
	int16_t x542 = INT16_MIN;
	int8_t x543 = INT8_MIN;
	static volatile int32_t t112 = -157282235;

    t112 = ((x541-(x542+x543))==x544);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x545 = -1;
	uint32_t x546 = 152814U;
	static int16_t x547 = -1;
	uint16_t x548 = 4U;

    t113 = ((x545-(x546+x547))==x548);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x549 = 204LLU;
	uint32_t x550 = 300366U;
	int8_t x551 = -1;
	uint16_t x552 = 4U;
	int32_t t114 = 310;

    t114 = ((x549-(x550+x551))==x552);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x553 = 3;
	int8_t x554 = -1;
	volatile int16_t x555 = 4;
	int16_t x556 = INT16_MIN;
	volatile int32_t t115 = -2300866;

    t115 = ((x553-(x554+x555))==x556);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x567 = UINT16_MAX;
	static int64_t x568 = 13920539839LL;
	int32_t t116 = 55382807;

    t116 = ((x565-(x566+x567))==x568);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x573 = 3986U;
	int8_t x575 = INT8_MIN;
	uint64_t x576 = 301675684876063500LLU;
	volatile int32_t t117 = 112825;

    t117 = ((x573-(x574+x575))==x576);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x577 = 13;
	volatile int32_t x578 = -3349;
	int16_t x579 = INT16_MIN;

    t118 = ((x577-(x578+x579))==x580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = -1LL;
	uint16_t x583 = UINT16_MAX;
	int32_t t119 = -31294;

    t119 = ((x581-(x582+x583))==x584);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x585 = 29764562U;
	int8_t x586 = INT8_MIN;
	static volatile int8_t x587 = INT8_MAX;
	int16_t x588 = INT16_MIN;
	volatile int32_t t120 = 399576643;

    t120 = ((x585-(x586+x587))==x588);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x593 = -1;
	static uint32_t x595 = UINT32_MAX;
	int8_t x596 = INT8_MAX;

    t121 = ((x593-(x594+x595))==x596);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x597 = 138LL;
	static int16_t x599 = -1;
	int64_t x600 = INT64_MIN;

    t122 = ((x597-(x598+x599))==x600);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	static uint32_t x606 = 6776U;
	static uint64_t x607 = UINT64_MAX;
	static uint8_t x608 = 99U;
	int32_t t123 = 44201;

    t123 = ((x605-(x606+x607))==x608);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x617 = 1U;
	uint32_t x618 = 5318446U;
	int8_t x619 = -43;
	int32_t t124 = 460858;

    t124 = ((x617-(x618+x619))==x620);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x621 = INT32_MIN;
	static uint64_t x622 = 695LLU;
	int64_t x623 = INT64_MIN;
	uint32_t x624 = 35079272U;

    t125 = ((x621-(x622+x623))==x624);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x629 = -10164245LL;
	uint64_t x630 = 5924LLU;
	int64_t x631 = INT64_MAX;
	int64_t x632 = INT64_MIN;
	volatile int32_t t126 = 0;

    t126 = ((x629-(x630+x631))==x632);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x633 = -1;
	int32_t x634 = -193111614;
	volatile int8_t x635 = INT8_MAX;
	static int32_t t127 = 21;

    t127 = ((x633-(x634+x635))==x636);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x637 = 27212LLU;
	int16_t x638 = -1;
	volatile int32_t x640 = -1;

    t128 = ((x637-(x638+x639))==x640);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x641 = -1;
	volatile int8_t x642 = -1;
	int8_t x643 = 1;
	uint8_t x644 = UINT8_MAX;

    t129 = ((x641-(x642+x643))==x644);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x653 = 10;
	int64_t x654 = -1LL;
	uint32_t x655 = UINT32_MAX;
	uint32_t x656 = 79U;
	volatile int32_t t130 = 18;

    t130 = ((x653-(x654+x655))==x656);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x658 = -1LL;
	int8_t x659 = 2;
	uint8_t x660 = 107U;
	int32_t t131 = -13441;

    t131 = ((x657-(x658+x659))==x660);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x661 = UINT16_MAX;

    t132 = ((x661-(x662+x663))==x664);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x665 = -48474;
	volatile int32_t x666 = INT32_MIN;
	uint32_t x668 = 1189716402U;

    t133 = ((x665-(x666+x667))==x668);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x669 = -2;
	int16_t x670 = INT16_MIN;
	int32_t x671 = INT32_MAX;
	volatile int8_t x672 = INT8_MAX;
	volatile int32_t t134 = 1171;

    t134 = ((x669-(x670+x671))==x672);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x673 = 928939;
	int16_t x674 = -1;
	int64_t x675 = 46044167565LL;
	static int64_t x676 = 490453LL;
	static volatile int32_t t135 = 36;

    t135 = ((x673-(x674+x675))==x676);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x678 = -1LL;
	static uint16_t x679 = 15448U;
	volatile int32_t t136 = -22;

    t136 = ((x677-(x678+x679))==x680);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x681 = 9518LLU;
	int8_t x682 = -2;
	int16_t x683 = -1;
	int32_t t137 = 137;

    t137 = ((x681-(x682+x683))==x684);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x689 = 1U;
	int64_t x690 = INT64_MAX;
	int64_t x691 = INT64_MIN;
	volatile uint16_t x692 = 24543U;
	static volatile int32_t t138 = 36655555;

    t138 = ((x689-(x690+x691))==x692);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x693 = -85174554110595815LL;
	volatile uint64_t x695 = 55764LLU;
	volatile uint8_t x696 = UINT8_MAX;
	volatile int32_t t139 = 21582260;

    t139 = ((x693-(x694+x695))==x696);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x697 = UINT8_MAX;
	static int64_t x698 = 1632973643170134LL;
	volatile int16_t x699 = INT16_MIN;
	static int16_t x700 = 4018;
	volatile int32_t t140 = 41;

    t140 = ((x697-(x698+x699))==x700);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x701 = 180;
	int64_t x702 = 909087567817LL;
	volatile uint16_t x703 = 819U;
	static uint8_t x704 = 7U;
	static int32_t t141 = 59207;

    t141 = ((x701-(x702+x703))==x704);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x705 = INT8_MIN;
	static int32_t x708 = INT32_MAX;
	static int32_t t142 = 277199;

    t142 = ((x705-(x706+x707))==x708);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x710 = -587764;
	uint8_t x711 = 25U;
	int32_t x712 = 1;
	volatile int32_t t143 = 513380915;

    t143 = ((x709-(x710+x711))==x712);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x714 = 389396U;
	int64_t x715 = 3022LL;
	uint64_t x716 = 150523882252LLU;
	volatile int32_t t144 = -20077;

    t144 = ((x713-(x714+x715))==x716);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x717 = 2594894695919558384LL;
	volatile uint32_t x719 = UINT32_MAX;
	int32_t x720 = 4;
	volatile int32_t t145 = -113655;

    t145 = ((x717-(x718+x719))==x720);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x721 = INT16_MAX;
	uint64_t x722 = UINT64_MAX;

    t146 = ((x721-(x722+x723))==x724);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x729 = INT32_MAX;
	static volatile uint16_t x730 = UINT16_MAX;
	static int8_t x731 = INT8_MAX;
	int64_t x732 = INT64_MIN;
	volatile int32_t t147 = 463223;

    t147 = ((x729-(x730+x731))==x732);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x733 = 669707340775LLU;
	static volatile int64_t x734 = INT64_MAX;
	volatile int16_t x735 = INT16_MIN;
	int32_t t148 = -472695;

    t148 = ((x733-(x734+x735))==x736);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x745 = INT16_MAX;
	int8_t x746 = 1;
	int16_t x747 = INT16_MIN;
	static int64_t x748 = 1023295376794LL;
	static int32_t t149 = -7497;

    t149 = ((x745-(x746+x747))==x748);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x749 = UINT16_MAX;
	int8_t x750 = INT8_MIN;
	int16_t x752 = INT16_MIN;
	volatile int32_t t150 = -1593973;

    t150 = ((x749-(x750+x751))==x752);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x753 = -5LL;
	int8_t x755 = 21;
	volatile uint64_t x756 = 3681158197369LLU;
	volatile int32_t t151 = -1144;

    t151 = ((x753-(x754+x755))==x756);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x757 = -1;
	uint16_t x759 = 0U;
	static volatile int32_t t152 = -188;

    t152 = ((x757-(x758+x759))==x760);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x761 = 78235129103061LL;
	static volatile uint32_t x762 = 96637U;
	volatile int8_t x763 = -1;
	volatile int32_t x764 = 7837;
	int32_t t153 = -92510;

    t153 = ((x761-(x762+x763))==x764);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x765 = -1LL;
	int32_t x766 = -1368;
	uint64_t x767 = 247299037916874472LLU;
	volatile int8_t x768 = -1;

    t154 = ((x765-(x766+x767))==x768);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x769 = UINT32_MAX;
	int8_t x770 = 1;
	uint8_t x772 = 2U;
	int32_t t155 = -23;

    t155 = ((x769-(x770+x771))==x772);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x773 = INT16_MAX;
	uint64_t x774 = 629LLU;
	int32_t x775 = INT32_MIN;
	uint32_t x776 = 994458U;
	static volatile int32_t t156 = 1895876;

    t156 = ((x773-(x774+x775))==x776);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x782 = INT16_MIN;
	static int16_t x784 = INT16_MIN;
	int32_t t157 = -1;

    t157 = ((x781-(x782+x783))==x784);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x789 = INT8_MIN;
	int8_t x791 = INT8_MIN;
	int64_t x792 = INT64_MIN;

    t158 = ((x789-(x790+x791))==x792);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	static volatile int8_t x798 = -1;
	static uint64_t x800 = 332LLU;
	int32_t t159 = 26673;

    t159 = ((x797-(x798+x799))==x800);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x801 = -1;
	int16_t x802 = -7116;
	int8_t x803 = 1;
	static volatile uint64_t x804 = 97137LLU;
	int32_t t160 = 420;

    t160 = ((x801-(x802+x803))==x804);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x805 = -12572LL;
	int8_t x806 = -1;
	uint16_t x807 = UINT16_MAX;
	static volatile int8_t x808 = 28;
	volatile int32_t t161 = -65911;

    t161 = ((x805-(x806+x807))==x808);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x817 = 1U;
	uint16_t x818 = 1029U;
	static volatile int32_t x819 = INT32_MIN;
	volatile int32_t x820 = -1;

    t162 = ((x817-(x818+x819))==x820);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x821 = 15LLU;
	int32_t x822 = -76562814;
	uint32_t x823 = 14U;
	volatile int32_t x824 = -5794892;
	volatile int32_t t163 = -31957123;

    t163 = ((x821-(x822+x823))==x824);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x825 = INT16_MAX;
	int8_t x826 = -60;
	uint64_t x827 = 105455960571LLU;
	volatile uint16_t x828 = 273U;
	volatile int32_t t164 = 8;

    t164 = ((x825-(x826+x827))==x828);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x838 = -1LL;
	int64_t x840 = 47LL;
	static int32_t t165 = 140428471;

    t165 = ((x837-(x838+x839))==x840);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x841 = 43U;
	static uint16_t x843 = 14U;
	volatile int64_t x844 = 43455004594863739LL;
	int32_t t166 = -64814972;

    t166 = ((x841-(x842+x843))==x844);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x845 = INT8_MIN;
	static int16_t x846 = -210;
	static volatile uint8_t x848 = 15U;
	volatile int32_t t167 = 69027826;

    t167 = ((x845-(x846+x847))==x848);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x849 = 134875956657LLU;
	int16_t x850 = INT16_MIN;
	uint8_t x852 = 8U;
	static volatile int32_t t168 = 3319;

    t168 = ((x849-(x850+x851))==x852);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x853 = INT32_MIN;
	volatile int8_t x855 = INT8_MIN;
	static uint32_t x856 = 803U;
	static volatile int32_t t169 = 3;

    t169 = ((x853-(x854+x855))==x856);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x857 = INT8_MIN;
	int32_t x858 = INT32_MIN;
	int64_t x860 = -1LL;

    t170 = ((x857-(x858+x859))==x860);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x865 = -238;
	uint64_t x866 = UINT64_MAX;
	static volatile int32_t x867 = INT32_MAX;
	volatile int32_t x868 = 0;
	static int32_t t171 = -130610443;

    t171 = ((x865-(x866+x867))==x868);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x873 = UINT32_MAX;
	int8_t x874 = 8;
	static volatile int8_t x875 = INT8_MIN;
	static volatile uint64_t x876 = 361531908239717404LLU;
	volatile int32_t t172 = 10075497;

    t172 = ((x873-(x874+x875))==x876);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x881 = 503;
	uint16_t x883 = 3321U;
	int8_t x884 = INT8_MIN;
	int32_t t173 = -818596760;

    t173 = ((x881-(x882+x883))==x884);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x885 = INT16_MIN;
	int8_t x886 = INT8_MIN;
	int8_t x887 = INT8_MIN;
	volatile uint32_t x888 = 20U;
	int32_t t174 = 102;

    t174 = ((x885-(x886+x887))==x888);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x889 = INT32_MIN;
	int8_t x890 = -1;
	static uint32_t x891 = 27994U;
	int8_t x892 = -1;

    t175 = ((x889-(x890+x891))==x892);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x895 = -1;
	volatile int32_t t176 = -213773035;

    t176 = ((x893-(x894+x895))==x896);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x898 = INT16_MIN;
	uint16_t x899 = 758U;
	int8_t x900 = INT8_MIN;
	int32_t t177 = 13;

    t177 = ((x897-(x898+x899))==x900);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x910 = UINT16_MAX;
	uint8_t x912 = 4U;
	volatile int32_t t178 = 11089940;

    t178 = ((x909-(x910+x911))==x912);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x914 = 15;
	uint8_t x915 = UINT8_MAX;
	int16_t x916 = INT16_MAX;
	static volatile int32_t t179 = 4592;

    t179 = ((x913-(x914+x915))==x916);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x917 = 1000070LL;
	int32_t x918 = -1;
	int64_t x919 = 3395301LL;
	static int8_t x920 = INT8_MIN;
	volatile int32_t t180 = 443662;

    t180 = ((x917-(x918+x919))==x920);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x926 = -152547LL;
	static int32_t x928 = -1;

    t181 = ((x925-(x926+x927))==x928);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x929 = INT32_MIN;
	uint32_t x930 = 378U;
	int8_t x931 = -4;
	int64_t x932 = INT64_MIN;
	volatile int32_t t182 = -1;

    t182 = ((x929-(x930+x931))==x932);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x933 = INT8_MIN;
	int16_t x935 = -9;
	static volatile int32_t t183 = -63700;

    t183 = ((x933-(x934+x935))==x936);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x941 = INT64_MIN;
	int64_t x942 = INT64_MIN;
	static volatile uint8_t x943 = 9U;
	int32_t t184 = 190;

    t184 = ((x941-(x942+x943))==x944);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x945 = 113202077;
	uint32_t x946 = UINT32_MAX;
	uint16_t x947 = UINT16_MAX;
	int8_t x948 = -1;
	int32_t t185 = -211116;

    t185 = ((x945-(x946+x947))==x948);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x949 = INT64_MIN;
	uint64_t x950 = 25574491183244619LLU;
	int32_t x951 = 8;
	uint32_t x952 = 1363934171U;
	int32_t t186 = -327828;

    t186 = ((x949-(x950+x951))==x952);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x953 = 1;
	volatile int32_t x954 = 13416;
	int8_t x955 = INT8_MAX;
	static int32_t t187 = -63326814;

    t187 = ((x953-(x954+x955))==x956);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x957 = INT32_MIN;
	int32_t x958 = 43;
	static int64_t x959 = INT64_MIN;
	uint64_t x960 = 23LLU;
	int32_t t188 = 106;

    t188 = ((x957-(x958+x959))==x960);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x962 = 60;
	volatile uint16_t x964 = UINT16_MAX;

    t189 = ((x961-(x962+x963))==x964);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x969 = -1;
	static int64_t x970 = INT64_MAX;
	int16_t x971 = -39;
	volatile int16_t x972 = INT16_MIN;

    t190 = ((x969-(x970+x971))==x972);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x973 = 1416499356U;
	int16_t x974 = -1;
	static volatile int8_t x975 = -1;
	uint8_t x976 = UINT8_MAX;

    t191 = ((x973-(x974+x975))==x976);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x977 = INT8_MIN;
	volatile int64_t x979 = -1764173769615LL;
	uint64_t x980 = UINT64_MAX;
	volatile int32_t t192 = 16;

    t192 = ((x977-(x978+x979))==x980);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x981 = UINT16_MAX;
	int32_t x982 = -1;

    t193 = ((x981-(x982+x983))==x984);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x986 = INT8_MIN;
	int16_t x987 = INT16_MIN;
	uint32_t x988 = 859125U;
	volatile int32_t t194 = -10;

    t194 = ((x985-(x986+x987))==x988);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x989 = 63442LL;
	volatile uint8_t x991 = 28U;
	int16_t x992 = -1;
	volatile int32_t t195 = 6;

    t195 = ((x989-(x990+x991))==x992);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x993 = 1058843332720001451LL;
	static int32_t x994 = -207910;
	int64_t x995 = -1LL;
	volatile int16_t x996 = 13655;
	volatile int32_t t196 = 58;

    t196 = ((x993-(x994+x995))==x996);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x997 = 24U;
	uint8_t x998 = 8U;
	static volatile uint64_t x1000 = 1LLU;
	volatile int32_t t197 = -239394;

    t197 = ((x997-(x998+x999))==x1000);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1001 = 2U;
	static uint32_t x1002 = 0U;
	static int16_t x1003 = INT16_MIN;
	static int32_t t198 = 402742069;

    t198 = ((x1001-(x1002+x1003))==x1004);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1005 = 1568U;
	uint32_t x1006 = UINT32_MAX;
	int16_t x1007 = INT16_MAX;
	static int64_t x1008 = -522266LL;
	int32_t t199 = 22;

    t199 = ((x1005-(x1006+x1007))==x1008);

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

