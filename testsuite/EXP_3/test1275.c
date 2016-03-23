
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

static int32_t x3 = 22875;
volatile int64_t x6 = -3LL;
volatile int32_t x16 = -59696;
uint64_t x19 = 5032334966790LLU;
int8_t x20 = INT8_MIN;
static int32_t t4 = 29016;
volatile uint16_t x26 = UINT16_MAX;
volatile int32_t t8 = 491273;
static int16_t x46 = -36;
int8_t x49 = INT8_MIN;
int16_t x50 = 6;
volatile uint32_t x53 = 72291729U;
int8_t x54 = INT8_MIN;
volatile int32_t t13 = 93924843;
int8_t x57 = INT8_MIN;
static uint8_t x59 = 8U;
int8_t x63 = 41;
int16_t x66 = INT16_MAX;
uint32_t x69 = 985U;
int16_t x73 = -1;
uint16_t x84 = 2621U;
uint16_t x85 = UINT16_MAX;
int64_t x89 = -7704942142327058LL;
volatile uint16_t x93 = 90U;
uint16_t x95 = UINT16_MAX;
int16_t x99 = 7173;
int32_t x100 = -1;
uint64_t x103 = 3LLU;
volatile uint64_t x115 = 9LLU;
static int32_t t28 = 1089;
int8_t x126 = -1;
uint64_t x143 = 313400972959648LLU;
int32_t t35 = -2657319;
int8_t x151 = INT8_MIN;
volatile int32_t t37 = -27721421;
int64_t x159 = INT64_MIN;
static int32_t x167 = -1;
int16_t x172 = INT16_MIN;
volatile int32_t t42 = 56348;
int8_t x184 = -1;
int16_t x188 = -44;
int16_t x193 = -2;
uint32_t x205 = 60U;
uint16_t x222 = 773U;
int8_t x224 = -1;
int32_t t57 = 132253;
int32_t x233 = INT32_MIN;
uint64_t x235 = 461LLU;
int16_t x237 = INT16_MAX;
volatile int32_t t59 = -68;
uint64_t x241 = UINT64_MAX;
int64_t x243 = 3LL;
int32_t t60 = -124;
static volatile int8_t x249 = 4;
int32_t x251 = -15683353;
int64_t x258 = -33513713LL;
int8_t x261 = INT8_MIN;
volatile uint32_t x262 = UINT32_MAX;
volatile uint64_t x264 = 271049LLU;
uint64_t x265 = 13956627LLU;
static int32_t t66 = -91;
int32_t x272 = INT32_MIN;
uint16_t x278 = UINT16_MAX;
uint8_t x284 = UINT8_MAX;
int64_t x286 = INT64_MIN;
static uint16_t x288 = UINT16_MAX;
volatile int8_t x291 = 10;
int64_t x302 = INT64_MIN;
uint8_t x311 = 25U;
int64_t x312 = INT64_MIN;
static int16_t x319 = -1;
static int8_t x321 = -3;
volatile int32_t x323 = INT32_MIN;
static uint16_t x331 = 8757U;
int32_t t82 = 48;
volatile int64_t x336 = -3LL;
int8_t x342 = -1;
int32_t x348 = -1;
int8_t x352 = INT8_MIN;
int32_t t87 = -279783934;
int8_t x355 = INT8_MAX;
volatile int32_t t88 = 978760756;
volatile int64_t x359 = INT64_MAX;
volatile int32_t x361 = -243080;
static uint32_t x365 = 712957806U;
int32_t t94 = -196;
volatile int16_t x382 = 23;
uint64_t x383 = 610018LLU;
volatile int32_t t95 = 3204288;
uint64_t x388 = UINT64_MAX;
int32_t t96 = -5;
int32_t t99 = -2879;
volatile uint64_t x402 = 108LLU;
volatile int32_t t100 = -5349;
volatile int32_t t101 = 65;
uint32_t x413 = UINT32_MAX;
volatile int64_t x415 = 0LL;
static volatile int32_t x416 = -1;
int32_t x418 = -407523;
static uint64_t x425 = UINT64_MAX;
uint8_t x426 = 24U;
int32_t t108 = 0;
volatile uint8_t x438 = 99U;
int16_t x444 = -2038;
int64_t x452 = 140375382905LL;
int32_t x461 = -1;
uint64_t x474 = UINT64_MAX;
int16_t x480 = 454;
static int32_t t119 = 1946810;
int32_t x501 = INT32_MAX;
static uint64_t x504 = 13697170LLU;
uint8_t x505 = 60U;
int8_t x518 = 1;
uint8_t x529 = 113U;
static volatile int8_t x530 = INT8_MIN;
volatile int8_t x531 = INT8_MAX;
volatile int16_t x534 = -1;
volatile int32_t x539 = INT32_MAX;
int64_t x540 = INT64_MIN;
int64_t x548 = -56216454781310LL;
int32_t t137 = 23552884;
uint32_t x568 = 915U;
int32_t x573 = -1320429;
int32_t t145 = -106;
uint32_t x591 = 377U;
int64_t x595 = -223801830836LL;
int8_t x596 = 43;
static volatile int32_t t149 = -47366;
int16_t x603 = -1;
int16_t x604 = INT16_MIN;
int8_t x608 = 5;
volatile int32_t t152 = 1;
volatile uint32_t x616 = 352571U;
volatile int32_t t153 = -68190;
volatile int32_t x617 = INT32_MIN;
int32_t t154 = -2;
int16_t x625 = -603;
static uint8_t x626 = 0U;
int64_t x627 = INT64_MAX;
uint32_t x630 = 0U;
static uint64_t x631 = 5168083900132LLU;
int32_t x632 = INT32_MAX;
volatile int32_t t160 = 26556391;
int64_t x647 = -15LL;
volatile int32_t t161 = -14483375;
int32_t x650 = -1;
int16_t x656 = -3072;
static uint8_t x657 = 119U;
static int64_t x672 = INT64_MIN;
volatile int32_t t167 = 18102428;
int8_t x675 = INT8_MIN;
static volatile int32_t t168 = 240817;
static volatile int32_t x678 = -212357;
int8_t x679 = -1;
static int32_t x681 = INT32_MAX;
int32_t x682 = INT32_MIN;
static volatile int32_t t170 = -2120874;
int16_t x687 = -1;
static int32_t x688 = 121;
int16_t x689 = INT16_MIN;
uint64_t x690 = 2552687520334970LLU;
volatile int32_t t174 = 0;
volatile int32_t x703 = 224452;
int64_t x706 = -4104060613162359LL;
int16_t x711 = INT16_MIN;
int64_t x712 = INT64_MIN;
volatile uint32_t x721 = 8U;
static uint32_t x726 = 1857864U;
int16_t x732 = INT16_MIN;
int16_t x735 = -1;
uint64_t x736 = 56704618LLU;
int8_t x739 = -1;
int64_t x741 = -1LL;
int16_t x743 = INT16_MIN;
int32_t x748 = -24182;
static int16_t x750 = INT16_MAX;
int64_t x752 = 5254898892014LL;
static int8_t x758 = 2;
static int32_t x759 = INT32_MAX;
static int32_t t189 = -3522863;
int64_t x765 = -1LL;
uint16_t x769 = 332U;
static int32_t x770 = -2719258;
static int32_t t192 = 0;
static int32_t x774 = -10815;
int8_t x776 = INT8_MIN;
int64_t x777 = INT64_MIN;
static int64_t x786 = INT64_MIN;
uint16_t x789 = 173U;
static int32_t t197 = 88429;
volatile int32_t t199 = 349691;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MAX;
	volatile int32_t x4 = -1903;
	int32_t t0 = 87424;

    t0 = ((x1==x2)+(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int16_t x7 = -4778;
	int64_t x8 = 4696316453613200LL;
	int32_t t1 = 178;

    t1 = ((x5==x6)+(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	uint64_t x10 = 46327865268443812LLU;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = -1;
	int32_t t2 = 36903;

    t2 = ((x9==x10)+(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 34U;
	int64_t x14 = -5LL;
	int64_t x15 = INT64_MAX;
	volatile int32_t t3 = -38894;

    t3 = ((x13==x14)+(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MAX;
	static int64_t x18 = -23935LL;

    t4 = ((x17==x18)+(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x23 = 2;
	static uint8_t x24 = 86U;
	int32_t t5 = 28391;

    t5 = ((x21==x22)+(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	static int32_t t6 = -46942;

    t6 = ((x25==x26)+(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -816LL;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = -1;
	static int16_t x32 = -382;
	volatile int32_t t7 = -71607584;

    t7 = ((x29==x30)+(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MAX;
	int16_t x34 = -1;
	int64_t x35 = INT64_MAX;
	uint64_t x36 = 93985337023938LLU;

    t8 = ((x33==x34)+(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 5938834938LL;
	uint8_t x38 = 61U;
	int32_t x39 = INT32_MIN;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = 1;

    t9 = ((x37==x38)+(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = -1LL;
	int32_t x42 = 0;
	volatile int32_t x43 = INT32_MIN;
	static int8_t x44 = INT8_MIN;
	static int32_t t10 = 189;

    t10 = ((x41==x42)+(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 118828682596LLU;
	int64_t x47 = -1LL;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = -3;

    t11 = ((x45==x46)+(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = INT16_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 17;

    t12 = ((x49==x50)+(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;

    t13 = ((x53==x54)+(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -90;
	uint32_t x60 = 579563636U;
	int32_t t14 = -1471922;

    t14 = ((x57==x58)+(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MAX;
	int32_t x62 = -3080;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = -6723;

    t15 = ((x61==x62)+(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 13;

    t16 = ((x65==x66)+(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	volatile int8_t x71 = -1;
	static uint8_t x72 = 14U;
	int32_t t17 = 1;

    t17 = ((x69==x70)+(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x74 = 4020LLU;
	volatile int32_t x75 = 12732;
	volatile int64_t x76 = -1LL;
	volatile int32_t t18 = 724683;

    t18 = ((x73==x74)+(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x77 = 325U;
	int16_t x78 = -1;
	static int32_t x79 = INT32_MAX;
	static volatile int8_t x80 = 0;
	int32_t t19 = 59859;

    t19 = ((x77==x78)+(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = -1;
	int64_t x82 = -1LL;
	uint64_t x83 = 60797205LLU;
	volatile int32_t t20 = -19839691;

    t20 = ((x81==x82)+(x83!=x84));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MIN;
	uint64_t x87 = 239711053LLU;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = -1516130;

    t21 = ((x85==x86)+(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = 11U;
	int32_t x91 = INT32_MAX;
	static uint32_t x92 = 3221U;
	volatile int32_t t22 = -1;

    t22 = ((x89==x90)+(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = UINT16_MAX;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 3534430;

    t23 = ((x93==x94)+(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	volatile int32_t t24 = 25887177;

    t24 = ((x97==x98)+(x99!=x100));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -134;
	static int32_t x102 = 48898007;
	int32_t x104 = 33003;
	volatile int32_t t25 = 4053184;

    t25 = ((x101==x102)+(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	int8_t x106 = -1;
	uint16_t x107 = 4U;
	static int16_t x108 = INT16_MIN;
	int32_t t26 = 1177;

    t26 = ((x105==x106)+(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = INT32_MIN;
	uint16_t x111 = 17423U;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 19;

    t27 = ((x109==x110)+(x111!=x112));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 14U;
	int64_t x114 = INT64_MIN;
	int16_t x116 = INT16_MIN;

    t28 = ((x113==x114)+(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = UINT32_MAX;
	volatile int8_t x120 = 0;
	static int32_t t29 = 5543149;

    t29 = ((x117==x118)+(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = 12087395923467411LL;
	static volatile int8_t x122 = INT8_MIN;
	static int8_t x123 = 44;
	int64_t x124 = -147LL;
	int32_t t30 = -123944;

    t30 = ((x121==x122)+(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 243;
	int8_t x127 = INT8_MAX;
	int64_t x128 = INT64_MAX;
	int32_t t31 = -38961825;

    t31 = ((x125==x126)+(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 58U;
	int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 2185U;
	int32_t t32 = 29430285;

    t32 = ((x129==x130)+(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = 487093495U;
	static int64_t x136 = INT64_MIN;
	static int32_t t33 = 3075;

    t33 = ((x133==x134)+(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = -1LL;
	static volatile int16_t x138 = -1;
	int32_t x139 = 56644;
	uint32_t x140 = 1606U;
	int32_t t34 = 64;

    t34 = ((x137==x138)+(x139!=x140));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 6;
	uint32_t x142 = UINT32_MAX;
	volatile int16_t x144 = INT16_MAX;

    t35 = ((x141==x142)+(x143!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -1189485302LL;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 8035;

    t36 = ((x145==x146)+(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 1U;
	int8_t x150 = -1;
	volatile int8_t x152 = INT8_MAX;

    t37 = ((x149==x150)+(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MAX;
	uint64_t x154 = 8337288546645253023LLU;
	int8_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -4057;

    t38 = ((x153==x154)+(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	int32_t x160 = 33069;
	static int32_t t39 = -9561;

    t39 = ((x157==x158)+(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -12280564LL;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	static int16_t x164 = -24;
	int32_t t40 = 0;

    t40 = ((x161==x162)+(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 1434U;
	static int8_t x168 = 0;
	volatile int32_t t41 = 0;

    t41 = ((x165==x166)+(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 6062LL;
	volatile uint32_t x170 = UINT32_MAX;
	static int32_t x171 = -421;

    t42 = ((x169==x170)+(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 497;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 8090U;
	uint64_t x176 = 979349108832093LLU;
	volatile int32_t t43 = 196;

    t43 = ((x173==x174)+(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	static volatile int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 13LLU;
	int32_t t44 = 38;

    t44 = ((x177==x178)+(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static uint8_t x182 = 1U;
	int16_t x183 = INT16_MIN;
	volatile int32_t t45 = 59794452;

    t45 = ((x181==x182)+(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -8136198111164LL;
	int32_t x186 = INT32_MAX;
	volatile int64_t x187 = INT64_MIN;
	int32_t t46 = -1889;

    t46 = ((x185==x186)+(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static uint8_t x190 = 15U;
	uint32_t x191 = 7U;
	uint32_t x192 = 1732U;
	int32_t t47 = -21;

    t47 = ((x189==x190)+(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x194 = INT32_MIN;
	uint32_t x195 = 767862839U;
	int32_t x196 = 521836234;
	static volatile int32_t t48 = 681816496;

    t48 = ((x193==x194)+(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x197 = UINT16_MAX;
	static int8_t x198 = -1;
	static int16_t x199 = INT16_MIN;
	static int32_t x200 = -460;
	int32_t t49 = 54339567;

    t49 = ((x197==x198)+(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = 2U;
	int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	uint64_t x204 = 3493LLU;
	volatile int32_t t50 = 14;

    t50 = ((x201==x202)+(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x206 = 29U;
	volatile uint16_t x207 = 7U;
	volatile int8_t x208 = -42;
	static volatile int32_t t51 = -15802;

    t51 = ((x205==x206)+(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	volatile uint16_t x210 = 5U;
	uint64_t x211 = 82535838LLU;
	int16_t x212 = -1;
	int32_t t52 = 2707;

    t52 = ((x209==x210)+(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 1LLU;
	int16_t x214 = INT16_MAX;
	uint32_t x215 = 95886U;
	uint8_t x216 = 0U;
	static int32_t t53 = -6761769;

    t53 = ((x213==x214)+(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = 2;
	volatile int8_t x218 = -1;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	static int32_t t54 = 102;

    t54 = ((x217==x218)+(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	static int16_t x223 = INT16_MAX;
	volatile int32_t t55 = -31;

    t55 = ((x221==x222)+(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -59099;

    t56 = ((x225==x226)+(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	static int16_t x231 = -1;
	int64_t x232 = INT64_MAX;

    t57 = ((x229==x230)+(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x234 = 43;
	int64_t x236 = -52524LL;
	volatile int32_t t58 = -16;

    t58 = ((x233==x234)+(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x238 = 4;
	int64_t x239 = INT64_MIN;
	volatile uint64_t x240 = 71871LLU;

    t59 = ((x237==x238)+(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = UINT32_MAX;
	int32_t x244 = 125900;

    t60 = ((x241==x242)+(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	volatile int8_t x246 = INT8_MIN;
	uint16_t x247 = UINT16_MAX;
	static uint16_t x248 = 600U;
	volatile int32_t t61 = 1127548;

    t61 = ((x245==x246)+(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x250 = 6;
	int8_t x252 = -1;
	int32_t t62 = 741;

    t62 = ((x249==x250)+(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 1171LLU;
	uint16_t x254 = 123U;
	static int32_t x255 = INT32_MIN;
	uint16_t x256 = 0U;
	volatile int32_t t63 = -462;

    t63 = ((x253==x254)+(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -30363702475867LL;
	int64_t x259 = -1633952121200LL;
	volatile uint32_t x260 = UINT32_MAX;
	int32_t t64 = 1;

    t64 = ((x257==x258)+(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x263 = -1LL;
	volatile int32_t t65 = 5976911;

    t65 = ((x261==x262)+(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = -16;
	int8_t x267 = INT8_MIN;
	static volatile int16_t x268 = 3;

    t66 = ((x265==x266)+(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MIN;
	volatile uint64_t x271 = 418668108LLU;
	int32_t t67 = 30115166;

    t67 = ((x269==x270)+(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int32_t x274 = -323274812;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = 3893;
	volatile int32_t t68 = -451;

    t68 = ((x273==x274)+(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	static uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -22982;

    t69 = ((x277==x278)+(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 946U;
	int64_t x282 = INT64_MIN;
	static uint8_t x283 = UINT8_MAX;
	static int32_t t70 = 0;

    t70 = ((x281==x282)+(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 6U;
	uint32_t x287 = 371U;
	volatile int32_t t71 = 3611114;

    t71 = ((x285==x286)+(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	static volatile int64_t x290 = -1LL;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t72 = -547;

    t72 = ((x289==x290)+(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 3092514760320135LLU;
	int8_t x294 = INT8_MIN;
	uint8_t x295 = 12U;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 36;

    t73 = ((x293==x294)+(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 30U;
	static volatile int32_t x298 = 16903386;
	int16_t x299 = -5840;
	uint64_t x300 = 2LLU;
	static int32_t t74 = 0;

    t74 = ((x297==x298)+(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -1;
	int64_t x303 = 5412LL;
	volatile int16_t x304 = 38;
	int32_t t75 = -8;

    t75 = ((x301==x302)+(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 1034102519U;
	int64_t x306 = 1576711193919LL;
	static int64_t x307 = -1LL;
	int8_t x308 = 6;
	static volatile int32_t t76 = -26796;

    t76 = ((x305==x306)+(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	static uint64_t x310 = 616516LLU;
	int32_t t77 = 412730173;

    t77 = ((x309==x310)+(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	volatile int32_t x314 = INT32_MIN;
	static int8_t x315 = INT8_MAX;
	int16_t x316 = -31;
	static volatile int32_t t78 = 31924860;

    t78 = ((x313==x314)+(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 2U;
	int8_t x318 = -1;
	volatile int32_t x320 = INT32_MIN;
	static volatile int32_t t79 = 0;

    t79 = ((x317==x318)+(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x322 = 1;
	int16_t x324 = -1;
	int32_t t80 = 5953;

    t80 = ((x321==x322)+(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 6LLU;
	uint16_t x326 = 3U;
	uint16_t x327 = 171U;
	uint32_t x328 = 265946675U;
	volatile int32_t t81 = 77297;

    t81 = ((x325==x326)+(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 935819960836369298LL;
	int8_t x330 = INT8_MIN;
	static int32_t x332 = INT32_MIN;

    t82 = ((x329==x330)+(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = -1;
	int8_t x334 = 33;
	uint32_t x335 = 4030U;
	volatile int32_t t83 = -239416;

    t83 = ((x333==x334)+(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -15535;
	volatile int32_t x338 = 0;
	uint64_t x339 = 5341LLU;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -80242290;

    t84 = ((x337==x338)+(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = UINT32_MAX;
	uint64_t x343 = 363623945260LLU;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 24;

    t85 = ((x341==x342)+(x343!=x344));

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 130400253;
	int64_t x346 = INT64_MIN;
	int32_t x347 = -1;
	volatile int32_t t86 = 3;

    t86 = ((x345==x346)+(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MAX;
	static volatile int64_t x350 = -1LL;
	volatile uint32_t x351 = 2909U;

    t87 = ((x349==x350)+(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	volatile uint16_t x354 = 4U;
	int32_t x356 = INT32_MAX;

    t88 = ((x353==x354)+(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	uint32_t x358 = 183U;
	uint32_t x360 = 3096901U;
	int32_t t89 = 5123;

    t89 = ((x357==x358)+(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x362 = UINT16_MAX;
	static int8_t x363 = -1;
	uint64_t x364 = 7819140673846765230LLU;
	int32_t t90 = 131;

    t90 = ((x361==x362)+(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = 7U;
	int64_t x367 = INT64_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 12203434;

    t91 = ((x365==x366)+(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = 1;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = -201;

    t92 = ((x369==x370)+(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	static uint16_t x374 = 29913U;
	static int8_t x375 = 0;
	volatile int64_t x376 = 27068LL;
	volatile int32_t t93 = 6908850;

    t93 = ((x373==x374)+(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 4649791360LLU;
	int8_t x378 = INT8_MIN;
	static uint16_t x379 = UINT16_MAX;
	static uint64_t x380 = 174LLU;

    t94 = ((x377==x378)+(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	uint16_t x384 = 93U;

    t95 = ((x381==x382)+(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	int8_t x386 = 1;
	uint16_t x387 = 7U;

    t96 = ((x385==x386)+(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = INT32_MAX;
	static volatile int8_t x390 = -1;
	static int8_t x391 = INT8_MAX;
	int32_t x392 = -1;
	int32_t t97 = 22818086;

    t97 = ((x389==x390)+(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;
	volatile int64_t x395 = 1791416764300023LL;
	int8_t x396 = -62;
	int32_t t98 = -4;

    t98 = ((x393==x394)+(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	static int8_t x398 = INT8_MAX;
	uint16_t x399 = 117U;
	int16_t x400 = -680;

    t99 = ((x397==x398)+(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 510U;
	static int16_t x403 = -1;
	int16_t x404 = -42;

    t100 = ((x401==x402)+(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 23U;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MAX;
	int8_t x408 = -1;

    t101 = ((x405==x406)+(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = INT64_MAX;
	static int16_t x410 = INT16_MIN;
	static int8_t x411 = 1;
	int16_t x412 = 412;
	static int32_t t102 = -2;

    t102 = ((x409==x410)+(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	int32_t t103 = -30334933;

    t103 = ((x413==x414)+(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int32_t x419 = -1;
	int8_t x420 = INT8_MAX;
	volatile int32_t t104 = 0;

    t104 = ((x417==x418)+(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 506;
	int16_t x422 = -1792;
	volatile int64_t x423 = -4817309652LL;
	uint8_t x424 = 60U;
	int32_t t105 = -17608947;

    t105 = ((x421==x422)+(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x427 = 12020;
	static uint8_t x428 = 17U;
	static int32_t t106 = -294098703;

    t106 = ((x425==x426)+(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -700;
	static int16_t x430 = 0;
	uint64_t x431 = 2601038943639104713LLU;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t107 = -47280222;

    t107 = ((x429==x430)+(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = 439U;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = UINT8_MAX;

    t108 = ((x433==x434)+(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x437 = -1;
	static volatile int8_t x439 = INT8_MAX;
	volatile int16_t x440 = 6;
	volatile int32_t t109 = 252917017;

    t109 = ((x437==x438)+(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x441 = UINT64_MAX;
	static uint64_t x442 = 728604791495571LLU;
	volatile int8_t x443 = -1;
	int32_t t110 = 143;

    t110 = ((x441==x442)+(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 15U;
	int32_t x446 = -1;
	volatile int16_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t111 = -1617;

    t111 = ((x445==x446)+(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 101414075244LLU;
	uint32_t x450 = UINT32_MAX;
	uint16_t x451 = 15520U;
	int32_t t112 = -981881685;

    t112 = ((x449==x450)+(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = 1;
	int8_t x454 = -1;
	volatile uint16_t x455 = 3U;
	static int8_t x456 = -1;
	volatile int32_t t113 = -18;

    t113 = ((x453==x454)+(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = INT64_MIN;
	static int64_t x460 = -285LL;
	volatile int32_t t114 = -7449;

    t114 = ((x457==x458)+(x459!=x460));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x462 = INT64_MAX;
	int64_t x463 = INT64_MIN;
	int64_t x464 = -1LL;
	volatile int32_t t115 = 0;

    t115 = ((x461==x462)+(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = -99LL;
	int8_t x466 = -12;
	uint64_t x467 = 54092801544LLU;
	int8_t x468 = -3;
	volatile int32_t t116 = 76810249;

    t116 = ((x465==x466)+(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 1812U;
	uint16_t x470 = 1618U;
	uint8_t x471 = 1U;
	volatile uint64_t x472 = 103540269951236LLU;
	int32_t t117 = 1;

    t117 = ((x469==x470)+(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1255;
	int16_t x475 = -1181;
	int32_t x476 = INT32_MIN;
	int32_t t118 = -31651;

    t118 = ((x473==x474)+(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = UINT64_MAX;
	int32_t x479 = INT32_MIN;

    t119 = ((x477==x478)+(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	int32_t x482 = -1;
	volatile int64_t x483 = -6546964744701LL;
	static int8_t x484 = INT8_MIN;
	volatile int32_t t120 = -33761696;

    t120 = ((x481==x482)+(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = 77120;
	static uint32_t x486 = 9149U;
	static int8_t x487 = INT8_MIN;
	int64_t x488 = -2706164407506760238LL;
	volatile int32_t t121 = 3;

    t121 = ((x485==x486)+(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = 1U;
	uint8_t x490 = 1U;
	static int32_t x491 = INT32_MIN;
	static volatile uint8_t x492 = UINT8_MAX;
	int32_t t122 = 8718;

    t122 = ((x489==x490)+(x491!=x492));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	static uint8_t x494 = UINT8_MAX;
	int32_t x495 = -439;
	volatile uint64_t x496 = 3892719388LLU;
	int32_t t123 = 812615051;

    t123 = ((x493==x494)+(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MAX;
	uint64_t x498 = 5465368889369486LLU;
	int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MAX;
	int32_t t124 = -11792439;

    t124 = ((x497==x498)+(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	static int64_t x503 = -1LL;
	volatile int32_t t125 = -65460;

    t125 = ((x501==x502)+(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x506 = 89LLU;
	uint64_t x507 = UINT64_MAX;
	static int32_t x508 = 585;
	volatile int32_t t126 = -106;

    t126 = ((x505==x506)+(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x509 = UINT64_MAX;
	volatile uint16_t x510 = 1U;
	int32_t x511 = INT32_MIN;
	int16_t x512 = -1;
	volatile int32_t t127 = -133406;

    t127 = ((x509==x510)+(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 2596U;
	static int32_t x514 = 9789712;
	volatile uint8_t x515 = 3U;
	uint64_t x516 = UINT64_MAX;
	static volatile int32_t t128 = 12276534;

    t128 = ((x513==x514)+(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 1406120485556081LLU;
	static int32_t t129 = 5262;

    t129 = ((x517==x518)+(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile int8_t x522 = 0;
	volatile uint16_t x523 = UINT16_MAX;
	int64_t x524 = -394504532154627419LL;
	int32_t t130 = 24890591;

    t130 = ((x521==x522)+(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	int8_t x528 = -1;
	static int32_t t131 = -229197;

    t131 = ((x525==x526)+(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x532 = INT32_MIN;
	int32_t t132 = -44;

    t132 = ((x529==x530)+(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 1810U;
	int8_t x535 = INT8_MIN;
	int32_t x536 = -1;
	int32_t t133 = 1;

    t133 = ((x533==x534)+(x535!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 2624U;
	int8_t x538 = INT8_MAX;
	int32_t t134 = -205175903;

    t134 = ((x537==x538)+(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = -308;
	uint8_t x543 = UINT8_MAX;
	volatile uint8_t x544 = UINT8_MAX;
	int32_t t135 = -969843588;

    t135 = ((x541==x542)+(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint8_t x546 = UINT8_MAX;
	uint64_t x547 = 20530005LLU;
	volatile int32_t t136 = 4;

    t136 = ((x545==x546)+(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 50U;
	int8_t x550 = INT8_MAX;
	int16_t x551 = -1;
	int64_t x552 = -147919337LL;

    t137 = ((x549==x550)+(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 9;
	int32_t x554 = INT32_MIN;
	volatile int64_t x555 = -1LL;
	volatile uint8_t x556 = 6U;
	static volatile int32_t t138 = 3;

    t138 = ((x553==x554)+(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	volatile uint8_t x559 = 13U;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = 10208583;

    t139 = ((x557==x558)+(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	int16_t x562 = INT16_MIN;
	uint32_t x563 = 382280U;
	volatile int16_t x564 = -1;
	int32_t t140 = -4386;

    t140 = ((x561==x562)+(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 33999033120LLU;
	int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	static volatile int32_t t141 = 2759;

    t141 = ((x565==x566)+(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = 2295683U;
	uint32_t x570 = UINT32_MAX;
	int32_t x571 = -1;
	uint32_t x572 = 2782U;
	static int32_t t142 = 31;

    t142 = ((x569==x570)+(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	volatile int64_t x575 = INT64_MAX;
	volatile int16_t x576 = INT16_MAX;
	int32_t t143 = -190;

    t143 = ((x573==x574)+(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x578 = 982969166227LLU;
	static int16_t x579 = INT16_MIN;
	int8_t x580 = -1;
	volatile int32_t t144 = -110;

    t144 = ((x577==x578)+(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 1162U;
	int8_t x582 = -1;
	int8_t x583 = -1;
	int16_t x584 = 94;

    t145 = ((x581==x582)+(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x585 = -14257;
	volatile int64_t x586 = 80971619336228LL;
	int8_t x587 = INT8_MIN;
	int64_t x588 = -1LL;
	int32_t t146 = -5545155;

    t146 = ((x585==x586)+(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MAX;
	uint32_t x590 = 66413379U;
	volatile int8_t x592 = INT8_MIN;
	static volatile int32_t t147 = 6550152;

    t147 = ((x589==x590)+(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -11699365;
	volatile int16_t x594 = -13;
	int32_t t148 = -210190292;

    t148 = ((x593==x594)+(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = INT16_MAX;
	volatile uint32_t x598 = 1391457506U;
	int64_t x599 = INT64_MIN;
	volatile uint8_t x600 = 5U;

    t149 = ((x597==x598)+(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = 47;
	volatile int8_t x602 = 1;
	int32_t t150 = 0;

    t150 = ((x601==x602)+(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	uint64_t x606 = UINT64_MAX;
	int16_t x607 = -1;
	volatile int32_t t151 = 38627;

    t151 = ((x605==x606)+(x607!=x608));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 1U;
	int16_t x610 = -1;
	uint16_t x611 = UINT16_MAX;
	int64_t x612 = INT64_MIN;

    t152 = ((x609==x610)+(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t x614 = INT32_MIN;
	static int8_t x615 = INT8_MIN;

    t153 = ((x613==x614)+(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x618 = -1;
	uint64_t x619 = 9LLU;
	uint8_t x620 = 22U;

    t154 = ((x617==x618)+(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = UINT64_MAX;
	volatile uint64_t x622 = 7608823653LLU;
	int64_t x623 = -5385582LL;
	int32_t x624 = 1346;
	static int32_t t155 = -1508;

    t155 = ((x621==x622)+(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x628 = 6145871LL;
	int32_t t156 = 242587460;

    t156 = ((x625==x626)+(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = -1;
	volatile int32_t t157 = -13049459;

    t157 = ((x629==x630)+(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = INT64_MIN;
	int32_t x634 = INT32_MAX;
	uint8_t x635 = UINT8_MAX;
	uint32_t x636 = 1507198U;
	volatile int32_t t158 = -183312542;

    t158 = ((x633==x634)+(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MIN;
	volatile int32_t x639 = 189163;
	static int32_t x640 = -1;
	volatile int32_t t159 = 1900;

    t159 = ((x637==x638)+(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = 8;
	volatile int8_t x642 = INT8_MIN;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = UINT32_MAX;

    t160 = ((x641==x642)+(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -24;
	static int64_t x646 = INT64_MIN;
	uint64_t x648 = UINT64_MAX;

    t161 = ((x645==x646)+(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = 115725853938LL;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t162 = -637210711;

    t162 = ((x649==x650)+(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	int32_t x654 = INT32_MAX;
	int16_t x655 = -1;
	int32_t t163 = -124;

    t163 = ((x653==x654)+(x655!=x656));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 17U;
	int8_t x659 = INT8_MIN;
	static int8_t x660 = -1;
	static int32_t t164 = -11;

    t164 = ((x657==x658)+(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	uint16_t x662 = 1766U;
	static int16_t x663 = INT16_MIN;
	int64_t x664 = INT64_MIN;
	int32_t t165 = 5;

    t165 = ((x661==x662)+(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x666 = 4724160LL;
	int32_t x667 = INT32_MAX;
	int8_t x668 = -1;
	int32_t t166 = -123;

    t166 = ((x665==x666)+(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	int32_t x670 = INT32_MAX;
	int32_t x671 = 90722;

    t167 = ((x669==x670)+(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	uint32_t x674 = UINT32_MAX;
	volatile uint16_t x676 = UINT16_MAX;

    t168 = ((x673==x674)+(x675!=x676));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	volatile uint8_t x680 = 80U;
	volatile int32_t t169 = -1;

    t169 = ((x677==x678)+(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x683 = INT32_MIN;
	static uint8_t x684 = 25U;

    t170 = ((x681==x682)+(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint32_t x686 = 84U;
	volatile int32_t t171 = -16635;

    t171 = ((x685==x686)+(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x691 = -14;
	static volatile int64_t x692 = -1LL;
	int32_t t172 = 2;

    t172 = ((x689==x690)+(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MAX;
	int64_t x694 = INT64_MIN;
	uint16_t x695 = 22U;
	int64_t x696 = -973941673LL;
	volatile int32_t t173 = 82;

    t173 = ((x693==x694)+(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = 38;
	volatile int64_t x698 = 2982745LL;
	uint8_t x699 = 12U;
	uint8_t x700 = 21U;

    t174 = ((x697==x698)+(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = 21205081346853920LLU;
	int64_t x702 = INT64_MAX;
	int64_t x704 = INT64_MAX;
	volatile int32_t t175 = 475;

    t175 = ((x701==x702)+(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 80406196U;
	volatile uint16_t x707 = 0U;
	int32_t x708 = -1;
	int32_t t176 = -31607;

    t176 = ((x705==x706)+(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 4508U;
	int64_t x710 = 3462883040720141189LL;
	static int32_t t177 = 13184076;

    t177 = ((x709==x710)+(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	int64_t x714 = -38121436419LL;
	static int64_t x715 = 1501489964LL;
	int8_t x716 = INT8_MIN;
	int32_t t178 = -2;

    t178 = ((x713==x714)+(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	int64_t x718 = -562025394120161032LL;
	static uint64_t x719 = UINT64_MAX;
	volatile int32_t x720 = -1;
	volatile int32_t t179 = 1039740;

    t179 = ((x717==x718)+(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = 6;
	volatile uint64_t x723 = 1801976176658LLU;
	static int8_t x724 = INT8_MIN;
	int32_t t180 = -105109373;

    t180 = ((x721==x722)+(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 1U;
	int16_t x727 = -47;
	volatile int64_t x728 = -91204800206LL;
	volatile int32_t t181 = 640153305;

    t181 = ((x725==x726)+(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	uint64_t x730 = 1534972770LLU;
	int32_t x731 = -60;
	int32_t t182 = -2772047;

    t182 = ((x729==x730)+(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	int64_t x734 = 94LL;
	int32_t t183 = 213;

    t183 = ((x733==x734)+(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -112;
	int8_t x738 = INT8_MIN;
	volatile int64_t x740 = -924989096LL;
	int32_t t184 = 1;

    t184 = ((x737==x738)+(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x742 = INT16_MIN;
	uint32_t x744 = UINT32_MAX;
	int32_t t185 = -542;

    t185 = ((x741==x742)+(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	int64_t x746 = INT64_MAX;
	static volatile int8_t x747 = 6;
	static int32_t t186 = 4;

    t186 = ((x745==x746)+(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = INT64_MIN;
	volatile int8_t x751 = INT8_MIN;
	static volatile int32_t t187 = 6373401;

    t187 = ((x749==x750)+(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 4U;
	volatile int8_t x754 = 3;
	uint32_t x755 = UINT32_MAX;
	static int16_t x756 = 36;
	int32_t t188 = 256328938;

    t188 = ((x753==x754)+(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MIN;
	int8_t x760 = INT8_MIN;

    t189 = ((x757==x758)+(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 446U;
	int16_t x762 = 2793;
	volatile int16_t x763 = -1238;
	static uint32_t x764 = 5562U;
	static int32_t t190 = -21134;

    t190 = ((x761==x762)+(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = -1;
	volatile int8_t x767 = -40;
	int64_t x768 = INT64_MIN;
	int32_t t191 = 64533918;

    t191 = ((x765==x766)+(x767!=x768));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x771 = 147319U;
	uint8_t x772 = UINT8_MAX;

    t192 = ((x769==x770)+(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = -1LL;
	int16_t x775 = INT16_MIN;
	static int32_t t193 = -2;

    t193 = ((x773==x774)+(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = 33;
	int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	int32_t t194 = 2002914;

    t194 = ((x777==x778)+(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	static uint8_t x782 = UINT8_MAX;
	static uint32_t x783 = 21146U;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t195 = 20056932;

    t195 = ((x781==x782)+(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = -5;
	volatile uint64_t x787 = UINT64_MAX;
	static uint16_t x788 = 555U;
	int32_t t196 = 63451;

    t196 = ((x785==x786)+(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = INT32_MAX;
	static int8_t x791 = 1;
	uint64_t x792 = UINT64_MAX;

    t197 = ((x789==x790)+(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = 3454;
	volatile int16_t x794 = -1;
	uint8_t x795 = UINT8_MAX;
	uint8_t x796 = 73U;
	volatile int32_t t198 = -477856999;

    t198 = ((x793==x794)+(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	int16_t x798 = INT16_MIN;
	int16_t x799 = INT16_MIN;
	static int16_t x800 = -79;

    t199 = ((x797==x798)+(x799!=x800));

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

