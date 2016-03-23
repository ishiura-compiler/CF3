
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

int64_t x3 = -1LL;
uint8_t x8 = 41U;
static volatile int32_t t1 = -1962;
static int64_t x17 = INT64_MIN;
static uint16_t x19 = 438U;
int16_t x20 = -1;
uint16_t x24 = 54U;
static volatile int32_t t6 = 112;
volatile int16_t x34 = -2853;
static uint64_t x35 = 10160LLU;
static int8_t x44 = INT8_MIN;
uint8_t x45 = 24U;
int32_t t10 = -8324;
uint8_t x56 = UINT8_MAX;
int8_t x61 = -1;
static int32_t x64 = INT32_MAX;
int32_t t13 = -2016825;
volatile int32_t x80 = 2;
volatile int32_t t17 = 501249;
volatile int64_t x81 = 191372658LL;
int32_t x84 = -1;
uint8_t x88 = UINT8_MAX;
volatile int32_t t21 = -36543988;
volatile int8_t x105 = 63;
volatile int32_t t23 = -24272;
int64_t x109 = -1LL;
uint32_t x127 = 23265U;
int32_t t27 = -3;
uint64_t x136 = 202LLU;
int8_t x138 = -12;
int32_t t30 = -52;
int64_t x147 = 247LL;
int32_t t33 = -727685557;
int32_t t34 = 973;
int8_t x160 = INT8_MAX;
uint16_t x170 = 460U;
int8_t x172 = -1;
volatile int32_t t37 = -454797;
static int32_t x174 = -158;
volatile int32_t t38 = -2;
int16_t x181 = INT16_MIN;
int32_t x213 = 0;
int16_t x214 = INT16_MIN;
int64_t x218 = INT64_MIN;
volatile uint32_t x220 = UINT32_MAX;
int32_t x226 = -1;
volatile int32_t t48 = 27046717;
volatile int8_t x232 = -1;
int64_t x234 = 8126LL;
volatile int32_t t51 = 54155;
int32_t t52 = 3498;
volatile int64_t x245 = INT64_MIN;
uint32_t x250 = 0U;
uint8_t x252 = 2U;
int32_t x258 = INT32_MIN;
volatile int32_t t57 = -109655;
int32_t t58 = -46524;
uint8_t x271 = 51U;
volatile int32_t t59 = -1;
static int16_t x285 = 609;
int8_t x295 = INT8_MAX;
volatile int8_t x303 = -5;
volatile int16_t x312 = -1;
uint16_t x321 = UINT16_MAX;
int8_t x323 = INT8_MIN;
uint8_t x334 = 7U;
volatile int16_t x335 = INT16_MIN;
int64_t x344 = INT64_MIN;
uint16_t x347 = 0U;
static volatile int32_t t76 = 117943735;
volatile int32_t t77 = 7;
int16_t x374 = -51;
int64_t x387 = INT64_MIN;
volatile int16_t x389 = INT16_MAX;
int8_t x395 = INT8_MIN;
uint16_t x400 = UINT16_MAX;
uint16_t x411 = UINT16_MAX;
volatile int64_t x413 = INT64_MIN;
int8_t x415 = INT8_MIN;
static int32_t t91 = 55337570;
static uint64_t x427 = 9195625746LLU;
int16_t x445 = -1;
uint16_t x448 = UINT16_MAX;
int32_t t98 = 2;
static int32_t x456 = INT32_MIN;
volatile int32_t t101 = -56933557;
uint32_t x481 = 2005601173U;
int8_t x482 = INT8_MIN;
int16_t x486 = INT16_MIN;
volatile int32_t t107 = 64987582;
static int8_t x489 = -3;
uint32_t x498 = UINT32_MAX;
int32_t x499 = 854514357;
volatile int32_t t110 = 527170;
volatile int32_t t111 = -1;
int8_t x511 = INT8_MIN;
static uint16_t x515 = 251U;
uint8_t x516 = UINT8_MAX;
static volatile int16_t x517 = -1;
static volatile int32_t x523 = INT32_MIN;
static volatile int32_t t116 = -1;
volatile int32_t t117 = 58265;
int64_t x533 = -4542613830498940018LL;
int32_t t118 = -57;
static int8_t x537 = -1;
static volatile int32_t t120 = 326475552;
int16_t x546 = INT16_MIN;
uint16_t x561 = 28U;
uint64_t x568 = 71787306530LLU;
int16_t x570 = INT16_MAX;
volatile int32_t t126 = -216277;
int32_t x573 = INT32_MAX;
volatile int64_t x579 = 484LL;
int32_t x592 = 66755;
volatile uint8_t x597 = 10U;
int16_t x598 = INT16_MAX;
static uint8_t x607 = 126U;
static uint8_t x623 = 14U;
volatile int16_t x638 = 5482;
int8_t x665 = -46;
uint8_t x671 = UINT8_MAX;
volatile int32_t t143 = -7;
int64_t x677 = -1LL;
volatile int32_t t144 = -2778;
static volatile int8_t x683 = INT8_MIN;
int32_t t148 = -16181;
int8_t x703 = INT8_MAX;
int32_t x704 = 160;
volatile int32_t t151 = 13362;
volatile int32_t t152 = 72073;
int32_t x742 = 4100;
uint32_t x762 = 13960030U;
int16_t x764 = -1;
volatile int32_t t163 = -3436;
static uint32_t x777 = 33316U;
uint16_t x778 = 202U;
volatile int32_t t164 = 102157;
static volatile int32_t t165 = -75175;
int8_t x787 = INT8_MAX;
volatile int16_t x791 = -1638;
uint16_t x795 = UINT16_MAX;
volatile int32_t t169 = 3522138;
int64_t x813 = -1LL;
int16_t x829 = 253;
uint32_t x830 = 8153088U;
volatile int32_t t174 = 71380;
int16_t x840 = INT16_MIN;
volatile uint32_t x848 = 2237U;
volatile uint64_t x869 = 714606923353437390LLU;
volatile int16_t x870 = INT16_MAX;
static volatile int16_t x872 = INT16_MIN;
volatile int16_t x886 = INT16_MIN;
volatile int32_t t184 = 34475;
volatile int32_t t185 = -14758683;
int64_t x893 = -27868479LL;
volatile uint64_t x895 = 416553631LLU;
int64_t x898 = 34675229831LL;
volatile int32_t x900 = INT32_MIN;
int16_t x910 = INT16_MAX;
uint64_t x914 = 60506595LLU;
int32_t t191 = -224;
volatile uint32_t x929 = 55001910U;
int8_t x950 = -1;
volatile int64_t x954 = -1LL;
static uint32_t x957 = 18U;
static volatile int8_t x960 = -9;


void f0(void) {
    	int16_t x1 = 15478;
	static uint8_t x2 = 13U;
	int8_t x4 = 18;
	volatile int32_t t0 = -19077566;

    t0 = (((x1-x2)>x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	uint16_t x6 = 7495U;
	volatile int64_t x7 = 10300LL;

    t1 = (((x5-x6)>x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int8_t x10 = 1;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -6;

    t2 = (((x9-x10)>x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	volatile int8_t x14 = -3;
	int8_t x15 = INT8_MAX;
	uint64_t x16 = 1506648LLU;
	int32_t t3 = 56901562;

    t3 = (((x13-x14)>x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	static int32_t t4 = -3053;

    t4 = (((x17-x18)>x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 6U;
	int64_t x22 = -36LL;
	static uint8_t x23 = 3U;
	int32_t t5 = 11;

    t5 = (((x21-x22)>x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 21435U;
	static int32_t x26 = -1;
	uint64_t x27 = 1LLU;
	static uint16_t x28 = UINT16_MAX;

    t6 = (((x25-x26)>x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MAX;
	static uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 298U;
	uint16_t x32 = 3231U;
	int32_t t7 = 9;

    t7 = (((x29-x30)>x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int32_t x36 = 3648;
	volatile int32_t t8 = -460279;

    t8 = (((x33-x34)>x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = 0LL;
	volatile int64_t x42 = -345319238381LL;
	uint32_t x43 = 83213U;
	static volatile int32_t t9 = -121;

    t9 = (((x41-x42)>x43)==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x46 = INT8_MAX;
	int8_t x47 = -13;
	volatile uint32_t x48 = UINT32_MAX;

    t10 = (((x45-x46)>x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 4450564;
	int64_t x50 = -1LL;
	volatile uint32_t x51 = 1004734711U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 4186;

    t11 = (((x49-x50)>x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	int32_t x54 = 1765939;
	volatile int64_t x55 = -1LL;
	int32_t t12 = -26964391;

    t12 = (((x53-x54)>x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x62 = -1;
	uint16_t x63 = 202U;

    t13 = (((x61-x62)>x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x65 = UINT16_MAX;
	static uint64_t x66 = 1756962089335LLU;
	static int64_t x67 = 8159971LL;
	static int64_t x68 = INT64_MAX;
	int32_t t14 = -20135;

    t14 = (((x65-x66)>x67)==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = 0U;
	int64_t x70 = 48422181853LL;
	uint64_t x71 = 4044509LLU;
	int32_t x72 = INT32_MIN;
	volatile int32_t t15 = -134;

    t15 = (((x69-x70)>x71)==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	static uint32_t x75 = UINT32_MAX;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t16 = 1;

    t16 = (((x73-x74)>x75)==x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MIN;
	uint16_t x78 = 52U;
	uint32_t x79 = 2400337U;

    t17 = (((x77-x78)>x79)==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x82 = 24216653064LLU;
	uint64_t x83 = 6472096883LLU;
	int32_t t18 = 0;

    t18 = (((x81-x82)>x83)==x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -369581907268966LL;
	int32_t t19 = -1908713;

    t19 = (((x85-x86)>x87)==x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	int16_t x91 = -1;
	int32_t x92 = -207802;
	static int32_t t20 = -5607613;

    t20 = (((x89-x90)>x91)==x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 7U;
	uint8_t x98 = UINT8_MAX;
	uint64_t x99 = UINT64_MAX;
	static uint32_t x100 = UINT32_MAX;

    t21 = (((x97-x98)>x99)==x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 10141192U;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	volatile uint64_t x104 = 1237886684706LLU;
	volatile int32_t t22 = 45394;

    t22 = (((x101-x102)>x103)==x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = -1;
	uint16_t x107 = 2U;
	volatile int8_t x108 = 0;

    t23 = (((x105-x106)>x107)==x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x110 = -167;
	int16_t x111 = INT16_MAX;
	static int64_t x112 = 510959748528594LL;
	volatile int32_t t24 = 910245;

    t24 = (((x109-x110)>x111)==x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = INT8_MIN;
	volatile int8_t x118 = INT8_MIN;
	uint64_t x119 = 262534037LLU;
	int64_t x120 = -1002240824223675LL;
	int32_t t25 = 28505;

    t25 = (((x117-x118)>x119)==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x121 = UINT32_MAX;
	static volatile int32_t x122 = -21;
	int16_t x123 = 12108;
	static volatile int8_t x124 = -1;
	volatile int32_t t26 = -997492;

    t26 = (((x121-x122)>x123)==x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = -1;
	volatile int64_t x126 = INT64_MAX;
	uint64_t x128 = 269LLU;

    t27 = (((x125-x126)>x127)==x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t28 = -1046328871;

    t28 = (((x129-x130)>x131)==x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = 88239276U;
	uint8_t x134 = 7U;
	static int32_t x135 = 585;
	int32_t t29 = -10;

    t29 = (((x133-x134)>x135)==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = 5456U;
	int8_t x139 = INT8_MAX;
	int8_t x140 = INT8_MIN;

    t30 = (((x137-x138)>x139)==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x141 = -1;
	int16_t x142 = -11;
	static volatile int8_t x143 = -7;
	int16_t x144 = -1;
	volatile int32_t t31 = -1;

    t31 = (((x141-x142)>x143)==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = 14632;
	static volatile int8_t x146 = -1;
	int16_t x148 = -25;
	int32_t t32 = 0;

    t32 = (((x145-x146)>x147)==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x149 = INT16_MAX;
	int8_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	volatile int32_t x152 = 38;

    t33 = (((x149-x150)>x151)==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = -1;
	int32_t x154 = 7;
	volatile int32_t x155 = -1;
	static int8_t x156 = 62;

    t34 = (((x153-x154)>x155)==x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = -11570060383050674LL;
	static int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	int32_t t35 = -451;

    t35 = (((x157-x158)>x159)==x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = 9079416LLU;
	uint64_t x162 = UINT64_MAX;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t36 = 11;

    t36 = (((x161-x162)>x163)==x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = INT64_MAX;
	static int64_t x171 = INT64_MIN;

    t37 = (((x169-x170)>x171)==x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x173 = 84U;
	volatile int16_t x175 = INT16_MIN;
	static int8_t x176 = 9;

    t38 = (((x173-x174)>x175)==x176);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = UINT8_MAX;
	static volatile uint16_t x180 = 751U;
	int32_t t39 = -301;

    t39 = (((x177-x178)>x179)==x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x182 = 1U;
	volatile int64_t x183 = INT64_MAX;
	uint64_t x184 = 5062329431410045LLU;
	static int32_t t40 = -15747;

    t40 = (((x181-x182)>x183)==x184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = INT64_MIN;
	uint16_t x190 = 0U;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	int32_t t41 = -3;

    t41 = (((x189-x190)>x191)==x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x193 = 763;
	uint32_t x194 = UINT32_MAX;
	static int64_t x195 = 530182936726935LL;
	int32_t x196 = INT32_MIN;
	static volatile int32_t t42 = 73020675;

    t42 = (((x193-x194)>x195)==x196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 253409026256LLU;
	int16_t x202 = -1;
	static volatile int8_t x203 = INT8_MIN;
	int8_t x204 = -7;
	volatile int32_t t43 = -35918;

    t43 = (((x201-x202)>x203)==x204);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x205 = INT8_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MAX;
	volatile uint64_t x208 = 20LLU;
	static volatile int32_t t44 = 114;

    t44 = (((x205-x206)>x207)==x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x215 = 1;
	uint32_t x216 = 4493336U;
	volatile int32_t t45 = -450068569;

    t45 = (((x213-x214)>x215)==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = -13;
	uint64_t x219 = UINT64_MAX;
	int32_t t46 = -9224734;

    t46 = (((x217-x218)>x219)==x220);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x221 = 14571U;
	static uint64_t x222 = 36303LLU;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -23861LL;
	static volatile int32_t t47 = 40599782;

    t47 = (((x221-x222)>x223)==x224);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = INT16_MIN;
	static uint8_t x227 = 0U;
	int32_t x228 = -12;

    t48 = (((x225-x226)>x227)==x228);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x229 = INT8_MAX;
	uint8_t x230 = 5U;
	uint32_t x231 = UINT32_MAX;
	int32_t t49 = 976;

    t49 = (((x229-x230)>x231)==x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x233 = INT16_MIN;
	static int32_t x235 = INT32_MIN;
	static int8_t x236 = 1;
	volatile int32_t t50 = 1;

    t50 = (((x233-x234)>x235)==x236);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = 11;
	int8_t x239 = 21;
	int64_t x240 = INT64_MIN;

    t51 = (((x237-x238)>x239)==x240);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	static volatile int8_t x242 = INT8_MAX;
	int8_t x243 = 5;
	int8_t x244 = INT8_MIN;

    t52 = (((x241-x242)>x243)==x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x246 = -1;
	static volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	int32_t t53 = -211;

    t53 = (((x245-x246)>x247)==x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x249 = 4663;
	volatile int16_t x251 = -55;
	volatile int32_t t54 = 41329;

    t54 = (((x249-x250)>x251)==x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x253 = UINT64_MAX;
	static int16_t x254 = -1;
	int64_t x255 = -3901458315137535674LL;
	volatile int16_t x256 = 11300;
	volatile int32_t t55 = 3998;

    t55 = (((x253-x254)>x255)==x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = -1;
	volatile int32_t x259 = INT32_MAX;
	int8_t x260 = 0;
	int32_t t56 = 2417691;

    t56 = (((x257-x258)>x259)==x260);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = INT32_MAX;
	static uint64_t x262 = UINT64_MAX;
	static volatile int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;

    t57 = (((x261-x262)>x263)==x264);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	int64_t x266 = -6640156795LL;
	int16_t x267 = -1;
	int8_t x268 = INT8_MIN;

    t58 = (((x265-x266)>x267)==x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x269 = INT32_MIN;
	int32_t x270 = -27455918;
	static uint8_t x272 = UINT8_MAX;

    t59 = (((x269-x270)>x271)==x272);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x273 = 502390952U;
	static int32_t x274 = INT32_MIN;
	uint32_t x275 = 7U;
	uint16_t x276 = 32U;
	volatile int32_t t60 = -7100921;

    t60 = (((x273-x274)>x275)==x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x277 = 127827824950407655LLU;
	int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	volatile int64_t x280 = INT64_MIN;
	volatile int32_t t61 = -6816709;

    t61 = (((x277-x278)>x279)==x280);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = 55U;
	static int32_t x288 = 75486307;
	static volatile int32_t t62 = 1;

    t62 = (((x285-x286)>x287)==x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x289 = INT32_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	static int16_t x291 = 2;
	int8_t x292 = INT8_MIN;
	int32_t t63 = 4741366;

    t63 = (((x289-x290)>x291)==x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = 4859;
	int64_t x294 = INT64_MAX;
	int16_t x296 = 0;
	static volatile int32_t t64 = 683760;

    t64 = (((x293-x294)>x295)==x296);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	static uint32_t x304 = 3692U;
	static volatile int32_t t65 = 8116;

    t65 = (((x301-x302)>x303)==x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = -1;
	static int32_t x306 = -1;
	int64_t x307 = 123296LL;
	int64_t x308 = -1LL;
	int32_t t66 = -21;

    t66 = (((x305-x306)>x307)==x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x309 = -599848902102737LL;
	static int64_t x310 = -1LL;
	volatile int8_t x311 = -24;
	static volatile int32_t t67 = 53;

    t67 = (((x309-x310)>x311)==x312);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	static uint8_t x320 = UINT8_MAX;
	int32_t t68 = 6827011;

    t68 = (((x317-x318)>x319)==x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x322 = 1360U;
	volatile int16_t x324 = -1;
	volatile int32_t t69 = 5208;

    t69 = (((x321-x322)>x323)==x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = INT16_MAX;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	int32_t x332 = -1;
	int32_t t70 = 60;

    t70 = (((x329-x330)>x331)==x332);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = -955563;
	int32_t x336 = -1;
	static volatile int32_t t71 = 15697185;

    t71 = (((x333-x334)>x335)==x336);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x337 = INT32_MAX;
	int64_t x338 = -1LL;
	int8_t x339 = -1;
	int8_t x340 = INT8_MAX;
	volatile int32_t t72 = 3589;

    t72 = (((x337-x338)>x339)==x340);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x341 = 8U;
	uint16_t x342 = 22U;
	volatile uint8_t x343 = 15U;
	int32_t t73 = -7;

    t73 = (((x341-x342)>x343)==x344);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x345 = -1LL;
	uint16_t x346 = 1439U;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t74 = 211398;

    t74 = (((x345-x346)>x347)==x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = 338815;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = -18;
	static int64_t x352 = 4395130554703LL;
	volatile int32_t t75 = -1;

    t75 = (((x349-x350)>x351)==x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = 22;
	uint8_t x354 = UINT8_MAX;
	static int8_t x355 = 8;
	uint64_t x356 = 42749727683112053LLU;

    t76 = (((x353-x354)>x355)==x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x357 = -1LL;
	int32_t x358 = -8151092;
	volatile int64_t x359 = INT64_MIN;
	volatile int8_t x360 = -1;

    t77 = (((x357-x358)>x359)==x360);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = 410LL;
	volatile int32_t x362 = INT32_MAX;
	static int8_t x363 = INT8_MIN;
	int64_t x364 = 539272850066259LL;
	static int32_t t78 = 2731;

    t78 = (((x361-x362)>x363)==x364);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = -3;
	static int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	volatile uint64_t x368 = 914088033LLU;
	volatile int32_t t79 = -571860;

    t79 = (((x365-x366)>x367)==x368);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x373 = 37U;
	volatile uint32_t x375 = UINT32_MAX;
	static uint8_t x376 = 25U;
	int32_t t80 = 0;

    t80 = (((x373-x374)>x375)==x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x377 = 12;
	int8_t x378 = -1;
	uint16_t x379 = 11U;
	static int16_t x380 = 0;
	static volatile int32_t t81 = 14384;

    t81 = (((x377-x378)>x379)==x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x381 = -1;
	volatile int16_t x382 = 1331;
	static int32_t x383 = -63;
	volatile uint64_t x384 = UINT64_MAX;
	int32_t t82 = 15;

    t82 = (((x381-x382)>x383)==x384);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x385 = 862954641U;
	uint64_t x386 = 832457LLU;
	uint16_t x388 = 18424U;
	static int32_t t83 = -16604891;

    t83 = (((x385-x386)>x387)==x388);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x390 = 70U;
	volatile int64_t x391 = -1LL;
	static uint64_t x392 = 52658173392788LLU;
	static volatile int32_t t84 = 424508;

    t84 = (((x389-x390)>x391)==x392);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x393 = 25807364U;
	int16_t x394 = INT16_MAX;
	int16_t x396 = -1;
	volatile int32_t t85 = 110;

    t85 = (((x393-x394)>x395)==x396);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = INT32_MIN;
	int8_t x398 = -1;
	uint64_t x399 = 4105456562LLU;
	volatile int32_t t86 = -57;

    t86 = (((x397-x398)>x399)==x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = -1;
	uint64_t x402 = 110LLU;
	int64_t x403 = -1LL;
	int32_t x404 = 6296810;
	int32_t t87 = 1;

    t87 = (((x401-x402)>x403)==x404);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = 2212039;
	static volatile uint16_t x406 = 16U;
	uint64_t x407 = UINT64_MAX;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t88 = -32946364;

    t88 = (((x405-x406)>x407)==x408);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	int64_t x412 = -1LL;
	int32_t t89 = -6290417;

    t89 = (((x409-x410)>x411)==x412);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x414 = INT32_MIN;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t90 = -3669;

    t90 = (((x413-x414)>x415)==x416);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x417 = INT64_MIN;
	static volatile int64_t x418 = INT64_MIN;
	int64_t x419 = -14LL;
	int64_t x420 = INT64_MIN;

    t91 = (((x417-x418)>x419)==x420);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = -1;
	volatile int16_t x422 = INT16_MAX;
	int8_t x423 = -1;
	uint64_t x424 = UINT64_MAX;
	static int32_t t92 = 0;

    t92 = (((x421-x422)>x423)==x424);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MIN;
	static uint32_t x428 = 371393833U;
	static volatile int32_t t93 = -1;

    t93 = (((x425-x426)>x427)==x428);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x433 = 1015690839179LL;
	static int16_t x434 = -1;
	uint8_t x435 = 15U;
	int64_t x436 = -1LL;
	int32_t t94 = -28640;

    t94 = (((x433-x434)>x435)==x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile uint16_t x438 = 3489U;
	int16_t x439 = 15;
	int32_t x440 = -16723408;
	static int32_t t95 = -26769462;

    t95 = (((x437-x438)>x439)==x440);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x441 = 36LLU;
	uint32_t x442 = UINT32_MAX;
	uint64_t x443 = UINT64_MAX;
	static int8_t x444 = -29;
	static int32_t t96 = -338331731;

    t96 = (((x441-x442)>x443)==x444);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x446 = UINT32_MAX;
	uint64_t x447 = 2865LLU;
	volatile int32_t t97 = -170910;

    t97 = (((x445-x446)>x447)==x448);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x449 = UINT32_MAX;
	int16_t x450 = -86;
	int32_t x451 = 0;
	int16_t x452 = -1;

    t98 = (((x449-x450)>x451)==x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x453 = INT32_MAX;
	uint64_t x454 = 16702492706LLU;
	volatile int8_t x455 = INT8_MAX;
	volatile int32_t t99 = -6158586;

    t99 = (((x453-x454)>x455)==x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = INT8_MAX;
	int64_t x458 = INT64_MAX;
	static int64_t x459 = INT64_MAX;
	int16_t x460 = 53;
	volatile int32_t t100 = -690627;

    t100 = (((x457-x458)>x459)==x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = INT32_MIN;
	int32_t x462 = -445;
	static int32_t x463 = INT32_MIN;
	volatile int64_t x464 = INT64_MAX;

    t101 = (((x461-x462)>x463)==x464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x465 = INT64_MAX;
	uint16_t x466 = UINT16_MAX;
	volatile int32_t x467 = INT32_MIN;
	int64_t x468 = 800665418284560996LL;
	int32_t t102 = 22;

    t102 = (((x465-x466)>x467)==x468);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x469 = 6U;
	int64_t x470 = 19158349784352783LL;
	volatile uint8_t x471 = 49U;
	int64_t x472 = INT64_MIN;
	volatile int32_t t103 = 8300334;

    t103 = (((x469-x470)>x471)==x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x473 = -48;
	uint8_t x474 = 2U;
	uint32_t x475 = 36839421U;
	uint64_t x476 = UINT64_MAX;
	int32_t t104 = 436;

    t104 = (((x473-x474)>x475)==x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x477 = 41U;
	uint64_t x478 = 28843LLU;
	static volatile uint32_t x479 = 441224U;
	int64_t x480 = INT64_MAX;
	int32_t t105 = 9737787;

    t105 = (((x477-x478)>x479)==x480);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x483 = 11092526248LL;
	int64_t x484 = -1LL;
	volatile int32_t t106 = -210;

    t106 = (((x481-x482)>x483)==x484);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile uint8_t x487 = 5U;
	uint32_t x488 = 330620748U;

    t107 = (((x485-x486)>x487)==x488);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x490 = 1;
	static uint8_t x491 = UINT8_MAX;
	volatile uint8_t x492 = UINT8_MAX;
	volatile int32_t t108 = 3;

    t108 = (((x489-x490)>x491)==x492);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x493 = 55074U;
	int8_t x494 = -10;
	uint16_t x495 = 7U;
	int8_t x496 = -1;
	volatile int32_t t109 = -23850;

    t109 = (((x493-x494)>x495)==x496);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x497 = INT32_MAX;
	uint8_t x500 = UINT8_MAX;

    t110 = (((x497-x498)>x499)==x500);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x501 = 25691317264447LLU;
	uint32_t x502 = 22963U;
	int16_t x503 = -1;
	int32_t x504 = INT32_MIN;

    t111 = (((x501-x502)>x503)==x504);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x505 = 48LL;
	int8_t x506 = 17;
	uint16_t x507 = UINT16_MAX;
	int8_t x508 = INT8_MAX;
	volatile int32_t t112 = 5925;

    t112 = (((x505-x506)>x507)==x508);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MAX;
	volatile int16_t x512 = 50;
	volatile int32_t t113 = 113;

    t113 = (((x509-x510)>x511)==x512);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x513 = 11U;
	uint8_t x514 = UINT8_MAX;
	volatile int32_t t114 = 16415762;

    t114 = (((x513-x514)>x515)==x516);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x518 = 0;
	int64_t x519 = -1LL;
	int64_t x520 = INT64_MIN;
	static volatile int32_t t115 = -10234176;

    t115 = (((x517-x518)>x519)==x520);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	int32_t x524 = INT32_MAX;

    t116 = (((x521-x522)>x523)==x524);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x525 = -1;
	int64_t x526 = -2425LL;
	volatile int8_t x527 = 0;
	volatile uint64_t x528 = UINT64_MAX;

    t117 = (((x525-x526)>x527)==x528);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x534 = 10780243337LL;
	static int8_t x535 = -1;
	volatile uint32_t x536 = 7091U;

    t118 = (((x533-x534)>x535)==x536);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x538 = INT32_MIN;
	static volatile int16_t x539 = INT16_MIN;
	volatile uint16_t x540 = UINT16_MAX;
	volatile int32_t t119 = -32272;

    t119 = (((x537-x538)>x539)==x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = -9977LL;
	volatile int16_t x542 = -1;
	volatile int32_t x543 = -1;
	int64_t x544 = -1LL;

    t120 = (((x541-x542)>x543)==x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x545 = INT16_MAX;
	static int8_t x547 = INT8_MAX;
	volatile int16_t x548 = -6876;
	int32_t t121 = 23345;

    t121 = (((x545-x546)>x547)==x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x553 = 55510542;
	int8_t x554 = 0;
	int64_t x555 = INT64_MIN;
	int32_t x556 = INT32_MAX;
	int32_t t122 = 0;

    t122 = (((x553-x554)>x555)==x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x557 = -4;
	int64_t x558 = INT64_MIN;
	static uint64_t x559 = 33012688LLU;
	int8_t x560 = 0;
	int32_t t123 = 2;

    t123 = (((x557-x558)>x559)==x560);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x562 = 115604335U;
	volatile uint16_t x563 = 43U;
	uint8_t x564 = UINT8_MAX;
	int32_t t124 = -8;

    t124 = (((x561-x562)>x563)==x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = INT16_MIN;
	volatile int32_t x567 = INT32_MAX;
	static volatile int32_t t125 = -699;

    t125 = (((x565-x566)>x567)==x568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x569 = 0;
	int32_t x571 = 440704;
	static int8_t x572 = -1;

    t126 = (((x569-x570)>x571)==x572);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x574 = UINT16_MAX;
	uint8_t x575 = 1U;
	int32_t x576 = -1;
	int32_t t127 = -13;

    t127 = (((x573-x574)>x575)==x576);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x577 = 218731385U;
	uint8_t x578 = 43U;
	uint8_t x580 = 63U;
	static volatile int32_t t128 = -7;

    t128 = (((x577-x578)>x579)==x580);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x585 = INT16_MAX;
	uint32_t x586 = 49681308U;
	volatile uint16_t x587 = 7662U;
	uint8_t x588 = 3U;
	static volatile int32_t t129 = 15286;

    t129 = (((x585-x586)>x587)==x588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x589 = 2371106084958722LLU;
	uint64_t x590 = UINT64_MAX;
	volatile int64_t x591 = INT64_MIN;
	static volatile int32_t t130 = -59;

    t130 = (((x589-x590)>x591)==x592);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x599 = 5U;
	static int16_t x600 = INT16_MAX;
	volatile int32_t t131 = -1;

    t131 = (((x597-x598)>x599)==x600);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x602 = INT32_MIN;
	static uint64_t x603 = 1883386133734LLU;
	int16_t x604 = INT16_MIN;
	int32_t t132 = 11508299;

    t132 = (((x601-x602)>x603)==x604);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x605 = UINT8_MAX;
	static int16_t x606 = -29;
	uint32_t x608 = 1813948U;
	int32_t t133 = 914035989;

    t133 = (((x605-x606)>x607)==x608);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x621 = 23295539U;
	int8_t x622 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	int32_t t134 = 867506130;

    t134 = (((x621-x622)>x623)==x624);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = 13127U;
	static int64_t x627 = INT64_MIN;
	int32_t x628 = INT32_MAX;
	volatile int32_t t135 = 41696;

    t135 = (((x625-x626)>x627)==x628);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x629 = 4617057615801783LLU;
	int16_t x630 = -9416;
	int64_t x631 = -132401266675054213LL;
	int8_t x632 = -1;
	volatile int32_t t136 = -7;

    t136 = (((x629-x630)>x631)==x632);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x637 = 2254951LLU;
	volatile int64_t x639 = INT64_MAX;
	volatile uint16_t x640 = UINT16_MAX;
	volatile int32_t t137 = 59649010;

    t137 = (((x637-x638)>x639)==x640);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x649 = UINT16_MAX;
	int16_t x650 = INT16_MAX;
	uint8_t x651 = UINT8_MAX;
	volatile int64_t x652 = 5435097026767LL;
	volatile int32_t t138 = -950;

    t138 = (((x649-x650)>x651)==x652);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x657 = -1;
	uint8_t x658 = UINT8_MAX;
	uint16_t x659 = 8971U;
	volatile int16_t x660 = -1;
	int32_t t139 = -1;

    t139 = (((x657-x658)>x659)==x660);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x661 = 76;
	uint32_t x662 = 2070638U;
	volatile uint16_t x663 = 419U;
	uint64_t x664 = 3201432265LLU;
	int32_t t140 = -161412;

    t140 = (((x661-x662)>x663)==x664);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x666 = INT16_MIN;
	volatile int8_t x667 = -1;
	static volatile int16_t x668 = INT16_MIN;
	int32_t t141 = -26211784;

    t141 = (((x665-x666)>x667)==x668);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x669 = -29;
	static uint64_t x670 = 216530806902LLU;
	int64_t x672 = -1LL;
	volatile int32_t t142 = 17915;

    t142 = (((x669-x670)>x671)==x672);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x673 = 1279069583LLU;
	int64_t x674 = INT64_MIN;
	int8_t x675 = -1;
	uint8_t x676 = 1U;

    t143 = (((x673-x674)>x675)==x676);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x678 = UINT64_MAX;
	static int8_t x679 = INT8_MIN;
	static volatile int16_t x680 = -13;

    t144 = (((x677-x678)>x679)==x680);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x681 = 34272U;
	volatile uint16_t x682 = 31956U;
	int32_t x684 = INT32_MIN;
	int32_t t145 = -194306;

    t145 = (((x681-x682)>x683)==x684);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x685 = INT32_MAX;
	int64_t x686 = 42832LL;
	static uint16_t x687 = 2U;
	int16_t x688 = INT16_MIN;
	int32_t t146 = 28733821;

    t146 = (((x685-x686)>x687)==x688);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x689 = -1;
	volatile uint64_t x690 = 1170632778LLU;
	uint32_t x691 = UINT32_MAX;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t147 = -348;

    t147 = (((x689-x690)>x691)==x692);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x693 = 61U;
	int8_t x694 = INT8_MIN;
	int16_t x695 = INT16_MAX;
	static int64_t x696 = INT64_MIN;

    t148 = (((x693-x694)>x695)==x696);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x701 = 1825468U;
	uint16_t x702 = UINT16_MAX;
	int32_t t149 = -3809;

    t149 = (((x701-x702)>x703)==x704);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x705 = -40513737;
	int16_t x706 = INT16_MIN;
	volatile uint32_t x707 = UINT32_MAX;
	int64_t x708 = INT64_MIN;
	volatile int32_t t150 = 7;

    t150 = (((x705-x706)>x707)==x708);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x713 = -274867284;
	int8_t x714 = 0;
	uint64_t x715 = 255603349LLU;
	volatile int64_t x716 = INT64_MIN;

    t151 = (((x713-x714)>x715)==x716);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x717 = UINT64_MAX;
	volatile int32_t x718 = 376;
	static volatile int16_t x719 = -1;
	int32_t x720 = INT32_MIN;

    t152 = (((x717-x718)>x719)==x720);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x721 = INT32_MIN;
	uint64_t x722 = 28978214673461988LLU;
	static int8_t x723 = INT8_MIN;
	uint8_t x724 = 5U;
	int32_t t153 = -13;

    t153 = (((x721-x722)>x723)==x724);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x725 = INT8_MAX;
	int16_t x726 = 1;
	int64_t x727 = -644917575217882LL;
	static volatile int32_t x728 = INT32_MIN;
	volatile int32_t t154 = -1778157;

    t154 = (((x725-x726)>x727)==x728);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x733 = -255930813236LL;
	int8_t x734 = -1;
	uint16_t x735 = UINT16_MAX;
	int32_t x736 = -1801;
	int32_t t155 = 2919;

    t155 = (((x733-x734)>x735)==x736);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x737 = 207U;
	uint64_t x738 = 3642507076475LLU;
	volatile uint16_t x739 = 1U;
	int8_t x740 = 4;
	static int32_t t156 = 3130928;

    t156 = (((x737-x738)>x739)==x740);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x741 = INT8_MIN;
	int32_t x743 = 104;
	static uint64_t x744 = UINT64_MAX;
	int32_t t157 = 0;

    t157 = (((x741-x742)>x743)==x744);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x745 = -54;
	int8_t x746 = -1;
	uint16_t x747 = 12034U;
	static uint16_t x748 = 147U;
	int32_t t158 = 109836;

    t158 = (((x745-x746)>x747)==x748);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x749 = -1;
	int8_t x750 = -1;
	static volatile uint16_t x751 = 2U;
	static int64_t x752 = 4271102416985016LL;
	static int32_t t159 = 63599634;

    t159 = (((x749-x750)>x751)==x752);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x753 = 38994LLU;
	int8_t x754 = INT8_MIN;
	int32_t x755 = 6697;
	int16_t x756 = INT16_MIN;
	volatile int32_t t160 = 492;

    t160 = (((x753-x754)>x755)==x756);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x757 = 1973;
	static volatile int16_t x758 = 2610;
	int32_t x759 = 11992934;
	int64_t x760 = -1LL;
	int32_t t161 = 1;

    t161 = (((x757-x758)>x759)==x760);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x761 = -990010842497859067LL;
	uint32_t x763 = 1U;
	int32_t t162 = 2;

    t162 = (((x761-x762)>x763)==x764);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x773 = 5U;
	uint16_t x774 = 5987U;
	int8_t x775 = 0;
	volatile int16_t x776 = -1233;

    t163 = (((x773-x774)>x775)==x776);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x779 = 2317396403751853LLU;
	uint16_t x780 = 1623U;

    t164 = (((x777-x778)>x779)==x780);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x781 = INT64_MIN;
	volatile int64_t x782 = -3076733159940LL;
	volatile uint32_t x783 = 1792927U;
	int32_t x784 = INT32_MIN;

    t165 = (((x781-x782)>x783)==x784);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x785 = INT16_MIN;
	int32_t x786 = 2227712;
	volatile int32_t x788 = INT32_MIN;
	volatile int32_t t166 = 1841;

    t166 = (((x785-x786)>x787)==x788);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x789 = 24136714671LLU;
	static volatile uint8_t x790 = 7U;
	uint64_t x792 = 520954809684LLU;
	static int32_t t167 = 9105;

    t167 = (((x789-x790)>x791)==x792);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x793 = 308294495;
	int8_t x794 = 6;
	static volatile uint64_t x796 = UINT64_MAX;
	int32_t t168 = -318709671;

    t168 = (((x793-x794)>x795)==x796);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x801 = INT64_MIN;
	int8_t x802 = -1;
	static uint64_t x803 = 471444963313189LLU;
	int8_t x804 = INT8_MIN;

    t169 = (((x801-x802)>x803)==x804);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x809 = -5487087LL;
	volatile uint16_t x810 = 5U;
	volatile uint8_t x811 = UINT8_MAX;
	int16_t x812 = INT16_MIN;
	int32_t t170 = -92172;

    t170 = (((x809-x810)>x811)==x812);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x814 = UINT64_MAX;
	int32_t x815 = -1;
	int16_t x816 = -1;
	volatile int32_t t171 = 800;

    t171 = (((x813-x814)>x815)==x816);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x817 = INT16_MIN;
	int64_t x818 = 3LL;
	static uint64_t x819 = 1128587471355812763LLU;
	uint8_t x820 = UINT8_MAX;
	static int32_t t172 = -155330928;

    t172 = (((x817-x818)>x819)==x820);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MIN;
	int16_t x823 = -1;
	int64_t x824 = INT64_MIN;
	static int32_t t173 = -79031;

    t173 = (((x821-x822)>x823)==x824);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x831 = 159105675LL;
	uint8_t x832 = 3U;

    t174 = (((x829-x830)>x831)==x832);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x833 = -1;
	static int32_t x834 = INT32_MIN;
	int64_t x835 = INT64_MIN;
	int8_t x836 = -1;
	int32_t t175 = -29492739;

    t175 = (((x833-x834)>x835)==x836);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x837 = 3886LLU;
	int8_t x838 = INT8_MIN;
	int32_t x839 = -1;
	int32_t t176 = -480;

    t176 = (((x837-x838)>x839)==x840);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x845 = -1;
	int32_t x846 = INT32_MIN;
	int8_t x847 = 0;
	volatile int32_t t177 = 239;

    t177 = (((x845-x846)>x847)==x848);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x849 = -6;
	uint64_t x850 = UINT64_MAX;
	int16_t x851 = INT16_MIN;
	int16_t x852 = INT16_MAX;
	volatile int32_t t178 = -29636;

    t178 = (((x849-x850)>x851)==x852);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x857 = INT16_MIN;
	static int16_t x858 = -1;
	int8_t x859 = INT8_MAX;
	int32_t x860 = 3;
	int32_t t179 = -164;

    t179 = (((x857-x858)>x859)==x860);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x861 = 24U;
	uint64_t x862 = 69511328618451LLU;
	int16_t x863 = -43;
	int32_t x864 = INT32_MIN;
	int32_t t180 = -98727143;

    t180 = (((x861-x862)>x863)==x864);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x865 = INT32_MIN;
	volatile int16_t x866 = -1;
	uint32_t x867 = 3012528U;
	uint8_t x868 = 5U;
	static volatile int32_t t181 = 387;

    t181 = (((x865-x866)>x867)==x868);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x871 = 34250716LL;
	int32_t t182 = -1;

    t182 = (((x869-x870)>x871)==x872);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x873 = INT32_MAX;
	static uint16_t x874 = UINT16_MAX;
	uint16_t x875 = 7688U;
	int64_t x876 = INT64_MIN;
	volatile int32_t t183 = 3388;

    t183 = (((x873-x874)>x875)==x876);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x885 = -1;
	uint8_t x887 = 8U;
	static uint8_t x888 = 105U;

    t184 = (((x885-x886)>x887)==x888);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x889 = -7;
	static volatile int16_t x890 = 149;
	uint64_t x891 = UINT64_MAX;
	int32_t x892 = -61977121;

    t185 = (((x889-x890)>x891)==x892);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x894 = 489U;
	static int16_t x896 = 6114;
	volatile int32_t t186 = 10716070;

    t186 = (((x893-x894)>x895)==x896);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x897 = UINT64_MAX;
	volatile uint64_t x899 = 3084496601929LLU;
	static int32_t t187 = 0;

    t187 = (((x897-x898)>x899)==x900);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x905 = -1;
	static volatile uint32_t x906 = UINT32_MAX;
	uint32_t x907 = 164U;
	uint8_t x908 = 3U;
	volatile int32_t t188 = 8742085;

    t188 = (((x905-x906)>x907)==x908);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x909 = -57LL;
	int16_t x911 = -201;
	volatile int16_t x912 = INT16_MIN;
	int32_t t189 = 187525;

    t189 = (((x909-x910)>x911)==x912);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x913 = 1457U;
	int32_t x915 = -1;
	int64_t x916 = INT64_MIN;
	volatile int32_t t190 = -63073;

    t190 = (((x913-x914)>x915)==x916);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x917 = INT8_MIN;
	volatile int64_t x918 = 66379LL;
	uint16_t x919 = 24U;
	int8_t x920 = -1;

    t191 = (((x917-x918)>x919)==x920);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x921 = 0LLU;
	volatile int8_t x922 = -62;
	uint16_t x923 = UINT16_MAX;
	static int16_t x924 = 4348;
	volatile int32_t t192 = 110171;

    t192 = (((x921-x922)>x923)==x924);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x930 = INT32_MIN;
	volatile int64_t x931 = INT64_MAX;
	int16_t x932 = 12981;
	volatile int32_t t193 = -181408811;

    t193 = (((x929-x930)>x931)==x932);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x933 = INT8_MIN;
	uint8_t x934 = 97U;
	int16_t x935 = -1;
	int32_t x936 = -1;
	volatile int32_t t194 = -29597794;

    t194 = (((x933-x934)>x935)==x936);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x937 = -31080493LL;
	int64_t x938 = -783362LL;
	int64_t x939 = INT64_MAX;
	int16_t x940 = INT16_MAX;
	volatile int32_t t195 = -753777854;

    t195 = (((x937-x938)>x939)==x940);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x941 = INT32_MIN;
	static volatile int8_t x942 = -1;
	static uint8_t x943 = 12U;
	uint64_t x944 = 211LLU;
	int32_t t196 = -498205082;

    t196 = (((x941-x942)>x943)==x944);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x949 = -1;
	volatile int32_t x951 = INT32_MAX;
	volatile int64_t x952 = -1LL;
	volatile int32_t t197 = -878564860;

    t197 = (((x949-x950)>x951)==x952);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x953 = 7721965U;
	uint64_t x955 = UINT64_MAX;
	volatile uint16_t x956 = 12498U;
	int32_t t198 = 50744;

    t198 = (((x953-x954)>x955)==x956);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x958 = INT64_MAX;
	int32_t x959 = -1;
	int32_t t199 = -58189488;

    t199 = (((x957-x958)>x959)==x960);

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

