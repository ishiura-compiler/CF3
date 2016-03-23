
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

uint64_t x6 = UINT64_MAX;
uint64_t t1 = UINT64_MAX;
uint64_t x9 = UINT64_MAX;
volatile uint64_t t2 = UINT64_MAX;
volatile int64_t t3 = INT64_MAX;
uint16_t x20 = UINT16_MAX;
int32_t t4 = 108390140;
int64_t x23 = -32148668143602753LL;
static int16_t x27 = INT16_MIN;
volatile uint64_t x28 = 8151628864274392322LLU;
uint64_t t6 = 9035018001571342LLU;
int64_t t7 = 5016176421LL;
uint8_t x36 = 84U;
static int32_t x37 = 28611973;
uint64_t t9 = 730697460LLU;
static int8_t x46 = 1;
static int32_t x47 = INT32_MAX;
static int16_t x49 = -1;
int16_t x53 = -648;
uint64_t x58 = 6447LLU;
uint8_t x65 = UINT8_MAX;
int8_t x70 = -1;
int32_t t17 = INT32_MIN;
int32_t x75 = INT32_MIN;
uint32_t x80 = 251U;
volatile int32_t x87 = INT32_MIN;
int8_t x88 = INT8_MIN;
int16_t x89 = INT16_MIN;
volatile uint32_t x99 = 165249U;
static int64_t t24 = 14292485867LL;
uint16_t x102 = 42U;
volatile int32_t t26 = INT32_MIN;
uint16_t x112 = UINT16_MAX;
uint64_t x114 = UINT64_MAX;
uint32_t x119 = 12529U;
int32_t x125 = -12464;
volatile int32_t t31 = 22233308;
int32_t x130 = -1;
uint64_t t32 = 3LLU;
volatile int32_t t33 = 27507;
int32_t x144 = 1020311;
static volatile int64_t t35 = 557LL;
int32_t x145 = -1;
uint8_t x152 = 1U;
volatile int64_t t37 = INT64_MIN;
int64_t x155 = INT64_MIN;
int32_t x171 = -1;
int32_t x175 = -10;
uint32_t x176 = UINT32_MAX;
int8_t x186 = 7;
int8_t x188 = INT8_MIN;
static volatile uint16_t x189 = 31477U;
int64_t x191 = INT64_MAX;
volatile int32_t t51 = INT32_MIN;
volatile uint16_t x211 = 195U;
int8_t x215 = 1;
volatile int32_t x223 = INT32_MIN;
volatile int64_t x224 = -24LL;
volatile uint16_t x225 = UINT16_MAX;
volatile int32_t t56 = -1997;
uint8_t x236 = UINT8_MAX;
int8_t x237 = INT8_MIN;
int16_t x240 = -102;
int64_t x242 = -1LL;
volatile int64_t t61 = 17863106138038LL;
int16_t x251 = 22;
int32_t x254 = INT32_MIN;
int64_t x257 = 4497838198180LL;
int8_t x260 = -1;
static int64_t t64 = 3746140LL;
int64_t t66 = INT64_MAX;
int32_t x270 = 19546733;
static volatile uint8_t x273 = UINT8_MAX;
uint8_t x281 = 11U;
int32_t t71 = 92411621;
static int64_t x292 = INT64_MIN;
static uint32_t t72 = UINT32_MAX;
int64_t x296 = -1LL;
int8_t x306 = INT8_MIN;
int16_t x308 = INT16_MAX;
static int32_t x320 = -36;
static int32_t x321 = INT32_MAX;
static volatile int64_t t80 = -14LL;
uint64_t x327 = UINT64_MAX;
volatile int8_t x329 = 0;
int16_t x330 = INT16_MIN;
int64_t x332 = INT64_MAX;
uint64_t x338 = 3229460LLU;
uint8_t x342 = 75U;
int32_t t85 = 39914736;
int32_t x347 = INT32_MIN;
static volatile uint64_t t86 = 570298580029879LLU;
volatile int16_t x350 = INT16_MAX;
static uint16_t x359 = 4U;
volatile uint32_t t90 = 483U;
volatile int64_t x371 = INT64_MAX;
volatile int64_t t92 = -7LL;
uint32_t x378 = 1588U;
int64_t x381 = -1LL;
volatile int32_t t97 = -133280034;
int8_t x394 = -6;
static int32_t t98 = -941;
volatile int64_t x398 = INT64_MIN;
int16_t x407 = INT16_MIN;
uint16_t x409 = 1U;
volatile int16_t x415 = INT16_MAX;
int32_t x420 = INT32_MIN;
uint64_t t104 = 117462LLU;
int64_t x425 = -1LL;
volatile int64_t x433 = INT64_MIN;
static volatile int64_t x435 = -1893LL;
int16_t x441 = 7;
int32_t x446 = INT32_MAX;
static int64_t x447 = INT64_MAX;
int32_t x452 = INT32_MAX;
int32_t t112 = 6;
uint32_t t113 = 446U;
volatile int32_t x458 = -4232;
int32_t x466 = -1;
uint16_t x477 = 6U;
volatile uint32_t x478 = UINT32_MAX;
uint32_t x479 = 407U;
int64_t x482 = INT64_MAX;
int8_t x483 = 7;
int64_t x486 = INT64_MIN;
volatile uint8_t x487 = 36U;
static int8_t x491 = INT8_MAX;
static uint8_t x492 = 10U;
int16_t x494 = -1;
uint8_t x522 = UINT8_MAX;
int64_t t131 = 1293173LL;
volatile int16_t x531 = -1;
int64_t x535 = -2701479LL;
int64_t t133 = INT64_MAX;
static int64_t x537 = INT64_MAX;
int32_t t138 = 1;
int32_t x569 = INT32_MIN;
uint32_t t142 = 1024120U;
uint8_t x573 = UINT8_MAX;
volatile int64_t t143 = 896658246LL;
static volatile uint64_t t144 = UINT64_MAX;
volatile uint64_t x583 = 2855797LLU;
int8_t x588 = INT8_MIN;
int64_t x589 = INT64_MAX;
int8_t x592 = INT8_MIN;
uint8_t x597 = 3U;
volatile int32_t t150 = -319421310;
uint64_t x606 = 8755726420LLU;
int16_t x607 = 11;
uint32_t x608 = UINT32_MAX;
int16_t x609 = INT16_MAX;
int32_t x610 = INT32_MAX;
int32_t x617 = INT32_MAX;
int64_t x621 = 14013333648862577LL;
int16_t x627 = INT16_MIN;
volatile int32_t t156 = -1;
static int32_t x629 = INT32_MAX;
volatile uint16_t x630 = 2838U;
volatile uint8_t x631 = UINT8_MAX;
volatile uint32_t x632 = 27689314U;
volatile int16_t x634 = -1;
int32_t x645 = INT32_MIN;
int8_t x647 = -1;
int8_t x652 = 20;
uint8_t x653 = UINT8_MAX;
volatile uint64_t x656 = 2164614184891514654LLU;
static volatile int64_t t164 = -331263726366341919LL;
int64_t x676 = INT64_MIN;
int32_t x679 = -31;
int16_t x681 = INT16_MIN;
volatile int32_t t170 = 27284;
uint8_t x687 = UINT8_MAX;
int32_t t171 = INT32_MAX;
static volatile uint8_t x694 = 1U;
int16_t x695 = INT16_MAX;
volatile int32_t t173 = 58;
uint16_t x698 = 4U;
int8_t x699 = INT8_MIN;
static int16_t x700 = -12;
static volatile int8_t x707 = 0;
volatile int16_t x708 = 1549;
static int16_t x712 = INT16_MIN;
uint64_t x715 = 8LLU;
int16_t x716 = INT16_MAX;
int8_t x717 = -1;
volatile int32_t t179 = -65901468;
int16_t x724 = INT16_MIN;
volatile int8_t x726 = INT8_MIN;
int32_t x732 = -1;
static int64_t x733 = -1LL;
int8_t x734 = 60;
static int64_t t184 = -201LL;
int64_t x750 = INT64_MIN;
int16_t x753 = INT16_MIN;
volatile int32_t t188 = -267;
int8_t x757 = INT8_MIN;
int64_t x758 = -4LL;
volatile int8_t x760 = 1;
volatile int64_t t189 = 77072006078682LL;
int8_t x763 = 25;
volatile uint64_t x765 = UINT64_MAX;
int32_t x766 = -1;
uint16_t x770 = UINT16_MAX;
uint16_t x779 = 6114U;
volatile int32_t x781 = -2348;
int64_t x784 = 7244368570LL;
volatile int8_t x788 = INT8_MAX;
static uint16_t x792 = 1825U;
static int32_t t199 = -196;


void f0(void) {
    	int8_t x1 = -1;
	uint16_t x2 = 1U;
	uint64_t x3 = 62905590833781LLU;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = 12096091;

    t0 = (x1|(x2&(x3==x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile int32_t x7 = INT32_MIN;
	uint16_t x8 = 1505U;

    t1 = (x5|(x6&(x7==x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 28;
	volatile int32_t x11 = INT32_MIN;
	int32_t x12 = -1;

    t2 = (x9|(x10&(x11==x12)));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = -9;
	uint64_t x15 = 47797317202209LLU;
	static int32_t x16 = INT32_MIN;

    t3 = (x13|(x14&(x15==x16)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 5;
	volatile int8_t x18 = -1;
	int16_t x19 = INT16_MAX;

    t4 = (x17|(x18&(x19==x20)));

    if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MIN;
	uint8_t x24 = 1U;
	static volatile int32_t t5 = INT32_MIN;

    t5 = (x21|(x22&(x23==x24)));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 122157LLU;
	uint8_t x26 = 1U;

    t6 = (x25|(x26&(x27==x28)));

    if (t6 != 122157LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -1LL;
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;
	int64_t x32 = 0LL;

    t7 = (x29|(x30&(x31==x32)));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 208;
	volatile uint16_t x34 = 5490U;
	static int64_t x35 = INT64_MIN;
	static int32_t t8 = 6507;

    t8 = (x33|(x34&(x35==x36)));

    if (t8 != 208) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x38 = UINT64_MAX;
	static volatile int8_t x39 = -1;
	int64_t x40 = INT64_MIN;

    t9 = (x37|(x38&(x39==x40)));

    if (t9 != 28611973LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int32_t x42 = INT32_MAX;
	uint8_t x43 = UINT8_MAX;
	static uint32_t x44 = 58654886U;
	volatile int32_t t10 = 365041;

    t10 = (x41|(x42&(x43==x44)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 4600338595716395LLU;
	int64_t x48 = -1LL;
	volatile uint64_t t11 = 149771848682LLU;

    t11 = (x45|(x46&(x47==x48)));

    if (t11 != 4600338595716395LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = UINT16_MAX;
	int8_t x51 = -14;
	int16_t x52 = 6;
	volatile int32_t t12 = -886955448;

    t12 = (x49|(x50&(x51==x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x54 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 41337115453166679LLU;
	int32_t t13 = -192;

    t13 = (x53|(x54&(x55==x56)));

    if (t13 != -648) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 4072;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	volatile uint64_t t14 = 4270285966LLU;

    t14 = (x57|(x58&(x59==x60)));

    if (t14 != 4072LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int8_t x62 = -22;
	uint64_t x63 = UINT64_MAX;
	static int64_t x64 = 437LL;
	static volatile int32_t t15 = 896;

    t15 = (x61|(x62&(x63==x64)));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	static uint16_t x68 = UINT16_MAX;
	static uint64_t t16 = 92062LLU;

    t16 = (x65|(x66&(x67==x68)));

    if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x71 = 10U;
	uint16_t x72 = 23U;

    t17 = (x69|(x70&(x71==x72)));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 12U;
	static int64_t x74 = -1LL;
	static int32_t x76 = -3993;
	static volatile int64_t t18 = 12334619LL;

    t18 = (x73|(x74&(x75==x76)));

    if (t18 != 12LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 218306U;
	volatile int32_t x78 = -1;
	int8_t x79 = INT8_MIN;
	uint32_t t19 = 956075515U;

    t19 = (x77|(x78&(x79==x80)));

    if (t19 != 218306U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	uint64_t x82 = 1458761159688442328LLU;
	static int64_t x83 = -1LL;
	uint16_t x84 = 242U;
	static volatile uint64_t t20 = 382721LLU;

    t20 = (x81|(x82&(x83==x84)));

    if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	uint8_t x86 = 117U;
	int64_t t21 = INT64_MAX;

    t21 = (x85|(x86&(x87==x88)));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x90 = 7905551;
	volatile uint8_t x91 = 2U;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 3587;

    t22 = (x89|(x90&(x91==x92)));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 0;
	static int16_t x94 = 2320;
	int64_t x95 = -1LL;
	static int16_t x96 = INT16_MAX;
	static int32_t t23 = 474165698;

    t23 = (x93|(x94&(x95==x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MIN;
	int16_t x100 = INT16_MAX;

    t24 = (x97|(x98&(x99==x100)));

    if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	int64_t x103 = 521980627408358LL;
	volatile int32_t x104 = -432793;
	int64_t t25 = INT64_MIN;

    t25 = (x101|(x102&(x103==x104)));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static int32_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;

    t26 = (x105|(x106&(x107==x108)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	volatile int8_t x110 = INT8_MIN;
	static uint16_t x111 = 61U;
	volatile int32_t t27 = 919075;

    t27 = (x109|(x110&(x111==x112)));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -77LL;
	uint32_t x115 = 1730U;
	uint8_t x116 = UINT8_MAX;
	static uint64_t t28 = 66508539059871LLU;

    t28 = (x113|(x114&(x115==x116)));

    if (t28 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MIN;
	uint16_t x120 = 28U;
	static volatile uint64_t t29 = UINT64_MAX;

    t29 = (x117|(x118&(x119==x120)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -968;
	uint8_t x122 = 6U;
	int16_t x123 = -1;
	int32_t x124 = -15958897;
	int32_t t30 = -235;

    t30 = (x121|(x122&(x123==x124)));

    if (t30 != -968) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x126 = 0U;
	int32_t x127 = 1825299;
	int32_t x128 = -1;

    t31 = (x125|(x126&(x127==x128)));

    if (t31 != -12464) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 888657079265LLU;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MIN;

    t32 = (x129|(x130&(x131==x132)));

    if (t32 != 888657079265LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int8_t x134 = 0;
	int32_t x135 = -3;
	static volatile uint32_t x136 = 94300U;

    t33 = (x133|(x134&(x135==x136)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	static int16_t x138 = -1;
	volatile int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 190;

    t34 = (x137|(x138&(x139==x140)));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -869360945360LL;
	static int8_t x142 = -1;
	uint32_t x143 = 850462U;

    t35 = (x141|(x142&(x143==x144)));

    if (t35 != -869360945360LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -516488622487814LL;
	uint32_t x148 = 46806551U;
	uint32_t t36 = UINT32_MAX;

    t36 = (x145|(x146&(x147==x148)));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int64_t x150 = 10794LL;
	uint64_t x151 = 111070343821079LLU;

    t37 = (x149|(x150&(x151==x152)));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -12100004875828LL;
	static int16_t x154 = -3;
	int32_t x156 = -1;
	int64_t t38 = -15752560526759LL;

    t38 = (x153|(x154&(x155==x156)));

    if (t38 != -12100004875828LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	volatile int64_t x158 = INT64_MIN;
	uint16_t x159 = 242U;
	static uint64_t x160 = UINT64_MAX;
	int64_t t39 = 428540492947760556LL;

    t39 = (x157|(x158&(x159==x160)));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 1U;
	volatile int64_t x162 = 405895987281140LL;
	uint64_t x163 = 428075LLU;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t40 = -25782LL;

    t40 = (x161|(x162&(x163==x164)));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	volatile int32_t x166 = INT32_MIN;
	int16_t x167 = 2344;
	int64_t x168 = 28LL;
	int32_t t41 = 56;

    t41 = (x165|(x166&(x167==x168)));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	static uint8_t x170 = UINT8_MAX;
	volatile uint16_t x172 = 8U;
	int32_t t42 = -10440;

    t42 = (x169|(x170&(x171==x172)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -7;
	uint8_t x174 = 16U;
	volatile int32_t t43 = 728285137;

    t43 = (x173|(x174&(x175==x176)));

    if (t43 != -7) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	static volatile int8_t x178 = -1;
	static int32_t x179 = -1;
	int16_t x180 = INT16_MIN;
	static int32_t t44 = 1;

    t44 = (x177|(x178&(x179==x180)));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = 622647LLU;
	volatile uint8_t x182 = 15U;
	uint64_t x183 = 978388372431368LLU;
	int32_t x184 = -669;
	static uint64_t t45 = 857004533LLU;

    t45 = (x181|(x182&(x183==x184)));

    if (t45 != 622647LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 2U;
	volatile int16_t x187 = 1;
	static int32_t t46 = 1;

    t46 = (x185|(x186&(x187==x188)));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x190 = UINT32_MAX;
	static uint32_t x192 = 65U;
	static uint32_t t47 = 25853U;

    t47 = (x189|(x190&(x191==x192)));

    if (t47 != 31477U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MAX;
	static int8_t x194 = INT8_MAX;
	int64_t x195 = 374664746956LL;
	int64_t x196 = INT64_MAX;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x193|(x194&(x195==x196)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 96289326795LLU;
	int16_t x199 = 1;
	int32_t x200 = INT32_MIN;
	uint64_t t49 = 1189649LLU;

    t49 = (x197|(x198&(x199==x200)));

    if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 124U;
	static volatile uint8_t x202 = 17U;
	int64_t x203 = 57LL;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -1342121;

    t50 = (x201|(x202&(x203==x204)));

    if (t50 != 124) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static uint8_t x206 = 2U;
	int16_t x207 = -1;
	static int64_t x208 = INT64_MAX;

    t51 = (x205|(x206&(x207==x208)));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MAX;
	uint8_t x212 = 4U;
	volatile int32_t t52 = -506935138;

    t52 = (x209|(x210&(x211==x212)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 15U;
	uint64_t x214 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	static uint64_t t53 = 49904318LLU;

    t53 = (x213|(x214&(x215==x216)));

    if (t53 != 15LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	volatile int64_t x218 = -2493265199895LL;
	volatile int32_t x219 = 909899;
	static uint32_t x220 = 109823U;
	volatile int64_t t54 = 277913039LL;

    t54 = (x217|(x218&(x219==x220)));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	uint16_t x222 = UINT16_MAX;
	volatile int32_t t55 = 3467;

    t55 = (x221|(x222&(x223==x224)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 1493LLU;
	uint16_t x228 = UINT16_MAX;

    t56 = (x225|(x226&(x227==x228)));

    if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	uint16_t x230 = 28U;
	volatile int64_t x231 = -649554294LL;
	int16_t x232 = INT16_MAX;
	int64_t t57 = 1121228LL;

    t57 = (x229|(x230&(x231==x232)));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = INT64_MAX;
	volatile uint32_t x234 = 26472U;
	int8_t x235 = INT8_MAX;
	volatile int64_t t58 = INT64_MAX;

    t58 = (x233|(x234&(x235==x236)));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x238 = 1LLU;
	static int32_t x239 = INT32_MIN;
	volatile uint64_t t59 = 89LLU;

    t59 = (x237|(x238&(x239==x240)));

    if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = 634839U;
	int64_t t60 = INT64_MAX;

    t60 = (x241|(x242&(x243==x244)));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	int64_t x246 = -1LL;
	static int16_t x247 = INT16_MAX;
	uint32_t x248 = 6U;

    t61 = (x245|(x246&(x247==x248)));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 769694U;
	int16_t x250 = -16073;
	int32_t x252 = INT32_MAX;
	uint32_t t62 = 43733U;

    t62 = (x249|(x250&(x251==x252)));

    if (t62 != 769694U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = 343LL;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	int64_t t63 = -121366865894LL;

    t63 = (x253|(x254&(x255==x256)));

    if (t63 != 343LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = 40;
	uint64_t x259 = 3LLU;

    t64 = (x257|(x258&(x259==x260)));

    if (t64 != 4497838198180LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	volatile int32_t x262 = -463357058;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t65 = INT32_MIN;

    t65 = (x261|(x262&(x263==x264)));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MIN;
	static int8_t x267 = 0;
	uint64_t x268 = 147957889744399559LLU;

    t66 = (x265|(x266&(x267==x268)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x269 = 15282497118564LLU;
	uint16_t x271 = 1823U;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t67 = 1039026845742465223LLU;

    t67 = (x269|(x270&(x271==x272)));

    if (t67 != 15282497118564LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x274 = 15U;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = -3;

    t68 = (x273|(x274&(x275==x276)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t69 = 0;

    t69 = (x277|(x278&(x279==x280)));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = -1;
	int16_t x283 = 72;
	int8_t x284 = -60;
	volatile int32_t t70 = -5557;

    t70 = (x281|(x282&(x283==x284)));

    if (t70 != 11) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -14;
	static int8_t x286 = -1;
	volatile uint32_t x287 = 5U;
	int64_t x288 = INT64_MIN;

    t71 = (x285|(x286&(x287==x288)));

    if (t71 != -14) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 6761223LLU;

    t72 = (x289|(x290&(x291==x292)));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 25U;
	uint8_t x294 = 13U;
	int32_t x295 = 183;
	int32_t t73 = 188;

    t73 = (x293|(x294&(x295==x296)));

    if (t73 != 25) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -15;
	uint16_t x298 = 5786U;
	static int16_t x299 = -538;
	static int32_t x300 = -12;
	int32_t t74 = -16331388;

    t74 = (x297|(x298&(x299==x300)));

    if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 17;
	int32_t x302 = INT32_MIN;
	int8_t x303 = 1;
	static int8_t x304 = -1;
	int32_t t75 = -259210733;

    t75 = (x301|(x302&(x303==x304)));

    if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = -1;
	static volatile int32_t x307 = INT32_MAX;
	static volatile int32_t t76 = 115830;

    t76 = (x305|(x306&(x307==x308)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = -1;
	uint16_t x311 = 8476U;
	volatile uint16_t x312 = 8U;
	static volatile int64_t t77 = INT64_MIN;

    t77 = (x309|(x310&(x311==x312)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	volatile uint32_t x315 = 16U;
	int64_t x316 = -4355774743479884LL;
	static volatile int32_t t78 = -390;

    t78 = (x313|(x314&(x315==x316)));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 7096260U;
	int8_t x318 = -1;
	uint8_t x319 = 112U;
	static uint32_t t79 = 524077U;

    t79 = (x317|(x318&(x319==x320)));

    if (t79 != 7096260U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = INT64_MAX;
	int64_t x323 = -16620LL;
	int32_t x324 = -1;

    t80 = (x321|(x322&(x323==x324)));

    if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = 1;
	volatile uint8_t x326 = 0U;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 21;

    t81 = (x325|(x326&(x327==x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x331 = 546LLU;
	static int32_t t82 = 22119;

    t82 = (x329|(x330&(x331==x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 23995U;
	uint64_t x334 = 347289LLU;
	int16_t x335 = -197;
	volatile int64_t x336 = -409555LL;
	volatile uint64_t t83 = 291LLU;

    t83 = (x333|(x334&(x335==x336)));

    if (t83 != 23995LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t84 = 7481237998LLU;

    t84 = (x337|(x338&(x339==x340)));

    if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int32_t x343 = -265939642;
	static uint64_t x344 = UINT64_MAX;

    t85 = (x341|(x342&(x343==x344)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x345 = 2U;
	volatile uint64_t x346 = 400023826296LLU;
	int8_t x348 = INT8_MIN;

    t86 = (x345|(x346&(x347==x348)));

    if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile int16_t x351 = INT16_MAX;
	uint32_t x352 = UINT32_MAX;
	uint32_t t87 = UINT32_MAX;

    t87 = (x349|(x350&(x351==x352)));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MIN;
	static int32_t x354 = -37;
	static int64_t x355 = INT64_MAX;
	int16_t x356 = 11492;
	int32_t t88 = INT32_MIN;

    t88 = (x353|(x354&(x355==x356)));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	int8_t x360 = -1;
	volatile uint64_t t89 = 7217692062718LLU;

    t89 = (x357|(x358&(x359==x360)));

    if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 478513U;
	volatile uint16_t x362 = 13U;
	volatile int8_t x363 = -1;
	int64_t x364 = -62943LL;

    t90 = (x361|(x362&(x363==x364)));

    if (t90 != 478513U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = 2;
	uint32_t x366 = 13483142U;
	int16_t x367 = -3642;
	uint32_t x368 = UINT32_MAX;
	uint32_t t91 = 166U;

    t91 = (x365|(x366&(x367==x368)));

    if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;
	uint64_t x372 = 650008458LLU;

    t92 = (x369|(x370&(x371==x372)));

    if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MAX;
	int8_t x374 = INT8_MAX;
	static volatile uint64_t x375 = 362319997899072128LLU;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = INT32_MAX;

    t93 = (x373|(x374&(x375==x376)));

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int32_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	uint32_t t94 = 100021U;

    t94 = (x377|(x378&(x379==x380)));

    if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x382 = 1U;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int64_t t95 = -87334389LL;

    t95 = (x381|(x382&(x383==x384)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	uint64_t x386 = UINT64_MAX;
	volatile int16_t x387 = INT16_MIN;
	uint32_t x388 = 740959U;
	static uint64_t t96 = 2472LLU;

    t96 = (x385|(x386&(x387==x388)));

    if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = 343;
	uint16_t x390 = UINT16_MAX;
	volatile int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;

    t97 = (x389|(x390&(x391==x392)));

    if (t97 != 343) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	int8_t x395 = 1;
	uint8_t x396 = UINT8_MAX;

    t98 = (x393|(x394&(x395==x396)));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x399 = INT16_MIN;
	static int8_t x400 = -1;
	int64_t t99 = 47LL;

    t99 = (x397|(x398&(x399==x400)));

    if (t99 != 255LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint16_t x402 = 0U;
	uint16_t x403 = 1U;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t100 = -6614;

    t100 = (x401|(x402&(x403==x404)));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -1;
	static volatile int64_t x406 = INT64_MAX;
	volatile int16_t x408 = INT16_MAX;
	volatile int64_t t101 = 70067321LL;

    t101 = (x405|(x406&(x407==x408)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = 2;
	uint16_t x411 = 13328U;
	int16_t x412 = 122;
	int32_t t102 = 395004;

    t102 = (x409|(x410&(x411==x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 1224U;
	uint8_t x414 = UINT8_MAX;
	static uint64_t x416 = 11451557568LLU;
	static int32_t t103 = 1858;

    t103 = (x413|(x414&(x415==x416)));

    if (t103 != 1224) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 468998LLU;
	int16_t x419 = -12;

    t104 = (x417|(x418&(x419==x420)));

    if (t104 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = -1;
	volatile uint64_t x422 = 1LLU;
	uint8_t x423 = 61U;
	volatile int16_t x424 = -1;
	uint64_t t105 = UINT64_MAX;

    t105 = (x421|(x422&(x423==x424)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x426 = 632U;
	uint64_t x427 = 3330995359437LLU;
	volatile int16_t x428 = INT16_MIN;
	volatile int64_t t106 = -236592769777874884LL;

    t106 = (x425|(x426&(x427==x428)));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = UINT32_MAX;
	uint16_t x430 = 0U;
	uint64_t x431 = UINT64_MAX;
	volatile int32_t x432 = INT32_MIN;
	uint32_t t107 = UINT32_MAX;

    t107 = (x429|(x430&(x431==x432)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x434 = INT16_MAX;
	static uint16_t x436 = UINT16_MAX;
	volatile int64_t t108 = INT64_MIN;

    t108 = (x433|(x434&(x435==x436)));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	static int8_t x438 = -1;
	uint16_t x439 = 32608U;
	uint64_t x440 = 8572763199009435LLU;
	int32_t t109 = -215231916;

    t109 = (x437|(x438&(x439==x440)));

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x442 = INT16_MIN;
	uint16_t x443 = UINT16_MAX;
	int64_t x444 = -31LL;
	volatile int32_t t110 = -4;

    t110 = (x441|(x442&(x443==x444)));

    if (t110 != 7) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 1895912502LL;
	uint16_t x448 = 0U;
	volatile int64_t t111 = 160LL;

    t111 = (x445|(x446&(x447==x448)));

    if (t111 != 1895912502LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x449 = 735U;
	int8_t x450 = INT8_MIN;
	static volatile int64_t x451 = INT64_MIN;

    t112 = (x449|(x450&(x451==x452)));

    if (t112 != 735) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 9182U;
	volatile int16_t x454 = 0;
	static int64_t x455 = INT64_MAX;
	int8_t x456 = 1;

    t113 = (x453|(x454&(x455==x456)));

    if (t113 != 9182U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = 3;
	uint32_t x459 = 5956U;
	int64_t x460 = -1LL;
	volatile int32_t t114 = -2;

    t114 = (x457|(x458&(x459==x460)));

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 2902049U;
	int16_t x462 = 0;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MIN;
	uint32_t t115 = 33902785U;

    t115 = (x461|(x462&(x463==x464)));

    if (t115 != 2902049U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MAX;
	uint16_t x467 = UINT16_MAX;
	static int64_t x468 = INT64_MAX;
	volatile int32_t t116 = 126429747;

    t116 = (x465|(x466&(x467==x468)));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	int64_t x470 = -1LL;
	volatile uint64_t x471 = UINT64_MAX;
	static uint32_t x472 = 85236U;
	volatile int64_t t117 = 24953699534LL;

    t117 = (x469|(x470&(x471==x472)));

    if (t117 != 2147483647LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 12223LLU;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -1LL;
	int32_t x476 = 1071528;
	static uint64_t t118 = 7501933LLU;

    t118 = (x473|(x474&(x475==x476)));

    if (t118 != 12223LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x480 = 4772740766LL;
	static volatile uint32_t t119 = 5640545U;

    t119 = (x477|(x478&(x479==x480)));

    if (t119 != 6U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	volatile int64_t x484 = -1517243210LL;
	uint64_t t120 = UINT64_MAX;

    t120 = (x481|(x482&(x483==x484)));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	volatile uint16_t x488 = 1U;
	static volatile int64_t t121 = -1251LL;

    t121 = (x485|(x486&(x487==x488)));

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = INT64_MIN;
	int16_t x490 = INT16_MIN;
	volatile int64_t t122 = INT64_MIN;

    t122 = (x489|(x490&(x491==x492)));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -2;
	static int64_t x495 = INT64_MAX;
	int16_t x496 = INT16_MAX;
	int32_t t123 = 10;

    t123 = (x493|(x494&(x495==x496)));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = -1LL;
	uint64_t x498 = 560554LLU;
	static uint64_t x499 = 18627687LLU;
	uint64_t x500 = 2809932285266592688LLU;
	uint64_t t124 = UINT64_MAX;

    t124 = (x497|(x498&(x499==x500)));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 3721394;
	int64_t x502 = INT64_MAX;
	int16_t x503 = -1;
	static int8_t x504 = 0;
	volatile int64_t t125 = -9896174LL;

    t125 = (x501|(x502&(x503==x504)));

    if (t125 != 3721394LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	static int64_t x506 = INT64_MIN;
	static uint16_t x507 = 4U;
	uint16_t x508 = 264U;
	int64_t t126 = INT64_MAX;

    t126 = (x505|(x506&(x507==x508)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = INT16_MAX;
	static volatile int8_t x510 = INT8_MAX;
	int32_t x511 = -10;
	volatile int8_t x512 = INT8_MIN;
	int32_t t127 = -2738842;

    t127 = (x509|(x510&(x511==x512)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = -644;
	int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	int16_t x516 = -123;
	volatile int32_t t128 = 2;

    t128 = (x513|(x514&(x515==x516)));

    if (t128 != -644) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x517 = 5U;
	static volatile int32_t x518 = INT32_MIN;
	int8_t x519 = INT8_MIN;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = 0;

    t129 = (x517|(x518&(x519==x520)));

    if (t129 != 5) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 14U;
	uint8_t x523 = UINT8_MAX;
	int32_t x524 = INT32_MAX;
	int32_t t130 = -176129747;

    t130 = (x521|(x522&(x523==x524)));

    if (t130 != 14) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	uint32_t x526 = 33U;
	int64_t x527 = INT64_MIN;
	volatile int32_t x528 = -1;

    t131 = (x525|(x526&(x527==x528)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	uint64_t x530 = 13037902LLU;
	int8_t x532 = -1;
	uint64_t t132 = 7312LLU;

    t132 = (x529|(x530&(x531==x532)));

    if (t132 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MAX;
	uint32_t x534 = UINT32_MAX;
	int8_t x536 = INT8_MAX;

    t133 = (x533|(x534&(x535==x536)));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = 0;
	int16_t x539 = 229;
	int32_t x540 = 5089948;
	volatile int64_t t134 = INT64_MAX;

    t134 = (x537|(x538&(x539==x540)));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = -31;
	volatile uint32_t x543 = UINT32_MAX;
	static int64_t x544 = -107LL;
	int32_t t135 = 0;

    t135 = (x541|(x542&(x543==x544)));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	static uint64_t x546 = 57886009223671LLU;
	uint8_t x547 = 1U;
	uint32_t x548 = 585U;
	static uint64_t t136 = 58868488557562LLU;

    t136 = (x545|(x546&(x547==x548)));

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = 4;
	int16_t x550 = INT16_MIN;
	static int64_t x551 = INT64_MAX;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t137 = 9306;

    t137 = (x549|(x550&(x551==x552)));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	uint8_t x554 = UINT8_MAX;
	static int8_t x555 = INT8_MIN;
	int8_t x556 = INT8_MAX;

    t138 = (x553|(x554&(x555==x556)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x557 = 1;
	volatile int16_t x558 = INT16_MIN;
	static int32_t x559 = -159;
	static uint16_t x560 = UINT16_MAX;
	volatile int32_t t139 = 4713;

    t139 = (x557|(x558&(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	uint8_t x562 = UINT8_MAX;
	volatile int32_t x563 = 82512;
	static int8_t x564 = 10;
	volatile int32_t t140 = 505418420;

    t140 = (x561|(x562&(x563==x564)));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MIN;
	static uint8_t x566 = 35U;
	static int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MIN;
	int32_t t141 = -99301;

    t141 = (x565|(x566&(x567==x568)));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = UINT32_MAX;
	uint32_t x571 = UINT32_MAX;
	int16_t x572 = INT16_MIN;

    t142 = (x569|(x570&(x571==x572)));

    if (t142 != 2147483648U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	uint16_t x575 = 15786U;
	uint64_t x576 = 439663731199LLU;

    t143 = (x573|(x574&(x575==x576)));

    if (t143 != 255LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x578 = 5U;
	static int16_t x579 = INT16_MIN;
	int32_t x580 = INT32_MIN;

    t144 = (x577|(x578&(x579==x580)));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = 30773031097553LL;
	int64_t x584 = INT64_MIN;
	static volatile int64_t t145 = -503499LL;

    t145 = (x581|(x582&(x583==x584)));

    if (t145 != -32768LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -271;
	int32_t x586 = INT32_MIN;
	uint8_t x587 = 1U;
	int32_t t146 = -50;

    t146 = (x585|(x586&(x587==x588)));

    if (t146 != -271) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = 1;
	int64_t x591 = -1079588056364751LL;
	volatile int64_t t147 = INT64_MAX;

    t147 = (x589|(x590&(x591==x592)));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 2513U;
	static int64_t x594 = -2903178LL;
	static uint64_t x595 = 26955706605LLU;
	volatile uint16_t x596 = UINT16_MAX;
	int64_t t148 = -365017918LL;

    t148 = (x593|(x594&(x595==x596)));

    if (t148 != 2513LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x598 = INT8_MAX;
	uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 11978571LLU;
	int32_t t149 = -54;

    t149 = (x597|(x598&(x599==x600)));

    if (t149 != 3) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	volatile int8_t x602 = INT8_MIN;
	int32_t x603 = 93125713;
	int32_t x604 = 1;

    t150 = (x601|(x602&(x603==x604)));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	uint64_t t151 = UINT64_MAX;

    t151 = (x605|(x606&(x607==x608)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x611 = -1;
	static int32_t x612 = INT32_MIN;
	int32_t t152 = -1681;

    t152 = (x609|(x610&(x611==x612)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = 60292;
	int32_t x615 = INT32_MIN;
	int16_t x616 = INT16_MIN;
	volatile int32_t t153 = 9664354;

    t153 = (x613|(x614&(x615==x616)));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = UINT64_MAX;
	uint64_t x619 = UINT64_MAX;
	static uint8_t x620 = 20U;
	uint64_t t154 = 1678323639LLU;

    t154 = (x617|(x618&(x619==x620)));

    if (t154 != 2147483647LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = INT8_MIN;
	static int64_t x623 = INT64_MIN;
	int64_t x624 = -1LL;
	int64_t t155 = 1653908522304938LL;

    t155 = (x621|(x622&(x623==x624)));

    if (t155 != 14013333648862577LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = 305;
	int16_t x626 = 11207;
	static uint16_t x628 = UINT16_MAX;

    t156 = (x625|(x626&(x627==x628)));

    if (t156 != 305) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t t157 = INT32_MAX;

    t157 = (x629|(x630&(x631==x632)));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -3191;
	int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MAX;
	volatile int32_t t158 = 12901;

    t158 = (x633|(x634&(x635==x636)));

    if (t158 != -3191) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -3;
	uint64_t x638 = 186580069460LLU;
	uint64_t x639 = UINT64_MAX;
	int32_t x640 = -3;
	static volatile uint64_t t159 = 356958LLU;

    t159 = (x637|(x638&(x639==x640)));

    if (t159 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = UINT32_MAX;
	int32_t x642 = 91102;
	uint64_t x643 = UINT64_MAX;
	int16_t x644 = -1;
	uint32_t t160 = UINT32_MAX;

    t160 = (x641|(x642&(x643==x644)));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = 43964;
	static int64_t x648 = INT64_MIN;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x645|(x646&(x647==x648)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	static int64_t x650 = -1LL;
	volatile int32_t x651 = INT32_MIN;
	volatile int64_t t162 = 30LL;

    t162 = (x649|(x650&(x651==x652)));

    if (t162 != -2147483648LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint16_t x654 = 1U;
	static int32_t x655 = INT32_MIN;
	int32_t t163 = -814251125;

    t163 = (x653|(x654&(x655==x656)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	int64_t x658 = INT64_MAX;
	uint32_t x659 = 803U;
	uint32_t x660 = UINT32_MAX;

    t164 = (x657|(x658&(x659==x660)));

    if (t164 != -32768LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 7U;
	uint8_t x662 = UINT8_MAX;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MAX;
	volatile int32_t t165 = 0;

    t165 = (x661|(x662&(x663==x664)));

    if (t165 != 7) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	uint8_t x666 = UINT8_MAX;
	int16_t x667 = INT16_MAX;
	int64_t x668 = -17LL;
	static int32_t t166 = 0;

    t166 = (x665|(x666&(x667==x668)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 30110312025947LL;
	int32_t x670 = -17008;
	static uint8_t x671 = 82U;
	int8_t x672 = INT8_MIN;
	volatile int64_t t167 = -3218864414369LL;

    t167 = (x669|(x670&(x671==x672)));

    if (t167 != 30110312025947LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 0U;
	int64_t x674 = INT64_MIN;
	volatile int16_t x675 = INT16_MAX;
	int64_t t168 = 14667805LL;

    t168 = (x673|(x674&(x675==x676)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 98LL;
	int8_t x678 = INT8_MIN;
	static volatile int8_t x680 = -1;
	volatile int64_t t169 = -339863902689379513LL;

    t169 = (x677|(x678&(x679==x680)));

    if (t169 != 98LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x682 = UINT8_MAX;
	int64_t x683 = INT64_MIN;
	static int32_t x684 = 52685837;

    t170 = (x681|(x682&(x683==x684)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	int32_t x686 = -3740;
	int16_t x688 = -1;

    t171 = (x685|(x686&(x687==x688)));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	int8_t x690 = INT8_MAX;
	static uint8_t x691 = 0U;
	int8_t x692 = INT8_MAX;
	volatile int32_t t172 = -17;

    t172 = (x689|(x690&(x691==x692)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = INT16_MAX;
	uint32_t x696 = 9302U;

    t173 = (x693|(x694&(x695==x696)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x697 = 1U;
	volatile uint32_t t174 = 7342270U;

    t174 = (x697|(x698&(x699==x700)));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 14;
	uint8_t x702 = 2U;
	uint64_t x703 = 1053306905911176021LLU;
	static volatile int64_t x704 = INT64_MIN;
	int32_t t175 = -320;

    t175 = (x701|(x702&(x703==x704)));

    if (t175 != 14) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	uint32_t x706 = 8U;
	volatile uint32_t t176 = 218260U;

    t176 = (x705|(x706&(x707==x708)));

    if (t176 != 2147483647U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = INT32_MIN;
	uint32_t x710 = UINT32_MAX;
	int8_t x711 = -2;
	volatile uint32_t t177 = 922U;

    t177 = (x709|(x710&(x711==x712)));

    if (t177 != 2147483648U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 0U;
	int32_t x714 = 0;
	int32_t t178 = -2;

    t178 = (x713|(x714&(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x718 = INT32_MIN;
	uint32_t x719 = 2173U;
	volatile uint32_t x720 = 310U;

    t179 = (x717|(x718&(x719==x720)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MAX;
	int8_t x722 = -1;
	uint32_t x723 = 362239998U;
	volatile int32_t t180 = 14775;

    t180 = (x721|(x722&(x723==x724)));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	volatile int32_t x727 = -1;
	uint8_t x728 = 3U;
	volatile int64_t t181 = 6245267LL;

    t181 = (x725|(x726&(x727==x728)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int64_t x730 = INT64_MIN;
	volatile int16_t x731 = -1;
	volatile int64_t t182 = -1772221474549LL;

    t182 = (x729|(x730&(x731==x732)));

    if (t182 != -2147483648LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x735 = 13414133;
	uint64_t x736 = 15706733925134LLU;
	volatile int64_t t183 = 680822LL;

    t183 = (x733|(x734&(x735==x736)));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 576U;
	volatile int64_t x738 = -43583LL;
	int16_t x739 = 1452;
	int8_t x740 = INT8_MAX;

    t184 = (x737|(x738&(x739==x740)));

    if (t184 != 576LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -9;
	static int8_t x742 = INT8_MAX;
	int64_t x743 = INT64_MIN;
	static int32_t x744 = INT32_MAX;
	static int32_t t185 = 50014;

    t185 = (x741|(x742&(x743==x744)));

    if (t185 != -9) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	int16_t x746 = -12;
	int16_t x747 = -1;
	int16_t x748 = -319;
	volatile int32_t t186 = 64;

    t186 = (x745|(x746&(x747==x748)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = 7;
	int16_t x751 = -1;
	uint8_t x752 = UINT8_MAX;
	int64_t t187 = -6214675507420810LL;

    t187 = (x749|(x750&(x751==x752)));

    if (t187 != 7LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x754 = 74U;
	int64_t x755 = 0LL;
	static volatile int32_t x756 = INT32_MAX;

    t188 = (x753|(x754&(x755==x756)));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = -1LL;

    t189 = (x757|(x758&(x759==x760)));

    if (t189 != -128LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 0U;
	int8_t x762 = INT8_MAX;
	int16_t x764 = INT16_MAX;
	volatile int32_t t190 = 63682;

    t190 = (x761|(x762&(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x767 = -1LL;
	int16_t x768 = 17;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = (x765|(x766&(x767==x768)));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MIN;
	int16_t x771 = -53;
	uint8_t x772 = 35U;
	volatile int64_t t192 = INT64_MIN;

    t192 = (x769|(x770&(x771==x772)));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 0;
	int32_t x774 = -27;
	int8_t x775 = -1;
	int8_t x776 = -1;
	static volatile int32_t t193 = -264138;

    t193 = (x773|(x774&(x775==x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	static uint64_t x778 = 23882591114LLU;
	int32_t x780 = 84611035;
	static uint64_t t194 = 1419LLU;

    t194 = (x777|(x778&(x779==x780)));

    if (t194 != 2147483647LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = INT64_MAX;
	int32_t x783 = INT32_MIN;
	int64_t t195 = -1125857LL;

    t195 = (x781|(x782&(x783==x784)));

    if (t195 != -2348LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	static int32_t x786 = 88141688;
	static int32_t x787 = 2071624;
	volatile uint64_t t196 = UINT64_MAX;

    t196 = (x785|(x786&(x787==x788)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	volatile int8_t x790 = 1;
	static int32_t x791 = INT32_MIN;
	int32_t t197 = 3661;

    t197 = (x789|(x790&(x791==x792)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int32_t x794 = INT32_MIN;
	volatile int16_t x795 = -41;
	uint32_t x796 = 30U;
	int64_t t198 = INT64_MIN;

    t198 = (x793|(x794&(x795==x796)));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	static uint8_t x798 = 16U;
	int32_t x799 = 9119;
	uint32_t x800 = 5U;

    t199 = (x797|(x798&(x799==x800)));

    if (t199 != -1) { NG(); } else { ; }
	
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

