
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

static int8_t x1 = INT8_MIN;
uint8_t x5 = 85U;
uint32_t x8 = 50751U;
int64_t x10 = 0LL;
uint64_t x11 = 1978LLU;
volatile int32_t x16 = -27;
int64_t x19 = INT64_MAX;
int32_t x20 = -1;
volatile int32_t t4 = -1196;
int16_t x27 = -1;
volatile int32_t x31 = -1;
uint32_t x32 = 174U;
volatile int32_t t7 = 4956;
int64_t x33 = INT64_MAX;
static volatile int8_t x35 = -1;
int64_t x37 = -261312LL;
int64_t x42 = -1LL;
uint8_t x43 = UINT8_MAX;
volatile int32_t t10 = -7031;
int8_t x48 = -1;
static int32_t x49 = INT32_MIN;
int64_t x54 = INT64_MIN;
int32_t t14 = -562747;
volatile int32_t t18 = 356241;
volatile int32_t x86 = -1;
volatile int32_t t21 = -35351798;
int64_t x93 = -1LL;
int8_t x97 = INT8_MAX;
int16_t x100 = 1;
static uint32_t x113 = UINT32_MAX;
volatile int8_t x115 = INT8_MAX;
static uint32_t x122 = 4839U;
int64_t x129 = -1LL;
uint8_t x142 = 3U;
static int16_t x143 = INT16_MIN;
volatile int16_t x144 = INT16_MIN;
int32_t x147 = INT32_MIN;
int8_t x148 = INT8_MIN;
uint32_t x156 = 5288U;
volatile uint64_t x157 = UINT64_MAX;
int64_t x160 = 1177207708813875528LL;
static volatile int32_t t39 = -25193949;
volatile int8_t x164 = INT8_MIN;
static int8_t x165 = INT8_MAX;
volatile uint32_t x169 = UINT32_MAX;
int32_t t42 = 15696462;
int32_t x173 = -1;
volatile int32_t t44 = -10;
int16_t x193 = INT16_MAX;
int16_t x209 = INT16_MAX;
int16_t x214 = 773;
static int64_t x215 = INT64_MAX;
int64_t x217 = -349LL;
int32_t x218 = -28552960;
static int32_t x221 = -1;
int32_t x227 = 767937;
static int8_t x238 = INT8_MIN;
volatile int32_t t59 = -1;
static int32_t t61 = -1011690093;
int8_t x252 = INT8_MIN;
uint64_t x253 = 12990LLU;
static int16_t x254 = INT16_MIN;
uint16_t x256 = 11758U;
int64_t x259 = 165295464832LL;
int8_t x264 = -5;
static volatile int64_t x265 = -2169878469523LL;
uint8_t x266 = UINT8_MAX;
int64_t x267 = INT64_MIN;
int16_t x269 = -1;
volatile int32_t t67 = -82;
static uint8_t x276 = 5U;
uint8_t x277 = 6U;
volatile uint16_t x281 = 10U;
volatile int8_t x283 = INT8_MAX;
int64_t x286 = INT64_MIN;
int32_t x287 = -1;
int64_t x291 = INT64_MIN;
volatile int32_t t75 = 13812;
uint8_t x308 = UINT8_MAX;
static int8_t x309 = INT8_MAX;
volatile int16_t x310 = INT16_MIN;
int32_t x321 = INT32_MIN;
int16_t x325 = -4;
uint16_t x326 = UINT16_MAX;
uint16_t x331 = UINT16_MAX;
int32_t t82 = 410794530;
uint8_t x336 = 1U;
static int16_t x341 = -2;
int32_t t85 = 961254544;
int32_t x345 = 1010279486;
int32_t x348 = INT32_MAX;
uint8_t x354 = UINT8_MAX;
static uint32_t x363 = 7844U;
uint32_t x365 = 159U;
int64_t x366 = INT64_MIN;
uint8_t x367 = 57U;
int32_t t91 = 50;
int32_t x377 = INT32_MIN;
int8_t x379 = -1;
static uint64_t x383 = UINT64_MAX;
uint64_t x384 = 606985870648500LLU;
volatile int32_t x404 = INT32_MAX;
int64_t x406 = 4748392LL;
int16_t x407 = 9764;
uint64_t x410 = 3571455LLU;
int64_t x419 = 840LL;
static uint64_t x437 = UINT64_MAX;
int64_t x439 = INT64_MAX;
static int8_t x442 = INT8_MIN;
int8_t x444 = INT8_MAX;
volatile int8_t x452 = INT8_MIN;
int32_t x453 = -1;
static int32_t x456 = INT32_MIN;
int32_t x460 = INT32_MAX;
volatile uint16_t x471 = UINT16_MAX;
volatile uint32_t x472 = UINT32_MAX;
int16_t x479 = INT16_MIN;
uint8_t x486 = UINT8_MAX;
int16_t x487 = INT16_MIN;
int32_t x488 = -1;
int16_t x490 = -1;
int32_t x491 = 74;
int32_t t122 = -148;
int32_t x512 = -1;
static uint32_t x513 = UINT32_MAX;
static uint8_t x518 = 0U;
int64_t x528 = INT64_MIN;
uint32_t x530 = UINT32_MAX;
int64_t x532 = 5LL;
static uint64_t x537 = 6961007LLU;
uint16_t x540 = 57U;
volatile uint32_t x542 = 511U;
static int16_t x545 = INT16_MIN;
uint8_t x548 = UINT8_MAX;
volatile int8_t x549 = 2;
static volatile int64_t x551 = INT64_MAX;
int32_t x556 = 9;
volatile int16_t x561 = INT16_MAX;
volatile int32_t t140 = 210347;
static uint64_t x569 = UINT64_MAX;
uint64_t x570 = 51382935096057LLU;
int64_t x571 = INT64_MIN;
int64_t x572 = -1LL;
volatile int32_t t142 = 4138929;
int8_t x581 = INT8_MAX;
volatile int64_t x582 = -1LL;
uint32_t x583 = UINT32_MAX;
static int32_t t145 = -7962360;
int16_t x586 = -1;
uint16_t x589 = 977U;
int8_t x590 = -11;
int32_t x596 = INT32_MAX;
int32_t x602 = -222;
static uint16_t x607 = 1U;
int8_t x611 = 13;
static int8_t x616 = INT8_MIN;
static int32_t x617 = INT32_MIN;
static int16_t x619 = -1;
static uint32_t x629 = 200186U;
static int64_t x630 = INT64_MIN;
uint64_t x631 = 456LLU;
static uint8_t x632 = UINT8_MAX;
static int32_t t157 = 51;
static int64_t x634 = INT64_MAX;
int64_t x635 = -335647LL;
volatile int32_t t158 = -2;
int16_t x642 = 191;
int64_t x644 = -148LL;
int64_t x645 = -1LL;
volatile int16_t x651 = INT16_MIN;
int16_t x660 = -1;
int64_t x666 = -1LL;
int32_t t166 = 5;
volatile uint8_t x672 = 1U;
int8_t x673 = -1;
int64_t x676 = INT64_MAX;
uint16_t x687 = 70U;
int32_t t171 = -1485269;
static int32_t x689 = INT32_MAX;
int32_t x690 = -2389637;
int64_t x692 = -1655857691862748LL;
int8_t x694 = 1;
uint8_t x696 = UINT8_MAX;
uint64_t x700 = 28298591416624LLU;
int32_t t174 = 1;
int8_t x701 = 4;
int8_t x707 = -20;
volatile uint8_t x708 = 21U;
static int32_t x712 = INT32_MIN;
static int64_t x735 = 81100309984LL;
volatile uint64_t x740 = UINT64_MAX;
uint8_t x741 = UINT8_MAX;
int16_t x747 = INT16_MAX;
int64_t x750 = INT64_MIN;
volatile int32_t t187 = 6725;
int8_t x757 = INT8_MIN;
uint32_t x758 = 106843U;
volatile int32_t t189 = 87560;
int8_t x764 = -11;
static volatile int32_t t190 = 46626;
int16_t x772 = -1;
int16_t x775 = -1;
int32_t x782 = -392500;
int64_t x785 = -1LL;
volatile int32_t t196 = -3568238;
volatile int32_t x800 = INT32_MIN;


void f0(void) {
    	volatile int16_t x2 = INT16_MAX;
	static uint16_t x3 = 249U;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -40289704;

    t0 = ((x1&x2)==(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x6 = 77U;
	static int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 0;

    t1 = ((x5&x6)==(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 25919U;
	volatile uint32_t x12 = 194494501U;
	static volatile int32_t t2 = -28897582;

    t2 = ((x9&x10)==(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	uint16_t x14 = 1U;
	static uint16_t x15 = UINT16_MAX;
	volatile int32_t t3 = -125736;

    t3 = ((x13&x14)==(x15>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int16_t x18 = 1;

    t4 = ((x17&x18)==(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint16_t x22 = 240U;
	volatile int16_t x23 = -222;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = 466574679;

    t5 = ((x21&x22)==(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	volatile uint8_t x26 = 0U;
	uint64_t x28 = 838298477LLU;
	volatile int32_t t6 = 1129297;

    t6 = ((x25&x26)==(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -810;
	int8_t x30 = INT8_MIN;

    t7 = ((x29&x30)==(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = UINT64_MAX;
	int64_t x36 = -149273920718LL;
	int32_t t8 = 0;

    t8 = ((x33&x34)==(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	static uint16_t x40 = 8076U;
	int32_t t9 = 359438338;

    t9 = ((x37&x38)==(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 413U;
	int32_t x44 = INT32_MIN;

    t10 = ((x41&x42)==(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	static int16_t x46 = INT16_MIN;
	volatile int32_t x47 = -8;
	int32_t t11 = 277;

    t11 = ((x45&x46)==(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 6;
	int32_t x51 = INT32_MAX;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 598;

    t12 = ((x49&x50)==(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MAX;
	uint8_t x55 = 39U;
	volatile int64_t x56 = 13415099224560LL;
	static int32_t t13 = -1834777;

    t13 = ((x53&x54)==(x55>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;

    t14 = ((x57&x58)==(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 73U;
	static int16_t x62 = -3737;
	uint8_t x63 = 6U;
	static int16_t x64 = 0;
	static int32_t t15 = 10878;

    t15 = ((x61&x62)==(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 631LLU;
	uint64_t x66 = 5657121LLU;
	volatile uint16_t x67 = 2299U;
	static volatile int64_t x68 = -1LL;
	static int32_t t16 = 0;

    t16 = ((x65&x66)==(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 191522940947010LLU;
	volatile int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = 15843U;
	int32_t t17 = 4626028;

    t17 = ((x69&x70)==(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 0;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	static int32_t x76 = INT32_MIN;

    t18 = ((x73&x74)==(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 201571426854254LLU;
	int32_t x78 = -1;
	int64_t x79 = -211LL;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -4839;

    t19 = ((x77&x78)==(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 0U;
	int32_t x82 = INT32_MAX;
	int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = 25413838;

    t20 = ((x81&x82)==(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 14;
	uint16_t x87 = UINT16_MAX;
	volatile uint16_t x88 = 31U;

    t21 = ((x85&x86)==(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -66302285;
	static int32_t x90 = INT32_MIN;
	uint16_t x91 = 1626U;
	uint16_t x92 = 15441U;
	int32_t t22 = 51444159;

    t22 = ((x89&x90)==(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = 4139LL;
	volatile uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 45;

    t23 = ((x93&x94)==(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = 101224622264LL;
	int16_t x99 = -1;
	volatile int32_t t24 = 517688;

    t24 = ((x97&x98)==(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = 21117564;
	uint16_t x102 = 222U;
	static int64_t x103 = -1LL;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 22;

    t25 = ((x101&x102)==(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int64_t x106 = 101LL;
	static volatile int32_t x107 = INT32_MAX;
	int32_t x108 = -6380555;
	volatile int32_t t26 = 319343;

    t26 = ((x105&x106)==(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = UINT32_MAX;
	uint8_t x112 = 6U;
	volatile int32_t t27 = 1;

    t27 = ((x109&x110)==(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x114 = 882072LLU;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -68506;

    t28 = ((x113&x114)==(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 14;

    t29 = ((x117&x118)==(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	static int32_t x123 = -1;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = 35775;

    t30 = ((x121&x122)==(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	static uint16_t x128 = 27541U;
	volatile int32_t t31 = -22806;

    t31 = ((x125&x126)==(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x130 = -1;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	static int32_t t32 = 221;

    t32 = ((x129&x130)==(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	static int16_t x134 = INT16_MIN;
	volatile uint32_t x135 = UINT32_MAX;
	volatile uint16_t x136 = 0U;
	int32_t t33 = 2;

    t33 = ((x133&x134)==(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = UINT32_MAX;
	int8_t x138 = 0;
	int16_t x139 = 0;
	static int8_t x140 = 3;
	volatile int32_t t34 = 5;

    t34 = ((x137&x138)==(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MIN;
	volatile int32_t t35 = 6637;

    t35 = ((x141&x142)==(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	uint64_t x146 = 10542LLU;
	volatile int32_t t36 = 9326895;

    t36 = ((x145&x146)==(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x149 = INT32_MIN;
	volatile uint16_t x150 = UINT16_MAX;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = 1;
	volatile int32_t t37 = -238402033;

    t37 = ((x149&x150)==(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 750118LLU;
	static uint32_t x154 = 1975923683U;
	uint64_t x155 = 19565LLU;
	static int32_t t38 = 551;

    t38 = ((x153&x154)==(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = 30LL;

    t39 = ((x157&x158)==(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	uint16_t x162 = 9704U;
	uint8_t x163 = 5U;
	int32_t t40 = -954572811;

    t40 = ((x161&x162)==(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x166 = UINT8_MAX;
	int64_t x167 = INT64_MAX;
	int64_t x168 = -30399363043566025LL;
	volatile int32_t t41 = 3;

    t41 = ((x165&x166)==(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = -1;
	volatile int8_t x171 = -1;
	uint64_t x172 = 206107035LLU;

    t42 = ((x169&x170)==(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x174 = 952U;
	int64_t x175 = INT64_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -254;

    t43 = ((x173&x174)==(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 9060;
	static int16_t x178 = INT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;

    t44 = ((x177&x178)==(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -1;
	static int64_t x182 = INT64_MIN;
	int8_t x183 = 4;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 0;

    t45 = ((x181&x182)==(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 111354U;
	static int32_t t46 = -208721;

    t46 = ((x185&x186)==(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = INT16_MIN;
	volatile uint8_t x190 = 9U;
	int16_t x191 = INT16_MAX;
	int16_t x192 = -1;
	volatile int32_t t47 = 28;

    t47 = ((x189&x190)==(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x194 = -12870461LL;
	int32_t x195 = 153323;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 53555;

    t48 = ((x193&x194)==(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = -1;
	int64_t x198 = -22642LL;
	int8_t x199 = -1;
	int32_t x200 = INT32_MAX;
	int32_t t49 = -1;

    t49 = ((x197&x198)==(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 7U;
	static uint8_t x202 = UINT8_MAX;
	int16_t x203 = 125;
	int16_t x204 = -1;
	static volatile int32_t t50 = -79268;

    t50 = ((x201&x202)==(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 112U;
	volatile int8_t x206 = INT8_MIN;
	volatile int8_t x207 = 1;
	uint16_t x208 = 6U;
	int32_t t51 = 10;

    t51 = ((x205&x206)==(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = INT32_MIN;
	volatile int8_t x211 = 27;
	static int8_t x212 = INT8_MIN;
	int32_t t52 = 54;

    t52 = ((x209&x210)==(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	volatile int32_t x216 = -1;
	static volatile int32_t t53 = -3302;

    t53 = ((x213&x214)==(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x219 = -27502713079281979LL;
	uint8_t x220 = 69U;
	int32_t t54 = -572;

    t54 = ((x217&x218)==(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 156U;
	volatile int32_t t55 = 1491;

    t55 = ((x221&x222)==(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = INT16_MIN;
	int32_t x228 = -1;
	volatile int32_t t56 = -14994;

    t56 = ((x225&x226)==(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 5LLU;
	static uint32_t x230 = UINT32_MAX;
	int32_t x231 = INT32_MAX;
	volatile int8_t x232 = INT8_MIN;
	int32_t t57 = -1;

    t57 = ((x229&x230)==(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	volatile uint16_t x234 = 0U;
	int8_t x235 = 42;
	static int64_t x236 = -189529069420184223LL;
	volatile int32_t t58 = 20;

    t58 = ((x233&x234)==(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	volatile int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = UINT16_MAX;

    t59 = ((x237&x238)==(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	volatile int16_t x242 = INT16_MAX;
	static volatile int8_t x243 = -1;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -185;

    t60 = ((x241&x242)==(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	int32_t x246 = -14688;
	int16_t x247 = 0;
	int8_t x248 = INT8_MAX;

    t61 = ((x245&x246)==(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int8_t x250 = 0;
	static int64_t x251 = INT64_MIN;
	int32_t t62 = 206;

    t62 = ((x249&x250)==(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x255 = INT8_MAX;
	static volatile int32_t t63 = 1521;

    t63 = ((x253&x254)==(x255>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -2307916;
	static int64_t x258 = -35687472958285121LL;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -160912;

    t64 = ((x257&x258)==(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x261 = 3U;
	uint32_t x262 = 24780U;
	int32_t x263 = INT32_MAX;
	volatile int32_t t65 = 22884;

    t65 = ((x261&x262)==(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x268 = 24220375U;
	int32_t t66 = 1173226;

    t66 = ((x265&x266)==(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x270 = 751608LLU;
	static volatile int32_t x271 = INT32_MIN;
	static uint32_t x272 = 508493418U;

    t67 = ((x269&x270)==(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 565379;
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MAX;
	volatile int32_t t68 = -54162;

    t68 = ((x273&x274)==(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 49135125LLU;
	volatile int32_t t69 = 3;

    t69 = ((x277&x278)==(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = UINT8_MAX;
	uint16_t x284 = 71U;
	static volatile int32_t t70 = -342457312;

    t70 = ((x281&x282)==(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	static uint32_t x288 = 394314U;
	int32_t t71 = 507889;

    t71 = ((x285&x286)==(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x289 = INT8_MIN;
	static volatile int32_t x290 = -3816687;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = -10046055;

    t72 = ((x289&x290)==(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	uint64_t x294 = 15251901088LLU;
	static uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 2025U;
	int32_t t73 = -51170;

    t73 = ((x293&x294)==(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 62U;
	int8_t x300 = -42;
	volatile int32_t t74 = -201087;

    t74 = ((x297&x298)==(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	volatile uint8_t x302 = 0U;
	static int64_t x303 = INT64_MIN;
	volatile int8_t x304 = -1;

    t75 = ((x301&x302)==(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x307 = INT16_MIN;
	int32_t t76 = -1674;

    t76 = ((x305&x306)==(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x311 = UINT16_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t77 = -25321;

    t77 = ((x309&x310)==(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = 12U;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 2696091844313240004LLU;
	static volatile int32_t t78 = -132088674;

    t78 = ((x313&x314)==(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MAX;
	volatile int16_t x320 = -1196;
	static volatile int32_t t79 = 497134;

    t79 = ((x317&x318)==(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MAX;
	static int8_t x324 = 17;
	volatile int32_t t80 = 1110640;

    t80 = ((x321&x322)==(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x327 = INT16_MIN;
	uint16_t x328 = 0U;
	volatile int32_t t81 = -298990;

    t81 = ((x325&x326)==(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	volatile uint16_t x330 = 5718U;
	static uint64_t x332 = 2LLU;

    t82 = ((x329&x330)==(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = 220LLU;
	int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	volatile int32_t t83 = -24469217;

    t83 = ((x333&x334)==(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -19;
	static int16_t x338 = -1;
	int8_t x339 = 3;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -102;

    t84 = ((x337&x338)==(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int16_t x344 = 3047;

    t85 = ((x341&x342)==(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MIN;
	int32_t t86 = -1175;

    t86 = ((x345&x346)==(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -7759;
	volatile int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = -48952825;

    t87 = ((x349&x350)==(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	static int32_t x355 = 94;
	int32_t x356 = -1;
	volatile int32_t t88 = 127626173;

    t88 = ((x353&x354)==(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	static int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = 85599197190LLU;
	static int16_t x360 = 0;
	volatile int32_t t89 = 3313;

    t89 = ((x357&x358)==(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	uint8_t x362 = 39U;
	uint8_t x364 = 47U;
	int32_t t90 = -585;

    t90 = ((x361&x362)==(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x368 = 112U;

    t91 = ((x365&x366)==(x367>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MAX;
	volatile int32_t x371 = INT32_MAX;
	int16_t x372 = -1;
	int32_t t92 = 363879;

    t92 = ((x369&x370)==(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	int64_t x374 = 36157LL;
	int32_t x375 = -1;
	static uint32_t x376 = 3021U;
	int32_t t93 = -122;

    t93 = ((x373&x374)==(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x378 = INT8_MIN;
	volatile int8_t x380 = -1;
	static volatile int32_t t94 = 452869879;

    t94 = ((x377&x378)==(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = -1;
	static int32_t x382 = INT32_MAX;
	static volatile int32_t t95 = 115147179;

    t95 = ((x381&x382)==(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	int16_t x387 = 1;
	static int32_t x388 = 194228;
	volatile int32_t t96 = 1;

    t96 = ((x385&x386)==(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = 1LL;
	int8_t x390 = INT8_MIN;
	static int16_t x391 = 0;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = 7555058;

    t97 = ((x389&x390)==(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = INT8_MAX;
	int64_t x394 = -5054276LL;
	int64_t x395 = -1LL;
	int64_t x396 = 60866622LL;
	int32_t t98 = -12415364;

    t98 = ((x393&x394)==(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = 408U;
	int16_t x398 = -2143;
	volatile int16_t x399 = INT16_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = 18;

    t99 = ((x397&x398)==(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 4003U;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MAX;
	int32_t t100 = 572;

    t100 = ((x401&x402)==(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	int32_t t101 = -142003475;

    t101 = ((x405&x406)==(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	static int64_t x411 = -18438LL;
	int16_t x412 = 803;
	volatile int32_t t102 = -44586701;

    t102 = ((x409&x410)==(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 3U;
	volatile uint8_t x416 = 25U;
	volatile int32_t t103 = 255;

    t103 = ((x413&x414)==(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = -35580;
	uint32_t x420 = 347U;
	int32_t t104 = -4419;

    t104 = ((x417&x418)==(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	static int32_t x422 = -1;
	volatile int32_t x423 = -1;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = -31980;

    t105 = ((x421&x422)==(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	static int16_t x426 = INT16_MIN;
	int64_t x427 = INT64_MIN;
	int8_t x428 = INT8_MIN;
	int32_t t106 = 1026505;

    t106 = ((x425&x426)==(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	volatile int16_t x430 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;
	int32_t t107 = 205;

    t107 = ((x429&x430)==(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x433 = 0U;
	volatile uint64_t x434 = 12094LLU;
	volatile int64_t x435 = INT64_MIN;
	static int16_t x436 = -6563;
	static int32_t t108 = -93259;

    t108 = ((x433&x434)==(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = 0;
	int8_t x440 = INT8_MAX;
	volatile int32_t t109 = 20912210;

    t109 = ((x437&x438)==(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = -38;
	static int32_t x443 = 13;
	volatile int32_t t110 = -10164386;

    t110 = ((x441&x442)==(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x446 = 30181735165LLU;
	uint64_t x447 = 9356000527663687LLU;
	int64_t x448 = INT64_MIN;
	volatile int32_t t111 = 659321;

    t111 = ((x445&x446)==(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -20;
	int64_t x450 = 1033607LL;
	int16_t x451 = INT16_MIN;
	volatile int32_t t112 = -106216;

    t112 = ((x449&x450)==(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = 4;
	static int64_t x455 = -1LL;
	volatile int32_t t113 = 5385292;

    t113 = ((x453&x454)==(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 1731U;
	static int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MIN;
	volatile int32_t t114 = 1;

    t114 = ((x457&x458)==(x459>x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x461 = 3U;
	static int8_t x462 = INT8_MIN;
	uint32_t x463 = 998355149U;
	int16_t x464 = INT16_MIN;
	volatile int32_t t115 = -193;

    t115 = ((x461&x462)==(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MAX;
	int16_t x468 = INT16_MAX;
	volatile int32_t t116 = -7388718;

    t116 = ((x465&x466)==(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -1;
	volatile uint16_t x470 = 4989U;
	int32_t t117 = 976461601;

    t117 = ((x469&x470)==(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 110U;
	int8_t x474 = INT8_MIN;
	volatile int32_t x475 = INT32_MAX;
	uint8_t x476 = 1U;
	volatile int32_t t118 = -127;

    t118 = ((x473&x474)==(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	volatile int16_t x478 = INT16_MIN;
	int64_t x480 = -1LL;
	static volatile int32_t t119 = 12;

    t119 = ((x477&x478)==(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 1956978445LL;
	static int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MAX;
	volatile int64_t x484 = INT64_MIN;
	int32_t t120 = 166656222;

    t120 = ((x481&x482)==(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile int32_t t121 = -379769;

    t121 = ((x485&x486)==(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	uint64_t x492 = 384219653415LLU;

    t122 = ((x489&x490)==(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int64_t x494 = 7LL;
	static volatile int64_t x495 = 45765752001LL;
	int64_t x496 = 5183686LL;
	volatile int32_t t123 = 8241326;

    t123 = ((x493&x494)==(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 14154882U;
	int64_t x498 = -1LL;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -7770LL;
	int32_t t124 = 188;

    t124 = ((x497&x498)==(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = INT16_MAX;
	int32_t x503 = INT32_MAX;
	int16_t x504 = INT16_MIN;
	volatile int32_t t125 = -54934;

    t125 = ((x501&x502)==(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 24;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = INT16_MIN;
	volatile int64_t x508 = 29274461700454330LL;
	volatile int32_t t126 = 145673;

    t126 = ((x505&x506)==(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 52351LLU;
	uint64_t x510 = 16155958492136LLU;
	int16_t x511 = INT16_MIN;
	volatile int32_t t127 = -16010;

    t127 = ((x509&x510)==(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = 0LL;
	static uint8_t x515 = 3U;
	int64_t x516 = 127670683LL;
	volatile int32_t t128 = 3181;

    t128 = ((x513&x514)==(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	volatile int8_t x519 = -48;
	int8_t x520 = INT8_MIN;
	volatile int32_t t129 = 1;

    t129 = ((x517&x518)==(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	int64_t x522 = INT64_MIN;
	uint8_t x523 = UINT8_MAX;
	static volatile int8_t x524 = INT8_MIN;
	int32_t t130 = 13;

    t130 = ((x521&x522)==(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = 3U;
	int64_t x526 = 49417LL;
	uint8_t x527 = 3U;
	static int32_t t131 = 19987;

    t131 = ((x525&x526)==(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	volatile int8_t x531 = -12;
	volatile int32_t t132 = -99;

    t132 = ((x529&x530)==(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 12;
	int16_t x534 = -708;
	uint16_t x535 = 4772U;
	int8_t x536 = 0;
	static int32_t t133 = 99401474;

    t133 = ((x533&x534)==(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = INT64_MAX;
	uint8_t x539 = UINT8_MAX;
	volatile int32_t t134 = 6;

    t134 = ((x537&x538)==(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x541 = UINT8_MAX;
	volatile uint16_t x543 = 27505U;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 89;

    t135 = ((x541&x542)==(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	static int8_t x547 = -54;
	int32_t t136 = -1;

    t136 = ((x545&x546)==(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x550 = 27U;
	int16_t x552 = 1;
	volatile int32_t t137 = -67677509;

    t137 = ((x549&x550)==(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	static uint32_t x554 = UINT32_MAX;
	uint64_t x555 = 5552885789556219LLU;
	int32_t t138 = -561;

    t138 = ((x553&x554)==(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	uint64_t x558 = 810222064347042LLU;
	int64_t x559 = 1116871334LL;
	uint32_t x560 = 60854U;
	static int32_t t139 = -3150220;

    t139 = ((x557&x558)==(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = 19501U;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = UINT8_MAX;

    t140 = ((x561&x562)==(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	int32_t x566 = 114767474;
	int16_t x567 = -1;
	volatile int64_t x568 = INT64_MIN;
	volatile int32_t t141 = 220;

    t141 = ((x565&x566)==(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    

    t142 = ((x569&x570)==(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 2U;
	int16_t x574 = 263;
	static uint16_t x575 = 250U;
	int32_t x576 = INT32_MAX;
	volatile int32_t t143 = -5203;

    t143 = ((x573&x574)==(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	int8_t x578 = INT8_MIN;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 111U;
	volatile int32_t t144 = -2;

    t144 = ((x577&x578)==(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x584 = -1LL;

    t145 = ((x581&x582)==(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x585 = UINT64_MAX;
	int64_t x587 = -1LL;
	volatile int16_t x588 = -87;
	volatile int32_t t146 = -56478036;

    t146 = ((x585&x586)==(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x591 = -1820;
	int32_t x592 = -18814;
	static int32_t t147 = -54337;

    t147 = ((x589&x590)==(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int8_t x594 = 0;
	int32_t x595 = INT32_MAX;
	static volatile int32_t t148 = 42393;

    t148 = ((x593&x594)==(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -10;
	int8_t x598 = -1;
	static uint32_t x599 = 107U;
	uint64_t x600 = 24426LLU;
	int32_t t149 = 60505;

    t149 = ((x597&x598)==(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	static int16_t x603 = INT16_MIN;
	volatile int64_t x604 = INT64_MAX;
	volatile int32_t t150 = 1953;

    t150 = ((x601&x602)==(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	volatile uint8_t x606 = 2U;
	uint32_t x608 = 22353733U;
	volatile int32_t t151 = -11495;

    t151 = ((x605&x606)==(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = 16;
	static int8_t x610 = -1;
	int64_t x612 = 60633LL;
	volatile int32_t t152 = -44353;

    t152 = ((x609&x610)==(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MAX;
	volatile int32_t x614 = INT32_MIN;
	uint64_t x615 = UINT64_MAX;
	volatile int32_t t153 = 312;

    t153 = ((x613&x614)==(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x618 = 11U;
	static int16_t x620 = INT16_MAX;
	int32_t t154 = 549798419;

    t154 = ((x617&x618)==(x619>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	volatile int8_t x622 = -1;
	static volatile int64_t x623 = -392LL;
	volatile int8_t x624 = INT8_MIN;
	static volatile int32_t t155 = 0;

    t155 = ((x621&x622)==(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 30749U;
	volatile int8_t x626 = 14;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = -1;
	int32_t t156 = -5;

    t156 = ((x625&x626)==(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    

    t157 = ((x629&x630)==(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 1796U;
	uint16_t x636 = UINT16_MAX;

    t158 = ((x633&x634)==(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x637 = -1;
	int64_t x638 = INT64_MAX;
	int16_t x639 = INT16_MAX;
	int32_t x640 = -15;
	volatile int32_t t159 = -1561;

    t159 = ((x637&x638)==(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = UINT32_MAX;
	int64_t x643 = INT64_MIN;
	int32_t t160 = -16;

    t160 = ((x641&x642)==(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = -1LL;
	int32_t x647 = -44741;
	int32_t x648 = -1;
	volatile int32_t t161 = 20;

    t161 = ((x645&x646)==(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	int16_t x650 = 3;
	int64_t x652 = INT64_MAX;
	int32_t t162 = -4688608;

    t162 = ((x649&x650)==(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = -1LL;
	static uint64_t x654 = 7252922421936519LLU;
	int32_t x655 = INT32_MIN;
	int32_t x656 = -443473043;
	static volatile int32_t t163 = 535621627;

    t163 = ((x653&x654)==(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 15;
	static volatile int64_t x658 = -1LL;
	volatile uint64_t x659 = UINT64_MAX;
	int32_t t164 = -4167;

    t164 = ((x657&x658)==(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	static int8_t x662 = -1;
	uint8_t x663 = 0U;
	int64_t x664 = 3041782119671755LL;
	volatile int32_t t165 = 10;

    t165 = ((x661&x662)==(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 51U;
	volatile int32_t x667 = -1;
	uint64_t x668 = 314734915595215LLU;

    t166 = ((x665&x666)==(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = 63354086023LL;
	uint16_t x670 = 3251U;
	int64_t x671 = -373478873261LL;
	static volatile int32_t t167 = -21484457;

    t167 = ((x669&x670)==(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MIN;
	static uint32_t x675 = 784906972U;
	static int32_t t168 = -666730;

    t168 = ((x673&x674)==(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 31U;
	int8_t x678 = INT8_MAX;
	static int16_t x679 = INT16_MIN;
	static volatile uint64_t x680 = UINT64_MAX;
	volatile int32_t t169 = 224035619;

    t169 = ((x677&x678)==(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 1668812387940LLU;
	volatile int32_t x682 = INT32_MIN;
	int8_t x683 = 26;
	uint32_t x684 = 4U;
	volatile int32_t t170 = 7977780;

    t170 = ((x681&x682)==(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 4;
	uint32_t x686 = 347U;
	volatile int8_t x688 = -23;

    t171 = ((x685&x686)==(x687>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x691 = 226434U;
	static volatile int32_t t172 = 7;

    t172 = ((x689&x690)==(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int8_t x695 = -1;
	volatile int32_t t173 = 797;

    t173 = ((x693&x694)==(x695>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	uint64_t x698 = 6013883108552588LLU;
	volatile int8_t x699 = -1;

    t174 = ((x697&x698)==(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = 3689746;
	int64_t x703 = -1306301644LL;
	volatile int64_t x704 = -1LL;
	volatile int32_t t175 = -9;

    t175 = ((x701&x702)==(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 843191634U;
	uint32_t x706 = UINT32_MAX;
	volatile int32_t t176 = 12;

    t176 = ((x705&x706)==(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	volatile int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	volatile int32_t t177 = -6352;

    t177 = ((x709&x710)==(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	static uint8_t x714 = 17U;
	static uint32_t x715 = 22131U;
	uint64_t x716 = 9450173263233962LLU;
	volatile int32_t t178 = -3;

    t178 = ((x713&x714)==(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = UINT16_MAX;
	volatile int32_t x718 = INT32_MIN;
	uint64_t x719 = 711LLU;
	volatile uint16_t x720 = 4U;
	static volatile int32_t t179 = 169713971;

    t179 = ((x717&x718)==(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x721 = UINT32_MAX;
	int32_t x722 = INT32_MAX;
	static volatile int8_t x723 = -12;
	int8_t x724 = -49;
	volatile int32_t t180 = 1;

    t180 = ((x721&x722)==(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 0U;
	uint16_t x726 = 1U;
	static int8_t x727 = INT8_MAX;
	static uint16_t x728 = 1U;
	volatile int32_t t181 = 107;

    t181 = ((x725&x726)==(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int8_t x730 = INT8_MIN;
	static uint8_t x731 = UINT8_MAX;
	static int16_t x732 = INT16_MAX;
	volatile int32_t t182 = -13439385;

    t182 = ((x729&x730)==(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 14421321;
	volatile int8_t x734 = INT8_MIN;
	static int16_t x736 = -912;
	int32_t t183 = 0;

    t183 = ((x733&x734)==(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int8_t x738 = INT8_MIN;
	volatile int16_t x739 = INT16_MIN;
	volatile int32_t t184 = -64094722;

    t184 = ((x737&x738)==(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x742 = 595659;
	static uint32_t x743 = 8183053U;
	volatile uint64_t x744 = 6756898615656270591LLU;
	int32_t t185 = -7586;

    t185 = ((x741&x742)==(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 45U;
	int64_t x746 = INT64_MIN;
	int64_t x748 = INT64_MAX;
	volatile int32_t t186 = -89601860;

    t186 = ((x745&x746)==(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x749 = 7U;
	volatile uint16_t x751 = UINT16_MAX;
	static int64_t x752 = -1059423911LL;

    t187 = ((x749&x750)==(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = UINT64_MAX;
	int64_t x754 = INT64_MAX;
	static uint8_t x755 = 1U;
	int64_t x756 = INT64_MIN;
	int32_t t188 = -3598;

    t188 = ((x753&x754)==(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x759 = 1LLU;
	static int16_t x760 = INT16_MIN;

    t189 = ((x757&x758)==(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 1308308200U;
	uint8_t x762 = 99U;
	int16_t x763 = INT16_MAX;

    t190 = ((x761&x762)==(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = UINT8_MAX;
	int64_t x767 = -2LL;
	static int16_t x768 = INT16_MIN;
	static int32_t t191 = 444866;

    t191 = ((x765&x766)==(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 9330U;
	uint32_t x770 = 45774168U;
	int16_t x771 = 0;
	int32_t t192 = -1787;

    t192 = ((x769&x770)==(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 1695U;
	int32_t x774 = 1194;
	static int16_t x776 = -15;
	volatile int32_t t193 = 22779;

    t193 = ((x773&x774)==(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	volatile uint64_t x778 = UINT64_MAX;
	int8_t x779 = INT8_MIN;
	static uint32_t x780 = 320226U;
	static int32_t t194 = -263312;

    t194 = ((x777&x778)==(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 38906718067LLU;
	int16_t x783 = INT16_MIN;
	int32_t x784 = -1;
	volatile int32_t t195 = -14941;

    t195 = ((x781&x782)==(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x786 = 31U;
	int16_t x787 = 0;
	static volatile int8_t x788 = 5;

    t196 = ((x785&x786)==(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	volatile int64_t x790 = INT64_MIN;
	static volatile uint8_t x791 = 23U;
	uint64_t x792 = UINT64_MAX;
	static int32_t t197 = 79792;

    t197 = ((x789&x790)==(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x793 = 44U;
	volatile uint64_t x794 = UINT64_MAX;
	int8_t x795 = INT8_MAX;
	uint64_t x796 = 375LLU;
	volatile int32_t t198 = -125;

    t198 = ((x793&x794)==(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = 652;
	int16_t x798 = INT16_MIN;
	int32_t x799 = 1751;
	int32_t t199 = 8095087;

    t199 = ((x797&x798)==(x799>x800));

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

