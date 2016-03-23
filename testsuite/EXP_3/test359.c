
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

int8_t x1 = INT8_MAX;
volatile int8_t x7 = INT8_MAX;
int32_t t1 = -66577;
int64_t x9 = INT64_MIN;
int32_t x12 = INT32_MIN;
int32_t x15 = INT32_MIN;
volatile int32_t t4 = -161373492;
int16_t x24 = -4734;
int32_t t5 = -845855896;
int32_t t8 = 66;
static int64_t x49 = INT64_MIN;
static volatile int32_t x52 = -1;
static uint32_t x61 = UINT32_MAX;
static int8_t x64 = INT8_MAX;
static int32_t t12 = -669;
int64_t x66 = 23278687627097LL;
static uint8_t x74 = UINT8_MAX;
int32_t x83 = INT32_MIN;
volatile int32_t t17 = 0;
int32_t x85 = INT32_MIN;
uint64_t x97 = 3929745712390976LLU;
int32_t x106 = -1;
uint64_t x107 = UINT64_MAX;
static int32_t t23 = -10731296;
int8_t x111 = INT8_MIN;
static volatile int32_t t24 = -265953192;
volatile int32_t t25 = -5;
int32_t x124 = -32544519;
volatile int32_t t27 = -221724716;
volatile int16_t x129 = INT16_MIN;
uint16_t x138 = UINT16_MAX;
int32_t x140 = -186957008;
int32_t x144 = 579032392;
volatile int32_t x147 = INT32_MIN;
volatile uint32_t x148 = UINT32_MAX;
int32_t x155 = 9489;
int32_t x161 = -574;
volatile uint64_t x164 = 10LLU;
static volatile int64_t x167 = -1LL;
int64_t x170 = INT64_MIN;
int8_t x172 = -1;
static uint16_t x179 = 8U;
volatile int32_t t41 = 6779087;
int8_t x184 = INT8_MIN;
int32_t x189 = INT32_MIN;
volatile int8_t x191 = -1;
int8_t x198 = 0;
volatile uint16_t x200 = 5492U;
static uint64_t x206 = 127333291530834LLU;
static volatile int8_t x208 = -34;
int32_t x216 = 118627546;
uint32_t x228 = 337U;
static int32_t x233 = 5;
uint32_t x234 = 223409U;
uint64_t x235 = 38004857LLU;
int32_t x239 = INT32_MAX;
volatile uint64_t x249 = UINT64_MAX;
int8_t x250 = -1;
uint32_t x252 = UINT32_MAX;
uint16_t x264 = 5U;
volatile int64_t x269 = INT64_MIN;
int16_t x270 = INT16_MAX;
int8_t x274 = 28;
static volatile int32_t t61 = 7534849;
uint32_t x282 = 11720486U;
static int8_t x285 = INT8_MIN;
int64_t x287 = -28214373735366LL;
volatile int16_t x289 = -1;
int8_t x296 = -6;
int8_t x299 = INT8_MIN;
volatile uint32_t x301 = 9550922U;
static volatile int32_t x308 = -1184972;
static volatile int32_t t69 = -6;
uint32_t x314 = 235U;
uint8_t x335 = 6U;
int64_t x341 = 19519938LL;
int16_t x344 = INT16_MIN;
volatile int32_t t76 = -22087938;
static volatile uint32_t x350 = 8666U;
int8_t x352 = 3;
int32_t x355 = INT32_MIN;
volatile int32_t t79 = 577216041;
volatile int64_t x366 = INT64_MIN;
volatile int32_t x371 = -33304;
int64_t x383 = 393715LL;
int16_t x384 = INT16_MIN;
uint32_t x387 = 13679442U;
int8_t x396 = -7;
static uint64_t x404 = 10679940024743078LLU;
static int8_t x405 = INT8_MIN;
int16_t x406 = 1603;
int16_t x408 = -1;
static volatile int32_t t90 = -1;
int16_t x409 = -1;
int32_t t91 = 1;
int32_t x419 = 1495783;
int32_t t92 = -25366;
volatile uint32_t x422 = 480U;
static volatile int8_t x426 = INT8_MIN;
uint64_t x427 = UINT64_MAX;
static int16_t x438 = INT16_MAX;
uint16_t x440 = UINT16_MAX;
volatile int32_t t98 = -39991157;
uint8_t x465 = 8U;
volatile int32_t t103 = 2582;
int8_t x471 = INT8_MIN;
volatile uint8_t x472 = 29U;
uint32_t x473 = UINT32_MAX;
volatile int32_t t106 = -1827;
int8_t x481 = INT8_MIN;
uint32_t x482 = 45680U;
uint64_t x483 = UINT64_MAX;
volatile int32_t t107 = -1264944;
uint16_t x487 = 11U;
int8_t x488 = INT8_MIN;
int16_t x491 = -1;
volatile int64_t x497 = INT64_MIN;
static volatile uint64_t x506 = UINT64_MAX;
int8_t x513 = -1;
volatile int32_t t114 = 319621;
static int8_t x519 = INT8_MAX;
volatile int32_t t116 = 368383;
int64_t x526 = 988LL;
int8_t x531 = 3;
volatile int32_t t118 = 1;
static int8_t x551 = -1;
static int32_t x552 = INT32_MAX;
volatile int16_t x563 = -211;
int32_t x569 = INT32_MIN;
int32_t t125 = -2104;
static int64_t x577 = INT64_MIN;
static uint64_t x594 = UINT64_MAX;
volatile int32_t t131 = -96503;
static int16_t x598 = INT16_MIN;
int8_t x600 = INT8_MAX;
int64_t x603 = -58LL;
int32_t t134 = 13439;
int8_t x618 = -1;
volatile int32_t t136 = 2349;
uint16_t x624 = UINT16_MAX;
uint32_t x632 = 509612545U;
static volatile uint8_t x644 = 3U;
volatile uint32_t x646 = 68337403U;
int32_t x648 = INT32_MIN;
static uint16_t x654 = 0U;
volatile int16_t x655 = -1;
int16_t x660 = -42;
int64_t x678 = INT64_MIN;
static volatile int32_t x683 = 5898;
static uint32_t x685 = 1780767U;
volatile uint64_t x686 = 140931310100311LLU;
static uint64_t x688 = 79726LLU;
volatile int64_t x694 = -1214125LL;
int32_t x715 = 6;
static volatile int16_t x719 = -1;
int8_t x720 = INT8_MIN;
static volatile int32_t t161 = 4363;
volatile int32_t t162 = 804;
uint8_t x729 = 94U;
int8_t x730 = -1;
static volatile int32_t t164 = -240;
int32_t x742 = INT32_MIN;
int8_t x745 = INT8_MIN;
uint32_t x747 = 1750U;
static volatile int32_t x749 = -1;
int32_t t167 = -407077439;
uint64_t x761 = 81310LLU;
int8_t x763 = INT8_MIN;
volatile uint16_t x770 = 26U;
int64_t x772 = INT64_MIN;
static int64_t x781 = -75342063771058LL;
uint64_t x786 = UINT64_MAX;
volatile int32_t t173 = 111056;
volatile int32_t x794 = INT32_MAX;
static int8_t x801 = -13;
static volatile int32_t x806 = -1;
int64_t x829 = INT64_MAX;
static int8_t x833 = INT8_MIN;
int64_t x845 = INT64_MIN;
volatile uint16_t x851 = UINT16_MAX;
volatile int32_t t188 = 246157;
int8_t x878 = INT8_MIN;
int32_t x882 = INT32_MIN;
int32_t t191 = -27596;
int64_t x887 = -1LL;
volatile uint32_t x888 = 14435U;
uint64_t x893 = 290356957650LLU;
int32_t x895 = INT32_MAX;
static int32_t t195 = -455889;
volatile int64_t x902 = INT64_MAX;
int8_t x907 = INT8_MIN;
static int64_t x908 = INT64_MIN;
int64_t x910 = INT64_MIN;
int64_t x911 = INT64_MAX;


void f0(void) {
    	volatile uint32_t x2 = 1U;
	static int8_t x3 = INT8_MIN;
	uint64_t x4 = 154094LLU;
	int32_t t0 = 16301;

    t0 = ((x1&x2)>(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint16_t x6 = UINT16_MAX;
	static uint8_t x8 = 10U;

    t1 = ((x5&x6)>(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t t2 = -11300;

    t2 = ((x9&x10)>(x11-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	static volatile uint64_t x14 = 45737LLU;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -16739954;

    t3 = ((x13&x14)>(x15-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 616U;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 461879U;

    t4 = ((x17&x18)>(x19-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MIN;

    t5 = ((x21&x22)>(x23-x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 486U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 2U;
	volatile int16_t x32 = 123;
	volatile int32_t t6 = -592;

    t6 = ((x29&x30)>(x31-x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = -7951;

    t7 = ((x33&x34)>(x35-x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = 0;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = 2;
	volatile int16_t x40 = INT16_MIN;

    t8 = ((x37&x38)>(x39-x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MIN;
	uint64_t x46 = 82119322104LLU;
	uint64_t x47 = UINT64_MAX;
	static int16_t x48 = -1;
	volatile int32_t t9 = 33;

    t9 = ((x45&x46)>(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x50 = UINT64_MAX;
	int8_t x51 = -1;
	int32_t t10 = -44;

    t10 = ((x49&x50)>(x51-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 5384U;
	int16_t x54 = -1;
	int64_t x55 = INT64_MAX;
	volatile int8_t x56 = 61;
	static int32_t t11 = 50035;

    t11 = ((x53&x54)>(x55-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x62 = 29466U;
	int64_t x63 = 3794891486967416LL;

    t12 = ((x61&x62)>(x63-x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = UINT8_MAX;
	static int32_t x67 = INT32_MIN;
	int8_t x68 = -3;
	volatile int32_t t13 = -12;

    t13 = ((x65&x66)>(x67-x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x69 = 0U;
	volatile uint64_t x70 = 75356613LLU;
	int8_t x71 = INT8_MIN;
	int64_t x72 = 9223LL;
	int32_t t14 = 396515;

    t14 = ((x69&x70)>(x71-x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = -1;
	static int64_t x75 = INT64_MAX;
	static uint8_t x76 = UINT8_MAX;
	static volatile int32_t t15 = -7;

    t15 = ((x73&x74)>(x75-x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	int16_t x80 = 33;
	volatile int32_t t16 = 54022939;

    t16 = ((x77&x78)>(x79-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	int8_t x84 = INT8_MIN;

    t17 = ((x81&x82)>(x83-x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x86 = UINT32_MAX;
	volatile uint64_t x87 = UINT64_MAX;
	int8_t x88 = 0;
	int32_t t18 = 0;

    t18 = ((x85&x86)>(x87-x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MIN;
	static int8_t x90 = INT8_MIN;
	static uint16_t x91 = 1U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t19 = -182;

    t19 = ((x89&x90)>(x91-x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x93 = 3303U;
	static int16_t x94 = -4557;
	uint16_t x95 = 0U;
	uint16_t x96 = 122U;
	volatile int32_t t20 = -260288482;

    t20 = ((x93&x94)>(x95-x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = -7;
	volatile int8_t x100 = -1;
	volatile int32_t t21 = 22;

    t21 = ((x97&x98)>(x99-x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	int8_t x104 = -12;
	volatile int32_t t22 = -15;

    t22 = ((x101&x102)>(x103-x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x105 = 5U;
	int8_t x108 = 0;

    t23 = ((x105&x106)>(x107-x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x109 = 396U;
	uint8_t x110 = UINT8_MAX;
	int64_t x112 = -1LL;

    t24 = ((x109&x110)>(x111-x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -866;
	int64_t x114 = -1LL;
	int8_t x115 = -5;
	uint16_t x116 = 221U;

    t25 = ((x113&x114)>(x115-x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x117 = -1;
	int64_t x118 = 1707909793073805LL;
	int32_t x119 = -1;
	volatile uint16_t x120 = 16779U;
	static int32_t t26 = -3;

    t26 = ((x117&x118)>(x119-x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x121 = 1U;
	int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = 1836LLU;

    t27 = ((x121&x122)>(x123-x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x125 = INT16_MIN;
	static uint8_t x126 = 74U;
	static int8_t x127 = INT8_MIN;
	static uint16_t x128 = 6U;
	volatile int32_t t28 = -255552451;

    t28 = ((x125&x126)>(x127-x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x130 = INT8_MAX;
	volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t29 = 0;

    t29 = ((x129&x130)>(x131-x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = 29U;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -2;
	uint8_t x136 = 103U;
	int32_t t30 = -7685;

    t30 = ((x133&x134)>(x135-x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -1LL;
	static volatile int8_t x139 = INT8_MIN;
	int32_t t31 = -2337;

    t31 = ((x137&x138)>(x139-x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MAX;
	volatile int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MIN;
	int32_t t32 = 2828868;

    t32 = ((x141&x142)>(x143-x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = 1456472166804LL;
	volatile uint16_t x146 = UINT16_MAX;
	int32_t t33 = 151019241;

    t33 = ((x145&x146)>(x147-x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x149 = 76U;
	uint32_t x150 = 183082U;
	int32_t x151 = 7;
	int32_t x152 = -1;
	int32_t t34 = -501;

    t34 = ((x149&x150)>(x151-x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = 11;
	uint64_t x154 = 29657832784644696LLU;
	uint8_t x156 = 75U;
	int32_t t35 = -1272;

    t35 = ((x153&x154)>(x155-x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	static int8_t x158 = INT8_MAX;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -565;

    t36 = ((x157&x158)>(x159-x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x162 = 1U;
	uint32_t x163 = 323153U;
	static int32_t t37 = -14;

    t37 = ((x161&x162)>(x163-x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = 30440245124472884LLU;
	static volatile int32_t x166 = -1;
	static uint64_t x168 = UINT64_MAX;
	static volatile int32_t t38 = 17287;

    t38 = ((x165&x166)>(x167-x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 25U;
	volatile int16_t x171 = -27;
	static int32_t t39 = 29634;

    t39 = ((x169&x170)>(x171-x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	static volatile uint32_t x176 = UINT32_MAX;
	int32_t t40 = -1;

    t40 = ((x173&x174)>(x175-x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = 37538094;
	volatile int32_t x178 = INT32_MAX;
	uint32_t x180 = UINT32_MAX;

    t41 = ((x177&x178)>(x179-x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	uint32_t x183 = UINT32_MAX;
	static int32_t t42 = 94;

    t42 = ((x181&x182)>(x183-x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MAX;
	uint8_t x188 = 0U;
	int32_t t43 = 61981531;

    t43 = ((x185&x186)>(x187-x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x190 = INT16_MIN;
	volatile int64_t x192 = INT64_MIN;
	int32_t t44 = -63190864;

    t44 = ((x189&x190)>(x191-x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	volatile int16_t x199 = -1;
	volatile int32_t t45 = 404397;

    t45 = ((x197&x198)>(x199-x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	static int32_t t46 = -1589;

    t46 = ((x205&x206)>(x207-x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = 1;
	int8_t x210 = 1;
	uint16_t x211 = 57U;
	uint16_t x212 = 56U;
	int32_t t47 = -2;

    t47 = ((x209&x210)>(x211-x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x213 = 3324625757129286LLU;
	int64_t x214 = INT64_MIN;
	uint32_t x215 = 864U;
	volatile int32_t t48 = 24;

    t48 = ((x213&x214)>(x215-x216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MIN;
	static int16_t x222 = 5;
	uint8_t x223 = 1U;
	static int64_t x224 = -1LL;
	static int32_t t49 = -10;

    t49 = ((x221&x222)>(x223-x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x225 = INT32_MIN;
	uint32_t x226 = 32759226U;
	int32_t x227 = INT32_MIN;
	volatile int32_t t50 = -724;

    t50 = ((x225&x226)>(x227-x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x229 = -1;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 2U;
	int32_t x232 = -3879;
	volatile int32_t t51 = 66519;

    t51 = ((x229&x230)>(x231-x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x236 = -4;
	volatile int32_t t52 = 13988752;

    t52 = ((x233&x234)>(x235-x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 4250446189761LLU;
	volatile int32_t x238 = 510;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t53 = -4141567;

    t53 = ((x237&x238)>(x239-x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MIN;
	static int8_t x242 = 24;
	uint8_t x243 = 0U;
	static int16_t x244 = INT16_MIN;
	static volatile int32_t t54 = -60;

    t54 = ((x241&x242)>(x243-x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x245 = 25U;
	volatile int16_t x246 = -1;
	static int64_t x247 = -4691864LL;
	int8_t x248 = -1;
	int32_t t55 = 2020550;

    t55 = ((x245&x246)>(x247-x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x251 = UINT32_MAX;
	int32_t t56 = 1001;

    t56 = ((x249&x250)>(x251-x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MIN;
	uint16_t x255 = 5598U;
	int64_t x256 = 223483828489384604LL;
	volatile int32_t t57 = -4769647;

    t57 = ((x253&x254)>(x255-x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MAX;
	uint8_t x259 = 7U;
	int8_t x260 = -1;
	int32_t t58 = -7;

    t58 = ((x257&x258)>(x259-x260));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = INT32_MAX;
	int64_t x262 = -1LL;
	uint64_t x263 = 98236124476LLU;
	int32_t t59 = -8639;

    t59 = ((x261&x262)>(x263-x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x271 = -1LL;
	uint64_t x272 = UINT64_MAX;
	static int32_t t60 = -322;

    t60 = ((x269&x270)>(x271-x272));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x273 = -4;
	volatile int64_t x275 = INT64_MAX;
	volatile int64_t x276 = INT64_MAX;

    t61 = ((x273&x274)>(x275-x276));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = 19306U;
	static int64_t x283 = -810LL;
	uint32_t x284 = 91373870U;
	int32_t t62 = 4152;

    t62 = ((x281&x282)>(x283-x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x286 = -40;
	volatile int16_t x288 = -3;
	int32_t t63 = -3;

    t63 = ((x285&x286)>(x287-x288));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 7U;
	int16_t x292 = 14;
	static volatile int32_t t64 = -142;

    t64 = ((x289&x290)>(x291-x292));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x293 = 59441705;
	uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile int32_t t65 = -653748898;

    t65 = ((x293&x294)>(x295-x296));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x297 = 4U;
	uint16_t x298 = UINT16_MAX;
	volatile int32_t x300 = INT32_MIN;
	int32_t t66 = -4;

    t66 = ((x297&x298)>(x299-x300));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x302 = 1;
	int8_t x303 = INT8_MAX;
	volatile int32_t x304 = -8317214;
	volatile int32_t t67 = -39792;

    t67 = ((x301&x302)>(x303-x304));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x305 = 14U;
	volatile int64_t x306 = -1LL;
	uint64_t x307 = 5867646388463LLU;
	int32_t t68 = 968;

    t68 = ((x305&x306)>(x307-x308));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = UINT8_MAX;
	static volatile int64_t x310 = INT64_MIN;
	uint16_t x311 = 2U;
	int16_t x312 = -35;

    t69 = ((x309&x310)>(x311-x312));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x313 = UINT32_MAX;
	int8_t x315 = 0;
	static int32_t x316 = -2;
	static int32_t t70 = 0;

    t70 = ((x313&x314)>(x315-x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = -1;
	static volatile int32_t t71 = 5945412;

    t71 = ((x317&x318)>(x319-x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 14582U;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int32_t t72 = 2375;

    t72 = ((x321&x322)>(x323-x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	static uint16_t x331 = UINT16_MAX;
	static volatile int8_t x332 = -1;
	static int32_t t73 = 266;

    t73 = ((x329&x330)>(x331-x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MIN;
	static volatile uint64_t x336 = 0LLU;
	static volatile int32_t t74 = -898;

    t74 = ((x333&x334)>(x335-x336));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MAX;
	uint32_t x339 = 463U;
	uint32_t x340 = 112441U;
	static int32_t t75 = 173654;

    t75 = ((x337&x338)>(x339-x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x342 = -1;
	uint16_t x343 = 68U;

    t76 = ((x341&x342)>(x343-x344));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = -1;
	uint32_t x346 = 11U;
	uint64_t x347 = 695LLU;
	static int64_t x348 = INT64_MIN;
	int32_t t77 = 918;

    t77 = ((x345&x346)>(x347-x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x349 = 2588512159537352LLU;
	uint64_t x351 = 58986168938976502LLU;
	volatile int32_t t78 = 10419603;

    t78 = ((x349&x350)>(x351-x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MAX;
	static uint8_t x354 = 6U;
	int8_t x356 = -1;

    t79 = ((x353&x354)>(x355-x356));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x361 = -9;
	int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	static int8_t x364 = 10;
	static int32_t t80 = 22;

    t80 = ((x361&x362)>(x363-x364));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x365 = -417794285021006528LL;
	volatile int64_t x367 = 0LL;
	uint8_t x368 = 26U;
	volatile int32_t t81 = -21742733;

    t81 = ((x365&x366)>(x367-x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x369 = 14204768U;
	int16_t x370 = INT16_MIN;
	int8_t x372 = -1;
	int32_t t82 = 1;

    t82 = ((x369&x370)>(x371-x372));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	static int8_t x375 = -1;
	int32_t x376 = -1;
	volatile int32_t t83 = -34413;

    t83 = ((x373&x374)>(x375-x376));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x377 = 93U;
	volatile uint8_t x378 = 0U;
	volatile uint8_t x379 = 79U;
	uint8_t x380 = UINT8_MAX;
	static int32_t t84 = -733;

    t84 = ((x377&x378)>(x379-x380));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile uint8_t x382 = 9U;
	volatile int32_t t85 = -47375;

    t85 = ((x381&x382)>(x383-x384));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = 1;
	uint32_t x386 = 196576163U;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t86 = 6865701;

    t86 = ((x385&x386)>(x387-x388));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x393 = 12;
	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	static volatile int32_t t87 = -1;

    t87 = ((x393&x394)>(x395-x396));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MIN;
	static int8_t x399 = -48;
	static uint8_t x400 = 10U;
	volatile int32_t t88 = -250877953;

    t88 = ((x397&x398)>(x399-x400));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x401 = 25U;
	uint8_t x402 = 62U;
	static int16_t x403 = INT16_MIN;
	volatile int32_t t89 = -4934157;

    t89 = ((x401&x402)>(x403-x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x407 = 31LLU;

    t90 = ((x405&x406)>(x407-x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x410 = -1LL;
	int64_t x411 = INT64_MAX;
	static uint32_t x412 = UINT32_MAX;

    t91 = ((x409&x410)>(x411-x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x417 = -1;
	int32_t x418 = INT32_MAX;
	int8_t x420 = INT8_MAX;

    t92 = ((x417&x418)>(x419-x420));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x421 = UINT64_MAX;
	volatile uint8_t x423 = 59U;
	static uint8_t x424 = 0U;
	int32_t t93 = -46157;

    t93 = ((x421&x422)>(x423-x424));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x425 = 143U;
	int64_t x428 = -2086438308882056430LL;
	static int32_t t94 = -3484840;

    t94 = ((x425&x426)>(x427-x428));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = INT32_MAX;
	uint32_t x434 = 1903U;
	int16_t x435 = 538;
	static int64_t x436 = INT64_MAX;
	static volatile int32_t t95 = 15;

    t95 = ((x433&x434)>(x435-x436));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x437 = 238334;
	static volatile uint32_t x439 = 501U;
	volatile int32_t t96 = -1;

    t96 = ((x437&x438)>(x439-x440));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x441 = -1;
	uint32_t x442 = UINT32_MAX;
	int64_t x443 = 1071876LL;
	uint8_t x444 = UINT8_MAX;
	int32_t t97 = -3885443;

    t97 = ((x441&x442)>(x443-x444));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x445 = UINT64_MAX;
	uint64_t x446 = 74620LLU;
	static uint64_t x447 = 16742519168908510LLU;
	int32_t x448 = INT32_MAX;

    t98 = ((x445&x446)>(x447-x448));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x449 = INT32_MAX;
	uint8_t x450 = UINT8_MAX;
	int32_t x451 = -704781;
	int64_t x452 = INT64_MIN;
	int32_t t99 = 10596831;

    t99 = ((x449&x450)>(x451-x452));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x453 = -2409;
	uint8_t x454 = UINT8_MAX;
	int32_t x455 = -1;
	static uint64_t x456 = UINT64_MAX;
	volatile int32_t t100 = 43;

    t100 = ((x453&x454)>(x455-x456));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x457 = 125U;
	static uint64_t x458 = 2495289133692LLU;
	uint8_t x459 = 5U;
	volatile int16_t x460 = INT16_MAX;
	volatile int32_t t101 = 22120609;

    t101 = ((x457&x458)>(x459-x460));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x461 = INT32_MIN;
	static int16_t x462 = INT16_MIN;
	static volatile int16_t x463 = INT16_MAX;
	uint8_t x464 = 1U;
	int32_t t102 = -24192;

    t102 = ((x461&x462)>(x463-x464));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	int16_t x468 = -14;

    t103 = ((x465&x466)>(x467-x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x469 = INT16_MIN;
	uint64_t x470 = 1106LLU;
	int32_t t104 = 0;

    t104 = ((x469&x470)>(x471-x472));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x474 = INT32_MAX;
	uint16_t x475 = 1152U;
	int64_t x476 = -1LL;
	static int32_t t105 = 174086;

    t105 = ((x473&x474)>(x475-x476));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x477 = 30468U;
	uint8_t x478 = 57U;
	int8_t x479 = INT8_MAX;
	int64_t x480 = 129330933813994LL;

    t106 = ((x477&x478)>(x479-x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x484 = INT16_MAX;

    t107 = ((x481&x482)>(x483-x484));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x486 = -1LL;
	int32_t t108 = -44;

    t108 = ((x485&x486)>(x487-x488));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x489 = 119U;
	uint8_t x490 = UINT8_MAX;
	static int32_t x492 = -1;
	static int32_t t109 = -371148;

    t109 = ((x489&x490)>(x491-x492));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = INT16_MIN;
	static int64_t x494 = -1LL;
	static int32_t x495 = -13;
	int8_t x496 = INT8_MIN;
	int32_t t110 = -14721450;

    t110 = ((x493&x494)>(x495-x496));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x498 = -1;
	static int64_t x499 = -1LL;
	volatile uint8_t x500 = 3U;
	int32_t t111 = 2;

    t111 = ((x497&x498)>(x499-x500));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = -1;
	uint16_t x502 = 3895U;
	uint8_t x503 = UINT8_MAX;
	volatile int16_t x504 = -1;
	static volatile int32_t t112 = 1366;

    t112 = ((x501&x502)>(x503-x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x505 = UINT8_MAX;
	uint16_t x507 = 6U;
	static int16_t x508 = INT16_MAX;
	volatile int32_t t113 = 15281802;

    t113 = ((x505&x506)>(x507-x508));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x514 = -1;
	volatile uint32_t x515 = 4U;
	uint16_t x516 = UINT16_MAX;

    t114 = ((x513&x514)>(x515-x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x517 = 11323199935874LLU;
	volatile uint64_t x518 = 15352886988367366LLU;
	int16_t x520 = 244;
	static int32_t t115 = 824762756;

    t115 = ((x517&x518)>(x519-x520));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x521 = 30173U;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = 7479;
	uint8_t x524 = UINT8_MAX;

    t116 = ((x521&x522)>(x523-x524));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x525 = INT32_MIN;
	static uint32_t x527 = 7651U;
	int32_t x528 = INT32_MIN;
	volatile int32_t t117 = -987;

    t117 = ((x525&x526)>(x527-x528));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x529 = 1;
	uint32_t x530 = UINT32_MAX;
	static int16_t x532 = INT16_MIN;

    t118 = ((x529&x530)>(x531-x532));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x537 = 14U;
	int16_t x538 = INT16_MIN;
	int32_t x539 = INT32_MIN;
	int64_t x540 = INT64_MIN;
	int32_t t119 = 614073352;

    t119 = ((x537&x538)>(x539-x540));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x541 = 81797081257LLU;
	static volatile uint32_t x542 = 1676U;
	int32_t x543 = INT32_MIN;
	uint64_t x544 = 19083729956LLU;
	int32_t t120 = 5;

    t120 = ((x541&x542)>(x543-x544));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = INT64_MAX;
	int64_t x550 = -646LL;
	int32_t t121 = 12848;

    t121 = ((x549&x550)>(x551-x552));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x553 = 277181402LLU;
	uint32_t x554 = 702722051U;
	volatile int8_t x555 = INT8_MAX;
	uint16_t x556 = 5006U;
	int32_t t122 = -100863;

    t122 = ((x553&x554)>(x555-x556));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x561 = -1;
	volatile uint16_t x562 = 9510U;
	static int32_t x564 = 669525;
	int32_t t123 = -2217317;

    t123 = ((x561&x562)>(x563-x564));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	uint8_t x566 = UINT8_MAX;
	int32_t x567 = INT32_MIN;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t124 = 1012;

    t124 = ((x565&x566)>(x567-x568));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x570 = -5;
	static uint16_t x571 = 53U;
	uint8_t x572 = 4U;

    t125 = ((x569&x570)>(x571-x572));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x573 = INT32_MAX;
	int16_t x574 = INT16_MIN;
	int16_t x575 = INT16_MIN;
	static int64_t x576 = 544851735LL;
	static int32_t t126 = -16654;

    t126 = ((x573&x574)>(x575-x576));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x578 = -1;
	uint16_t x579 = 2U;
	volatile int16_t x580 = 12111;
	int32_t t127 = -3318;

    t127 = ((x577&x578)>(x579-x580));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x581 = INT16_MAX;
	uint32_t x582 = 3695930U;
	static int8_t x583 = -17;
	static int8_t x584 = INT8_MIN;
	int32_t t128 = 18003;

    t128 = ((x581&x582)>(x583-x584));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x585 = 9;
	volatile uint64_t x586 = 155873267945LLU;
	int32_t x587 = -1;
	int32_t x588 = -1;
	int32_t t129 = 0;

    t129 = ((x585&x586)>(x587-x588));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x589 = INT32_MIN;
	uint8_t x590 = 101U;
	static int16_t x591 = -1249;
	int32_t x592 = INT32_MIN;
	static int32_t t130 = -1199875;

    t130 = ((x589&x590)>(x591-x592));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x593 = 676907173517455550LLU;
	int64_t x595 = -1LL;
	int32_t x596 = INT32_MIN;

    t131 = ((x593&x594)>(x595-x596));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = 52;
	int64_t x599 = 1605LL;
	volatile int32_t t132 = 374;

    t132 = ((x597&x598)>(x599-x600));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x601 = INT8_MIN;
	volatile int8_t x602 = -1;
	uint64_t x604 = UINT64_MAX;
	int32_t t133 = -1846868;

    t133 = ((x601&x602)>(x603-x604));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = -1;
	volatile int32_t x610 = -1;
	volatile uint32_t x611 = 178474U;
	int8_t x612 = -13;

    t134 = ((x609&x610)>(x611-x612));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x613 = 34499U;
	static volatile int8_t x614 = 0;
	volatile int16_t x615 = INT16_MAX;
	volatile uint32_t x616 = UINT32_MAX;
	volatile int32_t t135 = -376513;

    t135 = ((x613&x614)>(x615-x616));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x617 = -50321;
	static int16_t x619 = INT16_MAX;
	uint8_t x620 = 70U;

    t136 = ((x617&x618)>(x619-x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x621 = 11U;
	int64_t x622 = 93676LL;
	int8_t x623 = INT8_MAX;
	static int32_t t137 = 13139142;

    t137 = ((x621&x622)>(x623-x624));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x625 = 53572001604295377LLU;
	volatile int8_t x626 = -1;
	int32_t x627 = INT32_MIN;
	uint32_t x628 = 316366128U;
	volatile int32_t t138 = -1;

    t138 = ((x625&x626)>(x627-x628));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x629 = 18976LL;
	uint8_t x630 = 39U;
	uint64_t x631 = 60233443915LLU;
	int32_t t139 = -45;

    t139 = ((x629&x630)>(x631-x632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x633 = UINT32_MAX;
	int64_t x634 = INT64_MAX;
	int16_t x635 = INT16_MIN;
	static volatile int16_t x636 = 146;
	volatile int32_t t140 = 551;

    t140 = ((x633&x634)>(x635-x636));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x637 = INT64_MIN;
	uint32_t x638 = 17U;
	int32_t x639 = -244;
	static uint32_t x640 = UINT32_MAX;
	static volatile int32_t t141 = 18143503;

    t141 = ((x637&x638)>(x639-x640));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = INT64_MAX;
	int8_t x643 = -1;
	volatile int32_t t142 = 429;

    t142 = ((x641&x642)>(x643-x644));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x645 = 26644531702LLU;
	int64_t x647 = 27707013281037LL;
	volatile int32_t t143 = 763966;

    t143 = ((x645&x646)>(x647-x648));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x649 = 0;
	static uint16_t x650 = 4858U;
	int32_t x651 = -1;
	int32_t x652 = -434425;
	int32_t t144 = -290265;

    t144 = ((x649&x650)>(x651-x652));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t x656 = INT32_MIN;
	volatile int32_t t145 = 6365;

    t145 = ((x653&x654)>(x655-x656));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x657 = 19;
	static uint32_t x658 = 16U;
	int8_t x659 = -29;
	static volatile int32_t t146 = 1;

    t146 = ((x657&x658)>(x659-x660));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x661 = 855058LLU;
	int16_t x662 = INT16_MIN;
	uint32_t x663 = 1797011567U;
	int64_t x664 = 804921518887LL;
	volatile int32_t t147 = 14376;

    t147 = ((x661&x662)>(x663-x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x665 = -1;
	int8_t x666 = INT8_MAX;
	uint64_t x667 = 10207LLU;
	uint32_t x668 = 7602706U;
	volatile int32_t t148 = -3;

    t148 = ((x665&x666)>(x667-x668));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x669 = 5499303U;
	volatile uint16_t x670 = 8U;
	uint8_t x671 = 10U;
	int16_t x672 = -1;
	int32_t t149 = 425;

    t149 = ((x669&x670)>(x671-x672));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x677 = -1LL;
	int16_t x679 = -1;
	static int32_t x680 = 3;
	int32_t t150 = -145;

    t150 = ((x677&x678)>(x679-x680));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x681 = 7595369LLU;
	static volatile int32_t x682 = 0;
	uint16_t x684 = 11U;
	static int32_t t151 = 1426663;

    t151 = ((x681&x682)>(x683-x684));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x687 = INT64_MAX;
	int32_t t152 = -465;

    t152 = ((x685&x686)>(x687-x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x689 = UINT16_MAX;
	uint16_t x690 = 3418U;
	int16_t x691 = -1;
	int32_t x692 = INT32_MIN;
	volatile int32_t t153 = -57902641;

    t153 = ((x689&x690)>(x691-x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x693 = -97499476255889LL;
	volatile uint16_t x695 = 61U;
	int32_t x696 = INT32_MAX;
	int32_t t154 = 57667825;

    t154 = ((x693&x694)>(x695-x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x697 = UINT16_MAX;
	uint32_t x698 = 238U;
	volatile int16_t x699 = INT16_MAX;
	int8_t x700 = -35;
	volatile int32_t t155 = 3;

    t155 = ((x697&x698)>(x699-x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x701 = 83279LLU;
	uint64_t x702 = UINT64_MAX;
	volatile int8_t x703 = INT8_MIN;
	volatile int64_t x704 = -214204928763510555LL;
	volatile int32_t t156 = 125976;

    t156 = ((x701&x702)>(x703-x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = INT16_MIN;
	volatile int16_t x706 = INT16_MIN;
	static uint64_t x707 = UINT64_MAX;
	volatile int8_t x708 = INT8_MAX;
	volatile int32_t t157 = 188402214;

    t157 = ((x705&x706)>(x707-x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x709 = UINT8_MAX;
	volatile int8_t x710 = INT8_MIN;
	static int32_t x711 = 79145575;
	int16_t x712 = INT16_MAX;
	volatile int32_t t158 = -999;

    t158 = ((x709&x710)>(x711-x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x713 = 80U;
	static uint16_t x714 = 205U;
	static int32_t x716 = INT32_MAX;
	int32_t t159 = -101;

    t159 = ((x713&x714)>(x715-x716));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x717 = UINT16_MAX;
	static int16_t x718 = INT16_MAX;
	volatile int32_t t160 = 31150343;

    t160 = ((x717&x718)>(x719-x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	uint32_t x722 = UINT32_MAX;
	volatile int16_t x723 = INT16_MAX;
	int32_t x724 = -1;

    t161 = ((x721&x722)>(x723-x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x725 = -1;
	uint16_t x726 = 5592U;
	uint8_t x727 = 29U;
	int16_t x728 = INT16_MIN;

    t162 = ((x725&x726)>(x727-x728));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x731 = -1;
	int16_t x732 = -1;
	volatile int32_t t163 = -145;

    t163 = ((x729&x730)>(x731-x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x737 = INT32_MIN;
	uint32_t x738 = UINT32_MAX;
	volatile int64_t x739 = -459LL;
	static uint64_t x740 = 1993326948300509757LLU;

    t164 = ((x737&x738)>(x739-x740));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x741 = INT16_MIN;
	int8_t x743 = 4;
	static volatile int8_t x744 = INT8_MIN;
	volatile int32_t t165 = 129812975;

    t165 = ((x741&x742)>(x743-x744));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x746 = 99U;
	int64_t x748 = 0LL;
	int32_t t166 = -982421635;

    t166 = ((x745&x746)>(x747-x748));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x750 = 14U;
	static int16_t x751 = -923;
	uint16_t x752 = 9879U;

    t167 = ((x749&x750)>(x751-x752));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x753 = 6036U;
	int64_t x754 = -5LL;
	uint8_t x755 = 95U;
	int8_t x756 = INT8_MIN;
	int32_t t168 = -3;

    t168 = ((x753&x754)>(x755-x756));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x762 = INT32_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t169 = 999162;

    t169 = ((x761&x762)>(x763-x764));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x771 = INT32_MIN;
	int32_t t170 = 7;

    t170 = ((x769&x770)>(x771-x772));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x773 = 15749LLU;
	int16_t x774 = INT16_MIN;
	uint32_t x775 = 8197477U;
	volatile int8_t x776 = -1;
	volatile int32_t t171 = 714013667;

    t171 = ((x773&x774)>(x775-x776));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x782 = INT64_MAX;
	uint64_t x783 = 1359LLU;
	static int8_t x784 = -11;
	int32_t t172 = 0;

    t172 = ((x781&x782)>(x783-x784));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x785 = 7U;
	uint64_t x787 = 2231LLU;
	uint64_t x788 = 480067569296540889LLU;

    t173 = ((x785&x786)>(x787-x788));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x789 = 1528;
	int32_t x790 = 114938363;
	int16_t x791 = -1;
	int8_t x792 = INT8_MIN;
	volatile int32_t t174 = 27513985;

    t174 = ((x789&x790)>(x791-x792));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x793 = 23LLU;
	int8_t x795 = -63;
	int16_t x796 = INT16_MAX;
	static volatile int32_t t175 = -1;

    t175 = ((x793&x794)>(x795-x796));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x797 = 52U;
	volatile int32_t x798 = 3;
	static int32_t x799 = INT32_MAX;
	uint32_t x800 = 871U;
	int32_t t176 = 6169784;

    t176 = ((x797&x798)>(x799-x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x802 = UINT16_MAX;
	int64_t x803 = INT64_MIN;
	int8_t x804 = INT8_MIN;
	int32_t t177 = -2719434;

    t177 = ((x801&x802)>(x803-x804));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x805 = 2027165LLU;
	int32_t x807 = INT32_MIN;
	int64_t x808 = 50433389329822689LL;
	volatile int32_t t178 = 32996439;

    t178 = ((x805&x806)>(x807-x808));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x809 = 3150;
	int16_t x810 = INT16_MIN;
	volatile int64_t x811 = -1LL;
	static uint8_t x812 = 4U;
	static volatile int32_t t179 = -413395;

    t179 = ((x809&x810)>(x811-x812));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x817 = 0;
	volatile int64_t x818 = INT64_MAX;
	int8_t x819 = -1;
	int8_t x820 = 8;
	volatile int32_t t180 = 463;

    t180 = ((x817&x818)>(x819-x820));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x821 = 23U;
	int8_t x822 = INT8_MAX;
	uint64_t x823 = 2089298608LLU;
	uint32_t x824 = 34899U;
	int32_t t181 = 464228322;

    t181 = ((x821&x822)>(x823-x824));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x830 = 188870714LLU;
	int64_t x831 = INT64_MIN;
	volatile int32_t x832 = INT32_MIN;
	static int32_t t182 = 12;

    t182 = ((x829&x830)>(x831-x832));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x834 = 0LL;
	int64_t x835 = INT64_MAX;
	int8_t x836 = INT8_MAX;
	volatile int32_t t183 = -1;

    t183 = ((x833&x834)>(x835-x836));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x846 = -1LL;
	static uint32_t x847 = 50394428U;
	int32_t x848 = INT32_MIN;
	int32_t t184 = -702;

    t184 = ((x845&x846)>(x847-x848));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x849 = INT64_MAX;
	static int64_t x850 = INT64_MAX;
	volatile uint16_t x852 = 50U;
	volatile int32_t t185 = -2101724;

    t185 = ((x849&x850)>(x851-x852));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x853 = UINT16_MAX;
	static int32_t x854 = -1;
	uint32_t x855 = UINT32_MAX;
	int64_t x856 = -1LL;
	volatile int32_t t186 = -785767;

    t186 = ((x853&x854)>(x855-x856));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x861 = INT32_MAX;
	uint64_t x862 = 13391LLU;
	volatile int8_t x863 = -1;
	uint8_t x864 = UINT8_MAX;
	volatile int32_t t187 = 215170262;

    t187 = ((x861&x862)>(x863-x864));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x865 = 69U;
	int8_t x866 = INT8_MIN;
	static int32_t x867 = INT32_MIN;
	volatile uint64_t x868 = UINT64_MAX;

    t188 = ((x865&x866)>(x867-x868));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x869 = -1;
	int64_t x870 = 903523876651899316LL;
	int16_t x871 = -1;
	volatile int8_t x872 = INT8_MAX;
	static int32_t t189 = 6;

    t189 = ((x869&x870)>(x871-x872));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x877 = 3;
	int32_t x879 = -135830154;
	static uint32_t x880 = 10U;
	volatile int32_t t190 = 1;

    t190 = ((x877&x878)>(x879-x880));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x881 = -3020;
	static int16_t x883 = 3;
	int8_t x884 = INT8_MIN;

    t191 = ((x881&x882)>(x883-x884));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x885 = 5316U;
	uint8_t x886 = 6U;
	int32_t t192 = 1014018225;

    t192 = ((x885&x886)>(x887-x888));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = INT64_MIN;
	uint64_t x890 = 380LLU;
	static int32_t x891 = INT32_MAX;
	static uint64_t x892 = UINT64_MAX;
	volatile int32_t t193 = -3725628;

    t193 = ((x889&x890)>(x891-x892));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x894 = 2650713LLU;
	int16_t x896 = 37;
	int32_t t194 = 647215;

    t194 = ((x893&x894)>(x895-x896));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x897 = INT64_MAX;
	static int64_t x898 = -5459306LL;
	int32_t x899 = 18961;
	static int16_t x900 = 1;

    t195 = ((x897&x898)>(x899-x900));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x901 = INT32_MAX;
	int64_t x903 = INT64_MIN;
	int32_t x904 = -1;
	static int32_t t196 = 46;

    t196 = ((x901&x902)>(x903-x904));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x905 = 16U;
	uint64_t x906 = 234829447LLU;
	int32_t t197 = 28341;

    t197 = ((x905&x906)>(x907-x908));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x909 = -1002;
	volatile int8_t x912 = 5;
	static int32_t t198 = -331;

    t198 = ((x909&x910)>(x911-x912));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x913 = INT64_MAX;
	uint32_t x914 = UINT32_MAX;
	int8_t x915 = INT8_MIN;
	volatile int64_t x916 = INT64_MIN;
	volatile int32_t t199 = 7757224;

    t199 = ((x913&x914)>(x915-x916));

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

