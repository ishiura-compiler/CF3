
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

int32_t x11 = INT32_MIN;
int64_t x16 = INT64_MAX;
uint16_t x19 = 1090U;
volatile int32_t t3 = -3275526;
int16_t x24 = INT16_MIN;
uint32_t x25 = 782U;
int8_t x27 = INT8_MIN;
static int8_t x28 = -50;
uint32_t t5 = 19069483U;
uint8_t x33 = 113U;
int8_t x34 = INT8_MAX;
volatile int32_t x35 = INT32_MIN;
volatile int16_t x37 = INT16_MIN;
int8_t x38 = -1;
uint64_t x42 = 862083460LLU;
int32_t x43 = INT32_MAX;
static uint64_t t9 = 449358616LLU;
uint64_t x49 = 106301LLU;
uint8_t x52 = 4U;
volatile uint16_t x53 = UINT16_MAX;
int8_t x60 = -1;
int32_t x61 = -1;
int64_t x70 = INT64_MIN;
static uint32_t x85 = 38089U;
volatile uint16_t x87 = 111U;
volatile int64_t t19 = 249448331130524LL;
uint32_t x92 = 456937463U;
volatile int64_t t21 = 66874772554402795LL;
int64_t x105 = -3905843889785182241LL;
int16_t x118 = 1711;
uint8_t x127 = UINT8_MAX;
uint32_t x130 = 1764U;
int32_t x133 = INT32_MIN;
int16_t x135 = INT16_MIN;
int16_t x137 = INT16_MAX;
int64_t x145 = -1LL;
static uint32_t x151 = 3U;
volatile uint32_t t32 = 2132052962U;
volatile int8_t x163 = INT8_MIN;
static volatile int64_t t35 = -1LL;
int8_t x175 = 3;
static int32_t t39 = -1;
int64_t t40 = 291578788692520LL;
int16_t x191 = INT16_MIN;
volatile int32_t x192 = INT32_MIN;
uint64_t x194 = 37747065609715483LLU;
uint64_t t42 = 8733LLU;
static uint64_t t44 = 1LLU;
volatile uint8_t x205 = 127U;
int32_t t45 = -9;
int16_t x211 = INT16_MIN;
volatile int64_t t47 = -140LL;
int8_t x219 = -1;
static int64_t t49 = 359344661LL;
volatile int32_t x227 = -1;
uint16_t x228 = 19U;
int8_t x236 = INT8_MIN;
static volatile int32_t t52 = 491;
int64_t x237 = INT64_MAX;
uint64_t x238 = UINT64_MAX;
uint32_t x240 = 8U;
uint32_t x247 = UINT32_MAX;
int32_t x248 = -1;
volatile int64_t x255 = INT64_MAX;
uint32_t x256 = UINT32_MAX;
uint32_t t58 = 199322U;
volatile uint64_t t59 = 442159533778LLU;
uint64_t t61 = 34829LLU;
int32_t x281 = 130256;
volatile int64_t t63 = 3LL;
int32_t x291 = 84;
uint32_t x292 = UINT32_MAX;
volatile int16_t x300 = 20;
volatile int32_t t65 = 165165;
volatile int8_t x302 = -1;
static volatile uint64_t x303 = 3401LLU;
uint64_t t66 = 5LLU;
int32_t t68 = 26000;
volatile int16_t x313 = INT16_MIN;
static int32_t x328 = -1;
static int64_t x331 = -123066259045296LL;
int16_t x338 = 33;
int64_t x340 = INT64_MIN;
int64_t t75 = -68LL;
static int64_t x352 = INT64_MIN;
int64_t t78 = -6LL;
uint8_t x355 = 3U;
static volatile uint16_t x356 = UINT16_MAX;
int64_t t79 = 0LL;
int32_t t82 = 143;
uint8_t x371 = 99U;
uint32_t t83 = 6126U;
int8_t x374 = INT8_MIN;
int16_t x375 = INT16_MIN;
int32_t t84 = -267064540;
int16_t x378 = -1;
int64_t x389 = INT64_MIN;
uint32_t x393 = UINT32_MAX;
int64_t x395 = -5462382LL;
static int64_t x396 = 7908LL;
int8_t x413 = INT8_MIN;
static uint64_t x414 = UINT64_MAX;
int16_t x418 = 5294;
volatile int32_t t95 = 1;
uint64_t x425 = 1LLU;
uint64_t t96 = 25435LLU;
static int8_t x433 = INT8_MIN;
int16_t x434 = INT16_MIN;
int32_t x436 = INT32_MAX;
int16_t x438 = -1;
static int16_t x439 = INT16_MIN;
static uint32_t x443 = 9140169U;
uint32_t x446 = UINT32_MAX;
int32_t x452 = INT32_MAX;
int64_t t102 = -240423735698LL;
int16_t x468 = -1;
int8_t x469 = INT8_MIN;
int8_t x493 = INT8_MIN;
int16_t x496 = 2;
int8_t x498 = -3;
int32_t x500 = -405541;
volatile int64_t t112 = -82LL;
uint64_t x501 = UINT64_MAX;
static volatile int32_t t114 = -10685;
volatile int8_t x514 = INT8_MAX;
volatile uint16_t x524 = 662U;
volatile int64_t t119 = -28LL;
uint16_t x548 = 242U;
int32_t x553 = 65;
volatile int16_t x554 = INT16_MIN;
static int64_t x556 = 3LL;
static uint32_t x557 = 63061U;
static volatile int64_t t128 = 27353644567LL;
uint64_t x567 = UINT64_MAX;
static uint16_t x569 = 789U;
int64_t x574 = INT64_MIN;
volatile int32_t x575 = INT32_MAX;
static volatile int64_t t131 = 52LL;
int64_t x582 = -80902LL;
volatile uint64_t t136 = 31091295LLU;
uint32_t x603 = 3372325U;
volatile uint32_t t138 = 22064U;
int16_t x609 = -1;
volatile int16_t x612 = INT16_MAX;
int32_t x618 = -1;
static uint16_t x619 = 11U;
static volatile int8_t x620 = INT8_MAX;
static uint16_t x623 = 623U;
uint8_t x626 = 28U;
int32_t t143 = -117;
static uint64_t x640 = UINT64_MAX;
int64_t x645 = INT64_MIN;
int64_t t147 = -14267484639612488LL;
uint64_t x663 = UINT64_MAX;
static uint32_t x664 = 2U;
volatile uint64_t t150 = 5811338067386542LLU;
volatile int32_t x670 = -30736;
int16_t x676 = INT16_MIN;
volatile uint32_t x679 = 633527645U;
static int8_t x687 = -1;
static int32_t t156 = INT32_MAX;
int64_t x690 = -503460588826059LL;
volatile int32_t x693 = 38;
uint8_t x697 = UINT8_MAX;
volatile int32_t x701 = 26686828;
volatile int64_t x702 = INT64_MAX;
int8_t x705 = INT8_MIN;
int16_t x712 = INT16_MAX;
int64_t x715 = -1LL;
volatile int64_t x719 = INT64_MIN;
static volatile int64_t t166 = 31234298691068LL;
static uint32_t x729 = 2367U;
static uint8_t x736 = 15U;
static volatile int32_t t168 = 81293747;
int32_t x741 = -1;
static int32_t x746 = INT32_MIN;
static int32_t t171 = 88;
static int32_t x749 = 28619007;
uint16_t x750 = 320U;
uint32_t t174 = 13U;
volatile uint16_t x764 = 2U;
volatile int32_t x766 = 294179;
int16_t x767 = 47;
static volatile int32_t t176 = 18794576;
uint16_t x778 = 88U;
uint8_t x785 = UINT8_MAX;
volatile uint32_t t179 = 49U;
int32_t x791 = INT32_MAX;
volatile uint16_t x795 = 179U;
int8_t x802 = INT8_MIN;
static int64_t x803 = 58407829603250LL;
int64_t x807 = 60131LL;
volatile int8_t x809 = -11;
int8_t x819 = INT8_MAX;
int64_t x820 = INT64_MIN;
int16_t x825 = INT16_MIN;
volatile int64_t x826 = INT64_MIN;
int16_t x830 = 10;
int64_t x834 = INT64_MIN;
int8_t x840 = -1;
int64_t x841 = INT64_MIN;
uint32_t x850 = 11968074U;
static uint32_t x852 = 26907U;
uint32_t t193 = 125850U;
static int64_t x856 = INT64_MAX;
uint64_t x857 = 43274807262986LLU;
uint64_t t197 = 1837821837LLU;
int8_t x869 = INT8_MIN;
uint8_t x870 = UINT8_MAX;
static int32_t x874 = INT32_MAX;


void f0(void) {
    	volatile int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	static int8_t x8 = -1;
	int32_t t0 = -383071;

    t0 = (((x5/x6)+x7)^x8);

    if (t0 != -257) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = -34LL;
	uint8_t x10 = UINT8_MAX;
	int64_t x12 = -12LL;
	int64_t t1 = -1442295142082670127LL;

    t1 = (((x9/x10)+x11)^x12);

    if (t1 != 2147483636LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -327765;
	volatile int16_t x14 = INT16_MIN;
	uint8_t x15 = 21U;
	volatile int64_t t2 = -4740389142583205LL;

    t2 = (((x13/x14)+x15)^x16);

    if (t2 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x17 = 31U;
	volatile uint8_t x18 = UINT8_MAX;
	int16_t x20 = INT16_MIN;

    t3 = (((x17/x18)+x19)^x20);

    if (t3 != -31678) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -3;
	int16_t x22 = -1;
	volatile int32_t x23 = -72466;
	static int32_t t4 = -3140118;

    t4 = (((x21/x22)+x23)^x24);

    if (t4 != 91377) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x26 = 1U;

    t5 = (((x25/x26)+x27)^x28);

    if (t5 != 4294966592U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x29 = UINT32_MAX;
	static int16_t x30 = -118;
	static int32_t x31 = -81023318;
	int32_t x32 = -1;
	uint32_t t6 = 329959996U;

    t6 = (((x29/x30)+x31)^x32);

    if (t6 != 81023316U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x36 = 69150;
	int32_t t7 = 0;

    t7 = (((x33/x34)+x35)^x36);

    if (t7 != -2147414498) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x39 = 51;
	int64_t x40 = INT64_MIN;
	int64_t t8 = -108853025477400130LL;

    t8 = (((x37/x38)+x39)^x40);

    if (t8 != -9223372036854742989LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	static int64_t x44 = INT64_MIN;

    t9 = (((x41/x42)+x43)^x44);

    if (t9 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = -1;
	static uint32_t x48 = 3U;
	volatile uint32_t t10 = 2502147U;

    t10 = (((x45/x46)+x47)^x48);

    if (t10 != 4294967292U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x50 = 54U;
	int16_t x51 = INT16_MIN;
	uint64_t t11 = 4980346LLU;

    t11 = (((x49/x50)+x51)^x52);

    if (t11 != 18446744073709520820LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x54 = INT16_MAX;
	static int32_t x55 = -1;
	volatile uint32_t x56 = UINT32_MAX;
	uint32_t t12 = 1U;

    t12 = (((x53/x54)+x55)^x56);

    if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 81217U;
	int64_t x58 = INT64_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t t13 = 280001501791LLU;

    t13 = (((x57/x58)+x59)^x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x62 = 5U;
	static int16_t x63 = 5207;
	static volatile uint16_t x64 = UINT16_MAX;
	int32_t t14 = -301452;

    t14 = (((x61/x62)+x63)^x64);

    if (t14 != 60328) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	uint8_t x66 = 12U;
	volatile uint64_t x67 = 22808386722406178LLU;
	uint64_t x68 = 0LLU;
	uint64_t t15 = 818337120LLU;

    t15 = (((x65/x66)+x67)^x68);

    if (t15 != 22808386722403448LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x69 = INT64_MAX;
	static int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MIN;
	static int64_t t16 = -1LL;

    t16 = (((x69/x70)+x71)^x72);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = 907641535LL;
	uint32_t x75 = 0U;
	int16_t x76 = INT16_MIN;
	static volatile int64_t t17 = -277184064140511408LL;

    t17 = (((x73/x74)+x75)^x76);

    if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 1U;
	int64_t x78 = -1LL;
	int8_t x79 = -15;
	int64_t x80 = -261343LL;
	volatile int64_t t18 = 2712285431LL;

    t18 = (((x77/x78)+x79)^x80);

    if (t18 != 261329LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x86 = 2LL;
	uint8_t x88 = 126U;

    t19 = (((x85/x86)+x87)^x88);

    if (t19 != 19117LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -1;
	volatile int8_t x90 = 1;
	volatile int8_t x91 = 1;
	uint32_t t20 = 13145515U;

    t20 = (((x89/x90)+x91)^x92);

    if (t20 != 456937463U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = INT64_MAX;
	uint32_t x94 = UINT32_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;

    t21 = (((x93/x94)+x95)^x96);

    if (t21 != -4294967041LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t22 = 1LL;

    t22 = (((x97/x98)+x99)^x100);

    if (t22 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	static int16_t x102 = INT16_MIN;
	uint64_t x103 = 0LLU;
	static int32_t x104 = -1;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (((x101/x102)+x103)^x104);

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = -1;
	volatile int8_t x108 = INT8_MIN;
	static int64_t t24 = 2616040140063LL;

    t24 = (((x105/x106)+x107)^x108);

    if (t24 != -1818800348LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x117 = INT64_MAX;
	int32_t x119 = -1;
	uint32_t x120 = 4208U;
	static int64_t t25 = -1073311929LL;

    t25 = (((x117/x118)+x119)^x120);

    if (t25 != 5390632400269874LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	int32_t x128 = INT32_MAX;
	static int32_t t26 = -3;

    t26 = (((x125/x126)+x127)^x128);

    if (t26 != 2147483391) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x129 = -1;
	int64_t x131 = -33LL;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t27 = 0LLU;

    t27 = (((x129/x130)+x131)^x132);

    if (t27 != 18446744073707116860LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x134 = INT64_MIN;
	volatile int64_t x136 = -1LL;
	int64_t t28 = -3171547713380315LL;

    t28 = (((x133/x134)+x135)^x136);

    if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x138 = 1U;
	volatile uint32_t x139 = 47U;
	volatile uint8_t x140 = UINT8_MAX;
	static volatile uint32_t t29 = 142624933U;

    t29 = (((x137/x138)+x139)^x140);

    if (t29 != 32977U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = -2102072288LL;
	int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	static int64_t t30 = 180624282009LL;

    t30 = (((x141/x142)+x143)^x144);

    if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x146 = 1U;
	int16_t x147 = -1;
	uint64_t x148 = 34701432394608LLU;
	volatile uint64_t t31 = 5178LLU;

    t31 = (((x145/x146)+x147)^x148);

    if (t31 != 18446709372277157006LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = -42;
	static int16_t x150 = INT16_MIN;
	volatile uint8_t x152 = 23U;

    t32 = (((x149/x150)+x151)^x152);

    if (t32 != 20U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = 2;
	static volatile int16_t x158 = -1;
	static volatile int16_t x159 = INT16_MIN;
	static volatile uint16_t x160 = 10U;
	int32_t t33 = 1;

    t33 = (((x157/x158)+x159)^x160);

    if (t33 != -32780) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x161 = -123;
	int8_t x162 = -1;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t34 = 132607;

    t34 = (((x161/x162)+x163)^x164);

    if (t34 != -252) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x165 = INT64_MAX;
	int32_t x166 = -3033110;
	volatile int8_t x167 = -1;
	int8_t x168 = 1;

    t35 = (((x165/x166)+x167)^x168);

    if (t35 != -3040895990208LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MIN;
	int64_t x171 = 453341641663303LL;
	int64_t x172 = INT64_MIN;
	volatile int64_t t36 = 180LL;

    t36 = (((x169/x170)+x171)^x172);

    if (t36 != -9222918695213112505LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x173 = INT32_MAX;
	int64_t x174 = -83LL;
	static int16_t x176 = INT16_MIN;
	int64_t t37 = -235862178590LL;

    t37 = (((x173/x174)+x175)^x176);

    if (t37 != 25867379LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	volatile uint32_t x179 = 2U;
	static int32_t x180 = 966082231;
	static uint64_t t38 = 1LLU;

    t38 = (((x177/x178)+x179)^x180);

    if (t38 != 966082229LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x181 = 0;
	volatile uint16_t x182 = UINT16_MAX;
	volatile int8_t x183 = -30;
	static int8_t x184 = INT8_MAX;

    t39 = (((x181/x182)+x183)^x184);

    if (t39 != -99) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x185 = 3723U;
	static volatile int64_t x186 = INT64_MAX;
	static int16_t x187 = -15444;
	int64_t x188 = -1735821848LL;

    t40 = (((x185/x186)+x187)^x188);

    if (t40 != 1735833156LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x189 = 6;
	int8_t x190 = INT8_MIN;
	static int32_t t41 = 39;

    t41 = (((x189/x190)+x191)^x192);

    if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x193 = 903459642;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = -20510;

    t42 = (((x193/x194)+x195)^x196);

    if (t42 != 20578LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x197 = INT32_MAX;
	uint16_t x198 = 750U;
	static uint64_t x199 = 1677221451410240LLU;
	static int32_t x200 = INT32_MAX;
	uint64_t t43 = 197435649092043210LLU;

    t43 = (((x197/x198)+x199)^x200);

    if (t43 != 1677223165830128LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 26396512LLU;
	int32_t x204 = INT32_MIN;

    t44 = (((x201/x202)+x203)^x204);

    if (t44 != 18446744071588464480LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x206 = 51052;
	int16_t x207 = 5;
	int16_t x208 = INT16_MAX;

    t45 = (((x205/x206)+x207)^x208);

    if (t45 != 32762) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x209 = 103U;
	uint64_t x210 = 7455LLU;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t46 = 31083LLU;

    t46 = (((x209/x210)+x211)^x212);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = INT32_MIN;
	volatile int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	volatile int64_t x216 = 188052007245218068LL;

    t47 = (((x213/x214)+x215)^x216);

    if (t47 != -188052006065766124LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MIN;
	volatile int64_t x218 = INT64_MIN;
	volatile uint16_t x220 = 0U;
	volatile int64_t t48 = 42501886949892748LL;

    t48 = (((x217/x218)+x219)^x220);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x222 = INT64_MAX;
	int16_t x223 = -1;
	int8_t x224 = -1;

    t49 = (((x221/x222)+x223)^x224);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x225 = UINT16_MAX;
	int64_t x226 = 8025658LL;
	volatile int64_t t50 = 71334LL;

    t50 = (((x225/x226)+x227)^x228);

    if (t50 != -20LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x229 = 5571147U;
	uint8_t x230 = 98U;
	uint64_t x231 = 604472786275817LLU;
	int64_t x232 = INT64_MAX;
	volatile uint64_t t51 = 165939322514LLU;

    t51 = (((x229/x230)+x231)^x232);

    if (t51 != 9222767564068443142LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x233 = -1;
	static int16_t x234 = -777;
	int16_t x235 = -96;

    t52 = (((x233/x234)+x235)^x236);

    if (t52 != 32) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x239 = INT16_MIN;
	uint64_t t53 = 5381136148LLU;

    t53 = (((x237/x238)+x239)^x240);

    if (t53 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x241 = 488U;
	static int16_t x242 = -1;
	volatile int8_t x243 = INT8_MAX;
	int16_t x244 = -1;
	static int32_t t54 = -360949;

    t54 = (((x241/x242)+x243)^x244);

    if (t54 != 360) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	volatile int64_t t55 = -418411597580141562LL;

    t55 = (((x245/x246)+x247)^x248);

    if (t55 != 140735340904448LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = -865926;
	int64_t x251 = -1LL;
	static int8_t x252 = INT8_MIN;
	uint64_t t56 = 15772013106267857LLU;

    t56 = (((x249/x250)+x251)^x252);

    if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x253 = 287;
	int8_t x254 = INT8_MIN;
	int64_t t57 = -1836514269488357LL;

    t57 = (((x253/x254)+x255)^x256);

    if (t57 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x257 = 781967312U;
	static int16_t x258 = -1;
	int16_t x259 = -1;
	static int16_t x260 = -1;

    t58 = (((x257/x258)+x259)^x260);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x265 = -1;
	volatile int16_t x266 = 44;
	int16_t x267 = INT16_MAX;
	uint64_t x268 = 4651022LLU;

    t59 = (((x265/x266)+x267)^x268);

    if (t59 != 4622321LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x269 = 16134384600LLU;
	static int64_t x270 = -48349LL;
	volatile int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MAX;
	uint64_t t60 = 33709858553797294LLU;

    t60 = (((x269/x270)+x271)^x272);

    if (t60 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	volatile uint64_t x279 = 3331216654786083LLU;
	uint8_t x280 = UINT8_MAX;

    t61 = (((x277/x278)+x279)^x280);

    if (t61 != 3331216654786268LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x282 = INT64_MIN;
	volatile int64_t x283 = INT64_MAX;
	int16_t x284 = 16171;
	static volatile int64_t t62 = -3LL;

    t62 = (((x281/x282)+x283)^x284);

    if (t62 != 9223372036854759636LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = -1LL;
	volatile int8_t x286 = INT8_MIN;
	uint32_t x287 = 56331108U;
	int16_t x288 = -1;

    t63 = (((x285/x286)+x287)^x288);

    if (t63 != -56331109LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x289 = UINT8_MAX;
	volatile uint8_t x290 = 5U;
	uint32_t t64 = 94772U;

    t64 = (((x289/x290)+x291)^x292);

    if (t64 != 4294967160U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x297 = 91U;
	uint16_t x298 = 48U;
	int16_t x299 = INT16_MIN;

    t65 = (((x297/x298)+x299)^x300);

    if (t65 != -32747) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x301 = 58419191U;
	volatile int32_t x304 = 3980493;

    t66 = (((x301/x302)+x303)^x304);

    if (t66 != 3977604LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 194U;
	int16_t x308 = 2;
	volatile uint32_t t67 = 4U;

    t67 = (((x305/x306)+x307)^x308);

    if (t67 != 193U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	int8_t x310 = -2;
	int32_t x311 = INT32_MAX;
	int32_t x312 = INT32_MIN;

    t68 = (((x309/x310)+x311)^x312);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x314 = INT8_MAX;
	static int32_t x315 = INT32_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t69 = 46U;

    t69 = (((x313/x314)+x315)^x316);

    if (t69 != 2147483906U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x317 = 17U;
	static int32_t x318 = INT32_MIN;
	volatile uint8_t x319 = UINT8_MAX;
	volatile uint32_t x320 = 319U;
	uint32_t t70 = 327U;

    t70 = (((x317/x318)+x319)^x320);

    if (t70 != 448U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = -1;
	volatile uint16_t x322 = 1111U;
	uint32_t x323 = 15U;
	int8_t x324 = 1;
	volatile uint32_t t71 = 60U;

    t71 = (((x321/x322)+x323)^x324);

    if (t71 != 14U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x325 = UINT64_MAX;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	uint64_t t72 = 52644180LLU;

    t72 = (((x325/x326)+x327)^x328);

    if (t72 != 32766LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = INT64_MIN;
	volatile uint16_t x330 = 6137U;
	int64_t x332 = -8LL;
	volatile int64_t t73 = -3648200595LL;

    t73 = (((x329/x330)+x331)^x332);

    if (t73 != 1625978437121687LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x333 = 30U;
	int16_t x334 = 79;
	int8_t x335 = INT8_MIN;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t74 = 554U;

    t74 = (((x333/x334)+x335)^x336);

    if (t74 != 32640U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = INT64_MAX;
	volatile int8_t x339 = 46;

    t75 = (((x337/x338)+x339)^x340);

    if (t75 != -8943875914525843162LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MAX;
	static int32_t x342 = INT32_MAX;
	static uint64_t x343 = UINT64_MAX;
	volatile uint16_t x344 = 39U;
	uint64_t t76 = 128370124735540LLU;

    t76 = (((x341/x342)+x343)^x344);

    if (t76 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	static uint16_t x347 = 13U;
	int64_t x348 = INT64_MAX;
	int64_t t77 = 7822768674471691LL;

    t77 = (((x345/x346)+x347)^x348);

    if (t77 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x349 = UINT16_MAX;
	volatile uint32_t x350 = 32U;
	uint32_t x351 = UINT32_MAX;

    t78 = (((x349/x350)+x351)^x352);

    if (t78 != -9223372036854773762LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x353 = -1LL;
	int16_t x354 = -1;

    t79 = (((x353/x354)+x355)^x356);

    if (t79 != 65531LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = -1;
	int16_t x358 = -1;
	int16_t x359 = 6871;
	int64_t x360 = INT64_MAX;
	volatile int64_t t80 = -1059435922LL;

    t80 = (((x357/x358)+x359)^x360);

    if (t80 != 9223372036854768935LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = 4;
	uint16_t x362 = 20289U;
	static uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 1U;
	volatile uint32_t t81 = 1U;

    t81 = (((x361/x362)+x363)^x364);

    if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = -1;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = -621;
	int16_t x368 = -2;

    t82 = (((x365/x366)+x367)^x368);

    if (t82 != 621) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x369 = INT8_MIN;
	uint32_t x370 = UINT32_MAX;
	int32_t x372 = INT32_MIN;

    t83 = (((x369/x370)+x371)^x372);

    if (t83 != 2147483747U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MAX;
	static int32_t x376 = INT32_MIN;

    t84 = (((x373/x374)+x375)^x376);

    if (t84 != 2147450625) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x377 = INT8_MAX;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MAX;
	volatile int32_t t85 = 1380;

    t85 = (((x377/x378)+x379)^x380);

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x381 = 11;
	int32_t x382 = INT32_MAX;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t86 = 3060044;

    t86 = (((x381/x382)+x383)^x384);

    if (t86 != 2147483520) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	int32_t t87 = INT32_MAX;

    t87 = (((x385/x386)+x387)^x388);

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x390 = 17U;
	int32_t x391 = -1;
	static volatile uint32_t x392 = UINT32_MAX;
	int64_t t88 = 6LL;

    t88 = (((x389/x390)+x391)^x392);

    if (t88 != -542551296032929913LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x394 = INT16_MIN;
	int64_t t89 = 6261454458999LL;

    t89 = (((x393/x394)+x395)^x396);

    if (t89 != -5457801LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	volatile uint32_t x399 = 2U;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t90 = 105633147524603129LLU;

    t90 = (((x397/x398)+x399)^x400);

    if (t90 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x401 = INT64_MIN;
	int64_t x402 = INT64_MIN;
	int64_t x403 = -1LL;
	int16_t x404 = INT16_MIN;
	int64_t t91 = -5605LL;

    t91 = (((x401/x402)+x403)^x404);

    if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x405 = 1658562594LLU;
	volatile int64_t x406 = -1LL;
	int8_t x407 = INT8_MAX;
	int8_t x408 = -1;
	uint64_t t92 = 19027663139871LLU;

    t92 = (((x405/x406)+x407)^x408);

    if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x415 = UINT8_MAX;
	uint8_t x416 = 94U;
	uint64_t t93 = 21075719LLU;

    t93 = (((x413/x414)+x415)^x416);

    if (t93 != 161LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint8_t x419 = 6U;
	int8_t x420 = -1;
	int32_t t94 = 15;

    t94 = (((x417/x418)+x419)^x420);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x421 = UINT16_MAX;
	int8_t x422 = INT8_MIN;
	static uint16_t x423 = UINT16_MAX;
	static int8_t x424 = -1;

    t95 = (((x421/x422)+x423)^x424);

    if (t95 != -65025) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x426 = INT16_MIN;
	int64_t x427 = 19370183993095LL;
	int8_t x428 = INT8_MIN;

    t96 = (((x425/x426)+x427)^x428);

    if (t96 != 18446724703525558407LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	int16_t x431 = 214;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t97 = 24238352201LLU;

    t97 = (((x429/x430)+x431)^x432);

    if (t97 != 18446744073709551401LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x435 = INT32_MAX;
	static volatile int32_t t98 = 1847572;

    t98 = (((x433/x434)+x435)^x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x437 = INT16_MIN;
	static uint16_t x440 = 2U;
	int32_t t99 = 1260962;

    t99 = (((x437/x438)+x439)^x440);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = -39249725;
	volatile int8_t x442 = -1;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t100 = 82524LLU;

    t100 = (((x441/x442)+x443)^x444);

    if (t100 != 18446744073661161721LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x445 = INT64_MIN;
	int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	int64_t t101 = -1382221LL;

    t101 = (((x445/x446)+x447)^x448);

    if (t101 != -9223372034707292033LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = -35776LL;
	static volatile int8_t x450 = INT8_MIN;
	int32_t x451 = INT32_MIN;

    t102 = (((x449/x450)+x451)^x452);

    if (t102 != -280LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x457 = INT64_MIN;
	static volatile int64_t x458 = INT64_MIN;
	int8_t x459 = 19;
	int64_t x460 = INT64_MIN;
	int64_t t103 = 1LL;

    t103 = (((x457/x458)+x459)^x460);

    if (t103 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x461 = 200156554404833LLU;
	uint16_t x462 = 705U;
	int64_t x463 = INT64_MAX;
	uint8_t x464 = UINT8_MAX;
	uint64_t t104 = 36LLU;

    t104 = (((x461/x462)+x463)^x464);

    if (t104 != 9223372320764781849LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x465 = INT8_MAX;
	volatile int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MAX;
	volatile int64_t t105 = -9884LL;

    t105 = (((x465/x466)+x467)^x468);

    if (t105 != -2147483648LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x470 = UINT16_MAX;
	int32_t x471 = 41;
	int8_t x472 = -1;
	volatile int32_t t106 = 178762;

    t106 = (((x469/x470)+x471)^x472);

    if (t106 != -42) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = INT32_MAX;
	uint8_t x478 = 12U;
	int64_t x479 = 1555372257285594394LL;
	int64_t x480 = -148669847141LL;
	int64_t t107 = 3LL;

    t107 = (((x477/x478)+x479)^x480);

    if (t107 != -1555372384083890593LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x481 = 23U;
	volatile int8_t x482 = INT8_MIN;
	static int32_t x483 = INT32_MIN;
	static int32_t x484 = -806;
	int32_t t108 = 833006;

    t108 = (((x481/x482)+x483)^x484);

    if (t108 != 2147482842) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = 43LL;
	uint16_t x486 = 31470U;
	int16_t x487 = -7;
	uint16_t x488 = UINT16_MAX;
	int64_t t109 = 181601591161425LL;

    t109 = (((x485/x486)+x487)^x488);

    if (t109 != -65530LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x489 = -83693;
	volatile int16_t x490 = -39;
	int8_t x491 = INT8_MIN;
	static uint8_t x492 = 39U;
	volatile int32_t t110 = -791645;

    t110 = (((x489/x490)+x491)^x492);

    if (t110 != 1990) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x494 = 9U;
	int16_t x495 = INT16_MIN;
	volatile int32_t t111 = 1;

    t111 = (((x493/x494)+x495)^x496);

    if (t111 != -32784) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x497 = INT64_MAX;
	int8_t x499 = -1;

    t112 = (((x497/x498)+x499)^x500);

    if (t112 != 3074457345618385550LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x502 = 136U;
	int16_t x503 = -45;
	uint8_t x504 = 2U;
	volatile uint64_t t113 = 90545275080708176LLU;

    t113 = (((x501/x502)+x503)^x504);

    if (t113 != 135637824071393718LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x505 = INT32_MAX;
	static int8_t x506 = INT8_MAX;
	uint16_t x507 = 0U;
	int16_t x508 = 1667;

    t114 = (((x505/x506)+x507)^x508);

    if (t114 != 16908939) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x509 = INT16_MIN;
	uint32_t x510 = 8011936U;
	int16_t x511 = 2885;
	int16_t x512 = INT16_MIN;
	uint32_t t115 = 658U;

    t115 = (((x509/x510)+x511)^x512);

    if (t115 != 4294937949U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x513 = 9U;
	uint32_t x515 = 18169002U;
	int32_t x516 = INT32_MIN;
	static uint32_t t116 = 506U;

    t116 = (((x513/x514)+x515)^x516);

    if (t116 != 2165652650U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = -7358;
	int8_t x518 = -1;
	volatile int64_t x519 = -59897LL;
	volatile uint16_t x520 = 188U;
	static int64_t t117 = 910779865414164LL;

    t117 = (((x517/x518)+x519)^x520);

    if (t117 != -52615LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x521 = -8504;
	int16_t x522 = -1;
	int64_t x523 = -14458137LL;
	int64_t t118 = 433442184844118673LL;

    t118 = (((x521/x522)+x523)^x524);

    if (t118 != -14449015LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x525 = INT64_MAX;
	volatile int32_t x526 = 1;
	int32_t x527 = INT32_MIN;
	int32_t x528 = -55;

    t119 = (((x525/x526)+x527)^x528);

    if (t119 != -9223372034707292106LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	volatile int64_t x531 = INT64_MIN;
	int16_t x532 = 1;
	int64_t t120 = -2534717711494533LL;

    t120 = (((x529/x530)+x531)^x532);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x533 = INT16_MIN;
	static int64_t x534 = INT64_MIN;
	int8_t x535 = 34;
	static int64_t x536 = -4135987400478851LL;
	volatile int64_t t121 = -64820LL;

    t121 = (((x533/x534)+x535)^x536);

    if (t121 != -4135987400478881LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x537 = -1;
	int64_t x538 = -1LL;
	int8_t x539 = 4;
	static int16_t x540 = INT16_MIN;
	int64_t t122 = 736332801314LL;

    t122 = (((x537/x538)+x539)^x540);

    if (t122 != -32763LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x541 = 10662U;
	static int8_t x542 = -1;
	int64_t x543 = 10238559336LL;
	int16_t x544 = INT16_MIN;
	static volatile int64_t t123 = -15LL;

    t123 = (((x541/x542)+x543)^x544);

    if (t123 != -10238534974LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x545 = 47LLU;
	static int64_t x546 = INT64_MAX;
	int32_t x547 = INT32_MIN;
	volatile uint64_t t124 = 379LLU;

    t124 = (((x545/x546)+x547)^x548);

    if (t124 != 18446744071562068210LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x549 = UINT8_MAX;
	int8_t x550 = -4;
	static int16_t x551 = -485;
	int64_t x552 = 32314001LL;
	static volatile int64_t t125 = -1LL;

    t125 = (((x549/x550)+x551)^x552);

    if (t125 != -32313523LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x555 = INT64_MIN;
	int64_t t126 = 26646642LL;

    t126 = (((x553/x554)+x555)^x556);

    if (t126 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x558 = 1LL;
	int64_t x559 = -1LL;
	volatile uint16_t x560 = UINT16_MAX;
	int64_t t127 = -260137LL;

    t127 = (((x557/x558)+x559)^x560);

    if (t127 != 2475LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = 0;
	int64_t x562 = 78688745732668639LL;
	int64_t x563 = -1194259LL;
	int16_t x564 = -5111;

    t128 = (((x561/x562)+x563)^x564);

    if (t128 != 1190628LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x565 = -1LL;
	static uint8_t x566 = 5U;
	static volatile int64_t x568 = -5745843LL;
	volatile uint64_t t129 = 16572580LLU;

    t129 = (((x565/x566)+x567)^x568);

    if (t129 != 5745842LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x570 = INT32_MIN;
	uint8_t x571 = UINT8_MAX;
	volatile uint32_t x572 = UINT32_MAX;
	static volatile uint32_t t130 = 1639916314U;

    t130 = (((x569/x570)+x571)^x572);

    if (t130 != 4294967040U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x573 = 25U;
	int64_t x576 = 30485LL;

    t131 = (((x573/x574)+x575)^x576);

    if (t131 != 2147453162LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x577 = UINT16_MAX;
	static volatile uint64_t x578 = 484997957866814LLU;
	int32_t x579 = -1018692;
	int8_t x580 = -1;
	uint64_t t132 = 56541311181146860LLU;

    t132 = (((x577/x578)+x579)^x580);

    if (t132 != 1018691LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x581 = 11;
	int8_t x583 = -10;
	uint8_t x584 = UINT8_MAX;
	int64_t t133 = -1LL;

    t133 = (((x581/x582)+x583)^x584);

    if (t133 != -247LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x585 = 24702U;
	uint16_t x586 = UINT16_MAX;
	int32_t x587 = 9;
	volatile uint64_t x588 = 325027393646940LLU;
	volatile uint64_t t134 = 2595791513409172LLU;

    t134 = (((x585/x586)+x587)^x588);

    if (t134 != 325027393646933LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x589 = 63751;
	int8_t x590 = -30;
	static uint32_t x591 = UINT32_MAX;
	static volatile int8_t x592 = -1;
	volatile uint32_t t135 = 93U;

    t135 = (((x589/x590)+x591)^x592);

    if (t135 != 2125U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x593 = 160319128961LLU;
	volatile int32_t x594 = 210989382;
	int64_t x595 = -489150764863412LL;
	uint64_t x596 = 43LLU;

    t136 = (((x593/x594)+x595)^x596);

    if (t136 != 18446254922944689000LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x601 = INT8_MIN;
	volatile int64_t x602 = INT64_MIN;
	int64_t x604 = -12942293691605194LL;
	volatile int64_t t137 = 1LL;

    t137 = (((x601/x602)+x603)^x604);

    if (t137 != -12942293692732909LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x605 = INT16_MIN;
	static uint32_t x606 = 24333490U;
	uint16_t x607 = 1349U;
	static volatile int32_t x608 = INT32_MAX;

    t138 = (((x605/x606)+x607)^x608);

    if (t138 != 2147482122U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	volatile int32_t t139 = -169427;

    t139 = (((x609/x610)+x611)^x612);

    if (t139 != -32642) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x613 = UINT16_MAX;
	int8_t x614 = 11;
	static int8_t x615 = 5;
	int64_t x616 = 10855210985008843LL;
	volatile int64_t t140 = -3196842477LL;

    t140 = (((x613/x614)+x615)^x616);

    if (t140 != 10855210985011585LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = INT16_MIN;
	volatile int32_t t141 = -63683;

    t141 = (((x617/x618)+x619)^x620);

    if (t141 != 32884) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x621 = 3318LLU;
	uint32_t x622 = UINT32_MAX;
	static uint64_t x624 = 1708859094288537LLU;
	uint64_t t142 = 2643678LLU;

    t142 = (((x621/x622)+x623)^x624);

    if (t142 != 1708859094289142LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x625 = -26779;
	static volatile uint16_t x627 = 10U;
	static volatile uint8_t x628 = UINT8_MAX;

    t143 = (((x625/x626)+x627)^x628);

    if (t143 != -847) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	int64_t x635 = 1LL;
	static volatile int8_t x636 = 59;
	int64_t t144 = -2188494610130484LL;

    t144 = (((x633/x634)+x635)^x636);

    if (t144 != 58LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x637 = INT8_MIN;
	uint16_t x638 = 38U;
	uint32_t x639 = 0U;
	volatile uint64_t t145 = 1823LLU;

    t145 = (((x637/x638)+x639)^x640);

    if (t145 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x642 = INT32_MIN;
	static int8_t x643 = -1;
	uint8_t x644 = 1U;
	volatile int32_t t146 = 9029373;

    t146 = (((x641/x642)+x643)^x644);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x646 = UINT16_MAX;
	static uint16_t x647 = 3U;
	volatile uint32_t x648 = UINT32_MAX;

    t147 = (((x645/x646)+x647)^x648);

    if (t147 != -140739635806212LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x653 = 3;
	volatile int16_t x654 = -1;
	int8_t x655 = INT8_MAX;
	int16_t x656 = INT16_MIN;
	int32_t t148 = -500;

    t148 = (((x653/x654)+x655)^x656);

    if (t148 != -32644) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x657 = 2939U;
	volatile int64_t x658 = -3380862LL;
	static uint8_t x659 = UINT8_MAX;
	static int32_t x660 = INT32_MIN;
	volatile int64_t t149 = -1623993LL;

    t149 = (((x657/x658)+x659)^x660);

    if (t149 != -2147483393LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x661 = 7776156U;
	uint32_t x662 = 242471U;

    t150 = (((x661/x662)+x663)^x664);

    if (t150 != 29LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MAX;
	static uint8_t x667 = 1U;
	int8_t x668 = -1;
	int64_t t151 = -345LL;

    t151 = (((x665/x666)+x667)^x668);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = INT64_MAX;
	volatile uint64_t x671 = 1621LLU;
	int16_t x672 = INT16_MIN;
	uint64_t t152 = 421812LLU;

    t152 = (((x669/x670)+x671)^x672);

    if (t152 != 300083681577565LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x673 = INT64_MAX;
	uint32_t x674 = 2U;
	uint8_t x675 = 1U;
	int64_t t153 = 116396LL;

    t153 = (((x673/x674)+x675)^x676);

    if (t153 != -4611686018427420672LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x677 = -3;
	int32_t x678 = -1;
	volatile int32_t x680 = 418743;
	volatile uint32_t t154 = 28536U;

    t154 = (((x677/x678)+x679)^x680);

    if (t154 != 633650903U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x681 = -1;
	uint8_t x682 = 15U;
	int32_t x683 = -1;
	int32_t x684 = INT32_MIN;
	static int32_t t155 = INT32_MAX;

    t155 = (((x681/x682)+x683)^x684);

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = 7;
	int16_t x686 = INT16_MAX;
	static int32_t x688 = INT32_MIN;

    t156 = (((x685/x686)+x687)^x688);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x689 = -1;
	uint8_t x691 = 41U;
	static int64_t x692 = 122LL;
	volatile int64_t t157 = -2559LL;

    t157 = (((x689/x690)+x691)^x692);

    if (t157 != 83LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x694 = 137;
	static int32_t x695 = -20035;
	volatile int64_t x696 = -1LL;
	volatile int64_t t158 = 62435825298338915LL;

    t158 = (((x693/x694)+x695)^x696);

    if (t158 != 20034LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x698 = 148;
	int64_t x699 = -60705LL;
	static volatile int8_t x700 = INT8_MIN;
	volatile int64_t t159 = 1174141946044246187LL;

    t159 = (((x697/x698)+x699)^x700);

    if (t159 != 60768LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x703 = INT32_MAX;
	volatile int64_t x704 = INT64_MAX;
	static int64_t t160 = -36340328246630139LL;

    t160 = (((x701/x702)+x703)^x704);

    if (t160 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MAX;
	volatile uint8_t x708 = UINT8_MAX;
	int32_t t161 = 46903;

    t161 = (((x705/x706)+x707)^x708);

    if (t161 != 32512) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x709 = 1568U;
	volatile int32_t x710 = INT32_MAX;
	volatile int16_t x711 = INT16_MIN;
	volatile int32_t t162 = 328654635;

    t162 = (((x709/x710)+x711)^x712);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = INT16_MIN;
	int32_t x714 = INT32_MIN;
	uint64_t x716 = UINT64_MAX;
	static uint64_t t163 = 1039812754095LLU;

    t163 = (((x713/x714)+x715)^x716);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x717 = 8;
	uint16_t x718 = 8070U;
	uint8_t x720 = 23U;
	int64_t t164 = -23051891824799LL;

    t164 = (((x717/x718)+x719)^x720);

    if (t164 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x721 = -14442;
	volatile uint64_t x722 = 171928LLU;
	uint8_t x723 = 15U;
	int64_t x724 = -7LL;
	volatile uint64_t t165 = 28006752LLU;

    t165 = (((x721/x722)+x723)^x724);

    if (t165 != 18446636780283968167LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = INT16_MAX;
	int16_t x726 = -1;
	uint16_t x727 = 42U;
	static volatile int64_t x728 = INT64_MAX;

    t166 = (((x725/x726)+x727)^x728);

    if (t166 != -9223372036854743084LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x730 = 15LL;
	static uint32_t x731 = 1869046777U;
	uint16_t x732 = 2293U;
	volatile int64_t t167 = 14925259026126LL;

    t167 = (((x729/x730)+x731)^x732);

    if (t167 != 1869048931LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x733 = -6155177;
	static int32_t x734 = INT32_MIN;
	int8_t x735 = 1;

    t168 = (((x733/x734)+x735)^x736);

    if (t168 != 14) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x737 = 21;
	int32_t x738 = INT32_MIN;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = UINT32_MAX;
	uint32_t t169 = 13U;

    t169 = (((x737/x738)+x739)^x740);

    if (t169 != 127U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x742 = INT64_MAX;
	uint32_t x743 = UINT32_MAX;
	static volatile int16_t x744 = INT16_MIN;
	int64_t t170 = -1LL;

    t170 = (((x741/x742)+x743)^x744);

    if (t170 != -4294934529LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x745 = -1;
	int8_t x747 = 55;
	int32_t x748 = -1;

    t171 = (((x745/x746)+x747)^x748);

    if (t171 != -56) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x751 = 393;
	uint32_t x752 = 422629205U;
	static volatile uint32_t t172 = 102130590U;

    t172 = (((x749/x750)+x751)^x752);

    if (t172 != 422678966U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x753 = 0;
	int32_t x754 = 205797997;
	uint8_t x755 = 37U;
	int64_t x756 = -6845968LL;
	volatile int64_t t173 = 4294LL;

    t173 = (((x753/x754)+x755)^x756);

    if (t173 != -6845995LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x757 = -1;
	int32_t x758 = INT32_MIN;
	int8_t x759 = INT8_MAX;
	volatile uint32_t x760 = UINT32_MAX;

    t174 = (((x757/x758)+x759)^x760);

    if (t174 != 4294967168U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x761 = -2896784;
	volatile int16_t x762 = INT16_MAX;
	int8_t x763 = INT8_MIN;
	int32_t t175 = -1879;

    t175 = (((x761/x762)+x763)^x764);

    if (t175 != -214) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x765 = INT16_MIN;
	volatile int8_t x768 = INT8_MIN;

    t176 = (((x765/x766)+x767)^x768);

    if (t176 != -81) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x773 = 702654402767864356LL;
	static int16_t x774 = 447;
	int32_t x775 = INT32_MAX;
	int16_t x776 = -2315;
	int64_t t177 = 67645439710061205LL;

    t177 = (((x773/x774)+x775)^x776);

    if (t177 != -1571935934438658LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x777 = 961734;
	int16_t x779 = 1851;
	volatile uint32_t x780 = UINT32_MAX;
	static volatile uint32_t t178 = 444427107U;

    t178 = (((x777/x778)+x779)^x780);

    if (t178 != 4294954516U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x786 = UINT8_MAX;
	uint32_t x787 = 333U;
	volatile int32_t x788 = INT32_MIN;

    t179 = (((x785/x786)+x787)^x788);

    if (t179 != 2147483982U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x789 = UINT8_MAX;
	int64_t x790 = INT64_MIN;
	volatile int8_t x792 = -1;
	volatile int64_t t180 = -4LL;

    t180 = (((x789/x790)+x791)^x792);

    if (t180 != -2147483648LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = INT16_MAX;
	uint64_t x794 = 3696343308504496LLU;
	static int32_t x796 = -1;
	volatile uint64_t t181 = 916LLU;

    t181 = (((x793/x794)+x795)^x796);

    if (t181 != 18446744073709551436LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x797 = 60U;
	int8_t x798 = INT8_MIN;
	static int8_t x799 = INT8_MAX;
	uint8_t x800 = 31U;
	uint32_t t182 = 0U;

    t182 = (((x797/x798)+x799)^x800);

    if (t182 != 96U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x801 = INT32_MIN;
	uint8_t x804 = 2U;
	volatile int64_t t183 = -1LL;

    t183 = (((x801/x802)+x803)^x804);

    if (t183 != 58407846380464LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x805 = -1;
	static volatile uint64_t x806 = UINT64_MAX;
	uint32_t x808 = 117U;
	static uint64_t t184 = 63204454630542104LLU;

    t184 = (((x805/x806)+x807)^x808);

    if (t184 != 60049LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x810 = INT64_MIN;
	volatile int32_t x811 = INT32_MIN;
	int32_t x812 = -158047;
	volatile int64_t t185 = -26180LL;

    t185 = (((x809/x810)+x811)^x812);

    if (t185 != 2147325601LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x817 = UINT8_MAX;
	static uint64_t x818 = 13254126617597LLU;
	volatile uint64_t t186 = 17893241104946LLU;

    t186 = (((x817/x818)+x819)^x820);

    if (t186 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x821 = -1LL;
	int8_t x822 = -1;
	int32_t x823 = -50;
	static uint64_t x824 = UINT64_MAX;
	static uint64_t t187 = 592538LLU;

    t187 = (((x821/x822)+x823)^x824);

    if (t187 != 48LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x827 = -1;
	volatile uint16_t x828 = 49U;
	int64_t t188 = -53015LL;

    t188 = (((x825/x826)+x827)^x828);

    if (t188 != -50LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x829 = 67U;
	uint16_t x831 = 58U;
	uint64_t x832 = UINT64_MAX;
	uint64_t t189 = 6903299LLU;

    t189 = (((x829/x830)+x831)^x832);

    if (t189 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x833 = -1;
	int32_t x835 = INT32_MIN;
	volatile int16_t x836 = INT16_MIN;
	int64_t t190 = -6044669022LL;

    t190 = (((x833/x834)+x835)^x836);

    if (t190 != 2147450880LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x837 = INT64_MIN;
	uint8_t x838 = 3U;
	static int8_t x839 = -1;
	int64_t t191 = 338371948LL;

    t191 = (((x837/x838)+x839)^x840);

    if (t191 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x842 = UINT64_MAX;
	uint32_t x843 = 164862216U;
	static int32_t x844 = -2389156;
	uint64_t t192 = 159209464515839537LLU;

    t192 = (((x841/x842)+x843)^x844);

    if (t192 != 18446744073542308436LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x849 = 1U;
	volatile uint16_t x851 = UINT16_MAX;

    t193 = (((x849/x850)+x851)^x852);

    if (t193 != 38628U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x853 = INT32_MIN;
	uint8_t x854 = 14U;
	int8_t x855 = -1;
	volatile int64_t t194 = 10403846283LL;

    t194 = (((x853/x854)+x855)^x856);

    if (t194 != -9223372036701384119LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x858 = INT32_MAX;
	int64_t x859 = INT64_MAX;
	int32_t x860 = INT32_MAX;
	uint64_t t195 = 1LLU;

    t195 = (((x857/x858)+x859)^x860);

    if (t195 != 9223372039002239305LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x861 = INT16_MIN;
	uint32_t x862 = 24U;
	int16_t x863 = INT16_MIN;
	int32_t x864 = -1;
	volatile uint32_t t196 = 253U;

    t196 = (((x861/x862)+x863)^x864);

    if (t196 != 4116044458U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x865 = UINT16_MAX;
	static uint64_t x866 = UINT64_MAX;
	int32_t x867 = INT32_MIN;
	int8_t x868 = -1;

    t197 = (((x865/x866)+x867)^x868);

    if (t197 != 2147483647LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x871 = UINT16_MAX;
	static int64_t x872 = 1120085593LL;
	int64_t t198 = 9473422LL;

    t198 = (((x869/x870)+x871)^x872);

    if (t198 != 1120131494LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x873 = UINT8_MAX;
	int32_t x875 = -44927;
	static int16_t x876 = -3;
	volatile int32_t t199 = -1;

    t199 = (((x873/x874)+x875)^x876);

    if (t199 != 44924) { NG(); } else { ; }
	
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

