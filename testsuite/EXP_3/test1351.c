
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

volatile int32_t x2 = -1;
int64_t x4 = INT64_MAX;
int16_t x5 = INT16_MIN;
uint16_t x8 = 11U;
int16_t x10 = INT16_MAX;
uint64_t x17 = UINT64_MAX;
uint16_t x22 = 14829U;
volatile int16_t x23 = 9611;
static uint32_t x25 = UINT32_MAX;
int64_t x27 = -13085721705LL;
int8_t x31 = -1;
volatile int32_t t7 = 859345898;
int64_t x36 = -1LL;
static int32_t t11 = -526237979;
static int64_t x53 = INT64_MIN;
int16_t x54 = -1;
int64_t x56 = -1LL;
volatile int32_t t13 = -30823;
uint8_t x57 = 0U;
static int64_t x59 = -2080697310284LL;
int32_t x60 = -1;
static int32_t t15 = -739878985;
int16_t x73 = 13;
volatile int8_t x75 = INT8_MAX;
static volatile int64_t x82 = -1LL;
static uint64_t x88 = UINT64_MAX;
int64_t x89 = INT64_MIN;
uint8_t x92 = 127U;
volatile int64_t x93 = INT64_MAX;
int64_t x94 = INT64_MAX;
uint32_t x97 = 1108203U;
volatile int32_t x98 = -1;
uint16_t x104 = 3U;
static uint8_t x108 = 72U;
uint64_t x113 = UINT64_MAX;
static int16_t x119 = INT16_MIN;
int16_t x131 = INT16_MIN;
volatile int32_t t32 = -879924293;
static int32_t x134 = 1;
int16_t x136 = INT16_MAX;
volatile int32_t t33 = -2840905;
uint32_t x143 = 14260475U;
int32_t t35 = 1913;
static int32_t x153 = -1;
uint32_t x156 = 438060U;
static volatile uint64_t x158 = UINT64_MAX;
uint64_t x159 = UINT64_MAX;
static uint16_t x160 = UINT16_MAX;
int8_t x162 = -1;
volatile uint8_t x165 = 0U;
int8_t x172 = 0;
int8_t x182 = INT8_MIN;
volatile int32_t x190 = -1;
int32_t x196 = INT32_MIN;
uint64_t x200 = UINT64_MAX;
int16_t x205 = INT16_MIN;
static int32_t t52 = 1091;
int32_t x215 = -318025;
static uint32_t x217 = UINT32_MAX;
int16_t x224 = 1374;
int16_t x229 = INT16_MIN;
int16_t x236 = INT16_MAX;
static volatile int32_t x240 = 89776;
volatile int64_t x243 = -140295351LL;
static uint32_t x247 = 109U;
volatile int16_t x248 = 464;
volatile int64_t x250 = -1LL;
static int32_t t62 = -702;
int32_t x258 = INT32_MAX;
uint32_t x262 = 1U;
volatile int32_t t66 = -63510670;
uint32_t x273 = 1866158482U;
int32_t t68 = -90824998;
volatile int16_t x282 = INT16_MIN;
int16_t x285 = -1;
uint32_t x298 = UINT32_MAX;
uint32_t x303 = UINT32_MAX;
int8_t x304 = -6;
int32_t x310 = -1;
uint32_t x320 = 833865U;
int32_t t79 = 4320740;
static volatile int32_t t80 = 40;
static volatile int16_t x325 = INT16_MAX;
volatile int32_t t81 = -2025885;
static int32_t x335 = 16830;
int64_t x336 = 587267432LL;
uint16_t x337 = 210U;
volatile int32_t t84 = -14769324;
volatile int32_t t86 = -455779883;
uint64_t x351 = UINT64_MAX;
int64_t x354 = -8082088845640480LL;
int16_t x357 = -9953;
static int32_t x358 = -1900;
uint8_t x361 = 45U;
int64_t x362 = INT64_MIN;
int16_t x363 = INT16_MAX;
volatile int32_t t91 = 567924;
uint32_t x376 = 912530U;
int64_t x377 = INT64_MIN;
static int8_t x384 = INT8_MIN;
int64_t x387 = -249185179363766LL;
volatile int32_t t97 = -1;
int8_t x393 = 25;
volatile int16_t x398 = -1;
uint16_t x403 = 22199U;
static volatile int32_t t100 = 1407390;
int64_t x409 = -1LL;
int8_t x410 = -1;
static volatile uint16_t x413 = 22U;
uint8_t x416 = UINT8_MAX;
int16_t x417 = -1;
uint8_t x420 = 3U;
int16_t x421 = 4;
int32_t t105 = -226710195;
int64_t x426 = -21LL;
int8_t x427 = -6;
static int32_t x434 = INT32_MIN;
volatile int32_t t108 = -3;
int16_t x437 = -1;
uint64_t x447 = UINT64_MAX;
int32_t t111 = 1;
uint8_t x455 = 6U;
uint32_t x461 = 80721109U;
int64_t x465 = INT64_MIN;
volatile int32_t t116 = -63007384;
uint16_t x473 = 22047U;
volatile int32_t t120 = -15;
volatile uint64_t x488 = 269266226552090LLU;
volatile int16_t x502 = -12674;
volatile uint64_t x503 = 7890527LLU;
int64_t x520 = 163166692980226203LL;
int32_t x526 = -45;
static uint16_t x527 = UINT16_MAX;
static volatile int64_t x529 = INT64_MAX;
static uint16_t x533 = 3727U;
static int32_t x538 = INT32_MAX;
volatile uint32_t x539 = 60U;
volatile int32_t t135 = -684;
int8_t x550 = -1;
static int8_t x552 = INT8_MIN;
uint16_t x555 = 23243U;
uint16_t x560 = 2U;
uint64_t x565 = 1553048850693154LLU;
static int8_t x566 = -30;
uint64_t x577 = 29LLU;
int16_t x579 = INT16_MAX;
int32_t x588 = INT32_MIN;
static volatile int32_t t146 = 1658;
uint32_t x594 = 1U;
int8_t x606 = INT8_MIN;
uint32_t x611 = 275U;
int8_t x620 = -1;
int64_t x621 = INT64_MAX;
static volatile uint8_t x631 = 0U;
int16_t x633 = INT16_MAX;
volatile int64_t x644 = INT64_MIN;
int32_t t160 = 906287;
uint16_t x649 = 7486U;
volatile uint8_t x651 = 50U;
volatile int32_t t162 = 0;
uint32_t x655 = UINT32_MAX;
static uint16_t x660 = UINT16_MAX;
static volatile int8_t x669 = INT8_MIN;
volatile int32_t x670 = -207625;
volatile int16_t x675 = 38;
int32_t t168 = 6404;
volatile uint8_t x688 = UINT8_MAX;
int32_t t171 = 15038112;
int32_t t172 = -6930428;
int16_t x696 = -1;
volatile uint16_t x702 = 461U;
int32_t t176 = -2541;
static int32_t x709 = INT32_MIN;
int64_t x714 = INT64_MIN;
int8_t x715 = -1;
static volatile int32_t t179 = -17532316;
int8_t x731 = INT8_MIN;
int8_t x734 = INT8_MIN;
uint32_t x738 = 174888U;
static uint32_t x739 = UINT32_MAX;
int32_t t184 = -1014137;
int16_t x744 = INT16_MAX;
volatile int32_t t185 = -27;
volatile uint16_t x745 = 461U;
volatile int32_t t186 = 20;
int8_t x770 = INT8_MIN;
uint16_t x784 = 46U;
volatile int8_t x786 = INT8_MAX;
int32_t x797 = -1;
int32_t t199 = -2212443;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	uint64_t x3 = 7902653550408595LLU;
	int32_t t0 = 2424;

    t0 = ((x1|x2)!=(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = 7;
	volatile int64_t x7 = INT64_MIN;
	int32_t t1 = -1054;

    t1 = ((x5|x6)!=(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	volatile int8_t x11 = INT8_MIN;
	static volatile int32_t x12 = -1;
	volatile int32_t t2 = -273;

    t2 = ((x9|x10)!=(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	int32_t x14 = -13858806;
	uint16_t x15 = UINT16_MAX;
	volatile int32_t x16 = -633;
	int32_t t3 = 36;

    t3 = ((x13|x14)!=(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = -1;
	static volatile int32_t x19 = -7221701;
	volatile uint64_t x20 = UINT64_MAX;
	int32_t t4 = 811989984;

    t4 = ((x17|x18)!=(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -5;
	static uint32_t x24 = 1559966918U;
	int32_t t5 = -27175;

    t5 = ((x21|x22)!=(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 13928531U;
	static volatile int8_t x28 = -30;
	int32_t t6 = 5421038;

    t6 = ((x25|x26)!=(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int16_t x30 = INT16_MAX;
	uint32_t x32 = 1389202U;

    t7 = ((x29|x30)!=(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int64_t x34 = 21074515900567LL;
	volatile int16_t x35 = -1;
	volatile int32_t t8 = 6;

    t8 = ((x33|x34)!=(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 0;
	static int64_t x38 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile int8_t x40 = -3;
	static int32_t t9 = 17599;

    t9 = ((x37|x38)!=(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 0;
	static int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MAX;
	int32_t x44 = 0;
	int32_t t10 = -8255;

    t10 = ((x41|x42)!=(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -1;
	volatile int16_t x48 = INT16_MIN;

    t11 = ((x45|x46)!=(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 1U;
	static int32_t x50 = -6215813;
	uint64_t x51 = 369429680LLU;
	int8_t x52 = 0;
	int32_t t12 = 2675;

    t12 = ((x49|x50)!=(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = 7;

    t13 = ((x53|x54)!=(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = UINT16_MAX;
	int32_t t14 = -37;

    t14 = ((x57|x58)!=(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	static int32_t x63 = INT32_MIN;
	uint16_t x64 = 6536U;

    t15 = ((x61|x62)!=(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 1027210915271924855LLU;
	volatile int32_t t16 = -665057367;

    t16 = ((x65|x66)!=(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -14;
	uint64_t x70 = 7LLU;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	int32_t t17 = -82400889;

    t17 = ((x69|x70)!=(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = 0;
	static int32_t x76 = -912406;
	volatile int32_t t18 = 2413332;

    t18 = ((x73|x74)!=(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	int32_t x78 = -1;
	static uint16_t x79 = 0U;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -21;

    t19 = ((x77|x78)!=(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint64_t x83 = 309732715LLU;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = -1;

    t20 = ((x81|x82)!=(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	static uint32_t x87 = 2213735U;
	int32_t t21 = -48882634;

    t21 = ((x85|x86)!=(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = 7618504654LL;
	int8_t x91 = 1;
	int32_t t22 = -11480449;

    t22 = ((x89|x90)!=(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x95 = 2U;
	volatile int32_t x96 = 4270304;
	int32_t t23 = -12184315;

    t23 = ((x93|x94)!=(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x99 = -476259040001LL;
	uint64_t x100 = 523190029157LLU;
	volatile int32_t t24 = 118118903;

    t24 = ((x97|x98)!=(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int16_t x102 = INT16_MIN;
	uint64_t x103 = 95039332LLU;
	volatile int32_t t25 = 3092780;

    t25 = ((x101|x102)!=(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	int64_t x106 = INT64_MAX;
	int64_t x107 = 9713697510046LL;
	static volatile int32_t t26 = 10118476;

    t26 = ((x105|x106)!=(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 4U;
	int32_t x110 = INT32_MIN;
	static int32_t x111 = 1041789;
	static int16_t x112 = 1;
	volatile int32_t t27 = -372795282;

    t27 = ((x109|x110)!=(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = -2;
	int32_t x115 = INT32_MIN;
	static int16_t x116 = -10;
	int32_t t28 = 94847751;

    t28 = ((x113|x114)!=(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 3U;
	uint16_t x118 = 939U;
	static int32_t x120 = INT32_MIN;
	int32_t t29 = 11362;

    t29 = ((x117|x118)!=(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = -1;
	int64_t x122 = -243630166010963LL;
	uint32_t x123 = 4347398U;
	uint8_t x124 = 41U;
	int32_t t30 = -998694;

    t30 = ((x121|x122)!=(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -27;
	int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 3U;
	int32_t t31 = 13995192;

    t31 = ((x125|x126)!=(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	volatile int16_t x130 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;

    t32 = ((x129|x130)!=(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x135 = INT8_MAX;

    t33 = ((x133|x134)!=(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	static int8_t x140 = INT8_MIN;
	int32_t t34 = -223361561;

    t34 = ((x137|x138)!=(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -1;
	int64_t x142 = -81643069021864369LL;
	uint64_t x144 = UINT64_MAX;

    t35 = ((x141|x142)!=(x143!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 53593U;
	int8_t x146 = INT8_MIN;
	int16_t x147 = 2;
	int16_t x148 = -1;
	volatile int32_t t36 = -487;

    t36 = ((x145|x146)!=(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int64_t x150 = 848037655982921LL;
	int32_t x151 = INT32_MIN;
	static uint32_t x152 = 124U;
	volatile int32_t t37 = -3;

    t37 = ((x149|x150)!=(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x154 = INT8_MAX;
	static uint8_t x155 = UINT8_MAX;
	int32_t t38 = 11;

    t38 = ((x153|x154)!=(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MAX;
	static volatile int32_t t39 = 3366189;

    t39 = ((x157|x158)!=(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	volatile int16_t x163 = -1;
	static int32_t x164 = INT32_MIN;
	int32_t t40 = -2882648;

    t40 = ((x161|x162)!=(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x166 = 36U;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 54U;
	volatile int32_t t41 = -211951;

    t41 = ((x165|x166)!=(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	uint8_t x170 = 6U;
	int64_t x171 = INT64_MAX;
	int32_t t42 = 58673;

    t42 = ((x169|x170)!=(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	uint8_t x174 = 108U;
	int16_t x175 = -1;
	static uint16_t x176 = 841U;
	int32_t t43 = -11665;

    t43 = ((x173|x174)!=(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	int64_t x178 = 23LL;
	int8_t x179 = -10;
	static uint16_t x180 = 1U;
	volatile int32_t t44 = -3;

    t44 = ((x177|x178)!=(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -1045525436;

    t45 = ((x181|x182)!=(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	volatile uint8_t x186 = 61U;
	int32_t x187 = -10987;
	static int16_t x188 = -2;
	volatile int32_t t46 = 467721947;

    t46 = ((x185|x186)!=(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 9U;
	int8_t x191 = INT8_MAX;
	volatile uint32_t x192 = 10225670U;
	volatile int32_t t47 = -17;

    t47 = ((x189|x190)!=(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	volatile int32_t t48 = -3454;

    t48 = ((x193|x194)!=(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	volatile uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	static int32_t t49 = -3286047;

    t49 = ((x197|x198)!=(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = 29787745683LL;
	static uint32_t x204 = 2417U;
	volatile int32_t t50 = -1;

    t50 = ((x201|x202)!=(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = 10;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = 17450507;

    t51 = ((x205|x206)!=(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 68U;
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 0U;
	int64_t x212 = 1315913113443122LL;

    t52 = ((x209|x210)!=(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	uint32_t x214 = UINT32_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t53 = -3;

    t53 = ((x213|x214)!=(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x218 = 4LLU;
	int64_t x219 = 213340LL;
	int8_t x220 = 1;
	int32_t t54 = 11959;

    t54 = ((x217|x218)!=(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 19899628431LLU;
	static int8_t x222 = -13;
	uint64_t x223 = 265702LLU;
	int32_t t55 = 5;

    t55 = ((x221|x222)!=(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = 900263271;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -683;

    t56 = ((x225|x226)!=(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 2U;
	static int8_t x231 = INT8_MIN;
	static volatile uint64_t x232 = UINT64_MAX;
	static int32_t t57 = -313540;

    t57 = ((x229|x230)!=(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	volatile int16_t x234 = 121;
	int8_t x235 = -16;
	static volatile int32_t t58 = 0;

    t58 = ((x233|x234)!=(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 103U;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -947;
	volatile int32_t t59 = -20;

    t59 = ((x237|x238)!=(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MIN;
	static int16_t x242 = 696;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -366662;

    t60 = ((x241|x242)!=(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 243353977LLU;
	int8_t x246 = INT8_MIN;
	int32_t t61 = 20097493;

    t61 = ((x245|x246)!=(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MIN;
	int16_t x251 = -167;
	int16_t x252 = INT16_MAX;

    t62 = ((x249|x250)!=(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MAX;
	uint16_t x254 = 22123U;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 15;

    t63 = ((x253|x254)!=(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 751126002572643451LLU;
	static volatile int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -828;

    t64 = ((x257|x258)!=(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int16_t x263 = -14517;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -10;

    t65 = ((x261|x262)!=(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = 8299332991LLU;
	static int8_t x268 = INT8_MAX;

    t66 = ((x265|x266)!=(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -3;
	int64_t x270 = INT64_MAX;
	int32_t x271 = -3134;
	int64_t x272 = -1LL;
	volatile int32_t t67 = -1736;

    t67 = ((x269|x270)!=(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x274 = -1;
	volatile uint16_t x275 = 2059U;
	uint16_t x276 = UINT16_MAX;

    t68 = ((x273|x274)!=(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = 354LL;
	volatile int32_t t69 = -209455;

    t69 = ((x277|x278)!=(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	int64_t x283 = -196100LL;
	int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = -229517;

    t70 = ((x281|x282)!=(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = -1;
	int8_t x287 = 13;
	int8_t x288 = 0;
	static volatile int32_t t71 = 183;

    t71 = ((x285|x286)!=(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int8_t x290 = -17;
	int16_t x291 = -1;
	int16_t x292 = -409;
	int32_t t72 = 2703;

    t72 = ((x289|x290)!=(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = 5238;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = -1;
	uint64_t x296 = 1452439686041978LLU;
	int32_t t73 = 0;

    t73 = ((x293|x294)!=(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	int16_t x299 = 2119;
	uint32_t x300 = UINT32_MAX;
	static volatile int32_t t74 = 719;

    t74 = ((x297|x298)!=(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x301 = -263884228374239658LL;
	int32_t x302 = 47;
	int32_t t75 = -30678;

    t75 = ((x301|x302)!=(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int8_t x306 = 1;
	volatile uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 243;

    t76 = ((x305|x306)!=(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = INT32_MAX;
	static uint32_t x311 = 1538672115U;
	uint16_t x312 = 2020U;
	static volatile int32_t t77 = -2;

    t77 = ((x309|x310)!=(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	uint16_t x314 = 6U;
	uint8_t x315 = UINT8_MAX;
	static volatile int32_t x316 = -71;
	volatile int32_t t78 = 1;

    t78 = ((x313|x314)!=(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 2U;
	volatile int64_t x318 = INT64_MAX;
	uint16_t x319 = 29770U;

    t79 = ((x317|x318)!=(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MIN;

    t80 = ((x321|x322)!=(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x326 = INT64_MAX;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;

    t81 = ((x325|x326)!=(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = 13996;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = -606959658290LL;
	static int64_t x332 = 105862754LL;
	volatile int32_t t82 = 44931492;

    t82 = ((x329|x330)!=(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	uint16_t x334 = 370U;
	volatile int32_t t83 = 56992;

    t83 = ((x333|x334)!=(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x338 = 21U;
	static int8_t x339 = -5;
	int64_t x340 = INT64_MIN;

    t84 = ((x337|x338)!=(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -6LL;
	static uint32_t x342 = UINT32_MAX;
	int64_t x343 = -210987302374812LL;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = 261479905;

    t85 = ((x341|x342)!=(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 17;
	static int64_t x346 = INT64_MIN;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MIN;

    t86 = ((x345|x346)!=(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	int16_t x350 = -8704;
	uint64_t x352 = 15LLU;
	static int32_t t87 = 30233;

    t87 = ((x349|x350)!=(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 26U;
	int32_t x355 = -1;
	volatile int64_t x356 = 11292743773437227LL;
	int32_t t88 = 216;

    t88 = ((x353|x354)!=(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x359 = INT16_MAX;
	static int32_t x360 = INT32_MIN;
	int32_t t89 = -53;

    t89 = ((x357|x358)!=(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 793741968;

    t90 = ((x361|x362)!=(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 7U;
	int8_t x367 = INT8_MAX;
	volatile int8_t x368 = INT8_MAX;

    t91 = ((x365|x366)!=(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MIN;
	int8_t x371 = -1;
	int8_t x372 = 0;
	volatile int32_t t92 = -22;

    t92 = ((x369|x370)!=(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	int8_t x374 = -3;
	int64_t x375 = INT64_MAX;
	static volatile int32_t t93 = 83512797;

    t93 = ((x373|x374)!=(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x378 = UINT32_MAX;
	int16_t x379 = -155;
	uint64_t x380 = 40927272093LLU;
	static int32_t t94 = -1;

    t94 = ((x377|x378)!=(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	int64_t x382 = -1LL;
	uint16_t x383 = 12538U;
	int32_t t95 = -259;

    t95 = ((x381|x382)!=(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 1079946166286786875LLU;
	int8_t x386 = INT8_MIN;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -270025412;

    t96 = ((x385|x386)!=(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -279876563;
	volatile int8_t x392 = INT8_MIN;

    t97 = ((x389|x390)!=(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = 684;
	int8_t x395 = -1;
	int8_t x396 = 1;
	int32_t t98 = 418934;

    t98 = ((x393|x394)!=(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	static volatile uint8_t x399 = 1U;
	int8_t x400 = -1;
	int32_t t99 = -11;

    t99 = ((x397|x398)!=(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 479831329508010LL;
	uint8_t x402 = 30U;
	static int64_t x404 = INT64_MIN;

    t100 = ((x401|x402)!=(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = -1;
	int32_t x406 = INT32_MIN;
	uint8_t x407 = 25U;
	int64_t x408 = INT64_MAX;
	volatile int32_t t101 = 7;

    t101 = ((x405|x406)!=(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x411 = UINT64_MAX;
	int8_t x412 = -1;
	static int32_t t102 = 1440;

    t102 = ((x409|x410)!=(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = 1933LL;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t t103 = 1;

    t103 = ((x413|x414)!=(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 6074735U;
	int8_t x419 = INT8_MIN;
	int32_t t104 = 1;

    t104 = ((x417|x418)!=(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x422 = INT32_MIN;
	uint32_t x423 = UINT32_MAX;
	static int64_t x424 = INT64_MIN;

    t105 = ((x421|x422)!=(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MAX;
	static int64_t x428 = -1LL;
	volatile int32_t t106 = -1;

    t106 = ((x425|x426)!=(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	uint16_t x430 = 10U;
	uint32_t x431 = UINT32_MAX;
	volatile uint32_t x432 = 667935U;
	int32_t t107 = 907;

    t107 = ((x429|x430)!=(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	uint8_t x435 = 6U;
	uint64_t x436 = 10522935LLU;

    t108 = ((x433|x434)!=(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x438 = -1;
	static uint64_t x439 = 53726347LLU;
	volatile int8_t x440 = INT8_MIN;
	static int32_t t109 = -991;

    t109 = ((x437|x438)!=(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -1LL;
	volatile int32_t x442 = 1;
	static volatile int32_t x443 = INT32_MAX;
	static int16_t x444 = INT16_MIN;
	int32_t t110 = -26893;

    t110 = ((x441|x442)!=(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 3U;
	uint32_t x446 = UINT32_MAX;
	static uint16_t x448 = UINT16_MAX;

    t111 = ((x445|x446)!=(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 855024U;
	int8_t x450 = INT8_MIN;
	static uint32_t x451 = 4271U;
	uint16_t x452 = 146U;
	int32_t t112 = 1;

    t112 = ((x449|x450)!=(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x453 = INT32_MIN;
	uint64_t x454 = 80998413LLU;
	int32_t x456 = -1;
	volatile int32_t t113 = -2806;

    t113 = ((x453|x454)!=(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int8_t x458 = -1;
	uint32_t x459 = 2U;
	uint64_t x460 = UINT64_MAX;
	static int32_t t114 = -254976;

    t114 = ((x457|x458)!=(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x462 = INT8_MIN;
	int32_t x463 = -1;
	static int8_t x464 = -2;
	static int32_t t115 = 94;

    t115 = ((x461|x462)!=(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = -1;
	volatile int64_t x467 = INT64_MIN;
	static int64_t x468 = INT64_MAX;

    t116 = ((x465|x466)!=(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -32;
	int32_t x470 = 183473608;
	static volatile int16_t x471 = INT16_MIN;
	static uint32_t x472 = 297U;
	int32_t t117 = 1;

    t117 = ((x469|x470)!=(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x474 = INT32_MAX;
	int16_t x475 = INT16_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = -17;

    t118 = ((x473|x474)!=(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int8_t x478 = -25;
	static volatile int32_t x479 = 3;
	static int16_t x480 = INT16_MAX;
	volatile int32_t t119 = -7;

    t119 = ((x477|x478)!=(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	volatile uint32_t x482 = 506U;
	volatile int64_t x483 = INT64_MIN;
	int16_t x484 = -158;

    t120 = ((x481|x482)!=(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 1;
	int64_t x486 = INT64_MIN;
	int8_t x487 = 22;
	int32_t t121 = -105193538;

    t121 = ((x485|x486)!=(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	int32_t x490 = INT32_MIN;
	volatile int8_t x491 = -1;
	int64_t x492 = INT64_MIN;
	int32_t t122 = -21829;

    t122 = ((x489|x490)!=(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	static volatile uint16_t x494 = 1U;
	uint8_t x495 = UINT8_MAX;
	volatile int8_t x496 = INT8_MAX;
	volatile int32_t t123 = -184;

    t123 = ((x493|x494)!=(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static volatile int64_t x498 = INT64_MAX;
	int16_t x499 = -1;
	static int32_t x500 = INT32_MAX;
	int32_t t124 = -990;

    t124 = ((x497|x498)!=(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 166417162;
	int32_t x504 = INT32_MAX;
	int32_t t125 = 670272;

    t125 = ((x501|x502)!=(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = -1;
	int16_t x506 = -9;
	static int32_t x507 = INT32_MIN;
	static int8_t x508 = INT8_MIN;
	int32_t t126 = 21;

    t126 = ((x505|x506)!=(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int8_t x510 = 0;
	uint16_t x511 = 3398U;
	uint32_t x512 = 1257057531U;
	int32_t t127 = 26795929;

    t127 = ((x509|x510)!=(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	static uint8_t x514 = 30U;
	uint8_t x515 = 6U;
	static int64_t x516 = INT64_MAX;
	volatile int32_t t128 = -1;

    t128 = ((x513|x514)!=(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MIN;
	int16_t x518 = -19;
	volatile int16_t x519 = -7893;
	int32_t t129 = -533411082;

    t129 = ((x517|x518)!=(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MAX;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = 3313U;
	int8_t x524 = INT8_MIN;
	int32_t t130 = -382949;

    t130 = ((x521|x522)!=(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 27U;
	uint8_t x528 = 12U;
	int32_t t131 = -138836;

    t131 = ((x525|x526)!=(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = INT16_MIN;
	int64_t x531 = -1LL;
	static int16_t x532 = INT16_MIN;
	int32_t t132 = 250750;

    t132 = ((x529|x530)!=(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = -20943976;
	int16_t x535 = 55;
	int16_t x536 = 719;
	volatile int32_t t133 = -128742;

    t133 = ((x533|x534)!=(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -1;
	int16_t x540 = INT16_MAX;
	volatile int32_t t134 = -1035493684;

    t134 = ((x537|x538)!=(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 8U;
	int32_t x542 = -567;
	int64_t x543 = INT64_MIN;
	uint8_t x544 = 0U;

    t135 = ((x541|x542)!=(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 13687536U;
	int16_t x546 = INT16_MIN;
	static volatile int64_t x547 = -2899847LL;
	static int64_t x548 = 152LL;
	int32_t t136 = 206;

    t136 = ((x545|x546)!=(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	static uint64_t x551 = 17555LLU;
	volatile int32_t t137 = 0;

    t137 = ((x549|x550)!=(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	int8_t x554 = -1;
	int16_t x556 = -1;
	int32_t t138 = 195;

    t138 = ((x553|x554)!=(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MIN;
	volatile uint32_t x559 = 925582U;
	static volatile int32_t t139 = -286;

    t139 = ((x557|x558)!=(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 94U;
	int8_t x562 = INT8_MAX;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = 0U;
	int32_t t140 = -26259956;

    t140 = ((x561|x562)!=(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x567 = INT8_MAX;
	uint8_t x568 = 0U;
	int32_t t141 = -24399803;

    t141 = ((x565|x566)!=(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	int32_t x570 = 31539139;
	static volatile uint64_t x571 = 365771371721411623LLU;
	int16_t x572 = INT16_MIN;
	volatile int32_t t142 = 1;

    t142 = ((x569|x570)!=(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x574 = -8;
	int64_t x575 = INT64_MAX;
	int8_t x576 = INT8_MIN;
	int32_t t143 = 264953063;

    t143 = ((x573|x574)!=(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = -1;
	static int8_t x580 = 1;
	int32_t t144 = -46;

    t144 = ((x577|x578)!=(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -102813700LL;
	volatile int32_t x582 = INT32_MAX;
	int8_t x583 = -1;
	volatile int16_t x584 = 0;
	volatile int32_t t145 = 7051;

    t145 = ((x581|x582)!=(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int16_t x586 = INT16_MAX;
	static int64_t x587 = INT64_MAX;

    t146 = ((x585|x586)!=(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 0;
	int64_t x590 = -1LL;
	uint32_t x591 = UINT32_MAX;
	volatile uint32_t x592 = 248589904U;
	volatile int32_t t147 = 238559;

    t147 = ((x589|x590)!=(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x595 = INT64_MIN;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = -3;

    t148 = ((x593|x594)!=(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	volatile uint8_t x598 = 0U;
	int8_t x599 = INT8_MIN;
	static int64_t x600 = INT64_MIN;
	static volatile int32_t t149 = 103488;

    t149 = ((x597|x598)!=(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = -1;
	static int64_t x602 = -54932641167LL;
	volatile int16_t x603 = INT16_MIN;
	uint64_t x604 = 247766LLU;
	int32_t t150 = -1691987;

    t150 = ((x601|x602)!=(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 62U;
	volatile int32_t x607 = -522;
	int64_t x608 = -1674273LL;
	volatile int32_t t151 = -2;

    t151 = ((x605|x606)!=(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = UINT64_MAX;
	uint16_t x610 = UINT16_MAX;
	uint8_t x612 = 7U;
	volatile int32_t t152 = -105;

    t152 = ((x609|x610)!=(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -2;
	volatile uint8_t x614 = UINT8_MAX;
	static int8_t x615 = INT8_MIN;
	int16_t x616 = -1;
	volatile int32_t t153 = -187901;

    t153 = ((x613|x614)!=(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = -1;
	int32_t x618 = INT32_MIN;
	volatile uint8_t x619 = UINT8_MAX;
	int32_t t154 = -19632230;

    t154 = ((x617|x618)!=(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x622 = UINT8_MAX;
	static int32_t x623 = 133401;
	int32_t x624 = 6716;
	int32_t t155 = 20489;

    t155 = ((x621|x622)!=(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 551409703771837816LLU;
	int64_t x626 = 193LL;
	volatile uint64_t x627 = 382864717708138LLU;
	int64_t x628 = INT64_MIN;
	volatile int32_t t156 = -37154;

    t156 = ((x625|x626)!=(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	static int64_t x630 = 15879115LL;
	int32_t x632 = -1;
	static volatile int32_t t157 = 157;

    t157 = ((x629|x630)!=(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = -1LL;
	static int64_t x635 = 225165731028LL;
	int8_t x636 = INT8_MIN;
	int32_t t158 = 2881577;

    t158 = ((x633|x634)!=(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -611;
	uint8_t x638 = 20U;
	volatile uint32_t x639 = 230579U;
	int32_t x640 = 353;
	int32_t t159 = 67057190;

    t159 = ((x637|x638)!=(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 3U;
	volatile int8_t x642 = 1;
	uint8_t x643 = 67U;

    t160 = ((x641|x642)!=(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 7078LLU;
	uint64_t x646 = UINT64_MAX;
	int64_t x647 = INT64_MIN;
	int8_t x648 = 2;
	volatile int32_t t161 = -166436136;

    t161 = ((x645|x646)!=(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = -14;
	int8_t x652 = 0;

    t162 = ((x649|x650)!=(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MIN;
	uint32_t x656 = UINT32_MAX;
	static int32_t t163 = -594231;

    t163 = ((x653|x654)!=(x655!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -111050;
	int32_t x658 = 2836;
	static int16_t x659 = 11;
	int32_t t164 = -603381;

    t164 = ((x657|x658)!=(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = -1;
	static volatile int64_t x662 = INT64_MAX;
	volatile int64_t x663 = -1LL;
	volatile int32_t x664 = -1;
	static int32_t t165 = 3;

    t165 = ((x661|x662)!=(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = INT16_MAX;
	static uint64_t x667 = 646654862LLU;
	int32_t x668 = INT32_MAX;
	int32_t t166 = -375;

    t166 = ((x665|x666)!=(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x671 = INT32_MAX;
	int64_t x672 = INT64_MIN;
	volatile int32_t t167 = 55336908;

    t167 = ((x669|x670)!=(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	static int64_t x674 = INT64_MIN;
	int64_t x676 = INT64_MIN;

    t168 = ((x673|x674)!=(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MIN;
	int8_t x678 = INT8_MAX;
	int8_t x679 = INT8_MIN;
	static volatile uint8_t x680 = 0U;
	static int32_t t169 = 3606565;

    t169 = ((x677|x678)!=(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 2782119292175LLU;
	int32_t x682 = -1;
	int32_t x683 = INT32_MIN;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t170 = 1;

    t170 = ((x681|x682)!=(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	static int8_t x686 = INT8_MIN;
	int8_t x687 = -1;

    t171 = ((x685|x686)!=(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x689 = INT32_MAX;
	volatile int8_t x690 = INT8_MIN;
	static volatile uint32_t x691 = 1212U;
	uint16_t x692 = UINT16_MAX;

    t172 = ((x689|x690)!=(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	static int32_t x694 = INT32_MAX;
	uint64_t x695 = UINT64_MAX;
	volatile int32_t t173 = 243641440;

    t173 = ((x693|x694)!=(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = INT16_MAX;
	uint8_t x698 = UINT8_MAX;
	static uint8_t x699 = UINT8_MAX;
	static int8_t x700 = -1;
	int32_t t174 = 6919;

    t174 = ((x697|x698)!=(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static int64_t x703 = INT64_MIN;
	volatile uint64_t x704 = 4508359965076LLU;
	int32_t t175 = -49558;

    t175 = ((x701|x702)!=(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = 8;
	int8_t x706 = INT8_MIN;
	int32_t x707 = -1;
	static int8_t x708 = INT8_MAX;

    t176 = ((x705|x706)!=(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -1LL;
	volatile int8_t x711 = INT8_MIN;
	uint32_t x712 = UINT32_MAX;
	int32_t t177 = -14824453;

    t177 = ((x709|x710)!=(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile int16_t x716 = 1530;
	volatile int32_t t178 = 411;

    t178 = ((x713|x714)!=(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	int16_t x718 = -3741;
	int16_t x719 = INT16_MIN;
	uint64_t x720 = 3337774961423498LLU;

    t179 = ((x717|x718)!=(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	volatile uint8_t x722 = 4U;
	static volatile int16_t x723 = -1642;
	int16_t x724 = INT16_MIN;
	int32_t t180 = 118;

    t180 = ((x721|x722)!=(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 439U;
	int32_t x726 = 8478;
	volatile int32_t x727 = INT32_MIN;
	int32_t x728 = -1;
	int32_t t181 = 662517;

    t181 = ((x725|x726)!=(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	int8_t x730 = INT8_MIN;
	int32_t x732 = 2;
	static volatile int32_t t182 = 22237;

    t182 = ((x729|x730)!=(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 364622144U;
	uint64_t x735 = 1487039787LLU;
	volatile uint64_t x736 = 59751134890LLU;
	volatile int32_t t183 = -21909;

    t183 = ((x733|x734)!=(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	static int32_t x740 = INT32_MIN;

    t184 = ((x737|x738)!=(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x741 = INT64_MIN;
	static int64_t x742 = 1LL;
	volatile uint32_t x743 = UINT32_MAX;

    t185 = ((x741|x742)!=(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x746 = INT64_MIN;
	uint32_t x747 = 2U;
	static uint32_t x748 = 2014418016U;

    t186 = ((x745|x746)!=(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	uint16_t x750 = 46U;
	uint16_t x751 = 821U;
	int16_t x752 = 224;
	volatile int32_t t187 = -1;

    t187 = ((x749|x750)!=(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 109761310719588958LLU;
	uint8_t x754 = UINT8_MAX;
	int16_t x755 = INT16_MAX;
	volatile uint32_t x756 = 0U;
	int32_t t188 = 7789;

    t188 = ((x753|x754)!=(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	uint64_t x758 = 1101147135992815LLU;
	int8_t x759 = INT8_MIN;
	int8_t x760 = INT8_MAX;
	int32_t t189 = -16;

    t189 = ((x757|x758)!=(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	volatile int8_t x762 = -1;
	uint16_t x763 = 29U;
	uint8_t x764 = 20U;
	volatile int32_t t190 = -31268274;

    t190 = ((x761|x762)!=(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x766 = INT8_MAX;
	int16_t x767 = INT16_MIN;
	int64_t x768 = 52LL;
	int32_t t191 = -598;

    t191 = ((x765|x766)!=(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = INT16_MAX;
	int64_t x771 = 145LL;
	volatile int32_t x772 = 533265003;
	int32_t t192 = 1;

    t192 = ((x769|x770)!=(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	static int64_t x774 = 19127687851304LL;
	static volatile uint64_t x775 = 29256051223669156LLU;
	static int16_t x776 = -1;
	int32_t t193 = 23;

    t193 = ((x773|x774)!=(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 3;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 29U;
	int32_t x780 = -139;
	volatile int32_t t194 = -617;

    t194 = ((x777|x778)!=(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 0U;
	static int8_t x782 = INT8_MIN;
	uint32_t x783 = 32U;
	volatile int32_t t195 = -1948;

    t195 = ((x781|x782)!=(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static int8_t x787 = -1;
	int16_t x788 = -1;
	int32_t t196 = 22532334;

    t196 = ((x785|x786)!=(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 62744610115LL;
	int64_t x790 = -1LL;
	int32_t x791 = INT32_MAX;
	int64_t x792 = INT64_MIN;
	volatile int32_t t197 = 0;

    t197 = ((x789|x790)!=(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = 14869610465795LL;
	static uint64_t x794 = UINT64_MAX;
	int16_t x795 = INT16_MIN;
	int64_t x796 = 13438334833LL;
	volatile int32_t t198 = 14439143;

    t198 = ((x793|x794)!=(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x798 = 26;
	uint8_t x799 = UINT8_MAX;
	uint16_t x800 = 405U;

    t199 = ((x797|x798)!=(x799!=x800));

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

