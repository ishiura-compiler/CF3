
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

static volatile int64_t x4 = 32640LL;
volatile int32_t x5 = INT32_MIN;
static int8_t x9 = INT8_MIN;
int32_t x20 = 11925;
volatile int32_t t4 = 88667;
int64_t x22 = -1LL;
uint64_t x32 = 384LLU;
uint16_t x34 = 1763U;
int32_t t8 = 46326495;
static int32_t x40 = INT32_MAX;
uint8_t x45 = 105U;
uint8_t x50 = UINT8_MAX;
static int16_t x56 = INT16_MIN;
int64_t x58 = -1LL;
int8_t x60 = INT8_MAX;
int8_t x64 = 0;
int8_t x82 = INT8_MIN;
int64_t x84 = INT64_MAX;
uint8_t x85 = 0U;
volatile uint16_t x88 = UINT16_MAX;
int64_t x89 = INT64_MIN;
int64_t x92 = -1LL;
uint8_t x93 = 0U;
int64_t x94 = INT64_MIN;
uint8_t x96 = UINT8_MAX;
uint32_t x98 = UINT32_MAX;
int32_t t24 = -505175523;
uint64_t x102 = 60481177988628LLU;
volatile int8_t x104 = INT8_MIN;
volatile int32_t t25 = 15;
volatile int32_t t26 = 258742199;
uint16_t x112 = 1559U;
int32_t t27 = -66642756;
uint16_t x115 = 3946U;
int32_t x117 = INT32_MAX;
static volatile int32_t x118 = 91309;
volatile uint64_t x119 = 2LLU;
int32_t t30 = 52102;
volatile int32_t t31 = -152898776;
uint32_t x131 = 127906U;
int16_t x136 = -1;
int32_t t33 = -195844;
int8_t x140 = INT8_MAX;
uint32_t x141 = 41U;
static int64_t x150 = INT64_MAX;
uint64_t x151 = 170LLU;
uint64_t x154 = UINT64_MAX;
static uint8_t x156 = 0U;
int64_t x162 = 74485854LL;
int8_t x167 = INT8_MAX;
int32_t t41 = 94500843;
int64_t x169 = 861LL;
static int64_t x171 = -2590LL;
volatile int32_t t44 = -3;
uint32_t x183 = 175011U;
uint32_t x185 = 75896421U;
int8_t x186 = -7;
volatile uint64_t x189 = 793386422109654LLU;
uint64_t x192 = 14811401819LLU;
static volatile int32_t t51 = 25;
static int64_t x211 = -1LL;
int8_t x212 = INT8_MAX;
int16_t x217 = 26;
volatile int64_t x224 = INT64_MIN;
static int8_t x226 = INT8_MAX;
int32_t x231 = INT32_MAX;
static uint64_t x232 = UINT64_MAX;
int8_t x235 = INT8_MIN;
volatile int32_t t58 = -167;
int32_t t62 = -1;
static int8_t x256 = INT8_MIN;
uint8_t x260 = 2U;
int16_t x263 = -1;
int32_t t65 = -352663154;
uint16_t x265 = 15008U;
volatile int64_t x266 = INT64_MAX;
volatile int32_t x271 = -1;
volatile int32_t t67 = -14399;
int16_t x273 = -90;
volatile int32_t t69 = 7;
int32_t x281 = -89;
int8_t x285 = -1;
uint16_t x287 = 16U;
static uint8_t x297 = UINT8_MAX;
int16_t x299 = INT16_MIN;
int32_t t74 = 3;
uint64_t x304 = 298590390LLU;
volatile int32_t t75 = 12971;
int64_t x306 = -1LL;
volatile int32_t t76 = -1929545;
int32_t x311 = INT32_MIN;
int32_t x313 = -1;
int16_t x320 = 0;
int64_t x323 = -5LL;
volatile int32_t x326 = INT32_MAX;
static int8_t x328 = INT8_MAX;
int8_t x329 = INT8_MIN;
int32_t t82 = 3;
int16_t x334 = -7;
int32_t t83 = 27678628;
static volatile uint32_t x340 = 15U;
int8_t x346 = INT8_MAX;
uint32_t x349 = 239521U;
static uint8_t x355 = UINT8_MAX;
int32_t x357 = 0;
int32_t t89 = -9;
int32_t t91 = -37908;
static uint32_t x371 = 21U;
int32_t x376 = INT32_MAX;
static volatile uint8_t x377 = 3U;
static int32_t x379 = INT32_MIN;
uint16_t x385 = 31U;
int8_t x388 = -4;
uint8_t x391 = 0U;
int32_t x392 = -1;
int64_t x395 = INT64_MIN;
int32_t x398 = INT32_MAX;
int16_t x401 = 100;
volatile int32_t t103 = 10390;
int64_t x418 = -7LL;
int64_t x422 = -137113228178LL;
uint64_t x427 = 8904LLU;
volatile int32_t t107 = -101772;
static int16_t x434 = -1;
int64_t x438 = 1200139LL;
int8_t x439 = -1;
uint32_t x440 = 8154279U;
int32_t x443 = INT32_MIN;
volatile int32_t t110 = 205;
int64_t x445 = -1LL;
volatile int16_t x446 = 0;
int64_t x450 = -1226700000019LL;
uint32_t x452 = 63U;
uint16_t x454 = 2599U;
volatile int32_t t113 = 176;
int64_t x462 = INT64_MIN;
static uint8_t x468 = 7U;
int32_t t116 = -4;
volatile int16_t x469 = INT16_MAX;
int64_t x472 = INT64_MIN;
volatile int16_t x476 = INT16_MIN;
static volatile int32_t t118 = -683;
int8_t x488 = INT8_MIN;
int32_t t121 = 1217862;
volatile int32_t t123 = 30;
volatile int32_t x498 = INT32_MIN;
int32_t t124 = 2293;
int8_t x510 = INT8_MIN;
volatile int32_t t127 = -222;
int16_t x516 = -901;
volatile int32_t t130 = -26;
volatile int8_t x526 = -1;
int32_t t131 = -6229;
volatile int32_t x535 = -28680540;
static volatile int32_t t135 = 873760;
uint8_t x545 = 1U;
volatile uint64_t x551 = 155079862754607LLU;
int32_t t137 = -1162;
static int8_t x557 = -1;
volatile int32_t t143 = -3;
volatile int8_t x579 = INT8_MAX;
int64_t x591 = INT64_MIN;
static volatile uint32_t x593 = 3566261U;
uint16_t x598 = 36U;
int32_t x599 = INT32_MIN;
int64_t x637 = -1LL;
volatile int32_t t159 = 7373;
int8_t x647 = 19;
volatile uint8_t x657 = 1U;
volatile int64_t x663 = INT64_MIN;
volatile int32_t t166 = 22885814;
volatile int8_t x669 = INT8_MIN;
uint8_t x672 = 0U;
int32_t x684 = -737190114;
volatile int32_t t170 = 703094;
int16_t x687 = INT16_MIN;
uint8_t x693 = UINT8_MAX;
int32_t t173 = -86;
uint32_t x700 = UINT32_MAX;
volatile int32_t t175 = 201616;
int32_t x705 = INT32_MIN;
int32_t x709 = -1;
static int8_t x712 = INT8_MIN;
uint64_t x715 = UINT64_MAX;
static int8_t x716 = -1;
int32_t t178 = 33;
volatile int16_t x725 = INT16_MIN;
uint64_t x726 = UINT64_MAX;
int8_t x735 = INT8_MIN;
volatile int16_t x740 = -1;
static int32_t t187 = -153;
int64_t x755 = 3431LL;
int64_t x764 = -1LL;
volatile uint16_t x767 = 74U;
int32_t x769 = 886546301;
static int64_t x783 = -1LL;
uint32_t x787 = 24367773U;
volatile int32_t t196 = 87194;
volatile int32_t x794 = 7287;
volatile int8_t x795 = INT8_MAX;
static uint64_t x796 = 34030179032968380LLU;
int8_t x799 = INT8_MAX;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile int32_t x2 = INT32_MIN;
	static int16_t x3 = -1;
	volatile int32_t t0 = 3556137;

    t0 = ((x1<=x2)<=(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = -1LL;
	int8_t x7 = -1;
	volatile uint8_t x8 = 26U;
	static int32_t t1 = 1;

    t1 = ((x5<=x6)<=(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x10 = UINT16_MAX;
	volatile int64_t x11 = -908186LL;
	int8_t x12 = -1;
	volatile int32_t t2 = -27;

    t2 = ((x9<=x10)<=(x11<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static int32_t x14 = -1;
	int32_t x15 = INT32_MIN;
	static uint64_t x16 = 52970760979LLU;
	volatile int32_t t3 = 46628973;

    t3 = ((x13<=x14)<=(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int32_t x18 = 299;
	int64_t x19 = 1LL;

    t4 = ((x17<=x18)<=(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int32_t x23 = 5449;
	static volatile uint64_t x24 = 6502492440040556LLU;
	volatile int32_t t5 = -1501317;

    t5 = ((x21<=x22)<=(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MIN;
	static int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -290246;

    t6 = ((x25<=x26)<=(x27<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 618564380642LL;
	int32_t x30 = 74847;
	volatile int32_t x31 = INT32_MAX;
	int32_t t7 = 3404;

    t7 = ((x29<=x30)<=(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = 16126512410LLU;
	uint64_t x35 = 585298104LLU;
	int16_t x36 = -560;

    t8 = ((x33<=x34)<=(x35<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 137873LLU;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -8145;
	int32_t t9 = -202;

    t9 = ((x37<=x38)<=(x39<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MAX;
	static int32_t x42 = 673;
	static int32_t x43 = INT32_MIN;
	volatile int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = -525734838;

    t10 = ((x41<=x42)<=(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = -57818404;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = 224;
	static int32_t t11 = -1408;

    t11 = ((x45<=x46)<=(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	uint16_t x51 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = 1323160;

    t12 = ((x49<=x50)<=(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MAX;
	int16_t x54 = 814;
	int8_t x55 = INT8_MAX;
	volatile int32_t t13 = -9710294;

    t13 = ((x53<=x54)<=(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	uint8_t x59 = 1U;
	volatile int32_t t14 = -359;

    t14 = ((x57<=x58)<=(x59<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	volatile int64_t x62 = -1LL;
	int32_t x63 = -1;
	volatile int32_t t15 = 7;

    t15 = ((x61<=x62)<=(x63<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = 13546344524LLU;
	static uint64_t x68 = 87129189181895001LLU;
	int32_t t16 = -102;

    t16 = ((x65<=x66)<=(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 45346275;
	int32_t x70 = INT32_MAX;
	int16_t x71 = 0;
	int64_t x72 = -249313982637506781LL;
	static int32_t t17 = -167101507;

    t17 = ((x69<=x70)<=(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int64_t x75 = -185298LL;
	static volatile int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 242956308;

    t18 = ((x73<=x74)<=(x75<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 1U;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 15U;
	uint32_t x80 = 2U;
	volatile int32_t t19 = 3489;

    t19 = ((x77<=x78)<=(x79<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -26;
	static uint64_t x83 = 15LLU;
	volatile int32_t t20 = -813;

    t20 = ((x81<=x82)<=(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	volatile uint8_t x87 = 1U;
	volatile int32_t t21 = 0;

    t21 = ((x85<=x86)<=(x87<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = INT64_MIN;
	static int64_t x91 = -308761LL;
	int32_t t22 = 76506;

    t22 = ((x89<=x90)<=(x91<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x95 = -789;
	volatile int32_t t23 = -2;

    t23 = ((x93<=x94)<=(x95<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = -2;
	uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 7140U;

    t24 = ((x97<=x98)<=(x99<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	int64_t x103 = -1LL;

    t25 = ((x101<=x102)<=(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = -1;
	int32_t x106 = 2179;
	int32_t x107 = INT32_MAX;
	int64_t x108 = INT64_MIN;

    t26 = ((x105<=x106)<=(x107<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 1U;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;

    t27 = ((x109<=x110)<=(x111<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static int64_t x114 = 6567626867LL;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -449382;

    t28 = ((x113<=x114)<=(x115<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x120 = INT32_MIN;
	int32_t t29 = -3125;

    t29 = ((x117<=x118)<=(x119<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = INT8_MIN;
	volatile uint16_t x122 = 2205U;
	int16_t x123 = -1;
	static int64_t x124 = INT64_MIN;

    t30 = ((x121<=x122)<=(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	static volatile int8_t x126 = INT8_MIN;
	uint8_t x127 = 65U;
	int8_t x128 = INT8_MIN;

    t31 = ((x125<=x126)<=(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	int32_t x130 = -1;
	int32_t x132 = 4116216;
	int32_t t32 = 572;

    t32 = ((x129<=x130)<=(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -21;
	static int8_t x134 = INT8_MIN;
	static volatile int32_t x135 = 30;

    t33 = ((x133<=x134)<=(x135<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	static int8_t x138 = 0;
	int64_t x139 = 1LL;
	volatile int32_t t34 = 1;

    t34 = ((x137<=x138)<=(x139<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = 194U;
	int16_t x143 = 11715;
	uint8_t x144 = 76U;
	int32_t t35 = -2004005;

    t35 = ((x141<=x142)<=(x143<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 698232802U;
	int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 459562943;

    t36 = ((x145<=x146)<=(x147<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	static volatile int8_t x152 = INT8_MIN;
	int32_t t37 = 5317034;

    t37 = ((x149<=x150)<=(x151<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	static int32_t x155 = 101752;
	volatile int32_t t38 = 1884404;

    t38 = ((x153<=x154)<=(x155<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static volatile uint32_t x158 = 5558U;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = -1;
	static int32_t t39 = 0;

    t39 = ((x157<=x158)<=(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -1559770869595150701LL;
	int8_t x163 = 1;
	int16_t x164 = INT16_MAX;
	int32_t t40 = 203;

    t40 = ((x161<=x162)<=(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 3U;
	static int64_t x166 = INT64_MIN;
	static int8_t x168 = INT8_MIN;

    t41 = ((x165<=x166)<=(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = -1LL;
	static volatile int64_t x172 = 256436488204LL;
	int32_t t42 = -15;

    t42 = ((x169<=x170)<=(x171<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MIN;
	static int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -9;

    t43 = ((x173<=x174)<=(x175<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -2932;
	volatile int64_t x180 = -188238968LL;

    t44 = ((x177<=x178)<=(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 468U;
	uint16_t x182 = 2767U;
	volatile int32_t x184 = -3415;
	int32_t t45 = -624;

    t45 = ((x181<=x182)<=(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x187 = -1LL;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 927;

    t46 = ((x185<=x186)<=(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	static volatile int32_t t47 = -13642111;

    t47 = ((x189<=x190)<=(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = UINT16_MAX;
	volatile uint8_t x194 = 2U;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -26;

    t48 = ((x193<=x194)<=(x195<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 200059505215LLU;
	static uint32_t x198 = 1U;
	int64_t x199 = -24LL;
	int16_t x200 = 954;
	static int32_t t49 = -1114;

    t49 = ((x197<=x198)<=(x199<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 6128U;
	int32_t x202 = INT32_MAX;
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t50 = 120;

    t50 = ((x201<=x202)<=(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 201458530U;
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = INT64_MIN;

    t51 = ((x205<=x206)<=(x207<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MAX;
	volatile uint32_t x210 = 420U;
	int32_t t52 = 0;

    t52 = ((x209<=x210)<=(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	volatile int8_t x214 = 6;
	uint64_t x215 = 5566215LLU;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = -91;

    t53 = ((x213<=x214)<=(x215<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MIN;
	static int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -522;

    t54 = ((x217<=x218)<=(x219<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MIN;
	uint64_t x222 = 94469739LLU;
	int16_t x223 = INT16_MAX;
	static int32_t t55 = 704244570;

    t55 = ((x221<=x222)<=(x223<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	volatile uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;
	volatile int32_t t56 = 57;

    t56 = ((x225<=x226)<=(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	static int32_t t57 = -15975562;

    t57 = ((x229<=x230)<=(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	int8_t x234 = 0;
	volatile int32_t x236 = -1;

    t58 = ((x233<=x234)<=(x235<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = -1;
	static int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 509;

    t59 = ((x237<=x238)<=(x239<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 3U;
	int32_t x242 = INT32_MAX;
	uint8_t x243 = 95U;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -6;

    t60 = ((x241<=x242)<=(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	static int16_t x246 = -14594;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 0U;
	static int32_t t61 = 37801237;

    t61 = ((x245<=x246)<=(x247<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = -1LL;
	int64_t x250 = 0LL;
	int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = UINT16_MAX;

    t62 = ((x249<=x250)<=(x251<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 6U;
	uint16_t x254 = UINT16_MAX;
	volatile int16_t x255 = INT16_MIN;
	volatile int32_t t63 = -4;

    t63 = ((x253<=x254)<=(x255<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -1;
	int64_t x258 = 1LL;
	int32_t x259 = INT32_MIN;
	static int32_t t64 = 90178;

    t64 = ((x257<=x258)<=(x259<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = UINT32_MAX;
	uint16_t x264 = 4U;

    t65 = ((x261<=x262)<=(x263<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x267 = 88U;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -2;

    t66 = ((x265<=x266)<=(x267<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 84U;
	volatile int32_t x270 = INT32_MAX;
	int16_t x272 = INT16_MAX;

    t67 = ((x269<=x270)<=(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = 26;
	int32_t x275 = -48;
	uint32_t x276 = 3621U;
	int32_t t68 = -6776251;

    t68 = ((x273<=x274)<=(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MAX;
	uint32_t x278 = 63U;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;

    t69 = ((x277<=x278)<=(x279<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x282 = INT8_MAX;
	static volatile uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = -6032685;

    t70 = ((x281<=x282)<=(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x286 = -1;
	int16_t x288 = -16150;
	static int32_t t71 = -1;

    t71 = ((x285<=x286)<=(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = -123;
	int8_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = -1;
	static int32_t t72 = -3895074;

    t72 = ((x289<=x290)<=(x291<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	static int16_t x294 = INT16_MAX;
	uint16_t x295 = 9332U;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -2;

    t73 = ((x293<=x294)<=(x295<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x298 = -1;
	int64_t x300 = INT64_MIN;

    t74 = ((x297<=x298)<=(x299<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MAX;
	int64_t x303 = 278174590580595633LL;

    t75 = ((x301<=x302)<=(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = 3;

    t76 = ((x305<=x306)<=(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	int8_t x312 = -20;
	volatile int32_t t77 = 7042562;

    t77 = ((x309<=x310)<=(x311<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	int64_t x316 = INT64_MIN;
	volatile int32_t t78 = -13996554;

    t78 = ((x313<=x314)<=(x315<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	volatile int32_t x318 = 11469;
	uint16_t x319 = 1U;
	int32_t t79 = 248;

    t79 = ((x317<=x318)<=(x319<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 13U;
	int16_t x322 = -4465;
	int16_t x324 = -36;
	int32_t t80 = -17763;

    t80 = ((x321<=x322)<=(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	uint32_t x327 = 8905U;
	int32_t t81 = -160310;

    t81 = ((x325<=x326)<=(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x330 = UINT8_MAX;
	int16_t x331 = 55;
	int8_t x332 = -1;

    t82 = ((x329<=x330)<=(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	int64_t x335 = 8885LL;
	static uint16_t x336 = UINT16_MAX;

    t83 = ((x333<=x334)<=(x335<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	static int8_t x338 = INT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	static int32_t t84 = -427;

    t84 = ((x337<=x338)<=(x339<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = UINT64_MAX;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MAX;
	uint64_t x344 = 20LLU;
	static volatile int32_t t85 = 13423110;

    t85 = ((x341<=x342)<=(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x345 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	static volatile int16_t x348 = INT16_MIN;
	int32_t t86 = -10;

    t86 = ((x345<=x346)<=(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = -203263;
	int32_t x351 = -272436;
	volatile int8_t x352 = INT8_MIN;
	static volatile int32_t t87 = -9;

    t87 = ((x349<=x350)<=(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MAX;
	static uint32_t x354 = 7U;
	volatile uint64_t x356 = 27721898498LLU;
	int32_t t88 = 121;

    t88 = ((x353<=x354)<=(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x358 = -2535305376057575LL;
	int64_t x359 = -1107813820LL;
	int32_t x360 = -16709711;

    t89 = ((x357<=x358)<=(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -4;
	volatile uint8_t x362 = 43U;
	int16_t x363 = -1;
	uint64_t x364 = 35066494LLU;
	volatile int32_t t90 = -575;

    t90 = ((x361<=x362)<=(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	int64_t x366 = -111522981017LL;
	static uint32_t x367 = 455U;
	uint64_t x368 = UINT64_MAX;

    t91 = ((x365<=x366)<=(x367<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	int32_t x370 = INT32_MIN;
	int16_t x372 = -1;
	int32_t t92 = 1;

    t92 = ((x369<=x370)<=(x371<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = -22;
	volatile int8_t x374 = -61;
	uint64_t x375 = 16082501114775LLU;
	volatile int32_t t93 = 119;

    t93 = ((x373<=x374)<=(x375<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -330809;

    t94 = ((x377<=x378)<=(x379<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	static uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t95 = -37009;

    t95 = ((x381<=x382)<=(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x386 = 470176U;
	int64_t x387 = INT64_MAX;
	volatile int32_t t96 = -241;

    t96 = ((x385<=x386)<=(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	uint16_t x390 = 18685U;
	int32_t t97 = -12243;

    t97 = ((x389<=x390)<=(x391<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x394 = -313192;
	uint64_t x396 = 292093LLU;
	volatile int32_t t98 = -38155429;

    t98 = ((x393<=x394)<=(x395<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	volatile int64_t x399 = -1LL;
	volatile uint32_t x400 = UINT32_MAX;
	int32_t t99 = 3935031;

    t99 = ((x397<=x398)<=(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x402 = 2LLU;
	int32_t x403 = -1;
	int8_t x404 = -4;
	volatile int32_t t100 = -100736;

    t100 = ((x401<=x402)<=(x403<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = 19;
	int8_t x406 = -13;
	volatile int8_t x407 = INT8_MAX;
	static uint64_t x408 = 1LLU;
	int32_t t101 = -11;

    t101 = ((x405<=x406)<=(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = 3U;
	static int64_t x410 = -1LL;
	static volatile uint32_t x411 = 287504453U;
	static int8_t x412 = -2;
	volatile int32_t t102 = 37;

    t102 = ((x409<=x410)<=(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	static volatile uint8_t x414 = 2U;
	volatile int32_t x415 = INT32_MIN;
	int8_t x416 = -12;

    t103 = ((x413<=x414)<=(x415<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 3U;
	volatile int8_t x419 = 6;
	static int64_t x420 = -131135917418629356LL;
	int32_t t104 = -297;

    t104 = ((x417<=x418)<=(x419<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	volatile int16_t x424 = INT16_MIN;
	volatile int32_t t105 = 207352268;

    t105 = ((x421<=x422)<=(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = 533U;
	volatile int16_t x426 = INT16_MAX;
	int64_t x428 = -13367067636296LL;
	static int32_t t106 = 1813;

    t106 = ((x425<=x426)<=(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MAX;
	int64_t x430 = INT64_MAX;
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MAX;

    t107 = ((x429<=x430)<=(x431<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	volatile int64_t x435 = -1LL;
	static volatile int16_t x436 = 2257;
	volatile int32_t t108 = -29486;

    t108 = ((x433<=x434)<=(x435<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	int32_t t109 = -10;

    t109 = ((x437<=x438)<=(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -1LL;
	int16_t x442 = INT16_MIN;
	uint64_t x444 = UINT64_MAX;

    t110 = ((x441<=x442)<=(x443<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x447 = 1U;
	static int32_t x448 = -502;
	static volatile int32_t t111 = -207875708;

    t111 = ((x445<=x446)<=(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	static uint64_t x451 = UINT64_MAX;
	volatile int32_t t112 = -124893956;

    t112 = ((x449<=x450)<=(x451<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = UINT8_MAX;
	int32_t x455 = INT32_MAX;
	int32_t x456 = INT32_MIN;

    t113 = ((x453<=x454)<=(x455<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	int64_t x458 = INT64_MIN;
	int32_t x459 = -1294834;
	int16_t x460 = INT16_MAX;
	int32_t t114 = 1387947;

    t114 = ((x457<=x458)<=(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 49;
	volatile uint64_t x463 = UINT64_MAX;
	uint64_t x464 = UINT64_MAX;
	static int32_t t115 = -98687889;

    t115 = ((x461<=x462)<=(x463<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -52;
	int32_t x466 = INT32_MIN;
	int64_t x467 = -1LL;

    t116 = ((x465<=x466)<=(x467<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x470 = -42;
	volatile int16_t x471 = INT16_MIN;
	static int32_t t117 = -130111;

    t117 = ((x469<=x470)<=(x471<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -317;
	static int64_t x474 = INT64_MIN;
	volatile int32_t x475 = INT32_MIN;

    t118 = ((x473<=x474)<=(x475<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	uint16_t x478 = 42U;
	int32_t x479 = INT32_MAX;
	static volatile int64_t x480 = -1LL;
	int32_t t119 = -716;

    t119 = ((x477<=x478)<=(x479<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = 3;
	int16_t x482 = -632;
	static volatile uint64_t x483 = 35022969575352LLU;
	volatile int64_t x484 = 11868852689420LL;
	static volatile int32_t t120 = 93851;

    t120 = ((x481<=x482)<=(x483<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = -1;
	volatile int8_t x486 = -1;
	uint8_t x487 = 116U;

    t121 = ((x485<=x486)<=(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 429463U;
	int64_t x490 = -14294661546980376LL;
	uint8_t x491 = 4U;
	int64_t x492 = -4269501315260306LL;
	int32_t t122 = 9129385;

    t122 = ((x489<=x490)<=(x491<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	int32_t x494 = 16153079;
	volatile uint8_t x495 = UINT8_MAX;
	int32_t x496 = INT32_MIN;

    t123 = ((x493<=x494)<=(x495<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = 2245592;
	int32_t x499 = 2344477;
	uint8_t x500 = UINT8_MAX;

    t124 = ((x497<=x498)<=(x499<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = -1564;
	uint8_t x503 = UINT8_MAX;
	uint64_t x504 = 1372212252743035LLU;
	int32_t t125 = 2;

    t125 = ((x501<=x502)<=(x503<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 43;
	int16_t x506 = INT16_MIN;
	int32_t x507 = -276362;
	uint64_t x508 = UINT64_MAX;
	int32_t t126 = -1941;

    t126 = ((x505<=x506)<=(x507<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	volatile uint32_t x511 = UINT32_MAX;
	volatile int16_t x512 = INT16_MIN;

    t127 = ((x509<=x510)<=(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	uint8_t x515 = 3U;
	int32_t t128 = -14;

    t128 = ((x513<=x514)<=(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	int64_t x518 = INT64_MAX;
	int64_t x519 = -520748LL;
	volatile int8_t x520 = -4;
	int32_t t129 = 35245;

    t129 = ((x517<=x518)<=(x519<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x521 = UINT32_MAX;
	static int64_t x522 = -564LL;
	int32_t x523 = INT32_MAX;
	int16_t x524 = 41;

    t130 = ((x521<=x522)<=(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = UINT32_MAX;
	uint16_t x527 = 6U;
	volatile int16_t x528 = 1;

    t131 = ((x525<=x526)<=(x527<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = -1LL;
	static uint64_t x530 = 1281359187073697736LLU;
	uint16_t x531 = 7U;
	int64_t x532 = -1LL;
	static volatile int32_t t132 = -267;

    t132 = ((x529<=x530)<=(x531<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = INT32_MIN;
	int32_t x534 = -1;
	int8_t x536 = -14;
	static volatile int32_t t133 = -38;

    t133 = ((x533<=x534)<=(x535<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x537 = -1;
	uint64_t x538 = 1876474LLU;
	uint64_t x539 = 0LLU;
	static int64_t x540 = 27928966687690LL;
	volatile int32_t t134 = -82;

    t134 = ((x537<=x538)<=(x539<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -36184901LL;
	static int32_t x542 = -967130781;
	uint64_t x543 = 3530768LLU;
	static int32_t x544 = INT32_MIN;

    t135 = ((x541<=x542)<=(x543<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x546 = -4663514LL;
	uint8_t x547 = 48U;
	uint8_t x548 = 0U;
	volatile int32_t t136 = -9561458;

    t136 = ((x545<=x546)<=(x547<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 10602;
	uint8_t x550 = 0U;
	int32_t x552 = -429815613;

    t137 = ((x549<=x550)<=(x551<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -942937LL;
	int32_t x554 = INT32_MAX;
	int32_t x555 = INT32_MIN;
	int16_t x556 = 31;
	int32_t t138 = 2142105;

    t138 = ((x553<=x554)<=(x555<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x558 = 335610U;
	int8_t x559 = INT8_MIN;
	static int16_t x560 = -28;
	volatile int32_t t139 = -284100409;

    t139 = ((x557<=x558)<=(x559<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 2U;
	static int16_t x562 = INT16_MAX;
	volatile int64_t x563 = INT64_MIN;
	int32_t x564 = -1;
	int32_t t140 = 15;

    t140 = ((x561<=x562)<=(x563<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int32_t x565 = INT32_MIN;
	int32_t x566 = -59939664;
	int64_t x567 = -16437126765797614LL;
	static uint64_t x568 = UINT64_MAX;
	static volatile int32_t t141 = -468907885;

    t141 = ((x565<=x566)<=(x567<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x569 = UINT8_MAX;
	uint64_t x570 = UINT64_MAX;
	volatile uint32_t x571 = UINT32_MAX;
	int64_t x572 = -767203338683661602LL;
	volatile int32_t t142 = 15;

    t142 = ((x569<=x570)<=(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = 776;
	static int16_t x574 = INT16_MAX;
	uint64_t x575 = 35617032587LLU;
	int32_t x576 = -1;

    t143 = ((x573<=x574)<=(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	volatile uint32_t x578 = UINT32_MAX;
	volatile uint16_t x580 = 333U;
	int32_t t144 = 1;

    t144 = ((x577<=x578)<=(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	int64_t x582 = 9837LL;
	uint64_t x583 = 4125097797LLU;
	uint32_t x584 = 104299U;
	volatile int32_t t145 = -1553;

    t145 = ((x581<=x582)<=(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 106187026523074235LLU;
	int16_t x586 = -1;
	uint32_t x587 = 54U;
	uint64_t x588 = 40LLU;
	volatile int32_t t146 = 4596737;

    t146 = ((x585<=x586)<=(x587<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	volatile int16_t x590 = -1;
	volatile int8_t x592 = INT8_MIN;
	volatile int32_t t147 = 59;

    t147 = ((x589<=x590)<=(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = INT32_MIN;
	uint64_t x595 = 311840LLU;
	int32_t x596 = -201453;
	volatile int32_t t148 = 229762088;

    t148 = ((x593<=x594)<=(x595<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = 6812433LLU;
	int32_t x600 = INT32_MAX;
	static int32_t t149 = -24770;

    t149 = ((x597<=x598)<=(x599<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 30197484LLU;
	int8_t x602 = INT8_MIN;
	uint8_t x603 = 19U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = 2221;

    t150 = ((x601<=x602)<=(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	int32_t x606 = INT32_MIN;
	int64_t x607 = INT64_MIN;
	volatile uint8_t x608 = 9U;
	int32_t t151 = 249142707;

    t151 = ((x605<=x606)<=(x607<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	int64_t x610 = INT64_MIN;
	volatile int32_t x611 = INT32_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t152 = -551090;

    t152 = ((x609<=x610)<=(x611<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MIN;
	volatile uint64_t x615 = 4050214774975LLU;
	int64_t x616 = INT64_MIN;
	int32_t t153 = -429;

    t153 = ((x613<=x614)<=(x615<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 51U;
	static uint8_t x618 = 2U;
	int8_t x619 = INT8_MIN;
	int32_t x620 = -1;
	static int32_t t154 = -9;

    t154 = ((x617<=x618)<=(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	static int32_t x622 = INT32_MIN;
	uint8_t x623 = UINT8_MAX;
	int64_t x624 = -1LL;
	volatile int32_t t155 = 18772;

    t155 = ((x621<=x622)<=(x623<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	volatile int16_t x626 = 611;
	int8_t x627 = INT8_MAX;
	int32_t x628 = 3;
	int32_t t156 = -1015;

    t156 = ((x625<=x626)<=(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = -4;
	int8_t x630 = INT8_MIN;
	uint8_t x631 = 3U;
	int16_t x632 = INT16_MIN;
	int32_t t157 = 1194;

    t157 = ((x629<=x630)<=(x631<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	static int32_t x634 = INT32_MAX;
	int16_t x635 = INT16_MAX;
	int64_t x636 = INT64_MAX;
	int32_t t158 = 19335;

    t158 = ((x633<=x634)<=(x635<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -6906LL;
	static volatile int8_t x639 = INT8_MIN;
	static int16_t x640 = -1;

    t159 = ((x637<=x638)<=(x639<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	volatile int8_t x642 = 23;
	int8_t x643 = INT8_MIN;
	int32_t x644 = 261752;
	volatile int32_t t160 = 62;

    t160 = ((x641<=x642)<=(x643<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x645 = UINT8_MAX;
	int32_t x646 = INT32_MIN;
	int8_t x648 = INT8_MIN;
	int32_t t161 = 2463;

    t161 = ((x645<=x646)<=(x647<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MIN;
	int8_t x650 = -1;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	int32_t t162 = -1218;

    t162 = ((x649<=x650)<=(x651<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	int64_t x654 = -1LL;
	int16_t x655 = INT16_MAX;
	static uint64_t x656 = UINT64_MAX;
	volatile int32_t t163 = 60097840;

    t163 = ((x653<=x654)<=(x655<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x658 = UINT32_MAX;
	int16_t x659 = 1;
	static int32_t x660 = INT32_MAX;
	int32_t t164 = -70157791;

    t164 = ((x657<=x658)<=(x659<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	static int32_t x662 = 1663561;
	volatile uint32_t x664 = 467112856U;
	static volatile int32_t t165 = 58471487;

    t165 = ((x661<=x662)<=(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 84535144891LLU;
	int8_t x666 = INT8_MAX;
	int16_t x667 = INT16_MAX;
	uint32_t x668 = UINT32_MAX;

    t166 = ((x665<=x666)<=(x667<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x670 = 0U;
	volatile int32_t x671 = -1426656;
	volatile int32_t t167 = 0;

    t167 = ((x669<=x670)<=(x671<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x673 = INT64_MAX;
	int64_t x674 = INT64_MIN;
	static volatile int64_t x675 = INT64_MIN;
	uint8_t x676 = 16U;
	static int32_t t168 = -1;

    t168 = ((x673<=x674)<=(x675<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	int32_t x678 = -226070499;
	uint8_t x679 = UINT8_MAX;
	uint8_t x680 = 1U;
	static int32_t t169 = 31826;

    t169 = ((x677<=x678)<=(x679<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	volatile int32_t x682 = -1;
	int64_t x683 = 8238LL;

    t170 = ((x681<=x682)<=(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -4;
	static uint32_t x686 = UINT32_MAX;
	int64_t x688 = INT64_MIN;
	int32_t t171 = 2458;

    t171 = ((x685<=x686)<=(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = 2346LLU;
	static int16_t x690 = 6;
	volatile int8_t x691 = 26;
	volatile int8_t x692 = -1;
	int32_t t172 = 149;

    t172 = ((x689<=x690)<=(x691<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = 5909641835394LL;
	static volatile uint16_t x695 = 27594U;
	int64_t x696 = -108759011189537644LL;

    t173 = ((x693<=x694)<=(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = 8;
	int32_t x699 = -379657;
	int32_t t174 = 1200224;

    t174 = ((x697<=x698)<=(x699<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = -255209;
	static int32_t x702 = INT32_MAX;
	int16_t x703 = -1;
	uint16_t x704 = 473U;

    t175 = ((x701<=x702)<=(x703<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 5LLU;
	uint8_t x707 = 0U;
	static uint64_t x708 = UINT64_MAX;
	static volatile int32_t t176 = 62962;

    t176 = ((x705<=x706)<=(x707<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x710 = INT8_MIN;
	int64_t x711 = INT64_MIN;
	static int32_t t177 = 8031885;

    t177 = ((x709<=x710)<=(x711<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MAX;
	int8_t x714 = 0;

    t178 = ((x713<=x714)<=(x715<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	volatile int64_t x718 = INT64_MAX;
	int8_t x719 = INT8_MIN;
	volatile uint16_t x720 = 14U;
	int32_t t179 = 1022158;

    t179 = ((x717<=x718)<=(x719<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = 0;
	uint32_t x722 = 13419U;
	static volatile int64_t x723 = 121841570375218462LL;
	static volatile uint8_t x724 = UINT8_MAX;
	static volatile int32_t t180 = 179855792;

    t180 = ((x721<=x722)<=(x723<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x727 = 185307583LLU;
	int8_t x728 = INT8_MIN;
	int32_t t181 = 14988;

    t181 = ((x725<=x726)<=(x727<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = 0U;
	static uint8_t x730 = 0U;
	int32_t x731 = INT32_MIN;
	uint32_t x732 = 1840282U;
	volatile int32_t t182 = 43782;

    t182 = ((x729<=x730)<=(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = UINT16_MAX;
	uint32_t x734 = UINT32_MAX;
	static uint32_t x736 = 27U;
	volatile int32_t t183 = 1365156;

    t183 = ((x733<=x734)<=(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	int32_t x738 = INT32_MIN;
	static int32_t x739 = -1439991;
	volatile int32_t t184 = -378803213;

    t184 = ((x737<=x738)<=(x739<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 38955959508152532LLU;
	volatile uint8_t x742 = 38U;
	int64_t x743 = INT64_MIN;
	volatile int8_t x744 = 20;
	static int32_t t185 = -1450603;

    t185 = ((x741<=x742)<=(x743<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	int8_t x746 = INT8_MIN;
	int8_t x747 = INT8_MAX;
	int64_t x748 = -1LL;
	volatile int32_t t186 = 35572;

    t186 = ((x745<=x746)<=(x747<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = 7703;
	int64_t x750 = -19107LL;
	uint8_t x751 = 25U;
	uint64_t x752 = UINT64_MAX;

    t187 = ((x749<=x750)<=(x751<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = 0U;
	int16_t x754 = -11365;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = -7625620;

    t188 = ((x753<=x754)<=(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = INT8_MIN;
	volatile int8_t x758 = -1;
	int16_t x759 = INT16_MAX;
	int32_t x760 = INT32_MAX;
	volatile int32_t t189 = -13;

    t189 = ((x757<=x758)<=(x759<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -2;
	int32_t x762 = -1;
	uint8_t x763 = 4U;
	volatile int32_t t190 = -104;

    t190 = ((x761<=x762)<=(x763<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	volatile int64_t x766 = -390476029399160453LL;
	int8_t x768 = INT8_MIN;
	int32_t t191 = -3380289;

    t191 = ((x765<=x766)<=(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = -73;
	uint32_t x771 = 839845105U;
	uint8_t x772 = UINT8_MAX;
	static int32_t t192 = 1;

    t192 = ((x769<=x770)<=(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	volatile int32_t x774 = -34729735;
	int64_t x775 = 3133390369911LL;
	int32_t x776 = -28;
	static volatile int32_t t193 = 103698611;

    t193 = ((x773<=x774)<=(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1572;
	int32_t x778 = -21559554;
	int32_t x779 = -1;
	int16_t x780 = 0;
	int32_t t194 = -44137;

    t194 = ((x777<=x778)<=(x779<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int32_t x782 = INT32_MAX;
	int64_t x784 = INT64_MAX;
	int32_t t195 = 4;

    t195 = ((x781<=x782)<=(x783<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 0;
	uint64_t x786 = 867LLU;
	static int64_t x788 = INT64_MIN;

    t196 = ((x785<=x786)<=(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	uint8_t x790 = 4U;
	volatile uint16_t x791 = UINT16_MAX;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = -33;

    t197 = ((x789<=x790)<=(x791<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t t198 = 12393849;

    t198 = ((x793<=x794)<=(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	int32_t x798 = 59964293;
	static uint8_t x800 = 1U;
	static int32_t t199 = -748725947;

    t199 = ((x797<=x798)<=(x799<=x800));

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

