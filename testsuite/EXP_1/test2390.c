
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

static uint64_t x5 = 5LLU;
uint8_t x6 = 3U;
uint8_t x20 = UINT8_MAX;
uint8_t x22 = 15U;
int64_t x26 = 3083166199931LL;
int32_t t4 = -1974332;
volatile int32_t t5 = 2276;
volatile int32_t x50 = 2405193;
int32_t t8 = 7178975;
volatile int32_t t10 = 51;
uint64_t x65 = 11LLU;
static volatile uint16_t x67 = 23U;
volatile int32_t t11 = -1;
static volatile int32_t x69 = INT32_MIN;
int8_t x72 = INT8_MIN;
static int32_t t12 = 303103574;
volatile uint16_t x78 = 2835U;
static uint32_t x79 = UINT32_MAX;
int32_t x96 = INT32_MIN;
volatile int32_t t18 = 24925;
uint32_t x106 = 314U;
volatile int32_t t19 = -579528292;
int32_t x113 = INT32_MIN;
int16_t x116 = INT16_MAX;
int32_t t24 = 23;
uint32_t x131 = 31U;
int8_t x143 = -1;
int8_t x149 = INT8_MIN;
int16_t x150 = INT16_MIN;
static volatile int64_t x152 = INT64_MIN;
volatile uint64_t x155 = 498359LLU;
int64_t x166 = -3LL;
int8_t x168 = -8;
volatile int8_t x182 = INT8_MAX;
int32_t t34 = -30;
uint8_t x186 = 112U;
uint16_t x188 = 330U;
volatile int32_t t35 = -156788271;
int64_t x203 = -1LL;
int8_t x207 = INT8_MIN;
int32_t t39 = -1951356;
uint8_t x216 = UINT8_MAX;
uint16_t x225 = UINT16_MAX;
volatile int32_t t44 = 41;
int64_t x234 = INT64_MAX;
static uint64_t x236 = 1102886557334184780LLU;
static int32_t t45 = -25359342;
uint8_t x240 = 12U;
int8_t x243 = -36;
int8_t x247 = -1;
static int64_t x248 = -1LL;
int32_t t49 = 255112;
volatile int64_t x254 = INT64_MIN;
int8_t x255 = INT8_MIN;
volatile uint32_t x261 = 38110U;
int32_t x268 = INT32_MIN;
int32_t t53 = -146723853;
int32_t x280 = 3033;
uint8_t x286 = 1U;
static volatile int32_t x294 = INT32_MIN;
volatile uint8_t x296 = 2U;
static volatile int32_t t59 = 138;
int8_t x307 = 1;
int64_t x308 = INT64_MIN;
static int32_t t62 = -56012107;
int8_t x309 = INT8_MIN;
int16_t x321 = INT16_MIN;
uint32_t x323 = 13U;
int32_t t65 = -3;
int32_t t66 = 263;
int32_t x329 = INT32_MIN;
int32_t t67 = 2;
uint8_t x336 = 8U;
int64_t x342 = 7209842LL;
volatile int32_t t70 = 387;
uint8_t x345 = UINT8_MAX;
static int8_t x348 = INT8_MIN;
static uint64_t x353 = 1346935912446282628LLU;
volatile int16_t x354 = INT16_MAX;
static volatile int64_t x355 = 49933LL;
static volatile int32_t t74 = -7527263;
int16_t x365 = INT16_MIN;
int8_t x372 = -1;
int16_t x374 = 10000;
int64_t x377 = -354LL;
volatile int64_t x380 = INT64_MIN;
int16_t x382 = 2;
int16_t x399 = -958;
int8_t x404 = INT8_MAX;
int8_t x408 = -12;
volatile uint8_t x431 = UINT8_MAX;
int8_t x439 = INT8_MAX;
uint64_t x449 = 3942LLU;
volatile int64_t x450 = -1LL;
int16_t x456 = -1;
int32_t x458 = INT32_MIN;
int8_t x459 = INT8_MIN;
int64_t x465 = INT64_MIN;
int8_t x467 = 1;
int32_t x478 = 2;
int64_t x479 = -1LL;
int16_t x483 = INT16_MAX;
int8_t x484 = INT8_MIN;
static int32_t x485 = 0;
static int16_t x488 = INT16_MIN;
volatile int32_t x516 = INT32_MIN;
int16_t x517 = -1;
static int16_t x521 = 12;
int32_t t107 = -52;
int32_t x526 = 1456;
int8_t x528 = -18;
int16_t x530 = -5828;
static int64_t x537 = INT64_MIN;
int32_t t111 = 112;
int16_t x541 = INT16_MIN;
uint8_t x544 = UINT8_MAX;
static volatile int32_t t114 = 32624950;
int64_t x562 = 945376417LL;
volatile int32_t x563 = INT32_MIN;
int16_t x569 = INT16_MIN;
static volatile int8_t x572 = -1;
uint64_t x581 = UINT64_MAX;
static int8_t x583 = INT8_MIN;
static uint8_t x590 = UINT8_MAX;
volatile uint32_t x597 = 26U;
int32_t x603 = -1;
uint8_t x605 = 3U;
static volatile int32_t t125 = -54769632;
int16_t x612 = INT16_MAX;
volatile int32_t t126 = -317227629;
uint64_t x615 = 273741116617199517LLU;
volatile int32_t x616 = 130789;
static int16_t x618 = -1;
static int32_t x627 = INT32_MIN;
volatile int32_t t131 = -24383446;
int32_t t133 = 38236742;
int32_t x646 = INT32_MIN;
int8_t x647 = -3;
uint8_t x651 = 0U;
volatile int32_t t136 = -18;
static int64_t x658 = INT64_MIN;
int32_t t137 = -1007845;
uint8_t x667 = 2U;
static int32_t t139 = 514111624;
int16_t x676 = INT16_MIN;
int8_t x684 = INT8_MAX;
int16_t x687 = INT16_MIN;
int16_t x696 = -1;
volatile int32_t t144 = -394492316;
static int32_t t145 = -1;
static int32_t t146 = 20112;
int64_t x718 = INT64_MIN;
static int32_t t151 = 181788;
int8_t x732 = INT8_MIN;
uint16_t x734 = UINT16_MAX;
int8_t x739 = INT8_MAX;
uint32_t x746 = UINT32_MAX;
volatile uint16_t x750 = 5U;
volatile int32_t t156 = 82035;
static uint8_t x760 = 2U;
int16_t x776 = -1;
static int8_t x785 = INT8_MIN;
int32_t t163 = 7347;
uint64_t x790 = UINT64_MAX;
int8_t x793 = -35;
volatile int64_t x801 = 8620594743779166LL;
int8_t x802 = 8;
uint64_t x804 = 75028035LLU;
int16_t x807 = INT16_MIN;
int32_t t167 = 504829;
volatile int8_t x815 = INT8_MAX;
volatile uint32_t x827 = UINT32_MAX;
uint16_t x828 = UINT16_MAX;
uint32_t x830 = 248U;
int16_t x839 = INT16_MIN;
int16_t x840 = INT16_MIN;
int32_t t176 = 0;
int8_t x850 = 2;
static uint8_t x866 = 1U;
int32_t t181 = 179336893;
int8_t x878 = INT8_MIN;
volatile uint16_t x882 = UINT16_MAX;
int8_t x884 = INT8_MIN;
uint32_t x885 = UINT32_MAX;
volatile int32_t x892 = INT32_MIN;
int16_t x914 = -49;
uint32_t x921 = 1311U;
int64_t x923 = -2272359005643384LL;
int16_t x928 = -8;
volatile int32_t t193 = -1917948;
int32_t t194 = -417867375;
int32_t t195 = -163369;
int64_t x958 = INT64_MIN;
volatile int64_t x960 = -1233989342664249285LL;
uint32_t x963 = 83714348U;
uint16_t x964 = 387U;


void f0(void) {
    	int64_t x7 = -1LL;
	int16_t x8 = -383;
	volatile int32_t t0 = 1;

    t0 = (((x5|x6)*x7)<=x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	volatile uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t1 = -1132;

    t1 = (((x13|x14)*x15)<=x16);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = 7U;
	int8_t x19 = -1;
	volatile int32_t t2 = -8;

    t2 = (((x17|x18)*x19)<=x20);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x21 = 1U;
	static volatile int16_t x23 = INT16_MAX;
	static int16_t x24 = INT16_MIN;
	static int32_t t3 = 0;

    t3 = (((x21|x22)*x23)<=x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = 240686340399716302LL;
	uint8_t x27 = 2U;
	int16_t x28 = -3201;

    t4 = (((x25|x26)*x27)<=x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MAX;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	volatile int64_t x36 = INT64_MAX;

    t5 = (((x33|x34)*x35)<=x36);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = UINT32_MAX;
	uint64_t x38 = 12393456LLU;
	static int32_t x39 = INT32_MIN;
	volatile int32_t x40 = 5324;
	int32_t t6 = 168975541;

    t6 = (((x37|x38)*x39)<=x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint32_t x42 = 449494007U;
	volatile uint32_t x43 = UINT32_MAX;
	int16_t x44 = -1708;
	int32_t t7 = 32644;

    t7 = (((x41|x42)*x43)<=x44);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x49 = 1644786LLU;
	uint64_t x51 = UINT64_MAX;
	static int8_t x52 = INT8_MIN;

    t8 = (((x49|x50)*x51)<=x52);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 528908LLU;
	int32_t t9 = 229463167;

    t9 = (((x53|x54)*x55)<=x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x61 = INT64_MAX;
	static uint64_t x62 = 1335802628226LLU;
	volatile int64_t x63 = INT64_MIN;
	volatile int64_t x64 = -1LL;

    t10 = (((x61|x62)*x63)<=x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x66 = -1;
	volatile int64_t x68 = INT64_MAX;

    t11 = (((x65|x66)*x67)<=x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x70 = -1LL;
	volatile int16_t x71 = INT16_MIN;

    t12 = (((x69|x70)*x71)<=x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x73 = 4U;
	uint16_t x74 = 99U;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t13 = -2;

    t13 = (((x73|x74)*x75)<=x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = 1358565436LLU;
	uint8_t x80 = 12U;
	int32_t t14 = 5;

    t14 = (((x77|x78)*x79)<=x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x85 = -6;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	volatile int8_t x88 = 17;
	int32_t t15 = -2316;

    t15 = (((x85|x86)*x87)<=x88);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x89 = UINT16_MAX;
	uint64_t x90 = UINT64_MAX;
	static volatile int32_t x91 = 2585432;
	volatile int32_t x92 = -11;
	volatile int32_t t16 = 6170;

    t16 = (((x89|x90)*x91)<=x92);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t t17 = 428693352;

    t17 = (((x93|x94)*x95)<=x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x97 = 118861928U;
	int16_t x98 = 1;
	uint32_t x99 = 325045U;
	int16_t x100 = INT16_MIN;

    t18 = (((x97|x98)*x99)<=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = -1;
	uint8_t x107 = 65U;
	static uint64_t x108 = 1715705LLU;

    t19 = (((x105|x106)*x107)<=x108);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x109 = 59U;
	static uint16_t x110 = 689U;
	int8_t x111 = INT8_MIN;
	static uint32_t x112 = 175U;
	volatile int32_t t20 = 7182892;

    t20 = (((x109|x110)*x111)<=x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x114 = 379993837329396614LLU;
	int32_t x115 = INT32_MAX;
	int32_t t21 = 115359692;

    t21 = (((x113|x114)*x115)<=x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x117 = -1;
	int16_t x118 = -1;
	int16_t x119 = -908;
	volatile int64_t x120 = INT64_MAX;
	volatile int32_t t22 = -30393;

    t22 = (((x117|x118)*x119)<=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x121 = UINT16_MAX;
	volatile uint8_t x122 = 25U;
	uint32_t x123 = 148634U;
	static int64_t x124 = INT64_MAX;
	volatile int32_t t23 = 176;

    t23 = (((x121|x122)*x123)<=x124);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = INT8_MAX;
	int16_t x126 = -1;
	int64_t x127 = 2119609011347411LL;
	volatile int32_t x128 = INT32_MIN;

    t24 = (((x125|x126)*x127)<=x128);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 2U;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t25 = 0;

    t25 = (((x129|x130)*x131)<=x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = -1;
	static volatile uint8_t x135 = 3U;
	volatile int16_t x136 = -1;
	int32_t t26 = 37736;

    t26 = (((x133|x134)*x135)<=x136);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;
	int32_t t27 = -102394280;

    t27 = (((x141|x142)*x143)<=x144);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = -1;
	uint16_t x146 = 85U;
	static volatile uint8_t x147 = 6U;
	int8_t x148 = INT8_MIN;
	int32_t t28 = 617247666;

    t28 = (((x145|x146)*x147)<=x148);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x151 = INT8_MIN;
	volatile int32_t t29 = 3132353;

    t29 = (((x149|x150)*x151)<=x152);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x153 = INT32_MAX;
	int32_t x154 = 1;
	static int64_t x156 = INT64_MIN;
	static volatile int32_t t30 = 243266996;

    t30 = (((x153|x154)*x155)<=x156);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x161 = 7207;
	static volatile int16_t x162 = -12;
	int16_t x163 = -1;
	uint32_t x164 = 848U;
	static volatile int32_t t31 = -7;

    t31 = (((x161|x162)*x163)<=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x165 = INT64_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	static volatile int32_t t32 = -19;

    t32 = (((x165|x166)*x167)<=x168);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x177 = UINT64_MAX;
	int8_t x178 = -9;
	uint8_t x179 = UINT8_MAX;
	static uint32_t x180 = 985U;
	int32_t t33 = 14600891;

    t33 = (((x177|x178)*x179)<=x180);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x181 = UINT8_MAX;
	static int64_t x183 = -1LL;
	uint8_t x184 = UINT8_MAX;

    t34 = (((x181|x182)*x183)<=x184);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x187 = -1;

    t35 = (((x185|x186)*x187)<=x188);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x189 = -3LL;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 23U;
	uint8_t x192 = 70U;
	int32_t t36 = -23;

    t36 = (((x189|x190)*x191)<=x192);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x197 = 4U;
	int64_t x198 = -1LL;
	volatile uint8_t x199 = 3U;
	int8_t x200 = -16;
	volatile int32_t t37 = -1;

    t37 = (((x197|x198)*x199)<=x200);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x201 = -1;
	int64_t x202 = -6464887945686LL;
	uint16_t x204 = UINT16_MAX;
	int32_t t38 = -3131;

    t38 = (((x201|x202)*x203)<=x204);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x205 = INT16_MAX;
	volatile int8_t x206 = -5;
	int16_t x208 = INT16_MAX;

    t39 = (((x205|x206)*x207)<=x208);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x209 = INT32_MAX;
	uint8_t x210 = 1U;
	uint64_t x211 = 483LLU;
	volatile uint32_t x212 = 3078U;
	volatile int32_t t40 = 205265084;

    t40 = (((x209|x210)*x211)<=x212);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x213 = INT32_MAX;
	static int8_t x214 = INT8_MIN;
	static int8_t x215 = -1;
	int32_t t41 = 8;

    t41 = (((x213|x214)*x215)<=x216);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t42 = 534;

    t42 = (((x221|x222)*x223)<=x224);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x226 = 1391587903U;
	static uint32_t x227 = 7173633U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t43 = 127223987;

    t43 = (((x225|x226)*x227)<=x228);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x229 = 3347992;
	volatile int16_t x230 = 861;
	int8_t x231 = -4;
	int32_t x232 = -151;

    t44 = (((x229|x230)*x231)<=x232);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x233 = -3;
	int32_t x235 = INT32_MIN;

    t45 = (((x233|x234)*x235)<=x236);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x237 = -1;
	int16_t x238 = INT16_MAX;
	uint8_t x239 = 62U;
	volatile int32_t t46 = 719372677;

    t46 = (((x237|x238)*x239)<=x240);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x241 = 17482607695479LLU;
	static uint8_t x242 = UINT8_MAX;
	uint16_t x244 = UINT16_MAX;
	static int32_t t47 = -926;

    t47 = (((x241|x242)*x243)<=x244);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = -1;
	uint64_t x246 = 6288923469LLU;
	static int32_t t48 = -3;

    t48 = (((x245|x246)*x247)<=x248);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x249 = -4;
	volatile int64_t x250 = 1332001590115834551LL;
	volatile uint32_t x251 = UINT32_MAX;
	int16_t x252 = 1125;

    t49 = (((x249|x250)*x251)<=x252);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x253 = -335111;
	int32_t x256 = INT32_MIN;
	int32_t t50 = -152034848;

    t50 = (((x253|x254)*x255)<=x256);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x262 = -1;
	int8_t x263 = 1;
	static volatile int64_t x264 = -1901294978043LL;
	static int32_t t51 = 1;

    t51 = (((x261|x262)*x263)<=x264);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x266 = 64418LLU;
	static int64_t x267 = INT64_MAX;
	volatile int32_t t52 = -461135;

    t52 = (((x265|x266)*x267)<=x268);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x269 = -1LL;
	int32_t x270 = INT32_MAX;
	int16_t x271 = 59;
	volatile int64_t x272 = -1LL;

    t53 = (((x269|x270)*x271)<=x272);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t54 = -6;

    t54 = (((x273|x274)*x275)<=x276);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x277 = -21;
	int64_t x278 = INT64_MIN;
	int16_t x279 = 2;
	volatile int32_t t55 = 0;

    t55 = (((x277|x278)*x279)<=x280);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x281 = INT32_MIN;
	static uint16_t x282 = 54U;
	uint32_t x283 = 255U;
	volatile int16_t x284 = 83;
	int32_t t56 = 8544200;

    t56 = (((x281|x282)*x283)<=x284);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x287 = 2010;
	static uint32_t x288 = 108U;
	int32_t t57 = -213191;

    t57 = (((x285|x286)*x287)<=x288);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x289 = -5450;
	static int64_t x290 = INT64_MAX;
	volatile int64_t x291 = 26931574719115LL;
	static int16_t x292 = 3088;
	int32_t t58 = -53945823;

    t58 = (((x289|x290)*x291)<=x292);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x293 = -1;
	uint16_t x295 = UINT16_MAX;

    t59 = (((x293|x294)*x295)<=x296);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x297 = 52715861761221LLU;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = -2514;
	uint64_t x300 = 139888087903858963LLU;
	volatile int32_t t60 = -17871710;

    t60 = (((x297|x298)*x299)<=x300);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = 53160484;
	static volatile int32_t x303 = -1;
	volatile int32_t x304 = -1;
	int32_t t61 = 62660;

    t61 = (((x301|x302)*x303)<=x304);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x305 = 264803190906LL;
	uint64_t x306 = UINT64_MAX;

    t62 = (((x305|x306)*x307)<=x308);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x310 = 10;
	int32_t x311 = 17076;
	int32_t x312 = -61984;
	volatile int32_t t63 = 1443108;

    t63 = (((x309|x310)*x311)<=x312);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x317 = -1;
	int32_t x318 = -1;
	volatile int32_t x319 = -777;
	uint8_t x320 = 2U;
	static int32_t t64 = 591696981;

    t64 = (((x317|x318)*x319)<=x320);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x322 = INT8_MIN;
	uint8_t x324 = 1U;

    t65 = (((x321|x322)*x323)<=x324);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x325 = UINT8_MAX;
	int8_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	static uint8_t x328 = 8U;

    t66 = (((x325|x326)*x327)<=x328);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x330 = -381;
	int16_t x331 = 978;
	int16_t x332 = -1;

    t67 = (((x329|x330)*x331)<=x332);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x333 = -1;
	static int32_t x334 = 1;
	uint32_t x335 = UINT32_MAX;
	int32_t t68 = -17071;

    t68 = (((x333|x334)*x335)<=x336);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x337 = 7314025;
	int8_t x338 = INT8_MIN;
	uint8_t x339 = 17U;
	int8_t x340 = -1;
	static volatile int32_t t69 = -197;

    t69 = (((x337|x338)*x339)<=x340);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x341 = 620;
	int16_t x343 = -8;
	int16_t x344 = INT16_MIN;

    t70 = (((x341|x342)*x343)<=x344);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x346 = -1;
	int16_t x347 = INT16_MIN;
	static int32_t t71 = 26424554;

    t71 = (((x345|x346)*x347)<=x348);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x349 = -1;
	uint64_t x350 = 96329609000LLU;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	static int32_t t72 = 93;

    t72 = (((x349|x350)*x351)<=x352);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x356 = 5017493LLU;
	int32_t t73 = 214;

    t73 = (((x353|x354)*x355)<=x356);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x357 = 61811LL;
	static uint32_t x358 = 465493U;
	volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;

    t74 = (((x357|x358)*x359)<=x360);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x366 = INT8_MIN;
	static int64_t x367 = -1LL;
	uint32_t x368 = 885900U;
	int32_t t75 = 30;

    t75 = (((x365|x366)*x367)<=x368);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x369 = INT32_MAX;
	uint16_t x370 = 14629U;
	uint32_t x371 = 368597U;
	volatile int32_t t76 = 307;

    t76 = (((x369|x370)*x371)<=x372);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x373 = -1;
	uint8_t x375 = 89U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t77 = -25;

    t77 = (((x373|x374)*x375)<=x376);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x378 = 0;
	uint16_t x379 = 327U;
	volatile int32_t t78 = 209766019;

    t78 = (((x377|x378)*x379)<=x380);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x381 = INT16_MIN;
	static uint32_t x383 = 105U;
	static int64_t x384 = -992LL;
	int32_t t79 = -6;

    t79 = (((x381|x382)*x383)<=x384);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x389 = 1848891LLU;
	int32_t x390 = -917424;
	uint64_t x391 = 977641892290LLU;
	uint64_t x392 = 5LLU;
	volatile int32_t t80 = -260681;

    t80 = (((x389|x390)*x391)<=x392);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x393 = INT32_MAX;
	int16_t x394 = -213;
	static uint32_t x395 = UINT32_MAX;
	int8_t x396 = -20;
	static int32_t t81 = -14274192;

    t81 = (((x393|x394)*x395)<=x396);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = INT16_MIN;
	uint32_t x398 = 626875U;
	int32_t x400 = INT32_MIN;
	volatile int32_t t82 = 41083525;

    t82 = (((x397|x398)*x399)<=x400);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x401 = 402U;
	int16_t x402 = -1;
	int8_t x403 = 0;
	int32_t t83 = -31;

    t83 = (((x401|x402)*x403)<=x404);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MAX;
	volatile int32_t t84 = 1;

    t84 = (((x405|x406)*x407)<=x408);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x409 = -1LL;
	int32_t x410 = -72825638;
	int8_t x411 = INT8_MIN;
	int16_t x412 = -85;
	int32_t t85 = 209320;

    t85 = (((x409|x410)*x411)<=x412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x413 = INT64_MIN;
	uint16_t x414 = UINT16_MAX;
	int16_t x415 = -1;
	volatile int16_t x416 = -1;
	volatile int32_t t86 = 35468;

    t86 = (((x413|x414)*x415)<=x416);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = -3710;
	uint16_t x418 = 10899U;
	uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = -1;
	volatile int32_t t87 = 61161;

    t87 = (((x417|x418)*x419)<=x420);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x421 = UINT8_MAX;
	int64_t x422 = 0LL;
	static int8_t x423 = INT8_MAX;
	volatile uint32_t x424 = UINT32_MAX;
	static int32_t t88 = -112955;

    t88 = (((x421|x422)*x423)<=x424);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x425 = -727755;
	uint8_t x426 = 106U;
	uint16_t x427 = 110U;
	uint32_t x428 = 80206674U;
	static int32_t t89 = 8577;

    t89 = (((x425|x426)*x427)<=x428);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x429 = -858505725303669LL;
	int32_t x430 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	int32_t t90 = -11;

    t90 = (((x429|x430)*x431)<=x432);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x433 = -1;
	static uint8_t x434 = UINT8_MAX;
	static int64_t x435 = 5LL;
	uint8_t x436 = UINT8_MAX;
	static volatile int32_t t91 = 180781329;

    t91 = (((x433|x434)*x435)<=x436);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MIN;
	static uint32_t x440 = 110473U;
	int32_t t92 = -7;

    t92 = (((x437|x438)*x439)<=x440);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x441 = 3U;
	int16_t x442 = INT16_MIN;
	int32_t x443 = -1;
	int16_t x444 = INT16_MIN;
	int32_t t93 = 49;

    t93 = (((x441|x442)*x443)<=x444);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x445 = -19;
	uint64_t x446 = 593733770LLU;
	uint8_t x447 = UINT8_MAX;
	static volatile int64_t x448 = INT64_MIN;
	static volatile int32_t t94 = 644292732;

    t94 = (((x445|x446)*x447)<=x448);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MAX;
	volatile int32_t t95 = 224;

    t95 = (((x449|x450)*x451)<=x452);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x453 = -1;
	int64_t x454 = INT64_MIN;
	static int16_t x455 = -1;
	int32_t t96 = -730;

    t96 = (((x453|x454)*x455)<=x456);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x460 = -23;
	volatile int32_t t97 = 6704;

    t97 = (((x457|x458)*x459)<=x460);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x466 = 95U;
	int16_t x468 = -96;
	static volatile int32_t t98 = 157;

    t98 = (((x465|x466)*x467)<=x468);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = 5175;
	uint16_t x474 = 5388U;
	uint32_t x475 = 3U;
	uint32_t x476 = 11664U;
	static volatile int32_t t99 = 32;

    t99 = (((x473|x474)*x475)<=x476);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x477 = UINT8_MAX;
	uint16_t x480 = 24949U;
	int32_t t100 = 409;

    t100 = (((x477|x478)*x479)<=x480);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x481 = INT8_MAX;
	int16_t x482 = INT16_MAX;
	static volatile int32_t t101 = -83;

    t101 = (((x481|x482)*x483)<=x484);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x486 = 0LLU;
	static uint8_t x487 = 7U;
	int32_t t102 = -6808339;

    t102 = (((x485|x486)*x487)<=x488);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = -210;
	int16_t x498 = INT16_MIN;
	int32_t x499 = 119;
	int64_t x500 = INT64_MIN;
	volatile int32_t t103 = -671;

    t103 = (((x497|x498)*x499)<=x500);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x502 = 760LLU;
	int8_t x503 = INT8_MIN;
	uint64_t x504 = 640178829556LLU;
	volatile int32_t t104 = 1;

    t104 = (((x501|x502)*x503)<=x504);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x513 = INT16_MAX;
	int64_t x514 = INT64_MIN;
	static int16_t x515 = -1;
	volatile int32_t t105 = -4867;

    t105 = (((x513|x514)*x515)<=x516);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x518 = -1;
	volatile int64_t x519 = 27672478553281LL;
	int16_t x520 = -1;
	volatile int32_t t106 = 17;

    t106 = (((x517|x518)*x519)<=x520);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x522 = 2904600045174259LLU;
	int8_t x523 = 44;
	uint16_t x524 = 32415U;

    t107 = (((x521|x522)*x523)<=x524);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x525 = UINT16_MAX;
	uint64_t x527 = UINT64_MAX;
	int32_t t108 = 662862384;

    t108 = (((x525|x526)*x527)<=x528);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x529 = INT32_MIN;
	int8_t x531 = -1;
	static uint32_t x532 = UINT32_MAX;
	static int32_t t109 = 29104898;

    t109 = (((x529|x530)*x531)<=x532);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x533 = 1U;
	int64_t x534 = INT64_MIN;
	static uint64_t x535 = 30LLU;
	uint32_t x536 = 213U;
	int32_t t110 = 1;

    t110 = (((x533|x534)*x535)<=x536);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x538 = 11263044945246LLU;
	uint64_t x539 = 838112731LLU;
	volatile uint32_t x540 = 285U;

    t111 = (((x537|x538)*x539)<=x540);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x542 = -1;
	volatile uint16_t x543 = UINT16_MAX;
	volatile int32_t t112 = -23006332;

    t112 = (((x541|x542)*x543)<=x544);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x545 = 184LL;
	volatile int8_t x546 = -1;
	int16_t x547 = 9;
	uint8_t x548 = UINT8_MAX;
	int32_t t113 = 590716056;

    t113 = (((x545|x546)*x547)<=x548);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x553 = INT8_MIN;
	volatile int64_t x554 = -107LL;
	volatile int64_t x555 = -55233970829139215LL;
	volatile int32_t x556 = INT32_MAX;

    t114 = (((x553|x554)*x555)<=x556);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x557 = INT64_MIN;
	uint64_t x558 = 46704LLU;
	volatile uint64_t x559 = UINT64_MAX;
	static int64_t x560 = INT64_MAX;
	volatile int32_t t115 = 789647556;

    t115 = (((x557|x558)*x559)<=x560);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x561 = 0U;
	volatile uint64_t x564 = 413108000LLU;
	static int32_t t116 = -247134213;

    t116 = (((x561|x562)*x563)<=x564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x570 = 4012710LL;
	volatile uint32_t x571 = UINT32_MAX;
	int32_t t117 = -14329;

    t117 = (((x569|x570)*x571)<=x572);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x577 = -1;
	volatile uint32_t x578 = UINT32_MAX;
	volatile int8_t x579 = INT8_MAX;
	volatile int32_t x580 = -304;
	volatile int32_t t118 = -39922615;

    t118 = (((x577|x578)*x579)<=x580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x582 = INT64_MIN;
	static int16_t x584 = INT16_MAX;
	static int32_t t119 = 23944199;

    t119 = (((x581|x582)*x583)<=x584);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x585 = INT8_MAX;
	int16_t x586 = INT16_MIN;
	uint64_t x587 = 140069LLU;
	static int32_t x588 = 0;
	int32_t t120 = 29;

    t120 = (((x585|x586)*x587)<=x588);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x589 = UINT64_MAX;
	static volatile int16_t x591 = INT16_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t121 = -28834148;

    t121 = (((x589|x590)*x591)<=x592);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x593 = -623517148;
	static int16_t x594 = -17;
	int8_t x595 = INT8_MIN;
	int32_t x596 = INT32_MIN;
	static volatile int32_t t122 = 247;

    t122 = (((x593|x594)*x595)<=x596);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x598 = 1785;
	int32_t x599 = INT32_MAX;
	static int16_t x600 = INT16_MIN;
	int32_t t123 = -45317;

    t123 = (((x597|x598)*x599)<=x600);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x601 = -2473;
	static int32_t x602 = -1;
	int64_t x604 = -1LL;
	int32_t t124 = -53;

    t124 = (((x601|x602)*x603)<=x604);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x606 = 50442355065LLU;
	uint64_t x607 = 809588672LLU;
	static uint64_t x608 = 116842222710431743LLU;

    t125 = (((x605|x606)*x607)<=x608);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x609 = 820406U;
	uint32_t x610 = UINT32_MAX;
	int32_t x611 = INT32_MIN;

    t126 = (((x609|x610)*x611)<=x612);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x613 = 544835011326747318LLU;
	int32_t x614 = INT32_MIN;
	int32_t t127 = 6;

    t127 = (((x613|x614)*x615)<=x616);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x617 = -149;
	int8_t x619 = 60;
	int64_t x620 = -1LL;
	int32_t t128 = -240533;

    t128 = (((x617|x618)*x619)<=x620);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x621 = 459151219U;
	static uint16_t x622 = 106U;
	uint32_t x623 = UINT32_MAX;
	uint16_t x624 = 49U;
	static int32_t t129 = 41;

    t129 = (((x621|x622)*x623)<=x624);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x625 = INT8_MIN;
	static int64_t x626 = INT64_MIN;
	volatile int16_t x628 = INT16_MIN;
	int32_t t130 = -10428;

    t130 = (((x625|x626)*x627)<=x628);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x629 = UINT16_MAX;
	static uint32_t x630 = 6745U;
	int16_t x631 = INT16_MAX;
	static uint16_t x632 = UINT16_MAX;

    t131 = (((x629|x630)*x631)<=x632);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x637 = UINT8_MAX;
	int16_t x638 = -72;
	static int32_t x639 = -1;
	static int16_t x640 = -1;
	volatile int32_t t132 = 43;

    t132 = (((x637|x638)*x639)<=x640);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = -2040897652856738060LL;
	uint8_t x643 = 28U;
	volatile int64_t x644 = -212138435LL;

    t133 = (((x641|x642)*x643)<=x644);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x645 = INT64_MIN;
	int16_t x648 = -31;
	int32_t t134 = -480;

    t134 = (((x645|x646)*x647)<=x648);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x649 = INT32_MAX;
	int64_t x650 = INT64_MIN;
	static int32_t x652 = INT32_MIN;
	volatile int32_t t135 = 1;

    t135 = (((x649|x650)*x651)<=x652);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x653 = 485U;
	static uint16_t x654 = 7U;
	static int8_t x655 = INT8_MAX;
	volatile uint16_t x656 = 2562U;

    t136 = (((x653|x654)*x655)<=x656);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x657 = INT16_MIN;
	static uint16_t x659 = 107U;
	volatile int16_t x660 = 42;

    t137 = (((x657|x658)*x659)<=x660);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x665 = 54U;
	int16_t x666 = INT16_MIN;
	int64_t x668 = 2014745332LL;
	volatile int32_t t138 = -88;

    t138 = (((x665|x666)*x667)<=x668);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x669 = INT64_MIN;
	uint64_t x670 = 193750533LLU;
	int64_t x671 = 1LL;
	volatile int16_t x672 = -1;

    t139 = (((x669|x670)*x671)<=x672);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x673 = 1870762688329LLU;
	volatile int64_t x674 = INT64_MIN;
	uint64_t x675 = UINT64_MAX;
	int32_t t140 = -494838113;

    t140 = (((x673|x674)*x675)<=x676);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x682 = -1;
	volatile int8_t x683 = -3;
	volatile int32_t t141 = 48;

    t141 = (((x681|x682)*x683)<=x684);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x685 = 225358U;
	int32_t x686 = -1;
	uint64_t x688 = 19183240992LLU;
	int32_t t142 = 254;

    t142 = (((x685|x686)*x687)<=x688);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x689 = 505U;
	uint8_t x690 = 2U;
	uint32_t x691 = 1824940017U;
	static uint16_t x692 = UINT16_MAX;
	volatile int32_t t143 = 0;

    t143 = (((x689|x690)*x691)<=x692);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x693 = UINT32_MAX;
	uint64_t x694 = UINT64_MAX;
	static int64_t x695 = INT64_MIN;

    t144 = (((x693|x694)*x695)<=x696);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x697 = -1LL;
	int8_t x698 = INT8_MIN;
	static int16_t x699 = INT16_MIN;
	int64_t x700 = INT64_MAX;

    t145 = (((x697|x698)*x699)<=x700);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x701 = -1LL;
	volatile int32_t x702 = -461736533;
	int32_t x703 = INT32_MIN;
	int8_t x704 = -1;

    t146 = (((x701|x702)*x703)<=x704);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x705 = UINT64_MAX;
	static int32_t x706 = INT32_MIN;
	int32_t x707 = -462650;
	volatile uint8_t x708 = 4U;
	volatile int32_t t147 = -549097110;

    t147 = (((x705|x706)*x707)<=x708);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x709 = INT64_MIN;
	static int64_t x710 = -22LL;
	uint32_t x711 = 513302U;
	uint8_t x712 = UINT8_MAX;
	int32_t t148 = -153;

    t148 = (((x709|x710)*x711)<=x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x713 = 7;
	uint64_t x714 = UINT64_MAX;
	int32_t x715 = INT32_MIN;
	uint8_t x716 = 2U;
	static int32_t t149 = -41;

    t149 = (((x713|x714)*x715)<=x716);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x717 = -70063666249190LL;
	static int16_t x719 = -1;
	volatile uint32_t x720 = 10668U;
	static volatile int32_t t150 = 701221;

    t150 = (((x717|x718)*x719)<=x720);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x721 = INT32_MAX;
	int16_t x722 = INT16_MAX;
	volatile uint64_t x723 = UINT64_MAX;
	int32_t x724 = INT32_MIN;

    t151 = (((x721|x722)*x723)<=x724);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x729 = 23LLU;
	static uint32_t x730 = 270984555U;
	volatile uint16_t x731 = 1051U;
	volatile int32_t t152 = -49685;

    t152 = (((x729|x730)*x731)<=x732);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x733 = 3845438365449441475LLU;
	static volatile int8_t x735 = INT8_MIN;
	int64_t x736 = 454756343396063LL;
	volatile int32_t t153 = -257836;

    t153 = (((x733|x734)*x735)<=x736);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x737 = -1;
	static int64_t x738 = INT64_MAX;
	int16_t x740 = INT16_MAX;
	volatile int32_t t154 = 104;

    t154 = (((x737|x738)*x739)<=x740);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x745 = INT8_MIN;
	int16_t x747 = 192;
	int64_t x748 = 31366136LL;
	volatile int32_t t155 = -17491;

    t155 = (((x745|x746)*x747)<=x748);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x749 = -1LL;
	int32_t x751 = 594;
	static uint8_t x752 = 89U;

    t156 = (((x749|x750)*x751)<=x752);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x753 = 11403U;
	int16_t x754 = INT16_MIN;
	int32_t x755 = -332;
	int8_t x756 = -1;
	int32_t t157 = 192601;

    t157 = (((x753|x754)*x755)<=x756);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x757 = 1;
	static uint8_t x758 = 2U;
	int16_t x759 = INT16_MIN;
	int32_t t158 = 65;

    t158 = (((x757|x758)*x759)<=x760);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x761 = -4305;
	static int32_t x762 = -341398594;
	uint32_t x763 = UINT32_MAX;
	static uint16_t x764 = 4U;
	int32_t t159 = -30189401;

    t159 = (((x761|x762)*x763)<=x764);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x766 = UINT32_MAX;
	uint8_t x767 = 20U;
	int8_t x768 = INT8_MIN;
	int32_t t160 = 15;

    t160 = (((x765|x766)*x767)<=x768);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x773 = -1;
	int8_t x774 = INT8_MAX;
	int64_t x775 = INT64_MAX;
	int32_t t161 = -1;

    t161 = (((x773|x774)*x775)<=x776);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x777 = 66329641840LLU;
	volatile int32_t x778 = INT32_MIN;
	int32_t x779 = -140894950;
	static int32_t x780 = -2;
	volatile int32_t t162 = 4;

    t162 = (((x777|x778)*x779)<=x780);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x786 = 444014U;
	uint64_t x787 = 252260503LLU;
	uint32_t x788 = 5346024U;

    t163 = (((x785|x786)*x787)<=x788);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x789 = 0;
	uint32_t x791 = 15525836U;
	int64_t x792 = 151886621276082794LL;
	int32_t t164 = -637835249;

    t164 = (((x789|x790)*x791)<=x792);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x794 = -7;
	volatile int32_t x795 = 507601949;
	volatile uint16_t x796 = UINT16_MAX;
	int32_t t165 = -2322;

    t165 = (((x793|x794)*x795)<=x796);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x803 = 1;
	int32_t t166 = -27478086;

    t166 = (((x801|x802)*x803)<=x804);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x805 = UINT16_MAX;
	static int64_t x806 = -1LL;
	volatile uint8_t x808 = 2U;

    t167 = (((x805|x806)*x807)<=x808);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile uint16_t x810 = UINT16_MAX;
	static int16_t x811 = 1210;
	int32_t x812 = INT32_MAX;
	volatile int32_t t168 = 1;

    t168 = (((x809|x810)*x811)<=x812);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x813 = INT16_MIN;
	int64_t x814 = -1LL;
	int16_t x816 = -1;
	volatile int32_t t169 = -11;

    t169 = (((x813|x814)*x815)<=x816);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x817 = -1;
	volatile int64_t x818 = INT64_MAX;
	int32_t x819 = INT32_MIN;
	static int32_t x820 = INT32_MIN;
	volatile int32_t t170 = 26;

    t170 = (((x817|x818)*x819)<=x820);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x821 = -1;
	volatile uint32_t x822 = 16570794U;
	int8_t x823 = INT8_MIN;
	uint8_t x824 = UINT8_MAX;
	volatile int32_t t171 = 132355738;

    t171 = (((x821|x822)*x823)<=x824);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x825 = INT64_MIN;
	int16_t x826 = -200;
	volatile int32_t t172 = -50;

    t172 = (((x825|x826)*x827)<=x828);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x829 = 8332405U;
	volatile int16_t x831 = 1;
	uint32_t x832 = UINT32_MAX;
	int32_t t173 = -3769;

    t173 = (((x829|x830)*x831)<=x832);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x833 = UINT64_MAX;
	static uint64_t x834 = 76701660799484LLU;
	int32_t x835 = 251088;
	int16_t x836 = -1;
	int32_t t174 = -634506;

    t174 = (((x833|x834)*x835)<=x836);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x837 = 1;
	int16_t x838 = INT16_MIN;
	volatile int32_t t175 = -47922380;

    t175 = (((x837|x838)*x839)<=x840);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x845 = -1;
	static uint64_t x846 = 1556813LLU;
	int8_t x847 = INT8_MAX;
	uint64_t x848 = UINT64_MAX;

    t176 = (((x845|x846)*x847)<=x848);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x849 = 0U;
	volatile uint16_t x851 = 1532U;
	int32_t x852 = INT32_MAX;
	int32_t t177 = -1;

    t177 = (((x849|x850)*x851)<=x852);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x853 = -11;
	uint8_t x854 = UINT8_MAX;
	int32_t x855 = 115709;
	static int16_t x856 = INT16_MIN;
	int32_t t178 = -95078;

    t178 = (((x853|x854)*x855)<=x856);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x857 = 43U;
	int8_t x858 = 0;
	static int16_t x859 = INT16_MAX;
	uint8_t x860 = 35U;
	int32_t t179 = -27632;

    t179 = (((x857|x858)*x859)<=x860);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x861 = 35799477LL;
	int8_t x862 = INT8_MIN;
	int64_t x863 = 4459187664165316LL;
	volatile int16_t x864 = INT16_MAX;
	int32_t t180 = 538101;

    t180 = (((x861|x862)*x863)<=x864);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x865 = 3U;
	static uint16_t x867 = 186U;
	uint32_t x868 = 565U;

    t181 = (((x865|x866)*x867)<=x868);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x877 = INT8_MAX;
	int16_t x879 = -1;
	static uint32_t x880 = 1952620U;
	static int32_t t182 = -118071;

    t182 = (((x877|x878)*x879)<=x880);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x881 = INT8_MIN;
	int64_t x883 = -8551184344397745LL;
	volatile int32_t t183 = 539;

    t183 = (((x881|x882)*x883)<=x884);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x886 = INT32_MAX;
	int32_t x887 = INT32_MAX;
	int8_t x888 = 20;
	int32_t t184 = 583328;

    t184 = (((x885|x886)*x887)<=x888);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x889 = INT16_MIN;
	static int32_t x890 = -1;
	int16_t x891 = INT16_MAX;
	int32_t t185 = -381437;

    t185 = (((x889|x890)*x891)<=x892);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x893 = 3076;
	int32_t x894 = INT32_MIN;
	volatile uint64_t x895 = 31361558400218LLU;
	volatile int16_t x896 = -1;
	int32_t t186 = -442206;

    t186 = (((x893|x894)*x895)<=x896);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x905 = 117495906794699590LLU;
	static int64_t x906 = INT64_MAX;
	uint32_t x907 = 1404068U;
	uint8_t x908 = UINT8_MAX;
	volatile int32_t t187 = 1;

    t187 = (((x905|x906)*x907)<=x908);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x909 = INT64_MAX;
	static int8_t x910 = -2;
	uint16_t x911 = 1U;
	uint32_t x912 = UINT32_MAX;
	static volatile int32_t t188 = -103;

    t188 = (((x909|x910)*x911)<=x912);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x913 = INT16_MAX;
	int8_t x915 = -1;
	volatile int32_t x916 = INT32_MAX;
	int32_t t189 = -5682903;

    t189 = (((x913|x914)*x915)<=x916);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x917 = 5U;
	volatile int8_t x918 = -1;
	static int64_t x919 = -1LL;
	uint8_t x920 = 11U;
	static volatile int32_t t190 = 2;

    t190 = (((x917|x918)*x919)<=x920);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x922 = 0;
	int16_t x924 = INT16_MAX;
	int32_t t191 = 807828;

    t191 = (((x921|x922)*x923)<=x924);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x925 = -421147815270445LL;
	int32_t x926 = -32237;
	volatile int32_t x927 = INT32_MIN;
	volatile int32_t t192 = -70;

    t192 = (((x925|x926)*x927)<=x928);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x933 = 1U;
	int32_t x934 = INT32_MIN;
	uint64_t x935 = 2779516887590LLU;
	uint8_t x936 = UINT8_MAX;

    t193 = (((x933|x934)*x935)<=x936);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x937 = -1;
	static int8_t x938 = INT8_MIN;
	int64_t x939 = -608981870946221LL;
	static int64_t x940 = -1LL;

    t194 = (((x937|x938)*x939)<=x940);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x945 = 4998133;
	int16_t x946 = INT16_MIN;
	int16_t x947 = -1;
	static int8_t x948 = INT8_MIN;

    t195 = (((x945|x946)*x947)<=x948);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x949 = -1;
	uint64_t x950 = 257412844089525877LLU;
	int64_t x951 = 54414799942961LL;
	volatile uint32_t x952 = 0U;
	static volatile int32_t t196 = -176652956;

    t196 = (((x949|x950)*x951)<=x952);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x953 = INT64_MIN;
	int8_t x954 = INT8_MIN;
	uint64_t x955 = UINT64_MAX;
	uint64_t x956 = 7888349472930253LLU;
	volatile int32_t t197 = -213175;

    t197 = (((x953|x954)*x955)<=x956);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x957 = INT8_MIN;
	uint64_t x959 = 23264797425322071LLU;
	int32_t t198 = -44318726;

    t198 = (((x957|x958)*x959)<=x960);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x961 = INT16_MIN;
	int16_t x962 = -1;
	volatile int32_t t199 = -6106;

    t199 = (((x961|x962)*x963)<=x964);

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

