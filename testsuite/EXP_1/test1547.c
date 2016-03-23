
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

static int16_t x4 = INT16_MAX;
static volatile int32_t t1 = -1;
static int8_t x9 = INT8_MIN;
uint16_t x11 = 36U;
int16_t x12 = INT16_MIN;
int32_t t2 = -242;
static volatile int32_t x14 = INT32_MIN;
int32_t x20 = -1;
volatile int8_t x23 = 0;
uint32_t x24 = UINT32_MAX;
static int64_t x26 = INT64_MAX;
int8_t x28 = -1;
static volatile int32_t t10 = -5867747;
static int64_t x45 = INT64_MAX;
static uint64_t x50 = 423LLU;
uint64_t x52 = UINT64_MAX;
int16_t x57 = INT16_MIN;
int64_t x60 = INT64_MIN;
uint32_t x65 = 15237U;
static int32_t t16 = 171493;
uint32_t x72 = UINT32_MAX;
uint64_t x73 = UINT64_MAX;
uint16_t x75 = 239U;
static int32_t t18 = 13;
int64_t x85 = INT64_MIN;
int32_t x87 = INT32_MAX;
int32_t x91 = INT32_MIN;
static volatile uint32_t x95 = 25544U;
int16_t x99 = 357;
int64_t x102 = -940639217948441LL;
int32_t t25 = 411213;
int32_t t28 = -4;
uint8_t x119 = 2U;
uint64_t x120 = UINT64_MAX;
int32_t t32 = -27;
static volatile int32_t t33 = 15;
int8_t x145 = 1;
int32_t t36 = 103353337;
volatile int16_t x151 = INT16_MIN;
int64_t x160 = INT64_MIN;
int32_t t39 = 334843;
int32_t x162 = INT32_MIN;
int32_t x164 = -22;
static volatile uint64_t x170 = 6713267LLU;
volatile uint8_t x174 = 36U;
int32_t x175 = -1;
volatile int32_t t43 = -1;
volatile int32_t x180 = INT32_MAX;
int32_t x184 = 13956;
int8_t x185 = 39;
int16_t x189 = INT16_MIN;
uint8_t x194 = 14U;
int32_t t48 = -3389024;
static int16_t x199 = -1;
int8_t x201 = 5;
uint64_t x203 = 269456301728162424LLU;
static int64_t x205 = INT64_MIN;
int32_t t52 = -161256;
uint64_t x216 = 7665967542363LLU;
int32_t t53 = -1;
int64_t x218 = -32LL;
static volatile uint64_t x223 = 42075LLU;
int8_t x234 = 6;
uint32_t x237 = UINT32_MAX;
uint64_t x240 = 70356248231107LLU;
volatile uint8_t x260 = 20U;
int8_t x263 = -1;
int32_t x264 = INT32_MIN;
static volatile int32_t t65 = 123343566;
uint8_t x267 = 91U;
int64_t x270 = INT64_MAX;
uint32_t x275 = UINT32_MAX;
volatile int32_t x279 = INT32_MAX;
volatile int32_t t71 = -1;
int32_t x293 = 8184026;
int64_t x294 = -1246403865407899435LL;
int32_t t74 = -1211195;
uint8_t x301 = UINT8_MAX;
int16_t x308 = 8951;
uint32_t x310 = UINT32_MAX;
uint8_t x311 = 19U;
uint16_t x317 = UINT16_MAX;
int8_t x318 = -1;
int32_t x319 = INT32_MAX;
int8_t x323 = INT8_MIN;
static int32_t x324 = INT32_MIN;
int8_t x325 = INT8_MIN;
int32_t x335 = -1;
volatile uint8_t x342 = 7U;
int32_t x350 = 264;
uint32_t x351 = UINT32_MAX;
uint16_t x352 = UINT16_MAX;
uint16_t x360 = 57U;
volatile int64_t x376 = -133691877509895882LL;
int32_t x389 = 317;
static volatile int32_t x391 = -1;
volatile int16_t x397 = 47;
int64_t x402 = 107918LL;
int8_t x420 = INT8_MAX;
int32_t x427 = INT32_MIN;
int64_t x433 = 68115823LL;
int32_t x436 = 0;
uint8_t x441 = UINT8_MAX;
volatile int32_t t110 = -7;
int64_t x447 = INT64_MAX;
static volatile int8_t x452 = -1;
volatile uint64_t x456 = 4835223921969LLU;
uint64_t x461 = UINT64_MAX;
volatile uint16_t x464 = 3735U;
static volatile int32_t t116 = 31689228;
volatile int32_t x470 = INT32_MIN;
int64_t x471 = INT64_MAX;
int16_t x472 = -1;
int64_t x477 = -2288125LL;
int32_t t119 = -1;
volatile int16_t x485 = -1;
volatile int16_t x491 = 0;
volatile int32_t t124 = -182;
uint16_t x506 = UINT16_MAX;
static volatile uint8_t x513 = UINT8_MAX;
int8_t x521 = -1;
uint8_t x523 = UINT8_MAX;
volatile int32_t t130 = 965556173;
int16_t x525 = INT16_MIN;
int16_t x530 = INT16_MIN;
volatile int32_t t132 = -34093;
int32_t x534 = 1194;
uint8_t x535 = UINT8_MAX;
uint8_t x536 = 90U;
int8_t x537 = -13;
int64_t x541 = INT64_MIN;
int64_t x544 = 301945843LL;
volatile uint8_t x546 = UINT8_MAX;
int8_t x556 = 4;
int16_t x569 = -4;
int32_t t144 = -2701441;
int64_t x583 = INT64_MIN;
int16_t x584 = -1;
static uint32_t x592 = 9813937U;
uint32_t x594 = 3922U;
volatile uint8_t x595 = 114U;
int32_t x597 = 187261133;
int64_t x599 = -860372399894LL;
uint64_t x600 = 1LLU;
static int16_t x601 = -1;
int64_t x607 = -1LL;
int32_t t151 = -828245680;
int64_t x624 = -39210923909LL;
volatile int32_t t155 = -354;
uint8_t x625 = 11U;
uint16_t x628 = 81U;
int16_t x631 = -1;
int32_t t159 = -30;
static uint64_t x644 = 36866923LLU;
volatile int32_t t160 = -65753;
int16_t x646 = -1;
int8_t x647 = 1;
static volatile int16_t x649 = INT16_MIN;
int16_t x653 = 195;
static uint64_t x655 = 323791LLU;
volatile int32_t t164 = 35335952;
volatile int32_t t165 = 3855;
uint8_t x665 = UINT8_MAX;
uint8_t x668 = 3U;
int8_t x671 = 3;
volatile int32_t t167 = 0;
int32_t t168 = 1;
volatile int16_t x677 = 1;
int32_t x684 = INT32_MAX;
int32_t x687 = INT32_MIN;
volatile int8_t x688 = -1;
static volatile uint64_t x690 = 3638LLU;
int32_t x698 = INT32_MIN;
int64_t x709 = -1LL;
static int64_t x717 = 1022LL;
int64_t x721 = -1LL;
int32_t t181 = 179902;
int8_t x733 = INT8_MAX;
volatile int16_t x734 = INT16_MIN;
volatile uint64_t x735 = UINT64_MAX;
int64_t x737 = -1186051397LL;
static int16_t x743 = -1;
static uint32_t x745 = 91U;
uint16_t x747 = 4U;
uint16_t x756 = 1488U;
int16_t x758 = -2093;
volatile int8_t x787 = -4;
volatile int64_t x793 = -1LL;
static uint16_t x796 = 34U;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int64_t x2 = -140LL;
	int32_t x3 = 121;
	int32_t t0 = 398890256;

    t0 = (((x1==x2)|x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 16181379368708465LLU;
	int16_t x6 = 7;
	int64_t x7 = -94494077LL;
	static int32_t x8 = INT32_MIN;

    t1 = (((x5==x6)|x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 1138LLU;

    t2 = (((x9==x10)|x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint32_t x15 = 30531199U;
	volatile uint8_t x16 = 0U;
	int32_t t3 = 249457106;

    t3 = (((x13==x14)|x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 4954552U;
	int8_t x18 = INT8_MAX;
	static volatile int8_t x19 = INT8_MAX;
	int32_t t4 = 534;

    t4 = (((x17==x18)|x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	int8_t x22 = 1;
	int32_t t5 = 0;

    t5 = (((x21==x22)|x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 21837U;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = -1627253;

    t6 = (((x25==x26)|x27)!=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 13;
	uint16_t x30 = UINT16_MAX;
	volatile int32_t x31 = INT32_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -2264;

    t7 = (((x29==x30)|x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = 18981;
	volatile uint64_t x34 = 109432976900LLU;
	int64_t x35 = 796651740389LL;
	volatile int64_t x36 = 3LL;
	int32_t t8 = 182716;

    t8 = (((x33==x34)|x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 335U;
	static int64_t x38 = -4183500064238702LL;
	uint64_t x39 = 19863LLU;
	static volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -5261;

    t9 = (((x37==x38)|x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	volatile int64_t x43 = INT64_MIN;
	static int16_t x44 = INT16_MAX;

    t10 = (((x41==x42)|x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x46 = -1;
	int16_t x47 = INT16_MIN;
	volatile uint16_t x48 = 13U;
	static int32_t t11 = 460;

    t11 = (((x45==x46)|x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	static volatile int32_t x51 = INT32_MIN;
	int32_t t12 = 1;

    t12 = (((x49==x50)|x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -26417620070LL;
	uint16_t x54 = UINT16_MAX;
	volatile int16_t x55 = 1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 3665;

    t13 = (((x53==x54)|x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x58 = 0;
	volatile uint64_t x59 = 244LLU;
	int32_t t14 = 78945532;

    t14 = (((x57==x58)|x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 1U;
	static uint16_t x62 = 1680U;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -10580131;

    t15 = (((x61==x62)|x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -6;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = 23U;

    t16 = (((x65==x66)|x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MAX;
	uint32_t x71 = 3463993U;
	volatile int32_t t17 = -7175596;

    t17 = (((x69==x70)|x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = INT64_MIN;
	int8_t x76 = -1;

    t18 = (((x73==x74)|x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 1431534317U;
	volatile int64_t x78 = INT64_MIN;
	static uint64_t x79 = 0LLU;
	int16_t x80 = -17;
	static int32_t t19 = 119;

    t19 = (((x77==x78)|x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 317011U;
	int32_t x82 = INT32_MIN;
	static volatile int64_t x83 = INT64_MAX;
	uint16_t x84 = 3492U;
	volatile int32_t t20 = -165897700;

    t20 = (((x81==x82)|x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x86 = 14704;
	uint32_t x88 = 340U;
	int32_t t21 = -379205;

    t21 = (((x85==x86)|x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 0U;
	int64_t x90 = INT64_MIN;
	static uint8_t x92 = 23U;
	static int32_t t22 = 66633747;

    t22 = (((x89==x90)|x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 1LL;
	static int16_t x94 = 1716;
	volatile int8_t x96 = 1;
	int32_t t23 = 111;

    t23 = (((x93==x94)|x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 3182U;
	int32_t x98 = -139750;
	int64_t x100 = 108827LL;
	volatile int32_t t24 = 3177457;

    t24 = (((x97==x98)|x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 5U;
	uint8_t x103 = 38U;
	uint8_t x104 = UINT8_MAX;

    t25 = (((x101==x102)|x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	static int64_t x106 = -1LL;
	int16_t x107 = INT16_MAX;
	uint16_t x108 = 40U;
	static int32_t t26 = 22115320;

    t26 = (((x105==x106)|x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 14354U;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	static int32_t t27 = 99506;

    t27 = (((x109==x110)|x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -1;
	volatile uint16_t x114 = 28834U;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;

    t28 = (((x113==x114)|x115)!=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = 1168377;
	uint64_t x118 = 9832132LLU;
	static volatile int32_t t29 = -17;

    t29 = (((x117==x118)|x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int16_t x122 = 2129;
	int64_t x123 = -1LL;
	int64_t x124 = 354813118776435LL;
	int32_t t30 = -2;

    t30 = (((x121==x122)|x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = 63633093134168LL;
	int32_t x127 = 456570739;
	uint32_t x128 = 451492U;
	static volatile int32_t t31 = 1068700597;

    t31 = (((x125==x126)|x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 22;
	uint16_t x130 = 4U;
	uint64_t x131 = UINT64_MAX;
	static volatile int8_t x132 = -7;

    t32 = (((x129==x130)|x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 55223U;
	int16_t x134 = INT16_MAX;
	static int8_t x135 = -1;
	uint16_t x136 = 1739U;

    t33 = (((x133==x134)|x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 6U;
	volatile int8_t x138 = INT8_MIN;
	int32_t x139 = 599956686;
	uint64_t x140 = 6420641866LLU;
	int32_t t34 = 6;

    t34 = (((x137==x138)|x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 7702LL;
	uint16_t x142 = UINT16_MAX;
	int32_t x143 = -717;
	uint64_t x144 = UINT64_MAX;
	int32_t t35 = 9;

    t35 = (((x141==x142)|x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x146 = INT64_MIN;
	int64_t x147 = -22154481636LL;
	int16_t x148 = INT16_MIN;

    t36 = (((x145==x146)|x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	volatile int64_t x150 = INT64_MAX;
	uint8_t x152 = 14U;
	volatile int32_t t37 = -80215;

    t37 = (((x149==x150)|x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -64;
	int16_t x154 = INT16_MIN;
	int64_t x155 = 17054961748LL;
	static int64_t x156 = INT64_MIN;
	int32_t t38 = 831779580;

    t38 = (((x153==x154)|x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = -2;
	static uint32_t x158 = 7162180U;
	static volatile uint8_t x159 = 7U;

    t39 = (((x157==x158)|x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	int32_t x163 = -1;
	static int32_t t40 = 266;

    t40 = (((x161==x162)|x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -1;
	int8_t x166 = 0;
	int8_t x167 = INT8_MIN;
	volatile int64_t x168 = INT64_MIN;
	static volatile int32_t t41 = -714407;

    t41 = (((x165==x166)|x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 62U;
	int64_t x171 = INT64_MIN;
	int16_t x172 = 0;
	int32_t t42 = -8403896;

    t42 = (((x169==x170)|x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = -1;
	int32_t x176 = INT32_MAX;

    t43 = (((x173==x174)|x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -10;
	int64_t x178 = -1002445369007710LL;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t44 = -937120;

    t44 = (((x177==x178)|x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x181 = INT16_MIN;
	static volatile int8_t x182 = -1;
	int8_t x183 = INT8_MAX;
	volatile int32_t t45 = 1;

    t45 = (((x181==x182)|x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = UINT32_MAX;
	static volatile uint32_t x187 = 16U;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -190955219;

    t46 = (((x185==x186)|x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x190 = 391;
	uint16_t x191 = 11U;
	volatile uint64_t x192 = 54LLU;
	volatile int32_t t47 = -9920;

    t47 = (((x189==x190)|x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	int8_t x195 = 0;
	int16_t x196 = 3288;

    t48 = (((x193==x194)|x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 14;

    t49 = (((x197==x198)|x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = 24;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 48;

    t50 = (((x201==x202)|x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x206 = INT32_MIN;
	int32_t x207 = 907440502;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -15371227;

    t51 = (((x205==x206)|x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	uint32_t x210 = 7U;
	volatile int32_t x211 = 12555;
	volatile uint32_t x212 = 14339293U;

    t52 = (((x209==x210)|x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	static volatile int32_t x214 = INT32_MAX;
	int16_t x215 = 0;

    t53 = (((x213==x214)|x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 4030687U;
	volatile int32_t x219 = INT32_MIN;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = 0;

    t54 = (((x217==x218)|x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x221 = INT64_MIN;
	int8_t x222 = -1;
	static int16_t x224 = INT16_MIN;
	static int32_t t55 = 162;

    t55 = (((x221==x222)|x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 4508;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	volatile uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = -454608848;

    t56 = (((x225==x226)|x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 0U;
	int64_t x230 = INT64_MAX;
	int16_t x231 = 0;
	static volatile uint64_t x232 = 7001296LLU;
	volatile int32_t t57 = 1;

    t57 = (((x229==x230)|x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 6;
	int32_t x235 = -54;
	uint64_t x236 = 99718LLU;
	static volatile int32_t t58 = 46009;

    t58 = (((x233==x234)|x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x238 = INT32_MAX;
	int16_t x239 = -1;
	volatile int32_t t59 = -30829113;

    t59 = (((x237==x238)|x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 725;
	static int16_t x242 = INT16_MIN;
	int16_t x243 = 27;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = 879;

    t60 = (((x241==x242)|x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -93188055201050LL;
	int8_t x246 = -1;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	int32_t t61 = -16;

    t61 = (((x245==x246)|x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	static int8_t x250 = -28;
	int64_t x251 = INT64_MAX;
	static uint16_t x252 = 67U;
	volatile int32_t t62 = 5802114;

    t62 = (((x249==x250)|x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x253 = -1;
	static uint32_t x254 = 1472930052U;
	int8_t x255 = -1;
	uint32_t x256 = 1104U;
	int32_t t63 = 3839;

    t63 = (((x253==x254)|x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x258 = -3605;
	int64_t x259 = INT64_MIN;
	int32_t t64 = 2811728;

    t64 = (((x257==x258)|x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -20;
	uint64_t x262 = 2905928451389046677LLU;

    t65 = (((x261==x262)|x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = INT32_MIN;
	uint16_t x266 = 0U;
	int16_t x268 = 976;
	int32_t t66 = -872297;

    t66 = (((x265==x266)|x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -176483370854265LL;
	uint64_t x271 = 787906043519661LLU;
	volatile int16_t x272 = -5;
	static volatile int32_t t67 = -454713;

    t67 = (((x269==x270)|x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MIN;
	uint16_t x274 = 9U;
	int8_t x276 = -1;
	static volatile int32_t t68 = -3648096;

    t68 = (((x273==x274)|x275)!=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -1;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -155475300;

    t69 = (((x277==x278)|x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	int32_t x282 = 95352;
	int16_t x283 = -1;
	static uint32_t x284 = 5120281U;
	volatile int32_t t70 = -7214;

    t70 = (((x281==x282)|x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	volatile uint16_t x286 = 235U;
	static int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;

    t71 = (((x285==x286)|x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 91419390U;
	int8_t x290 = 32;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = -672398560833624806LL;
	int32_t t72 = 839662;

    t72 = (((x289==x290)|x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = 5;

    t73 = (((x293==x294)|x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	volatile int32_t x298 = -246913;
	int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MIN;

    t74 = (((x297==x298)|x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t75 = -80438863;

    t75 = (((x301==x302)|x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	volatile uint32_t x306 = 0U;
	int8_t x307 = INT8_MAX;
	int32_t t76 = -3979762;

    t76 = (((x305==x306)|x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = 0LL;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = -1430;

    t77 = (((x309==x310)|x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = 2;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = -465716;

    t78 = (((x313==x314)|x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x320 = -30;
	volatile int32_t t79 = 6021;

    t79 = (((x317==x318)|x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MAX;
	volatile int64_t x322 = -1LL;
	static int32_t t80 = -854313973;

    t80 = (((x321==x322)|x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = -1;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = UINT32_MAX;
	int32_t t81 = 3346;

    t81 = (((x325==x326)|x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 102U;
	uint32_t x330 = UINT32_MAX;
	uint32_t x331 = 1442914533U;
	volatile int32_t x332 = -1;
	volatile int32_t t82 = -15199820;

    t82 = (((x329==x330)|x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 461565U;
	static volatile uint16_t x334 = 139U;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -111425292;

    t83 = (((x333==x334)|x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	int64_t x338 = INT64_MIN;
	int8_t x339 = 33;
	int64_t x340 = 1313LL;
	int32_t t84 = -8;

    t84 = (((x337==x338)|x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	int32_t x343 = -29976;
	uint32_t x344 = 15473U;
	int32_t t85 = -15385293;

    t85 = (((x341==x342)|x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = UINT8_MAX;
	static int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MIN;
	int8_t x348 = 5;
	static int32_t t86 = -56;

    t86 = (((x345==x346)|x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = 54001288036LL;
	int32_t t87 = 83338;

    t87 = (((x349==x350)|x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MAX;
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = -52;
	int64_t x356 = 116596706043LL;
	int32_t t88 = 0;

    t88 = (((x353==x354)|x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 0;
	int32_t x358 = INT32_MIN;
	static int16_t x359 = 2;
	int32_t t89 = 0;

    t89 = (((x357==x358)|x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	int64_t x364 = 264226479LL;
	int32_t t90 = 0;

    t90 = (((x361==x362)|x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 130840243U;
	uint32_t x367 = 478180U;
	static volatile int16_t x368 = INT16_MAX;
	int32_t t91 = 453386261;

    t91 = (((x365==x366)|x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int64_t x370 = -1LL;
	int64_t x371 = INT64_MAX;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 402253738;

    t92 = (((x369==x370)|x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 32U;
	static int32_t x374 = -6030883;
	int64_t x375 = INT64_MIN;
	int32_t t93 = 6614;

    t93 = (((x373==x374)|x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 2996U;
	uint8_t x378 = 0U;
	uint64_t x379 = UINT64_MAX;
	volatile uint16_t x380 = 464U;
	int32_t t94 = 75068999;

    t94 = (((x377==x378)|x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = -1;
	static int16_t x382 = 7634;
	int64_t x383 = -1LL;
	volatile int32_t x384 = -1;
	int32_t t95 = 50;

    t95 = (((x381==x382)|x383)!=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 346256U;
	uint16_t x386 = 34U;
	uint64_t x387 = 0LLU;
	volatile uint16_t x388 = 4U;
	volatile int32_t t96 = -10380360;

    t96 = (((x385==x386)|x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = -1;
	uint64_t x392 = 5213923LLU;
	int32_t t97 = -721;

    t97 = (((x389==x390)|x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 701770608;
	static int16_t x394 = 910;
	volatile int32_t x395 = INT32_MIN;
	int32_t x396 = 450;
	volatile int32_t t98 = -31740240;

    t98 = (((x393==x394)|x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = 3766668LLU;
	int32_t t99 = 11590412;

    t99 = (((x397==x398)|x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint8_t x403 = 35U;
	volatile int16_t x404 = 1;
	int32_t t100 = -1189;

    t100 = (((x401==x402)|x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x405 = 17853LLU;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MAX;
	int16_t x408 = 1098;
	static volatile int32_t t101 = -647075;

    t101 = (((x405==x406)|x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	uint64_t x410 = 262605756854616LLU;
	static int32_t x411 = -1;
	uint16_t x412 = 1618U;
	static int32_t t102 = 0;

    t102 = (((x409==x410)|x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x413 = 1U;
	int32_t x414 = INT32_MIN;
	int64_t x415 = 6446LL;
	static int16_t x416 = INT16_MIN;
	int32_t t103 = 246;

    t103 = (((x413==x414)|x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int8_t x418 = INT8_MAX;
	int32_t x419 = -1;
	volatile int32_t t104 = -2266;

    t104 = (((x417==x418)|x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -1;
	static volatile uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MIN;
	volatile int64_t x424 = 27975357485LL;
	int32_t t105 = -191;

    t105 = (((x421==x422)|x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 2U;
	int32_t x426 = -1;
	int32_t x428 = -181159812;
	int32_t t106 = 16276030;

    t106 = (((x425==x426)|x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 2046U;
	uint16_t x432 = UINT16_MAX;
	int32_t t107 = -10778767;

    t107 = (((x429==x430)|x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x434 = 13U;
	uint32_t x435 = 1346197U;
	static int32_t t108 = 2176100;

    t108 = (((x433==x434)|x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = 890358910;
	int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t109 = -130;

    t109 = (((x437==x438)|x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	static volatile int64_t x443 = 11LL;
	int64_t x444 = INT64_MAX;

    t110 = (((x441==x442)|x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 116969;
	int16_t x446 = INT16_MAX;
	int64_t x448 = -1746009994797843309LL;
	int32_t t111 = 614770;

    t111 = (((x445==x446)|x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	static uint32_t x450 = 436U;
	int16_t x451 = INT16_MIN;
	int32_t t112 = 6813;

    t112 = (((x449==x450)|x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = -1;
	int8_t x454 = INT8_MIN;
	static volatile int8_t x455 = -1;
	static volatile int32_t t113 = -2616750;

    t113 = (((x453==x454)|x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	int8_t x458 = 0;
	volatile int16_t x459 = INT16_MAX;
	static volatile int16_t x460 = -1;
	volatile int32_t t114 = 58;

    t114 = (((x457==x458)|x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = INT8_MIN;
	static int8_t x463 = -1;
	int32_t t115 = 12340;

    t115 = (((x461==x462)|x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 198441LLU;
	uint64_t x467 = 78478476737534LLU;
	uint64_t x468 = 5847LLU;

    t116 = (((x465==x466)|x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	volatile int32_t t117 = 6;

    t117 = (((x469==x470)|x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MIN;
	volatile uint8_t x474 = 105U;
	int8_t x475 = INT8_MIN;
	int64_t x476 = -1LL;
	volatile int32_t t118 = -20;

    t118 = (((x473==x474)|x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x478 = INT16_MAX;
	static uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MIN;

    t119 = (((x477==x478)|x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 35493291143732LL;
	uint32_t x482 = 1413188284U;
	static uint8_t x483 = 0U;
	int64_t x484 = INT64_MIN;
	static volatile int32_t t120 = 265806;

    t120 = (((x481==x482)|x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = 0;
	static int32_t x487 = -489;
	volatile int64_t x488 = INT64_MIN;
	int32_t t121 = 26280;

    t121 = (((x485==x486)|x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = INT32_MAX;
	int8_t x492 = -1;
	int32_t t122 = -1257;

    t122 = (((x489==x490)|x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	volatile uint8_t x494 = 0U;
	static volatile int16_t x495 = -13;
	int8_t x496 = INT8_MIN;
	static int32_t t123 = 1;

    t123 = (((x493==x494)|x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x497 = 7863U;
	volatile int8_t x498 = INT8_MAX;
	int16_t x499 = -1;
	uint8_t x500 = UINT8_MAX;

    t124 = (((x497==x498)|x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x502 = INT32_MIN;
	uint8_t x503 = 13U;
	static int32_t x504 = INT32_MIN;
	int32_t t125 = 144138354;

    t125 = (((x501==x502)|x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -75290;
	uint32_t x507 = UINT32_MAX;
	int16_t x508 = 6823;
	int32_t t126 = -739106;

    t126 = (((x505==x506)|x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -1LL;
	uint64_t x510 = 3306522LLU;
	int8_t x511 = -1;
	int64_t x512 = INT64_MAX;
	volatile int32_t t127 = 675565;

    t127 = (((x509==x510)|x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x514 = 41U;
	uint32_t x515 = UINT32_MAX;
	uint16_t x516 = UINT16_MAX;
	static volatile int32_t t128 = 11;

    t128 = (((x513==x514)|x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = 363;
	volatile uint8_t x518 = 2U;
	int8_t x519 = -1;
	int32_t x520 = -2692;
	volatile int32_t t129 = -248;

    t129 = (((x517==x518)|x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x522 = 10U;
	int8_t x524 = -1;

    t130 = (((x521==x522)|x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x526 = -1;
	volatile int32_t x527 = INT32_MIN;
	volatile uint8_t x528 = 9U;
	int32_t t131 = 713237;

    t131 = (((x525==x526)|x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	int64_t x531 = 1430LL;
	int8_t x532 = INT8_MAX;

    t132 = (((x529==x530)|x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	volatile int32_t t133 = -91;

    t133 = (((x533==x534)|x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = INT8_MIN;
	int64_t x539 = -3808249558099867LL;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t134 = -229;

    t134 = (((x537==x538)|x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = INT64_MIN;
	int8_t x543 = INT8_MIN;
	static volatile int32_t t135 = 6309;

    t135 = (((x541==x542)|x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	static volatile int8_t x547 = -1;
	volatile int64_t x548 = -1017766606330417LL;
	volatile int32_t t136 = -287495;

    t136 = (((x545==x546)|x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x549 = UINT64_MAX;
	int16_t x550 = -108;
	int8_t x551 = -1;
	int64_t x552 = INT64_MIN;
	int32_t t137 = -110457;

    t137 = (((x549==x550)|x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	int64_t x554 = -1LL;
	static int32_t x555 = -176;
	int32_t t138 = 52426573;

    t138 = (((x553==x554)|x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 173439062546708LL;
	int16_t x558 = -1;
	volatile uint32_t x559 = 210U;
	uint8_t x560 = 115U;
	int32_t t139 = 362393893;

    t139 = (((x557==x558)|x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 29520943351224610LLU;
	uint16_t x562 = 9452U;
	uint16_t x563 = 2U;
	static uint64_t x564 = UINT64_MAX;
	int32_t t140 = -15322;

    t140 = (((x561==x562)|x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -19659LL;
	static uint64_t x566 = 534618958416347LLU;
	uint64_t x567 = 1695675002005390099LLU;
	uint32_t x568 = 3030U;
	volatile int32_t t141 = -1;

    t141 = (((x565==x566)|x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = -1;
	uint16_t x571 = 1108U;
	int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 0;

    t142 = (((x569==x570)|x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = INT16_MIN;
	int8_t x574 = -2;
	int8_t x575 = -1;
	int32_t x576 = -1;
	int32_t t143 = 461;

    t143 = (((x573==x574)|x575)!=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	int16_t x578 = 38;
	int32_t x579 = -5;
	int64_t x580 = INT64_MIN;

    t144 = (((x577==x578)|x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile int64_t x582 = -1LL;
	static int32_t t145 = -11;

    t145 = (((x581==x582)|x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 10LLU;
	int64_t x586 = -1645204LL;
	int8_t x587 = INT8_MIN;
	volatile int32_t x588 = -51481805;
	volatile int32_t t146 = 222;

    t146 = (((x585==x586)|x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 121998391U;
	uint64_t x590 = UINT64_MAX;
	volatile uint8_t x591 = 7U;
	int32_t t147 = -18802;

    t147 = (((x589==x590)|x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	static volatile uint32_t x596 = 1U;
	volatile int32_t t148 = 2;

    t148 = (((x593==x594)|x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = INT32_MIN;
	volatile int32_t t149 = -3765283;

    t149 = (((x597==x598)|x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x602 = INT32_MIN;
	volatile uint8_t x603 = UINT8_MAX;
	int16_t x604 = INT16_MAX;
	static int32_t t150 = 138515;

    t150 = (((x601==x602)|x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -294821486252LL;
	int64_t x606 = INT64_MIN;
	int64_t x608 = 2410034979LL;

    t151 = (((x605==x606)|x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = INT8_MIN;
	int8_t x610 = 1;
	int8_t x611 = -1;
	volatile uint32_t x612 = UINT32_MAX;
	volatile int32_t t152 = -1238;

    t152 = (((x609==x610)|x611)!=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 576942239;
	uint32_t x614 = 780726567U;
	int8_t x615 = 1;
	static uint64_t x616 = 1221343783843349705LLU;
	volatile int32_t t153 = 0;

    t153 = (((x613==x614)|x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	uint8_t x618 = 2U;
	uint32_t x619 = 3656136U;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t154 = -1525;

    t154 = (((x617==x618)|x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = INT32_MAX;
	volatile int32_t x623 = INT32_MAX;

    t155 = (((x621==x622)|x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = -1;
	int64_t x627 = -288422574679829LL;
	volatile int32_t t156 = 1700969;

    t156 = (((x625==x626)|x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 845U;
	uint8_t x630 = 47U;
	static int64_t x632 = 10LL;
	volatile int32_t t157 = -12025;

    t157 = (((x629==x630)|x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x634 = -1LL;
	volatile int64_t x635 = INT64_MIN;
	volatile int64_t x636 = 220LL;
	volatile int32_t t158 = 724;

    t158 = (((x633==x634)|x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = -248;
	int64_t x638 = 698141767977191572LL;
	uint64_t x639 = 46LLU;
	uint16_t x640 = 112U;

    t159 = (((x637==x638)|x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	volatile int16_t x642 = INT16_MIN;
	int64_t x643 = -120706498658219866LL;

    t160 = (((x641==x642)|x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	uint32_t x648 = 31912U;
	int32_t t161 = -1036717;

    t161 = (((x645==x646)|x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = UINT64_MAX;
	int32_t x651 = -1065;
	static volatile int8_t x652 = INT8_MIN;
	int32_t t162 = 731516813;

    t162 = (((x649==x650)|x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x654 = 980U;
	int8_t x656 = 1;
	static int32_t t163 = 0;

    t163 = (((x653==x654)|x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 50U;
	volatile int16_t x658 = -1;
	int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MAX;

    t164 = (((x657==x658)|x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	static uint16_t x662 = 0U;
	int32_t x663 = 1;
	static uint8_t x664 = 22U;

    t165 = (((x661==x662)|x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = 1U;
	static int64_t x667 = INT64_MIN;
	volatile int32_t t166 = -3483;

    t166 = (((x665==x666)|x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x669 = 14542654474913140LL;
	uint32_t x670 = UINT32_MAX;
	uint8_t x672 = UINT8_MAX;

    t167 = (((x669==x670)|x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -6;
	static uint16_t x674 = 15U;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 15140U;

    t168 = (((x673==x674)|x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x678 = 4829937U;
	static int16_t x679 = -1;
	uint8_t x680 = 94U;
	volatile int32_t t169 = -89650408;

    t169 = (((x677==x678)|x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 6U;
	int32_t x682 = -1;
	int64_t x683 = INT64_MIN;
	int32_t t170 = 9186680;

    t170 = (((x681==x682)|x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	static volatile int64_t x686 = INT64_MAX;
	volatile int32_t t171 = 55966;

    t171 = (((x685==x686)|x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 13893;
	int8_t x691 = 11;
	volatile int32_t x692 = -1;
	volatile int32_t t172 = 1;

    t172 = (((x689==x690)|x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = INT16_MAX;
	int16_t x694 = -3297;
	volatile uint8_t x695 = UINT8_MAX;
	volatile int64_t x696 = INT64_MAX;
	int32_t t173 = -650858583;

    t173 = (((x693==x694)|x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int64_t x699 = INT64_MIN;
	uint32_t x700 = UINT32_MAX;
	int32_t t174 = -13908340;

    t174 = (((x697==x698)|x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -1LL;
	uint16_t x702 = 29U;
	int16_t x703 = INT16_MAX;
	volatile uint32_t x704 = UINT32_MAX;
	int32_t t175 = -1185;

    t175 = (((x701==x702)|x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	uint16_t x706 = 18U;
	volatile uint8_t x707 = 26U;
	volatile uint32_t x708 = UINT32_MAX;
	int32_t t176 = 1025712128;

    t176 = (((x705==x706)|x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MAX;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = 58296;

    t177 = (((x709==x710)|x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 477;
	volatile uint16_t x714 = 0U;
	int8_t x715 = 4;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = -44260467;

    t178 = (((x713==x714)|x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = -1LL;
	int16_t x719 = INT16_MIN;
	volatile int8_t x720 = -8;
	int32_t t179 = 584857749;

    t179 = (((x717==x718)|x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x722 = -1;
	int32_t x723 = -1;
	int8_t x724 = -1;
	static volatile int32_t t180 = 668892;

    t180 = (((x721==x722)|x723)!=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 53U;
	static uint32_t x726 = UINT32_MAX;
	int8_t x727 = INT8_MIN;
	int64_t x728 = 141105592652LL;

    t181 = (((x725==x726)|x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = 166720304LLU;
	static int32_t x730 = INT32_MIN;
	int8_t x731 = -1;
	static int8_t x732 = INT8_MIN;
	static volatile int32_t t182 = 30;

    t182 = (((x729==x730)|x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x736 = -1;
	int32_t t183 = -8305600;

    t183 = (((x733==x734)|x735)!=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = INT64_MAX;
	uint8_t x739 = 1U;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t184 = -8;

    t184 = (((x737==x738)|x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x741 = UINT16_MAX;
	uint8_t x742 = 7U;
	volatile int32_t x744 = -1;
	int32_t t185 = -529995763;

    t185 = (((x741==x742)|x743)!=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x746 = 7833274221LLU;
	volatile int16_t x748 = INT16_MAX;
	int32_t t186 = -28;

    t186 = (((x745==x746)|x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = INT8_MIN;
	volatile int8_t x750 = -1;
	static uint64_t x751 = 1899077353LLU;
	int16_t x752 = 0;
	int32_t t187 = -14909159;

    t187 = (((x749==x750)|x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	uint64_t x754 = 1945747LLU;
	uint64_t x755 = UINT64_MAX;
	int32_t t188 = -10563;

    t188 = (((x753==x754)|x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -1;
	uint16_t x759 = UINT16_MAX;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = 131;

    t189 = (((x757==x758)|x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 11711614035040LL;
	int8_t x762 = INT8_MAX;
	int64_t x763 = 246062862LL;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = 28118;

    t190 = (((x761==x762)|x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	uint32_t x766 = UINT32_MAX;
	int8_t x767 = INT8_MIN;
	static uint8_t x768 = 0U;
	volatile int32_t t191 = 1;

    t191 = (((x765==x766)|x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = -1;
	int64_t x770 = INT64_MIN;
	volatile int32_t x771 = INT32_MAX;
	volatile uint16_t x772 = UINT16_MAX;
	static int32_t t192 = -150364;

    t192 = (((x769==x770)|x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	uint8_t x774 = UINT8_MAX;
	volatile int32_t x775 = -1;
	int64_t x776 = INT64_MIN;
	int32_t t193 = 1;

    t193 = (((x773==x774)|x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	int32_t x778 = INT32_MIN;
	int32_t x779 = -1;
	int64_t x780 = INT64_MAX;
	volatile int32_t t194 = 85602;

    t194 = (((x777==x778)|x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	uint8_t x782 = UINT8_MAX;
	uint8_t x783 = 12U;
	int32_t x784 = INT32_MAX;
	int32_t t195 = 524753;

    t195 = (((x781==x782)|x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x785 = 512LLU;
	static int8_t x786 = 26;
	static volatile int16_t x788 = -1;
	volatile int32_t t196 = 111943;

    t196 = (((x785==x786)|x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = UINT32_MAX;
	int64_t x790 = 988053928721LL;
	static int32_t x791 = INT32_MIN;
	int32_t x792 = -1;
	volatile int32_t t197 = -1;

    t197 = (((x789==x790)|x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x794 = -245440313LL;
	uint8_t x795 = 4U;
	int32_t t198 = 1061850;

    t198 = (((x793==x794)|x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	int64_t x798 = INT64_MIN;
	uint8_t x799 = 54U;
	uint64_t x800 = UINT64_MAX;
	int32_t t199 = 705122;

    t199 = (((x797==x798)|x799)!=x800);

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

