
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

static uint16_t x1 = UINT16_MAX;
static int32_t x8 = INT32_MAX;
int32_t x12 = -1;
uint32_t x15 = 666397U;
int64_t t4 = 1937156LL;
static int8_t x37 = 0;
int16_t x47 = 6;
uint64_t x50 = 380LLU;
int64_t x51 = -1LL;
int8_t x55 = INT8_MAX;
uint64_t x56 = 25883447457LLU;
int64_t x58 = -1LL;
int32_t x60 = -1751667;
int32_t t14 = 3353241;
int8_t x63 = INT8_MAX;
int64_t x64 = INT64_MAX;
int64_t x66 = INT64_MAX;
int32_t t16 = -341;
uint64_t t20 = 1560303628422208955LLU;
volatile int64_t x85 = INT64_MAX;
uint16_t x86 = UINT16_MAX;
uint8_t x87 = UINT8_MAX;
int64_t x100 = INT64_MIN;
volatile int64_t t24 = -2566253519587769185LL;
int64_t x108 = INT64_MIN;
uint32_t x111 = 77152962U;
uint32_t x115 = UINT32_MAX;
static volatile uint64_t t28 = 350689143263936781LLU;
int64_t x121 = -1LL;
volatile int8_t x127 = -3;
int8_t x157 = INT8_MIN;
volatile uint64_t x163 = UINT64_MAX;
int8_t x164 = -4;
int8_t x165 = INT8_MAX;
int64_t x170 = 96097300LL;
int8_t x174 = INT8_MIN;
int64_t x176 = -1475643116687LL;
volatile int64_t t42 = -20364408578871LL;
uint32_t x182 = UINT32_MAX;
int64_t x188 = INT64_MAX;
static volatile uint64_t x195 = 25204666LLU;
uint64_t t47 = 442LLU;
volatile int8_t x200 = 2;
int32_t x203 = INT32_MIN;
static int64_t x208 = -10LL;
int8_t x221 = -1;
uint8_t x223 = 103U;
static int16_t x224 = -1;
static uint8_t x226 = 44U;
int32_t x229 = INT32_MIN;
uint64_t t55 = 15189244097626LLU;
uint8_t x242 = 1U;
int32_t x243 = INT32_MAX;
int32_t x249 = INT32_MIN;
volatile int64_t t60 = -245916LL;
uint32_t x256 = 704433U;
int64_t x264 = -1LL;
static volatile int16_t x269 = INT16_MIN;
int64_t t65 = 620362322874942LL;
int32_t x273 = INT32_MIN;
static int16_t x274 = -12;
int64_t x284 = INT64_MIN;
static int64_t t68 = 226495LL;
static int32_t x285 = -1;
static int32_t x292 = -2914920;
static int16_t x293 = 7;
static volatile uint64_t t72 = 13096467LLU;
int16_t x301 = 52;
int32_t t73 = -691800;
int8_t x305 = INT8_MIN;
volatile int32_t t75 = -11325;
volatile uint64_t t76 = 15162257424LLU;
uint64_t x321 = UINT64_MAX;
static volatile int16_t x322 = INT16_MIN;
static uint64_t t79 = 111099981LLU;
volatile int8_t x333 = -1;
int8_t x335 = INT8_MIN;
volatile int64_t t81 = 142035LL;
uint16_t x351 = 255U;
int8_t x354 = -1;
uint32_t x357 = 8409U;
int64_t x358 = INT64_MIN;
volatile int64_t x359 = INT64_MIN;
int32_t x365 = -1;
int32_t x368 = INT32_MIN;
static uint32_t x370 = 914U;
int16_t x371 = INT16_MAX;
uint64_t x376 = UINT64_MAX;
static int8_t x377 = -1;
volatile int16_t x378 = INT16_MIN;
int16_t x384 = INT16_MIN;
int32_t t92 = -2;
int16_t x387 = 1;
uint32_t x388 = 997157U;
volatile int32_t t94 = 135;
volatile int8_t x393 = INT8_MAX;
int8_t x395 = -2;
int8_t x396 = -1;
volatile int32_t t95 = -861011057;
volatile uint64_t x397 = 527360089642LLU;
uint8_t x399 = 1U;
int64_t t96 = 141535388986261593LL;
uint8_t x403 = 59U;
int8_t x407 = 14;
volatile int32_t t100 = 1205;
volatile uint32_t t101 = 3141U;
uint8_t x425 = UINT8_MAX;
int8_t x430 = INT8_MAX;
int32_t x435 = 3;
int16_t x436 = INT16_MIN;
static int32_t t106 = -278;
uint16_t x443 = 9077U;
volatile int32_t t107 = -12209;
int32_t x452 = INT32_MIN;
int8_t x453 = INT8_MIN;
int64_t x460 = 1001LL;
int32_t x468 = INT32_MAX;
static int64_t x469 = -1LL;
static volatile int64_t t116 = -234671155LL;
volatile int8_t x481 = INT8_MAX;
int64_t x494 = 20LL;
int32_t x495 = INT32_MIN;
static volatile int32_t x497 = 23215571;
volatile uint32_t t121 = 2U;
int16_t x508 = -1;
int64_t x518 = INT64_MIN;
int16_t x521 = -6;
static int32_t x525 = 412;
int32_t x527 = -1;
uint64_t x528 = UINT64_MAX;
int8_t x530 = INT8_MIN;
int32_t x540 = INT32_MAX;
int64_t x542 = INT64_MAX;
uint16_t x547 = 20295U;
static int64_t x551 = -2583515840LL;
int64_t x554 = INT64_MIN;
int32_t x559 = -10270505;
uint64_t x565 = 26477632620LLU;
int16_t x575 = -11;
int64_t x576 = -5116780178091LL;
int32_t x578 = -1;
volatile uint64_t t141 = 163313865LLU;
uint16_t x587 = 21U;
int64_t x589 = INT64_MAX;
int64_t t144 = 204LL;
volatile int32_t t146 = 859739579;
volatile uint64_t t147 = 2978LLU;
uint16_t x605 = 26U;
uint64_t x608 = 6299723717460575552LLU;
static volatile uint32_t x610 = UINT32_MAX;
volatile uint64_t t149 = 6274052184LLU;
int64_t t151 = -438566838601LL;
int64_t t152 = 15LL;
volatile int64_t t153 = -5512610LL;
volatile int16_t x634 = INT16_MIN;
uint64_t x636 = UINT64_MAX;
volatile uint32_t t158 = 43601U;
volatile uint16_t x649 = 23517U;
uint16_t x651 = 8U;
int32_t x654 = 216014;
int8_t x656 = INT8_MAX;
volatile uint64_t x662 = UINT64_MAX;
int16_t x669 = INT16_MIN;
volatile int64_t x670 = INT64_MIN;
int64_t x672 = INT64_MIN;
int64_t x678 = -1LL;
int32_t x688 = INT32_MIN;
static volatile int64_t x690 = INT64_MIN;
int32_t t169 = -125340328;
int64_t x693 = INT64_MAX;
static int16_t x694 = 0;
int32_t x698 = INT32_MIN;
volatile int64_t x701 = INT64_MIN;
static int8_t x702 = -1;
int16_t x713 = -1;
uint32_t x715 = UINT32_MAX;
int8_t x720 = -3;
volatile int32_t t176 = -1073;
uint64_t t177 = 875LLU;
int8_t x727 = 48;
static int64_t t179 = 68822169LL;
uint8_t x739 = 3U;
static uint16_t x749 = UINT16_MAX;
uint64_t x752 = 430106188802LLU;
static int8_t x755 = 1;
int16_t x757 = -1;
static int16_t x761 = INT16_MAX;
uint16_t x765 = 544U;
volatile int32_t t188 = 475337090;
int8_t x774 = -1;
int32_t x775 = -9;
static volatile int16_t x776 = INT16_MIN;
volatile int32_t t190 = 80048;
static int8_t x777 = INT8_MIN;
static int32_t x780 = INT32_MIN;
int32_t t191 = 2;
uint8_t x781 = 88U;
int16_t x784 = INT16_MAX;
int16_t x787 = 5;
uint32_t x790 = UINT32_MAX;
static int32_t x792 = INT32_MIN;
volatile int64_t t194 = 54217LL;
int64_t x795 = INT64_MAX;
static int64_t t197 = 954201423785418876LL;
int8_t x808 = INT8_MIN;
static volatile int8_t x809 = 2;
int32_t x811 = INT32_MIN;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	static int32_t x4 = 5945175;
	volatile int32_t t0 = -23698;

    t0 = ((x1<=x2)-(x3%x4));

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int32_t t1 = -6;

    t1 = ((x5<=x6)-(x7%x8));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 20U;
	static uint64_t x10 = UINT64_MAX;
	static volatile int8_t x11 = 5;
	volatile int32_t t2 = -953;

    t2 = ((x9<=x10)-(x11%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint8_t x14 = UINT8_MAX;
	static uint8_t x16 = UINT8_MAX;
	uint32_t t3 = 1019964438U;

    t3 = ((x13<=x14)-(x15%x16));

    if (t3 != 4294967214U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t x20 = 5;

    t4 = ((x17<=x18)-(x19%x20));

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MAX;
	uint8_t x24 = 36U;
	int32_t t5 = 4478943;

    t5 = ((x21<=x22)-(x23%x24));

    if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 0;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 9;

    t6 = ((x25<=x26)-(x27%x28));

    if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	static uint8_t x30 = UINT8_MAX;
	uint32_t x31 = 104904U;
	int16_t x32 = INT16_MAX;
	uint32_t t7 = 983U;

    t7 = ((x29<=x30)-(x31%x32));

    if (t7 != 4294960694U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = 17;
	static volatile int8_t x35 = INT8_MIN;
	static volatile int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = -167816468341722756LL;

    t8 = ((x33<=x34)-(x35%x36));

    if (t8 != 129LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x38 = 1U;
	int64_t x39 = 31831152052139744LL;
	int8_t x40 = INT8_MIN;
	volatile int64_t t9 = -56021089LL;

    t9 = ((x37<=x38)-(x39%x40));

    if (t9 != -95LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 12U;
	int64_t x44 = INT64_MAX;
	int64_t t10 = 288LL;

    t10 = ((x41<=x42)-(x43%x44));

    if (t10 != -11LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x46 = -28LL;
	int8_t x48 = -1;
	int32_t t11 = 322;

    t11 = ((x45<=x46)-(x47%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	volatile int32_t x52 = INT32_MIN;
	int64_t t12 = -1055588LL;

    t12 = ((x49<=x50)-(x51%x52));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int64_t x54 = 4980369LL;
	volatile uint64_t t13 = 1321529517LLU;

    t13 = ((x53<=x54)-(x55%x56));

    if (t13 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 7523433118LL;
	volatile int16_t x59 = 1;

    t14 = ((x57<=x58)-(x59%x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = -1;
	int16_t x62 = -2;
	int64_t t15 = -24113388312LL;

    t15 = ((x61<=x62)-(x63%x64));

    if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = 0;
	int32_t x67 = -1;
	int32_t x68 = INT32_MIN;

    t16 = ((x65<=x66)-(x67%x68));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 1;
	int16_t x70 = -1020;
	int64_t x71 = INT64_MIN;
	static volatile uint16_t x72 = UINT16_MAX;
	int64_t t17 = -1LL;

    t17 = ((x69<=x70)-(x71%x72));

    if (t17 != 32768LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 2U;
	uint64_t x74 = 111814973LLU;
	static uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	uint32_t t18 = 114U;

    t18 = ((x73<=x74)-(x75%x76));

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 0U;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = -110668429;

    t19 = ((x77<=x78)-(x79%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 1U;
	int32_t x82 = -421;
	static uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 232U;

    t20 = ((x81<=x82)-(x83%x84));

    if (t20 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x88 = INT64_MAX;
	int64_t t21 = 0LL;

    t21 = ((x85<=x86)-(x87%x88));

    if (t21 != -255LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = 273710829380590LL;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 118U;
	volatile int32_t t22 = 266007523;

    t22 = ((x89<=x90)-(x91%x92));

    if (t22 != 83) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MIN;
	int32_t x95 = 58;
	static uint8_t x96 = 4U;
	volatile int32_t t23 = 565150878;

    t23 = ((x93<=x94)-(x95%x96));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	uint32_t x98 = UINT32_MAX;
	static volatile uint16_t x99 = 3453U;

    t24 = ((x97<=x98)-(x99%x100));

    if (t24 != -3452LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	static volatile int16_t x104 = INT16_MIN;
	int32_t t25 = 4257;

    t25 = ((x101<=x102)-(x103%x104));

    if (t25 != -32766) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	static uint32_t x106 = 2505U;
	volatile uint64_t x107 = 2LLU;
	uint64_t t26 = 477514LLU;

    t26 = ((x105<=x106)-(x107%x108));

    if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	volatile uint8_t x110 = 0U;
	uint8_t x112 = 126U;
	uint32_t t27 = 31231144U;

    t27 = ((x109<=x110)-(x111%x112));

    if (t27 != 4294967285U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint8_t x114 = UINT8_MAX;
	static uint64_t x116 = 1789855283932LLU;

    t28 = ((x113<=x114)-(x115%x116));

    if (t28 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 5545U;
	int32_t x118 = -106545;
	static uint8_t x119 = 1U;
	int64_t x120 = 36440LL;
	int64_t t29 = -7717345LL;

    t29 = ((x117<=x118)-(x119%x120));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x122 = 2737776994161LL;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -41066;

    t30 = ((x121<=x122)-(x123%x124));

    if (t30 != 129) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = 1580LL;
	int64_t x126 = INT64_MIN;
	static uint8_t x128 = 2U;
	static int32_t t31 = 2916627;

    t31 = ((x125<=x126)-(x127%x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	static int8_t x130 = INT8_MIN;
	volatile int64_t x131 = 110314401LL;
	volatile int32_t x132 = INT32_MIN;
	int64_t t32 = -13908LL;

    t32 = ((x129<=x130)-(x131%x132));

    if (t32 != -110314401LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = -1;
	volatile int16_t x134 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile int16_t x136 = INT16_MAX;
	int32_t t33 = 53;

    t33 = ((x133<=x134)-(x135%x136));

    if (t33 != -255) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 52;
	volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = 9391LLU;
	int32_t x140 = INT32_MIN;
	uint64_t t34 = 9036LLU;

    t34 = ((x137<=x138)-(x139%x140));

    if (t34 != 18446744073709542225LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 72U;
	int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	volatile int32_t x148 = INT32_MIN;
	int32_t t35 = 415040898;

    t35 = ((x145<=x146)-(x147%x148));

    if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = 24750LL;
	volatile int32_t x150 = 9700390;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = 103;
	volatile int32_t t36 = -26450;

    t36 = ((x149<=x150)-(x151%x152));

    if (t36 != -48) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -16056224526LL;
	int8_t x154 = -1;
	static uint8_t x155 = 12U;
	uint16_t x156 = 18640U;
	volatile int32_t t37 = -272;

    t37 = ((x153<=x154)-(x155%x156));

    if (t37 != -11) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x158 = -88544007;
	volatile uint32_t x159 = 136087U;
	static int32_t x160 = -1;
	volatile uint32_t t38 = 103081163U;

    t38 = ((x157<=x158)-(x159%x160));

    if (t38 != 4294831209U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x161 = -1006880600;
	int32_t x162 = -19;
	uint64_t t39 = 1345885936529985331LLU;

    t39 = ((x161<=x162)-(x163%x164));

    if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x166 = UINT16_MAX;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 1515U;
	volatile int32_t t40 = -64;

    t40 = ((x165<=x166)-(x167%x168));

    if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = UINT16_MAX;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -6;
	int64_t t41 = 47237950746LL;

    t41 = ((x169<=x170)-(x171%x172));

    if (t41 != 3LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x173 = INT32_MIN;
	volatile int16_t x175 = INT16_MAX;

    t42 = ((x173<=x174)-(x175%x176));

    if (t42 != -32766LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x177 = INT32_MIN;
	volatile int16_t x178 = 3931;
	int64_t x179 = -1LL;
	int64_t x180 = -1LL;
	int64_t t43 = 16629LL;

    t43 = ((x177<=x178)-(x179%x180));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -4;
	int32_t x183 = 13;
	int16_t x184 = 13446;
	int32_t t44 = 389;

    t44 = ((x181<=x182)-(x183%x184));

    if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -2;
	volatile uint8_t x186 = 12U;
	int64_t x187 = 1113787LL;
	int64_t t45 = -48LL;

    t45 = ((x185<=x186)-(x187%x188));

    if (t45 != -1113786LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = -1LL;
	int8_t x190 = INT8_MAX;
	static int64_t x191 = INT64_MAX;
	volatile uint64_t x192 = 93LLU;
	uint64_t t46 = 15106578676LLU;

    t46 = ((x189<=x190)-(x191%x192));

    if (t46 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x193 = UINT32_MAX;
	int64_t x194 = 206051922351801745LL;
	volatile int32_t x196 = INT32_MIN;

    t47 = ((x193<=x194)-(x195%x196));

    if (t47 != 18446744073684346951LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = UINT16_MAX;
	int32_t x198 = 4095;
	uint8_t x199 = UINT8_MAX;
	int32_t t48 = 728;

    t48 = ((x197<=x198)-(x199%x200));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = INT32_MIN;
	uint32_t x202 = 22U;
	uint8_t x204 = 1U;
	volatile int32_t t49 = 631190;

    t49 = ((x201<=x202)-(x203%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 37065642LLU;
	volatile int16_t x206 = 4299;
	int64_t x207 = 364431304LL;
	volatile int64_t t50 = 37969218714097913LL;

    t50 = ((x205<=x206)-(x207%x208));

    if (t50 != -4LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x213 = 1U;
	static int32_t x214 = INT32_MIN;
	static uint64_t x215 = 196680LLU;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t51 = 130685961777LLU;

    t51 = ((x213<=x214)-(x215%x216));

    if (t51 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -153013607;
	static int32_t x218 = INT32_MIN;
	int8_t x219 = 42;
	static uint16_t x220 = 29132U;
	static int32_t t52 = -3188137;

    t52 = ((x217<=x218)-(x219%x220));

    if (t52 != -42) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x222 = INT32_MAX;
	int32_t t53 = -7;

    t53 = ((x221<=x222)-(x223%x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x225 = 193238980509155311LL;
	int64_t x227 = INT64_MIN;
	static int8_t x228 = INT8_MAX;
	volatile int64_t t54 = 19LL;

    t54 = ((x225<=x226)-(x227%x228));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = 30606U;
	static uint64_t x232 = 13903492029560LLU;

    t55 = ((x229<=x230)-(x231%x232));

    if (t55 != 18446744073709521011LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 5244U;
	static volatile uint16_t x235 = 26320U;
	int64_t x236 = INT64_MIN;
	int64_t t56 = 21837999943883005LL;

    t56 = ((x233<=x234)-(x235%x236));

    if (t56 != -26320LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x238 = 71;
	uint64_t x239 = 11146906LLU;
	uint8_t x240 = 14U;
	uint64_t t57 = 11769089LLU;

    t57 = ((x237<=x238)-(x239%x240));

    if (t57 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = -1;
	static uint16_t x244 = 19655U;
	int32_t t58 = -523481211;

    t58 = ((x241<=x242)-(x243%x244));

    if (t58 != -17656) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = INT32_MIN;
	int64_t x246 = -1129423958097LL;
	uint16_t x247 = 3U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t59 = 21497924;

    t59 = ((x245<=x246)-(x247%x248));

    if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	static int64_t x252 = INT64_MIN;

    t60 = ((x249<=x250)-(x251%x252));

    if (t60 != 2147483649LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x253 = 158188;
	static int8_t x254 = -13;
	int16_t x255 = 3211;
	uint32_t t61 = 0U;

    t61 = ((x253<=x254)-(x255%x256));

    if (t61 != 4294964085U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = -1;
	static uint32_t x258 = 1907413U;
	int8_t x259 = -1;
	uint8_t x260 = 1U;
	static int32_t t62 = -5;

    t62 = ((x257<=x258)-(x259%x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x261 = -41;
	int64_t x262 = INT64_MAX;
	uint16_t x263 = 3U;
	int64_t t63 = -1855953606029867484LL;

    t63 = ((x261<=x262)-(x263%x264));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x265 = 28U;
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	volatile int32_t t64 = -3007731;

    t64 = ((x265<=x266)-(x267%x268));

    if (t64 != 129) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x270 = 15869;
	int16_t x271 = INT16_MIN;
	static int64_t x272 = -1LL;

    t65 = ((x269<=x270)-(x271%x272));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x275 = INT64_MIN;
	static uint16_t x276 = 20399U;
	volatile int64_t t66 = 317LL;

    t66 = ((x273<=x274)-(x275%x276));

    if (t66 != 1414LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x277 = INT64_MIN;
	uint8_t x278 = 3U;
	int32_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t67 = -7647;

    t67 = ((x277<=x278)-(x279%x280));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MAX;
	volatile int16_t x283 = -1;

    t68 = ((x281<=x282)-(x283%x284));

    if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x286 = -1LL;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 7U;
	volatile int32_t t69 = 38013;

    t69 = ((x285<=x286)-(x287%x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x289 = -1LL;
	int8_t x290 = -22;
	int8_t x291 = -1;
	static int32_t t70 = -236502571;

    t70 = ((x289<=x290)-(x291%x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x294 = INT64_MIN;
	volatile uint8_t x295 = 9U;
	int8_t x296 = -1;
	volatile int32_t t71 = -6716227;

    t71 = ((x293<=x294)-(x295%x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = 6U;
	volatile int16_t x298 = 3513;
	static int8_t x299 = -12;
	uint64_t x300 = 14324LLU;

    t72 = ((x297<=x298)-(x299%x300));

    if (t72 != 18446744073709546493LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x302 = 161955252;
	volatile int16_t x303 = -5446;
	int32_t x304 = -3571;

    t73 = ((x301<=x302)-(x303%x304));

    if (t73 != 1876) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x306 = 122584927;
	volatile uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MIN;
	static volatile int64_t t74 = 979191453075LL;

    t74 = ((x305<=x306)-(x307%x308));

    if (t74 != -65534LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = INT8_MAX;
	int8_t x311 = 13;
	int8_t x312 = INT8_MAX;

    t75 = ((x309<=x310)-(x311%x312));

    if (t75 != -12) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x313 = -8703;
	volatile int8_t x314 = -1;
	int32_t x315 = 26;
	volatile uint64_t x316 = 236489103545839LLU;

    t76 = ((x313<=x314)-(x315%x316));

    if (t76 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x317 = UINT16_MAX;
	int8_t x318 = -1;
	static uint64_t x319 = 41651995987922LLU;
	static int8_t x320 = INT8_MIN;
	volatile uint64_t t77 = 88657LLU;

    t77 = ((x317<=x318)-(x319%x320));

    if (t77 != 18446702421713563694LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x323 = 0U;
	static uint32_t x324 = 41392988U;
	uint32_t t78 = 412874185U;

    t78 = ((x321<=x322)-(x323%x324));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 510U;
	uint8_t x326 = UINT8_MAX;
	volatile uint64_t x327 = 8273981922LLU;
	static int32_t x328 = INT32_MIN;

    t79 = ((x325<=x326)-(x327%x328));

    if (t79 != 18446744065435569694LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t80 = -5818;

    t80 = ((x329<=x330)-(x331%x332));

    if (t80 != 129) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x334 = INT64_MAX;
	int64_t x336 = -980927859758138LL;

    t81 = ((x333<=x334)-(x335%x336));

    if (t81 != 129LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = 3U;
	int32_t x339 = -1;
	uint16_t x340 = 1441U;
	volatile int32_t t82 = 613309;

    t82 = ((x337<=x338)-(x339%x340));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x345 = INT32_MIN;
	volatile int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MIN;
	static int32_t t83 = 8352651;

    t83 = ((x345<=x346)-(x347%x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = -1;
	static int32_t x350 = INT32_MIN;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -68;

    t84 = ((x349<=x350)-(x351%x352));

    if (t84 != -255) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x353 = 1847498680320LLU;
	int64_t x355 = -5LL;
	int64_t x356 = 273648372162188LL;
	int64_t t85 = 1LL;

    t85 = ((x353<=x354)-(x355%x356));

    if (t85 != 6LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x360 = -1933;
	static int64_t t86 = 606722846447LL;

    t86 = ((x357<=x358)-(x359%x360));

    if (t86 != 272LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = 6;
	int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MIN;
	volatile int16_t x364 = INT16_MAX;
	int32_t t87 = 15;

    t87 = ((x361<=x362)-(x363%x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x366 = UINT8_MAX;
	volatile uint16_t x367 = 2U;
	int32_t t88 = -73;

    t88 = ((x365<=x366)-(x367%x368));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = -5;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t89 = 1239767;

    t89 = ((x369<=x370)-(x371%x372));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x373 = 431U;
	static int16_t x374 = INT16_MIN;
	volatile int32_t x375 = INT32_MAX;
	uint64_t t90 = 220771758LLU;

    t90 = ((x373<=x374)-(x375%x376));

    if (t90 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x379 = -1LL;
	static volatile int64_t x380 = INT64_MAX;
	volatile int64_t t91 = -715493688204425077LL;

    t91 = ((x377<=x378)-(x379%x380));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = -1;
	volatile int64_t x382 = INT64_MAX;
	int8_t x383 = INT8_MIN;

    t92 = ((x381<=x382)-(x383%x384));

    if (t92 != 129) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MAX;
	static volatile uint32_t t93 = 0U;

    t93 = ((x385<=x386)-(x387%x388));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x389 = 59135430821LLU;
	static int16_t x390 = 6196;
	int16_t x391 = -1;
	int32_t x392 = INT32_MAX;

    t94 = ((x389<=x390)-(x391%x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x394 = 362U;

    t95 = ((x393<=x394)-(x395%x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x398 = 8;
	int64_t x400 = INT64_MIN;

    t96 = ((x397<=x398)-(x399%x400));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x401 = -1;
	volatile int8_t x402 = INT8_MAX;
	volatile int64_t x404 = INT64_MAX;
	volatile int64_t t97 = -14694LL;

    t97 = ((x401<=x402)-(x403%x404));

    if (t97 != -58LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = -3278131769LL;
	int64_t x408 = 127566136894LL;
	volatile int64_t t98 = 2532549292181375689LL;

    t98 = ((x405<=x406)-(x407%x408));

    if (t98 != -14LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x409 = 5229804255LLU;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;
	int32_t t99 = -43;

    t99 = ((x409<=x410)-(x411%x412));

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MAX;
	int16_t x415 = 11165;
	volatile int32_t x416 = INT32_MIN;

    t100 = ((x413<=x414)-(x415%x416));

    if (t100 != -11165) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x417 = -7;
	volatile uint64_t x418 = 2801795306229805328LLU;
	volatile int8_t x419 = INT8_MAX;
	uint32_t x420 = UINT32_MAX;

    t101 = ((x417<=x418)-(x419%x420));

    if (t101 != 4294967169U) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MAX;
	volatile int64_t t102 = -2468384LL;

    t102 = ((x421<=x422)-(x423%x424));

    if (t102 != 2147483649LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x426 = 305LL;
	static int16_t x427 = INT16_MIN;
	static int64_t x428 = INT64_MIN;
	volatile int64_t t103 = -3788831713LL;

    t103 = ((x425<=x426)-(x427%x428));

    if (t103 != 32769LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x429 = 13U;
	volatile int64_t x431 = INT64_MIN;
	static volatile uint8_t x432 = 52U;
	volatile int64_t t104 = -792138962715315LL;

    t104 = ((x429<=x430)-(x431%x432));

    if (t104 != 9LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x433 = -1;
	volatile int16_t x434 = -1;
	volatile int32_t t105 = 24843;

    t105 = ((x433<=x434)-(x435%x436));

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x437 = 962107005U;
	int8_t x438 = INT8_MAX;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = -1;

    t106 = ((x437<=x438)-(x439%x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = -1;
	int32_t x442 = -1;
	int16_t x444 = INT16_MIN;

    t107 = ((x441<=x442)-(x443%x444));

    if (t107 != -9076) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = 1;
	int64_t x446 = INT64_MIN;
	static volatile int32_t x447 = -1;
	int64_t x448 = INT64_MIN;
	volatile int64_t t108 = -1983406LL;

    t108 = ((x445<=x446)-(x447%x448));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x449 = 8939619;
	volatile int64_t x450 = INT64_MIN;
	int8_t x451 = 1;
	int32_t t109 = -23573299;

    t109 = ((x449<=x450)-(x451%x452));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x454 = -1LL;
	static int16_t x455 = -114;
	int64_t x456 = INT64_MAX;
	volatile int64_t t110 = 63551LL;

    t110 = ((x453<=x454)-(x455%x456));

    if (t110 != 115LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = 869;
	int16_t x458 = INT16_MAX;
	int8_t x459 = INT8_MIN;
	static volatile int64_t t111 = 3LL;

    t111 = ((x457<=x458)-(x459%x460));

    if (t111 != 129LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x461 = 1U;
	volatile int32_t x462 = -1;
	static int8_t x463 = -1;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t112 = -176;

    t112 = ((x461<=x462)-(x463%x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = -58;
	static int16_t x466 = INT16_MIN;
	int64_t x467 = INT64_MAX;
	volatile int64_t t113 = -215281079LL;

    t113 = ((x465<=x466)-(x467%x468));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x470 = INT16_MIN;
	int16_t x471 = -1;
	int32_t x472 = -181;
	volatile int32_t t114 = -101465602;

    t114 = ((x469<=x470)-(x471%x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x473 = INT32_MAX;
	uint8_t x474 = 2U;
	volatile uint32_t x475 = UINT32_MAX;
	uint64_t x476 = 34194434941LLU;
	static uint64_t t115 = 11108312805LLU;

    t115 = ((x473<=x474)-(x475%x476));

    if (t115 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x477 = 3LLU;
	static volatile int16_t x478 = -1;
	volatile int8_t x479 = 7;
	int64_t x480 = -1LL;

    t116 = ((x477<=x478)-(x479%x480));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x482 = UINT64_MAX;
	volatile int8_t x483 = -15;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t117 = -13404951;

    t117 = ((x481<=x482)-(x483%x484));

    if (t117 != 16) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x485 = 0U;
	uint16_t x486 = UINT16_MAX;
	uint32_t x487 = 224215U;
	static uint16_t x488 = 26982U;
	uint32_t t118 = 153763U;

    t118 = ((x485<=x486)-(x487%x488));

    if (t118 != 4294958938U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x489 = 13368549245LLU;
	volatile uint16_t x490 = UINT16_MAX;
	int64_t x491 = INT64_MAX;
	static int16_t x492 = -1;
	volatile int64_t t119 = 1LL;

    t119 = ((x489<=x490)-(x491%x492));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x493 = 1539U;
	static int64_t x496 = -7372595021LL;
	int64_t t120 = -1LL;

    t120 = ((x493<=x494)-(x495%x496));

    if (t120 != 2147483648LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x498 = 58560LLU;
	static uint32_t x499 = 320316571U;
	uint32_t x500 = 80U;

    t121 = ((x497<=x498)-(x499%x500));

    if (t121 != 4294967285U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = INT16_MIN;
	static uint32_t x502 = 43870U;
	static int64_t x503 = -2799LL;
	volatile uint16_t x504 = 14592U;
	volatile int64_t t122 = 12538788381272LL;

    t122 = ((x501<=x502)-(x503%x504));

    if (t122 != 2799LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x505 = -3501308171111012LL;
	int16_t x506 = INT16_MIN;
	int8_t x507 = -1;
	int32_t t123 = 1;

    t123 = ((x505<=x506)-(x507%x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 12918335772LLU;
	static uint64_t x511 = 5745LLU;
	static volatile int16_t x512 = INT16_MAX;
	volatile uint64_t t124 = 16560548222LLU;

    t124 = ((x509<=x510)-(x511%x512));

    if (t124 != 18446744073709545872LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x513 = INT64_MIN;
	int8_t x514 = INT8_MAX;
	uint8_t x515 = UINT8_MAX;
	int32_t x516 = INT32_MIN;
	int32_t t125 = 11999254;

    t125 = ((x513<=x514)-(x515%x516));

    if (t125 != -254) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x517 = UINT64_MAX;
	volatile int16_t x519 = -1;
	static uint32_t x520 = UINT32_MAX;
	uint32_t t126 = 212U;

    t126 = ((x517<=x518)-(x519%x520));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x522 = -3;
	uint64_t x523 = 775LLU;
	volatile uint64_t x524 = 9577038250LLU;
	uint64_t t127 = 2726LLU;

    t127 = ((x521<=x522)-(x523%x524));

    if (t127 != 18446744073709550842LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x526 = 10259286U;
	static volatile uint64_t t128 = 447259453168138LLU;

    t128 = ((x525<=x526)-(x527%x528));

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x529 = 1U;
	uint64_t x531 = 357766409LLU;
	uint64_t x532 = 558838134LLU;
	uint64_t t129 = 32135664LLU;

    t129 = ((x529<=x530)-(x531%x532));

    if (t129 != 18446744073351785207LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x533 = 33U;
	volatile int32_t x534 = -377;
	uint16_t x535 = 2832U;
	volatile int8_t x536 = -1;
	volatile int32_t t130 = 74525524;

    t130 = ((x533<=x534)-(x535%x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = 519399829676126LLU;
	volatile int8_t x538 = -1;
	volatile uint8_t x539 = UINT8_MAX;
	static int32_t t131 = -6717508;

    t131 = ((x537<=x538)-(x539%x540));

    if (t131 != -254) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = INT32_MAX;
	int8_t x543 = INT8_MIN;
	static uint32_t x544 = UINT32_MAX;
	static volatile uint32_t t132 = 24279808U;

    t132 = ((x541<=x542)-(x543%x544));

    if (t132 != 129U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x545 = INT64_MAX;
	static volatile int32_t x546 = 13636755;
	volatile uint8_t x548 = 1U;
	volatile int32_t t133 = -48;

    t133 = ((x545<=x546)-(x547%x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = -1;
	volatile uint32_t x550 = 31303U;
	static int8_t x552 = INT8_MAX;
	int64_t t134 = -1104537LL;

    t134 = ((x549<=x550)-(x551%x552));

    if (t134 != 52LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x553 = 1248056267856049LLU;
	int16_t x555 = INT16_MAX;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t135 = 7960787496653079638LLU;

    t135 = ((x553<=x554)-(x555%x556));

    if (t135 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = -1;
	uint32_t x558 = 3859U;
	int16_t x560 = INT16_MAX;
	int32_t t136 = 7;

    t136 = ((x557<=x558)-(x559%x560));

    if (t136 != 14434) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 16U;
	int16_t x562 = 45;
	static volatile int8_t x563 = INT8_MIN;
	static int16_t x564 = -513;
	static volatile int32_t t137 = 223;

    t137 = ((x561<=x562)-(x563%x564));

    if (t137 != 129) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x566 = 6U;
	uint32_t x567 = 704884835U;
	int16_t x568 = INT16_MAX;
	static uint32_t t138 = 1794922227U;

    t138 = ((x565<=x566)-(x567%x568));

    if (t138 != 4294966165U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x569 = 27U;
	uint16_t x570 = UINT16_MAX;
	static uint8_t x571 = UINT8_MAX;
	static int32_t x572 = INT32_MIN;
	static int32_t t139 = 54;

    t139 = ((x569<=x570)-(x571%x572));

    if (t139 != -254) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x573 = 3150U;
	static int8_t x574 = INT8_MAX;
	int64_t t140 = -37852LL;

    t140 = ((x573<=x574)-(x575%x576));

    if (t140 != 11LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x577 = INT32_MIN;
	volatile int64_t x579 = INT64_MIN;
	uint64_t x580 = 17260602LLU;

    t141 = ((x577<=x578)-(x579%x580));

    if (t141 != 18446744073699079275LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x581 = 309402LLU;
	uint32_t x582 = UINT32_MAX;
	static int16_t x583 = 12360;
	int8_t x584 = INT8_MAX;
	static volatile int32_t t142 = 47245;

    t142 = ((x581<=x582)-(x583%x584));

    if (t142 != -40) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x585 = 370;
	int16_t x586 = -1;
	static uint8_t x588 = 6U;
	int32_t t143 = -7193;

    t143 = ((x585<=x586)-(x587%x588));

    if (t143 != -3) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x590 = INT16_MIN;
	int64_t x591 = INT64_MAX;
	uint32_t x592 = UINT32_MAX;

    t144 = ((x589<=x590)-(x591%x592));

    if (t144 != -2147483647LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x593 = UINT16_MAX;
	uint32_t x594 = 71U;
	uint64_t x595 = UINT64_MAX;
	uint16_t x596 = UINT16_MAX;
	uint64_t t145 = 4188328845412392LLU;

    t145 = ((x593<=x594)-(x595%x596));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x597 = 3U;
	uint64_t x598 = 38113661557007LLU;
	int32_t x599 = INT32_MIN;
	uint8_t x600 = 10U;

    t146 = ((x597<=x598)-(x599%x600));

    if (t146 != 9) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	int16_t x602 = -4;
	volatile uint64_t x603 = 10LLU;
	static uint16_t x604 = UINT16_MAX;

    t147 = ((x601<=x602)-(x603%x604));

    if (t147 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x606 = 2749257666427LLU;
	static volatile int8_t x607 = INT8_MIN;
	uint64_t t148 = 265597346108237LLU;

    t148 = ((x605<=x606)-(x607%x608));

    if (t148 != 12599447434921151233LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x609 = -3;
	uint64_t x611 = UINT64_MAX;
	uint32_t x612 = UINT32_MAX;

    t149 = ((x609<=x610)-(x611%x612));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = INT16_MAX;
	int8_t x614 = -6;
	int32_t x615 = INT32_MIN;
	volatile int64_t x616 = 27348062595LL;
	static int64_t t150 = -251960904LL;

    t150 = ((x613<=x614)-(x615%x616));

    if (t150 != 2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x617 = INT64_MIN;
	static int32_t x618 = INT32_MAX;
	volatile int64_t x619 = -10377733700LL;
	static volatile int16_t x620 = -1651;

    t151 = ((x617<=x618)-(x619%x620));

    if (t151 != 75LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x621 = 31;
	uint64_t x622 = 29016LLU;
	static int64_t x623 = -196930115379937LL;
	static int16_t x624 = INT16_MIN;

    t152 = ((x621<=x622)-(x623%x624));

    if (t152 != 8930LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x626 = INT32_MIN;
	int64_t x627 = INT64_MAX;
	int32_t x628 = INT32_MAX;

    t153 = ((x625<=x626)-(x627%x628));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = -1LL;
	int32_t x631 = -99348;
	volatile uint8_t x632 = 124U;
	volatile int32_t t154 = 69;

    t154 = ((x629<=x630)-(x631%x632));

    if (t154 != 25) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = 1;
	int32_t x635 = INT32_MIN;
	uint64_t t155 = 65848LLU;

    t155 = ((x633<=x634)-(x635%x636));

    if (t155 != 2147483648LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x637 = -1;
	volatile int8_t x638 = INT8_MIN;
	static int32_t x639 = -32413;
	uint64_t x640 = 761850429336782877LLU;
	uint64_t t156 = 41LLU;

    t156 = ((x637<=x638)-(x639%x640));

    if (t156 != 18284410304082821461LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x641 = 113U;
	int16_t x642 = INT16_MAX;
	uint64_t x643 = 4LLU;
	int32_t x644 = -1;
	volatile uint64_t t157 = 0LLU;

    t157 = ((x641<=x642)-(x643%x644));

    if (t157 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x645 = INT32_MIN;
	int8_t x646 = -1;
	static uint32_t x647 = UINT32_MAX;
	int32_t x648 = INT32_MAX;

    t158 = ((x645<=x646)-(x647%x648));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x650 = 13151816;
	int64_t x652 = -1734LL;
	volatile int64_t t159 = -85363350302357485LL;

    t159 = ((x649<=x650)-(x651%x652));

    if (t159 != -7LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x653 = INT64_MAX;
	volatile int16_t x655 = 28;
	volatile int32_t t160 = 60187;

    t160 = ((x653<=x654)-(x655%x656));

    if (t160 != -28) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x657 = 3LLU;
	volatile int64_t x658 = INT64_MAX;
	int32_t x659 = -1;
	static int64_t x660 = INT64_MIN;
	volatile int64_t t161 = 57391214025820491LL;

    t161 = ((x657<=x658)-(x659%x660));

    if (t161 != 2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x661 = INT16_MIN;
	int16_t x663 = 1;
	int32_t x664 = 6;
	int32_t t162 = -132930214;

    t162 = ((x661<=x662)-(x663%x664));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = -1;
	int64_t x667 = INT64_MIN;
	static int64_t x668 = INT64_MIN;
	static int64_t t163 = 1183671486302798400LL;

    t163 = ((x665<=x666)-(x667%x668));

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x671 = 14869U;
	volatile int64_t t164 = 450866487333233LL;

    t164 = ((x669<=x670)-(x671%x672));

    if (t164 != -14869LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x674 = 403998U;
	int64_t x675 = 7533780LL;
	int8_t x676 = INT8_MIN;
	volatile int64_t t165 = -6LL;

    t165 = ((x673<=x674)-(x675%x676));

    if (t165 != -84LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x677 = UINT64_MAX;
	int64_t x679 = 437LL;
	static volatile int32_t x680 = INT32_MIN;
	int64_t t166 = -1175590314451420408LL;

    t166 = ((x677<=x678)-(x679%x680));

    if (t166 != -436LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = -1;
	int16_t x683 = INT16_MAX;
	uint16_t x684 = 915U;
	volatile int32_t t167 = -18819748;

    t167 = ((x681<=x682)-(x683%x684));

    if (t167 != -741) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x685 = INT64_MAX;
	volatile int32_t x686 = -1;
	uint32_t x687 = 3431U;
	volatile uint32_t t168 = 10754931U;

    t168 = ((x685<=x686)-(x687%x688));

    if (t168 != 4294963865U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x689 = INT32_MAX;
	volatile uint8_t x691 = UINT8_MAX;
	static int32_t x692 = -1;

    t169 = ((x689<=x690)-(x691%x692));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x695 = UINT8_MAX;
	uint16_t x696 = 4280U;
	int32_t t170 = 8;

    t170 = ((x693<=x694)-(x695%x696));

    if (t170 != -255) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x697 = -1;
	static uint16_t x699 = UINT16_MAX;
	static uint8_t x700 = 98U;
	int32_t t171 = -1;

    t171 = ((x697<=x698)-(x699%x700));

    if (t171 != -71) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x703 = UINT32_MAX;
	static uint16_t x704 = 1507U;
	volatile uint32_t t172 = 4991U;

    t172 = ((x701<=x702)-(x703%x704));

    if (t172 != 4294966579U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x705 = UINT8_MAX;
	int32_t x706 = INT32_MAX;
	int16_t x707 = INT16_MIN;
	uint8_t x708 = 8U;
	volatile int32_t t173 = 46765122;

    t173 = ((x705<=x706)-(x707%x708));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = -12;
	volatile int16_t x710 = INT16_MIN;
	int32_t x711 = 408777565;
	int32_t x712 = -1;
	volatile int32_t t174 = 64;

    t174 = ((x709<=x710)-(x711%x712));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x714 = -28136881;
	static int64_t x716 = 694736812424LL;
	volatile int64_t t175 = -381LL;

    t175 = ((x713<=x714)-(x715%x716));

    if (t175 != -4294967295LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x717 = 108U;
	int32_t x718 = INT32_MIN;
	static volatile int16_t x719 = INT16_MIN;

    t176 = ((x717<=x718)-(x719%x720));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x721 = INT16_MIN;
	static int32_t x722 = INT32_MIN;
	static volatile uint16_t x723 = 151U;
	uint64_t x724 = 337LLU;

    t177 = ((x721<=x722)-(x723%x724));

    if (t177 != 18446744073709551465LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x725 = INT32_MIN;
	uint32_t x726 = 53021U;
	int8_t x728 = 24;
	volatile int32_t t178 = 0;

    t178 = ((x725<=x726)-(x727%x728));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = -153;
	int32_t x730 = -1;
	static int64_t x731 = -4LL;
	volatile int16_t x732 = INT16_MIN;

    t179 = ((x729<=x730)-(x731%x732));

    if (t179 != 5LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x733 = UINT64_MAX;
	int8_t x734 = INT8_MAX;
	static uint8_t x735 = 78U;
	uint8_t x736 = 21U;
	volatile int32_t t180 = -491;

    t180 = ((x733<=x734)-(x735%x736));

    if (t180 != -15) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x737 = 48U;
	static int32_t x738 = 20026;
	static int16_t x740 = INT16_MIN;
	int32_t t181 = -6;

    t181 = ((x737<=x738)-(x739%x740));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x741 = -18183343LL;
	int64_t x742 = -1LL;
	int64_t x743 = 48832LL;
	static uint8_t x744 = 11U;
	int64_t t182 = -1LL;

    t182 = ((x741<=x742)-(x743%x744));

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x745 = 441281019196LL;
	volatile int16_t x746 = INT16_MAX;
	uint32_t x747 = UINT32_MAX;
	int64_t x748 = INT64_MAX;
	int64_t t183 = -8549337LL;

    t183 = ((x745<=x746)-(x747%x748));

    if (t183 != -4294967295LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x750 = INT32_MIN;
	uint8_t x751 = 55U;
	volatile uint64_t t184 = 20724497272LLU;

    t184 = ((x749<=x750)-(x751%x752));

    if (t184 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x753 = INT64_MIN;
	uint32_t x754 = UINT32_MAX;
	int8_t x756 = -1;
	volatile int32_t t185 = 247393494;

    t185 = ((x753<=x754)-(x755%x756));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x758 = INT16_MIN;
	uint16_t x759 = 9U;
	volatile uint8_t x760 = UINT8_MAX;
	static volatile int32_t t186 = -132893;

    t186 = ((x757<=x758)-(x759%x760));

    if (t186 != -9) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x762 = 1663U;
	static int16_t x763 = INT16_MIN;
	int16_t x764 = -361;
	volatile int32_t t187 = 64;

    t187 = ((x761<=x762)-(x763%x764));

    if (t187 != 278) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x766 = -1;
	uint16_t x767 = UINT16_MAX;
	int32_t x768 = -525777660;

    t188 = ((x765<=x766)-(x767%x768));

    if (t188 != -65535) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x769 = 3270U;
	volatile int32_t x770 = INT32_MAX;
	int8_t x771 = INT8_MIN;
	uint8_t x772 = 14U;
	volatile int32_t t189 = -76;

    t189 = ((x769<=x770)-(x771%x772));

    if (t189 != 3) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x773 = 849;

    t190 = ((x773<=x774)-(x775%x776));

    if (t190 != 9) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x778 = 6U;
	static int8_t x779 = INT8_MIN;

    t191 = ((x777<=x778)-(x779%x780));

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x782 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	volatile int32_t t192 = -104447;

    t192 = ((x781<=x782)-(x783%x784));

    if (t192 != 129) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x785 = INT32_MIN;
	volatile int32_t x786 = INT32_MIN;
	volatile uint64_t x788 = 1LLU;
	static volatile uint64_t t193 = 1121LLU;

    t193 = ((x785<=x786)-(x787%x788));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x789 = 102U;
	static int64_t x791 = INT64_MIN;

    t194 = ((x789<=x790)-(x791%x792));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x793 = -1LL;
	int16_t x794 = -1;
	volatile int16_t x796 = -1816;
	int64_t t195 = -10437420315LL;

    t195 = ((x793<=x794)-(x795%x796));

    if (t195 != -958LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x797 = INT16_MIN;
	int32_t x798 = -1;
	volatile int8_t x799 = -1;
	static uint16_t x800 = 124U;
	static volatile int32_t t196 = 43606;

    t196 = ((x797<=x798)-(x799%x800));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x801 = 1U;
	int64_t x802 = -1LL;
	int64_t x803 = INT64_MIN;
	uint32_t x804 = 46038U;

    t197 = ((x801<=x802)-(x803%x804));

    if (t197 != 2366LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x806 = INT8_MIN;
	int32_t x807 = INT32_MAX;
	static volatile int32_t t198 = -9;

    t198 = ((x805<=x806)-(x807%x808));

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x810 = 14U;
	int8_t x812 = INT8_MIN;
	volatile int32_t t199 = -125337539;

    t199 = ((x809<=x810)-(x811%x812));

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

