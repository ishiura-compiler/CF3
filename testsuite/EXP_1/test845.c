
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

static uint16_t x2 = 26909U;
int64_t x6 = 3728697058899LL;
uint8_t x8 = 5U;
static volatile int8_t x21 = -31;
static volatile uint64_t t4 = 958516943298985442LLU;
uint32_t x25 = 1543U;
volatile int8_t x27 = -1;
uint16_t x33 = UINT16_MAX;
int64_t t7 = -513411LL;
int16_t x41 = INT16_MIN;
uint8_t x46 = 7U;
volatile uint64_t x48 = UINT64_MAX;
volatile int8_t x57 = INT8_MAX;
volatile uint64_t t13 = 0LLU;
volatile uint32_t t14 = 857104U;
uint8_t x72 = 1U;
volatile int64_t x74 = 5473196LL;
int16_t x75 = INT16_MAX;
int64_t x76 = INT64_MAX;
uint32_t x79 = UINT32_MAX;
uint32_t x82 = 3769U;
int32_t x85 = -1;
volatile int64_t t20 = 882469776714LL;
int64_t x93 = -1LL;
int64_t t22 = 6206300633LL;
volatile uint8_t x100 = 2U;
int64_t x101 = INT64_MIN;
volatile int64_t t24 = -1101867337990063430LL;
static uint16_t x107 = UINT16_MAX;
uint16_t x112 = 1086U;
uint16_t x115 = 22U;
uint16_t x118 = UINT16_MAX;
int32_t x119 = INT32_MIN;
static volatile int32_t x120 = 8709;
static int32_t x125 = INT32_MIN;
uint32_t x129 = 667U;
int32_t t32 = 52106;
static uint32_t x137 = 454U;
int32_t x139 = INT32_MIN;
volatile int32_t x140 = INT32_MAX;
int16_t x153 = INT16_MIN;
int64_t x155 = -40306560099146906LL;
int8_t x156 = 59;
volatile int8_t x161 = INT8_MIN;
int64_t t37 = -697671841LL;
volatile int32_t x165 = INT32_MIN;
static uint32_t x171 = 1812U;
volatile int16_t x173 = INT16_MIN;
int16_t x175 = INT16_MIN;
int8_t x182 = INT8_MIN;
int32_t x184 = -22233;
static int64_t x190 = INT64_MIN;
static int8_t x191 = -1;
int32_t x197 = INT32_MIN;
int16_t x202 = INT16_MAX;
int16_t x205 = INT16_MAX;
static int16_t x210 = INT16_MAX;
volatile uint64_t t51 = 28173583122722267LLU;
int16_t x224 = INT16_MIN;
static uint16_t x225 = UINT16_MAX;
volatile int64_t t56 = -1948163042911LL;
uint8_t x245 = 23U;
static int8_t x247 = INT8_MAX;
static int8_t x248 = -1;
static volatile uint8_t x250 = UINT8_MAX;
uint16_t x255 = 12477U;
volatile int32_t x262 = INT32_MIN;
uint8_t x266 = 15U;
static volatile uint32_t t63 = 7891U;
volatile int8_t x283 = 1;
int32_t x284 = 3;
uint8_t x292 = 2U;
volatile int8_t x294 = INT8_MIN;
int64_t t71 = 96895071LL;
uint32_t x310 = 22U;
int8_t x311 = 4;
static int16_t x314 = -521;
uint64_t x318 = 255LLU;
uint32_t x327 = 15U;
int16_t x329 = -1;
int16_t x330 = 23;
uint64_t x333 = UINT64_MAX;
int8_t x334 = -1;
uint32_t x336 = 174139988U;
int32_t x338 = INT32_MIN;
uint32_t x348 = 72927234U;
volatile int16_t x350 = 4839;
volatile int8_t x352 = INT8_MIN;
uint64_t x355 = 55156241546506LLU;
int32_t x359 = 238;
uint32_t x376 = 1295566U;
volatile int64_t t93 = -669547LL;
static int64_t x401 = INT64_MAX;
int64_t x405 = INT64_MIN;
volatile int64_t t96 = 31271LL;
int16_t x411 = -1;
uint16_t x417 = 2741U;
static int32_t x420 = INT32_MIN;
static int64_t x428 = INT64_MIN;
static int64_t x429 = INT64_MAX;
static volatile uint16_t x434 = 3U;
static int8_t x435 = INT8_MAX;
uint32_t x436 = 2026U;
uint32_t t102 = 3U;
volatile int64_t x437 = INT64_MAX;
int32_t x438 = INT32_MIN;
int16_t x440 = INT16_MIN;
uint8_t x446 = 52U;
uint32_t x447 = 6286743U;
int32_t x456 = INT32_MIN;
static int16_t x462 = -7;
int16_t x463 = INT16_MIN;
int8_t x464 = -1;
volatile int8_t x468 = INT8_MIN;
volatile int8_t x479 = INT8_MAX;
static int32_t t113 = -765173705;
int64_t x484 = INT64_MAX;
volatile int32_t t117 = -5329033;
int32_t x497 = INT32_MIN;
static int32_t x498 = 1343532;
uint16_t x499 = 802U;
volatile int64_t t122 = -4092261628461780LL;
int64_t x524 = -1LL;
int64_t x527 = -1LL;
int64_t x531 = -1LL;
int32_t x538 = INT32_MAX;
int64_t x549 = -1LL;
int8_t x553 = 14;
volatile uint64_t x563 = 1063163510307591LLU;
int32_t x564 = -1;
int64_t x567 = -1LL;
static int8_t x570 = -1;
uint8_t x575 = 1U;
int32_t t136 = -2194057;
int16_t x577 = INT16_MIN;
uint8_t x581 = UINT8_MAX;
static int16_t x593 = INT16_MIN;
int16_t x598 = -719;
int32_t x603 = -4320512;
int16_t x604 = INT16_MIN;
static volatile int64_t t142 = -22961LL;
uint64_t x606 = 37016LLU;
volatile int64_t x607 = INT64_MIN;
int32_t x618 = 94003;
int32_t t145 = 8056;
int8_t x622 = INT8_MIN;
int8_t x634 = INT8_MAX;
int8_t x635 = INT8_MIN;
int32_t x640 = INT32_MAX;
volatile int32_t t152 = 27;
uint8_t x654 = 27U;
int16_t x656 = INT16_MAX;
static volatile uint16_t x657 = 33U;
volatile uint64_t x662 = 2575034778284946041LLU;
volatile uint8_t x665 = 0U;
int8_t x667 = INT8_MIN;
int8_t x672 = 1;
uint32_t x676 = 12333U;
volatile int64_t t159 = 34LL;
uint32_t x686 = 5U;
volatile uint64_t x695 = 91518738452LLU;
static int8_t x702 = INT8_MIN;
int32_t x703 = -7326751;
int64_t t163 = -395082763805294LL;
uint64_t x713 = 230948859905LLU;
static int8_t x721 = 62;
volatile int8_t x727 = 32;
int64_t x749 = INT64_MIN;
int64_t x750 = INT64_MIN;
static int8_t x754 = INT8_MAX;
uint8_t x755 = UINT8_MAX;
uint16_t x760 = UINT16_MAX;
int64_t x763 = -17LL;
uint16_t x767 = 341U;
uint8_t x773 = 4U;
uint64_t x779 = UINT64_MAX;
uint32_t x780 = 5261259U;
static volatile uint64_t t180 = 1278399276414134LLU;
int8_t x781 = -1;
uint8_t x789 = 29U;
int8_t x793 = -1;
volatile uint64_t x796 = UINT64_MAX;
static int16_t x797 = INT16_MAX;
uint16_t x798 = UINT16_MAX;
uint8_t x799 = 1U;
static int64_t t185 = 14016612815014109LL;
int32_t x807 = INT32_MAX;
int16_t x810 = INT16_MAX;
static volatile int32_t t188 = -3403;
volatile uint16_t x813 = UINT16_MAX;
static volatile int8_t x814 = INT8_MIN;
int16_t x815 = -1;
int32_t x818 = -1;
static int64_t t190 = 102829944LL;
int8_t x822 = INT8_MIN;
volatile int32_t t191 = 0;
volatile int16_t x826 = INT16_MAX;
uint8_t x830 = 14U;
int64_t t193 = 1553038LL;
static int16_t x834 = INT16_MAX;
volatile int64_t x835 = INT64_MIN;
int16_t x836 = INT16_MAX;
volatile int64_t t194 = 93613195080677LL;
volatile int32_t x838 = INT32_MIN;
int32_t x851 = 30;
uint64_t x855 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = 7997;
	int64_t x3 = INT64_MAX;
	volatile int32_t x4 = INT32_MIN;
	int64_t t0 = -9559218993001LL;

    t0 = (((x1%x2)%x3)%x4);

    if (t0 != 7997LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 0;
	int32_t x7 = INT32_MIN;
	static int64_t t1 = -87002LL;

    t1 = (((x5%x6)%x7)%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	uint16_t x10 = 1U;
	static uint32_t x11 = 184U;
	static int64_t x12 = -3920433486871533336LL;
	volatile int64_t t2 = 33959571481LL;

    t2 = (((x9%x10)%x11)%x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = INT32_MAX;
	int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -1;

    t3 = (((x13%x14)%x15)%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x22 = 21269509682LLU;
	int32_t x23 = INT32_MIN;
	volatile int16_t x24 = INT16_MIN;

    t4 = (((x21%x22)%x23)%x24);

    if (t4 != 13236281073LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x26 = INT32_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile uint32_t t5 = 10U;

    t5 = (((x25%x26)%x27)%x28);

    if (t5 != 1543U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = UINT64_MAX;
	static uint16_t x30 = 100U;
	volatile int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t6 = 38LLU;

    t6 = (((x29%x30)%x31)%x32);

    if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	volatile int16_t x36 = INT16_MIN;

    t7 = (((x33%x34)%x35)%x36);

    if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x37 = 1U;
	static volatile uint64_t x38 = 907540911652125LLU;
	int16_t x39 = INT16_MAX;
	static int8_t x40 = INT8_MIN;
	static uint64_t t8 = 67703699286LLU;

    t8 = (((x37%x38)%x39)%x40);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MAX;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MAX;
	uint32_t t9 = 103237U;

    t9 = (((x41%x42)%x43)%x44);

    if (t9 != 2U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = INT32_MAX;
	int8_t x47 = INT8_MAX;
	volatile uint64_t t10 = 0LLU;

    t10 = (((x45%x46)%x47)%x48);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x49 = 3U;
	uint8_t x50 = 119U;
	uint16_t x51 = 937U;
	int64_t x52 = -3LL;
	volatile int64_t t11 = -171610642354248772LL;

    t11 = (((x49%x50)%x51)%x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 1U;
	static int8_t x54 = -1;
	uint8_t x55 = 1U;
	static int32_t x56 = -2829094;
	int32_t t12 = -48421;

    t12 = (((x53%x54)%x55)%x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x58 = INT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MIN;

    t13 = (((x57%x58)%x59)%x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x61 = 52U;
	static int8_t x62 = INT8_MAX;
	volatile int32_t x63 = -1;
	static uint32_t x64 = 4097430U;

    t14 = (((x61%x62)%x63)%x64);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = -1;
	uint8_t x66 = 47U;
	volatile uint32_t x67 = 316U;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 85465813076LLU;

    t15 = (((x65%x66)%x67)%x68);

    if (t15 != 207LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	volatile int64_t x70 = INT64_MAX;
	static int32_t x71 = INT32_MAX;
	static int64_t t16 = 2513472LL;

    t16 = (((x69%x70)%x71)%x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = 1;
	volatile int64_t t17 = 239941533572LL;

    t17 = (((x73%x74)%x75)%x76);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 11916174440LLU;
	volatile int32_t x80 = 1;
	volatile uint64_t t18 = 59LLU;

    t18 = (((x77%x78)%x79)%x80);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t19 = 3LL;

    t19 = (((x81%x82)%x83)%x84);

    if (t19 != 143LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x86 = INT64_MIN;
	volatile int32_t x87 = INT32_MIN;
	uint8_t x88 = 125U;

    t20 = (((x85%x86)%x87)%x88);

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1;
	static int8_t x90 = INT8_MIN;
	static volatile uint64_t x91 = 7156217090454011LLU;
	int8_t x92 = INT8_MIN;
	uint64_t t21 = 25244780LLU;

    t21 = (((x89%x90)%x91)%x92);

    if (t21 != 5172631609565268LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MAX;
	uint32_t x96 = 52612955U;

    t22 = (((x93%x94)%x95)%x96);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 2067919593U;
	uint16_t x98 = 12595U;
	uint32_t x99 = 5650U;
	uint32_t t23 = 1U;

    t23 = (((x97%x98)%x99)%x100);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x102 = 5U;
	volatile int8_t x103 = INT8_MAX;
	int16_t x104 = 241;

    t24 = (((x101%x102)%x103)%x104);

    if (t24 != -3LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = INT64_MIN;
	volatile int32_t x108 = -1;
	volatile int64_t t25 = -546620648690LL;

    t25 = (((x105%x106)%x107)%x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x109 = UINT16_MAX;
	static uint64_t x110 = UINT64_MAX;
	uint8_t x111 = 3U;
	uint64_t t26 = 96108923533793905LLU;

    t26 = (((x109%x110)%x111)%x112);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MAX;
	int32_t x114 = INT32_MIN;
	static uint64_t x116 = UINT64_MAX;
	static uint64_t t27 = 348LLU;

    t27 = (((x113%x114)%x115)%x116);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MAX;
	static int32_t t28 = -414;

    t28 = (((x117%x118)%x119)%x120);

    if (t28 != 6640) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	static uint16_t x122 = 1490U;
	int16_t x123 = INT16_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t29 = 118;

    t29 = (((x121%x122)%x123)%x124);

    if (t29 != 287) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x126 = -1LL;
	int16_t x127 = -912;
	int8_t x128 = INT8_MIN;
	volatile int64_t t30 = -13767188LL;

    t30 = (((x125%x126)%x127)%x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x130 = -1LL;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t31 = 3022493948803616LLU;

    t31 = (((x129%x130)%x131)%x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 25U;

    t32 = (((x133%x134)%x135)%x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x138 = UINT64_MAX;
	uint64_t t33 = 911980265911641878LLU;

    t33 = (((x137%x138)%x139)%x140);

    if (t33 != 454LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -1;
	uint64_t x142 = 3143626LLU;
	static int32_t x143 = -123570;
	int32_t x144 = -1;
	uint64_t t34 = 165421376986LLU;

    t34 = (((x141%x142)%x143)%x144);

    if (t34 != 370117LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x154 = 969966134879299LLU;
	uint64_t t35 = 267432538951860LLU;

    t35 = (((x153%x154)%x155)%x156);

    if (t35 != 24LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MIN;
	int32_t x158 = 139831;
	static int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t36 = 334;

    t36 = (((x157%x158)%x159)%x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	volatile int64_t x164 = INT64_MIN;

    t37 = (((x161%x162)%x163)%x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x166 = -20;
	static volatile int32_t x167 = -256;
	uint64_t x168 = 65LLU;
	uint64_t t38 = 81447LLU;

    t38 = (((x165%x166)%x167)%x168);

    if (t38 != 8LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x169 = 1U;
	static uint64_t x170 = UINT64_MAX;
	uint64_t x172 = 484090634840918080LLU;
	uint64_t t39 = 1344385443736840LLU;

    t39 = (((x169%x170)%x171)%x172);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x174 = -205096441LL;
	int32_t x176 = INT32_MAX;
	volatile int64_t t40 = 402921322LL;

    t40 = (((x173%x174)%x175)%x176);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = -974;
	uint8_t x178 = 1U;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = 51155340;
	volatile uint64_t t41 = 15289776131707LLU;

    t41 = (((x177%x178)%x179)%x180);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = 16;
	int64_t x183 = -6174LL;
	volatile int64_t t42 = 1031151664295092093LL;

    t42 = (((x181%x182)%x183)%x184);

    if (t42 != 16LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x185 = -2731397227LL;
	volatile int16_t x186 = INT16_MIN;
	volatile int64_t x187 = -1635260LL;
	int8_t x188 = -1;
	int64_t t43 = 17308883449382LL;

    t43 = (((x185%x186)%x187)%x188);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = 1U;
	int64_t x192 = INT64_MIN;
	volatile int64_t t44 = 94455270LL;

    t44 = (((x189%x190)%x191)%x192);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = -1;
	uint64_t x194 = 1150LLU;
	static int32_t x195 = -1;
	volatile int8_t x196 = 13;
	static uint64_t t45 = 341196430782620612LLU;

    t45 = (((x193%x194)%x195)%x196);

    if (t45 != 10LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x198 = -1;
	uint32_t x199 = 13962U;
	int32_t x200 = 58475269;
	volatile uint32_t t46 = 81809U;

    t46 = (((x197%x198)%x199)%x200);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = -163LL;
	uint64_t x203 = 4540243432817096553LLU;
	int64_t x204 = INT64_MAX;
	uint64_t t47 = 123042916384LLU;

    t47 = (((x201%x202)%x203)%x204);

    if (t47 != 285770342441165241LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x206 = INT32_MIN;
	volatile int8_t x207 = INT8_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t48 = 48305LLU;

    t48 = (((x205%x206)%x207)%x208);

    if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x209 = 10U;
	static int64_t x211 = -1LL;
	int8_t x212 = INT8_MAX;
	static volatile int64_t t49 = 39LL;

    t49 = (((x209%x210)%x211)%x212);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x213 = UINT16_MAX;
	int32_t x214 = 999887;
	static uint16_t x215 = 29U;
	int32_t x216 = INT32_MIN;
	int32_t t50 = 155;

    t50 = (((x213%x214)%x215)%x216);

    if (t50 != 24) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x217 = 511049U;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = 34U;
	uint64_t x220 = UINT64_MAX;

    t51 = (((x217%x218)%x219)%x220);

    if (t51 != 29LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x221 = 3U;
	uint16_t x222 = 10U;
	static int64_t x223 = -381667451675412431LL;
	int64_t t52 = 29070LL;

    t52 = (((x221%x222)%x223)%x224);

    if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t53 = -324189;

    t53 = (((x225%x226)%x227)%x228);

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MIN;
	int64_t t54 = -7294309LL;

    t54 = (((x229%x230)%x231)%x232);

    if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MIN;
	static uint16_t x235 = UINT16_MAX;
	volatile uint16_t x236 = UINT16_MAX;
	volatile uint64_t t55 = 16598271177LLU;

    t55 = (((x233%x234)%x235)%x236);

    if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = -1;
	uint16_t x238 = 28U;
	int64_t x239 = INT64_MIN;
	static int64_t x240 = INT64_MAX;

    t56 = (((x237%x238)%x239)%x240);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x241 = 0;
	volatile uint32_t x242 = 5985216U;
	int32_t x243 = -1;
	volatile int8_t x244 = -1;
	uint32_t t57 = 484985870U;

    t57 = (((x241%x242)%x243)%x244);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x246 = 4U;
	uint32_t t58 = 3382254U;

    t58 = (((x245%x246)%x247)%x248);

    if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x249 = -1;
	int8_t x251 = INT8_MIN;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t59 = 169083433;

    t59 = (((x249%x250)%x251)%x252);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t60 = -3196712908594LL;

    t60 = (((x253%x254)%x255)%x256);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = INT64_MIN;
	static uint8_t x258 = UINT8_MAX;
	int8_t x259 = -1;
	int32_t x260 = -3;
	int64_t t61 = -13LL;

    t61 = (((x257%x258)%x259)%x260);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x261 = 4U;
	static int32_t x263 = 1700;
	int32_t x264 = INT32_MAX;
	int32_t t62 = -274100;

    t62 = (((x261%x262)%x263)%x264);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = 9298U;
	volatile uint8_t x267 = UINT8_MAX;
	uint32_t x268 = 70810U;

    t63 = (((x265%x266)%x267)%x268);

    if (t63 != 13U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x269 = INT64_MIN;
	uint64_t x270 = 1048952085648808728LLU;
	int8_t x271 = 1;
	volatile int16_t x272 = 27;
	uint64_t t64 = 87438LLU;

    t64 = (((x269%x270)%x271)%x272);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	static uint8_t x274 = 1U;
	static volatile int32_t x275 = -626651;
	static uint32_t x276 = 19U;
	uint32_t t65 = 240862U;

    t65 = (((x273%x274)%x275)%x276);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = 41;
	uint32_t x278 = UINT32_MAX;
	int32_t x279 = -120035;
	int8_t x280 = 14;
	uint32_t t66 = 17U;

    t66 = (((x277%x278)%x279)%x280);

    if (t66 != 13U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = 1978093963779LLU;
	uint64_t t67 = 27479118635964LLU;

    t67 = (((x281%x282)%x283)%x284);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = UINT8_MAX;
	volatile int64_t x288 = INT64_MIN;
	int64_t t68 = -230LL;

    t68 = (((x285%x286)%x287)%x288);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = INT32_MIN;
	static int64_t x290 = INT64_MIN;
	volatile uint32_t x291 = 4023640U;
	volatile int64_t t69 = -62976628076LL;

    t69 = (((x289%x290)%x291)%x292);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t70 = 5392;

    t70 = (((x293%x294)%x295)%x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x297 = 8U;
	int8_t x298 = 1;
	static int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;

    t71 = (((x297%x298)%x299)%x300);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x301 = 770U;
	int64_t x302 = INT64_MIN;
	static uint32_t x303 = 1647U;
	int64_t x304 = INT64_MIN;
	int64_t t72 = -188423802304943LL;

    t72 = (((x301%x302)%x303)%x304);

    if (t72 != 770LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x305 = 6135525U;
	volatile uint8_t x306 = 1U;
	volatile uint16_t x307 = 389U;
	static int32_t x308 = 183844016;
	uint32_t t73 = 1U;

    t73 = (((x305%x306)%x307)%x308);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x309 = -1;
	int16_t x312 = INT16_MIN;
	uint32_t t74 = 652U;

    t74 = (((x309%x310)%x311)%x312);

    if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -1;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t75 = -4796145LL;

    t75 = (((x313%x314)%x315)%x316);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	uint64_t t76 = 289255897803541LLU;

    t76 = (((x317%x318)%x319)%x320);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MIN;
	static int32_t x324 = INT32_MAX;
	uint64_t t77 = 285391LLU;

    t77 = (((x321%x322)%x323)%x324);

    if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MIN;
	int32_t x328 = -77774;
	static int64_t t78 = 29420038048LL;

    t78 = (((x325%x326)%x327)%x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x331 = 21U;
	uint8_t x332 = 45U;
	int32_t t79 = 550;

    t79 = (((x329%x330)%x331)%x332);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x335 = INT64_MAX;
	uint64_t t80 = 1312923LLU;

    t80 = (((x333%x334)%x335)%x336);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x337 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	static uint32_t x340 = 12U;
	volatile uint32_t t81 = 48237U;

    t81 = (((x337%x338)%x339)%x340);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = INT64_MAX;
	int32_t x342 = -621106130;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	int64_t t82 = -2443637134224035699LL;

    t82 = (((x341%x342)%x343)%x344);

    if (t82 != 103LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	int32_t x347 = -1;
	volatile int64_t t83 = 905146LL;

    t83 = (((x345%x346)%x347)%x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = 29;
	static uint8_t x351 = UINT8_MAX;
	volatile int32_t t84 = 6109120;

    t84 = (((x349%x350)%x351)%x352);

    if (t84 != 29) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x353 = INT8_MAX;
	int8_t x354 = INT8_MIN;
	int8_t x356 = -1;
	uint64_t t85 = 2847LLU;

    t85 = (((x353%x354)%x355)%x356);

    if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x357 = -1511;
	volatile int64_t x358 = -107202408820738LL;
	int16_t x360 = INT16_MIN;
	volatile int64_t t86 = -85471768302773LL;

    t86 = (((x357%x358)%x359)%x360);

    if (t86 != -83LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = 151894481LL;
	volatile int8_t x362 = 8;
	volatile int32_t x363 = INT32_MAX;
	static int8_t x364 = INT8_MAX;
	volatile int64_t t87 = 13586196839LL;

    t87 = (((x361%x362)%x363)%x364);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x369 = INT8_MIN;
	volatile uint16_t x370 = UINT16_MAX;
	int32_t x371 = INT32_MIN;
	int32_t x372 = -1;
	int32_t t88 = 15632271;

    t88 = (((x369%x370)%x371)%x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = 0;
	int64_t x374 = INT64_MAX;
	static uint32_t x375 = UINT32_MAX;
	int64_t t89 = -11084LL;

    t89 = (((x373%x374)%x375)%x376);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = 5LL;
	int32_t x380 = INT32_MAX;
	volatile int64_t t90 = 1960366869LL;

    t90 = (((x377%x378)%x379)%x380);

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x381 = 510334468U;
	int16_t x382 = 8;
	int8_t x383 = -1;
	uint8_t x384 = 6U;
	uint32_t t91 = 0U;

    t91 = (((x381%x382)%x383)%x384);

    if (t91 != 4U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	static volatile int16_t x386 = -59;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t x388 = INT32_MAX;
	static int32_t t92 = -104;

    t92 = (((x385%x386)%x387)%x388);

    if (t92 != 19) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x389 = 1U;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -2;
	uint16_t x392 = 428U;

    t93 = (((x389%x390)%x391)%x392);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x397 = 885U;
	static int8_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	int64_t t94 = 11015726981682311LL;

    t94 = (((x397%x398)%x399)%x400);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x402 = -1;
	int32_t x403 = 166;
	int16_t x404 = INT16_MIN;
	static int64_t t95 = 23841884452LL;

    t95 = (((x401%x402)%x403)%x404);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x406 = -4;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = 19655985U;

    t96 = (((x405%x406)%x407)%x408);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = -1;
	uint8_t x410 = UINT8_MAX;
	int32_t x412 = INT32_MAX;
	volatile int32_t t97 = -52041;

    t97 = (((x409%x410)%x411)%x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = INT64_MIN;
	int32_t x414 = INT32_MIN;
	int32_t x415 = -1575;
	uint32_t x416 = UINT32_MAX;
	int64_t t98 = -900285296947247067LL;

    t98 = (((x413%x414)%x415)%x416);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x418 = -1LL;
	static int64_t x419 = INT64_MIN;
	int64_t t99 = -27277920782311225LL;

    t99 = (((x417%x418)%x419)%x420);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x425 = -1LL;
	uint16_t x426 = 3322U;
	static int64_t x427 = -1LL;
	static volatile int64_t t100 = 498150895089LL;

    t100 = (((x425%x426)%x427)%x428);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x430 = -104737LL;
	int8_t x431 = -47;
	static int64_t x432 = INT64_MIN;
	int64_t t101 = 139647740290791053LL;

    t101 = (((x429%x430)%x431)%x432);

    if (t101 != 34LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x433 = INT16_MAX;

    t102 = (((x433%x434)%x435)%x436);

    if (t102 != 1U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x439 = -1;
	int64_t t103 = 12598801420320LL;

    t103 = (((x437%x438)%x439)%x440);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x441 = 40U;
	int32_t x442 = INT32_MIN;
	int64_t x443 = -1LL;
	static volatile uint16_t x444 = 5271U;
	int64_t t104 = -2416748LL;

    t104 = (((x441%x442)%x443)%x444);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x445 = -9LL;
	int16_t x448 = INT16_MIN;
	static volatile int64_t t105 = 27LL;

    t105 = (((x445%x446)%x447)%x448);

    if (t105 != -9LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x449 = -1LL;
	uint32_t x450 = 2U;
	int8_t x451 = INT8_MAX;
	int8_t x452 = INT8_MIN;
	int64_t t106 = -1LL;

    t106 = (((x449%x450)%x451)%x452);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = -577;
	uint16_t x454 = 5153U;
	uint8_t x455 = 4U;
	int32_t t107 = -25118801;

    t107 = (((x453%x454)%x455)%x456);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x458 = INT8_MAX;
	int64_t x459 = INT64_MIN;
	static uint8_t x460 = 13U;
	volatile int64_t t108 = 2LL;

    t108 = (((x457%x458)%x459)%x460);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x461 = INT64_MIN;
	int64_t t109 = -31324159LL;

    t109 = (((x461%x462)%x463)%x464);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x465 = INT32_MIN;
	volatile uint64_t x466 = 2546636LLU;
	volatile uint64_t x467 = 36340579LLU;
	volatile uint64_t t110 = 26283836465146LLU;

    t110 = (((x465%x466)%x467)%x468);

    if (t110 != 2000876LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x469 = INT8_MIN;
	uint8_t x470 = 82U;
	int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t111 = -52;

    t111 = (((x469%x470)%x471)%x472);

    if (t111 != -46) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	volatile uint16_t x474 = UINT16_MAX;
	static int8_t x475 = -5;
	static int64_t x476 = 42008576511LL;
	uint64_t t112 = 26255659LLU;

    t112 = (((x473%x474)%x475)%x476);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x477 = INT8_MIN;
	static volatile int32_t x478 = INT32_MAX;
	uint8_t x480 = 8U;

    t113 = (((x477%x478)%x479)%x480);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x481 = 170;
	int64_t x482 = -1LL;
	volatile uint64_t x483 = 15710082LLU;
	static volatile uint64_t t114 = 790647016484LLU;

    t114 = (((x481%x482)%x483)%x484);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x485 = 1U;
	volatile int16_t x486 = INT16_MAX;
	int64_t x487 = -739646229791LL;
	static int8_t x488 = INT8_MAX;
	int64_t t115 = 2488558LL;

    t115 = (((x485%x486)%x487)%x488);

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x489 = 192;
	volatile int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	volatile int16_t x492 = INT16_MAX;
	volatile int64_t t116 = 92194LL;

    t116 = (((x489%x490)%x491)%x492);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x493 = UINT8_MAX;
	static int32_t x494 = -1;
	int16_t x495 = INT16_MIN;
	int8_t x496 = -3;

    t117 = (((x493%x494)%x495)%x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x500 = 232185LL;
	volatile int64_t t118 = 55799649620800639LL;

    t118 = (((x497%x498)%x499)%x500);

    if (t118 != -618LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x501 = 0U;
	static uint64_t x502 = 1911312294538926334LLU;
	uint32_t x503 = 468U;
	int8_t x504 = 1;
	volatile uint64_t t119 = 5505852222LLU;

    t119 = (((x501%x502)%x503)%x504);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = -102096012359LL;
	static uint64_t x506 = UINT64_MAX;
	int16_t x507 = INT16_MIN;
	static int8_t x508 = INT8_MAX;
	static volatile uint64_t t120 = 186743883LLU;

    t120 = (((x505%x506)%x507)%x508);

    if (t120 != 113LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x509 = UINT32_MAX;
	static int64_t x510 = 86LL;
	volatile uint16_t x511 = UINT16_MAX;
	static uint16_t x512 = UINT16_MAX;
	int64_t t121 = 2649664372LL;

    t121 = (((x509%x510)%x511)%x512);

    if (t121 != 15LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x517 = -106153619978LL;
	volatile int16_t x518 = 797;
	int16_t x519 = INT16_MAX;
	int8_t x520 = INT8_MAX;

    t122 = (((x517%x518)%x519)%x520);

    if (t122 != -57LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = -1;
	int16_t x522 = INT16_MIN;
	volatile int32_t x523 = INT32_MIN;
	int64_t t123 = -26747718963342LL;

    t123 = (((x521%x522)%x523)%x524);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x525 = INT64_MAX;
	volatile int32_t x526 = 219;
	int16_t x528 = -504;
	volatile int64_t t124 = 26726LL;

    t124 = (((x525%x526)%x527)%x528);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x529 = -3703;
	volatile int64_t x530 = -1LL;
	volatile int8_t x532 = -58;
	volatile int64_t t125 = 1669563440336420947LL;

    t125 = (((x529%x530)%x531)%x532);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x533 = -1925;
	static uint32_t x534 = 398449U;
	static int32_t x535 = INT32_MAX;
	uint16_t x536 = 2U;
	volatile uint32_t t126 = 95U;

    t126 = (((x533%x534)%x535)%x536);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x537 = 1U;
	static uint8_t x539 = 9U;
	static volatile int32_t x540 = INT32_MAX;
	int32_t t127 = 79;

    t127 = (((x537%x538)%x539)%x540);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x541 = INT8_MIN;
	uint64_t x542 = UINT64_MAX;
	uint16_t x543 = 11U;
	int64_t x544 = INT64_MAX;
	uint64_t t128 = 485392LLU;

    t128 = (((x541%x542)%x543)%x544);

    if (t128 != 9LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x545 = 2097445000U;
	static volatile uint8_t x546 = 3U;
	int32_t x547 = 5999;
	int8_t x548 = INT8_MAX;
	static uint32_t t129 = 39U;

    t129 = (((x545%x546)%x547)%x548);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x550 = 105U;
	int8_t x551 = INT8_MIN;
	uint8_t x552 = 118U;
	static volatile int64_t t130 = 28126808648992LL;

    t130 = (((x549%x550)%x551)%x552);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x554 = INT32_MIN;
	uint16_t x555 = 15209U;
	int64_t x556 = -1LL;
	volatile int64_t t131 = 24706LL;

    t131 = (((x553%x554)%x555)%x556);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x557 = 40;
	static volatile int64_t x558 = -6645366589522LL;
	int16_t x559 = INT16_MAX;
	int8_t x560 = INT8_MIN;
	int64_t t132 = 513755303LL;

    t132 = (((x557%x558)%x559)%x560);

    if (t132 != 40LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x561 = 757490U;
	volatile int16_t x562 = -1;
	uint64_t t133 = 118526077060LLU;

    t133 = (((x561%x562)%x563)%x564);

    if (t133 != 757490LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = -2240;
	uint32_t x566 = UINT32_MAX;
	int32_t x568 = -21873;
	int64_t t134 = -760001440083LL;

    t134 = (((x565%x566)%x567)%x568);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x571 = -1LL;
	int16_t x572 = INT16_MAX;
	int64_t t135 = -6397862921LL;

    t135 = (((x569%x570)%x571)%x572);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x573 = 37U;
	static uint8_t x574 = 29U;
	static int16_t x576 = 4821;

    t136 = (((x573%x574)%x575)%x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x578 = 37168U;
	int32_t x579 = 1;
	int32_t x580 = INT32_MIN;
	volatile uint32_t t137 = 725558738U;

    t137 = (((x577%x578)%x579)%x580);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x582 = 5283280744LL;
	int16_t x583 = INT16_MAX;
	volatile uint32_t x584 = UINT32_MAX;
	int64_t t138 = 374750212221966898LL;

    t138 = (((x581%x582)%x583)%x584);

    if (t138 != 255LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x585 = 16340LL;
	static int8_t x586 = 3;
	volatile uint64_t x587 = 3328365267013477275LLU;
	int8_t x588 = INT8_MAX;
	uint64_t t139 = 77477022889237LLU;

    t139 = (((x585%x586)%x587)%x588);

    if (t139 != 2LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x594 = INT32_MIN;
	volatile int64_t x595 = INT64_MIN;
	int8_t x596 = INT8_MAX;
	int64_t t140 = 23803LL;

    t140 = (((x593%x594)%x595)%x596);

    if (t140 != -2LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x597 = INT64_MIN;
	volatile uint16_t x599 = 368U;
	static volatile int16_t x600 = INT16_MIN;
	static volatile int64_t t141 = 0LL;

    t141 = (((x597%x598)%x599)%x600);

    if (t141 != -66LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x601 = 45U;
	int64_t x602 = -53LL;

    t142 = (((x601%x602)%x603)%x604);

    if (t142 != 45LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x605 = UINT8_MAX;
	uint16_t x608 = UINT16_MAX;
	uint64_t t143 = 11508LLU;

    t143 = (((x605%x606)%x607)%x608);

    if (t143 != 255LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x609 = UINT32_MAX;
	int16_t x610 = 16113;
	volatile int8_t x611 = -1;
	uint32_t x612 = 2U;
	uint32_t t144 = 53361437U;

    t144 = (((x609%x610)%x611)%x612);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x617 = INT32_MAX;
	static volatile int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MIN;

    t145 = (((x617%x618)%x619)%x620);

    if (t145 != 11) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x621 = INT16_MIN;
	int16_t x623 = 1;
	static volatile uint8_t x624 = 13U;
	int32_t t146 = 1;

    t146 = (((x621%x622)%x623)%x624);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x625 = UINT8_MAX;
	uint32_t x626 = 13U;
	int32_t x627 = -14;
	int8_t x628 = -63;
	uint32_t t147 = 105U;

    t147 = (((x625%x626)%x627)%x628);

    if (t147 != 8U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x629 = -303;
	static int16_t x630 = INT16_MIN;
	volatile uint16_t x631 = 11674U;
	uint8_t x632 = UINT8_MAX;
	int32_t t148 = -47809411;

    t148 = (((x629%x630)%x631)%x632);

    if (t148 != -48) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x633 = 115U;
	int32_t x636 = INT32_MIN;
	int32_t t149 = 2934;

    t149 = (((x633%x634)%x635)%x636);

    if (t149 != 115) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x637 = INT64_MIN;
	uint64_t x638 = 1LLU;
	volatile int8_t x639 = -2;
	uint64_t t150 = 397534746565LLU;

    t150 = (((x637%x638)%x639)%x640);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x641 = 1;
	int32_t x642 = INT32_MAX;
	static volatile int64_t x643 = INT64_MAX;
	int64_t x644 = -1LL;
	volatile int64_t t151 = -1359LL;

    t151 = (((x641%x642)%x643)%x644);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x645 = -932;
	int16_t x646 = 37;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;

    t152 = (((x645%x646)%x647)%x648);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x649 = -1LL;
	volatile int64_t x650 = INT64_MIN;
	int64_t x651 = INT64_MIN;
	uint8_t x652 = UINT8_MAX;
	volatile int64_t t153 = 129846329797LL;

    t153 = (((x649%x650)%x651)%x652);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x653 = INT64_MIN;
	static volatile int8_t x655 = INT8_MIN;
	int64_t t154 = -8780LL;

    t154 = (((x653%x654)%x655)%x656);

    if (t154 != -26LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x658 = 1097;
	uint64_t x659 = UINT64_MAX;
	int64_t x660 = INT64_MIN;
	volatile uint64_t t155 = 61656674LLU;

    t155 = (((x657%x658)%x659)%x660);

    if (t155 != 33LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	uint64_t x663 = 13LLU;
	static uint32_t x664 = 988843684U;
	static volatile uint64_t t156 = 1393LLU;

    t156 = (((x661%x662)%x663)%x664);

    if (t156 != 9LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x666 = -1036;
	static int64_t x668 = 1LL;
	volatile int64_t t157 = 224238890LL;

    t157 = (((x665%x666)%x667)%x668);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x669 = UINT64_MAX;
	static int64_t x670 = -177903333045497LL;
	int8_t x671 = INT8_MIN;
	uint64_t t158 = 1345690454032567189LLU;

    t158 = (((x669%x670)%x671)%x672);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x673 = 9;
	int64_t x674 = -1LL;
	volatile int16_t x675 = INT16_MIN;

    t159 = (((x673%x674)%x675)%x676);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x685 = 1;
	int16_t x687 = -73;
	int32_t x688 = INT32_MIN;
	volatile uint32_t t160 = 241340U;

    t160 = (((x685%x686)%x687)%x688);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x693 = 68;
	volatile int32_t x694 = INT32_MAX;
	int8_t x696 = -1;
	uint64_t t161 = 485574LLU;

    t161 = (((x693%x694)%x695)%x696);

    if (t161 != 68LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x697 = INT32_MAX;
	static int32_t x698 = INT32_MIN;
	int16_t x699 = INT16_MIN;
	int32_t x700 = -1;
	volatile int32_t t162 = 0;

    t162 = (((x697%x698)%x699)%x700);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x701 = -1LL;
	int16_t x704 = 2;

    t163 = (((x701%x702)%x703)%x704);

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x705 = INT32_MIN;
	int8_t x706 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	uint16_t x708 = 28U;
	int64_t t164 = 343970940325770927LL;

    t164 = (((x705%x706)%x707)%x708);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x714 = INT32_MIN;
	static int64_t x715 = -1LL;
	volatile int8_t x716 = INT8_MAX;
	static uint64_t t165 = 1492425068655LLU;

    t165 = (((x713%x714)%x715)%x716);

    if (t165 != 112LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x717 = 0;
	uint32_t x718 = UINT32_MAX;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = INT32_MIN;
	uint64_t t166 = 83337385794766LLU;

    t166 = (((x717%x718)%x719)%x720);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x722 = INT16_MIN;
	volatile uint64_t x723 = 59123LLU;
	int16_t x724 = INT16_MIN;
	static uint64_t t167 = 1166LLU;

    t167 = (((x721%x722)%x723)%x724);

    if (t167 != 62LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x725 = UINT8_MAX;
	static volatile int64_t x726 = -1LL;
	uint64_t x728 = UINT64_MAX;
	uint64_t t168 = 3LLU;

    t168 = (((x725%x726)%x727)%x728);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x733 = 933623833758LL;
	volatile int32_t x734 = INT32_MAX;
	volatile int8_t x735 = INT8_MIN;
	int16_t x736 = -1;
	int64_t t169 = -25592335005171LL;

    t169 = (((x733%x734)%x735)%x736);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x737 = UINT16_MAX;
	uint64_t x738 = 195444517LLU;
	int8_t x739 = 1;
	uint64_t x740 = 7302603805158178LLU;
	static volatile uint64_t t170 = 1063484871668225LLU;

    t170 = (((x737%x738)%x739)%x740);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x741 = -1;
	int16_t x742 = INT16_MIN;
	int32_t x743 = -176469566;
	int64_t x744 = 21091799426LL;
	int64_t t171 = -8865LL;

    t171 = (((x741%x742)%x743)%x744);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x745 = 340680U;
	int64_t x746 = -1LL;
	volatile uint16_t x747 = UINT16_MAX;
	int64_t x748 = 15041LL;
	int64_t t172 = 666119309185737LL;

    t172 = (((x745%x746)%x747)%x748);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x751 = -1;
	uint64_t x752 = 1440388781129LLU;
	volatile uint64_t t173 = 9LLU;

    t173 = (((x749%x750)%x751)%x752);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x753 = 3U;
	int32_t x756 = INT32_MIN;
	static volatile int32_t t174 = 518373;

    t174 = (((x753%x754)%x755)%x756);

    if (t174 != 3) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x757 = -77514004110LL;
	int16_t x758 = 63;
	int32_t x759 = -1;
	int64_t t175 = -929128334386LL;

    t175 = (((x757%x758)%x759)%x760);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	int16_t x764 = -6;
	volatile int64_t t176 = 52700LL;

    t176 = (((x761%x762)%x763)%x764);

    if (t176 != 2LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x765 = INT8_MIN;
	uint16_t x766 = 10U;
	static uint16_t x768 = 6U;
	static int32_t t177 = -170700;

    t177 = (((x765%x766)%x767)%x768);

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x769 = UINT16_MAX;
	volatile int8_t x770 = -1;
	int32_t x771 = 7443881;
	static int16_t x772 = -14218;
	static int32_t t178 = 79972080;

    t178 = (((x769%x770)%x771)%x772);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x774 = UINT16_MAX;
	int32_t x775 = INT32_MIN;
	static int64_t x776 = INT64_MAX;
	static volatile int64_t t179 = -2LL;

    t179 = (((x773%x774)%x775)%x776);

    if (t179 != 4LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x777 = INT64_MAX;
	int8_t x778 = -1;

    t180 = (((x777%x778)%x779)%x780);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x782 = INT16_MIN;
	volatile uint8_t x783 = UINT8_MAX;
	volatile int8_t x784 = -1;
	int32_t t181 = 1570117;

    t181 = (((x781%x782)%x783)%x784);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x785 = 28U;
	int32_t x786 = INT32_MIN;
	static int32_t x787 = INT32_MIN;
	int64_t x788 = INT64_MIN;
	int64_t t182 = 46784391030190LL;

    t182 = (((x785%x786)%x787)%x788);

    if (t182 != 28LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x790 = UINT8_MAX;
	volatile int32_t x791 = INT32_MIN;
	uint8_t x792 = 3U;
	static volatile int32_t t183 = 12;

    t183 = (((x789%x790)%x791)%x792);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x794 = -1;
	int16_t x795 = 14;
	uint64_t t184 = 21LLU;

    t184 = (((x793%x794)%x795)%x796);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x800 = -1LL;

    t185 = (((x797%x798)%x799)%x800);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x801 = 75U;
	volatile int32_t x802 = -1;
	static uint32_t x803 = UINT32_MAX;
	static int8_t x804 = INT8_MIN;
	volatile uint32_t t186 = 7401U;

    t186 = (((x801%x802)%x803)%x804);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x805 = INT8_MIN;
	int8_t x806 = INT8_MIN;
	int16_t x808 = -6;
	static int32_t t187 = -708183;

    t187 = (((x805%x806)%x807)%x808);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x809 = INT16_MAX;
	static uint8_t x811 = UINT8_MAX;
	int8_t x812 = INT8_MIN;

    t188 = (((x809%x810)%x811)%x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x816 = 1U;
	int32_t t189 = 701;

    t189 = (((x813%x814)%x815)%x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x817 = INT64_MIN;
	int16_t x819 = -123;
	static volatile int8_t x820 = INT8_MIN;

    t190 = (((x817%x818)%x819)%x820);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x821 = 6;
	int8_t x823 = -1;
	static volatile int8_t x824 = INT8_MIN;

    t191 = (((x821%x822)%x823)%x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x825 = -870052825235LL;
	static uint32_t x827 = 26U;
	int64_t x828 = -1LL;
	int64_t t192 = -395603865750018830LL;

    t192 = (((x825%x826)%x827)%x828);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x829 = UINT32_MAX;
	int64_t x831 = -1LL;
	static int8_t x832 = -1;

    t193 = (((x829%x830)%x831)%x832);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x833 = 0;

    t194 = (((x833%x834)%x835)%x836);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x837 = UINT64_MAX;
	int16_t x839 = 31;
	int8_t x840 = INT8_MIN;
	uint64_t t195 = 755861306062879LLU;

    t195 = (((x837%x838)%x839)%x840);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x841 = -1;
	int8_t x842 = -1;
	static int8_t x843 = INT8_MAX;
	int64_t x844 = INT64_MAX;
	static int64_t t196 = -17LL;

    t196 = (((x841%x842)%x843)%x844);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x845 = 489673700008LLU;
	static int32_t x846 = -1;
	volatile int8_t x847 = INT8_MIN;
	int32_t x848 = INT32_MIN;
	static uint64_t t197 = 150345110513LLU;

    t197 = (((x845%x846)%x847)%x848);

    if (t197 != 489673700008LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x849 = 211585933U;
	static int64_t x850 = -4227626635610LL;
	int64_t x852 = INT64_MAX;
	volatile int64_t t198 = 4268325557675LL;

    t198 = (((x849%x850)%x851)%x852);

    if (t198 != 13LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x853 = UINT64_MAX;
	uint32_t x854 = 21587U;
	int8_t x856 = INT8_MIN;
	static volatile uint64_t t199 = 21822247830580932LLU;

    t199 = (((x853%x854)%x855)%x856);

    if (t199 != 17256LLU) { NG(); } else { ; }
	
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

