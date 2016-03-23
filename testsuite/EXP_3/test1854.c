
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

uint8_t x1 = UINT8_MAX;
int8_t x2 = -1;
static volatile int32_t x4 = INT32_MAX;
int64_t x5 = 13602213164LL;
uint32_t x9 = 4U;
static uint64_t x10 = UINT64_MAX;
int32_t x16 = INT32_MIN;
uint8_t x19 = 0U;
static int32_t x21 = -1;
int32_t x34 = INT32_MIN;
uint32_t x36 = UINT32_MAX;
volatile int32_t t8 = -80;
int16_t x38 = INT16_MIN;
static int32_t x42 = 43683294;
volatile int32_t t10 = 7030711;
static int32_t x46 = INT32_MIN;
static int32_t t11 = -1147;
volatile int32_t t12 = 0;
int8_t x60 = 0;
uint32_t x63 = 189U;
volatile int32_t t15 = -172;
int16_t x72 = 275;
uint32_t x76 = 1881U;
uint64_t x78 = UINT64_MAX;
uint32_t x84 = UINT32_MAX;
static uint64_t x88 = UINT64_MAX;
volatile int32_t x89 = INT32_MIN;
uint64_t x101 = UINT64_MAX;
volatile int32_t x104 = -772857;
static int16_t x110 = 8316;
int64_t x116 = INT64_MIN;
uint16_t x122 = UINT16_MAX;
volatile int32_t x124 = INT32_MIN;
uint32_t x127 = 4372287U;
volatile int32_t t31 = -22;
volatile int64_t x129 = -34189133LL;
uint64_t x131 = UINT64_MAX;
int16_t x140 = INT16_MAX;
uint16_t x150 = 4U;
volatile int32_t x161 = -43397711;
int64_t x167 = -4953LL;
static int32_t x171 = INT32_MIN;
static uint32_t x176 = 1331102U;
int16_t x179 = INT16_MIN;
int8_t x185 = -1;
static int32_t t49 = 31630;
static int16_t x202 = -228;
int16_t x203 = INT16_MAX;
uint16_t x209 = 1U;
int8_t x213 = 0;
uint16_t x215 = 37U;
int16_t x216 = 27;
int64_t x219 = -7940659410464097LL;
uint32_t x226 = UINT32_MAX;
int32_t x227 = 13912;
volatile uint64_t x230 = 1823046786LLU;
volatile int32_t t57 = -2618;
static volatile int64_t x234 = -1819056497372334001LL;
int64_t x237 = INT64_MAX;
uint8_t x240 = UINT8_MAX;
int8_t x241 = INT8_MIN;
volatile int32_t t62 = -4869585;
static uint32_t x256 = 226231060U;
volatile int32_t t63 = -62189520;
int8_t x257 = -1;
int64_t x265 = -163LL;
uint8_t x273 = 123U;
static int64_t x278 = -1LL;
volatile int32_t t69 = -173;
int16_t x285 = -1;
static uint8_t x290 = 4U;
int32_t x301 = INT32_MIN;
static int64_t x311 = -70579558726828424LL;
uint64_t x314 = UINT64_MAX;
int8_t x316 = 62;
int16_t x320 = 0;
uint16_t x322 = UINT16_MAX;
int64_t x323 = 147588854666LL;
int16_t x324 = INT16_MAX;
uint32_t x326 = 2U;
volatile int32_t t81 = -3;
int32_t x329 = -100991;
static volatile uint8_t x330 = 0U;
int8_t x331 = -1;
static int16_t x332 = INT16_MIN;
static int8_t x339 = -15;
volatile int16_t x340 = 107;
int16_t x347 = -1;
volatile int32_t t88 = 6493;
static int64_t x359 = INT64_MIN;
uint64_t x360 = 1LLU;
int32_t x373 = INT32_MIN;
int64_t x376 = 851960939LL;
int32_t t93 = -77044904;
int16_t x379 = -1;
static int64_t x380 = -793100LL;
static int32_t t94 = 1;
int64_t x383 = -1LL;
int32_t x385 = -611;
uint16_t x386 = UINT16_MAX;
int64_t x390 = INT64_MIN;
int8_t x391 = -3;
static int32_t t97 = -139616;
static int8_t x398 = INT8_MAX;
int16_t x400 = INT16_MIN;
int8_t x403 = INT8_MIN;
uint32_t x408 = 15U;
int8_t x410 = INT8_MIN;
uint64_t x411 = UINT64_MAX;
int32_t t102 = 434705190;
int32_t x414 = INT32_MAX;
static int64_t x416 = 1004518374590294057LL;
uint16_t x418 = 23697U;
static int64_t x424 = 53916953980896LL;
int32_t x432 = INT32_MAX;
uint8_t x433 = UINT8_MAX;
static volatile int8_t x438 = 30;
uint32_t x439 = 1694764U;
int32_t x443 = -194;
int32_t x444 = 509;
int32_t x450 = INT32_MIN;
int8_t x462 = INT8_MIN;
int8_t x464 = INT8_MAX;
volatile int32_t t115 = 910987;
uint32_t x470 = 311570U;
volatile uint64_t x472 = UINT64_MAX;
static uint16_t x475 = 1211U;
volatile uint16_t x479 = UINT16_MAX;
static int32_t x492 = INT32_MIN;
static int8_t x507 = -6;
uint16_t x509 = UINT16_MAX;
int32_t t128 = 16116123;
volatile int16_t x517 = INT16_MIN;
int32_t x519 = 2470593;
int8_t x520 = INT8_MIN;
int64_t x527 = 12LL;
int32_t x533 = INT32_MIN;
volatile int64_t x535 = INT64_MIN;
uint32_t x542 = UINT32_MAX;
static int32_t x544 = 29;
static volatile int8_t x552 = -43;
volatile uint64_t x553 = UINT64_MAX;
int16_t x554 = -1;
int16_t x562 = -26;
volatile int32_t x570 = INT32_MAX;
int8_t x575 = INT8_MIN;
static uint32_t x586 = 2416442U;
int16_t x590 = -11;
int64_t x592 = -12LL;
int8_t x594 = -1;
volatile int32_t t149 = 856190;
int8_t x601 = INT8_MAX;
int64_t x602 = 24137LL;
volatile int16_t x604 = INT16_MAX;
volatile int16_t x606 = INT16_MIN;
int16_t x607 = 10526;
volatile uint32_t x608 = 195621489U;
static int32_t x609 = -1;
int32_t t154 = -5;
static int32_t t155 = 649;
int32_t x626 = -81397076;
int8_t x631 = INT8_MAX;
int64_t x634 = -522850LL;
int64_t x635 = INT64_MIN;
int32_t x636 = INT32_MIN;
volatile int32_t t159 = 2519;
int8_t x641 = INT8_MAX;
int32_t x642 = -1;
uint16_t x643 = UINT16_MAX;
static int64_t x648 = 467573260LL;
static volatile int32_t t161 = 1277695;
int16_t x650 = 22;
static volatile uint16_t x652 = 2949U;
int32_t t163 = 1;
volatile int32_t x657 = -1;
uint64_t x664 = 3618242946895LLU;
int32_t x669 = INT32_MAX;
int8_t x675 = INT8_MIN;
volatile int32_t t168 = 1;
uint8_t x678 = 13U;
int8_t x679 = INT8_MIN;
volatile int16_t x684 = INT16_MIN;
int32_t x690 = -1;
static uint16_t x695 = UINT16_MAX;
int32_t x696 = INT32_MIN;
uint64_t x699 = 1300LLU;
int8_t x700 = 9;
int64_t x709 = INT64_MAX;
int8_t x711 = INT8_MIN;
static int32_t x715 = 4500;
int8_t x717 = INT8_MIN;
int32_t t179 = 14441806;
int64_t x721 = 53087LL;
static int64_t x723 = INT64_MAX;
int32_t x724 = INT32_MAX;
volatile int32_t t181 = 185139351;
volatile uint8_t x739 = 0U;
volatile int32_t t184 = -266995;
volatile int16_t x742 = 21;
int16_t x748 = INT16_MAX;
uint64_t x750 = 52706951708014354LLU;
int16_t x751 = INT16_MAX;
int32_t x752 = INT32_MAX;
int16_t x756 = -1;
volatile int16_t x759 = -1;
int32_t x768 = INT32_MIN;
volatile int32_t t191 = -615713058;
volatile int32_t t193 = 924277;
int32_t x780 = -1;
static uint64_t x784 = 4506801739738079LLU;
volatile uint16_t x795 = UINT16_MAX;
int8_t x797 = -1;
int16_t x799 = -1;


void f0(void) {
    	int32_t x3 = -1;
	int32_t t0 = 103;

    t0 = ((x1!=x2)<<(x3<=x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 3611614U;
	uint16_t x7 = 124U;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 3714;

    t1 = ((x5!=x6)<<(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = -1;
	int16_t x12 = -1;
	int32_t t2 = -119;

    t2 = ((x9!=x10)<<(x11<=x12));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 113U;
	uint32_t x14 = 15902U;
	uint64_t x15 = 8LLU;
	int32_t t3 = -21;

    t3 = ((x13!=x14)<<(x15<=x16));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = 828448737600670LL;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 6197;

    t4 = ((x17!=x18)<<(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int16_t x23 = -1;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 1;

    t5 = ((x21!=x22)<<(x23<=x24));

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	static uint16_t x26 = 2U;
	uint16_t x27 = 6U;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 63;

    t6 = ((x25!=x26)<<(x27<=x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 158645U;
	int32_t x30 = INT32_MAX;
	volatile uint16_t x31 = 22684U;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 38;

    t7 = ((x29!=x30)<<(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 32;
	volatile uint16_t x35 = 0U;

    t8 = ((x33!=x34)<<(x35<=x36));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	uint16_t x39 = UINT16_MAX;
	static uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = 14087070;

    t9 = ((x37!=x38)<<(x39<=x40));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MIN;

    t10 = ((x41!=x42)<<(x43<=x44));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int8_t x47 = 8;
	int64_t x48 = INT64_MIN;

    t11 = ((x45!=x46)<<(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 35636U;

    t12 = ((x49!=x50)<<(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static uint32_t x54 = UINT32_MAX;
	int32_t x55 = 58;
	int64_t x56 = -27274297988881LL;
	volatile int32_t t13 = 15403;

    t13 = ((x53!=x54)<<(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = 911U;
	volatile int32_t x58 = -74;
	static int32_t x59 = -3752525;
	static volatile int32_t t14 = 130840;

    t14 = ((x57!=x58)<<(x59<=x60));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 3;
	static int16_t x62 = INT16_MAX;
	volatile uint32_t x64 = 52U;

    t15 = ((x61!=x62)<<(x63<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	volatile int8_t x67 = INT8_MAX;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 391535;

    t16 = ((x65!=x66)<<(x67<=x68));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MIN;
	static volatile uint8_t x70 = 0U;
	int32_t x71 = 5649921;
	int32_t t17 = -61423908;

    t17 = ((x69!=x70)<<(x71<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 54230LLU;
	static volatile int8_t x74 = INT8_MIN;
	uint8_t x75 = 2U;
	volatile int32_t t18 = -461;

    t18 = ((x73!=x74)<<(x75<=x76));

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static int16_t x79 = -297;
	uint8_t x80 = 122U;
	int32_t t19 = 547062266;

    t19 = ((x77!=x78)<<(x79<=x80));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 565236175515595LLU;
	int8_t x82 = 58;
	static int16_t x83 = INT16_MAX;
	volatile int32_t t20 = -93087624;

    t20 = ((x81!=x82)<<(x83<=x84));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	int32_t t21 = 12;

    t21 = ((x85!=x86)<<(x87<=x88));

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MAX;
	uint8_t x91 = 10U;
	int64_t x92 = INT64_MAX;
	static int32_t t22 = -28;

    t22 = ((x89!=x90)<<(x91<=x92));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 6827761U;
	static uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	int32_t x96 = -1;
	volatile int32_t t23 = -1;

    t23 = ((x93!=x94)<<(x95<=x96));

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x97 = 1025491U;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 16149U;
	uint8_t x100 = 0U;
	int32_t t24 = -2579;

    t24 = ((x97!=x98)<<(x99<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	int32_t t25 = 1;

    t25 = ((x101!=x102)<<(x103<=x104));

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = -56356123366433878LL;
	static uint64_t x106 = 1765580015LLU;
	uint32_t x107 = 71021951U;
	static uint16_t x108 = 17915U;
	volatile int32_t t26 = -498075039;

    t26 = ((x105!=x106)<<(x107<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MAX;
	volatile int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	volatile int32_t t27 = 12;

    t27 = ((x109!=x110)<<(x111<=x112));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	static int64_t x114 = -177022496229436543LL;
	int16_t x115 = INT16_MIN;
	volatile int32_t t28 = 239;

    t28 = ((x113!=x114)<<(x115<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint8_t x119 = 7U;
	uint16_t x120 = 3U;
	volatile int32_t t29 = 12783;

    t29 = ((x117!=x118)<<(x119<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	static int16_t x123 = INT16_MIN;
	static int32_t t30 = 632191166;

    t30 = ((x121!=x122)<<(x123<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	int64_t x128 = INT64_MAX;

    t31 = ((x125!=x126)<<(x127<=x128));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = UINT32_MAX;
	uint16_t x132 = 2655U;
	static int32_t t32 = 83059;

    t32 = ((x129!=x130)<<(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MAX;
	int32_t t33 = -1017;

    t33 = ((x133!=x134)<<(x135<=x136));

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	int32_t t34 = 0;

    t34 = ((x137!=x138)<<(x139<=x140));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	volatile int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -50;

    t35 = ((x141!=x142)<<(x143<=x144));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = -1;
	static int64_t x146 = 253587371525285691LL;
	volatile int16_t x147 = 4664;
	int32_t x148 = INT32_MAX;
	static int32_t t36 = -109783;

    t36 = ((x145!=x146)<<(x147<=x148));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	int8_t x151 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;
	int32_t t37 = 138226;

    t37 = ((x149!=x150)<<(x151<=x152));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	uint64_t x154 = 15089274LLU;
	volatile int8_t x155 = -1;
	volatile int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 61975869;

    t38 = ((x153!=x154)<<(x155<=x156));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = 1;
	int8_t x158 = 1;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = -467377610530364LL;
	volatile int32_t t39 = 41147;

    t39 = ((x157!=x158)<<(x159<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 63U;
	int64_t x163 = -1LL;
	int64_t x164 = -956347LL;
	int32_t t40 = -78309839;

    t40 = ((x161!=x162)<<(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	volatile uint16_t x166 = 320U;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 13223496;

    t41 = ((x165!=x166)<<(x167<=x168));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	int32_t x172 = 5;
	static volatile int32_t t42 = 104;

    t42 = ((x169!=x170)<<(x171<=x172));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	static uint32_t x174 = 4U;
	volatile uint16_t x175 = 3368U;
	int32_t t43 = -26162;

    t43 = ((x173!=x174)<<(x175<=x176));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int32_t x178 = -1;
	int8_t x180 = -1;
	static volatile int32_t t44 = 4749;

    t44 = ((x177!=x178)<<(x179<=x180));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 1021;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -2564229;

    t45 = ((x181!=x182)<<(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 70143392487874LLU;
	int32_t x187 = 1;
	uint32_t x188 = 1U;
	int32_t t46 = 4359;

    t46 = ((x185!=x186)<<(x187<=x188));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MIN;
	int16_t x191 = -1889;
	uint16_t x192 = 5288U;
	static volatile int32_t t47 = -2180;

    t47 = ((x189!=x190)<<(x191<=x192));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 126U;
	uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = 310782504794046LLU;
	int32_t t48 = 507380543;

    t48 = ((x193!=x194)<<(x195<=x196));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 2U;
	static int16_t x200 = INT16_MIN;

    t49 = ((x197!=x198)<<(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -16111;
	int64_t x204 = -18895454672463782LL;
	volatile int32_t t50 = 4224386;

    t50 = ((x201!=x202)<<(x203<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = 27680U;
	static int64_t x206 = INT64_MIN;
	int32_t x207 = 82998;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t51 = -8386;

    t51 = ((x205!=x206)<<(x207<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 16232;

    t52 = ((x209!=x210)<<(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MIN;
	static int32_t t53 = -335391;

    t53 = ((x213!=x214)<<(x215<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	volatile int8_t x218 = INT8_MAX;
	static int32_t x220 = -1;
	volatile int32_t t54 = -3;

    t54 = ((x217!=x218)<<(x219<=x220));

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 737U;
	int64_t x222 = INT64_MAX;
	volatile int16_t x223 = INT16_MIN;
	int32_t x224 = 112830041;
	int32_t t55 = 215;

    t55 = ((x221!=x222)<<(x223<=x224));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = -818;
	volatile int64_t x228 = 11919618613LL;
	volatile int32_t t56 = 26684689;

    t56 = ((x225!=x226)<<(x227<=x228));

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -5628;
	volatile int32_t x231 = 233616;
	int8_t x232 = -1;

    t57 = ((x229!=x230)<<(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	uint64_t x235 = 2070645701288LLU;
	static uint16_t x236 = 1118U;
	volatile int32_t t58 = -15385232;

    t58 = ((x233!=x234)<<(x235<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = 0U;
	uint64_t x239 = UINT64_MAX;
	int32_t t59 = -19;

    t59 = ((x237!=x238)<<(x239<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = -1LL;
	uint8_t x243 = 31U;
	int8_t x244 = -1;
	static int32_t t60 = -561325425;

    t60 = ((x241!=x242)<<(x243<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 106746355489LL;
	volatile uint8_t x246 = 61U;
	volatile uint16_t x247 = 105U;
	static int8_t x248 = INT8_MIN;
	int32_t t61 = 3871143;

    t61 = ((x245!=x246)<<(x247<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = -1;
	int32_t x250 = -5;
	volatile uint16_t x251 = 28U;
	uint8_t x252 = UINT8_MAX;

    t62 = ((x249!=x250)<<(x251<=x252));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	uint16_t x254 = 3238U;
	int8_t x255 = INT8_MAX;

    t63 = ((x253!=x254)<<(x255<=x256));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x258 = INT8_MIN;
	uint32_t x259 = 2U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -61205785;

    t64 = ((x257!=x258)<<(x259<=x260));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 26;
	int64_t x262 = 33262429LL;
	static int8_t x263 = INT8_MIN;
	int8_t x264 = -29;
	volatile int32_t t65 = -875;

    t65 = ((x261!=x262)<<(x263<=x264));

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x266 = 16254382733779LL;
	static uint64_t x267 = 5467759371571939975LLU;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = 0;

    t66 = ((x265!=x266)<<(x267<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 326739LL;
	static uint32_t x270 = 63U;
	int32_t x271 = -969668912;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -3278029;

    t67 = ((x269!=x270)<<(x271<=x272));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x274 = 285U;
	static volatile int16_t x275 = 7;
	volatile int64_t x276 = 1168LL;
	volatile int32_t t68 = -797434;

    t68 = ((x273!=x274)<<(x275<=x276));

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	int32_t x279 = -1;
	int32_t x280 = INT32_MIN;

    t69 = ((x277!=x278)<<(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MAX;
	uint8_t x282 = 26U;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = 3U;
	int32_t t70 = -28589541;

    t70 = ((x281!=x282)<<(x283<=x284));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = -1;
	volatile uint16_t x287 = 9672U;
	int64_t x288 = -36366977271LL;
	int32_t t71 = 4;

    t71 = ((x285!=x286)<<(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = -1LL;
	int64_t x291 = INT64_MAX;
	volatile int16_t x292 = 1994;
	volatile int32_t t72 = 39;

    t72 = ((x289!=x290)<<(x291<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 117U;
	uint64_t x294 = 747323366731675569LLU;
	volatile uint32_t x295 = 1054755467U;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -818;

    t73 = ((x293!=x294)<<(x295<=x296));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = 14U;
	int16_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int64_t x300 = 214256852932701962LL;
	volatile int32_t t74 = -54;

    t74 = ((x297!=x298)<<(x299<=x300));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x302 = -13359;
	uint8_t x303 = 2U;
	static int8_t x304 = INT8_MIN;
	int32_t t75 = 230199176;

    t75 = ((x301!=x302)<<(x303<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x305 = -1;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = 1242U;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -1;

    t76 = ((x305!=x306)<<(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = 74U;
	static uint32_t x310 = 4751300U;
	uint64_t x312 = UINT64_MAX;
	int32_t t77 = 120147;

    t77 = ((x309!=x310)<<(x311<=x312));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	int32_t t78 = -2530;

    t78 = ((x313!=x314)<<(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	uint8_t x318 = 7U;
	int8_t x319 = INT8_MIN;
	int32_t t79 = 1040712;

    t79 = ((x317!=x318)<<(x319<=x320));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	volatile int32_t t80 = -517115647;

    t80 = ((x321!=x322)<<(x323<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	uint8_t x327 = UINT8_MAX;
	static int64_t x328 = INT64_MIN;

    t81 = ((x325!=x326)<<(x327<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t t82 = 16062;

    t82 = ((x329!=x330)<<(x331<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	static int32_t t83 = 128958444;

    t83 = ((x333!=x334)<<(x335<=x336));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -28;
	uint16_t x338 = UINT16_MAX;
	volatile int32_t t84 = 17;

    t84 = ((x337!=x338)<<(x339<=x340));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile int32_t x342 = INT32_MIN;
	volatile int64_t x343 = 191244933LL;
	volatile uint32_t x344 = 11469877U;
	volatile int32_t t85 = -708;

    t85 = ((x341!=x342)<<(x343<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int8_t x348 = -4;
	int32_t t86 = -3;

    t86 = ((x345!=x346)<<(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x349 = -1;
	int64_t x350 = 231584868LL;
	int32_t x351 = 5313992;
	static uint8_t x352 = 25U;
	volatile int32_t t87 = 0;

    t87 = ((x349!=x350)<<(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = -1LL;
	volatile int8_t x355 = INT8_MAX;
	uint64_t x356 = 249034889090LLU;

    t88 = ((x353!=x354)<<(x355<=x356));

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -19;
	uint16_t x358 = UINT16_MAX;
	int32_t t89 = -29;

    t89 = ((x357!=x358)<<(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	static volatile int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 1760469;

    t90 = ((x361!=x362)<<(x363<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MAX;
	static volatile int8_t x367 = -57;
	uint8_t x368 = 2U;
	int32_t t91 = 304145564;

    t91 = ((x365!=x366)<<(x367<=x368));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x369 = UINT32_MAX;
	uint64_t x370 = 3LLU;
	static int8_t x371 = INT8_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 93902543;

    t92 = ((x369!=x370)<<(x371<=x372));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = -466524LL;
	int16_t x375 = INT16_MAX;

    t93 = ((x373!=x374)<<(x375<=x376));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 2U;
	int64_t x378 = INT64_MIN;

    t94 = ((x377!=x378)<<(x379<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = -94971447;
	int8_t x384 = 9;
	static int32_t t95 = 15315;

    t95 = ((x381!=x382)<<(x383<=x384));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x387 = INT64_MIN;
	static volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = 2914774;

    t96 = ((x385!=x386)<<(x387<=x388));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	int8_t x392 = 3;

    t97 = ((x389!=x390)<<(x391<=x392));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x395 = 2688U;
	static volatile int16_t x396 = -1;
	volatile int32_t t98 = 2056626;

    t98 = ((x393!=x394)<<(x395<=x396));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -2;
	volatile int8_t x399 = -1;
	volatile int32_t t99 = -6;

    t99 = ((x397!=x398)<<(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 8;
	int16_t x402 = 29;
	uint16_t x404 = 88U;
	volatile int32_t t100 = -1;

    t100 = ((x401!=x402)<<(x403<=x404));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	volatile int8_t x406 = -1;
	static int32_t x407 = INT32_MAX;
	int32_t t101 = -294825;

    t101 = ((x405!=x406)<<(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 1;
	volatile int32_t x412 = -856891564;

    t102 = ((x409!=x410)<<(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int8_t x415 = 2;
	volatile int32_t t103 = -52449;

    t103 = ((x413!=x414)<<(x415<=x416));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	static int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 440;

    t104 = ((x417!=x418)<<(x419<=x420));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -183405076672114480LL;
	volatile int16_t x422 = -1;
	int16_t x423 = -1;
	volatile int32_t t105 = 0;

    t105 = ((x421!=x422)<<(x423<=x424));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	static int32_t x426 = -1;
	int32_t x427 = -2;
	int32_t x428 = INT32_MIN;
	static int32_t t106 = -2;

    t106 = ((x425!=x426)<<(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MAX;
	volatile int8_t x430 = INT8_MIN;
	int32_t x431 = 2858;
	volatile int32_t t107 = 28885;

    t107 = ((x429!=x430)<<(x431<=x432));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x434 = UINT8_MAX;
	int8_t x435 = -1;
	int8_t x436 = -1;
	static volatile int32_t t108 = -26;

    t108 = ((x433!=x434)<<(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 1006U;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t109 = 1388;

    t109 = ((x437!=x438)<<(x439<=x440));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	volatile int32_t x442 = 238522;
	volatile int32_t t110 = 5511687;

    t110 = ((x441!=x442)<<(x443<=x444));

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = -1;
	static int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	int32_t x448 = -36;
	int32_t t111 = -58496;

    t111 = ((x445!=x446)<<(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int16_t x451 = -198;
	int64_t x452 = INT64_MIN;
	int32_t t112 = -103925816;

    t112 = ((x449!=x450)<<(x451<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = 2;
	uint32_t x454 = 14161960U;
	uint16_t x455 = UINT16_MAX;
	int64_t x456 = -1LL;
	volatile int32_t t113 = -955847;

    t113 = ((x453!=x454)<<(x455<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = 0U;
	static int64_t x460 = INT64_MIN;
	volatile int32_t t114 = 17;

    t114 = ((x457!=x458)<<(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1218;
	int8_t x463 = INT8_MIN;

    t115 = ((x461!=x462)<<(x463<=x464));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MAX;
	static uint8_t x466 = 0U;
	static uint8_t x467 = 14U;
	uint32_t x468 = 956453U;
	int32_t t116 = -25;

    t116 = ((x465!=x466)<<(x467<=x468));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 7415973U;
	uint32_t x471 = UINT32_MAX;
	volatile int32_t t117 = 212458669;

    t117 = ((x469!=x470)<<(x471<=x472));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	volatile uint8_t x474 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	volatile int32_t t118 = 11224;

    t118 = ((x473!=x474)<<(x475<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MIN;
	int64_t x478 = -12058353138276130LL;
	int64_t x480 = INT64_MIN;
	volatile int32_t t119 = -44685158;

    t119 = ((x477!=x478)<<(x479<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x481 = 4022U;
	static int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MIN;
	static volatile int16_t x484 = -1;
	volatile int32_t t120 = -21562;

    t120 = ((x481!=x482)<<(x483<=x484));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = UINT64_MAX;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 33U;
	uint64_t x488 = 401027718188334364LLU;
	static volatile int32_t t121 = -896391265;

    t121 = ((x485!=x486)<<(x487<=x488));

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint32_t x490 = UINT32_MAX;
	int64_t x491 = INT64_MAX;
	int32_t t122 = 8515;

    t122 = ((x489!=x490)<<(x491<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = -122064503LL;
	static volatile int64_t x495 = 182381983LL;
	int32_t x496 = INT32_MAX;
	static int32_t t123 = -24794;

    t123 = ((x493!=x494)<<(x495<=x496));

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 2U;
	volatile uint8_t x498 = 14U;
	int32_t x499 = -1;
	static int64_t x500 = INT64_MAX;
	volatile int32_t t124 = 24849;

    t124 = ((x497!=x498)<<(x499<=x500));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = INT16_MIN;
	volatile uint16_t x502 = 193U;
	static int32_t x503 = INT32_MAX;
	int64_t x504 = INT64_MAX;
	volatile int32_t t125 = 2520;

    t125 = ((x501!=x502)<<(x503<=x504));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = 22LLU;
	volatile int64_t x506 = 4204LL;
	volatile int16_t x508 = -1;
	static volatile int32_t t126 = 18980879;

    t126 = ((x505!=x506)<<(x507<=x508));

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MIN;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	static volatile int32_t t127 = 45367672;

    t127 = ((x509!=x510)<<(x511<=x512));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	int32_t x514 = -1;
	int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;

    t128 = ((x513!=x514)<<(x515<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = -1;
	volatile int32_t t129 = -2525;

    t129 = ((x517!=x518)<<(x519<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -1;
	volatile int8_t x522 = INT8_MAX;
	uint64_t x523 = UINT64_MAX;
	int64_t x524 = 868024749167982LL;
	volatile int32_t t130 = 114974;

    t130 = ((x521!=x522)<<(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = 810092213U;
	int64_t x526 = -7996728LL;
	int64_t x528 = INT64_MIN;
	volatile int32_t t131 = -10172646;

    t131 = ((x525!=x526)<<(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	uint32_t x530 = UINT32_MAX;
	static int32_t x531 = INT32_MIN;
	int32_t x532 = -1;
	volatile int32_t t132 = 260;

    t132 = ((x529!=x530)<<(x531<=x532));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x534 = UINT32_MAX;
	int8_t x536 = INT8_MIN;
	int32_t t133 = 2304356;

    t133 = ((x533!=x534)<<(x535<=x536));

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = -2;
	int64_t x538 = INT64_MAX;
	int64_t x539 = -1172026LL;
	uint16_t x540 = UINT16_MAX;
	int32_t t134 = -514561;

    t134 = ((x537!=x538)<<(x539<=x540));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	uint64_t x543 = 235226LLU;
	volatile int32_t t135 = -1;

    t135 = ((x541!=x542)<<(x543<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = -416425860;
	volatile int8_t x546 = 15;
	uint64_t x547 = 555588225131238492LLU;
	int8_t x548 = 21;
	static volatile int32_t t136 = 429091;

    t136 = ((x545!=x546)<<(x547<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MAX;
	static int32_t x550 = INT32_MIN;
	static int8_t x551 = INT8_MIN;
	volatile int32_t t137 = 18625;

    t137 = ((x549!=x550)<<(x551<=x552));

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x555 = -235;
	static uint32_t x556 = 3516924U;
	volatile int32_t t138 = 88685042;

    t138 = ((x553!=x554)<<(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	int32_t x558 = -1;
	static int16_t x559 = 1707;
	int64_t x560 = INT64_MIN;
	int32_t t139 = -6259024;

    t139 = ((x557!=x558)<<(x559<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x563 = -1LL;
	int16_t x564 = INT16_MAX;
	volatile int32_t t140 = 87412723;

    t140 = ((x561!=x562)<<(x563<=x564));

    if (t140 != 2) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = -1;
	int8_t x567 = INT8_MIN;
	int32_t x568 = 459016;
	volatile int32_t t141 = -112590905;

    t141 = ((x565!=x566)<<(x567<=x568));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	volatile int32_t t142 = 25792635;

    t142 = ((x569!=x570)<<(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 8132510924539776275LLU;
	int64_t x574 = INT64_MIN;
	int64_t x576 = INT64_MIN;
	int32_t t143 = 8;

    t143 = ((x573!=x574)<<(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint16_t x578 = UINT16_MAX;
	int64_t x579 = INT64_MAX;
	int8_t x580 = 11;
	int32_t t144 = 4565865;

    t144 = ((x577!=x578)<<(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 1508U;
	int64_t x582 = INT64_MIN;
	static uint64_t x583 = 3938154LLU;
	int64_t x584 = INT64_MIN;
	int32_t t145 = 367980;

    t145 = ((x581!=x582)<<(x583<=x584));

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	static int16_t x587 = INT16_MAX;
	int32_t x588 = -1;
	volatile int32_t t146 = 106951091;

    t146 = ((x585!=x586)<<(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 294LLU;
	static volatile int32_t x591 = 1;
	int32_t t147 = 651878;

    t147 = ((x589!=x590)<<(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 916141LLU;
	int64_t x595 = -35LL;
	static uint8_t x596 = 11U;
	int32_t t148 = -990214;

    t148 = ((x593!=x594)<<(x595<=x596));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 0U;
	volatile uint16_t x598 = UINT16_MAX;
	int8_t x599 = INT8_MAX;
	static int16_t x600 = -2561;

    t149 = ((x597!=x598)<<(x599<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x603 = INT64_MIN;
	int32_t t150 = 1;

    t150 = ((x601!=x602)<<(x603<=x604));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	static volatile int32_t t151 = 1;

    t151 = ((x605!=x606)<<(x607<=x608));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t152 = 3613586;

    t152 = ((x609!=x610)<<(x611<=x612));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	volatile int64_t x614 = INT64_MAX;
	int32_t x615 = INT32_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t153 = 16;

    t153 = ((x613!=x614)<<(x615<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	uint32_t x618 = UINT32_MAX;
	int32_t x619 = INT32_MIN;
	int64_t x620 = INT64_MIN;

    t154 = ((x617!=x618)<<(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	volatile int32_t x622 = INT32_MAX;
	static int64_t x623 = 46081LL;
	volatile int64_t x624 = 5041254LL;

    t155 = ((x621!=x622)<<(x623<=x624));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 1U;
	uint8_t x627 = 1U;
	static int32_t x628 = INT32_MIN;
	volatile int32_t t156 = 46;

    t156 = ((x625!=x626)<<(x627<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = INT64_MAX;
	uint32_t x630 = 4787941U;
	int64_t x632 = INT64_MIN;
	int32_t t157 = 6;

    t157 = ((x629!=x630)<<(x631<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	static int32_t t158 = 1;

    t158 = ((x633!=x634)<<(x635<=x636));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 1U;
	volatile uint8_t x638 = 1U;
	uint16_t x639 = 2U;
	static uint8_t x640 = 4U;

    t159 = ((x637!=x638)<<(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x644 = 0U;
	int32_t t160 = 89;

    t160 = ((x641!=x642)<<(x643<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	int8_t x646 = -12;
	volatile int32_t x647 = INT32_MAX;

    t161 = ((x645!=x646)<<(x647<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	volatile int32_t x651 = -94;
	static int32_t t162 = -1281;

    t162 = ((x649!=x650)<<(x651<=x652));

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	int16_t x654 = -19;
	volatile uint16_t x655 = UINT16_MAX;
	int32_t x656 = 29501;

    t163 = ((x653!=x654)<<(x655<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = 2;
	int16_t x659 = 5032;
	volatile int8_t x660 = -1;
	volatile int32_t t164 = -6;

    t164 = ((x657!=x658)<<(x659<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MIN;
	static uint32_t x662 = UINT32_MAX;
	int16_t x663 = -1;
	volatile int32_t t165 = -61;

    t165 = ((x661!=x662)<<(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = -1;
	int32_t x667 = INT32_MAX;
	static uint8_t x668 = 83U;
	volatile int32_t t166 = -3780;

    t166 = ((x665!=x666)<<(x667<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x670 = -1;
	uint64_t x671 = 47537LLU;
	int8_t x672 = -1;
	volatile int32_t t167 = 48;

    t167 = ((x669!=x670)<<(x671<=x672));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 136;
	static int8_t x674 = 7;
	uint64_t x676 = 438996757151101LLU;

    t168 = ((x673!=x674)<<(x675<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	int8_t x680 = INT8_MIN;
	volatile int32_t t169 = -3026998;

    t169 = ((x677!=x678)<<(x679<=x680));

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	volatile int8_t x682 = INT8_MIN;
	uint8_t x683 = 11U;
	int32_t t170 = -1954;

    t170 = ((x681!=x682)<<(x683<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 13644380;
	int8_t x686 = INT8_MAX;
	static int64_t x687 = INT64_MAX;
	static uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = -231132;

    t171 = ((x685!=x686)<<(x687<=x688));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 105U;
	static int64_t x691 = 2903618LL;
	static volatile int8_t x692 = INT8_MIN;
	static volatile int32_t t172 = -29689;

    t172 = ((x689!=x690)<<(x691<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	int16_t x694 = 540;
	int32_t t173 = -1140;

    t173 = ((x693!=x694)<<(x695<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	static uint8_t x698 = UINT8_MAX;
	static volatile int32_t t174 = 11;

    t174 = ((x697!=x698)<<(x699<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -1LL;
	static uint16_t x702 = 11U;
	uint16_t x703 = 4156U;
	volatile int32_t x704 = -1;
	static volatile int32_t t175 = -70;

    t175 = ((x701!=x702)<<(x703<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x706 = INT32_MIN;
	int8_t x707 = INT8_MAX;
	uint32_t x708 = UINT32_MAX;
	int32_t t176 = -18;

    t176 = ((x705!=x706)<<(x707<=x708));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = 526756926;
	uint8_t x712 = 3U;
	int32_t t177 = 7527;

    t177 = ((x709!=x710)<<(x711<=x712));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MAX;
	int8_t x714 = INT8_MIN;
	int64_t x716 = INT64_MIN;
	int32_t t178 = -435916;

    t178 = ((x713!=x714)<<(x715<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = -95;
	uint16_t x719 = 3U;
	static uint16_t x720 = UINT16_MAX;

    t179 = ((x717!=x718)<<(x719<=x720));

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = INT8_MAX;
	int32_t t180 = 61;

    t180 = ((x721!=x722)<<(x723<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	uint64_t x726 = 114192633966968774LLU;
	int32_t x727 = INT32_MAX;
	int8_t x728 = INT8_MIN;

    t181 = ((x725!=x726)<<(x727<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MAX;
	int64_t x730 = -1LL;
	uint16_t x731 = 2469U;
	int64_t x732 = -1LL;
	static int32_t t182 = -55815582;

    t182 = ((x729!=x730)<<(x731<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 0;
	int64_t x734 = INT64_MAX;
	int32_t x735 = INT32_MIN;
	static uint16_t x736 = 591U;
	static volatile int32_t t183 = -2836856;

    t183 = ((x733!=x734)<<(x735<=x736));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 4553U;
	int64_t x738 = INT64_MAX;
	int32_t x740 = INT32_MIN;

    t184 = ((x737!=x738)<<(x739<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -367;
	static int64_t x743 = 167445217029LL;
	volatile int16_t x744 = -89;
	int32_t t185 = -14296;

    t185 = ((x741!=x742)<<(x743<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 605LLU;
	static uint64_t x746 = 30356236763668888LLU;
	int32_t x747 = 2448;
	int32_t t186 = 3941460;

    t186 = ((x745!=x746)<<(x747<=x748));

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x749 = 3199U;
	static int32_t t187 = 431408;

    t187 = ((x749!=x750)<<(x751<=x752));

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 12627U;
	uint16_t x754 = UINT16_MAX;
	uint64_t x755 = UINT64_MAX;
	volatile int32_t t188 = -1691;

    t188 = ((x753!=x754)<<(x755<=x756));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MIN;
	uint16_t x758 = 91U;
	volatile int8_t x760 = INT8_MIN;
	volatile int32_t t189 = 118680088;

    t189 = ((x757!=x758)<<(x759<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x761 = 2;
	uint16_t x762 = 0U;
	int8_t x763 = 0;
	uint8_t x764 = UINT8_MAX;
	int32_t t190 = 171710880;

    t190 = ((x761!=x762)<<(x763<=x764));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 2066740177U;
	int8_t x766 = 2;
	static volatile int64_t x767 = INT64_MIN;

    t191 = ((x765!=x766)<<(x767<=x768));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x769 = INT8_MIN;
	uint64_t x770 = UINT64_MAX;
	volatile int32_t x771 = -1;
	uint64_t x772 = 41LLU;
	int32_t t192 = 103;

    t192 = ((x769!=x770)<<(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = -974;
	int64_t x774 = INT64_MIN;
	int32_t x775 = INT32_MIN;
	int8_t x776 = INT8_MAX;

    t193 = ((x773!=x774)<<(x775<=x776));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = -36;
	static volatile int16_t x778 = INT16_MIN;
	int64_t x779 = -1LL;
	int32_t t194 = 0;

    t194 = ((x777!=x778)<<(x779<=x780));

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = INT8_MIN;
	int32_t x783 = 1;
	volatile int32_t t195 = 239307;

    t195 = ((x781!=x782)<<(x783<=x784));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	int32_t x786 = INT32_MIN;
	uint8_t x787 = 0U;
	int16_t x788 = INT16_MIN;
	static int32_t t196 = -1;

    t196 = ((x785!=x786)<<(x787<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 5783385LLU;
	volatile uint32_t x790 = 185331U;
	int32_t x791 = -1;
	uint32_t x792 = 121627992U;
	int32_t t197 = -12968;

    t197 = ((x789!=x790)<<(x791<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MAX;
	int32_t x794 = 0;
	int32_t x796 = INT32_MIN;
	int32_t t198 = 1;

    t198 = ((x793!=x794)<<(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = 6U;
	static int8_t x800 = INT8_MIN;
	int32_t t199 = -553782681;

    t199 = ((x797!=x798)<<(x799<=x800));

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

