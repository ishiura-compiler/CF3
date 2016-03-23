
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

uint8_t x1 = UINT8_MAX;
int32_t x2 = INT32_MIN;
static volatile int64_t x5 = INT64_MIN;
uint64_t x8 = UINT64_MAX;
int32_t t1 = -329464;
volatile int16_t x9 = INT16_MAX;
uint8_t x12 = 4U;
volatile int32_t t3 = 9920;
volatile int16_t x20 = INT16_MIN;
static int8_t x21 = -21;
int64_t x25 = -1LL;
uint16_t x26 = 1244U;
uint8_t x27 = 3U;
volatile int8_t x28 = -10;
int32_t t7 = -2998;
uint64_t x33 = UINT64_MAX;
int8_t x51 = -1;
static int64_t x52 = INT64_MIN;
int32_t t12 = 1;
volatile int16_t x56 = INT16_MIN;
int8_t x59 = INT8_MAX;
static int16_t x60 = INT16_MIN;
static uint64_t x62 = UINT64_MAX;
int32_t x65 = -740627;
int64_t x74 = INT64_MIN;
int32_t x77 = INT32_MIN;
static volatile int32_t t20 = 14145274;
static int32_t x85 = INT32_MIN;
int64_t x86 = INT64_MIN;
uint32_t x88 = 183070237U;
int32_t t21 = -630175;
volatile int16_t x92 = 43;
volatile int32_t t22 = 0;
uint16_t x94 = 6234U;
int32_t t23 = -432842;
uint8_t x98 = 11U;
static int8_t x102 = INT8_MIN;
int32_t t25 = 185;
uint32_t x106 = 1060337888U;
int8_t x113 = -1;
static int64_t x117 = -82010719689108924LL;
static volatile uint32_t x121 = 457098U;
volatile uint32_t x123 = 8359099U;
int8_t x126 = -1;
int64_t x130 = -1LL;
uint64_t x131 = UINT64_MAX;
volatile int16_t x137 = 6654;
volatile int32_t t35 = -6908;
int16_t x148 = INT16_MIN;
int64_t x155 = -1LL;
int32_t x159 = INT32_MIN;
volatile uint32_t x162 = UINT32_MAX;
static int8_t x168 = INT8_MAX;
uint64_t x169 = 59151676504703LLU;
static int8_t x175 = -1;
uint64_t x179 = UINT64_MAX;
uint64_t x182 = 129100LLU;
int32_t x184 = INT32_MIN;
volatile int32_t t45 = -339436;
uint32_t x189 = 90U;
static uint8_t x190 = UINT8_MAX;
uint8_t x192 = 7U;
uint32_t x193 = UINT32_MAX;
int8_t x195 = INT8_MIN;
static uint8_t x197 = 46U;
uint32_t x198 = 1U;
int16_t x200 = -2;
volatile uint32_t x204 = 87917U;
volatile int32_t t50 = 4;
volatile int8_t x213 = INT8_MAX;
volatile uint8_t x214 = UINT8_MAX;
uint32_t x215 = 155815U;
uint64_t x217 = 17394690177698LLU;
volatile int32_t t55 = -1713;
uint64_t x225 = 4270070851015LLU;
static uint32_t x226 = 112079111U;
uint64_t x228 = 6854LLU;
static uint64_t x231 = 2066030711857695LLU;
uint8_t x234 = 2U;
int8_t x239 = -1;
volatile int32_t t62 = -2;
volatile uint64_t x253 = UINT64_MAX;
static int64_t x254 = INT64_MIN;
int32_t x258 = INT32_MAX;
uint8_t x259 = 1U;
int32_t t64 = -88;
static int8_t x269 = -1;
int32_t x285 = -1;
int8_t x296 = 4;
int16_t x298 = INT16_MIN;
uint8_t x299 = 3U;
int32_t x304 = 1;
int32_t t75 = 42745650;
int8_t x306 = -29;
int32_t t76 = 0;
volatile int32_t x317 = -4330106;
int32_t x320 = 20987;
volatile int32_t t81 = -2298;
volatile int64_t x330 = INT64_MAX;
uint64_t x333 = 20036676LLU;
int16_t x337 = INT16_MAX;
volatile uint64_t x339 = UINT64_MAX;
volatile int32_t t85 = -4;
uint8_t x352 = UINT8_MAX;
int32_t t87 = -29653737;
int16_t x354 = INT16_MIN;
static int8_t x366 = -16;
volatile uint64_t x378 = 200482LLU;
static uint32_t x380 = UINT32_MAX;
int16_t x383 = -12;
volatile uint16_t x385 = 1U;
uint8_t x393 = 7U;
static uint32_t x394 = 137446U;
int16_t x396 = -1;
static volatile int32_t t98 = -495;
int16_t x399 = -12;
int8_t x400 = INT8_MIN;
volatile int32_t t99 = 295;
static uint16_t x402 = 2U;
int32_t x403 = -125;
volatile int32_t x405 = INT32_MAX;
int8_t x411 = 2;
static int32_t x413 = INT32_MIN;
int16_t x418 = -1;
static int16_t x420 = -1;
int32_t t104 = 899;
int32_t x426 = -95;
uint32_t x431 = 0U;
int32_t t107 = -17;
int16_t x434 = INT16_MIN;
int64_t x436 = INT64_MIN;
uint64_t x439 = UINT64_MAX;
int16_t x442 = INT16_MAX;
int8_t x443 = INT8_MAX;
int64_t x450 = INT64_MAX;
static uint16_t x452 = UINT16_MAX;
volatile int8_t x454 = INT8_MIN;
volatile int32_t t113 = -29280300;
int16_t x458 = INT16_MAX;
volatile uint8_t x461 = 1U;
volatile int32_t t115 = 15972420;
int32_t t116 = -110;
int32_t x469 = -1;
int16_t x471 = INT16_MAX;
uint8_t x475 = UINT8_MAX;
static uint32_t x477 = UINT32_MAX;
static int16_t x478 = -2109;
volatile int8_t x484 = -1;
int32_t t120 = -1;
int32_t x488 = INT32_MIN;
uint16_t x490 = 123U;
static volatile int32_t t122 = -26;
uint32_t x495 = UINT32_MAX;
static uint16_t x505 = 0U;
int32_t x515 = 87081;
int32_t t128 = 0;
static int8_t x517 = INT8_MIN;
int32_t x518 = 6102096;
int8_t x524 = 0;
volatile int32_t t130 = -85378;
int32_t t132 = 0;
volatile uint16_t x535 = 46U;
uint8_t x537 = 1U;
static int16_t x539 = INT16_MIN;
uint64_t x546 = UINT64_MAX;
static int32_t x555 = -1;
static volatile int32_t t138 = 406803;
int8_t x557 = INT8_MIN;
static int16_t x585 = INT16_MIN;
int64_t x594 = INT64_MAX;
volatile int64_t x603 = -12899LL;
int16_t x607 = 1773;
static int8_t x608 = INT8_MIN;
static int8_t x610 = -1;
int32_t x625 = INT32_MIN;
volatile uint8_t x626 = UINT8_MAX;
volatile int32_t t156 = -222918;
uint8_t x629 = 1U;
uint64_t x630 = 2060963129847708599LLU;
int64_t x641 = -1LL;
int64_t x642 = -1LL;
uint64_t x643 = 6345231823LLU;
int16_t x648 = -3560;
static int16_t x649 = INT16_MAX;
uint32_t x652 = 3654297U;
static uint16_t x653 = UINT16_MAX;
uint8_t x664 = 3U;
int8_t x665 = INT8_MIN;
static int32_t t166 = -1436045;
int64_t x672 = INT64_MAX;
static uint64_t x674 = 15882927286688125LLU;
int32_t x675 = -1;
uint16_t x679 = 1028U;
static uint64_t x680 = UINT64_MAX;
int32_t t169 = -381;
int64_t x682 = INT64_MAX;
static int16_t x683 = INT16_MIN;
volatile int32_t t170 = -56434411;
volatile int32_t x685 = -259;
int32_t t172 = 6835;
int64_t x701 = INT64_MIN;
uint16_t x702 = 25U;
volatile int8_t x703 = INT8_MIN;
static int32_t t175 = -14739532;
static uint32_t x717 = 82U;
static volatile int32_t t179 = 1;
uint16_t x723 = UINT16_MAX;
uint64_t x737 = UINT64_MAX;
int8_t x738 = -1;
int64_t x740 = INT64_MAX;
volatile int32_t t185 = -101;
int8_t x745 = -1;
int32_t x746 = -1;
static volatile int32_t t186 = 51960084;
int32_t x752 = INT32_MIN;
int8_t x753 = -7;
static int8_t x760 = -16;
volatile uint64_t x767 = UINT64_MAX;
volatile int64_t x770 = INT64_MIN;
static int8_t x771 = INT8_MAX;
int64_t x773 = 1LL;
static int8_t x777 = INT8_MIN;
int64_t x779 = INT64_MIN;
volatile int32_t t194 = 7432;
volatile int32_t t195 = -802647983;
static volatile int32_t t196 = -138;
uint16_t x790 = UINT16_MAX;
volatile int32_t t197 = 2;
int16_t x797 = -34;


void f0(void) {
    	static int8_t x3 = INT8_MIN;
	uint32_t x4 = 1714U;
	int32_t t0 = -373362;

    t0 = ((x1!=x2)<<(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;

    t1 = ((x5!=x6)<<(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x10 = 3090U;
	uint8_t x11 = 40U;
	static int32_t t2 = -9974;

    t2 = ((x9!=x10)<<(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 941U;
	int32_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;

    t3 = ((x13!=x14)<<(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 625373U;
	static uint64_t x18 = UINT64_MAX;
	int32_t x19 = 944025;
	int32_t t4 = -907;

    t4 = ((x17!=x18)<<(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x22 = UINT32_MAX;
	int16_t x23 = -2792;
	uint16_t x24 = 52U;
	static int32_t t5 = -4;

    t5 = ((x21!=x22)<<(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t t6 = 11219;

    t6 = ((x25!=x26)<<(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 8290462828889291LLU;
	int64_t x30 = INT64_MAX;
	static int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;

    t7 = ((x29!=x30)<<(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	static volatile uint32_t x36 = 8117559U;
	int32_t t8 = 1206;

    t8 = ((x33!=x34)<<(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint16_t x38 = 26428U;
	uint8_t x39 = 16U;
	int8_t x40 = -1;
	static volatile int32_t t9 = 6;

    t9 = ((x37!=x38)<<(x39==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 767U;
	static int64_t x42 = INT64_MIN;
	volatile int32_t x43 = INT32_MIN;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -1;

    t10 = ((x41!=x42)<<(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -1957;
	volatile int8_t x46 = -5;
	volatile int32_t x47 = INT32_MIN;
	uint16_t x48 = 1U;
	int32_t t11 = -396254;

    t11 = ((x45!=x46)<<(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static volatile int64_t x50 = INT64_MIN;

    t12 = ((x49!=x50)<<(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	static volatile uint32_t x54 = UINT32_MAX;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t13 = 66246415;

    t13 = ((x53!=x54)<<(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	int32_t t14 = 19;

    t14 = ((x57!=x58)<<(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 6U;
	static int64_t x63 = INT64_MIN;
	static int64_t x64 = -209LL;
	volatile int32_t t15 = -738128647;

    t15 = ((x61!=x62)<<(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = UINT8_MAX;
	volatile int16_t x67 = INT16_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -510673043;

    t16 = ((x65!=x66)<<(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -1LL;
	int64_t x70 = -1LL;
	int32_t x71 = -1;
	int16_t x72 = 54;
	static volatile int32_t t17 = -7000;

    t17 = ((x69!=x70)<<(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int32_t x76 = -3397;
	static int32_t t18 = -294;

    t18 = ((x73!=x74)<<(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	static uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	int32_t t19 = 125;

    t19 = ((x77!=x78)<<(x79==x80));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x82 = 25U;
	int8_t x83 = INT8_MIN;
	int16_t x84 = 3;

    t20 = ((x81!=x82)<<(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x87 = -1;

    t21 = ((x85!=x86)<<(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x89 = -235345;
	int8_t x90 = -1;
	volatile uint64_t x91 = UINT64_MAX;

    t22 = ((x89!=x90)<<(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MAX;

    t23 = ((x93!=x94)<<(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -3;
	static int32_t x99 = -159552;
	static int32_t x100 = INT32_MAX;
	int32_t t24 = -7;

    t24 = ((x97!=x98)<<(x99==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	static int16_t x103 = 5834;
	uint8_t x104 = 80U;

    t25 = ((x101!=x102)<<(x103==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = 0;
	int8_t x107 = -59;
	int8_t x108 = INT8_MAX;
	int32_t t26 = 1;

    t26 = ((x105!=x106)<<(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int32_t t27 = 1861177;

    t27 = ((x109!=x110)<<(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x114 = INT16_MIN;
	static uint32_t x115 = 84056858U;
	int32_t x116 = -1;
	volatile int32_t t28 = 179078;

    t28 = ((x113!=x114)<<(x115==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = INT8_MIN;
	static volatile int32_t x119 = 4381058;
	static volatile int16_t x120 = 920;
	int32_t t29 = -878721;

    t29 = ((x117!=x118)<<(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	int64_t x124 = -1LL;
	int32_t t30 = 1;

    t30 = ((x121!=x122)<<(x123==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 53;
	volatile uint64_t x127 = 4322013211LLU;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -5;

    t31 = ((x125!=x126)<<(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = 8612LL;
	int16_t x132 = -1;
	int32_t t32 = 8;

    t32 = ((x129!=x130)<<(x131==x132));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t33 = -1;

    t33 = ((x133!=x134)<<(x135==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -313850260012181223LL;
	static volatile int32_t t34 = -170576;

    t34 = ((x137!=x138)<<(x139==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -5LL;
	volatile int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = 66U;
	uint8_t x144 = 17U;

    t35 = ((x141!=x142)<<(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -3;
	int32_t x146 = INT32_MIN;
	static int8_t x147 = -1;
	volatile int32_t t36 = 36724490;

    t36 = ((x145!=x146)<<(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static int32_t x150 = -1;
	volatile int8_t x151 = 1;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = -6980;

    t37 = ((x149!=x150)<<(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 13633U;
	volatile uint32_t x154 = 10335334U;
	uint16_t x156 = 14U;
	volatile int32_t t38 = -268095468;

    t38 = ((x153!=x154)<<(x155==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	uint32_t x158 = UINT32_MAX;
	uint16_t x160 = 7836U;
	int32_t t39 = -689;

    t39 = ((x157!=x158)<<(x159==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x161 = -1;
	uint16_t x163 = 9U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 196;

    t40 = ((x161!=x162)<<(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	volatile int64_t x166 = 29943LL;
	int64_t x167 = 7289239464LL;
	int32_t t41 = -15;

    t41 = ((x165!=x166)<<(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x170 = 29092U;
	uint32_t x171 = 68U;
	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = 271892;

    t42 = ((x169!=x170)<<(x171==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	static int32_t x174 = INT32_MIN;
	volatile int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 0;

    t43 = ((x173!=x174)<<(x175==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 618LLU;
	int64_t x178 = -1LL;
	static volatile uint64_t x180 = UINT64_MAX;
	static volatile int32_t t44 = 5358;

    t44 = ((x177!=x178)<<(x179==x180));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int64_t x183 = INT64_MIN;

    t45 = ((x181!=x182)<<(x183==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	volatile int32_t x186 = INT32_MIN;
	uint16_t x187 = 15129U;
	int32_t x188 = 3;
	static int32_t t46 = 24;

    t46 = ((x185!=x186)<<(x187==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x191 = 162951564633146252LL;
	int32_t t47 = 1;

    t47 = ((x189!=x190)<<(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = 78LLU;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = -97;

    t48 = ((x193!=x194)<<(x195==x196));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x199 = 169159386;
	volatile int32_t t49 = 29058;

    t49 = ((x197!=x198)<<(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	int64_t x203 = INT64_MAX;

    t50 = ((x201!=x202)<<(x203==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	static int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -2637075;

    t51 = ((x205!=x206)<<(x207==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	uint32_t x210 = 718382U;
	int8_t x211 = INT8_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = -41506;

    t52 = ((x209!=x210)<<(x211==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 37;

    t53 = ((x213!=x214)<<(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -17;
	int64_t x219 = -53089724674LL;
	int8_t x220 = INT8_MIN;
	static int32_t t54 = 3;

    t54 = ((x217!=x218)<<(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = 2999997;
	static int64_t x222 = INT64_MAX;
	uint8_t x223 = 97U;
	int32_t x224 = 468945;

    t55 = ((x221!=x222)<<(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x227 = 61;
	volatile int32_t t56 = 8231797;

    t56 = ((x225!=x226)<<(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int64_t x230 = INT64_MIN;
	int32_t x232 = 0;
	volatile int32_t t57 = 90265;

    t57 = ((x229!=x230)<<(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x235 = 972;
	volatile int16_t x236 = 17;
	int32_t t58 = 1019864949;

    t58 = ((x233!=x234)<<(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	volatile uint64_t x238 = 654LLU;
	static volatile int64_t x240 = 4732150287493LL;
	static volatile int32_t t59 = 45471730;

    t59 = ((x237!=x238)<<(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	int32_t x242 = INT32_MAX;
	int32_t x243 = -44354;
	uint16_t x244 = 24U;
	int32_t t60 = 26467787;

    t60 = ((x241!=x242)<<(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MAX;
	int16_t x247 = -1;
	static uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = -128925;

    t61 = ((x245!=x246)<<(x247==x248));

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 0U;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = 0;
	uint32_t x252 = 636550U;

    t62 = ((x249!=x250)<<(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x255 = 3U;
	uint8_t x256 = 123U;
	static volatile int32_t t63 = 184388;

    t63 = ((x253!=x254)<<(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x257 = 4002823U;
	int8_t x260 = 2;

    t64 = ((x257!=x258)<<(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 0U;
	uint16_t x262 = 129U;
	int32_t x263 = INT32_MAX;
	int16_t x264 = -1;
	volatile int32_t t65 = 1041250656;

    t65 = ((x261!=x262)<<(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = 93U;
	volatile int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	volatile int32_t x268 = INT32_MIN;
	int32_t t66 = 0;

    t66 = ((x265!=x266)<<(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	int32_t t67 = -2134;

    t67 = ((x269!=x270)<<(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -1;
	int64_t x274 = INT64_MAX;
	volatile int64_t x275 = -1LL;
	int16_t x276 = 3;
	int32_t t68 = 4397009;

    t68 = ((x273!=x274)<<(x275==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static volatile int16_t x278 = -1;
	volatile uint32_t x279 = 6U;
	static volatile int64_t x280 = 9403071917041LL;
	static int32_t t69 = -8566;

    t69 = ((x277!=x278)<<(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 3U;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	int32_t x284 = 0;
	static int32_t t70 = -504857535;

    t70 = ((x281!=x282)<<(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = 4298348501482176099LLU;
	int32_t t71 = 3;

    t71 = ((x285!=x286)<<(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = UINT16_MAX;
	static volatile uint32_t x291 = 24063U;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -119151;

    t72 = ((x289!=x290)<<(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 12922U;
	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = INT8_MIN;
	volatile int32_t t73 = -552485;

    t73 = ((x293!=x294)<<(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 888U;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = -5604156;

    t74 = ((x297!=x298)<<(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 3232;
	uint64_t x302 = 227268584856138LLU;
	int32_t x303 = -1;

    t75 = ((x301!=x302)<<(x303==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 1U;
	int8_t x307 = -2;
	static uint64_t x308 = 175LLU;

    t76 = ((x305!=x306)<<(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	uint32_t x310 = UINT32_MAX;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 453094;

    t77 = ((x309!=x310)<<(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	uint32_t x314 = 33U;
	volatile int64_t x315 = -3520196803990250LL;
	uint16_t x316 = 3U;
	int32_t t78 = -33176237;

    t78 = ((x313!=x314)<<(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = INT32_MIN;
	int64_t x319 = 1032780LL;
	int32_t t79 = 6;

    t79 = ((x317!=x318)<<(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = 37U;
	static uint8_t x322 = UINT8_MAX;
	int64_t x323 = -252300730655202LL;
	volatile int16_t x324 = -1;
	volatile int32_t t80 = -206775;

    t80 = ((x321!=x322)<<(x323==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x325 = INT8_MIN;
	int16_t x326 = -1;
	int16_t x327 = -32;
	static int8_t x328 = INT8_MIN;

    t81 = ((x325!=x326)<<(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	int8_t x331 = 0;
	volatile int8_t x332 = -1;
	int32_t t82 = -12917016;

    t82 = ((x329!=x330)<<(x331==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x334 = UINT64_MAX;
	uint64_t x335 = 16002283850LLU;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 1;

    t83 = ((x333!=x334)<<(x335==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x338 = 86955U;
	uint8_t x340 = 42U;
	volatile int32_t t84 = 23;

    t84 = ((x337!=x338)<<(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = 1742U;
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	int8_t x344 = -1;

    t85 = ((x341!=x342)<<(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	int32_t x346 = -1;
	int8_t x347 = -1;
	volatile int16_t x348 = INT16_MAX;
	static volatile int32_t t86 = 5032668;

    t86 = ((x345!=x346)<<(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = 48U;

    t87 = ((x349!=x350)<<(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x355 = -3;
	int8_t x356 = 21;
	int32_t t88 = 4;

    t88 = ((x353!=x354)<<(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 5U;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 2U;
	volatile int32_t t89 = 196247;

    t89 = ((x357!=x358)<<(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = 0;
	static volatile uint16_t x362 = 24349U;
	uint64_t x363 = 964404781618805086LLU;
	volatile uint64_t x364 = 11937LLU;
	static volatile int32_t t90 = -324932416;

    t90 = ((x361!=x362)<<(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	uint8_t x367 = 19U;
	static int64_t x368 = INT64_MAX;
	int32_t t91 = 44973004;

    t91 = ((x365!=x366)<<(x367==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	uint16_t x370 = 6342U;
	int64_t x371 = -1LL;
	uint16_t x372 = 10U;
	int32_t t92 = 929135;

    t92 = ((x369!=x370)<<(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -61054524;
	uint64_t x374 = 14316LLU;
	volatile int32_t x375 = INT32_MIN;
	int64_t x376 = -13950LL;
	int32_t t93 = -3749891;

    t93 = ((x373!=x374)<<(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = 1643879022378124LL;
	int32_t x379 = INT32_MAX;
	volatile int32_t t94 = 3776;

    t94 = ((x377!=x378)<<(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	int32_t x382 = 5;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 0;

    t95 = ((x381!=x382)<<(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 3;

    t96 = ((x385!=x386)<<(x387==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 2656611U;
	int8_t x390 = INT8_MIN;
	static int64_t x391 = INT64_MIN;
	volatile uint8_t x392 = 2U;
	int32_t t97 = 12358769;

    t97 = ((x389!=x390)<<(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x395 = -1;

    t98 = ((x393!=x394)<<(x395==x396));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = 529U;
	volatile int8_t x398 = -1;

    t99 = ((x397!=x398)<<(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = 8316;
	uint32_t x404 = 2U;
	int32_t t100 = -12;

    t100 = ((x401!=x402)<<(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x406 = -42;
	volatile int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t101 = 457;

    t101 = ((x405!=x406)<<(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static volatile int64_t x410 = INT64_MIN;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t102 = -1665715;

    t102 = ((x409!=x410)<<(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x414 = INT64_MIN;
	volatile int32_t x415 = -753062;
	int16_t x416 = -1;
	static volatile int32_t t103 = 1;

    t103 = ((x413!=x414)<<(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = UINT64_MAX;
	volatile uint8_t x419 = UINT8_MAX;

    t104 = ((x417!=x418)<<(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 12989;
	int32_t x422 = INT32_MIN;
	static int32_t x423 = 16;
	uint8_t x424 = 61U;
	volatile int32_t t105 = 5733;

    t105 = ((x421!=x422)<<(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = -1;
	int8_t x427 = INT8_MAX;
	volatile uint32_t x428 = UINT32_MAX;
	static volatile int32_t t106 = -3233388;

    t106 = ((x425!=x426)<<(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = 9;
	volatile int16_t x430 = 12629;
	volatile int16_t x432 = 8884;

    t107 = ((x429!=x430)<<(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int64_t x435 = INT64_MAX;
	int32_t t108 = 4;

    t108 = ((x433!=x434)<<(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -2537488944229391456LL;
	int32_t x438 = INT32_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t109 = 59556;

    t109 = ((x437!=x438)<<(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	int8_t x444 = INT8_MIN;
	int32_t t110 = -62609084;

    t110 = ((x441!=x442)<<(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	static int8_t x446 = INT8_MIN;
	uint64_t x447 = 44148LLU;
	int8_t x448 = 7;
	int32_t t111 = -5126779;

    t111 = ((x445!=x446)<<(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint32_t x449 = 6939465U;
	volatile uint8_t x451 = UINT8_MAX;
	volatile int32_t t112 = 65632;

    t112 = ((x449!=x450)<<(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	int32_t x455 = INT32_MIN;
	static int8_t x456 = INT8_MIN;

    t113 = ((x453!=x454)<<(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x457 = 998U;
	volatile int16_t x459 = 1238;
	static int64_t x460 = INT64_MIN;
	int32_t t114 = -5860459;

    t114 = ((x457!=x458)<<(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = 9282;
	volatile int64_t x463 = -56592786LL;
	volatile int16_t x464 = -1;

    t115 = ((x461!=x462)<<(x463==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int32_t x466 = INT32_MIN;
	static int8_t x467 = INT8_MAX;
	static int32_t x468 = 6102;

    t116 = ((x465!=x466)<<(x467==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x470 = -1;
	static volatile int16_t x472 = 24;
	int32_t t117 = -472797449;

    t117 = ((x469!=x470)<<(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 103092U;
	int64_t x474 = 15LL;
	volatile uint32_t x476 = 3U;
	int32_t t118 = 14;

    t118 = ((x473!=x474)<<(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x479 = 242019U;
	static int8_t x480 = INT8_MAX;
	int32_t t119 = 1225;

    t119 = ((x477!=x478)<<(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	static int32_t x482 = INT32_MAX;
	volatile int32_t x483 = -54577;

    t120 = ((x481!=x482)<<(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int64_t x486 = -104071977251939LL;
	uint16_t x487 = 3467U;
	volatile int32_t t121 = -91999276;

    t121 = ((x485!=x486)<<(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x491 = INT16_MAX;
	int8_t x492 = INT8_MAX;

    t122 = ((x489!=x490)<<(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = INT8_MIN;
	int64_t x494 = INT64_MAX;
	volatile int64_t x496 = 4238330574LL;
	volatile int32_t t123 = -5421040;

    t123 = ((x493!=x494)<<(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MIN;
	static int16_t x498 = INT16_MAX;
	static uint16_t x499 = UINT16_MAX;
	volatile uint8_t x500 = 52U;
	volatile int32_t t124 = 1774973;

    t124 = ((x497!=x498)<<(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -16057719;
	volatile int64_t x502 = INT64_MIN;
	uint8_t x503 = UINT8_MAX;
	uint8_t x504 = UINT8_MAX;
	static volatile int32_t t125 = 9139880;

    t125 = ((x501!=x502)<<(x503==x504));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = 174;
	static uint64_t x507 = 16350194224LLU;
	int32_t x508 = -1;
	static volatile int32_t t126 = -5610;

    t126 = ((x505!=x506)<<(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = 1723U;
	int64_t x510 = 1LL;
	uint64_t x511 = 161514162028LLU;
	int16_t x512 = -1;
	int32_t t127 = 1;

    t127 = ((x509!=x510)<<(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 7U;
	static int16_t x514 = INT16_MAX;
	uint16_t x516 = 0U;

    t128 = ((x513!=x514)<<(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x519 = 9906U;
	volatile int16_t x520 = INT16_MAX;
	volatile int32_t t129 = 867725;

    t129 = ((x517!=x518)<<(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -24;
	volatile int32_t x522 = -33303582;
	int32_t x523 = -1;

    t130 = ((x521!=x522)<<(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = 643429779;
	int64_t x526 = -1970102048LL;
	int32_t x527 = -1;
	static int64_t x528 = 13LL;
	int32_t t131 = -6791;

    t131 = ((x525!=x526)<<(x527==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = -60710298370LL;
	volatile int16_t x530 = INT16_MAX;
	int32_t x531 = INT32_MIN;
	uint32_t x532 = UINT32_MAX;

    t132 = ((x529!=x530)<<(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 31600531976934LL;
	int16_t x534 = 1;
	int16_t x536 = INT16_MAX;
	volatile int32_t t133 = -287173907;

    t133 = ((x533!=x534)<<(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 1331854805075LLU;
	uint64_t x540 = UINT64_MAX;
	int32_t t134 = -6977;

    t134 = ((x537!=x538)<<(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 5U;
	int32_t x542 = INT32_MIN;
	volatile int8_t x543 = 0;
	volatile int16_t x544 = -1;
	static volatile int32_t t135 = 22;

    t135 = ((x541!=x542)<<(x543==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MAX;
	int32_t t136 = -7458;

    t136 = ((x545!=x546)<<(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MIN;
	int16_t x551 = INT16_MIN;
	uint64_t x552 = 19925LLU;
	volatile int32_t t137 = -147870475;

    t137 = ((x549!=x550)<<(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	volatile int16_t x554 = -7;
	int32_t x556 = 674748765;

    t138 = ((x553!=x554)<<(x555==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x558 = UINT8_MAX;
	uint8_t x559 = UINT8_MAX;
	int8_t x560 = -1;
	int32_t t139 = 17655533;

    t139 = ((x557!=x558)<<(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 642194U;
	int16_t x562 = INT16_MAX;
	static uint16_t x563 = UINT16_MAX;
	int32_t x564 = INT32_MIN;
	volatile int32_t t140 = -217889223;

    t140 = ((x561!=x562)<<(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	volatile int8_t x566 = INT8_MIN;
	uint16_t x567 = 596U;
	uint32_t x568 = UINT32_MAX;
	int32_t t141 = -2241;

    t141 = ((x565!=x566)<<(x567==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	static int8_t x570 = -1;
	static int16_t x571 = INT16_MIN;
	int16_t x572 = 791;
	volatile int32_t t142 = 1753;

    t142 = ((x569!=x570)<<(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	static volatile int64_t x574 = INT64_MIN;
	int32_t x575 = 11545413;
	uint64_t x576 = 71388LLU;
	volatile int32_t t143 = 1;

    t143 = ((x573!=x574)<<(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 61U;
	int32_t x578 = -1;
	uint64_t x579 = 44789695860320348LLU;
	int16_t x580 = -1;
	volatile int32_t t144 = 130415;

    t144 = ((x577!=x578)<<(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 1U;
	volatile int64_t x582 = -1LL;
	volatile int8_t x583 = INT8_MAX;
	uint32_t x584 = 45U;
	int32_t t145 = 1645007;

    t145 = ((x581!=x582)<<(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x586 = INT64_MIN;
	static uint8_t x587 = 15U;
	static uint16_t x588 = 21U;
	volatile int32_t t146 = -399427;

    t146 = ((x585!=x586)<<(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MIN;
	volatile int16_t x590 = INT16_MIN;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = -1;
	volatile int32_t t147 = 36934;

    t147 = ((x589!=x590)<<(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = 1;
	uint16_t x595 = 5368U;
	volatile int64_t x596 = INT64_MAX;
	int32_t t148 = -87182;

    t148 = ((x593!=x594)<<(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	volatile int32_t x598 = INT32_MIN;
	static volatile uint8_t x599 = UINT8_MAX;
	int32_t x600 = 1530089;
	int32_t t149 = -43714328;

    t149 = ((x597!=x598)<<(x599==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 438350660U;
	uint16_t x602 = UINT16_MAX;
	int16_t x604 = 2;
	int32_t t150 = 95945602;

    t150 = ((x601!=x602)<<(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	int32_t x606 = INT32_MIN;
	int32_t t151 = 68438002;

    t151 = ((x605!=x606)<<(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x611 = -1;
	uint32_t x612 = UINT32_MAX;
	static int32_t t152 = 4730211;

    t152 = ((x609!=x610)<<(x611==x612));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint32_t x614 = 3136U;
	int8_t x615 = 0;
	uint32_t x616 = UINT32_MAX;
	int32_t t153 = 1;

    t153 = ((x613!=x614)<<(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = 63U;
	int16_t x618 = INT16_MAX;
	static volatile uint16_t x619 = 2861U;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t154 = -15808857;

    t154 = ((x617!=x618)<<(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 31858979U;
	volatile int8_t x622 = -1;
	int32_t x623 = -1709868;
	volatile uint8_t x624 = UINT8_MAX;
	static int32_t t155 = -2836753;

    t155 = ((x621!=x622)<<(x623==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x627 = INT32_MAX;
	uint64_t x628 = 91868723585289866LLU;

    t156 = ((x625!=x626)<<(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x631 = INT16_MAX;
	uint64_t x632 = 196164LLU;
	static volatile int32_t t157 = 3315;

    t157 = ((x629!=x630)<<(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = INT16_MAX;
	int16_t x634 = INT16_MIN;
	static uint16_t x635 = 191U;
	int16_t x636 = -1;
	int32_t t158 = -14831792;

    t158 = ((x633!=x634)<<(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1U;
	int16_t x638 = INT16_MAX;
	int32_t x639 = -1;
	volatile uint32_t x640 = 4U;
	int32_t t159 = 505036510;

    t159 = ((x637!=x638)<<(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x644 = INT8_MIN;
	int32_t t160 = -3517188;

    t160 = ((x641!=x642)<<(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MAX;
	int8_t x646 = INT8_MIN;
	uint64_t x647 = 1028651LLU;
	static int32_t t161 = -54272309;

    t161 = ((x645!=x646)<<(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = -1;
	static int32_t x651 = INT32_MAX;
	static volatile int32_t t162 = -3082521;

    t162 = ((x649!=x650)<<(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x654 = UINT64_MAX;
	volatile int32_t x655 = -1;
	int16_t x656 = INT16_MAX;
	int32_t t163 = -23;

    t163 = ((x653!=x654)<<(x655==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	int8_t x658 = -1;
	int32_t x659 = -689;
	int16_t x660 = INT16_MAX;
	volatile int32_t t164 = 12169008;

    t164 = ((x657!=x658)<<(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 349U;
	int16_t x662 = 891;
	static int8_t x663 = -17;
	volatile int32_t t165 = -972536;

    t165 = ((x661!=x662)<<(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = 1;
	int64_t x667 = 93767647LL;
	uint8_t x668 = 0U;

    t166 = ((x665!=x666)<<(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 59631725523693LL;
	uint8_t x670 = 1U;
	int32_t x671 = 1;
	volatile int32_t t167 = -387738451;

    t167 = ((x669!=x670)<<(x671==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MAX;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = -11346;

    t168 = ((x673!=x674)<<(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	static int8_t x678 = -1;

    t169 = ((x677!=x678)<<(x679==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x684 = 1299U;

    t170 = ((x681!=x682)<<(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = 0;
	static int8_t x687 = -19;
	int64_t x688 = INT64_MIN;
	int32_t t171 = 106;

    t171 = ((x685!=x686)<<(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MAX;
	uint32_t x691 = 18U;
	static volatile uint16_t x692 = UINT16_MAX;

    t172 = ((x689!=x690)<<(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = UINT16_MAX;
	volatile uint8_t x694 = 1U;
	int32_t x695 = -1;
	int16_t x696 = INT16_MIN;
	int32_t t173 = 65;

    t173 = ((x693!=x694)<<(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = INT32_MIN;
	int16_t x698 = 1;
	int8_t x699 = INT8_MAX;
	volatile int16_t x700 = INT16_MIN;
	int32_t t174 = -2339;

    t174 = ((x697!=x698)<<(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x704 = 3625976;

    t175 = ((x701!=x702)<<(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = -863258;
	uint16_t x707 = 125U;
	uint64_t x708 = 12735LLU;
	int32_t t176 = 26897179;

    t176 = ((x705!=x706)<<(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x709 = -3;
	uint64_t x710 = 0LLU;
	uint8_t x711 = UINT8_MAX;
	static uint8_t x712 = UINT8_MAX;
	int32_t t177 = -461;

    t177 = ((x709!=x710)<<(x711==x712));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int16_t x714 = INT16_MAX;
	uint64_t x715 = 1LLU;
	static int8_t x716 = INT8_MAX;
	volatile int32_t t178 = 14;

    t178 = ((x713!=x714)<<(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = -1;
	int64_t x719 = -1LL;
	int64_t x720 = INT64_MIN;

    t179 = ((x717!=x718)<<(x719==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 2U;
	int8_t x722 = INT8_MIN;
	int16_t x724 = -1;
	volatile int32_t t180 = -320795;

    t180 = ((x721!=x722)<<(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -1;
	static int16_t x726 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	static int16_t x728 = INT16_MIN;
	volatile int32_t t181 = -5833;

    t181 = ((x725!=x726)<<(x727==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	static int32_t x730 = INT32_MIN;
	static int64_t x731 = INT64_MAX;
	static int16_t x732 = -1;
	int32_t t182 = -35517;

    t182 = ((x729!=x730)<<(x731==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = -1;
	int64_t x734 = 4074489188969339LL;
	volatile uint16_t x735 = 1U;
	int16_t x736 = -1;
	int32_t t183 = 13658186;

    t183 = ((x733!=x734)<<(x735==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x739 = INT8_MAX;
	static int32_t t184 = 1834054;

    t184 = ((x737!=x738)<<(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int64_t x742 = INT64_MAX;
	static volatile uint16_t x743 = UINT16_MAX;
	uint8_t x744 = UINT8_MAX;

    t185 = ((x741!=x742)<<(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x747 = -1;
	volatile int64_t x748 = INT64_MIN;

    t186 = ((x745!=x746)<<(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 1;
	uint64_t x750 = 963116LLU;
	int8_t x751 = INT8_MIN;
	static volatile int32_t t187 = 28;

    t187 = ((x749!=x750)<<(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x754 = INT64_MAX;
	int64_t x755 = -1LL;
	int8_t x756 = -58;
	volatile int32_t t188 = 1;

    t188 = ((x753!=x754)<<(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = UINT32_MAX;
	volatile int32_t x758 = -1;
	uint32_t x759 = 281U;
	volatile int32_t t189 = -1373;

    t189 = ((x757!=x758)<<(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	static uint32_t x762 = 2U;
	int64_t x763 = INT64_MIN;
	volatile int64_t x764 = INT64_MAX;
	volatile int32_t t190 = 1095835;

    t190 = ((x761!=x762)<<(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	uint64_t x766 = 898111455095410562LLU;
	int8_t x768 = INT8_MAX;
	static volatile int32_t t191 = -33291;

    t191 = ((x765!=x766)<<(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	uint32_t x772 = 3228U;
	volatile int32_t t192 = -493737;

    t192 = ((x769!=x770)<<(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = -1;
	int64_t x775 = 84692628462528LL;
	uint64_t x776 = 711349LLU;
	int32_t t193 = 143;

    t193 = ((x773!=x774)<<(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -1;
	int64_t x780 = -7634LL;

    t194 = ((x777!=x778)<<(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = -1;
	int32_t x782 = -248119460;
	uint16_t x783 = 63U;
	uint16_t x784 = UINT16_MAX;

    t195 = ((x781!=x782)<<(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	static uint8_t x786 = 3U;
	volatile int8_t x787 = INT8_MIN;
	static uint64_t x788 = 108011884093172LLU;

    t196 = ((x785!=x786)<<(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 8034016LLU;
	uint32_t x791 = 35428375U;
	int32_t x792 = -1;

    t197 = ((x789!=x790)<<(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 75U;
	static uint8_t x794 = UINT8_MAX;
	volatile int8_t x795 = -1;
	int8_t x796 = INT8_MIN;
	int32_t t198 = 4397137;

    t198 = ((x793!=x794)<<(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x798 = INT32_MAX;
	volatile int32_t x799 = -87740;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = -629;

    t199 = ((x797!=x798)<<(x799==x800));

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

