
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

static int32_t x4 = -1;
int8_t x5 = INT8_MIN;
int16_t x6 = INT16_MAX;
int32_t t1 = -215;
volatile int64_t x9 = -3905630LL;
static int16_t x13 = -49;
static int32_t x21 = INT32_MIN;
static uint32_t x23 = 6U;
static volatile int8_t x25 = -1;
int32_t x42 = 12529902;
uint64_t x49 = 3LLU;
volatile int8_t x50 = INT8_MAX;
int32_t t12 = 3865472;
int64_t x56 = INT64_MIN;
uint64_t x57 = UINT64_MAX;
uint64_t x60 = 7356276516LLU;
volatile int32_t t14 = -58;
uint64_t x65 = UINT64_MAX;
volatile int32_t t16 = -21719693;
int8_t x69 = 26;
uint8_t x75 = 0U;
volatile int8_t x76 = -1;
volatile int32_t t18 = 2946361;
int8_t x79 = -1;
static int64_t x80 = -1LL;
static int64_t x84 = -1LL;
static volatile int64_t x86 = INT64_MIN;
uint8_t x87 = UINT8_MAX;
int64_t x97 = -1LL;
int64_t x101 = INT64_MIN;
int16_t x115 = -59;
int64_t x118 = 85070014908LL;
static int32_t t30 = -85709530;
uint8_t x126 = 62U;
int8_t x131 = INT8_MAX;
int32_t x133 = 123293;
int64_t x135 = INT64_MIN;
volatile int32_t t33 = -60960225;
volatile int8_t x143 = INT8_MAX;
static int8_t x147 = -19;
int32_t t36 = -43409;
static int32_t t37 = -71;
static int32_t x157 = INT32_MIN;
volatile int8_t x168 = INT8_MIN;
int32_t t41 = -736009;
uint16_t x173 = UINT16_MAX;
int32_t x175 = INT32_MAX;
static int16_t x177 = INT16_MIN;
volatile int16_t x178 = INT16_MIN;
int32_t x189 = 2158319;
int16_t x191 = -41;
int32_t t47 = 127;
int32_t x193 = INT32_MAX;
int16_t x194 = INT16_MIN;
volatile int32_t x198 = -918;
int32_t x206 = INT32_MIN;
int64_t x216 = -1LL;
static int64_t x223 = INT64_MIN;
volatile int32_t t55 = 1;
int32_t x225 = INT32_MIN;
uint8_t x230 = UINT8_MAX;
volatile int8_t x232 = INT8_MAX;
int8_t x236 = 0;
uint8_t x238 = UINT8_MAX;
int64_t x239 = 30783LL;
static int16_t x248 = -8202;
int32_t t61 = 27224002;
int16_t x251 = 11;
int32_t t62 = 147915467;
volatile int16_t x253 = INT16_MIN;
int8_t x254 = INT8_MIN;
int64_t x259 = INT64_MAX;
static uint32_t x262 = 3295141U;
uint32_t x263 = 1747U;
uint8_t x267 = UINT8_MAX;
static volatile uint64_t x268 = 8123710441477062LLU;
uint16_t x272 = UINT16_MAX;
static int32_t x278 = -1;
static int32_t x279 = -1;
static int8_t x282 = 3;
int8_t x287 = -1;
static uint32_t x307 = 86016U;
static uint16_t x309 = 244U;
volatile int16_t x312 = INT16_MIN;
int8_t x319 = 2;
volatile int32_t t80 = 8;
int64_t x326 = INT64_MAX;
int32_t t81 = 843008;
static int8_t x335 = INT8_MAX;
int8_t x344 = INT8_MIN;
uint32_t x350 = 13854963U;
int8_t x356 = INT8_MAX;
int32_t t90 = 6686;
static uint16_t x366 = UINT16_MAX;
uint8_t x367 = 87U;
static int32_t t91 = -150;
volatile int32_t x377 = 365501;
int32_t x378 = INT32_MIN;
static int32_t t95 = 71;
uint32_t x398 = 13148U;
uint16_t x400 = UINT16_MAX;
int8_t x406 = INT8_MIN;
static int32_t x408 = -64681;
uint8_t x409 = 46U;
int32_t t102 = 9690028;
int32_t t104 = 7068;
volatile uint32_t x423 = 1240559070U;
volatile int64_t x429 = -1LL;
int32_t x432 = INT32_MIN;
int32_t x451 = 101;
int32_t x453 = -144;
volatile int64_t x454 = -1LL;
volatile int32_t t113 = 23196;
static int8_t x457 = -1;
uint32_t x466 = 28U;
static int16_t x476 = INT16_MIN;
static int8_t x487 = -1;
static int32_t t121 = -1;
int32_t x490 = 139;
int16_t x511 = INT16_MIN;
int8_t x512 = -1;
static int64_t x513 = INT64_MAX;
int64_t x514 = -1LL;
int8_t x517 = -1;
volatile int64_t x519 = INT64_MIN;
int32_t t132 = -1;
uint64_t x535 = 31627LLU;
int64_t x538 = -1LL;
static int64_t x541 = INT64_MIN;
uint16_t x542 = UINT16_MAX;
volatile int16_t x545 = INT16_MIN;
uint16_t x547 = 29U;
int32_t x561 = INT32_MAX;
int32_t x562 = 43782074;
uint16_t x577 = UINT16_MAX;
volatile int32_t t144 = -11016400;
volatile int16_t x583 = -1;
int32_t t147 = -646;
int16_t x594 = 0;
int32_t x605 = 8;
static int16_t x607 = 12;
static volatile int32_t t151 = 34396226;
volatile int32_t t154 = -12322;
static int8_t x622 = INT8_MIN;
int16_t x625 = INT16_MIN;
int32_t t156 = 0;
static volatile int32_t x631 = 65631301;
volatile int32_t t159 = 13;
volatile int32_t t160 = -7;
static int32_t x653 = 505344969;
volatile int16_t x656 = -1;
volatile int32_t t163 = 7960057;
int8_t x661 = -1;
int32_t x662 = 488513176;
int64_t x664 = INT64_MIN;
uint32_t x670 = 71U;
volatile int32_t t169 = -1;
int16_t x689 = INT16_MAX;
static int64_t x695 = INT64_MIN;
volatile int32_t t173 = 1675990;
int16_t x697 = INT16_MAX;
volatile int32_t x698 = INT32_MIN;
volatile uint64_t x701 = 16839761411LLU;
uint16_t x702 = 100U;
static int16_t x703 = INT16_MIN;
uint32_t x705 = UINT32_MAX;
volatile int8_t x715 = -1;
int64_t x716 = -1LL;
volatile int32_t x719 = INT32_MIN;
uint32_t x727 = 185333U;
volatile int8_t x728 = -1;
static int64_t x729 = -532705335946682LL;
volatile int32_t x735 = -3326;
uint8_t x738 = UINT8_MAX;
static volatile int32_t x739 = INT32_MIN;
static volatile int32_t t184 = -39416125;
int16_t x748 = -59;
static volatile int32_t t188 = -5;
int8_t x757 = -1;
volatile int32_t t190 = 7825692;
int64_t x766 = 121594249384LL;
int16_t x767 = -1;
int8_t x769 = INT8_MAX;
volatile int32_t x770 = -1;
int16_t x774 = -1;
int32_t x775 = -1;
int64_t x788 = INT64_MIN;
volatile int8_t x793 = INT8_MIN;
volatile int64_t x799 = 214385032LL;


void f0(void) {
    	static volatile int8_t x1 = INT8_MIN;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	int32_t t0 = -1;

    t0 = (((x1==x2)^x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x7 = 46;
	int32_t x8 = INT32_MIN;

    t1 = (((x5==x6)^x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -1;
	int8_t x11 = -8;
	uint8_t x12 = 5U;
	static volatile int32_t t2 = -2869245;

    t2 = (((x9==x10)^x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	volatile int64_t x15 = 5LL;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -151645;

    t3 = (((x13==x14)^x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	static int8_t x18 = 33;
	static volatile int16_t x19 = -1;
	volatile int8_t x20 = -1;
	int32_t t4 = 500366167;

    t4 = (((x17==x18)^x19)==x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = 0U;
	int8_t x24 = 1;
	volatile int32_t t5 = 345;

    t5 = (((x21==x22)^x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -38;
	int32_t x27 = 10006;
	uint64_t x28 = 857984600612442LLU;
	int32_t t6 = 3010579;

    t6 = (((x25==x26)^x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 4297LL;
	int16_t x30 = 6639;
	int64_t x31 = -85828LL;
	volatile uint32_t x32 = UINT32_MAX;
	int32_t t7 = -31723;

    t7 = (((x29==x30)^x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 3U;
	volatile int64_t x34 = INT64_MIN;
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MAX;
	volatile int32_t t8 = 2755676;

    t8 = (((x33==x34)^x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 15448U;
	static int16_t x38 = -1;
	int8_t x39 = 0;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = 44021021;

    t9 = (((x37==x38)^x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	volatile int8_t x43 = INT8_MAX;
	uint64_t x44 = 73742133LLU;
	volatile int32_t t10 = 8123584;

    t10 = (((x41==x42)^x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MAX;
	int8_t x46 = 0;
	int8_t x47 = -6;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 86246;

    t11 = (((x45==x46)^x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = 53;
	int8_t x52 = INT8_MIN;

    t12 = (((x49==x50)^x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x53 = 26026610U;
	volatile int32_t x54 = 62468513;
	static uint32_t x55 = UINT32_MAX;
	int32_t t13 = -4;

    t13 = (((x53==x54)^x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = UINT16_MAX;
	uint32_t x59 = 1301206U;

    t14 = (((x57==x58)^x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 59U;
	int16_t x62 = -1;
	static int16_t x63 = INT16_MIN;
	int8_t x64 = 29;
	static int32_t t15 = 7417762;

    t15 = (((x61==x62)^x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 1342857016889773LLU;
	int8_t x67 = INT8_MIN;
	volatile int32_t x68 = 28053;

    t16 = (((x65==x66)^x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = 2627U;
	int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	int32_t t17 = 49040337;

    t17 = (((x69==x70)^x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	volatile int64_t x74 = -806LL;

    t18 = (((x73==x74)^x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MIN;
	volatile int32_t t19 = 159;

    t19 = (((x77==x78)^x79)==x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = -14224;
	volatile int32_t t20 = -40389;

    t20 = (((x81==x82)^x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 1;

    t21 = (((x85==x86)^x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = 472655269LLU;
	volatile uint64_t x90 = 120184295194515LLU;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	int32_t t22 = 46332174;

    t22 = (((x89==x90)^x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 5;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 10;

    t23 = (((x93==x94)^x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MAX;
	int8_t x99 = 0;
	volatile int32_t x100 = -1;
	static int32_t t24 = -175;

    t24 = (((x97==x98)^x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x102 = 11954U;
	int16_t x103 = 1;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 28390096;

    t25 = (((x101==x102)^x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 7079LLU;
	volatile int8_t x106 = 0;
	int16_t x107 = -1;
	static int8_t x108 = -14;
	volatile int32_t t26 = -6692926;

    t26 = (((x105==x106)^x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	int8_t x110 = -50;
	int32_t x111 = INT32_MAX;
	static uint32_t x112 = 2022U;
	volatile int32_t t27 = 6;

    t27 = (((x109==x110)^x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 16U;
	volatile uint8_t x116 = 0U;
	int32_t t28 = 13;

    t28 = (((x113==x114)^x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MIN;
	static int64_t x119 = INT64_MIN;
	int16_t x120 = 0;
	volatile int32_t t29 = -27885;

    t29 = (((x117==x118)^x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 68U;
	int8_t x124 = INT8_MAX;

    t30 = (((x121==x122)^x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 478U;
	volatile int16_t x127 = INT16_MAX;
	uint8_t x128 = 126U;
	volatile int32_t t31 = 185409;

    t31 = (((x125==x126)^x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 479371054294LLU;
	volatile int8_t x130 = INT8_MIN;
	int64_t x132 = -46451LL;
	volatile int32_t t32 = -9847;

    t32 = (((x129==x130)^x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x134 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;

    t33 = (((x133==x134)^x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MAX;
	uint32_t x139 = 398209642U;
	int64_t x140 = -58445632797LL;
	volatile int32_t t34 = 222;

    t34 = (((x137==x138)^x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	uint64_t x142 = 470985492LLU;
	int8_t x144 = INT8_MAX;
	static int32_t t35 = -788860;

    t35 = (((x141==x142)^x143)==x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	int32_t x148 = -1;

    t36 = (((x145==x146)^x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = 84797LL;
	uint64_t x150 = UINT64_MAX;
	static uint16_t x151 = 2091U;
	uint16_t x152 = UINT16_MAX;

    t37 = (((x149==x150)^x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	uint16_t x154 = 2998U;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = -93;

    t38 = (((x153==x154)^x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 3U;
	static uint8_t x159 = UINT8_MAX;
	uint8_t x160 = 61U;
	volatile int32_t t39 = -471754;

    t39 = (((x157==x158)^x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -4018;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 0U;
	static volatile int32_t t40 = -636125;

    t40 = (((x161==x162)^x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = 6;
	int16_t x167 = -1;

    t41 = (((x165==x166)^x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = 77;
	int16_t x170 = INT16_MAX;
	static int64_t x171 = INT64_MAX;
	static uint16_t x172 = 56U;
	volatile int32_t t42 = -536;

    t42 = (((x169==x170)^x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 12788877;

    t43 = (((x173==x174)^x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x179 = INT64_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 30;

    t44 = (((x177==x178)^x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	uint32_t x182 = UINT32_MAX;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = 543496;

    t45 = (((x181==x182)^x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	uint8_t x188 = 0U;
	static volatile int32_t t46 = -9182;

    t46 = (((x185==x186)^x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = 421437LLU;
	static int64_t x192 = INT64_MIN;

    t47 = (((x189==x190)^x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -593780447;

    t48 = (((x193==x194)^x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 801452895U;
	int32_t x199 = 1211;
	uint8_t x200 = 2U;
	static volatile int32_t t49 = 9595;

    t49 = (((x197==x198)^x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 3U;
	static uint64_t x202 = 1267318510014LLU;
	uint8_t x203 = UINT8_MAX;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -116052583;

    t50 = (((x201==x202)^x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x207 = 97033509684LLU;
	static uint32_t x208 = 2001U;
	int32_t t51 = -33242674;

    t51 = (((x205==x206)^x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -20;
	int8_t x210 = 13;
	int8_t x211 = -15;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 10091247;

    t52 = (((x209==x210)^x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = 0;
	static int32_t x214 = -1;
	static int8_t x215 = -1;
	volatile int32_t t53 = 460;

    t53 = (((x213==x214)^x215)==x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MAX;
	volatile int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -3LL;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -2019084;

    t54 = (((x217==x218)^x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 105851562LLU;
	static uint8_t x222 = UINT8_MAX;
	int8_t x224 = INT8_MIN;

    t55 = (((x221==x222)^x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x226 = 7U;
	int16_t x227 = -54;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = -879;

    t56 = (((x225==x226)^x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	int8_t x231 = INT8_MAX;
	volatile int32_t t57 = 14276;

    t57 = (((x229==x230)^x231)==x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 92U;
	int8_t x234 = 7;
	volatile uint32_t x235 = 1212U;
	int32_t t58 = 27776;

    t58 = (((x233==x234)^x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	uint8_t x240 = 15U;
	int32_t t59 = 12741;

    t59 = (((x237==x238)^x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	int8_t x242 = INT8_MAX;
	uint8_t x243 = 1U;
	volatile int64_t x244 = 2408LL;
	int32_t t60 = 69;

    t60 = (((x241==x242)^x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -33;
	int64_t x246 = INT64_MAX;
	int32_t x247 = -1;

    t61 = (((x245==x246)^x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = -1;
	int16_t x250 = INT16_MAX;
	uint16_t x252 = 15745U;

    t62 = (((x249==x250)^x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x255 = INT16_MIN;
	static int32_t x256 = 9419;
	volatile int32_t t63 = 6;

    t63 = (((x253==x254)^x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	static int32_t t64 = 5111;

    t64 = (((x257==x258)^x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = UINT16_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 215846;

    t65 = (((x261==x262)^x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 146;
	static uint64_t x266 = 2118812094929LLU;
	volatile int32_t t66 = -13353;

    t66 = (((x265==x266)^x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	static int16_t x270 = INT16_MIN;
	int32_t x271 = 6043;
	static volatile int32_t t67 = -57;

    t67 = (((x269==x270)^x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	static int16_t x274 = INT16_MIN;
	uint8_t x275 = 122U;
	static int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = -129;

    t68 = (((x273==x274)^x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	volatile int16_t x280 = -1;
	volatile int32_t t69 = -734909050;

    t69 = (((x277==x278)^x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MAX;
	int64_t x283 = 104729597940537222LL;
	uint8_t x284 = 21U;
	volatile int32_t t70 = -546591362;

    t70 = (((x281==x282)^x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -10158342;

    t71 = (((x285==x286)^x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = 2;
	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	static uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 947618038;

    t72 = (((x289==x290)^x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 82LLU;
	volatile int32_t x294 = 11;
	uint64_t x295 = 861185237809960014LLU;
	static int32_t x296 = INT32_MAX;
	int32_t t73 = 193;

    t73 = (((x293==x294)^x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = 1U;
	int64_t x298 = 24649311803LL;
	int8_t x299 = 0;
	static int64_t x300 = 928LL;
	int32_t t74 = -502922432;

    t74 = (((x297==x298)^x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 3583623530LLU;
	static volatile int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	static int16_t x304 = -190;
	volatile int32_t t75 = 14848;

    t75 = (((x301==x302)^x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MIN;
	static volatile int8_t x308 = INT8_MAX;
	static int32_t t76 = 11;

    t76 = (((x305==x306)^x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x310 = -1;
	int64_t x311 = -4591734LL;
	static int32_t t77 = -350;

    t77 = (((x309==x310)^x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	static uint16_t x315 = 0U;
	static volatile uint32_t x316 = UINT32_MAX;
	int32_t t78 = 6201943;

    t78 = (((x313==x314)^x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	uint16_t x318 = 10192U;
	volatile int64_t x320 = INT64_MIN;
	int32_t t79 = -141;

    t79 = (((x317==x318)^x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = 694300941792LL;
	static volatile uint64_t x323 = 395510744560880336LLU;
	int32_t x324 = -8808857;

    t80 = (((x321==x322)^x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 3241;
	int32_t x327 = 13;
	volatile uint64_t x328 = 13114220612LLU;

    t81 = (((x325==x326)^x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 17365024LLU;
	int64_t x330 = -498717LL;
	uint16_t x331 = 23U;
	static uint64_t x332 = 58881450878514113LLU;
	int32_t t82 = 4873611;

    t82 = (((x329==x330)^x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 7U;
	int16_t x334 = INT16_MIN;
	static int32_t x336 = 692549;
	static volatile int32_t t83 = 19554;

    t83 = (((x333==x334)^x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	int8_t x338 = 0;
	int16_t x339 = -1022;
	static volatile uint8_t x340 = 1U;
	volatile int32_t t84 = 11;

    t84 = (((x337==x338)^x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 35209;
	static uint8_t x342 = 77U;
	uint32_t x343 = 46799U;
	int32_t t85 = 37762;

    t85 = (((x341==x342)^x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = -1;
	volatile int16_t x347 = -1;
	int16_t x348 = -1;
	volatile int32_t t86 = 11;

    t86 = (((x345==x346)^x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = 98939051;
	int8_t x351 = -1;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -1;

    t87 = (((x349==x350)^x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MAX;
	volatile uint8_t x354 = 0U;
	int16_t x355 = -1;
	int32_t t88 = 12317077;

    t88 = (((x353==x354)^x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	int16_t x359 = INT16_MAX;
	static volatile int16_t x360 = INT16_MAX;
	int32_t t89 = 12750258;

    t89 = (((x357==x358)^x359)==x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = -5058;
	static uint8_t x362 = UINT8_MAX;
	static int8_t x363 = INT8_MIN;
	static int32_t x364 = INT32_MAX;

    t90 = (((x361==x362)^x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 41388307394LLU;
	int8_t x368 = -1;

    t91 = (((x365==x366)^x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = INT8_MAX;
	static int64_t x370 = INT64_MIN;
	static volatile uint32_t x371 = 18625U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 130;

    t92 = (((x369==x370)^x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = 24199355;
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MAX;
	static volatile int32_t t93 = -965295631;

    t93 = (((x373==x374)^x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x379 = 13U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -1;

    t94 = (((x377==x378)^x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 250U;
	int16_t x384 = 17;

    t95 = (((x381==x382)^x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MAX;
	static int64_t x387 = INT64_MIN;
	int8_t x388 = 14;
	volatile int32_t t96 = 100044973;

    t96 = (((x385==x386)^x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MAX;
	static uint32_t x392 = 188261U;
	static int32_t t97 = 6029344;

    t97 = (((x389==x390)^x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 37911777LL;
	int64_t x394 = 47093503579LL;
	volatile int8_t x395 = INT8_MIN;
	int64_t x396 = 95214312579268126LL;
	int32_t t98 = 158948242;

    t98 = (((x393==x394)^x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint64_t x399 = 62558320572803LLU;
	int32_t t99 = 186912;

    t99 = (((x397==x398)^x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = 46882594209LL;
	int8_t x402 = -15;
	uint32_t x403 = UINT32_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	int32_t t100 = 0;

    t100 = (((x401==x402)^x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	uint16_t x407 = 1U;
	static int32_t t101 = 1099216;

    t101 = (((x405==x406)^x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = 0;
	int16_t x411 = INT16_MIN;
	static uint8_t x412 = UINT8_MAX;

    t102 = (((x409==x410)^x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x413 = 3;
	int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = 6047606988462936590LLU;
	int8_t x416 = INT8_MAX;
	int32_t t103 = -451442993;

    t103 = (((x413==x414)^x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint32_t x418 = UINT32_MAX;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MAX;

    t104 = (((x417==x418)^x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -1;
	uint64_t x422 = 9062106316260909598LLU;
	int8_t x424 = -1;
	int32_t t105 = -88040073;

    t105 = (((x421==x422)^x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	volatile int64_t x426 = INT64_MIN;
	static int32_t x427 = -3179523;
	uint16_t x428 = 2U;
	volatile int32_t t106 = -100201682;

    t106 = (((x425==x426)^x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = 0;
	uint64_t x431 = 51LLU;
	volatile int32_t t107 = -5116;

    t107 = (((x429==x430)^x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x433 = 21U;
	uint32_t x434 = 57U;
	uint8_t x435 = UINT8_MAX;
	uint16_t x436 = 1U;
	int32_t t108 = -178;

    t108 = (((x433==x434)^x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	int64_t x438 = INT64_MIN;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = 0;
	int32_t t109 = -14996;

    t109 = (((x437==x438)^x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x441 = UINT64_MAX;
	int8_t x442 = INT8_MAX;
	int64_t x443 = -46771LL;
	volatile uint64_t x444 = 24493554637540LLU;
	volatile int32_t t110 = -8015;

    t110 = (((x441==x442)^x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	static int64_t x446 = INT64_MIN;
	int64_t x447 = INT64_MAX;
	uint32_t x448 = 65320406U;
	int32_t t111 = -6;

    t111 = (((x445==x446)^x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 127;
	int64_t x450 = INT64_MAX;
	uint64_t x452 = 3010389119145418176LLU;
	int32_t t112 = 628893;

    t112 = (((x449==x450)^x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x455 = 9550;
	uint8_t x456 = 11U;

    t113 = (((x453==x454)^x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x458 = 1109807U;
	int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -10;

    t114 = (((x457==x458)^x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 1U;
	static int16_t x462 = INT16_MAX;
	uint32_t x463 = 3601U;
	int64_t x464 = INT64_MIN;
	int32_t t115 = -4436318;

    t115 = (((x461==x462)^x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MIN;
	static uint16_t x467 = 2U;
	uint16_t x468 = UINT16_MAX;
	int32_t t116 = -4909959;

    t116 = (((x465==x466)^x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	uint16_t x470 = 0U;
	int64_t x471 = INT64_MIN;
	uint16_t x472 = 486U;
	volatile int32_t t117 = 154183114;

    t117 = (((x469==x470)^x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MIN;
	static int32_t t118 = -77;

    t118 = (((x473==x474)^x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 1689226687202453525LLU;
	volatile int16_t x478 = 1;
	volatile uint16_t x479 = 4506U;
	volatile int64_t x480 = INT64_MIN;
	int32_t t119 = 33187;

    t119 = (((x477==x478)^x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 4430U;
	uint16_t x482 = 4761U;
	int64_t x483 = -1LL;
	int8_t x484 = -45;
	int32_t t120 = 2;

    t120 = (((x481==x482)^x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 15U;
	int16_t x486 = INT16_MIN;
	static uint8_t x488 = 27U;

    t121 = (((x485==x486)^x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	uint16_t x491 = 226U;
	static volatile int32_t x492 = INT32_MAX;
	int32_t t122 = 1594;

    t122 = (((x489==x490)^x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MAX;
	int8_t x496 = -1;
	int32_t t123 = -4608120;

    t123 = (((x493==x494)^x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = -1;
	int8_t x498 = 6;
	static int8_t x499 = 5;
	volatile uint8_t x500 = 6U;
	int32_t t124 = -52354;

    t124 = (((x497==x498)^x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	uint64_t x504 = 72532LLU;
	int32_t t125 = 32442238;

    t125 = (((x501==x502)^x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = INT32_MAX;
	static uint64_t x506 = 3397922LLU;
	volatile int32_t x507 = 214;
	volatile int64_t x508 = INT64_MIN;
	volatile int32_t t126 = -23078;

    t126 = (((x505==x506)^x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = UINT8_MAX;
	int16_t x510 = 3;
	volatile int32_t t127 = 5499;

    t127 = (((x509==x510)^x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x515 = 7U;
	int8_t x516 = 4;
	volatile int32_t t128 = -4292;

    t128 = (((x513==x514)^x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t129 = -11776;

    t129 = (((x517==x518)^x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x521 = 6U;
	volatile uint64_t x522 = 6969794LLU;
	int16_t x523 = -1;
	volatile int16_t x524 = INT16_MIN;
	int32_t t130 = 7838544;

    t130 = (((x521==x522)^x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = INT16_MAX;
	static int16_t x527 = -1;
	int16_t x528 = 2;
	static int32_t t131 = -7020;

    t131 = (((x525==x526)^x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 3929U;
	int32_t x530 = INT32_MIN;
	volatile int16_t x531 = INT16_MIN;
	int8_t x532 = -31;

    t132 = (((x529==x530)^x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MAX;
	int64_t x534 = INT64_MIN;
	int32_t x536 = 15547918;
	volatile int32_t t133 = -11467;

    t133 = (((x533==x534)^x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int32_t x539 = -4;
	static uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 4065886;

    t134 = (((x537==x538)^x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x543 = 48U;
	int8_t x544 = -1;
	int32_t t135 = -938722;

    t135 = (((x541==x542)^x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = INT32_MIN;
	uint64_t x548 = UINT64_MAX;
	static int32_t t136 = 0;

    t136 = (((x545==x546)^x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x550 = 6321LL;
	int8_t x551 = -5;
	int32_t x552 = 1;
	int32_t t137 = 15995;

    t137 = (((x549==x550)^x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -133835846940817LL;
	static volatile int16_t x554 = -6063;
	uint32_t x555 = 945244255U;
	int64_t x556 = 1LL;
	volatile int32_t t138 = -1726;

    t138 = (((x553==x554)^x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 30U;
	volatile uint64_t x558 = UINT64_MAX;
	int16_t x559 = INT16_MAX;
	volatile uint64_t x560 = 427511958916LLU;
	volatile int32_t t139 = -39237924;

    t139 = (((x557==x558)^x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x563 = -16;
	volatile uint8_t x564 = UINT8_MAX;
	static volatile int32_t t140 = -7290470;

    t140 = (((x561==x562)^x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MIN;
	uint64_t x566 = 5831607086LLU;
	uint32_t x567 = 48732877U;
	static int64_t x568 = -2171415946424578761LL;
	int32_t t141 = -380999951;

    t141 = (((x565==x566)^x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	static int16_t x570 = -12;
	volatile int16_t x571 = INT16_MIN;
	volatile int64_t x572 = INT64_MAX;
	int32_t t142 = 2;

    t142 = (((x569==x570)^x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = INT8_MIN;
	int64_t x574 = -1LL;
	static int8_t x575 = 5;
	int64_t x576 = INT64_MIN;
	static int32_t t143 = 4065;

    t143 = (((x573==x574)^x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = -1;
	uint64_t x579 = UINT64_MAX;
	int8_t x580 = INT8_MIN;

    t144 = (((x577==x578)^x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	int16_t x582 = -1;
	int8_t x584 = -1;
	static volatile int32_t t145 = -2597;

    t145 = (((x581==x582)^x583)==x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 968542311235LLU;
	volatile int32_t x586 = INT32_MAX;
	int8_t x587 = INT8_MAX;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -1;

    t146 = (((x585==x586)^x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x590 = -1LL;
	int64_t x591 = 3603037408LL;
	uint8_t x592 = UINT8_MAX;

    t147 = (((x589==x590)^x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x595 = INT8_MAX;
	volatile int64_t x596 = 3402086997256005LL;
	volatile int32_t t148 = -1339701;

    t148 = (((x593==x594)^x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -941764;
	volatile int64_t x598 = 263586527041LL;
	int32_t x599 = -1;
	volatile int16_t x600 = INT16_MAX;
	volatile int32_t t149 = 39;

    t149 = (((x597==x598)^x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -115LL;
	static int16_t x602 = 6312;
	volatile int32_t x603 = -1;
	uint32_t x604 = 4U;
	volatile int32_t t150 = 1;

    t150 = (((x601==x602)^x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	int32_t x608 = INT32_MAX;

    t151 = (((x605==x606)^x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x609 = 1U;
	static uint64_t x610 = 8641886624967LLU;
	uint32_t x611 = 27067524U;
	int32_t x612 = -1;
	int32_t t152 = -23938;

    t152 = (((x609==x610)^x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 26U;
	int64_t x614 = -1LL;
	int32_t x615 = INT32_MIN;
	int16_t x616 = INT16_MAX;
	volatile int32_t t153 = -1501;

    t153 = (((x613==x614)^x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x617 = -1;
	uint8_t x618 = 7U;
	int64_t x619 = -1LL;
	uint8_t x620 = UINT8_MAX;

    t154 = (((x617==x618)^x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	static uint64_t x623 = 1211567423406LLU;
	int64_t x624 = INT64_MIN;
	int32_t t155 = 0;

    t155 = (((x621==x622)^x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x626 = 13247796437210581LL;
	int32_t x627 = INT32_MIN;
	uint64_t x628 = 56206LLU;

    t156 = (((x625==x626)^x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 3U;
	uint64_t x630 = UINT64_MAX;
	static volatile int32_t x632 = -1;
	int32_t t157 = 0;

    t157 = (((x629==x630)^x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 12U;
	int8_t x634 = 1;
	int8_t x635 = INT8_MIN;
	volatile uint8_t x636 = 10U;
	int32_t t158 = -326801;

    t158 = (((x633==x634)^x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MIN;
	volatile uint16_t x638 = 995U;
	int8_t x639 = -1;
	volatile uint64_t x640 = UINT64_MAX;

    t159 = (((x637==x638)^x639)==x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	static int8_t x642 = -1;
	volatile uint16_t x643 = UINT16_MAX;
	volatile int32_t x644 = -1;

    t160 = (((x641==x642)^x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MAX;
	volatile int8_t x646 = -1;
	int64_t x647 = 11808811785927LL;
	static volatile int64_t x648 = INT64_MIN;
	int32_t t161 = 57967;

    t161 = (((x645==x646)^x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = INT32_MIN;
	int16_t x650 = 708;
	uint8_t x651 = 24U;
	int8_t x652 = 2;
	volatile int32_t t162 = 4;

    t162 = (((x649==x650)^x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = INT8_MIN;
	int16_t x655 = 4;

    t163 = (((x653==x654)^x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	static int32_t x658 = -1;
	uint16_t x659 = 1U;
	uint16_t x660 = UINT16_MAX;
	int32_t t164 = 2;

    t164 = (((x657==x658)^x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x663 = 163;
	int32_t t165 = 20;

    t165 = (((x661==x662)^x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x665 = UINT32_MAX;
	uint64_t x666 = 0LLU;
	volatile int16_t x667 = INT16_MIN;
	static volatile int8_t x668 = INT8_MIN;
	int32_t t166 = -37144;

    t166 = (((x665==x666)^x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 1U;
	static int32_t x671 = -1;
	static uint32_t x672 = 422U;
	int32_t t167 = 51333;

    t167 = (((x669==x670)^x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = UINT32_MAX;
	static uint32_t x674 = UINT32_MAX;
	int32_t x675 = 11;
	int64_t x676 = -3036LL;
	static volatile int32_t t168 = 937063052;

    t168 = (((x673==x674)^x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = INT8_MAX;
	int8_t x678 = -24;
	int8_t x679 = INT8_MAX;
	uint16_t x680 = UINT16_MAX;

    t169 = (((x677==x678)^x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 226;
	static int16_t x682 = INT16_MIN;
	static int32_t x683 = -3023270;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t170 = -8583467;

    t170 = (((x681==x682)^x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -60340994;
	int32_t x686 = INT32_MIN;
	uint64_t x687 = 271001945236LLU;
	int16_t x688 = -1040;
	int32_t t171 = 3923;

    t171 = (((x685==x686)^x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = INT8_MIN;
	uint32_t x691 = UINT32_MAX;
	static uint32_t x692 = 4U;
	static int32_t t172 = -396629170;

    t172 = (((x689==x690)^x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -30713503980487LL;
	volatile uint8_t x694 = 0U;
	int8_t x696 = -1;

    t173 = (((x693==x694)^x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x699 = -1688449;
	int64_t x700 = -1LL;
	volatile int32_t t174 = -9;

    t174 = (((x697==x698)^x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x704 = -42335326855864LL;
	volatile int32_t t175 = 27702857;

    t175 = (((x701==x702)^x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x706 = 77U;
	volatile int16_t x707 = INT16_MAX;
	uint32_t x708 = 14812206U;
	int32_t t176 = -104565;

    t176 = (((x705==x706)^x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = -1;
	static int8_t x710 = INT8_MAX;
	int8_t x711 = INT8_MAX;
	volatile int8_t x712 = INT8_MAX;
	int32_t t177 = 795470210;

    t177 = (((x709==x710)^x711)==x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -2;
	uint64_t x714 = UINT64_MAX;
	static int32_t t178 = 342;

    t178 = (((x713==x714)^x715)==x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int16_t x718 = INT16_MIN;
	int32_t x720 = 1;
	int32_t t179 = 477870;

    t179 = (((x717==x718)^x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1308323;
	static uint64_t x722 = UINT64_MAX;
	uint32_t x723 = 1U;
	int8_t x724 = -1;
	static volatile int32_t t180 = 14320466;

    t180 = (((x721==x722)^x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = -1;
	volatile int16_t x726 = -1;
	int32_t t181 = 884;

    t181 = (((x725==x726)^x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = UINT8_MAX;
	int32_t x731 = INT32_MAX;
	volatile int32_t x732 = INT32_MIN;
	volatile int32_t t182 = -8416828;

    t182 = (((x729==x730)^x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MAX;
	int64_t x734 = 3957691LL;
	int8_t x736 = -1;
	static volatile int32_t t183 = -828086106;

    t183 = (((x733==x734)^x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	static int32_t x740 = -1;

    t184 = (((x737==x738)^x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MIN;
	int64_t x743 = INT64_MIN;
	volatile uint16_t x744 = 17423U;
	int32_t t185 = 360941;

    t185 = (((x741==x742)^x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 2325982769155946LLU;
	uint16_t x746 = 10U;
	static int64_t x747 = INT64_MAX;
	volatile int32_t t186 = -8;

    t186 = (((x745==x746)^x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	uint32_t x750 = UINT32_MAX;
	int16_t x751 = -1;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t187 = -447;

    t187 = (((x749==x750)^x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = INT16_MIN;
	int8_t x755 = INT8_MIN;
	uint8_t x756 = UINT8_MAX;

    t188 = (((x753==x754)^x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = INT16_MIN;
	int8_t x759 = -21;
	int8_t x760 = INT8_MAX;
	int32_t t189 = -73296;

    t189 = (((x757==x758)^x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	uint8_t x762 = 2U;
	volatile int32_t x763 = 45961;
	uint16_t x764 = 10U;

    t190 = (((x761==x762)^x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = 32382LL;
	int64_t x768 = INT64_MIN;
	int32_t t191 = 1417;

    t191 = (((x765==x766)^x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x771 = 0;
	uint32_t x772 = 120U;
	static int32_t t192 = -260974;

    t192 = (((x769==x770)^x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 7U;
	volatile uint32_t x776 = 1036943U;
	int32_t t193 = -29;

    t193 = (((x773==x774)^x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x777 = UINT64_MAX;
	static int32_t x778 = INT32_MIN;
	int32_t x779 = -1;
	int64_t x780 = -1LL;
	static volatile int32_t t194 = -88502937;

    t194 = (((x777==x778)^x779)==x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	static int64_t x782 = 142LL;
	int32_t x783 = 1166049;
	static int8_t x784 = -1;
	volatile int32_t t195 = -18461120;

    t195 = (((x781==x782)^x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = -17958977014LL;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	int32_t t196 = -324;

    t196 = (((x785==x786)^x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 383982502LLU;
	int8_t x790 = INT8_MIN;
	static int64_t x791 = -1LL;
	static int16_t x792 = 1;
	volatile int32_t t197 = 1;

    t197 = (((x789==x790)^x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x794 = INT32_MIN;
	uint64_t x795 = UINT64_MAX;
	static int32_t x796 = INT32_MAX;
	volatile int32_t t198 = 1496;

    t198 = (((x793==x794)^x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = 250931500925LL;
	volatile uint16_t x798 = UINT16_MAX;
	int64_t x800 = INT64_MIN;
	int32_t t199 = -60;

    t199 = (((x797==x798)^x799)==x800);

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

