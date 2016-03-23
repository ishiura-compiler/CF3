
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

int32_t x3 = -1;
uint32_t x4 = UINT32_MAX;
uint32_t x6 = UINT32_MAX;
int16_t x9 = 792;
int8_t x10 = 1;
int32_t x13 = INT32_MAX;
volatile uint8_t x16 = 106U;
int16_t x22 = 3808;
static int8_t x23 = -31;
int32_t x26 = INT32_MIN;
uint16_t x35 = 0U;
int8_t x38 = INT8_MIN;
int64_t x46 = 39409901297709501LL;
int32_t x53 = -44519359;
static int32_t x67 = INT32_MIN;
int16_t x71 = INT16_MIN;
volatile uint16_t x72 = UINT16_MAX;
static int16_t x75 = 9431;
volatile int32_t t19 = 0;
int16_t x82 = INT16_MIN;
int32_t t21 = -186;
int8_t x104 = INT8_MIN;
int64_t x109 = INT64_MIN;
static uint32_t x110 = UINT32_MAX;
int64_t x115 = -26LL;
static uint32_t x120 = 484217U;
uint32_t t29 = 164617428U;
uint8_t x121 = UINT8_MAX;
int8_t x124 = INT8_MAX;
int32_t x129 = -498007075;
uint8_t x130 = 39U;
volatile int32_t t33 = -1;
static volatile uint8_t x139 = 69U;
volatile int32_t t34 = INT32_MAX;
static uint64_t x143 = 158728605423903LLU;
int32_t t37 = 263325202;
int64_t x155 = -1LL;
int16_t x157 = INT16_MIN;
static uint8_t x158 = 24U;
int64_t t39 = 1LL;
int32_t t41 = 207842;
uint8_t x173 = 64U;
int64_t x175 = INT64_MIN;
volatile int32_t t43 = 1113755;
volatile uint64_t t44 = UINT64_MAX;
int32_t x193 = INT32_MIN;
volatile int32_t t49 = -614667;
static int32_t t51 = -2309;
int64_t x211 = 446291992457146004LL;
volatile int16_t x212 = -1;
static uint8_t x214 = 14U;
uint16_t x215 = 3483U;
int16_t x219 = 0;
volatile int32_t t54 = 0;
static volatile uint64_t x221 = UINT64_MAX;
int16_t x224 = -5428;
volatile uint32_t x228 = 13U;
volatile uint16_t x232 = 0U;
int32_t t57 = -1;
uint32_t x239 = 3204783U;
volatile int32_t t59 = -63317061;
uint8_t x245 = UINT8_MAX;
static volatile int64_t x255 = INT64_MIN;
static uint32_t x260 = UINT32_MAX;
static int8_t x274 = INT8_MIN;
static volatile uint64_t x276 = UINT64_MAX;
int16_t x278 = 7;
int64_t t69 = 42308LL;
volatile int32_t x282 = INT32_MAX;
static int32_t t72 = -779940;
uint16_t x297 = UINT16_MAX;
static volatile uint64_t x298 = 138795LLU;
static uint16_t x299 = 28584U;
volatile int64_t t74 = 431LL;
int64_t x304 = -1LL;
static volatile int64_t t75 = 14LL;
uint64_t x308 = 235951442499816173LLU;
static uint64_t t76 = 932379LLU;
volatile int64_t t77 = -314795297LL;
volatile uint64_t x318 = 7051450163727383LLU;
int16_t x320 = INT16_MAX;
static int64_t x328 = INT64_MAX;
static uint16_t x331 = 4002U;
uint16_t x332 = 29843U;
volatile int32_t t83 = 27459611;
int16_t x339 = -2;
volatile int32_t x340 = -1;
int32_t t84 = -961738733;
int8_t x341 = -1;
int8_t x343 = INT8_MIN;
volatile uint16_t x353 = 1U;
int8_t x362 = INT8_MIN;
uint64_t x367 = UINT64_MAX;
volatile int32_t t94 = 225325625;
int8_t x381 = -1;
int32_t t95 = 970184174;
int32_t x398 = -1;
volatile int32_t x407 = -11215;
volatile int16_t x410 = INT16_MIN;
volatile int64_t x412 = 4041864966238887LL;
int8_t x415 = INT8_MAX;
static int64_t x418 = -1LL;
static uint16_t x420 = 4U;
volatile int32_t t104 = -8000;
uint32_t x421 = UINT32_MAX;
static int8_t x422 = INT8_MIN;
int8_t x423 = INT8_MIN;
uint16_t x426 = UINT16_MAX;
uint8_t x437 = UINT8_MAX;
int32_t x440 = -1;
int8_t x443 = INT8_MIN;
int32_t t110 = 199;
int64_t x449 = -1LL;
int32_t x456 = -1;
int64_t x464 = -26605743586LL;
volatile int64_t t115 = 7LL;
static uint32_t x475 = UINT32_MAX;
int8_t x479 = INT8_MIN;
int32_t x502 = INT32_MIN;
volatile int16_t x504 = 201;
int64_t x508 = -1LL;
int16_t x518 = INT16_MIN;
uint32_t x520 = 274679999U;
uint32_t t129 = 160696017U;
int32_t x521 = -1;
uint64_t x525 = UINT64_MAX;
volatile int32_t t131 = INT32_MAX;
volatile int32_t t132 = -1137;
uint16_t x533 = 1U;
int32_t x537 = INT32_MIN;
uint16_t x539 = 833U;
static uint16_t x541 = UINT16_MAX;
uint64_t x542 = 90LLU;
volatile uint32_t t135 = 103341297U;
uint64_t x546 = 237327420428505LLU;
int32_t t136 = -132871;
volatile int32_t x551 = 18;
int16_t x555 = 10289;
uint8_t x559 = UINT8_MAX;
int64_t x565 = 0LL;
static int32_t x571 = -1;
volatile int8_t x572 = INT8_MAX;
volatile int32_t t142 = 725365147;
int8_t x575 = -1;
int8_t x582 = INT8_MIN;
int8_t x583 = -1;
uint64_t t147 = 845036145642925LLU;
uint64_t x602 = UINT64_MAX;
static uint8_t x610 = UINT8_MAX;
static uint8_t x614 = 17U;
volatile int32_t t153 = -2492163;
volatile int32_t t154 = -1;
uint8_t x625 = UINT8_MAX;
static volatile uint32_t t156 = 7590334U;
static volatile int8_t x633 = INT8_MIN;
volatile int32_t t160 = 376;
volatile int32_t t162 = 298490058;
static volatile int32_t x653 = INT32_MIN;
volatile int64_t x655 = -30003099227844144LL;
static int32_t t164 = 453;
int8_t x663 = INT8_MIN;
volatile uint16_t x665 = UINT16_MAX;
uint16_t x666 = 1757U;
volatile uint16_t x669 = 211U;
uint8_t x677 = 7U;
uint16_t x679 = 2U;
volatile int8_t x694 = -34;
static volatile int16_t x695 = -1;
int8_t x697 = INT8_MAX;
volatile int32_t t174 = 1238;
uint16_t x702 = UINT16_MAX;
static uint64_t x704 = 36755LLU;
uint8_t x705 = 50U;
int8_t x713 = -1;
int16_t x715 = INT16_MIN;
int64_t x720 = INT64_MIN;
int64_t x730 = INT64_MIN;
uint8_t x740 = 114U;
volatile int32_t t185 = -8056421;
int16_t x747 = INT16_MIN;
volatile int16_t x750 = -1;
volatile int32_t t187 = -165;
int16_t x756 = INT16_MIN;
uint16_t x762 = 24289U;
volatile int32_t t191 = 6953;
int64_t x769 = INT64_MIN;
uint32_t x776 = 2067389U;
volatile uint8_t x783 = UINT8_MAX;
volatile int32_t t195 = 45048555;
int64_t x788 = INT64_MIN;
volatile int64_t t196 = -60710739274027297LL;
int32_t x791 = INT32_MIN;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	int32_t x2 = -1;
	volatile uint32_t t0 = UINT32_MAX;

    t0 = (((x1^x2)!=x3)|x4);

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = -1;
	int8_t x7 = INT8_MAX;
	int32_t x8 = -1;
	volatile int32_t t1 = -4253293;

    t1 = (((x5^x6)!=x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x11 = INT16_MIN;
	uint8_t x12 = 5U;
	int32_t t2 = 110359369;

    t2 = (((x9^x10)!=x11)|x12);

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	int32_t t3 = -675978;

    t3 = (((x13^x14)!=x15)|x16);

    if (t3 != 107) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	static int32_t x19 = INT32_MIN;
	uint16_t x20 = 13560U;
	volatile int32_t t4 = -14224;

    t4 = (((x17^x18)!=x19)|x20);

    if (t4 != 13561) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -22;
	int64_t x24 = 65763150331955789LL;
	static int64_t t5 = 10168400473459073LL;

    t5 = (((x21^x22)!=x23)|x24);

    if (t5 != 65763150331955789LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x27 = 0;
	uint16_t x28 = 1U;
	static int32_t t6 = -156;

    t6 = (((x25^x26)!=x27)|x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 2U;
	uint32_t t7 = 13723961U;

    t7 = (((x29^x30)!=x31)|x32);

    if (t7 != 3U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = INT64_MIN;
	uint32_t x34 = 211206055U;
	int64_t x36 = -1LL;
	volatile int64_t t8 = -17065LL;

    t8 = (((x33^x34)!=x35)|x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = 846U;
	int32_t t9 = -1198;

    t9 = (((x37^x38)!=x39)|x40);

    if (t9 != 847) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	static uint32_t x42 = UINT32_MAX;
	static uint8_t x43 = 0U;
	volatile int32_t x44 = -2455926;
	volatile int32_t t10 = 0;

    t10 = (((x41^x42)!=x43)|x44);

    if (t10 != -2455925) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int64_t x47 = -1LL;
	int32_t x48 = INT32_MAX;
	int32_t t11 = INT32_MAX;

    t11 = (((x45^x46)!=x47)|x48);

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -1LL;
	uint16_t x50 = 14501U;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = INT64_MAX;

    t12 = (((x49^x50)!=x51)|x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x54 = 627;
	int16_t x55 = -1;
	static uint8_t x56 = 26U;
	int32_t t13 = 24;

    t13 = (((x53^x54)!=x55)|x56);

    if (t13 != 27) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MAX;
	volatile int64_t t14 = INT64_MAX;

    t14 = (((x57^x58)!=x59)|x60);

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 2;
	volatile int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	static int64_t x64 = INT64_MAX;
	static volatile int64_t t15 = INT64_MAX;

    t15 = (((x61^x62)!=x63)|x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	static uint16_t x66 = UINT16_MAX;
	static volatile uint32_t x68 = 110295U;
	uint32_t t16 = 7U;

    t16 = (((x65^x66)!=x67)|x68);

    if (t16 != 110295U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static int32_t x70 = INT32_MIN;
	static int32_t t17 = 27397;

    t17 = (((x69^x70)!=x71)|x72);

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	int8_t x76 = -23;
	volatile int32_t t18 = 35029274;

    t18 = (((x73^x74)!=x75)|x76);

    if (t18 != -23) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	static volatile uint64_t x78 = 8551460597LLU;
	int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MIN;

    t19 = (((x77^x78)!=x79)|x80);

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = -6;
	static volatile int32_t x83 = -1072692178;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = -275;

    t20 = (((x81^x82)!=x83)|x84);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -40376151;
	int32_t x86 = -1;
	int64_t x87 = -1LL;
	volatile int32_t x88 = -38666900;

    t21 = (((x85^x86)!=x87)|x88);

    if (t21 != -38666899) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static int16_t x90 = INT16_MIN;
	uint64_t x91 = 16773LLU;
	uint16_t x92 = 17523U;
	int32_t t22 = -885;

    t22 = (((x89^x90)!=x91)|x92);

    if (t22 != 17523) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = 1;
	int16_t x95 = -1;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 461264;

    t23 = (((x93^x94)!=x95)|x96);

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -1LL;
	volatile int32_t x98 = -1;
	static uint8_t x99 = 6U;
	int8_t x100 = 1;
	int32_t t24 = -838273;

    t24 = (((x97^x98)!=x99)|x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	int64_t x102 = -12233730192LL;
	uint32_t x103 = 346U;
	volatile int32_t t25 = 985044;

    t25 = (((x101^x102)!=x103)|x104);

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x105 = -4;
	static int8_t x106 = INT8_MIN;
	static volatile int8_t x107 = -1;
	int16_t x108 = INT16_MIN;
	int32_t t26 = -249161675;

    t26 = (((x105^x106)!=x107)|x108);

    if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x111 = INT16_MIN;
	uint16_t x112 = 8722U;
	static volatile int32_t t27 = 54299;

    t27 = (((x109^x110)!=x111)|x112);

    if (t27 != 8723) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MAX;
	uint16_t x114 = 11132U;
	static volatile int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 906;

    t28 = (((x113^x114)!=x115)|x116);

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -127042808LL;
	volatile int16_t x118 = INT16_MAX;
	int16_t x119 = -318;

    t29 = (((x117^x118)!=x119)|x120);

    if (t29 != 484217U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = -1;
	int16_t x123 = INT16_MAX;
	static volatile int32_t t30 = -50;

    t30 = (((x121^x122)!=x123)|x124);

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MAX;
	uint32_t x127 = 16617159U;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t31 = UINT32_MAX;

    t31 = (((x125^x126)!=x127)|x128);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x131 = 7974U;
	int64_t x132 = -1LL;
	volatile int64_t t32 = 0LL;

    t32 = (((x129^x130)!=x131)|x132);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 2U;
	int32_t x136 = INT32_MIN;

    t33 = (((x133^x134)!=x135)|x136);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	static volatile uint8_t x138 = 116U;
	int32_t x140 = INT32_MAX;

    t34 = (((x137^x138)!=x139)|x140);

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 5655;
	int32_t x142 = 100441657;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t35 = -5272881;

    t35 = (((x141^x142)!=x143)|x144);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 51;
	static int16_t x146 = INT16_MIN;
	static uint8_t x147 = UINT8_MAX;
	uint16_t x148 = 1U;
	int32_t t36 = 1301;

    t36 = (((x145^x146)!=x147)|x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	int8_t x150 = -1;
	int32_t x151 = 131039;
	uint8_t x152 = UINT8_MAX;

    t37 = (((x149^x150)!=x151)|x152);

    if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 2;
	int8_t x154 = -1;
	uint32_t x156 = 1273684U;
	uint32_t t38 = 490U;

    t38 = (((x153^x154)!=x155)|x156);

    if (t38 != 1273685U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x159 = -6171;
	int64_t x160 = -1LL;

    t39 = (((x157^x158)!=x159)|x160);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	static int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	static uint8_t x164 = 0U;
	static int32_t t40 = -2033;

    t40 = (((x161^x162)!=x163)|x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -819;
	uint32_t x166 = 15U;
	static int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;

    t41 = (((x165^x166)!=x167)|x168);

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = UINT8_MAX;
	int64_t x170 = -57684427731149872LL;
	volatile int32_t x171 = INT32_MIN;
	int32_t x172 = -7701;
	int32_t t42 = -13653;

    t42 = (((x169^x170)!=x171)|x172);

    if (t42 != -7701) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = -1;
	static uint16_t x176 = 1049U;

    t43 = (((x173^x174)!=x175)|x176);

    if (t43 != 1049) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = 720;
	int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;

    t44 = (((x177^x178)!=x179)|x180);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	int32_t x182 = INT32_MAX;
	int8_t x183 = -1;
	int8_t x184 = 0;
	volatile int32_t t45 = 3831;

    t45 = (((x181^x182)!=x183)|x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 601626545595100505LLU;
	static uint64_t x186 = 3876639569LLU;
	int8_t x187 = INT8_MAX;
	static int8_t x188 = -1;
	volatile int32_t t46 = -43;

    t46 = (((x185^x186)!=x187)|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 10976U;
	static uint64_t x190 = 574251488LLU;
	int64_t x191 = 7160720762726481LL;
	int64_t x192 = INT64_MAX;
	int64_t t47 = INT64_MAX;

    t47 = (((x189^x190)!=x191)|x192);

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = 95015LLU;
	uint32_t x195 = 283022275U;
	static uint32_t x196 = 0U;
	uint32_t t48 = 952465945U;

    t48 = (((x193^x194)!=x195)|x196);

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;

    t49 = (((x197^x198)!=x199)|x200);

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 1;
	int32_t x202 = INT32_MIN;
	volatile uint32_t x203 = 128219874U;
	volatile uint16_t x204 = 14U;
	volatile int32_t t50 = -2538;

    t50 = (((x201^x202)!=x203)|x204);

    if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	static uint32_t x206 = UINT32_MAX;
	static volatile int8_t x207 = -25;
	uint8_t x208 = 14U;

    t51 = (((x205^x206)!=x207)|x208);

    if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MAX;
	int64_t x210 = -25341916LL;
	volatile int32_t t52 = 372;

    t52 = (((x209^x210)!=x211)|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -11;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -4185783;

    t53 = (((x213^x214)!=x215)|x216);

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 123356522411703LLU;
	static uint8_t x218 = 121U;
	int8_t x220 = -1;

    t54 = (((x217^x218)!=x219)|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 2306767LLU;
	volatile int32_t x223 = -1;
	volatile int32_t t55 = 221;

    t55 = (((x221^x222)!=x223)|x224);

    if (t55 != -5427) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = 277;
	volatile uint32_t x226 = 166U;
	volatile uint8_t x227 = 10U;
	uint32_t t56 = 4000502U;

    t56 = (((x225^x226)!=x227)|x228);

    if (t56 != 13U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 0LLU;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MAX;

    t57 = (((x229^x230)!=x231)|x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	uint32_t x234 = 488U;
	int32_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	uint32_t t58 = UINT32_MAX;

    t58 = (((x233^x234)!=x235)|x236);

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x238 = -125782;
	uint8_t x240 = 2U;

    t59 = (((x237^x238)!=x239)|x240);

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	int64_t t60 = -11083558LL;

    t60 = (((x241^x242)!=x243)|x244);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MAX;
	static uint16_t x247 = 3U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

    t61 = (((x245^x246)!=x247)|x248);

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int32_t x250 = 12073370;
	int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

    t62 = (((x249^x250)!=x251)|x252);

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	int16_t x256 = -1;
	int32_t t63 = -212;

    t63 = (((x253^x254)!=x255)|x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	static volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	static uint32_t t64 = UINT32_MAX;

    t64 = (((x257^x258)!=x259)|x260);

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MAX;
	uint16_t x263 = 39U;
	uint16_t x264 = 51U;
	volatile int32_t t65 = 353558825;

    t65 = (((x261^x262)!=x263)|x264);

    if (t65 != 51) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	static uint16_t x266 = UINT16_MAX;
	static int64_t x267 = INT64_MIN;
	uint64_t x268 = 46070LLU;
	volatile uint64_t t66 = 7819562LLU;

    t66 = (((x265^x266)!=x267)|x268);

    if (t66 != 46071LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 5LLU;
	uint16_t x270 = 2802U;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t67 = -68;

    t67 = (((x269^x270)!=x271)|x272);

    if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	static uint64_t t68 = UINT64_MAX;

    t68 = (((x273^x274)!=x275)|x276);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	static uint64_t x279 = 4070843677219962LLU;
	volatile int64_t x280 = INT64_MIN;

    t69 = (((x277^x278)!=x279)|x280);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 5739U;
	static volatile uint16_t x283 = 96U;
	uint64_t x284 = 8587185LLU;
	static uint64_t t70 = 2268694LLU;

    t70 = (((x281^x282)!=x283)|x284);

    if (t70 != 8587185LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	int64_t x286 = INT64_MIN;
	volatile int16_t x287 = INT16_MAX;
	static uint32_t x288 = 6U;
	volatile uint32_t t71 = 381443U;

    t71 = (((x285^x286)!=x287)|x288);

    if (t71 != 7U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MAX;
	int8_t x292 = 0;

    t72 = (((x289^x290)!=x291)|x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	static volatile int32_t x294 = INT32_MIN;
	uint32_t x295 = 19883U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 3;

    t73 = (((x293^x294)!=x295)|x296);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x300 = -4276706LL;

    t74 = (((x297^x298)!=x299)|x300);

    if (t74 != -4276705LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1038;
	int64_t x302 = INT64_MAX;
	int16_t x303 = -596;

    t75 = (((x301^x302)!=x303)|x304);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = 55778U;
	uint32_t x306 = 874U;
	int32_t x307 = -293649241;

    t76 = (((x305^x306)!=x307)|x308);

    if (t76 != 235951442499816173LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	uint32_t x310 = 46946185U;
	static int64_t x311 = 3212008551160LL;
	int64_t x312 = INT64_MIN;

    t77 = (((x309^x310)!=x311)|x312);

    if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 14416473U;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = 15U;
	int32_t x316 = -1;
	volatile int32_t t78 = -188050907;

    t78 = (((x313^x314)!=x315)|x316);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MAX;
	uint64_t x319 = 24760451714LLU;
	int32_t t79 = -304;

    t79 = (((x317^x318)!=x319)|x320);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	static int16_t x322 = -1;
	int8_t x323 = -1;
	uint16_t x324 = 5U;
	int32_t t80 = -839202;

    t80 = (((x321^x322)!=x323)|x324);

    if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = -3504;
	uint64_t x327 = UINT64_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = (((x325^x326)!=x327)|x328);

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 14;
	volatile uint64_t x330 = 857044447843860LLU;
	int32_t t82 = -1;

    t82 = (((x329^x330)!=x331)|x332);

    if (t82 != 29843) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 135;
	volatile uint32_t x334 = 1U;
	int64_t x335 = -1LL;
	volatile int8_t x336 = INT8_MIN;

    t83 = (((x333^x334)!=x335)|x336);

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	int8_t x338 = -1;

    t84 = (((x337^x338)!=x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = 10189743528677856LLU;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 30140457;

    t85 = (((x341^x342)!=x343)|x344);

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = -1;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = -1;
	int32_t t86 = 1;

    t86 = (((x345^x346)!=x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	int64_t x350 = -1LL;
	int16_t x351 = INT16_MAX;
	volatile uint64_t x352 = 9919LLU;
	uint64_t t87 = 3675140071LLU;

    t87 = (((x349^x350)!=x351)|x352);

    if (t87 != 9919LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = -1LL;
	volatile uint16_t x355 = 5U;
	volatile int16_t x356 = INT16_MIN;
	int32_t t88 = 97631;

    t88 = (((x353^x354)!=x355)|x356);

    if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint32_t x358 = UINT32_MAX;
	static uint32_t x359 = 2548573U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -1;

    t89 = (((x357^x358)!=x359)|x360);

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 5U;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t90 = 40570LL;

    t90 = (((x361^x362)!=x363)|x364);

    if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 832;
	int32_t x366 = INT32_MAX;
	uint16_t x368 = 1966U;
	volatile int32_t t91 = 1897;

    t91 = (((x365^x366)!=x367)|x368);

    if (t91 != 1967) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 69LLU;
	int8_t x370 = INT8_MIN;
	int8_t x371 = 1;
	int32_t x372 = INT32_MAX;
	int32_t t92 = INT32_MAX;

    t92 = (((x369^x370)!=x371)|x372);

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 9U;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = -1;
	int32_t t93 = -213067950;

    t93 = (((x373^x374)!=x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -51243431190267293LL;
	volatile int64_t x378 = -1LL;
	uint16_t x379 = 5733U;
	static volatile uint8_t x380 = UINT8_MAX;

    t94 = (((x377^x378)!=x379)|x380);

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -1349336LL;
	uint16_t x383 = 23145U;
	static int16_t x384 = 10990;

    t95 = (((x381^x382)!=x383)|x384);

    if (t95 != 10991) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MAX;
	int16_t x387 = -5;
	static volatile int32_t x388 = -1447804;
	int32_t t96 = 231502;

    t96 = (((x385^x386)!=x387)|x388);

    if (t96 != -1447803) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = -39187136479954501LL;
	volatile int8_t x390 = -1;
	uint8_t x391 = 39U;
	int16_t x392 = -3537;
	int32_t t97 = 16633811;

    t97 = (((x389^x390)!=x391)|x392);

    if (t97 != -3537) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	int64_t x394 = INT64_MAX;
	int64_t x395 = INT64_MIN;
	uint16_t x396 = 583U;
	volatile int32_t t98 = 1;

    t98 = (((x393^x394)!=x395)|x396);

    if (t98 != 583) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 11U;
	uint64_t x399 = 9924330LLU;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = -761156446;

    t99 = (((x397^x398)!=x399)|x400);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 104411283730LL;
	uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 0U;
	volatile int16_t x404 = INT16_MIN;
	int32_t t100 = -1;

    t100 = (((x401^x402)!=x403)|x404);

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MIN;
	uint32_t x408 = 15349U;
	volatile uint32_t t101 = 503155U;

    t101 = (((x405^x406)!=x407)|x408);

    if (t101 != 15349U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	static int64_t t102 = 55LL;

    t102 = (((x409^x410)!=x411)|x412);

    if (t102 != 4041864966238887LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	int64_t x414 = INT64_MIN;
	static volatile int8_t x416 = 7;
	int32_t t103 = 143;

    t103 = (((x413^x414)!=x415)|x416);

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int16_t x419 = INT16_MAX;

    t104 = (((x417^x418)!=x419)|x420);

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x424 = INT64_MIN;
	int64_t t105 = 41848897LL;

    t105 = (((x421^x422)!=x423)|x424);

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 1U;
	uint8_t x427 = 15U;
	uint64_t x428 = 4168845210288LLU;
	uint64_t t106 = 721859LLU;

    t106 = (((x425^x426)!=x427)|x428);

    if (t106 != 4168845210289LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	volatile int64_t x430 = INT64_MIN;
	static uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MIN;
	static int32_t t107 = -114344;

    t107 = (((x429^x430)!=x431)|x432);

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MAX;
	uint16_t x435 = 8U;
	static uint16_t x436 = 63U;
	int32_t t108 = -739;

    t108 = (((x433^x434)!=x435)|x436);

    if (t108 != 63) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x438 = 4848466;
	static int32_t x439 = -1;
	int32_t t109 = -2309;

    t109 = (((x437^x438)!=x439)|x440);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 9281412U;
	uint8_t x442 = 4U;
	int8_t x444 = INT8_MIN;

    t110 = (((x441^x442)!=x443)|x444);

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x445 = -1;
	static volatile int64_t x446 = INT64_MIN;
	int64_t x447 = INT64_MIN;
	static volatile uint16_t x448 = UINT16_MAX;
	int32_t t111 = 2;

    t111 = (((x445^x446)!=x447)|x448);

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x450 = -542;
	uint64_t x451 = 4LLU;
	volatile uint8_t x452 = 3U;
	static volatile int32_t t112 = 686;

    t112 = (((x449^x450)!=x451)|x452);

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = INT64_MIN;
	volatile uint8_t x455 = 6U;
	int32_t t113 = 0;

    t113 = (((x453^x454)!=x455)|x456);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = 0;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = UINT32_MAX;
	static uint16_t x460 = UINT16_MAX;
	static volatile int32_t t114 = 53627262;

    t114 = (((x457^x458)!=x459)|x460);

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 24767459035949127LLU;
	uint8_t x462 = 11U;
	int64_t x463 = INT64_MAX;

    t115 = (((x461^x462)!=x463)|x464);

    if (t115 != -26605743585LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	int32_t x466 = 292280413;
	int16_t x467 = 1080;
	static int32_t x468 = INT32_MIN;
	int32_t t116 = -64687465;

    t116 = (((x465^x466)!=x467)|x468);

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MIN;
	int16_t x471 = INT16_MIN;
	int32_t x472 = -61;
	volatile int32_t t117 = 6603246;

    t117 = (((x469^x470)!=x471)|x472);

    if (t117 != -61) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	int32_t t118 = 0;

    t118 = (((x473^x474)!=x475)|x476);

    if (t118 != -32767) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 6U;
	volatile int16_t x478 = -1;
	int64_t x480 = 1525257003530LL;
	static int64_t t119 = 107196401LL;

    t119 = (((x477^x478)!=x479)|x480);

    if (t119 != 1525257003531LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -973;
	int16_t x482 = INT16_MIN;
	uint64_t x483 = 198LLU;
	int64_t x484 = INT64_MIN;
	int64_t t120 = 75766767LL;

    t120 = (((x481^x482)!=x483)|x484);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	int32_t x486 = -237411;
	int16_t x487 = -1;
	int32_t x488 = 12859538;
	volatile int32_t t121 = 856;

    t121 = (((x485^x486)!=x487)|x488);

    if (t121 != 12859539) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	volatile uint64_t x490 = UINT64_MAX;
	static int16_t x491 = -5473;
	volatile uint8_t x492 = 119U;
	volatile int32_t t122 = -2010903;

    t122 = (((x489^x490)!=x491)|x492);

    if (t122 != 119) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	static uint32_t x494 = UINT32_MAX;
	static uint16_t x495 = 13660U;
	int32_t x496 = -1;
	volatile int32_t t123 = 18224272;

    t123 = (((x493^x494)!=x495)|x496);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = -14;
	int8_t x499 = 24;
	int64_t x500 = INT64_MIN;
	int64_t t124 = 14003LL;

    t124 = (((x497^x498)!=x499)|x500);

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 209714971LLU;
	uint64_t x503 = 6974669LLU;
	int32_t t125 = -64941379;

    t125 = (((x501^x502)!=x503)|x504);

    if (t125 != 201) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = 20583042087695207LL;
	int16_t x506 = INT16_MAX;
	uint64_t x507 = 12LLU;
	int64_t t126 = 367LL;

    t126 = (((x505^x506)!=x507)|x508);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	volatile int32_t x510 = INT32_MIN;
	static uint16_t x511 = 1519U;
	static uint8_t x512 = 15U;
	volatile int32_t t127 = 246637;

    t127 = (((x509^x510)!=x511)|x512);

    if (t127 != 15) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = 3;
	static int64_t x514 = -5215467LL;
	int64_t x515 = INT64_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	int32_t t128 = -609;

    t128 = (((x513^x514)!=x515)|x516);

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 11569U;
	int32_t x519 = -4043212;

    t129 = (((x517^x518)!=x519)|x520);

    if (t129 != 274679999U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MIN;
	int64_t x523 = -1LL;
	uint16_t x524 = 9U;
	int32_t t130 = -1837;

    t130 = (((x521^x522)!=x523)|x524);

    if (t130 != 9) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = INT8_MAX;
	int32_t x527 = -762735;
	static int32_t x528 = INT32_MAX;

    t131 = (((x525^x526)!=x527)|x528);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 24752U;
	int32_t x530 = INT32_MIN;
	volatile int16_t x531 = INT16_MIN;
	int16_t x532 = 7;

    t132 = (((x529^x530)!=x531)|x532);

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x534 = INT8_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = -170;

    t133 = (((x533^x534)!=x535)|x536);

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x538 = INT16_MIN;
	volatile uint32_t x540 = 118562202U;
	volatile uint32_t t134 = 32537U;

    t134 = (((x537^x538)!=x539)|x540);

    if (t134 != 118562203U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x543 = INT32_MIN;
	uint32_t x544 = 664265U;

    t135 = (((x541^x542)!=x543)|x544);

    if (t135 != 664265U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = 8620366363941191LLU;
	uint16_t x547 = 437U;
	uint16_t x548 = 17408U;

    t136 = (((x545^x546)!=x547)|x548);

    if (t136 != 17409) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	uint64_t x550 = 1LLU;
	uint8_t x552 = UINT8_MAX;
	static volatile int32_t t137 = 38;

    t137 = (((x549^x550)!=x551)|x552);

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x553 = -52;
	uint16_t x554 = 8U;
	static int64_t x556 = INT64_MIN;
	static int64_t t138 = -929052913LL;

    t138 = (((x553^x554)!=x555)|x556);

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -36;
	int16_t x558 = INT16_MIN;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t139 = 14641103;

    t139 = (((x557^x558)!=x559)|x560);

    if (t139 != -2147483647) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 2U;
	static int32_t x562 = INT32_MIN;
	int16_t x563 = -1;
	uint64_t x564 = 1001192986482497101LLU;
	volatile uint64_t t140 = 4243433355620LLU;

    t140 = (((x561^x562)!=x563)|x564);

    if (t140 != 1001192986482497101LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	volatile uint32_t x567 = 286U;
	volatile uint16_t x568 = UINT16_MAX;
	int32_t t141 = -245;

    t141 = (((x565^x566)!=x567)|x568);

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = 3U;
	uint8_t x570 = 2U;

    t142 = (((x569^x570)!=x571)|x572);

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	uint16_t x574 = UINT16_MAX;
	uint8_t x576 = 4U;
	static int32_t t143 = 0;

    t143 = (((x573^x574)!=x575)|x576);

    if (t143 != 5) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 0U;
	int32_t x578 = -306233;
	int8_t x579 = INT8_MAX;
	static int32_t x580 = -1;
	static int32_t t144 = 418094;

    t144 = (((x577^x578)!=x579)|x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	volatile int8_t x584 = -56;
	static int32_t t145 = 153931602;

    t145 = (((x581^x582)!=x583)|x584);

    if (t145 != -55) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int16_t x586 = -142;
	static uint16_t x587 = 720U;
	uint16_t x588 = 181U;
	int32_t t146 = -2173;

    t146 = (((x585^x586)!=x587)|x588);

    if (t146 != 181) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 7U;
	int32_t x590 = -1;
	int8_t x591 = INT8_MIN;
	uint64_t x592 = 2LLU;

    t147 = (((x589^x590)!=x591)|x592);

    if (t147 != 3LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1273825;
	volatile int16_t x594 = -1;
	int16_t x595 = INT16_MIN;
	int32_t x596 = INT32_MIN;
	static volatile int32_t t148 = 7197421;

    t148 = (((x593^x594)!=x595)|x596);

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = 0;
	volatile int32_t x598 = -1;
	uint32_t x599 = 159397609U;
	static int32_t x600 = 0;
	volatile int32_t t149 = -13;

    t149 = (((x597^x598)!=x599)|x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 7U;
	int16_t x603 = INT16_MAX;
	static int8_t x604 = INT8_MIN;
	volatile int32_t t150 = -16741516;

    t150 = (((x601^x602)!=x603)|x604);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int16_t x606 = 193;
	volatile uint16_t x607 = 4163U;
	static int32_t x608 = -1383055;
	int32_t t151 = 100659565;

    t151 = (((x605^x606)!=x607)|x608);

    if (t151 != -1383055) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 33730929137542786LL;
	static uint16_t x611 = 0U;
	int32_t x612 = INT32_MIN;
	volatile int32_t t152 = -1163556;

    t152 = (((x609^x610)!=x611)|x612);

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	static int32_t x615 = -951855859;
	uint16_t x616 = 0U;

    t153 = (((x613^x614)!=x615)|x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	volatile int32_t x618 = 1504416;
	uint8_t x619 = 0U;
	volatile int16_t x620 = INT16_MIN;

    t154 = (((x617^x618)!=x619)|x620);

    if (t154 != -32767) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x621 = UINT32_MAX;
	int8_t x622 = 0;
	int32_t x623 = -41;
	volatile int32_t x624 = -1;
	volatile int32_t t155 = -2;

    t155 = (((x621^x622)!=x623)|x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 2U;
	int8_t x627 = INT8_MIN;
	uint32_t x628 = 170782U;

    t156 = (((x625^x626)!=x627)|x628);

    if (t156 != 170783U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -2606482;
	int32_t x630 = 84;
	volatile uint16_t x631 = 352U;
	int32_t x632 = -153819251;
	int32_t t157 = -115;

    t157 = (((x629^x630)!=x631)|x632);

    if (t157 != -153819251) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x634 = 8U;
	static int32_t x635 = 53;
	uint64_t x636 = UINT64_MAX;
	uint64_t t158 = UINT64_MAX;

    t158 = (((x633^x634)!=x635)|x636);

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1125;
	uint8_t x638 = 5U;
	static volatile int64_t x639 = -1LL;
	uint64_t x640 = UINT64_MAX;
	static uint64_t t159 = UINT64_MAX;

    t159 = (((x637^x638)!=x639)|x640);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = INT16_MIN;
	static uint16_t x642 = 3U;
	int32_t x643 = -1;
	int16_t x644 = 11;

    t160 = (((x641^x642)!=x643)|x644);

    if (t160 != 11) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x645 = 16U;
	uint16_t x646 = 1402U;
	int16_t x647 = INT16_MIN;
	int32_t x648 = -1;
	volatile int32_t t161 = -94819;

    t161 = (((x645^x646)!=x647)|x648);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x649 = 224645U;
	static int16_t x650 = 4;
	volatile uint32_t x651 = 3349490U;
	uint16_t x652 = UINT16_MAX;

    t162 = (((x649^x650)!=x651)|x652);

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x654 = UINT16_MAX;
	int64_t x656 = INT64_MIN;
	int64_t t163 = 51389LL;

    t163 = (((x653^x654)!=x655)|x656);

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	static uint32_t x658 = UINT32_MAX;
	int16_t x659 = 53;
	volatile uint16_t x660 = 104U;

    t164 = (((x657^x658)!=x659)|x660);

    if (t164 != 105) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int32_t x662 = INT32_MIN;
	int32_t x664 = INT32_MIN;
	static int32_t t165 = -801847513;

    t165 = (((x661^x662)!=x663)|x664);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x667 = 2145022786252LLU;
	uint16_t x668 = 14U;
	int32_t t166 = 59130;

    t166 = (((x665^x666)!=x667)|x668);

    if (t166 != 15) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x670 = 25U;
	int8_t x671 = -2;
	int16_t x672 = INT16_MIN;
	volatile int32_t t167 = -161;

    t167 = (((x669^x670)!=x671)|x672);

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MAX;
	int64_t x674 = -368470787457122465LL;
	int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MIN;
	int64_t t168 = 1143656556901LL;

    t168 = (((x673^x674)!=x675)|x676);

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x678 = INT8_MIN;
	int32_t x680 = 287;
	int32_t t169 = -17;

    t169 = (((x677^x678)!=x679)|x680);

    if (t169 != 287) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	static volatile int32_t x682 = INT32_MIN;
	uint8_t x683 = UINT8_MAX;
	int8_t x684 = INT8_MAX;
	int32_t t170 = 159699527;

    t170 = (((x681^x682)!=x683)|x684);

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 27982LLU;
	static volatile int8_t x686 = -1;
	int32_t x687 = -597;
	int8_t x688 = -1;
	volatile int32_t t171 = -29;

    t171 = (((x685^x686)!=x687)|x688);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = UINT8_MAX;
	int64_t x690 = 0LL;
	int64_t x691 = INT64_MAX;
	uint16_t x692 = UINT16_MAX;
	volatile int32_t t172 = 95;

    t172 = (((x689^x690)!=x691)|x692);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	int8_t x696 = 1;
	volatile int32_t t173 = -2175;

    t173 = (((x693^x694)!=x695)|x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	int16_t x699 = 10723;
	int16_t x700 = INT16_MAX;

    t174 = (((x697^x698)!=x699)|x700);

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x701 = -1;
	static int32_t x703 = 53349;
	volatile uint64_t t175 = 16246095036896LLU;

    t175 = (((x701^x702)!=x703)|x704);

    if (t175 != 36755LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MAX;
	static volatile uint8_t x707 = UINT8_MAX;
	static uint8_t x708 = 6U;
	volatile int32_t t176 = 0;

    t176 = (((x705^x706)!=x707)|x708);

    if (t176 != 7) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = 61U;
	uint32_t x710 = 421868U;
	uint8_t x711 = UINT8_MAX;
	int8_t x712 = INT8_MAX;
	volatile int32_t t177 = 52;

    t177 = (((x709^x710)!=x711)|x712);

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MAX;
	uint64_t x716 = UINT64_MAX;
	uint64_t t178 = UINT64_MAX;

    t178 = (((x713^x714)!=x715)|x716);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -7;
	volatile uint64_t x718 = UINT64_MAX;
	uint32_t x719 = UINT32_MAX;
	int64_t t179 = 337258110LL;

    t179 = (((x717^x718)!=x719)|x720);

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MAX;
	static volatile uint64_t x722 = 69LLU;
	volatile int32_t x723 = -737014670;
	static int8_t x724 = -1;
	volatile int32_t t180 = -60;

    t180 = (((x721^x722)!=x723)|x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 385;
	static int64_t x726 = 2403LL;
	int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;
	int64_t t181 = -57145LL;

    t181 = (((x725^x726)!=x727)|x728);

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -3;
	int8_t x731 = 4;
	int64_t x732 = INT64_MIN;
	int64_t t182 = 100165253641LL;

    t182 = (((x729^x730)!=x731)|x732);

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 403U;
	uint64_t x734 = 29LLU;
	uint16_t x735 = 2038U;
	static volatile int16_t x736 = -1;
	static int32_t t183 = 6997;

    t183 = (((x733^x734)!=x735)|x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 5989U;
	static int64_t x738 = -1LL;
	uint16_t x739 = 331U;
	int32_t t184 = -8892962;

    t184 = (((x737^x738)!=x739)|x740);

    if (t184 != 115) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x741 = INT16_MIN;
	volatile uint32_t x742 = 261U;
	int8_t x743 = INT8_MIN;
	static int16_t x744 = -1;

    t185 = (((x741^x742)!=x743)|x744);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x746 = UINT8_MAX;
	int8_t x748 = -1;
	static int32_t t186 = -4;

    t186 = (((x745^x746)!=x747)|x748);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 1U;
	uint64_t x751 = 77LLU;
	static volatile int8_t x752 = INT8_MAX;

    t187 = (((x749^x750)!=x751)|x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = -54LL;
	volatile int32_t x754 = INT32_MIN;
	int8_t x755 = INT8_MAX;
	volatile int32_t t188 = 16;

    t188 = (((x753^x754)!=x755)|x756);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 135384265553752129LLU;
	volatile uint32_t x758 = UINT32_MAX;
	static volatile int8_t x759 = -1;
	volatile int8_t x760 = 0;
	int32_t t189 = -203;

    t189 = (((x757^x758)!=x759)|x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	volatile int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	int32_t t190 = -3627269;

    t190 = (((x761^x762)!=x763)|x764);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x765 = INT32_MIN;
	int16_t x766 = -1;
	int32_t x767 = 127805581;
	int8_t x768 = 10;

    t191 = (((x765^x766)!=x767)|x768);

    if (t191 != 11) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x770 = 9083146U;
	int16_t x771 = INT16_MIN;
	uint16_t x772 = UINT16_MAX;
	static int32_t t192 = -26159930;

    t192 = (((x769^x770)!=x771)|x772);

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	uint64_t x774 = 881905474130387589LLU;
	int64_t x775 = INT64_MIN;
	volatile uint32_t t193 = 16U;

    t193 = (((x773^x774)!=x775)|x776);

    if (t193 != 2067389U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	static int8_t x778 = -29;
	int32_t x779 = INT32_MIN;
	static uint16_t x780 = UINT16_MAX;
	volatile int32_t t194 = -1;

    t194 = (((x777^x778)!=x779)|x780);

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint64_t x782 = 3642495LLU;
	int16_t x784 = INT16_MIN;

    t195 = (((x781^x782)!=x783)|x784);

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -265716;
	static int16_t x786 = INT16_MAX;
	uint64_t x787 = 2353325526644LLU;

    t196 = (((x785^x786)!=x787)|x788);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1470543123822376891LL;
	uint32_t x790 = UINT32_MAX;
	int8_t x792 = INT8_MIN;
	static int32_t t197 = -18133040;

    t197 = (((x789^x790)!=x791)|x792);

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = 26944220;
	int64_t x794 = 608497534267400941LL;
	uint8_t x795 = 20U;
	static int8_t x796 = INT8_MIN;
	static volatile int32_t t198 = 11111616;

    t198 = (((x793^x794)!=x795)|x796);

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	int64_t x798 = INT64_MIN;
	static uint64_t x799 = 142LLU;
	int64_t x800 = -1LL;
	volatile int64_t t199 = 39227382650464781LL;

    t199 = (((x797^x798)!=x799)|x800);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

