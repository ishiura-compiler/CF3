
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

int16_t x8 = INT16_MIN;
volatile uint16_t x9 = 9740U;
int16_t x10 = INT16_MAX;
volatile int8_t x12 = INT8_MAX;
int64_t x14 = -199751LL;
int32_t x30 = INT32_MIN;
static volatile int32_t x31 = INT32_MIN;
int32_t t7 = 23356086;
static int32_t x37 = INT32_MIN;
int8_t x38 = INT8_MIN;
int32_t t9 = 31;
int32_t t10 = -174;
static volatile uint32_t x54 = 318295888U;
int32_t t17 = 403742800;
uint8_t x79 = UINT8_MAX;
static volatile int32_t t21 = 290305226;
volatile int64_t x92 = 6654014LL;
volatile int32_t t22 = -7715892;
volatile uint8_t x96 = 1U;
uint64_t x98 = UINT64_MAX;
volatile int32_t t24 = 485682;
static volatile int32_t t25 = -796;
int64_t x105 = INT64_MIN;
int16_t x106 = -1;
int16_t x119 = INT16_MIN;
uint64_t x122 = 8940067350LLU;
int32_t t30 = 471280;
int64_t x130 = 9464992553343811LL;
uint64_t x134 = UINT64_MAX;
int64_t x135 = 533093783LL;
static int8_t x138 = -1;
static volatile int32_t t34 = -788916;
uint16_t x141 = 1U;
int32_t x144 = INT32_MIN;
int8_t x147 = INT8_MAX;
static int16_t x155 = INT16_MAX;
int64_t x162 = INT64_MIN;
int32_t t40 = -1497629;
static uint32_t x166 = 486U;
int8_t x174 = -1;
int16_t x177 = INT16_MIN;
uint64_t x181 = 0LLU;
static volatile uint32_t x183 = UINT32_MAX;
static int8_t x184 = -1;
int64_t x196 = 170362807951597LL;
volatile int32_t x197 = -1;
int64_t x201 = INT64_MAX;
volatile uint32_t x216 = 10440U;
volatile int32_t x231 = INT32_MAX;
volatile int64_t x232 = INT64_MIN;
int64_t x241 = INT64_MAX;
int32_t x250 = 1;
volatile int8_t x251 = INT8_MAX;
int32_t x253 = INT32_MAX;
int32_t x260 = -414;
static int32_t t64 = -389;
uint32_t x261 = 21013344U;
int64_t x262 = INT64_MIN;
int32_t x263 = INT32_MIN;
int32_t x270 = INT32_MIN;
static uint16_t x271 = UINT16_MAX;
int16_t x273 = -1;
uint8_t x275 = 1U;
uint64_t x278 = UINT64_MAX;
int64_t x282 = -740552LL;
int16_t x284 = -872;
volatile int32_t t70 = 106;
int8_t x288 = 25;
uint8_t x289 = 35U;
volatile int32_t t72 = -21354;
int8_t x300 = INT8_MIN;
uint8_t x301 = UINT8_MAX;
volatile int32_t t75 = 748540504;
int64_t x309 = INT64_MIN;
uint32_t x311 = 5U;
static uint32_t x316 = 13U;
static int16_t x317 = -126;
volatile int32_t x319 = -56713;
uint16_t x321 = 567U;
static int32_t x325 = -13195;
uint32_t x327 = UINT32_MAX;
static int16_t x328 = -283;
int16_t x333 = INT16_MIN;
int64_t x336 = -22530LL;
int8_t x341 = -31;
volatile uint16_t x342 = 0U;
static uint32_t x344 = UINT32_MAX;
static int32_t t85 = 163;
int64_t x345 = 3298LL;
int32_t t86 = -309;
uint16_t x350 = 145U;
uint16_t x351 = UINT16_MAX;
volatile int32_t t89 = 290225134;
volatile uint8_t x364 = 1U;
volatile uint32_t x376 = 1888952192U;
static volatile uint16_t x386 = UINT16_MAX;
uint64_t x388 = 9293LLU;
volatile int16_t x392 = 478;
volatile int32_t t97 = -8510311;
uint16_t x400 = UINT16_MAX;
volatile int32_t t100 = -1;
int32_t t102 = -340394024;
int8_t x413 = 6;
int32_t t104 = 18;
uint16_t x426 = 2015U;
static int8_t x427 = INT8_MIN;
int64_t x440 = INT64_MIN;
volatile int32_t t110 = 1472;
int16_t x445 = INT16_MIN;
int64_t x448 = INT64_MIN;
int32_t x452 = -1;
int8_t x459 = INT8_MAX;
static uint64_t x464 = UINT64_MAX;
int32_t x469 = INT32_MIN;
volatile int16_t x479 = INT16_MIN;
int32_t x480 = 875949;
int32_t x484 = 85011;
int8_t x492 = 6;
volatile int32_t t122 = -64494710;
static int64_t x493 = INT64_MIN;
uint32_t x502 = 2427U;
int32_t t125 = -5741;
int32_t x510 = INT32_MIN;
volatile uint16_t x518 = 29U;
int32_t x519 = INT32_MIN;
int64_t x520 = -1926999LL;
int32_t t129 = -55748;
uint16_t x521 = UINT16_MAX;
static uint16_t x525 = 1251U;
uint64_t x527 = UINT64_MAX;
int64_t x528 = -1326111718809LL;
static int16_t x536 = -1;
volatile int32_t t133 = 173;
int32_t x537 = INT32_MIN;
volatile int32_t t134 = 236;
int64_t x543 = INT64_MIN;
int16_t x546 = -118;
int32_t x547 = -1;
volatile uint16_t x548 = UINT16_MAX;
int16_t x555 = INT16_MIN;
int16_t x558 = 1;
uint32_t x559 = UINT32_MAX;
int8_t x560 = -2;
static volatile int64_t x563 = -1LL;
int16_t x564 = -5;
static volatile int32_t t147 = -2423860;
int16_t x594 = 57;
static int32_t x595 = INT32_MAX;
volatile int32_t t148 = 31;
uint32_t x597 = 434468182U;
int16_t x599 = -1;
volatile int32_t t149 = -1868309;
static int32_t x602 = 0;
int16_t x609 = -1;
volatile int64_t x610 = -218922856289102LL;
uint8_t x615 = 37U;
int16_t x620 = -1;
int32_t t154 = -14;
int8_t x624 = -1;
int8_t x633 = INT8_MIN;
volatile int16_t x635 = INT16_MAX;
int32_t t158 = 14684976;
static uint8_t x637 = 51U;
int64_t x639 = -1LL;
static volatile int32_t t159 = -63;
static int32_t x643 = INT32_MAX;
int8_t x647 = -1;
int8_t x648 = -1;
int16_t x656 = -1;
int32_t t163 = -453;
volatile int32_t x667 = INT32_MIN;
int32_t t166 = 6487;
volatile int8_t x671 = -1;
static volatile int32_t x673 = 22;
int64_t x681 = -3452583935669065LL;
int64_t x686 = -1LL;
int32_t x689 = 362931;
uint16_t x696 = 7U;
static volatile uint64_t x700 = 7534328945674506063LLU;
static uint16_t x701 = 1536U;
static uint8_t x705 = 10U;
int8_t x711 = INT8_MIN;
volatile int8_t x713 = -1;
uint16_t x717 = UINT16_MAX;
int8_t x718 = INT8_MAX;
int32_t x720 = INT32_MIN;
int8_t x722 = 0;
static volatile int32_t t180 = 825648;
volatile uint8_t x727 = 1U;
uint32_t x728 = 31U;
uint16_t x731 = 29115U;
static int32_t x733 = -1;
int32_t x735 = INT32_MIN;
volatile uint16_t x738 = 102U;
volatile int32_t x749 = 10562271;
int16_t x759 = -856;
uint16_t x760 = 101U;
int64_t x761 = -620LL;
uint64_t x764 = UINT64_MAX;
uint64_t x772 = 455113LLU;
int8_t x780 = 19;
volatile int16_t x783 = INT16_MIN;
volatile uint8_t x785 = 12U;
static int64_t x793 = -1LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	static int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	volatile int32_t t0 = 26555;

    t0 = (x1!=(x2!=(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 5;
	int8_t x6 = 1;
	uint32_t x7 = 15365512U;
	volatile int32_t t1 = 14;

    t1 = (x5!=(x6!=(x7==x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = -1;
	int32_t t2 = -116112374;

    t2 = (x9!=(x10!=(x11==x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x13 = 19738U;
	static int32_t x15 = 94;
	int64_t x16 = INT64_MIN;
	static int32_t t3 = -267929867;

    t3 = (x13!=(x14!=(x15==x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 32039LL;
	static int8_t x18 = 23;
	volatile uint64_t x19 = 94752666143210LLU;
	int32_t x20 = 822;
	int32_t t4 = -150105;

    t4 = (x17!=(x18!=(x19==x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	static volatile uint8_t x22 = 117U;
	uint64_t x23 = 23456517688634081LLU;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 6668258;

    t5 = (x21!=(x22!=(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static volatile uint64_t x26 = UINT64_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 3847984;

    t6 = (x25!=(x26!=(x27==x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	static int64_t x32 = INT64_MIN;

    t7 = (x29!=(x30!=(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1LL;
	static int32_t x35 = INT32_MIN;
	int16_t x36 = -1;
	int32_t t8 = 1051203;

    t8 = (x33!=(x34!=(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x39 = INT32_MAX;
	volatile int64_t x40 = 390LL;

    t9 = (x37!=(x38!=(x39==x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 0;
	int64_t x44 = -254210LL;

    t10 = (x41!=(x42!=(x43==x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int64_t x46 = -1LL;
	uint8_t x47 = 45U;
	uint32_t x48 = 8780767U;
	volatile int32_t t11 = 434617;

    t11 = (x45!=(x46!=(x47==x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 1;
	uint32_t x50 = 22U;
	uint32_t x51 = 114U;
	volatile int8_t x52 = -1;
	volatile int32_t t12 = 582016;

    t12 = (x49!=(x50!=(x51==x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int32_t x55 = -7;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = -669701;

    t13 = (x53!=(x54!=(x55==x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	uint8_t x59 = 119U;
	uint32_t x60 = 221214633U;
	static int32_t t14 = -7521743;

    t14 = (x57!=(x58!=(x59==x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	volatile int32_t x62 = -417508053;
	static int16_t x63 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -6714;

    t15 = (x61!=(x62!=(x63==x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1;
	static int8_t x67 = 1;
	int16_t x68 = INT16_MAX;
	static volatile int32_t t16 = 947177516;

    t16 = (x65!=(x66!=(x67==x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x69 = -1;
	uint32_t x70 = 299363U;
	int32_t x71 = -1;
	int32_t x72 = INT32_MIN;

    t17 = (x69!=(x70!=(x71==x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile int32_t x74 = INT32_MAX;
	int16_t x75 = -227;
	uint64_t x76 = UINT64_MAX;
	static int32_t t18 = -4112825;

    t18 = (x73!=(x74!=(x75==x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MIN;
	static uint32_t x78 = 313U;
	int64_t x80 = -174440338639LL;
	volatile int32_t t19 = 215388;

    t19 = (x77!=(x78!=(x79==x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 27369U;
	static uint8_t x82 = 11U;
	static int64_t x83 = INT64_MIN;
	static volatile int64_t x84 = 45916078143LL;
	int32_t t20 = 1;

    t20 = (x81!=(x82!=(x83==x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MAX;
	volatile int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;

    t21 = (x85!=(x86!=(x87==x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 17828290LLU;
	int32_t x90 = 446;
	static int16_t x91 = INT16_MIN;

    t22 = (x89!=(x90!=(x91==x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -7;
	int32_t x94 = -129818;
	int8_t x95 = 1;
	volatile int32_t t23 = 2233967;

    t23 = (x93!=(x94!=(x95==x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	uint32_t x99 = 315560U;
	uint64_t x100 = 30LLU;

    t24 = (x97!=(x98!=(x99==x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	static int8_t x102 = INT8_MIN;
	static int16_t x103 = -1;
	int16_t x104 = 42;

    t25 = (x101!=(x102!=(x103==x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x107 = UINT64_MAX;
	int16_t x108 = -1;
	volatile int32_t t26 = 66479;

    t26 = (x105!=(x106!=(x107==x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x109 = 19U;
	volatile int8_t x110 = 0;
	int32_t x111 = 8652;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -1896990;

    t27 = (x109!=(x110!=(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -1LL;
	static int8_t x114 = INT8_MIN;
	static int16_t x115 = 0;
	static volatile int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = -237;

    t28 = (x113!=(x114!=(x115==x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -95;
	int8_t x118 = -1;
	volatile int64_t x120 = -1LL;
	int32_t t29 = 49186017;

    t29 = (x117!=(x118!=(x119==x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	static uint64_t x123 = 4500906163541022711LLU;
	int16_t x124 = -1;

    t30 = (x121!=(x122!=(x123==x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -61172313850LL;
	int16_t x126 = -1;
	uint8_t x127 = 8U;
	int64_t x128 = INT64_MIN;
	int32_t t31 = -307709;

    t31 = (x125!=(x126!=(x127==x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	volatile int8_t x131 = INT8_MIN;
	static uint16_t x132 = 5U;
	int32_t t32 = -1026;

    t32 = (x129!=(x130!=(x131==x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = 57;
	static uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 1;

    t33 = (x133!=(x134!=(x135==x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x137 = 7842760U;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 13U;

    t34 = (x137!=(x138!=(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t t35 = 11051;

    t35 = (x141!=(x142!=(x143==x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile int64_t x148 = -8166539571791080LL;
	int32_t t36 = 1;

    t36 = (x145!=(x146!=(x147==x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -1;
	int64_t x151 = -2907333151375LL;
	int8_t x152 = -1;
	volatile int32_t t37 = 22902760;

    t37 = (x149!=(x150!=(x151==x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	static int64_t x154 = -1LL;
	uint8_t x156 = 0U;
	int32_t t38 = 10643;

    t38 = (x153!=(x154!=(x155==x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 1U;
	static volatile uint16_t x158 = 273U;
	int16_t x159 = 1786;
	volatile int64_t x160 = -1LL;
	int32_t t39 = -345968254;

    t39 = (x157!=(x158!=(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 116222115U;
	volatile uint32_t x163 = 147281437U;
	int8_t x164 = -3;

    t40 = (x161!=(x162!=(x163==x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 1620073U;
	uint16_t x167 = 3854U;
	uint16_t x168 = 71U;
	int32_t t41 = 5561204;

    t41 = (x165!=(x166!=(x167==x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 5793LL;
	uint32_t x170 = UINT32_MAX;
	volatile int64_t x171 = INT64_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -112281638;

    t42 = (x169!=(x170!=(x171==x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -1;
	int32_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 1;

    t43 = (x173!=(x174!=(x175==x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = INT16_MIN;
	uint8_t x179 = 34U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = 302172004;

    t44 = (x177!=(x178!=(x179==x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MAX;
	static int32_t t45 = -65;

    t45 = (x181!=(x182!=(x183==x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -1;
	static uint64_t x186 = UINT64_MAX;
	int64_t x187 = INT64_MAX;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = 1;

    t46 = (x185!=(x186!=(x187==x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	static int32_t x190 = 763;
	int8_t x191 = INT8_MIN;
	int32_t x192 = -1;
	static volatile int32_t t47 = -8176;

    t47 = (x189!=(x190!=(x191==x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = -1;
	volatile int64_t x195 = 52953817015329LL;
	int32_t t48 = -919;

    t48 = (x193!=(x194!=(x195==x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -1;
	int32_t x199 = -1;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = -43283;

    t49 = (x197!=(x198!=(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = UINT64_MAX;
	int64_t x203 = 89872742992359717LL;
	static int8_t x204 = 0;
	static volatile int32_t t50 = 208;

    t50 = (x201!=(x202!=(x203==x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = -1LL;
	int8_t x206 = 1;
	int64_t x207 = INT64_MIN;
	volatile int32_t x208 = -96;
	static int32_t t51 = -9216159;

    t51 = (x205!=(x206!=(x207==x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MAX;
	static int64_t x211 = -157030646750087LL;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -44;

    t52 = (x209!=(x210!=(x211==x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = 5863465LLU;
	int32_t t53 = 4;

    t53 = (x213!=(x214!=(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 1822331316429667LLU;
	volatile uint32_t x218 = 204676U;
	static int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 847726;

    t54 = (x217!=(x218!=(x219==x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = 1U;
	int8_t x223 = 7;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -2948;

    t55 = (x221!=(x222!=(x223==x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 13U;
	static uint64_t x226 = 539133436311635LLU;
	uint32_t x227 = 11266680U;
	int64_t x228 = INT64_MAX;
	volatile int32_t t56 = -16035;

    t56 = (x225!=(x226!=(x227==x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -5226751650388LL;
	int16_t x230 = 15203;
	volatile int32_t t57 = 497608332;

    t57 = (x229!=(x230!=(x231==x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -15LL;
	int32_t x234 = -115729;
	int8_t x235 = -1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 315792;

    t58 = (x233!=(x234!=(x235==x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MAX;
	volatile int32_t x239 = -87;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 2038198;

    t59 = (x237!=(x238!=(x239==x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = 4313;
	volatile int16_t x243 = -112;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -4;

    t60 = (x241!=(x242!=(x243==x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = -1179251;
	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 692U;
	int16_t x248 = -295;
	int32_t t61 = -53881258;

    t61 = (x245!=(x246!=(x247==x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = -105455103;
	volatile int16_t x252 = -1;
	volatile int32_t t62 = -118561453;

    t62 = (x249!=(x250!=(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = INT32_MIN;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 29851889;

    t63 = (x253!=(x254!=(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MAX;
	uint8_t x258 = 13U;
	uint32_t x259 = UINT32_MAX;

    t64 = (x257!=(x258!=(x259==x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x264 = 2U;
	volatile int32_t t65 = -213115;

    t65 = (x261!=(x262!=(x263==x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	uint16_t x266 = 1734U;
	int16_t x267 = INT16_MAX;
	volatile uint32_t x268 = 14U;
	volatile int32_t t66 = -329560;

    t66 = (x265!=(x266!=(x267==x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -1785;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -2265419;

    t67 = (x269!=(x270!=(x271==x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = INT64_MIN;
	static uint8_t x276 = 5U;
	volatile int32_t t68 = -3;

    t68 = (x273!=(x274!=(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -1;
	static int32_t x279 = -2;
	int16_t x280 = INT16_MAX;
	volatile int32_t t69 = 25146;

    t69 = (x277!=(x278!=(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -970132LL;
	uint64_t x283 = UINT64_MAX;

    t70 = (x281!=(x282!=(x283==x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	int32_t t71 = 25440;

    t71 = (x285!=(x286!=(x287==x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x290 = 5932LLU;
	static int64_t x291 = INT64_MAX;
	volatile uint64_t x292 = 110600159349109LLU;

    t72 = (x289!=(x290!=(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	int16_t x294 = 2;
	static int64_t x295 = INT64_MAX;
	uint64_t x296 = 1024044LLU;
	volatile int32_t t73 = 7932;

    t73 = (x293!=(x294!=(x295==x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int32_t t74 = 33499198;

    t74 = (x297!=(x298!=(x299==x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = -1;

    t75 = (x301!=(x302!=(x303==x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 1LL;
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t76 = 1;

    t76 = (x305!=(x306!=(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x310 = 30500340LL;
	uint32_t x312 = 12169087U;
	int32_t t77 = 248;

    t77 = (x309!=(x310!=(x311==x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x313 = UINT64_MAX;
	static int16_t x314 = INT16_MIN;
	static uint16_t x315 = 1625U;
	volatile int32_t t78 = 13;

    t78 = (x313!=(x314!=(x315==x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x318 = 1026877U;
	static int8_t x320 = -1;
	volatile int32_t t79 = -202;

    t79 = (x317!=(x318!=(x319==x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	uint32_t x323 = 261430U;
	int64_t x324 = INT64_MIN;
	int32_t t80 = 27189;

    t80 = (x321!=(x322!=(x323==x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x326 = UINT8_MAX;
	volatile int32_t t81 = -990;

    t81 = (x325!=(x326!=(x327==x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	int8_t x330 = 9;
	static int16_t x331 = -1;
	volatile uint64_t x332 = UINT64_MAX;
	volatile int32_t t82 = -9323;

    t82 = (x329!=(x330!=(x331==x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = INT8_MAX;
	int32_t x335 = INT32_MIN;
	volatile int32_t t83 = 51;

    t83 = (x333!=(x334!=(x335==x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x337 = 170925LLU;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = UINT32_MAX;
	int8_t x340 = 0;
	static volatile int32_t t84 = -1;

    t84 = (x337!=(x338!=(x339==x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x343 = INT64_MIN;

    t85 = (x341!=(x342!=(x343==x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = -1LL;
	int32_t x347 = -215691233;
	int32_t x348 = INT32_MIN;

    t86 = (x345!=(x346!=(x347==x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 23274U;
	volatile int16_t x352 = -1;
	static int32_t t87 = -31;

    t87 = (x349!=(x350!=(x351==x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	int16_t x354 = 134;
	static volatile int16_t x355 = INT16_MIN;
	int32_t x356 = 1;
	int32_t t88 = 5690404;

    t88 = (x353!=(x354!=(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 0U;
	volatile int16_t x358 = 255;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = -517;

    t89 = (x357!=(x358!=(x359==x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int16_t x362 = -6353;
	int16_t x363 = INT16_MIN;
	volatile int32_t t90 = 0;

    t90 = (x361!=(x362!=(x363==x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x365 = 11097U;
	static volatile int64_t x366 = 8568002168798LL;
	uint64_t x367 = UINT64_MAX;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -36;

    t91 = (x365!=(x366!=(x367==x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MAX;
	int64_t x372 = 9465333370636263LL;
	volatile int32_t t92 = -15;

    t92 = (x369!=(x370!=(x371==x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 91U;
	int8_t x374 = -47;
	int8_t x375 = INT8_MIN;
	volatile int32_t t93 = 25427849;

    t93 = (x373!=(x374!=(x375==x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 21U;
	static int32_t x378 = -17188372;
	uint8_t x379 = 12U;
	int32_t x380 = -89184;
	static volatile int32_t t94 = 3325;

    t94 = (x377!=(x378!=(x379==x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	volatile uint16_t x383 = 651U;
	volatile int64_t x384 = -1383815LL;
	volatile int32_t t95 = 25013;

    t95 = (x381!=(x382!=(x383==x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = -349;
	int16_t x387 = -119;
	int32_t t96 = -2251684;

    t96 = (x385!=(x386!=(x387==x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 100LL;
	volatile int64_t x390 = -1LL;
	int64_t x391 = INT64_MAX;

    t97 = (x389!=(x390!=(x391==x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 2781U;
	int8_t x394 = 1;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	int32_t t98 = -11604;

    t98 = (x393!=(x394!=(x395==x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 7314U;
	volatile uint32_t x398 = 612U;
	static int64_t x399 = INT64_MIN;
	static int32_t t99 = 17767841;

    t99 = (x397!=(x398!=(x399==x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 969U;
	volatile uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 15U;

    t100 = (x401!=(x402!=(x403==x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = -11;
	volatile int32_t t101 = -3712440;

    t101 = (x405!=(x406!=(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = 2914;
	uint32_t x412 = 788U;

    t102 = (x409!=(x410!=(x411==x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = -1;
	volatile uint16_t x415 = 3U;
	static uint16_t x416 = 12133U;
	int32_t t103 = 0;

    t103 = (x413!=(x414!=(x415==x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = -1LL;
	static volatile uint8_t x418 = UINT8_MAX;
	int8_t x419 = -1;
	int8_t x420 = 6;

    t104 = (x417!=(x418!=(x419==x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -1;
	int8_t x422 = -60;
	int32_t x423 = -222;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = 16344401;

    t105 = (x421!=(x422!=(x423==x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	static uint64_t x428 = UINT64_MAX;
	static int32_t t106 = -1;

    t106 = (x425!=(x426!=(x427==x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = INT8_MAX;
	volatile uint8_t x431 = 32U;
	static uint16_t x432 = 893U;
	static volatile int32_t t107 = -1;

    t107 = (x429!=(x430!=(x431==x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x433 = -400665287;
	int64_t x434 = INT64_MIN;
	int16_t x435 = -1;
	int64_t x436 = INT64_MAX;
	volatile int32_t t108 = -1;

    t108 = (x433!=(x434!=(x435==x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	static int16_t x438 = INT16_MIN;
	uint8_t x439 = 0U;
	volatile int32_t t109 = 18195;

    t109 = (x437!=(x438!=(x439==x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x441 = 33113;
	int64_t x442 = INT64_MAX;
	uint64_t x443 = 247LLU;
	int32_t x444 = INT32_MIN;

    t110 = (x441!=(x442!=(x443==x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -1176;
	volatile int8_t x447 = -13;
	int32_t t111 = -1039141;

    t111 = (x445!=(x446!=(x447==x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x450 = -547;
	volatile int16_t x451 = 7;
	volatile int32_t t112 = -638299963;

    t112 = (x449!=(x450!=(x451==x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = 53;
	static uint64_t x454 = 2LLU;
	uint64_t x455 = UINT64_MAX;
	int32_t x456 = 619677;
	static volatile int32_t t113 = 26435;

    t113 = (x453!=(x454!=(x455==x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	uint16_t x460 = 2293U;
	int32_t t114 = 1512439;

    t114 = (x457!=(x458!=(x459==x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 1;
	int16_t x462 = 1;
	int16_t x463 = INT16_MIN;
	volatile int32_t t115 = -112410;

    t115 = (x461!=(x462!=(x463==x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	uint8_t x466 = 30U;
	uint64_t x467 = 26056131154237920LLU;
	uint8_t x468 = 11U;
	static int32_t t116 = 126568;

    t116 = (x465!=(x466!=(x467==x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 5975LLU;
	int16_t x471 = -1;
	volatile int32_t x472 = 9982;
	static volatile int32_t t117 = -8039153;

    t117 = (x469!=(x470!=(x471==x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 0;
	uint32_t x474 = 0U;
	uint32_t x475 = 8029926U;
	volatile uint8_t x476 = 0U;
	static int32_t t118 = 0;

    t118 = (x473!=(x474!=(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = -1;
	int16_t x478 = 8282;
	int32_t t119 = -1;

    t119 = (x477!=(x478!=(x479==x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	static int16_t x482 = INT16_MIN;
	uint64_t x483 = 458703474881250661LLU;
	int32_t t120 = 3;

    t120 = (x481!=(x482!=(x483==x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint16_t x486 = UINT16_MAX;
	int64_t x487 = -1LL;
	uint16_t x488 = 3U;
	volatile int32_t t121 = 71948;

    t121 = (x485!=(x486!=(x487==x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 2142;
	volatile int64_t x490 = INT64_MIN;
	static int8_t x491 = -1;

    t122 = (x489!=(x490!=(x491==x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MAX;
	static int8_t x495 = 1;
	volatile int64_t x496 = INT64_MIN;
	volatile int32_t t123 = -78;

    t123 = (x493!=(x494!=(x495==x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = -398;
	volatile uint64_t x498 = 510LLU;
	uint8_t x499 = UINT8_MAX;
	uint32_t x500 = 2045315U;
	volatile int32_t t124 = 304348428;

    t124 = (x497!=(x498!=(x499==x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	int16_t x503 = -6629;
	volatile uint8_t x504 = 0U;

    t125 = (x501!=(x502!=(x503==x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = INT32_MIN;
	static int8_t x506 = -1;
	int16_t x507 = INT16_MAX;
	int8_t x508 = INT8_MAX;
	volatile int32_t t126 = 56810;

    t126 = (x505!=(x506!=(x507==x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	int32_t x511 = INT32_MIN;
	volatile uint16_t x512 = 3958U;
	int32_t t127 = 12;

    t127 = (x509!=(x510!=(x511==x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 2U;
	uint8_t x514 = 3U;
	uint16_t x515 = 1U;
	uint16_t x516 = 5999U;
	int32_t t128 = -1;

    t128 = (x513!=(x514!=(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 4U;

    t129 = (x517!=(x518!=(x519==x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = INT32_MIN;
	static uint16_t x523 = UINT16_MAX;
	int32_t x524 = -23058201;
	int32_t t130 = -304794;

    t130 = (x521!=(x522!=(x523==x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MIN;
	static int32_t t131 = -19375;

    t131 = (x525!=(x526!=(x527==x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	static int16_t x530 = 0;
	uint8_t x531 = 38U;
	uint8_t x532 = 27U;
	volatile int32_t t132 = 1889;

    t132 = (x529!=(x530!=(x531==x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -6;
	int16_t x534 = INT16_MAX;
	static int32_t x535 = INT32_MAX;

    t133 = (x533!=(x534!=(x535==x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x538 = INT16_MAX;
	uint8_t x539 = UINT8_MAX;
	volatile int64_t x540 = -1LL;

    t134 = (x537!=(x538!=(x539==x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 654U;
	uint32_t x542 = 104U;
	int8_t x544 = -1;
	int32_t t135 = -75;

    t135 = (x541!=(x542!=(x543==x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	volatile int32_t t136 = 0;

    t136 = (x545!=(x546!=(x547==x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	uint32_t x550 = 1898U;
	int64_t x551 = INT64_MIN;
	static uint8_t x552 = UINT8_MAX;
	int32_t t137 = -32;

    t137 = (x549!=(x550!=(x551==x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x553 = 10566882971941LLU;
	uint64_t x554 = UINT64_MAX;
	static volatile int16_t x556 = INT16_MAX;
	int32_t t138 = -819;

    t138 = (x553!=(x554!=(x555==x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	static int32_t t139 = -85157620;

    t139 = (x557!=(x558!=(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 3U;
	uint8_t x562 = 0U;
	static volatile int32_t t140 = 59771834;

    t140 = (x561!=(x562!=(x563==x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	uint8_t x566 = 46U;
	uint8_t x567 = 53U;
	int8_t x568 = 6;
	int32_t t141 = 6160;

    t141 = (x565!=(x566!=(x567==x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	static uint8_t x570 = 0U;
	volatile int8_t x571 = INT8_MAX;
	int32_t x572 = 25;
	volatile int32_t t142 = 214767;

    t142 = (x569!=(x570!=(x571==x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = -1LL;
	uint64_t x574 = 58LLU;
	static uint32_t x575 = 1639U;
	uint32_t x576 = 75U;
	static int32_t t143 = 0;

    t143 = (x573!=(x574!=(x575==x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MAX;
	static uint32_t x578 = UINT32_MAX;
	uint64_t x579 = 1379755LLU;
	volatile int8_t x580 = INT8_MIN;
	volatile int32_t t144 = -41639;

    t144 = (x577!=(x578!=(x579==x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = UINT16_MAX;
	static volatile int16_t x582 = 2;
	static int32_t x583 = 12456493;
	int8_t x584 = INT8_MIN;
	static int32_t t145 = 2230;

    t145 = (x581!=(x582!=(x583==x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 707U;
	uint64_t x586 = 214776106726LLU;
	static volatile int64_t x587 = INT64_MIN;
	uint8_t x588 = 32U;
	int32_t t146 = -301141;

    t146 = (x585!=(x586!=(x587==x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 7620872LL;
	uint32_t x590 = UINT32_MAX;
	static int8_t x591 = -10;
	uint64_t x592 = 6193415491LLU;

    t147 = (x589!=(x590!=(x591==x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -3;
	static int8_t x596 = INT8_MIN;

    t148 = (x593!=(x594!=(x595==x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x598 = INT64_MIN;
	static volatile int8_t x600 = INT8_MAX;

    t149 = (x597!=(x598!=(x599==x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int16_t x603 = -3543;
	static uint8_t x604 = 1U;
	int32_t t150 = 32060;

    t150 = (x601!=(x602!=(x603==x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	static int8_t x606 = 0;
	int64_t x607 = INT64_MIN;
	static volatile int64_t x608 = 12991LL;
	int32_t t151 = -14952;

    t151 = (x605!=(x606!=(x607==x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x611 = -13113;
	static uint64_t x612 = UINT64_MAX;
	int32_t t152 = -2141;

    t152 = (x609!=(x610!=(x611==x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = INT32_MIN;
	uint32_t x614 = 27302U;
	int16_t x616 = INT16_MAX;
	int32_t t153 = 1;

    t153 = (x613!=(x614!=(x615==x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 3447U;
	uint8_t x618 = 65U;
	uint32_t x619 = 144U;

    t154 = (x617!=(x618!=(x619==x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = 6251;
	int16_t x622 = -1;
	int64_t x623 = 1LL;
	int32_t t155 = 2;

    t155 = (x621!=(x622!=(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	static int8_t x626 = -1;
	static int8_t x627 = INT8_MAX;
	volatile int8_t x628 = INT8_MIN;
	static volatile int32_t t156 = -8359933;

    t156 = (x625!=(x626!=(x627==x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 31711871;
	static int32_t x630 = 0;
	int16_t x631 = 2654;
	int16_t x632 = -1;
	volatile int32_t t157 = 61448;

    t157 = (x629!=(x630!=(x631==x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = -15;
	volatile uint64_t x636 = 8355403LLU;

    t158 = (x633!=(x634!=(x635==x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = UINT32_MAX;
	int16_t x640 = INT16_MIN;

    t159 = (x637!=(x638!=(x639==x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 0;
	int64_t x642 = INT64_MIN;
	volatile int32_t x644 = 138;
	volatile int32_t t160 = 435340;

    t160 = (x641!=(x642!=(x643==x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	uint32_t x646 = UINT32_MAX;
	volatile int32_t t161 = -15376;

    t161 = (x645!=(x646!=(x647==x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int32_t x650 = -1;
	volatile int16_t x651 = -645;
	uint32_t x652 = 1458108554U;
	int32_t t162 = 0;

    t162 = (x649!=(x650!=(x651==x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = UINT8_MAX;
	volatile int32_t x655 = INT32_MIN;

    t163 = (x653!=(x654!=(x655==x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = -221;
	uint8_t x659 = 0U;
	volatile int8_t x660 = 1;
	int32_t t164 = 662;

    t164 = (x657!=(x658!=(x659==x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 37009286LLU;
	int64_t x662 = 29759LL;
	int32_t x663 = INT32_MAX;
	volatile uint64_t x664 = UINT64_MAX;
	volatile int32_t t165 = 3684715;

    t165 = (x661!=(x662!=(x663==x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	int8_t x668 = INT8_MIN;

    t166 = (x665!=(x666!=(x667==x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = INT16_MIN;
	static int32_t x670 = 993089;
	int8_t x672 = INT8_MAX;
	int32_t t167 = 26;

    t167 = (x669!=(x670!=(x671==x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = 1533048;
	uint32_t x675 = 13U;
	static uint16_t x676 = UINT16_MAX;
	volatile int32_t t168 = 257828763;

    t168 = (x673!=(x674!=(x675==x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MAX;
	int32_t x679 = -118482868;
	static int16_t x680 = INT16_MAX;
	int32_t t169 = -44293650;

    t169 = (x677!=(x678!=(x679==x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = INT32_MAX;
	static uint64_t x683 = 22414570LLU;
	int16_t x684 = INT16_MAX;
	int32_t t170 = -16511340;

    t170 = (x681!=(x682!=(x683==x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MAX;
	int8_t x687 = 3;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 21;

    t171 = (x685!=(x686!=(x687==x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MAX;
	static volatile int32_t x691 = 6387242;
	static uint32_t x692 = UINT32_MAX;
	volatile int32_t t172 = -40;

    t172 = (x689!=(x690!=(x691==x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int16_t x694 = -1224;
	volatile int16_t x695 = INT16_MAX;
	volatile int32_t t173 = -84;

    t173 = (x693!=(x694!=(x695==x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = INT8_MIN;
	volatile int8_t x698 = INT8_MIN;
	volatile uint64_t x699 = 7520249579755LLU;
	volatile int32_t t174 = 1010;

    t174 = (x697!=(x698!=(x699==x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x702 = 1294975832044LLU;
	uint16_t x703 = 1816U;
	volatile int16_t x704 = INT16_MIN;
	static int32_t t175 = 7762479;

    t175 = (x701!=(x702!=(x703==x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = -8;
	volatile int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MAX;
	int32_t t176 = 31;

    t176 = (x705!=(x706!=(x707==x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	static uint64_t x710 = 995214LLU;
	int64_t x712 = -36769763091057726LL;
	volatile int32_t t177 = 21;

    t177 = (x709!=(x710!=(x711==x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MIN;
	int8_t x715 = 27;
	int32_t x716 = -93923;
	volatile int32_t t178 = -80294820;

    t178 = (x713!=(x714!=(x715==x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x719 = 100829764U;
	static volatile int32_t t179 = 10929364;

    t179 = (x717!=(x718!=(x719==x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 7U;
	volatile uint32_t x723 = 669U;
	uint64_t x724 = UINT64_MAX;

    t180 = (x721!=(x722!=(x723==x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	static int8_t x726 = INT8_MIN;
	volatile int32_t t181 = 2677206;

    t181 = (x725!=(x726!=(x727==x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x729 = 1;
	int32_t x730 = 4071687;
	int64_t x732 = INT64_MIN;
	int32_t t182 = -49006;

    t182 = (x729!=(x730!=(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x734 = UINT16_MAX;
	volatile int16_t x736 = -25;
	volatile int32_t t183 = 33882207;

    t183 = (x733!=(x734!=(x735==x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	int32_t x739 = INT32_MIN;
	int64_t x740 = INT64_MAX;
	volatile int32_t t184 = 7940;

    t184 = (x737!=(x738!=(x739==x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	int16_t x742 = 1973;
	static uint32_t x743 = UINT32_MAX;
	static int8_t x744 = INT8_MIN;
	int32_t t185 = -3;

    t185 = (x741!=(x742!=(x743==x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	volatile uint8_t x746 = 3U;
	int64_t x747 = INT64_MIN;
	static uint16_t x748 = 5U;
	int32_t t186 = -1140007;

    t186 = (x745!=(x746!=(x747==x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = UINT32_MAX;
	int16_t x751 = -13168;
	uint16_t x752 = UINT16_MAX;
	int32_t t187 = 3518182;

    t187 = (x749!=(x750!=(x751==x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MIN;
	volatile uint32_t x754 = UINT32_MAX;
	int16_t x755 = INT16_MIN;
	volatile int8_t x756 = -1;
	int32_t t188 = -60023;

    t188 = (x753!=(x754!=(x755==x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = -1;
	volatile int32_t t189 = -603508988;

    t189 = (x757!=(x758!=(x759==x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x762 = INT8_MAX;
	static int16_t x763 = -8;
	static volatile int32_t t190 = 61058;

    t190 = (x761!=(x762!=(x763==x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = 0U;
	volatile int64_t x766 = INT64_MAX;
	int8_t x767 = -1;
	volatile int64_t x768 = -116351165690312930LL;
	static volatile int32_t t191 = -19;

    t191 = (x765!=(x766!=(x767==x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	uint16_t x770 = UINT16_MAX;
	volatile int64_t x771 = INT64_MIN;
	volatile int32_t t192 = 29560;

    t192 = (x769!=(x770!=(x771==x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = -1LL;
	volatile int16_t x774 = INT16_MIN;
	volatile int16_t x775 = INT16_MIN;
	uint16_t x776 = 16U;
	int32_t t193 = -953270;

    t193 = (x773!=(x774!=(x775==x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	volatile int64_t x778 = INT64_MAX;
	int64_t x779 = -6133030455487216LL;
	volatile int32_t t194 = 2566548;

    t194 = (x777!=(x778!=(x779==x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	volatile uint16_t x782 = UINT16_MAX;
	static int16_t x784 = INT16_MAX;
	volatile int32_t t195 = 854831;

    t195 = (x781!=(x782!=(x783==x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x786 = INT64_MIN;
	volatile int64_t x787 = -12417065LL;
	int32_t x788 = -1;
	int32_t t196 = -641;

    t196 = (x785!=(x786!=(x787==x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x790 = INT32_MIN;
	int32_t x791 = -1;
	volatile uint16_t x792 = 8626U;
	static int32_t t197 = 450438026;

    t197 = (x789!=(x790!=(x791==x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = 21U;
	int8_t x795 = 5;
	uint16_t x796 = 176U;
	static int32_t t198 = 252858168;

    t198 = (x793!=(x794!=(x795==x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x797 = 2U;
	uint16_t x798 = 567U;
	int8_t x799 = 13;
	volatile int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 4;

    t199 = (x797!=(x798!=(x799==x800)));

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

