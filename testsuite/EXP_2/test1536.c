
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

volatile int16_t x1 = INT16_MIN;
int8_t x7 = INT8_MAX;
int32_t x8 = -7601995;
int8_t x11 = 1;
uint64_t x15 = UINT64_MAX;
int16_t x18 = 384;
uint16_t x20 = UINT16_MAX;
int16_t x23 = INT16_MIN;
static volatile uint8_t x25 = 35U;
volatile int8_t x26 = INT8_MIN;
uint8_t x29 = 7U;
uint64_t x31 = 835303235706465327LLU;
int32_t t10 = -646342202;
volatile uint16_t x47 = 1868U;
uint64_t x48 = 1198657863335LLU;
int16_t x50 = INT16_MIN;
int32_t x52 = -30869;
int16_t x56 = INT16_MAX;
int16_t x73 = -1;
int32_t x75 = INT32_MIN;
volatile int32_t t19 = 0;
volatile int32_t x84 = 10;
int8_t x91 = 23;
int32_t t22 = -188194396;
uint32_t x95 = 11U;
int16_t x100 = INT16_MIN;
static int64_t x101 = INT64_MIN;
uint32_t x102 = UINT32_MAX;
int16_t x110 = 107;
int32_t t29 = 1277051;
static uint32_t x123 = UINT32_MAX;
volatile int64_t x124 = INT64_MIN;
uint8_t x130 = 15U;
uint64_t x131 = 46565856121825LLU;
int16_t x137 = -1;
static volatile int16_t x146 = 2954;
int32_t t36 = 163;
int32_t x153 = -1;
int32_t t39 = 4127;
int32_t t41 = 242571;
static volatile int32_t t42 = 5639;
int16_t x180 = INT16_MAX;
volatile int32_t t45 = 34;
static uint8_t x189 = 0U;
volatile uint32_t x190 = 125263691U;
volatile uint16_t x191 = 1132U;
uint8_t x194 = 32U;
volatile int64_t x197 = 3LL;
int64_t x200 = -1LL;
volatile int32_t x210 = INT32_MIN;
uint16_t x214 = UINT16_MAX;
static int16_t x215 = -9;
volatile int32_t t53 = -1;
uint32_t x218 = 1310U;
uint8_t x221 = UINT8_MAX;
static volatile int8_t x224 = 60;
static volatile int64_t x232 = INT64_MIN;
volatile int16_t x237 = INT16_MIN;
volatile int8_t x244 = 2;
uint8_t x251 = 74U;
volatile int32_t t62 = -798730086;
uint32_t x254 = UINT32_MAX;
static volatile int32_t t65 = -942956;
uint8_t x266 = 120U;
uint32_t x274 = 777313U;
uint32_t x275 = 222348996U;
static volatile int32_t t69 = 43043562;
int16_t x281 = -1;
int8_t x289 = -1;
int32_t x290 = 5824867;
volatile int64_t x294 = -427638351LL;
static int64_t x296 = -1LL;
int8_t x299 = 44;
volatile int32_t t74 = -1;
int8_t x302 = INT8_MIN;
int32_t x305 = INT32_MIN;
int8_t x310 = -28;
volatile int32_t t77 = -333084;
int16_t x314 = -71;
int16_t x315 = 6540;
static volatile uint32_t x320 = UINT32_MAX;
static volatile uint8_t x324 = 0U;
int16_t x328 = INT16_MIN;
int64_t x329 = INT64_MIN;
uint16_t x332 = UINT16_MAX;
static int32_t x335 = INT32_MIN;
int32_t t83 = -1015315;
int32_t x339 = -1;
uint8_t x340 = 0U;
volatile int32_t t84 = 274;
uint64_t x348 = UINT64_MAX;
static int32_t x352 = 870233242;
static volatile int32_t t91 = -12122;
volatile int64_t x370 = INT64_MIN;
static int32_t t92 = 13;
uint64_t x380 = 256248425650730LLU;
static int8_t x390 = -4;
static int32_t x392 = INT32_MAX;
volatile int32_t x395 = -198553;
int16_t x400 = -1;
volatile uint32_t x412 = 40694U;
volatile int32_t t102 = 25;
volatile uint8_t x413 = UINT8_MAX;
static int32_t t103 = 1;
int64_t x420 = INT64_MIN;
static int32_t t105 = 16617392;
int32_t x425 = INT32_MIN;
int32_t x428 = 6046;
int64_t x430 = INT64_MIN;
volatile uint64_t x435 = UINT64_MAX;
int8_t x439 = 11;
static int16_t x444 = INT16_MIN;
uint16_t x445 = 9U;
volatile int16_t x449 = INT16_MIN;
int8_t x451 = 19;
int16_t x455 = INT16_MIN;
int16_t x458 = INT16_MIN;
int32_t t114 = 453;
int8_t x461 = 1;
static uint32_t x464 = 614123288U;
static volatile int32_t t116 = -649;
uint32_t x470 = 20439U;
uint8_t x478 = 38U;
int32_t x490 = INT32_MIN;
volatile int32_t t124 = 8760374;
uint64_t x503 = UINT64_MAX;
int16_t x504 = 19;
volatile int32_t x506 = INT32_MIN;
int32_t x522 = INT32_MAX;
uint8_t x524 = 0U;
volatile int32_t t133 = -2607;
uint32_t x537 = UINT32_MAX;
uint64_t x538 = UINT64_MAX;
static int64_t x541 = INT64_MIN;
static int16_t x553 = INT16_MIN;
int8_t x558 = INT8_MAX;
int32_t x570 = 69201642;
static int32_t x579 = INT32_MIN;
static int32_t x584 = INT32_MIN;
volatile int32_t t145 = -23051;
volatile uint16_t x587 = 3904U;
volatile uint16_t x589 = UINT16_MAX;
int16_t x591 = -1;
int64_t x599 = INT64_MIN;
volatile int64_t x607 = INT64_MIN;
static int32_t x608 = -1;
static int64_t x609 = -4754403LL;
uint32_t x613 = 200705000U;
volatile int32_t t153 = 673493;
volatile int8_t x619 = INT8_MIN;
int32_t t154 = 1;
int64_t x623 = -64679034342LL;
uint8_t x628 = UINT8_MAX;
static volatile int32_t t156 = -14268556;
volatile int32_t t157 = 266728;
volatile int32_t x638 = INT32_MIN;
volatile int64_t x643 = -2751003538908066LL;
volatile int32_t t161 = -6124179;
int32_t t162 = 5;
volatile uint64_t x661 = 2477361213146754902LLU;
int64_t x666 = INT64_MIN;
int64_t x668 = INT64_MIN;
int64_t x676 = 936610LL;
uint32_t x683 = 2000U;
int32_t t170 = 1;
static int16_t x686 = -1;
static int8_t x688 = INT8_MAX;
static int32_t t171 = 54992942;
static volatile uint64_t x692 = UINT64_MAX;
volatile int32_t x702 = 6159490;
int32_t t176 = 1184153;
int8_t x710 = -1;
int32_t x711 = INT32_MAX;
static int32_t x713 = INT32_MAX;
uint16_t x716 = 6695U;
int32_t t178 = -762095;
volatile uint32_t x719 = 77325U;
static int8_t x720 = 8;
int32_t x726 = INT32_MAX;
uint32_t x728 = 130980918U;
volatile int8_t x731 = INT8_MIN;
uint64_t x732 = UINT64_MAX;
volatile int32_t t184 = -4744;
int32_t x747 = 15704051;
int8_t x748 = INT8_MIN;
int32_t x755 = INT32_MAX;
int8_t x756 = -2;
uint32_t x757 = UINT32_MAX;
uint8_t x766 = 12U;
static int8_t x769 = -1;
int8_t x771 = -1;
uint64_t x773 = 23955219491178LLU;
volatile int32_t x777 = 201190;
int32_t t195 = -719571889;
int8_t x785 = 9;
int32_t x789 = INT32_MIN;
uint32_t x790 = 900U;
static volatile int32_t t198 = 17826033;


void f0(void) {
    	uint8_t x2 = 0U;
	int16_t x3 = INT16_MAX;
	static int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -30;

    t0 = ((x1&(x2==x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 51U;
	uint32_t x6 = 20901U;
	volatile int32_t t1 = -222;

    t1 = ((x5&(x6==x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 2002U;
	static int16_t x10 = -55;
	static int16_t x12 = 6;
	volatile int32_t t2 = 7226;

    t2 = ((x9&(x10==x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	static int8_t x14 = -4;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 19;

    t3 = ((x13&(x14==x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MAX;
	uint64_t x19 = 47290233844769149LLU;
	int32_t t4 = 320778202;

    t4 = ((x17&(x18==x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -1LL;
	static volatile int8_t x22 = INT8_MIN;
	uint64_t x24 = 115532471621029509LLU;
	volatile int32_t t5 = 288951950;

    t5 = ((x21&(x22==x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x27 = 4U;
	static uint16_t x28 = 5U;
	int32_t t6 = 49829;

    t6 = ((x25&(x26==x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 308U;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 2;

    t7 = ((x29&(x30==x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 250U;
	int64_t x34 = INT64_MIN;
	static int8_t x35 = 54;
	int32_t x36 = -1;
	volatile int32_t t8 = 25797;

    t8 = ((x33&(x34==x35))<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -3261007155122350LL;
	uint16_t x38 = 18744U;
	uint16_t x39 = 6790U;
	uint16_t x40 = 2U;
	volatile int32_t t9 = 222329;

    t9 = ((x37&(x38==x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -1LL;
	int32_t x42 = 157872;
	volatile int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;

    t10 = ((x41&(x42==x43))<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MAX;
	int16_t x46 = INT16_MAX;
	volatile int32_t t11 = 315;

    t11 = ((x45&(x46==x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int8_t x51 = 8;
	int32_t t12 = -108;

    t12 = ((x49&(x50==x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -62072;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 832U;
	int32_t t13 = -16416459;

    t13 = ((x53&(x54==x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 3U;
	int64_t x58 = 279771LL;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -1;

    t14 = ((x57&(x58==x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	static volatile int32_t t15 = -72;

    t15 = ((x61&(x62==x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x65 = 780;
	volatile uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MAX;
	int32_t x68 = -114;
	volatile int32_t t16 = -1;

    t16 = ((x65&(x66==x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	static uint8_t x71 = 6U;
	int64_t x72 = 1658456LL;
	volatile int32_t t17 = -21107692;

    t17 = ((x69&(x70==x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x74 = INT64_MAX;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -13;

    t18 = ((x73&(x74==x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = -1;
	int8_t x79 = INT8_MAX;
	static uint64_t x80 = 3537844621LLU;

    t19 = ((x77&(x78==x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int32_t t20 = -1;

    t20 = ((x81&(x82==x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 30675U;
	uint32_t x86 = 0U;
	uint16_t x87 = 4U;
	int16_t x88 = -1;
	volatile int32_t t21 = 1612;

    t21 = ((x85&(x86==x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 103U;
	int64_t x90 = INT64_MAX;
	int16_t x92 = 16295;

    t22 = ((x89&(x90==x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int64_t x94 = 14LL;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -426701;

    t23 = ((x93&(x94==x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 19U;
	uint16_t x98 = 108U;
	static int16_t x99 = INT16_MAX;
	int32_t t24 = 204548;

    t24 = ((x97&(x98==x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x103 = 1849794U;
	int32_t x104 = INT32_MAX;
	int32_t t25 = 22;

    t25 = ((x101&(x102==x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static uint32_t x106 = 1623U;
	static int16_t x107 = -1;
	uint8_t x108 = 0U;
	volatile int32_t t26 = 1;

    t26 = ((x105&(x106==x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 2004U;
	int64_t x111 = INT64_MIN;
	int64_t x112 = 5456569198LL;
	volatile int32_t t27 = 2860;

    t27 = ((x109&(x110==x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 797134LLU;
	static uint64_t x114 = 200280LLU;
	uint16_t x115 = 96U;
	static int32_t x116 = -152;
	int32_t t28 = -3884;

    t28 = ((x113&(x114==x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	volatile int16_t x120 = -1;

    t29 = ((x117&(x118==x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MAX;
	volatile int32_t t30 = -1020;

    t30 = ((x121&(x122==x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	volatile int64_t x126 = INT64_MAX;
	volatile int64_t x127 = INT64_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 7;

    t31 = ((x125&(x126==x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 27U;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 58703;

    t32 = ((x129&(x130==x131))<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 0U;
	volatile uint16_t x134 = 36U;
	int32_t x135 = -38;
	int64_t x136 = 3103986259681LL;
	volatile int32_t t33 = 0;

    t33 = ((x133&(x134==x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 508U;
	static int32_t t34 = 26401388;

    t34 = ((x137&(x138==x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 92U;
	volatile uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1LL;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = -301;

    t35 = ((x141&(x142==x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = 7;
	uint32_t x147 = UINT32_MAX;
	volatile int16_t x148 = -1;

    t36 = ((x145&(x146==x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = -1;
	int32_t x150 = -1;
	uint8_t x151 = 4U;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -5252;

    t37 = ((x149&(x150==x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x154 = 3U;
	uint64_t x155 = 26917LLU;
	uint64_t x156 = UINT64_MAX;
	static int32_t t38 = 12783;

    t38 = ((x153&(x154==x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 1709U;
	int64_t x158 = -1LL;
	int64_t x159 = 496872682171032LL;
	static uint8_t x160 = UINT8_MAX;

    t39 = ((x157&(x158==x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = 1U;
	static volatile int32_t x163 = -106671649;
	int8_t x164 = -1;
	volatile int32_t t40 = 16810;

    t40 = ((x161&(x162==x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 1129U;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = 0U;
	volatile int32_t x168 = -1;

    t41 = ((x165&(x166==x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int8_t x170 = 23;
	static volatile uint16_t x171 = 1227U;
	uint8_t x172 = 53U;

    t42 = ((x169&(x170==x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = -1;
	volatile int64_t x174 = -16LL;
	uint64_t x175 = 123592490LLU;
	int16_t x176 = -193;
	int32_t t43 = 28531;

    t43 = ((x173&(x174==x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = -24067083;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t44 = -15;

    t44 = ((x177&(x178==x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 5U;
	uint16_t x182 = 6049U;
	volatile int8_t x183 = INT8_MAX;
	volatile uint32_t x184 = 539199818U;

    t45 = ((x181&(x182==x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	int16_t x186 = INT16_MAX;
	volatile int32_t x187 = INT32_MIN;
	int8_t x188 = -1;
	volatile int32_t t46 = -60;

    t46 = ((x185&(x186==x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x192 = 234;
	static int32_t t47 = -2837180;

    t47 = ((x189&(x190==x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 1;

    t48 = ((x193&(x194==x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MIN;
	volatile int64_t x199 = 74881138492086643LL;
	static int32_t t49 = -16339906;

    t49 = ((x197&(x198==x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 3863462U;
	int16_t x202 = INT16_MAX;
	volatile uint16_t x203 = 0U;
	int32_t x204 = -7753939;
	int32_t t50 = 560820;

    t50 = ((x201&(x202==x203))<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 3271U;
	uint32_t x206 = 957324U;
	uint32_t x207 = 29U;
	int16_t x208 = -1;
	int32_t t51 = -1046561392;

    t51 = ((x205&(x206==x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x211 = -1;
	uint8_t x212 = 1U;
	static int32_t t52 = -48;

    t52 = ((x209&(x210==x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = -12;
	uint8_t x216 = 5U;

    t53 = ((x213&(x214==x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 0U;
	volatile int64_t x219 = -5812998198LL;
	static int64_t x220 = INT64_MIN;
	int32_t t54 = -8171924;

    t54 = ((x217&(x218==x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = UINT16_MAX;
	static uint8_t x223 = 3U;
	volatile int32_t t55 = -33088;

    t55 = ((x221&(x222==x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = 131323739LL;
	uint64_t x226 = 10801396788543LLU;
	static uint32_t x227 = 0U;
	static volatile int32_t x228 = 23;
	volatile int32_t t56 = -265184348;

    t56 = ((x225&(x226==x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MAX;
	uint16_t x231 = UINT16_MAX;
	int32_t t57 = 7;

    t57 = ((x229&(x230==x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = 8;
	uint64_t x234 = 498610540930866LLU;
	uint8_t x235 = UINT8_MAX;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 0;

    t58 = ((x233&(x234==x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = -1;
	int32_t x239 = -1965310;
	int32_t x240 = -262;
	int32_t t59 = 17;

    t59 = ((x237&(x238==x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 15;
	uint32_t x242 = UINT32_MAX;
	uint64_t x243 = 3292LLU;
	volatile int32_t t60 = 66118065;

    t60 = ((x241&(x242==x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static int16_t x246 = 18;
	static uint8_t x247 = 1U;
	int16_t x248 = INT16_MAX;
	static volatile int32_t t61 = 3304526;

    t61 = ((x245&(x246==x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	static int64_t x250 = INT64_MAX;
	uint64_t x252 = 1175LLU;

    t62 = ((x249&(x250==x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 37;
	int32_t x255 = INT32_MIN;
	static uint32_t x256 = 190U;
	int32_t t63 = 8311;

    t63 = ((x253&(x254==x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	static int8_t x258 = 4;
	volatile uint64_t x259 = UINT64_MAX;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 155189811;

    t64 = ((x257&(x258==x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = 0;
	int16_t x264 = INT16_MAX;

    t65 = ((x261&(x262==x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = INT8_MIN;
	static int8_t x267 = -1;
	int16_t x268 = 8;
	volatile int32_t t66 = -260;

    t66 = ((x265&(x266==x267))<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = -368LL;
	static uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 56746U;
	uint8_t x272 = UINT8_MAX;
	static int32_t t67 = -1;

    t67 = ((x269&(x270==x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = 2;
	uint8_t x276 = 17U;
	volatile int32_t t68 = 323;

    t68 = ((x273&(x274==x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 29;
	int32_t x278 = INT32_MAX;
	volatile int64_t x279 = 393LL;
	static int64_t x280 = INT64_MAX;

    t69 = ((x277&(x278==x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MIN;
	int32_t t70 = 4146424;

    t70 = ((x281&(x282==x283))<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 2281834768526719LLU;
	uint32_t x288 = 1882881575U;
	static volatile int32_t t71 = 29533516;

    t71 = ((x285&(x286==x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x291 = -1;
	volatile int32_t x292 = INT32_MIN;
	int32_t t72 = -14784;

    t72 = ((x289&(x290==x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -29;
	uint64_t x295 = 163LLU;
	volatile int32_t t73 = -8753201;

    t73 = ((x293&(x294==x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MAX;
	int32_t x298 = -15;
	int32_t x300 = INT32_MIN;

    t74 = ((x297&(x298==x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = INT16_MIN;
	static uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -81501;

    t75 = ((x301&(x302==x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x306 = INT32_MIN;
	int32_t x307 = -1;
	static volatile int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 531100583;

    t76 = ((x305&(x306==x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;

    t77 = ((x309&(x310==x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	static int8_t x316 = -1;
	volatile int32_t t78 = -32362;

    t78 = ((x313&(x314==x315))<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	volatile int8_t x319 = -12;
	static int32_t t79 = 27158795;

    t79 = ((x317&(x318==x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	static int32_t x322 = INT32_MAX;
	static uint8_t x323 = 13U;
	int32_t t80 = 1000;

    t80 = ((x321&(x322==x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	volatile int16_t x327 = INT16_MIN;
	static volatile int32_t t81 = -47558714;

    t81 = ((x325&(x326==x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x330 = INT8_MIN;
	static uint8_t x331 = UINT8_MAX;
	int32_t t82 = 29950;

    t82 = ((x329&(x330==x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	volatile uint32_t x336 = 780425U;

    t83 = ((x333&(x334==x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = 1562;
	int16_t x338 = INT16_MIN;

    t84 = ((x337&(x338==x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x341 = 1918748109064596LLU;
	uint8_t x342 = 1U;
	int16_t x343 = -1;
	static int32_t x344 = -4760389;
	volatile int32_t t85 = -18;

    t85 = ((x341&(x342==x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -41;
	static volatile int16_t x346 = INT16_MAX;
	uint32_t x347 = UINT32_MAX;
	int32_t t86 = -361969;

    t86 = ((x345&(x346==x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	uint8_t x351 = UINT8_MAX;
	static int32_t t87 = -2305;

    t87 = ((x349&(x350==x351))<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MIN;
	volatile int64_t x354 = -34200212022LL;
	int8_t x355 = 0;
	volatile uint32_t x356 = 87U;
	int32_t t88 = -1095;

    t88 = ((x353&(x354==x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 68127282;
	int16_t x358 = INT16_MIN;
	static int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = 151;

    t89 = ((x357&(x358==x359))<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x361 = UINT16_MAX;
	int8_t x362 = -1;
	uint32_t x363 = 6856U;
	int32_t x364 = 21010;
	int32_t t90 = -4858955;

    t90 = ((x361&(x362==x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	static volatile int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;

    t91 = ((x365&(x366==x367))<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	static int16_t x372 = -1;

    t92 = ((x369&(x370==x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = 148844649975689LL;
	uint64_t x374 = UINT64_MAX;
	int32_t x375 = -1;
	volatile uint16_t x376 = 6U;
	int32_t t93 = 9746;

    t93 = ((x373&(x374==x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -16223624LL;
	volatile uint64_t x378 = 109101926617665LLU;
	uint32_t x379 = 1891862U;
	int32_t t94 = 45859;

    t94 = ((x377&(x378==x379))<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = 84;
	uint32_t x383 = UINT32_MAX;
	static int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = -5;

    t95 = ((x381&(x382==x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 1095288018LL;
	int8_t x386 = INT8_MAX;
	int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t96 = 865957583;

    t96 = ((x385&(x386==x387))<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	volatile int16_t x391 = INT16_MIN;
	static int32_t t97 = -97113984;

    t97 = ((x389&(x390==x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 1U;
	volatile int8_t x394 = -27;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 1;

    t98 = ((x393&(x394==x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 1048;
	volatile int8_t x398 = 6;
	int64_t x399 = INT64_MAX;
	static int32_t t99 = -3610619;

    t99 = ((x397&(x398==x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	int64_t x402 = INT64_MAX;
	uint32_t x403 = UINT32_MAX;
	int16_t x404 = -44;
	volatile int32_t t100 = 0;

    t100 = ((x401&(x402==x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = INT8_MIN;
	int8_t x406 = -1;
	int32_t x407 = INT32_MIN;
	int64_t x408 = -174773716761464768LL;
	volatile int32_t t101 = -5;

    t101 = ((x405&(x406==x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	static uint8_t x410 = UINT8_MAX;
	uint16_t x411 = 1U;

    t102 = ((x409&(x410==x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x414 = -4;
	int32_t x415 = -1;
	static int8_t x416 = INT8_MAX;

    t103 = ((x413&(x414==x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -1LL;
	int32_t x418 = INT32_MAX;
	static int64_t x419 = INT64_MIN;
	volatile int32_t t104 = -672262;

    t104 = ((x417&(x418==x419))<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	int32_t x422 = 119;
	static int64_t x423 = 1LL;
	static uint16_t x424 = 32105U;

    t105 = ((x421&(x422==x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = UINT64_MAX;
	int32_t x427 = 61444856;
	int32_t t106 = 124;

    t106 = ((x425&(x426==x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	int32_t x431 = -1;
	int8_t x432 = INT8_MAX;
	volatile int32_t t107 = -41;

    t107 = ((x429&(x430==x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x433 = INT8_MIN;
	uint8_t x434 = 2U;
	int64_t x436 = INT64_MIN;
	static int32_t t108 = -4;

    t108 = ((x433&(x434==x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile int32_t x438 = INT32_MAX;
	uint16_t x440 = 225U;
	int32_t t109 = 0;

    t109 = ((x437&(x438==x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x441 = 27153U;
	int64_t x442 = -1LL;
	static volatile uint32_t x443 = UINT32_MAX;
	int32_t t110 = -1;

    t110 = ((x441&(x442==x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = 9U;
	volatile int32_t t111 = -544970407;

    t111 = ((x445&(x446==x447))<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x450 = 42U;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t112 = 244;

    t112 = ((x449&(x450==x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 1U;
	int64_t x454 = INT64_MAX;
	uint32_t x456 = 1933U;
	volatile int32_t t113 = -131200;

    t113 = ((x453&(x454==x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 76513004457394LLU;
	uint8_t x459 = 5U;
	static uint8_t x460 = 121U;

    t114 = ((x457&(x458==x459))<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = -7174;
	int64_t x463 = 116929307LL;
	static int32_t t115 = 842;

    t115 = ((x461&(x462==x463))<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 0U;
	int32_t x466 = -121196388;
	uint16_t x467 = 85U;
	uint16_t x468 = 1U;

    t116 = ((x465&(x466==x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 84997U;
	uint16_t x471 = 45U;
	static uint16_t x472 = 0U;
	int32_t t117 = 263;

    t117 = ((x469&(x470==x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = -8;
	int32_t x474 = INT32_MIN;
	int32_t x475 = INT32_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = 44;

    t118 = ((x473&(x474==x475))<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -2355;
	int16_t x479 = INT16_MAX;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t119 = 108424;

    t119 = ((x477&(x478==x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = 0U;
	int32_t x482 = INT32_MAX;
	int32_t x483 = INT32_MIN;
	uint32_t x484 = 5U;
	static volatile int32_t t120 = 100713;

    t120 = ((x481&(x482==x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -706493149;
	uint64_t x486 = 7LLU;
	int64_t x487 = 206508LL;
	static int64_t x488 = -1LL;
	int32_t t121 = -462100312;

    t121 = ((x485&(x486==x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	volatile uint32_t x491 = 129982452U;
	static int32_t x492 = INT32_MIN;
	int32_t t122 = -55164801;

    t122 = ((x489&(x490==x491))<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	static uint32_t x494 = 48588U;
	uint16_t x495 = 32552U;
	static int64_t x496 = INT64_MAX;
	static volatile int32_t t123 = -2103;

    t123 = ((x493&(x494==x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MAX;
	uint8_t x498 = 0U;
	int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MAX;

    t124 = ((x497&(x498==x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 3U;
	int8_t x502 = -1;
	volatile int32_t t125 = -34101212;

    t125 = ((x501&(x502==x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 19576U;
	int64_t x507 = -1LL;
	uint8_t x508 = 34U;
	volatile int32_t t126 = -7;

    t126 = ((x505&(x506==x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = 1133957;
	volatile uint64_t x510 = UINT64_MAX;
	static uint8_t x511 = UINT8_MAX;
	static uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = 111920490;

    t127 = ((x509&(x510==x511))<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	volatile int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MAX;
	int32_t x516 = -1;
	int32_t t128 = -6;

    t128 = ((x513&(x514==x515))<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = -18;
	volatile int16_t x518 = INT16_MIN;
	volatile int64_t x519 = -697271261768LL;
	volatile uint32_t x520 = 1U;
	int32_t t129 = -22423274;

    t129 = ((x517&(x518==x519))<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	int8_t x523 = 6;
	int32_t t130 = -3237838;

    t130 = ((x521&(x522==x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MAX;
	volatile int64_t x527 = INT64_MIN;
	uint16_t x528 = 3851U;
	int32_t t131 = 119228;

    t131 = ((x525&(x526==x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	uint8_t x530 = UINT8_MAX;
	volatile int8_t x531 = -1;
	int8_t x532 = INT8_MAX;
	static int32_t t132 = -418;

    t132 = ((x529&(x530==x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = INT32_MIN;
	static int32_t x534 = -1;
	int64_t x535 = -1LL;
	uint64_t x536 = UINT64_MAX;

    t133 = ((x533&(x534==x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x539 = INT8_MIN;
	volatile uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = -672327;

    t134 = ((x537&(x538==x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x542 = 800U;
	volatile uint64_t x543 = UINT64_MAX;
	int8_t x544 = -1;
	static int32_t t135 = -64393339;

    t135 = ((x541&(x542==x543))<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -31171129;
	volatile int64_t x546 = INT64_MIN;
	uint32_t x547 = UINT32_MAX;
	int32_t x548 = -1;
	volatile int32_t t136 = 66054264;

    t136 = ((x545&(x546==x547))<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	uint8_t x550 = UINT8_MAX;
	static uint8_t x551 = 27U;
	int16_t x552 = INT16_MAX;
	volatile int32_t t137 = -2;

    t137 = ((x549&(x550==x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x554 = -61800547LL;
	volatile int16_t x555 = INT16_MIN;
	volatile int64_t x556 = -1LL;
	static volatile int32_t t138 = 223840;

    t138 = ((x553&(x554==x555))<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 1054235022073142LLU;
	int64_t x559 = INT64_MIN;
	int8_t x560 = -1;
	static int32_t t139 = 90078;

    t139 = ((x557&(x558==x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 2U;
	uint64_t x562 = 0LLU;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MAX;
	int32_t t140 = -45596;

    t140 = ((x561&(x562==x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -2981124;
	uint8_t x566 = UINT8_MAX;
	uint8_t x567 = 6U;
	int64_t x568 = 54809LL;
	int32_t t141 = -1645;

    t141 = ((x565&(x566==x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 203780932750098031LLU;
	uint64_t x571 = UINT64_MAX;
	volatile int64_t x572 = INT64_MIN;
	volatile int32_t t142 = -25996867;

    t142 = ((x569&(x570==x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = INT8_MAX;
	int32_t x574 = INT32_MIN;
	uint32_t x575 = UINT32_MAX;
	uint16_t x576 = 1196U;
	volatile int32_t t143 = -108;

    t143 = ((x573&(x574==x575))<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	volatile uint64_t x578 = 1358249175LLU;
	static volatile int64_t x580 = -1LL;
	int32_t t144 = -3801399;

    t144 = ((x577&(x578==x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	static volatile uint64_t x582 = 769LLU;
	volatile uint64_t x583 = 2189691462276996LLU;

    t145 = ((x581&(x582==x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 731U;
	uint8_t x586 = 1U;
	int8_t x588 = -1;
	volatile int32_t t146 = 7051009;

    t146 = ((x585&(x586==x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = -4654;
	static uint64_t x592 = UINT64_MAX;
	int32_t t147 = -33263758;

    t147 = ((x589&(x590==x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 1;
	int32_t x594 = -6;
	int8_t x595 = INT8_MAX;
	int8_t x596 = -1;
	int32_t t148 = -1857606;

    t148 = ((x593&(x594==x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	int64_t x598 = -990370172448LL;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -27968;

    t149 = ((x597&(x598==x599))<=x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	uint64_t x602 = UINT64_MAX;
	uint16_t x603 = 25U;
	static int64_t x604 = -47771LL;
	static volatile int32_t t150 = 667;

    t150 = ((x601&(x602==x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 1;
	int8_t x606 = INT8_MAX;
	volatile int32_t t151 = -28926634;

    t151 = ((x605&(x606==x607))<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x610 = 4024098417LLU;
	static int32_t x611 = 15735150;
	int8_t x612 = -2;
	int32_t t152 = 6;

    t152 = ((x609&(x610==x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = INT16_MIN;
	static int8_t x615 = INT8_MIN;
	uint8_t x616 = 5U;

    t153 = ((x613&(x614==x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x618 = 44358305;
	uint64_t x620 = 27LLU;

    t154 = ((x617&(x618==x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 0U;
	int32_t x622 = INT32_MAX;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 12561;

    t155 = ((x621&(x622==x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x625 = 184970U;
	static uint32_t x626 = 3U;
	uint8_t x627 = 25U;

    t156 = ((x625&(x626==x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	int8_t x630 = INT8_MAX;
	int64_t x631 = INT64_MAX;
	volatile int8_t x632 = -1;

    t157 = ((x629&(x630==x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	int32_t x634 = -58;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = -264092208296LL;
	static volatile int32_t t158 = -1498263;

    t158 = ((x633&(x634==x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 3U;
	int32_t x639 = INT32_MIN;
	int16_t x640 = -1;
	int32_t t159 = 183580;

    t159 = ((x637&(x638==x639))<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 1;
	int8_t x642 = INT8_MIN;
	int64_t x644 = INT64_MAX;
	int32_t t160 = -5480;

    t160 = ((x641&(x642==x643))<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -2;
	volatile uint64_t x646 = UINT64_MAX;
	int16_t x647 = 597;
	volatile uint64_t x648 = 70217026765LLU;

    t161 = ((x645&(x646==x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 40223U;
	static int16_t x650 = INT16_MAX;
	int32_t x651 = INT32_MIN;
	int64_t x652 = INT64_MIN;

    t162 = ((x649&(x650==x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint16_t x654 = 178U;
	int64_t x655 = -18195879471561LL;
	static volatile int16_t x656 = 42;
	static int32_t t163 = -4;

    t163 = ((x653&(x654==x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x658 = INT32_MIN;
	volatile int8_t x659 = -12;
	int8_t x660 = -2;
	static volatile int32_t t164 = -165;

    t164 = ((x657&(x658==x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x662 = 28945U;
	volatile int8_t x663 = INT8_MAX;
	static int64_t x664 = INT64_MIN;
	static int32_t t165 = 234;

    t165 = ((x661&(x662==x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	uint16_t x667 = 5U;
	int32_t t166 = -1910;

    t166 = ((x665&(x666==x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 22597U;
	int16_t x670 = INT16_MIN;
	uint32_t x671 = UINT32_MAX;
	static uint64_t x672 = 8384145LLU;
	volatile int32_t t167 = 32;

    t167 = ((x669&(x670==x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	int32_t x674 = INT32_MAX;
	uint8_t x675 = UINT8_MAX;
	int32_t t168 = -31094;

    t168 = ((x673&(x674==x675))<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 3724LLU;
	static int8_t x678 = -1;
	volatile int8_t x679 = -21;
	int8_t x680 = INT8_MIN;
	int32_t t169 = -8;

    t169 = ((x677&(x678==x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	int64_t x682 = -1LL;
	int64_t x684 = -1LL;

    t170 = ((x681&(x682==x683))<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = UINT16_MAX;
	volatile int32_t x687 = INT32_MIN;

    t171 = ((x685&(x686==x687))<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = 15022;
	volatile int8_t x690 = INT8_MIN;
	int16_t x691 = -59;
	static int32_t t172 = -21;

    t172 = ((x689&(x690==x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 41825848LLU;
	int32_t x694 = INT32_MIN;
	int32_t x695 = INT32_MIN;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = -409714;

    t173 = ((x693&(x694==x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	int32_t x698 = INT32_MAX;
	int8_t x699 = INT8_MAX;
	uint32_t x700 = UINT32_MAX;
	int32_t t174 = 944372;

    t174 = ((x697&(x698==x699))<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -5777;
	static volatile int64_t x703 = INT64_MIN;
	int8_t x704 = INT8_MAX;
	volatile int32_t t175 = 81;

    t175 = ((x701&(x702==x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	int32_t x706 = INT32_MAX;
	uint32_t x707 = 0U;
	static volatile int16_t x708 = -1;

    t176 = ((x705&(x706==x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x709 = 343LLU;
	volatile int32_t x712 = -1;
	static int32_t t177 = -21218072;

    t177 = ((x709&(x710==x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x714 = 29962523444LL;
	int16_t x715 = INT16_MIN;

    t178 = ((x713&(x714==x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = 1658LL;
	static volatile int32_t x718 = -1;
	int32_t t179 = -13103975;

    t179 = ((x717&(x718==x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 8U;
	int8_t x722 = INT8_MAX;
	int32_t x723 = INT32_MIN;
	uint16_t x724 = 2U;
	volatile int32_t t180 = -33;

    t180 = ((x721&(x722==x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 1698U;
	static int8_t x727 = INT8_MIN;
	volatile int32_t t181 = -30;

    t181 = ((x725&(x726==x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	int8_t x730 = -31;
	volatile int32_t t182 = 52;

    t182 = ((x729&(x730==x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	uint16_t x734 = 11U;
	uint64_t x735 = 11946393002LLU;
	static int8_t x736 = -1;
	static int32_t t183 = -122120;

    t183 = ((x733&(x734==x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	uint8_t x738 = 10U;
	static int16_t x739 = -1;
	static int64_t x740 = -1LL;

    t184 = ((x737&(x738==x739))<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	int8_t x742 = INT8_MIN;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = -1;
	volatile int32_t t185 = -1;

    t185 = ((x741&(x742==x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	uint16_t x746 = 960U;
	volatile int32_t t186 = 167;

    t186 = ((x745&(x746==x747))<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 1U;
	uint8_t x750 = UINT8_MAX;
	static uint8_t x751 = 9U;
	uint32_t x752 = UINT32_MAX;
	int32_t t187 = 1;

    t187 = ((x749&(x750==x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 67;
	int64_t x754 = -1LL;
	volatile int32_t t188 = 0;

    t188 = ((x753&(x754==x755))<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x758 = UINT32_MAX;
	int16_t x759 = -9187;
	uint32_t x760 = UINT32_MAX;
	int32_t t189 = 4416396;

    t189 = ((x757&(x758==x759))<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 117222475U;
	int32_t x762 = -3054293;
	uint32_t x763 = 11466976U;
	static uint32_t x764 = 1U;
	volatile int32_t t190 = 10771;

    t190 = ((x761&(x762==x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1LL;
	int32_t x767 = -1;
	static int8_t x768 = INT8_MIN;
	int32_t t191 = 444;

    t191 = ((x765&(x766==x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x770 = 0U;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t192 = 126024484;

    t192 = ((x769&(x770==x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x774 = 1270U;
	int32_t x775 = -1;
	static volatile uint32_t x776 = UINT32_MAX;
	static int32_t t193 = -52;

    t193 = ((x773&(x774==x775))<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x778 = 87989U;
	uint16_t x779 = 15648U;
	int32_t x780 = INT32_MAX;
	int32_t t194 = 5657901;

    t194 = ((x777&(x778==x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x782 = -1;
	uint16_t x783 = 64U;
	int32_t x784 = -27;

    t195 = ((x781&(x782==x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x786 = -25847;
	int64_t x787 = 615735231792822LL;
	int32_t x788 = INT32_MIN;
	int32_t t196 = -5397175;

    t196 = ((x785&(x786==x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x791 = 7;
	volatile uint32_t x792 = 979U;
	volatile int32_t t197 = -10;

    t197 = ((x789&(x790==x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 2U;
	int32_t x794 = INT32_MIN;
	int32_t x795 = INT32_MAX;
	volatile int32_t x796 = INT32_MIN;

    t198 = ((x793&(x794==x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 53567U;
	static uint64_t x798 = 99511756462LLU;
	int64_t x799 = -1LL;
	int32_t x800 = INT32_MIN;
	int32_t t199 = -1;

    t199 = ((x797&(x798==x799))<=x800);

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

