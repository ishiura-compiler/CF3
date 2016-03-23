
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

static int16_t x2 = INT16_MIN;
static uint16_t x22 = 119U;
uint64_t x38 = 63206LLU;
volatile int8_t x40 = INT8_MAX;
int64_t x52 = -1LL;
int8_t x54 = INT8_MIN;
int64_t x56 = 1LL;
static uint8_t x62 = UINT8_MAX;
volatile int32_t t11 = 57;
int16_t x74 = -8191;
volatile int32_t t13 = -15782;
int32_t x79 = INT32_MIN;
int16_t x80 = INT16_MAX;
int32_t x81 = INT32_MIN;
int8_t x91 = -19;
int8_t x92 = -1;
uint32_t x96 = UINT32_MAX;
static uint8_t x121 = 1U;
uint64_t x125 = 66938670120LLU;
volatile int8_t x127 = INT8_MIN;
uint32_t x132 = 183U;
volatile int32_t x136 = INT32_MIN;
static int32_t x151 = 153777;
volatile int32_t t28 = 22;
uint64_t x154 = 227544LLU;
volatile uint64_t x155 = 1LLU;
volatile uint64_t x159 = 483107792438LLU;
uint32_t x172 = 4U;
int64_t x181 = INT64_MIN;
volatile uint64_t x188 = UINT64_MAX;
int64_t x191 = INT64_MIN;
int64_t x192 = INT64_MIN;
uint8_t x202 = UINT8_MAX;
volatile int32_t t42 = -121;
volatile int32_t t44 = -3202;
int32_t t45 = 20606390;
int32_t t47 = 539;
volatile int32_t x249 = INT32_MAX;
volatile uint16_t x254 = 20962U;
static uint8_t x257 = 14U;
int32_t t52 = -3;
static int64_t x265 = -1LL;
volatile int64_t x267 = -1LL;
volatile int32_t t53 = 55;
int16_t x273 = INT16_MIN;
static uint8_t x274 = 18U;
int16_t x283 = -1;
static int16_t x285 = INT16_MAX;
int32_t x288 = INT32_MIN;
static int64_t x298 = -1LL;
uint16_t x300 = UINT16_MAX;
static volatile int32_t t60 = 1452;
static int32_t t61 = 113;
uint32_t x316 = 5633717U;
volatile int32_t t64 = 28116792;
int16_t x322 = -1;
uint8_t x323 = UINT8_MAX;
static int64_t x324 = -1LL;
int64_t x326 = 81LL;
static int8_t x328 = -1;
int16_t x330 = INT16_MIN;
volatile int64_t x332 = -4907044LL;
int64_t x337 = -83LL;
int64_t x339 = -1LL;
int64_t x346 = 120217LL;
uint8_t x351 = 0U;
volatile uint8_t x352 = 18U;
int32_t t72 = -27299;
volatile int16_t x359 = -1;
int64_t x360 = INT64_MAX;
uint64_t x379 = 2768LLU;
int32_t t79 = -5488335;
int8_t x397 = 31;
static int64_t x401 = INT64_MIN;
volatile int16_t x404 = 3;
int32_t t81 = -34;
uint8_t x416 = 121U;
volatile int16_t x421 = -284;
int32_t x424 = 132548;
int64_t x425 = INT64_MIN;
int16_t x429 = INT16_MIN;
volatile int32_t t87 = -60014431;
static int32_t x435 = 634;
int16_t x445 = INT16_MAX;
volatile int32_t t91 = -222;
uint64_t x449 = 12653521LLU;
static uint32_t x460 = 89828U;
int32_t t94 = 5801;
static int16_t x468 = INT16_MIN;
uint16_t x474 = 10U;
static int16_t x475 = -1;
uint16_t x477 = UINT16_MAX;
int32_t t100 = 1664397;
int32_t t102 = 83;
volatile uint16_t x499 = UINT16_MAX;
int64_t x513 = -9056150LL;
int32_t x516 = INT32_MAX;
uint64_t x517 = 33399246LLU;
volatile int8_t x518 = 7;
static volatile int64_t x520 = INT64_MIN;
volatile int32_t t107 = -1;
volatile uint64_t x535 = 3656815830937LLU;
int16_t x542 = -497;
uint16_t x554 = UINT16_MAX;
volatile int64_t x561 = INT64_MIN;
uint32_t x563 = 63246U;
int32_t t113 = -917;
int32_t x571 = 85;
static volatile int16_t x575 = INT16_MIN;
int8_t x576 = INT8_MAX;
volatile int32_t x586 = -3170762;
int64_t x592 = -499840379LL;
uint64_t x595 = 60709LLU;
int8_t x597 = 14;
int64_t x603 = -565602606LL;
int32_t t122 = 61;
static volatile int64_t x615 = -10707295098586LL;
uint64_t x617 = 783LLU;
int32_t t127 = -117777086;
static int16_t x632 = 1;
static int32_t t130 = -129525287;
static int32_t t131 = 525;
volatile int16_t x655 = -1;
volatile int32_t t134 = 14593228;
int32_t x657 = -1;
static int32_t x663 = -7;
int16_t x665 = -1;
volatile uint32_t x671 = 16691U;
static volatile int32_t t138 = 16248079;
int32_t t139 = -730992;
volatile int64_t x685 = 6136697LL;
int8_t x697 = INT8_MAX;
uint32_t x698 = UINT32_MAX;
int32_t t145 = 7;
volatile uint16_t x703 = 5016U;
int16_t x711 = INT16_MIN;
uint16_t x715 = 1U;
int32_t t149 = -1057434;
int32_t t150 = -100;
int64_t x734 = -1190448769LL;
int32_t x737 = -1;
uint64_t x747 = UINT64_MAX;
volatile int32_t t154 = 23;
uint8_t x752 = 0U;
volatile uint8_t x755 = 6U;
uint16_t x761 = UINT16_MAX;
static volatile uint8_t x784 = 12U;
int32_t t158 = -3934;
volatile int32_t t161 = 862815161;
volatile int8_t x800 = 3;
int32_t x801 = INT32_MIN;
static int64_t x804 = INT64_MAX;
static volatile int32_t t163 = 36;
int32_t x810 = -1;
int32_t t164 = 104;
volatile uint32_t x821 = 3090U;
uint8_t x829 = 14U;
int32_t x832 = -57337704;
volatile int32_t t169 = -7890520;
uint8_t x845 = UINT8_MAX;
volatile uint16_t x850 = UINT16_MAX;
int8_t x852 = INT8_MAX;
int8_t x853 = INT8_MAX;
uint8_t x869 = 69U;
volatile int32_t t176 = 7;
volatile int32_t x879 = 0;
static int8_t x885 = 0;
int8_t x898 = INT8_MIN;
uint16_t x899 = UINT16_MAX;
int32_t t180 = -4;
static uint32_t x902 = 2U;
int32_t x907 = -20880;
uint64_t x915 = 980070127LLU;
uint64_t x918 = UINT64_MAX;
int64_t x941 = 53629743695158LL;
static uint32_t x942 = 159U;
int16_t x956 = INT16_MAX;
int16_t x960 = INT16_MIN;
int32_t t193 = 710;
int64_t x961 = -1LL;
int64_t x963 = 3856511LL;
int16_t x965 = INT16_MIN;
int8_t x968 = 50;
volatile int32_t t195 = 28405683;
static int8_t x969 = 10;
int8_t x971 = 15;
int32_t x975 = INT32_MIN;
static int8_t x976 = INT8_MIN;
volatile int32_t t198 = 193;
int8_t x982 = 0;


void f0(void) {
    	uint16_t x1 = 5983U;
	static int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 175740150;

    t0 = ((x1+(x2-x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = 1;
	volatile int32_t t1 = -54189194;

    t1 = ((x5+(x6-x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = 5890;
	static volatile int32_t t2 = -11;

    t2 = ((x13+(x14-x15))!=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MIN;
	static uint16_t x23 = 31989U;
	static int64_t x24 = -1LL;
	volatile int32_t t3 = -1;

    t3 = ((x21+(x22-x23))!=x24);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = -1;
	uint8_t x30 = 20U;
	uint32_t x31 = 14U;
	int64_t x32 = -2605LL;
	int32_t t4 = -255270;

    t4 = ((x29+(x30-x31))!=x32);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = UINT8_MAX;
	int64_t x39 = INT64_MIN;
	static volatile int32_t t5 = 62;

    t5 = ((x37+(x38-x39))!=x40);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = INT64_MAX;
	uint16_t x42 = 1U;
	uint16_t x43 = 3U;
	int32_t x44 = INT32_MIN;
	int32_t t6 = -10961;

    t6 = ((x41+(x42-x43))!=x44);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile int16_t x50 = -12;
	uint64_t x51 = 204382593923LLU;
	volatile int32_t t7 = -1;

    t7 = ((x49+(x50-x51))!=x52);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x53 = -1;
	volatile int64_t x55 = -312829498LL;
	volatile int32_t t8 = -15603334;

    t8 = ((x53+(x54-x55))!=x56);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x57 = 990305957397LL;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -755927461;
	int8_t x60 = INT8_MIN;
	int32_t t9 = -14;

    t9 = ((x57+(x58-x59))!=x60);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = UINT8_MAX;
	static int16_t x63 = 5;
	int32_t x64 = INT32_MIN;
	int32_t t10 = -1;

    t10 = ((x61+(x62-x63))!=x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x65 = INT8_MIN;
	static uint32_t x66 = 3533142U;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = 5147433;

    t11 = ((x65+(x66-x67))!=x68);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x69 = 109U;
	int32_t x70 = 2;
	int64_t x71 = -4LL;
	int32_t x72 = 2;
	static volatile int32_t t12 = -75743553;

    t12 = ((x69+(x70-x71))!=x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = -1;
	volatile uint16_t x75 = 5207U;
	volatile uint32_t x76 = UINT32_MAX;

    t13 = ((x73+(x74-x75))!=x76);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x77 = 14U;
	int64_t x78 = INT64_MIN;
	int32_t t14 = 2162;

    t14 = ((x77+(x78-x79))!=x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x82 = 109U;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -63426880;
	volatile int32_t t15 = -2065;

    t15 = ((x81+(x82-x83))!=x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x85 = -4;
	int16_t x86 = 1;
	uint16_t x87 = 3U;
	int64_t x88 = INT64_MAX;
	volatile int32_t t16 = 2843515;

    t16 = ((x85+(x86-x87))!=x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x89 = -2923;
	int16_t x90 = INT16_MAX;
	int32_t t17 = -52451728;

    t17 = ((x89+(x90-x91))!=x92);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x93 = INT64_MIN;
	volatile int8_t x94 = -1;
	volatile int64_t x95 = -1LL;
	int32_t t18 = -32941014;

    t18 = ((x93+(x94-x95))!=x96);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = 3311;
	int32_t x100 = INT32_MAX;
	int32_t t19 = 486727;

    t19 = ((x97+(x98-x99))!=x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = INT16_MAX;
	uint64_t x106 = UINT64_MAX;
	volatile uint64_t x107 = UINT64_MAX;
	int32_t x108 = -1;
	static volatile int32_t t20 = -1069;

    t20 = ((x105+(x106-x107))!=x108);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x117 = -40;
	int64_t x118 = -15817693LL;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 3810127878LLU;
	int32_t t21 = 3550;

    t21 = ((x117+(x118-x119))!=x120);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x122 = 2360049808797LLU;
	int16_t x123 = 248;
	static int64_t x124 = -1LL;
	volatile int32_t t22 = 1;

    t22 = ((x121+(x122-x123))!=x124);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x126 = -1;
	volatile uint16_t x128 = UINT16_MAX;
	int32_t t23 = -273682;

    t23 = ((x125+(x126-x127))!=x128);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x129 = UINT32_MAX;
	int16_t x130 = -10;
	int32_t x131 = 114;
	static volatile int32_t t24 = -47124771;

    t24 = ((x129+(x130-x131))!=x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 14U;
	volatile int32_t x135 = INT32_MAX;
	volatile int32_t t25 = 131108405;

    t25 = ((x133+(x134-x135))!=x136);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x141 = 25939U;
	uint8_t x142 = 35U;
	uint32_t x143 = 1U;
	int64_t x144 = -1LL;
	int32_t t26 = 694;

    t26 = ((x141+(x142-x143))!=x144);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x145 = INT64_MIN;
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MAX;
	int16_t x148 = 0;
	volatile int32_t t27 = 129689;

    t27 = ((x145+(x146-x147))!=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x149 = 389088530346666972LLU;
	static volatile int8_t x150 = -1;
	int64_t x152 = 83286309721501994LL;

    t28 = ((x149+(x150-x151))!=x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x153 = -1;
	int64_t x156 = INT64_MIN;
	volatile int32_t t29 = 58949;

    t29 = ((x153+(x154-x155))!=x156);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x157 = INT64_MIN;
	int32_t x158 = -1;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t30 = 14;

    t30 = ((x157+(x158-x159))!=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x161 = 1;
	int32_t x162 = INT32_MAX;
	int16_t x163 = INT16_MAX;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t31 = 19392130;

    t31 = ((x161+(x162-x163))!=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MAX;
	int32_t t32 = -33885;

    t32 = ((x165+(x166-x167))!=x168);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = -9768388755708188LL;
	static int32_t x171 = 2;
	static int32_t t33 = 141830656;

    t33 = ((x169+(x170-x171))!=x172);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x173 = 0U;
	int64_t x174 = -1LL;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;
	static volatile int32_t t34 = 227277;

    t34 = ((x173+(x174-x175))!=x176);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x182 = INT8_MAX;
	int32_t x183 = -1;
	volatile int8_t x184 = -22;
	static volatile int32_t t35 = -20526;

    t35 = ((x181+(x182-x183))!=x184);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x185 = INT8_MAX;
	static int64_t x186 = 3LL;
	volatile int32_t x187 = 362123948;
	static int32_t t36 = -25;

    t36 = ((x185+(x186-x187))!=x188);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = INT32_MIN;
	int8_t x190 = -1;
	static volatile int32_t t37 = 0;

    t37 = ((x189+(x190-x191))!=x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x193 = -1;
	int8_t x194 = 63;
	uint16_t x195 = 202U;
	int32_t x196 = INT32_MAX;
	volatile int32_t t38 = 1;

    t38 = ((x193+(x194-x195))!=x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x197 = 5262U;
	volatile int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	static volatile int16_t x200 = 3776;
	volatile int32_t t39 = -776923928;

    t39 = ((x197+(x198-x199))!=x200);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x201 = -9;
	int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t40 = 3826;

    t40 = ((x201+(x202-x203))!=x204);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x209 = -1868;
	uint8_t x210 = 4U;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t41 = -208;

    t41 = ((x209+(x210-x211))!=x212);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x213 = 1080;
	static int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	volatile int64_t x216 = INT64_MIN;

    t42 = ((x213+(x214-x215))!=x216);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	int32_t x226 = -1;
	uint16_t x227 = 182U;
	int16_t x228 = INT16_MAX;
	int32_t t43 = -693952;

    t43 = ((x225+(x226-x227))!=x228);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x229 = UINT8_MAX;
	volatile uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 953U;
	int64_t x232 = -1LL;

    t44 = ((x229+(x230-x231))!=x232);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x233 = -5809746456576LL;
	int32_t x234 = INT32_MAX;
	uint32_t x235 = 769U;
	static volatile uint16_t x236 = 26U;

    t45 = ((x233+(x234-x235))!=x236);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	volatile int8_t x239 = INT8_MIN;
	volatile int32_t x240 = -6;
	volatile int32_t t46 = -13325;

    t46 = ((x237+(x238-x239))!=x240);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MAX;
	int32_t x243 = 1;
	uint16_t x244 = UINT16_MAX;

    t47 = ((x241+(x242-x243))!=x244);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x245 = INT8_MIN;
	uint8_t x246 = 0U;
	uint32_t x247 = 670437U;
	int32_t x248 = 42580474;
	static int32_t t48 = -138;

    t48 = ((x245+(x246-x247))!=x248);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x250 = INT32_MIN;
	static int8_t x251 = 0;
	int64_t x252 = 4332921091813607474LL;
	int32_t t49 = 153;

    t49 = ((x249+(x250-x251))!=x252);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x253 = -136550561673LL;
	static int16_t x255 = 0;
	int32_t x256 = INT32_MIN;
	int32_t t50 = 1;

    t50 = ((x253+(x254-x255))!=x256);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x258 = 921U;
	volatile int64_t x259 = INT64_MAX;
	static int32_t x260 = -1;
	int32_t t51 = -2;

    t51 = ((x257+(x258-x259))!=x260);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x261 = 1676U;
	int16_t x262 = -1;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -1571591LL;

    t52 = ((x261+(x262-x263))!=x264);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x266 = 3LL;
	int64_t x268 = INT64_MAX;

    t53 = ((x265+(x266-x267))!=x268);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MAX;
	volatile int8_t x271 = -1;
	int16_t x272 = INT16_MAX;
	int32_t t54 = -76616;

    t54 = ((x269+(x270-x271))!=x272);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x275 = 14457675U;
	int16_t x276 = INT16_MIN;
	int32_t t55 = 0;

    t55 = ((x273+(x274-x275))!=x276);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x277 = 7;
	uint16_t x278 = 525U;
	volatile int64_t x279 = 115LL;
	int8_t x280 = -10;
	volatile int32_t t56 = 10;

    t56 = ((x277+(x278-x279))!=x280);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x281 = UINT64_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t57 = 338;

    t57 = ((x281+(x282-x283))!=x284);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t58 = -2;

    t58 = ((x285+(x286-x287))!=x288);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x289 = INT16_MIN;
	int16_t x290 = 9;
	static uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 25U;
	volatile int32_t t59 = 0;

    t59 = ((x289+(x290-x291))!=x292);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x297 = 402333141596721LLU;
	int16_t x299 = INT16_MIN;

    t60 = ((x297+(x298-x299))!=x300);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x301 = -207715266667157314LL;
	volatile uint32_t x302 = 3U;
	static int16_t x303 = -3678;
	uint16_t x304 = UINT16_MAX;

    t61 = ((x301+(x302-x303))!=x304);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x305 = -1;
	uint8_t x306 = 12U;
	int8_t x307 = -1;
	uint32_t x308 = 40387874U;
	volatile int32_t t62 = 66986925;

    t62 = ((x305+(x306-x307))!=x308);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x313 = UINT16_MAX;
	static uint8_t x314 = 24U;
	uint32_t x315 = 70559378U;
	int32_t t63 = -103422368;

    t63 = ((x313+(x314-x315))!=x316);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x317 = -1;
	volatile int8_t x318 = 0;
	int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MAX;

    t64 = ((x317+(x318-x319))!=x320);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x321 = -452529810LL;
	static int32_t t65 = -43454446;

    t65 = ((x321+(x322-x323))!=x324);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = INT64_MIN;
	int16_t x327 = -1;
	static volatile int32_t t66 = -3993;

    t66 = ((x325+(x326-x327))!=x328);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x329 = 2619791U;
	int16_t x331 = 128;
	int32_t t67 = -834;

    t67 = ((x329+(x330-x331))!=x332);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x333 = INT8_MAX;
	volatile uint8_t x334 = 72U;
	int64_t x335 = -1LL;
	uint64_t x336 = UINT64_MAX;
	static volatile int32_t t68 = 11;

    t68 = ((x333+(x334-x335))!=x336);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x338 = -2630623;
	uint32_t x340 = 14249U;
	volatile int32_t t69 = 32767;

    t69 = ((x337+(x338-x339))!=x340);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x341 = -1;
	volatile int8_t x342 = -15;
	int64_t x343 = -1LL;
	volatile int16_t x344 = INT16_MIN;
	int32_t t70 = -431786;

    t70 = ((x341+(x342-x343))!=x344);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x347 = -1;
	int32_t x348 = INT32_MIN;
	int32_t t71 = -126389230;

    t71 = ((x345+(x346-x347))!=x348);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x349 = 3LL;
	int32_t x350 = -1334253;

    t72 = ((x349+(x350-x351))!=x352);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x353 = 1661176LLU;
	int32_t x354 = -27579;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -345;
	volatile int32_t t73 = -601546297;

    t73 = ((x353+(x354-x355))!=x356);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x357 = 2114100366730589LLU;
	int16_t x358 = 0;
	volatile int32_t t74 = -1015665;

    t74 = ((x357+(x358-x359))!=x360);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x365 = UINT64_MAX;
	uint16_t x366 = 2472U;
	static uint32_t x367 = 442U;
	int64_t x368 = -1LL;
	static volatile int32_t t75 = -1797563;

    t75 = ((x365+(x366-x367))!=x368);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x369 = INT64_MAX;
	volatile int64_t x370 = -1LL;
	volatile uint32_t x371 = 266640266U;
	volatile int64_t x372 = -191600902508175105LL;
	volatile int32_t t76 = 6089;

    t76 = ((x369+(x370-x371))!=x372);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x377 = -1;
	int32_t x378 = 31;
	uint8_t x380 = 8U;
	int32_t t77 = 185518;

    t77 = ((x377+(x378-x379))!=x380);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x385 = 1U;
	int32_t x386 = -1466946;
	int8_t x387 = INT8_MIN;
	volatile int64_t x388 = INT64_MIN;
	int32_t t78 = -1;

    t78 = ((x385+(x386-x387))!=x388);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = 20U;
	int8_t x392 = -1;

    t79 = ((x389+(x390-x391))!=x392);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x398 = INT32_MIN;
	volatile uint64_t x399 = UINT64_MAX;
	volatile int16_t x400 = INT16_MIN;
	int32_t t80 = 182478;

    t80 = ((x397+(x398-x399))!=x400);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x402 = UINT8_MAX;
	volatile int16_t x403 = INT16_MIN;

    t81 = ((x401+(x402-x403))!=x404);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x405 = 15U;
	int32_t x406 = 988422924;
	static volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = 322810LL;
	int32_t t82 = 0;

    t82 = ((x405+(x406-x407))!=x408);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	static int32_t t83 = 1632925;

    t83 = ((x413+(x414-x415))!=x416);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x417 = 23293U;
	static int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 0;
	int32_t t84 = 30453519;

    t84 = ((x417+(x418-x419))!=x420);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x422 = 1453LL;
	uint8_t x423 = 0U;
	int32_t t85 = -1536501;

    t85 = ((x421+(x422-x423))!=x424);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x426 = UINT32_MAX;
	static uint64_t x427 = 139179LLU;
	int8_t x428 = 24;
	int32_t t86 = -57;

    t86 = ((x425+(x426-x427))!=x428);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x430 = -1;
	volatile uint32_t x431 = 0U;
	int32_t x432 = INT32_MIN;

    t87 = ((x429+(x430-x431))!=x432);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x433 = INT16_MAX;
	int64_t x434 = 64098681060428631LL;
	uint64_t x436 = 167521910288077LLU;
	int32_t t88 = -5141720;

    t88 = ((x433+(x434-x435))!=x436);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x437 = 3U;
	static int8_t x438 = INT8_MAX;
	static volatile int32_t x439 = -1;
	volatile int16_t x440 = 3208;
	volatile int32_t t89 = -342544;

    t89 = ((x437+(x438-x439))!=x440);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x441 = 8U;
	static uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	int64_t x444 = 415708797889LL;
	int32_t t90 = 203490064;

    t90 = ((x441+(x442-x443))!=x444);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x446 = 558;
	int16_t x447 = 527;
	uint8_t x448 = 1U;

    t91 = ((x445+(x446-x447))!=x448);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x450 = UINT64_MAX;
	volatile int64_t x451 = -369LL;
	volatile int16_t x452 = INT16_MIN;
	int32_t t92 = 117;

    t92 = ((x449+(x450-x451))!=x452);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = 11937;
	volatile int8_t x455 = INT8_MIN;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t93 = 68177683;

    t93 = ((x453+(x454-x455))!=x456);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x457 = 0U;
	static uint8_t x458 = 6U;
	uint64_t x459 = 2217909LLU;

    t94 = ((x457+(x458-x459))!=x460);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x461 = INT16_MIN;
	volatile int8_t x462 = INT8_MIN;
	uint32_t x463 = 28038U;
	uint64_t x464 = 489LLU;
	int32_t t95 = 163279799;

    t95 = ((x461+(x462-x463))!=x464);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = -1;
	volatile int8_t x467 = INT8_MIN;
	volatile int32_t t96 = 255622;

    t96 = ((x465+(x466-x467))!=x468);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x469 = 187;
	uint16_t x470 = 29U;
	int16_t x471 = -3430;
	volatile int8_t x472 = 0;
	static int32_t t97 = 2;

    t97 = ((x469+(x470-x471))!=x472);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x473 = -1;
	volatile int32_t x476 = -1;
	int32_t t98 = 543123701;

    t98 = ((x473+(x474-x475))!=x476);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x478 = INT8_MIN;
	volatile uint64_t x479 = 1272843LLU;
	volatile uint8_t x480 = UINT8_MAX;
	int32_t t99 = 152;

    t99 = ((x477+(x478-x479))!=x480);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x481 = 6398;
	int16_t x482 = INT16_MIN;
	static int16_t x483 = 61;
	int16_t x484 = INT16_MIN;

    t100 = ((x481+(x482-x483))!=x484);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = INT64_MIN;
	uint64_t x486 = 8825356LLU;
	static int32_t x487 = 506237758;
	static int16_t x488 = -1;
	static int32_t t101 = -21197;

    t101 = ((x485+(x486-x487))!=x488);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x493 = 1422090024LLU;
	static uint16_t x494 = 5U;
	uint32_t x495 = 102U;
	static int16_t x496 = 5059;

    t102 = ((x493+(x494-x495))!=x496);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x497 = 2LLU;
	int64_t x498 = -1LL;
	volatile int16_t x500 = -594;
	static volatile int32_t t103 = 0;

    t103 = ((x497+(x498-x499))!=x500);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x514 = -7240;
	int8_t x515 = -1;
	int32_t t104 = -27791;

    t104 = ((x513+(x514-x515))!=x516);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x519 = -9;
	int32_t t105 = -36442;

    t105 = ((x517+(x518-x519))!=x520);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x521 = 3956U;
	int16_t x522 = 1;
	static int32_t x523 = -1;
	int64_t x524 = INT64_MAX;
	int32_t t106 = -100;

    t106 = ((x521+(x522-x523))!=x524);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x525 = 206LL;
	int16_t x526 = INT16_MIN;
	static int32_t x527 = INT32_MIN;
	int64_t x528 = 103968738586444LL;

    t107 = ((x525+(x526-x527))!=x528);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x529 = -3;
	int64_t x530 = -1LL;
	int16_t x531 = -12149;
	int16_t x532 = -1;
	volatile int32_t t108 = 1;

    t108 = ((x529+(x530-x531))!=x532);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x533 = UINT8_MAX;
	volatile int64_t x534 = INT64_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t109 = -3788489;

    t109 = ((x533+(x534-x535))!=x536);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x541 = 28624U;
	volatile int16_t x543 = -2;
	int16_t x544 = INT16_MIN;
	int32_t t110 = -12049;

    t110 = ((x541+(x542-x543))!=x544);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x553 = INT16_MAX;
	int8_t x555 = -1;
	volatile int8_t x556 = -38;
	volatile int32_t t111 = -50120819;

    t111 = ((x553+(x554-x555))!=x556);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x562 = INT8_MIN;
	int32_t x564 = INT32_MAX;
	int32_t t112 = 349664411;

    t112 = ((x561+(x562-x563))!=x564);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x565 = -52;
	int16_t x566 = -133;
	int16_t x567 = -1;
	uint8_t x568 = UINT8_MAX;

    t113 = ((x565+(x566-x567))!=x568);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x569 = INT16_MAX;
	uint8_t x570 = 95U;
	uint32_t x572 = UINT32_MAX;
	static int32_t t114 = 717;

    t114 = ((x569+(x570-x571))!=x572);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x573 = INT8_MAX;
	int32_t x574 = INT32_MIN;
	int32_t t115 = -4495;

    t115 = ((x573+(x574-x575))!=x576);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x577 = 35033490LLU;
	volatile uint8_t x578 = UINT8_MAX;
	uint8_t x579 = 1U;
	volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t116 = 26705155;

    t116 = ((x577+(x578-x579))!=x580);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x585 = -1LL;
	int8_t x587 = INT8_MIN;
	int64_t x588 = -1LL;
	volatile int32_t t117 = -905;

    t117 = ((x585+(x586-x587))!=x588);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x590 = 1410339LLU;
	uint8_t x591 = UINT8_MAX;
	static volatile int32_t t118 = -18065;

    t118 = ((x589+(x590-x591))!=x592);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x593 = -336095;
	volatile int16_t x594 = 27;
	int32_t x596 = INT32_MIN;
	int32_t t119 = -1109;

    t119 = ((x593+(x594-x595))!=x596);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x598 = INT16_MIN;
	static int16_t x599 = INT16_MIN;
	int64_t x600 = -130742678381LL;
	static int32_t t120 = -13;

    t120 = ((x597+(x598-x599))!=x600);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	volatile uint32_t x602 = 377270507U;
	static volatile uint8_t x604 = 0U;
	int32_t t121 = 1;

    t121 = ((x601+(x602-x603))!=x604);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	uint16_t x606 = 30U;
	int64_t x607 = -1LL;
	uint64_t x608 = 203559013460350241LLU;

    t122 = ((x605+(x606-x607))!=x608);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x609 = INT32_MAX;
	uint64_t x610 = UINT64_MAX;
	volatile int64_t x611 = INT64_MIN;
	uint16_t x612 = 4U;
	int32_t t123 = -191388;

    t123 = ((x609+(x610-x611))!=x612);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x613 = 1LLU;
	int32_t x614 = INT32_MAX;
	int16_t x616 = INT16_MIN;
	volatile int32_t t124 = -207494;

    t124 = ((x613+(x614-x615))!=x616);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x618 = -1LL;
	uint64_t x619 = UINT64_MAX;
	int64_t x620 = INT64_MIN;
	static int32_t t125 = 49;

    t125 = ((x617+(x618-x619))!=x620);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x621 = UINT64_MAX;
	uint8_t x622 = 4U;
	uint64_t x623 = 7890290212496748LLU;
	int8_t x624 = -1;
	static int32_t t126 = 496427311;

    t126 = ((x621+(x622-x623))!=x624);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x625 = INT32_MIN;
	static int8_t x626 = 0;
	uint32_t x627 = UINT32_MAX;
	uint64_t x628 = UINT64_MAX;

    t127 = ((x625+(x626-x627))!=x628);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x629 = -17980LL;
	int64_t x630 = INT64_MAX;
	static uint8_t x631 = UINT8_MAX;
	int32_t t128 = 55182586;

    t128 = ((x629+(x630-x631))!=x632);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x633 = UINT8_MAX;
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	int16_t x636 = 4094;
	volatile int32_t t129 = 84853;

    t129 = ((x633+(x634-x635))!=x636);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x637 = INT64_MAX;
	volatile int32_t x638 = -1128;
	int8_t x639 = -4;
	uint32_t x640 = UINT32_MAX;

    t130 = ((x637+(x638-x639))!=x640);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x641 = -1446;
	uint8_t x642 = 42U;
	int8_t x643 = INT8_MAX;
	volatile uint8_t x644 = 56U;

    t131 = ((x641+(x642-x643))!=x644);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x645 = 98409852237206466LLU;
	int8_t x646 = -1;
	uint8_t x647 = 11U;
	static int8_t x648 = 0;
	volatile int32_t t132 = -3119829;

    t132 = ((x645+(x646-x647))!=x648);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x649 = 564U;
	volatile int16_t x650 = 1833;
	static volatile int16_t x651 = 2054;
	volatile uint64_t x652 = UINT64_MAX;
	int32_t t133 = 136100382;

    t133 = ((x649+(x650-x651))!=x652);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x653 = -12;
	int8_t x654 = -25;
	static int64_t x656 = INT64_MIN;

    t134 = ((x653+(x654-x655))!=x656);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x658 = 248052506LLU;
	int16_t x659 = 3367;
	volatile int32_t x660 = -10940918;
	volatile int32_t t135 = 43640269;

    t135 = ((x657+(x658-x659))!=x660);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x661 = UINT32_MAX;
	static volatile int16_t x662 = INT16_MIN;
	static int8_t x664 = INT8_MIN;
	volatile int32_t t136 = -1808866;

    t136 = ((x661+(x662-x663))!=x664);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x666 = -56;
	int32_t x667 = -214627296;
	uint32_t x668 = 364U;
	volatile int32_t t137 = -138581;

    t137 = ((x665+(x666-x667))!=x668);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x669 = INT8_MIN;
	volatile uint64_t x670 = 1730797830605286667LLU;
	int16_t x672 = -1;

    t138 = ((x669+(x670-x671))!=x672);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = INT64_MIN;
	uint64_t x675 = 19507283LLU;
	int32_t x676 = -1;

    t139 = ((x673+(x674-x675))!=x676);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x677 = 4184024777800LLU;
	static volatile int8_t x678 = 1;
	int32_t x679 = -197932512;
	uint32_t x680 = 87768U;
	int32_t t140 = 6;

    t140 = ((x677+(x678-x679))!=x680);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x681 = INT16_MAX;
	uint8_t x682 = 3U;
	uint32_t x683 = 2024341U;
	volatile int16_t x684 = INT16_MAX;
	volatile int32_t t141 = 14;

    t141 = ((x681+(x682-x683))!=x684);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x686 = 11676U;
	uint64_t x687 = 738826LLU;
	volatile int32_t x688 = 16303141;
	int32_t t142 = 15223;

    t142 = ((x685+(x686-x687))!=x688);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x689 = 356775585U;
	int32_t x690 = INT32_MAX;
	uint64_t x691 = 6602677719030638671LLU;
	static volatile uint16_t x692 = 549U;
	int32_t t143 = 16325;

    t143 = ((x689+(x690-x691))!=x692);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x693 = -13;
	int8_t x694 = INT8_MIN;
	int64_t x695 = -1LL;
	static volatile int32_t x696 = 362245;
	int32_t t144 = -93;

    t144 = ((x693+(x694-x695))!=x696);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x699 = 10872979423794433LLU;
	int8_t x700 = -6;

    t145 = ((x697+(x698-x699))!=x700);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x701 = INT32_MAX;
	static volatile int8_t x702 = INT8_MIN;
	uint8_t x704 = UINT8_MAX;
	int32_t t146 = -1421556;

    t146 = ((x701+(x702-x703))!=x704);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x705 = 24503996;
	int32_t x706 = 127653;
	uint32_t x707 = 4U;
	int64_t x708 = INT64_MIN;
	volatile int32_t t147 = -28857202;

    t147 = ((x705+(x706-x707))!=x708);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x709 = -5761LL;
	int8_t x710 = INT8_MIN;
	int64_t x712 = INT64_MIN;
	int32_t t148 = -42;

    t148 = ((x709+(x710-x711))!=x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x713 = INT16_MIN;
	static int64_t x714 = INT64_MAX;
	volatile int8_t x716 = 54;

    t149 = ((x713+(x714-x715))!=x716);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x725 = INT16_MAX;
	static int64_t x726 = 1701420556916LL;
	volatile uint8_t x727 = 1U;
	static int64_t x728 = -12835321583389LL;

    t150 = ((x725+(x726-x727))!=x728);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x733 = 1U;
	uint16_t x735 = UINT16_MAX;
	int32_t x736 = 1;
	volatile int32_t t151 = 18614;

    t151 = ((x733+(x734-x735))!=x736);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x738 = 5;
	int16_t x739 = INT16_MIN;
	int16_t x740 = -1;
	int32_t t152 = 20;

    t152 = ((x737+(x738-x739))!=x740);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x741 = INT8_MIN;
	volatile int8_t x742 = INT8_MIN;
	volatile int64_t x743 = INT64_MIN;
	int8_t x744 = INT8_MIN;
	int32_t t153 = 95437285;

    t153 = ((x741+(x742-x743))!=x744);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x745 = -1;
	int16_t x746 = 80;
	int64_t x748 = 0LL;

    t154 = ((x745+(x746-x747))!=x748);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x750 = -1;
	int64_t x751 = -3669337015956113LL;
	int32_t t155 = -868989;

    t155 = ((x749+(x750-x751))!=x752);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x753 = 4322;
	uint32_t x754 = 3U;
	int64_t x756 = INT64_MIN;
	int32_t t156 = -13199130;

    t156 = ((x753+(x754-x755))!=x756);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x762 = 3U;
	uint64_t x763 = UINT64_MAX;
	int8_t x764 = INT8_MIN;
	volatile int32_t t157 = 762578477;

    t157 = ((x761+(x762-x763))!=x764);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = 1;
	int32_t x783 = -562;

    t158 = ((x781+(x782-x783))!=x784);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x785 = -440;
	volatile int16_t x786 = -1;
	int64_t x787 = INT64_MIN;
	int8_t x788 = -48;
	int32_t t159 = -13;

    t159 = ((x785+(x786-x787))!=x788);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x789 = 2067709U;
	volatile int16_t x790 = 11717;
	volatile int8_t x791 = -1;
	volatile uint32_t x792 = 374484U;
	static volatile int32_t t160 = 72539022;

    t160 = ((x789+(x790-x791))!=x792);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x793 = INT8_MAX;
	volatile int8_t x794 = -1;
	int16_t x795 = -1;
	int8_t x796 = 0;

    t161 = ((x793+(x794-x795))!=x796);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x797 = 353U;
	volatile int16_t x798 = INT16_MAX;
	uint16_t x799 = UINT16_MAX;
	int32_t t162 = -16209;

    t162 = ((x797+(x798-x799))!=x800);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x802 = UINT32_MAX;
	int64_t x803 = -1LL;

    t163 = ((x801+(x802-x803))!=x804);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x809 = INT16_MIN;
	uint64_t x811 = 3964096LLU;
	int64_t x812 = INT64_MIN;

    t164 = ((x809+(x810-x811))!=x812);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x813 = INT16_MIN;
	static int8_t x814 = INT8_MIN;
	uint32_t x815 = 360360252U;
	int64_t x816 = 11048LL;
	static int32_t t165 = -3108793;

    t165 = ((x813+(x814-x815))!=x816);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x822 = INT8_MAX;
	static int64_t x823 = -162925297LL;
	volatile int8_t x824 = INT8_MIN;
	volatile int32_t t166 = -293;

    t166 = ((x821+(x822-x823))!=x824);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x830 = 136LLU;
	volatile int16_t x831 = 185;
	volatile int32_t t167 = 136581;

    t167 = ((x829+(x830-x831))!=x832);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x833 = 4282;
	static int32_t x834 = -1;
	volatile int8_t x835 = INT8_MIN;
	uint64_t x836 = 7195LLU;
	volatile int32_t t168 = -2618310;

    t168 = ((x833+(x834-x835))!=x836);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x837 = 1094407641U;
	int64_t x838 = -28572143LL;
	volatile uint64_t x839 = UINT64_MAX;
	static volatile uint16_t x840 = 1428U;

    t169 = ((x837+(x838-x839))!=x840);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x841 = 18400LLU;
	int16_t x842 = INT16_MIN;
	static int64_t x843 = INT64_MIN;
	static volatile int32_t x844 = -56163000;
	volatile int32_t t170 = -4434975;

    t170 = ((x841+(x842-x843))!=x844);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x846 = -1LL;
	int32_t x847 = INT32_MAX;
	uint8_t x848 = 126U;
	volatile int32_t t171 = -9;

    t171 = ((x845+(x846-x847))!=x848);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x849 = -10;
	int16_t x851 = -98;
	volatile int32_t t172 = 0;

    t172 = ((x849+(x850-x851))!=x852);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x854 = INT16_MIN;
	int64_t x855 = INT64_MIN;
	int16_t x856 = -3242;
	int32_t t173 = 3;

    t173 = ((x853+(x854-x855))!=x856);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x861 = UINT64_MAX;
	int32_t x862 = -1;
	int16_t x863 = INT16_MIN;
	volatile int8_t x864 = 44;
	static int32_t t174 = 3117895;

    t174 = ((x861+(x862-x863))!=x864);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x870 = -1;
	uint16_t x871 = 3271U;
	static int64_t x872 = -3672609907449069198LL;
	static volatile int32_t t175 = -71942;

    t175 = ((x869+(x870-x871))!=x872);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x873 = 7;
	volatile uint32_t x874 = 10371U;
	int8_t x875 = -6;
	int16_t x876 = -1;

    t176 = ((x873+(x874-x875))!=x876);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x877 = INT64_MIN;
	uint64_t x878 = 5684798657978LLU;
	int32_t x880 = INT32_MIN;
	int32_t t177 = -460925;

    t177 = ((x877+(x878-x879))!=x880);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x881 = UINT32_MAX;
	uint32_t x882 = 396U;
	uint64_t x883 = 2LLU;
	int32_t x884 = -1;
	static volatile int32_t t178 = 72;

    t178 = ((x881+(x882-x883))!=x884);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x886 = INT32_MIN;
	int32_t x887 = INT32_MIN;
	static int64_t x888 = INT64_MIN;
	int32_t t179 = 18267576;

    t179 = ((x885+(x886-x887))!=x888);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x897 = 107393LL;
	int64_t x900 = -1LL;

    t180 = ((x897+(x898-x899))!=x900);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x901 = 28U;
	uint32_t x903 = 8969U;
	int32_t x904 = INT32_MIN;
	int32_t t181 = -26;

    t181 = ((x901+(x902-x903))!=x904);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x905 = INT8_MIN;
	int64_t x906 = 1LL;
	uint8_t x908 = 81U;
	volatile int32_t t182 = 87;

    t182 = ((x905+(x906-x907))!=x908);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x913 = INT32_MAX;
	uint64_t x914 = UINT64_MAX;
	int64_t x916 = INT64_MAX;
	static int32_t t183 = 2;

    t183 = ((x913+(x914-x915))!=x916);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x917 = 1U;
	volatile uint64_t x919 = UINT64_MAX;
	int16_t x920 = -1;
	int32_t t184 = -54728;

    t184 = ((x917+(x918-x919))!=x920);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x925 = 3U;
	int8_t x926 = INT8_MIN;
	volatile uint16_t x927 = 1U;
	static int64_t x928 = 257418LL;
	volatile int32_t t185 = 208761;

    t185 = ((x925+(x926-x927))!=x928);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x929 = INT8_MIN;
	int64_t x930 = INT64_MAX;
	uint64_t x931 = UINT64_MAX;
	int32_t x932 = INT32_MIN;
	volatile int32_t t186 = 127;

    t186 = ((x929+(x930-x931))!=x932);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x933 = INT32_MIN;
	int32_t x934 = -1;
	int32_t x935 = -1;
	uint64_t x936 = UINT64_MAX;
	int32_t t187 = 5393717;

    t187 = ((x933+(x934-x935))!=x936);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x937 = INT16_MAX;
	volatile int32_t x938 = -1;
	int8_t x939 = -1;
	int32_t x940 = -1;
	static volatile int32_t t188 = -131196281;

    t188 = ((x937+(x938-x939))!=x940);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x943 = UINT64_MAX;
	volatile int8_t x944 = INT8_MIN;
	volatile int32_t t189 = 22585;

    t189 = ((x941+(x942-x943))!=x944);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x945 = UINT64_MAX;
	volatile uint64_t x946 = 165285LLU;
	int32_t x947 = 1471;
	uint16_t x948 = 428U;
	volatile int32_t t190 = -310;

    t190 = ((x945+(x946-x947))!=x948);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x949 = 412390LL;
	static int8_t x950 = INT8_MAX;
	volatile uint64_t x951 = 218398380621811LLU;
	uint8_t x952 = UINT8_MAX;
	int32_t t191 = 21;

    t191 = ((x949+(x950-x951))!=x952);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x953 = INT32_MAX;
	int32_t x954 = 151717332;
	static int64_t x955 = 158418LL;
	volatile int32_t t192 = 568849;

    t192 = ((x953+(x954-x955))!=x956);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x957 = 1;
	uint8_t x958 = UINT8_MAX;
	int8_t x959 = -1;

    t193 = ((x957+(x958-x959))!=x960);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x962 = -1;
	static volatile int8_t x964 = INT8_MIN;
	volatile int32_t t194 = -85165;

    t194 = ((x961+(x962-x963))!=x964);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x966 = INT32_MAX;
	static int64_t x967 = -1LL;

    t195 = ((x965+(x966-x967))!=x968);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x970 = UINT16_MAX;
	volatile int64_t x972 = 79709LL;
	volatile int32_t t196 = -576;

    t196 = ((x969+(x970-x971))!=x972);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x973 = INT8_MAX;
	int64_t x974 = INT64_MIN;
	int32_t t197 = -44;

    t197 = ((x973+(x974-x975))!=x976);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x977 = 493036U;
	int64_t x978 = INT64_MIN;
	int32_t x979 = -31622;
	int8_t x980 = 29;

    t198 = ((x977+(x978-x979))!=x980);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x981 = 13644361LL;
	int64_t x983 = -20853016399324751LL;
	volatile int8_t x984 = -1;
	volatile int32_t t199 = -228;

    t199 = ((x981+(x982-x983))!=x984);

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

