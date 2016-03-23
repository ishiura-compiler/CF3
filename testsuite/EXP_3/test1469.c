
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

int16_t x2 = INT16_MIN;
uint8_t x11 = 35U;
int8_t x15 = INT8_MAX;
static volatile uint32_t x16 = 10U;
volatile int32_t x17 = 1;
int64_t x19 = 402035899327LL;
uint16_t x20 = UINT16_MAX;
int32_t x24 = -1;
volatile int32_t x27 = INT32_MIN;
int16_t x31 = 0;
int64_t x32 = -1LL;
volatile int32_t t8 = -10074177;
int64_t x38 = INT64_MAX;
int32_t t9 = 934424;
int64_t x43 = INT64_MAX;
int32_t t13 = 1;
int64_t x60 = 131626105LL;
volatile int32_t x63 = INT32_MAX;
int16_t x64 = INT16_MAX;
volatile int32_t t15 = -15480461;
static int32_t x76 = INT32_MIN;
volatile int32_t t18 = 1027887292;
uint8_t x79 = 0U;
int64_t x80 = INT64_MIN;
int8_t x84 = -1;
static int32_t x85 = 165484384;
volatile int32_t t22 = -835519808;
int16_t x97 = INT16_MAX;
uint8_t x98 = 10U;
int8_t x100 = INT8_MIN;
uint32_t x104 = UINT32_MAX;
volatile int8_t x111 = INT8_MIN;
uint64_t x112 = 154422138189434LLU;
uint64_t x116 = 805211143010LLU;
uint64_t x117 = 471515685LLU;
volatile int32_t t29 = -2854;
volatile int16_t x121 = INT16_MAX;
uint8_t x132 = UINT8_MAX;
static uint32_t x133 = UINT32_MAX;
static int8_t x139 = 1;
int16_t x145 = INT16_MIN;
static int64_t x149 = -1LL;
static volatile uint32_t x151 = 5331161U;
uint8_t x152 = 0U;
int32_t x153 = INT32_MIN;
volatile int8_t x154 = 1;
int32_t x166 = INT32_MIN;
volatile int32_t t41 = -233487;
static volatile uint8_t x171 = 6U;
int32_t t42 = 28;
uint8_t x175 = UINT8_MAX;
int64_t x179 = -1LL;
uint64_t x181 = 2905456617734LLU;
volatile uint8_t x184 = UINT8_MAX;
volatile uint8_t x189 = 57U;
int16_t x196 = INT16_MIN;
volatile int32_t t49 = -346;
uint64_t x205 = UINT64_MAX;
volatile int16_t x216 = INT16_MIN;
volatile int32_t t53 = 6592;
uint64_t x220 = 277200LLU;
int32_t t54 = 954;
int32_t x223 = INT32_MAX;
int16_t x224 = INT16_MIN;
volatile int32_t t55 = 158636;
int32_t x226 = -1;
static uint16_t x234 = 10488U;
int64_t x235 = INT64_MAX;
int32_t t58 = -1;
uint64_t x237 = UINT64_MAX;
int64_t x239 = INT64_MIN;
int32_t t62 = 146734;
volatile int64_t x255 = INT64_MIN;
uint64_t x256 = 60004817457LLU;
int32_t x258 = -51776234;
static int16_t x260 = -1;
uint32_t x262 = 373641109U;
uint32_t x265 = 169781U;
volatile int64_t x272 = -1LL;
int64_t x273 = INT64_MIN;
volatile int16_t x277 = 3;
uint8_t x278 = UINT8_MAX;
uint32_t x279 = UINT32_MAX;
int32_t t70 = 13653544;
uint64_t x287 = 1188653815679945LLU;
volatile int64_t x288 = INT64_MIN;
volatile uint64_t x290 = 208915077376LLU;
int32_t x294 = INT32_MAX;
int32_t x306 = -1;
static uint32_t x308 = UINT32_MAX;
static int8_t x319 = 0;
static volatile uint16_t x320 = 1509U;
uint8_t x321 = 0U;
int16_t x323 = 53;
int32_t x325 = INT32_MIN;
int64_t x334 = 4458064201372894LL;
int8_t x338 = -1;
int16_t x349 = INT16_MIN;
int16_t x353 = -1;
static uint32_t x356 = 69U;
int8_t x365 = INT8_MAX;
static int32_t x367 = 63852;
int64_t x369 = -17869941402419691LL;
int8_t x371 = INT8_MAX;
volatile int32_t x374 = INT32_MAX;
volatile uint32_t x376 = 2146999U;
volatile int32_t t93 = 11;
int32_t x383 = INT32_MAX;
static uint64_t x384 = UINT64_MAX;
static volatile int64_t x391 = -1LL;
int32_t t97 = -188;
int8_t x395 = 54;
static uint64_t x396 = 561068841322081LLU;
uint16_t x398 = UINT16_MAX;
int16_t x399 = 367;
int8_t x400 = -1;
uint32_t x404 = 900U;
static int64_t x405 = INT64_MIN;
int64_t x407 = -1LL;
int32_t t101 = 1;
uint16_t x409 = 0U;
int32_t t102 = -11237312;
uint8_t x414 = UINT8_MAX;
int32_t t103 = 1;
int32_t x420 = -1;
volatile int32_t x425 = 0;
volatile uint16_t x426 = 1U;
static volatile int64_t x427 = INT64_MIN;
uint8_t x432 = 1U;
volatile int8_t x436 = 3;
static int32_t x439 = -856;
int16_t x440 = INT16_MAX;
static volatile int32_t t110 = 17916;
volatile int32_t x445 = INT32_MAX;
int8_t x447 = -1;
volatile int32_t x449 = 783;
uint64_t x455 = 4139109LLU;
uint32_t x462 = 27488485U;
volatile uint64_t x465 = UINT64_MAX;
uint16_t x467 = UINT16_MAX;
int32_t t116 = 658057365;
uint8_t x470 = 82U;
uint16_t x474 = UINT16_MAX;
int32_t x478 = 43400109;
volatile int16_t x482 = INT16_MAX;
volatile int32_t t120 = 5;
volatile int32_t t121 = -11805072;
volatile int32_t t122 = -443616;
int32_t x493 = 107;
int16_t x497 = -1;
int64_t x500 = -1LL;
volatile int32_t t124 = -50239;
uint8_t x504 = UINT8_MAX;
volatile int32_t t125 = 458759020;
int8_t x514 = INT8_MIN;
uint64_t x518 = 50LLU;
volatile int32_t t129 = 12916;
int64_t x525 = -1LL;
volatile uint32_t x526 = UINT32_MAX;
static volatile uint64_t x527 = 62084711701375114LLU;
static int16_t x530 = INT16_MIN;
volatile int32_t x532 = 20334;
int32_t t132 = 25946;
static uint64_t x535 = 97LLU;
int16_t x548 = INT16_MIN;
static volatile int32_t t136 = -5358;
uint64_t x551 = 773LLU;
int16_t x552 = -1;
static uint8_t x555 = UINT8_MAX;
volatile uint64_t x556 = 739940695300607154LLU;
int8_t x557 = 1;
static int16_t x566 = -6116;
int64_t x571 = INT64_MIN;
volatile int16_t x578 = INT16_MIN;
volatile uint8_t x580 = 5U;
uint16_t x593 = 2U;
int8_t x625 = INT8_MAX;
int16_t x628 = 19;
uint8_t x630 = UINT8_MAX;
static uint64_t x631 = 8038792LLU;
int32_t t157 = 30;
volatile int8_t x640 = INT8_MIN;
static int32_t x642 = -2;
static int32_t x645 = 65492513;
int32_t t161 = 0;
volatile uint8_t x656 = 21U;
int32_t t164 = 39;
int8_t x664 = 43;
uint64_t x670 = UINT64_MAX;
volatile int64_t x671 = 619293115177LL;
volatile int32_t t167 = -52082;
int8_t x680 = INT8_MAX;
volatile int32_t t169 = -1;
int64_t x684 = 2101LL;
volatile int32_t t171 = -25816;
int8_t x689 = -30;
int16_t x706 = -13035;
uint64_t x714 = 7354322LLU;
uint32_t x720 = UINT32_MAX;
int32_t x727 = 219812;
static uint32_t x729 = 5U;
int32_t t182 = -572605;
int64_t x736 = 998498LL;
int16_t x740 = -556;
int32_t t184 = -5817;
int8_t x744 = -1;
volatile int32_t t185 = 9;
int8_t x745 = INT8_MIN;
int32_t x746 = 57711;
volatile int16_t x749 = INT16_MIN;
uint64_t x764 = 2784398179020764744LLU;
int64_t x765 = -55682265LL;
uint32_t x769 = 28210U;
int64_t x774 = -1LL;
static volatile int32_t t193 = 12;
volatile int32_t x777 = INT32_MIN;
static int8_t x783 = INT8_MIN;
int8_t x786 = 8;
static volatile int32_t t198 = 457;
static int32_t t199 = 13921;


void f0(void) {
    	volatile int64_t x1 = INT64_MAX;
	int8_t x3 = 7;
	volatile int8_t x4 = 7;
	int32_t t0 = -259626;

    t0 = ((x1!=x2)|(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	static volatile int8_t x8 = -29;
	int32_t t1 = 1072720096;

    t1 = ((x5!=x6)|(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static int64_t x10 = INT64_MIN;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -14;

    t2 = ((x9!=x10)|(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = -52;
	int32_t t3 = 95647660;

    t3 = ((x13!=x14)|(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = 1015609;
	int32_t t4 = -3086;

    t4 = ((x17!=x18)|(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint32_t x22 = 43228207U;
	uint64_t x23 = 2509938816729LLU;
	int32_t t5 = -228841;

    t5 = ((x21!=x22)|(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -1LL;
	int8_t x26 = -1;
	int64_t x28 = INT64_MAX;
	static volatile int32_t t6 = -944;

    t6 = ((x25!=x26)|(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 3U;
	uint8_t x30 = 75U;
	volatile int32_t t7 = 101;

    t7 = ((x29!=x30)|(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	static uint16_t x34 = 43U;
	int16_t x35 = 3;
	static int32_t x36 = -266087;

    t8 = ((x33!=x34)|(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint64_t x39 = 282371988298322LLU;
	int64_t x40 = 150510097824846LL;

    t9 = ((x37!=x38)|(x39==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	int16_t x44 = -334;
	int32_t t10 = -123;

    t10 = ((x41!=x42)|(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = 0U;
	int16_t x46 = INT16_MIN;
	int64_t x47 = 124731917630185813LL;
	static int64_t x48 = -1LL;
	volatile int32_t t11 = -2956566;

    t11 = ((x45!=x46)|(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MIN;
	static volatile int32_t x50 = -352460243;
	volatile uint8_t x51 = UINT8_MAX;
	uint32_t x52 = 80U;
	static volatile int32_t t12 = 411;

    t12 = ((x49!=x50)|(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int32_t x54 = 30;
	volatile uint64_t x55 = 117744706LLU;
	int16_t x56 = 4207;

    t13 = ((x53!=x54)|(x55==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MAX;
	uint16_t x58 = 12U;
	int32_t x59 = INT32_MIN;
	int32_t t14 = 3;

    t14 = ((x57!=x58)|(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = 995598763115LL;
	int32_t x62 = INT32_MIN;

    t15 = ((x61!=x62)|(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	uint32_t x66 = 20350503U;
	uint32_t x67 = 132102U;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = 16701105;

    t16 = ((x65!=x66)|(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -1LL;
	static uint32_t x72 = 812U;
	int32_t t17 = -961996;

    t17 = ((x69!=x70)|(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	int64_t x75 = 55407LL;

    t18 = ((x73!=x74)|(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x77 = UINT8_MAX;
	volatile uint8_t x78 = 2U;
	volatile int32_t t19 = -863;

    t19 = ((x77!=x78)|(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MAX;
	int32_t t20 = 9200;

    t20 = ((x81!=x82)|(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = UINT16_MAX;
	static uint8_t x87 = 4U;
	int16_t x88 = 37;
	int32_t t21 = 628307;

    t21 = ((x85!=x86)|(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 63796492;
	volatile int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -508955154999341477LL;

    t22 = ((x89!=x90)|(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	int64_t x94 = INT64_MAX;
	static int8_t x95 = INT8_MIN;
	uint64_t x96 = 7620LLU;
	volatile int32_t t23 = -33851507;

    t23 = ((x93!=x94)|(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x99 = -16355630LL;
	static volatile int32_t t24 = -4136353;

    t24 = ((x97!=x98)|(x99==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	uint16_t x102 = 31151U;
	int16_t x103 = -804;
	int32_t t25 = 15;

    t25 = ((x101!=x102)|(x103==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x105 = -3735;
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = INT32_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t26 = 3;

    t26 = ((x105!=x106)|(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 27400U;
	static volatile int8_t x110 = -30;
	volatile int32_t t27 = 34957705;

    t27 = ((x109!=x110)|(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 1U;
	static int64_t x114 = -1LL;
	static volatile uint64_t x115 = 22457783023087LLU;
	static int32_t t28 = 1;

    t28 = ((x113!=x114)|(x115==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x118 = INT64_MIN;
	volatile int32_t x119 = INT32_MIN;
	uint16_t x120 = 12077U;

    t29 = ((x117!=x118)|(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x122 = -1;
	volatile int64_t x123 = INT64_MAX;
	uint64_t x124 = 202723050638LLU;
	int32_t t30 = 282;

    t30 = ((x121!=x122)|(x123==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 142688399510335175LLU;
	static int32_t x126 = -1;
	int16_t x127 = -70;
	uint64_t x128 = 6861219790LLU;
	int32_t t31 = -126593;

    t31 = ((x125!=x126)|(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = 5049U;
	static uint16_t x130 = 13078U;
	uint64_t x131 = 1973245824485LLU;
	volatile int32_t t32 = 11;

    t32 = ((x129!=x130)|(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x134 = -1;
	static uint8_t x135 = 5U;
	int16_t x136 = -6254;
	volatile int32_t t33 = 854284;

    t33 = ((x133!=x134)|(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MAX;
	static int32_t x138 = -1;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 56;

    t34 = ((x137!=x138)|(x139==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 27302300326LL;
	static int8_t x142 = INT8_MAX;
	volatile int16_t x143 = -1;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 66;

    t35 = ((x141!=x142)|(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x146 = 534189932LLU;
	int64_t x147 = INT64_MIN;
	volatile int16_t x148 = INT16_MIN;
	int32_t t36 = -170;

    t36 = ((x145!=x146)|(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x150 = INT32_MIN;
	volatile int32_t t37 = 12188;

    t37 = ((x149!=x150)|(x151==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x155 = 4LLU;
	int64_t x156 = INT64_MAX;
	static volatile int32_t t38 = 0;

    t38 = ((x153!=x154)|(x155==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = 48;
	int64_t x158 = -49379661LL;
	uint8_t x159 = 4U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 102406;

    t39 = ((x157!=x158)|(x159==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MAX;
	static int16_t x162 = -13;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int32_t x164 = 1;
	volatile int32_t t40 = 334447;

    t40 = ((x161!=x162)|(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	int8_t x167 = -1;
	uint8_t x168 = UINT8_MAX;

    t41 = ((x165!=x166)|(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MIN;
	int32_t x172 = INT32_MIN;

    t42 = ((x169!=x170)|(x171==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -2;
	int64_t x174 = 95596883758728323LL;
	int32_t x176 = INT32_MIN;
	static int32_t t43 = -1926;

    t43 = ((x173!=x174)|(x175==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 3U;
	static int32_t x178 = -1;
	int64_t x180 = -192893975995LL;
	int32_t t44 = 54270705;

    t44 = ((x177!=x178)|(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = UINT16_MAX;
	int8_t x183 = -1;
	volatile int32_t t45 = 66;

    t45 = ((x181!=x182)|(x183==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	uint64_t x186 = 2LLU;
	static uint32_t x187 = 31023U;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -11834367;

    t46 = ((x185!=x186)|(x187==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x190 = 189562490U;
	volatile uint32_t x191 = 180U;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 845;

    t47 = ((x189!=x190)|(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	uint64_t x194 = 421831643771LLU;
	uint8_t x195 = UINT8_MAX;
	int32_t t48 = -5573867;

    t48 = ((x193!=x194)|(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 73U;
	int16_t x198 = 1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;

    t49 = ((x197!=x198)|(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	uint32_t x202 = UINT32_MAX;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = 1LL;
	int32_t t50 = -62689;

    t50 = ((x201!=x202)|(x203==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x206 = 1U;
	uint64_t x207 = 33355404970359246LLU;
	volatile int16_t x208 = 417;
	static volatile int32_t t51 = -6;

    t51 = ((x205!=x206)|(x207==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -1;
	volatile int32_t t52 = 160;

    t52 = ((x209!=x210)|(x211==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = 663U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;

    t53 = ((x213!=x214)|(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 85453676U;
	int16_t x218 = -1;
	static uint8_t x219 = 1U;

    t54 = ((x217!=x218)|(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MIN;

    t55 = ((x221!=x222)|(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = -70977LL;
	int32_t t56 = -2990091;

    t56 = ((x225!=x226)|(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -896176267140LL;
	volatile int32_t x230 = INT32_MIN;
	int32_t x231 = -1;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -1276410;

    t57 = ((x229!=x230)|(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = -87065080953825LL;
	volatile int64_t x236 = 2575018LL;

    t58 = ((x233!=x234)|(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = UINT8_MAX;
	uint16_t x240 = 1454U;
	volatile int32_t t59 = -93;

    t59 = ((x237!=x238)|(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 30666;

    t60 = ((x241!=x242)|(x243==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	static uint16_t x246 = 434U;
	int16_t x247 = -2052;
	int16_t x248 = -754;
	volatile int32_t t61 = -2680;

    t61 = ((x245!=x246)|(x247==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	uint16_t x250 = 676U;
	static uint16_t x251 = UINT16_MAX;
	volatile uint64_t x252 = UINT64_MAX;

    t62 = ((x249!=x250)|(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	volatile int8_t x254 = -1;
	static volatile int32_t t63 = 14789;

    t63 = ((x253!=x254)|(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 46U;
	uint64_t x259 = 18103936901292LLU;
	int32_t t64 = 20;

    t64 = ((x257!=x258)|(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = -1;
	static int32_t t65 = 26;

    t65 = ((x261!=x262)|(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x266 = 87U;
	volatile int64_t x267 = INT64_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 1;

    t66 = ((x265!=x266)|(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	volatile int16_t x270 = INT16_MAX;
	uint16_t x271 = 302U;
	volatile int32_t t67 = 492;

    t67 = ((x269!=x270)|(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x274 = INT8_MIN;
	static uint16_t x275 = 27905U;
	static int32_t x276 = -2;
	int32_t t68 = 7126;

    t68 = ((x273!=x274)|(x275==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x280 = 3LLU;
	int32_t t69 = -54954899;

    t69 = ((x277!=x278)|(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	volatile int64_t x282 = INT64_MIN;
	static volatile uint8_t x283 = 12U;
	static int16_t x284 = INT16_MAX;

    t70 = ((x281!=x282)|(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	static volatile int64_t x286 = INT64_MIN;
	static volatile int32_t t71 = 69213;

    t71 = ((x285!=x286)|(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 2U;
	uint32_t x291 = 18776530U;
	uint32_t x292 = UINT32_MAX;
	static int32_t t72 = 1959860;

    t72 = ((x289!=x290)|(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	static int8_t x295 = -5;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -539436804;

    t73 = ((x293!=x294)|(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 7267732982LLU;
	int16_t x298 = -1;
	volatile uint8_t x299 = 9U;
	volatile int32_t x300 = INT32_MIN;
	int32_t t74 = 4;

    t74 = ((x297!=x298)|(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 85U;
	int16_t x302 = -8;
	int64_t x303 = INT64_MIN;
	static uint8_t x304 = 2U;
	int32_t t75 = -18;

    t75 = ((x301!=x302)|(x303==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 22LLU;
	volatile int8_t x307 = INT8_MAX;
	static volatile int32_t t76 = -211772;

    t76 = ((x305!=x306)|(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	static uint16_t x310 = 185U;
	int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;
	static int32_t t77 = 49667812;

    t77 = ((x309!=x310)|(x311==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = -50;
	static int32_t x314 = -432331766;
	static int16_t x315 = 4374;
	uint16_t x316 = 3U;
	static int32_t t78 = 16;

    t78 = ((x313!=x314)|(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 9235217150951974LLU;
	int8_t x318 = INT8_MIN;
	volatile int32_t t79 = 12;

    t79 = ((x317!=x318)|(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x322 = 21432U;
	uint16_t x324 = 5U;
	int32_t t80 = -119;

    t80 = ((x321!=x322)|(x323==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = -1;
	static int32_t x327 = 295431;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 2498;

    t81 = ((x325!=x326)|(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MAX;
	int16_t x331 = 0;
	static volatile int64_t x332 = INT64_MAX;
	static int32_t t82 = 2073913;

    t82 = ((x329!=x330)|(x331==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MIN;
	uint8_t x335 = 47U;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -2823;

    t83 = ((x333!=x334)|(x335==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	uint32_t x339 = 51U;
	volatile uint64_t x340 = 433273906LLU;
	int32_t t84 = 427150;

    t84 = ((x337!=x338)|(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 90U;
	int64_t x342 = -16172LL;
	int64_t x343 = -10128368103309LL;
	uint32_t x344 = 15U;
	int32_t t85 = 1;

    t85 = ((x341!=x342)|(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = -7;
	volatile uint16_t x346 = 27U;
	int64_t x347 = 68462302665705LL;
	static int16_t x348 = INT16_MAX;
	int32_t t86 = -46336695;

    t86 = ((x345!=x346)|(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x350 = INT64_MIN;
	int8_t x351 = -1;
	static uint32_t x352 = UINT32_MAX;
	int32_t t87 = 110405861;

    t87 = ((x349!=x350)|(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x354 = -1LL;
	int16_t x355 = 2;
	volatile int32_t t88 = -489395093;

    t88 = ((x353!=x354)|(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = UINT16_MAX;
	volatile int16_t x358 = INT16_MIN;
	uint64_t x359 = 839582160434633876LLU;
	static int32_t x360 = INT32_MAX;
	int32_t t89 = -121;

    t89 = ((x357!=x358)|(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint16_t x362 = 2034U;
	uint64_t x363 = 35LLU;
	static int32_t x364 = 0;
	int32_t t90 = 58;

    t90 = ((x361!=x362)|(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x366 = -867411;
	int32_t x368 = -1;
	volatile int32_t t91 = -598678926;

    t91 = ((x365!=x366)|(x367==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x370 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 10;

    t92 = ((x369!=x370)|(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x373 = -52;
	volatile int32_t x375 = INT32_MIN;

    t93 = ((x373!=x374)|(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -11;
	static int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t94 = 505962;

    t94 = ((x377!=x378)|(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 19U;
	static int8_t x382 = INT8_MIN;
	static int32_t t95 = -1;

    t95 = ((x381!=x382)|(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 1U;
	int64_t x386 = -258576876960LL;
	volatile int16_t x387 = -42;
	int32_t x388 = INT32_MIN;
	static int32_t t96 = 0;

    t96 = ((x385!=x386)|(x387==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 20U;
	int64_t x390 = INT64_MAX;
	int32_t x392 = 76368397;

    t97 = ((x389!=x390)|(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = -3027;
	int8_t x394 = INT8_MAX;
	static volatile int32_t t98 = -2025;

    t98 = ((x393!=x394)|(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 3;
	int32_t t99 = 2251;

    t99 = ((x397!=x398)|(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x401 = 96U;
	int64_t x402 = 7043190246161855LL;
	uint64_t x403 = 180287219652LLU;
	static volatile int32_t t100 = 741;

    t100 = ((x401!=x402)|(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = 823;
	static uint32_t x408 = 154U;

    t101 = ((x405!=x406)|(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x410 = 13219478LLU;
	int8_t x411 = -9;
	int16_t x412 = INT16_MIN;

    t102 = ((x409!=x410)|(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	int64_t x415 = 301289261673982396LL;
	static uint16_t x416 = 10829U;

    t103 = ((x413!=x414)|(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MAX;
	int16_t x418 = 1884;
	volatile uint8_t x419 = 6U;
	volatile int32_t t104 = 7110;

    t104 = ((x417!=x418)|(x419==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 27U;
	int64_t x422 = INT64_MAX;
	volatile int8_t x423 = -1;
	int64_t x424 = 99552416LL;
	int32_t t105 = -5221514;

    t105 = ((x421!=x422)|(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 639668;

    t106 = ((x425!=x426)|(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 38U;
	uint16_t x430 = UINT16_MAX;
	static int64_t x431 = INT64_MIN;
	volatile int32_t t107 = -53;

    t107 = ((x429!=x430)|(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MAX;
	volatile int64_t x434 = -1487187248537539932LL;
	static uint32_t x435 = 6853596U;
	volatile int32_t t108 = 16;

    t108 = ((x433!=x434)|(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -483176;
	uint8_t x438 = 83U;
	int32_t t109 = 26925;

    t109 = ((x437!=x438)|(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = UINT32_MAX;
	static int16_t x442 = INT16_MAX;
	int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MAX;

    t110 = ((x441!=x442)|(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x446 = UINT16_MAX;
	uint16_t x448 = 0U;
	volatile int32_t t111 = 414;

    t111 = ((x445!=x446)|(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x450 = 23U;
	uint32_t x451 = 61538U;
	int8_t x452 = INT8_MIN;
	int32_t t112 = -191902925;

    t112 = ((x449!=x450)|(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 1;
	int8_t x454 = INT8_MIN;
	int16_t x456 = -1;
	volatile int32_t t113 = -3670;

    t113 = ((x453!=x454)|(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 14;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = INT32_MAX;
	uint32_t x460 = 233U;
	volatile int32_t t114 = -63;

    t114 = ((x457!=x458)|(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x461 = 16025LLU;
	int64_t x463 = INT64_MIN;
	uint16_t x464 = 6U;
	volatile int32_t t115 = -62233;

    t115 = ((x461!=x462)|(x463==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = -1;
	uint64_t x468 = UINT64_MAX;

    t116 = ((x465!=x466)|(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = INT64_MAX;
	static volatile int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;
	int32_t t117 = -2372;

    t117 = ((x469!=x470)|(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	volatile uint16_t x475 = UINT16_MAX;
	static int8_t x476 = 1;
	volatile int32_t t118 = -182620632;

    t118 = ((x473!=x474)|(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 42034LLU;
	int8_t x479 = INT8_MIN;
	volatile uint8_t x480 = 1U;
	int32_t t119 = 531915113;

    t119 = ((x477!=x478)|(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 60718U;
	int32_t x483 = -1;
	int32_t x484 = -1;

    t120 = ((x481!=x482)|(x483==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = 4;
	uint16_t x486 = UINT16_MAX;
	volatile int8_t x487 = -23;
	static uint64_t x488 = 8425864460891610LLU;

    t121 = ((x485!=x486)|(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = -14603;
	int64_t x490 = INT64_MIN;
	int32_t x491 = -38335;
	volatile uint8_t x492 = 1U;

    t122 = ((x489!=x490)|(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 1LLU;
	volatile int64_t x495 = 175420LL;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = 8250432;

    t123 = ((x493!=x494)|(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x498 = 1005999;
	volatile uint16_t x499 = 104U;

    t124 = ((x497!=x498)|(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MAX;

    t125 = ((x501!=x502)|(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	uint32_t x506 = 2993U;
	volatile uint64_t x507 = 1039255682045LLU;
	int32_t x508 = -1;
	static volatile int32_t t126 = 478792152;

    t126 = ((x505!=x506)|(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	int16_t x510 = -1;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = 17U;
	static int32_t t127 = 781;

    t127 = ((x509!=x510)|(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = 35;
	int8_t x515 = -1;
	int16_t x516 = INT16_MIN;
	volatile int32_t t128 = 6293;

    t128 = ((x513!=x514)|(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = 470906U;
	int32_t x519 = INT32_MAX;
	int8_t x520 = INT8_MIN;

    t129 = ((x517!=x518)|(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	int8_t x522 = INT8_MIN;
	static int64_t x523 = INT64_MAX;
	uint8_t x524 = 60U;
	static int32_t t130 = -1;

    t130 = ((x521!=x522)|(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x528 = -1;
	int32_t t131 = 1;

    t131 = ((x525!=x526)|(x527==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = UINT32_MAX;
	volatile int16_t x531 = 3;

    t132 = ((x529!=x530)|(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 25888U;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t133 = -4740070;

    t133 = ((x533!=x534)|(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	uint64_t x538 = 1940655844935095LLU;
	int32_t x539 = -14;
	int64_t x540 = INT64_MIN;
	int32_t t134 = 57655496;

    t134 = ((x537!=x538)|(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	uint64_t x542 = 69279588142861264LLU;
	int16_t x543 = -1;
	static int16_t x544 = -19;
	int32_t t135 = 32235288;

    t135 = ((x541!=x542)|(x543==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	volatile uint8_t x546 = 7U;
	uint32_t x547 = UINT32_MAX;

    t136 = ((x545!=x546)|(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	volatile int16_t x550 = 5;
	static int32_t t137 = 5138203;

    t137 = ((x549!=x550)|(x551==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	uint32_t x554 = UINT32_MAX;
	volatile int32_t t138 = 118324587;

    t138 = ((x553!=x554)|(x555==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = INT8_MIN;
	uint16_t x559 = 812U;
	int32_t x560 = -1;
	int32_t t139 = 959238;

    t139 = ((x557!=x558)|(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = 769U;
	int32_t x564 = INT32_MIN;
	int32_t t140 = -7512;

    t140 = ((x561!=x562)|(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -1;
	volatile uint32_t x567 = UINT32_MAX;
	volatile int64_t x568 = INT64_MIN;
	volatile int32_t t141 = -616662913;

    t141 = ((x565!=x566)|(x567==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	volatile uint8_t x570 = 65U;
	int64_t x572 = INT64_MIN;
	volatile int32_t t142 = -127;

    t142 = ((x569!=x570)|(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MAX;
	volatile int16_t x576 = INT16_MIN;
	volatile int32_t t143 = 1200;

    t143 = ((x573!=x574)|(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 6597;
	volatile int8_t x579 = INT8_MIN;
	int32_t t144 = 0;

    t144 = ((x577!=x578)|(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 0U;
	uint64_t x582 = 111042LLU;
	uint16_t x583 = 89U;
	volatile int32_t x584 = -1;
	int32_t t145 = 783871920;

    t145 = ((x581!=x582)|(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	uint32_t x586 = UINT32_MAX;
	int32_t x587 = -1;
	uint16_t x588 = 0U;
	volatile int32_t t146 = -364453;

    t146 = ((x585!=x586)|(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 5955394966758LL;
	volatile int64_t x590 = -1251917604LL;
	static int16_t x591 = 123;
	uint64_t x592 = 108LLU;
	static int32_t t147 = 3647;

    t147 = ((x589!=x590)|(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x594 = INT8_MIN;
	int32_t x595 = -1;
	int32_t x596 = INT32_MIN;
	int32_t t148 = -11653923;

    t148 = ((x593!=x594)|(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 0U;
	int32_t x598 = 1;
	uint32_t x599 = 12027U;
	volatile int8_t x600 = INT8_MIN;
	static volatile int32_t t149 = 207465;

    t149 = ((x597!=x598)|(x599==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = 21U;
	uint16_t x602 = UINT16_MAX;
	volatile int16_t x603 = INT16_MIN;
	uint16_t x604 = 0U;
	int32_t t150 = -14113940;

    t150 = ((x601!=x602)|(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 125455097576128LLU;
	int8_t x606 = 8;
	int8_t x607 = -1;
	volatile uint8_t x608 = 6U;
	volatile int32_t t151 = -5640601;

    t151 = ((x605!=x606)|(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = INT16_MIN;
	static uint8_t x611 = 10U;
	int16_t x612 = INT16_MAX;
	int32_t t152 = 402;

    t152 = ((x609!=x610)|(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x613 = -1;
	int64_t x614 = INT64_MAX;
	int8_t x615 = -1;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t153 = -10;

    t153 = ((x613!=x614)|(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MAX;
	int16_t x619 = -468;
	static uint16_t x620 = 6U;
	static int32_t t154 = -6105;

    t154 = ((x617!=x618)|(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int64_t x622 = -1LL;
	int16_t x623 = INT16_MIN;
	uint16_t x624 = 92U;
	int32_t t155 = -1;

    t155 = ((x621!=x622)|(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x626 = INT16_MIN;
	uint32_t x627 = 3066U;
	volatile int32_t t156 = -3;

    t156 = ((x625!=x626)|(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MAX;
	volatile uint64_t x632 = 172797388459451LLU;

    t157 = ((x629!=x630)|(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 3433868U;
	volatile int32_t x634 = INT32_MAX;
	int32_t x635 = INT32_MIN;
	volatile int32_t x636 = -2902;
	int32_t t158 = -5798;

    t158 = ((x633!=x634)|(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int64_t x638 = -7LL;
	uint8_t x639 = 6U;
	volatile int32_t t159 = 12;

    t159 = ((x637!=x638)|(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 7757904LL;
	uint16_t x643 = UINT16_MAX;
	int32_t x644 = INT32_MAX;
	int32_t t160 = 823936611;

    t160 = ((x641!=x642)|(x643==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = INT8_MAX;
	static int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MAX;

    t161 = ((x645!=x646)|(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	uint32_t x650 = 4U;
	int16_t x651 = 230;
	int8_t x652 = -1;
	int32_t t162 = -6274199;

    t162 = ((x649!=x650)|(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = 173U;
	int8_t x654 = INT8_MAX;
	static int8_t x655 = -1;
	static volatile int32_t t163 = -74123;

    t163 = ((x653!=x654)|(x655==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	static int32_t x658 = INT32_MAX;
	volatile int64_t x659 = INT64_MAX;
	uint8_t x660 = 5U;

    t164 = ((x657!=x658)|(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	static int64_t x662 = -1LL;
	int8_t x663 = -1;
	static int32_t t165 = -24;

    t165 = ((x661!=x662)|(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -3;
	volatile int32_t x666 = -5052;
	int64_t x667 = -469936155722332698LL;
	int16_t x668 = INT16_MAX;
	volatile int32_t t166 = -63592678;

    t166 = ((x665!=x666)|(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	uint8_t x672 = UINT8_MAX;

    t167 = ((x669!=x670)|(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 1;
	int16_t x674 = 311;
	uint8_t x675 = 56U;
	uint16_t x676 = 431U;
	int32_t t168 = 676;

    t168 = ((x673!=x674)|(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	int8_t x678 = INT8_MIN;
	uint16_t x679 = 3061U;

    t169 = ((x677!=x678)|(x679==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 4046U;
	int32_t x682 = INT32_MIN;
	volatile int8_t x683 = -1;
	volatile int32_t t170 = -82;

    t170 = ((x681!=x682)|(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	uint64_t x686 = 3482585531387313018LLU;
	static uint32_t x687 = 16U;
	static uint16_t x688 = 18516U;

    t171 = ((x685!=x686)|(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x690 = UINT32_MAX;
	int8_t x691 = INT8_MIN;
	uint32_t x692 = 212310U;
	int32_t t172 = -1869;

    t172 = ((x689!=x690)|(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint16_t x694 = UINT16_MAX;
	int16_t x695 = -16;
	int32_t x696 = INT32_MIN;
	volatile int32_t t173 = -2392055;

    t173 = ((x693!=x694)|(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x698 = -1LL;
	uint8_t x699 = 39U;
	uint16_t x700 = 41U;
	int32_t t174 = 767;

    t174 = ((x697!=x698)|(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 204928U;
	int8_t x702 = INT8_MAX;
	volatile int32_t x703 = 1300683;
	static int32_t x704 = -1;
	volatile int32_t t175 = 617;

    t175 = ((x701!=x702)|(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int8_t x707 = INT8_MIN;
	static int64_t x708 = 227187838780037523LL;
	volatile int32_t t176 = 291;

    t176 = ((x705!=x706)|(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	static uint32_t x710 = UINT32_MAX;
	int8_t x711 = INT8_MAX;
	int16_t x712 = -1;
	volatile int32_t t177 = -78032473;

    t177 = ((x709!=x710)|(x711==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 848U;
	int32_t x715 = INT32_MIN;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -709931;

    t178 = ((x713!=x714)|(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 37991695U;
	uint32_t x718 = 865482741U;
	volatile int32_t x719 = INT32_MIN;
	volatile int32_t t179 = -85585;

    t179 = ((x717!=x718)|(x719==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -28100331;
	int8_t x722 = INT8_MIN;
	uint32_t x723 = 575U;
	volatile int8_t x724 = 18;
	volatile int32_t t180 = -21892;

    t180 = ((x721!=x722)|(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1115658368321LL;
	int32_t x726 = INT32_MIN;
	volatile int8_t x728 = INT8_MIN;
	volatile int32_t t181 = -312;

    t181 = ((x725!=x726)|(x727==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x730 = 9U;
	int8_t x731 = INT8_MIN;
	int8_t x732 = -1;

    t182 = ((x729!=x730)|(x731==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 14444U;
	int64_t x734 = -1LL;
	int8_t x735 = -1;
	static int32_t t183 = 3;

    t183 = ((x733!=x734)|(x735==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = 353501239;
	volatile int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MIN;

    t184 = ((x737!=x738)|(x739==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	volatile uint32_t x742 = 1160U;
	static uint16_t x743 = 1689U;

    t185 = ((x741!=x742)|(x743==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x747 = INT64_MIN;
	static int64_t x748 = 24752370LL;
	volatile int32_t t186 = 6133;

    t186 = ((x745!=x746)|(x747==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MAX;
	static int16_t x751 = INT16_MIN;
	static int64_t x752 = INT64_MIN;
	int32_t t187 = -15195;

    t187 = ((x749!=x750)|(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MIN;
	int64_t x754 = 60900374798663LL;
	int16_t x755 = INT16_MIN;
	int8_t x756 = 12;
	volatile int32_t t188 = 871840892;

    t188 = ((x753!=x754)|(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	uint8_t x758 = UINT8_MAX;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = -6732;
	volatile int32_t t189 = 50728362;

    t189 = ((x757!=x758)|(x759==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	int8_t x762 = -1;
	int8_t x763 = 6;
	int32_t t190 = -25131919;

    t190 = ((x761!=x762)|(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = -1;
	static int8_t x767 = INT8_MIN;
	uint16_t x768 = 6U;
	volatile int32_t t191 = -920231633;

    t191 = ((x765!=x766)|(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = -34;
	volatile int8_t x771 = INT8_MIN;
	int64_t x772 = 4616864280551LL;
	volatile int32_t t192 = 1324079;

    t192 = ((x769!=x770)|(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile uint32_t x775 = 16U;
	int16_t x776 = 296;

    t193 = ((x773!=x774)|(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x778 = 49983771U;
	static uint32_t x779 = UINT32_MAX;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 0;

    t194 = ((x777!=x778)|(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	volatile int64_t x782 = -1LL;
	int64_t x784 = -152313886200LL;
	volatile int32_t t195 = 74;

    t195 = ((x781!=x782)|(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 906454U;
	int16_t x787 = -1;
	int64_t x788 = INT64_MAX;
	static int32_t t196 = -1923;

    t196 = ((x785!=x786)|(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	uint64_t x790 = 6655LLU;
	int64_t x791 = INT64_MIN;
	int64_t x792 = -8725LL;
	volatile int32_t t197 = -8087683;

    t197 = ((x789!=x790)|(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	int64_t x794 = INT64_MAX;
	int64_t x795 = INT64_MIN;
	int64_t x796 = 1703985LL;

    t198 = ((x793!=x794)|(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MAX;
	static int8_t x798 = 0;
	int16_t x799 = -1;
	int8_t x800 = -10;

    t199 = ((x797!=x798)|(x799==x800));

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

