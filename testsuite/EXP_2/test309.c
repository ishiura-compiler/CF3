
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

int32_t x7 = INT32_MIN;
int16_t x15 = -1;
int8_t x16 = -1;
uint32_t x17 = 421U;
volatile uint64_t t5 = UINT64_MAX;
uint16_t x25 = UINT16_MAX;
volatile uint64_t x26 = 13702116LLU;
int32_t x35 = INT32_MIN;
volatile uint8_t x37 = 63U;
int32_t t10 = INT32_MAX;
uint8_t x47 = 14U;
volatile int8_t x50 = -1;
uint8_t x51 = 1U;
uint8_t x53 = 1U;
uint8_t x55 = UINT8_MAX;
int64_t x63 = INT64_MIN;
int64_t x69 = INT64_MAX;
volatile int64_t x70 = INT64_MAX;
uint64_t x77 = UINT64_MAX;
int32_t x82 = -1;
int8_t x98 = -1;
uint32_t x100 = UINT32_MAX;
volatile uint32_t t22 = 5882784U;
uint64_t x101 = 40834241231766LLU;
int8_t x106 = -1;
static uint8_t x109 = 92U;
static uint64_t x111 = 101621LLU;
static int32_t t25 = -326955;
uint64_t x121 = UINT64_MAX;
static uint32_t x123 = 45024U;
int16_t x137 = INT16_MAX;
uint64_t x142 = 496567LLU;
int32_t t32 = 63774;
int8_t x145 = INT8_MIN;
static uint16_t x150 = UINT16_MAX;
int16_t x153 = INT16_MAX;
volatile int32_t t35 = 132;
volatile int32_t x158 = -1891685;
static volatile int64_t x160 = 332371LL;
int64_t t36 = 70465470085495178LL;
int64_t x162 = 25360118903646LL;
static volatile int32_t t37 = 175984;
uint32_t x167 = 16231363U;
int8_t x177 = INT8_MIN;
int64_t x178 = -96LL;
volatile int64_t t42 = INT64_MIN;
static volatile uint64_t x187 = UINT64_MAX;
int64_t x188 = INT64_MIN;
int8_t x192 = -31;
int32_t t44 = -695231;
int32_t t45 = 5;
static int64_t x197 = INT64_MIN;
int64_t x202 = 32140292954LL;
static int32_t t50 = -13496;
int64_t x219 = -1LL;
uint8_t x223 = 23U;
volatile uint64_t x224 = UINT64_MAX;
static volatile int64_t x227 = INT64_MAX;
int64_t t53 = 16436LL;
int8_t x234 = INT8_MIN;
volatile int64_t x240 = INT64_MIN;
int16_t x241 = 2256;
int16_t x244 = INT16_MIN;
uint64_t x258 = 1811653231LLU;
int32_t x267 = -6633841;
int32_t x268 = INT32_MIN;
volatile int8_t x273 = -1;
uint8_t x278 = 16U;
static int16_t x279 = INT16_MIN;
uint8_t x283 = UINT8_MAX;
int16_t x289 = INT16_MIN;
volatile int32_t x291 = 94;
int64_t x298 = -1LL;
int8_t x305 = INT8_MIN;
int64_t t69 = 471099LL;
volatile int32_t t70 = -28338319;
static int64_t x318 = INT64_MIN;
static uint32_t x320 = UINT32_MAX;
static uint32_t x339 = UINT32_MAX;
static int8_t x340 = INT8_MIN;
int32_t t78 = 217202;
int16_t x345 = INT16_MAX;
static int8_t x349 = -2;
uint8_t x355 = 28U;
uint32_t x357 = 92759904U;
int16_t x362 = INT16_MAX;
uint64_t x363 = 168413002316082LLU;
uint8_t x364 = 4U;
uint8_t x366 = UINT8_MAX;
static uint64_t x367 = 117125LLU;
int8_t x371 = 54;
int16_t x372 = INT16_MAX;
uint8_t x374 = 10U;
int64_t x389 = INT64_MAX;
volatile int32_t t89 = -100754;
uint16_t x393 = 27335U;
static uint64_t x401 = 396049551190129LLU;
int8_t x404 = -7;
volatile int16_t x406 = -10;
uint64_t x409 = UINT64_MAX;
volatile int64_t x415 = -4501418423928LL;
uint16_t x417 = 114U;
int32_t t96 = 13682;
int32_t x432 = 220501258;
volatile int32_t x436 = 4467682;
int32_t t99 = -4;
static int16_t x437 = 20;
static int16_t x438 = INT16_MAX;
int16_t x443 = INT16_MIN;
static volatile int8_t x451 = INT8_MIN;
volatile int32_t x452 = -22004;
uint8_t x453 = 1U;
int8_t x462 = -56;
uint16_t x483 = 4U;
int16_t x485 = INT16_MAX;
int32_t t111 = INT32_MAX;
uint8_t x497 = 3U;
volatile uint8_t x502 = 11U;
volatile int8_t x507 = INT8_MIN;
volatile int32_t x508 = INT32_MIN;
static int8_t x509 = -11;
int32_t t117 = 30729;
int8_t x517 = INT8_MIN;
static int8_t x518 = 0;
int32_t x527 = INT32_MAX;
int16_t x530 = 117;
volatile int32_t t122 = 879;
static int32_t t123 = 476;
int8_t x548 = 0;
static int32_t x558 = -1;
int64_t x559 = 3362429LL;
int64_t x561 = INT64_MIN;
uint64_t x566 = UINT64_MAX;
int32_t x567 = -472673481;
uint16_t x572 = 15028U;
volatile int32_t t130 = -20623;
static int64_t x581 = -57985LL;
int16_t x589 = INT16_MIN;
volatile int32_t x593 = INT32_MAX;
volatile int8_t x594 = INT8_MIN;
int64_t x603 = INT64_MIN;
static int32_t x604 = -1;
volatile int32_t t135 = 108064;
static volatile int32_t t136 = 3247;
int16_t x611 = -2162;
int64_t x616 = -15403LL;
static uint8_t x638 = 3U;
int64_t x640 = 25974107886483823LL;
static int16_t x645 = INT16_MAX;
int64_t t143 = 9LL;
volatile int32_t x649 = -54050787;
uint8_t x664 = UINT8_MAX;
int8_t x667 = -43;
uint32_t x671 = 3U;
uint16_t x673 = 92U;
static int64_t x675 = INT64_MIN;
static int16_t x687 = INT16_MAX;
uint16_t x689 = 31U;
uint16_t x691 = 6723U;
int16_t x697 = -396;
uint8_t x700 = 2U;
uint64_t x705 = 4LLU;
volatile int32_t t156 = 123;
int32_t x717 = -1;
volatile uint8_t x725 = UINT8_MAX;
uint16_t x729 = 587U;
int64_t x732 = -1LL;
uint8_t x749 = 7U;
int16_t x752 = 2012;
int32_t t166 = -124507;
int32_t t167 = -1357;
volatile uint8_t x760 = UINT8_MAX;
static volatile int32_t t168 = 213665;
uint64_t x762 = 104271676537LLU;
static volatile int8_t x764 = INT8_MAX;
uint64_t x775 = UINT64_MAX;
int64_t t173 = 615489350610LL;
volatile int8_t x786 = INT8_MIN;
static int32_t x787 = -1;
uint16_t x796 = UINT16_MAX;
uint8_t x798 = UINT8_MAX;
static uint16_t x799 = 20U;
static uint16_t x800 = 18786U;
uint64_t x802 = UINT64_MAX;
uint8_t x806 = 12U;
volatile uint32_t x808 = 263186U;
uint64_t x810 = 566226494325878678LLU;
volatile int8_t x812 = INT8_MAX;
uint64_t x814 = 209321LLU;
int64_t x816 = INT64_MAX;
uint16_t x817 = 302U;
int64_t x841 = INT64_MAX;
int32_t t189 = 1126;
int8_t x867 = INT8_MAX;
static int32_t x875 = -5;
int64_t x877 = INT64_MAX;
int64_t x880 = INT64_MAX;
int64_t x882 = INT64_MIN;
static volatile uint64_t x883 = UINT64_MAX;
static uint16_t x885 = UINT16_MAX;
uint32_t x888 = 236314U;
volatile uint32_t t195 = 9901214U;
int64_t x893 = INT64_MIN;
static uint64_t t197 = 236LLU;
uint64_t x898 = 9228462519575LLU;
static int16_t x900 = 361;
uint32_t t199 = 78109490U;


void f0(void) {
    	int16_t x1 = 5946;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MAX;
	static int32_t x4 = -51336509;
	int32_t t0 = 64;

    t0 = ((x1>(x2-x3))+x4);

    if (t0 != -51336509) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	static int32_t x8 = -1;
	int32_t t1 = 530625325;

    t1 = ((x5>(x6-x7))+x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -1;
	static int64_t x10 = -1LL;
	static volatile uint32_t x11 = UINT32_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = 1;

    t2 = ((x9>(x10-x11))+x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	volatile int16_t x14 = INT16_MIN;
	int32_t t3 = 865;

    t3 = ((x13>(x14-x15))+x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 14154LL;
	uint16_t x19 = 3U;
	int32_t x20 = -1;
	int32_t t4 = -447;

    t4 = ((x17>(x18-x19))+x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 8113;
	int16_t x22 = INT16_MIN;
	int32_t x23 = -27018849;
	uint64_t x24 = UINT64_MAX;

    t5 = ((x21>(x22-x23))+x24);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = INT16_MAX;
	int16_t x28 = 1;
	volatile int32_t t6 = 14920605;

    t6 = ((x25>(x26-x27))+x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x29 = UINT32_MAX;
	uint8_t x30 = 43U;
	int16_t x31 = -549;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = -19141395LL;

    t7 = ((x29>(x30-x31))+x32);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = 5754370LL;
	static int8_t x34 = -1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 13601;

    t8 = ((x33>(x34-x35))+x36);

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = 555430;
	uint64_t x39 = 3726738711620072LLU;
	static int64_t x40 = INT64_MAX;
	volatile int64_t t9 = INT64_MAX;

    t9 = ((x37>(x38-x39))+x40);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	uint32_t x42 = 27U;
	static volatile uint8_t x43 = 11U;
	int32_t x44 = INT32_MAX;

    t10 = ((x41>(x42-x43))+x44);

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	uint8_t x46 = UINT8_MAX;
	uint8_t x48 = 1U;
	int32_t t11 = 655713;

    t11 = ((x45>(x46-x47))+x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 0U;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -783323;

    t12 = ((x49>(x50-x51))+x52);

    if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x54 = 1U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 995062862;

    t13 = ((x53>(x54-x55))+x56);

    if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 92U;
	int32_t x58 = -80572775;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = ((x57>(x58-x59))+x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = UINT64_MAX;
	int16_t x62 = -1;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -7826;

    t15 = ((x61>(x62-x63))+x64);

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = INT16_MIN;
	volatile int32_t x66 = 63;
	int64_t x67 = 181LL;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -38;

    t16 = ((x65>(x66-x67))+x68);

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x71 = 106462108419LL;
	int64_t x72 = -833LL;
	volatile int64_t t17 = 4091LL;

    t17 = ((x69>(x70-x71))+x72);

    if (t17 != -832LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	uint32_t x76 = UINT32_MAX;
	static uint32_t t18 = UINT32_MAX;

    t18 = ((x73>(x74-x75))+x76);

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x78 = -400662;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 996704;

    t19 = ((x77>(x78-x79))+x80);

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x81 = -34;
	uint64_t x83 = 71736828LLU;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 274LLU;

    t20 = ((x81>(x82-x83))+x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MIN;
	int64_t x94 = 14150314533406LL;
	volatile int8_t x95 = -1;
	static volatile int32_t x96 = INT32_MAX;
	int32_t t21 = INT32_MAX;

    t21 = ((x93>(x94-x95))+x96);

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = UINT8_MAX;
	int8_t x99 = INT8_MAX;

    t22 = ((x97>(x98-x99))+x100);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t23 = 2728429;

    t23 = ((x101>(x102-x103))+x104);

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MAX;
	volatile int32_t x107 = 134986567;
	uint16_t x108 = 7939U;
	volatile int32_t t24 = 166078;

    t24 = ((x105>(x106-x107))+x108);

    if (t24 != 7940) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = INT16_MAX;
	int32_t x112 = -789116163;

    t25 = ((x109>(x110-x111))+x112);

    if (t25 != -789116163) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = 873977860U;
	uint16_t x118 = 7017U;
	int16_t x119 = -51;
	int64_t x120 = INT64_MIN;
	static int64_t t26 = 600970LL;

    t26 = ((x117>(x118-x119))+x120);

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x122 = 6U;
	uint16_t x124 = 0U;
	int32_t t27 = -21406;

    t27 = ((x121>(x122-x123))+x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = 5;
	int8_t x126 = 46;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = 31U;
	volatile int32_t t28 = -3164797;

    t28 = ((x125>(x126-x127))+x128);

    if (t28 != 31) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = -2;
	int32_t t29 = -112604;

    t29 = ((x129>(x130-x131))+x132);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -1;
	int32_t x134 = -18437;
	int16_t x135 = INT16_MIN;
	static int32_t x136 = -1;
	volatile int32_t t30 = 0;

    t30 = ((x133>(x134-x135))+x136);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x138 = 1U;
	static volatile uint32_t x139 = UINT32_MAX;
	static int64_t x140 = -1LL;
	volatile int64_t t31 = -11LL;

    t31 = ((x137>(x138-x139))+x140);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x141 = INT64_MIN;
	int32_t x143 = -1;
	int32_t x144 = INT32_MIN;

    t32 = ((x141>(x142-x143))+x144);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	static int32_t x148 = INT32_MIN;
	static volatile int32_t t33 = -3918;

    t33 = ((x145>(x146-x147))+x148);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x149 = 32355U;
	volatile int8_t x151 = INT8_MIN;
	volatile uint16_t x152 = 374U;
	static volatile int32_t t34 = -3419540;

    t34 = ((x149>(x150-x151))+x152);

    if (t34 != 374) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x154 = -1LL;
	static int8_t x155 = -4;
	int32_t x156 = INT32_MIN;

    t35 = ((x153>(x154-x155))+x156);

    if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	int32_t x159 = -19102466;

    t36 = ((x157>(x158-x159))+x160);

    if (t36 != 332371LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = UINT16_MAX;

    t37 = ((x161>(x162-x163))+x164);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MAX;
	static volatile int32_t x166 = INT32_MAX;
	uint16_t x168 = 5855U;
	volatile int32_t t38 = -2;

    t38 = ((x165>(x166-x167))+x168);

    if (t38 != 5855) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x169 = -1;
	static uint32_t x170 = 155774080U;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t39 = 81;

    t39 = ((x169>(x170-x171))+x172);

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = -1LL;
	int16_t x174 = -7;
	static uint16_t x175 = 1340U;
	volatile int64_t x176 = -1LL;
	volatile int64_t t40 = -2LL;

    t40 = ((x173>(x174-x175))+x176);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x179 = 128;
	uint16_t x180 = 15U;
	int32_t t41 = 1993;

    t41 = ((x177>(x178-x179))+x180);

    if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MIN;
	static int32_t x182 = -1;
	uint32_t x183 = 5974U;
	int64_t x184 = INT64_MIN;

    t42 = ((x181>(x182-x183))+x184);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	volatile int64_t t43 = INT64_MIN;

    t43 = ((x185>(x186-x187))+x188);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -129671845900342794LL;

    t44 = ((x189>(x190-x191))+x192);

    if (t44 != -31) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x193 = INT16_MIN;
	static uint32_t x194 = 1U;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = INT32_MIN;

    t45 = ((x193>(x194-x195))+x196);

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t46 = -11;

    t46 = ((x197>(x198-x199))+x200);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = 1387LL;
	volatile int8_t x203 = INT8_MIN;
	static uint32_t x204 = 95702489U;
	volatile uint32_t t47 = 6046U;

    t47 = ((x201>(x202-x203))+x204);

    if (t47 != 95702489U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MAX;
	static int64_t x208 = INT64_MIN;
	static int64_t t48 = INT64_MIN;

    t48 = ((x205>(x206-x207))+x208);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = 1395;
	volatile uint16_t x210 = UINT16_MAX;
	uint16_t x211 = UINT16_MAX;
	static volatile uint16_t x212 = 2679U;
	static int32_t t49 = 12493631;

    t49 = ((x209>(x210-x211))+x212);

    if (t49 != 2680) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MAX;
	int64_t x214 = -1LL;
	int8_t x215 = -4;
	int16_t x216 = INT16_MIN;

    t50 = ((x213>(x214-x215))+x216);

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x217 = -1242008102LL;
	volatile int8_t x218 = INT8_MIN;
	static int64_t x220 = INT64_MIN;
	int64_t t51 = INT64_MIN;

    t51 = ((x217>(x218-x219))+x220);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x221 = 13185U;
	volatile uint32_t x222 = 4477U;
	volatile uint64_t t52 = 2016172612LLU;

    t52 = ((x221>(x222-x223))+x224);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = UINT32_MAX;
	int64_t x228 = INT64_MIN;

    t53 = ((x225>(x226-x227))+x228);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	static int32_t t54 = INT32_MIN;

    t54 = ((x233>(x234-x235))+x236);

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = -1;
	volatile int8_t x238 = -1;
	static int16_t x239 = INT16_MIN;
	int64_t t55 = INT64_MIN;

    t55 = ((x237>(x238-x239))+x240);

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int32_t t56 = 15;

    t56 = ((x241>(x242-x243))+x244);

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x249 = 4159978LLU;
	int32_t x250 = 220086;
	int32_t x251 = -2;
	int8_t x252 = 0;
	int32_t t57 = -818945;

    t57 = ((x249>(x250-x251))+x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = -315475789633LL;
	int64_t x259 = INT64_MAX;
	int16_t x260 = -1;
	volatile int32_t t58 = 50418;

    t58 = ((x257>(x258-x259))+x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x261 = 20U;
	int32_t x262 = -3;
	static uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t59 = -92;

    t59 = ((x261>(x262-x263))+x264);

    if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = INT8_MIN;
	static int32_t x266 = -1;
	volatile int32_t t60 = INT32_MIN;

    t60 = ((x265>(x266-x267))+x268);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x269 = INT64_MIN;
	static int32_t x270 = -1;
	uint64_t x271 = 220LLU;
	volatile uint64_t x272 = 1977508865LLU;
	volatile uint64_t t61 = 4LLU;

    t61 = ((x269>(x270-x271))+x272);

    if (t61 != 1977508865LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x274 = -1;
	static int64_t x275 = INT64_MIN;
	volatile int8_t x276 = 4;
	int32_t t62 = -178432022;

    t62 = ((x273>(x274-x275))+x276);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = -1LL;
	static volatile uint32_t x280 = 31U;
	uint32_t t63 = 1U;

    t63 = ((x277>(x278-x279))+x280);

    if (t63 != 31U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x281 = 6U;
	int32_t x282 = INT32_MAX;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t64 = INT32_MIN;

    t64 = ((x281>(x282-x283))+x284);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = INT32_MIN;
	int64_t x286 = 55985449LL;
	int8_t x287 = -15;
	static volatile int16_t x288 = 25;
	volatile int32_t t65 = -1519919;

    t65 = ((x285>(x286-x287))+x288);

    if (t65 != 25) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x290 = 69U;
	uint16_t x292 = UINT16_MAX;
	static int32_t t66 = -324477028;

    t66 = ((x289>(x290-x291))+x292);

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x293 = 3938U;
	int16_t x294 = INT16_MAX;
	static uint16_t x295 = 20U;
	uint16_t x296 = 27245U;
	int32_t t67 = 501558;

    t67 = ((x293>(x294-x295))+x296);

    if (t67 != 27245) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x297 = INT16_MIN;
	int8_t x299 = 0;
	int64_t x300 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

    t68 = ((x297>(x298-x299))+x300);

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x306 = 935;
	volatile uint32_t x307 = UINT32_MAX;
	int64_t x308 = -1LL;

    t69 = ((x305>(x306-x307))+x308);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x309 = -1;
	uint8_t x310 = 17U;
	uint8_t x311 = 34U;
	int8_t x312 = -1;

    t70 = ((x309>(x310-x311))+x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x313 = 6390736U;
	uint32_t x314 = UINT32_MAX;
	uint32_t x315 = 596226U;
	uint64_t x316 = 8014LLU;
	uint64_t t71 = 2072334201914375LLU;

    t71 = ((x313>(x314-x315))+x316);

    if (t71 != 8014LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x317 = 6LLU;
	static volatile uint64_t x319 = 4900682092LLU;
	static uint32_t t72 = UINT32_MAX;

    t72 = ((x317>(x318-x319))+x320);

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MAX;
	static int32_t x322 = 98590;
	static int64_t x323 = INT64_MAX;
	int8_t x324 = -1;
	int32_t t73 = 7675018;

    t73 = ((x321>(x322-x323))+x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x325 = 15U;
	volatile int32_t x326 = -1;
	int32_t x327 = 1;
	int8_t x328 = INT8_MAX;
	int32_t t74 = -462083208;

    t74 = ((x325>(x326-x327))+x328);

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MIN;
	static int32_t x331 = INT32_MIN;
	static int32_t x332 = INT32_MIN;
	int32_t t75 = -1;

    t75 = ((x329>(x330-x331))+x332);

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = 30U;
	static uint64_t x335 = 15665486708019866LLU;
	int32_t x336 = INT32_MAX;
	static volatile int32_t t76 = INT32_MAX;

    t76 = ((x333>(x334-x335))+x336);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x337 = 51U;
	int16_t x338 = -1;
	int32_t t77 = 72458;

    t77 = ((x337>(x338-x339))+x340);

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x341 = INT8_MIN;
	int8_t x342 = -1;
	uint64_t x343 = 18LLU;
	uint16_t x344 = 32U;

    t78 = ((x341>(x342-x343))+x344);

    if (t78 != 32) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x346 = 1965589LL;
	int32_t x347 = -1;
	uint8_t x348 = 56U;
	static volatile int32_t t79 = 1430970;

    t79 = ((x345>(x346-x347))+x348);

    if (t79 != 56) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x350 = 22;
	static volatile int8_t x351 = -1;
	volatile int16_t x352 = INT16_MIN;
	static int32_t t80 = -3197;

    t80 = ((x349>(x350-x351))+x352);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x353 = 33LLU;
	int8_t x354 = INT8_MAX;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t81 = UINT64_MAX;

    t81 = ((x353>(x354-x355))+x356);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x358 = UINT32_MAX;
	volatile int32_t x359 = INT32_MIN;
	uint8_t x360 = 12U;
	int32_t t82 = -525779603;

    t82 = ((x357>(x358-x359))+x360);

    if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = INT64_MIN;
	volatile int32_t t83 = -7;

    t83 = ((x361>(x362-x363))+x364);

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x365 = 323503319U;
	int64_t x368 = INT64_MAX;
	int64_t t84 = INT64_MAX;

    t84 = ((x365>(x366-x367))+x368);

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 14U;
	static int32_t t85 = 932;

    t85 = ((x369>(x370-x371))+x372);

    if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x373 = INT8_MIN;
	uint32_t x375 = UINT32_MAX;
	static volatile uint64_t x376 = UINT64_MAX;
	uint64_t t86 = 77503145879872380LLU;

    t86 = ((x373>(x374-x375))+x376);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x381 = 1U;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MAX;
	int32_t x384 = INT32_MAX;
	int32_t t87 = INT32_MAX;

    t87 = ((x381>(x382-x383))+x384);

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x385 = 154U;
	static volatile int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MAX;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t88 = 13014;

    t88 = ((x385>(x386-x387))+x388);

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x390 = 0U;
	volatile int8_t x391 = -1;
	int32_t x392 = INT32_MIN;

    t89 = ((x389>(x390-x391))+x392);

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x394 = -699;
	static int16_t x395 = INT16_MAX;
	int64_t x396 = -1LL;
	volatile int64_t t90 = 166651413535213LL;

    t90 = ((x393>(x394-x395))+x396);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x397 = INT64_MIN;
	uint32_t x398 = UINT32_MAX;
	int32_t x399 = -897;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t91 = INT32_MAX;

    t91 = ((x397>(x398-x399))+x400);

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x402 = 1U;
	int64_t x403 = -1LL;
	volatile int32_t t92 = -41640641;

    t92 = ((x401>(x402-x403))+x404);

    if (t92 != -6) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = INT32_MIN;
	uint16_t x407 = 5U;
	int64_t x408 = INT64_MIN;
	volatile int64_t t93 = INT64_MIN;

    t93 = ((x405>(x406-x407))+x408);

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x410 = 3U;
	uint8_t x411 = 12U;
	uint32_t x412 = 1U;
	volatile uint32_t t94 = 261433111U;

    t94 = ((x409>(x410-x411))+x412);

    if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x413 = INT32_MAX;
	int8_t x414 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t95 = INT64_MIN;

    t95 = ((x413>(x414-x415))+x416);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint64_t x418 = 2093305982199LLU;
	static int16_t x419 = INT16_MIN;
	uint16_t x420 = 7U;

    t96 = ((x417>(x418-x419))+x420);

    if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x421 = 5LLU;
	static uint32_t x422 = 234U;
	uint8_t x423 = 3U;
	volatile uint32_t x424 = 154004127U;
	uint32_t t97 = 827349731U;

    t97 = ((x421>(x422-x423))+x424);

    if (t97 != 154004127U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x429 = INT16_MAX;
	uint32_t x430 = 15028254U;
	static int16_t x431 = INT16_MAX;
	volatile int32_t t98 = -7644;

    t98 = ((x429>(x430-x431))+x432);

    if (t98 != 220501258) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x433 = -1;
	int32_t x434 = INT32_MAX;
	uint64_t x435 = 5849314703LLU;

    t99 = ((x433>(x434-x435))+x436);

    if (t99 != 4467683) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x439 = -1LL;
	uint32_t x440 = 1044058326U;
	volatile uint32_t t100 = 3U;

    t100 = ((x437>(x438-x439))+x440);

    if (t100 != 1044058326U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x441 = -7;
	static volatile uint16_t x442 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t101 = 846;

    t101 = ((x441>(x442-x443))+x444);

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = 1072834025202LL;
	volatile int16_t x447 = 2;
	static int16_t x448 = -1;
	static volatile int32_t t102 = -165179;

    t102 = ((x445>(x446-x447))+x448);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x449 = -1;
	static int32_t x450 = INT32_MIN;
	static int32_t t103 = 85113;

    t103 = ((x449>(x450-x451))+x452);

    if (t103 != -22003) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	int16_t x456 = -1;
	volatile int32_t t104 = 149336;

    t104 = ((x453>(x454-x455))+x456);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x457 = INT32_MAX;
	static int16_t x458 = 6;
	int64_t x459 = 439488910LL;
	int8_t x460 = 2;
	int32_t t105 = 18;

    t105 = ((x457>(x458-x459))+x460);

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x461 = 1672527488U;
	static int8_t x463 = -1;
	int64_t x464 = INT64_MIN;
	volatile int64_t t106 = INT64_MIN;

    t106 = ((x461>(x462-x463))+x464);

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x465 = -1;
	int16_t x466 = -1;
	static uint8_t x467 = 122U;
	uint8_t x468 = 6U;
	volatile int32_t t107 = -1801078;

    t107 = ((x465>(x466-x467))+x468);

    if (t107 != 7) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x470 = -1;
	static uint32_t x471 = UINT32_MAX;
	static int8_t x472 = INT8_MIN;
	static volatile int32_t t108 = -10525;

    t108 = ((x469>(x470-x471))+x472);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x473 = 42U;
	static uint64_t x474 = 4857012LLU;
	int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	int32_t t109 = 230991873;

    t109 = ((x473>(x474-x475))+x476);

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x481 = 2866061LL;
	volatile int64_t x482 = INT64_MAX;
	volatile int16_t x484 = INT16_MIN;
	int32_t t110 = 5;

    t110 = ((x481>(x482-x483))+x484);

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x486 = INT16_MAX;
	uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MAX;

    t111 = ((x485>(x486-x487))+x488);

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x493 = 91;
	int8_t x494 = -19;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MIN;
	volatile int32_t t112 = -3797;

    t112 = ((x493>(x494-x495))+x496);

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x498 = -1;
	static volatile uint8_t x499 = 0U;
	static int64_t x500 = -1LL;
	volatile int64_t t113 = -134665240263884184LL;

    t113 = ((x497>(x498-x499))+x500);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x501 = 0;
	int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	volatile int32_t t114 = -599;

    t114 = ((x501>(x502-x503))+x504);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint64_t x506 = 2LLU;
	volatile int32_t t115 = -697195;

    t115 = ((x505>(x506-x507))+x508);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x510 = UINT16_MAX;
	volatile uint64_t x511 = 30722LLU;
	uint64_t x512 = 21260940160LLU;
	volatile uint64_t t116 = 3635322806LLU;

    t116 = ((x509>(x510-x511))+x512);

    if (t116 != 21260940161LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x513 = -1LL;
	int32_t x514 = INT32_MAX;
	int16_t x515 = 50;
	int16_t x516 = 9;

    t117 = ((x513>(x514-x515))+x516);

    if (t117 != 9) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x519 = 796619565634631LLU;
	uint8_t x520 = 31U;
	int32_t t118 = -1558893;

    t118 = ((x517>(x518-x519))+x520);

    if (t118 != 32) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x521 = -1;
	uint64_t x522 = 2LLU;
	uint64_t x523 = 14LLU;
	static uint8_t x524 = 6U;
	int32_t t119 = 1;

    t119 = ((x521>(x522-x523))+x524);

    if (t119 != 7) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x525 = INT32_MAX;
	static volatile uint32_t x526 = 1U;
	static uint32_t x528 = 10U;
	volatile uint32_t t120 = 9783U;

    t120 = ((x525>(x526-x527))+x528);

    if (t120 != 10U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x529 = -1212;
	static int64_t x531 = -1704276460497LL;
	int8_t x532 = INT8_MIN;
	volatile int32_t t121 = -1488852;

    t121 = ((x529>(x530-x531))+x532);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x533 = 132393492182LLU;
	static uint16_t x534 = 8U;
	volatile uint8_t x535 = 58U;
	int16_t x536 = INT16_MIN;

    t122 = ((x533>(x534-x535))+x536);

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x537 = 3975LLU;
	int32_t x538 = -36366368;
	static int32_t x539 = -1;
	int8_t x540 = INT8_MIN;

    t123 = ((x537>(x538-x539))+x540);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x541 = 0;
	int64_t x542 = -1929469257731752LL;
	int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	int32_t t124 = -18113;

    t124 = ((x541>(x542-x543))+x544);

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x545 = INT64_MAX;
	volatile uint64_t x546 = 3700LLU;
	int32_t x547 = 23103599;
	int32_t t125 = -357280;

    t125 = ((x545>(x546-x547))+x548);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x553 = 8;
	uint8_t x554 = UINT8_MAX;
	static int32_t x555 = -39;
	int64_t x556 = INT64_MAX;
	volatile int64_t t126 = INT64_MAX;

    t126 = ((x553>(x554-x555))+x556);

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = -1LL;
	static uint8_t x560 = UINT8_MAX;
	static volatile int32_t t127 = 889072;

    t127 = ((x557>(x558-x559))+x560);

    if (t127 != 256) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x562 = INT32_MIN;
	static volatile int8_t x563 = -57;
	static int64_t x564 = INT64_MIN;
	int64_t t128 = INT64_MIN;

    t128 = ((x561>(x562-x563))+x564);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x565 = 2;
	static uint8_t x568 = 0U;
	volatile int32_t t129 = 34528;

    t129 = ((x565>(x566-x567))+x568);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x569 = 6106906479335306LL;
	static int32_t x570 = INT32_MAX;
	static volatile uint8_t x571 = 6U;

    t130 = ((x569>(x570-x571))+x572);

    if (t130 != 15029) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x577 = 9897U;
	uint16_t x578 = 3862U;
	int16_t x579 = 1;
	int8_t x580 = INT8_MIN;
	static volatile int32_t t131 = -3;

    t131 = ((x577>(x578-x579))+x580);

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x582 = 23LLU;
	int32_t x583 = INT32_MIN;
	int8_t x584 = -1;
	int32_t t132 = -2;

    t132 = ((x581>(x582-x583))+x584);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x590 = -159;
	int8_t x591 = -12;
	int16_t x592 = -1;
	int32_t t133 = 41;

    t133 = ((x589>(x590-x591))+x592);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x595 = 304U;
	int64_t x596 = INT64_MIN;
	static volatile int64_t t134 = 59LL;

    t134 = ((x593>(x594-x595))+x596);

    if (t134 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x601 = 43U;
	volatile int16_t x602 = INT16_MIN;

    t135 = ((x601>(x602-x603))+x604);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x605 = INT32_MIN;
	int64_t x606 = 68278037638157LL;
	int8_t x607 = INT8_MIN;
	volatile uint16_t x608 = 53U;

    t136 = ((x605>(x606-x607))+x608);

    if (t136 != 53) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x609 = 63300LL;
	int8_t x610 = INT8_MIN;
	static int32_t x612 = INT32_MIN;
	int32_t t137 = -71497;

    t137 = ((x609>(x610-x611))+x612);

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x613 = 28U;
	int32_t x614 = -1;
	volatile uint16_t x615 = UINT16_MAX;
	int64_t t138 = -30695845378245030LL;

    t138 = ((x613>(x614-x615))+x616);

    if (t138 != -15402LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x617 = UINT64_MAX;
	uint64_t x618 = 10406144528212LLU;
	uint8_t x619 = 9U;
	uint64_t x620 = 66285803160LLU;
	volatile uint64_t t139 = 759LLU;

    t139 = ((x617>(x618-x619))+x620);

    if (t139 != 66285803161LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x621 = 7639782395638704LLU;
	uint8_t x622 = UINT8_MAX;
	volatile uint32_t x623 = 162462042U;
	volatile uint64_t x624 = 13LLU;
	uint64_t t140 = 82841361368LLU;

    t140 = ((x621>(x622-x623))+x624);

    if (t140 != 14LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x637 = UINT8_MAX;
	int16_t x639 = -21;
	int64_t t141 = -58481923LL;

    t141 = ((x637>(x638-x639))+x640);

    if (t141 != 25974107886483824LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x641 = -1;
	int32_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	uint64_t x644 = UINT64_MAX;
	volatile uint64_t t142 = 13262941276306372LLU;

    t142 = ((x641>(x642-x643))+x644);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x646 = INT8_MIN;
	static uint16_t x647 = 873U;
	int64_t x648 = 258152232163962996LL;

    t143 = ((x645>(x646-x647))+x648);

    if (t143 != 258152232163962997LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x650 = INT8_MIN;
	static int8_t x651 = 0;
	static volatile int32_t x652 = INT32_MIN;
	int32_t t144 = INT32_MIN;

    t144 = ((x649>(x650-x651))+x652);

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x653 = 3402U;
	uint16_t x654 = 2161U;
	int16_t x655 = -1;
	int8_t x656 = INT8_MIN;
	static int32_t t145 = 52;

    t145 = ((x653>(x654-x655))+x656);

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x657 = INT64_MAX;
	volatile uint16_t x658 = 1U;
	int8_t x659 = INT8_MAX;
	uint32_t x660 = UINT32_MAX;
	static uint32_t t146 = 2513U;

    t146 = ((x657>(x658-x659))+x660);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x661 = INT16_MIN;
	int8_t x662 = INT8_MAX;
	uint16_t x663 = 45U;
	volatile int32_t t147 = 7338738;

    t147 = ((x661>(x662-x663))+x664);

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x665 = -1LL;
	static uint16_t x666 = 851U;
	int16_t x668 = INT16_MIN;
	int32_t t148 = -993461707;

    t148 = ((x665>(x666-x667))+x668);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x669 = 3584U;
	int64_t x670 = 4589LL;
	volatile uint8_t x672 = UINT8_MAX;
	int32_t t149 = 37452323;

    t149 = ((x669>(x670-x671))+x672);

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x674 = -1LL;
	uint32_t x676 = UINT32_MAX;
	uint32_t t150 = UINT32_MAX;

    t150 = ((x673>(x674-x675))+x676);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x685 = 1U;
	uint8_t x686 = 11U;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t151 = -518119;

    t151 = ((x685>(x686-x687))+x688);

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x690 = INT16_MAX;
	static int32_t x692 = INT32_MIN;
	static int32_t t152 = INT32_MIN;

    t152 = ((x689>(x690-x691))+x692);

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x693 = INT8_MAX;
	int16_t x694 = INT16_MAX;
	volatile int64_t x695 = -4887LL;
	int32_t x696 = INT32_MAX;
	static int32_t t153 = INT32_MAX;

    t153 = ((x693>(x694-x695))+x696);

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x698 = INT16_MIN;
	static volatile int8_t x699 = -1;
	volatile int32_t t154 = -229010;

    t154 = ((x697>(x698-x699))+x700);

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x701 = INT16_MAX;
	int16_t x702 = -1;
	uint32_t x703 = UINT32_MAX;
	int16_t x704 = INT16_MAX;
	volatile int32_t t155 = 1067154307;

    t155 = ((x701>(x702-x703))+x704);

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x706 = UINT64_MAX;
	int64_t x707 = INT64_MIN;
	static int32_t x708 = -1;

    t156 = ((x705>(x706-x707))+x708);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x709 = 10U;
	static int16_t x710 = INT16_MAX;
	int64_t x711 = -1LL;
	int16_t x712 = -15718;
	int32_t t157 = 8;

    t157 = ((x709>(x710-x711))+x712);

    if (t157 != -15718) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x713 = INT8_MAX;
	int8_t x714 = -4;
	int64_t x715 = INT64_MIN;
	uint64_t x716 = 903434763733675762LLU;
	volatile uint64_t t158 = 56719146949154150LLU;

    t158 = ((x713>(x714-x715))+x716);

    if (t158 != 903434763733675762LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x718 = INT32_MIN;
	int8_t x719 = INT8_MIN;
	int32_t x720 = -1;
	volatile int32_t t159 = 307664;

    t159 = ((x717>(x718-x719))+x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x721 = INT8_MIN;
	static volatile uint16_t x722 = 9810U;
	volatile int16_t x723 = 5001;
	volatile int8_t x724 = INT8_MIN;
	int32_t t160 = -254636845;

    t160 = ((x721>(x722-x723))+x724);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x726 = -3;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = 1U;
	int32_t t161 = -119710621;

    t161 = ((x725>(x726-x727))+x728);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x730 = INT64_MIN;
	uint8_t x731 = 0U;
	volatile int64_t t162 = -1732439LL;

    t162 = ((x729>(x730-x731))+x732);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x733 = INT64_MIN;
	volatile uint16_t x734 = 32418U;
	int64_t x735 = -294LL;
	volatile uint32_t x736 = 85U;
	static uint32_t t163 = 955657U;

    t163 = ((x733>(x734-x735))+x736);

    if (t163 != 85U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x737 = INT32_MAX;
	int32_t x738 = INT32_MIN;
	int8_t x739 = INT8_MIN;
	int8_t x740 = -1;
	int32_t t164 = 0;

    t164 = ((x737>(x738-x739))+x740);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x745 = 6U;
	uint64_t x746 = 132541645488LLU;
	int8_t x747 = -1;
	static int8_t x748 = -1;
	int32_t t165 = 16;

    t165 = ((x745>(x746-x747))+x748);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x750 = -425;
	static volatile int8_t x751 = INT8_MIN;

    t166 = ((x749>(x750-x751))+x752);

    if (t166 != 2013) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x753 = 234811LLU;
	int16_t x754 = INT16_MIN;
	uint32_t x755 = 280319U;
	volatile int16_t x756 = INT16_MIN;

    t167 = ((x753>(x754-x755))+x756);

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x757 = 6549564930864145LL;
	static int32_t x758 = INT32_MIN;
	uint32_t x759 = 229U;

    t168 = ((x757>(x758-x759))+x760);

    if (t168 != 256) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x763 = INT16_MIN;
	int32_t t169 = 34289;

    t169 = ((x761>(x762-x763))+x764);

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x765 = INT32_MAX;
	static int16_t x766 = 0;
	volatile uint8_t x767 = 0U;
	int8_t x768 = -1;
	static int32_t t170 = -210862;

    t170 = ((x765>(x766-x767))+x768);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x769 = 521432LL;
	int8_t x770 = -1;
	int32_t x771 = -1;
	int16_t x772 = 466;
	int32_t t171 = 8932;

    t171 = ((x769>(x770-x771))+x772);

    if (t171 != 467) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x773 = -1;
	volatile int64_t x774 = -1239110LL;
	int64_t x776 = -1LL;
	volatile int64_t t172 = 37257LL;

    t172 = ((x773>(x774-x775))+x776);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x781 = UINT8_MAX;
	static int64_t x782 = -105LL;
	volatile int16_t x783 = 26;
	static int64_t x784 = INT64_MIN;

    t173 = ((x781>(x782-x783))+x784);

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x785 = INT8_MIN;
	int8_t x788 = INT8_MIN;
	volatile int32_t t174 = 837;

    t174 = ((x785>(x786-x787))+x788);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x789 = INT64_MAX;
	uint16_t x790 = 1817U;
	volatile int16_t x791 = -1;
	int16_t x792 = -341;
	volatile int32_t t175 = -1;

    t175 = ((x789>(x790-x791))+x792);

    if (t175 != -340) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x793 = 18U;
	volatile int16_t x794 = INT16_MIN;
	int64_t x795 = -1LL;
	int32_t t176 = 4483;

    t176 = ((x793>(x794-x795))+x796);

    if (t176 != 65536) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x797 = INT64_MAX;
	int32_t t177 = -532538;

    t177 = ((x797>(x798-x799))+x800);

    if (t177 != 18787) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x801 = -1;
	volatile int8_t x803 = INT8_MIN;
	static volatile int64_t x804 = INT64_MIN;
	volatile int64_t t178 = -66482038565284LL;

    t178 = ((x801>(x802-x803))+x804);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x805 = INT64_MAX;
	int8_t x807 = -1;
	volatile uint32_t t179 = 31960647U;

    t179 = ((x805>(x806-x807))+x808);

    if (t179 != 263187U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x809 = INT64_MAX;
	uint8_t x811 = 57U;
	volatile int32_t t180 = 3347;

    t180 = ((x809>(x810-x811))+x812);

    if (t180 != 128) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x813 = 4U;
	int8_t x815 = INT8_MAX;
	int64_t t181 = INT64_MAX;

    t181 = ((x813>(x814-x815))+x816);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x818 = INT16_MAX;
	int8_t x819 = 15;
	static uint8_t x820 = 87U;
	int32_t t182 = -14323;

    t182 = ((x817>(x818-x819))+x820);

    if (t182 != 87) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x829 = -1LL;
	int16_t x830 = 1697;
	int64_t x831 = 1017484930765LL;
	volatile uint8_t x832 = UINT8_MAX;
	int32_t t183 = -63;

    t183 = ((x829>(x830-x831))+x832);

    if (t183 != 256) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x833 = -1;
	static uint8_t x834 = 4U;
	int64_t x835 = INT64_MAX;
	static volatile int64_t x836 = 1973LL;
	volatile int64_t t184 = 19849673LL;

    t184 = ((x833>(x834-x835))+x836);

    if (t184 != 1974LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x837 = INT32_MIN;
	uint32_t x838 = 4546120U;
	uint64_t x839 = UINT64_MAX;
	volatile int8_t x840 = INT8_MAX;
	int32_t t185 = -70;

    t185 = ((x837>(x838-x839))+x840);

    if (t185 != 128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x842 = -1;
	static int64_t x843 = -1LL;
	int32_t x844 = INT32_MIN;
	static int32_t t186 = 18682;

    t186 = ((x841>(x842-x843))+x844);

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x845 = INT8_MIN;
	uint32_t x846 = UINT32_MAX;
	uint8_t x847 = UINT8_MAX;
	uint8_t x848 = 6U;
	volatile int32_t t187 = -233085;

    t187 = ((x845>(x846-x847))+x848);

    if (t187 != 7) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x849 = -1;
	int64_t x850 = -1LL;
	static int8_t x851 = -1;
	volatile uint8_t x852 = 25U;
	volatile int32_t t188 = 48;

    t188 = ((x849>(x850-x851))+x852);

    if (t188 != 25) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x853 = INT64_MAX;
	uint64_t x854 = 140146521LLU;
	static int64_t x855 = INT64_MIN;
	uint8_t x856 = 66U;

    t189 = ((x853>(x854-x855))+x856);

    if (t189 != 66) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x865 = INT16_MAX;
	static uint16_t x866 = 183U;
	uint64_t x868 = 16699485474LLU;
	volatile uint64_t t190 = 1501490790097007750LLU;

    t190 = ((x865>(x866-x867))+x868);

    if (t190 != 16699485475LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x869 = INT32_MAX;
	uint32_t x870 = UINT32_MAX;
	int64_t x871 = -1LL;
	uint16_t x872 = 1982U;
	static volatile int32_t t191 = -17706;

    t191 = ((x869>(x870-x871))+x872);

    if (t191 != 1982) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x873 = INT64_MIN;
	volatile int32_t x874 = INT32_MIN;
	uint8_t x876 = 79U;
	volatile int32_t t192 = 10693070;

    t192 = ((x873>(x874-x875))+x876);

    if (t192 != 79) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x878 = -1;
	uint64_t x879 = 231300201029611LLU;
	volatile int64_t t193 = INT64_MAX;

    t193 = ((x877>(x878-x879))+x880);

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x881 = UINT8_MAX;
	int8_t x884 = INT8_MAX;
	volatile int32_t t194 = -89;

    t194 = ((x881>(x882-x883))+x884);

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x886 = 127U;
	uint8_t x887 = UINT8_MAX;

    t195 = ((x885>(x886-x887))+x888);

    if (t195 != 236315U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = INT64_MIN;
	uint8_t x890 = UINT8_MAX;
	int32_t x891 = -1;
	static volatile uint32_t x892 = UINT32_MAX;
	uint32_t t196 = UINT32_MAX;

    t196 = ((x889>(x890-x891))+x892);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x894 = INT64_MIN;
	int16_t x895 = INT16_MIN;
	uint64_t x896 = 6655881667LLU;

    t197 = ((x893>(x894-x895))+x896);

    if (t197 != 6655881667LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = INT8_MIN;
	volatile int32_t x899 = INT32_MAX;
	int32_t t198 = -42262539;

    t198 = ((x897>(x898-x899))+x900);

    if (t198 != 362) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x901 = -1089625;
	int64_t x902 = -1LL;
	static int8_t x903 = -21;
	uint32_t x904 = 790654U;

    t199 = ((x901>(x902-x903))+x904);

    if (t199 != 790654U) { NG(); } else { ; }
	
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

