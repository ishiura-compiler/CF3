
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

int64_t x1 = INT64_MIN;
int16_t x6 = INT16_MIN;
int64_t x9 = INT64_MAX;
int64_t x16 = 12246282784080552LL;
int64_t t3 = -825366LL;
static uint8_t x20 = 3U;
volatile int64_t x22 = INT64_MIN;
uint16_t x48 = 783U;
int32_t t10 = 46088;
volatile int64_t t11 = -269448500281098198LL;
volatile int8_t x53 = INT8_MIN;
int32_t x56 = INT32_MAX;
volatile int32_t t14 = 105;
int64_t x67 = INT64_MIN;
int16_t x73 = INT16_MAX;
int64_t t18 = -178704975636187540LL;
uint64_t x97 = 2727890179732114LLU;
volatile int16_t x99 = INT16_MAX;
static volatile uint32_t t23 = 37U;
static volatile uint16_t x107 = 2U;
uint64_t t25 = 15868978LLU;
int32_t x109 = INT32_MAX;
uint64_t x116 = 313439105LLU;
int16_t x123 = INT16_MAX;
int32_t x127 = INT32_MIN;
int16_t x129 = INT16_MIN;
int8_t x130 = INT8_MAX;
int64_t x134 = INT64_MIN;
int64_t t32 = -58426LL;
int8_t x140 = -45;
int8_t x142 = INT8_MAX;
static volatile int8_t x146 = -10;
int64_t x153 = -1LL;
uint32_t x155 = 422U;
static int32_t t37 = 64115;
int16_t x158 = 0;
static int64_t x161 = INT64_MAX;
static int8_t x162 = -1;
int16_t x167 = INT16_MIN;
int8_t x173 = 46;
uint32_t x175 = 7986U;
static uint8_t x178 = 97U;
int32_t x179 = -528982889;
static int8_t x180 = 1;
volatile int32_t t43 = -19811425;
volatile int16_t x185 = -168;
int16_t x188 = INT16_MIN;
volatile int32_t t45 = 735;
int16_t x191 = INT16_MIN;
uint64_t t46 = 48115LLU;
volatile int32_t x198 = -1;
volatile int8_t x202 = 1;
int16_t x204 = INT16_MAX;
uint64_t x209 = 3609050070187338670LLU;
static int32_t x210 = -506;
uint16_t x221 = UINT16_MAX;
int64_t t54 = 6LL;
static volatile int8_t x226 = 0;
static volatile uint32_t x227 = 460291U;
uint64_t x228 = 120735441927798LLU;
uint64_t x230 = 30088461673978448LLU;
static volatile int32_t t56 = 56107614;
int8_t x233 = -1;
int32_t x234 = 1;
uint64_t x235 = UINT64_MAX;
static int64_t x239 = -1LL;
static uint8_t x247 = 50U;
int16_t x248 = INT16_MIN;
int16_t x255 = 1493;
volatile uint64_t t62 = 220LLU;
uint16_t x257 = 30U;
int32_t x262 = -1;
uint8_t x271 = UINT8_MAX;
int16_t x279 = 6;
int8_t x283 = -1;
static uint64_t x284 = 30LLU;
uint8_t x289 = UINT8_MAX;
static int64_t x290 = INT64_MIN;
static volatile int32_t t71 = 22;
uint32_t x295 = UINT32_MAX;
uint32_t x305 = 129640777U;
volatile int32_t t75 = 525303;
uint32_t x315 = 2U;
volatile int32_t x316 = -1;
uint32_t x317 = 86U;
int64_t x318 = INT64_MIN;
int16_t x322 = INT16_MIN;
static int16_t x326 = INT16_MIN;
uint32_t x328 = 262513616U;
int16_t x334 = -1;
int64_t x336 = INT64_MIN;
volatile int64_t t82 = 397806816LL;
uint16_t x353 = 6509U;
static uint8_t x354 = 17U;
static int64_t x357 = -1LL;
int64_t x359 = INT64_MAX;
static int16_t x362 = INT16_MIN;
uint32_t x366 = UINT32_MAX;
int64_t x371 = INT64_MAX;
volatile int8_t x372 = INT8_MIN;
int8_t x378 = -1;
uint8_t x391 = 2U;
uint32_t t98 = 1U;
int8_t x401 = 0;
volatile int64_t x404 = INT64_MIN;
int8_t x407 = INT8_MIN;
int32_t t100 = 43898;
static volatile int8_t x415 = -6;
volatile uint64_t t102 = 2096LLU;
int16_t x417 = -1;
volatile int64_t x420 = -1LL;
int16_t x423 = -1;
volatile uint32_t t104 = 7435U;
uint8_t x428 = 27U;
int8_t x430 = -1;
uint64_t x435 = 312255329415275LLU;
volatile int16_t x440 = INT16_MAX;
static uint16_t x444 = 1479U;
int16_t x446 = 2825;
static uint64_t x447 = 13728349LLU;
static volatile int32_t t113 = 5766890;
int8_t x466 = -1;
int32_t t116 = -4742576;
int16_t x482 = INT16_MIN;
uint32_t x489 = 1287076U;
static int8_t x492 = -7;
static volatile int32_t x495 = INT32_MIN;
static int64_t x506 = -455978LL;
static uint8_t x514 = UINT8_MAX;
int16_t x516 = INT16_MIN;
uint64_t x526 = 496248LLU;
int32_t x535 = -1;
volatile int32_t x536 = INT32_MIN;
int8_t x542 = INT8_MAX;
uint32_t x544 = 101U;
volatile uint32_t t132 = 491783936U;
volatile int32_t t133 = 0;
uint32_t x553 = 1878654U;
uint64_t x556 = 15601652LLU;
uint8_t x560 = 1U;
static uint16_t x561 = UINT16_MAX;
int64_t t137 = 36322920398772LL;
int32_t x569 = -1;
volatile uint16_t x573 = 1U;
uint64_t x578 = UINT64_MAX;
int64_t x579 = INT64_MIN;
int16_t x585 = -1;
static int16_t x600 = INT16_MIN;
static int32_t x601 = 79;
static volatile uint64_t x602 = 1266440592510096LLU;
int32_t t148 = 2;
int8_t x616 = -3;
uint32_t x621 = 1500U;
uint32_t x637 = UINT32_MAX;
uint64_t x638 = 43722341LLU;
uint64_t x639 = 86200589058LLU;
uint32_t x640 = 23U;
uint16_t x648 = 4092U;
int8_t x651 = -1;
static int64_t x656 = 31646735898LL;
volatile int64_t t160 = -46254345661557622LL;
int32_t x666 = -1;
int16_t x676 = 789;
int32_t t165 = -1;
volatile int64_t t166 = -2104999407055LL;
static int16_t x681 = INT16_MAX;
volatile int64_t x685 = -9531667LL;
int8_t x691 = INT8_MIN;
int32_t x696 = -1;
int32_t x703 = INT32_MIN;
int32_t x707 = INT32_MIN;
int8_t x710 = 0;
static int16_t x714 = INT16_MIN;
static uint64_t x723 = 26752486100786497LLU;
static int16_t x726 = INT16_MAX;
static volatile uint64_t x731 = 9LLU;
volatile uint16_t x733 = UINT16_MAX;
static uint64_t x734 = 43869962857LLU;
volatile uint8_t x735 = UINT8_MAX;
int8_t x739 = INT8_MIN;
int8_t x743 = INT8_MIN;
uint8_t x745 = 2U;
int16_t x746 = INT16_MIN;
uint16_t x750 = 1243U;
volatile int32_t x766 = INT32_MIN;
volatile uint64_t t187 = 8335989589811LLU;
int64_t x769 = -1LL;
uint32_t x780 = 59507U;
uint32_t x782 = 3817U;
int16_t x794 = INT16_MAX;
uint8_t x795 = UINT8_MAX;
int32_t x798 = -1;
int32_t x799 = INT32_MIN;
int64_t t194 = -7LL;
int32_t t198 = 32;
uint32_t x820 = 1U;


void f0(void) {
    	static uint8_t x2 = 2U;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = -1;
	static int32_t t0 = 1771007;

    t0 = (((x1<=x2)!=x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	int8_t x8 = -18;
	static int32_t t1 = 873631;

    t1 = (((x5<=x6)!=x7)%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = -1LL;
	int8_t x11 = 0;
	uint64_t x12 = 218213LLU;
	static uint64_t t2 = 202472664556LLU;

    t2 = (((x9<=x10)!=x11)%x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	int64_t x14 = -1LL;
	static int32_t x15 = 3;

    t3 = (((x13<=x14)!=x15)%x16);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -5985;
	int64_t x18 = INT64_MAX;
	static int16_t x19 = -1;
	volatile int32_t t4 = -308536090;

    t4 = (((x17<=x18)!=x19)%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MAX;
	int64_t x23 = -4609942262497196LL;
	int32_t x24 = -1270460;
	volatile int32_t t5 = 5649;

    t5 = (((x21<=x22)!=x23)%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	static volatile int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t6 = -58109;

    t6 = (((x29<=x30)!=x31)%x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 6U;
	uint16_t x34 = 0U;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = -1;
	volatile int32_t t7 = 51359883;

    t7 = (((x33<=x34)!=x35)%x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	static int8_t x38 = -1;
	int16_t x39 = 470;
	static int16_t x40 = INT16_MAX;
	int32_t t8 = -282309574;

    t8 = (((x37<=x38)!=x39)%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	uint8_t x42 = 3U;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t9 = 63;

    t9 = (((x41<=x42)!=x43)%x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 100U;
	volatile int32_t x46 = INT32_MAX;
	uint16_t x47 = UINT16_MAX;

    t10 = (((x45<=x46)!=x47)%x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = -90LL;
	uint32_t x50 = 29928U;
	int8_t x51 = INT8_MIN;
	volatile int64_t x52 = -1LL;

    t11 = (((x49<=x50)!=x51)%x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 96340645U;
	int8_t x55 = -1;
	int32_t t12 = 0;

    t12 = (((x53<=x54)!=x55)%x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = 14;
	int64_t x59 = -8LL;
	int16_t x60 = INT16_MIN;
	static int32_t t13 = 173069;

    t13 = (((x57<=x58)!=x59)%x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MIN;
	volatile uint16_t x64 = 39U;

    t14 = (((x61<=x62)!=x63)%x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x65 = INT8_MAX;
	int16_t x66 = -1;
	static int64_t x68 = INT64_MIN;
	int64_t t15 = -857LL;

    t15 = (((x65<=x66)!=x67)%x68);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = UINT16_MAX;
	static volatile int32_t t16 = 27600;

    t16 = (((x69<=x70)!=x71)%x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x74 = INT8_MAX;
	static int16_t x75 = INT16_MIN;
	int16_t x76 = 1;
	static volatile int32_t t17 = -1;

    t17 = (((x73<=x74)!=x75)%x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x77 = 27130U;
	static int16_t x78 = -231;
	uint64_t x79 = 19756LLU;
	volatile int64_t x80 = -837748241280LL;

    t18 = (((x77<=x78)!=x79)%x80);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	int64_t x82 = INT64_MIN;
	int8_t x83 = 3;
	volatile int16_t x84 = INT16_MIN;
	int32_t t19 = 196;

    t19 = (((x81<=x82)!=x83)%x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = -2;
	uint64_t x86 = 2451349570639591956LLU;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = 1487934184LL;
	volatile int64_t t20 = 3LL;

    t20 = (((x85<=x86)!=x87)%x88);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = -1;
	int8_t x90 = 1;
	int32_t x91 = INT32_MIN;
	volatile uint64_t x92 = 236LLU;
	static volatile uint64_t t21 = 48846153021LLU;

    t21 = (((x89<=x90)!=x91)%x92);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 3U;
	static volatile int16_t x94 = -1;
	volatile int64_t x95 = -2974343934124941LL;
	static volatile int16_t x96 = 418;
	int32_t t22 = -400;

    t22 = (((x93<=x94)!=x95)%x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = INT64_MIN;
	uint32_t x100 = 72U;

    t23 = (((x97<=x98)!=x99)%x100);

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = -1LL;
	uint16_t x102 = UINT16_MAX;
	int16_t x103 = -640;
	static volatile uint16_t x104 = UINT16_MAX;
	int32_t t24 = 3178;

    t24 = (((x101<=x102)!=x103)%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 120U;
	volatile int64_t x106 = 108514020LL;
	uint64_t x108 = 99908861643402468LLU;

    t25 = (((x105<=x106)!=x107)%x108);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x110 = 26U;
	static int16_t x111 = 1;
	int16_t x112 = INT16_MIN;
	volatile int32_t t26 = -1049638;

    t26 = (((x109<=x110)!=x111)%x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -1LL;
	static uint16_t x115 = UINT16_MAX;
	uint64_t t27 = 905240020LLU;

    t27 = (((x113<=x114)!=x115)%x116);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1;
	int64_t x118 = INT64_MAX;
	static int16_t x119 = 14;
	int32_t x120 = -69954335;
	int32_t t28 = 198770683;

    t28 = (((x117<=x118)!=x119)%x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = 194419315264867LL;
	volatile int64_t x124 = INT64_MIN;
	int64_t t29 = -122618568823LL;

    t29 = (((x121<=x122)!=x123)%x124);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -1;
	volatile int64_t x126 = INT64_MIN;
	int32_t x128 = -1;
	static int32_t t30 = -118478;

    t30 = (((x125<=x126)!=x127)%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x131 = INT32_MAX;
	int64_t x132 = -33465419965354LL;
	int64_t t31 = 16060LL;

    t31 = (((x129<=x130)!=x131)%x132);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	int16_t x135 = 23;
	int64_t x136 = INT64_MIN;

    t32 = (((x133<=x134)!=x135)%x136);

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	int32_t t33 = 670084485;

    t33 = (((x137<=x138)!=x139)%x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x141 = INT16_MIN;
	int8_t x143 = -5;
	volatile int8_t x144 = -1;
	int32_t t34 = 167741;

    t34 = (((x141<=x142)!=x143)%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = 604059;
	uint8_t x147 = 0U;
	volatile uint8_t x148 = 52U;
	volatile int32_t t35 = 27840;

    t35 = (((x145<=x146)!=x147)%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -56641229LL;
	int16_t x150 = 0;
	static volatile uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t36 = 7;

    t36 = (((x149<=x150)!=x151)%x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x154 = UINT64_MAX;
	int32_t x156 = 226;

    t37 = (((x153<=x154)!=x155)%x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 1;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t38 = 0LL;

    t38 = (((x157<=x158)!=x159)%x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x163 = -1LL;
	volatile int8_t x164 = INT8_MAX;
	int32_t t39 = -13;

    t39 = (((x161<=x162)!=x163)%x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	static int8_t x168 = 51;
	int32_t t40 = 0;

    t40 = (((x165<=x166)!=x167)%x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x169 = -441;
	int8_t x170 = INT8_MIN;
	static uint64_t x171 = 8062389597165LLU;
	int64_t x172 = 4695101LL;
	static int64_t t41 = -1148849516075LL;

    t41 = (((x169<=x170)!=x171)%x172);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x174 = 41U;
	volatile int64_t x176 = INT64_MIN;
	static volatile int64_t t42 = 19464257LL;

    t42 = (((x173<=x174)!=x175)%x176);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = 1005U;

    t43 = (((x177<=x178)!=x179)%x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = -8719;
	uint32_t x184 = 7929751U;
	volatile uint32_t t44 = 11440554U;

    t44 = (((x181<=x182)!=x183)%x184);

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x186 = 1;
	volatile int64_t x187 = INT64_MAX;

    t45 = (((x185<=x186)!=x187)%x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = 780U;
	int64_t x190 = INT64_MIN;
	static uint64_t x192 = UINT64_MAX;

    t46 = (((x189<=x190)!=x191)%x192);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x193 = 12U;
	int8_t x194 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t47 = 1791030860480LL;

    t47 = (((x193<=x194)!=x195)%x196);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MAX;
	int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MAX;
	volatile int64_t t48 = 438808795LL;

    t48 = (((x197<=x198)!=x199)%x200);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x201 = 2;
	static int64_t x203 = 1LL;
	volatile int32_t t49 = -42559;

    t49 = (((x201<=x202)!=x203)%x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MIN;
	uint32_t x206 = 1U;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t50 = -12109LL;

    t50 = (((x205<=x206)!=x207)%x208);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t51 = 28277344;

    t51 = (((x209<=x210)!=x211)%x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	int64_t x216 = INT64_MIN;
	int64_t t52 = -789472828LL;

    t52 = (((x213<=x214)!=x215)%x216);

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MIN;
	uint8_t x218 = 8U;
	uint8_t x219 = 2U;
	int64_t x220 = INT64_MIN;
	static volatile int64_t t53 = -7LL;

    t53 = (((x217<=x218)!=x219)%x220);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x222 = 45095049890745262LL;
	volatile int64_t x223 = INT64_MIN;
	static int64_t x224 = 3920175996477033LL;

    t54 = (((x221<=x222)!=x223)%x224);

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x225 = UINT32_MAX;
	uint64_t t55 = 4578361LLU;

    t55 = (((x225<=x226)!=x227)%x228);

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -1;
	uint64_t x231 = 321927363235316116LLU;
	uint8_t x232 = 2U;

    t56 = (((x229<=x230)!=x231)%x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x236 = -1013;
	int32_t t57 = -14550;

    t57 = (((x233<=x234)!=x235)%x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = INT32_MAX;
	volatile uint64_t x238 = 8061019719731037216LLU;
	int64_t x240 = -1LL;
	volatile int64_t t58 = 177698326LL;

    t58 = (((x237<=x238)!=x239)%x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x241 = INT32_MIN;
	uint16_t x242 = 0U;
	int64_t x243 = INT64_MAX;
	int32_t x244 = 40627;
	static int32_t t59 = 67;

    t59 = (((x241<=x242)!=x243)%x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MAX;
	static uint16_t x246 = 1599U;
	volatile int32_t t60 = 0;

    t60 = (((x245<=x246)!=x247)%x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x249 = INT16_MIN;
	uint32_t x250 = 45U;
	volatile uint8_t x251 = UINT8_MAX;
	static uint64_t x252 = 21614LLU;
	uint64_t t61 = 3337994LLU;

    t61 = (((x249<=x250)!=x251)%x252);

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;

    t62 = (((x253<=x254)!=x255)%x256);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x258 = -2024;
	int8_t x259 = 11;
	static int8_t x260 = INT8_MIN;
	int32_t t63 = 36029208;

    t63 = (((x257<=x258)!=x259)%x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x261 = 96U;
	static int32_t x263 = 3;
	uint32_t x264 = 173625910U;
	volatile uint32_t t64 = 1U;

    t64 = (((x261<=x262)!=x263)%x264);

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x265 = INT64_MIN;
	int32_t x266 = 1788;
	static int32_t x267 = -989483;
	volatile int32_t x268 = INT32_MAX;
	int32_t t65 = -128;

    t65 = (((x265<=x266)!=x267)%x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 255U;
	static uint32_t x272 = UINT32_MAX;
	static uint32_t t66 = 1845U;

    t66 = (((x269<=x270)!=x271)%x272);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MAX;
	int8_t x275 = INT8_MIN;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t67 = -10303626812LL;

    t67 = (((x273<=x274)!=x275)%x276);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -1;
	int64_t x280 = 79486436530LL;
	volatile int64_t t68 = 1120504795891135918LL;

    t68 = (((x277<=x278)!=x279)%x280);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x281 = INT64_MIN;
	int8_t x282 = 6;
	static volatile uint64_t t69 = 16640729339LLU;

    t69 = (((x281<=x282)!=x283)%x284);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = -1;
	int64_t x286 = INT64_MIN;
	static volatile uint64_t x287 = 695771793LLU;
	int32_t x288 = 39920363;
	int32_t t70 = 15370;

    t70 = (((x285<=x286)!=x287)%x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 31U;

    t71 = (((x289<=x290)!=x291)%x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x293 = INT8_MIN;
	static int16_t x294 = -1;
	int32_t x296 = -1;
	int32_t t72 = 27713;

    t72 = (((x293<=x294)!=x295)%x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x297 = -1LL;
	uint16_t x298 = UINT16_MAX;
	volatile uint32_t x299 = 94647893U;
	int8_t x300 = 55;
	volatile int32_t t73 = 251280;

    t73 = (((x297<=x298)!=x299)%x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = 3571LLU;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t74 = 0;

    t74 = (((x301<=x302)!=x303)%x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x306 = -5985088LL;
	static int8_t x307 = -3;
	int32_t x308 = -7;

    t75 = (((x305<=x306)!=x307)%x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x309 = 1589954930882822LL;
	int8_t x310 = -1;
	static int8_t x311 = INT8_MAX;
	static uint8_t x312 = UINT8_MAX;
	int32_t t76 = -1844;

    t76 = (((x309<=x310)!=x311)%x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	volatile int32_t t77 = -4;

    t77 = (((x313<=x314)!=x315)%x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x319 = -1073;
	static volatile int16_t x320 = INT16_MIN;
	int32_t t78 = -63382;

    t78 = (((x317<=x318)!=x319)%x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint32_t x321 = UINT32_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	int32_t x324 = -1;
	int32_t t79 = 40;

    t79 = (((x321<=x322)!=x323)%x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x325 = INT32_MAX;
	static int8_t x327 = -5;
	uint32_t t80 = 16509181U;

    t80 = (((x325<=x326)!=x327)%x328);

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x329 = -78LL;
	uint16_t x330 = 2083U;
	static int32_t x331 = 1669137;
	volatile uint16_t x332 = 1648U;
	volatile int32_t t81 = 97504;

    t81 = (((x329<=x330)!=x331)%x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = 50U;
	static int64_t x335 = INT64_MAX;

    t82 = (((x333<=x334)!=x335)%x336);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x337 = 0U;
	static uint64_t x338 = 391526692LLU;
	int32_t x339 = -1;
	static int64_t x340 = 11651087LL;
	static int64_t t83 = -8914LL;

    t83 = (((x337<=x338)!=x339)%x340);

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = -33947058672027LL;
	int8_t x342 = -1;
	static int16_t x343 = 65;
	int32_t x344 = -169565;
	static volatile int32_t t84 = -25962;

    t84 = (((x341<=x342)!=x343)%x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = 281;
	volatile uint32_t x347 = UINT32_MAX;
	volatile int16_t x348 = -1;
	int32_t t85 = -113928;

    t85 = (((x345<=x346)!=x347)%x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x349 = INT16_MAX;
	volatile int16_t x350 = -20;
	int8_t x351 = INT8_MIN;
	static volatile int8_t x352 = INT8_MIN;
	volatile int32_t t86 = 8696655;

    t86 = (((x349<=x350)!=x351)%x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x355 = -1LL;
	int64_t x356 = INT64_MAX;
	volatile int64_t t87 = -221255LL;

    t87 = (((x353<=x354)!=x355)%x356);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x358 = -1LL;
	uint8_t x360 = UINT8_MAX;
	static int32_t t88 = -8;

    t88 = (((x357<=x358)!=x359)%x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = INT8_MAX;
	volatile int32_t x363 = INT32_MAX;
	static volatile int8_t x364 = -30;
	static int32_t t89 = 25941;

    t89 = (((x361<=x362)!=x363)%x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x365 = INT16_MIN;
	uint32_t x367 = 150U;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t90 = -65;

    t90 = (((x365<=x366)!=x367)%x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x369 = INT16_MAX;
	int64_t x370 = -1952330LL;
	int32_t t91 = -1;

    t91 = (((x369<=x370)!=x371)%x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x373 = 1799U;
	volatile uint32_t x374 = UINT32_MAX;
	int64_t x375 = 1072594690752LL;
	uint16_t x376 = 140U;
	volatile int32_t t92 = 51631;

    t92 = (((x373<=x374)!=x375)%x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = INT32_MIN;
	static uint16_t x379 = UINT16_MAX;
	int8_t x380 = -1;
	volatile int32_t t93 = -749;

    t93 = (((x377<=x378)!=x379)%x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x381 = 1LL;
	int64_t x382 = 2226210395175230LL;
	volatile int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	volatile int64_t t94 = 2318LL;

    t94 = (((x381<=x382)!=x383)%x384);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = -1;
	int64_t x386 = INT64_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t x388 = 1307608U;
	volatile uint32_t t95 = 412421419U;

    t95 = (((x385<=x386)!=x387)%x388);

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x389 = UINT8_MAX;
	static uint64_t x390 = 14036LLU;
	uint8_t x392 = UINT8_MAX;
	int32_t t96 = 1;

    t96 = (((x389<=x390)!=x391)%x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x393 = -894;
	volatile int16_t x394 = -109;
	int16_t x395 = 1;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t97 = -1407;

    t97 = (((x393<=x394)!=x395)%x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = -4783995;
	static int8_t x398 = -14;
	int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = 242U;

    t98 = (((x397<=x398)!=x399)%x400);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x402 = 1973140U;
	int8_t x403 = 0;
	volatile int64_t t99 = 406560050LL;

    t99 = (((x401<=x402)!=x403)%x404);

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	int32_t x408 = -1;

    t100 = (((x405<=x406)!=x407)%x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x409 = UINT64_MAX;
	uint16_t x410 = UINT16_MAX;
	int16_t x411 = -1;
	static uint64_t x412 = 95922374348935LLU;
	uint64_t t101 = 818267995LLU;

    t101 = (((x409<=x410)!=x411)%x412);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MIN;
	uint64_t x416 = 24002876760946872LLU;

    t102 = (((x413<=x414)!=x415)%x416);

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x418 = UINT16_MAX;
	volatile int64_t x419 = INT64_MAX;
	int64_t t103 = 80006051LL;

    t103 = (((x417<=x418)!=x419)%x420);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = -1;
	uint32_t x424 = 11539273U;

    t104 = (((x421<=x422)!=x423)%x424);

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	static int32_t t105 = -381;

    t105 = (((x425<=x426)!=x427)%x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x429 = 29U;
	volatile int16_t x431 = INT16_MIN;
	int16_t x432 = -1;
	volatile int32_t t106 = -1352;

    t106 = (((x429<=x430)!=x431)%x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = 7404633190657835LL;
	int8_t x434 = 2;
	int64_t x436 = -1LL;
	static int64_t t107 = -947482445219984LL;

    t107 = (((x433<=x434)!=x435)%x436);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x437 = INT64_MIN;
	uint16_t x438 = UINT16_MAX;
	static volatile int16_t x439 = INT16_MAX;
	volatile int32_t t108 = -11153309;

    t108 = (((x437<=x438)!=x439)%x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = INT64_MAX;
	int8_t x442 = -1;
	int8_t x443 = 0;
	int32_t t109 = -1;

    t109 = (((x441<=x442)!=x443)%x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x445 = 126U;
	static uint8_t x448 = UINT8_MAX;
	static int32_t t110 = -341046;

    t110 = (((x445<=x446)!=x447)%x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = -532799774252723565LL;
	int64_t x450 = INT64_MAX;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = 3269651938136916LLU;
	uint64_t t111 = 4389LLU;

    t111 = (((x449<=x450)!=x451)%x452);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x453 = INT64_MIN;
	uint8_t x454 = 70U;
	int8_t x455 = INT8_MAX;
	volatile uint64_t x456 = 461539700709LLU;
	uint64_t t112 = 14556347337898LLU;

    t112 = (((x453<=x454)!=x455)%x456);

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x457 = -1LL;
	static int16_t x458 = 3;
	int8_t x459 = 1;
	int16_t x460 = INT16_MIN;

    t113 = (((x457<=x458)!=x459)%x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x462 = 18U;
	int16_t x463 = -1;
	int32_t x464 = INT32_MIN;
	int32_t t114 = 0;

    t114 = (((x461<=x462)!=x463)%x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = -1;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = 1637922681LL;
	volatile int64_t t115 = 3008031738078LL;

    t115 = (((x465<=x466)!=x467)%x468);

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x469 = 0;
	volatile uint32_t x470 = 1665671177U;
	int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MIN;

    t116 = (((x469<=x470)!=x471)%x472);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x473 = -1;
	static volatile int64_t x474 = -1LL;
	int16_t x475 = 0;
	int8_t x476 = -1;
	static volatile int32_t t117 = -3;

    t117 = (((x473<=x474)!=x475)%x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x477 = 3372682808381080LLU;
	int16_t x478 = -1;
	static uint16_t x479 = 5299U;
	uint16_t x480 = 8U;
	int32_t t118 = 116;

    t118 = (((x477<=x478)!=x479)%x480);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x481 = -1;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;
	int32_t t119 = -1;

    t119 = (((x481<=x482)!=x483)%x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x485 = INT64_MIN;
	volatile int64_t x486 = -1LL;
	int16_t x487 = 13;
	volatile int64_t x488 = INT64_MIN;
	int64_t t120 = -272749760460463LL;

    t120 = (((x485<=x486)!=x487)%x488);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x490 = 370213104LLU;
	static int64_t x491 = 325920958884849574LL;
	volatile int32_t t121 = -172722;

    t121 = (((x489<=x490)!=x491)%x492);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	int32_t x494 = INT32_MAX;
	volatile uint8_t x496 = 1U;
	volatile int32_t t122 = -4;

    t122 = (((x493<=x494)!=x495)%x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x497 = 814907U;
	int64_t x498 = -5295166LL;
	int16_t x499 = 231;
	static volatile int32_t x500 = -2460801;
	int32_t t123 = 259278;

    t123 = (((x497<=x498)!=x499)%x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x505 = UINT64_MAX;
	int64_t x507 = INT64_MIN;
	uint16_t x508 = 302U;
	int32_t t124 = -48941994;

    t124 = (((x505<=x506)!=x507)%x508);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	int8_t x510 = 22;
	volatile uint16_t x511 = 12896U;
	uint8_t x512 = 1U;
	int32_t t125 = 77080346;

    t125 = (((x509<=x510)!=x511)%x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x513 = UINT8_MAX;
	int32_t x515 = INT32_MIN;
	int32_t t126 = 4;

    t126 = (((x513<=x514)!=x515)%x516);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x517 = INT8_MAX;
	uint16_t x518 = UINT16_MAX;
	int16_t x519 = 5480;
	static uint64_t x520 = 2474040817199LLU;
	volatile uint64_t t127 = 21681240631736793LLU;

    t127 = (((x517<=x518)!=x519)%x520);

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x521 = -5LL;
	int64_t x522 = INT64_MIN;
	uint64_t x523 = 301250556682LLU;
	int16_t x524 = INT16_MIN;
	volatile int32_t t128 = -224282;

    t128 = (((x521<=x522)!=x523)%x524);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = -3;
	volatile uint32_t x527 = UINT32_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t129 = -71;

    t129 = (((x525<=x526)!=x527)%x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x529 = INT8_MAX;
	int16_t x530 = 13;
	uint64_t x531 = 36344764283556013LLU;
	volatile int16_t x532 = -9427;
	volatile int32_t t130 = 349990447;

    t130 = (((x529<=x530)!=x531)%x532);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x533 = -1;
	static int8_t x534 = -1;
	int32_t t131 = -2988;

    t131 = (((x533<=x534)!=x535)%x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MAX;
	uint16_t x543 = 3999U;

    t132 = (((x541<=x542)!=x543)%x544);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = 1;
	int32_t x546 = INT32_MIN;
	int16_t x547 = INT16_MIN;
	int8_t x548 = -1;

    t133 = (((x545<=x546)!=x547)%x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = INT32_MIN;
	static int16_t x550 = INT16_MIN;
	int8_t x551 = INT8_MAX;
	static uint64_t x552 = UINT64_MAX;
	uint64_t t134 = 19763000981298LLU;

    t134 = (((x549<=x550)!=x551)%x552);

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x554 = INT64_MIN;
	static volatile int16_t x555 = 3;
	uint64_t t135 = 1584557577582251068LLU;

    t135 = (((x553<=x554)!=x555)%x556);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x557 = 30U;
	volatile int32_t x558 = -464689116;
	int16_t x559 = -1;
	static volatile int32_t t136 = 66002976;

    t136 = (((x557<=x558)!=x559)%x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x562 = -183898;
	uint16_t x563 = 9U;
	static int64_t x564 = -1LL;

    t137 = (((x561<=x562)!=x563)%x564);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x565 = 3135241634068LLU;
	volatile int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MIN;
	static int16_t x568 = INT16_MIN;
	int32_t t138 = 326267745;

    t138 = (((x565<=x566)!=x567)%x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x570 = -1;
	static volatile int64_t x571 = INT64_MIN;
	static int32_t x572 = -474;
	volatile int32_t t139 = 1903;

    t139 = (((x569<=x570)!=x571)%x572);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x574 = -1;
	uint64_t x575 = 1LLU;
	int64_t x576 = INT64_MIN;
	int64_t t140 = -75652358454888LL;

    t140 = (((x573<=x574)!=x575)%x576);

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x577 = 6666391695371LLU;
	uint16_t x580 = 3617U;
	volatile int32_t t141 = -6572;

    t141 = (((x577<=x578)!=x579)%x580);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = INT16_MIN;
	static int16_t x582 = INT16_MIN;
	static uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 3232U;
	volatile uint32_t t142 = 8785U;

    t142 = (((x581<=x582)!=x583)%x584);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x586 = INT16_MIN;
	uint64_t x587 = 1173219592714001210LLU;
	static int64_t x588 = -3648240005LL;
	int64_t t143 = 731507LL;

    t143 = (((x585<=x586)!=x587)%x588);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = -1;
	volatile uint64_t x590 = 1LLU;
	volatile int64_t x591 = INT64_MAX;
	int32_t x592 = -1;
	int32_t t144 = 0;

    t144 = (((x589<=x590)!=x591)%x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x593 = 372074042U;
	static int64_t x594 = -35LL;
	uint64_t x595 = 107017574909LLU;
	volatile uint32_t x596 = 551U;
	uint32_t t145 = 51U;

    t145 = (((x593<=x594)!=x595)%x596);

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x597 = INT64_MAX;
	uint64_t x598 = UINT64_MAX;
	uint64_t x599 = UINT64_MAX;
	volatile int32_t t146 = 5585;

    t146 = (((x597<=x598)!=x599)%x600);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x603 = -1;
	int16_t x604 = INT16_MIN;
	volatile int32_t t147 = -26;

    t147 = (((x601<=x602)!=x603)%x604);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = 0;
	uint8_t x606 = UINT8_MAX;
	int32_t x607 = 0;
	int32_t x608 = INT32_MAX;

    t148 = (((x605<=x606)!=x607)%x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x609 = INT64_MAX;
	volatile int64_t x610 = INT64_MAX;
	volatile uint32_t x611 = 1046300U;
	volatile int8_t x612 = INT8_MIN;
	static int32_t t149 = -26;

    t149 = (((x609<=x610)!=x611)%x612);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x613 = -120;
	int32_t x614 = INT32_MIN;
	uint64_t x615 = 9LLU;
	static volatile int32_t t150 = 105;

    t150 = (((x613<=x614)!=x615)%x616);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = INT8_MIN;
	int16_t x618 = -1;
	volatile uint16_t x619 = 49U;
	static int8_t x620 = -12;
	volatile int32_t t151 = 110;

    t151 = (((x617<=x618)!=x619)%x620);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x622 = 39477081326LLU;
	uint64_t x623 = 115002183643LLU;
	static int16_t x624 = -1;
	int32_t t152 = 512378364;

    t152 = (((x621<=x622)!=x623)%x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = 1;
	int8_t x626 = INT8_MAX;
	int32_t x627 = -1;
	int16_t x628 = 8894;
	volatile int32_t t153 = 542516;

    t153 = (((x625<=x626)!=x627)%x628);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x629 = UINT8_MAX;
	uint64_t x630 = 1623266403045999LLU;
	uint16_t x631 = 3U;
	volatile int32_t x632 = -2283612;
	static int32_t t154 = -16;

    t154 = (((x629<=x630)!=x631)%x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x633 = UINT8_MAX;
	static int8_t x634 = INT8_MIN;
	int64_t x635 = 0LL;
	uint8_t x636 = UINT8_MAX;
	int32_t t155 = 23312031;

    t155 = (((x633<=x634)!=x635)%x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t t156 = 1425U;

    t156 = (((x637<=x638)!=x639)%x640);

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x641 = INT64_MIN;
	static int16_t x642 = INT16_MAX;
	uint8_t x643 = 5U;
	int32_t x644 = -2214;
	static volatile int32_t t157 = 1046;

    t157 = (((x641<=x642)!=x643)%x644);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x645 = 1478U;
	int64_t x646 = -38014080725842LL;
	volatile int32_t x647 = INT32_MIN;
	int32_t t158 = -229;

    t158 = (((x645<=x646)!=x647)%x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MIN;
	volatile int32_t x652 = INT32_MIN;
	int32_t t159 = -815585456;

    t159 = (((x649<=x650)!=x651)%x652);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x653 = -1;
	static int16_t x654 = INT16_MIN;
	int8_t x655 = INT8_MIN;

    t160 = (((x653<=x654)!=x655)%x656);

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = -30237091;
	int32_t x658 = INT32_MIN;
	int32_t x659 = -1;
	int16_t x660 = INT16_MIN;
	int32_t t161 = -3;

    t161 = (((x657<=x658)!=x659)%x660);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = INT64_MIN;
	uint16_t x662 = UINT16_MAX;
	int64_t x663 = INT64_MIN;
	static uint16_t x664 = UINT16_MAX;
	static int32_t t162 = 21;

    t162 = (((x661<=x662)!=x663)%x664);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x665 = 12U;
	int16_t x667 = 289;
	static int64_t x668 = -1LL;
	int64_t t163 = -166254175LL;

    t163 = (((x665<=x666)!=x667)%x668);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x669 = INT64_MIN;
	uint8_t x670 = 9U;
	int64_t x671 = INT64_MIN;
	static uint32_t x672 = UINT32_MAX;
	uint32_t t164 = 5675015U;

    t164 = (((x669<=x670)!=x671)%x672);

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x673 = -1;
	int8_t x674 = -1;
	uint32_t x675 = 340U;

    t165 = (((x673<=x674)!=x675)%x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x677 = UINT8_MAX;
	static int8_t x678 = -1;
	int16_t x679 = 2423;
	int64_t x680 = INT64_MAX;

    t166 = (((x677<=x678)!=x679)%x680);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x682 = UINT64_MAX;
	int32_t x683 = 2747;
	int32_t x684 = INT32_MAX;
	volatile int32_t t167 = -133968673;

    t167 = (((x681<=x682)!=x683)%x684);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x686 = -1LL;
	int32_t x687 = -1;
	int8_t x688 = -1;
	int32_t t168 = 4009517;

    t168 = (((x685<=x686)!=x687)%x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = -1LL;
	int16_t x690 = -8040;
	static int16_t x692 = -1;
	volatile int32_t t169 = 6590;

    t169 = (((x689<=x690)!=x691)%x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x693 = -1;
	static uint16_t x694 = 8U;
	int64_t x695 = -1LL;
	volatile int32_t t170 = 2118;

    t170 = (((x693<=x694)!=x695)%x696);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x701 = 2560U;
	uint8_t x702 = 3U;
	volatile int16_t x704 = -130;
	volatile int32_t t171 = -1736;

    t171 = (((x701<=x702)!=x703)%x704);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x705 = UINT8_MAX;
	int16_t x706 = -14040;
	uint64_t x708 = 28567LLU;
	static uint64_t t172 = 528268713334391919LLU;

    t172 = (((x705<=x706)!=x707)%x708);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x709 = INT16_MAX;
	volatile int32_t x711 = 35797;
	volatile int32_t x712 = INT32_MAX;
	int32_t t173 = -214926;

    t173 = (((x709<=x710)!=x711)%x712);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x713 = UINT64_MAX;
	static uint32_t x715 = 14209044U;
	uint16_t x716 = 578U;
	volatile int32_t t174 = -14091;

    t174 = (((x713<=x714)!=x715)%x716);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x717 = 10975U;
	static int8_t x718 = INT8_MAX;
	static volatile int16_t x719 = INT16_MIN;
	int8_t x720 = 1;
	static int32_t t175 = -582529;

    t175 = (((x717<=x718)!=x719)%x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x721 = 51U;
	int64_t x722 = -96959694693257739LL;
	static uint64_t x724 = UINT64_MAX;
	volatile uint64_t t176 = 65161600212LLU;

    t176 = (((x721<=x722)!=x723)%x724);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x725 = INT16_MIN;
	volatile uint16_t x727 = UINT16_MAX;
	static volatile int32_t x728 = -80790604;
	int32_t t177 = 20987;

    t177 = (((x725<=x726)!=x727)%x728);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x729 = UINT16_MAX;
	static int16_t x730 = -1;
	int16_t x732 = -1;
	int32_t t178 = -15465187;

    t178 = (((x729<=x730)!=x731)%x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x736 = -1;
	static volatile int32_t t179 = -27;

    t179 = (((x733<=x734)!=x735)%x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x737 = -18;
	volatile int8_t x738 = INT8_MIN;
	volatile int32_t x740 = 6;
	static volatile int32_t t180 = -101682500;

    t180 = (((x737<=x738)!=x739)%x740);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x741 = 247591U;
	static int8_t x742 = -1;
	uint16_t x744 = 26U;
	volatile int32_t t181 = -775055688;

    t181 = (((x741<=x742)!=x743)%x744);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x747 = -1;
	int64_t x748 = INT64_MAX;
	static int64_t t182 = -3231787LL;

    t182 = (((x745<=x746)!=x747)%x748);

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x749 = 1U;
	int8_t x751 = INT8_MIN;
	int64_t x752 = INT64_MIN;
	static int64_t t183 = 5009LL;

    t183 = (((x749<=x750)!=x751)%x752);

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x753 = 516;
	int64_t x754 = 0LL;
	uint16_t x755 = 3423U;
	int32_t x756 = INT32_MAX;
	volatile int32_t t184 = 56594348;

    t184 = (((x753<=x754)!=x755)%x756);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x757 = 23363U;
	volatile uint32_t x758 = 28U;
	int32_t x759 = -1;
	int16_t x760 = -1;
	int32_t t185 = 5605342;

    t185 = (((x757<=x758)!=x759)%x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x761 = -1LL;
	int64_t x762 = -1LL;
	int32_t x763 = INT32_MIN;
	uint8_t x764 = 16U;
	int32_t t186 = -1305;

    t186 = (((x761<=x762)!=x763)%x764);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x767 = 237;
	uint64_t x768 = 437222108668LLU;

    t187 = (((x765<=x766)!=x767)%x768);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x770 = 1576;
	static int64_t x771 = -1LL;
	uint64_t x772 = 40596509237LLU;
	uint64_t t188 = 1512LLU;

    t188 = (((x769<=x770)!=x771)%x772);

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x777 = INT16_MAX;
	int64_t x778 = 803LL;
	uint64_t x779 = 3LLU;
	static uint32_t t189 = 3892U;

    t189 = (((x777<=x778)!=x779)%x780);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x781 = INT32_MIN;
	static int16_t x783 = -1;
	int16_t x784 = INT16_MIN;
	int32_t t190 = -1;

    t190 = (((x781<=x782)!=x783)%x784);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x785 = 6764749U;
	int8_t x786 = -15;
	static uint16_t x787 = 2351U;
	static int64_t x788 = -14LL;
	int64_t t191 = -999194333217087LL;

    t191 = (((x785<=x786)!=x787)%x788);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x789 = 77U;
	int8_t x790 = INT8_MAX;
	uint8_t x791 = 78U;
	static volatile int8_t x792 = INT8_MAX;
	int32_t t192 = 244141224;

    t192 = (((x789<=x790)!=x791)%x792);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x793 = -4955917192820823LL;
	uint8_t x796 = 61U;
	static volatile int32_t t193 = 63;

    t193 = (((x793<=x794)!=x795)%x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x797 = -1;
	volatile int64_t x800 = INT64_MIN;

    t194 = (((x797<=x798)!=x799)%x800);

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x801 = 7717LL;
	int8_t x802 = INT8_MIN;
	static int8_t x803 = INT8_MAX;
	int8_t x804 = INT8_MAX;
	static int32_t t195 = 3;

    t195 = (((x801<=x802)!=x803)%x804);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x805 = -4;
	static uint16_t x806 = 7U;
	static uint16_t x807 = UINT16_MAX;
	int64_t x808 = 29074165689LL;
	int64_t t196 = -375558467LL;

    t196 = (((x805<=x806)!=x807)%x808);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = 1626924247485456LL;
	uint8_t x810 = 109U;
	static int16_t x811 = INT16_MAX;
	uint64_t x812 = 77LLU;
	static uint64_t t197 = 1LLU;

    t197 = (((x809<=x810)!=x811)%x812);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x813 = -1;
	int16_t x814 = -11;
	uint16_t x815 = 43U;
	int32_t x816 = INT32_MAX;

    t198 = (((x813<=x814)!=x815)%x816);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x817 = 24261U;
	int32_t x818 = INT32_MAX;
	static int32_t x819 = INT32_MIN;
	volatile uint32_t t199 = 411027549U;

    t199 = (((x817<=x818)!=x819)%x820);

    if (t199 != 0U) { NG(); } else { ; }
	
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

