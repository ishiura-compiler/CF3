
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

static int16_t x4 = -1;
int8_t x7 = INT8_MIN;
int8_t x12 = -1;
int32_t t3 = 23;
uint8_t x18 = 1U;
int8_t x22 = INT8_MAX;
int8_t x24 = -20;
uint32_t x25 = UINT32_MAX;
int8_t x27 = 1;
static int8_t x28 = INT8_MIN;
int32_t x29 = INT32_MIN;
int32_t x36 = INT32_MIN;
int32_t x37 = -1;
volatile uint16_t x43 = 968U;
int32_t x46 = INT32_MIN;
uint8_t x48 = 48U;
int32_t t11 = -45208018;
int64_t x54 = INT64_MIN;
volatile uint64_t x57 = UINT64_MAX;
static int16_t x63 = INT16_MIN;
uint16_t x64 = 3930U;
volatile int32_t t15 = -260046;
static uint16_t x67 = UINT16_MAX;
static int32_t x68 = INT32_MIN;
int64_t x71 = INT64_MIN;
volatile int64_t x90 = -27728097377566LL;
volatile uint64_t t21 = 8271914202270LLU;
volatile uint16_t x97 = 2247U;
uint16_t x100 = 1375U;
volatile int32_t x103 = -195115528;
uint32_t t24 = 135U;
int32_t x105 = INT32_MIN;
int64_t x111 = -1LL;
int32_t t26 = -8335;
int16_t x123 = INT16_MIN;
volatile uint64_t x138 = UINT64_MAX;
int64_t x143 = INT64_MIN;
uint16_t x148 = UINT16_MAX;
int16_t x149 = INT16_MIN;
int16_t x152 = INT16_MIN;
int16_t x156 = INT16_MAX;
uint16_t x157 = 8473U;
static int64_t t39 = 0LL;
static int64_t x168 = INT64_MIN;
uint32_t x179 = 1888775U;
static int64_t x187 = INT64_MIN;
volatile int64_t x188 = -636034LL;
int32_t x190 = -5690085;
uint16_t x197 = UINT16_MAX;
int16_t x206 = INT16_MIN;
int16_t x208 = -1;
uint16_t x209 = 10U;
static int8_t x215 = INT8_MIN;
uint32_t t52 = 93854313U;
uint32_t x220 = 261U;
volatile uint32_t t53 = 1U;
int16_t x229 = INT16_MAX;
int64_t x234 = -2288636557947LL;
static uint64_t t57 = 820514632662939560LLU;
static int16_t x237 = -1;
static volatile int16_t x240 = INT16_MIN;
volatile int32_t t58 = -1956730;
int64_t x242 = -134477052LL;
static int8_t x243 = INT8_MIN;
int32_t t59 = 11094;
int8_t x247 = INT8_MAX;
volatile int32_t t61 = -8757485;
uint64_t x253 = 13102778LLU;
uint64_t x256 = UINT64_MAX;
uint8_t x261 = 12U;
static uint16_t x266 = UINT16_MAX;
int32_t x274 = INT32_MIN;
volatile uint64_t t67 = 381LLU;
int32_t x277 = INT32_MAX;
static volatile int8_t x279 = 1;
volatile int64_t x284 = 863LL;
static volatile int32_t t70 = 59974200;
volatile int16_t x299 = -1;
int8_t x313 = -14;
int64_t x315 = -6557631LL;
int64_t x324 = INT64_MAX;
int32_t x326 = -1;
static volatile int32_t t78 = 551194176;
static uint8_t x330 = UINT8_MAX;
volatile int8_t x342 = -1;
int32_t t82 = -1;
uint16_t x346 = 29U;
static uint32_t x347 = 1972U;
uint32_t x350 = 16564725U;
static uint8_t x357 = UINT8_MAX;
volatile int32_t t87 = 39723;
uint32_t x369 = 118U;
int32_t x370 = INT32_MIN;
int64_t x375 = 405621371865LL;
volatile uint8_t x377 = 2U;
volatile int32_t t91 = -1334;
int8_t x388 = -1;
int32_t t92 = 2;
uint32_t x395 = 3U;
volatile int16_t x396 = -1;
uint64_t x405 = 14845LLU;
static int32_t x410 = INT32_MIN;
uint16_t x412 = UINT16_MAX;
int32_t t98 = -2615;
static int32_t x413 = INT32_MIN;
int32_t t99 = -12;
static uint8_t x419 = 2U;
int32_t x423 = -1;
int8_t x425 = INT8_MIN;
static int64_t x426 = INT64_MIN;
volatile uint32_t t102 = 29468U;
volatile int64_t x432 = INT64_MIN;
volatile int8_t x434 = INT8_MAX;
uint8_t x442 = 19U;
int16_t x450 = INT16_MIN;
int8_t x454 = INT8_MIN;
int64_t x456 = INT64_MIN;
static int64_t x462 = 842072821867LL;
uint32_t x464 = UINT32_MAX;
static int8_t x465 = -43;
int8_t x468 = 5;
int32_t x469 = INT32_MIN;
static int8_t x471 = INT8_MAX;
uint16_t x474 = UINT16_MAX;
uint64_t x475 = 124985094521397094LLU;
volatile int64_t x478 = -1LL;
static uint16_t x480 = 127U;
int16_t x485 = INT16_MIN;
int16_t x495 = INT16_MIN;
int32_t x497 = INT32_MIN;
uint64_t x499 = 3542404453261031LLU;
uint64_t x511 = 1321566598121569LLU;
int8_t x513 = INT8_MAX;
int64_t x521 = -1LL;
uint8_t x528 = 31U;
int64_t x534 = 61LL;
volatile int16_t x540 = -3370;
int16_t x542 = INT16_MIN;
static volatile int16_t x546 = INT16_MIN;
int32_t x562 = INT32_MIN;
uint32_t x567 = 206360799U;
static uint16_t x570 = 4213U;
int8_t x580 = INT8_MAX;
int8_t x592 = 4;
volatile int16_t x596 = -1;
volatile int8_t x612 = 7;
volatile int32_t t146 = 35088490;
volatile int32_t t148 = 4752594;
static uint64_t x621 = 865541LLU;
static uint16_t x623 = 889U;
static int64_t t150 = -879421239289469835LL;
int32_t x641 = INT32_MIN;
int8_t x643 = INT8_MIN;
static volatile int32_t t154 = -380425;
uint8_t x646 = 3U;
volatile int8_t x654 = -1;
volatile int64_t t157 = 0LL;
volatile int64_t x657 = INT64_MAX;
static volatile int32_t x669 = INT32_MIN;
int64_t x674 = INT64_MIN;
static int8_t x680 = 1;
static volatile int32_t t165 = 27008693;
int8_t x691 = INT8_MIN;
static int64_t x695 = -28942299LL;
int64_t x701 = 0LL;
volatile uint64_t x705 = 0LLU;
int64_t x712 = INT64_MIN;
int8_t x731 = -1;
int32_t t177 = 296119;
uint32_t t178 = 256381U;
int16_t x746 = -1;
uint64_t x747 = 2353763846576269991LLU;
static uint64_t x762 = UINT64_MAX;
static uint32_t x764 = 4135U;
int16_t x766 = -498;
uint16_t x780 = UINT16_MAX;
uint32_t x793 = 1283392U;
volatile int64_t t191 = -970679775231LL;
static int64_t x797 = INT64_MIN;
int16_t x801 = 7;
static int32_t t194 = 55371010;
uint8_t x814 = 15U;
volatile uint16_t x817 = 14328U;
int8_t x820 = -1;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint8_t x2 = 3U;
	static volatile int16_t x3 = INT16_MIN;
	volatile int32_t t0 = -633625;

    t0 = (((x1==x2)!=x3)/x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int32_t x6 = -34895244;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = 112884045;

    t1 = (((x5==x6)!=x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x10 = 81U;
	volatile uint16_t x11 = UINT16_MAX;
	int32_t t2 = -125139;

    t2 = (((x9==x10)!=x11)/x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int8_t x15 = 1;
	int8_t x16 = INT8_MAX;

    t3 = (((x13==x14)!=x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -37;
	int16_t x19 = -1;
	uint64_t x20 = 82LLU;
	uint64_t t4 = 3464066632LLU;

    t4 = (((x17==x18)!=x19)/x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int32_t x23 = -375920;
	int32_t t5 = 387733;

    t5 = (((x21==x22)!=x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x26 = -1;
	int32_t t6 = -21379;

    t6 = (((x25==x26)!=x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -1;
	int16_t x31 = INT16_MIN;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = 371163;

    t7 = (((x29==x30)!=x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int32_t x34 = -1;
	uint16_t x35 = 553U;
	static volatile int32_t t8 = -512758960;

    t8 = (((x33==x34)!=x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 1381;
	int32_t x39 = -180;
	volatile int64_t x40 = INT64_MIN;
	int64_t t9 = -207LL;

    t9 = (((x37==x38)!=x39)/x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 5U;
	static int8_t x42 = -1;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -5;

    t10 = (((x41==x42)!=x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	int16_t x47 = INT16_MIN;

    t11 = (((x45==x46)!=x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	uint16_t x50 = 7U;
	static int64_t x51 = 905LL;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = -20477074062540LL;

    t12 = (((x49==x50)!=x51)/x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 112696012499727LLU;
	static uint64_t x55 = UINT64_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 125723642LLU;

    t13 = (((x53==x54)!=x55)/x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = 2;
	uint16_t x59 = 222U;
	static uint8_t x60 = 26U;
	volatile int32_t t14 = 103597;

    t14 = (((x57==x58)!=x59)/x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int8_t x62 = 5;

    t15 = (((x61==x62)!=x63)/x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 29;
	int64_t x66 = -1LL;
	static volatile int32_t t16 = -3;

    t16 = (((x65==x66)!=x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x70 = UINT32_MAX;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -1;

    t17 = (((x69==x70)!=x71)/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = UINT8_MAX;
	int16_t x78 = 6240;
	int64_t x79 = INT64_MIN;
	volatile uint32_t x80 = UINT32_MAX;
	static uint32_t t18 = 45251036U;

    t18 = (((x77==x78)!=x79)/x80);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	static int8_t x82 = INT8_MIN;
	static int64_t x83 = -1LL;
	uint32_t x84 = 84307765U;
	static uint32_t t19 = 2544023U;

    t19 = (((x81==x82)!=x83)/x84);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = 0U;
	uint8_t x87 = UINT8_MAX;
	volatile int64_t x88 = INT64_MAX;
	static int64_t t20 = 63782135451LL;

    t20 = (((x85==x86)!=x87)/x88);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 0;
	volatile int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;

    t21 = (((x89==x90)!=x91)/x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MAX;
	int16_t x95 = -30;
	int64_t x96 = -9683759558LL;
	volatile int64_t t22 = -53438458842787338LL;

    t22 = (((x93==x94)!=x95)/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x98 = 5104459251LLU;
	uint8_t x99 = UINT8_MAX;
	int32_t t23 = -1077546;

    t23 = (((x97==x98)!=x99)/x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x101 = 18793LLU;
	uint16_t x102 = UINT16_MAX;
	volatile uint32_t x104 = UINT32_MAX;

    t24 = (((x101==x102)!=x103)/x104);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -6452LL;
	int64_t t25 = 28LL;

    t25 = (((x105==x106)!=x107)/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = 1;
	int8_t x110 = -53;
	static int8_t x112 = -12;

    t26 = (((x109==x110)!=x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = INT8_MIN;
	static volatile uint16_t x114 = UINT16_MAX;
	volatile int8_t x115 = -1;
	int8_t x116 = -1;
	static volatile int32_t t27 = -1;

    t27 = (((x113==x114)!=x115)/x116);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -1LL;
	int64_t x118 = INT64_MAX;
	int32_t x119 = -1;
	int16_t x120 = -1;
	int32_t t28 = 532358;

    t28 = (((x117==x118)!=x119)/x120);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -1LL;
	int32_t x122 = INT32_MIN;
	int32_t x124 = -1;
	volatile int32_t t29 = -68436196;

    t29 = (((x121==x122)!=x123)/x124);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -51;
	static int64_t x126 = 119LL;
	int32_t x127 = -1;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t30 = 1005251;

    t30 = (((x125==x126)!=x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = 11195630117LLU;
	uint64_t x130 = 532845LLU;
	int32_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t31 = 127410068;

    t31 = (((x129==x130)!=x131)/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x133 = 0U;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = -1;
	static uint64_t x136 = UINT64_MAX;
	uint64_t t32 = 545LLU;

    t32 = (((x133==x134)!=x135)/x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	static uint16_t x139 = 7774U;
	uint8_t x140 = UINT8_MAX;
	int32_t t33 = -43387;

    t33 = (((x137==x138)!=x139)/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x141 = -1;
	volatile uint32_t x142 = 355U;
	int8_t x144 = 21;
	int32_t t34 = -103917577;

    t34 = (((x141==x142)!=x143)/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MAX;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MIN;
	volatile int32_t t35 = -21539310;

    t35 = (((x145==x146)!=x147)/x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	int32_t t36 = 1953;

    t36 = (((x149==x150)!=x151)/x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = INT64_MAX;
	int64_t x154 = -1651339702LL;
	int8_t x155 = -1;
	static int32_t t37 = -56671166;

    t37 = (((x153==x154)!=x155)/x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x158 = 0U;
	static uint64_t x159 = 983109LLU;
	int64_t x160 = INT64_MAX;
	volatile int64_t t38 = -704128049668LL;

    t38 = (((x157==x158)!=x159)/x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x161 = 0LLU;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -1;
	static volatile int64_t x164 = -671685LL;

    t39 = (((x161==x162)!=x163)/x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x165 = UINT16_MAX;
	int8_t x166 = 5;
	int32_t x167 = INT32_MIN;
	int64_t t40 = 360788327165957LL;

    t40 = (((x165==x166)!=x167)/x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	static volatile int8_t x172 = -1;
	int32_t t41 = -91133559;

    t41 = (((x169==x170)!=x171)/x172);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = INT16_MAX;
	volatile int16_t x174 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = UINT8_MAX;
	int32_t t42 = -3191349;

    t42 = (((x173==x174)!=x175)/x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x177 = INT64_MIN;
	volatile uint16_t x178 = UINT16_MAX;
	volatile int16_t x180 = -116;
	static volatile int32_t t43 = 2;

    t43 = (((x177==x178)!=x179)/x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MAX;
	volatile int64_t x183 = INT64_MIN;
	int8_t x184 = 1;
	int32_t t44 = 1;

    t44 = (((x181==x182)!=x183)/x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	int64_t t45 = -33196476038521243LL;

    t45 = (((x185==x186)!=x187)/x188);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x189 = 12401257207385LLU;
	static uint64_t x191 = 133719163LLU;
	volatile uint64_t x192 = 104696887756356LLU;
	uint64_t t46 = 1890LLU;

    t46 = (((x189==x190)!=x191)/x192);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MAX;
	volatile int8_t x194 = INT8_MAX;
	int8_t x195 = 23;
	uint16_t x196 = UINT16_MAX;
	int32_t t47 = 16777;

    t47 = (((x193==x194)!=x195)/x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x198 = 0U;
	uint32_t x199 = 2928U;
	int16_t x200 = -1;
	static volatile int32_t t48 = -439362;

    t48 = (((x197==x198)!=x199)/x200);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x201 = 5461;
	int16_t x202 = INT16_MAX;
	int32_t x203 = 2574;
	static volatile int32_t x204 = INT32_MIN;
	int32_t t49 = 112;

    t49 = (((x201==x202)!=x203)/x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MAX;
	static volatile uint8_t x207 = 80U;
	volatile int32_t t50 = 50006;

    t50 = (((x205==x206)!=x207)/x208);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x210 = 867222842U;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;
	static int32_t t51 = 1702569;

    t51 = (((x209==x210)!=x211)/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -212;
	int8_t x214 = 0;
	static uint32_t x216 = 4U;

    t52 = (((x213==x214)!=x215)/x216);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;

    t53 = (((x217==x218)!=x219)/x220);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = 3353;
	int8_t x222 = -1;
	volatile int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 0;

    t54 = (((x221==x222)!=x223)/x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x225 = -1;
	uint32_t x226 = 24U;
	int16_t x227 = INT16_MIN;
	volatile int32_t x228 = INT32_MAX;
	volatile int32_t t55 = 287466438;

    t55 = (((x225==x226)!=x227)/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x230 = 5LLU;
	static int64_t x231 = 68208286895149581LL;
	int32_t x232 = INT32_MIN;
	volatile int32_t t56 = 13;

    t56 = (((x229==x230)!=x231)/x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int8_t x235 = -3;
	static uint64_t x236 = UINT64_MAX;

    t57 = (((x233==x234)!=x235)/x236);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x238 = 534239031605917LLU;
	int32_t x239 = INT32_MIN;

    t58 = (((x237==x238)!=x239)/x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x241 = UINT32_MAX;
	uint8_t x244 = UINT8_MAX;

    t59 = (((x241==x242)!=x243)/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MIN;
	volatile int32_t x246 = -2821444;
	int16_t x248 = INT16_MAX;
	volatile int32_t t60 = -10722776;

    t60 = (((x245==x246)!=x247)/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x249 = INT64_MIN;
	uint16_t x250 = 56U;
	uint16_t x251 = 3U;
	int16_t x252 = INT16_MIN;

    t61 = (((x249==x250)!=x251)/x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x254 = 31284U;
	int8_t x255 = -1;
	uint64_t t62 = 13951LLU;

    t62 = (((x253==x254)!=x255)/x256);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x257 = 5U;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 84836LLU;
	uint64_t x260 = 31355745127LLU;
	uint64_t t63 = 1743031378LLU;

    t63 = (((x257==x258)!=x259)/x260);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x262 = 14617702644150LL;
	uint8_t x263 = 126U;
	volatile int32_t x264 = -371;
	volatile int32_t t64 = -641423;

    t64 = (((x261==x262)!=x263)/x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = 113U;
	volatile int64_t x267 = INT64_MIN;
	static uint8_t x268 = 2U;
	int32_t t65 = 1;

    t65 = (((x265==x266)!=x267)/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x269 = INT32_MIN;
	uint32_t x270 = 25U;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t x272 = 3LLU;
	static volatile uint64_t t66 = 5993471288091653LLU;

    t66 = (((x269==x270)!=x271)/x272);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x273 = UINT32_MAX;
	static int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;

    t67 = (((x273==x274)!=x275)/x276);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x278 = INT16_MIN;
	int64_t x280 = 25LL;
	volatile int64_t t68 = 1196LL;

    t68 = (((x277==x278)!=x279)/x280);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	int32_t x282 = -1755;
	static int16_t x283 = INT16_MAX;
	int64_t t69 = -19027149723481941LL;

    t69 = (((x281==x282)!=x283)/x284);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = 1U;
	int64_t x286 = -182389776421889636LL;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;

    t70 = (((x285==x286)!=x287)/x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = INT64_MAX;
	int16_t x294 = -181;
	int64_t x295 = 284827328LL;
	int8_t x296 = -3;
	volatile int32_t t71 = 163;

    t71 = (((x293==x294)!=x295)/x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t72 = -24966561;

    t72 = (((x297==x298)!=x299)/x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	static int64_t x307 = -1LL;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t73 = -842364;

    t73 = (((x305==x306)!=x307)/x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = -1LL;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t74 = 744529;

    t74 = (((x309==x310)!=x311)/x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x314 = INT64_MAX;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t75 = -110584;

    t75 = (((x313==x314)!=x315)/x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = INT8_MIN;
	static int64_t x318 = 54222333LL;
	int64_t x319 = -422LL;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t76 = 605029287383423721LLU;

    t76 = (((x317==x318)!=x319)/x320);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x321 = -1LL;
	static int16_t x322 = 469;
	uint16_t x323 = 1325U;
	volatile int64_t t77 = 449075356596LL;

    t77 = (((x321==x322)!=x323)/x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = UINT64_MAX;
	int32_t x327 = -7;
	int8_t x328 = -1;

    t78 = (((x325==x326)!=x327)/x328);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = 3486576LLU;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 225020857LLU;
	volatile uint64_t t79 = 19110371LLU;

    t79 = (((x329==x330)!=x331)/x332);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -70142222095578036LL;
	int64_t x336 = -10705095418LL;
	volatile int64_t t80 = -25741LL;

    t80 = (((x333==x334)!=x335)/x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = -4;
	int64_t x339 = -9557518933736319LL;
	int16_t x340 = INT16_MAX;
	volatile int32_t t81 = 94549;

    t81 = (((x337==x338)!=x339)/x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = 1;
	uint32_t x343 = 1034427U;
	volatile int16_t x344 = 5;

    t82 = (((x341==x342)!=x343)/x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = 58568U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = -2039;

    t83 = (((x345==x346)!=x347)/x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = -1LL;
	static int32_t x351 = INT32_MAX;
	int16_t x352 = -1;
	volatile int32_t t84 = -38;

    t84 = (((x349==x350)!=x351)/x352);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x353 = 4U;
	uint32_t x354 = UINT32_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t85 = -79662647;

    t85 = (((x353==x354)!=x355)/x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MAX;
	static volatile int32_t t86 = 934020025;

    t86 = (((x357==x358)!=x359)/x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	static int64_t x363 = INT64_MAX;
	uint8_t x364 = UINT8_MAX;

    t87 = (((x361==x362)!=x363)/x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x371 = INT64_MIN;
	static uint16_t x372 = 26483U;
	static int32_t t88 = -267656512;

    t88 = (((x369==x370)!=x371)/x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = 117533LLU;
	int64_t x374 = INT64_MIN;
	volatile int32_t x376 = 4433;
	static int32_t t89 = 1385;

    t89 = (((x373==x374)!=x375)/x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x378 = INT8_MAX;
	int16_t x379 = INT16_MAX;
	int16_t x380 = 6306;
	volatile int32_t t90 = 1;

    t90 = (((x377==x378)!=x379)/x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x381 = -1;
	static uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 95U;
	uint8_t x384 = UINT8_MAX;

    t91 = (((x381==x382)!=x383)/x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x385 = -1;
	int64_t x386 = 255LL;
	volatile int32_t x387 = INT32_MAX;

    t92 = (((x385==x386)!=x387)/x388);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	volatile int64_t x390 = INT64_MAX;
	uint32_t x391 = 1513408620U;
	uint64_t x392 = 1946615506LLU;
	static uint64_t t93 = 209LLU;

    t93 = (((x389==x390)!=x391)/x392);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = INT16_MAX;
	static volatile uint8_t x394 = UINT8_MAX;
	volatile int32_t t94 = 0;

    t94 = (((x393==x394)!=x395)/x396);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MAX;
	uint8_t x398 = 125U;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	volatile int32_t t95 = 928449;

    t95 = (((x397==x398)!=x399)/x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x401 = 0U;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MAX;
	volatile int32_t t96 = 74575;

    t96 = (((x401==x402)!=x403)/x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	uint32_t x408 = 2025531767U;
	volatile uint32_t t97 = 166U;

    t97 = (((x405==x406)!=x407)/x408);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x409 = INT8_MAX;
	int64_t x411 = -1LL;

    t98 = (((x409==x410)!=x411)/x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x414 = 22U;
	static int16_t x415 = -1;
	int32_t x416 = INT32_MIN;

    t99 = (((x413==x414)!=x415)/x416);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x417 = INT64_MIN;
	int8_t x418 = -33;
	static int8_t x420 = -1;
	static int32_t t100 = -21719078;

    t100 = (((x417==x418)!=x419)/x420);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x421 = -2;
	int64_t x422 = INT64_MIN;
	int16_t x424 = -566;
	int32_t t101 = 117531265;

    t101 = (((x421==x422)!=x423)/x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x427 = INT64_MIN;
	volatile uint32_t x428 = 1741U;

    t102 = (((x425==x426)!=x427)/x428);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = INT16_MIN;
	volatile int32_t x430 = -1;
	volatile int64_t x431 = -1LL;
	volatile int64_t t103 = 68417184LL;

    t103 = (((x429==x430)!=x431)/x432);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x433 = 103U;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = 914U;
	static volatile int32_t t104 = 1051579231;

    t104 = (((x433==x434)!=x435)/x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x441 = INT16_MIN;
	int64_t x443 = -5119174124634LL;
	int64_t x444 = -1LL;
	int64_t t105 = 75117LL;

    t105 = (((x441==x442)!=x443)/x444);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x445 = UINT32_MAX;
	uint8_t x446 = 31U;
	static uint32_t x447 = 115258320U;
	int8_t x448 = INT8_MAX;
	static volatile int32_t t106 = 38;

    t106 = (((x445==x446)!=x447)/x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = -1;
	int16_t x451 = 0;
	static uint16_t x452 = UINT16_MAX;
	int32_t t107 = 28;

    t107 = (((x449==x450)!=x451)/x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x455 = INT32_MIN;
	int64_t t108 = 14487909681535LL;

    t108 = (((x453==x454)!=x455)/x456);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x457 = INT8_MAX;
	static int64_t x458 = -1LL;
	uint8_t x459 = UINT8_MAX;
	uint32_t x460 = UINT32_MAX;
	static uint32_t t109 = 285876719U;

    t109 = (((x457==x458)!=x459)/x460);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = 17446308967576650LL;
	static int16_t x463 = INT16_MIN;
	uint32_t t110 = 15U;

    t110 = (((x461==x462)!=x463)/x464);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x466 = -1;
	static uint64_t x467 = 9814495453LLU;
	static int32_t t111 = 595201;

    t111 = (((x465==x466)!=x467)/x468);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x470 = INT32_MIN;
	int64_t x472 = -1LL;
	int64_t t112 = -6510LL;

    t112 = (((x469==x470)!=x471)/x472);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x473 = INT8_MAX;
	volatile uint64_t x476 = 11897LLU;
	static uint64_t t113 = 5382437369179945865LLU;

    t113 = (((x473==x474)!=x475)/x476);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x477 = -1;
	uint64_t x479 = UINT64_MAX;
	int32_t t114 = -249809;

    t114 = (((x477==x478)!=x479)/x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x481 = 1U;
	int32_t x482 = -1;
	static int32_t x483 = -30080;
	int64_t x484 = -1LL;
	volatile int64_t t115 = -240588751LL;

    t115 = (((x481==x482)!=x483)/x484);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x486 = UINT64_MAX;
	uint64_t x487 = UINT64_MAX;
	int32_t x488 = -113621022;
	int32_t t116 = 989932650;

    t116 = (((x485==x486)!=x487)/x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x489 = 247;
	int64_t x490 = -1LL;
	int64_t x491 = -1LL;
	int32_t x492 = INT32_MIN;
	int32_t t117 = -8341117;

    t117 = (((x489==x490)!=x491)/x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x493 = 1553;
	int16_t x494 = INT16_MIN;
	static int16_t x496 = INT16_MIN;
	volatile int32_t t118 = 29710;

    t118 = (((x493==x494)!=x495)/x496);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x498 = UINT64_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t119 = -1783;

    t119 = (((x497==x498)!=x499)/x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = -1LL;
	int8_t x502 = -1;
	static int64_t x503 = INT64_MAX;
	uint32_t x504 = 2U;
	uint32_t t120 = 76754185U;

    t120 = (((x501==x502)!=x503)/x504);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = INT64_MIN;
	uint16_t x506 = 2901U;
	int64_t x507 = INT64_MIN;
	volatile uint32_t x508 = UINT32_MAX;
	volatile uint32_t t121 = 0U;

    t121 = (((x505==x506)!=x507)/x508);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x509 = -1;
	int16_t x510 = -1;
	int16_t x512 = INT16_MAX;
	int32_t t122 = -30643;

    t122 = (((x509==x510)!=x511)/x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x514 = 17;
	static int8_t x515 = INT8_MIN;
	static int8_t x516 = INT8_MAX;
	int32_t t123 = -35953594;

    t123 = (((x513==x514)!=x515)/x516);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x517 = UINT8_MAX;
	int8_t x518 = -1;
	int16_t x519 = -1;
	uint16_t x520 = 53U;
	static volatile int32_t t124 = 125024561;

    t124 = (((x517==x518)!=x519)/x520);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x522 = INT32_MIN;
	int8_t x523 = -1;
	int8_t x524 = INT8_MAX;
	int32_t t125 = -231;

    t125 = (((x521==x522)!=x523)/x524);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x525 = INT64_MIN;
	volatile int64_t x526 = INT64_MAX;
	uint64_t x527 = 1007LLU;
	static int32_t t126 = 1;

    t126 = (((x525==x526)!=x527)/x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = -118;
	uint16_t x531 = 110U;
	uint16_t x532 = 12U;
	int32_t t127 = 34375384;

    t127 = (((x529==x530)!=x531)/x532);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	int32_t x535 = INT32_MIN;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t128 = 1724899727LLU;

    t128 = (((x533==x534)!=x535)/x536);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x537 = -3530;
	volatile uint16_t x538 = 3371U;
	int16_t x539 = 8080;
	volatile int32_t t129 = 56479467;

    t129 = (((x537==x538)!=x539)/x540);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x541 = 3357U;
	static int16_t x543 = INT16_MIN;
	int64_t x544 = 466988907074295LL;
	static volatile int64_t t130 = 265098683083626LL;

    t130 = (((x541==x542)!=x543)/x544);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = -1589933;
	int64_t x547 = INT64_MIN;
	int8_t x548 = -12;
	int32_t t131 = -11372;

    t131 = (((x545==x546)!=x547)/x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x549 = INT64_MIN;
	int64_t x550 = -1LL;
	int32_t x551 = -651070127;
	volatile int64_t x552 = INT64_MIN;
	int64_t t132 = 969835987451LL;

    t132 = (((x549==x550)!=x551)/x552);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x557 = -1;
	static volatile uint16_t x558 = UINT16_MAX;
	int16_t x559 = -1;
	uint32_t x560 = 133794061U;
	static uint32_t t133 = 91873961U;

    t133 = (((x557==x558)!=x559)/x560);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x561 = INT16_MIN;
	int32_t x563 = 5298685;
	static volatile uint32_t x564 = 38257239U;
	uint32_t t134 = 205308U;

    t134 = (((x561==x562)!=x563)/x564);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = INT64_MAX;
	static volatile int64_t x566 = 7832166156LL;
	int32_t x568 = INT32_MIN;
	volatile int32_t t135 = 1;

    t135 = (((x565==x566)!=x567)/x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x569 = -2055;
	uint16_t x571 = 1U;
	int64_t x572 = 412628421982312LL;
	volatile int64_t t136 = -519797867465111576LL;

    t136 = (((x569==x570)!=x571)/x572);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x573 = -1;
	int64_t x574 = -1LL;
	int64_t x575 = INT64_MIN;
	int16_t x576 = 178;
	volatile int32_t t137 = -348;

    t137 = (((x573==x574)!=x575)/x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x577 = 2U;
	int16_t x578 = INT16_MIN;
	uint16_t x579 = 13U;
	int32_t t138 = 24769099;

    t138 = (((x577==x578)!=x579)/x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x581 = -1;
	static uint64_t x582 = 7556743LLU;
	int32_t x583 = 228107392;
	static int64_t x584 = -1LL;
	static volatile int64_t t139 = 1313315940587318959LL;

    t139 = (((x581==x582)!=x583)/x584);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x585 = INT16_MIN;
	volatile uint64_t x586 = 43806626687500LLU;
	int8_t x587 = -1;
	int64_t x588 = INT64_MAX;
	volatile int64_t t140 = -1LL;

    t140 = (((x585==x586)!=x587)/x588);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = INT64_MIN;
	int32_t x590 = -1;
	static int32_t x591 = INT32_MIN;
	int32_t t141 = 11877;

    t141 = (((x589==x590)!=x591)/x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x593 = INT8_MIN;
	int8_t x594 = -1;
	uint64_t x595 = 17475324LLU;
	int32_t t142 = 1;

    t142 = (((x593==x594)!=x595)/x596);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x597 = -2;
	uint64_t x598 = 2343466LLU;
	uint32_t x599 = 22U;
	volatile int64_t x600 = 1686985367913LL;
	static volatile int64_t t143 = -2LL;

    t143 = (((x597==x598)!=x599)/x600);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x601 = -32;
	int8_t x602 = INT8_MIN;
	int16_t x603 = 178;
	static int32_t x604 = 713701;
	volatile int32_t t144 = -12723;

    t144 = (((x601==x602)!=x603)/x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x605 = -1;
	static volatile int16_t x606 = INT16_MAX;
	int64_t x607 = INT64_MAX;
	int8_t x608 = 1;
	int32_t t145 = 0;

    t145 = (((x605==x606)!=x607)/x608);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x609 = 645772766;
	uint8_t x610 = UINT8_MAX;
	int64_t x611 = INT64_MIN;

    t146 = (((x609==x610)!=x611)/x612);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x613 = 11810;
	int32_t x614 = 297293086;
	int64_t x615 = INT64_MAX;
	int64_t x616 = -1LL;
	int64_t t147 = 269245194LL;

    t147 = (((x613==x614)!=x615)/x616);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x617 = 0U;
	uint32_t x618 = 2U;
	int8_t x619 = INT8_MIN;
	static int32_t x620 = 1;

    t148 = (((x617==x618)!=x619)/x620);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x622 = UINT8_MAX;
	volatile int32_t x624 = INT32_MAX;
	int32_t t149 = 0;

    t149 = (((x621==x622)!=x623)/x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = 172U;
	uint8_t x626 = 3U;
	uint64_t x627 = 60198928LLU;
	int64_t x628 = INT64_MIN;

    t150 = (((x625==x626)!=x627)/x628);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	int8_t x630 = -1;
	static uint32_t x631 = UINT32_MAX;
	volatile uint32_t x632 = 5U;
	uint32_t t151 = 341095U;

    t151 = (((x629==x630)!=x631)/x632);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = 7128;
	int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MAX;
	static int32_t x636 = -1;
	int32_t t152 = -362548621;

    t152 = (((x633==x634)!=x635)/x636);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = INT32_MIN;
	uint64_t x638 = 1824571641243029LLU;
	static volatile int32_t x639 = 1;
	int8_t x640 = INT8_MIN;
	volatile int32_t t153 = 1024660924;

    t153 = (((x637==x638)!=x639)/x640);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x642 = -1LL;
	int8_t x644 = INT8_MIN;

    t154 = (((x641==x642)!=x643)/x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x645 = INT16_MIN;
	volatile uint8_t x647 = 12U;
	volatile uint64_t x648 = UINT64_MAX;
	static volatile uint64_t t155 = 169625964LLU;

    t155 = (((x645==x646)!=x647)/x648);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x649 = INT64_MIN;
	volatile int16_t x650 = INT16_MAX;
	int16_t x651 = INT16_MIN;
	volatile uint32_t x652 = UINT32_MAX;
	volatile uint32_t t156 = 5704146U;

    t156 = (((x649==x650)!=x651)/x652);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x653 = 2878709413673056126LLU;
	uint64_t x655 = UINT64_MAX;
	static int64_t x656 = -1LL;

    t157 = (((x653==x654)!=x655)/x656);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x658 = INT16_MIN;
	int16_t x659 = INT16_MIN;
	static volatile int16_t x660 = INT16_MIN;
	static int32_t t158 = 2676;

    t158 = (((x657==x658)!=x659)/x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	int64_t x662 = INT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	static int8_t x664 = INT8_MIN;
	volatile int32_t t159 = 9;

    t159 = (((x661==x662)!=x663)/x664);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x665 = -12472;
	static int64_t x666 = -1347780500LL;
	static int64_t x667 = INT64_MAX;
	static uint32_t x668 = 33U;
	volatile uint32_t t160 = 11563725U;

    t160 = (((x665==x666)!=x667)/x668);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x670 = 5078U;
	uint16_t x671 = UINT16_MAX;
	volatile uint32_t x672 = 2093177598U;
	uint32_t t161 = 1748659U;

    t161 = (((x669==x670)!=x671)/x672);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = 28U;
	volatile int64_t x675 = -1LL;
	uint64_t x676 = 1LLU;
	volatile uint64_t t162 = 1089907678088185LLU;

    t162 = (((x673==x674)!=x675)/x676);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x677 = INT16_MAX;
	static int64_t x678 = -1LL;
	static uint16_t x679 = UINT16_MAX;
	static int32_t t163 = -5025659;

    t163 = (((x677==x678)!=x679)/x680);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = -1931;
	static uint64_t x682 = 25555160930LLU;
	static int16_t x683 = INT16_MIN;
	static int64_t x684 = INT64_MIN;
	int64_t t164 = 364110084746LL;

    t164 = (((x681==x682)!=x683)/x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MIN;
	volatile int8_t x687 = 1;
	static int16_t x688 = 7;

    t165 = (((x685==x686)!=x687)/x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = 0;
	static int16_t x690 = INT16_MIN;
	int32_t x692 = INT32_MIN;
	volatile int32_t t166 = 194883;

    t166 = (((x689==x690)!=x691)/x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x693 = -1;
	int64_t x694 = -1LL;
	uint8_t x696 = 39U;
	volatile int32_t t167 = -855;

    t167 = (((x693==x694)!=x695)/x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x697 = UINT64_MAX;
	int16_t x698 = 6;
	volatile uint16_t x699 = 110U;
	int8_t x700 = -12;
	volatile int32_t t168 = -74;

    t168 = (((x697==x698)!=x699)/x700);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x702 = INT32_MIN;
	static uint8_t x703 = 61U;
	int64_t x704 = 246LL;
	int64_t t169 = -179724465827582LL;

    t169 = (((x701==x702)!=x703)/x704);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x706 = INT32_MIN;
	int16_t x707 = 612;
	volatile int8_t x708 = INT8_MIN;
	static volatile int32_t t170 = -3451437;

    t170 = (((x705==x706)!=x707)/x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = INT16_MAX;
	int8_t x710 = 3;
	volatile int64_t x711 = -2711353131358LL;
	volatile int64_t t171 = 1LL;

    t171 = (((x709==x710)!=x711)/x712);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x713 = INT32_MIN;
	uint32_t x714 = UINT32_MAX;
	static int64_t x715 = 803381986713193400LL;
	static int8_t x716 = INT8_MAX;
	int32_t t172 = 25;

    t172 = (((x713==x714)!=x715)/x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint8_t x718 = 15U;
	int64_t x719 = -1LL;
	uint8_t x720 = 4U;
	static int32_t t173 = 49240100;

    t173 = (((x717==x718)!=x719)/x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = 10U;
	static int32_t x722 = INT32_MIN;
	int16_t x723 = -3478;
	int64_t x724 = INT64_MIN;
	int64_t t174 = 481LL;

    t174 = (((x721==x722)!=x723)/x724);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x725 = 357214U;
	static volatile uint64_t x726 = UINT64_MAX;
	int32_t x727 = -1;
	int16_t x728 = -1;
	int32_t t175 = -885;

    t175 = (((x725==x726)!=x727)/x728);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x729 = INT64_MAX;
	int64_t x730 = INT64_MIN;
	int32_t x732 = INT32_MAX;
	static int32_t t176 = 0;

    t176 = (((x729==x730)!=x731)/x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x733 = -11;
	uint32_t x734 = UINT32_MAX;
	uint16_t x735 = 20U;
	volatile int8_t x736 = 5;

    t177 = (((x733==x734)!=x735)/x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = INT64_MAX;
	int16_t x738 = 13;
	int32_t x739 = INT32_MIN;
	uint32_t x740 = 2084428U;

    t178 = (((x737==x738)!=x739)/x740);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x741 = UINT16_MAX;
	uint8_t x742 = UINT8_MAX;
	int8_t x743 = INT8_MAX;
	volatile int8_t x744 = INT8_MAX;
	static int32_t t179 = -187380426;

    t179 = (((x741==x742)!=x743)/x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x745 = UINT16_MAX;
	int16_t x748 = INT16_MAX;
	volatile int32_t t180 = 4;

    t180 = (((x745==x746)!=x747)/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x753 = 953636U;
	int32_t x754 = 2206;
	int16_t x755 = -1;
	int64_t x756 = INT64_MIN;
	volatile int64_t t181 = -618380LL;

    t181 = (((x753==x754)!=x755)/x756);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x757 = 0U;
	int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MAX;
	int32_t x760 = INT32_MIN;
	int32_t t182 = 26939233;

    t182 = (((x757==x758)!=x759)/x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = INT32_MIN;
	int64_t x763 = -1LL;
	static volatile uint32_t t183 = 859089656U;

    t183 = (((x761==x762)!=x763)/x764);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = -571LL;
	static int8_t x767 = 5;
	int64_t x768 = -1LL;
	volatile int64_t t184 = 1026049LL;

    t184 = (((x765==x766)!=x767)/x768);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x769 = 1;
	int32_t x770 = INT32_MIN;
	int8_t x771 = -1;
	int64_t x772 = INT64_MIN;
	int64_t t185 = 906LL;

    t185 = (((x769==x770)!=x771)/x772);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = INT64_MAX;
	int16_t x774 = -1;
	uint8_t x775 = 3U;
	static int8_t x776 = INT8_MIN;
	static volatile int32_t t186 = 0;

    t186 = (((x773==x774)!=x775)/x776);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x777 = INT16_MIN;
	uint64_t x778 = 155738318863477LLU;
	static uint64_t x779 = UINT64_MAX;
	int32_t t187 = 1;

    t187 = (((x777==x778)!=x779)/x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x781 = -1;
	static volatile uint8_t x782 = UINT8_MAX;
	static int8_t x783 = 33;
	int64_t x784 = -863475438193037LL;
	volatile int64_t t188 = 120166LL;

    t188 = (((x781==x782)!=x783)/x784);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = 54;
	uint32_t x786 = 507758176U;
	static int64_t x787 = -1LL;
	int8_t x788 = -1;
	static volatile int32_t t189 = -8428525;

    t189 = (((x785==x786)!=x787)/x788);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = UINT32_MAX;
	static volatile int32_t x790 = -1;
	int32_t x791 = -506973;
	volatile int16_t x792 = -1;
	volatile int32_t t190 = -34;

    t190 = (((x789==x790)!=x791)/x792);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x794 = 29375610U;
	int8_t x795 = -1;
	int64_t x796 = INT64_MIN;

    t191 = (((x793==x794)!=x795)/x796);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x798 = -1;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = INT32_MAX;
	volatile int32_t t192 = -3167160;

    t192 = (((x797==x798)!=x799)/x800);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x802 = UINT8_MAX;
	int16_t x803 = INT16_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t193 = -1164743;

    t193 = (((x801==x802)!=x803)/x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x805 = -3475LL;
	int8_t x806 = -1;
	int8_t x807 = -21;
	volatile int16_t x808 = -45;

    t194 = (((x805==x806)!=x807)/x808);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x809 = 1771215364U;
	volatile int16_t x810 = INT16_MAX;
	int64_t x811 = -780516506224067536LL;
	int8_t x812 = 6;
	int32_t t195 = -1017873;

    t195 = (((x809==x810)!=x811)/x812);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x813 = -6;
	int32_t x815 = 5;
	volatile uint16_t x816 = 170U;
	static volatile int32_t t196 = -928095087;

    t196 = (((x813==x814)!=x815)/x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x818 = 10U;
	volatile int8_t x819 = INT8_MIN;
	int32_t t197 = -246843;

    t197 = (((x817==x818)!=x819)/x820);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x821 = INT16_MIN;
	int8_t x822 = -4;
	volatile int32_t x823 = 6;
	int16_t x824 = INT16_MAX;
	volatile int32_t t198 = 712;

    t198 = (((x821==x822)!=x823)/x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x825 = INT32_MAX;
	uint16_t x826 = 731U;
	uint64_t x827 = 873LLU;
	int8_t x828 = -1;
	volatile int32_t t199 = 80317;

    t199 = (((x825==x826)!=x827)/x828);

    if (t199 != -1) { NG(); } else { ; }
	
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

