
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
int8_t x3 = INT8_MIN;
int8_t x10 = INT8_MIN;
volatile int32_t x12 = -1;
int32_t x15 = -1;
static volatile int32_t t3 = -2737038;
static uint8_t x20 = 90U;
uint8_t x22 = UINT8_MAX;
uint8_t x25 = 127U;
int64_t x27 = INT64_MIN;
int32_t x36 = INT32_MIN;
int32_t t8 = 1;
static int16_t x42 = INT16_MIN;
int8_t x46 = 1;
int8_t x50 = INT8_MIN;
uint16_t x52 = 14451U;
volatile int32_t x53 = 1;
int32_t x58 = -1;
static uint16_t x65 = UINT16_MAX;
static int8_t x66 = INT8_MIN;
static int16_t x67 = INT16_MIN;
static uint16_t x79 = UINT16_MAX;
int8_t x85 = INT8_MIN;
int64_t x87 = 4374865LL;
static volatile int64_t x90 = -1LL;
static uint64_t x95 = UINT64_MAX;
static int16_t x99 = INT16_MIN;
uint16_t x100 = 6U;
static volatile uint64_t x106 = 102985LLU;
int64_t x108 = INT64_MIN;
volatile int8_t x111 = 6;
int32_t t25 = -12;
int32_t x140 = 450973284;
static int32_t x141 = INT32_MIN;
uint16_t x154 = 5U;
int8_t x163 = 0;
static int32_t x168 = INT32_MAX;
int32_t t36 = -425695;
int32_t t37 = 581;
int8_t x175 = INT8_MIN;
static int32_t t38 = 1;
int16_t x178 = INT16_MAX;
uint32_t x185 = UINT32_MAX;
int64_t x187 = INT64_MAX;
uint16_t x189 = 23808U;
int32_t t43 = 5814;
volatile uint32_t x197 = UINT32_MAX;
volatile int32_t t44 = -1148904;
volatile int32_t t46 = 5;
static int16_t x209 = INT16_MIN;
int64_t x216 = -215676816930802LL;
int16_t x218 = 1290;
int8_t x220 = -53;
int32_t t51 = -44135;
uint16_t x232 = UINT16_MAX;
int32_t t52 = 20;
int32_t x235 = 5966500;
volatile int32_t t53 = 111833;
volatile int32_t t54 = -1;
uint64_t x244 = 5630264LLU;
int16_t x249 = 4097;
int64_t x257 = -216229562780182725LL;
volatile int32_t t59 = 233;
int16_t x261 = -1973;
volatile uint64_t x262 = UINT64_MAX;
int32_t t60 = 3;
uint16_t x267 = UINT16_MAX;
int64_t x271 = INT64_MIN;
uint8_t x274 = UINT8_MAX;
static volatile uint16_t x275 = UINT16_MAX;
int32_t x282 = -1;
uint64_t x287 = 7248544442093287LLU;
uint64_t x290 = 17104LLU;
int32_t x302 = 168353322;
int32_t x308 = INT32_MAX;
int32_t x324 = INT32_MAX;
int16_t x329 = 339;
uint16_t x331 = 5U;
int32_t x337 = -1;
uint8_t x340 = 20U;
int32_t x345 = INT32_MIN;
static int64_t x352 = -1LL;
static int32_t t81 = 62894685;
int16_t x358 = INT16_MIN;
uint64_t x359 = UINT64_MAX;
volatile int64_t x362 = 12966LL;
uint16_t x365 = 15U;
int32_t t86 = -3;
volatile uint16_t x376 = 1618U;
volatile int32_t t87 = 10202;
int16_t x379 = INT16_MIN;
uint64_t x385 = UINT64_MAX;
uint16_t x387 = 2825U;
volatile int16_t x388 = 9;
int64_t x389 = INT64_MIN;
int8_t x391 = INT8_MIN;
uint64_t x395 = 806LLU;
int32_t x396 = INT32_MAX;
volatile int32_t t92 = -1;
int64_t x400 = 2037443469756LL;
int32_t x405 = -83648011;
int32_t x407 = INT32_MIN;
volatile int64_t x408 = -1LL;
static uint16_t x409 = 20U;
volatile uint64_t x413 = UINT64_MAX;
int64_t x414 = INT64_MIN;
uint64_t x417 = 3LLU;
static int32_t t97 = 4306;
static int16_t x423 = -15419;
int64_t x428 = -1LL;
uint16_t x432 = UINT16_MAX;
static int32_t x436 = -1;
int8_t x438 = -1;
int64_t x439 = -1LL;
uint64_t x441 = 11979024459119321LLU;
int16_t x445 = INT16_MAX;
int8_t x446 = -1;
static volatile int32_t t104 = -3106;
volatile int32_t t106 = -16014;
volatile int16_t x461 = INT16_MAX;
int32_t t107 = -303106;
uint16_t x465 = UINT16_MAX;
int32_t x467 = INT32_MAX;
volatile int32_t t109 = -449949155;
uint8_t x473 = UINT8_MAX;
int16_t x475 = 14;
int32_t x487 = 8868;
volatile int64_t x493 = INT64_MIN;
uint32_t x497 = 495948103U;
volatile int32_t x500 = INT32_MAX;
static int32_t x504 = INT32_MIN;
volatile int64_t x517 = -1LL;
static volatile int16_t x519 = 51;
static volatile int16_t x531 = INT16_MIN;
static uint16_t x536 = 11U;
volatile int64_t x543 = 1LL;
int64_t x546 = INT64_MIN;
int16_t x547 = -1;
volatile int8_t x549 = -1;
int8_t x551 = 10;
int32_t t126 = -1;
volatile int64_t x553 = INT64_MAX;
static uint16_t x555 = 3U;
int32_t t128 = -607;
uint16_t x561 = 1427U;
int8_t x566 = INT8_MIN;
uint8_t x567 = UINT8_MAX;
volatile int32_t t132 = -1;
static int8_t x580 = -23;
int32_t x581 = -1;
volatile int32_t t134 = 124;
int64_t x589 = 877151145120476094LL;
static volatile int16_t x599 = 16;
int16_t x600 = -1;
int32_t t138 = -118551;
int8_t x601 = -1;
static uint32_t x602 = 594984U;
int8_t x604 = INT8_MIN;
volatile int32_t t140 = 24;
int32_t x609 = -1;
int32_t x610 = INT32_MIN;
int64_t x621 = INT64_MIN;
volatile int16_t x624 = -8;
static volatile int32_t t144 = 1;
static uint64_t x629 = UINT64_MAX;
uint8_t x631 = UINT8_MAX;
int16_t x637 = -2168;
volatile int16_t x641 = -1;
int16_t x643 = INT16_MIN;
static volatile uint32_t x647 = UINT32_MAX;
static int8_t x650 = INT8_MIN;
uint64_t x660 = 1542993LLU;
int8_t x665 = INT8_MIN;
int32_t x673 = INT32_MIN;
static uint32_t x678 = 1675U;
int8_t x683 = INT8_MIN;
volatile int32_t t158 = 105;
volatile uint64_t x691 = UINT64_MAX;
uint64_t x692 = 8139836620968277LLU;
static int8_t x697 = INT8_MIN;
static int16_t x699 = INT16_MAX;
volatile int32_t t161 = 1591;
int32_t x705 = INT32_MAX;
int32_t t163 = 0;
uint64_t x711 = UINT64_MAX;
uint32_t x712 = 5U;
int8_t x716 = -1;
volatile int32_t t167 = -2361765;
static uint8_t x729 = UINT8_MAX;
uint8_t x734 = UINT8_MAX;
int16_t x735 = INT16_MIN;
static uint16_t x738 = 3U;
static volatile int32_t t170 = -55;
int32_t x746 = INT32_MIN;
int32_t x749 = INT32_MIN;
static volatile uint16_t x753 = 5245U;
static uint32_t x759 = UINT32_MAX;
int8_t x770 = INT8_MAX;
int64_t x772 = -179667768249LL;
int32_t t178 = -2;
volatile int16_t x780 = INT16_MIN;
int32_t t180 = -1238;
int32_t x784 = 11038602;
uint64_t x802 = 297581043LLU;
static int16_t x803 = INT16_MIN;
volatile int32_t t186 = -10392;
volatile int32_t x808 = INT32_MIN;
static uint8_t x809 = 46U;
static int64_t x821 = INT64_MAX;
static volatile int8_t x825 = -1;
int8_t x827 = -1;
static uint16_t x832 = 114U;
int32_t t193 = -7;
int16_t x833 = INT16_MIN;
int32_t t195 = -712702014;
int32_t t197 = 7146819;
int32_t x861 = -1;
uint8_t x865 = 14U;
uint16_t x868 = 47U;


void f0(void) {
    	static uint16_t x2 = 2U;
	int64_t x4 = -1LL;
	static volatile int32_t t0 = -393;

    t0 = ((x1/x2)!=(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 117U;
	int8_t x6 = INT8_MIN;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -15;
	int32_t t1 = 724361136;

    t1 = ((x5/x6)!=(x7/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 5;
	uint8_t x11 = 0U;
	volatile int32_t t2 = 7135;

    t2 = ((x9/x10)!=(x11/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	volatile uint64_t x16 = 37705093972LLU;

    t3 = ((x13/x14)!=(x15/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	static volatile int32_t t4 = -1663708;

    t4 = ((x17/x18)!=(x19/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 18662266971LLU;
	uint64_t x23 = 46LLU;
	volatile int8_t x24 = -1;
	int32_t t5 = -21;

    t5 = ((x21/x22)!=(x23/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -1LL;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 3;

    t6 = ((x25/x26)!=(x27/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MIN;
	int32_t t7 = 106180;

    t7 = ((x33/x34)!=(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = INT64_MIN;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MIN;
	static int16_t x40 = -1;

    t8 = ((x37/x38)!=(x39/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -5306;
	volatile uint8_t x43 = 118U;
	int64_t x44 = INT64_MAX;
	int32_t t9 = 85390516;

    t9 = ((x41/x42)!=(x43/x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -5364759362298LL;
	volatile int32_t t10 = -23790;

    t10 = ((x45/x46)!=(x47/x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	volatile int8_t x51 = INT8_MAX;
	int32_t t11 = 223035608;

    t11 = ((x49/x50)!=(x51/x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x54 = 26482U;
	volatile uint64_t x55 = 8884612578LLU;
	int8_t x56 = -1;
	volatile int32_t t12 = 1232089;

    t12 = ((x53/x54)!=(x55/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	int64_t x59 = -1LL;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -2;

    t13 = ((x57/x58)!=(x59/x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -31;
	static uint32_t x62 = 202U;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	volatile int32_t t14 = 590442311;

    t14 = ((x61/x62)!=(x63/x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x68 = INT32_MIN;
	int32_t t15 = 201393;

    t15 = ((x65/x66)!=(x67/x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	volatile int16_t x71 = INT16_MIN;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t16 = -33028597;

    t16 = ((x69/x70)!=(x71/x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 30LLU;
	static int8_t x76 = 15;
	volatile int32_t t17 = 14592784;

    t17 = ((x73/x74)!=(x75/x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = 106;
	static uint64_t x78 = 3LLU;
	static int32_t x80 = -1;
	int32_t t18 = -12868;

    t18 = ((x77/x78)!=(x79/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x86 = 497245U;
	int64_t x88 = -1LL;
	int32_t t19 = -9;

    t19 = ((x85/x86)!=(x87/x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x89 = UINT32_MAX;
	uint64_t x91 = 19549795LLU;
	volatile int32_t x92 = 444;
	volatile int32_t t20 = 16262;

    t20 = ((x89/x90)!=(x91/x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = 560392174U;
	int8_t x94 = -1;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t21 = 6;

    t21 = ((x93/x94)!=(x95/x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MAX;
	static int16_t x98 = 12;
	int32_t t22 = -4;

    t22 = ((x97/x98)!=(x99/x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x105 = -1;
	static uint32_t x107 = UINT32_MAX;
	volatile int32_t t23 = 211374;

    t23 = ((x105/x106)!=(x107/x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x109 = UINT64_MAX;
	volatile int32_t x110 = -2963087;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t24 = 5868518;

    t24 = ((x109/x110)!=(x111/x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x113 = 2U;
	volatile uint8_t x114 = 3U;
	int8_t x115 = -1;
	volatile int16_t x116 = INT16_MIN;

    t25 = ((x113/x114)!=(x115/x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -139;
	int64_t x118 = INT64_MAX;
	int32_t x119 = 304;
	int16_t x120 = INT16_MAX;
	volatile int32_t t26 = -159;

    t26 = ((x117/x118)!=(x119/x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MIN;
	static volatile int64_t x122 = 484966954894295271LL;
	int8_t x123 = -15;
	uint16_t x124 = 482U;
	static int32_t t27 = 23669;

    t27 = ((x121/x122)!=(x123/x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x125 = 14519U;
	volatile uint32_t x126 = 81383420U;
	int64_t x127 = 7212092LL;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t28 = -7;

    t28 = ((x125/x126)!=(x127/x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = INT32_MAX;
	int16_t x130 = -5;
	uint8_t x131 = 1U;
	uint16_t x132 = 3U;
	volatile int32_t t29 = 3;

    t29 = ((x129/x130)!=(x131/x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = 62U;
	volatile uint8_t x138 = UINT8_MAX;
	static volatile uint64_t x139 = 2650736941LLU;
	int32_t t30 = 5704986;

    t30 = ((x137/x138)!=(x139/x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x142 = 30062U;
	static uint16_t x143 = 9U;
	static volatile int16_t x144 = INT16_MAX;
	int32_t t31 = 340312;

    t31 = ((x141/x142)!=(x143/x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = 16;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = 12593;
	int64_t x152 = -3784531LL;
	static volatile int32_t t32 = -810;

    t32 = ((x149/x150)!=(x151/x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x153 = 1U;
	volatile int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	int32_t t33 = -4447892;

    t33 = ((x153/x154)!=(x155/x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = INT16_MIN;
	static uint8_t x158 = 120U;
	volatile uint32_t x159 = 4006U;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t34 = -217498574;

    t34 = ((x157/x158)!=(x159/x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x161 = INT8_MAX;
	volatile int16_t x162 = -1;
	volatile uint64_t x164 = UINT64_MAX;
	int32_t t35 = 3;

    t35 = ((x161/x162)!=(x163/x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x165 = 3;
	uint32_t x166 = 11U;
	static int64_t x167 = INT64_MIN;

    t36 = ((x165/x166)!=(x167/x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x169 = 3449U;
	static volatile int16_t x170 = -1;
	static uint32_t x171 = 3U;
	int32_t x172 = -1;

    t37 = ((x169/x170)!=(x171/x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = -668456LL;
	volatile int32_t x174 = INT32_MIN;
	int64_t x176 = -12834086LL;

    t38 = ((x173/x174)!=(x175/x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x177 = INT16_MAX;
	uint32_t x179 = 79296U;
	volatile int32_t x180 = 429;
	int32_t t39 = -612487317;

    t39 = ((x177/x178)!=(x179/x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -11;
	static int32_t x182 = -2;
	int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MIN;
	volatile int32_t t40 = -91698;

    t40 = ((x181/x182)!=(x183/x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x186 = INT64_MIN;
	static int64_t x188 = -1138629LL;
	int32_t t41 = 1;

    t41 = ((x185/x186)!=(x187/x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x190 = -1;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t42 = -28089;

    t42 = ((x189/x190)!=(x191/x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x193 = UINT16_MAX;
	static int32_t x194 = INT32_MIN;
	uint64_t x195 = 7985LLU;
	int8_t x196 = INT8_MAX;

    t43 = ((x193/x194)!=(x195/x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x198 = 9634U;
	int32_t x199 = 4108;
	static volatile int16_t x200 = INT16_MAX;

    t44 = ((x197/x198)!=(x199/x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = INT64_MAX;
	int64_t x202 = 133833408678927LL;
	uint16_t x203 = 211U;
	int8_t x204 = 4;
	static volatile int32_t t45 = -89;

    t45 = ((x201/x202)!=(x203/x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = INT16_MIN;
	static int64_t x206 = INT64_MIN;
	uint16_t x207 = 29U;
	uint8_t x208 = 1U;

    t46 = ((x205/x206)!=(x207/x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x210 = INT64_MAX;
	volatile int32_t x211 = -1;
	int16_t x212 = INT16_MAX;
	int32_t t47 = -77;

    t47 = ((x209/x210)!=(x211/x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	uint8_t x215 = 1U;
	volatile int32_t t48 = -5315202;

    t48 = ((x213/x214)!=(x215/x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -1;
	int8_t x219 = INT8_MIN;
	volatile int32_t t49 = 970335;

    t49 = ((x217/x218)!=(x219/x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MAX;
	int32_t x222 = 24;
	volatile int8_t x223 = INT8_MAX;
	static uint16_t x224 = 118U;
	volatile int32_t t50 = -146644;

    t50 = ((x221/x222)!=(x223/x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = -3366;
	int8_t x226 = -1;
	volatile uint8_t x227 = 1U;
	int32_t x228 = INT32_MAX;

    t51 = ((x225/x226)!=(x227/x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x229 = UINT16_MAX;
	int32_t x230 = -1;
	static int16_t x231 = -3574;

    t52 = ((x229/x230)!=(x231/x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x233 = -353134LL;
	int32_t x234 = INT32_MAX;
	uint32_t x236 = UINT32_MAX;

    t53 = ((x233/x234)!=(x235/x236));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = 33465052325LL;
	uint64_t x238 = UINT64_MAX;
	volatile uint64_t x239 = 46813838772956827LLU;
	int32_t x240 = -214;

    t54 = ((x237/x238)!=(x239/x240));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = INT32_MIN;
	uint32_t x242 = 55808U;
	int64_t x243 = -1LL;
	int32_t t55 = 4770350;

    t55 = ((x241/x242)!=(x243/x244));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x245 = 56474932U;
	int64_t x246 = 1LL;
	uint32_t x247 = 20113U;
	int16_t x248 = -20;
	int32_t t56 = -336414911;

    t56 = ((x245/x246)!=(x247/x248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x250 = -1;
	static int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t57 = -1317288;

    t57 = ((x249/x250)!=(x251/x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MAX;
	int16_t x255 = 147;
	int32_t x256 = -790772;
	volatile int32_t t58 = 1956;

    t58 = ((x253/x254)!=(x255/x256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x258 = UINT16_MAX;
	int16_t x259 = 5142;
	uint16_t x260 = UINT16_MAX;

    t59 = ((x257/x258)!=(x259/x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x263 = 60U;
	static volatile int64_t x264 = INT64_MAX;

    t60 = ((x261/x262)!=(x263/x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x265 = INT64_MIN;
	static volatile uint64_t x266 = 20742081443380157LLU;
	int16_t x268 = INT16_MIN;
	volatile int32_t t61 = -11819604;

    t61 = ((x265/x266)!=(x267/x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = -1;
	int32_t x270 = INT32_MIN;
	static volatile int8_t x272 = INT8_MIN;
	volatile int32_t t62 = -260312022;

    t62 = ((x269/x270)!=(x271/x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x273 = INT8_MAX;
	volatile int8_t x276 = INT8_MIN;
	int32_t t63 = 32159;

    t63 = ((x273/x274)!=(x275/x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = -1;
	int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 26089U;
	int32_t t64 = -963;

    t64 = ((x277/x278)!=(x279/x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t65 = -12;

    t65 = ((x281/x282)!=(x283/x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = -53;
	int8_t x286 = INT8_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static int32_t t66 = -6213019;

    t66 = ((x285/x286)!=(x287/x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t67 = 0;

    t67 = ((x289/x290)!=(x291/x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x293 = 461992648LL;
	uint64_t x294 = UINT64_MAX;
	volatile int64_t x295 = 39461640536637LL;
	volatile int64_t x296 = INT64_MIN;
	int32_t t68 = -493526015;

    t68 = ((x293/x294)!=(x295/x296));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = INT16_MAX;
	uint32_t x298 = 11773359U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = 2;
	int32_t t69 = -40;

    t69 = ((x297/x298)!=(x299/x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x301 = 2U;
	uint16_t x303 = 34U;
	int32_t x304 = -1;
	volatile int32_t t70 = -1;

    t70 = ((x301/x302)!=(x303/x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 5412U;
	int16_t x307 = -1833;
	static int32_t t71 = 190915;

    t71 = ((x305/x306)!=(x307/x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = 431862953;
	volatile int32_t x314 = INT32_MIN;
	uint32_t x315 = UINT32_MAX;
	static uint8_t x316 = 34U;
	volatile int32_t t72 = -290856;

    t72 = ((x313/x314)!=(x315/x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = -1;
	uint64_t x318 = 1357052888283047903LLU;
	static volatile int32_t x319 = INT32_MIN;
	static volatile int64_t x320 = -1058037740LL;
	static int32_t t73 = 369;

    t73 = ((x317/x318)!=(x319/x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	static int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	volatile int32_t t74 = -132588134;

    t74 = ((x321/x322)!=(x323/x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MAX;
	static uint32_t x328 = 3U;
	int32_t t75 = 0;

    t75 = ((x325/x326)!=(x327/x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x330 = 35279803LLU;
	volatile uint16_t x332 = UINT16_MAX;
	static int32_t t76 = -1010;

    t76 = ((x329/x330)!=(x331/x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = -118;
	static int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	int32_t x336 = 16;
	static int32_t t77 = -1;

    t77 = ((x333/x334)!=(x335/x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x338 = -1;
	volatile int64_t x339 = INT64_MIN;
	volatile int32_t t78 = 109937003;

    t78 = ((x337/x338)!=(x339/x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = -1LL;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	static volatile int64_t x344 = INT64_MIN;
	volatile int32_t t79 = -1476;

    t79 = ((x341/x342)!=(x343/x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	int64_t x348 = 739641663188495156LL;
	static volatile int32_t t80 = -227616625;

    t80 = ((x345/x346)!=(x347/x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = -1;
	int64_t x350 = -119103733948951552LL;
	int8_t x351 = -1;

    t81 = ((x349/x350)!=(x351/x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = INT32_MIN;
	volatile uint8_t x354 = 3U;
	static int8_t x355 = INT8_MAX;
	int64_t x356 = 4461133373810128LL;
	volatile int32_t t82 = -887070484;

    t82 = ((x353/x354)!=(x355/x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x357 = INT16_MIN;
	uint16_t x360 = 259U;
	volatile int32_t t83 = -573824;

    t83 = ((x357/x358)!=(x359/x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x361 = 0U;
	int16_t x363 = INT16_MIN;
	uint16_t x364 = 16U;
	int32_t t84 = -5;

    t84 = ((x361/x362)!=(x363/x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	static int64_t x368 = INT64_MIN;
	int32_t t85 = 27742295;

    t85 = ((x365/x366)!=(x367/x368));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x369 = 0U;
	int16_t x370 = -359;
	int32_t x371 = 3;
	volatile int8_t x372 = INT8_MIN;

    t86 = ((x369/x370)!=(x371/x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x373 = -1LL;
	int8_t x374 = 8;
	int32_t x375 = INT32_MAX;

    t87 = ((x373/x374)!=(x375/x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MIN;
	static uint64_t x380 = 524341165LLU;
	int32_t t88 = -251;

    t88 = ((x377/x378)!=(x379/x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	int16_t x383 = -1;
	int32_t x384 = -1;
	int32_t t89 = 350;

    t89 = ((x381/x382)!=(x383/x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x386 = INT64_MAX;
	volatile int32_t t90 = -30422;

    t90 = ((x385/x386)!=(x387/x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x390 = 2LL;
	uint16_t x392 = 3923U;
	int32_t t91 = -120752;

    t91 = ((x389/x390)!=(x391/x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x393 = -14;
	static uint8_t x394 = UINT8_MAX;

    t92 = ((x393/x394)!=(x395/x396));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = INT32_MIN;
	static int64_t x398 = 2LL;
	volatile uint8_t x399 = UINT8_MAX;
	int32_t t93 = 504;

    t93 = ((x397/x398)!=(x399/x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x406 = 1U;
	int32_t t94 = -148209547;

    t94 = ((x405/x406)!=(x407/x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x410 = INT16_MIN;
	int32_t x411 = 55;
	uint64_t x412 = 52LLU;
	volatile int32_t t95 = 32684411;

    t95 = ((x409/x410)!=(x411/x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x415 = -246503021;
	static volatile int32_t x416 = INT32_MIN;
	volatile int32_t t96 = 3040276;

    t96 = ((x413/x414)!=(x415/x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x418 = -1;
	volatile int8_t x419 = -3;
	int64_t x420 = -7319454319772022LL;

    t97 = ((x417/x418)!=(x419/x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x421 = -1;
	int8_t x422 = 2;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t98 = 457632195;

    t98 = ((x421/x422)!=(x423/x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x425 = -3;
	int16_t x426 = INT16_MAX;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t t99 = -246116482;

    t99 = ((x425/x426)!=(x427/x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x429 = -1LL;
	int32_t x430 = -1;
	int32_t x431 = -221;
	volatile int32_t t100 = -238169524;

    t100 = ((x429/x430)!=(x431/x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = -1;
	int64_t x434 = -1LL;
	int16_t x435 = INT16_MIN;
	volatile int32_t t101 = -10;

    t101 = ((x433/x434)!=(x435/x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x437 = UINT8_MAX;
	static int16_t x440 = -19;
	volatile int32_t t102 = -15142;

    t102 = ((x437/x438)!=(x439/x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	uint8_t x444 = 3U;
	volatile int32_t t103 = 1315628;

    t103 = ((x441/x442)!=(x443/x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x447 = -1;
	volatile int16_t x448 = 1077;

    t104 = ((x445/x446)!=(x447/x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x449 = 8U;
	uint64_t x450 = 34902727604468458LLU;
	uint8_t x451 = 1U;
	int64_t x452 = -3551880932LL;
	int32_t t105 = -20517;

    t105 = ((x449/x450)!=(x451/x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x457 = 0U;
	static int16_t x458 = INT16_MAX;
	int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MAX;

    t106 = ((x457/x458)!=(x459/x460));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x462 = INT8_MIN;
	int64_t x463 = -214239775581508923LL;
	int8_t x464 = INT8_MIN;

    t107 = ((x461/x462)!=(x463/x464));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x466 = INT32_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t108 = 201682719;

    t108 = ((x465/x466)!=(x467/x468));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x469 = 52LLU;
	static volatile int16_t x470 = INT16_MIN;
	volatile int16_t x471 = INT16_MIN;
	uint8_t x472 = UINT8_MAX;

    t109 = ((x469/x470)!=(x471/x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x474 = INT16_MAX;
	uint64_t x476 = 41699289488881LLU;
	static int32_t t110 = 13;

    t110 = ((x473/x474)!=(x475/x476));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x477 = INT8_MIN;
	volatile uint16_t x478 = UINT16_MAX;
	int8_t x479 = 0;
	int64_t x480 = INT64_MAX;
	int32_t t111 = -1;

    t111 = ((x477/x478)!=(x479/x480));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x481 = 144;
	int64_t x482 = -15799618404LL;
	int16_t x483 = 1;
	volatile int8_t x484 = INT8_MAX;
	static volatile int32_t t112 = -1;

    t112 = ((x481/x482)!=(x483/x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x485 = INT64_MIN;
	volatile uint64_t x486 = 162211610LLU;
	volatile int64_t x488 = INT64_MIN;
	int32_t t113 = 680;

    t113 = ((x485/x486)!=(x487/x488));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x494 = 1;
	int32_t x495 = INT32_MIN;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t114 = -89789449;

    t114 = ((x493/x494)!=(x495/x496));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x498 = -3;
	int8_t x499 = -1;
	volatile int32_t t115 = 817003607;

    t115 = ((x497/x498)!=(x499/x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x501 = -1;
	volatile int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	volatile int32_t t116 = 401128;

    t116 = ((x501/x502)!=(x503/x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = -1;
	static int16_t x506 = -1776;
	int32_t x507 = INT32_MIN;
	static int16_t x508 = INT16_MIN;
	static volatile int32_t t117 = 1943124;

    t117 = ((x505/x506)!=(x507/x508));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x518 = INT32_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t118 = 1;

    t118 = ((x517/x518)!=(x519/x520));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x521 = INT32_MIN;
	uint8_t x522 = 2U;
	uint32_t x523 = 1844922826U;
	int8_t x524 = -13;
	volatile int32_t t119 = 7443227;

    t119 = ((x521/x522)!=(x523/x524));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = 644;
	static int8_t x526 = INT8_MIN;
	volatile int32_t x527 = 3258082;
	int64_t x528 = INT64_MIN;
	volatile int32_t t120 = 2033026;

    t120 = ((x525/x526)!=(x527/x528));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x529 = 5866U;
	static volatile uint8_t x530 = 118U;
	static int16_t x532 = INT16_MIN;
	int32_t t121 = -7943;

    t121 = ((x529/x530)!=(x531/x532));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x533 = 2299U;
	uint32_t x534 = 144597U;
	static uint32_t x535 = 11711U;
	int32_t t122 = -99471759;

    t122 = ((x533/x534)!=(x535/x536));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int16_t x538 = INT16_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	uint32_t x540 = UINT32_MAX;
	int32_t t123 = 20394;

    t123 = ((x537/x538)!=(x539/x540));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x541 = INT32_MIN;
	volatile uint8_t x542 = UINT8_MAX;
	uint64_t x544 = 71568113239LLU;
	static volatile int32_t t124 = 1;

    t124 = ((x541/x542)!=(x543/x544));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x545 = -1;
	int64_t x548 = INT64_MIN;
	int32_t t125 = 181636088;

    t125 = ((x545/x546)!=(x547/x548));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x550 = 29279720;
	int16_t x552 = INT16_MIN;

    t126 = ((x549/x550)!=(x551/x552));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x554 = -1;
	volatile int64_t x556 = INT64_MIN;
	static volatile int32_t t127 = -1202;

    t127 = ((x553/x554)!=(x555/x556));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x557 = UINT16_MAX;
	int64_t x558 = INT64_MAX;
	volatile uint64_t x559 = 4489867952206LLU;
	int64_t x560 = INT64_MIN;

    t128 = ((x557/x558)!=(x559/x560));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x562 = INT8_MIN;
	static int64_t x563 = -11827LL;
	int16_t x564 = -336;
	static int32_t t129 = -28271522;

    t129 = ((x561/x562)!=(x563/x564));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x565 = -1;
	volatile int64_t x568 = -1LL;
	volatile int32_t t130 = -7641413;

    t130 = ((x565/x566)!=(x567/x568));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x569 = INT8_MIN;
	static volatile int8_t x570 = INT8_MAX;
	int32_t x571 = 46937;
	static uint32_t x572 = 67U;
	volatile int32_t t131 = -112;

    t131 = ((x569/x570)!=(x571/x572));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	static int8_t x574 = INT8_MIN;
	volatile int32_t x575 = INT32_MIN;
	int16_t x576 = INT16_MIN;

    t132 = ((x573/x574)!=(x575/x576));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x577 = 0;
	static uint64_t x578 = 26526LLU;
	int64_t x579 = INT64_MAX;
	int32_t t133 = -870;

    t133 = ((x577/x578)!=(x579/x580));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x582 = INT32_MIN;
	int64_t x583 = -1070LL;
	uint16_t x584 = 920U;

    t134 = ((x581/x582)!=(x583/x584));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x585 = INT8_MIN;
	static int64_t x586 = 1800LL;
	uint8_t x587 = 14U;
	int32_t x588 = INT32_MIN;
	static int32_t t135 = 3684;

    t135 = ((x585/x586)!=(x587/x588));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x590 = UINT8_MAX;
	uint16_t x591 = 6783U;
	int8_t x592 = INT8_MIN;
	volatile int32_t t136 = -394833;

    t136 = ((x589/x590)!=(x591/x592));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x593 = INT32_MIN;
	static volatile uint8_t x594 = UINT8_MAX;
	uint32_t x595 = 10497433U;
	volatile int8_t x596 = INT8_MAX;
	volatile int32_t t137 = -1;

    t137 = ((x593/x594)!=(x595/x596));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x597 = 2U;
	int32_t x598 = INT32_MIN;

    t138 = ((x597/x598)!=(x599/x600));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x603 = INT16_MIN;
	volatile int32_t t139 = 54175;

    t139 = ((x601/x602)!=(x603/x604));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x605 = 203U;
	uint64_t x606 = 9187329560LLU;
	int64_t x607 = INT64_MAX;
	volatile uint16_t x608 = 101U;

    t140 = ((x605/x606)!=(x607/x608));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x611 = 5236U;
	int64_t x612 = 705375LL;
	int32_t t141 = -3;

    t141 = ((x609/x610)!=(x611/x612));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x614 = INT8_MIN;
	volatile int64_t x615 = 502571LL;
	int64_t x616 = INT64_MIN;
	int32_t t142 = 139;

    t142 = ((x613/x614)!=(x615/x616));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x617 = UINT8_MAX;
	static volatile int8_t x618 = INT8_MIN;
	static int8_t x619 = 3;
	uint8_t x620 = 11U;
	volatile int32_t t143 = 419216666;

    t143 = ((x617/x618)!=(x619/x620));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x622 = INT16_MIN;
	int16_t x623 = 3772;

    t144 = ((x621/x622)!=(x623/x624));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x625 = 788247366U;
	int16_t x626 = -1;
	static int16_t x627 = INT16_MIN;
	static uint8_t x628 = 1U;
	volatile int32_t t145 = 497495;

    t145 = ((x625/x626)!=(x627/x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x630 = 357113121;
	static int8_t x632 = 32;
	volatile int32_t t146 = 3135;

    t146 = ((x629/x630)!=(x631/x632));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = 93716702578550LL;
	volatile int8_t x634 = INT8_MAX;
	uint16_t x635 = 29U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t147 = -3358475;

    t147 = ((x633/x634)!=(x635/x636));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x638 = 1238U;
	int32_t x639 = -1;
	int64_t x640 = -1LL;
	volatile int32_t t148 = 76669;

    t148 = ((x637/x638)!=(x639/x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x642 = INT16_MIN;
	volatile int8_t x644 = -1;
	int32_t t149 = 42003;

    t149 = ((x641/x642)!=(x643/x644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x645 = -1;
	uint8_t x646 = 23U;
	uint8_t x648 = 8U;
	int32_t t150 = 90;

    t150 = ((x645/x646)!=(x647/x648));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x649 = INT32_MIN;
	uint64_t x651 = 21219292LLU;
	int32_t x652 = -7728;
	static int32_t t151 = 35527;

    t151 = ((x649/x650)!=(x651/x652));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x653 = -512861325;
	int64_t x654 = INT64_MAX;
	uint16_t x655 = 110U;
	int16_t x656 = INT16_MAX;
	int32_t t152 = -301791620;

    t152 = ((x653/x654)!=(x655/x656));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x657 = UINT16_MAX;
	int8_t x658 = -1;
	volatile int32_t x659 = INT32_MIN;
	volatile int32_t t153 = -4709;

    t153 = ((x657/x658)!=(x659/x660));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x661 = 452315U;
	static volatile int64_t x662 = -33557166900LL;
	uint8_t x663 = UINT8_MAX;
	volatile int16_t x664 = -1;
	static int32_t t154 = 509487;

    t154 = ((x661/x662)!=(x663/x664));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x666 = UINT32_MAX;
	uint32_t x667 = 981U;
	int8_t x668 = INT8_MIN;
	volatile int32_t t155 = 215;

    t155 = ((x665/x666)!=(x667/x668));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x674 = 11U;
	int8_t x675 = INT8_MIN;
	volatile int8_t x676 = INT8_MAX;
	static int32_t t156 = 442090;

    t156 = ((x673/x674)!=(x675/x676));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x679 = 5143080U;
	volatile int64_t x680 = INT64_MAX;
	static int32_t t157 = -3720;

    t157 = ((x677/x678)!=(x679/x680));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = 113073784;
	static uint8_t x684 = 1U;

    t158 = ((x681/x682)!=(x683/x684));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x685 = INT64_MAX;
	uint64_t x686 = 1127010403587691223LLU;
	int64_t x687 = INT64_MIN;
	uint32_t x688 = UINT32_MAX;
	static volatile int32_t t159 = 1;

    t159 = ((x685/x686)!=(x687/x688));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x689 = UINT32_MAX;
	uint16_t x690 = 1U;
	volatile int32_t t160 = -22;

    t160 = ((x689/x690)!=(x691/x692));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x698 = 1298U;
	uint32_t x700 = 712829U;

    t161 = ((x697/x698)!=(x699/x700));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x701 = UINT16_MAX;
	int8_t x702 = 30;
	int64_t x703 = INT64_MIN;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t162 = 384;

    t162 = ((x701/x702)!=(x703/x704));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x706 = UINT16_MAX;
	uint8_t x707 = 3U;
	uint32_t x708 = 157U;

    t163 = ((x705/x706)!=(x707/x708));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x709 = 11742462LLU;
	int8_t x710 = INT8_MIN;
	volatile int32_t t164 = 12155683;

    t164 = ((x709/x710)!=(x711/x712));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x713 = 20209;
	static int8_t x714 = INT8_MIN;
	static uint64_t x715 = 2717LLU;
	volatile int32_t t165 = -5297;

    t165 = ((x713/x714)!=(x715/x716));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	uint16_t x722 = UINT16_MAX;
	int64_t x723 = 61LL;
	int32_t x724 = INT32_MIN;
	int32_t t166 = -287;

    t166 = ((x721/x722)!=(x723/x724));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x725 = 99;
	int8_t x726 = INT8_MIN;
	volatile uint8_t x727 = 55U;
	int8_t x728 = -1;

    t167 = ((x725/x726)!=(x727/x728));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x730 = 22U;
	int8_t x731 = 2;
	volatile int32_t x732 = INT32_MIN;
	int32_t t168 = 22003900;

    t168 = ((x729/x730)!=(x731/x732));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x733 = UINT16_MAX;
	volatile int16_t x736 = 8;
	static volatile int32_t t169 = 48003;

    t169 = ((x733/x734)!=(x735/x736));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x737 = 1;
	static uint8_t x739 = 32U;
	uint8_t x740 = 4U;

    t170 = ((x737/x738)!=(x739/x740));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x741 = 9U;
	uint32_t x742 = UINT32_MAX;
	int8_t x743 = -1;
	static volatile int32_t x744 = INT32_MIN;
	int32_t t171 = -904;

    t171 = ((x741/x742)!=(x743/x744));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x745 = UINT8_MAX;
	int16_t x747 = INT16_MIN;
	static int64_t x748 = INT64_MIN;
	volatile int32_t t172 = 5699287;

    t172 = ((x745/x746)!=(x747/x748));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x750 = INT64_MAX;
	int64_t x751 = 129004014949617LL;
	uint8_t x752 = 86U;
	volatile int32_t t173 = 3839872;

    t173 = ((x749/x750)!=(x751/x752));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x754 = 16365395661169689LL;
	int16_t x755 = -1;
	int16_t x756 = INT16_MIN;
	volatile int32_t t174 = -361948;

    t174 = ((x753/x754)!=(x755/x756));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x757 = 96U;
	uint32_t x758 = 26747996U;
	static int16_t x760 = INT16_MIN;
	static int32_t t175 = 6;

    t175 = ((x757/x758)!=(x759/x760));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x761 = -1;
	static int8_t x762 = INT8_MAX;
	uint8_t x763 = 1U;
	uint32_t x764 = 593946741U;
	int32_t t176 = 16;

    t176 = ((x761/x762)!=(x763/x764));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x765 = INT32_MIN;
	uint16_t x766 = 2955U;
	int64_t x767 = -1LL;
	int32_t x768 = 109110;
	volatile int32_t t177 = 25655;

    t177 = ((x765/x766)!=(x767/x768));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x769 = 7243;
	volatile uint16_t x771 = 276U;

    t178 = ((x769/x770)!=(x771/x772));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x773 = INT32_MIN;
	int16_t x774 = INT16_MAX;
	int8_t x775 = 0;
	int32_t x776 = INT32_MIN;
	static int32_t t179 = -11;

    t179 = ((x773/x774)!=(x775/x776));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x777 = -1LL;
	static int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MIN;

    t180 = ((x777/x778)!=(x779/x780));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x781 = 16409717993LLU;
	uint64_t x782 = 122LLU;
	volatile int8_t x783 = 12;
	int32_t t181 = 487969;

    t181 = ((x781/x782)!=(x783/x784));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x785 = INT8_MIN;
	static int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	int64_t x788 = INT64_MIN;
	int32_t t182 = 301;

    t182 = ((x785/x786)!=(x787/x788));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x789 = 0U;
	int8_t x790 = INT8_MIN;
	int8_t x791 = 0;
	int32_t x792 = INT32_MAX;
	volatile int32_t t183 = 2552;

    t183 = ((x789/x790)!=(x791/x792));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x793 = INT64_MIN;
	int64_t x794 = -2329412056LL;
	int32_t x795 = 1935;
	uint64_t x796 = 891595LLU;
	int32_t t184 = -3686;

    t184 = ((x793/x794)!=(x795/x796));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x797 = -1;
	int32_t x798 = -255691;
	volatile uint8_t x799 = 45U;
	uint32_t x800 = 1043U;
	int32_t t185 = -1357;

    t185 = ((x797/x798)!=(x799/x800));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x801 = 1;
	int64_t x804 = INT64_MIN;

    t186 = ((x801/x802)!=(x803/x804));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MAX;
	int32_t x807 = -1;
	int32_t t187 = 10357;

    t187 = ((x805/x806)!=(x807/x808));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x810 = INT8_MIN;
	static volatile uint64_t x811 = 4631675234999434LLU;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t188 = -800634;

    t188 = ((x809/x810)!=(x811/x812));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x813 = INT64_MIN;
	static int16_t x814 = 5;
	static int8_t x815 = INT8_MAX;
	uint64_t x816 = 182724LLU;
	volatile int32_t t189 = 23;

    t189 = ((x813/x814)!=(x815/x816));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x817 = -1;
	uint32_t x818 = UINT32_MAX;
	int16_t x819 = INT16_MAX;
	static uint16_t x820 = 58U;
	int32_t t190 = -330;

    t190 = ((x817/x818)!=(x819/x820));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x822 = 15U;
	static int16_t x823 = INT16_MIN;
	uint64_t x824 = UINT64_MAX;
	int32_t t191 = 42219;

    t191 = ((x821/x822)!=(x823/x824));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x826 = UINT16_MAX;
	int32_t x828 = INT32_MAX;
	volatile int32_t t192 = -37;

    t192 = ((x825/x826)!=(x827/x828));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x829 = INT8_MAX;
	volatile uint16_t x830 = UINT16_MAX;
	volatile uint64_t x831 = UINT64_MAX;

    t193 = ((x829/x830)!=(x831/x832));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x834 = UINT64_MAX;
	uint32_t x835 = 1U;
	int8_t x836 = INT8_MAX;
	static int32_t t194 = 9224;

    t194 = ((x833/x834)!=(x835/x836));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x841 = 583723363LL;
	int8_t x842 = -1;
	uint32_t x843 = UINT32_MAX;
	uint16_t x844 = 3U;

    t195 = ((x841/x842)!=(x843/x844));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x845 = INT32_MIN;
	int64_t x846 = -2632781LL;
	int32_t x847 = 3283;
	int64_t x848 = INT64_MIN;
	int32_t t196 = 137;

    t196 = ((x845/x846)!=(x847/x848));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x857 = INT32_MAX;
	uint32_t x858 = 3077375U;
	uint16_t x859 = 89U;
	volatile uint64_t x860 = UINT64_MAX;

    t197 = ((x857/x858)!=(x859/x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x862 = INT32_MIN;
	int16_t x863 = -1;
	static int32_t x864 = -5505870;
	volatile int32_t t198 = -106206;

    t198 = ((x861/x862)!=(x863/x864));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x866 = 1U;
	volatile int64_t x867 = 550323548LL;
	static volatile int32_t t199 = 87524905;

    t199 = ((x865/x866)!=(x867/x868));

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

