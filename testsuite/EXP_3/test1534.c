
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

volatile uint8_t x2 = UINT8_MAX;
int32_t x7 = INT32_MIN;
int8_t x8 = INT8_MIN;
int16_t x14 = INT16_MAX;
int64_t x22 = INT64_MAX;
int8_t x32 = 3;
int32_t x34 = -3;
int64_t x35 = -3680512LL;
volatile int32_t x42 = INT32_MAX;
uint16_t x43 = 119U;
volatile int64_t x50 = 7460LL;
volatile int16_t x51 = INT16_MAX;
int64_t x52 = -7LL;
volatile int16_t x56 = INT16_MAX;
static uint16_t x62 = UINT16_MAX;
int32_t x64 = INT32_MIN;
static int32_t x71 = INT32_MIN;
int32_t x75 = INT32_MIN;
volatile int32_t t18 = 2;
static int32_t x79 = INT32_MIN;
uint8_t x81 = UINT8_MAX;
static int16_t x82 = 3;
volatile int64_t x86 = INT64_MIN;
static uint8_t x94 = 59U;
int32_t x95 = INT32_MIN;
static int8_t x97 = INT8_MAX;
static int8_t x99 = -1;
volatile uint16_t x103 = 7U;
int32_t x110 = INT32_MIN;
int16_t x111 = INT16_MIN;
volatile uint16_t x117 = 3U;
volatile int32_t t29 = 155737152;
volatile uint8_t x121 = UINT8_MAX;
uint8_t x131 = UINT8_MAX;
uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = 703284;
uint32_t x140 = UINT32_MAX;
int64_t x143 = 1052146LL;
volatile int32_t t35 = 1;
static int16_t x147 = INT16_MIN;
static int32_t t36 = -259665678;
int16_t x152 = INT16_MAX;
static volatile int32_t t37 = 0;
int8_t x157 = INT8_MIN;
int64_t x160 = 3482946535571709385LL;
static int8_t x164 = INT8_MIN;
int8_t x166 = INT8_MIN;
static int32_t x167 = INT32_MIN;
int32_t t41 = 968;
static int64_t x171 = 1LL;
volatile int32_t t46 = 5;
int16_t x191 = INT16_MAX;
static uint64_t x196 = 19LLU;
int32_t t48 = 381591257;
int32_t x203 = INT32_MIN;
static volatile int16_t x205 = -9;
volatile uint32_t x207 = 51456100U;
static uint8_t x215 = 87U;
uint64_t x219 = 13425LLU;
volatile uint64_t x228 = 536LLU;
volatile uint8_t x231 = UINT8_MAX;
static volatile int32_t x237 = -1;
int16_t x239 = INT16_MAX;
int32_t t59 = 555296882;
uint8_t x244 = 0U;
int32_t t60 = 2063191;
uint32_t x249 = 24517367U;
int8_t x252 = 7;
int32_t x263 = INT32_MIN;
int8_t x270 = INT8_MAX;
int32_t t68 = -497;
static int32_t t69 = 144;
int32_t x285 = 449;
uint64_t x286 = 1319387LLU;
int32_t x287 = INT32_MAX;
static int8_t x292 = INT8_MIN;
uint32_t x295 = 1962U;
int32_t x296 = INT32_MIN;
volatile int32_t t73 = -20214;
uint32_t x298 = 172630418U;
int8_t x299 = INT8_MIN;
volatile int32_t t76 = 113570;
uint8_t x309 = UINT8_MAX;
volatile int8_t x310 = INT8_MIN;
int32_t x316 = -480107674;
volatile int32_t t79 = 0;
int8_t x332 = -1;
static volatile int32_t t90 = 1;
static volatile int8_t x365 = INT8_MIN;
static int64_t x366 = INT64_MIN;
volatile int64_t x368 = INT64_MIN;
int32_t t92 = 2;
static uint16_t x380 = UINT16_MAX;
int32_t t95 = -110;
static int8_t x385 = -1;
uint8_t x387 = 6U;
static volatile int32_t t96 = 22893521;
volatile uint16_t x391 = 70U;
static int64_t x392 = -1LL;
int16_t x399 = -3;
uint64_t x401 = UINT64_MAX;
volatile int64_t x406 = -1LL;
int16_t x410 = 70;
volatile int32_t t102 = -479185990;
static int64_t x418 = INT64_MIN;
uint8_t x422 = 58U;
int32_t x424 = -5710;
uint32_t x448 = 12223787U;
int16_t x449 = INT16_MIN;
static int8_t x450 = 43;
static int8_t x463 = INT8_MIN;
static int8_t x469 = 15;
int8_t x470 = INT8_MIN;
int64_t x471 = INT64_MAX;
volatile int32_t t117 = -1;
volatile int8_t x480 = -1;
int16_t x483 = INT16_MIN;
static int8_t x484 = -21;
volatile int32_t x490 = 4930185;
volatile uint32_t x495 = 1957210U;
volatile uint32_t x503 = 6824347U;
static uint64_t x510 = UINT64_MAX;
int8_t x515 = 56;
uint8_t x521 = 1U;
volatile int32_t t130 = 848583291;
int32_t t132 = 3698144;
volatile int32_t t136 = -1;
static uint32_t x554 = UINT32_MAX;
static uint64_t x560 = 698LLU;
volatile uint16_t x562 = 1568U;
volatile int32_t x569 = 1765263;
volatile int8_t x571 = -1;
volatile int16_t x573 = -1;
static volatile int64_t x574 = INT64_MIN;
int16_t x577 = -1;
volatile int16_t x581 = -1;
int64_t x583 = INT64_MIN;
static int16_t x584 = INT16_MIN;
static uint8_t x591 = 5U;
int64_t x600 = INT64_MAX;
static volatile int32_t t149 = 912637;
static int16_t x601 = INT16_MIN;
uint64_t x603 = 166386LLU;
uint32_t x608 = 935700U;
int32_t t151 = 1252;
uint32_t x611 = 256730946U;
int16_t x613 = 0;
int8_t x623 = INT8_MIN;
uint8_t x624 = 29U;
uint8_t x631 = 18U;
volatile int32_t t157 = -472587945;
uint16_t x635 = UINT16_MAX;
static int64_t x641 = INT64_MIN;
static int64_t x643 = INT64_MIN;
int32_t t160 = 32076875;
static int32_t x648 = INT32_MAX;
static volatile int32_t t161 = -30935457;
int32_t x650 = -19;
volatile int64_t x651 = INT64_MIN;
volatile int32_t t163 = 60;
volatile int8_t x667 = 21;
int8_t x682 = 0;
int64_t x683 = INT64_MIN;
volatile int32_t t171 = 1086060;
volatile int8_t x691 = INT8_MAX;
uint8_t x692 = UINT8_MAX;
volatile int32_t t172 = 107591;
volatile uint16_t x697 = 7U;
int8_t x702 = -34;
uint32_t x703 = 17567485U;
int64_t x721 = 4296346306607835097LL;
volatile uint16_t x722 = UINT16_MAX;
static int64_t x725 = INT64_MIN;
int32_t x727 = 198007997;
volatile int32_t t181 = 32273328;
int64_t x729 = 31144235603970454LL;
int16_t x730 = -1;
volatile int32_t x743 = -1;
uint8_t x744 = 12U;
static uint16_t x749 = 24937U;
static int32_t x752 = -1;
volatile int16_t x753 = INT16_MAX;
volatile int32_t t188 = -1279;
int32_t x758 = INT32_MIN;
uint8_t x764 = UINT8_MAX;
int32_t x767 = 58255;
int32_t x771 = INT32_MIN;
volatile int8_t x774 = -22;
volatile uint8_t x775 = 1U;
int32_t x779 = INT32_MAX;
int8_t x780 = INT8_MAX;
static int32_t t194 = -56593;
static uint64_t x790 = 3784394396259LLU;
static volatile int8_t x793 = INT8_MIN;
int32_t t198 = -558;


void f0(void) {
    	uint16_t x1 = 175U;
	int32_t x3 = 697732317;
	int32_t x4 = -20832;
	static volatile int32_t t0 = 200702152;

    t0 = ((x1&x2)==(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 308762LLU;
	volatile int32_t t1 = -76024;

    t1 = ((x5&x6)==(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -329474571;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = 11175U;
	int32_t x12 = -116508;
	int32_t t2 = -1764;

    t2 = ((x9&x10)==(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 24541U;
	static int16_t x15 = -1;
	volatile int32_t x16 = -1;
	int32_t t3 = -2731804;

    t3 = ((x13&x14)==(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MIN;
	uint16_t x19 = 320U;
	static int16_t x20 = 6324;
	volatile int32_t t4 = 122968;

    t4 = ((x17&x18)==(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	static int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 21;

    t5 = ((x21&x22)==(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -2LL;
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = -1;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t6 = 49452;

    t6 = ((x25&x26)==(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -22;
	int8_t x30 = -1;
	volatile uint64_t x31 = UINT64_MAX;
	volatile int32_t t7 = -27;

    t7 = ((x29&x30)==(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 1906U;
	volatile uint8_t x36 = 30U;
	static volatile int32_t t8 = -15339;

    t8 = ((x33&x34)==(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -69057956;
	static int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = -10757859LL;
	int32_t t9 = 183;

    t9 = ((x37&x38)==(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int32_t x44 = INT32_MIN;
	static int32_t t10 = 10;

    t10 = ((x41&x42)==(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -3;
	static volatile int8_t x46 = INT8_MAX;
	uint64_t x47 = 17191051209029216LLU;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 42738;

    t11 = ((x45&x46)==(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int32_t t12 = -338;

    t12 = ((x49&x50)==(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int32_t t13 = 11;

    t13 = ((x53&x54)==(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = 0;
	volatile int32_t t14 = 8144;

    t14 = ((x57&x58)==(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 334513U;
	uint32_t x63 = 2878348U;
	static volatile int32_t t15 = 23177;

    t15 = ((x61&x62)==(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MAX;
	int16_t x67 = -15138;
	int32_t x68 = -880;
	int32_t t16 = -2796;

    t16 = ((x65&x66)==(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 2U;
	volatile int8_t x70 = INT8_MIN;
	uint64_t x72 = 1LLU;
	volatile int32_t t17 = -24;

    t17 = ((x69&x70)==(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 229LLU;
	volatile uint64_t x74 = UINT64_MAX;
	int16_t x76 = INT16_MIN;

    t18 = ((x73&x74)==(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	static int16_t x80 = -11;
	volatile int32_t t19 = -10;

    t19 = ((x77&x78)==(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x83 = INT32_MIN;
	uint32_t x84 = 2U;
	volatile int32_t t20 = 60391496;

    t20 = ((x81&x82)==(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	static uint32_t x87 = UINT32_MAX;
	int16_t x88 = -1;
	int32_t t21 = -27166;

    t21 = ((x85&x86)==(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 375U;
	int32_t x90 = 56717;
	int8_t x91 = INT8_MAX;
	static volatile int8_t x92 = 1;
	int32_t t22 = -578007;

    t22 = ((x89&x90)==(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;
	static volatile int32_t t23 = 195754616;

    t23 = ((x93&x94)==(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = -1446;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 1;

    t24 = ((x97&x98)==(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 662LL;
	int32_t x102 = -1;
	volatile int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -113;

    t25 = ((x101&x102)==(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 33U;
	int32_t x106 = INT32_MAX;
	int32_t x107 = 16016;
	uint32_t x108 = 18705U;
	volatile int32_t t26 = 1;

    t26 = ((x105&x106)==(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 4;
	volatile int8_t x112 = INT8_MAX;
	int32_t t27 = 54523093;

    t27 = ((x109&x110)==(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -4956614;
	int32_t x114 = 379760;
	uint8_t x115 = 3U;
	int32_t x116 = -258381;
	int32_t t28 = -1414;

    t28 = ((x113&x114)==(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x118 = UINT64_MAX;
	uint16_t x119 = 5U;
	volatile int32_t x120 = INT32_MAX;

    t29 = ((x117&x118)==(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x122 = -1;
	int16_t x123 = 1;
	uint64_t x124 = 404LLU;
	int32_t t30 = 0;

    t30 = ((x121&x122)==(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -25;
	static int64_t x126 = 6547087LL;
	uint16_t x127 = UINT16_MAX;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = -131;

    t31 = ((x125&x126)==(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = -28;

    t32 = ((x129&x130)==(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -1LL;
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 20U;

    t33 = ((x133&x134)==(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MAX;
	static volatile int64_t x138 = 2680317LL;
	uint8_t x139 = UINT8_MAX;
	volatile int32_t t34 = -7367;

    t34 = ((x137&x138)==(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = 5;
	static uint64_t x142 = 32LLU;
	int64_t x144 = INT64_MIN;

    t35 = ((x141&x142)==(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint8_t x146 = UINT8_MAX;
	static int16_t x148 = INT16_MIN;

    t36 = ((x145&x146)==(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MAX;
	uint32_t x150 = 14U;
	int64_t x151 = INT64_MIN;

    t37 = ((x149&x150)==(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	static volatile int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 31254744106LLU;
	volatile int16_t x156 = INT16_MIN;
	static int32_t t38 = -1833;

    t38 = ((x153&x154)==(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	static volatile int32_t t39 = 0;

    t39 = ((x157&x158)==(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int64_t x162 = INT64_MIN;
	int8_t x163 = 1;
	static int32_t t40 = -59959;

    t40 = ((x161&x162)==(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 471430322083010LLU;
	int64_t x168 = -1LL;

    t41 = ((x165&x166)==(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 3;
	uint64_t x170 = 999892962326878LLU;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -99261894;

    t42 = ((x169&x170)==(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = -1;
	static uint32_t x174 = 1077U;
	volatile int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MAX;
	int32_t t43 = -1202818;

    t43 = ((x173&x174)==(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = UINT32_MAX;
	int64_t x178 = -944831737790933461LL;
	int32_t x179 = INT32_MIN;
	int8_t x180 = -1;
	int32_t t44 = 6852;

    t44 = ((x177&x178)==(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	static volatile int8_t x183 = -1;
	static uint8_t x184 = 122U;
	volatile int32_t t45 = 3127564;

    t45 = ((x181&x182)==(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	static volatile int8_t x186 = INT8_MIN;
	int16_t x187 = 0;
	static int32_t x188 = -123019;

    t46 = ((x185&x186)==(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 19;
	uint32_t x190 = 3U;
	volatile uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -23208509;

    t47 = ((x189&x190)==(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 1U;
	static int32_t x194 = -117232166;
	static int64_t x195 = INT64_MIN;

    t48 = ((x193&x194)==(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = UINT16_MAX;
	static int16_t x198 = -1;
	uint64_t x199 = 104339581343804LLU;
	volatile int64_t x200 = INT64_MIN;
	int32_t t49 = 3;

    t49 = ((x197&x198)==(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x201 = UINT64_MAX;
	static int16_t x202 = INT16_MAX;
	int8_t x204 = -1;
	static int32_t t50 = 57703;

    t50 = ((x201&x202)==(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = 10;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 1;

    t51 = ((x205&x206)==(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 19582857U;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = UINT32_MAX;
	volatile uint64_t x212 = 15676572262791LLU;
	volatile int32_t t52 = 1170;

    t52 = ((x209&x210)==(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 2094533U;
	static volatile uint32_t x214 = 24U;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t53 = 14702;

    t53 = ((x213&x214)==(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -15LL;
	int64_t x218 = INT64_MAX;
	static volatile int8_t x220 = INT8_MAX;
	static int32_t t54 = 6560;

    t54 = ((x217&x218)==(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = -3;
	int16_t x222 = INT16_MIN;
	volatile int8_t x223 = 1;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 4;

    t55 = ((x221&x222)==(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 0;
	int32_t x226 = INT32_MIN;
	int8_t x227 = 1;
	int32_t t56 = -706182733;

    t56 = ((x225&x226)==(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x229 = UINT8_MAX;
	volatile int64_t x230 = -101493374953510762LL;
	int32_t x232 = INT32_MIN;
	static int32_t t57 = 117;

    t57 = ((x229&x230)==(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x233 = 5129078225643718309LLU;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = 64LL;
	int16_t x236 = -1;
	int32_t t58 = 8282038;

    t58 = ((x233&x234)==(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = 592;
	int32_t x240 = -18;

    t59 = ((x237&x238)==(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	volatile uint8_t x242 = 7U;
	uint32_t x243 = 49154U;

    t60 = ((x241&x242)==(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	uint64_t x246 = 87717844187376LLU;
	int16_t x247 = -1;
	int8_t x248 = -12;
	volatile int32_t t61 = -1874644;

    t61 = ((x245&x246)==(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = 6585LL;
	uint8_t x251 = 3U;
	volatile int32_t t62 = -46;

    t62 = ((x249&x250)==(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	int32_t t63 = 14;

    t63 = ((x253&x254)==(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint16_t x258 = 5510U;
	volatile int32_t x259 = INT32_MAX;
	static volatile int8_t x260 = -1;
	volatile int32_t t64 = -763;

    t64 = ((x257&x258)==(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	static int64_t x262 = INT64_MIN;
	static volatile int8_t x264 = INT8_MIN;
	static int32_t t65 = 489193;

    t65 = ((x261&x262)==(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	volatile int32_t x266 = 13614;
	static uint16_t x267 = 3U;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 101103239;

    t66 = ((x265&x266)==(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	static int8_t x271 = 0;
	int64_t x272 = INT64_MAX;
	int32_t t67 = -265;

    t67 = ((x269&x270)==(x271==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	static int8_t x274 = INT8_MIN;
	volatile int16_t x275 = -1;
	volatile uint32_t x276 = 1U;

    t68 = ((x273&x274)==(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int16_t x278 = -1;
	static int64_t x279 = -701059093585155163LL;
	static uint16_t x280 = 44U;

    t69 = ((x277&x278)==(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x281 = 1U;
	volatile int32_t x282 = -12;
	uint16_t x283 = 9U;
	static uint16_t x284 = 11361U;
	int32_t t70 = -160995;

    t70 = ((x281&x282)==(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x288 = INT64_MIN;
	int32_t t71 = -228469239;

    t71 = ((x285&x286)==(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = 0U;
	uint8_t x291 = 3U;
	volatile int32_t t72 = -14;

    t72 = ((x289&x290)==(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 2244U;
	volatile int16_t x294 = -1;

    t73 = ((x293&x294)==(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	volatile int16_t x300 = -9332;
	volatile int32_t t74 = -246662922;

    t74 = ((x297&x298)==(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MAX;
	static int32_t x303 = INT32_MIN;
	int32_t x304 = -1;
	int32_t t75 = -845178856;

    t75 = ((x301&x302)==(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MAX;
	int64_t x308 = 14LL;

    t76 = ((x305&x306)==(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x311 = UINT8_MAX;
	uint64_t x312 = 10980036LLU;
	static volatile int32_t t77 = 11717260;

    t77 = ((x309&x310)==(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	int16_t x314 = -1352;
	static int32_t x315 = INT32_MIN;
	int32_t t78 = -310049;

    t78 = ((x313&x314)==(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static uint16_t x318 = 954U;
	int16_t x319 = INT16_MIN;
	static int64_t x320 = -24302106760208110LL;

    t79 = ((x317&x318)==(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1761LL;
	volatile uint64_t x322 = 558787664661LLU;
	int64_t x323 = -30LL;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = -55476480;

    t80 = ((x321&x322)==(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 15772U;
	volatile uint8_t x326 = 102U;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t81 = -1;

    t81 = ((x325&x326)==(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	int64_t x330 = -441815LL;
	volatile int32_t x331 = -1;
	int32_t t82 = -466351;

    t82 = ((x329&x330)==(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -4237088;

    t83 = ((x333&x334)==(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	uint32_t x338 = 165090U;
	int8_t x339 = 0;
	uint8_t x340 = UINT8_MAX;
	int32_t t84 = 5;

    t84 = ((x337&x338)==(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = 2482;
	uint16_t x344 = 49U;
	int32_t t85 = -426;

    t85 = ((x341&x342)==(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x345 = 26U;
	static uint32_t x346 = 38895272U;
	static uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MIN;
	static int32_t t86 = 7141;

    t86 = ((x345&x346)==(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 2U;
	uint64_t x350 = UINT64_MAX;
	static uint16_t x351 = 93U;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 96;

    t87 = ((x349&x350)==(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = UINT8_MAX;
	int16_t x354 = -12904;
	static uint64_t x355 = 118142763758995LLU;
	int16_t x356 = -1;
	static volatile int32_t t88 = 5940237;

    t88 = ((x353&x354)==(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 1737813LL;
	int32_t x358 = -1;
	static int32_t x359 = -1;
	int8_t x360 = -5;
	volatile int32_t t89 = -12885;

    t89 = ((x357&x358)==(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint64_t x362 = 3270934733256153LLU;
	int8_t x363 = -9;
	uint32_t x364 = 1167U;

    t90 = ((x361&x362)==(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x367 = 98748425898555215LLU;
	volatile int32_t t91 = 3903109;

    t91 = ((x365&x366)==(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = 0;
	int16_t x370 = INT16_MIN;
	int8_t x371 = -1;
	int64_t x372 = -1LL;

    t92 = ((x369&x370)==(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 9493376U;
	volatile int32_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = -1LL;
	static int32_t t93 = -416;

    t93 = ((x373&x374)==(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MAX;
	int32_t x378 = -130087503;
	static uint64_t x379 = 946782627715LLU;
	int32_t t94 = -1934;

    t94 = ((x377&x378)==(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = -671444;

    t95 = ((x381&x382)==(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = -1;
	uint64_t x388 = UINT64_MAX;

    t96 = ((x385&x386)==(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	uint16_t x390 = 1144U;
	static volatile int32_t t97 = 3302398;

    t97 = ((x389&x390)==(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = 394683910213919759LLU;
	int8_t x396 = 41;
	int32_t t98 = -394979171;

    t98 = ((x393&x394)==(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x397 = -1;
	int64_t x398 = -1LL;
	static int16_t x400 = INT16_MIN;
	int32_t t99 = 5701;

    t99 = ((x397&x398)==(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = INT32_MIN;
	volatile uint64_t x403 = 3063548093760871LLU;
	volatile uint8_t x404 = 24U;
	static volatile int32_t t100 = -44941;

    t100 = ((x401&x402)==(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	uint16_t x407 = 6880U;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t101 = 1;

    t101 = ((x405&x406)==(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = 46U;
	volatile uint32_t x411 = UINT32_MAX;
	uint64_t x412 = UINT64_MAX;

    t102 = ((x409&x410)==(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int64_t x414 = -12687703800099800LL;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	int32_t t103 = 1;

    t103 = ((x413&x414)==(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t104 = 1;

    t104 = ((x417&x418)==(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 0;
	uint8_t x423 = 1U;
	static volatile int32_t t105 = 191;

    t105 = ((x421&x422)==(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = UINT32_MAX;
	static int16_t x428 = -1;
	volatile int32_t t106 = 33;

    t106 = ((x425&x426)==(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int8_t x430 = -1;
	static int64_t x431 = -1LL;
	int64_t x432 = 6310LL;
	volatile int32_t t107 = 0;

    t107 = ((x429&x430)==(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 650U;
	static int8_t x434 = -60;
	static volatile int8_t x435 = INT8_MIN;
	uint64_t x436 = 3772650446802096LLU;
	int32_t t108 = -997;

    t108 = ((x433&x434)==(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 7459966745LLU;
	volatile int32_t x438 = INT32_MAX;
	int8_t x439 = 1;
	int32_t x440 = INT32_MAX;
	volatile int32_t t109 = 4846464;

    t109 = ((x437&x438)==(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	uint32_t x442 = 1U;
	uint8_t x443 = UINT8_MAX;
	int64_t x444 = -2044784LL;
	volatile int32_t t110 = 14;

    t110 = ((x441&x442)==(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = -1;
	int32_t x446 = -3955154;
	int32_t x447 = -176096107;
	int32_t t111 = -830623759;

    t111 = ((x445&x446)==(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x451 = INT64_MAX;
	static int64_t x452 = 1453936737094LL;
	volatile int32_t t112 = 992531;

    t112 = ((x449&x450)==(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	int64_t x454 = -18LL;
	static uint32_t x455 = 43U;
	int16_t x456 = INT16_MIN;
	int32_t t113 = 1;

    t113 = ((x453&x454)==(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 2;
	static int32_t x458 = INT32_MIN;
	uint32_t x459 = 717U;
	int64_t x460 = 15LL;
	static int32_t t114 = 15592816;

    t114 = ((x457&x458)==(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = 4;
	volatile int64_t x462 = INT64_MIN;
	volatile int8_t x464 = INT8_MIN;
	volatile int32_t t115 = -9650;

    t115 = ((x461&x462)==(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -7346;
	volatile uint32_t x466 = 17078U;
	static int8_t x467 = INT8_MAX;
	uint16_t x468 = 8U;
	volatile int32_t t116 = -265;

    t116 = ((x465&x466)==(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x472 = INT8_MIN;

    t117 = ((x469&x470)==(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 15;
	int16_t x474 = 482;
	uint32_t x475 = 15616190U;
	int16_t x476 = 654;
	static volatile int32_t t118 = 14;

    t118 = ((x473&x474)==(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int8_t x478 = -1;
	uint64_t x479 = 9087478936LLU;
	int32_t t119 = -123;

    t119 = ((x477&x478)==(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 15U;
	int32_t t120 = 4;

    t120 = ((x481&x482)==(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 680916402530LLU;
	int64_t x486 = INT64_MAX;
	int8_t x487 = -5;
	uint16_t x488 = UINT16_MAX;
	int32_t t121 = 0;

    t121 = ((x485&x486)==(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -82;
	int16_t x491 = INT16_MIN;
	static uint32_t x492 = 5918U;
	int32_t t122 = 150823;

    t122 = ((x489&x490)==(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	static uint16_t x494 = 123U;
	static int32_t x496 = -1036304;
	volatile int32_t t123 = 6441554;

    t123 = ((x493&x494)==(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MAX;
	int16_t x499 = 1;
	uint8_t x500 = UINT8_MAX;
	int32_t t124 = 89018701;

    t124 = ((x497&x498)==(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	volatile int16_t x502 = INT16_MIN;
	int8_t x504 = INT8_MIN;
	int32_t t125 = -4;

    t125 = ((x501&x502)==(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 10U;
	int8_t x506 = INT8_MIN;
	uint32_t x507 = 0U;
	volatile uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = 79;

    t126 = ((x505&x506)==(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 1599957U;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t127 = 41458;

    t127 = ((x509&x510)==(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	uint32_t x514 = UINT32_MAX;
	uint64_t x516 = 15833LLU;
	volatile int32_t t128 = -6643747;

    t128 = ((x513&x514)==(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MIN;
	int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	int32_t t129 = 0;

    t129 = ((x517&x518)==(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = UINT8_MAX;
	uint16_t x523 = 2383U;
	static int8_t x524 = 0;

    t130 = ((x521&x522)==(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	static int8_t x526 = -1;
	int16_t x527 = 0;
	static volatile int16_t x528 = -1;
	volatile int32_t t131 = -3;

    t131 = ((x525&x526)==(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = UINT8_MAX;
	uint8_t x530 = UINT8_MAX;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = -4924;

    t132 = ((x529&x530)==(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	static int16_t x534 = INT16_MAX;
	int32_t x535 = 3575;
	int32_t x536 = INT32_MAX;
	volatile int32_t t133 = -1360588;

    t133 = ((x533&x534)==(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -106;
	int64_t x538 = -1987692221279546LL;
	static volatile int8_t x539 = -1;
	volatile int64_t x540 = INT64_MIN;
	int32_t t134 = -829306973;

    t134 = ((x537&x538)==(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MIN;
	int32_t x542 = -1;
	volatile int16_t x543 = INT16_MIN;
	int64_t x544 = -1LL;
	volatile int32_t t135 = 13982;

    t135 = ((x541&x542)==(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -61613718;
	static int32_t x546 = -1;
	int8_t x547 = INT8_MIN;
	volatile uint64_t x548 = 165686LLU;

    t136 = ((x545&x546)==(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = UINT8_MAX;
	int16_t x550 = -288;
	volatile uint16_t x551 = 14225U;
	int64_t x552 = INT64_MIN;
	volatile int32_t t137 = -10477;

    t137 = ((x549&x550)==(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = 2219;
	int8_t x555 = INT8_MIN;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t138 = 2;

    t138 = ((x553&x554)==(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 31567U;
	uint8_t x558 = UINT8_MAX;
	int16_t x559 = -934;
	static volatile int32_t t139 = -27;

    t139 = ((x557&x558)==(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 1526587;
	volatile int16_t x563 = INT16_MIN;
	int8_t x564 = -3;
	static volatile int32_t t140 = -1547;

    t140 = ((x561&x562)==(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	int16_t x566 = INT16_MAX;
	int8_t x567 = 11;
	int8_t x568 = -3;
	volatile int32_t t141 = -432656;

    t141 = ((x565&x566)==(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = -1;
	int32_t x572 = -1;
	volatile int32_t t142 = 3;

    t142 = ((x569&x570)==(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x575 = INT32_MIN;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 240791609;

    t143 = ((x573&x574)==(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x578 = UINT8_MAX;
	volatile int8_t x579 = INT8_MAX;
	volatile int8_t x580 = INT8_MAX;
	volatile int32_t t144 = -1645905;

    t144 = ((x577&x578)==(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x582 = 0U;
	int32_t t145 = 42;

    t145 = ((x581&x582)==(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x585 = UINT32_MAX;
	int32_t x586 = INT32_MAX;
	static int16_t x587 = INT16_MAX;
	int32_t x588 = INT32_MIN;
	int32_t t146 = -1867337;

    t146 = ((x585&x586)==(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	uint64_t x590 = 64LLU;
	int16_t x592 = INT16_MIN;
	volatile int32_t t147 = -1;

    t147 = ((x589&x590)==(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -40467LL;
	int8_t x594 = INT8_MIN;
	static uint64_t x595 = UINT64_MAX;
	static uint16_t x596 = 3382U;
	int32_t t148 = -11771387;

    t148 = ((x593&x594)==(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 3416327U;
	int16_t x598 = INT16_MAX;
	uint16_t x599 = 0U;

    t149 = ((x597&x598)==(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x602 = INT64_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -605050;

    t150 = ((x601&x602)==(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int8_t x606 = INT8_MIN;
	int16_t x607 = 0;

    t151 = ((x605&x606)==(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 208U;
	uint64_t x610 = UINT64_MAX;
	static volatile uint32_t x612 = UINT32_MAX;
	static int32_t t152 = 1470272;

    t152 = ((x609&x610)==(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = -1;
	volatile int32_t x615 = INT32_MIN;
	volatile int8_t x616 = INT8_MIN;
	volatile int32_t t153 = 775777623;

    t153 = ((x613&x614)==(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 42;
	static int32_t x618 = INT32_MAX;
	int16_t x619 = INT16_MAX;
	int32_t x620 = -1;
	int32_t t154 = 3;

    t154 = ((x617&x618)==(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 7614U;
	int8_t x622 = INT8_MAX;
	int32_t t155 = -347395;

    t155 = ((x621&x622)==(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -12;
	static int8_t x626 = -1;
	static volatile int16_t x627 = INT16_MIN;
	volatile int16_t x628 = INT16_MIN;
	int32_t t156 = -18;

    t156 = ((x625&x626)==(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	static int64_t x630 = INT64_MAX;
	int8_t x632 = INT8_MIN;

    t157 = ((x629&x630)==(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int8_t x634 = 5;
	static int16_t x636 = INT16_MIN;
	int32_t t158 = -12426;

    t158 = ((x633&x634)==(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MAX;
	int16_t x638 = -1;
	uint64_t x639 = UINT64_MAX;
	static int32_t x640 = INT32_MIN;
	int32_t t159 = -62393;

    t159 = ((x637&x638)==(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x642 = INT8_MIN;
	int32_t x644 = INT32_MAX;

    t160 = ((x641&x642)==(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	static int32_t x646 = INT32_MAX;
	uint8_t x647 = 36U;

    t161 = ((x645&x646)==(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 6634668798455LLU;
	int8_t x652 = -1;
	int32_t t162 = -37;

    t162 = ((x649&x650)==(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MIN;
	volatile int8_t x654 = INT8_MIN;
	int16_t x655 = -12;
	int64_t x656 = -1LL;

    t163 = ((x653&x654)==(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 7;
	uint16_t x658 = 2161U;
	uint64_t x659 = 13936717488LLU;
	int64_t x660 = -1LL;
	volatile int32_t t164 = 3795932;

    t164 = ((x657&x658)==(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x661 = 105258U;
	int8_t x662 = INT8_MIN;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	volatile int32_t t165 = -206;

    t165 = ((x661&x662)==(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	int64_t x666 = INT64_MIN;
	int16_t x668 = -6;
	volatile int32_t t166 = 75690;

    t166 = ((x665&x666)==(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -13384410;
	uint32_t x670 = 62987674U;
	volatile int64_t x671 = -4260081751513138466LL;
	int64_t x672 = INT64_MIN;
	int32_t t167 = 222331;

    t167 = ((x669&x670)==(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = 2781814793809087LLU;
	volatile int32_t t168 = 688979484;

    t168 = ((x673&x674)==(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 19U;
	int64_t x678 = 126870LL;
	volatile uint32_t x679 = UINT32_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -105204632;

    t169 = ((x677&x678)==(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	int16_t x684 = -1;
	int32_t t170 = -14182264;

    t170 = ((x681&x682)==(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 15;
	static int8_t x686 = -1;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = 0;

    t171 = ((x685&x686)==(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = 21U;
	int8_t x690 = -1;

    t172 = ((x689&x690)==(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MAX;
	int8_t x694 = 0;
	uint32_t x695 = UINT32_MAX;
	static volatile uint16_t x696 = 6409U;
	volatile int32_t t173 = -157812;

    t173 = ((x693&x694)==(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = -311;
	int16_t x699 = 1;
	int32_t x700 = 214;
	int32_t t174 = -520932;

    t174 = ((x697&x698)==(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = UINT32_MAX;
	volatile int16_t x704 = 7;
	static volatile int32_t t175 = -3;

    t175 = ((x701&x702)==(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x705 = 168U;
	int64_t x706 = INT64_MAX;
	int64_t x707 = INT64_MIN;
	static int16_t x708 = INT16_MIN;
	static volatile int32_t t176 = -180644;

    t176 = ((x705&x706)==(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x709 = UINT64_MAX;
	static int16_t x710 = INT16_MIN;
	int64_t x711 = INT64_MIN;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t177 = -3251;

    t177 = ((x709&x710)==(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 46U;
	int16_t x714 = 7;
	int64_t x715 = INT64_MIN;
	static uint16_t x716 = 28900U;
	volatile int32_t t178 = 14104645;

    t178 = ((x713&x714)==(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 12270283744781836LLU;
	uint32_t x718 = 40U;
	static int8_t x719 = -2;
	uint16_t x720 = 11U;
	int32_t t179 = 7;

    t179 = ((x717&x718)==(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x723 = INT32_MIN;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -1040233972;

    t180 = ((x721&x722)==(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = -2822;
	uint8_t x728 = UINT8_MAX;

    t181 = ((x725&x726)==(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x731 = -203421LL;
	uint16_t x732 = 3330U;
	volatile int32_t t182 = -47339461;

    t182 = ((x729&x730)==(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	static uint32_t x734 = 873839U;
	static volatile int16_t x735 = 338;
	volatile int16_t x736 = -221;
	volatile int32_t t183 = 0;

    t183 = ((x733&x734)==(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = INT16_MAX;
	int8_t x738 = INT8_MAX;
	static int64_t x739 = INT64_MIN;
	volatile int8_t x740 = 10;
	static volatile int32_t t184 = -7645046;

    t184 = ((x737&x738)==(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	volatile int32_t t185 = 812;

    t185 = ((x741&x742)==(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	uint64_t x746 = UINT64_MAX;
	uint64_t x747 = UINT64_MAX;
	int8_t x748 = INT8_MIN;
	int32_t t186 = 372;

    t186 = ((x745&x746)==(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	static int32_t t187 = -119701734;

    t187 = ((x749&x750)==(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	int64_t x755 = 322LL;
	uint32_t x756 = 4366286U;

    t188 = ((x753&x754)==(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	int16_t x759 = -16034;
	int32_t x760 = INT32_MAX;
	int32_t t189 = 90567;

    t189 = ((x757&x758)==(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = 1030LL;
	int16_t x762 = 12;
	uint16_t x763 = 31144U;
	int32_t t190 = -7;

    t190 = ((x761&x762)==(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = 30U;
	int16_t x766 = INT16_MIN;
	int32_t x768 = 493043;
	volatile int32_t t191 = 2;

    t191 = ((x765&x766)==(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = UINT32_MAX;
	int64_t x770 = -1LL;
	uint16_t x772 = 106U;
	int32_t t192 = -22219015;

    t192 = ((x769&x770)==(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 1;
	int16_t x776 = INT16_MAX;
	volatile int32_t t193 = -62;

    t193 = ((x773&x774)==(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 624U;
	int64_t x778 = INT64_MAX;

    t194 = ((x777&x778)==(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = 4876110439LL;
	volatile int32_t x782 = INT32_MAX;
	static volatile int64_t x783 = INT64_MAX;
	uint8_t x784 = 3U;
	volatile int32_t t195 = -358;

    t195 = ((x781&x782)==(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 1U;
	static volatile int32_t x786 = -1;
	int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MIN;
	int32_t t196 = 77131;

    t196 = ((x785&x786)==(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	static int64_t x791 = INT64_MAX;
	volatile int8_t x792 = 0;
	static volatile int32_t t197 = -6862;

    t197 = ((x789&x790)==(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = -1;
	int64_t x795 = INT64_MIN;
	int32_t x796 = -1;

    t198 = ((x793&x794)==(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	int16_t x798 = INT16_MAX;
	uint16_t x799 = 2U;
	static int64_t x800 = INT64_MAX;
	volatile int32_t t199 = -22406;

    t199 = ((x797&x798)==(x799==x800));

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

