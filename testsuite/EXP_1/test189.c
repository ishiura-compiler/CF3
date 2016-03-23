
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

volatile int32_t x1 = -802;
int16_t x3 = -1344;
static volatile int8_t x4 = 0;
static int16_t x6 = INT16_MAX;
int32_t x12 = -1;
static uint8_t x20 = UINT8_MAX;
static volatile int32_t t4 = -3;
volatile int32_t x21 = -180623343;
static uint16_t x22 = 5807U;
int32_t t5 = -171;
int8_t x30 = 6;
static int64_t x32 = INT64_MIN;
uint8_t x40 = 79U;
static uint32_t x41 = UINT32_MAX;
uint64_t x44 = UINT64_MAX;
uint8_t x47 = 4U;
static int32_t t11 = -5;
volatile int64_t x58 = 1415677315603589043LL;
uint8_t x63 = 1U;
volatile int8_t x65 = 0;
volatile int32_t t16 = 437466;
int32_t x77 = -1;
volatile int32_t t19 = -248;
volatile int16_t x102 = INT16_MIN;
uint64_t x110 = UINT64_MAX;
int8_t x115 = -1;
static volatile uint32_t x116 = 35972U;
uint64_t x118 = UINT64_MAX;
uint8_t x122 = UINT8_MAX;
int8_t x125 = INT8_MAX;
int64_t x126 = INT64_MIN;
uint64_t x128 = UINT64_MAX;
int16_t x129 = INT16_MAX;
int64_t x132 = -1LL;
volatile int32_t t28 = -146386;
int8_t x141 = 0;
static volatile uint32_t x142 = 146098281U;
int8_t x143 = INT8_MIN;
int16_t x144 = INT16_MIN;
uint8_t x158 = UINT8_MAX;
int32_t t35 = -864147;
static int32_t x165 = INT32_MIN;
static uint16_t x168 = 49U;
uint8_t x169 = 3U;
int8_t x172 = 1;
int32_t t38 = 3552;
int8_t x177 = 3;
int16_t x180 = INT16_MIN;
volatile int32_t x185 = 180776646;
uint32_t x186 = UINT32_MAX;
volatile int32_t t41 = 1;
volatile int16_t x194 = INT16_MIN;
static int8_t x195 = INT8_MIN;
static int32_t t42 = 6;
int8_t x204 = INT8_MIN;
volatile int32_t t44 = -1;
volatile int32_t t45 = 54027;
int32_t x214 = INT32_MAX;
int16_t x225 = -1;
volatile int32_t t48 = -5408;
static int32_t x229 = INT32_MIN;
int8_t x231 = INT8_MAX;
static int8_t x233 = INT8_MIN;
static int16_t x236 = -1;
uint64_t x244 = UINT64_MAX;
volatile int32_t t54 = 3989818;
static uint64_t x261 = 8608336104767LLU;
int8_t x263 = 1;
int8_t x273 = 0;
int8_t x276 = -1;
volatile int32_t t58 = 3;
static int32_t x285 = -1;
int64_t x293 = INT64_MIN;
static volatile int8_t x296 = 2;
int32_t t62 = -409;
int32_t t63 = -952;
uint32_t x305 = UINT32_MAX;
volatile int16_t x306 = INT16_MIN;
static uint16_t x310 = 4307U;
volatile int32_t x313 = INT32_MIN;
int32_t x332 = INT32_MAX;
int16_t x337 = INT16_MAX;
int8_t x338 = -1;
uint16_t x347 = 62U;
int8_t x360 = INT8_MIN;
int32_t x361 = -1;
int8_t x362 = INT8_MAX;
int32_t x364 = -3286396;
int16_t x367 = INT16_MIN;
int32_t t79 = -424989879;
volatile uint64_t x374 = UINT64_MAX;
int64_t x375 = -1LL;
int32_t t80 = 59500901;
static int32_t x377 = INT32_MAX;
int32_t x380 = 57487582;
static int16_t x383 = -3152;
int64_t x385 = -2LL;
int8_t x386 = INT8_MIN;
int32_t x387 = -24433;
uint8_t x389 = 1U;
int32_t x391 = INT32_MAX;
int16_t x392 = 9;
static int32_t x395 = 1;
uint64_t x402 = 11106LLU;
volatile int32_t t87 = -64;
volatile uint16_t x417 = 302U;
volatile int32_t x418 = -1;
int32_t t90 = -319533;
uint64_t x432 = UINT64_MAX;
int32_t x436 = -1;
static volatile int64_t x443 = -1490245083227915LL;
volatile int32_t t96 = -6186272;
int8_t x456 = 3;
volatile int32_t t98 = -28372722;
int32_t t99 = -7991112;
static int64_t x463 = INT64_MAX;
int8_t x465 = -1;
volatile int64_t x466 = -765795905147LL;
int64_t x467 = -778077302LL;
volatile int32_t t101 = 574538680;
static volatile uint16_t x496 = UINT16_MAX;
uint32_t x497 = 3949394U;
volatile int32_t t108 = -4;
static uint16_t x512 = 72U;
int32_t x528 = -1584327;
int32_t x529 = INT32_MAX;
int32_t x531 = -1;
uint16_t x535 = 3U;
uint32_t x536 = 108U;
int8_t x543 = 2;
int16_t x550 = INT16_MIN;
int16_t x555 = -1;
uint64_t x557 = UINT64_MAX;
volatile int16_t x560 = INT16_MAX;
static int64_t x567 = INT64_MIN;
uint8_t x569 = UINT8_MAX;
int16_t x577 = -15;
volatile uint32_t x585 = UINT32_MAX;
volatile int64_t x593 = INT64_MIN;
static uint8_t x595 = 13U;
uint64_t x596 = 504LLU;
int32_t t128 = -40;
int16_t x601 = INT16_MIN;
int16_t x622 = -1;
int16_t x623 = INT16_MAX;
uint16_t x636 = UINT16_MAX;
uint32_t x640 = 41213881U;
uint8_t x649 = 14U;
static int8_t x657 = INT8_MAX;
int32_t t139 = 26549854;
int8_t x678 = -5;
int8_t x680 = INT8_MAX;
static int8_t x686 = INT8_MIN;
uint8_t x691 = 28U;
int32_t x695 = INT32_MAX;
int32_t t148 = 687;
uint64_t x713 = 0LLU;
uint64_t x716 = 61097935LLU;
uint64_t x718 = 3314LLU;
volatile int32_t t150 = -251;
int32_t x727 = -2;
static volatile int64_t x729 = -1LL;
volatile int32_t t153 = -1;
volatile int32_t x735 = -3;
uint16_t x738 = 8U;
volatile int32_t t156 = 1;
volatile int16_t x754 = -2;
int32_t t159 = -137;
uint8_t x758 = 9U;
volatile int32_t t160 = -1866;
int32_t x763 = INT32_MAX;
static int8_t x770 = 1;
uint16_t x780 = 127U;
volatile int64_t x784 = INT64_MIN;
int16_t x785 = 13010;
int16_t x787 = -1940;
static uint64_t x788 = 377676LLU;
static volatile int32_t t168 = -1949;
int8_t x812 = 1;
int32_t t173 = 0;
uint64_t x813 = 926979222280LLU;
int32_t x819 = INT32_MIN;
static int32_t t175 = 21096;
uint8_t x826 = UINT8_MAX;
static uint64_t x830 = 14LLU;
volatile int32_t t178 = -1;
uint8_t x833 = 0U;
volatile int32_t x836 = INT32_MAX;
static int32_t t183 = -6281120;
static uint8_t x858 = 5U;
static volatile int32_t t184 = 14921;
int32_t x867 = -29942953;
int32_t x869 = INT32_MIN;
int32_t x872 = INT32_MAX;
volatile uint8_t x877 = 16U;
uint16_t x881 = 709U;
int32_t x886 = INT32_MIN;
int16_t x888 = -1;
static volatile int32_t x890 = -4;
static int16_t x892 = 6169;
volatile uint64_t x893 = 61713418142287388LLU;
int16_t x898 = INT16_MAX;
volatile int64_t x900 = 35033714579LL;
int16_t x902 = INT16_MIN;
uint64_t x903 = 0LLU;
int32_t x906 = INT32_MAX;
static volatile int32_t x907 = INT32_MAX;
int64_t x909 = -13230128LL;
int32_t t197 = 1377;
static volatile uint16_t x915 = 20749U;
volatile int32_t t198 = -100198563;


void f0(void) {
    	uint32_t x2 = 90108U;
	volatile int32_t t0 = 84310379;

    t0 = (((x1+x2)^x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	static uint32_t x7 = UINT32_MAX;
	uint64_t x8 = 139462416LLU;
	volatile int32_t t1 = 57526;

    t1 = (((x5+x6)^x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 10395U;
	volatile int16_t x10 = INT16_MAX;
	static uint32_t x11 = UINT32_MAX;
	volatile int32_t t2 = 5;

    t2 = (((x9+x10)^x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int32_t x14 = 244395;
	int8_t x15 = -1;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -4;

    t3 = (((x13+x14)^x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x19 = INT32_MIN;

    t4 = (((x17+x18)^x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x23 = -1;
	volatile uint64_t x24 = 2063369158537371LLU;

    t5 = (((x21+x22)^x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x29 = 8989238U;
	static int64_t x31 = INT64_MIN;
	volatile int32_t t6 = 3;

    t6 = (((x29+x30)^x31)!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	volatile int16_t x34 = INT16_MAX;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t7 = -254;

    t7 = (((x33+x34)^x35)!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x37 = 27511U;
	volatile int64_t x38 = INT64_MIN;
	static uint8_t x39 = 2U;
	int32_t t8 = -26;

    t8 = (((x37+x38)^x39)!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = 1;
	volatile int32_t x43 = INT32_MAX;
	int32_t t9 = 25157;

    t9 = (((x41+x42)^x43)!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -254;
	int8_t x46 = -3;
	int8_t x48 = -1;
	int32_t t10 = -90218706;

    t10 = (((x45+x46)^x47)!=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = 34;
	int16_t x54 = INT16_MIN;
	static volatile int16_t x55 = 3654;
	uint8_t x56 = UINT8_MAX;

    t11 = (((x53+x54)^x55)!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x57 = -1;
	uint8_t x59 = 13U;
	volatile uint32_t x60 = 0U;
	volatile int32_t t12 = -423164102;

    t12 = (((x57+x58)^x59)!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 10U;
	int32_t x62 = -23;
	volatile int16_t x64 = -1;
	volatile int32_t t13 = -9641;

    t13 = (((x61+x62)^x63)!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = -1;
	uint16_t x67 = 1650U;
	uint64_t x68 = UINT64_MAX;
	int32_t t14 = -578339355;

    t14 = (((x65+x66)^x67)!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = 30U;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = -2;
	int32_t x72 = 2;
	volatile int32_t t15 = -62282577;

    t15 = (((x69+x70)^x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 16581878330680LL;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = -1;
	uint8_t x76 = 0U;

    t16 = (((x73+x74)^x75)!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x78 = 223U;
	static int16_t x79 = INT16_MIN;
	int16_t x80 = -6;
	int32_t t17 = -7882101;

    t17 = (((x77+x78)^x79)!=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 380U;
	volatile int32_t t18 = 2648158;

    t18 = (((x81+x82)^x83)!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 12U;
	static int8_t x88 = 0;

    t19 = (((x85+x86)^x87)!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MAX;
	uint16_t x94 = 1U;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = -1;
	static int32_t t20 = -18;

    t20 = (((x93+x94)^x95)!=x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x97 = 9683U;
	int8_t x98 = -52;
	uint16_t x99 = 1825U;
	int8_t x100 = INT8_MAX;
	volatile int32_t t21 = -5171;

    t21 = (((x97+x98)^x99)!=x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x101 = 1;
	uint16_t x103 = 3226U;
	int64_t x104 = -1LL;
	static volatile int32_t t22 = 8958;

    t22 = (((x101+x102)^x103)!=x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x109 = 103;
	int32_t x111 = -10;
	int16_t x112 = INT16_MIN;
	volatile int32_t t23 = -845;

    t23 = (((x109+x110)^x111)!=x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = INT32_MAX;
	uint64_t x114 = 39488046011LLU;
	volatile int32_t t24 = 20078;

    t24 = (((x113+x114)^x115)!=x116);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x117 = 1LLU;
	int32_t x119 = -1;
	int32_t x120 = -1;
	int32_t t25 = -439;

    t25 = (((x117+x118)^x119)!=x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile uint64_t x124 = 534295418002070LLU;
	static volatile int32_t t26 = 122275;

    t26 = (((x121+x122)^x123)!=x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x127 = INT8_MIN;
	volatile int32_t t27 = -97;

    t27 = (((x125+x126)^x127)!=x128);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x130 = 251U;
	uint32_t x131 = 1U;

    t28 = (((x129+x130)^x131)!=x132);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = 532136999920LLU;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 0U;
	volatile int32_t t29 = 44640;

    t29 = (((x137+x138)^x139)!=x140);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t t30 = 21338;

    t30 = (((x141+x142)^x143)!=x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x145 = 135479U;
	int64_t x146 = INT64_MIN;
	int8_t x147 = 0;
	int64_t x148 = -322847LL;
	static int32_t t31 = -55;

    t31 = (((x145+x146)^x147)!=x148);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = 321;
	uint16_t x150 = 286U;
	int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = 141LLU;
	volatile int32_t t32 = 172;

    t32 = (((x149+x150)^x151)!=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MIN;
	static uint8_t x154 = UINT8_MAX;
	volatile uint64_t x155 = UINT64_MAX;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t33 = -401476;

    t33 = (((x153+x154)^x155)!=x156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x157 = INT8_MIN;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;
	static int32_t t34 = -3;

    t34 = (((x157+x158)^x159)!=x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MAX;
	volatile int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;

    t35 = (((x161+x162)^x163)!=x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x166 = 0;
	uint64_t x167 = 69LLU;
	volatile int32_t t36 = -14;

    t36 = (((x165+x166)^x167)!=x168);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x170 = UINT16_MAX;
	static int32_t x171 = INT32_MIN;
	static volatile int32_t t37 = -12921;

    t37 = (((x169+x170)^x171)!=x172);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x173 = UINT16_MAX;
	volatile int8_t x174 = INT8_MAX;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -2LL;

    t38 = (((x173+x174)^x175)!=x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x178 = 2U;
	uint16_t x179 = 26U;
	int32_t t39 = 47709094;

    t39 = (((x177+x178)^x179)!=x180);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x187 = 12504LLU;
	uint8_t x188 = 117U;
	static volatile int32_t t40 = -4607;

    t40 = (((x185+x186)^x187)!=x188);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x189 = 1242U;
	volatile uint16_t x190 = UINT16_MAX;
	static uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;

    t41 = (((x189+x190)^x191)!=x192);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = -1LL;
	int8_t x196 = INT8_MIN;

    t42 = (((x193+x194)^x195)!=x196);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MAX;
	uint16_t x198 = 392U;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = -1;
	int32_t t43 = -59;

    t43 = (((x197+x198)^x199)!=x200);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = INT64_MIN;
	int32_t x202 = 72967117;
	static uint64_t x203 = UINT64_MAX;

    t44 = (((x201+x202)^x203)!=x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x205 = INT32_MIN;
	volatile int64_t x206 = INT64_MAX;
	static int64_t x207 = -1LL;
	static uint16_t x208 = UINT16_MAX;

    t45 = (((x205+x206)^x207)!=x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = -263;
	int64_t x215 = INT64_MAX;
	uint32_t x216 = 43076889U;
	volatile int32_t t46 = 1966621;

    t46 = (((x213+x214)^x215)!=x216);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x221 = 5325U;
	volatile int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t47 = -3837083;

    t47 = (((x221+x222)^x223)!=x224);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x226 = 918;
	volatile int64_t x227 = 1136LL;
	static int16_t x228 = INT16_MAX;

    t48 = (((x225+x226)^x227)!=x228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x230 = 247LLU;
	volatile uint64_t x232 = 52410477268691549LLU;
	volatile int32_t t49 = -9956295;

    t49 = (((x229+x230)^x231)!=x232);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	static int32_t t50 = -150347177;

    t50 = (((x233+x234)^x235)!=x236);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x237 = 35201U;
	static int64_t x238 = INT64_MIN;
	uint16_t x239 = 3250U;
	int16_t x240 = INT16_MIN;
	volatile int32_t t51 = -12089;

    t51 = (((x237+x238)^x239)!=x240);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x241 = -1LL;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 133U;
	volatile int32_t t52 = 1;

    t52 = (((x241+x242)^x243)!=x244);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x249 = 190483055LLU;
	static uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	static int32_t t53 = 7247;

    t53 = (((x249+x250)^x251)!=x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x253 = UINT64_MAX;
	uint64_t x254 = 4523530LLU;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;

    t54 = (((x253+x254)^x255)!=x256);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x262 = -6;
	int64_t x264 = -1LL;
	int32_t t55 = 119361638;

    t55 = (((x261+x262)^x263)!=x264);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = UINT64_MAX;
	static int32_t x268 = -41363;
	int32_t t56 = -23506;

    t56 = (((x265+x266)^x267)!=x268);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x274 = INT64_MIN;
	uint8_t x275 = 37U;
	static volatile int32_t t57 = -2684797;

    t57 = (((x273+x274)^x275)!=x276);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x281 = 89758731422LLU;
	uint16_t x282 = 73U;
	uint8_t x283 = UINT8_MAX;
	uint32_t x284 = 44353U;

    t58 = (((x281+x282)^x283)!=x284);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x286 = -1;
	static volatile int32_t x287 = INT32_MIN;
	static int16_t x288 = INT16_MIN;
	int32_t t59 = 52663;

    t59 = (((x285+x286)^x287)!=x288);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x289 = -4914LL;
	int32_t x290 = INT32_MAX;
	static int16_t x291 = 179;
	uint32_t x292 = 120127312U;
	volatile int32_t t60 = 2;

    t60 = (((x289+x290)^x291)!=x292);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 3U;
	int32_t t61 = 45747555;

    t61 = (((x293+x294)^x295)!=x296);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x297 = UINT8_MAX;
	static int8_t x298 = -1;
	uint32_t x299 = 675U;
	uint8_t x300 = 0U;

    t62 = (((x297+x298)^x299)!=x300);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x301 = INT8_MAX;
	uint8_t x302 = 86U;
	static int8_t x303 = INT8_MIN;
	uint16_t x304 = 1558U;

    t63 = (((x301+x302)^x303)!=x304);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x307 = -97647451410290LL;
	int16_t x308 = -5;
	static volatile int32_t t64 = 588985714;

    t64 = (((x305+x306)^x307)!=x308);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x309 = -1;
	volatile int64_t x311 = 623650707017494669LL;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t65 = -26739;

    t65 = (((x309+x310)^x311)!=x312);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x314 = 15U;
	uint8_t x315 = 0U;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t66 = -501702733;

    t66 = (((x313+x314)^x315)!=x316);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x317 = 113521322089597371LL;
	static int8_t x318 = -2;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	volatile int32_t t67 = 344;

    t67 = (((x317+x318)^x319)!=x320);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x321 = UINT16_MAX;
	static int16_t x322 = INT16_MAX;
	volatile int16_t x323 = INT16_MAX;
	int16_t x324 = -1;
	volatile int32_t t68 = 14;

    t68 = (((x321+x322)^x323)!=x324);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x325 = 1725LL;
	int64_t x326 = -49090439712081LL;
	static int32_t x327 = -1;
	uint32_t x328 = 14064098U;
	int32_t t69 = -3337;

    t69 = (((x325+x326)^x327)!=x328);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = -7;
	static int64_t x330 = INT64_MAX;
	int8_t x331 = -1;
	int32_t t70 = 9123349;

    t70 = (((x329+x330)^x331)!=x332);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x339 = -1;
	static volatile uint32_t x340 = UINT32_MAX;
	int32_t t71 = 0;

    t71 = (((x337+x338)^x339)!=x340);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x341 = UINT32_MAX;
	int32_t x342 = -1;
	uint32_t x343 = 122624763U;
	int64_t x344 = -1LL;
	static volatile int32_t t72 = -7951;

    t72 = (((x341+x342)^x343)!=x344);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MAX;
	volatile int64_t x348 = 3027862572065LL;
	volatile int32_t t73 = -173603227;

    t73 = (((x345+x346)^x347)!=x348);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MAX;
	static int16_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	int64_t x352 = 4218309567LL;
	int32_t t74 = 781776505;

    t74 = (((x349+x350)^x351)!=x352);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x353 = -1LL;
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t75 = -365;

    t75 = (((x353+x354)^x355)!=x356);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MIN;
	volatile int32_t x358 = 4;
	volatile uint64_t x359 = 8909237873941134916LLU;
	int32_t t76 = -13890;

    t76 = (((x357+x358)^x359)!=x360);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x363 = -1;
	int32_t t77 = -1015388;

    t77 = (((x361+x362)^x363)!=x364);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x365 = 10U;
	static uint8_t x366 = UINT8_MAX;
	uint64_t x368 = 34692237512463LLU;
	volatile int32_t t78 = -91996;

    t78 = (((x365+x366)^x367)!=x368);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x369 = -1;
	static int16_t x370 = -93;
	int16_t x371 = -1;
	int32_t x372 = -1;

    t79 = (((x369+x370)^x371)!=x372);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = -1;
	static int64_t x376 = -4LL;

    t80 = (((x373+x374)^x375)!=x376);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x378 = INT16_MIN;
	int64_t x379 = 2895LL;
	int32_t t81 = 634379962;

    t81 = (((x377+x378)^x379)!=x380);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x381 = INT16_MAX;
	uint8_t x382 = 31U;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t82 = -1017595;

    t82 = (((x381+x382)^x383)!=x384);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x388 = 1904LLU;
	volatile int32_t t83 = -4574319;

    t83 = (((x385+x386)^x387)!=x388);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x390 = UINT8_MAX;
	int32_t t84 = 51084;

    t84 = (((x389+x390)^x391)!=x392);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x393 = UINT32_MAX;
	int8_t x394 = -47;
	int32_t x396 = 1;
	volatile int32_t t85 = 711422675;

    t85 = (((x393+x394)^x395)!=x396);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x397 = 905975024U;
	static uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	static uint16_t x400 = 60U;
	volatile int32_t t86 = -6228807;

    t86 = (((x397+x398)^x399)!=x400);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x401 = INT64_MAX;
	uint32_t x403 = 6U;
	int8_t x404 = INT8_MAX;

    t87 = (((x401+x402)^x403)!=x404);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = 26546LL;
	volatile uint16_t x406 = 79U;
	static int8_t x407 = -1;
	uint64_t x408 = 985LLU;
	volatile int32_t t88 = 15410841;

    t88 = (((x405+x406)^x407)!=x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x413 = UINT8_MAX;
	static uint16_t x414 = 1U;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = 89U;
	int32_t t89 = 12;

    t89 = (((x413+x414)^x415)!=x416);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x419 = 153378484;
	int64_t x420 = 8LL;

    t90 = (((x417+x418)^x419)!=x420);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = 5091113862306833LLU;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t91 = -63459548;

    t91 = (((x421+x422)^x423)!=x424);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MIN;
	static int64_t x428 = INT64_MIN;
	volatile int32_t t92 = 140439;

    t92 = (((x425+x426)^x427)!=x428);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x429 = UINT32_MAX;
	static int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MIN;
	static int32_t t93 = -407579725;

    t93 = (((x429+x430)^x431)!=x432);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x433 = 532776082U;
	static volatile int8_t x434 = 1;
	volatile int8_t x435 = 5;
	static volatile int32_t t94 = -267082;

    t94 = (((x433+x434)^x435)!=x436);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x441 = 60122672U;
	volatile int8_t x442 = 59;
	static volatile int16_t x444 = -1;
	int32_t t95 = 4007641;

    t95 = (((x441+x442)^x443)!=x444);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = UINT16_MAX;
	uint16_t x447 = 474U;
	int16_t x448 = -1;

    t96 = (((x445+x446)^x447)!=x448);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x449 = -1;
	static uint64_t x450 = 1457454218733LLU;
	uint32_t x451 = 73U;
	uint32_t x452 = 163699U;
	int32_t t97 = 108396588;

    t97 = (((x449+x450)^x451)!=x452);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x453 = INT16_MIN;
	static int16_t x454 = INT16_MIN;
	uint32_t x455 = UINT32_MAX;

    t98 = (((x453+x454)^x455)!=x456);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x457 = -28;
	int64_t x458 = 102079247913LL;
	int32_t x459 = -1;
	volatile int16_t x460 = -593;

    t99 = (((x457+x458)^x459)!=x460);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int16_t x464 = INT16_MAX;
	int32_t t100 = -16679956;

    t100 = (((x461+x462)^x463)!=x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x468 = 2U;

    t101 = (((x465+x466)^x467)!=x468);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x469 = 1;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = UINT8_MAX;
	static int8_t x472 = -1;
	int32_t t102 = 6973;

    t102 = (((x469+x470)^x471)!=x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x473 = INT64_MIN;
	uint32_t x474 = UINT32_MAX;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t103 = -1;

    t103 = (((x473+x474)^x475)!=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x477 = 46LL;
	static int32_t x478 = 13;
	int32_t x479 = INT32_MAX;
	static int8_t x480 = -3;
	int32_t t104 = 15953;

    t104 = (((x477+x478)^x479)!=x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x485 = 0U;
	int32_t x486 = INT32_MIN;
	static volatile uint64_t x487 = UINT64_MAX;
	static int8_t x488 = INT8_MAX;
	volatile int32_t t105 = 873;

    t105 = (((x485+x486)^x487)!=x488);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x489 = -1LL;
	int16_t x490 = -1;
	uint8_t x491 = UINT8_MAX;
	int8_t x492 = 7;
	volatile int32_t t106 = -146852270;

    t106 = (((x489+x490)^x491)!=x492);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x493 = 551U;
	int8_t x494 = -57;
	uint8_t x495 = UINT8_MAX;
	volatile int32_t t107 = 1279443;

    t107 = (((x493+x494)^x495)!=x496);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x498 = INT16_MIN;
	int32_t x499 = -1;
	static uint16_t x500 = 0U;

    t108 = (((x497+x498)^x499)!=x500);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x505 = 57337996;
	static int32_t x506 = -1;
	int64_t x507 = 1366188136003480LL;
	int8_t x508 = -1;
	int32_t t109 = -997610621;

    t109 = (((x505+x506)^x507)!=x508);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x509 = -1LL;
	static int16_t x510 = -80;
	int64_t x511 = 401608774LL;
	static int32_t t110 = 84181489;

    t110 = (((x509+x510)^x511)!=x512);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x513 = -89;
	int8_t x514 = -5;
	static volatile uint32_t x515 = 103U;
	volatile uint64_t x516 = 1702958LLU;
	int32_t t111 = -1;

    t111 = (((x513+x514)^x515)!=x516);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x521 = 1544549LLU;
	uint8_t x522 = UINT8_MAX;
	uint32_t x523 = 1U;
	int64_t x524 = 53294LL;
	volatile int32_t t112 = 1;

    t112 = (((x521+x522)^x523)!=x524);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x525 = -3;
	static uint64_t x526 = 3307404754475444LLU;
	uint16_t x527 = UINT16_MAX;
	int32_t t113 = -52754689;

    t113 = (((x525+x526)^x527)!=x528);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x530 = -131915039618LL;
	uint16_t x532 = UINT16_MAX;
	int32_t t114 = 2901052;

    t114 = (((x529+x530)^x531)!=x532);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x533 = UINT64_MAX;
	volatile int16_t x534 = 1;
	int32_t t115 = 1735076;

    t115 = (((x533+x534)^x535)!=x536);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x537 = 9U;
	static uint16_t x538 = UINT16_MAX;
	uint16_t x539 = UINT16_MAX;
	int32_t x540 = 516122267;
	volatile int32_t t116 = -12788406;

    t116 = (((x537+x538)^x539)!=x540);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x541 = 429U;
	int16_t x542 = 14279;
	int8_t x544 = -1;
	volatile int32_t t117 = 192;

    t117 = (((x541+x542)^x543)!=x544);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x549 = 120318255271578LLU;
	int16_t x551 = INT16_MAX;
	volatile int64_t x552 = -1LL;
	int32_t t118 = 167012;

    t118 = (((x549+x550)^x551)!=x552);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x553 = UINT32_MAX;
	static volatile uint8_t x554 = 0U;
	volatile int32_t x556 = -1;
	volatile int32_t t119 = 4145972;

    t119 = (((x553+x554)^x555)!=x556);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x558 = UINT8_MAX;
	int32_t x559 = -1;
	int32_t t120 = -45980108;

    t120 = (((x557+x558)^x559)!=x560);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x561 = UINT32_MAX;
	uint16_t x562 = 7U;
	static int16_t x563 = INT16_MIN;
	int8_t x564 = -60;
	volatile int32_t t121 = 1440734;

    t121 = (((x561+x562)^x563)!=x564);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x565 = 26923U;
	int32_t x566 = INT32_MAX;
	static volatile int8_t x568 = INT8_MAX;
	int32_t t122 = -15050554;

    t122 = (((x565+x566)^x567)!=x568);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x570 = 1634808299LLU;
	static int32_t x571 = 25202;
	int32_t x572 = 146856553;
	int32_t t123 = 12659;

    t123 = (((x569+x570)^x571)!=x572);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x578 = 64918899901104LLU;
	uint64_t x579 = UINT64_MAX;
	int32_t x580 = INT32_MAX;
	int32_t t124 = 4;

    t124 = (((x577+x578)^x579)!=x580);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x581 = 6;
	uint16_t x582 = 0U;
	int16_t x583 = -1;
	int8_t x584 = 13;
	volatile int32_t t125 = -250584212;

    t125 = (((x581+x582)^x583)!=x584);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x586 = INT16_MAX;
	int32_t x587 = -1;
	uint16_t x588 = 1U;
	int32_t t126 = -3840593;

    t126 = (((x585+x586)^x587)!=x588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x589 = 4U;
	volatile uint16_t x590 = 0U;
	int8_t x591 = INT8_MAX;
	uint64_t x592 = 1916589106330233901LLU;
	int32_t t127 = -560973306;

    t127 = (((x589+x590)^x591)!=x592);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x594 = 2U;

    t128 = (((x593+x594)^x595)!=x596);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x602 = -1;
	int64_t x603 = INT64_MAX;
	int32_t x604 = -16631;
	static int32_t t129 = -1;

    t129 = (((x601+x602)^x603)!=x604);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x605 = INT64_MIN;
	uint8_t x606 = 21U;
	int32_t x607 = INT32_MIN;
	int32_t x608 = INT32_MIN;
	int32_t t130 = 6258371;

    t130 = (((x605+x606)^x607)!=x608);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x613 = -8LL;
	int64_t x614 = INT64_MAX;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = 0U;
	static int32_t t131 = 272;

    t131 = (((x613+x614)^x615)!=x616);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x621 = -7;
	int32_t x624 = INT32_MAX;
	int32_t t132 = 1786734;

    t132 = (((x621+x622)^x623)!=x624);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x629 = 12695U;
	int32_t x630 = -1;
	int8_t x631 = -1;
	volatile int32_t x632 = INT32_MIN;
	volatile int32_t t133 = -3016;

    t133 = (((x629+x630)^x631)!=x632);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x633 = UINT8_MAX;
	int64_t x634 = 1359978LL;
	uint32_t x635 = UINT32_MAX;
	int32_t t134 = 19;

    t134 = (((x633+x634)^x635)!=x636);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x637 = INT32_MIN;
	uint8_t x638 = 0U;
	uint32_t x639 = UINT32_MAX;
	int32_t t135 = 95534;

    t135 = (((x637+x638)^x639)!=x640);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x641 = 97335LLU;
	uint8_t x642 = UINT8_MAX;
	int32_t x643 = -1;
	int32_t x644 = 0;
	volatile int32_t t136 = 0;

    t136 = (((x641+x642)^x643)!=x644);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x645 = -1;
	int8_t x646 = INT8_MIN;
	uint8_t x647 = 1U;
	uint32_t x648 = 48U;
	static int32_t t137 = 14171;

    t137 = (((x645+x646)^x647)!=x648);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x650 = INT32_MIN;
	uint8_t x651 = 13U;
	volatile int64_t x652 = INT64_MIN;
	static volatile int32_t t138 = 12233;

    t138 = (((x649+x650)^x651)!=x652);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x658 = -1;
	int16_t x659 = INT16_MIN;
	int32_t x660 = INT32_MIN;

    t139 = (((x657+x658)^x659)!=x660);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x665 = 46U;
	volatile uint8_t x666 = 61U;
	static uint8_t x667 = 0U;
	volatile int64_t x668 = INT64_MIN;
	volatile int32_t t140 = 2548023;

    t140 = (((x665+x666)^x667)!=x668);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x669 = -1LL;
	volatile int32_t x670 = INT32_MIN;
	int16_t x671 = 0;
	static int32_t x672 = INT32_MIN;
	static volatile int32_t t141 = -173743;

    t141 = (((x669+x670)^x671)!=x672);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x677 = 10380;
	int64_t x679 = INT64_MIN;
	int32_t t142 = -504;

    t142 = (((x677+x678)^x679)!=x680);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x685 = -1LL;
	uint16_t x687 = 1369U;
	static volatile int32_t x688 = 436875;
	int32_t t143 = 764144;

    t143 = (((x685+x686)^x687)!=x688);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x689 = 32U;
	static int16_t x690 = -130;
	volatile int16_t x692 = INT16_MIN;
	int32_t t144 = 206;

    t144 = (((x689+x690)^x691)!=x692);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x693 = 16619U;
	volatile uint32_t x694 = 6U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t145 = 1;

    t145 = (((x693+x694)^x695)!=x696);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x697 = 2942U;
	int32_t x698 = INT32_MIN;
	int64_t x699 = INT64_MAX;
	volatile int16_t x700 = -1;
	int32_t t146 = -1;

    t146 = (((x697+x698)^x699)!=x700);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x705 = -1;
	volatile uint64_t x706 = 56431LLU;
	volatile int8_t x707 = -26;
	uint8_t x708 = 0U;
	int32_t t147 = 87;

    t147 = (((x705+x706)^x707)!=x708);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x709 = INT8_MAX;
	int16_t x710 = INT16_MAX;
	volatile uint8_t x711 = 27U;
	uint8_t x712 = UINT8_MAX;

    t148 = (((x709+x710)^x711)!=x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x714 = -1LL;
	volatile int16_t x715 = INT16_MIN;
	static volatile int32_t t149 = -512069756;

    t149 = (((x713+x714)^x715)!=x716);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x717 = UINT64_MAX;
	volatile int32_t x719 = INT32_MIN;
	volatile uint8_t x720 = 0U;

    t150 = (((x717+x718)^x719)!=x720);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x721 = UINT32_MAX;
	uint8_t x722 = 2U;
	int16_t x723 = -1;
	int32_t x724 = 0;
	static int32_t t151 = -10;

    t151 = (((x721+x722)^x723)!=x724);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x725 = 3U;
	static uint8_t x726 = 17U;
	volatile uint16_t x728 = 9444U;
	volatile int32_t t152 = -149582;

    t152 = (((x725+x726)^x727)!=x728);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x730 = UINT8_MAX;
	static int16_t x731 = -264;
	int16_t x732 = INT16_MAX;

    t153 = (((x729+x730)^x731)!=x732);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x733 = 11435;
	volatile int16_t x734 = INT16_MAX;
	int8_t x736 = INT8_MIN;
	volatile int32_t t154 = 5;

    t154 = (((x733+x734)^x735)!=x736);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x737 = 25824006;
	int32_t x739 = INT32_MAX;
	int16_t x740 = -3178;
	int32_t t155 = 2194;

    t155 = (((x737+x738)^x739)!=x740);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x741 = UINT64_MAX;
	int16_t x742 = -1;
	int64_t x743 = INT64_MIN;
	static int8_t x744 = INT8_MAX;

    t156 = (((x741+x742)^x743)!=x744);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x745 = 0;
	int8_t x746 = -22;
	volatile int32_t x747 = 101012;
	volatile int64_t x748 = INT64_MIN;
	int32_t t157 = -1509;

    t157 = (((x745+x746)^x747)!=x748);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x749 = INT16_MAX;
	int32_t x750 = 85336879;
	static int8_t x751 = INT8_MIN;
	uint64_t x752 = 15LLU;
	volatile int32_t t158 = -1;

    t158 = (((x749+x750)^x751)!=x752);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x753 = 57195532564666592LLU;
	int32_t x755 = INT32_MIN;
	int16_t x756 = INT16_MAX;

    t159 = (((x753+x754)^x755)!=x756);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x757 = INT8_MIN;
	uint16_t x759 = 14615U;
	uint8_t x760 = 29U;

    t160 = (((x757+x758)^x759)!=x760);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x762 = 49811035;
	int16_t x764 = INT16_MIN;
	static volatile int32_t t161 = 112;

    t161 = (((x761+x762)^x763)!=x764);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x765 = 65055879U;
	volatile uint16_t x766 = 6U;
	int32_t x767 = INT32_MAX;
	int16_t x768 = -41;
	volatile int32_t t162 = 219785;

    t162 = (((x765+x766)^x767)!=x768);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x769 = -1;
	int64_t x771 = -625222LL;
	static uint16_t x772 = UINT16_MAX;
	static int32_t t163 = -2138;

    t163 = (((x769+x770)^x771)!=x772);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x773 = INT64_MAX;
	int64_t x774 = -1LL;
	int64_t x775 = INT64_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t164 = 26922544;

    t164 = (((x773+x774)^x775)!=x776);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = -1;
	static int16_t x778 = 1;
	int8_t x779 = -1;
	static volatile int32_t t165 = 201139;

    t165 = (((x777+x778)^x779)!=x780);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x781 = 11631LL;
	static int32_t x782 = -3484909;
	int16_t x783 = INT16_MAX;
	int32_t t166 = -340303032;

    t166 = (((x781+x782)^x783)!=x784);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x786 = 15U;
	int32_t t167 = 47965165;

    t167 = (((x785+x786)^x787)!=x788);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x789 = 15;
	int32_t x790 = 4;
	int32_t x791 = INT32_MIN;
	static volatile int16_t x792 = INT16_MIN;

    t168 = (((x789+x790)^x791)!=x792);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = INT32_MIN;
	uint32_t x794 = UINT32_MAX;
	int64_t x795 = 37671053844041LL;
	static uint64_t x796 = 1556797277476738695LLU;
	volatile int32_t t169 = -237443;

    t169 = (((x793+x794)^x795)!=x796);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x797 = 28151074382LLU;
	int16_t x798 = -46;
	uint8_t x799 = UINT8_MAX;
	volatile int64_t x800 = -1LL;
	int32_t t170 = 936983446;

    t170 = (((x797+x798)^x799)!=x800);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x801 = 1;
	int32_t x802 = INT32_MIN;
	volatile int8_t x803 = -1;
	int16_t x804 = INT16_MAX;
	volatile int32_t t171 = -185354;

    t171 = (((x801+x802)^x803)!=x804);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = 7;
	static int8_t x806 = INT8_MAX;
	int16_t x807 = INT16_MAX;
	static int32_t x808 = 112;
	int32_t t172 = 55;

    t172 = (((x805+x806)^x807)!=x808);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x809 = -1;
	volatile int64_t x810 = -92944LL;
	uint32_t x811 = 1933784080U;

    t173 = (((x809+x810)^x811)!=x812);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x814 = -1;
	int32_t x815 = INT32_MIN;
	int64_t x816 = -1LL;
	static int32_t t174 = 13397047;

    t174 = (((x813+x814)^x815)!=x816);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x817 = INT16_MAX;
	int32_t x818 = -1;
	int32_t x820 = INT32_MIN;

    t175 = (((x817+x818)^x819)!=x820);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x821 = INT64_MIN;
	static volatile uint32_t x822 = 348084655U;
	volatile int32_t x823 = 922;
	uint8_t x824 = 28U;
	volatile int32_t t176 = -13;

    t176 = (((x821+x822)^x823)!=x824);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x825 = -476;
	volatile int32_t x827 = -1;
	static uint32_t x828 = 699U;
	int32_t t177 = -35;

    t177 = (((x825+x826)^x827)!=x828);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x829 = 14337559371LLU;
	volatile int8_t x831 = -15;
	int16_t x832 = INT16_MAX;

    t178 = (((x829+x830)^x831)!=x832);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x834 = -1LL;
	int32_t x835 = INT32_MIN;
	int32_t t179 = 2798;

    t179 = (((x833+x834)^x835)!=x836);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x837 = INT8_MIN;
	volatile uint8_t x838 = UINT8_MAX;
	volatile uint16_t x839 = 10492U;
	uint32_t x840 = 112U;
	int32_t t180 = -6804598;

    t180 = (((x837+x838)^x839)!=x840);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x841 = UINT8_MAX;
	int16_t x842 = -18;
	volatile int8_t x843 = 25;
	static uint64_t x844 = UINT64_MAX;
	volatile int32_t t181 = 12;

    t181 = (((x841+x842)^x843)!=x844);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x849 = INT16_MIN;
	volatile int32_t x850 = 0;
	int64_t x851 = -18LL;
	uint16_t x852 = 1U;
	volatile int32_t t182 = -622273;

    t182 = (((x849+x850)^x851)!=x852);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x853 = INT16_MIN;
	static uint64_t x854 = 62631490349LLU;
	int64_t x855 = 2017056705045668570LL;
	int64_t x856 = -162288364363LL;

    t183 = (((x853+x854)^x855)!=x856);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x857 = -1LL;
	uint16_t x859 = 647U;
	int64_t x860 = 17LL;

    t184 = (((x857+x858)^x859)!=x860);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x861 = -1;
	static uint32_t x862 = 7579U;
	static int64_t x863 = INT64_MAX;
	int32_t x864 = 63;
	int32_t t185 = 94636;

    t185 = (((x861+x862)^x863)!=x864);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x865 = UINT64_MAX;
	volatile uint8_t x866 = 5U;
	int32_t x868 = INT32_MAX;
	volatile int32_t t186 = -696299;

    t186 = (((x865+x866)^x867)!=x868);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x870 = 2U;
	uint8_t x871 = 7U;
	volatile int32_t t187 = 651;

    t187 = (((x869+x870)^x871)!=x872);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x873 = -1;
	static volatile int16_t x874 = INT16_MAX;
	uint16_t x875 = 1U;
	static uint64_t x876 = UINT64_MAX;
	int32_t t188 = 126;

    t188 = (((x873+x874)^x875)!=x876);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x878 = 98040818780207562LLU;
	int8_t x879 = INT8_MIN;
	static int64_t x880 = 113320008065842LL;
	volatile int32_t t189 = 1352;

    t189 = (((x877+x878)^x879)!=x880);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x882 = 80;
	int64_t x883 = INT64_MAX;
	int32_t x884 = 5144;
	int32_t t190 = 90;

    t190 = (((x881+x882)^x883)!=x884);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x885 = UINT8_MAX;
	volatile int8_t x887 = INT8_MIN;
	volatile int32_t t191 = 0;

    t191 = (((x885+x886)^x887)!=x888);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x889 = UINT32_MAX;
	int32_t x891 = INT32_MIN;
	volatile int32_t t192 = -23;

    t192 = (((x889+x890)^x891)!=x892);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x894 = 28446372381085435LLU;
	static volatile int64_t x895 = INT64_MAX;
	static uint16_t x896 = UINT16_MAX;
	int32_t t193 = -42913;

    t193 = (((x893+x894)^x895)!=x896);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x897 = -1LL;
	uint16_t x899 = 185U;
	int32_t t194 = 191711;

    t194 = (((x897+x898)^x899)!=x900);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x901 = 5U;
	static volatile int8_t x904 = -1;
	static int32_t t195 = -131086869;

    t195 = (((x901+x902)^x903)!=x904);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x905 = INT8_MIN;
	int64_t x908 = INT64_MIN;
	int32_t t196 = -302;

    t196 = (((x905+x906)^x907)!=x908);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x910 = 35041086810LL;
	volatile uint64_t x911 = UINT64_MAX;
	volatile int16_t x912 = INT16_MIN;

    t197 = (((x909+x910)^x911)!=x912);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x913 = INT8_MAX;
	uint8_t x914 = UINT8_MAX;
	int64_t x916 = 0LL;

    t198 = (((x913+x914)^x915)!=x916);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x921 = -129274949032676LL;
	static uint32_t x922 = 79U;
	static uint16_t x923 = 1780U;
	volatile int16_t x924 = -610;
	volatile int32_t t199 = 4765237;

    t199 = (((x921+x922)^x923)!=x924);

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

