
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

static int64_t x4 = INT64_MIN;
int16_t x24 = INT16_MAX;
uint8_t x27 = 52U;
int16_t x40 = INT16_MIN;
int8_t x45 = INT8_MAX;
static uint16_t x47 = 1983U;
static int32_t t11 = 274016934;
uint32_t x56 = 6405710U;
uint32_t t12 = 267848U;
int16_t x83 = INT16_MIN;
uint32_t x86 = UINT32_MAX;
static uint8_t x91 = 21U;
int32_t x93 = INT32_MIN;
int32_t x101 = INT32_MAX;
static uint64_t x107 = 7879111681LLU;
int8_t x112 = INT8_MAX;
static volatile uint8_t x115 = UINT8_MAX;
int64_t x119 = INT64_MIN;
int32_t x120 = INT32_MIN;
volatile int32_t t28 = INT32_MIN;
int8_t x131 = INT8_MIN;
int8_t x138 = -1;
static volatile uint64_t x158 = 12269878504LLU;
volatile int64_t x163 = -4004328708554LL;
uint8_t x166 = UINT8_MAX;
int8_t x173 = INT8_MIN;
int64_t x186 = INT64_MIN;
int16_t x187 = INT16_MIN;
int64_t t42 = -109901802392712LL;
int64_t t43 = 3262905920523364090LL;
volatile int32_t t44 = 1320102;
static int16_t x199 = INT16_MIN;
uint32_t x200 = 180U;
int8_t x204 = -43;
volatile int64_t x205 = -374LL;
static volatile int64_t x212 = INT64_MIN;
static int64_t t48 = 68089787701LL;
int8_t x220 = INT8_MAX;
volatile int32_t t49 = -274;
static uint8_t x230 = UINT8_MAX;
int64_t x232 = -1LL;
int32_t x233 = INT32_MAX;
uint32_t x235 = UINT32_MAX;
static uint16_t x245 = 6388U;
static volatile int32_t t55 = 934;
int32_t x256 = -1;
uint16_t x259 = 83U;
static int16_t x260 = INT16_MIN;
volatile int32_t t58 = -580094824;
int8_t x261 = INT8_MIN;
int16_t x264 = INT16_MIN;
static int16_t x267 = 1;
int32_t t60 = -26681426;
static uint8_t x282 = 1U;
uint8_t x286 = UINT8_MAX;
static int16_t x290 = 0;
uint64_t x307 = UINT64_MAX;
volatile int16_t x311 = 146;
volatile int64_t x312 = -48715439313565324LL;
volatile int32_t t75 = 1;
static uint8_t x338 = 58U;
volatile int32_t t76 = INT32_MIN;
int32_t x348 = INT32_MAX;
volatile int32_t t78 = INT32_MAX;
volatile uint64_t x349 = 16929882855215777LLU;
volatile int64_t x350 = -40289655870888LL;
int16_t x356 = INT16_MAX;
static int8_t x361 = INT8_MIN;
volatile int32_t t81 = 716642883;
static int8_t x369 = INT8_MAX;
int32_t x371 = INT32_MAX;
int32_t x374 = 3147000;
volatile uint64_t x375 = UINT64_MAX;
uint8_t x383 = UINT8_MAX;
int32_t x384 = -31161;
volatile int32_t t86 = 2836774;
int64_t x392 = -1LL;
int16_t x398 = -1;
volatile uint64_t x401 = UINT64_MAX;
int64_t x406 = 1526811324687LL;
int32_t t90 = -927883850;
volatile int32_t t92 = -225;
uint16_t x419 = 4U;
volatile uint16_t x420 = UINT16_MAX;
static uint8_t x424 = 61U;
volatile uint16_t x432 = UINT16_MAX;
uint16_t x434 = 85U;
int16_t x436 = -1;
int32_t t98 = -487884;
static int8_t x441 = INT8_MIN;
volatile int8_t x445 = -1;
static int16_t x447 = INT16_MIN;
volatile uint64_t x457 = UINT64_MAX;
uint64_t x461 = 39304LLU;
static uint8_t x462 = UINT8_MAX;
static int32_t t104 = 24283878;
static int32_t x476 = -1;
volatile int32_t t105 = 4299;
int16_t x486 = INT16_MIN;
int32_t x488 = INT32_MIN;
volatile int16_t x494 = 992;
uint32_t x517 = 41266U;
volatile int64_t x519 = 126988233925853584LL;
uint32_t x523 = UINT32_MAX;
volatile int32_t t113 = 3409607;
int32_t x534 = INT32_MAX;
uint32_t x545 = 24U;
uint64_t x546 = UINT64_MAX;
int16_t x551 = INT16_MIN;
int64_t x552 = -1LL;
int32_t x555 = -2620;
static uint16_t x564 = UINT16_MAX;
int32_t x566 = INT32_MIN;
volatile int64_t x567 = INT64_MIN;
static int64_t x569 = INT64_MIN;
static int16_t x577 = -45;
int64_t x578 = -1LL;
volatile int64_t x584 = 1736422291316LL;
int32_t x612 = INT32_MAX;
static uint8_t x613 = UINT8_MAX;
uint64_t x628 = 17702256LLU;
int64_t x629 = 2098866690432991629LL;
int8_t x634 = -1;
int64_t x639 = -1LL;
volatile int32_t t139 = 113062444;
int32_t x643 = INT32_MIN;
int16_t x649 = INT16_MIN;
volatile int32_t t142 = -610683768;
volatile uint8_t x657 = 60U;
static volatile uint32_t x658 = UINT32_MAX;
int8_t x660 = 28;
int8_t x663 = INT8_MIN;
uint16_t x664 = 2005U;
int8_t x674 = INT8_MIN;
int16_t x682 = -1;
volatile int32_t t150 = 171;
static volatile int16_t x691 = 2354;
int32_t x693 = -1;
uint64_t x695 = 139911163175509766LLU;
int16_t x702 = -1;
int64_t x705 = -1LL;
int32_t t155 = -29;
static uint32_t x713 = 1003U;
static uint8_t x717 = UINT8_MAX;
int8_t x719 = INT8_MIN;
static int8_t x724 = INT8_MAX;
int8_t x728 = INT8_MAX;
volatile int32_t t159 = -185139;
static int8_t x732 = INT8_MIN;
int16_t x736 = INT16_MIN;
volatile int32_t t162 = 538495409;
int32_t x747 = -885870;
uint16_t x748 = 1U;
int64_t x750 = -1LL;
uint8_t x752 = 1U;
int8_t x755 = INT8_MAX;
uint8_t x765 = 3U;
uint8_t x803 = 5U;
int8_t x805 = INT8_MAX;
static int8_t x809 = INT8_MAX;
static int8_t x810 = -14;
uint16_t x816 = 13U;
static volatile int32_t t179 = -872;
int16_t x827 = INT16_MAX;
volatile uint32_t t181 = 469396U;
static int64_t x830 = -529492240713993LL;
volatile int8_t x832 = -1;
volatile int32_t x836 = -4763868;
int64_t x843 = -465LL;
volatile uint64_t x844 = UINT64_MAX;
static uint8_t x845 = 0U;
static volatile int8_t x848 = -1;
int8_t x862 = INT8_MIN;
uint32_t x864 = UINT32_MAX;
int32_t t194 = 3356306;
volatile int64_t x881 = INT64_MIN;
static int32_t x882 = -1;
int16_t x888 = -1;
int32_t x894 = -1;
static int32_t x899 = INT32_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = 41U;
	static int32_t x3 = INT32_MIN;
	volatile int64_t t0 = 31021LL;

    t0 = (((x1-x2)>x3)|x4);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 0U;
	int16_t x6 = -1199;
	volatile uint16_t x7 = 797U;
	uint16_t x8 = 13U;
	int32_t t1 = 118877283;

    t1 = (((x5-x6)>x7)|x8);

    if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	volatile int8_t x10 = -1;
	volatile int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 639225;

    t2 = (((x9-x10)>x11)|x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int8_t x14 = 1;
	volatile int16_t x15 = -1;
	static uint64_t x16 = 1990518326491190LLU;
	volatile uint64_t t3 = 48LLU;

    t3 = (((x13-x14)>x15)|x16);

    if (t3 != 1990518326491191LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1;
	volatile int32_t x18 = INT32_MAX;
	uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x17-x18)>x19)|x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 253;
	uint8_t x22 = UINT8_MAX;
	volatile int8_t x23 = -1;
	int32_t t5 = -1;

    t5 = (((x21-x22)>x23)|x24);

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	volatile uint64_t x26 = 86LLU;
	int8_t x28 = 1;
	int32_t t6 = 517289;

    t6 = (((x25-x26)>x27)|x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = -1;
	volatile int64_t x35 = INT64_MIN;
	static volatile uint8_t x36 = 0U;
	volatile int32_t t7 = -6029466;

    t7 = (((x33-x34)>x35)|x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x37 = 45;
	uint16_t x38 = 25010U;
	volatile uint8_t x39 = 0U;
	int32_t t8 = -8;

    t8 = (((x37-x38)>x39)|x40);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = -1LL;
	volatile uint64_t x43 = 3394668169LLU;
	int32_t x44 = -15630;
	volatile int32_t t9 = 62247;

    t9 = (((x41-x42)>x43)|x44);

    if (t9 != -15629) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x46 = UINT32_MAX;
	volatile int32_t x48 = -1;
	int32_t t10 = 1768;

    t10 = (((x45-x46)>x47)|x48);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -30;
	uint32_t x50 = 14U;
	uint64_t x51 = UINT64_MAX;
	static int8_t x52 = INT8_MAX;

    t11 = (((x49-x50)>x51)|x52);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = -5197;
	uint32_t x55 = 1834386723U;

    t12 = (((x53-x54)>x55)|x56);

    if (t12 != 6405710U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1LL;
	int32_t x58 = -32029891;
	uint64_t x59 = UINT64_MAX;
	volatile int64_t x60 = 0LL;
	volatile int64_t t13 = 1LL;

    t13 = (((x57-x58)>x59)|x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 8U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = 147;
	int32_t t14 = 68186;

    t14 = (((x61-x62)>x63)|x64);

    if (t14 != 147) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	int32_t x66 = -1;
	volatile int64_t x67 = 108531601560LL;
	int64_t x68 = INT64_MAX;
	volatile int64_t t15 = INT64_MAX;

    t15 = (((x65-x66)>x67)|x68);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MAX;
	uint8_t x70 = 2U;
	volatile uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MAX;
	volatile int64_t t16 = INT64_MAX;

    t16 = (((x69-x70)>x71)|x72);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = -31;
	volatile uint32_t x74 = 4060U;
	static uint8_t x75 = 115U;
	int16_t x76 = INT16_MAX;
	static int32_t t17 = 2206;

    t17 = (((x73-x74)>x75)|x76);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = 14850340;
	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = 134469859U;
	uint32_t t18 = 64517U;

    t18 = (((x77-x78)>x79)|x80);

    if (t18 != 134469859U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = -1;
	int32_t x82 = INT32_MAX;
	int64_t x84 = -158095LL;
	static int64_t t19 = -1525668545830014947LL;

    t19 = (((x81-x82)>x83)|x84);

    if (t19 != -158095LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 64236623U;
	uint64_t x87 = 267LLU;
	int64_t x88 = INT64_MIN;
	volatile int64_t t20 = 51592442465212LL;

    t20 = (((x85-x86)>x87)|x88);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -31931061LL;
	static int8_t x90 = INT8_MIN;
	uint8_t x92 = 1U;
	int32_t t21 = -805;

    t21 = (((x89-x90)>x91)|x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x94 = UINT32_MAX;
	static volatile int32_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = 813181312;

    t22 = (((x93-x94)>x95)|x96);

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -2204673;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t23 = INT32_MIN;

    t23 = (((x97-x98)>x99)|x100);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = 0U;
	int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	static int32_t t24 = 1;

    t24 = (((x101-x102)>x103)|x104);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = -368;
	volatile int64_t x106 = -1LL;
	static int16_t x108 = 0;
	volatile int32_t t25 = -782912;

    t25 = (((x105-x106)>x107)|x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 68U;
	int32_t t26 = 5408848;

    t26 = (((x109-x110)>x111)|x112);

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x113 = UINT16_MAX;
	uint8_t x114 = 23U;
	volatile uint32_t x116 = 33371455U;
	uint32_t t27 = 655316U;

    t27 = (((x113-x114)>x115)|x116);

    if (t27 != 33371455U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MAX;
	uint64_t x118 = UINT64_MAX;

    t28 = (((x117-x118)>x119)|x120);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -3;
	uint16_t x122 = 30U;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	static int32_t t29 = -451914;

    t29 = (((x121-x122)>x123)|x124);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = 1;
	uint64_t x130 = 1174709342160991LLU;
	int64_t x132 = 462467LL;
	volatile int64_t t30 = 3820LL;

    t30 = (((x129-x130)>x131)|x132);

    if (t30 != 462467LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 27U;
	static volatile int32_t t31 = -31598655;

    t31 = (((x137-x138)>x139)|x140);

    if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MIN;
	uint64_t x142 = 418834LLU;
	static uint16_t x143 = 1145U;
	uint16_t x144 = UINT16_MAX;
	int32_t t32 = -329;

    t32 = (((x141-x142)>x143)|x144);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x145 = INT8_MIN;
	static volatile uint16_t x146 = 27U;
	volatile int16_t x147 = INT16_MIN;
	volatile int64_t x148 = INT64_MIN;
	int64_t t33 = 5LL;

    t33 = (((x145-x146)>x147)|x148);

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = 380923996654870LL;
	volatile int8_t x150 = INT8_MIN;
	int64_t x151 = -248649LL;
	int16_t x152 = INT16_MAX;
	volatile int32_t t34 = -218413;

    t34 = (((x149-x150)>x151)|x152);

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x157 = 2266U;
	volatile int16_t x159 = INT16_MIN;
	uint16_t x160 = 1211U;
	static volatile int32_t t35 = 1593471;

    t35 = (((x157-x158)>x159)|x160);

    if (t35 != 1211) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = -1983LL;
	static int64_t x162 = -1LL;
	int16_t x164 = 0;
	volatile int32_t t36 = -24688643;

    t36 = (((x161-x162)>x163)|x164);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = 1;
	static volatile int32_t x167 = 25;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

    t37 = (((x165-x166)>x167)|x168);

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x169 = UINT16_MAX;
	static uint8_t x170 = 0U;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = INT64_MIN;
	int64_t t38 = 1820318545557804LL;

    t38 = (((x169-x170)>x171)|x172);

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x174 = 0U;
	volatile int64_t x175 = INT64_MIN;
	volatile uint16_t x176 = 0U;
	volatile int32_t t39 = 58944439;

    t39 = (((x173-x174)>x175)|x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = INT16_MAX;
	static int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	static uint8_t x180 = UINT8_MAX;
	int32_t t40 = 64;

    t40 = (((x177-x178)>x179)|x180);

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x181 = 22844LLU;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	uint64_t x184 = 2817575472LLU;
	volatile uint64_t t41 = 487551LLU;

    t41 = (((x181-x182)>x183)|x184);

    if (t41 != 2817575472LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = 12LLU;
	static int64_t x188 = -246LL;

    t42 = (((x185-x186)>x187)|x188);

    if (t42 != -246LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x189 = -1;
	uint16_t x190 = 208U;
	volatile int32_t x191 = INT32_MAX;
	static int64_t x192 = -1LL;

    t43 = (((x189-x190)>x191)|x192);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x193 = INT16_MIN;
	int64_t x194 = 565329459168LL;
	static int8_t x195 = -1;
	int8_t x196 = -1;

    t44 = (((x193-x194)>x195)|x196);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = 2191U;
	static int16_t x198 = 6204;
	uint32_t t45 = 1304837U;

    t45 = (((x197-x198)>x199)|x200);

    if (t45 != 181U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = -1;
	static int8_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t46 = -27304802;

    t46 = (((x201-x202)>x203)|x204);

    if (t46 != -43) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x206 = 0U;
	volatile uint16_t x207 = UINT16_MAX;
	int16_t x208 = 1;
	volatile int32_t t47 = 26;

    t47 = (((x205-x206)>x207)|x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MIN;

    t48 = (((x209-x210)>x211)|x212);

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = -1LL;
	int32_t x218 = -1;
	uint8_t x219 = UINT8_MAX;

    t49 = (((x217-x218)>x219)|x220);

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile int64_t x222 = INT64_MAX;
	static int32_t x223 = INT32_MIN;
	int8_t x224 = -6;
	volatile int32_t t50 = 292;

    t50 = (((x221-x222)>x223)|x224);

    if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = -86848460;
	int32_t x226 = -6535401;
	static int64_t x227 = -1LL;
	uint16_t x228 = 922U;
	static int32_t t51 = 18541;

    t51 = (((x225-x226)>x227)|x228);

    if (t51 != 922) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = -4;
	uint16_t x231 = UINT16_MAX;
	int64_t t52 = -1LL;

    t52 = (((x229-x230)>x231)|x232);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x234 = UINT8_MAX;
	int16_t x236 = -493;
	int32_t t53 = 980;

    t53 = (((x233-x234)>x235)|x236);

    if (t53 != -493) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x241 = INT32_MIN;
	volatile uint32_t x242 = 62U;
	volatile uint32_t x243 = UINT32_MAX;
	int64_t x244 = 1596LL;
	int64_t t54 = -66940403086596839LL;

    t54 = (((x241-x242)>x243)|x244);

    if (t54 != 1596LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x246 = UINT32_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int8_t x248 = INT8_MIN;

    t55 = (((x245-x246)>x247)|x248);

    if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x249 = 19U;
	int32_t x250 = -1;
	static uint32_t x251 = 76117597U;
	static int16_t x252 = INT16_MAX;
	static volatile int32_t t56 = 1480472;

    t56 = (((x249-x250)>x251)|x252);

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = 448U;
	static int16_t x254 = -1;
	int32_t x255 = -5645385;
	static int32_t t57 = -29750;

    t57 = (((x253-x254)>x255)|x256);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x257 = -1;
	static int64_t x258 = INT64_MIN;

    t58 = (((x257-x258)>x259)|x260);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x262 = INT16_MAX;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t t59 = 10316;

    t59 = (((x261-x262)>x263)|x264);

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	static int8_t x268 = -1;

    t60 = (((x265-x266)>x267)|x268);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x269 = 5LLU;
	volatile uint8_t x270 = UINT8_MAX;
	int8_t x271 = -1;
	int32_t x272 = 661637161;
	volatile int32_t t61 = 1035855;

    t61 = (((x269-x270)>x271)|x272);

    if (t61 != 661637161) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = INT32_MAX;
	volatile uint8_t x274 = 62U;
	int8_t x275 = -1;
	static uint32_t x276 = 200133946U;
	uint32_t t62 = 1U;

    t62 = (((x273-x274)>x275)|x276);

    if (t62 != 200133947U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = 262U;
	static uint32_t x278 = 225U;
	static int16_t x279 = 42;
	static int16_t x280 = -105;
	int32_t t63 = 59385;

    t63 = (((x277-x278)>x279)|x280);

    if (t63 != -105) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x281 = UINT16_MAX;
	int8_t x283 = -1;
	volatile int64_t x284 = -1LL;
	volatile int64_t t64 = -119771721004147LL;

    t64 = (((x281-x282)>x283)|x284);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = UINT8_MAX;
	int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	static volatile int64_t t65 = INT64_MAX;

    t65 = (((x285-x286)>x287)|x288);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x289 = INT8_MIN;
	volatile uint32_t x291 = 3U;
	int8_t x292 = -1;
	static volatile int32_t t66 = 1066195527;

    t66 = (((x289-x290)>x291)|x292);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	volatile int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t67 = 627160;

    t67 = (((x297-x298)>x299)|x300);

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x301 = 107U;
	int8_t x302 = INT8_MIN;
	static int8_t x303 = -1;
	volatile int64_t x304 = 119778748LL;
	static volatile int64_t t68 = -51074998532034LL;

    t68 = (((x301-x302)>x303)|x304);

    if (t68 != 119778749LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = INT8_MAX;
	volatile int64_t x306 = INT64_MAX;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t69 = -32;

    t69 = (((x305-x306)>x307)|x308);

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = -1;
	static volatile int8_t x310 = -7;
	int64_t t70 = -15126274563920635LL;

    t70 = (((x309-x310)>x311)|x312);

    if (t70 != -48715439313565324LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x313 = 2LLU;
	int16_t x314 = -1;
	int64_t x315 = 6701989698506272LL;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = (((x313-x314)>x315)|x316);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = -1;
	volatile int8_t x324 = INT8_MIN;
	static int32_t t72 = 327380;

    t72 = (((x321-x322)>x323)|x324);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x325 = -1;
	static uint64_t x326 = 4340148777483609075LLU;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	static int32_t t73 = -1005;

    t73 = (((x325-x326)>x327)|x328);

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x329 = INT8_MIN;
	static int32_t x330 = -1;
	int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t74 = 899711;

    t74 = (((x329-x330)>x331)|x332);

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = -50;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int8_t x336 = INT8_MAX;

    t75 = (((x333-x334)>x335)|x336);

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x339 = -10;
	int32_t x340 = INT32_MIN;

    t76 = (((x337-x338)>x339)|x340);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	static volatile int32_t x343 = INT32_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t77 = UINT32_MAX;

    t77 = (((x341-x342)>x343)|x344);

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x345 = INT8_MIN;
	static volatile uint64_t x346 = 811329LLU;
	static int16_t x347 = -1;

    t78 = (((x345-x346)>x347)|x348);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x351 = -1289;
	int16_t x352 = -1;
	volatile int32_t t79 = 15083;

    t79 = (((x349-x350)>x351)|x352);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x353 = -456;
	uint16_t x354 = 21U;
	uint64_t x355 = UINT64_MAX;
	static int32_t t80 = 13;

    t80 = (((x353-x354)>x355)|x356);

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = 1;

    t81 = (((x361-x362)>x363)|x364);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	static int32_t t82 = -26114;

    t82 = (((x369-x370)>x371)|x372);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x373 = UINT64_MAX;
	int32_t x376 = INT32_MAX;
	int32_t t83 = INT32_MAX;

    t83 = (((x373-x374)>x375)|x376);

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = 5;
	static volatile int8_t x379 = INT8_MAX;
	int32_t x380 = -1;
	int32_t t84 = -321881658;

    t84 = (((x377-x378)>x379)|x380);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x381 = INT64_MAX;
	uint64_t x382 = 3493475180349930914LLU;
	int32_t t85 = -71656764;

    t85 = (((x381-x382)>x383)|x384);

    if (t85 != -31161) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = INT64_MIN;
	int64_t x386 = -1LL;
	int32_t x387 = 57;
	uint8_t x388 = 0U;

    t86 = (((x385-x386)>x387)|x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x389 = UINT8_MAX;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MAX;
	int64_t t87 = -12683LL;

    t87 = (((x389-x390)>x391)|x392);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x397 = 12LLU;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = -1LL;
	int64_t t88 = 0LL;

    t88 = (((x397-x398)>x399)|x400);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x402 = INT64_MIN;
	static uint16_t x403 = UINT16_MAX;
	volatile uint16_t x404 = 3927U;
	int32_t t89 = -6804;

    t89 = (((x401-x402)>x403)|x404);

    if (t89 != 3927) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x405 = 26U;
	uint8_t x407 = 25U;
	uint16_t x408 = 1U;

    t90 = (((x405-x406)>x407)|x408);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	uint16_t x411 = 7U;
	int8_t x412 = INT8_MAX;
	int32_t t91 = -454689842;

    t91 = (((x409-x410)>x411)|x412);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x413 = 12644104854849805LLU;
	int32_t x414 = 36;
	int64_t x415 = -4536007402159116120LL;
	uint8_t x416 = 14U;

    t92 = (((x413-x414)>x415)|x416);

    if (t92 != 14) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	int32_t t93 = -33433;

    t93 = (((x417-x418)>x419)|x420);

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x421 = INT64_MAX;
	volatile uint64_t x422 = UINT64_MAX;
	int32_t x423 = 25;
	volatile int32_t t94 = -1820;

    t94 = (((x421-x422)>x423)|x424);

    if (t94 != 61) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x425 = 22713577U;
	int8_t x426 = INT8_MIN;
	static volatile int16_t x427 = -5;
	int16_t x428 = -1;
	int32_t t95 = 21;

    t95 = (((x425-x426)>x427)|x428);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x429 = INT8_MIN;
	volatile int16_t x430 = -1;
	int64_t x431 = 23365337609760931LL;
	int32_t t96 = -40003092;

    t96 = (((x429-x430)>x431)|x432);

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x433 = -1;
	int16_t x435 = -1;
	int32_t t97 = 117;

    t97 = (((x433-x434)>x435)|x436);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x437 = UINT8_MAX;
	uint64_t x438 = 231LLU;
	uint16_t x439 = 7U;
	volatile int16_t x440 = 9613;

    t98 = (((x437-x438)>x439)|x440);

    if (t98 != 9613) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x442 = INT8_MAX;
	static int8_t x443 = INT8_MAX;
	static int16_t x444 = -1;
	volatile int32_t t99 = -14429;

    t99 = (((x441-x442)>x443)|x444);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x446 = -15;
	uint32_t x448 = 458667277U;
	uint32_t t100 = 192U;

    t100 = (((x445-x446)>x447)|x448);

    if (t100 != 458667277U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = INT64_MIN;
	int32_t x450 = -35;
	int16_t x451 = -3520;
	static int32_t x452 = 521091;
	int32_t t101 = 40650298;

    t101 = (((x449-x450)>x451)|x452);

    if (t101 != 521091) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x458 = -1;
	int8_t x459 = INT8_MIN;
	int8_t x460 = -1;
	int32_t t102 = 15;

    t102 = (((x457-x458)>x459)|x460);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x463 = -1;
	int64_t x464 = -203LL;
	int64_t t103 = -1354991LL;

    t103 = (((x461-x462)>x463)|x464);

    if (t103 != -203LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x465 = 0;
	volatile uint64_t x466 = 100LLU;
	uint16_t x467 = 96U;
	static int8_t x468 = 0;

    t104 = (((x465-x466)>x467)|x468);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x473 = 8610393271471LLU;
	static int64_t x474 = 1LL;
	volatile int16_t x475 = INT16_MAX;

    t105 = (((x473-x474)>x475)|x476);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = UINT32_MAX;
	static uint8_t x478 = UINT8_MAX;
	int32_t x479 = 90;
	static uint16_t x480 = 5258U;
	int32_t t106 = 185694819;

    t106 = (((x477-x478)>x479)|x480);

    if (t106 != 5259) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x485 = INT8_MIN;
	int64_t x487 = -1LL;
	static int32_t t107 = -72784;

    t107 = (((x485-x486)>x487)|x488);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x489 = INT32_MIN;
	int64_t x490 = -230401971648803LL;
	int16_t x491 = -1;
	static volatile int8_t x492 = INT8_MIN;
	static int32_t t108 = 1;

    t108 = (((x489-x490)>x491)|x492);

    if (t108 != -127) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x493 = -1;
	int16_t x495 = 368;
	int32_t x496 = -17541;
	volatile int32_t t109 = -3844751;

    t109 = (((x493-x494)>x495)|x496);

    if (t109 != -17541) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = 1U;
	volatile uint8_t x499 = 0U;
	static int8_t x500 = -1;
	int32_t t110 = 47844;

    t110 = (((x497-x498)>x499)|x500);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x501 = -4;
	volatile int32_t x502 = INT32_MIN;
	int16_t x503 = -62;
	static int32_t x504 = -2;
	volatile int32_t t111 = -12038;

    t111 = (((x501-x502)>x503)|x504);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x518 = 44;
	uint32_t x520 = 47813U;
	volatile uint32_t t112 = 19443082U;

    t112 = (((x517-x518)>x519)|x520);

    if (t112 != 47813U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x521 = 23U;
	int8_t x522 = INT8_MIN;
	volatile int16_t x524 = 9;

    t113 = (((x521-x522)>x523)|x524);

    if (t113 != 9) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x525 = 1;
	int8_t x526 = -31;
	static int64_t x527 = INT64_MIN;
	int32_t x528 = -1;
	int32_t t114 = 279700147;

    t114 = (((x525-x526)>x527)|x528);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x533 = -1;
	static int16_t x535 = -1;
	static int32_t x536 = 270;
	int32_t t115 = 116;

    t115 = (((x533-x534)>x535)|x536);

    if (t115 != 270) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x537 = INT8_MAX;
	int64_t x538 = -1LL;
	int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MAX;
	static volatile int32_t t116 = 1310;

    t116 = (((x537-x538)>x539)|x540);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x541 = 129061431866999LLU;
	uint32_t x542 = 1U;
	int16_t x543 = INT16_MIN;
	uint64_t x544 = 11557821758LLU;
	uint64_t t117 = 17437648768529LLU;

    t117 = (((x541-x542)>x543)|x544);

    if (t117 != 11557821758LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x547 = -1LL;
	uint32_t x548 = UINT32_MAX;
	uint32_t t118 = UINT32_MAX;

    t118 = (((x545-x546)>x547)|x548);

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MIN;
	static volatile int64_t t119 = -4333334959018865932LL;

    t119 = (((x549-x550)>x551)|x552);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x553 = 0U;
	int8_t x554 = INT8_MIN;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t120 = -19861590;

    t120 = (((x553-x554)>x555)|x556);

    if (t120 != -2147483647) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	static int16_t x558 = INT16_MIN;
	volatile int32_t x559 = 1;
	uint32_t x560 = 45U;
	uint32_t t121 = 13U;

    t121 = (((x557-x558)>x559)|x560);

    if (t121 != 45U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x561 = -18;
	static int32_t x562 = -32746482;
	int32_t x563 = 0;
	static int32_t t122 = -22;

    t122 = (((x561-x562)>x563)|x564);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x568 = -1035372;
	int32_t t123 = -4;

    t123 = (((x565-x566)>x567)|x568);

    if (t123 != -1035371) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x570 = 1143002278553LLU;
	uint16_t x571 = 3U;
	int8_t x572 = INT8_MIN;
	static volatile int32_t t124 = 271384;

    t124 = (((x569-x570)>x571)|x572);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x573 = INT8_MIN;
	static uint16_t x574 = UINT16_MAX;
	int64_t x575 = INT64_MIN;
	int64_t x576 = -1LL;
	volatile int64_t t125 = -23735701233658LL;

    t125 = (((x573-x574)>x575)|x576);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x579 = 10362U;
	volatile int8_t x580 = INT8_MAX;
	int32_t t126 = 12747463;

    t126 = (((x577-x578)>x579)|x580);

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x581 = 331U;
	uint64_t x582 = 3341LLU;
	int16_t x583 = 140;
	volatile int64_t t127 = -29939485998284LL;

    t127 = (((x581-x582)>x583)|x584);

    if (t127 != 1736422291317LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x585 = 369U;
	volatile uint8_t x586 = 102U;
	volatile int64_t x587 = -1LL;
	volatile int64_t x588 = -575316472345422134LL;
	volatile int64_t t128 = -21614656896LL;

    t128 = (((x585-x586)>x587)|x588);

    if (t128 != -575316472345422133LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x589 = UINT64_MAX;
	static int8_t x590 = 7;
	int64_t x591 = 53LL;
	int8_t x592 = 1;
	int32_t t129 = -3180;

    t129 = (((x589-x590)>x591)|x592);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = -1;
	int16_t x602 = -2;
	volatile int8_t x603 = -1;
	int16_t x604 = INT16_MAX;
	int32_t t130 = 22173098;

    t130 = (((x601-x602)>x603)|x604);

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x605 = 4;
	int8_t x606 = INT8_MIN;
	uint32_t x607 = 45543U;
	int16_t x608 = INT16_MIN;
	volatile int32_t t131 = -1;

    t131 = (((x605-x606)>x607)|x608);

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = INT64_MIN;
	int64_t x611 = INT64_MAX;
	volatile int32_t t132 = INT32_MAX;

    t132 = (((x609-x610)>x611)|x612);

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x614 = 28815267U;
	uint64_t x615 = 995199463902738393LLU;
	uint32_t x616 = 55279627U;
	uint32_t t133 = 822U;

    t133 = (((x613-x614)>x615)|x616);

    if (t133 != 55279627U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x617 = 1376478LL;
	int8_t x618 = -48;
	int16_t x619 = INT16_MIN;
	static uint8_t x620 = UINT8_MAX;
	volatile int32_t t134 = 476;

    t134 = (((x617-x618)>x619)|x620);

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x621 = -1;
	int8_t x622 = 5;
	int64_t x623 = 110786159LL;
	uint8_t x624 = 0U;
	volatile int32_t t135 = 25;

    t135 = (((x621-x622)>x623)|x624);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x625 = -1LL;
	int16_t x626 = INT16_MIN;
	uint64_t x627 = 301187351127416021LLU;
	volatile uint64_t t136 = 5565LLU;

    t136 = (((x625-x626)>x627)|x628);

    if (t136 != 17702256LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x630 = UINT64_MAX;
	int16_t x631 = -1;
	volatile uint64_t x632 = 6264482LLU;
	uint64_t t137 = 180025064314582LLU;

    t137 = (((x629-x630)>x631)|x632);

    if (t137 != 6264482LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x633 = UINT8_MAX;
	int64_t x635 = INT64_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t138 = -67027;

    t138 = (((x633-x634)>x635)|x636);

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x637 = 2706U;
	int16_t x638 = INT16_MIN;
	uint16_t x640 = 1817U;

    t139 = (((x637-x638)>x639)|x640);

    if (t139 != 1817) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x641 = 2U;
	uint32_t x642 = 25141U;
	int16_t x644 = -1;
	int32_t t140 = -1394;

    t140 = (((x641-x642)>x643)|x644);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = 51174LL;
	static int32_t x646 = -1;
	uint8_t x647 = 1U;
	int32_t x648 = INT32_MAX;
	int32_t t141 = INT32_MAX;

    t141 = (((x645-x646)>x647)|x648);

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x650 = 16U;
	int8_t x651 = INT8_MAX;
	int32_t x652 = 607;

    t142 = (((x649-x650)>x651)|x652);

    if (t142 != 607) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x653 = 3742U;
	volatile int16_t x654 = -1;
	uint32_t x655 = 2561982U;
	volatile int16_t x656 = -2773;
	static volatile int32_t t143 = -152372845;

    t143 = (((x653-x654)>x655)|x656);

    if (t143 != -2773) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x659 = 7U;
	volatile int32_t t144 = -32820;

    t144 = (((x657-x658)>x659)|x660);

    if (t144 != 29) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x661 = UINT8_MAX;
	int16_t x662 = INT16_MAX;
	int32_t t145 = -715171556;

    t145 = (((x661-x662)>x663)|x664);

    if (t145 != 2005) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x665 = -13082;
	volatile int32_t x666 = -202765258;
	static int16_t x667 = INT16_MAX;
	int32_t x668 = INT32_MIN;
	int32_t t146 = -31;

    t146 = (((x665-x666)>x667)|x668);

    if (t146 != -2147483647) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x669 = 3U;
	volatile int32_t x670 = 1056648;
	int8_t x671 = 1;
	uint32_t x672 = 1338525U;
	uint32_t t147 = 7213U;

    t147 = (((x669-x670)>x671)|x672);

    if (t147 != 1338525U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x673 = 2;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = -1;
	volatile int32_t t148 = 514;

    t148 = (((x673-x674)>x675)|x676);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x677 = INT32_MAX;
	static volatile int16_t x678 = INT16_MAX;
	int64_t x679 = -382537734101199106LL;
	static uint16_t x680 = UINT16_MAX;
	volatile int32_t t149 = 180051132;

    t149 = (((x677-x678)>x679)|x680);

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x681 = -1LL;
	int16_t x683 = INT16_MAX;
	volatile int32_t x684 = -4214;

    t150 = (((x681-x682)>x683)|x684);

    if (t150 != -4214) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x685 = INT16_MAX;
	static volatile int64_t x686 = INT64_MAX;
	int8_t x687 = INT8_MIN;
	volatile int32_t x688 = 60376633;
	volatile int32_t t151 = -6;

    t151 = (((x685-x686)>x687)|x688);

    if (t151 != 60376633) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x689 = 1U;
	uint64_t x690 = UINT64_MAX;
	volatile int8_t x692 = INT8_MAX;
	static volatile int32_t t152 = 4659;

    t152 = (((x689-x690)>x691)|x692);

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x694 = 1262;
	uint8_t x696 = UINT8_MAX;
	static int32_t t153 = 196;

    t153 = (((x693-x694)>x695)|x696);

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x703 = 26982964055335LLU;
	int16_t x704 = INT16_MIN;
	int32_t t154 = -236655684;

    t154 = (((x701-x702)>x703)|x704);

    if (t154 != -32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x706 = INT16_MIN;
	static int8_t x707 = -1;
	static int16_t x708 = -1;

    t155 = (((x705-x706)>x707)|x708);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x714 = 3;
	volatile uint16_t x715 = 1914U;
	uint64_t x716 = UINT64_MAX;
	uint64_t t156 = UINT64_MAX;

    t156 = (((x713-x714)>x715)|x716);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x718 = 6U;
	static volatile uint8_t x720 = UINT8_MAX;
	static int32_t t157 = 49;

    t157 = (((x717-x718)>x719)|x720);

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x721 = 1;
	volatile int8_t x722 = INT8_MAX;
	static int8_t x723 = -1;
	volatile int32_t t158 = -30962;

    t158 = (((x721-x722)>x723)|x724);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x725 = -2908219;
	uint32_t x726 = UINT32_MAX;
	uint64_t x727 = 1379012891146051740LLU;

    t159 = (((x725-x726)>x727)|x728);

    if (t159 != 127) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x729 = INT8_MAX;
	uint16_t x730 = 0U;
	volatile uint64_t x731 = 7700785572LLU;
	volatile int32_t t160 = 67637;

    t160 = (((x729-x730)>x731)|x732);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x733 = -1;
	uint16_t x734 = UINT16_MAX;
	int16_t x735 = 1;
	int32_t t161 = 120989;

    t161 = (((x733-x734)>x735)|x736);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x737 = -7957;
	volatile int64_t x738 = INT64_MIN;
	int8_t x739 = -1;
	int8_t x740 = -63;

    t162 = (((x737-x738)>x739)|x740);

    if (t162 != -63) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x741 = UINT64_MAX;
	uint32_t x742 = 6U;
	int32_t x743 = INT32_MIN;
	int64_t x744 = INT64_MIN;
	int64_t t163 = 0LL;

    t163 = (((x741-x742)>x743)|x744);

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x745 = INT64_MIN;
	int16_t x746 = INT16_MIN;
	volatile int32_t t164 = -95;

    t164 = (((x745-x746)>x747)|x748);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x749 = INT16_MAX;
	int8_t x751 = 1;
	int32_t t165 = 1103;

    t165 = (((x749-x750)>x751)|x752);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	volatile int32_t x754 = 516301170;
	int16_t x756 = INT16_MAX;
	volatile int32_t t166 = -1;

    t166 = (((x753-x754)>x755)|x756);

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x766 = UINT32_MAX;
	int64_t x767 = INT64_MIN;
	int8_t x768 = INT8_MIN;
	volatile int32_t t167 = 0;

    t167 = (((x765-x766)>x767)|x768);

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x770 = 2U;
	int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	int32_t t168 = -44857426;

    t168 = (((x769-x770)>x771)|x772);

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x773 = INT64_MIN;
	int16_t x774 = -1;
	volatile uint64_t x775 = UINT64_MAX;
	uint16_t x776 = 1636U;
	volatile int32_t t169 = 82;

    t169 = (((x773-x774)>x775)|x776);

    if (t169 != 1636) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x777 = -1LL;
	int32_t x778 = INT32_MIN;
	int32_t x779 = -5210;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t170 = 107726;

    t170 = (((x777-x778)>x779)|x780);

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x781 = 165627U;
	volatile int32_t x782 = INT32_MAX;
	volatile int16_t x783 = -44;
	uint16_t x784 = UINT16_MAX;
	int32_t t171 = -28979;

    t171 = (((x781-x782)>x783)|x784);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x785 = -1;
	volatile uint8_t x786 = UINT8_MAX;
	uint8_t x787 = UINT8_MAX;
	int32_t x788 = INT32_MAX;
	volatile int32_t t172 = INT32_MAX;

    t172 = (((x785-x786)>x787)|x788);

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x789 = UINT16_MAX;
	uint64_t x790 = UINT64_MAX;
	int16_t x791 = INT16_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t173 = 340296;

    t173 = (((x789-x790)>x791)|x792);

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x797 = -1LL;
	static int32_t x798 = INT32_MIN;
	uint8_t x799 = UINT8_MAX;
	int16_t x800 = -1;
	volatile int32_t t174 = -8;

    t174 = (((x797-x798)>x799)|x800);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x801 = -1;
	int8_t x802 = -1;
	int32_t x804 = INT32_MIN;
	int32_t t175 = INT32_MIN;

    t175 = (((x801-x802)>x803)|x804);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x806 = -1;
	int32_t x807 = INT32_MAX;
	int8_t x808 = 38;
	volatile int32_t t176 = 20995524;

    t176 = (((x805-x806)>x807)|x808);

    if (t176 != 38) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x811 = INT16_MAX;
	int8_t x812 = INT8_MIN;
	int32_t t177 = -7691;

    t177 = (((x809-x810)>x811)|x812);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x813 = -1LL;
	volatile uint8_t x814 = UINT8_MAX;
	volatile int16_t x815 = -1;
	int32_t t178 = 149143;

    t178 = (((x813-x814)>x815)|x816);

    if (t178 != 13) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x817 = INT16_MIN;
	static volatile uint16_t x818 = 25183U;
	static uint64_t x819 = 18610374831775130LLU;
	int32_t x820 = INT32_MIN;

    t179 = (((x817-x818)>x819)|x820);

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x821 = 4091096501LLU;
	static uint32_t x822 = 13476627U;
	int16_t x823 = INT16_MIN;
	int64_t x824 = INT64_MIN;
	volatile int64_t t180 = INT64_MIN;

    t180 = (((x821-x822)>x823)|x824);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x825 = INT16_MIN;
	int8_t x826 = 0;
	uint32_t x828 = 1049108U;

    t181 = (((x825-x826)>x827)|x828);

    if (t181 != 1049108U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x829 = -1;
	volatile int8_t x831 = -1;
	int32_t t182 = -3465;

    t182 = (((x829-x830)>x831)|x832);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x833 = INT32_MIN;
	uint32_t x834 = UINT32_MAX;
	volatile uint32_t x835 = UINT32_MAX;
	static int32_t t183 = 961348;

    t183 = (((x833-x834)>x835)|x836);

    if (t183 != -4763868) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x837 = UINT32_MAX;
	volatile int16_t x838 = -98;
	volatile int8_t x839 = INT8_MAX;
	int16_t x840 = -122;
	volatile int32_t t184 = 1;

    t184 = (((x837-x838)>x839)|x840);

    if (t184 != -122) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x841 = UINT16_MAX;
	int32_t x842 = -1;
	uint64_t t185 = UINT64_MAX;

    t185 = (((x841-x842)>x843)|x844);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x846 = -1;
	int16_t x847 = INT16_MAX;
	static volatile int32_t t186 = -26228;

    t186 = (((x845-x846)>x847)|x848);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x849 = -130123434737425904LL;
	uint64_t x850 = 6607397LLU;
	uint64_t x851 = 422913100713727LLU;
	static uint16_t x852 = 3U;
	volatile int32_t t187 = 14861529;

    t187 = (((x849-x850)>x851)|x852);

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x853 = -1LL;
	volatile uint64_t x854 = 353835LLU;
	static int32_t x855 = 128;
	uint64_t x856 = 14LLU;
	volatile uint64_t t188 = 2875383049478454LLU;

    t188 = (((x853-x854)>x855)|x856);

    if (t188 != 15LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x857 = -1LL;
	int64_t x858 = INT64_MIN;
	int64_t x859 = -10441293046LL;
	uint16_t x860 = UINT16_MAX;
	volatile int32_t t189 = 763009;

    t189 = (((x857-x858)>x859)|x860);

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x861 = INT64_MIN;
	static int64_t x863 = -7271700LL;
	static uint32_t t190 = UINT32_MAX;

    t190 = (((x861-x862)>x863)|x864);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x865 = 114U;
	volatile int32_t x866 = 76;
	int8_t x867 = 1;
	int16_t x868 = INT16_MIN;
	volatile int32_t t191 = 248397748;

    t191 = (((x865-x866)>x867)|x868);

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x869 = INT16_MIN;
	int8_t x870 = INT8_MIN;
	int16_t x871 = INT16_MIN;
	int16_t x872 = -1;
	volatile int32_t t192 = -141578560;

    t192 = (((x869-x870)>x871)|x872);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x873 = -1;
	int32_t x874 = -1;
	volatile int16_t x875 = INT16_MAX;
	int64_t x876 = INT64_MAX;
	volatile int64_t t193 = INT64_MAX;

    t193 = (((x873-x874)>x875)|x876);

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x877 = INT32_MAX;
	uint16_t x878 = 3U;
	static int32_t x879 = INT32_MIN;
	static int8_t x880 = -46;

    t194 = (((x877-x878)>x879)|x880);

    if (t194 != -45) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x883 = INT16_MIN;
	int64_t x884 = INT64_MAX;
	int64_t t195 = INT64_MAX;

    t195 = (((x881-x882)>x883)|x884);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x885 = INT64_MIN;
	static volatile int64_t x886 = -1LL;
	volatile uint8_t x887 = 27U;
	static volatile int32_t t196 = -220;

    t196 = (((x885-x886)>x887)|x888);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x889 = 572;
	int64_t x890 = INT64_MAX;
	int16_t x891 = INT16_MAX;
	int16_t x892 = -1;
	int32_t t197 = -3;

    t197 = (((x889-x890)>x891)|x892);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x893 = 2108;
	uint8_t x895 = 122U;
	int16_t x896 = 1;
	static int32_t t198 = -150;

    t198 = (((x893-x894)>x895)|x896);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x897 = UINT32_MAX;
	int16_t x898 = -1;
	int16_t x900 = INT16_MIN;
	volatile int32_t t199 = 93;

    t199 = (((x897-x898)>x899)|x900);

    if (t199 != -32768) { NG(); } else { ; }
	
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

