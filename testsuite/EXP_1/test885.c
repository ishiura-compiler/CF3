
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

int64_t x2 = INT64_MIN;
uint8_t x5 = 10U;
int8_t x8 = INT8_MIN;
uint8_t x10 = 2U;
volatile uint32_t t3 = 1990U;
uint16_t x19 = UINT16_MAX;
static uint16_t x23 = 1584U;
int8_t x26 = -1;
static volatile int32_t t6 = 10;
static int8_t x30 = -1;
static int32_t x31 = -1;
int64_t x33 = INT64_MIN;
int8_t x37 = INT8_MAX;
int16_t x40 = -373;
volatile uint64_t x44 = 1444208904LLU;
static volatile uint64_t x50 = 41175840LLU;
uint64_t x52 = 1655148683373LLU;
uint8_t x55 = 13U;
int64_t x59 = 5552202067120LL;
volatile int32_t t14 = 230235;
int64_t x69 = 28463244614825480LL;
int64_t x73 = INT64_MIN;
uint8_t x74 = 25U;
uint32_t x78 = UINT32_MAX;
int32_t x82 = -1;
static int8_t x83 = INT8_MIN;
volatile int8_t x90 = INT8_MIN;
static int8_t x93 = 36;
static int8_t x100 = -1;
int32_t x114 = 164;
static int8_t x116 = -3;
int32_t x119 = 49517;
uint64_t x124 = UINT64_MAX;
uint64_t x125 = 899611981811454310LLU;
int8_t x130 = 7;
volatile int64_t x131 = -98256LL;
static int64_t x135 = INT64_MIN;
volatile uint32_t t33 = 180897U;
int16_t x138 = -1;
int32_t t34 = 11356149;
static int8_t x141 = INT8_MIN;
int8_t x143 = INT8_MAX;
volatile uint32_t x148 = UINT32_MAX;
int16_t x152 = -844;
static volatile int32_t t39 = 472541392;
int16_t x161 = INT16_MIN;
volatile int32_t t41 = 65639;
uint64_t t42 = 4280463722058514LLU;
uint16_t x183 = UINT16_MAX;
uint8_t x191 = 13U;
uint64_t t47 = 585180810040209LLU;
int32_t x193 = -711507140;
uint8_t x194 = 30U;
int32_t x202 = INT32_MIN;
int16_t x208 = INT16_MIN;
static int64_t x210 = 2063LL;
volatile int32_t t52 = 7;
volatile int32_t t53 = 161082170;
int16_t x221 = INT16_MIN;
int32_t t55 = 1211155;
volatile uint8_t x229 = UINT8_MAX;
volatile uint8_t x242 = 118U;
int32_t x246 = INT32_MIN;
int64_t x247 = -1LL;
volatile uint16_t x251 = 3U;
int8_t x254 = -1;
uint64_t x256 = 1135881827LLU;
int16_t x266 = INT16_MIN;
static uint8_t x273 = UINT8_MAX;
int64_t x274 = 59990302799LL;
static int32_t x275 = INT32_MIN;
volatile uint8_t x276 = 76U;
static int64_t x278 = -1LL;
volatile int16_t x281 = 8068;
volatile int64_t t67 = 12128645293277LL;
int64_t x291 = INT64_MIN;
volatile uint16_t x295 = 8U;
volatile uint16_t x297 = UINT16_MAX;
int16_t x298 = INT16_MIN;
static int32_t x301 = INT32_MIN;
uint32_t x303 = 238U;
volatile int64_t x304 = 203356131846063476LL;
static volatile uint8_t x306 = 50U;
uint64_t x310 = UINT64_MAX;
int32_t x311 = 913;
int64_t x312 = -3923LL;
int64_t t74 = -86140295LL;
int8_t x314 = INT8_MIN;
int64_t t75 = 24201019LL;
uint32_t x318 = UINT32_MAX;
volatile int8_t x322 = INT8_MAX;
int32_t x340 = -34115338;
volatile int32_t t81 = -58;
int8_t x344 = INT8_MAX;
volatile int32_t t82 = 101149;
uint8_t x345 = 29U;
volatile uint64_t x347 = 1291271706820726LLU;
volatile int64_t x355 = INT64_MIN;
volatile uint64_t t85 = 23683LLU;
static uint64_t x358 = UINT64_MAX;
int16_t x364 = INT16_MIN;
uint16_t x369 = UINT16_MAX;
static int64_t x380 = INT64_MAX;
volatile int64_t t91 = -15792010152236LL;
uint32_t x382 = UINT32_MAX;
static uint16_t x394 = UINT16_MAX;
volatile int8_t x401 = INT8_MAX;
uint16_t x406 = 2U;
uint32_t x407 = 26U;
volatile int64_t x408 = INT64_MIN;
uint64_t x409 = UINT64_MAX;
volatile uint16_t x420 = UINT16_MAX;
static volatile int32_t t101 = 29;
static int32_t t104 = 850622925;
int32_t x436 = -76;
static int8_t x439 = -1;
uint32_t x441 = 268182U;
volatile int32_t t107 = 143;
volatile int16_t x445 = INT16_MAX;
int8_t x448 = INT8_MIN;
static uint32_t t110 = 356644686U;
static uint16_t x457 = 11U;
uint32_t x463 = 4U;
int64_t x473 = -68021716124LL;
int16_t x476 = INT16_MIN;
uint64_t x479 = UINT64_MAX;
volatile int64_t x480 = INT64_MAX;
int64_t x489 = -1LL;
static int16_t x490 = 15849;
uint64_t x493 = 9839230LLU;
int32_t x494 = INT32_MIN;
uint32_t x499 = 372974U;
int64_t t121 = -1LL;
uint16_t x501 = 1411U;
int32_t x504 = 2355;
volatile int32_t x507 = INT32_MIN;
static int32_t t125 = -31;
int16_t x517 = -1;
volatile int32_t t126 = 2482108;
volatile int32_t t127 = 10359685;
uint8_t x526 = UINT8_MAX;
volatile int8_t x527 = INT8_MAX;
int16_t x528 = -442;
volatile int32_t t128 = 2;
volatile uint8_t x529 = 0U;
int64_t t130 = -256634LL;
int16_t x538 = 49;
int32_t x547 = -1;
static uint16_t x549 = 21U;
uint16_t x553 = 241U;
static uint64_t x556 = 193LLU;
volatile uint64_t t135 = 176454497159874837LLU;
int64_t x558 = INT64_MIN;
int64_t x567 = INT64_MAX;
int32_t x572 = 0;
int8_t x580 = INT8_MIN;
int16_t x584 = -62;
int16_t x587 = 1;
uint32_t x590 = UINT32_MAX;
int8_t x591 = INT8_MIN;
int16_t x592 = INT16_MAX;
int16_t x594 = INT16_MAX;
static int8_t x595 = INT8_MIN;
int64_t x597 = -1LL;
static volatile int32_t t146 = -7;
int8_t x601 = 0;
int64_t x609 = INT64_MIN;
volatile int64_t x622 = -430198362422LL;
volatile int32_t t152 = -480613934;
volatile uint8_t x625 = 6U;
int16_t x626 = -1;
static int32_t x627 = INT32_MAX;
int8_t x628 = INT8_MAX;
volatile int32_t t153 = 5;
uint64_t x631 = 91776972559930007LLU;
volatile int16_t x632 = -1;
uint32_t x636 = 1381865U;
int64_t x644 = -1LL;
static volatile int16_t x645 = 0;
uint8_t x651 = 116U;
uint16_t x656 = UINT16_MAX;
volatile uint16_t x657 = UINT16_MAX;
int32_t t160 = 637011118;
int32_t x672 = INT32_MIN;
uint64_t x674 = UINT64_MAX;
int16_t x677 = INT16_MAX;
int32_t x678 = 191250735;
int16_t x680 = -7941;
volatile int64_t t166 = INT64_MIN;
int8_t x689 = 4;
static int64_t x695 = -1298087362LL;
volatile int8_t x698 = INT8_MAX;
uint32_t x699 = UINT32_MAX;
int8_t x704 = INT8_MAX;
static int32_t x711 = -1;
int64_t x713 = -1LL;
static uint16_t x718 = 25312U;
static uint64_t x725 = UINT64_MAX;
static int8_t x732 = 1;
volatile int64_t t179 = 145430628070LL;
int32_t t180 = -11;
uint32_t x742 = UINT32_MAX;
static uint16_t x746 = 3763U;
int32_t x747 = INT32_MAX;
int8_t x752 = INT8_MIN;
int32_t x753 = -576;
int16_t x756 = 94;
static uint16_t x757 = 5U;
volatile int64_t x760 = INT64_MAX;
static volatile int64_t t185 = 1447261839LL;
int64_t x764 = INT64_MIN;
static int64_t t186 = -4626LL;
uint8_t x767 = 3U;
int16_t x774 = 6799;
int64_t x780 = INT64_MIN;
volatile int64_t t189 = -1LL;
static int32_t t191 = 432629434;
int32_t x794 = 13087622;
volatile int16_t x799 = INT16_MIN;
int16_t x803 = INT16_MIN;
int32_t t195 = 144;
static volatile int32_t t197 = 475465;
int32_t x815 = INT32_MIN;
uint64_t x818 = 27965LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 2338;

    t0 = (((x1%x2)==x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = UINT64_MAX;
	int16_t x7 = 1168;
	volatile int32_t t1 = 8816;

    t1 = (((x5%x6)==x7)*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MAX;
	int64_t x11 = INT64_MAX;
	static uint64_t x12 = 1676433780549613032LLU;
	uint64_t t2 = 1054578675711LLU;

    t2 = (((x9%x10)==x11)*x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	int8_t x14 = INT8_MAX;
	volatile int32_t x15 = -1;
	uint32_t x16 = 12855U;

    t3 = (((x13%x14)==x15)*x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 114472230U;
	int32_t x18 = INT32_MIN;
	int64_t x20 = -68LL;
	int64_t t4 = 1993932LL;

    t4 = (((x17%x18)==x19)*x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x24 = -7;
	static int32_t t5 = -86;

    t5 = (((x21%x22)==x23)*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	int64_t x27 = -1LL;
	static int32_t x28 = 25401542;

    t6 = (((x25%x26)==x27)*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	uint8_t x32 = 106U;
	volatile int32_t t7 = -28449363;

    t7 = (((x29%x30)==x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	uint32_t x35 = UINT32_MAX;
	static int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = 295023520;

    t8 = (((x33%x34)==x35)*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MIN;
	static uint16_t x39 = UINT16_MAX;
	int32_t t9 = -198;

    t9 = (((x37%x38)==x39)*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 125U;
	int16_t x42 = 1602;
	uint8_t x43 = 28U;
	volatile uint64_t t10 = 1915945792781076248LLU;

    t10 = (((x41%x42)==x43)*x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	uint64_t x46 = 117668117760105LLU;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 11U;
	volatile int32_t t11 = 63;

    t11 = (((x45%x46)==x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 2076286522544163LLU;
	uint32_t x51 = 282181614U;
	volatile uint64_t t12 = 10355481LLU;

    t12 = (((x49%x50)==x51)*x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 1056732885U;
	volatile int16_t x54 = 124;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t13 = 5922533LL;

    t13 = (((x53%x54)==x55)*x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	static volatile uint16_t x60 = 3807U;

    t14 = (((x57%x58)==x59)*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 98U;
	uint64_t x62 = UINT64_MAX;
	static volatile int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	static int32_t t15 = 104072;

    t15 = (((x61%x62)==x63)*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int8_t x66 = -1;
	volatile int32_t x67 = -14254;
	int8_t x68 = -15;
	int32_t t16 = -1166;

    t16 = (((x65%x66)==x67)*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	volatile int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -1;

    t17 = (((x69%x70)==x71)*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x75 = 2U;
	uint32_t x76 = 1417258867U;
	uint32_t t18 = 3U;

    t18 = (((x73%x74)==x75)*x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	int32_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t19 = 6LLU;

    t19 = (((x77%x78)==x79)*x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int64_t x84 = -1LL;
	static volatile int64_t t20 = 4LL;

    t20 = (((x81%x82)==x83)*x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -1;
	volatile int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	volatile int32_t x88 = 3;
	int32_t t21 = 33;

    t21 = (((x85%x86)==x87)*x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	uint8_t x91 = 1U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 497;

    t22 = (((x89%x90)==x91)*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MAX;
	static volatile uint16_t x95 = 1U;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -18048;

    t23 = (((x93%x94)==x95)*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = 1U;
	static volatile int8_t x99 = 52;
	static int32_t t24 = 1;

    t24 = (((x97%x98)==x99)*x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = 103363173119302LL;
	int8_t x102 = 25;
	int16_t x103 = INT16_MIN;
	static int8_t x104 = 23;
	volatile int32_t t25 = -57;

    t25 = (((x101%x102)==x103)*x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	uint64_t x106 = 467007576934449LLU;
	uint16_t x107 = 7U;
	volatile int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 92LL;

    t26 = (((x105%x106)==x107)*x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 16104;
	int64_t x110 = -1LL;
	int32_t x111 = 218194467;
	volatile uint16_t x112 = 623U;
	volatile int32_t t27 = 253516;

    t27 = (((x109%x110)==x111)*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 1583;
	static uint8_t x115 = 44U;
	static int32_t t28 = -18964;

    t28 = (((x113%x114)==x115)*x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 2605318U;
	volatile uint8_t x118 = 10U;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -2347631287196436841LL;

    t29 = (((x117%x118)==x119)*x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MIN;
	uint8_t x123 = UINT8_MAX;
	volatile uint64_t t30 = UINT64_MAX;

    t30 = (((x121%x122)==x123)*x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x126 = UINT32_MAX;
	int16_t x127 = 221;
	uint64_t x128 = 12984637LLU;
	static uint64_t t31 = 795841041157858LLU;

    t31 = (((x125%x126)==x127)*x128);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = UINT64_MAX;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t32 = 25316;

    t32 = (((x129%x130)==x131)*x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	volatile uint16_t x134 = 3U;
	uint32_t x136 = 164U;

    t33 = (((x133%x134)==x135)*x136);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int8_t x139 = INT8_MIN;
	static volatile int32_t x140 = -6785;

    t34 = (((x137%x138)==x139)*x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MAX;
	int64_t x144 = INT64_MAX;
	static int64_t t35 = -327786545256LL;

    t35 = (((x141%x142)==x143)*x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 7676U;
	uint32_t t36 = 20U;

    t36 = (((x145%x146)==x147)*x148);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	int32_t x150 = -6;
	static uint8_t x151 = 86U;
	int32_t t37 = -10897231;

    t37 = (((x149%x150)==x151)*x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 330231059537336LLU;
	int8_t x154 = -49;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 1730;

    t38 = (((x153%x154)==x155)*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 87303658954LLU;
	uint16_t x158 = 14361U;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 0U;

    t39 = (((x157%x158)==x159)*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	volatile int8_t x164 = 4;
	volatile int32_t t40 = -17;

    t40 = (((x161%x162)==x163)*x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = 4;
	volatile uint8_t x166 = 2U;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;

    t41 = (((x165%x166)==x167)*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 7147127;
	uint16_t x170 = 396U;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = 15448589077LLU;

    t42 = (((x169%x170)==x171)*x172);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 118U;
	int64_t x176 = INT64_MAX;
	volatile int64_t t43 = -9573121312LL;

    t43 = (((x173%x174)==x175)*x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = INT16_MAX;
	volatile int64_t x178 = -21753LL;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = -36275733;

    t44 = (((x177%x178)==x179)*x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MAX;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t45 = 1;

    t45 = (((x181%x182)==x183)*x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MIN;
	uint8_t x186 = 87U;
	volatile int64_t x187 = INT64_MAX;
	uint8_t x188 = 3U;
	int32_t t46 = 1260;

    t46 = (((x185%x186)==x187)*x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	volatile int8_t x190 = -7;
	uint64_t x192 = UINT64_MAX;

    t47 = (((x189%x190)==x191)*x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	volatile int32_t t48 = 63;

    t48 = (((x193%x194)==x195)*x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	uint32_t x199 = UINT32_MAX;
	static int16_t x200 = -1;
	static volatile int32_t t49 = 3298;

    t49 = (((x197%x198)==x199)*x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	volatile int64_t x203 = INT64_MAX;
	int16_t x204 = -451;
	volatile int32_t t50 = 1053237160;

    t50 = (((x201%x202)==x203)*x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 3727LLU;
	uint8_t x206 = 2U;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t51 = -47148;

    t51 = (((x205%x206)==x207)*x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 2719994LLU;
	uint32_t x211 = 187841U;
	int32_t x212 = INT32_MAX;

    t52 = (((x209%x210)==x211)*x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = -5;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;

    t53 = (((x217%x218)==x219)*x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = -1;
	int64_t x224 = -1LL;
	int64_t t54 = 269LL;

    t54 = (((x221%x222)==x223)*x224);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	uint8_t x227 = 26U;
	volatile int16_t x228 = INT16_MIN;

    t55 = (((x225%x226)==x227)*x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = -42LL;
	int64_t x231 = -1LL;
	static uint32_t x232 = 305U;
	uint32_t t56 = 25705U;

    t56 = (((x229%x230)==x231)*x232);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x237 = UINT64_MAX;
	uint16_t x238 = 311U;
	volatile uint16_t x239 = UINT16_MAX;
	static uint32_t x240 = UINT32_MAX;
	uint32_t t57 = 1785378641U;

    t57 = (((x237%x238)==x239)*x240);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x243 = -1LL;
	volatile uint16_t x244 = 2U;
	volatile int32_t t58 = 92773067;

    t58 = (((x241%x242)==x243)*x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MAX;
	int16_t x248 = -1906;
	static volatile int32_t t59 = -9;

    t59 = (((x245%x246)==x247)*x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x249 = 5U;
	static uint64_t x250 = 287738497215576LLU;
	int32_t x252 = INT32_MAX;
	int32_t t60 = 0;

    t60 = (((x249%x250)==x251)*x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = -1;
	volatile int32_t x255 = INT32_MAX;
	volatile uint64_t t61 = 16141533032556LLU;

    t61 = (((x253%x254)==x255)*x256);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x257 = 0U;
	uint64_t x258 = 3869785853894819976LLU;
	static uint64_t x259 = UINT64_MAX;
	int8_t x260 = -1;
	int32_t t62 = -16554;

    t62 = (((x257%x258)==x259)*x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	static int8_t x262 = 24;
	static uint64_t x263 = 514169347660543LLU;
	static volatile uint64_t x264 = 788LLU;
	volatile uint64_t t63 = 3337LLU;

    t63 = (((x261%x262)==x263)*x264);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	static int64_t x268 = 5090LL;
	int64_t t64 = 36529029LL;

    t64 = (((x265%x266)==x267)*x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t t65 = 173486;

    t65 = (((x273%x274)==x275)*x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = 2;
	volatile uint32_t x279 = 19416U;
	volatile int64_t x280 = INT64_MAX;
	volatile int64_t t66 = 317253022975814534LL;

    t66 = (((x277%x278)==x279)*x280);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x282 = INT64_MAX;
	volatile int16_t x283 = -1;
	int64_t x284 = INT64_MIN;

    t67 = (((x281%x282)==x283)*x284);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = INT64_MAX;
	static int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -14;
	int32_t t68 = 216293173;

    t68 = (((x285%x286)==x287)*x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x289 = 115U;
	int16_t x290 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t69 = -3;

    t69 = (((x289%x290)==x291)*x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = 71197861U;
	int8_t x294 = INT8_MIN;
	static uint32_t x296 = UINT32_MAX;
	uint32_t t70 = 913238U;

    t70 = (((x293%x294)==x295)*x296);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x299 = INT8_MAX;
	int16_t x300 = -647;
	static int32_t t71 = -2003;

    t71 = (((x297%x298)==x299)*x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x302 = -1;
	int64_t t72 = -68901623309763LL;

    t72 = (((x301%x302)==x303)*x304);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = INT32_MAX;
	uint8_t x307 = 55U;
	uint16_t x308 = 27U;
	int32_t t73 = -92885212;

    t73 = (((x305%x306)==x307)*x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 0U;

    t74 = (((x309%x310)==x311)*x312);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x313 = 81U;
	int64_t x315 = 34165358876839LL;
	volatile int64_t x316 = INT64_MIN;

    t75 = (((x313%x314)==x315)*x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x317 = 51U;
	volatile int8_t x319 = 6;
	int8_t x320 = INT8_MAX;
	static volatile int32_t t76 = 12;

    t76 = (((x317%x318)==x319)*x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x321 = UINT64_MAX;
	uint16_t x323 = UINT16_MAX;
	uint64_t x324 = 558607LLU;
	uint64_t t77 = 123110265241LLU;

    t77 = (((x321%x322)==x323)*x324);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x325 = INT32_MAX;
	static int8_t x326 = 3;
	uint16_t x327 = 719U;
	uint8_t x328 = 1U;
	volatile int32_t t78 = 13;

    t78 = (((x325%x326)==x327)*x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x329 = 144523190939565LL;
	static int16_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = 3924;
	int32_t t79 = -115990301;

    t79 = (((x329%x330)==x331)*x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	volatile int8_t x334 = INT8_MIN;
	volatile uint8_t x335 = 50U;
	volatile int32_t x336 = 7053793;
	int32_t t80 = 219296058;

    t80 = (((x333%x334)==x335)*x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = -22259098955LL;
	int16_t x338 = -1;
	int8_t x339 = 1;

    t81 = (((x337%x338)==x339)*x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x341 = 163;
	static int32_t x342 = -1;
	uint16_t x343 = UINT16_MAX;

    t82 = (((x341%x342)==x343)*x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x346 = UINT32_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t83 = 10730;

    t83 = (((x345%x346)==x347)*x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = UINT32_MAX;
	static volatile uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 120U;
	uint64_t x352 = 72821010394LLU;
	volatile uint64_t t84 = 844058867752533LLU;

    t84 = (((x349%x350)==x351)*x352);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x353 = 0U;
	int32_t x354 = -1;
	uint64_t x356 = 536399246450301LLU;

    t85 = (((x353%x354)==x355)*x356);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 1136584LLU;
	int32_t x359 = -63;
	int16_t x360 = INT16_MIN;
	volatile int32_t t86 = -194259392;

    t86 = (((x357%x358)==x359)*x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MIN;
	uint16_t x362 = 48U;
	static uint8_t x363 = UINT8_MAX;
	volatile int32_t t87 = 4596290;

    t87 = (((x361%x362)==x363)*x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = -1;
	int32_t x366 = -1;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	int32_t t88 = -2073575;

    t88 = (((x365%x366)==x367)*x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x370 = 1827365255U;
	static uint16_t x371 = UINT16_MAX;
	int8_t x372 = 5;
	int32_t t89 = 486;

    t89 = (((x369%x370)==x371)*x372);

    if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = 195;
	int64_t x374 = -11543852100LL;
	uint8_t x375 = 127U;
	int8_t x376 = INT8_MIN;
	int32_t t90 = 3;

    t90 = (((x373%x374)==x375)*x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x377 = -12;
	volatile int32_t x378 = 10726408;
	int32_t x379 = 631;

    t91 = (((x377%x378)==x379)*x380);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x381 = INT64_MIN;
	static uint8_t x383 = 102U;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t92 = 11;

    t92 = (((x381%x382)==x383)*x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	int32_t x387 = -9675477;
	int16_t x388 = INT16_MAX;
	volatile int32_t t93 = 5494;

    t93 = (((x385%x386)==x387)*x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MAX;
	uint8_t x391 = 7U;
	int32_t x392 = INT32_MAX;
	volatile int32_t t94 = -1936;

    t94 = (((x389%x390)==x391)*x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = -1;
	int8_t x395 = 0;
	volatile uint8_t x396 = 17U;
	int32_t t95 = 4;

    t95 = (((x393%x394)==x395)*x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int64_t x400 = -1LL;
	static volatile int64_t t96 = 40455158980LL;

    t96 = (((x397%x398)==x399)*x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x402 = 49U;
	int8_t x403 = 24;
	volatile int32_t x404 = INT32_MIN;
	static int32_t t97 = -43172;

    t97 = (((x401%x402)==x403)*x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = 0;
	volatile int64_t t98 = -8LL;

    t98 = (((x405%x406)==x407)*x408);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x410 = UINT8_MAX;
	int8_t x411 = 8;
	uint32_t x412 = 842141U;
	uint32_t t99 = 6U;

    t99 = (((x409%x410)==x411)*x412);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x413 = INT8_MIN;
	static int16_t x414 = -53;
	int16_t x415 = INT16_MIN;
	int8_t x416 = 15;
	int32_t t100 = -11746;

    t100 = (((x413%x414)==x415)*x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x417 = INT16_MIN;
	static int8_t x418 = -1;
	uint16_t x419 = 18U;

    t101 = (((x417%x418)==x419)*x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x421 = 3827U;
	uint64_t x422 = 5116957592608LLU;
	static int16_t x423 = -1;
	int32_t x424 = INT32_MIN;
	int32_t t102 = 1428727;

    t102 = (((x421%x422)==x423)*x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 2858U;
	int8_t x426 = INT8_MAX;
	int64_t x427 = -15LL;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t103 = 6783LLU;

    t103 = (((x425%x426)==x427)*x428);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x429 = UINT16_MAX;
	int32_t x430 = -41476884;
	int32_t x431 = -1;
	int32_t x432 = -1;

    t104 = (((x429%x430)==x431)*x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MIN;
	volatile int16_t x435 = INT16_MIN;
	int32_t t105 = -587436;

    t105 = (((x433%x434)==x435)*x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x437 = 3;
	static int32_t x438 = -8902;
	int16_t x440 = INT16_MIN;
	int32_t t106 = 589188277;

    t106 = (((x437%x438)==x439)*x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x442 = INT8_MIN;
	int16_t x443 = -1872;
	volatile int16_t x444 = INT16_MIN;

    t107 = (((x441%x442)==x443)*x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x446 = 4U;
	int32_t x447 = INT32_MIN;
	volatile int32_t t108 = -3;

    t108 = (((x445%x446)==x447)*x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x449 = 3407U;
	static int16_t x450 = INT16_MIN;
	static int16_t x451 = INT16_MAX;
	int8_t x452 = -1;
	int32_t t109 = 2;

    t109 = (((x449%x450)==x451)*x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x453 = 11;
	uint16_t x454 = UINT16_MAX;
	static volatile uint16_t x455 = 489U;
	uint32_t x456 = 62326U;

    t110 = (((x453%x454)==x455)*x456);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x458 = -974960LL;
	int64_t x459 = INT64_MIN;
	static int8_t x460 = INT8_MAX;
	static int32_t t111 = 1062356285;

    t111 = (((x457%x458)==x459)*x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	volatile int8_t x462 = INT8_MIN;
	static int8_t x464 = -1;
	int32_t t112 = 66746113;

    t112 = (((x461%x462)==x463)*x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = 1;
	static volatile int16_t x466 = -60;
	volatile uint64_t x467 = 1LLU;
	int32_t x468 = -1;
	static volatile int32_t t113 = -14408454;

    t113 = (((x465%x466)==x467)*x468);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = INT64_MIN;
	uint16_t x470 = 1477U;
	static volatile uint32_t x471 = 2176U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t114 = -523250913;

    t114 = (((x469%x470)==x471)*x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x474 = INT8_MIN;
	volatile uint32_t x475 = 4U;
	volatile int32_t t115 = -3;

    t115 = (((x473%x474)==x475)*x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = 5;
	int16_t x478 = -182;
	int64_t t116 = -464866668672549LL;

    t116 = (((x477%x478)==x479)*x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x482 = -1;
	volatile int16_t x483 = INT16_MAX;
	static int8_t x484 = INT8_MAX;
	static int32_t t117 = -215102;

    t117 = (((x481%x482)==x483)*x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x485 = -1608;
	int64_t x486 = -3613790LL;
	int8_t x487 = -1;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t118 = 50;

    t118 = (((x485%x486)==x487)*x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x491 = 5;
	int16_t x492 = -1;
	static int32_t t119 = -22354086;

    t119 = (((x489%x490)==x491)*x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x495 = INT8_MAX;
	int16_t x496 = -1;
	int32_t t120 = -28687;

    t120 = (((x493%x494)==x495)*x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x497 = UINT16_MAX;
	uint32_t x498 = UINT32_MAX;
	int64_t x500 = INT64_MAX;

    t121 = (((x497%x498)==x499)*x500);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x502 = -8;
	volatile int32_t x503 = -1;
	int32_t t122 = 0;

    t122 = (((x501%x502)==x503)*x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	int64_t x506 = INT64_MAX;
	int16_t x508 = INT16_MAX;
	int32_t t123 = -301757;

    t123 = (((x505%x506)==x507)*x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x509 = UINT32_MAX;
	int8_t x510 = 58;
	uint64_t x511 = UINT64_MAX;
	static uint8_t x512 = 5U;
	int32_t t124 = -99991;

    t124 = (((x509%x510)==x511)*x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x513 = UINT8_MAX;
	static int16_t x514 = INT16_MAX;
	int32_t x515 = INT32_MIN;
	int8_t x516 = INT8_MIN;

    t125 = (((x513%x514)==x515)*x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x518 = INT16_MAX;
	static int32_t x519 = -477;
	static uint16_t x520 = 19545U;

    t126 = (((x517%x518)==x519)*x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MAX;
	int64_t x522 = -1LL;
	int16_t x523 = INT16_MIN;
	uint8_t x524 = 1U;

    t127 = (((x521%x522)==x523)*x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = -2;

    t128 = (((x525%x526)==x527)*x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x530 = 123634650;
	uint64_t x531 = 2002LLU;
	uint64_t x532 = UINT64_MAX;
	uint64_t t129 = 85LLU;

    t129 = (((x529%x530)==x531)*x532);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x533 = 5;
	uint64_t x534 = 1377LLU;
	int64_t x535 = 287588429035388LL;
	int64_t x536 = -1LL;

    t130 = (((x533%x534)==x535)*x536);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x537 = UINT32_MAX;
	int8_t x539 = 0;
	static uint8_t x540 = UINT8_MAX;
	int32_t t131 = -5646802;

    t131 = (((x537%x538)==x539)*x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x541 = 37386988637LLU;
	volatile int32_t x542 = INT32_MIN;
	uint64_t x543 = 3LLU;
	int32_t x544 = -1;
	int32_t t132 = 0;

    t132 = (((x541%x542)==x543)*x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x545 = INT32_MIN;
	int16_t x546 = 15149;
	static int8_t x548 = INT8_MIN;
	int32_t t133 = 223400;

    t133 = (((x545%x546)==x547)*x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x550 = 730;
	static uint16_t x551 = UINT16_MAX;
	uint32_t x552 = UINT32_MAX;
	uint32_t t134 = 0U;

    t134 = (((x549%x550)==x551)*x552);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x554 = INT64_MIN;
	int16_t x555 = 1;

    t135 = (((x553%x554)==x555)*x556);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x557 = INT32_MAX;
	uint8_t x559 = UINT8_MAX;
	uint64_t x560 = 2247499561846834028LLU;
	static volatile uint64_t t136 = 4519036706143803195LLU;

    t136 = (((x557%x558)==x559)*x560);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = INT32_MIN;
	static uint8_t x563 = 5U;
	static int64_t x564 = 116LL;
	static int64_t t137 = 1LL;

    t137 = (((x561%x562)==x563)*x564);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x565 = INT64_MIN;
	volatile uint16_t x566 = 300U;
	int32_t x568 = INT32_MIN;
	volatile int32_t t138 = -679;

    t138 = (((x565%x566)==x567)*x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x569 = 0U;
	static volatile int32_t x570 = 2;
	static int8_t x571 = -1;
	volatile int32_t t139 = 35034;

    t139 = (((x569%x570)==x571)*x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = -1LL;
	static uint64_t x574 = 67703220LLU;
	int64_t x575 = -1LL;
	static volatile int64_t x576 = INT64_MIN;
	volatile int64_t t140 = 91877326945LL;

    t140 = (((x573%x574)==x575)*x576);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x577 = 7U;
	int8_t x578 = INT8_MAX;
	uint32_t x579 = UINT32_MAX;
	volatile int32_t t141 = 2934093;

    t141 = (((x577%x578)==x579)*x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = -6145;
	static int32_t x582 = INT32_MIN;
	uint32_t x583 = UINT32_MAX;
	static volatile int32_t t142 = 68808;

    t142 = (((x581%x582)==x583)*x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MIN;
	int8_t x588 = INT8_MAX;
	volatile int32_t t143 = -37760;

    t143 = (((x585%x586)==x587)*x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = -1;
	int32_t t144 = 78;

    t144 = (((x589%x590)==x591)*x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x593 = UINT64_MAX;
	int64_t x596 = -1LL;
	int64_t t145 = 26646LL;

    t145 = (((x593%x594)==x595)*x596);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x598 = 57;
	int16_t x599 = INT16_MAX;
	int32_t x600 = INT32_MAX;

    t146 = (((x597%x598)==x599)*x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x602 = INT16_MIN;
	int16_t x603 = INT16_MIN;
	volatile int32_t x604 = -4318055;
	volatile int32_t t147 = 0;

    t147 = (((x601%x602)==x603)*x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x605 = 1602U;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = UINT8_MAX;
	static volatile int8_t x608 = INT8_MIN;
	volatile int32_t t148 = -710;

    t148 = (((x605%x606)==x607)*x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x610 = -1;
	int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	int64_t t149 = -1LL;

    t149 = (((x609%x610)==x611)*x612);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x613 = INT32_MIN;
	uint32_t x614 = 18892619U;
	static int32_t x615 = 824816697;
	volatile int32_t x616 = -47;
	int32_t t150 = 7;

    t150 = (((x613%x614)==x615)*x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x617 = 90U;
	uint32_t x618 = UINT32_MAX;
	int64_t x619 = -15LL;
	int64_t x620 = INT64_MAX;
	volatile int64_t t151 = -1LL;

    t151 = (((x617%x618)==x619)*x620);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x621 = 2U;
	int16_t x623 = -41;
	int16_t x624 = -4481;

    t152 = (((x621%x622)==x623)*x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    

    t153 = (((x625%x626)==x627)*x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x629 = UINT64_MAX;
	int16_t x630 = 2254;
	volatile int32_t t154 = -239830850;

    t154 = (((x629%x630)==x631)*x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x633 = UINT8_MAX;
	int16_t x634 = -1;
	int16_t x635 = -1;
	uint32_t t155 = 9739U;

    t155 = (((x633%x634)==x635)*x636);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x641 = -1;
	int32_t x642 = INT32_MIN;
	int16_t x643 = INT16_MAX;
	int64_t t156 = 10LL;

    t156 = (((x641%x642)==x643)*x644);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x646 = -499257473043699LL;
	static int16_t x647 = INT16_MIN;
	int32_t x648 = -1;
	int32_t t157 = 30;

    t157 = (((x645%x646)==x647)*x648);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x649 = 116790469596LLU;
	int16_t x650 = INT16_MIN;
	static uint16_t x652 = UINT16_MAX;
	int32_t t158 = -1;

    t158 = (((x649%x650)==x651)*x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x653 = 2U;
	int16_t x654 = 3128;
	uint8_t x655 = 21U;
	volatile int32_t t159 = 413;

    t159 = (((x653%x654)==x655)*x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x658 = 4071U;
	int16_t x659 = INT16_MAX;
	uint8_t x660 = 17U;

    t160 = (((x657%x658)==x659)*x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x661 = INT16_MAX;
	int16_t x662 = -276;
	static int8_t x663 = INT8_MIN;
	volatile int16_t x664 = -1;
	volatile int32_t t161 = -59287;

    t161 = (((x661%x662)==x663)*x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x666 = INT32_MAX;
	uint16_t x667 = UINT16_MAX;
	int64_t x668 = INT64_MIN;
	static int64_t t162 = 59073104632427LL;

    t162 = (((x665%x666)==x667)*x668);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x669 = 3U;
	volatile int16_t x670 = INT16_MIN;
	volatile int64_t x671 = 808942558LL;
	static int32_t t163 = -124513566;

    t163 = (((x669%x670)==x671)*x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x673 = 7512U;
	uint64_t x675 = UINT64_MAX;
	int64_t x676 = 291700786236LL;
	int64_t t164 = 65377161915547811LL;

    t164 = (((x673%x674)==x675)*x676);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x679 = -1LL;
	int32_t t165 = 200275;

    t165 = (((x677%x678)==x679)*x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x681 = UINT8_MAX;
	static uint8_t x682 = 9U;
	static volatile uint16_t x683 = 3U;
	int64_t x684 = INT64_MIN;

    t166 = (((x681%x682)==x683)*x684);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x685 = 9246;
	volatile uint16_t x686 = 2U;
	uint64_t x687 = UINT64_MAX;
	int64_t x688 = INT64_MIN;
	volatile int64_t t167 = -15020988LL;

    t167 = (((x685%x686)==x687)*x688);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x690 = INT64_MIN;
	int64_t x691 = 17539LL;
	int32_t x692 = -137328268;
	static int32_t t168 = -50911843;

    t168 = (((x689%x690)==x691)*x692);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x693 = 2U;
	int16_t x694 = -1;
	int32_t x696 = INT32_MIN;
	volatile int32_t t169 = 0;

    t169 = (((x693%x694)==x695)*x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x697 = INT32_MIN;
	static int16_t x700 = 1;
	static volatile int32_t t170 = 90;

    t170 = (((x697%x698)==x699)*x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 1U;
	int32_t x702 = INT32_MAX;
	int64_t x703 = INT64_MIN;
	volatile int32_t t171 = 1;

    t171 = (((x701%x702)==x703)*x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x705 = 488U;
	int64_t x706 = -5LL;
	uint16_t x707 = UINT16_MAX;
	uint64_t x708 = 732433LLU;
	uint64_t t172 = 0LLU;

    t172 = (((x705%x706)==x707)*x708);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x710 = -1LL;
	uint8_t x712 = 0U;
	volatile int32_t t173 = 24366;

    t173 = (((x709%x710)==x711)*x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x714 = INT32_MAX;
	volatile int16_t x715 = -1;
	int64_t x716 = -1239662712LL;
	volatile int64_t t174 = -2947LL;

    t174 = (((x713%x714)==x715)*x716);

    if (t174 != -1239662712LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x717 = -1LL;
	uint16_t x719 = 6U;
	int16_t x720 = INT16_MAX;
	static int32_t t175 = -78586043;

    t175 = (((x717%x718)==x719)*x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x721 = 7955535U;
	int16_t x722 = -511;
	int8_t x723 = -1;
	int16_t x724 = -1;
	volatile int32_t t176 = -1;

    t176 = (((x721%x722)==x723)*x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x726 = INT16_MIN;
	volatile int16_t x727 = 13078;
	int64_t x728 = 216450506452LL;
	volatile int64_t t177 = -140602LL;

    t177 = (((x725%x726)==x727)*x728);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x729 = -1LL;
	static int32_t x730 = INT32_MIN;
	uint16_t x731 = 54U;
	volatile int32_t t178 = -221;

    t178 = (((x729%x730)==x731)*x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x733 = -61;
	int64_t x734 = INT64_MIN;
	volatile int8_t x735 = -1;
	static int64_t x736 = -35333840629041810LL;

    t179 = (((x733%x734)==x735)*x736);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x737 = 1153401084LLU;
	static uint64_t x738 = UINT64_MAX;
	int64_t x739 = -146700LL;
	int16_t x740 = 213;

    t180 = (((x737%x738)==x739)*x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x741 = INT64_MIN;
	int64_t x743 = 2184LL;
	volatile uint32_t x744 = UINT32_MAX;
	static uint32_t t181 = 2U;

    t181 = (((x741%x742)==x743)*x744);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x745 = 147673426051LL;
	uint16_t x748 = 25U;
	volatile int32_t t182 = 25238;

    t182 = (((x745%x746)==x747)*x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = -1;
	uint32_t x750 = 1222U;
	int32_t x751 = 1;
	volatile int32_t t183 = 22;

    t183 = (((x749%x750)==x751)*x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x754 = 11899932467440LLU;
	int16_t x755 = INT16_MIN;
	static int32_t t184 = 257185;

    t184 = (((x753%x754)==x755)*x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x758 = 2;
	int64_t x759 = INT64_MIN;

    t185 = (((x757%x758)==x759)*x760);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x761 = 7441499LL;
	static uint64_t x762 = 22190LLU;
	int64_t x763 = -1LL;

    t186 = (((x761%x762)==x763)*x764);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = INT32_MIN;
	volatile int16_t x766 = -1;
	int64_t x768 = 124LL;
	volatile int64_t t187 = -1832073637383LL;

    t187 = (((x765%x766)==x767)*x768);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x775 = INT64_MIN;
	volatile int8_t x776 = 1;
	int32_t t188 = 51948858;

    t188 = (((x773%x774)==x775)*x776);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x777 = 438844171U;
	int16_t x778 = -1;
	uint16_t x779 = 30092U;

    t189 = (((x777%x778)==x779)*x780);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x781 = INT32_MIN;
	uint8_t x782 = 45U;
	uint16_t x783 = 30100U;
	uint32_t x784 = 145598U;
	uint32_t t190 = 10117712U;

    t190 = (((x781%x782)==x783)*x784);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x785 = 1118524054U;
	static int32_t x786 = INT32_MAX;
	static volatile uint32_t x787 = UINT32_MAX;
	int16_t x788 = 697;

    t191 = (((x785%x786)==x787)*x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x789 = INT16_MAX;
	int64_t x790 = -28246LL;
	uint16_t x791 = 0U;
	uint64_t x792 = 6156689470383LLU;
	static uint64_t t192 = 1LLU;

    t192 = (((x789%x790)==x791)*x792);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x793 = -392577;
	int8_t x795 = INT8_MIN;
	static int32_t x796 = -1;
	volatile int32_t t193 = -876068279;

    t193 = (((x793%x794)==x795)*x796);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x797 = INT64_MIN;
	int64_t x798 = INT64_MAX;
	int32_t x800 = INT32_MIN;
	static int32_t t194 = -43066219;

    t194 = (((x797%x798)==x799)*x800);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x801 = INT64_MAX;
	int64_t x802 = 596LL;
	int16_t x804 = 3252;

    t195 = (((x801%x802)==x803)*x804);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x805 = -1;
	int64_t x806 = 6842260683252LL;
	int16_t x807 = INT16_MIN;
	int8_t x808 = -54;
	static int32_t t196 = -1762709;

    t196 = (((x805%x806)==x807)*x808);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x809 = INT64_MIN;
	static uint16_t x810 = 3604U;
	static volatile int16_t x811 = -1;
	volatile int16_t x812 = INT16_MIN;

    t197 = (((x809%x810)==x811)*x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x813 = -1;
	static int8_t x814 = -1;
	int64_t x816 = -1LL;
	int64_t t198 = -468927604809218LL;

    t198 = (((x813%x814)==x815)*x816);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = INT8_MAX;
	static int16_t x819 = INT16_MIN;
	int16_t x820 = -729;
	static int32_t t199 = 374285517;

    t199 = (((x817%x818)==x819)*x820);

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

