
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

volatile int32_t x1 = -1;
int8_t x3 = 0;
static uint8_t x11 = UINT8_MAX;
static int8_t x12 = INT8_MIN;
static volatile int32_t t2 = -16;
volatile int8_t x14 = -1;
uint32_t x21 = 0U;
int32_t x23 = INT32_MIN;
uint32_t x25 = UINT32_MAX;
volatile int64_t x26 = INT64_MAX;
volatile int32_t x28 = 43400;
int16_t x29 = 23;
static int64_t x37 = INT64_MIN;
int8_t x40 = INT8_MIN;
int64_t x44 = 15910429LL;
static uint32_t x48 = UINT32_MAX;
int8_t x49 = 0;
static int8_t x52 = -1;
static volatile int64_t x68 = 316272675865658LL;
int64_t x85 = -1LL;
int16_t x90 = -1;
int16_t x95 = -1;
uint64_t t22 = 6932680240LLU;
static uint32_t x98 = 7897U;
int8_t x101 = -1;
int16_t x103 = INT16_MIN;
int64_t x105 = INT64_MIN;
int64_t x147 = -32267241450LL;
static uint32_t x150 = 48122664U;
static uint32_t x154 = UINT32_MAX;
volatile int32_t t37 = -1;
volatile int16_t x170 = 16;
uint8_t x174 = UINT8_MAX;
uint32_t x178 = 940U;
int16_t x184 = INT16_MIN;
static int64_t x186 = -132234475LL;
int8_t x189 = INT8_MIN;
int16_t x191 = -1;
uint8_t x193 = UINT8_MAX;
static int64_t t47 = 12708650294LL;
static int16_t x199 = INT16_MIN;
volatile int64_t x200 = -1LL;
int16_t x205 = INT16_MIN;
static int32_t x210 = 115;
volatile int32_t t54 = -181744;
static int8_t x227 = 0;
int64_t x237 = 1LL;
static int64_t x242 = INT64_MIN;
uint8_t x243 = UINT8_MAX;
volatile int64_t x246 = INT64_MIN;
volatile int32_t x262 = 65228;
volatile int16_t x267 = -1;
static int16_t x268 = INT16_MIN;
uint16_t x275 = UINT16_MAX;
uint8_t x282 = UINT8_MAX;
volatile int16_t x290 = 11812;
int32_t x295 = -1;
int32_t x300 = -1;
volatile int32_t t77 = -24374;
static int16_t x318 = INT16_MIN;
int8_t x320 = 8;
uint32_t x329 = 31631U;
uint64_t t82 = 11572051809231LLU;
uint64_t t84 = 142587978086013094LLU;
int8_t x345 = INT8_MAX;
volatile int64_t x352 = INT64_MIN;
int16_t x353 = INT16_MAX;
volatile int32_t x365 = INT32_MIN;
int32_t t91 = 3507;
static int32_t x375 = INT32_MAX;
volatile int32_t t92 = -225260292;
static int64_t x378 = INT64_MIN;
volatile int16_t x379 = INT16_MAX;
int64_t x382 = -65LL;
int64_t x384 = -1LL;
volatile int64_t t94 = 238115903703LL;
uint64_t x387 = 126LLU;
static int32_t t96 = -2024;
uint16_t x393 = 1U;
uint64_t x396 = 1LLU;
volatile uint64_t t97 = 167076296894LLU;
int32_t x400 = INT32_MAX;
static int32_t t98 = -1383;
int32_t x402 = INT32_MIN;
int8_t x404 = INT8_MIN;
int32_t x413 = INT32_MAX;
static int32_t x416 = -1;
volatile int64_t x429 = -1203753796594149LL;
volatile int32_t x451 = INT32_MAX;
int8_t x456 = INT8_MIN;
uint32_t x462 = 3U;
int32_t x465 = -23081;
int8_t x467 = INT8_MIN;
int32_t x468 = INT32_MIN;
int16_t x471 = INT16_MIN;
static uint64_t t115 = 29817176833316LLU;
int32_t x479 = -1;
volatile int32_t x484 = INT32_MIN;
volatile int32_t t118 = 57285;
volatile int32_t x485 = -1776;
volatile uint8_t x493 = 71U;
int64_t t121 = 2445979535500399836LL;
volatile int16_t x497 = INT16_MIN;
int16_t x501 = 4531;
uint64_t x502 = UINT64_MAX;
int64_t x521 = 190958088731136775LL;
volatile int32_t x523 = INT32_MIN;
int64_t x524 = -14714131221LL;
int32_t x534 = INT32_MIN;
volatile int16_t x536 = INT16_MIN;
int32_t t131 = 26596232;
int32_t x552 = -5710585;
volatile int32_t t135 = -458;
int16_t x555 = -619;
volatile int32_t t136 = 164927;
int32_t x562 = INT32_MIN;
int8_t x568 = -1;
int32_t t139 = 26155790;
uint8_t x576 = 116U;
uint64_t x580 = 19029092LLU;
volatile uint64_t t142 = 63686559LLU;
static int16_t x589 = 65;
volatile uint16_t x591 = UINT16_MAX;
volatile int32_t t146 = -10;
int64_t x599 = -1LL;
int32_t x600 = INT32_MIN;
int32_t t147 = 6548320;
static uint16_t x605 = UINT16_MAX;
int64_t x608 = INT64_MIN;
int64_t x612 = INT64_MIN;
int16_t x616 = -1;
int32_t t152 = 6703440;
int8_t x621 = -55;
int8_t x624 = INT8_MIN;
int64_t x625 = INT64_MIN;
int8_t x628 = INT8_MIN;
uint64_t x630 = UINT64_MAX;
int32_t x631 = INT32_MAX;
int16_t x636 = -1;
int64_t x640 = INT64_MAX;
int64_t x641 = -1LL;
uint8_t x643 = UINT8_MAX;
int16_t x645 = INT16_MAX;
static int8_t x646 = INT8_MIN;
uint32_t t159 = 0U;
uint8_t x651 = 91U;
int16_t x652 = 2;
int64_t x653 = INT64_MAX;
static int8_t x656 = -1;
volatile uint64_t x660 = 2578LLU;
int16_t x661 = INT16_MAX;
static int64_t x662 = -1LL;
volatile int8_t x666 = INT8_MAX;
volatile uint32_t x673 = 33016U;
static int16_t x676 = INT16_MIN;
volatile int8_t x680 = 2;
int16_t x681 = INT16_MIN;
int32_t x682 = 260384;
volatile int32_t t169 = -7071;
int32_t x693 = INT32_MIN;
volatile uint8_t x699 = UINT8_MAX;
volatile int32_t t172 = 2005;
volatile int8_t x706 = 0;
static int8_t x717 = INT8_MIN;
static int8_t x723 = INT8_MIN;
int64_t x726 = INT64_MIN;
uint8_t x727 = 5U;
uint32_t x732 = 526633U;
volatile uint32_t t180 = 1898935872U;
int8_t x733 = INT8_MAX;
uint32_t x735 = 8U;
int64_t x736 = INT64_MIN;
uint32_t t182 = 89094U;
volatile int64_t x745 = 4825LL;
volatile int16_t x747 = INT16_MAX;
int8_t x748 = INT8_MIN;
int8_t x751 = INT8_MIN;
uint8_t x753 = UINT8_MAX;
volatile int32_t t186 = -117904;
uint64_t x761 = 12163151810908LLU;
volatile int64_t x763 = INT64_MAX;
volatile int8_t x766 = INT8_MIN;
int8_t x767 = INT8_MAX;
static int8_t x769 = INT8_MIN;
int64_t x775 = INT64_MIN;
int32_t x777 = INT32_MAX;
int32_t t192 = 24510161;
int8_t x781 = -25;
static int16_t x782 = 21;
static int64_t x791 = INT64_MIN;
int32_t x798 = -3036627;
int8_t x799 = INT8_MIN;
int8_t x805 = INT8_MAX;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	int64_t x4 = INT64_MAX;
	int64_t t0 = 180494405892271287LL;

    t0 = ((x1==(x2!=x3))%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 60202LL;
	int64_t x6 = -2120440160LL;
	uint32_t x7 = 5848U;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = 5940843;

    t1 = ((x5==(x6!=x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int16_t x10 = -19;

    t2 = ((x9==(x10!=x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 1727LLU;
	volatile int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 294036884LLU;

    t3 = ((x13==(x14!=x15))%x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x17 = 119U;
	static volatile int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	int16_t x20 = 27;
	static volatile int32_t t4 = -3159;

    t4 = ((x17==(x18!=x19))%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	volatile int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 12705893LL;

    t5 = ((x21==(x22!=x23))%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x27 = 1476638;
	int32_t t6 = -1316;

    t6 = ((x25==(x26!=x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 1734U;
	int32_t x31 = -1;
	int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -121;

    t7 = ((x29==(x30!=x31))%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint64_t x34 = 349214934403266957LLU;
	uint32_t x35 = 351571395U;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = 538224555;

    t8 = ((x33==(x34!=x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x38 = 14374U;
	int64_t x39 = -289LL;
	volatile int32_t t9 = -34;

    t9 = ((x37==(x38!=x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 63016LL;
	uint64_t x42 = 1381067454044LLU;
	int16_t x43 = 304;
	int64_t t10 = 827278LL;

    t10 = ((x41==(x42!=x43))%x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	volatile int64_t x46 = 14872LL;
	int32_t x47 = 6607;
	uint32_t t11 = 10535334U;

    t11 = ((x45==(x46!=x47))%x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	uint16_t x51 = 1U;
	volatile int32_t t12 = 1554;

    t12 = ((x49==(x50!=x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t13 = -960444456103LL;

    t13 = ((x53==(x54!=x55))%x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 29U;
	int16_t x58 = -204;
	static int16_t x59 = 1;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -6;

    t14 = ((x57==(x58!=x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = 611189650U;
	static uint64_t x63 = UINT64_MAX;
	int64_t x64 = -1LL;
	volatile int64_t t15 = -33141552LL;

    t15 = ((x61==(x62!=x63))%x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	volatile int64_t t16 = -9963287733960LL;

    t16 = ((x65==(x66!=x67))%x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 11953LL;
	int8_t x70 = INT8_MIN;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 13050;

    t17 = ((x69==(x70!=x71))%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MAX;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 4435713755098502LL;

    t18 = ((x73==(x74!=x75))%x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 5769502LLU;
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 391;

    t19 = ((x77==(x78!=x79))%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	int64_t x87 = 77918622LL;
	int8_t x88 = INT8_MAX;
	int32_t t20 = 1;

    t20 = ((x85==(x86!=x87))%x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 1856320LLU;
	int8_t x91 = INT8_MAX;
	static int32_t x92 = -1;
	static int32_t t21 = 12;

    t21 = ((x89==(x90!=x91))%x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x93 = -105;
	int16_t x94 = INT16_MIN;
	static uint64_t x96 = 1911579428713LLU;

    t22 = ((x93==(x94!=x95))%x96);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = INT64_MIN;
	uint64_t x99 = 122641LLU;
	volatile int32_t x100 = INT32_MAX;
	int32_t t23 = 15116600;

    t23 = ((x97==(x98!=x99))%x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x102 = 75U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t24 = 11803208LL;

    t24 = ((x101==(x102!=x103))%x104);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x106 = INT16_MAX;
	static volatile int8_t x107 = INT8_MAX;
	static int32_t x108 = INT32_MIN;
	int32_t t25 = 265702;

    t25 = ((x105==(x106!=x107))%x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = UINT32_MAX;
	static volatile int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t26 = -577074;

    t26 = ((x109==(x110!=x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	static int64_t x114 = 131823870211511LL;
	int32_t x115 = -55546742;
	volatile int16_t x116 = 1613;
	static volatile int32_t t27 = 448562664;

    t27 = ((x113==(x114!=x115))%x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	static int8_t x118 = -21;
	static int32_t x119 = 2;
	int64_t x120 = INT64_MIN;
	int64_t t28 = -2486LL;

    t28 = ((x117==(x118!=x119))%x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x121 = 477137773U;
	static volatile int16_t x122 = 0;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t29 = 3869985;

    t29 = ((x121==(x122!=x123))%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x125 = 82LLU;
	int64_t x126 = -1LL;
	int8_t x127 = -4;
	uint8_t x128 = 78U;
	int32_t t30 = 384;

    t30 = ((x125==(x126!=x127))%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MAX;
	static uint32_t x131 = 64141U;
	static int8_t x132 = 20;
	int32_t t31 = -855;

    t31 = ((x129==(x130!=x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x133 = 288563242079075LLU;
	uint32_t x134 = 3051U;
	static int8_t x135 = INT8_MAX;
	static uint64_t x136 = 8042864660863659620LLU;
	uint64_t t32 = 394356467627786875LLU;

    t32 = ((x133==(x134!=x135))%x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = UINT32_MAX;
	static int16_t x138 = -232;
	uint32_t x139 = 18U;
	static uint8_t x140 = 13U;
	volatile int32_t t33 = -1;

    t33 = ((x137==(x138!=x139))%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 0U;
	int8_t x142 = INT8_MAX;
	uint32_t x143 = 65351433U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = -987326422;

    t34 = ((x141==(x142!=x143))%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	static volatile uint64_t x146 = 41258LLU;
	int16_t x148 = INT16_MIN;
	static volatile int32_t t35 = -7858118;

    t35 = ((x145==(x146!=x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = INT16_MIN;
	volatile int64_t x151 = INT64_MAX;
	volatile int64_t x152 = INT64_MIN;
	int64_t t36 = -8652624777652622LL;

    t36 = ((x149==(x150!=x151))%x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 1420173035LLU;
	int64_t x155 = -116670398691540074LL;
	int32_t x156 = 1;

    t37 = ((x153==(x154!=x155))%x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MAX;
	uint64_t x158 = 9LLU;
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	static int32_t t38 = -15778230;

    t38 = ((x157==(x158!=x159))%x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -124;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = -442;

    t39 = ((x161==(x162!=x163))%x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = 1;
	int16_t x166 = INT16_MIN;
	int8_t x167 = 2;
	int64_t x168 = -1LL;
	int64_t t40 = 24LL;

    t40 = ((x165==(x166!=x167))%x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MAX;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t x172 = 1188LLU;
	static volatile uint64_t t41 = 1628923632759843847LLU;

    t41 = ((x169==(x170!=x171))%x172);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	static uint16_t x175 = UINT16_MAX;
	volatile uint64_t x176 = 70037846212005LLU;
	uint64_t t42 = 988461541394043LLU;

    t42 = ((x173==(x174!=x175))%x176);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MIN;
	static int8_t x179 = -1;
	uint64_t x180 = 2LLU;
	static uint64_t t43 = 134LLU;

    t43 = ((x177==(x178!=x179))%x180);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x183 = -5679676781102LL;
	volatile int32_t t44 = 1631930;

    t44 = ((x181==(x182!=x183))%x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x185 = UINT8_MAX;
	int32_t x187 = -4;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t45 = 70350983622595LLU;

    t45 = ((x185==(x186!=x187))%x188);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x190 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t46 = -126649;

    t46 = ((x189==(x190!=x191))%x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x194 = -12929825389883LL;
	static uint32_t x195 = UINT32_MAX;
	static volatile int64_t x196 = INT64_MIN;

    t47 = ((x193==(x194!=x195))%x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 1;
	static int16_t x198 = -1;
	volatile int64_t t48 = -183354695LL;

    t48 = ((x197==(x198!=x199))%x200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MIN;
	static int64_t x203 = -1LL;
	static int16_t x204 = -1;
	volatile int32_t t49 = -5225;

    t49 = ((x201==(x202!=x203))%x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x206 = 2585U;
	int8_t x207 = INT8_MIN;
	static int64_t x208 = INT64_MIN;
	int64_t t50 = -2200922LL;

    t50 = ((x205==(x206!=x207))%x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x209 = -219603804914643LL;
	uint16_t x211 = 4U;
	volatile uint16_t x212 = UINT16_MAX;
	int32_t t51 = -315;

    t51 = ((x209==(x210!=x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 1U;
	int32_t x216 = -2536;
	volatile int32_t t52 = 104;

    t52 = ((x213==(x214!=x215))%x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -1;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 14713U;
	int64_t x220 = INT64_MIN;
	int64_t t53 = -37527938108361LL;

    t53 = ((x217==(x218!=x219))%x220);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x221 = INT32_MIN;
	static int64_t x222 = -27LL;
	int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;

    t54 = ((x221==(x222!=x223))%x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = 11;
	int64_t x228 = INT64_MIN;
	volatile int64_t t55 = 4162999426575LL;

    t55 = ((x225==(x226!=x227))%x228);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = 9133352459591060LLU;
	uint64_t x230 = 10103582284983LLU;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MAX;
	int32_t t56 = 28;

    t56 = ((x229==(x230!=x231))%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x233 = UINT32_MAX;
	static int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 448701LLU;
	volatile uint64_t t57 = 1894859074817658LLU;

    t57 = ((x233==(x234!=x235))%x236);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x238 = -3;
	static uint32_t x239 = UINT32_MAX;
	int64_t x240 = INT64_MAX;
	static volatile int64_t t58 = 12442250990LL;

    t58 = ((x237==(x238!=x239))%x240);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = INT32_MAX;
	static int32_t x244 = INT32_MAX;
	volatile int32_t t59 = 137;

    t59 = ((x241==(x242!=x243))%x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = -401055LL;
	uint8_t x247 = 3U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t60 = 143331439577695LL;

    t60 = ((x245==(x246!=x247))%x248);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = 20U;
	int16_t x251 = INT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t61 = -65415;

    t61 = ((x249==(x250!=x251))%x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = -1;
	static int8_t x254 = INT8_MAX;
	static int8_t x255 = INT8_MIN;
	uint32_t x256 = 2U;
	static uint32_t t62 = 69784U;

    t62 = ((x253==(x254!=x255))%x256);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 1U;
	volatile int16_t x258 = INT16_MIN;
	static uint16_t x259 = 105U;
	uint32_t x260 = UINT32_MAX;
	uint32_t t63 = 697819347U;

    t63 = ((x257==(x258!=x259))%x260);

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	int32_t t64 = 4438121;

    t64 = ((x261==(x262!=x263))%x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x265 = 497U;
	volatile int8_t x266 = INT8_MIN;
	int32_t t65 = 41117521;

    t65 = ((x265==(x266!=x267))%x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = 17U;
	static int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = 117320U;
	uint32_t t66 = 855U;

    t66 = ((x269==(x270!=x271))%x272);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x273 = 77228152019092LLU;
	int8_t x274 = INT8_MIN;
	int64_t x276 = -101LL;
	int64_t t67 = -27002LL;

    t67 = ((x273==(x274!=x275))%x276);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	int32_t x279 = 920247;
	int8_t x280 = INT8_MIN;
	int32_t t68 = 830275632;

    t68 = ((x277==(x278!=x279))%x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 26855U;
	static volatile int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t69 = 1770LL;

    t69 = ((x281==(x282!=x283))%x284);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x285 = 3U;
	static uint32_t x286 = UINT32_MAX;
	static int32_t x287 = -1;
	int32_t x288 = -1598406;
	volatile int32_t t70 = 49;

    t70 = ((x285==(x286!=x287))%x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x289 = INT64_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t71 = -965;

    t71 = ((x289==(x290!=x291))%x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 6769;
	int16_t x296 = -1;
	volatile int32_t t72 = 82662374;

    t72 = ((x293==(x294!=x295))%x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 18U;
	int32_t x298 = INT32_MIN;
	int16_t x299 = INT16_MIN;
	static int32_t t73 = -31;

    t73 = ((x297==(x298!=x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = 7;
	volatile int64_t x303 = -62275702577373LL;
	static uint8_t x304 = 61U;
	static int32_t t74 = 33;

    t74 = ((x301==(x302!=x303))%x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = INT16_MAX;
	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 18LLU;
	static uint64_t x308 = 23215533621456225LLU;
	uint64_t t75 = 1897268453319LLU;

    t75 = ((x305==(x306!=x307))%x308);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x309 = 0U;
	volatile uint32_t x310 = 557689U;
	int16_t x311 = -1;
	static int8_t x312 = 22;
	volatile int32_t t76 = 3654;

    t76 = ((x309==(x310!=x311))%x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x313 = INT32_MIN;
	volatile int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	volatile int32_t x316 = 1079;

    t77 = ((x313==(x314!=x315))%x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = INT64_MAX;
	int64_t x319 = -7433174LL;
	static volatile int32_t t78 = 40860;

    t78 = ((x317==(x318!=x319))%x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = -770694;
	static int64_t x322 = INT64_MIN;
	uint32_t x323 = 1759459245U;
	static volatile uint8_t x324 = UINT8_MAX;
	static int32_t t79 = 32339824;

    t79 = ((x321==(x322!=x323))%x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x325 = INT8_MIN;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = UINT16_MAX;
	static int32_t x328 = INT32_MIN;
	int32_t t80 = 161;

    t80 = ((x325==(x326!=x327))%x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x330 = UINT64_MAX;
	int16_t x331 = -3;
	volatile uint64_t x332 = 160601LLU;
	volatile uint64_t t81 = 65471LLU;

    t81 = ((x329==(x330!=x331))%x332);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x333 = INT32_MAX;
	static int16_t x334 = INT16_MAX;
	volatile int16_t x335 = -1;
	static volatile uint64_t x336 = 857151290LLU;

    t82 = ((x333==(x334!=x335))%x336);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MAX;
	volatile int64_t x339 = 669898284LL;
	uint8_t x340 = 127U;
	int32_t t83 = 1;

    t83 = ((x337==(x338!=x339))%x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = 63LLU;
	int8_t x342 = INT8_MAX;
	volatile int64_t x343 = -1LL;
	uint64_t x344 = 105LLU;

    t84 = ((x341==(x342!=x343))%x344);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x346 = -1;
	int64_t x347 = INT64_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t85 = -1;

    t85 = ((x345==(x346!=x347))%x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = 91;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = 92U;
	static volatile int64_t t86 = -85232745931727646LL;

    t86 = ((x349==(x350!=x351))%x352);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x354 = -1;
	int32_t x355 = 12223;
	uint32_t x356 = 2080U;
	volatile uint32_t t87 = 5062597U;

    t87 = ((x353==(x354!=x355))%x356);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x357 = 12U;
	static int64_t x358 = INT64_MAX;
	uint64_t x359 = UINT64_MAX;
	volatile uint8_t x360 = 19U;
	static int32_t t88 = -7959;

    t88 = ((x357==(x358!=x359))%x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int32_t x364 = -1;
	int32_t t89 = -1044217726;

    t89 = ((x361==(x362!=x363))%x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x366 = -1442;
	volatile int32_t x367 = 2;
	uint8_t x368 = 65U;
	volatile int32_t t90 = 318;

    t90 = ((x365==(x366!=x367))%x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x370 = 14492;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;

    t91 = ((x369==(x370!=x371))%x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MIN;
	volatile int32_t x376 = INT32_MAX;

    t92 = ((x373==(x374!=x375))%x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x377 = 57U;
	int32_t x380 = INT32_MIN;
	int32_t t93 = 0;

    t93 = ((x377==(x378!=x379))%x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x381 = UINT16_MAX;
	static int32_t x383 = -1;

    t94 = ((x381==(x382!=x383))%x384);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = INT8_MAX;
	uint64_t x386 = 5LLU;
	int64_t x388 = -1LL;
	volatile int64_t t95 = -3225968618LL;

    t95 = ((x385==(x386!=x387))%x388);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x389 = -3;
	int32_t x390 = 3;
	volatile uint8_t x391 = UINT8_MAX;
	int16_t x392 = -1;

    t96 = ((x389==(x390!=x391))%x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x394 = INT8_MIN;
	static int8_t x395 = INT8_MIN;

    t97 = ((x393==(x394!=x395))%x396);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = -1;
	static int32_t x398 = INT32_MAX;
	int32_t x399 = INT32_MIN;

    t98 = ((x397==(x398!=x399))%x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x401 = 1424U;
	volatile uint8_t x403 = UINT8_MAX;
	static int32_t t99 = 369782;

    t99 = ((x401==(x402!=x403))%x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x405 = 1461046482U;
	int64_t x406 = -1LL;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 2;
	static int32_t t100 = -85231;

    t100 = ((x405==(x406!=x407))%x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x409 = -1LL;
	volatile int8_t x410 = INT8_MAX;
	int64_t x411 = -7LL;
	int8_t x412 = INT8_MIN;
	int32_t t101 = -14;

    t101 = ((x409==(x410!=x411))%x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x414 = INT16_MIN;
	int8_t x415 = -19;
	volatile int32_t t102 = -50839;

    t102 = ((x413==(x414!=x415))%x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = INT32_MAX;
	int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MAX;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t103 = 146699;

    t103 = ((x421==(x422!=x423))%x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	uint16_t x428 = 24U;
	int32_t t104 = -76588247;

    t104 = ((x425==(x426!=x427))%x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x430 = INT64_MAX;
	int64_t x431 = INT64_MAX;
	int32_t x432 = 26562;
	volatile int32_t t105 = -36507708;

    t105 = ((x429==(x430!=x431))%x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = 2;
	int16_t x434 = -1;
	static volatile uint64_t x435 = 246821819439377733LLU;
	static int32_t x436 = INT32_MAX;
	static int32_t t106 = 5;

    t106 = ((x433==(x434!=x435))%x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = UINT32_MAX;
	int32_t x438 = -11;
	int16_t x439 = INT16_MIN;
	int16_t x440 = 2;
	volatile int32_t t107 = 1;

    t107 = ((x437==(x438!=x439))%x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = 1U;
	int16_t x442 = 2;
	uint8_t x443 = 0U;
	uint8_t x444 = 5U;
	static volatile int32_t t108 = -245821438;

    t108 = ((x441==(x442!=x443))%x444);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	uint32_t x446 = 1866U;
	uint8_t x447 = 0U;
	int64_t x448 = INT64_MIN;
	volatile int64_t t109 = -129880393LL;

    t109 = ((x445==(x446!=x447))%x448);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = -1;
	static volatile int32_t x450 = INT32_MAX;
	int16_t x452 = 2672;
	int32_t t110 = 0;

    t110 = ((x449==(x450!=x451))%x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x453 = -1LL;
	static uint32_t x454 = 122017U;
	volatile int64_t x455 = 265469640057560LL;
	volatile int32_t t111 = 238697;

    t111 = ((x453==(x454!=x455))%x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = 1;
	uint16_t x459 = 255U;
	static uint16_t x460 = UINT16_MAX;
	int32_t t112 = -5422;

    t112 = ((x457==(x458!=x459))%x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x461 = 2U;
	int8_t x463 = INT8_MAX;
	static uint64_t x464 = 657LLU;
	volatile uint64_t t113 = 16068568LLU;

    t113 = ((x461==(x462!=x463))%x464);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x466 = -1;
	int32_t t114 = -64720227;

    t114 = ((x465==(x466!=x467))%x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x469 = -1LL;
	static int16_t x470 = INT16_MAX;
	volatile uint64_t x472 = UINT64_MAX;

    t115 = ((x469==(x470!=x471))%x472);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = INT32_MAX;
	static volatile uint8_t x474 = 4U;
	static uint64_t x475 = 3272LLU;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t116 = -85977311;

    t116 = ((x473==(x474!=x475))%x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = 237163553LLU;
	uint8_t x480 = 3U;
	static volatile int32_t t117 = 474151637;

    t117 = ((x477==(x478!=x479))%x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = 68424089936080410LLU;
	uint16_t x482 = UINT16_MAX;
	uint8_t x483 = 17U;

    t118 = ((x481==(x482!=x483))%x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = 23988U;
	static uint32_t t119 = 124483U;

    t119 = ((x485==(x486!=x487))%x488);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = INT64_MIN;
	static uint64_t x490 = 263932766LLU;
	static int32_t x491 = 1;
	static uint64_t x492 = 1832548765433394LLU;
	volatile uint64_t t120 = 14LLU;

    t120 = ((x489==(x490!=x491))%x492);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x494 = -1;
	static volatile uint16_t x495 = UINT16_MAX;
	volatile int64_t x496 = INT64_MIN;

    t121 = ((x493==(x494!=x495))%x496);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x498 = UINT16_MAX;
	uint16_t x499 = UINT16_MAX;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t122 = -468;

    t122 = ((x497==(x498!=x499))%x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x503 = -44LL;
	int16_t x504 = 2;
	static int32_t t123 = 281;

    t123 = ((x501==(x502!=x503))%x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x505 = INT64_MIN;
	static int32_t x506 = -24767;
	static int8_t x507 = 11;
	int32_t x508 = -1;
	volatile int32_t t124 = 1923;

    t124 = ((x505==(x506!=x507))%x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x509 = 56719U;
	int64_t x510 = INT64_MIN;
	static uint16_t x511 = 7205U;
	int16_t x512 = -1;
	int32_t t125 = -5;

    t125 = ((x509==(x510!=x511))%x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MIN;
	static int32_t x514 = 64608109;
	uint32_t x515 = 6733334U;
	volatile uint64_t x516 = 43LLU;
	uint64_t t126 = 80754093LLU;

    t126 = ((x513==(x514!=x515))%x516);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x517 = UINT16_MAX;
	volatile uint8_t x518 = 11U;
	static int16_t x519 = INT16_MIN;
	uint64_t x520 = UINT64_MAX;
	static uint64_t t127 = 323003LLU;

    t127 = ((x517==(x518!=x519))%x520);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x522 = 87U;
	volatile int64_t t128 = 906583LL;

    t128 = ((x521==(x522!=x523))%x524);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x525 = INT16_MIN;
	static int32_t x526 = INT32_MIN;
	volatile int64_t x527 = INT64_MIN;
	int8_t x528 = -1;
	volatile int32_t t129 = -28569087;

    t129 = ((x525==(x526!=x527))%x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x529 = -1;
	int64_t x530 = INT64_MIN;
	static int8_t x531 = INT8_MIN;
	int64_t x532 = -1LL;
	volatile int64_t t130 = 34502438LL;

    t130 = ((x529==(x530!=x531))%x532);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x533 = -1;
	static uint64_t x535 = UINT64_MAX;

    t131 = ((x533==(x534!=x535))%x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = 142372;
	static int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MIN;
	static int64_t x540 = -1LL;
	int64_t t132 = -1647927438155084LL;

    t132 = ((x537==(x538!=x539))%x540);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x541 = -1LL;
	int32_t x542 = 107;
	int32_t x543 = INT32_MIN;
	uint8_t x544 = UINT8_MAX;
	static int32_t t133 = -2;

    t133 = ((x541==(x542!=x543))%x544);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x546 = 2143;
	volatile int32_t x547 = -13838802;
	int16_t x548 = 399;
	int32_t t134 = 63808844;

    t134 = ((x545==(x546!=x547))%x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x549 = INT8_MIN;
	int32_t x550 = INT32_MIN;
	static uint64_t x551 = UINT64_MAX;

    t135 = ((x549==(x550!=x551))%x552);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x553 = -1;
	uint32_t x554 = UINT32_MAX;
	uint8_t x556 = 115U;

    t136 = ((x553==(x554!=x555))%x556);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = 1;
	int64_t x558 = 22849520679954987LL;
	int16_t x559 = INT16_MAX;
	int16_t x560 = INT16_MAX;
	volatile int32_t t137 = -982806;

    t137 = ((x557==(x558!=x559))%x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x561 = 6467LLU;
	int32_t x563 = -58;
	int16_t x564 = INT16_MIN;
	volatile int32_t t138 = 4;

    t138 = ((x561==(x562!=x563))%x564);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x565 = 2U;
	volatile int32_t x566 = INT32_MIN;
	uint8_t x567 = UINT8_MAX;

    t139 = ((x565==(x566!=x567))%x568);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x569 = 136U;
	volatile uint32_t x570 = UINT32_MAX;
	int32_t x571 = INT32_MIN;
	int64_t x572 = -1LL;
	static volatile int64_t t140 = 1LL;

    t140 = ((x569==(x570!=x571))%x572);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x573 = 13778714053310LLU;
	uint32_t x574 = 18189650U;
	volatile uint16_t x575 = 34U;
	volatile int32_t t141 = -49;

    t141 = ((x573==(x574!=x575))%x576);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = INT32_MAX;
	int16_t x578 = INT16_MIN;
	int64_t x579 = -184345956035LL;

    t142 = ((x577==(x578!=x579))%x580);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x581 = -1;
	int64_t x582 = INT64_MIN;
	int64_t x583 = INT64_MIN;
	uint32_t x584 = 4U;
	volatile uint32_t t143 = 1U;

    t143 = ((x581==(x582!=x583))%x584);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x585 = INT32_MAX;
	uint32_t x586 = UINT32_MAX;
	uint64_t x587 = 25LLU;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t144 = 771;

    t144 = ((x585==(x586!=x587))%x588);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x590 = UINT16_MAX;
	int16_t x592 = INT16_MIN;
	volatile int32_t t145 = -23437;

    t145 = ((x589==(x590!=x591))%x592);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x593 = UINT64_MAX;
	int32_t x594 = 60;
	static uint8_t x595 = 2U;
	uint16_t x596 = 22U;

    t146 = ((x593==(x594!=x595))%x596);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x597 = -1;
	int16_t x598 = INT16_MIN;

    t147 = ((x597==(x598!=x599))%x600);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x601 = INT16_MIN;
	uint8_t x602 = UINT8_MAX;
	uint32_t x603 = 5569U;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t148 = 9308401;

    t148 = ((x601==(x602!=x603))%x604);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x606 = -1705131LL;
	volatile uint8_t x607 = 42U;
	static volatile int64_t t149 = -5LL;

    t149 = ((x605==(x606!=x607))%x608);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x609 = -2;
	int16_t x610 = -663;
	int8_t x611 = INT8_MIN;
	volatile int64_t t150 = -387524579LL;

    t150 = ((x609==(x610!=x611))%x612);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = -1;
	int64_t x614 = -1893349916783LL;
	int16_t x615 = 8725;
	int32_t t151 = -11424;

    t151 = ((x613==(x614!=x615))%x616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	static int16_t x618 = INT16_MIN;
	int64_t x619 = INT64_MAX;
	volatile int32_t x620 = 10154;

    t152 = ((x617==(x618!=x619))%x620);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x622 = -1;
	volatile int8_t x623 = 0;
	volatile int32_t t153 = -141594;

    t153 = ((x621==(x622!=x623))%x624);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x626 = 4;
	uint32_t x627 = 10057U;
	int32_t t154 = -29148;

    t154 = ((x625==(x626!=x627))%x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = INT8_MIN;
	int64_t x632 = INT64_MIN;
	int64_t t155 = -211853320007506319LL;

    t155 = ((x629==(x630!=x631))%x632);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = -1;
	uint8_t x635 = UINT8_MAX;
	volatile int32_t t156 = -50244513;

    t156 = ((x633==(x634!=x635))%x636);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x637 = UINT16_MAX;
	static int8_t x638 = 4;
	int32_t x639 = INT32_MAX;
	int64_t t157 = -116333577LL;

    t157 = ((x637==(x638!=x639))%x640);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x642 = INT16_MIN;
	static int32_t x644 = 10801681;
	static volatile int32_t t158 = 118;

    t158 = ((x641==(x642!=x643))%x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x647 = INT8_MIN;
	uint32_t x648 = 17128941U;

    t159 = ((x645==(x646!=x647))%x648);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x649 = 8849943110393238348LLU;
	volatile int8_t x650 = INT8_MIN;
	int32_t t160 = -5034881;

    t160 = ((x649==(x650!=x651))%x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x654 = 1U;
	uint32_t x655 = 113381U;
	int32_t t161 = 73179123;

    t161 = ((x653==(x654!=x655))%x656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x658 = INT32_MAX;
	int8_t x659 = -5;
	uint64_t t162 = 2219LLU;

    t162 = ((x657==(x658!=x659))%x660);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x663 = INT32_MAX;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t163 = 24676654;

    t163 = ((x661==(x662!=x663))%x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = -1;
	uint8_t x667 = 2U;
	int8_t x668 = 3;
	int32_t t164 = -14503203;

    t164 = ((x665==(x666!=x667))%x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x669 = -1LL;
	int8_t x670 = 29;
	static volatile uint64_t x671 = 258937313422LLU;
	int64_t x672 = 340843071213LL;
	int64_t t165 = -244825367LL;

    t165 = ((x669==(x670!=x671))%x672);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x674 = 0;
	volatile uint8_t x675 = 0U;
	static volatile int32_t t166 = -1;

    t166 = ((x673==(x674!=x675))%x676);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x677 = INT8_MAX;
	uint16_t x678 = 24U;
	uint16_t x679 = 82U;
	int32_t t167 = -3;

    t167 = ((x677==(x678!=x679))%x680);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x683 = -1505;
	static uint16_t x684 = 9U;
	volatile int32_t t168 = -51;

    t168 = ((x681==(x682!=x683))%x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x685 = -1;
	int32_t x686 = INT32_MAX;
	volatile int16_t x687 = INT16_MAX;
	int16_t x688 = 7281;

    t169 = ((x685==(x686!=x687))%x688);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x689 = INT32_MAX;
	uint64_t x690 = 222590817805LLU;
	uint64_t x691 = UINT64_MAX;
	uint16_t x692 = 26939U;
	int32_t t170 = 1970371;

    t170 = ((x689==(x690!=x691))%x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x694 = -1;
	int64_t x695 = INT64_MAX;
	volatile int16_t x696 = 570;
	int32_t t171 = -23;

    t171 = ((x693==(x694!=x695))%x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x697 = UINT32_MAX;
	uint8_t x698 = UINT8_MAX;
	int16_t x700 = 165;

    t172 = ((x697==(x698!=x699))%x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x701 = INT32_MAX;
	int64_t x702 = INT64_MAX;
	static int64_t x703 = INT64_MIN;
	int8_t x704 = INT8_MAX;
	static volatile int32_t t173 = -1027100;

    t173 = ((x701==(x702!=x703))%x704);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x705 = 20U;
	int8_t x707 = INT8_MIN;
	uint16_t x708 = UINT16_MAX;
	int32_t t174 = 229;

    t174 = ((x705==(x706!=x707))%x708);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x709 = INT8_MIN;
	static uint32_t x710 = 1584326743U;
	static int64_t x711 = 27358307940578LL;
	uint8_t x712 = UINT8_MAX;
	static volatile int32_t t175 = -6055346;

    t175 = ((x709==(x710!=x711))%x712);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x713 = INT32_MIN;
	uint32_t x714 = 976U;
	static uint16_t x715 = 13379U;
	int64_t x716 = 1LL;
	static volatile int64_t t176 = 1257068519233009LL;

    t176 = ((x713==(x714!=x715))%x716);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x718 = 22296770284610133LLU;
	int8_t x719 = 15;
	int16_t x720 = -2;
	int32_t t177 = 948067562;

    t177 = ((x717==(x718!=x719))%x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x721 = 3U;
	int16_t x722 = -425;
	int64_t x724 = INT64_MAX;
	volatile int64_t t178 = -653413143991LL;

    t178 = ((x721==(x722!=x723))%x724);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = -17594940428266441LL;
	static uint32_t x728 = 1525116412U;
	volatile uint32_t t179 = 15304961U;

    t179 = ((x725==(x726!=x727))%x728);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x729 = UINT8_MAX;
	int32_t x730 = 143;
	int8_t x731 = INT8_MAX;

    t180 = ((x729==(x730!=x731))%x732);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x734 = INT8_MIN;
	int64_t t181 = -1082423701016918389LL;

    t181 = ((x733==(x734!=x735))%x736);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x737 = 29191434LLU;
	volatile uint8_t x738 = UINT8_MAX;
	int8_t x739 = -2;
	static uint32_t x740 = UINT32_MAX;

    t182 = ((x737==(x738!=x739))%x740);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x741 = INT16_MIN;
	uint32_t x742 = 1717449090U;
	static int64_t x743 = INT64_MIN;
	int8_t x744 = -2;
	int32_t t183 = -111;

    t183 = ((x741==(x742!=x743))%x744);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x746 = 63545;
	int32_t t184 = 37868506;

    t184 = ((x745==(x746!=x747))%x748);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x749 = -54;
	static int64_t x750 = -906033312727526894LL;
	volatile int32_t x752 = 1;
	int32_t t185 = -4;

    t185 = ((x749==(x750!=x751))%x752);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x754 = INT8_MIN;
	static uint32_t x755 = 260789U;
	static uint8_t x756 = UINT8_MAX;

    t186 = ((x753==(x754!=x755))%x756);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x757 = 4321151955894705LL;
	static volatile uint64_t x758 = UINT64_MAX;
	uint64_t x759 = UINT64_MAX;
	int64_t x760 = INT64_MIN;
	volatile int64_t t187 = 307969LL;

    t187 = ((x757==(x758!=x759))%x760);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x762 = 0;
	static int64_t x764 = -1LL;
	volatile int64_t t188 = 1993LL;

    t188 = ((x761==(x762!=x763))%x764);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x768 = INT32_MIN;
	int32_t t189 = 3;

    t189 = ((x765==(x766!=x767))%x768);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x770 = INT16_MIN;
	int64_t x771 = -1LL;
	int8_t x772 = INT8_MIN;
	volatile int32_t t190 = -9871915;

    t190 = ((x769==(x770!=x771))%x772);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x774 = -1LL;
	volatile uint32_t x776 = 31U;
	uint32_t t191 = 24U;

    t191 = ((x773==(x774!=x775))%x776);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x778 = 3;
	int32_t x779 = 10697;
	int32_t x780 = -8025562;

    t192 = ((x777==(x778!=x779))%x780);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x783 = 41970803U;
	volatile int32_t x784 = INT32_MIN;
	static volatile int32_t t193 = 97;

    t193 = ((x781==(x782!=x783))%x784);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x785 = INT8_MIN;
	static int32_t x786 = 1149086;
	static volatile int8_t x787 = -1;
	uint64_t x788 = 5981406LLU;
	volatile uint64_t t194 = 3965669883984LLU;

    t194 = ((x785==(x786!=x787))%x788);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x789 = 1752549408644319967LLU;
	uint64_t x790 = 4339098985LLU;
	int16_t x792 = 6;
	int32_t t195 = 3329;

    t195 = ((x789==(x790!=x791))%x792);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x797 = -1;
	static volatile int8_t x800 = -1;
	static volatile int32_t t196 = 8;

    t196 = ((x797==(x798!=x799))%x800);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x801 = UINT32_MAX;
	int64_t x802 = -11941535576LL;
	uint32_t x803 = 252919437U;
	int32_t x804 = INT32_MIN;
	volatile int32_t t197 = -233;

    t197 = ((x801==(x802!=x803))%x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x806 = INT8_MIN;
	volatile int64_t x807 = -372LL;
	uint8_t x808 = 24U;
	int32_t t198 = -49906155;

    t198 = ((x805==(x806!=x807))%x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x809 = 31U;
	int64_t x810 = INT64_MIN;
	static uint16_t x811 = UINT16_MAX;
	uint16_t x812 = 55U;
	int32_t t199 = 216158522;

    t199 = ((x809==(x810!=x811))%x812);

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

