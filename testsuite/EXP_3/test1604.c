
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

uint16_t x3 = 1U;
int16_t x4 = INT16_MIN;
static uint8_t x8 = 11U;
int8_t x11 = INT8_MIN;
volatile uint64_t x12 = 64657004645LLU;
static volatile int32_t t5 = -11471;
volatile int16_t x33 = INT16_MAX;
int32_t t6 = -61590;
volatile int64_t x60 = -1LL;
int64_t x62 = INT64_MAX;
uint64_t x64 = UINT64_MAX;
uint32_t x75 = 220364U;
volatile int32_t x80 = INT32_MAX;
volatile int32_t x82 = -1;
static uint64_t x89 = UINT64_MAX;
int32_t t17 = -471819;
uint32_t x94 = UINT32_MAX;
int32_t t18 = -2;
volatile int8_t x97 = INT8_MIN;
int8_t x100 = INT8_MIN;
uint8_t x101 = 3U;
int8_t x114 = INT8_MIN;
static int32_t t23 = -25819;
volatile uint16_t x126 = UINT16_MAX;
uint32_t x133 = 701652U;
volatile int32_t t27 = -5;
int64_t x152 = INT64_MIN;
static int64_t x154 = -1LL;
int32_t x156 = 1250;
int64_t x162 = 101LL;
int8_t x167 = INT8_MIN;
static int8_t x170 = INT8_MIN;
uint8_t x186 = UINT8_MAX;
uint8_t x190 = 114U;
int32_t t37 = 14613040;
volatile int32_t t38 = 792943;
static int32_t x205 = -1;
int32_t t40 = 1730;
int8_t x213 = INT8_MIN;
uint8_t x216 = UINT8_MAX;
static uint64_t x217 = UINT64_MAX;
uint64_t x218 = UINT64_MAX;
volatile uint64_t x221 = UINT64_MAX;
uint32_t x227 = UINT32_MAX;
volatile int32_t x246 = -1;
int16_t x257 = INT16_MIN;
int32_t t51 = -183826923;
int64_t x270 = 12457LL;
int32_t t52 = -440524;
int8_t x273 = -1;
int64_t x274 = -1LL;
int16_t x279 = 103;
int32_t t57 = 6505;
int64_t x293 = -1662299298675482LL;
volatile int32_t t59 = 964830167;
static uint64_t x309 = 1850041LLU;
int32_t x314 = -2709;
static volatile int32_t t63 = -2048;
int8_t x330 = INT8_MIN;
int32_t x332 = INT32_MAX;
int16_t x337 = 0;
uint64_t x338 = 150799LLU;
int32_t t67 = 2;
static uint64_t x353 = UINT64_MAX;
int32_t x358 = -1;
uint8_t x365 = 54U;
int16_t x368 = -1;
static uint32_t x369 = 58721U;
int16_t x370 = -1;
static int8_t x376 = 16;
int64_t x379 = -73368034433755012LL;
volatile int32_t t76 = 506060;
static int16_t x384 = INT16_MAX;
static int8_t x388 = -1;
static int32_t x392 = INT32_MAX;
uint16_t x396 = 134U;
volatile uint32_t x397 = 199U;
static int8_t x406 = INT8_MIN;
volatile int32_t t83 = -48991;
volatile int32_t x422 = INT32_MIN;
static uint64_t x423 = UINT64_MAX;
int32_t t87 = 27254;
int32_t x434 = -1;
int8_t x435 = INT8_MIN;
int8_t x443 = -1;
int16_t x448 = INT16_MAX;
int16_t x455 = -1;
static volatile int16_t x470 = INT16_MAX;
volatile int32_t t94 = 125;
static uint32_t x478 = 3755974U;
int16_t x483 = -1;
uint64_t x485 = UINT64_MAX;
int32_t x487 = 15;
volatile uint8_t x490 = 1U;
int32_t x492 = INT32_MAX;
volatile int32_t t100 = -2427;
static int8_t x497 = -1;
static uint32_t x510 = UINT32_MAX;
volatile int32_t t105 = -1090;
static volatile int64_t x532 = -3355039LL;
uint32_t x535 = UINT32_MAX;
static volatile uint64_t x542 = 475LLU;
int32_t t109 = 49528063;
static volatile int32_t x547 = INT32_MIN;
int16_t x555 = 1303;
int64_t x556 = INT64_MIN;
static int32_t x558 = 23;
int32_t t113 = 48568;
volatile uint16_t x567 = UINT16_MAX;
volatile int32_t x568 = -1;
uint32_t x577 = 37297916U;
int16_t x578 = -1;
uint32_t x584 = 4501U;
volatile uint8_t x597 = 46U;
static int16_t x604 = -1;
int8_t x605 = INT8_MAX;
uint16_t x615 = UINT16_MAX;
int32_t x617 = 1;
uint32_t x628 = 386011U;
uint32_t x639 = 7916663U;
int32_t t125 = 4509;
static int8_t x647 = INT8_MIN;
volatile int32_t t128 = -117313;
uint32_t x653 = UINT32_MAX;
static int8_t x664 = INT8_MIN;
int32_t x668 = -1;
uint64_t x670 = UINT64_MAX;
uint8_t x672 = UINT8_MAX;
volatile int32_t t133 = -1004063704;
uint8_t x686 = UINT8_MAX;
static int8_t x691 = INT8_MIN;
static volatile int32_t t136 = -3138249;
volatile int32_t t137 = -166128;
uint64_t x716 = 2LLU;
int32_t t141 = 356941;
static int64_t x717 = INT64_MAX;
static int32_t x720 = INT32_MAX;
uint32_t x721 = UINT32_MAX;
static int8_t x723 = INT8_MAX;
int8_t x728 = -6;
uint32_t x733 = UINT32_MAX;
volatile int32_t t146 = -507691405;
uint8_t x740 = 3U;
int32_t t148 = -1;
static int16_t x754 = 55;
int32_t t151 = -262;
uint64_t x788 = UINT64_MAX;
uint16_t x789 = 0U;
int64_t x793 = 266458LL;
static int32_t t154 = -15;
int8_t x816 = INT8_MIN;
uint8_t x819 = UINT8_MAX;
static int32_t t158 = 61606;
uint8_t x828 = 48U;
static volatile int32_t t160 = 131783884;
uint32_t x829 = UINT32_MAX;
volatile uint8_t x830 = UINT8_MAX;
uint64_t x831 = UINT64_MAX;
static int16_t x835 = -1;
volatile int32_t t162 = -585;
uint64_t x841 = UINT64_MAX;
int16_t x850 = 7989;
volatile uint16_t x851 = 377U;
int64_t x868 = 62832728LL;
volatile uint32_t x872 = 336193290U;
static int32_t x875 = 12182;
volatile int8_t x878 = -1;
int8_t x879 = 56;
int64_t x880 = -1LL;
int16_t x881 = -1;
int8_t x882 = 6;
volatile uint64_t x886 = UINT64_MAX;
int32_t t172 = -1213902;
volatile int64_t x912 = 1318040548417327687LL;
volatile int16_t x919 = INT16_MIN;
int8_t x920 = INT8_MIN;
static volatile int32_t t178 = 0;
int32_t t179 = -237567857;
int16_t x934 = 3;
uint16_t x938 = 3191U;
static int32_t t181 = -2;
uint16_t x942 = 31U;
int32_t x944 = -1;
int8_t x947 = INT8_MIN;
int32_t x948 = INT32_MAX;
static int64_t x953 = INT64_MAX;
static volatile int64_t x955 = INT64_MAX;
volatile int32_t t186 = -5;
int64_t x966 = 4072LL;
uint32_t x982 = 36222U;
volatile int64_t x983 = 11595910423905LL;
static int8_t x986 = 1;
uint8_t x988 = 35U;
int16_t x995 = -3198;
volatile int32_t t192 = -254455;
static uint64_t x1003 = 513140317111LLU;
uint64_t x1004 = 40882163LLU;
int32_t t196 = 6;
volatile int32_t t197 = -37029;
int16_t x1025 = 12;
static int32_t t198 = 3;


void f0(void) {
    	volatile uint32_t x1 = 0U;
	int8_t x2 = INT8_MIN;
	static int32_t t0 = 441250;

    t0 = ((x1*x2)==(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 24;
	volatile uint8_t x6 = UINT8_MAX;
	int64_t x7 = -1LL;
	int32_t t1 = -15336929;

    t1 = ((x5*x6)==(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 120LLU;
	uint64_t x10 = 800LLU;
	int32_t t2 = -3857;

    t2 = ((x9*x10)==(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 338U;
	static volatile uint64_t x18 = 9123LLU;
	static uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 27U;
	int32_t t3 = -131;

    t3 = ((x17*x18)==(x19>x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = -1LL;
	uint16_t x22 = 24428U;
	uint8_t x23 = UINT8_MAX;
	volatile int64_t x24 = -1LL;
	static int32_t t4 = -1;

    t4 = ((x21*x22)==(x23>x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = -1;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MAX;
	static int16_t x32 = -1;

    t5 = ((x29*x30)==(x31>x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x34 = UINT8_MAX;
	uint32_t x35 = 11710770U;
	int64_t x36 = 30002331131872855LL;

    t6 = ((x33*x34)==(x35>x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = 24;
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = 30429U;
	int64_t x44 = INT64_MIN;
	volatile int32_t t7 = -1;

    t7 = ((x41*x42)==(x43>x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = 6691588LLU;
	volatile int8_t x46 = 7;
	uint8_t x47 = 11U;
	int8_t x48 = INT8_MAX;
	int32_t t8 = -17092;

    t8 = ((x45*x46)==(x47>x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x53 = 266713749U;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -479;
	volatile int32_t x56 = -1;
	volatile int32_t t9 = 25015653;

    t9 = ((x53*x54)==(x55>x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = UINT64_MAX;
	static int32_t x58 = INT32_MIN;
	volatile int32_t x59 = INT32_MIN;
	static volatile int32_t t10 = 422555;

    t10 = ((x57*x58)==(x59>x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = 1;
	int64_t x63 = INT64_MAX;
	volatile int32_t t11 = -75826166;

    t11 = ((x61*x62)==(x63>x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	volatile int16_t x71 = -1;
	uint16_t x72 = 2U;
	volatile int32_t t12 = 1792;

    t12 = ((x69*x70)==(x71>x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x73 = 14298;
	int32_t x74 = -420;
	int8_t x76 = INT8_MAX;
	static volatile int32_t t13 = 7611039;

    t13 = ((x73*x74)==(x75>x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x77 = 654012344LL;
	static uint64_t x78 = 158604982LLU;
	int32_t x79 = INT32_MIN;
	int32_t t14 = -4;

    t14 = ((x77*x78)==(x79>x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x81 = -103;
	int8_t x83 = 26;
	int8_t x84 = -12;
	static int32_t t15 = -31641118;

    t15 = ((x81*x82)==(x83>x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x85 = 29506U;
	int32_t x86 = 42;
	uint64_t x87 = UINT64_MAX;
	volatile int8_t x88 = INT8_MIN;
	int32_t t16 = 2990;

    t16 = ((x85*x86)==(x87>x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x90 = -1LL;
	int8_t x91 = 0;
	uint8_t x92 = UINT8_MAX;

    t17 = ((x89*x90)==(x91>x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = -1;
	static uint16_t x95 = 10156U;
	volatile int32_t x96 = INT32_MIN;

    t18 = ((x93*x94)==(x95>x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x98 = 1U;
	int32_t x99 = 28;
	volatile int32_t t19 = 0;

    t19 = ((x97*x98)==(x99>x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x102 = INT16_MIN;
	static uint16_t x103 = 4U;
	volatile uint32_t x104 = 6162U;
	volatile int32_t t20 = 676;

    t20 = ((x101*x102)==(x103>x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 403230LLU;
	int8_t x111 = INT8_MIN;
	volatile int16_t x112 = INT16_MIN;
	int32_t t21 = 34;

    t21 = ((x109*x110)==(x111>x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = INT8_MIN;
	volatile int64_t x115 = -1LL;
	int64_t x116 = -1LL;
	volatile int32_t t22 = 25642;

    t22 = ((x113*x114)==(x115>x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x121 = 446U;
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = -6;
	static int64_t x124 = 10990LL;

    t23 = ((x121*x122)==(x123>x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 4U;
	int8_t x127 = INT8_MAX;
	static int32_t x128 = -1;
	volatile int32_t t24 = 16464;

    t24 = ((x125*x126)==(x127>x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x134 = 0;
	int32_t x135 = 5;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t25 = -86;

    t25 = ((x133*x134)==(x135>x136));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x137 = UINT64_MAX;
	int64_t x138 = INT64_MAX;
	int16_t x139 = -1;
	int64_t x140 = INT64_MIN;
	int32_t t26 = 28094147;

    t26 = ((x137*x138)==(x139>x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MAX;
	uint32_t x143 = 21479543U;
	int64_t x144 = -1LL;

    t27 = ((x141*x142)==(x143>x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MAX;
	static int8_t x147 = INT8_MIN;
	uint32_t x148 = 26433385U;
	volatile int32_t t28 = -122624;

    t28 = ((x145*x146)==(x147>x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = -1;
	volatile uint8_t x150 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	int32_t t29 = -215088;

    t29 = ((x149*x150)==(x151>x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x153 = INT8_MIN;
	volatile uint8_t x155 = 106U;
	int32_t t30 = 681998;

    t30 = ((x153*x154)==(x155>x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x161 = -2774;
	static int16_t x163 = INT16_MAX;
	int64_t x164 = -1LL;
	volatile int32_t t31 = -571;

    t31 = ((x161*x162)==(x163>x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x165 = 0U;
	int8_t x166 = -1;
	uint64_t x168 = 3307610169LLU;
	int32_t t32 = -3339;

    t32 = ((x165*x166)==(x167>x168));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x169 = 30302148562LLU;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -1;
	int32_t t33 = -5;

    t33 = ((x169*x170)==(x171>x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = INT8_MIN;
	uint16_t x179 = 5495U;
	int8_t x180 = INT8_MAX;
	int32_t t34 = -60653;

    t34 = ((x177*x178)==(x179>x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x181 = -1;
	volatile int8_t x182 = 52;
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t35 = 35597533;

    t35 = ((x181*x182)==(x183>x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = -1;
	int64_t x187 = -3111043705642LL;
	uint8_t x188 = UINT8_MAX;
	static int32_t t36 = 6794;

    t36 = ((x185*x186)==(x187>x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = -1;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = 1531804580650LL;

    t37 = ((x189*x190)==(x191>x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x193 = 0;
	static volatile uint64_t x194 = 12995012171093LLU;
	int16_t x195 = -1;
	volatile uint64_t x196 = UINT64_MAX;

    t38 = ((x193*x194)==(x195>x196));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x197 = -41514;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	int32_t x200 = 60720061;
	volatile int32_t t39 = 504029375;

    t39 = ((x197*x198)==(x199>x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x206 = UINT32_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MAX;

    t40 = ((x205*x206)==(x207>x208));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	static uint16_t x212 = 18023U;
	volatile int32_t t41 = 1;

    t41 = ((x209*x210)==(x211>x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x214 = -1;
	int32_t x215 = INT32_MIN;
	volatile int32_t t42 = 9244214;

    t42 = ((x213*x214)==(x215>x216));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x219 = 15U;
	volatile int8_t x220 = -14;
	volatile int32_t t43 = 35990;

    t43 = ((x217*x218)==(x219>x220));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x222 = INT32_MIN;
	volatile int64_t x223 = INT64_MIN;
	uint8_t x224 = 1U;
	static int32_t t44 = 3660816;

    t44 = ((x221*x222)==(x223>x224));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = INT8_MIN;
	volatile uint32_t x228 = 23U;
	int32_t t45 = -955895930;

    t45 = ((x225*x226)==(x227>x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = 732;
	volatile int8_t x230 = 2;
	int32_t x231 = 20158708;
	int16_t x232 = INT16_MIN;
	int32_t t46 = -6838;

    t46 = ((x229*x230)==(x231>x232));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x237 = -1;
	int32_t x238 = -1;
	static int32_t x239 = -89002;
	int16_t x240 = INT16_MAX;
	int32_t t47 = -2672081;

    t47 = ((x237*x238)==(x239>x240));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x241 = 1002889163LL;
	uint8_t x242 = 1U;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t48 = -4854785;

    t48 = ((x241*x242)==(x243>x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x245 = 260;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	volatile int32_t t49 = 0;

    t49 = ((x245*x246)==(x247>x248));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = INT8_MAX;
	static uint8_t x250 = UINT8_MAX;
	static volatile int64_t x251 = INT64_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t50 = 35388876;

    t50 = ((x249*x250)==(x251>x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x258 = 0U;
	volatile int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;

    t51 = ((x257*x258)==(x259>x260));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x269 = -1604496756962LL;
	int16_t x271 = -2802;
	int32_t x272 = INT32_MIN;

    t52 = ((x269*x270)==(x271>x272));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x275 = -50;
	int32_t x276 = INT32_MAX;
	volatile int32_t t53 = -5254;

    t53 = ((x273*x274)==(x275>x276));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t54 = -103;

    t54 = ((x277*x278)==(x279>x280));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x281 = -34;
	int32_t x282 = -1;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = 51738601018912481LL;
	int32_t t55 = 236;

    t55 = ((x281*x282)==(x283>x284));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x285 = 29460U;
	int16_t x286 = 4;
	static uint32_t x287 = UINT32_MAX;
	int16_t x288 = -3795;
	int32_t t56 = -79;

    t56 = ((x285*x286)==(x287>x288));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x289 = 50661944975079795LLU;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	static uint32_t x292 = 320213U;

    t57 = ((x289*x290)==(x291>x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x294 = INT8_MAX;
	volatile uint16_t x295 = 254U;
	static volatile uint64_t x296 = 1019455500809LLU;
	int32_t t58 = 27281881;

    t58 = ((x293*x294)==(x295>x296));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x297 = -585495842755964LL;
	volatile int16_t x298 = 9982;
	int8_t x299 = -1;
	volatile int32_t x300 = INT32_MIN;

    t59 = ((x297*x298)==(x299>x300));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x305 = 89081180096136297LLU;
	int32_t x306 = -208;
	static volatile uint32_t x307 = 46U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t60 = -163670;

    t60 = ((x305*x306)==(x307>x308));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t61 = -128;

    t61 = ((x309*x310)==(x311>x312));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x313 = INT16_MIN;
	uint8_t x315 = UINT8_MAX;
	uint8_t x316 = 5U;
	volatile int32_t t62 = -456;

    t62 = ((x313*x314)==(x315>x316));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x321 = INT64_MIN;
	uint64_t x322 = UINT64_MAX;
	static volatile int64_t x323 = -1LL;
	volatile int8_t x324 = 48;

    t63 = ((x321*x322)==(x323>x324));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x325 = INT8_MIN;
	uint16_t x326 = 6U;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = ((x325*x326)==(x327>x328));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x329 = 747045565U;
	int8_t x331 = INT8_MIN;
	int32_t t65 = 950445;

    t65 = ((x329*x330)==(x331>x332));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x333 = 1047632840034072735LLU;
	static int16_t x334 = -1;
	volatile int64_t x335 = INT64_MAX;
	static volatile uint8_t x336 = 1U;
	volatile int32_t t66 = -1856;

    t66 = ((x333*x334)==(x335>x336));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x339 = 1U;
	uint64_t x340 = 4512100990556205LLU;

    t67 = ((x337*x338)==(x339>x340));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x341 = INT16_MAX;
	int32_t x342 = -1;
	uint16_t x343 = 1466U;
	int64_t x344 = INT64_MAX;
	static int32_t t68 = -2;

    t68 = ((x341*x342)==(x343>x344));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	static int32_t x347 = -1;
	int16_t x348 = INT16_MAX;
	volatile int32_t t69 = 185950654;

    t69 = ((x345*x346)==(x347>x348));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x354 = INT8_MAX;
	volatile int8_t x355 = INT8_MIN;
	static uint32_t x356 = 44U;
	volatile int32_t t70 = -1593876;

    t70 = ((x353*x354)==(x355>x356));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int64_t x357 = 318602410LL;
	int32_t x359 = 11;
	static int8_t x360 = INT8_MAX;
	int32_t t71 = -29;

    t71 = ((x357*x358)==(x359>x360));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x361 = -41883;
	static int8_t x362 = -1;
	volatile uint32_t x363 = 5217400U;
	volatile int8_t x364 = INT8_MAX;
	volatile int32_t t72 = -1845669;

    t72 = ((x361*x362)==(x363>x364));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x366 = -1;
	int8_t x367 = -1;
	int32_t t73 = -37639;

    t73 = ((x365*x366)==(x367>x368));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 0U;
	int32_t t74 = -515033;

    t74 = ((x369*x370)==(x371>x372));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x373 = 5001881417422864053LLU;
	static int8_t x374 = INT8_MAX;
	static volatile int64_t x375 = -1LL;
	static int32_t t75 = -10742;

    t75 = ((x373*x374)==(x375>x376));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	uint32_t x380 = UINT32_MAX;

    t76 = ((x377*x378)==(x379>x380));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x381 = 11337LL;
	static volatile uint64_t x382 = UINT64_MAX;
	volatile int16_t x383 = -1;
	static volatile int32_t t77 = -1233118;

    t77 = ((x381*x382)==(x383>x384));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	volatile int64_t x386 = 79LL;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t78 = 74803;

    t78 = ((x385*x386)==(x387>x388));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x389 = -1;
	volatile int64_t x390 = INT64_MAX;
	static int16_t x391 = 4161;
	volatile int32_t t79 = -75679805;

    t79 = ((x389*x390)==(x391>x392));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = 27;
	static int8_t x395 = -1;
	volatile int32_t t80 = 510578;

    t80 = ((x393*x394)==(x395>x396));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x398 = INT16_MIN;
	uint32_t x399 = 1040212669U;
	static uint64_t x400 = 90056534986LLU;
	static volatile int32_t t81 = -75566595;

    t81 = ((x397*x398)==(x399>x400));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x401 = INT16_MAX;
	static uint64_t x402 = 37191238451192443LLU;
	static int16_t x403 = INT16_MIN;
	uint64_t x404 = 8350383228373488267LLU;
	volatile int32_t t82 = 1832324;

    t82 = ((x401*x402)==(x403>x404));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x405 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	static int32_t x408 = -314819932;

    t83 = ((x405*x406)==(x407>x408));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x409 = INT8_MIN;
	static uint8_t x410 = 105U;
	int32_t x411 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t84 = 1;

    t84 = ((x409*x410)==(x411>x412));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x421 = 163459052972072LLU;
	uint64_t x424 = 12473703601827LLU;
	int32_t t85 = -10;

    t85 = ((x421*x422)==(x423>x424));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x425 = 49U;
	volatile int64_t x426 = 944555375366623LL;
	volatile int64_t x427 = 290990107563547970LL;
	int16_t x428 = INT16_MAX;
	volatile int32_t t86 = 3495;

    t86 = ((x425*x426)==(x427>x428));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x429 = 44U;
	static uint16_t x430 = UINT16_MAX;
	int64_t x431 = -1LL;
	static int64_t x432 = -1LL;

    t87 = ((x429*x430)==(x431>x432));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x433 = INT8_MIN;
	uint16_t x436 = 3U;
	static volatile int32_t t88 = 5205759;

    t88 = ((x433*x434)==(x435>x436));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x437 = -1;
	int16_t x438 = INT16_MIN;
	volatile int8_t x439 = INT8_MIN;
	volatile int8_t x440 = -1;
	int32_t t89 = -257679519;

    t89 = ((x437*x438)==(x439>x440));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x441 = -4085LL;
	volatile uint16_t x442 = 23U;
	uint16_t x444 = 1U;
	int32_t t90 = 906441;

    t90 = ((x441*x442)==(x443>x444));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x445 = UINT8_MAX;
	volatile int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MAX;
	volatile int32_t t91 = 126115333;

    t91 = ((x445*x446)==(x447>x448));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x453 = -16LL;
	int16_t x454 = -1;
	int64_t x456 = INT64_MAX;
	static int32_t t92 = 2095;

    t92 = ((x453*x454)==(x455>x456));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x461 = INT8_MAX;
	int64_t x462 = -858796LL;
	volatile uint16_t x463 = 493U;
	int16_t x464 = 12536;
	volatile int32_t t93 = 97400379;

    t93 = ((x461*x462)==(x463>x464));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x469 = -1;
	int8_t x471 = INT8_MIN;
	volatile int64_t x472 = INT64_MIN;

    t94 = ((x469*x470)==(x471>x472));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x473 = -7;
	static int8_t x474 = -1;
	static int16_t x475 = 86;
	int64_t x476 = -1LL;
	static int32_t t95 = -162;

    t95 = ((x473*x474)==(x475>x476));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x477 = -1;
	volatile uint16_t x479 = UINT16_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t96 = 1106;

    t96 = ((x477*x478)==(x479>x480));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x481 = 120;
	int16_t x482 = INT16_MAX;
	int32_t x484 = -1;
	int32_t t97 = -1;

    t97 = ((x481*x482)==(x483>x484));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x486 = -1;
	int8_t x488 = -11;
	volatile int32_t t98 = 7;

    t98 = ((x485*x486)==(x487>x488));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x489 = INT64_MIN;
	static int8_t x491 = -1;
	volatile int32_t t99 = 6817;

    t99 = ((x489*x490)==(x491>x492));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x493 = UINT64_MAX;
	static int64_t x494 = 907240225LL;
	int32_t x495 = 0;
	static int64_t x496 = -224124730777858289LL;

    t100 = ((x493*x494)==(x495>x496));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x498 = -1;
	int16_t x499 = -29;
	static int16_t x500 = -4;
	volatile int32_t t101 = 25464277;

    t101 = ((x497*x498)==(x499>x500));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x501 = UINT32_MAX;
	int32_t x502 = INT32_MIN;
	int64_t x503 = INT64_MIN;
	static int32_t x504 = -1;
	static int32_t t102 = 17249842;

    t102 = ((x501*x502)==(x503>x504));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x509 = 5;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MIN;
	int32_t t103 = -141809;

    t103 = ((x509*x510)==(x511>x512));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x513 = INT16_MIN;
	int16_t x514 = 135;
	int16_t x515 = INT16_MIN;
	int64_t x516 = -1LL;
	static int32_t t104 = 883;

    t104 = ((x513*x514)==(x515>x516));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x517 = 384558522223053LLU;
	int8_t x518 = -1;
	static volatile int64_t x519 = -30208264971288427LL;
	uint8_t x520 = 32U;

    t105 = ((x517*x518)==(x519>x520));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x525 = UINT32_MAX;
	int32_t x526 = -1;
	static volatile uint64_t x527 = 81LLU;
	int32_t x528 = 11;
	volatile int32_t t106 = -78495;

    t106 = ((x525*x526)==(x527>x528));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x529 = 244;
	uint8_t x530 = UINT8_MAX;
	int8_t x531 = -31;
	static int32_t t107 = 2684;

    t107 = ((x529*x530)==(x531>x532));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x533 = INT16_MAX;
	static int64_t x534 = -114384178LL;
	static int16_t x536 = 2016;
	int32_t t108 = 10;

    t108 = ((x533*x534)==(x535>x536));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x541 = 0;
	int64_t x543 = INT64_MAX;
	volatile int16_t x544 = INT16_MAX;

    t109 = ((x541*x542)==(x543>x544));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x545 = INT64_MIN;
	uint64_t x546 = 207811LLU;
	volatile int8_t x548 = INT8_MIN;
	volatile int32_t t110 = 544266;

    t110 = ((x545*x546)==(x547>x548));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x549 = -1;
	uint16_t x550 = 11594U;
	int64_t x551 = 25180692LL;
	int64_t x552 = INT64_MAX;
	volatile int32_t t111 = -1;

    t111 = ((x549*x550)==(x551>x552));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x553 = -27;
	int64_t x554 = -14477LL;
	volatile int32_t t112 = 31627;

    t112 = ((x553*x554)==(x555>x556));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x557 = INT16_MIN;
	int32_t x559 = -390;
	int64_t x560 = INT64_MIN;

    t113 = ((x557*x558)==(x559>x560));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x565 = -8176681467LL;
	int8_t x566 = INT8_MIN;
	int32_t t114 = -3;

    t114 = ((x565*x566)==(x567>x568));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x579 = -248LL;
	int16_t x580 = -1;
	volatile int32_t t115 = 0;

    t115 = ((x577*x578)==(x579>x580));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x581 = -1LL;
	static int8_t x582 = INT8_MIN;
	static uint64_t x583 = UINT64_MAX;
	static int32_t t116 = -667;

    t116 = ((x581*x582)==(x583>x584));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x598 = 43333;
	volatile int16_t x599 = -2957;
	volatile uint8_t x600 = UINT8_MAX;
	volatile int32_t t117 = 120;

    t117 = ((x597*x598)==(x599>x600));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x601 = INT16_MAX;
	volatile int8_t x602 = INT8_MAX;
	static volatile uint64_t x603 = UINT64_MAX;
	volatile int32_t t118 = 376896872;

    t118 = ((x601*x602)==(x603>x604));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x606 = INT8_MAX;
	int64_t x607 = -1LL;
	int8_t x608 = INT8_MIN;
	int32_t t119 = -15;

    t119 = ((x605*x606)==(x607>x608));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x609 = UINT8_MAX;
	uint8_t x610 = 3U;
	uint32_t x611 = 67385974U;
	int32_t x612 = -1;
	volatile int32_t t120 = -1812;

    t120 = ((x609*x610)==(x611>x612));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x613 = -1;
	int16_t x614 = 167;
	volatile int16_t x616 = -10;
	volatile int32_t t121 = 2111186;

    t121 = ((x613*x614)==(x615>x616));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x618 = INT8_MIN;
	int64_t x619 = INT64_MIN;
	volatile int32_t x620 = -1;
	int32_t t122 = 44;

    t122 = ((x617*x618)==(x619>x620));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x625 = 97U;
	volatile int16_t x626 = -187;
	int16_t x627 = INT16_MIN;
	int32_t t123 = 517850;

    t123 = ((x625*x626)==(x627>x628));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = -11;
	static volatile int16_t x631 = INT16_MIN;
	int8_t x632 = -1;
	int32_t t124 = 104807;

    t124 = ((x629*x630)==(x631>x632));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x637 = -1;
	int8_t x638 = INT8_MIN;
	static int32_t x640 = 39191;

    t125 = ((x637*x638)==(x639>x640));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x641 = INT64_MIN;
	uint64_t x642 = 546833894LLU;
	static uint32_t x643 = 12159580U;
	uint32_t x644 = 107253U;
	volatile int32_t t126 = -3000851;

    t126 = ((x641*x642)==(x643>x644));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile uint32_t x646 = 22436157U;
	volatile int16_t x648 = 16119;
	volatile int32_t t127 = 47460;

    t127 = ((x645*x646)==(x647>x648));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x649 = INT16_MAX;
	int64_t x650 = 2193708932077LL;
	int64_t x651 = -1LL;
	uint64_t x652 = 1092861054LLU;

    t128 = ((x649*x650)==(x651>x652));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x654 = 176029561U;
	static uint64_t x655 = 614920856782LLU;
	volatile int64_t x656 = INT64_MIN;
	volatile int32_t t129 = -247184;

    t129 = ((x653*x654)==(x655>x656));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x661 = INT16_MIN;
	volatile uint8_t x662 = 2U;
	int64_t x663 = 0LL;
	int32_t t130 = 3048;

    t130 = ((x661*x662)==(x663>x664));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x665 = INT8_MAX;
	static int16_t x666 = -18;
	static uint8_t x667 = UINT8_MAX;
	volatile int32_t t131 = -25727;

    t131 = ((x665*x666)==(x667>x668));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x671 = INT64_MIN;
	int32_t t132 = -50890;

    t132 = ((x669*x670)==(x671>x672));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x673 = -1;
	volatile int8_t x674 = 2;
	volatile uint8_t x675 = 6U;
	int32_t x676 = INT32_MAX;

    t133 = ((x673*x674)==(x675>x676));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x681 = -7;
	int8_t x682 = INT8_MIN;
	uint32_t x683 = 49657076U;
	static int16_t x684 = -14;
	volatile int32_t t134 = 1;

    t134 = ((x681*x682)==(x683>x684));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x685 = -43;
	int16_t x687 = INT16_MIN;
	volatile int16_t x688 = 1;
	int32_t t135 = 0;

    t135 = ((x685*x686)==(x687>x688));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x689 = -1LL;
	uint64_t x690 = 0LLU;
	int64_t x692 = -1LL;

    t136 = ((x689*x690)==(x691>x692));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x693 = INT16_MAX;
	int8_t x694 = 1;
	volatile uint32_t x695 = 6707539U;
	int16_t x696 = 2;

    t137 = ((x693*x694)==(x695>x696));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x697 = 53;
	uint32_t x698 = 20376U;
	int16_t x699 = INT16_MIN;
	static volatile int8_t x700 = -1;
	volatile int32_t t138 = -2006;

    t138 = ((x697*x698)==(x699>x700));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x701 = UINT32_MAX;
	int16_t x702 = INT16_MIN;
	uint32_t x703 = 282U;
	int8_t x704 = INT8_MIN;
	int32_t t139 = 40;

    t139 = ((x701*x702)==(x703>x704));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x709 = 5476U;
	int64_t x710 = -1LL;
	static int32_t x711 = INT32_MIN;
	int32_t x712 = -1;
	volatile int32_t t140 = 283300726;

    t140 = ((x709*x710)==(x711>x712));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x713 = -1;
	uint64_t x714 = UINT64_MAX;
	volatile int64_t x715 = INT64_MAX;

    t141 = ((x713*x714)==(x715>x716));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x718 = -1;
	static int16_t x719 = INT16_MIN;
	static int32_t t142 = 105828;

    t142 = ((x717*x718)==(x719>x720));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x722 = 3;
	int8_t x724 = INT8_MIN;
	int32_t t143 = -3940443;

    t143 = ((x721*x722)==(x723>x724));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x725 = -39;
	static int8_t x726 = -1;
	static volatile uint16_t x727 = UINT16_MAX;
	static int32_t t144 = 27330999;

    t144 = ((x725*x726)==(x727>x728));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x729 = 6U;
	volatile int16_t x730 = INT16_MAX;
	uint32_t x731 = 481U;
	int16_t x732 = INT16_MIN;
	static int32_t t145 = 35968;

    t145 = ((x729*x730)==(x731>x732));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x734 = 3U;
	volatile int32_t x735 = INT32_MAX;
	int32_t x736 = INT32_MIN;

    t146 = ((x733*x734)==(x735>x736));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x737 = 57413391;
	static int8_t x738 = -24;
	uint32_t x739 = 489805U;
	int32_t t147 = -1;

    t147 = ((x737*x738)==(x739>x740));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x745 = -1;
	int8_t x746 = -1;
	uint32_t x747 = UINT32_MAX;
	int16_t x748 = -1;

    t148 = ((x745*x746)==(x747>x748));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x753 = INT8_MIN;
	uint32_t x755 = 372U;
	int32_t x756 = INT32_MAX;
	int32_t t149 = -536896872;

    t149 = ((x753*x754)==(x755>x756));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x757 = -1;
	static int32_t x758 = -1;
	static uint8_t x759 = 24U;
	int64_t x760 = INT64_MIN;
	volatile int32_t t150 = -259745804;

    t150 = ((x757*x758)==(x759>x760));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x769 = UINT64_MAX;
	uint16_t x770 = 482U;
	volatile int16_t x771 = INT16_MIN;
	volatile int8_t x772 = -1;

    t151 = ((x769*x770)==(x771>x772));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x785 = 0U;
	int64_t x786 = INT64_MIN;
	uint32_t x787 = 11859258U;
	volatile int32_t t152 = -76640331;

    t152 = ((x785*x786)==(x787>x788));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x790 = -1LL;
	int16_t x791 = INT16_MIN;
	int16_t x792 = -70;
	volatile int32_t t153 = 104;

    t153 = ((x789*x790)==(x791>x792));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x794 = -1;
	int16_t x795 = INT16_MAX;
	uint32_t x796 = 3952435U;

    t154 = ((x793*x794)==(x795>x796));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x797 = 0;
	int16_t x798 = -1;
	int16_t x799 = -1;
	static int64_t x800 = INT64_MIN;
	int32_t t155 = -417454;

    t155 = ((x797*x798)==(x799>x800));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x801 = -1LL;
	static int16_t x802 = -8;
	int32_t x803 = -1;
	int64_t x804 = INT64_MIN;
	static volatile int32_t t156 = -5625921;

    t156 = ((x801*x802)==(x803>x804));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x813 = 281206089539LLU;
	static int16_t x814 = INT16_MAX;
	int8_t x815 = INT8_MAX;
	int32_t t157 = 1007;

    t157 = ((x813*x814)==(x815>x816));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x817 = UINT16_MAX;
	static uint64_t x818 = UINT64_MAX;
	volatile int32_t x820 = INT32_MIN;

    t158 = ((x817*x818)==(x819>x820));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x821 = 284147204;
	volatile uint64_t x822 = UINT64_MAX;
	volatile int8_t x823 = -3;
	int64_t x824 = -4453882LL;
	static volatile int32_t t159 = -7704031;

    t159 = ((x821*x822)==(x823>x824));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x825 = INT16_MIN;
	int8_t x826 = INT8_MIN;
	volatile int8_t x827 = INT8_MAX;

    t160 = ((x825*x826)==(x827>x828));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x832 = -1;
	int32_t t161 = -35801967;

    t161 = ((x829*x830)==(x831>x832));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x833 = INT32_MIN;
	int8_t x834 = 1;
	int16_t x836 = INT16_MIN;

    t162 = ((x833*x834)==(x835>x836));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x842 = 63372499U;
	int8_t x843 = 6;
	static int16_t x844 = 52;
	static int32_t t163 = -7;

    t163 = ((x841*x842)==(x843>x844));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x845 = INT8_MIN;
	volatile int16_t x846 = -1;
	int8_t x847 = INT8_MAX;
	int8_t x848 = INT8_MIN;
	volatile int32_t t164 = -10642;

    t164 = ((x845*x846)==(x847>x848));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x849 = UINT8_MAX;
	uint8_t x852 = UINT8_MAX;
	volatile int32_t t165 = 435;

    t165 = ((x849*x850)==(x851>x852));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x865 = 12841642149LLU;
	uint32_t x866 = 2500U;
	uint16_t x867 = UINT16_MAX;
	volatile int32_t t166 = 960826556;

    t166 = ((x865*x866)==(x867>x868));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x869 = -6;
	int64_t x870 = -2431648LL;
	static int32_t x871 = INT32_MIN;
	static int32_t t167 = 1963013;

    t167 = ((x869*x870)==(x871>x872));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x873 = 0;
	int16_t x874 = INT16_MIN;
	int8_t x876 = INT8_MIN;
	volatile int32_t t168 = 2225831;

    t168 = ((x873*x874)==(x875>x876));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x877 = UINT16_MAX;
	int32_t t169 = -10659;

    t169 = ((x877*x878)==(x879>x880));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x883 = -18;
	int16_t x884 = INT16_MIN;
	int32_t t170 = 274;

    t170 = ((x881*x882)==(x883>x884));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x885 = UINT16_MAX;
	volatile int32_t x887 = -1;
	uint64_t x888 = UINT64_MAX;
	volatile int32_t t171 = -8903419;

    t171 = ((x885*x886)==(x887>x888));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x889 = -125LL;
	uint64_t x890 = 1244838622LLU;
	volatile uint8_t x891 = 16U;
	int64_t x892 = -1LL;

    t172 = ((x889*x890)==(x891>x892));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x893 = -1;
	uint64_t x894 = 15525LLU;
	uint32_t x895 = UINT32_MAX;
	int64_t x896 = -19524357828131LL;
	int32_t t173 = -6362901;

    t173 = ((x893*x894)==(x895>x896));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x897 = INT16_MIN;
	static int8_t x898 = INT8_MIN;
	uint64_t x899 = 486199968LLU;
	int8_t x900 = -1;
	static volatile int32_t t174 = 8197;

    t174 = ((x897*x898)==(x899>x900));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x901 = -1;
	uint32_t x902 = 2337014U;
	uint16_t x903 = UINT16_MAX;
	volatile uint16_t x904 = 1U;
	int32_t t175 = -2;

    t175 = ((x901*x902)==(x903>x904));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x905 = 62;
	static uint8_t x906 = 2U;
	static int32_t x907 = -30;
	uint64_t x908 = 97449253194LLU;
	int32_t t176 = 657737;

    t176 = ((x905*x906)==(x907>x908));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x909 = 2921307LLU;
	int32_t x910 = -1;
	volatile int8_t x911 = 61;
	static int32_t t177 = -5;

    t177 = ((x909*x910)==(x911>x912));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x917 = 1U;
	int16_t x918 = -1;

    t178 = ((x917*x918)==(x919>x920));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x929 = 3486;
	static uint16_t x930 = 0U;
	static uint64_t x931 = 136643LLU;
	volatile int8_t x932 = INT8_MAX;

    t179 = ((x929*x930)==(x931>x932));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x933 = INT8_MIN;
	uint8_t x935 = UINT8_MAX;
	int64_t x936 = INT64_MIN;
	int32_t t180 = -256681617;

    t180 = ((x933*x934)==(x935>x936));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x937 = 9;
	uint32_t x939 = 1165441745U;
	int16_t x940 = 2808;

    t181 = ((x937*x938)==(x939>x940));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x941 = 1457499888622655588LLU;
	uint16_t x943 = 0U;
	volatile int32_t t182 = -63350823;

    t182 = ((x941*x942)==(x943>x944));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x945 = -1;
	int16_t x946 = INT16_MIN;
	int32_t t183 = -2391006;

    t183 = ((x945*x946)==(x947>x948));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x954 = 1LL;
	int32_t x956 = INT32_MIN;
	static int32_t t184 = 4;

    t184 = ((x953*x954)==(x955>x956));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x957 = 30U;
	uint16_t x958 = UINT16_MAX;
	static uint8_t x959 = 1U;
	int64_t x960 = INT64_MIN;
	volatile int32_t t185 = -29;

    t185 = ((x957*x958)==(x959>x960));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x961 = -1;
	uint64_t x962 = 150563514LLU;
	int16_t x963 = INT16_MAX;
	uint8_t x964 = 0U;

    t186 = ((x961*x962)==(x963>x964));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x965 = INT16_MIN;
	static int32_t x967 = INT32_MIN;
	int8_t x968 = 0;
	int32_t t187 = 3710337;

    t187 = ((x965*x966)==(x967>x968));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x973 = INT64_MAX;
	int8_t x974 = -1;
	volatile int16_t x975 = -3020;
	uint32_t x976 = 5898U;
	volatile int32_t t188 = -1079504;

    t188 = ((x973*x974)==(x975>x976));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x981 = 5866U;
	volatile int16_t x984 = 232;
	int32_t t189 = -2;

    t189 = ((x981*x982)==(x983>x984));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x985 = INT64_MIN;
	uint32_t x987 = 14U;
	static int32_t t190 = -242245;

    t190 = ((x985*x986)==(x987>x988));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x989 = UINT8_MAX;
	int32_t x990 = -1;
	int64_t x991 = INT64_MAX;
	int32_t x992 = -1401;
	volatile int32_t t191 = 1467777;

    t191 = ((x989*x990)==(x991>x992));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x993 = -1;
	uint8_t x994 = 96U;
	volatile int32_t x996 = INT32_MIN;

    t192 = ((x993*x994)==(x995>x996));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1001 = -2;
	static volatile uint16_t x1002 = UINT16_MAX;
	volatile int32_t t193 = 27069812;

    t193 = ((x1001*x1002)==(x1003>x1004));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x1005 = INT16_MIN;
	volatile uint64_t x1006 = UINT64_MAX;
	int32_t x1007 = -30;
	volatile uint64_t x1008 = UINT64_MAX;
	static volatile int32_t t194 = -66555950;

    t194 = ((x1005*x1006)==(x1007>x1008));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x1009 = UINT8_MAX;
	static int8_t x1010 = INT8_MIN;
	int16_t x1011 = -1;
	int64_t x1012 = INT64_MIN;
	int32_t t195 = -372;

    t195 = ((x1009*x1010)==(x1011>x1012));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1013 = -1206;
	int32_t x1014 = -1;
	int16_t x1015 = -3873;
	uint8_t x1016 = 71U;

    t196 = ((x1013*x1014)==(x1015>x1016));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1017 = UINT32_MAX;
	volatile uint64_t x1018 = 35602924336324LLU;
	int64_t x1019 = INT64_MAX;
	uint64_t x1020 = 32LLU;

    t197 = ((x1017*x1018)==(x1019>x1020));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1026 = INT8_MIN;
	int64_t x1027 = INT64_MAX;
	int64_t x1028 = INT64_MIN;

    t198 = ((x1025*x1026)==(x1027>x1028));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1029 = 1972034819819360LLU;
	static int32_t x1030 = INT32_MIN;
	int64_t x1031 = -1LL;
	uint8_t x1032 = 111U;
	int32_t t199 = -2165;

    t199 = ((x1029*x1030)==(x1031>x1032));

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

