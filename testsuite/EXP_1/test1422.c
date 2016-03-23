
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

static int32_t x1 = -48314092;
uint32_t x10 = 8996555U;
static int32_t t2 = -26513;
int64_t x13 = INT64_MIN;
static volatile int32_t t3 = -117732010;
uint8_t x20 = 1U;
uint16_t x21 = UINT16_MAX;
uint8_t x23 = UINT8_MAX;
volatile int32_t x28 = INT32_MAX;
int64_t x30 = INT64_MAX;
static uint32_t x31 = UINT32_MAX;
int32_t t8 = -93995997;
uint8_t x40 = UINT8_MAX;
volatile int8_t x41 = -1;
int32_t t10 = -1014675;
static int32_t t11 = 2;
int64_t x51 = -1LL;
volatile int32_t t14 = 9231793;
int32_t t15 = -2061642;
int32_t x67 = -702770199;
int8_t x70 = INT8_MIN;
uint64_t x72 = 11239388LLU;
int16_t x76 = 0;
int32_t t18 = -1325;
int8_t x77 = -1;
int32_t x80 = -60;
int16_t x83 = -1;
static int32_t t20 = -80;
int16_t x88 = -528;
volatile int32_t t21 = -99;
uint16_t x92 = UINT16_MAX;
volatile uint32_t x103 = 689U;
static volatile uint16_t x106 = UINT16_MAX;
int16_t x108 = INT16_MIN;
uint8_t x115 = UINT8_MAX;
volatile int16_t x118 = INT16_MAX;
int64_t x120 = INT64_MIN;
volatile int32_t t29 = 916;
static uint16_t x125 = UINT16_MAX;
int32_t x131 = 471927;
int64_t x132 = -13LL;
static uint16_t x136 = UINT16_MAX;
static int8_t x139 = INT8_MIN;
static int16_t x143 = INT16_MAX;
volatile int32_t t35 = -586438;
static int32_t t36 = 39235164;
volatile int8_t x155 = INT8_MIN;
uint16_t x160 = 47U;
uint8_t x180 = 11U;
volatile int32_t t46 = -57;
volatile int8_t x200 = -1;
static int64_t x203 = INT64_MAX;
uint64_t x209 = UINT64_MAX;
int8_t x210 = INT8_MAX;
static uint16_t x211 = 46U;
int16_t x217 = INT16_MAX;
uint64_t x220 = 2530946280616791569LLU;
uint32_t x226 = 87U;
int64_t x236 = INT64_MIN;
volatile int8_t x244 = -1;
volatile int8_t x249 = 1;
static int32_t x255 = -42;
uint8_t x257 = UINT8_MAX;
int32_t x258 = INT32_MAX;
static int64_t x261 = INT64_MAX;
uint8_t x262 = 1U;
int8_t x266 = 5;
int64_t x267 = INT64_MIN;
int64_t x273 = INT64_MIN;
volatile uint64_t x274 = UINT64_MAX;
static int32_t x276 = INT32_MAX;
int32_t t68 = -290262;
int32_t x282 = INT32_MAX;
int8_t x283 = INT8_MIN;
uint16_t x284 = 119U;
volatile uint8_t x285 = 3U;
int32_t x288 = 2908;
int64_t x292 = INT64_MIN;
volatile int32_t t71 = 0;
uint16_t x294 = 21U;
int32_t t72 = 531;
int16_t x305 = INT16_MAX;
volatile int32_t t75 = 42920;
uint16_t x325 = UINT16_MAX;
uint8_t x329 = 2U;
int64_t x330 = INT64_MIN;
static int64_t x331 = -493LL;
uint32_t x332 = 1533U;
uint64_t x334 = 29503LLU;
int8_t x341 = -8;
int64_t x342 = -1LL;
int32_t t84 = -45414509;
int64_t x346 = -143663771LL;
uint8_t x349 = 1U;
int16_t x359 = 2;
int8_t x361 = -30;
int64_t x364 = INT64_MAX;
static uint64_t x372 = UINT64_MAX;
int16_t x373 = INT16_MAX;
int32_t x374 = 14708575;
int32_t x378 = INT32_MAX;
volatile int16_t x380 = -413;
uint8_t x387 = 3U;
volatile int32_t x391 = -1;
static int32_t x392 = INT32_MAX;
int32_t t97 = -214207275;
int16_t x409 = INT16_MIN;
static volatile int32_t t101 = -25006733;
uint32_t x418 = 1493U;
int16_t x425 = -1;
int16_t x439 = -1;
int64_t x446 = INT64_MIN;
int32_t x451 = INT32_MIN;
int32_t x455 = INT32_MAX;
uint32_t x463 = UINT32_MAX;
static int32_t x476 = INT32_MIN;
volatile int32_t t116 = 9;
volatile uint16_t x479 = 16U;
int8_t x480 = -1;
int32_t t119 = -39230389;
int8_t x495 = INT8_MAX;
int8_t x497 = -1;
volatile int16_t x500 = -1;
int32_t x508 = 2530168;
int8_t x513 = INT8_MIN;
int32_t x515 = INT32_MIN;
uint8_t x519 = UINT8_MAX;
int8_t x524 = -5;
static int32_t t128 = -6737641;
uint32_t x531 = UINT32_MAX;
uint16_t x532 = 0U;
static uint32_t x536 = 0U;
int64_t x538 = -16708158LL;
int32_t x540 = 1;
static uint32_t x550 = 158585066U;
volatile int8_t x551 = INT8_MIN;
static int32_t t135 = -241;
static int16_t x560 = -1;
uint8_t x563 = 6U;
uint16_t x576 = 78U;
int32_t x584 = -7;
uint32_t x587 = 622U;
int32_t t143 = 21812307;
int32_t x596 = INT32_MAX;
int16_t x601 = INT16_MAX;
int32_t x620 = 4624;
volatile int32_t t150 = 25;
static uint8_t x622 = 20U;
static volatile uint8_t x627 = 84U;
int64_t x630 = INT64_MAX;
int32_t t153 = -1;
volatile int64_t x638 = INT64_MAX;
volatile int8_t x645 = INT8_MIN;
uint32_t x646 = UINT32_MAX;
static int8_t x649 = INT8_MAX;
int64_t x657 = -1LL;
int8_t x659 = INT8_MAX;
int8_t x660 = 0;
int32_t t159 = -27;
volatile uint32_t x661 = 48351411U;
uint32_t x662 = UINT32_MAX;
volatile int32_t t161 = -1874;
static int16_t x670 = -157;
volatile int32_t t162 = 2688284;
uint32_t x678 = UINT32_MAX;
int8_t x680 = INT8_MAX;
volatile int32_t t165 = -11045709;
static uint8_t x687 = UINT8_MAX;
int64_t x693 = -1LL;
uint32_t x694 = UINT32_MAX;
int32_t x697 = INT32_MAX;
static uint16_t x700 = UINT16_MAX;
volatile int32_t t171 = 124307765;
uint64_t x712 = 638705612341648LLU;
int64_t x720 = -492291LL;
static int32_t t174 = -191;
int16_t x722 = 5194;
static uint32_t x724 = 3358424U;
volatile int32_t x725 = INT32_MIN;
int64_t x744 = INT64_MIN;
int16_t x758 = 0;
static volatile int64_t x763 = 490522981895460LL;
int64_t x771 = INT64_MIN;
int8_t x772 = INT8_MAX;
static int64_t x780 = INT64_MIN;
int32_t t188 = -390;
uint8_t x781 = 27U;
int64_t x789 = INT64_MIN;
static int16_t x797 = INT16_MIN;
volatile int32_t x799 = -523068857;
uint8_t x802 = UINT8_MAX;
volatile int32_t t193 = 0;
static int32_t x807 = INT32_MIN;
int32_t x808 = INT32_MIN;
int32_t x809 = -1;
int64_t x811 = INT64_MIN;
int32_t t195 = 120949;
volatile int8_t x818 = INT8_MIN;
volatile int32_t t197 = -252;
static volatile uint32_t x831 = 106U;


void f0(void) {
    	static volatile int64_t x2 = INT64_MIN;
	uint32_t x3 = 666499500U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -23559161;

    t0 = (((x1==x2)/x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static volatile uint32_t x6 = 309491U;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	static volatile int32_t t1 = -168;

    t1 = (((x5==x6)/x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x11 = INT16_MAX;
	volatile int64_t x12 = INT64_MIN;

    t2 = (((x9==x10)/x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x14 = 766520445;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;

    t3 = (((x13==x14)/x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	int32_t t4 = -511;

    t4 = (((x17==x18)/x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = -2;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -126;

    t5 = (((x21==x22)/x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -85;
	uint16_t x26 = 16025U;
	uint16_t x27 = 6296U;
	int32_t t6 = 15;

    t6 = (((x25==x26)/x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x29 = -3;
	int8_t x32 = 1;
	volatile int32_t t7 = 67;

    t7 = (((x29==x30)/x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 268U;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int32_t x36 = -485300763;

    t8 = (((x33==x34)/x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 5U;
	volatile uint16_t x38 = UINT16_MAX;
	volatile int16_t x39 = INT16_MIN;
	volatile int32_t t9 = -38;

    t9 = (((x37==x38)/x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MAX;
	int64_t x43 = -209781100806LL;
	volatile int64_t x44 = INT64_MIN;

    t10 = (((x41==x42)/x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 3U;
	int64_t x46 = 21032780781545LL;
	volatile uint16_t x47 = 1362U;
	static uint16_t x48 = 1980U;

    t11 = (((x45==x46)/x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 9657589;
	static volatile uint64_t x50 = 121801606143813LLU;
	volatile int64_t x52 = INT64_MIN;
	static int32_t t12 = 3;

    t12 = (((x49==x50)/x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	volatile int32_t x54 = -1;
	uint32_t x55 = 2088769U;
	int64_t x56 = INT64_MIN;
	int32_t t13 = 1482;

    t13 = (((x53==x54)/x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = INT16_MIN;
	static int64_t x60 = INT64_MAX;

    t14 = (((x57==x58)/x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	uint64_t x62 = 23806209297674236LLU;
	static int16_t x63 = -1;
	volatile uint32_t x64 = 231068U;

    t15 = (((x61==x62)/x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 33;
	int64_t x66 = -1093957963779862250LL;
	static uint64_t x68 = UINT64_MAX;
	int32_t t16 = 96885458;

    t16 = (((x65==x66)/x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	volatile int64_t x71 = -1LL;
	int32_t t17 = 487;

    t17 = (((x69==x70)/x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = 14846U;
	int64_t x74 = -1636429241520291598LL;
	int64_t x75 = INT64_MIN;

    t18 = (((x73==x74)/x75)==x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = UINT8_MAX;
	static uint8_t x79 = 94U;
	int32_t t19 = 11855;

    t19 = (((x77==x78)/x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MAX;
	int8_t x82 = -5;
	int16_t x84 = -2;

    t20 = (((x81==x82)/x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x85 = 149U;
	int16_t x86 = INT16_MIN;
	int16_t x87 = 44;

    t21 = (((x85==x86)/x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -3;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	static volatile int32_t t22 = -14312725;

    t22 = (((x89==x90)/x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x93 = 5U;
	static int8_t x94 = -1;
	int64_t x95 = 5501LL;
	static int16_t x96 = INT16_MAX;
	int32_t t23 = -75012;

    t23 = (((x93==x94)/x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 1LL;
	static uint32_t x98 = 16733573U;
	int64_t x99 = -1LL;
	int32_t x100 = 27;
	static int32_t t24 = -5192;

    t24 = (((x97==x98)/x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = 40;
	volatile int64_t x102 = INT64_MIN;
	uint64_t x104 = 785919955LLU;
	static int32_t t25 = -19558695;

    t25 = (((x101==x102)/x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = -1;
	uint64_t x107 = 2891LLU;
	volatile int32_t t26 = -16;

    t26 = (((x105==x106)/x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = -1;
	int64_t x110 = INT64_MAX;
	volatile int64_t x111 = INT64_MAX;
	uint64_t x112 = 3371537479790327997LLU;
	static int32_t t27 = 237781;

    t27 = (((x109==x110)/x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int16_t x114 = -1;
	static volatile int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = 1014256114;

    t28 = (((x113==x114)/x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = 0;
	int8_t x119 = -1;

    t29 = (((x117==x118)/x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 8;
	uint16_t x122 = 252U;
	static int16_t x123 = -1;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -3271;

    t30 = (((x121==x122)/x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = INT32_MAX;
	uint16_t x127 = 1950U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 39;

    t31 = (((x125==x126)/x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = 1407047201950260LL;
	int32_t x130 = INT32_MIN;
	static volatile int32_t t32 = -22;

    t32 = (((x129==x130)/x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	int32_t t33 = -4;

    t33 = (((x133==x134)/x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 10;
	int32_t x138 = INT32_MAX;
	int32_t x140 = -1;
	static int32_t t34 = -154846;

    t34 = (((x137==x138)/x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MIN;
	uint32_t x142 = 4U;
	int32_t x144 = INT32_MAX;

    t35 = (((x141==x142)/x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;

    t36 = (((x145==x146)/x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	static int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -2376;

    t37 = (((x149==x150)/x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = -1LL;
	volatile int32_t x156 = 13;
	int32_t t38 = -750;

    t38 = (((x153==x154)/x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 40082LL;
	int32_t x158 = INT32_MIN;
	static int32_t x159 = -1;
	int32_t t39 = -3;

    t39 = (((x157==x158)/x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 1;
	int16_t x162 = 5;
	int16_t x163 = -1;
	int32_t x164 = 645499;
	int32_t t40 = 39;

    t40 = (((x161==x162)/x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int8_t x166 = 1;
	int16_t x167 = INT16_MIN;
	static uint16_t x168 = UINT16_MAX;
	int32_t t41 = 101841;

    t41 = (((x165==x166)/x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -112;
	int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MAX;
	static volatile int32_t t42 = 7;

    t42 = (((x169==x170)/x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = 90;
	int64_t x174 = -1LL;
	uint32_t x175 = 23U;
	int16_t x176 = INT16_MIN;
	static int32_t t43 = -148437;

    t43 = (((x173==x174)/x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int16_t x179 = -347;
	volatile int32_t t44 = 15878;

    t44 = (((x177==x178)/x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -96010421896LL;
	uint8_t x182 = 0U;
	int64_t x183 = -1LL;
	int8_t x184 = 1;
	int32_t t45 = -3;

    t45 = (((x181==x182)/x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -649567;
	static int64_t x186 = -490048561507238LL;
	static int16_t x187 = -1;
	int64_t x188 = INT64_MIN;

    t46 = (((x185==x186)/x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x189 = -1;
	static int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	static int16_t x192 = -1;
	volatile int32_t t47 = -14638857;

    t47 = (((x189==x190)/x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile uint16_t x194 = 147U;
	int16_t x195 = INT16_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	static volatile int32_t t48 = -7524;

    t48 = (((x193==x194)/x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MAX;
	static volatile uint32_t x199 = 1650077U;
	int32_t t49 = -257355099;

    t49 = (((x197==x198)/x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x202 = 15499U;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = 12107836;

    t50 = (((x201==x202)/x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 12892LLU;
	volatile int32_t x206 = -1;
	int32_t x207 = INT32_MIN;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -1;

    t51 = (((x205==x206)/x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x212 = 1802106070722079827LL;
	int32_t t52 = -7411;

    t52 = (((x209==x210)/x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 30U;
	static int16_t x214 = 31;
	static int16_t x215 = INT16_MAX;
	int64_t x216 = -7LL;
	static volatile int32_t t53 = -349090;

    t53 = (((x213==x214)/x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x218 = 34U;
	int64_t x219 = INT64_MIN;
	static volatile int32_t t54 = -19955099;

    t54 = (((x217==x218)/x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 16U;
	int8_t x222 = -36;
	int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = 142317;

    t55 = (((x221==x222)/x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 518641446560468631LLU;
	int32_t x227 = INT32_MAX;
	uint32_t x228 = UINT32_MAX;
	int32_t t56 = -1418617;

    t56 = (((x225==x226)/x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = -1;
	static uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = -1224280;

    t57 = (((x229==x230)/x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 6;

    t58 = (((x233==x234)/x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	static volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 1952488;

    t59 = (((x237==x238)/x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	int16_t x242 = -25;
	volatile int32_t x243 = -1;
	volatile int32_t t60 = -103;

    t60 = (((x241==x242)/x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x250 = INT64_MAX;
	int64_t x251 = -2015234227473653LL;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t61 = 3;

    t61 = (((x249==x250)/x251)==x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x253 = 16613806U;
	int64_t x254 = -1808114569873LL;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t62 = 35027;

    t62 = (((x253==x254)/x255)==x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x259 = INT64_MIN;
	volatile int64_t x260 = -1835LL;
	volatile int32_t t63 = 461;

    t63 = (((x257==x258)/x259)==x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x263 = -1LL;
	uint32_t x264 = UINT32_MAX;
	int32_t t64 = -253529;

    t64 = (((x261==x262)/x263)==x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = -8563999;
	volatile uint8_t x268 = UINT8_MAX;
	volatile int32_t t65 = -1316599;

    t65 = (((x265==x266)/x267)==x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	static int16_t x271 = 199;
	uint16_t x272 = 0U;
	static int32_t t66 = -367235;

    t66 = (((x269==x270)/x271)==x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x275 = -1;
	volatile int32_t t67 = -1535;

    t67 = (((x273==x274)/x275)==x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = 149U;
	uint32_t x278 = 2840U;
	int64_t x279 = INT64_MIN;
	int8_t x280 = -1;

    t68 = (((x277==x278)/x279)==x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -1;
	volatile int32_t t69 = 1857243;

    t69 = (((x281==x282)/x283)==x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x286 = -1;
	int64_t x287 = 40LL;
	int32_t t70 = -603;

    t70 = (((x285==x286)/x287)==x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x289 = 1;
	int8_t x290 = INT8_MIN;
	int8_t x291 = -1;

    t71 = (((x289==x290)/x291)==x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x293 = 31U;
	uint16_t x295 = 6531U;
	static volatile int64_t x296 = INT64_MIN;

    t72 = (((x293==x294)/x295)==x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x297 = 1U;
	int32_t x298 = -652420283;
	static int64_t x299 = -4316793448100848LL;
	int64_t x300 = -40245171811LL;
	static volatile int32_t t73 = 90704;

    t73 = (((x297==x298)/x299)==x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = -1;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t74 = 274;

    t74 = (((x301==x302)/x303)==x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x306 = INT32_MIN;
	volatile int64_t x307 = INT64_MIN;
	uint32_t x308 = 50U;

    t75 = (((x305==x306)/x307)==x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile uint64_t x310 = 5629627311585521LLU;
	int16_t x311 = -1;
	static int8_t x312 = -1;
	int32_t t76 = 1002934;

    t76 = (((x309==x310)/x311)==x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = 3764442U;
	volatile int8_t x314 = -4;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	volatile int32_t t77 = 3402705;

    t77 = (((x313==x314)/x315)==x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x317 = 13;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = -11008304;
	int64_t x320 = -1LL;
	int32_t t78 = 160;

    t78 = (((x317==x318)/x319)==x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x321 = 2140410LL;
	static int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MIN;
	static int16_t x324 = -1;
	int32_t t79 = -69824634;

    t79 = (((x321==x322)/x323)==x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x326 = -1;
	int16_t x327 = 2;
	int64_t x328 = INT64_MAX;
	static int32_t t80 = 224;

    t80 = (((x325==x326)/x327)==x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t t81 = 3;

    t81 = (((x329==x330)/x331)==x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = 0;
	volatile int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;
	int32_t t82 = 480997749;

    t82 = (((x333==x334)/x335)==x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	static int8_t x339 = -1;
	int8_t x340 = -1;
	volatile int32_t t83 = 975;

    t83 = (((x337==x338)/x339)==x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x343 = INT16_MAX;
	volatile int64_t x344 = -2677656LL;

    t84 = (((x341==x342)/x343)==x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = 32352673784378LLU;
	int16_t x347 = 1;
	uint32_t x348 = 119461916U;
	int32_t t85 = -1;

    t85 = (((x345==x346)/x347)==x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x350 = UINT16_MAX;
	static volatile uint32_t x351 = 1976600492U;
	int32_t x352 = -2399;
	volatile int32_t t86 = 1;

    t86 = (((x349==x350)/x351)==x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x353 = 0U;
	uint16_t x354 = UINT16_MAX;
	volatile uint64_t x355 = 9LLU;
	uint64_t x356 = UINT64_MAX;
	int32_t t87 = -109;

    t87 = (((x353==x354)/x355)==x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x357 = 2872;
	int8_t x358 = -1;
	static volatile int64_t x360 = INT64_MIN;
	volatile int32_t t88 = -2147058;

    t88 = (((x357==x358)/x359)==x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x362 = UINT16_MAX;
	uint32_t x363 = UINT32_MAX;
	volatile int32_t t89 = -7;

    t89 = (((x361==x362)/x363)==x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = -1LL;
	int8_t x367 = INT8_MAX;
	uint32_t x368 = 3583U;
	static int32_t t90 = 2;

    t90 = (((x365==x366)/x367)==x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = 3751;
	volatile int32_t x371 = 820545;
	volatile int32_t t91 = 336;

    t91 = (((x369==x370)/x371)==x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x375 = INT32_MAX;
	uint8_t x376 = 25U;
	int32_t t92 = 0;

    t92 = (((x373==x374)/x375)==x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x377 = -1LL;
	int16_t x379 = INT16_MIN;
	static int32_t t93 = 660428;

    t93 = (((x377==x378)/x379)==x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x381 = -1;
	static volatile int8_t x382 = INT8_MAX;
	volatile int8_t x383 = -1;
	int8_t x384 = INT8_MIN;
	int32_t t94 = 941857624;

    t94 = (((x381==x382)/x383)==x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = -1LL;
	int64_t x386 = INT64_MAX;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t95 = 1925067;

    t95 = (((x385==x386)/x387)==x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x389 = 11500665;
	int32_t x390 = INT32_MAX;
	volatile int32_t t96 = -9246;

    t96 = (((x389==x390)/x391)==x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = INT8_MAX;
	int16_t x394 = -11374;
	int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = UINT8_MAX;

    t97 = (((x393==x394)/x395)==x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = 223717891;
	static uint32_t x398 = 79277U;
	volatile uint32_t x399 = UINT32_MAX;
	uint16_t x400 = 5968U;
	static int32_t t98 = 2911078;

    t98 = (((x397==x398)/x399)==x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	uint8_t x402 = 0U;
	int8_t x403 = -14;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t99 = -69491271;

    t99 = (((x401==x402)/x403)==x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 14U;
	static int8_t x407 = INT8_MAX;
	int16_t x408 = 5;
	volatile int32_t t100 = -7;

    t100 = (((x405==x406)/x407)==x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x410 = 0U;
	volatile uint32_t x411 = 468480773U;
	uint32_t x412 = 468U;

    t101 = (((x409==x410)/x411)==x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = -1;
	static int64_t x415 = -1LL;
	int64_t x416 = -1LL;
	volatile int32_t t102 = -68704866;

    t102 = (((x413==x414)/x415)==x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	int8_t x419 = INT8_MIN;
	uint32_t x420 = 69767027U;
	int32_t t103 = 10310;

    t103 = (((x417==x418)/x419)==x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x421 = 1;
	int16_t x422 = 814;
	int64_t x423 = -136744016LL;
	int8_t x424 = INT8_MIN;
	volatile int32_t t104 = -168009097;

    t104 = (((x421==x422)/x423)==x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x426 = 80U;
	int16_t x427 = -1;
	int16_t x428 = -1;
	int32_t t105 = 64139884;

    t105 = (((x425==x426)/x427)==x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x429 = 2349690U;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 201121LLU;
	volatile int32_t x432 = INT32_MIN;
	volatile int32_t t106 = -1;

    t106 = (((x429==x430)/x431)==x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = UINT32_MAX;
	static volatile uint8_t x434 = UINT8_MAX;
	uint8_t x435 = UINT8_MAX;
	uint64_t x436 = 789LLU;
	volatile int32_t t107 = 2;

    t107 = (((x433==x434)/x435)==x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x437 = INT16_MIN;
	int32_t x438 = -1;
	static uint8_t x440 = 1U;
	volatile int32_t t108 = 186;

    t108 = (((x437==x438)/x439)==x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x441 = -1;
	uint16_t x442 = 1722U;
	static int8_t x443 = 31;
	int32_t x444 = INT32_MAX;
	volatile int32_t t109 = 6323;

    t109 = (((x441==x442)/x443)==x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x445 = 2;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = INT64_MAX;
	int32_t t110 = 10768;

    t110 = (((x445==x446)/x447)==x448);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x449 = UINT8_MAX;
	volatile int8_t x450 = INT8_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t111 = 263938;

    t111 = (((x449==x450)/x451)==x452);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x453 = -1;
	static int32_t x454 = INT32_MAX;
	int64_t x456 = INT64_MAX;
	int32_t t112 = -33936276;

    t112 = (((x453==x454)/x455)==x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x461 = INT64_MIN;
	int64_t x462 = -5907LL;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t113 = -943711;

    t113 = (((x461==x462)/x463)==x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = 4;
	volatile int64_t x466 = INT64_MIN;
	int64_t x467 = 4304721800655833525LL;
	volatile int32_t x468 = -1;
	volatile int32_t t114 = 18203;

    t114 = (((x465==x466)/x467)==x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = 650338304LL;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MIN;
	int32_t t115 = 14;

    t115 = (((x469==x470)/x471)==x472);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = 28995742U;
	volatile int8_t x474 = -52;
	uint32_t x475 = 15096620U;

    t116 = (((x473==x474)/x475)==x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x477 = 1U;
	static int16_t x478 = -1;
	volatile int32_t t117 = 47583;

    t117 = (((x477==x478)/x479)==x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	static uint64_t x483 = 273912569702LLU;
	int32_t x484 = -1;
	volatile int32_t t118 = -432866;

    t118 = (((x481==x482)/x483)==x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x485 = 0;
	int8_t x486 = 1;
	static uint16_t x487 = 3264U;
	int16_t x488 = -2868;

    t119 = (((x485==x486)/x487)==x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = INT8_MAX;
	uint64_t x490 = 1857LLU;
	uint64_t x491 = 1LLU;
	int16_t x492 = -1;
	int32_t t120 = -30965;

    t120 = (((x489==x490)/x491)==x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x493 = UINT16_MAX;
	int64_t x494 = INT64_MIN;
	volatile int64_t x496 = -1LL;
	static int32_t t121 = 3195463;

    t121 = (((x493==x494)/x495)==x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x498 = UINT16_MAX;
	int32_t x499 = -1;
	int32_t t122 = 1313210;

    t122 = (((x497==x498)/x499)==x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x505 = INT8_MAX;
	volatile int64_t x506 = -52597900LL;
	uint16_t x507 = 6U;
	int32_t t123 = 38825879;

    t123 = (((x505==x506)/x507)==x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = 0;
	static uint64_t x510 = 65020LLU;
	int32_t x511 = INT32_MIN;
	uint64_t x512 = 294319406413546626LLU;
	int32_t t124 = -2072;

    t124 = (((x509==x510)/x511)==x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x514 = INT8_MIN;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t125 = -40348;

    t125 = (((x513==x514)/x515)==x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = INT64_MAX;
	int16_t x518 = -1;
	int64_t x520 = INT64_MAX;
	int32_t t126 = 5990;

    t126 = (((x517==x518)/x519)==x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = -1;
	static uint32_t x522 = 14U;
	uint64_t x523 = 506334LLU;
	int32_t t127 = -1941;

    t127 = (((x521==x522)/x523)==x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x525 = INT16_MAX;
	volatile int32_t x526 = -1385395;
	int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;

    t128 = (((x525==x526)/x527)==x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = 11;
	int32_t x530 = INT32_MIN;
	static int32_t t129 = -40;

    t129 = (((x529==x530)/x531)==x532);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x533 = UINT8_MAX;
	static volatile int32_t x534 = INT32_MIN;
	int16_t x535 = INT16_MIN;
	static volatile int32_t t130 = 1;

    t130 = (((x533==x534)/x535)==x536);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x537 = 0;
	int8_t x539 = -1;
	volatile int32_t t131 = -1;

    t131 = (((x537==x538)/x539)==x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x541 = 3U;
	static volatile int64_t x542 = INT64_MIN;
	static uint16_t x543 = UINT16_MAX;
	volatile int16_t x544 = 0;
	volatile int32_t t132 = 745197;

    t132 = (((x541==x542)/x543)==x544);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x545 = 13;
	int32_t x546 = 869686;
	uint8_t x547 = UINT8_MAX;
	uint32_t x548 = 63530917U;
	volatile int32_t t133 = 1;

    t133 = (((x545==x546)/x547)==x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x552 = INT8_MAX;
	int32_t t134 = -1;

    t134 = (((x549==x550)/x551)==x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = -1;
	uint16_t x554 = 425U;
	static volatile uint64_t x555 = UINT64_MAX;
	int32_t x556 = INT32_MIN;

    t135 = (((x553==x554)/x555)==x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x557 = 273660U;
	static uint8_t x558 = 122U;
	volatile int64_t x559 = -1LL;
	int32_t t136 = -130994343;

    t136 = (((x557==x558)/x559)==x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 23U;
	int16_t x562 = -1;
	static int64_t x564 = -537978LL;
	int32_t t137 = 710934;

    t137 = (((x561==x562)/x563)==x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x565 = 302U;
	int64_t x566 = -467135LL;
	static int8_t x567 = INT8_MIN;
	uint64_t x568 = 12136LLU;
	volatile int32_t t138 = 918584160;

    t138 = (((x565==x566)/x567)==x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = -1LL;
	int32_t x570 = -1;
	int16_t x571 = -1;
	int16_t x572 = -1;
	volatile int32_t t139 = -2845;

    t139 = (((x569==x570)/x571)==x572);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = -1LL;
	static int8_t x575 = INT8_MIN;
	volatile int32_t t140 = -433;

    t140 = (((x573==x574)/x575)==x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = 1;
	static uint32_t x579 = 3676821U;
	int8_t x580 = INT8_MAX;
	volatile int32_t t141 = -1493671;

    t141 = (((x577==x578)/x579)==x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x581 = INT8_MAX;
	uint8_t x582 = 3U;
	int16_t x583 = INT16_MIN;
	int32_t t142 = -7;

    t142 = (((x581==x582)/x583)==x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = -59894LL;
	uint16_t x586 = UINT16_MAX;
	uint64_t x588 = UINT64_MAX;

    t143 = (((x585==x586)/x587)==x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x589 = 107758LL;
	static int32_t x590 = -7898796;
	volatile int16_t x591 = INT16_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t144 = -12216944;

    t144 = (((x589==x590)/x591)==x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x593 = -1;
	uint16_t x594 = 13U;
	static uint16_t x595 = 7U;
	volatile int32_t t145 = 1;

    t145 = (((x593==x594)/x595)==x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = -1812604;
	int16_t x598 = -28;
	static int16_t x599 = INT16_MIN;
	volatile int16_t x600 = INT16_MIN;
	volatile int32_t t146 = -2669;

    t146 = (((x597==x598)/x599)==x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x602 = -1;
	uint16_t x603 = UINT16_MAX;
	int32_t x604 = -30;
	volatile int32_t t147 = 13130377;

    t147 = (((x601==x602)/x603)==x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x605 = UINT16_MAX;
	uint64_t x606 = 4725900LLU;
	static uint16_t x607 = UINT16_MAX;
	uint16_t x608 = 14U;
	int32_t t148 = 73417991;

    t148 = (((x605==x606)/x607)==x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x609 = 1885;
	int8_t x610 = INT8_MIN;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t149 = -239991;

    t149 = (((x609==x610)/x611)==x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x617 = 344132369384867LLU;
	int64_t x618 = INT64_MIN;
	static volatile uint32_t x619 = 5U;

    t150 = (((x617==x618)/x619)==x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MAX;
	volatile int64_t x623 = -22372004142238LL;
	volatile int16_t x624 = -1;
	volatile int32_t t151 = 32021;

    t151 = (((x621==x622)/x623)==x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x625 = 351U;
	static int64_t x626 = 7291038991642952LL;
	volatile uint32_t x628 = 231845U;
	volatile int32_t t152 = 485;

    t152 = (((x625==x626)/x627)==x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x629 = -1;
	int32_t x631 = 85363;
	volatile int64_t x632 = 28296030796086343LL;

    t153 = (((x629==x630)/x631)==x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x633 = -129LL;
	int8_t x634 = INT8_MIN;
	int64_t x635 = -264150419LL;
	static uint32_t x636 = UINT32_MAX;
	static volatile int32_t t154 = 90916061;

    t154 = (((x633==x634)/x635)==x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = INT64_MIN;
	uint16_t x639 = 69U;
	int32_t x640 = INT32_MIN;
	volatile int32_t t155 = -1175;

    t155 = (((x637==x638)/x639)==x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x647 = 30U;
	static uint64_t x648 = 46898003691533787LLU;
	int32_t t156 = -51079785;

    t156 = (((x645==x646)/x647)==x648);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x650 = 43U;
	volatile int32_t x651 = INT32_MIN;
	uint32_t x652 = 2026473529U;
	static int32_t t157 = 1;

    t157 = (((x649==x650)/x651)==x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x653 = 2U;
	uint8_t x654 = 1U;
	static volatile uint32_t x655 = UINT32_MAX;
	volatile int16_t x656 = 3;
	static int32_t t158 = -165;

    t158 = (((x653==x654)/x655)==x656);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x658 = 227507590773983LLU;

    t159 = (((x657==x658)/x659)==x660);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x663 = 56456047586250205LLU;
	uint16_t x664 = UINT16_MAX;
	int32_t t160 = 172;

    t160 = (((x661==x662)/x663)==x664);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x665 = 0LLU;
	int64_t x666 = -2199805210881812787LL;
	static volatile int64_t x667 = INT64_MIN;
	int32_t x668 = INT32_MIN;

    t161 = (((x665==x666)/x667)==x668);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x669 = 5U;
	int16_t x671 = INT16_MIN;
	uint64_t x672 = 1711727085LLU;

    t162 = (((x669==x670)/x671)==x672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x673 = 4095LLU;
	int16_t x674 = -173;
	int64_t x675 = -1LL;
	int32_t x676 = -126004;
	int32_t t163 = -3808551;

    t163 = (((x673==x674)/x675)==x676);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x677 = -1;
	static int8_t x679 = INT8_MIN;
	int32_t t164 = -34035238;

    t164 = (((x677==x678)/x679)==x680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = 0LLU;
	int32_t x682 = 58;
	int32_t x683 = 1730;
	uint8_t x684 = 3U;

    t165 = (((x681==x682)/x683)==x684);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x685 = 936171;
	int16_t x686 = INT16_MIN;
	uint8_t x688 = 0U;
	static volatile int32_t t166 = 108218;

    t166 = (((x685==x686)/x687)==x688);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = 49621;
	int64_t x690 = INT64_MIN;
	int64_t x691 = INT64_MIN;
	uint8_t x692 = 50U;
	volatile int32_t t167 = 64570;

    t167 = (((x689==x690)/x691)==x692);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x695 = INT64_MAX;
	int64_t x696 = 2269125296866LL;
	volatile int32_t t168 = 5;

    t168 = (((x693==x694)/x695)==x696);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x698 = -1;
	static uint16_t x699 = 979U;
	int32_t t169 = 14493;

    t169 = (((x697==x698)/x699)==x700);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x701 = INT8_MAX;
	static int64_t x702 = -1LL;
	volatile int32_t x703 = -1;
	int32_t x704 = INT32_MIN;
	static volatile int32_t t170 = 0;

    t170 = (((x701==x702)/x703)==x704);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x705 = 32387U;
	uint16_t x706 = 1037U;
	int64_t x707 = INT64_MAX;
	uint16_t x708 = UINT16_MAX;

    t171 = (((x705==x706)/x707)==x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x709 = 73237U;
	int64_t x710 = -1LL;
	int16_t x711 = INT16_MIN;
	volatile int32_t t172 = -1890;

    t172 = (((x709==x710)/x711)==x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = INT64_MIN;
	volatile int64_t x714 = INT64_MAX;
	int64_t x715 = -3948096641LL;
	int8_t x716 = -1;
	volatile int32_t t173 = -851;

    t173 = (((x713==x714)/x715)==x716);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x717 = INT32_MAX;
	int32_t x718 = INT32_MAX;
	static int32_t x719 = -25078940;

    t174 = (((x717==x718)/x719)==x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x721 = 1U;
	static int64_t x723 = INT64_MAX;
	static int32_t t175 = -428;

    t175 = (((x721==x722)/x723)==x724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x726 = -1;
	int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;
	static int32_t t176 = -314;

    t176 = (((x725==x726)/x727)==x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x729 = 874U;
	uint16_t x730 = 41U;
	int32_t x731 = -2980596;
	static int64_t x732 = INT64_MIN;
	int32_t t177 = -859419582;

    t177 = (((x729==x730)/x731)==x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = 152U;
	int32_t x734 = INT32_MAX;
	uint64_t x735 = 89042LLU;
	int8_t x736 = INT8_MIN;
	int32_t t178 = 188;

    t178 = (((x733==x734)/x735)==x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x737 = 967663463;
	uint64_t x738 = 828480326LLU;
	static volatile uint64_t x739 = 14376823990355419LLU;
	int16_t x740 = -15587;
	volatile int32_t t179 = 0;

    t179 = (((x737==x738)/x739)==x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x741 = INT16_MAX;
	int8_t x742 = -1;
	uint8_t x743 = UINT8_MAX;
	static volatile int32_t t180 = 131398;

    t180 = (((x741==x742)/x743)==x744);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x749 = 3112569U;
	volatile int32_t x750 = -1;
	int32_t x751 = -2;
	int64_t x752 = INT64_MAX;
	int32_t t181 = -79928594;

    t181 = (((x749==x750)/x751)==x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = -335454139LL;
	static int32_t x754 = -186964812;
	int32_t x755 = 50952;
	int64_t x756 = -1LL;
	static volatile int32_t t182 = -19;

    t182 = (((x753==x754)/x755)==x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x757 = -1;
	int64_t x759 = INT64_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t183 = -1477;

    t183 = (((x757==x758)/x759)==x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x761 = 3478268852253LLU;
	volatile int32_t x762 = INT32_MIN;
	static int32_t x764 = INT32_MIN;
	static volatile int32_t t184 = 5589;

    t184 = (((x761==x762)/x763)==x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x765 = 434743547LLU;
	int16_t x766 = INT16_MIN;
	static uint8_t x767 = 62U;
	static uint32_t x768 = 42908132U;
	int32_t t185 = 6;

    t185 = (((x765==x766)/x767)==x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = -60;
	int32_t t186 = -124;

    t186 = (((x769==x770)/x771)==x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = INT32_MAX;
	int8_t x774 = INT8_MAX;
	static uint16_t x775 = UINT16_MAX;
	uint8_t x776 = 122U;
	static volatile int32_t t187 = -560301930;

    t187 = (((x773==x774)/x775)==x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x777 = 4511;
	uint64_t x778 = 144LLU;
	static uint8_t x779 = 1U;

    t188 = (((x777==x778)/x779)==x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x782 = INT32_MAX;
	int8_t x783 = INT8_MAX;
	volatile int64_t x784 = INT64_MIN;
	volatile int32_t t189 = 666;

    t189 = (((x781==x782)/x783)==x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = INT64_MAX;
	int16_t x786 = 3;
	uint32_t x787 = 3066U;
	uint32_t x788 = 82589U;
	volatile int32_t t190 = 508773117;

    t190 = (((x785==x786)/x787)==x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x790 = 0;
	int32_t x791 = 711299466;
	int8_t x792 = INT8_MIN;
	volatile int32_t t191 = 1;

    t191 = (((x789==x790)/x791)==x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x798 = INT16_MIN;
	int64_t x800 = -1LL;
	volatile int32_t t192 = 67395060;

    t192 = (((x797==x798)/x799)==x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x801 = 3;
	static uint64_t x803 = 296002720815706594LLU;
	int32_t x804 = INT32_MIN;

    t193 = (((x801==x802)/x803)==x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x805 = -3;
	static int16_t x806 = INT16_MIN;
	int32_t t194 = 50976;

    t194 = (((x805==x806)/x807)==x808);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x810 = UINT32_MAX;
	int32_t x812 = -700319;

    t195 = (((x809==x810)/x811)==x812);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint64_t x814 = 1042920311LLU;
	static volatile int32_t x815 = -58325366;
	int64_t x816 = INT64_MIN;
	int32_t t196 = 1958405;

    t196 = (((x813==x814)/x815)==x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = 552125537U;
	volatile int64_t x819 = -1LL;
	volatile int16_t x820 = INT16_MIN;

    t197 = (((x817==x818)/x819)==x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	uint64_t x822 = 7358016173989LLU;
	int8_t x823 = INT8_MAX;
	static int16_t x824 = INT16_MIN;
	int32_t t198 = 1;

    t198 = (((x821==x822)/x823)==x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x829 = -1;
	int16_t x830 = INT16_MAX;
	int64_t x832 = INT64_MIN;
	int32_t t199 = -2744916;

    t199 = (((x829==x830)/x831)==x832);

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

