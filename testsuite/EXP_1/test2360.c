
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

int16_t x4 = INT16_MIN;
int32_t t1 = 130147697;
int64_t x12 = INT64_MAX;
volatile int8_t x15 = INT8_MIN;
volatile int8_t x16 = 1;
static volatile int32_t t3 = 357636;
int32_t t4 = 247;
uint32_t x22 = 2432U;
int8_t x26 = 0;
uint32_t x30 = UINT32_MAX;
volatile int32_t t7 = 854071415;
int32_t t8 = -13;
uint32_t x37 = 621U;
int16_t x40 = INT16_MIN;
int32_t t9 = -7195;
uint32_t x63 = UINT32_MAX;
int8_t x91 = INT8_MIN;
int8_t x97 = -1;
int8_t x99 = INT8_MAX;
int8_t x101 = -1;
int16_t x103 = INT16_MAX;
int32_t t26 = 44970953;
int16_t x115 = -1;
int16_t x117 = INT16_MIN;
uint32_t x122 = 296920619U;
int32_t t30 = -4971;
int8_t x135 = INT8_MAX;
int8_t x141 = -3;
int32_t x142 = INT32_MIN;
volatile int8_t x144 = 0;
static int8_t x146 = INT8_MAX;
int64_t x148 = INT64_MIN;
volatile int32_t t35 = -347711;
static uint64_t x159 = 753130594033466LLU;
static int8_t x171 = -1;
int8_t x172 = INT8_MIN;
int16_t x175 = -3208;
volatile uint64_t x176 = UINT64_MAX;
int16_t x177 = 0;
uint16_t x180 = UINT16_MAX;
int8_t x184 = -1;
int32_t t44 = 403218251;
static uint8_t x197 = 4U;
int16_t x198 = INT16_MIN;
int8_t x202 = INT8_MAX;
uint16_t x203 = 1U;
static int16_t x204 = INT16_MIN;
int32_t x208 = INT32_MIN;
volatile int32_t t48 = -20712;
static int64_t x210 = -1LL;
volatile int32_t t49 = -8196;
int32_t x213 = INT32_MIN;
volatile int32_t x215 = 6;
int32_t x220 = INT32_MAX;
int64_t x225 = -64902797LL;
volatile int32_t t52 = -19;
int8_t x234 = -1;
uint64_t x236 = UINT64_MAX;
int32_t t56 = 1;
int64_t x245 = INT64_MIN;
static uint32_t x246 = UINT32_MAX;
int64_t x250 = 1010345272LL;
static uint32_t x253 = UINT32_MAX;
volatile int16_t x257 = -1;
int32_t t62 = -195;
static int32_t x271 = 7;
int8_t x279 = -1;
volatile int8_t x283 = 9;
volatile int8_t x292 = INT8_MIN;
int32_t t67 = 85;
int64_t x295 = 73219264388199LL;
uint8_t x298 = UINT8_MAX;
int32_t x303 = 3987;
uint16_t x304 = 1U;
volatile int8_t x314 = 1;
int8_t x323 = INT8_MIN;
int32_t t76 = 10049;
int32_t x335 = -1;
static int64_t x336 = -2848596459038LL;
volatile int16_t x339 = 9;
int8_t x342 = INT8_MAX;
volatile int16_t x345 = INT16_MAX;
int32_t x359 = INT32_MAX;
uint32_t x362 = UINT32_MAX;
int64_t x363 = -1LL;
uint8_t x365 = 22U;
static int64_t x379 = INT64_MIN;
static volatile int32_t t88 = 89;
uint64_t x382 = UINT64_MAX;
uint64_t x383 = 148231LLU;
static volatile int32_t t89 = -862808636;
int32_t x389 = INT32_MIN;
static uint16_t x394 = 187U;
int16_t x416 = INT16_MAX;
uint16_t x419 = 52U;
static int32_t x433 = INT32_MIN;
static uint32_t x435 = 415914979U;
int32_t t102 = 798;
int64_t x437 = INT64_MIN;
int16_t x439 = -5190;
static int32_t x440 = 1217;
static int32_t t103 = 0;
int8_t x444 = -1;
volatile int32_t t105 = 12148039;
volatile int32_t x449 = -1;
int32_t x456 = -378685716;
volatile int32_t t107 = -7140;
int64_t x457 = INT64_MIN;
int8_t x464 = INT8_MIN;
int16_t x466 = 45;
int32_t x476 = INT32_MAX;
uint64_t x482 = 118905355664149049LLU;
static int32_t t115 = 449866;
int64_t x490 = INT64_MIN;
static uint16_t x499 = 1U;
volatile int32_t t118 = 7;
volatile uint32_t x506 = UINT32_MAX;
int64_t x510 = INT64_MIN;
uint16_t x524 = 857U;
static volatile int8_t x529 = INT8_MIN;
uint64_t x534 = UINT64_MAX;
static volatile int64_t x540 = 323679060459LL;
int8_t x545 = INT8_MAX;
uint64_t x547 = 5405236379136747271LLU;
int8_t x549 = -5;
int8_t x550 = INT8_MIN;
int32_t t130 = -515095912;
static uint32_t x553 = 74U;
static uint64_t x565 = UINT64_MAX;
volatile int16_t x566 = -56;
int32_t t133 = 1218;
uint8_t x572 = 2U;
static int8_t x578 = INT8_MAX;
volatile int32_t x587 = -1;
volatile uint8_t x590 = UINT8_MAX;
static int32_t x592 = -1;
int16_t x596 = 0;
int32_t t141 = -925132403;
int16_t x602 = 1631;
uint8_t x610 = UINT8_MAX;
int32_t x614 = -796306861;
volatile int16_t x616 = 3788;
int32_t t146 = 1;
int32_t x621 = -232889481;
int64_t x623 = INT64_MIN;
int8_t x626 = 1;
uint8_t x635 = UINT8_MAX;
int16_t x643 = INT16_MAX;
int32_t t153 = 173599;
volatile int16_t x653 = INT16_MAX;
int32_t x654 = -1;
int16_t x660 = INT16_MIN;
uint16_t x667 = UINT16_MAX;
uint8_t x668 = 4U;
volatile int32_t x669 = 7669664;
uint32_t x671 = UINT32_MAX;
int8_t x682 = INT8_MIN;
int32_t x691 = -6521;
uint16_t x692 = 60U;
int64_t x695 = 1LL;
volatile int64_t x698 = INT64_MIN;
uint8_t x706 = UINT8_MAX;
int16_t x710 = 957;
volatile uint64_t x726 = 739755112782183LLU;
int64_t x727 = -2319LL;
static volatile int64_t x728 = -1LL;
volatile int32_t t171 = -4;
volatile int16_t x738 = INT16_MIN;
int32_t t174 = 25333;
int32_t x749 = INT32_MIN;
int8_t x752 = 7;
int64_t x756 = INT64_MIN;
uint64_t x758 = UINT64_MAX;
int32_t x765 = -1;
int64_t x766 = -1LL;
uint8_t x767 = 5U;
static int32_t t180 = 1306234;
uint16_t x770 = 14U;
int8_t x775 = -12;
int32_t x796 = INT32_MIN;
volatile int32_t t186 = 90632047;
volatile uint32_t x799 = 17463U;
volatile int8_t x801 = INT8_MAX;
int64_t x811 = -214302599LL;
uint64_t x815 = 28509022LLU;
int32_t t191 = 536;
int64_t x826 = 0LL;
volatile int8_t x829 = INT8_MIN;
static volatile int32_t t195 = 8279;
volatile uint8_t x836 = UINT8_MAX;
static volatile uint8_t x838 = 50U;
volatile uint8_t x842 = 10U;
int64_t x844 = -1035583487837237792LL;
int16_t x854 = INT16_MIN;
volatile int64_t x856 = INT64_MAX;


void f0(void) {
    	uint8_t x1 = 122U;
	volatile int64_t x2 = INT64_MAX;
	static uint64_t x3 = UINT64_MAX;
	volatile int32_t t0 = -675875368;

    t0 = (((x1|x2)+x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 114274308534116LLU;
	volatile int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t x8 = UINT64_MAX;

    t1 = (((x5|x6)+x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 376771U;
	volatile uint16_t x10 = 208U;
	int16_t x11 = INT16_MIN;
	static int32_t t2 = -2;

    t2 = (((x9|x10)+x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int8_t x14 = -1;

    t3 = (((x13|x14)+x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 1;
	uint16_t x18 = 0U;
	static volatile int32_t x19 = -1;
	static int16_t x20 = INT16_MIN;

    t4 = (((x17|x18)+x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 35397714;

    t5 = (((x21|x22)+x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -11;
	int16_t x27 = -1;
	int16_t x28 = 30;
	int32_t t6 = 691;

    t6 = (((x25|x26)+x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int8_t x31 = -1;
	int64_t x32 = -277232369498LL;

    t7 = (((x29|x30)+x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	uint16_t x36 = 1U;

    t8 = (((x33|x34)+x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = UINT64_MAX;
	static int32_t x39 = INT32_MAX;

    t9 = (((x37|x38)+x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint32_t x42 = 15U;
	uint8_t x43 = 0U;
	uint32_t x44 = 476910U;
	static volatile int32_t t10 = -387262;

    t10 = (((x41|x42)+x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 1249U;
	static uint16_t x46 = UINT16_MAX;
	uint8_t x47 = UINT8_MAX;
	volatile uint64_t x48 = 8087476161043LLU;
	volatile int32_t t11 = -806;

    t11 = (((x45|x46)+x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 4081U;
	int64_t x50 = INT64_MAX;
	static int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 3341;

    t12 = (((x49|x50)+x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = 1U;
	volatile int16_t x56 = -15808;
	static volatile int32_t t13 = -7181443;

    t13 = (((x53|x54)+x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 107570118479LLU;
	static int32_t x58 = 2069707;
	int32_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 8614418;

    t14 = (((x57|x58)+x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static int64_t x62 = -1LL;
	int16_t x64 = -1;
	static int32_t t15 = -715;

    t15 = (((x61|x62)+x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static int32_t x66 = 449376;
	static int8_t x67 = INT8_MAX;
	static uint16_t x68 = 7071U;
	volatile int32_t t16 = 12100;

    t16 = (((x65|x66)+x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 8778329520802665274LLU;
	static int16_t x70 = INT16_MIN;
	static int8_t x71 = -1;
	static volatile int64_t x72 = INT64_MAX;
	static int32_t t17 = 145926;

    t17 = (((x69|x70)+x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = -3205783620445691LL;
	static uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -1;

    t18 = (((x73|x74)+x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	static volatile int8_t x78 = INT8_MIN;
	uint64_t x79 = 26846811348476LLU;
	uint16_t x80 = 214U;
	int32_t t19 = 133;

    t19 = (((x77|x78)+x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = 2;
	uint8_t x82 = 6U;
	uint8_t x83 = UINT8_MAX;
	uint8_t x84 = 6U;
	int32_t t20 = -636538;

    t20 = (((x81|x82)+x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -6;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = -2;
	uint8_t x88 = 15U;
	volatile int32_t t21 = 3546;

    t21 = (((x85|x86)+x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 0U;
	int32_t x90 = INT32_MAX;
	int16_t x92 = -1;
	volatile int32_t t22 = 21342;

    t22 = (((x89|x90)+x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x98 = 125U;
	int32_t x100 = -694471;
	int32_t t23 = 767019748;

    t23 = (((x97|x98)+x99)==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x102 = 213851U;
	uint32_t x104 = 23329350U;
	int32_t t24 = 3131516;

    t24 = (((x101|x102)+x103)==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	int32_t x106 = -1;
	static volatile int8_t x107 = -1;
	uint64_t x108 = 17762354387941885LLU;
	volatile int32_t t25 = 3712123;

    t25 = (((x105|x106)+x107)==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x109 = INT64_MAX;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = INT8_MIN;

    t26 = (((x109|x110)+x111)==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x113 = INT16_MIN;
	uint64_t x114 = 7887106LLU;
	static int64_t x116 = -9995114LL;
	int32_t t27 = 15987;

    t27 = (((x113|x114)+x115)==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x118 = -23135;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	static int32_t t28 = -443028142;

    t28 = (((x117|x118)+x119)==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int16_t x123 = -1;
	static int64_t x124 = -1LL;
	int32_t t29 = 1;

    t29 = (((x121|x122)+x123)==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MAX;
	static int16_t x132 = INT16_MIN;

    t30 = (((x129|x130)+x131)==x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = 16320021558826817LLU;
	int16_t x134 = INT16_MIN;
	uint8_t x136 = 2U;
	int32_t t31 = -164933743;

    t31 = (((x133|x134)+x135)==x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = UINT32_MAX;
	static volatile int8_t x138 = -1;
	int8_t x139 = -1;
	static uint8_t x140 = UINT8_MAX;
	int32_t t32 = 54550645;

    t32 = (((x137|x138)+x139)==x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x143 = 113651473;
	volatile int32_t t33 = 13;

    t33 = (((x141|x142)+x143)==x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	uint16_t x147 = 10U;
	volatile int32_t t34 = 0;

    t34 = (((x145|x146)+x147)==x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x149 = -1LL;
	int8_t x150 = 13;
	int16_t x151 = -20;
	uint16_t x152 = UINT16_MAX;

    t35 = (((x149|x150)+x151)==x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = 28551065;
	int16_t x154 = 3607;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t36 = -7;

    t36 = (((x153|x154)+x155)==x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = 2;
	int16_t x158 = INT16_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t37 = -3914952;

    t37 = (((x157|x158)+x159)==x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = -2584813273792610LL;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -1;
	uint32_t x164 = 0U;
	int32_t t38 = 25920;

    t38 = (((x161|x162)+x163)==x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = 301092402LLU;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	int32_t t39 = -5;

    t39 = (((x165|x166)+x167)==x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x169 = 322U;
	int16_t x170 = INT16_MIN;
	static int32_t t40 = 240741;

    t40 = (((x169|x170)+x171)==x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x173 = UINT64_MAX;
	int16_t x174 = 193;
	volatile int32_t t41 = -13632;

    t41 = (((x173|x174)+x175)==x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x178 = 504735817545LLU;
	uint8_t x179 = UINT8_MAX;
	int32_t t42 = -56675;

    t42 = (((x177|x178)+x179)==x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x181 = INT16_MAX;
	static int32_t x182 = -67;
	int64_t x183 = INT64_MAX;
	int32_t t43 = 61;

    t43 = (((x181|x182)+x183)==x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	volatile uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 1305U;

    t44 = (((x185|x186)+x187)==x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = 1;
	int16_t x194 = INT16_MAX;
	volatile int32_t x195 = 85157308;
	uint32_t x196 = 388U;
	int32_t t45 = -7359;

    t45 = (((x193|x194)+x195)==x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x199 = 0U;
	uint8_t x200 = 8U;
	volatile int32_t t46 = -27906;

    t46 = (((x197|x198)+x199)==x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = UINT32_MAX;
	int32_t t47 = -565;

    t47 = (((x201|x202)+x203)==x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = 120U;
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = 2007554;

    t48 = (((x205|x206)+x207)==x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MAX;
	uint8_t x211 = 127U;
	uint8_t x212 = 0U;

    t49 = (((x209|x210)+x211)==x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x214 = -6733290144368765LL;
	uint16_t x216 = UINT16_MAX;
	int32_t t50 = 1;

    t50 = (((x213|x214)+x215)==x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 2452LLU;
	static int64_t x218 = -1LL;
	int64_t x219 = INT64_MIN;
	int32_t t51 = -866778;

    t51 = (((x217|x218)+x219)==x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x226 = UINT8_MAX;
	static int32_t x227 = 1283337;
	uint8_t x228 = 0U;

    t52 = (((x225|x226)+x227)==x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x229 = 1292940605U;
	volatile uint64_t x230 = 2LLU;
	int64_t x231 = 262669695LL;
	volatile int64_t x232 = -41LL;
	int32_t t53 = -186681;

    t53 = (((x229|x230)+x231)==x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = INT16_MIN;
	static volatile int8_t x235 = 46;
	static int32_t t54 = 15175;

    t54 = (((x233|x234)+x235)==x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x237 = -1;
	uint32_t x238 = 3U;
	int16_t x239 = 1;
	uint16_t x240 = 1U;
	volatile int32_t t55 = -5241;

    t55 = (((x237|x238)+x239)==x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x241 = 403002;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -250816151;
	static int8_t x244 = -1;

    t56 = (((x241|x242)+x243)==x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x247 = INT16_MIN;
	volatile int32_t x248 = INT32_MIN;
	static int32_t t57 = 44596658;

    t57 = (((x245|x246)+x247)==x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x249 = UINT8_MAX;
	int8_t x251 = -48;
	uint16_t x252 = 44U;
	int32_t t58 = 594;

    t58 = (((x249|x250)+x251)==x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	int32_t x256 = 0;
	int32_t t59 = 1592849;

    t59 = (((x253|x254)+x255)==x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x258 = 6U;
	static volatile int8_t x259 = INT8_MAX;
	static int64_t x260 = INT64_MIN;
	static int32_t t60 = 70156191;

    t60 = (((x257|x258)+x259)==x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x261 = INT8_MIN;
	static volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = 1U;
	static uint64_t x264 = 85722778071LLU;
	volatile int32_t t61 = -370136853;

    t61 = (((x261|x262)+x263)==x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = 180LLU;
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = INT8_MAX;
	int64_t x268 = -42853LL;

    t62 = (((x265|x266)+x267)==x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x269 = 213024905;
	int64_t x270 = INT64_MIN;
	uint8_t x272 = 30U;
	int32_t t63 = -2;

    t63 = (((x269|x270)+x271)==x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	int32_t x280 = INT32_MAX;
	volatile int32_t t64 = -10;

    t64 = (((x277|x278)+x279)==x280);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = -5243797580LL;
	volatile uint64_t x282 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t65 = 18801358;

    t65 = (((x281|x282)+x283)==x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x285 = 19;
	int16_t x286 = INT16_MAX;
	volatile uint16_t x287 = 10303U;
	int8_t x288 = INT8_MIN;
	int32_t t66 = -103820;

    t66 = (((x285|x286)+x287)==x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = INT64_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = 1;

    t67 = (((x289|x290)+x291)==x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	uint32_t x294 = 645981U;
	int8_t x296 = -1;
	int32_t t68 = -717469592;

    t68 = (((x293|x294)+x295)==x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x297 = UINT8_MAX;
	static volatile int8_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t69 = -1815;

    t69 = (((x297|x298)+x299)==x300);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x301 = 0;
	int8_t x302 = INT8_MAX;
	static volatile int32_t t70 = -1;

    t70 = (((x301|x302)+x303)==x304);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x305 = INT16_MIN;
	volatile uint8_t x306 = 24U;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = -1;
	volatile int32_t t71 = 50113;

    t71 = (((x305|x306)+x307)==x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x309 = 5628477U;
	uint32_t x310 = 14296U;
	volatile uint16_t x311 = 2U;
	uint64_t x312 = UINT64_MAX;
	int32_t t72 = 82862927;

    t72 = (((x309|x310)+x311)==x312);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x313 = 38LLU;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t x316 = INT32_MIN;
	int32_t t73 = 6506;

    t73 = (((x313|x314)+x315)==x316);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x317 = UINT8_MAX;
	int32_t x318 = 5247;
	volatile int16_t x319 = 186;
	volatile uint8_t x320 = 1U;
	volatile int32_t t74 = 20575910;

    t74 = (((x317|x318)+x319)==x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x321 = -1;
	int8_t x322 = 4;
	static int32_t x324 = -1;
	int32_t t75 = -550793;

    t75 = (((x321|x322)+x323)==x324);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x325 = -1;
	static int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MAX;
	static volatile uint8_t x328 = UINT8_MAX;

    t76 = (((x325|x326)+x327)==x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x329 = -1LL;
	uint32_t x330 = 910270711U;
	static int16_t x331 = -1;
	static volatile int64_t x332 = INT64_MIN;
	int32_t t77 = -448;

    t77 = (((x329|x330)+x331)==x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x333 = -270439675LL;
	uint16_t x334 = UINT16_MAX;
	volatile int32_t t78 = 4;

    t78 = (((x333|x334)+x335)==x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x337 = INT16_MAX;
	volatile int8_t x338 = INT8_MIN;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t79 = -21022113;

    t79 = (((x337|x338)+x339)==x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x341 = -1;
	int8_t x343 = 0;
	volatile int32_t x344 = 52;
	int32_t t80 = 264043732;

    t80 = (((x341|x342)+x343)==x344);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x346 = -1;
	int64_t x347 = INT64_MAX;
	uint32_t x348 = 68841018U;
	volatile int32_t t81 = -7034743;

    t81 = (((x345|x346)+x347)==x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = -1;
	int64_t x354 = -319500536LL;
	int64_t x355 = -1LL;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t82 = 8062145;

    t82 = (((x353|x354)+x355)==x356);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x357 = -1;
	int8_t x358 = INT8_MAX;
	int64_t x360 = -627643657707410694LL;
	int32_t t83 = 127;

    t83 = (((x357|x358)+x359)==x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = -2776;
	int8_t x364 = -1;
	static int32_t t84 = 13788;

    t84 = (((x361|x362)+x363)==x364);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x366 = 478908220061902168LLU;
	static int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t85 = 14866;

    t85 = (((x365|x366)+x367)==x368);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = INT8_MAX;
	static uint32_t x370 = 124U;
	int8_t x371 = 1;
	static int16_t x372 = -1;
	int32_t t86 = -4593590;

    t86 = (((x369|x370)+x371)==x372);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x373 = -4;
	int32_t x374 = 13;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;
	static volatile int32_t t87 = 5047;

    t87 = (((x373|x374)+x375)==x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x377 = 225393678944LLU;
	int16_t x378 = INT16_MAX;
	uint8_t x380 = 15U;

    t88 = (((x377|x378)+x379)==x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x381 = INT8_MIN;
	static volatile uint16_t x384 = 7117U;

    t89 = (((x381|x382)+x383)==x384);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MAX;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = -4283;
	volatile int32_t t90 = 9243311;

    t90 = (((x385|x386)+x387)==x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x390 = 3U;
	int8_t x391 = -44;
	int8_t x392 = INT8_MIN;
	int32_t t91 = -311734549;

    t91 = (((x389|x390)+x391)==x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x393 = 437U;
	static uint8_t x395 = 16U;
	int32_t x396 = INT32_MIN;
	volatile int32_t t92 = -26143236;

    t92 = (((x393|x394)+x395)==x396);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x397 = INT64_MIN;
	uint16_t x398 = 15094U;
	static volatile int8_t x399 = INT8_MIN;
	int32_t x400 = 0;
	int32_t t93 = 220646;

    t93 = (((x397|x398)+x399)==x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile uint16_t x402 = 6U;
	uint16_t x403 = 178U;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t94 = 51858;

    t94 = (((x401|x402)+x403)==x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x405 = 5886918173731032LL;
	int16_t x406 = INT16_MIN;
	int32_t x407 = -2024630;
	static uint8_t x408 = 113U;
	volatile int32_t t95 = 1511278;

    t95 = (((x405|x406)+x407)==x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x409 = -1;
	static uint32_t x410 = 1454718400U;
	int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MIN;
	int32_t t96 = 116314556;

    t96 = (((x409|x410)+x411)==x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x413 = -1;
	static int64_t x414 = -88615118915LL;
	static int8_t x415 = INT8_MIN;
	static int32_t t97 = 212135660;

    t97 = (((x413|x414)+x415)==x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x417 = 13895199LLU;
	volatile int64_t x418 = INT64_MIN;
	volatile int32_t x420 = -466;
	int32_t t98 = -282;

    t98 = (((x417|x418)+x419)==x420);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x421 = -55;
	int32_t x422 = INT32_MIN;
	int64_t x423 = -1LL;
	uint8_t x424 = 2U;
	static int32_t t99 = -78829209;

    t99 = (((x421|x422)+x423)==x424);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x425 = INT64_MAX;
	uint64_t x426 = 740009426365LLU;
	uint32_t x427 = 5886714U;
	static int64_t x428 = -1491981340089595LL;
	static int32_t t100 = 1697460;

    t100 = (((x425|x426)+x427)==x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x429 = -1;
	static uint8_t x430 = 0U;
	int64_t x431 = -1LL;
	static uint8_t x432 = UINT8_MAX;
	int32_t t101 = 69308218;

    t101 = (((x429|x430)+x431)==x432);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x434 = INT16_MAX;
	static volatile int32_t x436 = 0;

    t102 = (((x433|x434)+x435)==x436);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x438 = 1484688LLU;

    t103 = (((x437|x438)+x439)==x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x441 = INT64_MIN;
	volatile int32_t x442 = INT32_MIN;
	static int64_t x443 = -1LL;
	int32_t t104 = -11767;

    t104 = (((x441|x442)+x443)==x444);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int8_t x447 = -1;
	uint16_t x448 = 35U;

    t105 = (((x445|x446)+x447)==x448);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MAX;
	int32_t x452 = INT32_MAX;
	static int32_t t106 = 621049;

    t106 = (((x449|x450)+x451)==x452);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x453 = INT32_MAX;
	volatile int32_t x454 = -15146458;
	static volatile int32_t x455 = 6781282;

    t107 = (((x453|x454)+x455)==x456);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x458 = UINT32_MAX;
	volatile uint8_t x459 = 68U;
	uint64_t x460 = 70573524574LLU;
	int32_t t108 = -14177576;

    t108 = (((x457|x458)+x459)==x460);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x461 = 14517652;
	uint32_t x462 = 6U;
	int8_t x463 = -32;
	static int32_t t109 = 76288;

    t109 = (((x461|x462)+x463)==x464);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x465 = 389;
	static uint16_t x467 = 108U;
	static int32_t x468 = -58;
	volatile int32_t t110 = -483341816;

    t110 = (((x465|x466)+x467)==x468);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x469 = INT8_MIN;
	volatile uint64_t x470 = 477192745LLU;
	int8_t x471 = -1;
	int8_t x472 = INT8_MIN;
	int32_t t111 = 2035070;

    t111 = (((x469|x470)+x471)==x472);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = -1953;
	uint32_t x474 = 5U;
	int32_t x475 = INT32_MIN;
	int32_t t112 = 64844382;

    t112 = (((x473|x474)+x475)==x476);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x477 = INT64_MIN;
	int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MAX;
	static uint64_t x480 = 270168474996LLU;
	volatile int32_t t113 = -90;

    t113 = (((x477|x478)+x479)==x480);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x481 = 6U;
	static int16_t x483 = INT16_MIN;
	static int32_t x484 = -1;
	int32_t t114 = 10;

    t114 = (((x481|x482)+x483)==x484);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = INT16_MIN;
	int64_t x486 = INT64_MIN;
	volatile int16_t x487 = INT16_MIN;
	static int64_t x488 = 1674043484LL;

    t115 = (((x485|x486)+x487)==x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x489 = -1;
	static uint16_t x491 = 607U;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t116 = -135787;

    t116 = (((x489|x490)+x491)==x492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x493 = 3U;
	volatile int64_t x494 = INT64_MAX;
	int64_t x495 = INT64_MIN;
	uint64_t x496 = 42197471LLU;
	volatile int32_t t117 = 367;

    t117 = (((x493|x494)+x495)==x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x497 = INT8_MIN;
	volatile int32_t x498 = -1;
	static uint64_t x500 = UINT64_MAX;

    t118 = (((x497|x498)+x499)==x500);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x501 = 7736LL;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = 121596865U;
	int8_t x504 = 0;
	int32_t t119 = 29891229;

    t119 = (((x501|x502)+x503)==x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x505 = UINT16_MAX;
	uint64_t x507 = 2794905751785227919LLU;
	int32_t x508 = -4030;
	static int32_t t120 = 931497021;

    t120 = (((x505|x506)+x507)==x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = INT32_MIN;
	uint16_t x511 = 2U;
	uint32_t x512 = 1U;
	int32_t t121 = -25918;

    t121 = (((x509|x510)+x511)==x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	int16_t x514 = -1;
	static int8_t x515 = INT8_MIN;
	volatile uint64_t x516 = UINT64_MAX;
	volatile int32_t t122 = -6522;

    t122 = (((x513|x514)+x515)==x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MAX;
	int8_t x522 = 23;
	volatile int8_t x523 = INT8_MIN;
	static int32_t t123 = 804;

    t123 = (((x521|x522)+x523)==x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x525 = 9;
	int8_t x526 = -1;
	uint64_t x527 = UINT64_MAX;
	int8_t x528 = -10;
	volatile int32_t t124 = 24095;

    t124 = (((x525|x526)+x527)==x528);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x530 = UINT16_MAX;
	volatile int16_t x531 = INT16_MIN;
	uint16_t x532 = 3U;
	volatile int32_t t125 = -4021;

    t125 = (((x529|x530)+x531)==x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -1;
	static int64_t x535 = -1032LL;
	int64_t x536 = INT64_MIN;
	volatile int32_t t126 = 164570092;

    t126 = (((x533|x534)+x535)==x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = -1;
	int64_t x538 = INT64_MAX;
	static int32_t x539 = -7;
	volatile int32_t t127 = 15400205;

    t127 = (((x537|x538)+x539)==x540);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x541 = -1;
	static int64_t x542 = 15092398648389318LL;
	volatile int32_t x543 = 3381127;
	volatile uint16_t x544 = 2U;
	int32_t t128 = 0;

    t128 = (((x541|x542)+x543)==x544);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x546 = -408253525LL;
	int16_t x548 = -1;
	int32_t t129 = -6;

    t129 = (((x545|x546)+x547)==x548);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x551 = 1743480U;
	static uint16_t x552 = UINT16_MAX;

    t130 = (((x549|x550)+x551)==x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x554 = -2;
	int32_t x555 = -1;
	static int64_t x556 = INT64_MAX;
	volatile int32_t t131 = -1;

    t131 = (((x553|x554)+x555)==x556);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x561 = 254337LL;
	uint32_t x562 = 125253685U;
	static uint8_t x563 = UINT8_MAX;
	static int32_t x564 = -1;
	volatile int32_t t132 = 28;

    t132 = (((x561|x562)+x563)==x564);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x567 = -1;
	static int64_t x568 = -1LL;

    t133 = (((x565|x566)+x567)==x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x569 = 106LLU;
	uint8_t x570 = 0U;
	int8_t x571 = -24;
	volatile int32_t t134 = -14531691;

    t134 = (((x569|x570)+x571)==x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x573 = INT64_MIN;
	int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MAX;
	int8_t x576 = -1;
	int32_t t135 = -206642;

    t135 = (((x573|x574)+x575)==x576);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x577 = INT64_MIN;
	uint16_t x579 = UINT16_MAX;
	int32_t x580 = 47624192;
	volatile int32_t t136 = -168;

    t136 = (((x577|x578)+x579)==x580);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x581 = INT32_MIN;
	int64_t x582 = INT64_MIN;
	int8_t x583 = INT8_MIN;
	static volatile int16_t x584 = INT16_MAX;
	static volatile int32_t t137 = 66568;

    t137 = (((x581|x582)+x583)==x584);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = -1549;
	static int64_t x586 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	int32_t t138 = 0;

    t138 = (((x585|x586)+x587)==x588);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x589 = INT64_MAX;
	int16_t x591 = INT16_MIN;
	volatile int32_t t139 = -375;

    t139 = (((x589|x590)+x591)==x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x593 = -1;
	int16_t x594 = INT16_MAX;
	uint64_t x595 = 0LLU;
	int32_t t140 = 576982871;

    t140 = (((x593|x594)+x595)==x596);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x597 = 335U;
	uint16_t x598 = UINT16_MAX;
	uint64_t x599 = UINT64_MAX;
	int16_t x600 = INT16_MAX;

    t141 = (((x597|x598)+x599)==x600);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x603 = 21;
	int16_t x604 = INT16_MIN;
	static volatile int32_t t142 = 935;

    t142 = (((x601|x602)+x603)==x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x605 = 528;
	static uint64_t x606 = 14592071LLU;
	static int16_t x607 = INT16_MIN;
	int16_t x608 = -11;
	int32_t t143 = 484;

    t143 = (((x605|x606)+x607)==x608);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MAX;
	int16_t x611 = -1;
	uint32_t x612 = UINT32_MAX;
	static volatile int32_t t144 = 768469895;

    t144 = (((x609|x610)+x611)==x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x613 = 421U;
	static uint64_t x615 = 5375184570385502LLU;
	volatile int32_t t145 = -49;

    t145 = (((x613|x614)+x615)==x616);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x617 = 1;
	static int64_t x618 = -30715LL;
	uint64_t x619 = 33424633424LLU;
	int8_t x620 = INT8_MIN;

    t146 = (((x617|x618)+x619)==x620);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x622 = 0LLU;
	int16_t x624 = 2;
	int32_t t147 = 17;

    t147 = (((x621|x622)+x623)==x624);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x625 = 6LL;
	int32_t x627 = -1;
	uint32_t x628 = 281U;
	volatile int32_t t148 = -12;

    t148 = (((x625|x626)+x627)==x628);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x629 = 2861;
	int16_t x630 = INT16_MAX;
	int32_t x631 = -1;
	int8_t x632 = -1;
	static int32_t t149 = -1;

    t149 = (((x629|x630)+x631)==x632);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = -1;
	static uint32_t x634 = 72216U;
	static int64_t x636 = INT64_MIN;
	static volatile int32_t t150 = -13963;

    t150 = (((x633|x634)+x635)==x636);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x641 = 1U;
	uint32_t x642 = UINT32_MAX;
	int64_t x644 = -15LL;
	static int32_t t151 = -21;

    t151 = (((x641|x642)+x643)==x644);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x645 = -1;
	int16_t x646 = 20;
	int64_t x647 = -668443017LL;
	int32_t x648 = INT32_MIN;
	volatile int32_t t152 = -1;

    t152 = (((x645|x646)+x647)==x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = -1;
	static uint16_t x650 = UINT16_MAX;
	static int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MAX;

    t153 = (((x649|x650)+x651)==x652);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x655 = 51325096U;
	static int16_t x656 = INT16_MIN;
	volatile int32_t t154 = 0;

    t154 = (((x653|x654)+x655)==x656);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x657 = INT16_MAX;
	static volatile int64_t x658 = INT64_MIN;
	uint32_t x659 = 115161690U;
	int32_t t155 = -3396106;

    t155 = (((x657|x658)+x659)==x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x661 = INT8_MIN;
	volatile int16_t x662 = INT16_MIN;
	static int16_t x663 = INT16_MIN;
	volatile uint64_t x664 = 1017162137732527816LLU;
	int32_t t156 = 2;

    t156 = (((x661|x662)+x663)==x664);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x665 = -1;
	uint64_t x666 = 1769975352291142524LLU;
	volatile int32_t t157 = -2;

    t157 = (((x665|x666)+x667)==x668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x670 = 4116859LLU;
	int32_t x672 = -1;
	int32_t t158 = -6958512;

    t158 = (((x669|x670)+x671)==x672);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x677 = -1LL;
	static uint32_t x678 = UINT32_MAX;
	static uint64_t x679 = 8711165855362289LLU;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t159 = 6172266;

    t159 = (((x677|x678)+x679)==x680);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x681 = -69292651390926LL;
	uint32_t x683 = 3U;
	int16_t x684 = -9;
	volatile int32_t t160 = 171;

    t160 = (((x681|x682)+x683)==x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x685 = 2U;
	int16_t x686 = INT16_MAX;
	static uint64_t x687 = 5LLU;
	int64_t x688 = INT64_MAX;
	volatile int32_t t161 = 1;

    t161 = (((x685|x686)+x687)==x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x689 = 196;
	volatile int32_t x690 = 104181;
	int32_t t162 = -5;

    t162 = (((x689|x690)+x691)==x692);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x693 = 6469U;
	int8_t x694 = INT8_MAX;
	int8_t x696 = INT8_MIN;
	volatile int32_t t163 = 262;

    t163 = (((x693|x694)+x695)==x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x697 = 329221148U;
	static int16_t x699 = 14611;
	volatile int64_t x700 = -1LL;
	int32_t t164 = -1372;

    t164 = (((x697|x698)+x699)==x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x701 = 3;
	int16_t x702 = INT16_MIN;
	static volatile uint64_t x703 = 103LLU;
	uint64_t x704 = 33356LLU;
	static volatile int32_t t165 = 86;

    t165 = (((x701|x702)+x703)==x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x705 = 620381;
	volatile int8_t x707 = 3;
	int32_t x708 = INT32_MAX;
	int32_t t166 = -20429;

    t166 = (((x705|x706)+x707)==x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x709 = -1;
	int16_t x711 = INT16_MIN;
	int64_t x712 = -5LL;
	volatile int32_t t167 = 6890;

    t167 = (((x709|x710)+x711)==x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x713 = 0;
	int64_t x714 = INT64_MAX;
	uint64_t x715 = 455185935LLU;
	int32_t x716 = INT32_MIN;
	int32_t t168 = -256976;

    t168 = (((x713|x714)+x715)==x716);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x717 = 119U;
	int8_t x718 = 1;
	int8_t x719 = INT8_MAX;
	static volatile int32_t x720 = 168;
	int32_t t169 = -3;

    t169 = (((x717|x718)+x719)==x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x721 = UINT8_MAX;
	int64_t x722 = -1LL;
	int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MIN;
	volatile int32_t t170 = 13713609;

    t170 = (((x721|x722)+x723)==x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x725 = INT16_MAX;

    t171 = (((x725|x726)+x727)==x728);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x729 = INT8_MAX;
	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	uint8_t x732 = 7U;
	static int32_t t172 = -27;

    t172 = (((x729|x730)+x731)==x732);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x733 = 1008272U;
	int8_t x734 = INT8_MAX;
	int64_t x735 = 5660427650LL;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t173 = 79083;

    t173 = (((x733|x734)+x735)==x736);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x737 = 13U;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MAX;

    t174 = (((x737|x738)+x739)==x740);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x741 = -111253LL;
	uint8_t x742 = 2U;
	static uint32_t x743 = 229341U;
	volatile int64_t x744 = 495448LL;
	static int32_t t175 = -65;

    t175 = (((x741|x742)+x743)==x744);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x750 = INT64_MAX;
	int8_t x751 = INT8_MIN;
	volatile int32_t t176 = 2;

    t176 = (((x749|x750)+x751)==x752);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x753 = 7536U;
	int16_t x754 = -4001;
	int16_t x755 = 2;
	volatile int32_t t177 = -252;

    t177 = (((x753|x754)+x755)==x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x757 = INT64_MAX;
	int16_t x759 = 5259;
	static int8_t x760 = INT8_MIN;
	static int32_t t178 = 66772857;

    t178 = (((x757|x758)+x759)==x760);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x761 = INT64_MAX;
	volatile int64_t x762 = -1LL;
	static uint8_t x763 = 1U;
	volatile int8_t x764 = INT8_MIN;
	volatile int32_t t179 = 1;

    t179 = (((x761|x762)+x763)==x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x768 = 115;

    t180 = (((x765|x766)+x767)==x768);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x769 = UINT32_MAX;
	static int64_t x771 = -1LL;
	int32_t x772 = -65;
	static volatile int32_t t181 = -750;

    t181 = (((x769|x770)+x771)==x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x773 = -1;
	int32_t x774 = INT32_MIN;
	static int16_t x776 = -1311;
	volatile int32_t t182 = -58;

    t182 = (((x773|x774)+x775)==x776);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x777 = INT8_MIN;
	uint64_t x778 = 60713542057574LLU;
	int32_t x779 = -1;
	uint16_t x780 = 776U;
	volatile int32_t t183 = -10915;

    t183 = (((x777|x778)+x779)==x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x785 = 4295U;
	int16_t x786 = -1;
	uint64_t x787 = 31099211154081LLU;
	volatile int8_t x788 = -1;
	volatile int32_t t184 = -11494;

    t184 = (((x785|x786)+x787)==x788);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x789 = INT8_MAX;
	static int64_t x790 = -1LL;
	volatile int16_t x791 = INT16_MAX;
	static uint64_t x792 = 67788490LLU;
	volatile int32_t t185 = 913462;

    t185 = (((x789|x790)+x791)==x792);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x793 = 1;
	uint64_t x794 = 16951529571153LLU;
	int8_t x795 = -1;

    t186 = (((x793|x794)+x795)==x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MAX;
	uint8_t x800 = 7U;
	volatile int32_t t187 = -6585754;

    t187 = (((x797|x798)+x799)==x800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x802 = 1;
	int64_t x803 = 18402605LL;
	int8_t x804 = -1;
	volatile int32_t t188 = -14;

    t188 = (((x801|x802)+x803)==x804);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x805 = INT64_MAX;
	static uint64_t x806 = 425537035921322955LLU;
	static int64_t x807 = -1LL;
	int64_t x808 = INT64_MIN;
	int32_t t189 = -563112;

    t189 = (((x805|x806)+x807)==x808);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x809 = -1;
	volatile uint8_t x810 = 8U;
	int64_t x812 = -1LL;
	static volatile int32_t t190 = -325;

    t190 = (((x809|x810)+x811)==x812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x813 = UINT32_MAX;
	static volatile int16_t x814 = -1;
	int16_t x816 = INT16_MIN;

    t191 = (((x813|x814)+x815)==x816);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x817 = -2389347530949765LL;
	static volatile int16_t x818 = -241;
	int16_t x819 = INT16_MIN;
	static int8_t x820 = -1;
	volatile int32_t t192 = -19;

    t192 = (((x817|x818)+x819)==x820);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x822 = INT32_MIN;
	volatile uint8_t x823 = 21U;
	int64_t x824 = -89530397934381736LL;
	volatile int32_t t193 = 454;

    t193 = (((x821|x822)+x823)==x824);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x825 = INT64_MAX;
	int64_t x827 = INT64_MIN;
	uint8_t x828 = 0U;
	static volatile int32_t t194 = -3;

    t194 = (((x825|x826)+x827)==x828);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x830 = 21394294125591LLU;
	uint64_t x831 = 1780275821LLU;
	volatile int64_t x832 = INT64_MIN;

    t195 = (((x829|x830)+x831)==x832);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x833 = UINT64_MAX;
	uint16_t x834 = 2U;
	static int16_t x835 = 0;
	volatile int32_t t196 = 63489856;

    t196 = (((x833|x834)+x835)==x836);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x837 = INT16_MAX;
	int16_t x839 = 1;
	int64_t x840 = INT64_MIN;
	int32_t t197 = -38;

    t197 = (((x837|x838)+x839)==x840);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x841 = -1;
	int16_t x843 = -1;
	static int32_t t198 = 1592169;

    t198 = (((x841|x842)+x843)==x844);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x853 = 0U;
	int16_t x855 = INT16_MIN;
	volatile int32_t t199 = 7551;

    t199 = (((x853|x854)+x855)==x856);

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

