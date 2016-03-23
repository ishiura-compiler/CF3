
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

volatile int32_t x1 = INT32_MIN;
uint32_t x3 = 280U;
int32_t x4 = INT32_MAX;
int64_t x11 = INT64_MIN;
static volatile int64_t x13 = 82615528587LL;
volatile uint64_t t3 = 3633718116202759LLU;
static int8_t x27 = INT8_MIN;
uint32_t x31 = 2135424548U;
uint8_t x34 = UINT8_MAX;
uint32_t t7 = 418U;
volatile int8_t x43 = INT8_MIN;
uint64_t t9 = 3695303LLU;
uint32_t x45 = UINT32_MAX;
volatile uint32_t x52 = 2053U;
uint8_t x57 = UINT8_MAX;
static volatile uint64_t t14 = 3761LLU;
int32_t t17 = -90159473;
uint64_t x77 = 37689034508LLU;
int8_t x83 = 2;
volatile int64_t t19 = -561455460631064368LL;
int16_t x91 = 1;
int32_t x93 = -5457615;
static volatile uint8_t x97 = UINT8_MAX;
int32_t x104 = -60925214;
static volatile int64_t t24 = 252LL;
uint16_t x110 = 1U;
int16_t x121 = INT16_MAX;
int8_t x122 = -1;
uint32_t t28 = 2439U;
int32_t x133 = -1;
uint16_t x135 = UINT16_MAX;
volatile int16_t x142 = -1;
static volatile int64_t t32 = -1920453LL;
static int8_t x148 = INT8_MAX;
int16_t x150 = 863;
int32_t t35 = 3389124;
uint16_t x174 = 1U;
volatile uint32_t x176 = 710U;
static uint8_t x181 = 10U;
static int16_t x185 = INT16_MAX;
volatile uint64_t t42 = 446450109988LLU;
volatile int64_t t46 = 19747146LL;
volatile uint64_t x205 = 8037890693938LLU;
int16_t x210 = 1;
uint32_t t48 = 45290836U;
int8_t x214 = -1;
static int32_t x215 = INT32_MIN;
uint32_t x217 = 475986559U;
uint32_t x220 = 283301011U;
int64_t t51 = -34131379723LL;
uint64_t t52 = 9963146046LLU;
volatile int16_t x237 = INT16_MAX;
static int32_t t54 = 1159188;
uint16_t x241 = 3U;
static volatile uint64_t t55 = 2245226693894LLU;
static int32_t x245 = INT32_MIN;
int8_t x253 = INT8_MIN;
int8_t x254 = -41;
static uint16_t x255 = 64U;
volatile int8_t x259 = -1;
volatile int32_t x261 = INT32_MIN;
volatile int8_t x265 = -2;
int64_t x267 = INT64_MIN;
static int64_t t61 = -34597210797114298LL;
int16_t x274 = INT16_MIN;
uint16_t x275 = 3U;
int16_t x276 = 2;
int64_t x278 = INT64_MAX;
int16_t x282 = INT16_MIN;
uint32_t t65 = 24417409U;
int16_t x289 = -1;
int32_t x290 = -37856571;
uint32_t x296 = UINT32_MAX;
uint32_t t68 = 123330071U;
uint8_t x297 = 3U;
int16_t x299 = 249;
int32_t x304 = INT32_MAX;
uint32_t x305 = 1021302U;
volatile int64_t t71 = 80636167LL;
volatile int32_t x315 = -1;
volatile uint8_t x319 = UINT8_MAX;
int8_t x322 = -1;
static volatile int32_t t76 = -1310;
int16_t x342 = INT16_MIN;
int32_t x343 = INT32_MIN;
int16_t x351 = INT16_MIN;
volatile int16_t x359 = -2;
static int8_t x363 = INT8_MIN;
int64_t x364 = INT64_MIN;
static int64_t x375 = -1LL;
int16_t x376 = INT16_MIN;
static volatile int8_t x378 = INT8_MIN;
volatile uint32_t x391 = 709244U;
int16_t x392 = -61;
int16_t x408 = -1;
volatile int16_t x409 = -1;
int8_t x414 = INT8_MAX;
int8_t x418 = 7;
static int32_t t96 = 8;
volatile int64_t t97 = -3719625557229244LL;
volatile int16_t x445 = -6;
int32_t x446 = -22778;
int32_t x449 = 12;
int64_t x463 = INT64_MAX;
int64_t t105 = 0LL;
uint16_t x470 = UINT16_MAX;
int32_t x472 = INT32_MIN;
static int32_t x474 = INT32_MAX;
int8_t x475 = INT8_MIN;
int8_t x476 = INT8_MAX;
static volatile int32_t t108 = -1;
int16_t x477 = -1;
int8_t x479 = INT8_MIN;
volatile int8_t x483 = INT8_MAX;
int8_t x484 = INT8_MAX;
int8_t x488 = INT8_MAX;
volatile int16_t x490 = 9;
int32_t x498 = 994300;
int8_t x499 = INT8_MIN;
static int16_t x502 = INT16_MIN;
int16_t x506 = -812;
int64_t x512 = -2600LL;
int64_t t116 = 15LL;
int32_t x516 = -12;
uint32_t x517 = 564U;
uint64_t x519 = 509774017009966161LLU;
volatile uint64_t t118 = 8701865930367895822LLU;
int64_t x526 = INT64_MIN;
uint16_t x529 = UINT16_MAX;
volatile uint64_t t120 = 706LLU;
int8_t x536 = INT8_MIN;
static int8_t x553 = INT8_MIN;
volatile uint32_t x554 = 0U;
int8_t x555 = INT8_MIN;
volatile uint32_t t125 = 42825U;
uint64_t x569 = 959531489LLU;
static int32_t x571 = INT32_MIN;
uint64_t t129 = 201890LLU;
int16_t x579 = INT16_MAX;
int8_t x587 = -1;
volatile int64_t x592 = INT64_MIN;
volatile int64_t t133 = 4LL;
uint8_t x600 = UINT8_MAX;
int64_t x611 = INT64_MIN;
static volatile uint32_t t138 = 1279719613U;
uint32_t x618 = 50U;
int16_t x619 = 9515;
int8_t x626 = INT8_MIN;
static int64_t x631 = -1LL;
volatile int64_t t142 = -78282566635216LL;
int8_t x634 = INT8_MIN;
int32_t x643 = INT32_MAX;
static volatile int64_t x647 = INT64_MIN;
volatile int64_t x650 = INT64_MIN;
int64_t x654 = INT64_MAX;
volatile int8_t x660 = INT8_MIN;
int32_t t150 = -1414076;
uint8_t x670 = 1U;
volatile int16_t x673 = INT16_MAX;
static int64_t x678 = -1LL;
int8_t x683 = -1;
int8_t x688 = INT8_MIN;
uint32_t x691 = 235U;
volatile int8_t x702 = INT8_MAX;
uint8_t x703 = UINT8_MAX;
static uint16_t x704 = UINT16_MAX;
static volatile int32_t t160 = -229647734;
int64_t t161 = 5LL;
static int32_t x712 = INT32_MAX;
uint64_t t163 = 1LLU;
int16_t x718 = INT16_MIN;
int32_t x719 = -702;
int32_t t164 = 152;
int32_t x732 = INT32_MAX;
int8_t x746 = INT8_MAX;
static uint64_t x751 = UINT64_MAX;
static uint16_t x754 = 0U;
int8_t x755 = INT8_MAX;
volatile uint16_t x756 = UINT16_MAX;
volatile int64_t t173 = 219774280098732240LL;
volatile int16_t x771 = -226;
volatile int8_t x782 = -1;
int64_t x784 = INT64_MIN;
int64_t t177 = 26930LL;
static uint16_t x785 = UINT16_MAX;
uint64_t x791 = 4296986976967302564LLU;
static int32_t x794 = INT32_MAX;
int16_t x799 = -6889;
int32_t t181 = -181;
static volatile int32_t x804 = INT32_MIN;
uint8_t x806 = 1U;
int64_t t184 = -2517893LL;
volatile uint32_t t185 = 1374469580U;
int32_t x824 = 712822;
int16_t x829 = -1;
int16_t x830 = INT16_MAX;
int64_t t187 = -1LL;
int16_t x833 = 2;
volatile int32_t x840 = -680943151;
static volatile uint8_t x843 = UINT8_MAX;
volatile int32_t t193 = -4368;
int64_t x859 = INT64_MIN;
static uint8_t x860 = 13U;
uint32_t x874 = UINT32_MAX;


void f0(void) {
    	uint64_t x2 = 4910795781862572556LLU;
	volatile uint64_t t0 = 640182682172139LLU;

    t0 = ((x1+(x2%x3))%x4);

    if (t0 != 279LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static uint8_t x6 = 5U;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -1;
	volatile int32_t t1 = 55;

    t1 = ((x5+(x6%x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint64_t x10 = 31242LLU;
	uint16_t x12 = 3U;
	volatile uint64_t t2 = 4093392893302LLU;

    t2 = ((x9+(x10%x11))%x12);

    if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = 4;

    t3 = ((x13+(x14%x15))%x16);

    if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MAX;
	uint32_t x23 = 1695U;
	int16_t x24 = 4;
	int64_t t4 = 11546026845916LL;

    t4 = ((x21+(x22%x23))%x24);

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = UINT64_MAX;
	int64_t x26 = -1LL;
	volatile int16_t x28 = INT16_MIN;
	static uint64_t t5 = 45036LLU;

    t5 = ((x25+(x26%x27))%x28);

    if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = 315283867885LL;
	int32_t x30 = -2071203;
	static int8_t x32 = 1;
	int64_t t6 = 3037LL;

    t6 = ((x29+(x30%x31))%x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x33 = 7564U;
	volatile uint16_t x35 = 2304U;
	int16_t x36 = INT16_MAX;

    t7 = ((x33+(x34%x35))%x36);

    if (t7 != 7819U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 760;
	static uint64_t x38 = 32463148153LLU;
	int32_t x39 = -1;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t8 = 16224741978LLU;

    t8 = ((x37+(x38%x39))%x40);

    if (t8 != 32463148913LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x41 = 185265119426LLU;
	int8_t x42 = INT8_MIN;
	static int8_t x44 = INT8_MIN;

    t9 = ((x41+(x42%x43))%x44);

    if (t9 != 185265119426LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x46 = -8;
	static int8_t x47 = INT8_MIN;
	uint8_t x48 = 46U;
	static uint32_t t10 = 97654832U;

    t10 = ((x45+(x46%x47))%x48);

    if (t10 != 3U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -15;
	static uint64_t x50 = 691LLU;
	static uint16_t x51 = UINT16_MAX;
	uint64_t t11 = 616936003327LLU;

    t11 = ((x49+(x50%x51))%x52);

    if (t11 != 676LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 42U;
	int64_t x54 = 5097473944167LL;
	static uint16_t x55 = 2064U;
	int32_t x56 = -80;
	volatile int64_t t12 = -311102634LL;

    t12 = ((x53+(x54%x55))%x56);

    if (t12 != 17LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x58 = 10126LLU;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MIN;
	uint64_t t13 = 505639173LLU;

    t13 = ((x57+(x58%x59))%x60);

    if (t13 != 10381LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 4674U;
	int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = 1252441099308704LLU;
	int8_t x64 = 1;

    t14 = ((x61+(x62%x63))%x64);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = -31302107LL;
	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = 98298U;
	int64_t x68 = INT64_MAX;
	volatile int64_t t15 = 4076219LL;

    t15 = ((x65+(x66%x67))%x68);

    if (t15 != -31236572LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 1U;
	uint32_t x70 = 58207U;
	uint64_t x71 = 6580636725605325LLU;
	uint64_t x72 = 174797051846LLU;
	uint64_t t16 = 4345889LLU;

    t16 = ((x69+(x70%x71))%x72);

    if (t16 != 58208LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = 285;
	uint8_t x74 = 62U;
	volatile int16_t x75 = INT16_MAX;
	volatile int16_t x76 = INT16_MIN;

    t17 = ((x73+(x74%x75))%x76);

    if (t17 != 347) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x78 = 2;
	volatile int8_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t18 = 291615560766512LLU;

    t18 = ((x77+(x78%x79))%x80);

    if (t18 != 37689034508LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 2118220674556LL;
	uint16_t x82 = 9U;
	static int32_t x84 = 1;

    t19 = ((x81+(x82%x83))%x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int8_t x86 = -3;
	static volatile int8_t x87 = INT8_MAX;
	uint64_t x88 = 52769903998491LLU;
	uint64_t t20 = 78LLU;

    t20 = ((x85+(x86%x87))%x88);

    if (t20 != 65532LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	uint8_t x92 = 9U;
	int32_t t21 = 31154607;

    t21 = ((x89+(x90%x91))%x92);

    if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x94 = UINT64_MAX;
	uint8_t x95 = 94U;
	uint16_t x96 = UINT16_MAX;
	static uint64_t t22 = 536677529708LLU;

    t22 = ((x93+(x94%x95))%x96);

    if (t22 != 47397LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x98 = 3U;
	static int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;
	volatile int64_t t23 = 19508275968LL;

    t23 = ((x97+(x98%x99))%x100);

    if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x101 = 0U;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;

    t24 = ((x101+(x102%x103))%x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x109 = INT8_MAX;
	int64_t x111 = 7857LL;
	uint8_t x112 = 4U;
	volatile int64_t t25 = -151LL;

    t25 = ((x109+(x110%x111))%x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x113 = INT8_MAX;
	volatile uint8_t x114 = 3U;
	static int8_t x115 = 7;
	int16_t x116 = -1;
	volatile int32_t t26 = 16244513;

    t26 = ((x113+(x114%x115))%x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = INT16_MIN;
	int8_t x118 = -13;
	static int8_t x119 = INT8_MIN;
	static volatile int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 6;

    t27 = ((x117+(x118%x119))%x120);

    if (t27 != -13) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x123 = 8U;
	uint8_t x124 = UINT8_MAX;

    t28 = ((x121+(x122%x123))%x124);

    if (t28 != 134U) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x125 = INT32_MIN;
	volatile uint16_t x126 = 123U;
	static uint8_t x127 = 42U;
	volatile int64_t x128 = INT64_MIN;
	int64_t t29 = -198LL;

    t29 = ((x125+(x126%x127))%x128);

    if (t29 != -2147483609LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x134 = -41;
	static int64_t x136 = INT64_MIN;
	int64_t t30 = -52363LL;

    t30 = ((x133+(x134%x135))%x136);

    if (t30 != -42LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x137 = -3;
	int32_t x138 = -4017;
	int32_t x139 = -16476360;
	volatile int16_t x140 = -1;
	volatile int32_t t31 = 1;

    t31 = ((x137+(x138%x139))%x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -1LL;
	volatile int16_t x143 = -1;
	uint32_t x144 = 43U;

    t32 = ((x141+(x142%x143))%x144);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile int8_t x146 = INT8_MIN;
	static uint16_t x147 = 185U;
	uint64_t t33 = 263660948517364LLU;

    t33 = ((x145+(x146%x147))%x148);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	int8_t x152 = -1;
	volatile int64_t t34 = 185556683LL;

    t34 = ((x149+(x150%x151))%x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MAX;
	volatile int8_t x155 = 1;
	int8_t x156 = 1;

    t35 = ((x153+(x154%x155))%x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = 237U;
	volatile int8_t x158 = -20;
	uint32_t x159 = 58748937U;
	static int16_t x160 = INT16_MIN;
	uint32_t t36 = 3026197U;

    t36 = ((x157+(x158%x159))%x160);

    if (t36 != 6295112U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x161 = 21;
	static volatile uint8_t x162 = 1U;
	int32_t x163 = -8369;
	int32_t x164 = -43418;
	int32_t t37 = 6;

    t37 = ((x161+(x162%x163))%x164);

    if (t37 != 22) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 5U;
	int32_t x167 = 12709043;
	static int64_t x168 = -9510715630382LL;
	volatile uint64_t t38 = 960LLU;

    t38 = ((x165+(x166%x167))%x168);

    if (t38 != 4LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x173 = 25783U;
	int64_t x175 = -105LL;
	volatile int64_t t39 = 2254148421021712207LL;

    t39 = ((x173+(x174%x175))%x176);

    if (t39 != 224LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = -1;
	int64_t x178 = -1LL;
	int64_t x179 = INT64_MAX;
	volatile int32_t x180 = INT32_MAX;
	int64_t t40 = 6383LL;

    t40 = ((x177+(x178%x179))%x180);

    if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x182 = INT8_MAX;
	volatile int16_t x183 = INT16_MAX;
	uint8_t x184 = UINT8_MAX;
	static volatile int32_t t41 = 177498213;

    t41 = ((x181+(x182%x183))%x184);

    if (t41 != 137) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x186 = UINT64_MAX;
	volatile int8_t x187 = -1;
	static volatile int32_t x188 = INT32_MIN;

    t42 = ((x185+(x186%x187))%x188);

    if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = -31;
	int8_t x190 = -13;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = UINT16_MAX;
	static uint64_t t43 = 191LLU;

    t43 = ((x189+(x190%x191))%x192);

    if (t43 != 65492LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 1457756U;
	uint8_t x194 = 1U;
	uint16_t x195 = UINT16_MAX;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t44 = -534335538961571LL;

    t44 = ((x193+(x194%x195))%x196);

    if (t44 != 1457757LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x197 = -160;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = 1568065U;
	static volatile uint32_t t45 = 82598U;

    t45 = ((x197+(x198%x199))%x200);

    if (t45 != 36973U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MAX;
	static int64_t x203 = -29944326106274884LL;
	volatile int8_t x204 = -3;

    t46 = ((x201+(x202%x203))%x204);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x206 = INT16_MAX;
	int32_t x207 = INT32_MIN;
	static int32_t x208 = -497;
	static volatile uint64_t t47 = 5359598LLU;

    t47 = ((x205+(x206%x207))%x208);

    if (t47 != 8037890726705LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = UINT32_MAX;
	int8_t x211 = -1;
	int16_t x212 = INT16_MIN;

    t48 = ((x209+(x210%x211))%x212);

    if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x213 = UINT32_MAX;
	int32_t x216 = -1;
	uint32_t t49 = 1U;

    t49 = ((x213+(x214%x215))%x216);

    if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MIN;
	int64_t t50 = 59518702LL;

    t50 = ((x217+(x218%x219))%x220);

    if (t50 != 73761107LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x225 = -11564703536LL;
	int64_t x226 = INT64_MIN;
	static uint16_t x227 = 262U;
	volatile int8_t x228 = -1;

    t51 = ((x225+(x226%x227))%x228);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x229 = UINT64_MAX;
	static int16_t x230 = INT16_MAX;
	int8_t x231 = -1;
	int64_t x232 = INT64_MAX;

    t52 = ((x229+(x230%x231))%x232);

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x233 = INT16_MIN;
	uint16_t x234 = 16854U;
	static int64_t x235 = INT64_MIN;
	volatile int16_t x236 = -326;
	volatile int64_t t53 = -1989020756959337058LL;

    t53 = ((x233+(x234%x235))%x236);

    if (t53 != -266LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x238 = 0U;
	volatile uint16_t x239 = 20U;
	volatile int16_t x240 = -1;

    t54 = ((x237+(x238%x239))%x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = 128490;
	uint64_t x244 = 1978762LLU;

    t55 = ((x241+(x242%x243))%x244);

    if (t55 != 1569613LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x246 = INT16_MAX;
	uint16_t x247 = 9926U;
	int8_t x248 = INT8_MAX;
	int32_t t56 = 565935;

    t56 = ((x245+(x246%x247))%x248);

    if (t56 != -67) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = INT8_MIN;
	uint32_t x250 = 4895867U;
	volatile int64_t x251 = -7095113780328621LL;
	static int64_t x252 = INT64_MAX;
	volatile int64_t t57 = -5867314LL;

    t57 = ((x249+(x250%x251))%x252);

    if (t57 != 4895739LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x256 = 3713U;
	int32_t t58 = 402583369;

    t58 = ((x253+(x254%x255))%x256);

    if (t58 != -169) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = INT32_MAX;
	uint16_t x258 = 1U;
	int8_t x260 = -2;
	volatile int32_t t59 = 0;

    t59 = ((x257+(x258%x259))%x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x262 = INT16_MIN;
	volatile int64_t x263 = -64558614473LL;
	uint16_t x264 = 118U;
	int64_t t60 = -14777LL;

    t60 = ((x261+(x262%x263))%x264);

    if (t60 != -78LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x266 = INT64_MIN;
	static int32_t x268 = -1;

    t61 = ((x265+(x266%x267))%x268);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int8_t x270 = INT8_MIN;
	static int16_t x271 = INT16_MAX;
	uint32_t x272 = 24553412U;
	volatile uint32_t t62 = 21U;

    t62 = ((x269+(x270%x271))%x272);

    if (t62 != 22673479U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = -1;
	int32_t t63 = -930079;

    t63 = ((x273+(x274%x275))%x276);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x277 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	static int32_t x280 = 1;
	static volatile int64_t t64 = 527142163605428LL;

    t64 = ((x277+(x278%x279))%x280);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x283 = 18U;
	int16_t x284 = INT16_MAX;

    t65 = ((x281+(x282%x283))%x284);

    if (t65 != 14U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x285 = -1;
	volatile int32_t x286 = INT32_MAX;
	uint8_t x287 = 3U;
	uint16_t x288 = 1U;
	static volatile int32_t t66 = -81536221;

    t66 = ((x285+(x286%x287))%x288);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x291 = -1;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t67 = -5942;

    t67 = ((x289+(x290%x291))%x292);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x293 = -1;
	static uint16_t x294 = 7937U;
	uint16_t x295 = UINT16_MAX;

    t68 = ((x293+(x294%x295))%x296);

    if (t68 != 7936U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x298 = UINT8_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t69 = 5342;

    t69 = ((x297+(x298%x299))%x300);

    if (t69 != 9) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x301 = 53140851414944LLU;
	volatile int32_t x302 = -31;
	int64_t x303 = INT64_MIN;
	static uint64_t t70 = 133601013993159304LLU;

    t70 = ((x301+(x302%x303))%x304);

    if (t70 != 1368569898LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x306 = -113441401051372LL;
	static uint16_t x307 = 6777U;
	int16_t x308 = -41;

    t71 = ((x305+(x306%x307))%x308);

    if (t71 != 17LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	static int16_t x316 = -4;
	volatile uint32_t t72 = 3U;

    t72 = ((x313+(x314%x315))%x316);

    if (t72 != 65535U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -19;
	int64_t x318 = INT64_MIN;
	int64_t x320 = 133LL;
	static volatile int64_t t73 = 486629778363267LL;

    t73 = ((x317+(x318%x319))%x320);

    if (t73 != -14LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x321 = -1;
	volatile int8_t x323 = -1;
	volatile int64_t x324 = INT64_MIN;
	static int64_t t74 = -3565996LL;

    t74 = ((x321+(x322%x323))%x324);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x329 = INT32_MIN;
	static uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t75 = 0;

    t75 = ((x329+(x330%x331))%x332);

    if (t75 != -32514) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	volatile int32_t x335 = -1;
	static int16_t x336 = 387;

    t76 = ((x333+(x334%x335))%x336);

    if (t76 != -137) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	static uint16_t x339 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t77 = 1955916138017LLU;

    t77 = ((x337+(x338%x339))%x340);

    if (t77 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x341 = 1U;
	volatile int8_t x344 = INT8_MAX;
	int32_t t78 = 3479883;

    t78 = ((x341+(x342%x343))%x344);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x345 = -1LL;
	int16_t x346 = -1;
	int16_t x347 = 93;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t79 = 6LL;

    t79 = ((x345+(x346%x347))%x348);

    if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x349 = 15U;
	static int8_t x350 = 5;
	int16_t x352 = -1;
	int32_t t80 = -283409482;

    t80 = ((x349+(x350%x351))%x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x353 = UINT8_MAX;
	static uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = -1;
	static volatile int32_t x356 = -13055;
	volatile int32_t t81 = 83031330;

    t81 = ((x353+(x354%x355))%x356);

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x357 = 1333;
	int8_t x358 = -1;
	volatile uint32_t x360 = 617362U;
	volatile uint32_t t82 = 141387469U;

    t82 = ((x357+(x358%x359))%x360);

    if (t82 != 1332U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x361 = 49;
	int32_t x362 = -1;
	static volatile int64_t t83 = -2673LL;

    t83 = ((x361+(x362%x363))%x364);

    if (t83 != 48LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x365 = INT64_MIN;
	int8_t x366 = 0;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = 1U;
	int64_t t84 = -269344444179LL;

    t84 = ((x365+(x366%x367))%x368);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x373 = INT32_MIN;
	static volatile int64_t x374 = INT64_MAX;
	static int64_t t85 = -9490704704602497LL;

    t85 = ((x373+(x374%x375))%x376);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x377 = 199U;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	static volatile int64_t t86 = 172064966955466369LL;

    t86 = ((x377+(x378%x379))%x380);

    if (t86 != 71LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MAX;
	int64_t x387 = -1LL;
	int8_t x388 = -3;
	int64_t t87 = -10600651590544146LL;

    t87 = ((x385+(x386%x387))%x388);

    if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x389 = 1U;
	uint32_t x390 = 2U;
	uint32_t t88 = 54916U;

    t88 = ((x389+(x390%x391))%x392);

    if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x393 = -2728976860344610987LL;
	volatile uint32_t x394 = 3379739U;
	uint64_t x395 = 217096205089829LLU;
	int32_t x396 = -1;
	uint64_t t89 = 98866829LLU;

    t89 = ((x393+(x394%x395))%x396);

    if (t89 != 15717767213368320368LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MAX;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t90 = -190616562651LL;

    t90 = ((x397+(x398%x399))%x400);

    if (t90 != -2147450881LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x401 = 1U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = -7;
	static int32_t x404 = -1;
	int32_t t91 = 0;

    t91 = ((x401+(x402%x403))%x404);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	static uint16_t x407 = 22543U;
	volatile uint64_t t92 = 6LLU;

    t92 = ((x405+(x406%x407))%x408);

    if (t92 != 10423LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x410 = 10U;
	int8_t x411 = -2;
	uint16_t x412 = UINT16_MAX;
	static volatile uint32_t t93 = 741625U;

    t93 = ((x409+(x410%x411))%x412);

    if (t93 != 9U) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x413 = INT64_MIN;
	static volatile uint16_t x415 = UINT16_MAX;
	volatile int64_t x416 = INT64_MIN;
	int64_t t94 = -55230169LL;

    t94 = ((x413+(x414%x415))%x416);

    if (t94 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = INT16_MIN;
	static int8_t x419 = 23;
	uint32_t x420 = 26546U;
	volatile uint32_t t95 = 610950308U;

    t95 = ((x417+(x418%x419))%x420);

    if (t95 != 4103U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x421 = INT8_MIN;
	static uint8_t x422 = 118U;
	volatile int16_t x423 = -1;
	int32_t x424 = INT32_MIN;

    t96 = ((x421+(x422%x423))%x424);

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = -1;
	volatile int64_t x426 = INT64_MIN;
	int32_t x427 = 13;
	static int16_t x428 = INT16_MAX;

    t97 = ((x425+(x426%x427))%x428);

    if (t97 != -9LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x429 = UINT16_MAX;
	int32_t x430 = -1;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 1U;
	static int32_t t98 = 20347;

    t98 = ((x429+(x430%x431))%x432);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x433 = 1;
	int8_t x434 = -1;
	static uint32_t x435 = 1303938064U;
	int64_t x436 = 151725446LL;
	int64_t t99 = -5LL;

    t99 = ((x433+(x434%x435))%x436);

    if (t99 != 79702212LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x437 = INT64_MIN;
	static int64_t x438 = INT64_MAX;
	uint8_t x439 = 22U;
	volatile uint64_t x440 = 706168LLU;
	static uint64_t t100 = 231430967LLU;

    t100 = ((x437+(x438%x439))%x440);

    if (t100 != 86503LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x447 = 1U;
	int64_t x448 = INT64_MAX;
	volatile int64_t t101 = 88878950354680LL;

    t101 = ((x445+(x446%x447))%x448);

    if (t101 != -6LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x450 = -28916LL;
	int32_t x451 = INT32_MAX;
	int64_t x452 = -13783737668794LL;
	static volatile int64_t t102 = -414942911186787868LL;

    t102 = ((x449+(x450%x451))%x452);

    if (t102 != -28904LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x453 = INT32_MAX;
	int16_t x454 = -1;
	int64_t x455 = -2264727752694LL;
	volatile int64_t x456 = INT64_MIN;
	int64_t t103 = 51968079LL;

    t103 = ((x453+(x454%x455))%x456);

    if (t103 != 2147483646LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x457 = 4U;
	volatile uint8_t x458 = 6U;
	int64_t x459 = -1LL;
	volatile int8_t x460 = INT8_MIN;
	int64_t t104 = 4170947223993181179LL;

    t104 = ((x457+(x458%x459))%x460);

    if (t104 != 4LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x461 = 94U;
	int16_t x462 = INT16_MIN;
	static int64_t x464 = 149792252807LL;

    t105 = ((x461+(x462%x463))%x464);

    if (t105 != -32674LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x465 = 5U;
	volatile int8_t x466 = INT8_MAX;
	static uint64_t x467 = 1535426961171244082LLU;
	int16_t x468 = INT16_MIN;
	uint64_t t106 = 57124LLU;

    t106 = ((x465+(x466%x467))%x468);

    if (t106 != 132LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x469 = INT64_MIN;
	int16_t x471 = -13840;
	int64_t t107 = -12LL;

    t107 = ((x469+(x470%x471))%x472);

    if (t107 != -2147473473LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x473 = INT16_MIN;

    t108 = ((x473+(x474%x475))%x476);

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x478 = INT32_MIN;
	int64_t x480 = INT64_MAX;
	volatile int64_t t109 = 0LL;

    t109 = ((x477+(x478%x479))%x480);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x481 = INT16_MAX;
	int16_t x482 = -1;
	static int32_t t110 = 236390;

    t110 = ((x481+(x482%x483))%x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x485 = -1LL;
	int8_t x486 = -4;
	int64_t x487 = -385219306828501888LL;
	volatile int64_t t111 = 106388035320201792LL;

    t111 = ((x485+(x486%x487))%x488);

    if (t111 != -5LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x489 = -1;
	volatile int64_t x491 = -182681463033033LL;
	static volatile int8_t x492 = 23;
	static volatile int64_t t112 = -13436169681524LL;

    t112 = ((x489+(x490%x491))%x492);

    if (t112 != 8LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x497 = 38;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t113 = 10304823027LLU;

    t113 = ((x497+(x498%x499))%x500);

    if (t113 != 162LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x501 = INT32_MAX;
	int8_t x503 = INT8_MIN;
	static volatile int64_t x504 = INT64_MAX;
	static volatile int64_t t114 = -23486LL;

    t114 = ((x501+(x502%x503))%x504);

    if (t114 != 2147483647LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x505 = 1206450450151764125LLU;
	uint16_t x507 = UINT16_MAX;
	volatile uint8_t x508 = 91U;
	uint64_t t115 = 0LLU;

    t115 = ((x505+(x506%x507))%x508);

    if (t115 != 42LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = -1LL;
	int16_t x510 = INT16_MAX;
	int8_t x511 = INT8_MIN;

    t116 = ((x509+(x510%x511))%x512);

    if (t116 != 126LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x513 = INT32_MIN;
	uint16_t x514 = 54U;
	int64_t x515 = -1LL;
	int64_t t117 = 27LL;

    t117 = ((x513+(x514%x515))%x516);

    if (t117 != -8LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x518 = -1;
	volatile int8_t x520 = INT8_MAX;

    t118 = ((x517+(x518%x519))%x520);

    if (t118 != 86LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = INT32_MIN;
	static int16_t x527 = -1;
	int32_t x528 = -1;
	int64_t t119 = 18665707391794002LL;

    t119 = ((x525+(x526%x527))%x528);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x530 = -7404;
	static uint64_t x531 = 5903834108LLU;
	int8_t x532 = INT8_MAX;

    t120 = ((x529+(x530%x531))%x532);

    if (t120 != 86LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x533 = 2130;
	static int8_t x534 = INT8_MIN;
	uint16_t x535 = UINT16_MAX;
	static volatile int32_t t121 = 3402611;

    t121 = ((x533+(x534%x535))%x536);

    if (t121 != 82) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x537 = -12;
	int64_t x538 = 1925983182515LL;
	int16_t x539 = -1;
	uint32_t x540 = 20932U;
	int64_t t122 = -37LL;

    t122 = ((x537+(x538%x539))%x540);

    if (t122 != -12LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x541 = -6;
	uint8_t x542 = 8U;
	uint8_t x543 = 12U;
	int32_t x544 = INT32_MIN;
	int32_t t123 = 0;

    t123 = ((x541+(x542%x543))%x544);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x549 = 0U;
	int32_t x550 = INT32_MAX;
	static uint64_t x551 = UINT64_MAX;
	static int32_t x552 = -1;
	static uint64_t t124 = 540420176235LLU;

    t124 = ((x549+(x550%x551))%x552);

    if (t124 != 2147483647LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x556 = INT8_MIN;

    t125 = ((x553+(x554%x555))%x556);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x557 = 61006873LL;
	int32_t x558 = INT32_MIN;
	volatile int16_t x559 = 159;
	int32_t x560 = -1;
	volatile int64_t t126 = 5955691LL;

    t126 = ((x557+(x558%x559))%x560);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x561 = -6477;
	uint16_t x562 = 218U;
	int16_t x563 = 272;
	int64_t x564 = -1073601486679477LL;
	static volatile int64_t t127 = 25726038LL;

    t127 = ((x561+(x562%x563))%x564);

    if (t127 != -6259LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x565 = INT8_MIN;
	int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = 10U;
	volatile int64_t t128 = -836LL;

    t128 = ((x565+(x566%x567))%x568);

    if (t128 != -8LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x570 = UINT64_MAX;
	uint8_t x572 = 1U;

    t129 = ((x569+(x570%x571))%x572);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x577 = UINT32_MAX;
	uint8_t x578 = 7U;
	int16_t x580 = -13703;
	volatile uint32_t t130 = 31716350U;

    t130 = ((x577+(x578%x579))%x580);

    if (t130 != 6U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x581 = -14;
	uint32_t x582 = 235647U;
	int32_t x583 = -42281;
	int16_t x584 = INT16_MAX;
	uint32_t t131 = 12154268U;

    t131 = ((x581+(x582%x583))%x584);

    if (t131 != 6264U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	int8_t x588 = 2;
	int32_t t132 = -3014;

    t132 = ((x585+(x586%x587))%x588);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x589 = -1;
	uint16_t x590 = UINT16_MAX;
	uint16_t x591 = 14783U;

    t133 = ((x589+(x590%x591))%x592);

    if (t133 != 6402LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile int32_t x598 = INT32_MAX;
	int32_t x599 = INT32_MAX;
	static volatile int32_t t134 = 920040;

    t134 = ((x597+(x598%x599))%x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x601 = 93;
	volatile int64_t x602 = INT64_MAX;
	uint16_t x603 = 151U;
	static int64_t x604 = 448751259LL;
	int64_t t135 = -90174LL;

    t135 = ((x601+(x602%x603))%x604);

    if (t135 != 100LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x605 = INT16_MAX;
	uint8_t x606 = 115U;
	uint16_t x607 = 31U;
	volatile uint8_t x608 = 3U;
	volatile int32_t t136 = 1;

    t136 = ((x605+(x606%x607))%x608);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x609 = 37537LL;
	int32_t x610 = INT32_MIN;
	int8_t x612 = -1;
	int64_t t137 = -2444LL;

    t137 = ((x609+(x610%x611))%x612);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x613 = INT32_MIN;
	volatile int16_t x614 = INT16_MAX;
	volatile int32_t x615 = INT32_MIN;
	static uint32_t x616 = UINT32_MAX;

    t138 = ((x613+(x614%x615))%x616);

    if (t138 != 2147516415U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x617 = -1;
	int8_t x620 = -1;
	static volatile uint32_t t139 = 24466U;

    t139 = ((x617+(x618%x619))%x620);

    if (t139 != 49U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x622 = INT16_MIN;
	static volatile int8_t x623 = -2;
	uint64_t x624 = 3465890942455LLU;
	static volatile uint64_t t140 = 496490345710249LLU;

    t140 = ((x621+(x622%x623))%x624);

    if (t140 != 495988127863LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x625 = 410101232LLU;
	uint32_t x627 = UINT32_MAX;
	static volatile uint64_t x628 = 4605830188293421LLU;
	volatile uint64_t t141 = 238LLU;

    t141 = ((x625+(x626%x627))%x628);

    if (t141 != 4705068400LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x629 = INT64_MAX;
	int32_t x630 = -2717967;
	volatile int64_t x632 = 168142192100978LL;

    t142 = ((x629+(x630%x631))%x632);

    if (t142 != 100231347728595LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x633 = -1;
	int64_t x635 = -50119944868LL;
	static uint16_t x636 = UINT16_MAX;
	volatile int64_t t143 = -92071591305LL;

    t143 = ((x633+(x634%x635))%x636);

    if (t143 != -129LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x637 = INT16_MIN;
	int8_t x638 = INT8_MIN;
	static int32_t x639 = -1;
	volatile int32_t x640 = -251991325;
	int32_t t144 = 448;

    t144 = ((x637+(x638%x639))%x640);

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MIN;
	static uint32_t x644 = 2327U;
	volatile uint32_t t145 = 15U;

    t145 = ((x641+(x642%x643))%x644);

    if (t145 != 2135U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x645 = -1;
	uint16_t x646 = 3661U;
	volatile uint64_t x648 = UINT64_MAX;
	static volatile uint64_t t146 = 10LLU;

    t146 = ((x645+(x646%x647))%x648);

    if (t146 != 3660LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x651 = INT64_MIN;
	uint16_t x652 = 26U;
	int64_t t147 = -2807LL;

    t147 = ((x649+(x650%x651))%x652);

    if (t147 != -8LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x653 = -184;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 412124457U;
	volatile int64_t t148 = -1182702020147LL;

    t148 = ((x653+(x654%x655))%x656);

    if (t148 != -57LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x657 = -15;
	static int32_t x658 = INT32_MIN;
	uint32_t x659 = 1344999506U;
	uint32_t t149 = 92526278U;

    t149 = ((x657+(x658%x659))%x660);

    if (t149 != 802484127U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int16_t x662 = -3;
	volatile int32_t x663 = INT32_MIN;
	volatile int8_t x664 = INT8_MIN;

    t150 = ((x661+(x662%x663))%x664);

    if (t150 != 124) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x665 = -5493;
	int8_t x666 = INT8_MIN;
	int8_t x667 = -5;
	static volatile int64_t x668 = INT64_MIN;
	int64_t t151 = 443773562446807411LL;

    t151 = ((x665+(x666%x667))%x668);

    if (t151 != -5496LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x669 = INT32_MIN;
	volatile int64_t x671 = -1LL;
	uint16_t x672 = 7131U;
	int64_t t152 = 118LL;

    t152 = ((x669+(x670%x671))%x672);

    if (t152 != -4391LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x674 = 147090398LLU;
	volatile int16_t x675 = INT16_MIN;
	static int16_t x676 = INT16_MIN;
	uint64_t t153 = 55604889246880021LLU;

    t153 = ((x673+(x674%x675))%x676);

    if (t153 != 147123165LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x677 = INT64_MAX;
	int64_t x679 = INT64_MAX;
	int64_t x680 = 58764555604116LL;
	static int64_t t154 = -735805897153428LL;

    t154 = ((x677+(x678%x679))%x680);

    if (t154 != 39976566353142LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = INT16_MAX;
	volatile uint8_t x682 = UINT8_MAX;
	static int16_t x684 = INT16_MIN;
	int32_t t155 = 149;

    t155 = ((x681+(x682%x683))%x684);

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x685 = INT32_MAX;
	static int16_t x686 = -1;
	int8_t x687 = INT8_MIN;
	volatile int32_t t156 = -8845737;

    t156 = ((x685+(x686%x687))%x688);

    if (t156 != 126) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x689 = UINT16_MAX;
	static int16_t x690 = INT16_MIN;
	uint8_t x692 = UINT8_MAX;
	uint32_t t157 = 1U;

    t157 = ((x689+(x690%x691))%x692);

    if (t157 != 33U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x693 = 281362514160473LLU;
	uint64_t x694 = UINT64_MAX;
	int64_t x695 = INT64_MIN;
	int16_t x696 = -73;
	static volatile uint64_t t158 = 7LLU;

    t158 = ((x693+(x694%x695))%x696);

    if (t158 != 9223653399368936280LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = INT32_MIN;
	uint64_t x698 = UINT64_MAX;
	static volatile uint16_t x699 = UINT16_MAX;
	int32_t x700 = INT32_MIN;
	uint64_t t159 = 298305LLU;

    t159 = ((x697+(x698%x699))%x700);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = INT32_MIN;

    t160 = ((x701+(x702%x703))%x704);

    if (t160 != -32641) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = -1;
	int64_t x707 = INT64_MAX;
	int32_t x708 = 2013;

    t161 = ((x705+(x706%x707))%x708);

    if (t161 != -561LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x709 = -1;
	volatile int16_t x710 = -1;
	int16_t x711 = 30;
	int32_t t162 = 15044;

    t162 = ((x709+(x710%x711))%x712);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x713 = INT32_MAX;
	int16_t x714 = -1404;
	volatile uint32_t x715 = 29179847U;
	uint64_t x716 = 4LLU;

    t163 = ((x713+(x714%x715))%x716);

    if (t163 != 2LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x717 = 0U;
	int8_t x720 = INT8_MAX;

    t164 = ((x717+(x718%x719))%x720);

    if (t164 != -95) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x721 = INT16_MAX;
	uint8_t x722 = 6U;
	int64_t x723 = -1LL;
	int32_t x724 = 3928204;
	int64_t t165 = -16449762610732LL;

    t165 = ((x721+(x722%x723))%x724);

    if (t165 != 32767LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x725 = 92U;
	static uint16_t x726 = 3U;
	int32_t x727 = -1;
	volatile int32_t x728 = 4780;
	volatile int32_t t166 = 43;

    t166 = ((x725+(x726%x727))%x728);

    if (t166 != 92) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x729 = 53247LLU;
	volatile int8_t x730 = 7;
	static uint64_t x731 = 5456645898LLU;
	static volatile uint64_t t167 = 1736405109352427984LLU;

    t167 = ((x729+(x730%x731))%x732);

    if (t167 != 53254LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x741 = 292U;
	int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MIN;
	int64_t x744 = INT64_MIN;
	int64_t t168 = 10748498347387506LL;

    t168 = ((x741+(x742%x743))%x744);

    if (t168 != 292LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x745 = -1;
	int64_t x747 = INT64_MIN;
	volatile int16_t x748 = -1;
	volatile int64_t t169 = -62485LL;

    t169 = ((x745+(x746%x747))%x748);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x749 = 1;
	uint8_t x750 = UINT8_MAX;
	uint8_t x752 = UINT8_MAX;
	uint64_t t170 = 493091418LLU;

    t170 = ((x749+(x750%x751))%x752);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x753 = 88U;
	static volatile int32_t t171 = -10863575;

    t171 = ((x753+(x754%x755))%x756);

    if (t171 != 88) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x761 = INT64_MAX;
	int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MAX;
	volatile int64_t x764 = -1086203LL;
	int64_t t172 = -20983979203165846LL;

    t172 = ((x761+(x762%x763))%x764);

    if (t172 != 893155LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x765 = INT16_MAX;
	int16_t x766 = INT16_MIN;
	int64_t x767 = -1LL;
	static int64_t x768 = 7471228101819246LL;

    t173 = ((x765+(x766%x767))%x768);

    if (t173 != 32767LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x769 = -3;
	int16_t x770 = INT16_MIN;
	int8_t x772 = 1;
	static volatile int32_t t174 = 1;

    t174 = ((x769+(x770%x771))%x772);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MIN;
	static uint8_t x775 = 13U;
	volatile int32_t x776 = INT32_MIN;
	int32_t t175 = 289719;

    t175 = ((x773+(x774%x775))%x776);

    if (t175 != -32779) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x777 = INT8_MIN;
	int32_t x778 = INT32_MAX;
	int32_t x779 = INT32_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t176 = 2314777;

    t176 = ((x777+(x778%x779))%x780);

    if (t176 != 32639) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x781 = -8482;
	int8_t x783 = -28;

    t177 = ((x781+(x782%x783))%x784);

    if (t177 != -8483LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x786 = -1;
	static int64_t x787 = INT64_MAX;
	int16_t x788 = -16035;
	volatile int64_t t178 = -5545653586746847LL;

    t178 = ((x785+(x786%x787))%x788);

    if (t178 != 1394LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x789 = INT64_MIN;
	volatile int8_t x790 = INT8_MAX;
	volatile int64_t x792 = 797121744924214417LL;
	static uint64_t t179 = 804785600797843LLU;

    t179 = ((x789+(x790%x791))%x792);

    if (t179 != 455032842688417348LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x793 = -795087;
	static uint32_t x795 = UINT32_MAX;
	uint8_t x796 = 5U;
	volatile uint32_t t180 = 128759944U;

    t180 = ((x793+(x794%x795))%x796);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x797 = 67;
	static uint8_t x798 = UINT8_MAX;
	int8_t x800 = INT8_MIN;

    t181 = ((x797+(x798%x799))%x800);

    if (t181 != 66) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x801 = INT16_MAX;
	int64_t x802 = -1687900031078LL;
	volatile uint64_t x803 = UINT64_MAX;
	volatile uint64_t t182 = 195LLU;

    t182 = ((x801+(x802%x803))%x804);

    if (t182 != 18446742385809553305LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x805 = 4989U;
	volatile int16_t x807 = INT16_MAX;
	int16_t x808 = -12270;
	uint32_t t183 = 32061051U;

    t183 = ((x805+(x806%x807))%x808);

    if (t183 != 4990U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x809 = INT16_MIN;
	volatile uint8_t x810 = 95U;
	uint16_t x811 = UINT16_MAX;
	static int64_t x812 = INT64_MIN;

    t184 = ((x809+(x810%x811))%x812);

    if (t184 != -32673LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x817 = -53519;
	volatile int16_t x818 = INT16_MIN;
	int32_t x819 = -123739;
	uint32_t x820 = UINT32_MAX;

    t185 = ((x817+(x818%x819))%x820);

    if (t185 != 4294881009U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MIN;
	volatile int64_t x823 = INT64_MIN;
	static int64_t t186 = -6888775609472746LL;

    t186 = ((x821+(x822%x823))%x824);

    if (t186 != -463784LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x831 = INT8_MIN;
	static int64_t x832 = -1LL;

    t187 = ((x829+(x830%x831))%x832);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x834 = 27841024LLU;
	static uint32_t x835 = 2459U;
	uint32_t x836 = 29155U;
	volatile uint64_t t188 = 53745834LLU;

    t188 = ((x833+(x834%x835))%x836);

    if (t188 != 228LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x837 = INT32_MIN;
	int64_t x838 = INT64_MAX;
	uint16_t x839 = UINT16_MAX;
	volatile int64_t t189 = 937910798602826LL;

    t189 = ((x837+(x838%x839))%x840);

    if (t189 != -104621428LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x841 = 1887U;
	int16_t x842 = -1;
	uint32_t x844 = UINT32_MAX;
	uint32_t t190 = 343677864U;

    t190 = ((x841+(x842%x843))%x844);

    if (t190 != 1886U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x845 = INT32_MAX;
	static int16_t x846 = INT16_MIN;
	int64_t x847 = -4LL;
	int16_t x848 = INT16_MIN;
	static int64_t t191 = -3479686LL;

    t191 = ((x845+(x846%x847))%x848);

    if (t191 != 32767LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x849 = UINT16_MAX;
	uint64_t x850 = 919464368LLU;
	uint16_t x851 = UINT16_MAX;
	uint32_t x852 = 280U;
	uint64_t t192 = 15334967575LLU;

    t192 = ((x849+(x850%x851))%x852);

    if (t192 != 213LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x853 = -69554266;
	static volatile int8_t x854 = INT8_MIN;
	int16_t x855 = -577;
	int16_t x856 = INT16_MIN;

    t193 = ((x853+(x854%x855))%x856);

    if (t193 != -20698) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x857 = -60609234332882552LL;
	static volatile uint8_t x858 = 29U;
	static int64_t t194 = 1802913419LL;

    t194 = ((x857+(x858%x859))%x860);

    if (t194 != -2LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x865 = UINT64_MAX;
	static volatile int32_t x866 = INT32_MIN;
	static volatile uint8_t x867 = UINT8_MAX;
	int16_t x868 = 1;
	volatile uint64_t t195 = 3856026628463LLU;

    t195 = ((x865+(x866%x867))%x868);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x869 = INT8_MIN;
	int16_t x870 = INT16_MAX;
	int8_t x871 = -1;
	volatile int8_t x872 = -1;
	volatile int32_t t196 = 180;

    t196 = ((x869+(x870%x871))%x872);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x873 = INT64_MIN;
	static uint32_t x875 = 44630023U;
	static int8_t x876 = -14;
	static volatile int64_t t197 = 7184LL;

    t197 = ((x873+(x874%x875))%x876);

    if (t197 != -11LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x877 = -1;
	int16_t x878 = -1;
	int8_t x879 = INT8_MIN;
	volatile uint16_t x880 = 55U;
	static volatile int32_t t198 = 1014526620;

    t198 = ((x877+(x878%x879))%x880);

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x881 = INT8_MAX;
	static uint64_t x882 = 0LLU;
	static int16_t x883 = INT16_MIN;
	volatile uint32_t x884 = UINT32_MAX;
	uint64_t t199 = 13004297LLU;

    t199 = ((x881+(x882%x883))%x884);

    if (t199 != 127LLU) { NG(); } else { ; }
	
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

