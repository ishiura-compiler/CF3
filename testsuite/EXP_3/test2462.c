
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

int8_t x2 = -1;
int16_t x3 = -1;
volatile int64_t x6 = -87LL;
volatile int8_t x8 = -1;
uint8_t x9 = 30U;
volatile uint32_t x14 = 17U;
volatile int8_t x16 = -1;
uint8_t x22 = 6U;
int8_t x26 = -1;
static uint16_t x28 = 15U;
int32_t t6 = -3;
volatile int8_t x31 = 0;
static int64_t x38 = INT64_MAX;
volatile uint64_t t9 = 29788513LLU;
int32_t x42 = -2228696;
volatile uint64_t t11 = 35LLU;
volatile int64_t x50 = INT64_MIN;
static int8_t x55 = 3;
uint16_t x57 = 23660U;
uint8_t x60 = 6U;
int32_t t14 = -7023;
int8_t x61 = INT8_MAX;
static int64_t t15 = 310872LL;
int32_t x68 = INT32_MIN;
int16_t x71 = -1;
int64_t x74 = -1LL;
static int32_t t18 = 12176;
int8_t x78 = -1;
static volatile int32_t t19 = -4369864;
int32_t x84 = -381467720;
uint32_t x88 = UINT32_MAX;
volatile uint64_t t21 = 2486877402208670LLU;
volatile uint32_t x95 = 127361U;
static volatile uint32_t t23 = 18411U;
static int16_t x99 = INT16_MIN;
int8_t x102 = -8;
uint64_t x104 = 555408LLU;
static uint64_t x114 = 11644174LLU;
int16_t x121 = -1;
uint8_t x126 = 5U;
int8_t x127 = INT8_MAX;
static int64_t x131 = -77723LL;
static uint64_t x132 = 691860124LLU;
uint32_t t34 = 21791U;
int32_t x147 = INT32_MIN;
static uint16_t x150 = 26U;
uint32_t x152 = UINT32_MAX;
uint8_t x155 = 35U;
static int32_t t42 = 392352781;
uint32_t x175 = 349U;
static int32_t x176 = INT32_MIN;
volatile uint64_t t44 = 178687LLU;
int32_t t45 = 15;
volatile uint32_t x186 = 39U;
int32_t x187 = INT32_MIN;
int32_t x191 = -1;
uint64_t x200 = 61470LLU;
int16_t x202 = INT16_MIN;
int64_t x207 = INT64_MAX;
uint64_t x210 = 14786116759300LLU;
int8_t x211 = INT8_MIN;
int8_t x213 = INT8_MAX;
volatile int8_t x216 = INT8_MIN;
static int64_t x218 = -1LL;
int16_t x220 = -2;
uint8_t x226 = 19U;
int16_t x231 = -2;
uint8_t x233 = 0U;
int16_t x234 = INT16_MIN;
static uint32_t x236 = UINT32_MAX;
static uint32_t t58 = 170U;
int8_t x237 = INT8_MIN;
int32_t t59 = -226;
int32_t x241 = -1;
uint64_t x249 = 2642161498LLU;
int8_t x255 = INT8_MIN;
int32_t t63 = -11;
volatile int8_t x260 = 3;
volatile int32_t x264 = INT32_MIN;
uint16_t x270 = UINT16_MAX;
int64_t x274 = -1LL;
uint32_t t68 = 1426U;
int32_t x279 = 1345801;
uint64_t x283 = 779192535LLU;
int64_t x286 = INT64_MAX;
volatile int16_t x293 = 17;
uint8_t x300 = UINT8_MAX;
volatile int64_t x301 = INT64_MAX;
int64_t x312 = INT64_MIN;
int8_t x317 = INT8_MIN;
int32_t x319 = 3312;
volatile int32_t t79 = 24576726;
int8_t x323 = INT8_MIN;
static int8_t x327 = 0;
int32_t x328 = -1;
static int32_t x329 = INT32_MAX;
int8_t x336 = 6;
int16_t x342 = INT16_MIN;
uint64_t x344 = 169LLU;
uint64_t t85 = 207LLU;
int32_t x347 = INT32_MIN;
int32_t x349 = -1;
volatile int32_t x356 = INT32_MIN;
volatile uint32_t x361 = 0U;
static uint8_t x363 = UINT8_MAX;
volatile uint64_t t90 = 16366528951407987LLU;
volatile int16_t x365 = -774;
volatile int8_t x368 = -1;
static int64_t x369 = INT64_MAX;
int16_t x375 = 477;
int16_t x377 = -1;
int32_t t94 = -1;
int64_t x385 = -2327640019669LL;
int32_t x391 = INT32_MAX;
volatile int32_t x397 = -673005;
int16_t x403 = -2;
uint8_t x409 = 17U;
static uint8_t x410 = 105U;
int8_t x411 = INT8_MAX;
volatile int64_t t102 = 1466LL;
static volatile int32_t x421 = INT32_MIN;
static uint8_t x424 = 41U;
int64_t x425 = INT64_MAX;
volatile int16_t x434 = INT16_MIN;
int64_t x440 = 690450857259LL;
uint64_t x451 = UINT64_MAX;
volatile uint64_t t112 = 5092100LLU;
static int32_t x453 = INT32_MAX;
uint64_t x456 = UINT64_MAX;
int8_t x469 = INT8_MIN;
int32_t x471 = -1;
int32_t t117 = 242249;
static uint8_t x474 = UINT8_MAX;
volatile int32_t t118 = 13;
static uint8_t x477 = UINT8_MAX;
uint64_t x480 = 629315085877192511LLU;
int64_t x484 = -382LL;
static int32_t x489 = INT32_MIN;
static uint64_t t122 = 106793450671610LLU;
uint8_t x493 = 14U;
uint64_t x496 = 6898684LLU;
volatile int16_t x497 = -1;
static int8_t x501 = 1;
static volatile int64_t x502 = INT64_MIN;
volatile uint64_t t125 = 1687353035075509LLU;
int32_t x507 = INT32_MIN;
volatile int8_t x508 = -1;
uint64_t x510 = 170624693932LLU;
int8_t x511 = INT8_MIN;
static int32_t t127 = -652020845;
int64_t x514 = -1LL;
uint32_t t128 = 28019666U;
uint32_t x521 = 187U;
static volatile int32_t t130 = 184982608;
uint32_t x536 = UINT32_MAX;
uint32_t x537 = 12U;
uint16_t x541 = UINT16_MAX;
static uint32_t t136 = 30818U;
int16_t x552 = -1974;
static volatile int64_t x557 = -21291611110LL;
static uint8_t x563 = 74U;
volatile int64_t x569 = -979795124LL;
volatile uint32_t x570 = UINT32_MAX;
int32_t x575 = -1;
int16_t x585 = -1;
volatile uint32_t x591 = 10263U;
uint8_t x597 = UINT8_MAX;
int32_t x602 = -25278;
volatile int32_t t150 = 2559;
volatile int16_t x606 = INT16_MIN;
uint64_t x609 = UINT64_MAX;
uint64_t x612 = 2537LLU;
volatile uint16_t x620 = 12U;
volatile int64_t x624 = -201001639758LL;
static volatile uint32_t t158 = 4880U;
static int32_t x637 = INT32_MIN;
uint64_t x640 = 147837632249712LLU;
int64_t t160 = 436848558036121653LL;
static uint64_t x654 = 7509375153889LLU;
static int32_t t163 = 905422091;
volatile int32_t x665 = INT32_MIN;
int64_t x666 = 384713103885199LL;
int16_t x667 = 3560;
volatile int32_t t166 = 1571898;
int32_t x670 = 1;
int32_t t167 = -2;
static int8_t x677 = -6;
uint16_t x679 = 7U;
volatile int32_t t170 = -33151;
uint16_t x686 = UINT16_MAX;
int16_t x689 = INT16_MAX;
volatile int16_t x703 = 10;
volatile int32_t t175 = -4;
int32_t t176 = 61769786;
int64_t t177 = 64010368641633038LL;
volatile int8_t x718 = 3;
static volatile int32_t t179 = 118;
uint8_t x724 = 1U;
int8_t x729 = 1;
static int8_t x735 = INT8_MIN;
int64_t x744 = INT64_MIN;
uint32_t x747 = 1762U;
volatile uint64_t x748 = UINT64_MAX;
int64_t x753 = -1LL;
volatile uint64_t x754 = UINT64_MAX;
uint32_t x757 = UINT32_MAX;
int8_t x761 = -15;
static uint32_t x767 = 0U;
uint16_t x775 = 81U;
static volatile int32_t t193 = 41724310;
int64_t x788 = INT64_MIN;
uint16_t x791 = 25604U;
int16_t x794 = INT16_MIN;
int8_t x799 = -16;
int32_t t199 = 2;


void f0(void) {
    	int32_t x1 = -4444;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 9018U;

    t0 = ((x1==x2)&(x3|x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int32_t x7 = INT32_MIN;
	int32_t t1 = -37;

    t1 = ((x5==x6)&(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	volatile uint32_t x11 = 230U;
	int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 86713U;

    t2 = ((x9==x10)&(x11|x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	volatile int16_t x15 = INT16_MIN;
	static int32_t t3 = 43140;

    t3 = ((x13==x14)&(x15|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	int16_t x18 = INT16_MAX;
	static int64_t x19 = 895664LL;
	uint16_t x20 = 540U;
	volatile int64_t t4 = -82135107LL;

    t4 = ((x17==x18)&(x19|x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	static volatile int8_t x23 = INT8_MIN;
	uint16_t x24 = 1817U;
	int32_t t5 = -31;

    t5 = ((x21==x22)&(x23|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 736114;
	int8_t x27 = -1;

    t6 = ((x25==x26)&(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -8175388;
	int64_t x30 = 42LL;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -5;

    t7 = ((x29==x30)&(x31|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = UINT64_MAX;
	int64_t x36 = -1LL;
	uint64_t t8 = 169566679919363LLU;

    t8 = ((x33==x34)&(x35|x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	uint32_t x39 = 11U;
	static uint64_t x40 = 452769LLU;

    t9 = ((x37==x38)&(x39|x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	uint32_t x43 = 0U;
	int64_t x44 = INT64_MIN;
	int64_t t10 = 3LL;

    t10 = ((x41==x42)&(x43|x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = 1364U;
	int32_t x46 = -1;
	volatile uint64_t x47 = 255099233665LLU;
	int16_t x48 = 677;

    t11 = ((x45==x46)&(x47|x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int32_t x52 = -1;
	int32_t t12 = 132488399;

    t12 = ((x49==x50)&(x51|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile uint8_t x54 = 31U;
	int16_t x56 = -20;
	int32_t t13 = 4265;

    t13 = ((x53==x54)&(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = UINT32_MAX;
	int32_t x59 = -205;

    t14 = ((x57==x58)&(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = -1742;
	static int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;

    t15 = ((x61==x62)&(x63|x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	volatile uint32_t x66 = 83490U;
	int32_t x67 = -57128;
	static volatile int32_t t16 = -2866;

    t16 = ((x65==x66)&(x67|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -58009200;
	static uint32_t x70 = 410U;
	uint16_t x72 = 15061U;
	int32_t t17 = -10193;

    t17 = ((x69==x70)&(x71|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	int32_t x75 = -431550840;
	volatile int16_t x76 = INT16_MIN;

    t18 = ((x73==x74)&(x75|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	int16_t x79 = -1;
	volatile int8_t x80 = INT8_MIN;

    t19 = ((x77==x78)&(x79|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	static int8_t x83 = INT8_MAX;
	static int32_t t20 = 1;

    t20 = ((x81==x82)&(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 5;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 14499195965199LLU;

    t21 = ((x85==x86)&(x87|x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 5385954200870784LLU;
	uint8_t x90 = 1U;
	uint64_t x91 = UINT64_MAX;
	volatile int16_t x92 = -1;
	uint64_t t22 = 66LLU;

    t22 = ((x89==x90)&(x91|x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -1;
	static uint64_t x94 = 54902365167426161LLU;
	int32_t x96 = -21;

    t23 = ((x93==x94)&(x95|x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -31536;

    t24 = ((x97==x98)&(x99|x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static uint16_t x103 = 1101U;
	volatile uint64_t t25 = 2667120705LLU;

    t25 = ((x101==x102)&(x103|x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 555LL;
	uint8_t x106 = 28U;
	int64_t x107 = -1981152653LL;
	int64_t x108 = -990323993LL;
	static int64_t t26 = 157537168191LL;

    t26 = ((x105==x106)&(x107|x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 26U;
	int64_t x110 = -6186583974391LL;
	int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = 0U;
	volatile int32_t t27 = 16100193;

    t27 = ((x109==x110)&(x111|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	static uint16_t x115 = 166U;
	static uint64_t x116 = 2297839LLU;
	volatile uint64_t t28 = 2767621006335952LLU;

    t28 = ((x113==x114)&(x115|x116));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 1U;
	int32_t x118 = INT32_MIN;
	static volatile uint16_t x119 = 581U;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t29 = 3057793LLU;

    t29 = ((x117==x118)&(x119|x120));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x122 = 7U;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -3;

    t30 = ((x121==x122)&(x123|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 130548002U;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t31 = -123638784;

    t31 = ((x125==x126)&(x127|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x129 = -94509;
	volatile int8_t x130 = INT8_MIN;
	volatile uint64_t t32 = 591429LLU;

    t32 = ((x129==x130)&(x131|x132));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 395598;
	static volatile uint16_t x134 = UINT16_MAX;
	static int16_t x135 = -1;
	static int16_t x136 = INT16_MAX;
	static int32_t t33 = -120209;

    t33 = ((x133==x134)&(x135|x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	int8_t x139 = -1;
	static uint32_t x140 = UINT32_MAX;

    t34 = ((x137==x138)&(x139|x140));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 7465129205LLU;
	int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 277018U;
	uint32_t t35 = 246745600U;

    t35 = ((x141==x142)&(x143|x144));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 6082343470LL;
	int16_t x146 = -8923;
	static volatile uint8_t x148 = 0U;
	int32_t t36 = 13349;

    t36 = ((x145==x146)&(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 27U;
	volatile int32_t x151 = 88422621;
	volatile uint32_t t37 = 13U;

    t37 = ((x149==x150)&(x151|x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 25U;
	static uint8_t x154 = UINT8_MAX;
	int8_t x156 = -1;
	int32_t t38 = -8364769;

    t38 = ((x153==x154)&(x155|x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int16_t x158 = -389;
	int32_t x159 = -156;
	static uint32_t x160 = 92016219U;
	volatile uint32_t t39 = 3286U;

    t39 = ((x157==x158)&(x159|x160));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	int64_t x162 = INT64_MIN;
	volatile uint16_t x163 = 6U;
	int8_t x164 = INT8_MAX;
	volatile int32_t t40 = -50795;

    t40 = ((x161==x162)&(x163|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = 398;
	int8_t x167 = 11;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -890;

    t41 = ((x165==x166)&(x167|x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	int16_t x170 = -1;
	static int16_t x171 = INT16_MAX;
	int8_t x172 = INT8_MIN;

    t42 = ((x169==x170)&(x171|x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	int64_t x174 = -1LL;
	uint32_t t43 = 319233U;

    t43 = ((x173==x174)&(x175|x176));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 7U;
	int16_t x178 = -69;
	volatile int32_t x179 = INT32_MIN;
	static uint64_t x180 = 66652124139LLU;

    t44 = ((x177==x178)&(x179|x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MAX;
	volatile int64_t x182 = INT64_MIN;
	volatile int8_t x183 = 1;
	int32_t x184 = -1042679;

    t45 = ((x181==x182)&(x183|x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 12047579;

    t46 = ((x185==x186)&(x187|x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -125;
	uint32_t x190 = UINT32_MAX;
	static uint32_t x192 = UINT32_MAX;
	static uint32_t t47 = 20088892U;

    t47 = ((x189==x190)&(x191|x192));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 1236U;
	int32_t x196 = 7801;
	volatile int32_t t48 = 2507;

    t48 = ((x193==x194)&(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int32_t x198 = INT32_MAX;
	int8_t x199 = -1;
	volatile uint64_t t49 = 27196LLU;

    t49 = ((x197==x198)&(x199|x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	static int16_t x203 = 294;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = -706;

    t50 = ((x201==x202)&(x203|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = -1LL;
	int8_t x206 = INT8_MAX;
	static volatile int8_t x208 = INT8_MIN;
	int64_t t51 = -209863114LL;

    t51 = ((x205==x206)&(x207|x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	static volatile uint8_t x212 = 33U;
	int32_t t52 = -229786868;

    t52 = ((x209==x210)&(x211|x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x214 = -11;
	volatile int8_t x215 = -1;
	volatile int32_t t53 = -7454009;

    t53 = ((x213==x214)&(x215|x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	static volatile int32_t x219 = INT32_MIN;
	static int32_t t54 = -936934;

    t54 = ((x217==x218)&(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 169U;
	static int64_t x223 = 391941LL;
	int16_t x224 = INT16_MIN;
	static int64_t t55 = -14516180329851035LL;

    t55 = ((x221==x222)&(x223|x224));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	int64_t x227 = -1LL;
	int8_t x228 = -1;
	int64_t t56 = 12422531LL;

    t56 = ((x225==x226)&(x227|x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	int64_t x230 = -1LL;
	uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 715406LLU;

    t57 = ((x229==x230)&(x231|x232));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x235 = 60;

    t58 = ((x233==x234)&(x235|x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = INT64_MIN;
	static int32_t x239 = INT32_MAX;
	uint16_t x240 = 7U;

    t59 = ((x237==x238)&(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x242 = UINT32_MAX;
	volatile int64_t x243 = INT64_MAX;
	uint64_t x244 = 33994132414LLU;
	uint64_t t60 = 30162LLU;

    t60 = ((x241==x242)&(x243|x244));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 610428715206665LL;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -1913158389182547LL;
	int64_t t61 = 34901058802762LL;

    t61 = ((x245==x246)&(x247|x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x250 = -8;
	int64_t x251 = -1LL;
	uint64_t x252 = 2318174LLU;
	volatile uint64_t t62 = 231162057272974713LLU;

    t62 = ((x249==x250)&(x251|x252));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x253 = 97U;
	uint64_t x254 = 98335206LLU;
	int32_t x256 = -38422426;

    t63 = ((x253==x254)&(x255|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	int64_t x258 = INT64_MAX;
	uint8_t x259 = UINT8_MAX;
	int32_t t64 = -774726438;

    t64 = ((x257==x258)&(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -4072LL;
	static int16_t x262 = 15906;
	int64_t x263 = -1LL;
	volatile int64_t t65 = 12LL;

    t65 = ((x261==x262)&(x263|x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = -343LL;
	static int64_t x267 = INT64_MIN;
	uint32_t x268 = 305U;
	int64_t t66 = -3852843789LL;

    t66 = ((x265==x266)&(x267|x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = INT32_MIN;
	volatile int64_t x271 = INT64_MAX;
	volatile int32_t x272 = 128890;
	volatile int64_t t67 = -1917513LL;

    t67 = ((x269==x270)&(x271|x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 61921U;

    t68 = ((x273==x274)&(x275|x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 13050734LL;
	uint64_t x278 = 3386681209884LLU;
	int8_t x280 = -57;
	volatile int32_t t69 = 18;

    t69 = ((x277==x278)&(x279|x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	int32_t x282 = 113;
	int8_t x284 = INT8_MIN;
	uint64_t t70 = 771777329LLU;

    t70 = ((x281==x282)&(x283|x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	volatile uint64_t x287 = 275729LLU;
	static int16_t x288 = 1466;
	uint64_t t71 = 469961307379LLU;

    t71 = ((x285==x286)&(x287|x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = 953781455LLU;
	int32_t x292 = -384830672;
	volatile uint64_t t72 = 2179345172514LLU;

    t72 = ((x289==x290)&(x291|x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x294 = INT32_MAX;
	static int32_t x295 = INT32_MAX;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t73 = 317LLU;

    t73 = ((x293==x294)&(x295|x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1819;
	volatile int32_t t74 = 1;

    t74 = ((x297==x298)&(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = 9;
	int16_t x303 = -236;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -17498517;

    t75 = ((x301==x302)&(x303|x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x305 = 18666473;
	int64_t x306 = -1LL;
	static int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 10725128;

    t76 = ((x305==x306)&(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 511419408950LL;
	int64_t x310 = -334213994838LL;
	int8_t x311 = 3;
	volatile int64_t t77 = -9331735967876492LL;

    t77 = ((x309==x310)&(x311|x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	int16_t x314 = -1;
	volatile uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 76LLU;
	volatile uint64_t t78 = 210063159997904LLU;

    t78 = ((x313==x314)&(x315|x316));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MIN;
	volatile uint8_t x320 = UINT8_MAX;

    t79 = ((x317==x318)&(x319|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	uint64_t x322 = 3861828715680377LLU;
	int64_t x324 = INT64_MAX;
	static volatile int64_t t80 = 4074087LL;

    t80 = ((x321==x322)&(x323|x324));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = -3;
	int32_t x326 = -1;
	volatile int32_t t81 = -133038;

    t81 = ((x325==x326)&(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MIN;
	int16_t x331 = 59;
	static uint64_t x332 = 496659665022LLU;
	volatile uint64_t t82 = 128654882431106596LLU;

    t82 = ((x329==x330)&(x331|x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -374520;
	volatile int32_t x335 = INT32_MIN;
	int32_t t83 = 5203373;

    t83 = ((x333==x334)&(x335|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 5U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -5;
	volatile int32_t t84 = -2;

    t84 = ((x337==x338)&(x339|x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 831376169179LLU;
	int32_t x343 = 125405;

    t85 = ((x341==x342)&(x343|x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = 494062;
	int64_t x346 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = -626371;

    t86 = ((x345==x346)&(x347|x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = -1;
	uint64_t x351 = 227179623574LLU;
	static int8_t x352 = INT8_MIN;
	uint64_t t87 = 201589672LLU;

    t87 = ((x349==x350)&(x351|x352));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int32_t x354 = -1;
	uint16_t x355 = UINT16_MAX;
	int32_t t88 = 98213;

    t88 = ((x353==x354)&(x355|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -1LL;
	volatile uint64_t x358 = 0LLU;
	volatile uint32_t x359 = UINT32_MAX;
	uint8_t x360 = 108U;
	uint32_t t89 = 222662015U;

    t89 = ((x357==x358)&(x359|x360));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x362 = INT16_MIN;
	static volatile uint64_t x364 = 1827417151126108LLU;

    t90 = ((x361==x362)&(x363|x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = -1962;
	volatile int64_t x367 = INT64_MIN;
	volatile int64_t t91 = 4391280999237LL;

    t91 = ((x365==x366)&(x367|x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x370 = 0;
	int64_t x371 = -1LL;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t92 = -30906LL;

    t92 = ((x369==x370)&(x371|x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -4643;
	int8_t x374 = INT8_MAX;
	volatile int16_t x376 = 62;
	int32_t t93 = -699257;

    t93 = ((x373==x374)&(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x378 = 49U;
	uint16_t x379 = UINT16_MAX;
	volatile uint16_t x380 = 3332U;

    t94 = ((x377==x378)&(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	volatile int16_t x382 = -3333;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 6LLU;

    t95 = ((x381==x382)&(x383|x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = INT8_MIN;
	int64_t x387 = 31065839839985651LL;
	static uint64_t x388 = 103677251151572396LLU;
	uint64_t t96 = 74649311LLU;

    t96 = ((x385==x386)&(x387|x388));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = -83;
	int32_t x390 = INT32_MIN;
	int64_t x392 = 61377408974LL;
	volatile int64_t t97 = 841078978042LL;

    t97 = ((x389==x390)&(x391|x392));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = 1;
	static int32_t x394 = INT32_MIN;
	uint16_t x395 = UINT16_MAX;
	static volatile int64_t x396 = 10556LL;
	int64_t t98 = 117319937732082631LL;

    t98 = ((x393==x394)&(x395|x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = INT32_MIN;
	uint16_t x399 = 26309U;
	int8_t x400 = -1;
	volatile int32_t t99 = 73262653;

    t99 = ((x397==x398)&(x399|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MIN;
	volatile int64_t x404 = INT64_MIN;
	int64_t t100 = 220319140937LL;

    t100 = ((x401==x402)&(x403|x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	volatile int64_t x406 = -820728094LL;
	static int64_t x407 = 24397898347LL;
	int16_t x408 = INT16_MIN;
	int64_t t101 = -12279782564LL;

    t101 = ((x405==x406)&(x407|x408));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x412 = INT64_MIN;

    t102 = ((x409==x410)&(x411|x412));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = INT8_MIN;
	static uint16_t x414 = UINT16_MAX;
	static uint16_t x415 = 0U;
	uint32_t x416 = UINT32_MAX;
	static uint32_t t103 = 428875009U;

    t103 = ((x413==x414)&(x415|x416));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	volatile int8_t x418 = INT8_MAX;
	static int32_t x419 = -1;
	uint16_t x420 = 2240U;
	volatile int32_t t104 = -400557271;

    t104 = ((x417==x418)&(x419|x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x422 = INT8_MAX;
	int16_t x423 = -1;
	static volatile int32_t t105 = 253;

    t105 = ((x421==x422)&(x423|x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MIN;
	static int8_t x427 = INT8_MIN;
	uint64_t x428 = 40560282LLU;
	volatile uint64_t t106 = 132004525294LLU;

    t106 = ((x425==x426)&(x427|x428));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 3U;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = -1;
	static int8_t x432 = INT8_MIN;
	int32_t t107 = -4663;

    t107 = ((x429==x430)&(x431|x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = INT8_MAX;
	int64_t x435 = INT64_MAX;
	volatile int8_t x436 = INT8_MIN;
	static volatile int64_t t108 = 685905174775527LL;

    t108 = ((x433==x434)&(x435|x436));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = INT32_MIN;
	static int64_t x438 = -251743061285LL;
	int16_t x439 = -1;
	volatile int64_t t109 = 45468203091237091LL;

    t109 = ((x437==x438)&(x439|x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	volatile int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	static uint32_t x444 = 106U;
	uint32_t t110 = 1U;

    t110 = ((x441==x442)&(x443|x444));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = INT8_MAX;
	static int32_t x446 = -18816834;
	volatile uint8_t x447 = 20U;
	int64_t x448 = INT64_MAX;
	static volatile int64_t t111 = -1162LL;

    t111 = ((x445==x446)&(x447|x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -38;
	int32_t x450 = INT32_MIN;
	static volatile int64_t x452 = INT64_MIN;

    t112 = ((x449==x450)&(x451|x452));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = UINT16_MAX;
	int32_t x455 = INT32_MIN;
	uint64_t t113 = 202LLU;

    t113 = ((x453==x454)&(x455|x456));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 1U;
	int16_t x458 = -1;
	int32_t x459 = -10;
	int32_t x460 = -129;
	int32_t t114 = -70920;

    t114 = ((x457==x458)&(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 434U;
	uint32_t x462 = 1697U;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 4U;
	volatile int32_t t115 = 4029;

    t115 = ((x461==x462)&(x463|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	uint8_t x466 = 7U;
	static int32_t x467 = -1668876;
	uint32_t x468 = 1939284U;
	static volatile uint32_t t116 = 1210364U;

    t116 = ((x465==x466)&(x467|x468));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 13247163U;
	int16_t x472 = INT16_MIN;

    t117 = ((x469==x470)&(x471|x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -3847418;
	volatile int16_t x475 = INT16_MAX;
	int16_t x476 = 3;

    t118 = ((x473==x474)&(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	volatile int64_t x479 = INT64_MIN;
	volatile uint64_t t119 = 32472635799935187LLU;

    t119 = ((x477==x478)&(x479|x480));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MAX;
	uint64_t x482 = 14874137938LLU;
	int8_t x483 = INT8_MIN;
	volatile int64_t t120 = -8082413244961LL;

    t120 = ((x481==x482)&(x483|x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = -1;
	int64_t x487 = INT64_MAX;
	volatile int16_t x488 = 16;
	int64_t t121 = -5186LL;

    t121 = ((x485==x486)&(x487|x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MAX;
	static volatile uint64_t x492 = UINT64_MAX;

    t122 = ((x489==x490)&(x491|x492));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x494 = INT64_MAX;
	volatile int32_t x495 = -11616;
	uint64_t t123 = 49318273067LLU;

    t123 = ((x493==x494)&(x495|x496));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x498 = UINT32_MAX;
	uint32_t x499 = 449837385U;
	int8_t x500 = 5;
	volatile uint32_t t124 = 15529748U;

    t124 = ((x497==x498)&(x499|x500));

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x503 = UINT64_MAX;
	uint64_t x504 = UINT64_MAX;

    t125 = ((x501==x502)&(x503|x504));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	uint8_t x506 = 18U;
	int32_t t126 = -213581;

    t126 = ((x505==x506)&(x507|x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 3322384449620042776LLU;
	uint16_t x512 = 7850U;

    t127 = ((x509==x510)&(x511|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 125U;
	int8_t x515 = -51;
	uint32_t x516 = UINT32_MAX;

    t128 = ((x513==x514)&(x515|x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int64_t x518 = INT64_MIN;
	uint16_t x519 = 1048U;
	int64_t x520 = 28496LL;
	volatile int64_t t129 = -781LL;

    t129 = ((x517==x518)&(x519|x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MIN;

    t130 = ((x521==x522)&(x523|x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 29U;
	uint16_t x526 = UINT16_MAX;
	int32_t x527 = INT32_MIN;
	static volatile int64_t x528 = 909LL;
	volatile int64_t t131 = 58387156LL;

    t131 = ((x525==x526)&(x527|x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x529 = 6369405LLU;
	int8_t x530 = 1;
	int8_t x531 = -3;
	uint32_t x532 = 3391902U;
	uint32_t t132 = 5188145U;

    t132 = ((x529==x530)&(x531|x532));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 100U;
	static int8_t x534 = 0;
	static int64_t x535 = 393125LL;
	int64_t t133 = 5819LL;

    t133 = ((x533==x534)&(x535|x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x538 = 46U;
	int64_t x539 = INT64_MAX;
	int16_t x540 = -1;
	volatile int64_t t134 = -39109612978715LL;

    t134 = ((x537==x538)&(x539|x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x542 = 29;
	int16_t x543 = -1;
	uint32_t x544 = 3U;
	volatile uint32_t t135 = 4U;

    t135 = ((x541==x542)&(x543|x544));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 17U;
	int16_t x546 = 222;
	uint32_t x547 = 245015499U;
	int8_t x548 = -1;

    t136 = ((x545==x546)&(x547|x548));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = -1;
	static volatile int16_t x550 = -37;
	int8_t x551 = -1;
	volatile int32_t t137 = 389987438;

    t137 = ((x549==x550)&(x551|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = 1;
	int64_t x554 = INT64_MIN;
	int16_t x555 = 0;
	volatile int16_t x556 = -6329;
	volatile int32_t t138 = 431;

    t138 = ((x553==x554)&(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = -4;
	int16_t x559 = -1;
	int64_t x560 = 29604873480837LL;
	volatile int64_t t139 = 19953671859LL;

    t139 = ((x557==x558)&(x559|x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	int16_t x562 = -27;
	static int16_t x564 = -1;
	volatile int32_t t140 = 265;

    t140 = ((x561==x562)&(x563|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	volatile int32_t x566 = INT32_MIN;
	volatile uint8_t x567 = 103U;
	volatile int32_t x568 = -1;
	volatile int32_t t141 = -1350886;

    t141 = ((x565==x566)&(x567|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x571 = -66215;
	int8_t x572 = -1;
	int32_t t142 = 56241228;

    t142 = ((x569==x570)&(x571|x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	int16_t x574 = INT16_MIN;
	static uint8_t x576 = 1U;
	int32_t t143 = -2;

    t143 = ((x573==x574)&(x575|x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 11LL;
	static uint16_t x578 = 65U;
	volatile uint64_t x579 = UINT64_MAX;
	int8_t x580 = INT8_MAX;
	uint64_t t144 = 2309284LLU;

    t144 = ((x577==x578)&(x579|x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	volatile uint8_t x582 = 0U;
	int16_t x583 = -3521;
	int16_t x584 = 2;
	volatile int32_t t145 = 0;

    t145 = ((x581==x582)&(x583|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 1;
	uint64_t x587 = 17LLU;
	int32_t x588 = -1;
	uint64_t t146 = 503600051257707987LLU;

    t146 = ((x585==x586)&(x587|x588));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	uint32_t x590 = 241U;
	uint64_t x592 = 44213172LLU;
	static uint64_t t147 = 8395973052783LLU;

    t147 = ((x589==x590)&(x591|x592));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	uint32_t x594 = 1714U;
	int64_t x595 = 42451209838644415LL;
	static volatile int8_t x596 = INT8_MIN;
	int64_t t148 = -5897371622107LL;

    t148 = ((x593==x594)&(x595|x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MIN;
	int64_t x599 = 3LL;
	int16_t x600 = INT16_MAX;
	int64_t t149 = -58736438166137478LL;

    t149 = ((x597==x598)&(x599|x600));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	static int32_t x603 = INT32_MAX;
	int16_t x604 = 779;

    t150 = ((x601==x602)&(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	uint64_t x607 = 5LLU;
	int32_t x608 = 825025434;
	volatile uint64_t t151 = 1850609LLU;

    t151 = ((x605==x606)&(x607|x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x610 = INT32_MAX;
	int32_t x611 = INT32_MAX;
	volatile uint64_t t152 = 813LLU;

    t152 = ((x609==x610)&(x611|x612));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	int32_t x615 = INT32_MIN;
	int32_t x616 = INT32_MAX;
	volatile int32_t t153 = -15809009;

    t153 = ((x613==x614)&(x615|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = -329LL;
	int8_t x618 = -1;
	static uint32_t x619 = 2372U;
	volatile uint32_t t154 = 81U;

    t154 = ((x617==x618)&(x619|x620));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MIN;
	uint8_t x622 = 54U;
	static volatile uint16_t x623 = UINT16_MAX;
	volatile int64_t t155 = 8LL;

    t155 = ((x621==x622)&(x623|x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -6677;
	uint32_t x626 = 4605953U;
	static uint16_t x627 = 1U;
	uint16_t x628 = 209U;
	volatile int32_t t156 = -502;

    t156 = ((x625==x626)&(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = 3;
	int16_t x630 = -1;
	int16_t x631 = -1;
	int32_t x632 = INT32_MAX;
	volatile int32_t t157 = -3101249;

    t157 = ((x629==x630)&(x631|x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 2163U;
	static int16_t x634 = -1;
	volatile uint32_t x635 = 56341U;
	int8_t x636 = INT8_MAX;

    t158 = ((x633==x634)&(x635|x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MIN;
	static volatile uint64_t x639 = 181368863LLU;
	uint64_t t159 = 486455468156477LLU;

    t159 = ((x637==x638)&(x639|x640));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -2440330915701084223LL;
	int8_t x642 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	int8_t x644 = -1;

    t160 = ((x641==x642)&(x643|x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	volatile int64_t x646 = -1LL;
	int8_t x647 = -5;
	uint64_t x648 = UINT64_MAX;
	uint64_t t161 = 34360287268LLU;

    t161 = ((x645==x646)&(x647|x648));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = -1;
	int8_t x650 = 0;
	static int16_t x651 = INT16_MIN;
	uint32_t x652 = UINT32_MAX;
	uint32_t t162 = 476U;

    t162 = ((x649==x650)&(x651|x652));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	static uint8_t x655 = UINT8_MAX;
	static uint8_t x656 = 3U;

    t163 = ((x653==x654)&(x655|x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = -1261251;
	int8_t x658 = -10;
	int32_t x659 = INT32_MIN;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t164 = 35788185;

    t164 = ((x657==x658)&(x659|x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MIN;
	static volatile int32_t x663 = -1;
	static int8_t x664 = -1;
	int32_t t165 = 15;

    t165 = ((x661==x662)&(x663|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x668 = INT8_MIN;

    t166 = ((x665==x666)&(x667|x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	int16_t x671 = -1069;
	int32_t x672 = -840701;

    t167 = ((x669==x670)&(x671|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = INT32_MAX;
	static int8_t x674 = -1;
	int16_t x675 = -3320;
	int64_t x676 = 245812642236783LL;
	int64_t t168 = -61020249097515942LL;

    t168 = ((x673==x674)&(x675|x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MIN;
	int64_t x680 = -1LL;
	volatile int64_t t169 = -3630741360224LL;

    t169 = ((x677==x678)&(x679|x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	int16_t x682 = -2679;
	int16_t x683 = INT16_MIN;
	uint8_t x684 = 1U;

    t170 = ((x681==x682)&(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = 28U;
	int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MAX;
	volatile int64_t t171 = -565029LL;

    t171 = ((x685==x686)&(x687|x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = UINT8_MAX;
	int64_t x691 = INT64_MAX;
	int32_t x692 = INT32_MIN;
	int64_t t172 = -38595909384208LL;

    t172 = ((x689==x690)&(x691|x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	volatile int32_t x694 = INT32_MIN;
	volatile int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	volatile int64_t t173 = -92582172782103LL;

    t173 = ((x693==x694)&(x695|x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	volatile int32_t x698 = INT32_MIN;
	uint8_t x699 = UINT8_MAX;
	int8_t x700 = 56;
	volatile int32_t t174 = -2060;

    t174 = ((x697==x698)&(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	int16_t x702 = INT16_MAX;
	volatile uint8_t x704 = 86U;

    t175 = ((x701==x702)&(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MAX;

    t176 = ((x705==x706)&(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	uint8_t x710 = 0U;
	int64_t x711 = INT64_MIN;
	int64_t x712 = -1LL;

    t177 = ((x709==x710)&(x711|x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MIN;
	int8_t x714 = 2;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = INT64_MIN;
	int64_t t178 = 4096380333509275558LL;

    t178 = ((x713==x714)&(x715|x716));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	static int32_t x719 = INT32_MIN;
	int16_t x720 = INT16_MIN;

    t179 = ((x717==x718)&(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = -31;
	int16_t x722 = -1;
	uint8_t x723 = 5U;
	volatile int32_t t180 = 81;

    t180 = ((x721==x722)&(x723|x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	int16_t x726 = -5152;
	uint8_t x727 = UINT8_MAX;
	int32_t x728 = 728;
	int32_t t181 = 309;

    t181 = ((x725==x726)&(x727|x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MIN;
	static int32_t x731 = -1;
	static int64_t x732 = -1LL;
	int64_t t182 = 3222603142061798LL;

    t182 = ((x729==x730)&(x731|x732));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	int16_t x734 = INT16_MIN;
	int8_t x736 = -3;
	static volatile int32_t t183 = 1;

    t183 = ((x733==x734)&(x735|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = 51;
	static volatile int16_t x738 = INT16_MAX;
	volatile int64_t x739 = INT64_MIN;
	int16_t x740 = INT16_MAX;
	volatile int64_t t184 = 1143859518139053058LL;

    t184 = ((x737==x738)&(x739|x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 11U;
	int8_t x742 = INT8_MAX;
	int32_t x743 = INT32_MIN;
	volatile int64_t t185 = -6864950LL;

    t185 = ((x741==x742)&(x743|x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 3;
	int8_t x746 = INT8_MIN;
	static uint64_t t186 = 248304583LLU;

    t186 = ((x745==x746)&(x747|x748));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x749 = INT32_MIN;
	uint8_t x750 = UINT8_MAX;
	int8_t x751 = INT8_MIN;
	int16_t x752 = INT16_MIN;
	static volatile int32_t t187 = -28325;

    t187 = ((x749==x750)&(x751|x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x755 = UINT64_MAX;
	static int8_t x756 = INT8_MIN;
	uint64_t t188 = 60099922430LLU;

    t188 = ((x753==x754)&(x755|x756));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = -1;
	uint8_t x759 = 12U;
	int64_t x760 = -10144LL;
	int64_t t189 = -29276711431777LL;

    t189 = ((x757==x758)&(x759|x760));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x762 = 215;
	uint32_t x763 = 1321U;
	int32_t x764 = INT32_MIN;
	volatile uint32_t t190 = 2U;

    t190 = ((x761==x762)&(x763|x764));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 16250592056628LLU;
	uint64_t x766 = UINT64_MAX;
	int8_t x768 = -1;
	uint32_t t191 = 69413U;

    t191 = ((x765==x766)&(x767|x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MIN;
	int64_t x772 = INT64_MAX;
	volatile int64_t t192 = 15149051533LL;

    t192 = ((x769==x770)&(x771|x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -32;
	int64_t x774 = -43303196113068LL;
	int32_t x776 = INT32_MIN;

    t193 = ((x773==x774)&(x775|x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	volatile int8_t x778 = INT8_MAX;
	static int16_t x779 = INT16_MIN;
	static uint64_t x780 = 8144LLU;
	static uint64_t t194 = 464778673LLU;

    t194 = ((x777==x778)&(x779|x780));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	uint8_t x782 = 6U;
	volatile uint64_t x783 = 27493922536939LLU;
	uint16_t x784 = 426U;
	static volatile uint64_t t195 = 252654209550LLU;

    t195 = ((x781==x782)&(x783|x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	static int64_t x786 = INT64_MIN;
	int8_t x787 = 2;
	volatile int64_t t196 = -3636LL;

    t196 = ((x785==x786)&(x787|x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = UINT64_MAX;
	int64_t x790 = -1119LL;
	int64_t x792 = 11543257626LL;
	volatile int64_t t197 = 1827125LL;

    t197 = ((x789==x790)&(x791|x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	uint8_t x795 = 2U;
	uint8_t x796 = 6U;
	static int32_t t198 = -6079;

    t198 = ((x793==x794)&(x795|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	static int8_t x798 = 19;
	int16_t x800 = 3475;

    t199 = ((x797==x798)&(x799|x800));

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

