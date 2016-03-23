
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

volatile int32_t x2 = -1;
int64_t x3 = INT64_MIN;
int8_t x4 = 1;
int32_t t1 = 40;
int16_t x14 = -2203;
int32_t x18 = 29086340;
int32_t x19 = INT32_MIN;
volatile int32_t t4 = -13837004;
uint16_t x28 = UINT16_MAX;
volatile int16_t x35 = INT16_MIN;
int32_t t9 = -59;
int64_t x42 = INT64_MAX;
volatile int32_t t10 = 209900;
volatile int32_t t11 = -99586;
volatile int64_t x49 = INT64_MIN;
int32_t x50 = INT32_MAX;
int16_t x54 = -1;
static volatile uint32_t x61 = UINT32_MAX;
int8_t x86 = 1;
int64_t x98 = INT64_MAX;
static volatile int32_t t24 = -923;
static int16_t x101 = 2;
int64_t x102 = -1LL;
static uint8_t x104 = 113U;
volatile int8_t x105 = INT8_MAX;
volatile int64_t x111 = 57164204LL;
int32_t t27 = 366984183;
static uint16_t x121 = UINT16_MAX;
static uint8_t x126 = 3U;
volatile int32_t t31 = 4311512;
int32_t x132 = INT32_MIN;
uint16_t x145 = 26U;
int32_t x146 = INT32_MIN;
static int32_t x149 = INT32_MIN;
static int16_t x152 = -1;
uint16_t x157 = 7067U;
volatile int8_t x159 = INT8_MIN;
static uint64_t x164 = 0LLU;
static int32_t x167 = INT32_MAX;
uint16_t x170 = 3U;
uint32_t x173 = 1855860078U;
uint8_t x174 = 53U;
volatile int32_t t43 = 2898308;
static int8_t x181 = INT8_MAX;
uint64_t x182 = 2059359079155874LLU;
volatile int16_t x183 = INT16_MIN;
static int32_t t45 = -1;
int32_t x187 = -535636393;
int64_t x192 = INT64_MIN;
volatile int32_t t48 = 215378;
int16_t x201 = INT16_MAX;
int32_t t50 = 80;
int64_t x209 = INT64_MAX;
volatile int16_t x216 = INT16_MAX;
static int32_t t53 = 343268;
int32_t t56 = -69440828;
uint32_t x230 = 106123U;
int8_t x237 = 27;
volatile uint16_t x240 = UINT16_MAX;
static volatile int32_t x250 = -1;
volatile int8_t x263 = INT8_MIN;
static int32_t t65 = -8630866;
int64_t x266 = -2483553824026LL;
uint16_t x271 = UINT16_MAX;
int16_t x273 = -1;
int8_t x276 = INT8_MIN;
uint64_t x277 = UINT64_MAX;
int64_t x279 = INT64_MIN;
static int16_t x285 = -8948;
uint8_t x293 = 5U;
int32_t x294 = INT32_MAX;
int32_t x295 = INT32_MIN;
int16_t x296 = -1;
static uint32_t x308 = UINT32_MAX;
volatile int32_t t76 = 10874851;
uint64_t x309 = 275581LLU;
int16_t x312 = INT16_MAX;
int16_t x314 = INT16_MIN;
volatile int32_t t78 = 1;
uint32_t x319 = UINT32_MAX;
volatile int32_t t79 = -358944;
int8_t x321 = 43;
static volatile int64_t x331 = INT64_MIN;
volatile int32_t x336 = 48918569;
static int8_t x342 = -5;
volatile uint8_t x348 = 10U;
static volatile int32_t t87 = 24;
int16_t x358 = -2636;
int32_t t89 = -90747167;
volatile int32_t t94 = 10975859;
int16_t x381 = INT16_MIN;
int16_t x388 = 3;
int8_t x389 = INT8_MAX;
static int16_t x397 = INT16_MAX;
int32_t t99 = 1720902;
static int16_t x407 = INT16_MIN;
uint16_t x411 = 9937U;
int32_t x418 = INT32_MIN;
static int32_t x419 = -4;
int32_t x420 = INT32_MAX;
volatile int64_t x421 = -1LL;
volatile int32_t t105 = -25;
int32_t x425 = 244;
int8_t x432 = INT8_MIN;
int32_t t107 = 1240445;
static int64_t x433 = INT64_MIN;
int64_t x435 = INT64_MIN;
static int32_t x436 = -1;
uint32_t x437 = 436681561U;
uint32_t x439 = 1U;
static int64_t x442 = -20204463LL;
uint32_t x451 = 11U;
int32_t x455 = 0;
uint32_t x456 = 116814531U;
int32_t t114 = 211;
uint64_t x465 = UINT64_MAX;
int16_t x470 = INT16_MAX;
volatile int16_t x473 = -15573;
int8_t x475 = -1;
static int8_t x481 = 8;
int32_t t120 = 1905670;
int8_t x487 = INT8_MIN;
int16_t x488 = -10;
int32_t x496 = -8334803;
volatile int32_t t123 = 4161;
uint16_t x501 = 63U;
uint16_t x505 = UINT16_MAX;
int64_t x507 = INT64_MIN;
uint32_t x513 = 421U;
volatile uint16_t x514 = 27601U;
uint32_t x515 = 128550967U;
uint8_t x517 = 1U;
volatile int32_t t129 = -919165;
volatile int32_t t131 = 6547;
uint8_t x530 = 0U;
static int32_t t132 = 435819235;
int64_t x540 = -1LL;
static int32_t t134 = -4;
volatile int32_t x545 = 153;
uint16_t x548 = 225U;
volatile int16_t x552 = -1;
static int32_t x553 = -1272668;
int16_t x557 = INT16_MAX;
int64_t x559 = INT64_MIN;
volatile uint8_t x560 = UINT8_MAX;
volatile int32_t t142 = -6430565;
uint8_t x576 = 113U;
uint8_t x577 = 44U;
int64_t x578 = -1LL;
int32_t x579 = INT32_MIN;
volatile int8_t x588 = INT8_MAX;
static int32_t t146 = 89805240;
int32_t t147 = -107607529;
int16_t x594 = -2410;
uint8_t x604 = 31U;
volatile int8_t x605 = INT8_MAX;
int8_t x608 = INT8_MIN;
uint64_t x609 = UINT64_MAX;
int64_t x613 = INT64_MIN;
int8_t x614 = -1;
int8_t x616 = INT8_MIN;
static volatile int32_t t153 = 1;
int8_t x620 = INT8_MAX;
static volatile uint8_t x631 = 13U;
static int8_t x633 = 15;
int8_t x634 = INT8_MIN;
int16_t x635 = INT16_MIN;
int64_t x638 = INT64_MAX;
int8_t x640 = INT8_MAX;
int8_t x644 = INT8_MIN;
uint32_t x649 = 84U;
uint32_t x652 = 507411U;
volatile int32_t t165 = 249;
static volatile int64_t x667 = INT64_MAX;
uint8_t x680 = 24U;
int32_t t170 = 5;
uint64_t x688 = UINT64_MAX;
int32_t t171 = -303;
uint16_t x692 = 217U;
uint16_t x693 = UINT16_MAX;
int8_t x707 = INT8_MIN;
static int32_t x711 = 10;
static volatile int64_t x716 = -1LL;
int32_t x719 = INT32_MIN;
uint64_t x723 = 13751016190LLU;
int8_t x729 = 12;
uint8_t x731 = UINT8_MAX;
static int64_t x735 = -1645223LL;
int16_t x737 = -10;
int64_t x741 = -913763947154LL;
uint64_t x742 = 1130393473LLU;
int8_t x757 = INT8_MIN;
int32_t t189 = 946;
int8_t x761 = -2;
uint16_t x767 = 279U;
int16_t x774 = INT16_MIN;
uint32_t x782 = UINT32_MAX;
int32_t x788 = 225439;
static int8_t x792 = 0;
int32_t t197 = -1972;
static int64_t x799 = INT64_MIN;
int8_t x800 = -13;


void f0(void) {
    	int64_t x1 = -1LL;
	volatile int32_t t0 = 42781467;

    t0 = ((x1|(x2!=x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 2533902960985LL;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;
	int32_t x8 = -6779;

    t1 = ((x5|(x6!=x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -423LL;
	volatile int64_t x10 = INT64_MIN;
	static volatile int32_t x11 = -1;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 92554;

    t2 = ((x9|(x10!=x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	static int64_t x15 = -449LL;
	volatile int8_t x16 = INT8_MAX;
	static volatile int32_t t3 = 28580;

    t3 = ((x13|(x14!=x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	volatile int8_t x20 = INT8_MAX;

    t4 = ((x17|(x18!=x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 66;
	uint16_t x22 = 6U;
	int16_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 4;

    t5 = ((x21|(x22!=x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x25 = INT8_MIN;
	uint8_t x26 = 5U;
	int16_t x27 = INT16_MIN;
	static volatile int32_t t6 = 58174;

    t6 = ((x25|(x26!=x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	static volatile int16_t x30 = INT16_MAX;
	int8_t x31 = -12;
	static volatile int16_t x32 = -1;
	int32_t t7 = -22735008;

    t7 = ((x29|(x30!=x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -536501946;
	int16_t x34 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = 1;

    t8 = ((x33|(x34!=x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x37 = -12673;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 117750146114609LLU;
	volatile int32_t x40 = INT32_MIN;

    t9 = ((x37|(x38!=x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -53;
	static volatile int8_t x43 = INT8_MAX;
	static int16_t x44 = -644;

    t10 = ((x41|(x42!=x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 1567U;
	int32_t x46 = INT32_MIN;
	uint8_t x47 = UINT8_MAX;
	static uint64_t x48 = 8815594571LLU;

    t11 = ((x45|(x46!=x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MAX;
	int32_t t12 = -3803;

    t12 = ((x49|(x50!=x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint64_t x55 = 10993208LLU;
	volatile uint32_t x56 = 77U;
	int32_t t13 = 7622028;

    t13 = ((x53|(x54!=x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -367134307;

    t14 = ((x57|(x58!=x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x62 = UINT32_MAX;
	static volatile int64_t x63 = INT64_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = -74281380;

    t15 = ((x61|(x62!=x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 978874789LLU;
	int32_t x66 = INT32_MIN;
	int8_t x67 = 38;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 898544;

    t16 = ((x65|(x66!=x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -1LL;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = -1;
	int64_t x72 = -1LL;
	volatile int32_t t17 = 99;

    t17 = ((x69|(x70!=x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = 2U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 0;

    t18 = ((x73|(x74!=x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	static int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -3046860;

    t19 = ((x77|(x78!=x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = -1;
	static int32_t x84 = 956422869;
	static int32_t t20 = -9483;

    t20 = ((x81|(x82!=x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x87 = -1;
	int16_t x88 = -1;
	static int32_t t21 = 1756734;

    t21 = ((x85|(x86!=x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	volatile int16_t x90 = -1;
	int32_t x91 = 413727794;
	static int16_t x92 = -68;
	volatile int32_t t22 = -76;

    t22 = ((x89|(x90!=x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 678U;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	static int32_t t23 = 486555;

    t23 = ((x93|(x94!=x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 0U;

    t24 = ((x97|(x98!=x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x103 = -1;
	static int32_t t25 = 153;

    t25 = ((x101|(x102!=x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = -52;
	int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	static int32_t t26 = 30;

    t26 = ((x105|(x106!=x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	int32_t x110 = 376044407;
	int8_t x112 = INT8_MAX;

    t27 = ((x109|(x110!=x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MAX;
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = -6632;
	volatile uint16_t x116 = 0U;
	static volatile int32_t t28 = 4;

    t28 = ((x113|(x114!=x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 0U;
	uint64_t x118 = 60825715LLU;
	static uint64_t x119 = 56LLU;
	static int16_t x120 = -1;
	int32_t t29 = 62340;

    t29 = ((x117|(x118!=x119))>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 890LLU;
	uint32_t x123 = 79909U;
	int16_t x124 = 110;
	static int32_t t30 = 4307;

    t30 = ((x121|(x122!=x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -1;
	volatile int16_t x127 = -1;
	uint8_t x128 = 37U;

    t31 = ((x125|(x126!=x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	volatile int32_t x130 = -1;
	volatile int8_t x131 = 0;
	volatile int32_t t32 = 744145;

    t32 = ((x129|(x130!=x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 97476697LLU;
	int8_t x134 = INT8_MIN;
	int8_t x135 = -54;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -578255;

    t33 = ((x133|(x134!=x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MAX;
	static volatile uint16_t x139 = 1U;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t34 = 7357;

    t34 = ((x137|(x138!=x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 3U;
	int8_t x143 = 4;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -2347208;

    t35 = ((x141|(x142!=x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x147 = INT8_MIN;
	static int8_t x148 = -1;
	volatile int32_t t36 = 84;

    t36 = ((x145|(x146!=x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = -1;
	uint16_t x151 = 324U;
	int32_t t37 = -231;

    t37 = ((x149|(x150!=x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	static volatile uint64_t x154 = UINT64_MAX;
	static int64_t x155 = INT64_MAX;
	volatile uint64_t x156 = 102265576LLU;
	static int32_t t38 = -923618744;

    t38 = ((x153|(x154!=x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = 1U;
	uint16_t x160 = 199U;
	int32_t t39 = -5449;

    t39 = ((x157|(x158!=x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 85U;
	uint64_t x163 = 114165087088912257LLU;
	volatile int32_t t40 = 216965457;

    t40 = ((x161|(x162!=x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x165 = 1U;
	int32_t x166 = INT32_MAX;
	volatile int16_t x168 = -1;
	volatile int32_t t41 = 293130271;

    t41 = ((x165|(x166!=x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	uint16_t x171 = 171U;
	static int32_t x172 = -1;
	int32_t t42 = 1;

    t42 = ((x169|(x170!=x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x175 = 2229497;
	static int64_t x176 = INT64_MAX;

    t43 = ((x173|(x174!=x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 3U;
	volatile int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = 7043;
	int32_t t44 = -1538;

    t44 = ((x177|(x178!=x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x184 = 6072LLU;

    t45 = ((x181|(x182!=x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 16U;
	volatile int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 2829;

    t46 = ((x185|(x186!=x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -1;
	static int16_t x190 = INT16_MAX;
	uint8_t x191 = 0U;
	int32_t t47 = -2926;

    t47 = ((x189|(x190!=x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -32592LL;
	int32_t x194 = -1;
	uint32_t x195 = 1004546482U;
	volatile int32_t x196 = 3;

    t48 = ((x193|(x194!=x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 7574U;
	int32_t x200 = 0;
	int32_t t49 = -325;

    t49 = ((x197|(x198!=x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x202 = INT64_MAX;
	uint8_t x203 = 8U;
	uint16_t x204 = UINT16_MAX;

    t50 = ((x201|(x202!=x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	volatile int16_t x206 = -1;
	int64_t x207 = -1LL;
	int16_t x208 = -1;
	int32_t t51 = 2759420;

    t51 = ((x205|(x206!=x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x210 = UINT8_MAX;
	volatile int64_t x211 = -1LL;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -666;

    t52 = ((x209|(x210!=x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MIN;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MIN;

    t53 = ((x213|(x214!=x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	uint16_t x218 = 2004U;
	int16_t x219 = INT16_MAX;
	int8_t x220 = -1;
	volatile int32_t t54 = 137323118;

    t54 = ((x217|(x218!=x219))>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MIN;
	static uint8_t x222 = 79U;
	volatile int8_t x223 = -1;
	int64_t x224 = -6730LL;
	int32_t t55 = 74256;

    t55 = ((x221|(x222!=x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 9U;
	uint8_t x226 = 3U;
	static int32_t x227 = 1487;
	static int32_t x228 = -1;

    t56 = ((x225|(x226!=x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	volatile int64_t x231 = INT64_MAX;
	uint8_t x232 = 0U;
	int32_t t57 = -10;

    t57 = ((x229|(x230!=x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	static int64_t x234 = -22185357816LL;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = 9760;
	volatile int32_t t58 = 5602627;

    t58 = ((x233|(x234!=x235))>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = -34518;
	int64_t x239 = INT64_MAX;
	volatile int32_t t59 = 6;

    t59 = ((x237|(x238!=x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	static int32_t x242 = INT32_MIN;
	int16_t x243 = -10621;
	static volatile int32_t x244 = -1;
	volatile int32_t t60 = 90;

    t60 = ((x241|(x242!=x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MIN;
	uint32_t x246 = 1362050754U;
	volatile int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;
	static int32_t t61 = -15791602;

    t61 = ((x245|(x246!=x247))>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	static uint16_t x251 = 7U;
	volatile int32_t x252 = 1581407;
	int32_t t62 = -441849;

    t62 = ((x249|(x250!=x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 0;
	uint32_t x254 = 12U;
	int16_t x255 = 11883;
	volatile int64_t x256 = -1LL;
	int32_t t63 = -26111;

    t63 = ((x253|(x254!=x255))>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = 2973019;
	volatile int8_t x259 = 0;
	uint8_t x260 = 66U;
	int32_t t64 = -1;

    t64 = ((x257|(x258!=x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 24072U;
	int32_t x262 = INT32_MIN;
	int32_t x264 = -1;

    t65 = ((x261|(x262!=x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	volatile int32_t x267 = INT32_MIN;
	static uint32_t x268 = 1706923391U;
	int32_t t66 = -1;

    t66 = ((x265|(x266!=x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 19;
	static int16_t x270 = INT16_MAX;
	uint32_t x272 = 61845710U;
	int32_t t67 = 84374;

    t67 = ((x269|(x270!=x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = 1;
	int64_t x275 = INT64_MIN;
	volatile int32_t t68 = -4140475;

    t68 = ((x273|(x274!=x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 365U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 394686005;

    t69 = ((x277|(x278!=x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 631721644593LLU;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = 977938LLU;
	int32_t t70 = 592355;

    t70 = ((x281|(x282!=x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MIN;
	volatile int8_t x287 = INT8_MIN;
	static int16_t x288 = -1;
	int32_t t71 = -208421853;

    t71 = ((x285|(x286!=x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -53006625LL;
	uint8_t x290 = 2U;
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = INT8_MIN;
	int32_t t72 = 9223;

    t72 = ((x289|(x290!=x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t t73 = 5640;

    t73 = ((x293|(x294!=x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = 372175;
	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -1825;

    t74 = ((x297|(x298!=x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	volatile uint16_t x302 = UINT16_MAX;
	static int32_t x303 = 709;
	volatile int64_t x304 = -1LL;
	volatile int32_t t75 = -2;

    t75 = ((x301|(x302!=x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 6U;
	uint8_t x306 = 1U;
	volatile int32_t x307 = INT32_MIN;

    t76 = ((x305|(x306!=x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = UINT16_MAX;
	int32_t t77 = -16012;

    t77 = ((x309|(x310!=x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MAX;
	int32_t x315 = 45200897;
	volatile int32_t x316 = INT32_MIN;

    t78 = ((x313|(x314!=x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 1836;
	int16_t x318 = 1354;
	static int16_t x320 = 749;

    t79 = ((x317|(x318!=x319))>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;
	int32_t t80 = -10;

    t80 = ((x321|(x322!=x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 56U;
	static uint32_t x326 = 1482U;
	int16_t x327 = -174;
	uint16_t x328 = 27U;
	volatile int32_t t81 = -157;

    t81 = ((x325|(x326!=x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	uint8_t x330 = 1U;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -59;

    t82 = ((x329|(x330!=x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MAX;
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = 75558410U;
	int32_t t83 = 0;

    t83 = ((x333|(x334!=x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	static int64_t x338 = 281453044952LL;
	volatile uint64_t x339 = 14195LLU;
	uint64_t x340 = UINT64_MAX;
	int32_t t84 = 5963356;

    t84 = ((x337|(x338!=x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -1;
	int8_t x343 = INT8_MAX;
	int64_t x344 = -1LL;
	static volatile int32_t t85 = -669397;

    t85 = ((x341|(x342!=x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MAX;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	int32_t t86 = 62505;

    t86 = ((x345|(x346!=x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = 54435;
	static uint64_t x350 = UINT64_MAX;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;

    t87 = ((x349|(x350!=x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 14205U;
	int64_t x354 = INT64_MAX;
	static uint32_t x355 = 2944U;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -5253;

    t88 = ((x353|(x354!=x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 3U;
	volatile int64_t x359 = -1LL;
	int32_t x360 = -1;

    t89 = ((x357|(x358!=x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x361 = 20295595;
	volatile uint32_t x362 = UINT32_MAX;
	int32_t x363 = -1;
	int64_t x364 = INT64_MAX;
	int32_t t90 = 864504543;

    t90 = ((x361|(x362!=x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 0U;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	static int32_t x368 = INT32_MAX;
	static int32_t t91 = 640197278;

    t91 = ((x365|(x366!=x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -1;
	volatile int16_t x370 = INT16_MIN;
	volatile int64_t x371 = 44910877994LL;
	static volatile int16_t x372 = 1;
	int32_t t92 = 12318080;

    t92 = ((x369|(x370!=x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x373 = 6U;
	volatile int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = -115004571;
	int32_t t93 = 511324;

    t93 = ((x373|(x374!=x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	static volatile uint16_t x379 = 3816U;
	volatile int8_t x380 = 7;

    t94 = ((x377|(x378!=x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x382 = 3;
	static uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 2;

    t95 = ((x381|(x382!=x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	int64_t x386 = 18448379428728LL;
	uint8_t x387 = 29U;
	volatile int32_t t96 = -5476235;

    t96 = ((x385|(x386!=x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x390 = 2583U;
	uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -273;

    t97 = ((x389|(x390!=x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = -4954;
	static volatile int32_t t98 = 2182817;

    t98 = ((x393|(x394!=x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x398 = -69150LL;
	int16_t x399 = -1;
	int8_t x400 = -1;

    t99 = ((x397|(x398!=x399))>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x401 = UINT8_MAX;
	volatile int64_t x402 = -1LL;
	int32_t x403 = -1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t100 = 89;

    t100 = ((x401|(x402!=x403))>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	int8_t x406 = 0;
	volatile int8_t x408 = 14;
	int32_t t101 = -24814;

    t101 = ((x405|(x406!=x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = -28;
	int16_t x410 = 1;
	volatile uint8_t x412 = UINT8_MAX;
	static int32_t t102 = 72018144;

    t102 = ((x409|(x410!=x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = 0;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = UINT64_MAX;
	static uint16_t x416 = 126U;
	volatile int32_t t103 = 92777;

    t103 = ((x413|(x414!=x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x417 = INT64_MAX;
	volatile int32_t t104 = 50;

    t104 = ((x417|(x418!=x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x422 = 3534U;
	static volatile uint8_t x423 = 39U;
	static uint16_t x424 = 25593U;

    t105 = ((x421|(x422!=x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x426 = INT32_MAX;
	int8_t x427 = -4;
	int64_t x428 = -333896LL;
	volatile int32_t t106 = 0;

    t106 = ((x425|(x426!=x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = -1;
	int16_t x430 = INT16_MAX;
	int8_t x431 = 5;

    t107 = ((x429|(x430!=x431))>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x434 = -1;
	static int32_t t108 = -94595233;

    t108 = ((x433|(x434!=x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = -1;
	uint8_t x440 = UINT8_MAX;
	int32_t t109 = 78344923;

    t109 = ((x437|(x438!=x439))>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -1LL;
	uint64_t x443 = 7606239734504571820LLU;
	int32_t x444 = 4313;
	volatile int32_t t110 = -7128149;

    t110 = ((x441|(x442!=x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x445 = -1;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = -26;
	int8_t x448 = 2;
	int32_t t111 = 230574;

    t111 = ((x445|(x446!=x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = -13;
	uint8_t x450 = 78U;
	uint64_t x452 = 659083734728767LLU;
	static volatile int32_t t112 = -14061352;

    t112 = ((x449|(x450!=x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = 3958U;
	volatile uint32_t x454 = UINT32_MAX;
	volatile int32_t t113 = 4172277;

    t113 = ((x453|(x454!=x455))>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile int64_t x458 = 858802635LL;
	static int32_t x459 = 2957;
	static int32_t x460 = INT32_MIN;

    t114 = ((x457|(x458!=x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	int16_t x462 = 138;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MIN;
	static int32_t t115 = -69;

    t115 = ((x461|(x462!=x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x466 = INT64_MIN;
	int64_t x467 = 81858245389472LL;
	int16_t x468 = INT16_MAX;
	static volatile int32_t t116 = 15468;

    t116 = ((x465|(x466!=x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	int8_t x471 = INT8_MAX;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t117 = -58223;

    t117 = ((x469|(x470!=x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = -1LL;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t118 = 0;

    t118 = ((x473|(x474!=x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int32_t x478 = -69091;
	int16_t x479 = INT16_MIN;
	static volatile int32_t x480 = INT32_MIN;
	static int32_t t119 = -15;

    t119 = ((x477|(x478!=x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MIN;
	int32_t x483 = -27465517;
	static int64_t x484 = -84LL;

    t120 = ((x481|(x482!=x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x486 = INT16_MAX;
	int32_t t121 = -4329;

    t121 = ((x485|(x486!=x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MAX;
	int64_t x491 = 5282125361717224LL;
	int32_t x492 = 6455142;
	volatile int32_t t122 = -5924;

    t122 = ((x489|(x490!=x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 14U;
	int8_t x494 = INT8_MIN;
	volatile int8_t x495 = 6;

    t123 = ((x493|(x494!=x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	int16_t x498 = 175;
	int64_t x499 = -1LL;
	uint16_t x500 = 3203U;
	static volatile int32_t t124 = -1026972;

    t124 = ((x497|(x498!=x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;
	volatile uint16_t x504 = 6126U;
	int32_t t125 = 2082;

    t125 = ((x501|(x502!=x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 110678LLU;
	static uint64_t x508 = 510953901640486LLU;
	volatile int32_t t126 = -2482303;

    t126 = ((x505|(x506!=x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 3U;
	uint16_t x510 = 13147U;
	uint64_t x511 = 28437591359074LLU;
	static volatile int32_t x512 = INT32_MAX;
	int32_t t127 = 2;

    t127 = ((x509|(x510!=x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x516 = INT64_MIN;
	volatile int32_t t128 = 3115396;

    t128 = ((x513|(x514!=x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x518 = UINT8_MAX;
	int16_t x519 = 14988;
	int8_t x520 = INT8_MIN;

    t129 = ((x517|(x518!=x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 2U;
	static volatile int8_t x522 = INT8_MAX;
	volatile uint16_t x523 = 1864U;
	volatile int16_t x524 = 59;
	int32_t t130 = 2669482;

    t130 = ((x521|(x522!=x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 30377U;
	int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	int32_t x528 = 27551;

    t131 = ((x525|(x526!=x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 441736;
	int64_t x531 = INT64_MAX;
	int8_t x532 = -1;

    t132 = ((x529|(x530!=x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x533 = -1;
	int16_t x534 = -1;
	int8_t x535 = INT8_MAX;
	int16_t x536 = -7;
	volatile int32_t t133 = -1;

    t133 = ((x533|(x534!=x535))>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 1U;
	uint64_t x538 = UINT64_MAX;
	int16_t x539 = INT16_MIN;

    t134 = ((x537|(x538!=x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	static int32_t x542 = -13387;
	static int64_t x543 = INT64_MIN;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 3425;

    t135 = ((x541|(x542!=x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = 4U;
	int32_t x547 = 993950084;
	volatile int32_t t136 = 373;

    t136 = ((x545|(x546!=x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 0LLU;
	static uint16_t x550 = 30U;
	uint64_t x551 = 6223476263522889LLU;
	volatile int32_t t137 = -124;

    t137 = ((x549|(x550!=x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x554 = INT64_MIN;
	static uint32_t x555 = 2715U;
	volatile int32_t x556 = -55;
	int32_t t138 = 1;

    t138 = ((x553|(x554!=x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -27;
	static volatile int32_t t139 = 684264506;

    t139 = ((x557|(x558!=x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 95709U;
	uint8_t x562 = 13U;
	volatile uint64_t x563 = UINT64_MAX;
	int8_t x564 = INT8_MIN;
	volatile int32_t t140 = -106754668;

    t140 = ((x561|(x562!=x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	volatile uint64_t x566 = 1563606LLU;
	int8_t x567 = INT8_MAX;
	int8_t x568 = INT8_MAX;
	volatile int32_t t141 = -10707;

    t141 = ((x565|(x566!=x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 3546U;
	int16_t x570 = INT16_MAX;
	volatile int8_t x571 = INT8_MAX;
	volatile uint8_t x572 = 0U;

    t142 = ((x569|(x570!=x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	uint64_t x574 = 574979945888642545LLU;
	static int8_t x575 = 7;
	static int32_t t143 = -151;

    t143 = ((x573|(x574!=x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x580 = -1;
	int32_t t144 = 48777;

    t144 = ((x577|(x578!=x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -7;
	static int16_t x582 = INT16_MIN;
	uint8_t x583 = 3U;
	uint64_t x584 = 3LLU;
	volatile int32_t t145 = -34310713;

    t145 = ((x581|(x582!=x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -19339;
	static volatile uint16_t x586 = 1339U;
	int64_t x587 = INT64_MIN;

    t146 = ((x585|(x586!=x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 7703426986119007288LLU;
	int8_t x590 = INT8_MIN;
	static int8_t x591 = INT8_MIN;
	static int64_t x592 = INT64_MAX;

    t147 = ((x589|(x590!=x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	volatile int8_t x595 = INT8_MAX;
	volatile uint16_t x596 = 6822U;
	static int32_t t148 = -1;

    t148 = ((x593|(x594!=x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 31U;
	int8_t x598 = 0;
	volatile uint32_t x599 = 2U;
	static uint16_t x600 = 2U;
	int32_t t149 = -15352;

    t149 = ((x597|(x598!=x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = -23;
	static int64_t x603 = -1LL;
	int32_t t150 = 0;

    t150 = ((x601|(x602!=x603))>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	uint16_t x607 = 10U;
	volatile int32_t t151 = -63702599;

    t151 = ((x605|(x606!=x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x610 = 7U;
	int8_t x611 = -1;
	int8_t x612 = 15;
	int32_t t152 = -337;

    t152 = ((x609|(x610!=x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x615 = 4;

    t153 = ((x613|(x614!=x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 14U;
	int16_t x618 = INT16_MIN;
	volatile uint32_t x619 = 708295994U;
	volatile int32_t t154 = -1967728;

    t154 = ((x617|(x618!=x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -12552281861LL;
	static volatile int64_t x622 = INT64_MAX;
	int8_t x623 = -47;
	static uint32_t x624 = 294087794U;
	int32_t t155 = -12;

    t155 = ((x621|(x622!=x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = INT16_MIN;
	static uint64_t x626 = 7289102454152833791LLU;
	uint32_t x627 = 130120U;
	int16_t x628 = 2875;
	int32_t t156 = 67;

    t156 = ((x625|(x626!=x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 250866261229LLU;
	int8_t x630 = 0;
	uint16_t x632 = 189U;
	int32_t t157 = -30073;

    t157 = ((x629|(x630!=x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x636 = -1;
	volatile int32_t t158 = 5;

    t158 = ((x633|(x634!=x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MIN;
	int16_t x639 = -1;
	volatile int32_t t159 = -24191723;

    t159 = ((x637|(x638!=x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 144U;
	int16_t x642 = INT16_MAX;
	static int32_t x643 = 20044010;
	volatile int32_t t160 = 498993698;

    t160 = ((x641|(x642!=x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = -1LL;
	int8_t x646 = 1;
	int32_t x647 = INT32_MIN;
	uint64_t x648 = 2161574344740818LLU;
	int32_t t161 = 54840212;

    t161 = ((x645|(x646!=x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x650 = -1;
	int8_t x651 = INT8_MIN;
	volatile int32_t t162 = -13638180;

    t162 = ((x649|(x650!=x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	int64_t x654 = -11081441260LL;
	int32_t x655 = INT32_MIN;
	static uint64_t x656 = 249536247LLU;
	int32_t t163 = 2978;

    t163 = ((x653|(x654!=x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 62U;
	static volatile uint16_t x658 = 1U;
	uint64_t x659 = 55732359284983508LLU;
	volatile int32_t x660 = INT32_MIN;
	volatile int32_t t164 = 2;

    t164 = ((x657|(x658!=x659))>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = -1LL;
	static uint64_t x663 = UINT64_MAX;
	int8_t x664 = 2;

    t165 = ((x661|(x662!=x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MIN;
	uint8_t x666 = UINT8_MAX;
	uint8_t x668 = 5U;
	volatile int32_t t166 = 7300;

    t166 = ((x665|(x666!=x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MAX;
	int64_t x670 = INT64_MAX;
	static int8_t x671 = -1;
	uint64_t x672 = 132853982LLU;
	static int32_t t167 = 14;

    t167 = ((x669|(x670!=x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	int32_t x674 = -1;
	volatile int32_t x675 = -52730;
	int16_t x676 = -9042;
	volatile int32_t t168 = 186282324;

    t168 = ((x673|(x674!=x675))>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	uint16_t x678 = UINT16_MAX;
	int64_t x679 = -1LL;
	volatile int32_t t169 = 6;

    t169 = ((x677|(x678!=x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 2945524590568LLU;
	int8_t x682 = -1;
	static int32_t x683 = INT32_MIN;
	int16_t x684 = INT16_MAX;

    t170 = ((x681|(x682!=x683))>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = UINT16_MAX;
	int16_t x686 = INT16_MAX;
	int32_t x687 = INT32_MIN;

    t171 = ((x685|(x686!=x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x689 = INT32_MAX;
	static uint64_t x690 = 480262743806098193LLU;
	uint64_t x691 = 265LLU;
	volatile int32_t t172 = 930677566;

    t172 = ((x689|(x690!=x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x694 = 0;
	int8_t x695 = -5;
	volatile uint64_t x696 = 1276336LLU;
	volatile int32_t t173 = 123181;

    t173 = ((x693|(x694!=x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -2;
	volatile int16_t x698 = INT16_MAX;
	volatile int64_t x699 = INT64_MAX;
	int16_t x700 = -1;
	volatile int32_t t174 = 296;

    t174 = ((x697|(x698!=x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 1U;
	static int64_t x702 = -1LL;
	int32_t x703 = INT32_MAX;
	int32_t x704 = INT32_MAX;
	int32_t t175 = 97287;

    t175 = ((x701|(x702!=x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 37U;
	int16_t x706 = INT16_MAX;
	int16_t x708 = INT16_MIN;
	int32_t t176 = -626;

    t176 = ((x705|(x706!=x707))>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	int32_t x710 = INT32_MIN;
	uint64_t x712 = UINT64_MAX;
	int32_t t177 = -16273;

    t177 = ((x709|(x710!=x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 4U;
	int32_t x714 = INT32_MIN;
	volatile int64_t x715 = -1015609732LL;
	static volatile int32_t t178 = 3;

    t178 = ((x713|(x714!=x715))>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -2;
	int8_t x718 = INT8_MIN;
	int64_t x720 = INT64_MAX;
	volatile int32_t t179 = -312;

    t179 = ((x717|(x718!=x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 261835843055015034LLU;
	static uint64_t x722 = UINT64_MAX;
	uint32_t x724 = 965U;
	volatile int32_t t180 = -50;

    t180 = ((x721|(x722!=x723))>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = 15;
	int16_t x726 = INT16_MIN;
	int16_t x727 = -3;
	volatile int32_t x728 = INT32_MIN;
	int32_t t181 = 30114;

    t181 = ((x725|(x726!=x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MIN;
	int64_t x732 = -3939LL;
	int32_t t182 = 2;

    t182 = ((x729|(x730!=x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	static int8_t x734 = INT8_MIN;
	int32_t x736 = -5170;
	volatile int32_t t183 = 11;

    t183 = ((x733|(x734!=x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x738 = INT32_MIN;
	int32_t x739 = -1;
	static volatile uint32_t x740 = 743U;
	int32_t t184 = -91970;

    t184 = ((x737|(x738!=x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x743 = 1860641LLU;
	int32_t x744 = INT32_MIN;
	int32_t t185 = 40890828;

    t185 = ((x741|(x742!=x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 7972U;
	uint64_t x746 = 806869440LLU;
	int32_t x747 = INT32_MIN;
	uint64_t x748 = UINT64_MAX;
	int32_t t186 = -4;

    t186 = ((x745|(x746!=x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static uint16_t x750 = 54U;
	static uint8_t x751 = 1U;
	uint64_t x752 = UINT64_MAX;
	int32_t t187 = 8320380;

    t187 = ((x749|(x750!=x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = -1;
	static int32_t x754 = 3313;
	uint32_t x755 = 6198410U;
	static uint16_t x756 = UINT16_MAX;
	static volatile int32_t t188 = 47846;

    t188 = ((x753|(x754!=x755))>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x758 = 25LLU;
	int8_t x759 = 0;
	int32_t x760 = INT32_MIN;

    t189 = ((x757|(x758!=x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 28794071781591LLU;
	volatile int64_t x763 = INT64_MIN;
	volatile int32_t x764 = 1;
	int32_t t190 = 1711;

    t190 = ((x761|(x762!=x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -761403040;
	int16_t x766 = -1195;
	static int64_t x768 = -70600LL;
	int32_t t191 = -3308;

    t191 = ((x765|(x766!=x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = 1;
	volatile int64_t x770 = INT64_MAX;
	uint32_t x771 = 1749U;
	int16_t x772 = 5;
	int32_t t192 = -301;

    t192 = ((x769|(x770!=x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = INT16_MIN;
	volatile int8_t x775 = INT8_MAX;
	int8_t x776 = INT8_MIN;
	int32_t t193 = 941;

    t193 = ((x773|(x774!=x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -9070446170359919LL;
	volatile int16_t x778 = -1;
	uint8_t x779 = UINT8_MAX;
	uint8_t x780 = 1U;
	static volatile int32_t t194 = -3631;

    t194 = ((x777|(x778!=x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	int8_t x783 = INT8_MIN;
	static volatile int16_t x784 = -1;
	int32_t t195 = 587;

    t195 = ((x781|(x782!=x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	uint16_t x786 = 7142U;
	int16_t x787 = INT16_MIN;
	volatile int32_t t196 = 248011;

    t196 = ((x785|(x786!=x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 7667874LLU;
	uint32_t x790 = 4002U;
	uint8_t x791 = UINT8_MAX;

    t197 = ((x789|(x790!=x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 4;
	volatile int64_t x794 = INT64_MIN;
	int64_t x795 = -268354138727745LL;
	static int64_t x796 = -1LL;
	int32_t t198 = 1;

    t198 = ((x793|(x794!=x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	static volatile uint32_t x798 = UINT32_MAX;
	volatile int32_t t199 = -4619629;

    t199 = ((x797|(x798!=x799))>x800);

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

