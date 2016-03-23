
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

static int32_t x6 = INT32_MAX;
static uint32_t x14 = UINT32_MAX;
static uint32_t t3 = 3724U;
uint16_t x18 = 560U;
static int64_t x33 = 427LL;
volatile uint64_t x35 = 388638LLU;
uint64_t x43 = 5LLU;
volatile int8_t x44 = INT8_MIN;
uint64_t t8 = 33346549353LLU;
int64_t x45 = INT64_MAX;
int64_t x48 = INT64_MIN;
uint16_t x51 = 4123U;
volatile int8_t x55 = INT8_MAX;
int16_t x59 = INT16_MIN;
uint8_t x61 = 3U;
int32_t x65 = INT32_MIN;
volatile int64_t t14 = -45230700LL;
volatile int64_t x69 = INT64_MIN;
volatile int64_t t16 = 5927164458LL;
volatile int8_t x78 = INT8_MIN;
uint8_t x95 = UINT8_MAX;
volatile uint32_t t22 = 987298649U;
int32_t x108 = INT32_MAX;
int16_t x117 = 0;
uint64_t x118 = UINT64_MAX;
volatile int32_t x119 = INT32_MIN;
volatile int64_t t26 = -94938812551123745LL;
int32_t x129 = -1;
int8_t x133 = 24;
int8_t x135 = 0;
int32_t t28 = 13162;
volatile int64_t t29 = -23LL;
int64_t x153 = INT64_MAX;
int32_t x154 = -1;
static volatile int64_t x158 = 5123479755205476LL;
int8_t x169 = -1;
static int32_t x175 = 115180269;
volatile int16_t x176 = 6714;
int8_t x179 = INT8_MIN;
volatile int32_t x182 = -13;
int8_t x183 = -1;
uint32_t x187 = UINT32_MAX;
uint32_t t39 = 56U;
int64_t x189 = INT64_MAX;
int64_t x195 = -9LL;
uint32_t x197 = UINT32_MAX;
uint8_t x207 = UINT8_MAX;
volatile uint8_t x217 = 13U;
volatile int8_t x219 = -1;
uint64_t t47 = 3LLU;
int64_t x231 = INT64_MIN;
static int64_t x232 = INT64_MAX;
uint32_t x240 = 53802320U;
volatile uint32_t x243 = UINT32_MAX;
uint16_t x253 = 12241U;
uint8_t x262 = 9U;
volatile int64_t t57 = -128225LL;
static int16_t x274 = -1;
uint8_t x287 = UINT8_MAX;
static uint64_t t63 = 7221686685521LLU;
uint8_t x305 = 24U;
uint32_t x306 = 6098052U;
uint16_t x311 = UINT16_MAX;
uint8_t x313 = 18U;
static uint8_t x315 = 4U;
int64_t x318 = -438054863063519589LL;
volatile int16_t x332 = 1150;
int16_t x341 = INT16_MIN;
int16_t x343 = INT16_MAX;
int16_t x346 = 13;
uint32_t x352 = 3U;
uint8_t x356 = UINT8_MAX;
volatile int64_t t78 = 25LL;
int64_t x363 = -1LL;
uint64_t x372 = 29314LLU;
volatile uint32_t t83 = 40U;
int64_t x401 = -317240142LL;
volatile int8_t x409 = INT8_MAX;
static uint32_t t89 = 64892U;
int16_t x414 = -1;
uint32_t x415 = 1053916189U;
int64_t x417 = INT64_MAX;
int32_t x421 = INT32_MIN;
int8_t x447 = 15;
volatile int64_t t96 = 84025454479190LL;
int64_t x452 = INT64_MAX;
int64_t t97 = -211852186LL;
uint8_t x474 = 1U;
volatile uint64_t x475 = 140299687878830043LLU;
static int32_t x480 = -1;
uint64_t t103 = 139123574LLU;
int64_t x482 = INT64_MAX;
int16_t x483 = -8;
volatile uint32_t x498 = 34U;
int64_t x499 = INT64_MIN;
uint64_t t107 = 786597644269845992LLU;
int16_t x501 = -1;
static int8_t x503 = INT8_MAX;
volatile int8_t x508 = -50;
int16_t x511 = -1;
int64_t t110 = 328369354167LL;
int32_t x521 = INT32_MAX;
static int64_t x524 = INT64_MIN;
volatile int64_t t112 = -1360325945LL;
volatile int16_t x525 = INT16_MIN;
int8_t x527 = 56;
static int8_t x532 = -21;
int32_t t114 = 6;
int8_t x537 = -1;
uint16_t x543 = UINT16_MAX;
volatile int32_t t116 = 238238;
static uint16_t x551 = 430U;
int32_t x557 = INT32_MIN;
uint8_t x559 = 47U;
uint32_t x563 = UINT32_MAX;
uint64_t t121 = 44606884448406517LLU;
int64_t x565 = -1LL;
int16_t x576 = INT16_MIN;
int64_t t123 = -833537448451886LL;
static int64_t t125 = 45963474203830LL;
volatile uint16_t x594 = UINT16_MAX;
uint32_t t128 = 26274165U;
int16_t x603 = 379;
volatile int32_t t131 = 0;
uint16_t x613 = 0U;
volatile int16_t x620 = INT16_MAX;
volatile int32_t t133 = -648;
uint32_t x621 = 444716289U;
uint32_t x624 = 87485839U;
int64_t t137 = 10438156354168LL;
volatile uint16_t x641 = UINT16_MAX;
static uint8_t x644 = 2U;
volatile uint64_t t140 = 6777345377LLU;
uint64_t x652 = 48772323LLU;
volatile uint16_t x654 = 84U;
volatile int32_t t142 = -164720;
int32_t x660 = INT32_MIN;
uint32_t x663 = UINT32_MAX;
uint8_t x664 = UINT8_MAX;
int16_t x666 = INT16_MAX;
static int8_t x670 = 0;
volatile int64_t x673 = INT64_MIN;
int16_t x680 = 14187;
int8_t x681 = -19;
uint16_t x682 = 12019U;
int16_t x684 = INT16_MIN;
uint64_t x688 = 2LLU;
int16_t x690 = INT16_MIN;
volatile uint16_t x692 = UINT16_MAX;
uint16_t x695 = 1U;
volatile uint8_t x697 = 2U;
static volatile int64_t t154 = 78376LL;
int8_t x707 = INT8_MIN;
uint32_t x708 = 996227365U;
uint16_t x709 = 5U;
uint8_t x710 = 6U;
volatile int8_t x711 = INT8_MIN;
volatile uint16_t x717 = UINT16_MAX;
static int32_t x718 = INT32_MIN;
volatile int8_t x727 = 0;
int64_t t159 = -1326005LL;
uint16_t x731 = 5110U;
int64_t x738 = INT64_MAX;
static volatile int64_t t161 = -103283815915LL;
static int16_t x752 = 4;
uint8_t x761 = 2U;
uint8_t x764 = UINT8_MAX;
volatile int16_t x766 = 642;
uint32_t t167 = 7877565U;
int64_t x772 = INT64_MIN;
int8_t x775 = INT8_MIN;
int32_t t170 = 3415825;
volatile int16_t x782 = INT16_MIN;
volatile int8_t x783 = INT8_MAX;
int8_t x787 = INT8_MIN;
static int32_t x792 = INT32_MIN;
int32_t x801 = -1;
int8_t x803 = INT8_MIN;
int64_t t177 = -2849314143441LL;
int8_t x819 = INT8_MIN;
int8_t x820 = INT8_MIN;
uint32_t x822 = 10557576U;
uint8_t x826 = 3U;
static int8_t x835 = -1;
int8_t x837 = INT8_MAX;
uint8_t x844 = UINT8_MAX;
int8_t x847 = -2;
uint32_t t186 = 98U;
volatile int32_t t188 = 3213;
volatile int8_t x862 = INT8_MAX;
volatile uint64_t t190 = 0LLU;
volatile int32_t t193 = -177774;
static volatile int16_t x882 = 0;
static int8_t x888 = INT8_MIN;
uint64_t t196 = 15381779LLU;
int64_t x904 = INT64_MIN;


void f0(void) {
    	uint8_t x1 = 19U;
	static uint32_t x2 = UINT32_MAX;
	static int16_t x3 = 958;
	int16_t x4 = -115;
	volatile uint32_t t0 = 60U;

    t0 = ((x1|x2)*(x3/x4));

    if (t0 != 8U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	volatile int32_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 3094692;

    t1 = ((x5|x6)*(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x10 = 15;
	uint32_t x11 = UINT32_MAX;
	int64_t x12 = -692784981581696815LL;
	int64_t t2 = -569130LL;

    t2 = ((x9|x10)*(x11/x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	uint16_t x15 = 8184U;
	static int8_t x16 = -1;

    t3 = ((x13|x14)*(x15/x16));

    if (t3 != 8184U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	uint8_t x19 = UINT8_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -351216853;

    t4 = ((x17|x18)*(x19/x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile uint32_t x22 = 3914U;
	int64_t x23 = 48968402312066536LL;
	static uint64_t x24 = 28LLU;
	volatile uint64_t t5 = 409950933LLU;

    t5 = ((x21|x22)*(x23/x24));

    if (t5 != 6937773284713139311LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x34 = INT16_MIN;
	volatile int32_t x36 = -681;
	volatile uint64_t t6 = 6702503554222521088LLU;

    t6 = ((x33|x34)*(x35/x36));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 12U;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	int8_t x40 = -1;
	volatile int32_t t7 = -7;

    t7 = ((x37|x38)*(x39/x40));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MAX;

    t8 = ((x41|x42)*(x43/x44));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x46 = 0;
	int16_t x47 = INT16_MAX;
	int64_t t9 = 10531341975LL;

    t9 = ((x45|x46)*(x47/x48));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = UINT8_MAX;
	static volatile int8_t x50 = 2;
	int8_t x52 = INT8_MIN;
	int32_t t10 = -2822404;

    t10 = ((x49|x50)*(x51/x52));

    if (t10 != -8160) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = UINT64_MAX;
	volatile int16_t x54 = INT16_MIN;
	static volatile int16_t x56 = 1425;
	uint64_t t11 = 68LLU;

    t11 = ((x53|x54)*(x55/x56));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x57 = INT32_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	static int64_t x60 = INT64_MIN;
	static uint64_t t12 = 48LLU;

    t12 = ((x57|x58)*(x59/x60));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x62 = 0U;
	static volatile uint32_t x63 = 736351U;
	int8_t x64 = INT8_MIN;
	uint32_t t13 = 1739U;

    t13 = ((x61|x62)*(x63/x64));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x66 = 1854169U;
	int64_t x67 = -1LL;
	static volatile int16_t x68 = -1;

    t14 = ((x65|x66)*(x67/x68));

    if (t14 != 2149337817LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x70 = -1;
	volatile int16_t x71 = INT16_MAX;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = 43391078601606LL;

    t15 = ((x69|x70)*(x71/x72));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x73 = INT64_MAX;
	int32_t x74 = -1;
	uint16_t x75 = 12U;
	int16_t x76 = -3;

    t16 = ((x73|x74)*(x75/x76));

    if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = 133;
	uint64_t x79 = 489525LLU;
	static volatile int32_t x80 = INT32_MIN;
	uint64_t t17 = 99360LLU;

    t17 = ((x77|x78)*(x79/x80));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x81 = 4LLU;
	uint64_t x82 = 700688736489566457LLU;
	int16_t x83 = INT16_MIN;
	volatile int16_t x84 = 252;
	uint64_t t18 = 7205699022LLU;

    t18 = ((x81|x82)*(x83/x84));

    if (t18 != 1144184624904118150LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x85 = 72LLU;
	static int16_t x86 = INT16_MIN;
	volatile uint32_t x87 = 1638824566U;
	volatile int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 90418565566538LLU;

    t19 = ((x85|x86)*(x87/x88));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = 389U;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t20 = 403467583898837LLU;

    t20 = ((x93|x94)*(x95/x96));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 94U;
	int8_t x98 = INT8_MIN;
	static volatile int8_t x99 = -1;
	static int8_t x100 = INT8_MIN;
	static int32_t t21 = -59;

    t21 = ((x97|x98)*(x99/x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = 18;
	uint32_t x102 = 114739008U;
	uint8_t x103 = 75U;
	static int32_t x104 = INT32_MAX;

    t22 = ((x101|x102)*(x103/x104));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = 248;
	int8_t x106 = -38;
	static int8_t x107 = INT8_MIN;
	int32_t t23 = 1;

    t23 = ((x105|x106)*(x107/x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x120 = INT32_MIN;
	static volatile uint64_t t24 = UINT64_MAX;

    t24 = ((x117|x118)*(x119/x120));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x121 = 13524U;
	static int64_t x122 = 5378769087LL;
	int64_t x123 = 181343577LL;
	static int16_t x124 = INT16_MIN;
	volatile int64_t t25 = -273957000392LL;

    t25 = ((x121|x122)*(x123/x124));

    if (t25 != -29766182150242LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x125 = -6;
	int8_t x126 = -1;
	int64_t x127 = INT64_MAX;
	volatile int8_t x128 = 1;

    t26 = ((x125|x126)*(x127/x128));

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x130 = INT32_MIN;
	uint16_t x131 = 8375U;
	uint64_t x132 = 5276848308846LLU;
	uint64_t t27 = 23504984LLU;

    t27 = ((x129|x130)*(x131/x132));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x134 = INT32_MAX;
	static int8_t x136 = -1;

    t28 = ((x133|x134)*(x135/x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int64_t x139 = -1LL;
	uint16_t x140 = 15637U;

    t29 = ((x137|x138)*(x139/x140));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = 5707222613679590681LLU;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = UINT32_MAX;
	static uint8_t x144 = UINT8_MAX;
	uint64_t t30 = 1490508LLU;

    t30 = ((x141|x142)*(x143/x144));

    if (t30 != 18446744071974721689LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x145 = 19;
	volatile int64_t x146 = 1248174907307LL;
	int8_t x147 = -16;
	volatile int32_t x148 = INT32_MAX;
	int64_t t31 = 1255512303343119383LL;

    t31 = ((x145|x146)*(x147/x148));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x155 = 718810865U;
	uint32_t x156 = 77U;
	int64_t t32 = 3555416276016005494LL;

    t32 = ((x153|x154)*(x155/x156));

    if (t32 != -9335206LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = -1;
	int16_t x159 = 28;
	int16_t x160 = 1908;
	volatile int64_t t33 = 1208487524290LL;

    t33 = ((x157|x158)*(x159/x160));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = INT16_MAX;
	int8_t x162 = -1;
	int32_t x163 = -1;
	int32_t x164 = INT32_MAX;
	int32_t t34 = 27295;

    t34 = ((x161|x162)*(x163/x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x170 = 61;
	int16_t x171 = 0;
	static int64_t x172 = 2468698317LL;
	static int64_t t35 = -688LL;

    t35 = ((x169|x170)*(x171/x172));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x173 = INT32_MIN;
	volatile int64_t x174 = 52031308910LL;
	volatile int64_t t36 = 1197058895209264LL;

    t36 = ((x173|x174)*(x175/x176));

    if (t36 != -28404945184950LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	static volatile int16_t x180 = -1172;
	volatile uint64_t t37 = 7957630816148583204LLU;

    t37 = ((x177|x178)*(x179/x180));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x181 = -1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t38 = -20;

    t38 = ((x181|x182)*(x183/x184));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x185 = UINT32_MAX;
	int32_t x186 = 1347;
	int16_t x188 = INT16_MAX;

    t39 = ((x185|x186)*(x187/x188));

    if (t39 != 4294836220U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x190 = 25U;
	int8_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	static int64_t t40 = -208948270922140LL;

    t40 = ((x189|x190)*(x191/x192));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x193 = 27512576014400583LLU;
	uint32_t x194 = 125U;
	int16_t x196 = 110;
	volatile uint64_t t41 = 186769218795548LLU;

    t41 = ((x193|x194)*(x195/x196));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = -2;
	volatile uint32_t t42 = 646U;

    t42 = ((x197|x198)*(x199/x200));

    if (t42 != 4294967232U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = 87LL;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = INT32_MIN;
	static volatile uint16_t x204 = 21100U;
	uint64_t t43 = 2025359047381294LLU;

    t43 = ((x201|x202)*(x203/x204));

    if (t43 != 101776LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x205 = -1;
	volatile uint32_t x206 = 1797432U;
	int64_t x208 = -541232724LL;
	volatile int64_t t44 = 198883028246346LL;

    t44 = ((x205|x206)*(x207/x208));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = INT16_MIN;
	uint8_t x210 = 26U;
	static uint32_t x211 = 33771U;
	uint8_t x212 = 5U;
	volatile uint32_t t45 = 440892138U;

    t45 = ((x209|x210)*(x211/x212));

    if (t45 != 4073827828U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	uint64_t x215 = 58264183574256841LLU;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t46 = 3166LLU;

    t46 = ((x213|x214)*(x215/x216));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x218 = 2508747371LLU;
	uint16_t x220 = 43U;

    t47 = ((x217|x218)*(x219/x220));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x221 = 1LL;
	int16_t x222 = INT16_MAX;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = -13215769LL;
	int64_t t48 = 4144951LL;

    t48 = ((x221|x222)*(x223/x224));

    if (t48 != 5308254LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 5LLU;
	static uint64_t t49 = 649500403LLU;

    t49 = ((x225|x226)*(x227/x228));

    if (t49 != 16602069666338596455LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x229 = 242671840053LLU;
	uint32_t x230 = UINT32_MAX;
	uint64_t t50 = 51810896LLU;

    t50 = ((x229|x230)*(x231/x232));

    if (t50 != 18446743828896415745LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	static volatile int32_t x235 = -1;
	uint64_t x236 = 438857777LLU;
	uint64_t t51 = 32777986453LLU;

    t51 = ((x233|x234)*(x235/x236));

    if (t51 != 18446744031676015832LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = 55;
	uint8_t x238 = 9U;
	int64_t x239 = INT64_MAX;
	volatile int64_t t52 = -77248701LL;

    t52 = ((x237|x238)*(x239/x240));

    if (t52 != 10800137211948LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = 1;
	int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	static volatile int64_t t53 = -5774631270LL;

    t53 = ((x241|x242)*(x243/x244));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x245 = INT8_MAX;
	uint64_t x246 = UINT64_MAX;
	static volatile uint64_t x247 = 238514419120005145LLU;
	int32_t x248 = INT32_MAX;
	volatile uint64_t t54 = 8614463383LLU;

    t54 = ((x245|x246)*(x247/x248));

    if (t54 != 18446744073598484685LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MAX;
	volatile int64_t t55 = -5419LL;

    t55 = ((x253|x254)*(x255/x256));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	static int32_t t56 = -41;

    t56 = ((x257|x258)*(x259/x260));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = -1;
	int16_t x263 = -509;
	int64_t x264 = -9182LL;

    t57 = ((x261|x262)*(x263/x264));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t58 = 4LL;

    t58 = ((x265|x266)*(x267/x268));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x269 = 5U;
	static uint8_t x270 = UINT8_MAX;
	int16_t x271 = 27;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t59 = 3937646985365LLU;

    t59 = ((x269|x270)*(x271/x272));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x273 = INT8_MIN;
	int16_t x275 = 115;
	static int8_t x276 = -17;
	static int32_t t60 = -188;

    t60 = ((x273|x274)*(x275/x276));

    if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x277 = 14250U;
	uint8_t x278 = 102U;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = 1;
	volatile int32_t t61 = -64;

    t61 = ((x277|x278)*(x279/x280));

    if (t61 != -469172224) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x281 = 4U;
	int16_t x282 = INT16_MIN;
	static int8_t x283 = -1;
	int16_t x284 = INT16_MAX;
	int32_t t62 = 19599665;

    t62 = ((x281|x282)*(x283/x284));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = 110458736580970LL;
	uint64_t x286 = 19698LLU;
	int32_t x288 = INT32_MIN;

    t63 = ((x285|x286)*(x287/x288));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x289 = 12U;
	uint8_t x290 = 70U;
	int32_t x291 = INT32_MAX;
	volatile int16_t x292 = 103;
	static int32_t t64 = 388;

    t64 = ((x289|x290)*(x291/x292));

    if (t64 != 1626249690) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x297 = 9265382U;
	int64_t x298 = 3253725792552819LL;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = 1428;
	volatile int64_t t65 = 2155224921074LL;

    t65 = ((x297|x298)*(x299/x300));

    if (t65 != -71581967620894522LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x307 = 20U;
	int8_t x308 = INT8_MAX;
	volatile uint32_t t66 = 1U;

    t66 = ((x305|x306)*(x307/x308));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x309 = INT16_MAX;
	uint64_t x310 = 525938LLU;
	int32_t x312 = -28533;
	static uint64_t t67 = 1609690LLU;

    t67 = ((x309|x310)*(x311/x312));

    if (t67 != 18446744073708437506LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x314 = INT8_MIN;
	int32_t x316 = 2424530;
	static volatile int32_t t68 = 58613;

    t68 = ((x313|x314)*(x315/x316));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x317 = -1;
	volatile int8_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	int64_t t69 = -94005352892LL;

    t69 = ((x317|x318)*(x319/x320));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x321 = 1;
	int8_t x322 = -62;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = UINT32_MAX;
	volatile int64_t t70 = 979167840109LL;

    t70 = ((x321|x322)*(x323/x324));

    if (t70 != -130996502528LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	int8_t x327 = -1;
	volatile int8_t x328 = -1;
	static volatile int32_t t71 = 648176633;

    t71 = ((x325|x326)*(x327/x328));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x329 = 10U;
	uint64_t x330 = UINT64_MAX;
	static int64_t x331 = 1LL;
	volatile uint64_t t72 = 30509932LLU;

    t72 = ((x329|x330)*(x331/x332));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x337 = 13U;
	int64_t x338 = INT64_MIN;
	static volatile uint16_t x339 = 897U;
	int16_t x340 = INT16_MIN;
	volatile int64_t t73 = 0LL;

    t73 = ((x337|x338)*(x339/x340));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x342 = INT32_MAX;
	static int16_t x344 = -1;
	static volatile int32_t t74 = 7;

    t74 = ((x341|x342)*(x343/x344));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = 1847854;
	volatile int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MAX;
	volatile int32_t t75 = 1120588;

    t75 = ((x345|x346)*(x347/x348));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	volatile int64_t t76 = -391109251LL;

    t76 = ((x349|x350)*(x351/x352));

    if (t76 != -46912494698496LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x353 = 15;
	uint8_t x354 = 3U;
	uint32_t x355 = 6U;
	static uint32_t t77 = 1813U;

    t77 = ((x353|x354)*(x355/x356));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x357 = -55;
	int64_t x358 = INT64_MIN;
	static uint16_t x359 = UINT16_MAX;
	volatile uint32_t x360 = 751U;

    t78 = ((x357|x358)*(x359/x360));

    if (t78 != -4785LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MAX;
	volatile int16_t x364 = 103;
	static volatile int64_t t79 = 25451508LL;

    t79 = ((x361|x362)*(x363/x364));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	uint8_t x367 = 78U;
	int32_t x368 = INT32_MAX;
	int64_t t80 = -49607627292273LL;

    t80 = ((x365|x366)*(x367/x368));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x369 = -1012;
	static int8_t x370 = INT8_MAX;
	int64_t x371 = 1836981854210498LL;
	static volatile uint64_t t81 = 13692705923497LLU;

    t81 = ((x369|x370)*(x371/x372));

    if (t81 != 18446687862591204544LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = -1LL;
	int64_t x382 = INT64_MIN;
	int8_t x383 = -1;
	int16_t x384 = 7752;
	volatile int64_t t82 = -2958LL;

    t82 = ((x381|x382)*(x383/x384));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	static uint32_t x387 = 172048U;
	uint32_t x388 = 29779263U;

    t83 = ((x385|x386)*(x387/x388));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x389 = -58;
	volatile uint64_t x390 = UINT64_MAX;
	int8_t x391 = 18;
	uint8_t x392 = UINT8_MAX;
	static volatile uint64_t t84 = 380798298LLU;

    t84 = ((x389|x390)*(x391/x392));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x393 = 106U;
	static int16_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;
	uint64_t x396 = 4413485753713437LLU;
	static uint64_t t85 = 5605670736LLU;

    t85 = ((x393|x394)*(x395/x396));

    if (t85 != 18446744073709547437LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x397 = 32U;
	static int64_t x398 = 1001834505LL;
	static int16_t x399 = 34;
	static int64_t x400 = -4756630460548428LL;
	volatile int64_t t86 = -1547708349632LL;

    t86 = ((x397|x398)*(x399/x400));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x402 = 2549LLU;
	int32_t x403 = 31924;
	volatile int8_t x404 = INT8_MAX;
	volatile uint64_t t87 = 160342LLU;

    t87 = ((x401|x402)*(x403/x404));

    if (t87 != 18446743994082357549LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x406 = INT64_MAX;
	uint16_t x407 = 18346U;
	volatile int64_t x408 = -1LL;
	int64_t t88 = -2711359101938392282LL;

    t88 = ((x405|x406)*(x407/x408));

    if (t88 != 18346LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x410 = INT16_MIN;
	uint32_t x411 = 289651U;
	static int32_t x412 = INT32_MAX;

    t89 = ((x409|x410)*(x411/x412));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x413 = -1;
	uint64_t x416 = 3519112032949865576LLU;
	uint64_t t90 = 187811436760137805LLU;

    t90 = ((x413|x414)*(x415/x416));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x418 = UINT64_MAX;
	uint16_t x419 = 944U;
	int64_t x420 = INT64_MAX;
	static volatile uint64_t t91 = 165298101LLU;

    t91 = ((x417|x418)*(x419/x420));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x422 = INT16_MIN;
	static volatile int16_t x423 = 4035;
	volatile uint32_t x424 = 2U;
	uint32_t t92 = 11884U;

    t92 = ((x421|x422)*(x423/x424));

    if (t92 != 4228874240U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x429 = 26;
	uint32_t x430 = 6739U;
	int64_t x431 = -1LL;
	static int32_t x432 = -1;
	volatile int64_t t93 = -125LL;

    t93 = ((x429|x430)*(x431/x432));

    if (t93 != 6747LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x433 = 22498LLU;
	volatile int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	static int16_t x436 = -9;
	volatile uint64_t t94 = 1LLU;

    t94 = ((x433|x434)*(x435/x436));

    if (t94 != 18446744073672168816LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x437 = 2;
	static volatile int64_t x438 = -117LL;
	uint8_t x439 = 13U;
	static int8_t x440 = -1;
	int64_t t95 = -80423402571610302LL;

    t95 = ((x437|x438)*(x439/x440));

    if (t95 != 1521LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x445 = -1LL;
	static int32_t x446 = INT32_MAX;
	uint16_t x448 = UINT16_MAX;

    t96 = ((x445|x446)*(x447/x448));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x449 = INT64_MIN;
	static int8_t x450 = 3;
	int64_t x451 = 45LL;

    t97 = ((x449|x450)*(x451/x452));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x453 = 1U;
	volatile int16_t x454 = -23;
	static int8_t x455 = -9;
	int16_t x456 = -1;
	int32_t t98 = -16942808;

    t98 = ((x453|x454)*(x455/x456));

    if (t98 != -207) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x457 = UINT64_MAX;
	static uint32_t x458 = 96U;
	int16_t x459 = -214;
	int64_t x460 = -213392212008793694LL;
	static volatile uint64_t t99 = 7049400LLU;

    t99 = ((x457|x458)*(x459/x460));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x465 = -56;
	uint8_t x466 = UINT8_MAX;
	int64_t x467 = 240030LL;
	int64_t x468 = INT64_MIN;
	volatile int64_t t100 = -3882LL;

    t100 = ((x465|x466)*(x467/x468));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x469 = INT32_MAX;
	static int32_t x470 = INT32_MIN;
	static int64_t x471 = -1LL;
	int8_t x472 = -51;
	volatile int64_t t101 = 2LL;

    t101 = ((x469|x470)*(x471/x472));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x473 = UINT32_MAX;
	static volatile uint32_t x476 = 4U;
	static uint64_t t102 = 186291670LLU;

    t102 = ((x473|x474)*(x475/x476));

    if (t102 != 12108716503540995594LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x477 = 27LLU;
	uint32_t x478 = 29093113U;
	int64_t x479 = -1LL;

    t103 = ((x477|x478)*(x479/x480));

    if (t103 != 29093115LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x481 = 41043895U;
	static uint16_t x484 = UINT16_MAX;
	volatile int64_t t104 = 774559794884329831LL;

    t104 = ((x481|x482)*(x483/x484));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x485 = -1;
	volatile int64_t x486 = INT64_MAX;
	uint64_t x487 = UINT64_MAX;
	static int16_t x488 = INT16_MIN;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x485|x486)*(x487/x488));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x493 = INT8_MAX;
	uint64_t x494 = UINT64_MAX;
	uint32_t x495 = 0U;
	static int8_t x496 = INT8_MIN;
	volatile uint64_t t106 = 3049476LLU;

    t106 = ((x493|x494)*(x495/x496));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	int16_t x500 = -15402;

    t107 = ((x497|x498)*(x499/x500));

    if (t107 != 18446145231219170187LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x502 = -734;
	int16_t x504 = INT16_MAX;
	static volatile int32_t t108 = -44471;

    t108 = ((x501|x502)*(x503/x504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x505 = 509564343U;
	static int16_t x506 = -1;
	uint16_t x507 = UINT16_MAX;
	static uint32_t t109 = 16U;

    t109 = ((x505|x506)*(x507/x508));

    if (t109 != 1310U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x509 = UINT8_MAX;
	int64_t x510 = -95306592056972LL;
	int32_t x512 = INT32_MIN;

    t110 = ((x509|x510)*(x511/x512));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x517 = UINT64_MAX;
	int64_t x518 = -1LL;
	static volatile int8_t x519 = -1;
	uint16_t x520 = UINT16_MAX;
	uint64_t t111 = 10LLU;

    t111 = ((x517|x518)*(x519/x520));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x522 = INT32_MAX;
	int64_t x523 = 7598LL;

    t112 = ((x521|x522)*(x523/x524));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x526 = INT8_MIN;
	volatile int16_t x528 = INT16_MIN;
	static int32_t t113 = -30166;

    t113 = ((x525|x526)*(x527/x528));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x529 = -1;
	int32_t x530 = INT32_MIN;
	int32_t x531 = INT32_MIN;

    t114 = ((x529|x530)*(x531/x532));

    if (t114 != -102261126) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t115 = 7;

    t115 = ((x537|x538)*(x539/x540));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x541 = 372375350;
	static volatile int32_t x542 = INT32_MIN;
	int16_t x544 = INT16_MIN;

    t116 = ((x541|x542)*(x543/x544));

    if (t116 != 1775108298) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x545 = 6792U;
	static int16_t x546 = 9854;
	static int8_t x547 = INT8_MAX;
	static int8_t x548 = -1;
	int32_t t117 = 208475;

    t117 = ((x545|x546)*(x547/x548));

    if (t117 != -2048002) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = -1LL;
	volatile uint8_t x550 = UINT8_MAX;
	int16_t x552 = INT16_MAX;
	int64_t t118 = 20836648LL;

    t118 = ((x549|x550)*(x551/x552));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = 832LLU;
	int64_t x556 = 25260203LL;
	static uint64_t t119 = 1LLU;

    t119 = ((x553|x554)*(x555/x556));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x558 = -1;
	int64_t x560 = INT64_MIN;
	int64_t t120 = -2059260LL;

    t120 = ((x557|x558)*(x559/x560));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x561 = INT16_MIN;
	uint64_t x562 = 8134LLU;
	int16_t x564 = -1;

    t121 = ((x561|x562)*(x563/x564));

    if (t121 != 18446744073709526982LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x566 = UINT8_MAX;
	int16_t x567 = 11;
	int8_t x568 = -1;
	volatile int64_t t122 = -648631LL;

    t122 = ((x565|x566)*(x567/x568));

    if (t122 != 11LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x573 = 728597U;
	int16_t x574 = 4631;
	static int64_t x575 = -1LL;

    t123 = ((x573|x574)*(x575/x576));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x581 = 93U;
	static int64_t x582 = INT64_MAX;
	int16_t x583 = -2483;
	volatile uint64_t x584 = UINT64_MAX;
	volatile uint64_t t124 = 12501714881426810LLU;

    t124 = ((x581|x582)*(x583/x584));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x585 = INT64_MIN;
	static int8_t x586 = INT8_MIN;
	int16_t x587 = 3;
	volatile int64_t x588 = 35131802529LL;

    t125 = ((x585|x586)*(x587/x588));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x589 = 0;
	volatile int32_t x590 = INT32_MAX;
	int8_t x591 = 10;
	static int16_t x592 = INT16_MIN;
	static volatile int32_t t126 = -415;

    t126 = ((x589|x590)*(x591/x592));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x593 = -9593808325LL;
	int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	volatile int64_t t127 = -3522330LL;

    t127 = ((x593|x594)*(x595/x596));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x597 = 1U;
	static int16_t x598 = INT16_MAX;
	uint32_t x599 = UINT32_MAX;
	int32_t x600 = INT32_MAX;

    t128 = ((x597|x598)*(x599/x600));

    if (t128 != 65534U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x601 = UINT8_MAX;
	uint16_t x602 = 6U;
	uint32_t x604 = UINT32_MAX;
	volatile uint32_t t129 = 1699258905U;

    t129 = ((x601|x602)*(x603/x604));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x605 = INT64_MIN;
	int64_t x606 = INT64_MIN;
	volatile int8_t x607 = -1;
	int64_t x608 = -1LL;
	int64_t t130 = INT64_MIN;

    t130 = ((x605|x606)*(x607/x608));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x609 = -103;
	int16_t x610 = -1;
	int32_t x611 = -2;
	uint8_t x612 = UINT8_MAX;

    t131 = ((x609|x610)*(x611/x612));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x614 = -1;
	int64_t x615 = INT64_MAX;
	int32_t x616 = INT32_MAX;
	volatile int64_t t132 = 95655702802LL;

    t132 = ((x613|x614)*(x615/x616));

    if (t132 != -4294967298LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x617 = INT16_MAX;
	static uint16_t x618 = 379U;
	volatile int16_t x619 = -1;

    t133 = ((x617|x618)*(x619/x620));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MAX;
	uint32_t t134 = 3043U;

    t134 = ((x621|x622)*(x623/x624));

    if (t134 != 2083259368U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x625 = -46;
	uint8_t x626 = 24U;
	uint32_t x627 = 1033908941U;
	int16_t x628 = INT16_MAX;
	uint32_t t135 = 7U;

    t135 = ((x625|x626)*(x627/x628));

    if (t135 != 4293768282U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x629 = INT8_MIN;
	int64_t x630 = 8372893984687392LL;
	int8_t x631 = -1;
	uint64_t x632 = 8977397618LLU;
	uint64_t t136 = 27427264331341LLU;

    t136 = ((x629|x630)*(x631/x632));

    if (t136 != 18446743876448885920LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x633 = 88U;
	static volatile int16_t x634 = 1;
	int64_t x635 = INT64_MAX;
	int16_t x636 = INT16_MIN;

    t137 = ((x633|x634)*(x635/x636));

    if (t137 != -25051272927248295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x637 = INT8_MIN;
	static uint8_t x638 = 10U;
	int8_t x639 = INT8_MAX;
	uint16_t x640 = 293U;
	volatile int32_t t138 = -3;

    t138 = ((x637|x638)*(x639/x640));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x642 = INT16_MIN;
	int16_t x643 = -1;
	int32_t t139 = 19603;

    t139 = ((x641|x642)*(x643/x644));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x645 = 34522530280310511LLU;
	int64_t x646 = 109919694LL;
	int16_t x647 = INT16_MAX;
	volatile uint64_t x648 = 503279087964LLU;

    t140 = ((x645|x646)*(x647/x648));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x649 = 232LLU;
	uint16_t x650 = 1765U;
	uint8_t x651 = UINT8_MAX;
	volatile uint64_t t141 = 6LLU;

    t141 = ((x649|x650)*(x651/x652));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x653 = INT8_MAX;
	volatile int8_t x655 = -1;
	int32_t x656 = -1;

    t142 = ((x653|x654)*(x655/x656));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x657 = -3;
	volatile int8_t x658 = INT8_MIN;
	uint8_t x659 = UINT8_MAX;
	static int32_t t143 = 763991;

    t143 = ((x657|x658)*(x659/x660));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x661 = 162247U;
	uint32_t x662 = 56247139U;
	uint32_t t144 = 18075U;

    t144 = ((x661|x662)*(x663/x664));

    if (t144 != 3233637095U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x665 = 805U;
	uint64_t x667 = 1000122082026738464LLU;
	int32_t x668 = 16524510;
	static uint64_t t145 = 105262LLU;

    t145 = ((x665|x666)*(x667/x668));

    if (t145 != 1983175311186209LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x669 = -556;
	uint8_t x671 = 0U;
	static int64_t x672 = INT64_MAX;
	int64_t t146 = -198232958318LL;

    t146 = ((x669|x670)*(x671/x672));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x674 = INT16_MIN;
	static uint32_t x675 = UINT32_MAX;
	int8_t x676 = -1;
	int64_t t147 = 13317912327230LL;

    t147 = ((x673|x674)*(x675/x676));

    if (t147 != -32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x677 = -1LL;
	int16_t x678 = 1;
	int32_t x679 = INT32_MIN;
	static int64_t t148 = 2919695472185LL;

    t148 = ((x677|x678)*(x679/x680));

    if (t148 != 151369LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x683 = INT16_MAX;
	int32_t t149 = 6630025;

    t149 = ((x681|x682)*(x683/x684));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x685 = -1;
	uint16_t x686 = UINT16_MAX;
	volatile uint16_t x687 = 6U;
	static uint64_t t150 = 370164040066636647LLU;

    t150 = ((x685|x686)*(x687/x688));

    if (t150 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x689 = 4;
	static uint16_t x691 = 36U;
	volatile int32_t t151 = -5453928;

    t151 = ((x689|x690)*(x691/x692));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MIN;
	int8_t x696 = -1;
	int64_t t152 = 4003115851LL;

    t152 = ((x693|x694)*(x695/x696));

    if (t152 != 2147483648LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x698 = -3;
	volatile int32_t x699 = 0;
	int64_t x700 = INT64_MIN;
	int64_t t153 = 63877LL;

    t153 = ((x697|x698)*(x699/x700));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x701 = 5233817538LL;
	static int16_t x702 = INT16_MIN;
	static uint16_t x703 = UINT16_MAX;
	int32_t x704 = 7037737;

    t154 = ((x701|x702)*(x703/x704));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x705 = -1;
	static int8_t x706 = INT8_MAX;
	volatile uint32_t t155 = 2U;

    t155 = ((x705|x706)*(x707/x708));

    if (t155 != 4294967292U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x712 = INT32_MIN;
	volatile int32_t t156 = 29371299;

    t156 = ((x709|x710)*(x711/x712));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x713 = INT64_MAX;
	static int32_t x714 = 54806;
	volatile int8_t x715 = 5;
	uint8_t x716 = 5U;
	volatile int64_t t157 = INT64_MAX;

    t157 = ((x713|x714)*(x715/x716));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x719 = INT32_MAX;
	int64_t x720 = INT64_MAX;
	static volatile int64_t t158 = -27208915LL;

    t158 = ((x717|x718)*(x719/x720));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x725 = 352U;
	static volatile uint16_t x726 = 174U;
	int64_t x728 = -8LL;

    t159 = ((x725|x726)*(x727/x728));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x729 = INT32_MIN;
	static int32_t x730 = INT32_MAX;
	static uint64_t x732 = 881915989LLU;
	volatile uint64_t t160 = 1414470649603LLU;

    t160 = ((x729|x730)*(x731/x732));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x737 = INT16_MAX;
	static int8_t x739 = -1;
	volatile uint8_t x740 = UINT8_MAX;

    t161 = ((x737|x738)*(x739/x740));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x741 = INT64_MIN;
	int8_t x742 = INT8_MIN;
	static int32_t x743 = INT32_MIN;
	volatile uint32_t x744 = 280U;
	int64_t t162 = 14179LL;

    t162 = ((x741|x742)*(x743/x744));

    if (t162 != -981706752LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x745 = -365013123240093LL;
	uint64_t x746 = 152339LLU;
	volatile uint32_t x747 = 35969093U;
	volatile uint64_t x748 = 1535736749LLU;
	volatile uint64_t t163 = 33540885670339LLU;

    t163 = ((x745|x746)*(x747/x748));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x749 = UINT16_MAX;
	uint16_t x750 = 540U;
	int8_t x751 = INT8_MAX;
	volatile int32_t t164 = 16910643;

    t164 = ((x749|x750)*(x751/x752));

    if (t164 != 2031585) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x757 = 1U;
	int16_t x758 = 19;
	int64_t x759 = -1LL;
	int16_t x760 = INT16_MAX;
	static volatile int64_t t165 = -112365796951LL;

    t165 = ((x757|x758)*(x759/x760));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x762 = -1LL;
	static uint16_t x763 = UINT16_MAX;
	static volatile int64_t t166 = 1406096671LL;

    t166 = ((x761|x762)*(x763/x764));

    if (t166 != -257LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x765 = 0;
	volatile int32_t x767 = INT32_MAX;
	static uint32_t x768 = 516845U;

    t167 = ((x765|x766)*(x767/x768));

    if (t167 != 2666868U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x769 = -31317;
	uint16_t x770 = 0U;
	int16_t x771 = INT16_MAX;
	static int64_t t168 = -18697657822852LL;

    t168 = ((x769|x770)*(x771/x772));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x773 = INT8_MIN;
	volatile int16_t x774 = -1;
	uint16_t x776 = 13U;
	volatile int32_t t169 = -141477390;

    t169 = ((x773|x774)*(x775/x776));

    if (t169 != 9) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = -28;
	uint16_t x778 = 4319U;
	static int8_t x779 = -1;
	int8_t x780 = INT8_MIN;

    t170 = ((x777|x778)*(x779/x780));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x781 = -2LL;
	uint8_t x784 = 19U;
	int64_t t171 = 1LL;

    t171 = ((x781|x782)*(x783/x784));

    if (t171 != -12LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x785 = INT64_MAX;
	static uint32_t x786 = UINT32_MAX;
	static int8_t x788 = INT8_MIN;
	static volatile int64_t t172 = INT64_MAX;

    t172 = ((x785|x786)*(x787/x788));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x789 = INT16_MIN;
	volatile uint16_t x790 = 19U;
	int8_t x791 = 15;
	volatile int32_t t173 = -2769048;

    t173 = ((x789|x790)*(x791/x792));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x793 = -10;
	static int64_t x794 = 8974880354LL;
	int8_t x795 = -1;
	static int8_t x796 = -1;
	volatile int64_t t174 = 819265378269208764LL;

    t174 = ((x793|x794)*(x795/x796));

    if (t174 != -10LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x797 = INT32_MIN;
	volatile int8_t x798 = INT8_MIN;
	uint8_t x799 = UINT8_MAX;
	uint16_t x800 = 764U;
	volatile int32_t t175 = -5137471;

    t175 = ((x797|x798)*(x799/x800));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x802 = INT64_MIN;
	volatile uint8_t x804 = UINT8_MAX;
	static int64_t t176 = -38LL;

    t176 = ((x801|x802)*(x803/x804));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x805 = 74;
	int8_t x806 = INT8_MAX;
	int8_t x807 = INT8_MAX;
	int64_t x808 = INT64_MIN;

    t177 = ((x805|x806)*(x807/x808));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x817 = INT8_MIN;
	static int64_t x818 = INT64_MAX;
	int64_t t178 = -464056675LL;

    t178 = ((x817|x818)*(x819/x820));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x821 = INT32_MAX;
	volatile int8_t x823 = -1;
	uint64_t x824 = 420479212982056866LLU;
	volatile uint64_t t179 = 1164763239966LLU;

    t179 = ((x821|x822)*(x823/x824));

    if (t179 != 92341796821LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x825 = 18091LL;
	uint32_t x827 = 1005292781U;
	int32_t x828 = INT32_MIN;
	volatile int64_t t180 = 2212106618970835LL;

    t180 = ((x825|x826)*(x827/x828));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x829 = 21542U;
	int16_t x830 = INT16_MAX;
	int32_t x831 = 47426384;
	uint64_t x832 = 8492709059258969764LLU;
	volatile uint64_t t181 = 74215258521125107LLU;

    t181 = ((x829|x830)*(x831/x832));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x833 = 94U;
	int8_t x834 = INT8_MAX;
	static int8_t x836 = 4;
	int32_t t182 = -1;

    t182 = ((x833|x834)*(x835/x836));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x838 = -1;
	int8_t x839 = -55;
	uint16_t x840 = UINT16_MAX;
	volatile int32_t t183 = -218031;

    t183 = ((x837|x838)*(x839/x840));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x841 = -1;
	static int32_t x842 = -1;
	volatile int32_t x843 = -1;
	static int32_t t184 = 311428;

    t184 = ((x841|x842)*(x843/x844));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x845 = INT32_MAX;
	int64_t x846 = -1LL;
	uint8_t x848 = 5U;
	volatile int64_t t185 = 28037333199LL;

    t185 = ((x845|x846)*(x847/x848));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x849 = 1068599677U;
	int8_t x850 = INT8_MIN;
	int32_t x851 = 23865005;
	uint8_t x852 = UINT8_MAX;

    t186 = ((x849|x850)*(x851/x852));

    if (t186 != 4294686532U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x853 = UINT64_MAX;
	static uint32_t x854 = UINT32_MAX;
	int8_t x855 = 3;
	uint64_t x856 = UINT64_MAX;
	uint64_t t187 = 238LLU;

    t187 = ((x853|x854)*(x855/x856));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x857 = INT16_MIN;
	int8_t x858 = INT8_MAX;
	static uint16_t x859 = UINT16_MAX;
	int8_t x860 = 1;

    t188 = ((x857|x858)*(x859/x860));

    if (t188 != -2139127935) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x861 = 64191637U;
	static volatile uint16_t x863 = 54U;
	int64_t x864 = INT64_MIN;
	volatile int64_t t189 = -20260479LL;

    t189 = ((x861|x862)*(x863/x864));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x865 = UINT64_MAX;
	int8_t x866 = INT8_MIN;
	int8_t x867 = INT8_MAX;
	uint32_t x868 = 51U;

    t190 = ((x865|x866)*(x867/x868));

    if (t190 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x869 = -109LL;
	int8_t x870 = 31;
	volatile uint32_t x871 = 6574U;
	uint16_t x872 = 6794U;
	int64_t t191 = -15604138844LL;

    t191 = ((x869|x870)*(x871/x872));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x873 = INT16_MAX;
	volatile uint32_t x874 = 848182482U;
	int16_t x875 = INT16_MIN;
	uint16_t x876 = 3U;
	volatile uint32_t t192 = 5U;

    t192 = ((x873|x874)*(x875/x876));

    if (t192 != 207563434U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x877 = 2U;
	int16_t x878 = INT16_MAX;
	int16_t x879 = -1;
	uint16_t x880 = 100U;

    t193 = ((x877|x878)*(x879/x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x881 = -1;
	int8_t x883 = -1;
	uint32_t x884 = UINT32_MAX;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = ((x881|x882)*(x883/x884));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x885 = 40U;
	int8_t x886 = INT8_MAX;
	uint64_t x887 = UINT64_MAX;
	volatile uint64_t t195 = 26355LLU;

    t195 = ((x885|x886)*(x887/x888));

    if (t195 != 127LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x889 = 345843999018LLU;
	static int32_t x890 = -1;
	static int64_t x891 = INT64_MIN;
	volatile int32_t x892 = INT32_MAX;

    t196 = ((x889|x890)*(x891/x892));

    if (t196 != 4294967298LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x893 = INT64_MIN;
	int8_t x894 = INT8_MIN;
	int16_t x895 = 8284;
	uint16_t x896 = 234U;
	int64_t t197 = 14453712063LL;

    t197 = ((x893|x894)*(x895/x896));

    if (t197 != -4480LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x897 = UINT32_MAX;
	int32_t x898 = 1;
	volatile int8_t x899 = 0;
	int8_t x900 = -6;
	static uint32_t t198 = 698U;

    t198 = ((x897|x898)*(x899/x900));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x901 = 19U;
	int32_t x902 = -5;
	int32_t x903 = 1;
	volatile int64_t t199 = -4340LL;

    t199 = ((x901|x902)*(x903/x904));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

