
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

uint16_t x10 = 1799U;
uint64_t x20 = 363528305530687LLU;
static uint8_t x22 = 0U;
static int64_t x26 = -1LL;
static volatile int8_t x27 = INT8_MIN;
int32_t t5 = -30726;
static uint8_t x30 = 63U;
static int32_t t6 = 1079;
int16_t x35 = 1540;
static int32_t x36 = INT32_MAX;
static uint64_t x38 = UINT64_MAX;
static uint64_t x43 = 74464383160934940LLU;
static int64_t x48 = -1LL;
static int8_t x53 = INT8_MAX;
static uint16_t x55 = 1784U;
volatile int8_t x56 = INT8_MIN;
uint32_t x59 = 15707U;
volatile int8_t x60 = INT8_MAX;
volatile int32_t t13 = -6097835;
int32_t t14 = 3854;
uint16_t x68 = 14U;
static uint64_t x71 = UINT64_MAX;
int16_t x78 = INT16_MIN;
volatile int16_t x79 = -1;
uint64_t x89 = 6719259LLU;
static int16_t x94 = -57;
int8_t x97 = -1;
uint8_t x99 = 49U;
int16_t x100 = INT16_MIN;
int32_t x104 = INT32_MIN;
volatile uint16_t x107 = 74U;
static int64_t x108 = INT64_MIN;
static int32_t t26 = -1311770;
volatile uint32_t x118 = 13180U;
int32_t t28 = -6;
int16_t x127 = -1;
volatile int8_t x128 = -1;
static uint8_t x129 = 6U;
uint16_t x131 = 30430U;
volatile int32_t t32 = 21;
int32_t x148 = -1;
int16_t x150 = INT16_MIN;
uint32_t x152 = UINT32_MAX;
int32_t t35 = 6;
int8_t x153 = -24;
volatile uint16_t x154 = UINT16_MAX;
int16_t x156 = INT16_MIN;
int32_t x158 = -39;
volatile int32_t t37 = 37378353;
static int32_t t38 = 1;
static int32_t t40 = 199367;
uint64_t x178 = UINT64_MAX;
int8_t x180 = INT8_MAX;
volatile uint32_t x183 = 29257695U;
int64_t x185 = INT64_MIN;
int8_t x186 = 15;
uint16_t x188 = UINT16_MAX;
int8_t x196 = INT8_MAX;
int16_t x202 = INT16_MAX;
int16_t x210 = INT16_MAX;
volatile int32_t x212 = INT32_MAX;
uint32_t x220 = 9248U;
uint16_t x224 = 13U;
int8_t x226 = INT8_MIN;
int16_t x229 = -13;
uint32_t x231 = 255452U;
uint8_t x236 = UINT8_MAX;
uint8_t x249 = 21U;
uint8_t x250 = 0U;
static int16_t x251 = 788;
volatile int32_t t59 = -817989;
int8_t x258 = INT8_MIN;
uint16_t x264 = 25159U;
uint32_t x267 = 635807U;
static volatile uint16_t x268 = 7U;
int16_t x269 = -1;
uint64_t x272 = 2365481527707253163LLU;
static int32_t t64 = -144;
int8_t x275 = INT8_MAX;
static uint16_t x276 = 1136U;
volatile int32_t t68 = 811178415;
int32_t x307 = -19989843;
uint32_t x313 = 16517543U;
static volatile int16_t x321 = -1;
volatile int64_t x339 = INT64_MAX;
static volatile int32_t t79 = -37226014;
int8_t x341 = INT8_MIN;
int16_t x342 = INT16_MAX;
volatile int32_t t82 = -2636;
uint16_t x358 = UINT16_MAX;
uint8_t x360 = 1U;
int32_t t85 = -22403;
static uint64_t x369 = UINT64_MAX;
int64_t x371 = INT64_MAX;
static volatile int32_t t86 = 13135814;
int32_t x374 = INT32_MAX;
volatile int32_t x390 = -8851;
volatile uint32_t x394 = 244U;
int16_t x400 = -1;
int32_t t94 = -226;
volatile int32_t t95 = 3704;
volatile int32_t t98 = 4;
int32_t x430 = INT32_MAX;
int32_t t103 = -14225;
int32_t x446 = INT32_MIN;
int16_t x447 = INT16_MIN;
int8_t x448 = -21;
static volatile int32_t t105 = 14;
int32_t x453 = -48500020;
static volatile int8_t x462 = INT8_MIN;
int8_t x468 = INT8_MIN;
static int8_t x477 = 1;
int32_t t111 = -717715692;
int16_t x483 = -1;
int16_t x485 = -1;
volatile int16_t x488 = INT16_MIN;
volatile uint32_t x489 = UINT32_MAX;
static volatile uint64_t x490 = UINT64_MAX;
volatile uint16_t x493 = 100U;
uint32_t x511 = UINT32_MAX;
volatile int16_t x519 = INT16_MIN;
uint32_t x520 = UINT32_MAX;
int16_t x522 = INT16_MIN;
int32_t x524 = 5005025;
static uint64_t x529 = UINT64_MAX;
int16_t x536 = 43;
int8_t x542 = 3;
volatile int32_t x550 = 20163084;
static int8_t x552 = 1;
uint16_t x554 = 2660U;
static volatile int32_t t127 = 1;
int64_t x562 = INT64_MIN;
uint8_t x564 = UINT8_MAX;
static int8_t x565 = -1;
uint8_t x567 = UINT8_MAX;
int8_t x574 = INT8_MIN;
int64_t x585 = INT64_MAX;
volatile uint16_t x588 = 7U;
static volatile int64_t x589 = -1321305830349LL;
int16_t x599 = -4;
int64_t x608 = INT64_MIN;
int32_t t138 = -275;
volatile int32_t x613 = -1;
int64_t x615 = INT64_MIN;
int16_t x616 = INT16_MAX;
int8_t x617 = INT8_MAX;
int32_t x637 = -5142273;
int16_t x638 = INT16_MAX;
int32_t t145 = 1701;
uint16_t x656 = UINT16_MAX;
int16_t x661 = INT16_MAX;
volatile int32_t t150 = 2144017;
static int32_t t151 = 3709854;
uint8_t x686 = 8U;
int16_t x688 = -1;
uint32_t x701 = 2971U;
static int32_t x702 = -1;
int32_t x703 = 1018;
static int32_t x708 = INT32_MIN;
int16_t x714 = 3;
int64_t x716 = INT64_MIN;
volatile int32_t t163 = -600480642;
volatile int32_t t164 = -45692;
static int32_t t167 = -58886;
static uint64_t x753 = UINT64_MAX;
uint16_t x755 = 10559U;
uint32_t x756 = UINT32_MAX;
int32_t t169 = -273;
int64_t x774 = INT64_MAX;
uint16_t x775 = UINT16_MAX;
int32_t t171 = -27632;
int32_t x779 = -13;
volatile int32_t t172 = -7;
static uint16_t x781 = 3U;
int32_t t177 = -13591;
uint64_t x837 = UINT64_MAX;
int32_t t186 = 129097;
uint8_t x850 = 3U;
int32_t x851 = -1;
volatile uint16_t x859 = 48U;
int16_t x864 = -5;
int8_t x868 = -24;
int32_t t191 = 3597996;
uint32_t x878 = 6847346U;
static int64_t x883 = INT64_MAX;
static int32_t x891 = INT32_MIN;
static uint8_t x892 = UINT8_MAX;
int32_t x894 = -484433053;
int64_t x895 = INT64_MAX;
static volatile uint16_t x896 = 1U;
int16_t x902 = INT16_MIN;
int32_t x903 = INT32_MIN;
uint32_t x907 = 84944944U;


void f0(void) {
    	static volatile uint8_t x1 = 5U;
	volatile int64_t x2 = -210LL;
	volatile int64_t x3 = -1LL;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -2825;

    t0 = ((x1+x2)>(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	static volatile int8_t x6 = INT8_MIN;
	static int32_t x7 = 344;
	int64_t x8 = INT64_MAX;
	static int32_t t1 = -23281;

    t1 = ((x5+x6)>(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -7024214225410LL;
	int16_t x11 = INT16_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = 5786573;

    t2 = ((x9+x10)>(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -105;
	static uint16_t x18 = 124U;
	volatile int32_t x19 = 14;
	volatile int32_t t3 = -3368;

    t3 = ((x17+x18)>(x19>x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	static int32_t x24 = INT32_MIN;
	int32_t t4 = -74858115;

    t4 = ((x21+x22)>(x23>x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = 1538551834LL;
	int32_t x28 = INT32_MIN;

    t5 = ((x25+x26)>(x27>x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MAX;

    t6 = ((x29+x30)>(x31>x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	int8_t x34 = 4;
	volatile int32_t t7 = -10667534;

    t7 = ((x33+x34)>(x35>x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	volatile uint64_t x39 = 179LLU;
	volatile int16_t x40 = INT16_MAX;
	int32_t t8 = -3962;

    t8 = ((x37+x38)>(x39>x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 1;
	int32_t x42 = INT32_MIN;
	static int16_t x44 = -746;
	static volatile int32_t t9 = 1;

    t9 = ((x41+x42)>(x43>x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	int8_t x46 = 11;
	volatile int64_t x47 = -1LL;
	volatile int32_t t10 = 150366;

    t10 = ((x45+x46)>(x47>x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x49 = 1U;
	static int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	int8_t x52 = 4;
	volatile int32_t t11 = 342550796;

    t11 = ((x49+x50)>(x51>x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 5U;
	static volatile int32_t t12 = 1;

    t12 = ((x53+x54)>(x55>x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 15;
	int16_t x58 = INT16_MAX;

    t13 = ((x57+x58)>(x59>x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 1832616;
	uint16_t x62 = 0U;
	int8_t x63 = INT8_MIN;
	volatile uint8_t x64 = 57U;

    t14 = ((x61+x62)>(x63>x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -1;
	int32_t x66 = -1;
	volatile int8_t x67 = INT8_MAX;
	volatile int32_t t15 = -1;

    t15 = ((x65+x66)>(x67>x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	int64_t x70 = -1LL;
	int32_t x72 = INT32_MAX;
	static int32_t t16 = -1;

    t16 = ((x69+x70)>(x71>x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	static int8_t x74 = -1;
	uint32_t x75 = 0U;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t17 = -2129312;

    t17 = ((x73+x74)>(x75>x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MIN;
	int64_t x80 = 235440994LL;
	volatile int32_t t18 = -28;

    t18 = ((x77+x78)>(x79>x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -26;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = -21;
	int8_t x84 = 1;
	static volatile int32_t t19 = 29510;

    t19 = ((x81+x82)>(x83>x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = -1550095312150LL;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 0U;
	volatile int8_t x88 = INT8_MIN;
	int32_t t20 = 4209921;

    t20 = ((x85+x86)>(x87>x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x90 = 218765049U;
	static int64_t x91 = -15316LL;
	volatile uint8_t x92 = 91U;
	int32_t t21 = -1;

    t21 = ((x89+x90)>(x91>x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = 5;
	int64_t x95 = INT64_MAX;
	int64_t x96 = -127136647622LL;
	int32_t t22 = -1;

    t22 = ((x93+x94)>(x95>x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x98 = 555256U;
	int32_t t23 = -16252795;

    t23 = ((x97+x98)>(x99>x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x101 = INT16_MIN;
	int64_t x102 = 270652104215353LL;
	static uint64_t x103 = UINT64_MAX;
	volatile int32_t t24 = 171531018;

    t24 = ((x101+x102)>(x103>x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 1;
	static int8_t x106 = INT8_MAX;
	int32_t t25 = -175146;

    t25 = ((x105+x106)>(x107>x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x109 = -1;
	static int32_t x110 = 157462146;
	int16_t x111 = -1;
	int64_t x112 = 14LL;

    t26 = ((x109+x110)>(x111>x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = 7;
	volatile uint16_t x114 = 6U;
	static int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MAX;
	volatile int32_t t27 = 202;

    t27 = ((x113+x114)>(x115>x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	int8_t x119 = -3;
	volatile uint16_t x120 = 38U;

    t28 = ((x117+x118)>(x119>x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -45826946963LL;
	static uint64_t x122 = UINT64_MAX;
	volatile uint64_t x123 = UINT64_MAX;
	static volatile int32_t x124 = -50829197;
	volatile int32_t t29 = 10794072;

    t29 = ((x121+x122)>(x123>x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MIN;
	static int32_t t30 = -6;

    t30 = ((x125+x126)>(x127>x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x130 = 1U;
	volatile uint64_t x132 = 157710154102540LLU;
	static int32_t t31 = 243779876;

    t31 = ((x129+x130)>(x131>x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = -2037606281483LL;
	static int32_t x134 = INT32_MIN;
	static int16_t x135 = 11;
	static int64_t x136 = INT64_MIN;

    t32 = ((x133+x134)>(x135>x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -4234274;
	static uint8_t x142 = 15U;
	uint64_t x143 = 32461066LLU;
	uint64_t x144 = 4859168LLU;
	int32_t t33 = 321;

    t33 = ((x141+x142)>(x143>x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x145 = UINT16_MAX;
	int32_t x146 = -63826860;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t t34 = 44033;

    t34 = ((x145+x146)>(x147>x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MAX;
	int16_t x151 = -1;

    t35 = ((x149+x150)>(x151>x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x155 = INT64_MIN;
	static volatile int32_t t36 = 35243857;

    t36 = ((x153+x154)>(x155>x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = -3;
	uint8_t x159 = 3U;
	uint64_t x160 = 8748LLU;

    t37 = ((x157+x158)>(x159>x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x161 = INT8_MIN;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = INT32_MAX;
	int64_t x164 = 983713938113525LL;

    t38 = ((x161+x162)>(x163>x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MAX;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MAX;
	uint64_t x168 = 17LLU;
	volatile int32_t t39 = 0;

    t39 = ((x165+x166)>(x167>x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MAX;
	int16_t x170 = -1;
	static int64_t x171 = 4357144171450LL;
	volatile int64_t x172 = -1LL;

    t40 = ((x169+x170)>(x171>x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = 128457U;
	uint8_t x174 = 7U;
	int16_t x175 = INT16_MAX;
	static volatile uint16_t x176 = UINT16_MAX;
	static int32_t t41 = 1;

    t41 = ((x173+x174)>(x175>x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	int32_t t42 = -194;

    t42 = ((x177+x178)>(x179>x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MIN;
	uint32_t x184 = 690173U;
	volatile int32_t t43 = 1141;

    t43 = ((x181+x182)>(x183>x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x187 = 9LLU;
	int32_t t44 = -158;

    t44 = ((x185+x186)>(x187>x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -1;
	int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	volatile uint16_t x192 = 297U;
	int32_t t45 = -5;

    t45 = ((x189+x190)>(x191>x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x193 = INT32_MIN;
	volatile uint16_t x194 = 7911U;
	uint32_t x195 = 26U;
	volatile int32_t t46 = -25;

    t46 = ((x193+x194)>(x195>x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 61LLU;
	static int64_t x200 = INT64_MAX;
	volatile int32_t t47 = 1;

    t47 = ((x197+x198)>(x199>x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x201 = -4;
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = -225712105;

    t48 = ((x201+x202)>(x203>x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	uint8_t x206 = 18U;
	int64_t x207 = -1LL;
	uint64_t x208 = 187847325317961LLU;
	volatile int32_t t49 = -32216;

    t49 = ((x205+x206)>(x207>x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = INT16_MIN;
	uint64_t x211 = UINT64_MAX;
	static int32_t t50 = 1;

    t50 = ((x209+x210)>(x211>x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = -1;
	int32_t x214 = 972882313;
	static int8_t x215 = 0;
	uint32_t x216 = UINT32_MAX;
	static int32_t t51 = 52;

    t51 = ((x213+x214)>(x215>x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	int32_t x218 = 6;
	uint8_t x219 = 16U;
	volatile int32_t t52 = -4679164;

    t52 = ((x217+x218)>(x219>x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x221 = 0U;
	volatile int16_t x222 = 1;
	volatile uint16_t x223 = 7622U;
	int32_t t53 = 175343549;

    t53 = ((x221+x222)>(x223>x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x225 = 18664621U;
	volatile int8_t x227 = -1;
	uint16_t x228 = 625U;
	volatile int32_t t54 = 4;

    t54 = ((x225+x226)>(x227>x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x230 = 15941373;
	int32_t x232 = INT32_MIN;
	volatile int32_t t55 = -32086;

    t55 = ((x229+x230)>(x231>x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x233 = 345U;
	int8_t x234 = INT8_MIN;
	int16_t x235 = -1;
	volatile int32_t t56 = 718050481;

    t56 = ((x233+x234)>(x235>x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = UINT32_MAX;
	int64_t x238 = 80295303LL;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t57 = -822045;

    t57 = ((x237+x238)>(x239>x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x245 = 0U;
	int16_t x246 = INT16_MAX;
	uint64_t x247 = 6024909494324LLU;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t58 = 4;

    t58 = ((x245+x246)>(x247>x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x252 = -1LL;

    t59 = ((x249+x250)>(x251>x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x253 = 8952417659LLU;
	volatile uint8_t x254 = UINT8_MAX;
	volatile int32_t x255 = 957278;
	uint8_t x256 = 93U;
	int32_t t60 = 2195;

    t60 = ((x253+x254)>(x255>x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = -1;
	volatile int16_t x259 = -1;
	int16_t x260 = -16;
	volatile int32_t t61 = 9053;

    t61 = ((x257+x258)>(x259>x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MIN;
	volatile int64_t x262 = 1747556002608003LL;
	int32_t x263 = 0;
	static volatile int32_t t62 = 130696;

    t62 = ((x261+x262)>(x263>x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = 2510;
	int64_t x266 = 42LL;
	volatile int32_t t63 = -452978234;

    t63 = ((x265+x266)>(x267>x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x270 = -6;
	static volatile int32_t x271 = INT32_MIN;

    t64 = ((x269+x270)>(x271>x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = -1826992;
	uint32_t x274 = 173U;
	static int32_t t65 = 346522;

    t65 = ((x273+x274)>(x275>x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x281 = -1LL;
	static int16_t x282 = INT16_MAX;
	static int64_t x283 = INT64_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t66 = -126732502;

    t66 = ((x281+x282)>(x283>x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 62U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t67 = 16777185;

    t67 = ((x285+x286)>(x287>x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 65U;
	uint16_t x292 = UINT16_MAX;

    t68 = ((x289+x290)>(x291>x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t69 = 14095454;

    t69 = ((x293+x294)>(x295>x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = 3553;
	static int32_t x298 = 3958;
	volatile uint8_t x299 = 9U;
	int8_t x300 = INT8_MAX;
	int32_t t70 = 0;

    t70 = ((x297+x298)>(x299>x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	static uint64_t x303 = 7529443869752338LLU;
	int16_t x304 = 0;
	int32_t t71 = 46;

    t71 = ((x301+x302)>(x303>x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = -55189;
	int64_t x306 = -1LL;
	uint64_t x308 = UINT64_MAX;
	int32_t t72 = -70;

    t72 = ((x305+x306)>(x307>x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MIN;
	static uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = 56;
	int32_t t73 = -306234416;

    t73 = ((x309+x310)>(x311>x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x314 = INT8_MAX;
	uint32_t x315 = 1480U;
	volatile int16_t x316 = 756;
	volatile int32_t t74 = 240753;

    t74 = ((x313+x314)>(x315>x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x317 = -7120;
	uint64_t x318 = 51264162718539915LLU;
	int16_t x319 = -5;
	int32_t x320 = -1;
	int32_t t75 = -33889268;

    t75 = ((x317+x318)>(x319>x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = -1;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t76 = 223;

    t76 = ((x321+x322)>(x323>x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x325 = -1;
	static uint8_t x326 = UINT8_MAX;
	uint64_t x327 = UINT64_MAX;
	volatile int16_t x328 = -3850;
	int32_t t77 = 76060;

    t77 = ((x325+x326)>(x327>x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = INT32_MIN;
	uint8_t x334 = 1U;
	static uint8_t x335 = 17U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t78 = -58776603;

    t78 = ((x333+x334)>(x335>x336));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x337 = 25U;
	int64_t x338 = -1LL;
	int8_t x340 = -1;

    t79 = ((x337+x338)>(x339>x340));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x343 = -1;
	static int16_t x344 = -1;
	int32_t t80 = 644895678;

    t80 = ((x341+x342)>(x343>x344));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = 0;
	volatile int8_t x352 = -1;
	int32_t t81 = 62439948;

    t81 = ((x349+x350)>(x351>x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MIN;
	volatile int64_t x355 = 389497605LL;
	static uint16_t x356 = 1U;

    t82 = ((x353+x354)>(x355>x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x357 = 40LL;
	static int32_t x359 = INT32_MAX;
	int32_t t83 = 141;

    t83 = ((x357+x358)>(x359>x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x361 = INT32_MAX;
	uint64_t x362 = 556764245468013LLU;
	int16_t x363 = -1;
	static uint64_t x364 = 2235943375895LLU;
	int32_t t84 = 15561971;

    t84 = ((x361+x362)>(x363>x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -1;
	uint64_t x366 = 2229411677408LLU;
	uint32_t x367 = 78U;
	uint32_t x368 = UINT32_MAX;

    t85 = ((x365+x366)>(x367>x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x370 = INT64_MIN;
	static int8_t x372 = -1;

    t86 = ((x369+x370)>(x371>x372));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x375 = -21;
	static volatile int8_t x376 = INT8_MIN;
	int32_t t87 = 2951;

    t87 = ((x373+x374)>(x375>x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 219LLU;
	static int32_t x378 = 376936329;
	static int8_t x379 = -3;
	int16_t x380 = 1;
	int32_t t88 = 8;

    t88 = ((x377+x378)>(x379>x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MAX;
	static int64_t x384 = INT64_MIN;
	int32_t t89 = -972274118;

    t89 = ((x381+x382)>(x383>x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x385 = INT16_MIN;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t90 = 33231;

    t90 = ((x385+x386)>(x387>x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x389 = INT16_MIN;
	int64_t x391 = 32169442LL;
	int32_t x392 = INT32_MAX;
	volatile int32_t t91 = 30833017;

    t91 = ((x389+x390)>(x391>x392));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x393 = 801717LLU;
	uint32_t x395 = UINT32_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t92 = 0;

    t92 = ((x393+x394)>(x395>x396));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x397 = -1LL;
	int16_t x398 = INT16_MAX;
	int32_t x399 = INT32_MAX;
	volatile int32_t t93 = -22385125;

    t93 = ((x397+x398)>(x399>x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x401 = -1;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	volatile int64_t x404 = -1LL;

    t94 = ((x401+x402)>(x403>x404));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x405 = 270LLU;
	int64_t x406 = -1LL;
	int32_t x407 = -1;
	volatile uint8_t x408 = UINT8_MAX;

    t95 = ((x405+x406)>(x407>x408));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x409 = UINT16_MAX;
	int32_t x410 = 7;
	uint64_t x411 = 445073817585053154LLU;
	volatile int64_t x412 = INT64_MAX;
	volatile int32_t t96 = -51;

    t96 = ((x409+x410)>(x411>x412));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x413 = 1357;
	int64_t x414 = 6805698607LL;
	static int64_t x415 = 3621647380736LL;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t97 = -6514798;

    t97 = ((x413+x414)>(x415>x416));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x417 = 815690440LL;
	volatile int16_t x418 = -1;
	uint8_t x419 = 2U;
	static uint64_t x420 = UINT64_MAX;

    t98 = ((x417+x418)>(x419>x420));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x421 = 401;
	int32_t x422 = 0;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = 0;
	int32_t t99 = -80;

    t99 = ((x421+x422)>(x423>x424));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x425 = 13LLU;
	volatile int32_t x426 = INT32_MIN;
	static int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t100 = -200969;

    t100 = ((x425+x426)>(x427>x428));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x429 = -1LL;
	static int32_t x431 = -1;
	int32_t x432 = -1;
	volatile int32_t t101 = -5022028;

    t101 = ((x429+x430)>(x431>x432));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x433 = INT16_MIN;
	volatile int8_t x434 = -1;
	int64_t x435 = 876LL;
	int64_t x436 = -1LL;
	int32_t t102 = -129184;

    t102 = ((x433+x434)>(x435>x436));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = 124647654LL;
	int32_t x438 = 0;
	int32_t x439 = -1;
	static volatile int64_t x440 = INT64_MIN;

    t103 = ((x437+x438)>(x439>x440));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x445 = -1LL;
	int32_t t104 = 197648;

    t104 = ((x445+x446)>(x447>x448));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x449 = -1;
	int32_t x450 = -1;
	static int32_t x451 = 47882339;
	static int64_t x452 = INT64_MIN;

    t105 = ((x449+x450)>(x451>x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x454 = 12237;
	int32_t x455 = INT32_MIN;
	uint64_t x456 = 1001LLU;
	volatile int32_t t106 = -293118;

    t106 = ((x453+x454)>(x455>x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x461 = 0;
	volatile uint64_t x463 = 1055828417559087395LLU;
	int64_t x464 = -1LL;
	int32_t t107 = 218314;

    t107 = ((x461+x462)>(x463>x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = 27;
	int64_t x467 = 344LL;
	static int32_t t108 = 43409;

    t108 = ((x465+x466)>(x467>x468));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x469 = 4486U;
	uint32_t x470 = 1418U;
	uint32_t x471 = 1274238U;
	uint32_t x472 = 12042921U;
	int32_t t109 = 16158877;

    t109 = ((x469+x470)>(x471>x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x473 = -4975;
	volatile int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MAX;
	volatile int32_t t110 = -69719756;

    t110 = ((x473+x474)>(x475>x476));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x478 = -7;
	uint16_t x479 = 1338U;
	volatile int64_t x480 = INT64_MIN;

    t111 = ((x477+x478)>(x479>x480));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x481 = 27;
	uint32_t x482 = 479U;
	int16_t x484 = INT16_MIN;
	volatile int32_t t112 = 221721265;

    t112 = ((x481+x482)>(x483>x484));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	static int32_t t113 = 1421;

    t113 = ((x485+x486)>(x487>x488));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x491 = UINT64_MAX;
	static int8_t x492 = -1;
	volatile int32_t t114 = -7937;

    t114 = ((x489+x490)>(x491>x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x494 = 5000LL;
	uint32_t x495 = UINT32_MAX;
	int64_t x496 = -4280202935471882LL;
	volatile int32_t t115 = -1;

    t115 = ((x493+x494)>(x495>x496));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x497 = 296324956396LL;
	uint8_t x498 = 0U;
	int64_t x499 = -265LL;
	volatile uint16_t x500 = 8124U;
	volatile int32_t t116 = -54509;

    t116 = ((x497+x498)>(x499>x500));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x501 = -1;
	volatile uint16_t x502 = 14U;
	volatile int64_t x503 = INT64_MAX;
	int16_t x504 = INT16_MAX;
	volatile int32_t t117 = 38992788;

    t117 = ((x501+x502)>(x503>x504));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x505 = 126923077707LLU;
	uint16_t x506 = 284U;
	int32_t x507 = -1;
	volatile int16_t x508 = INT16_MAX;
	int32_t t118 = -1746343;

    t118 = ((x505+x506)>(x507>x508));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x509 = 0U;
	int64_t x510 = INT64_MAX;
	int8_t x512 = INT8_MIN;
	int32_t t119 = 371822826;

    t119 = ((x509+x510)>(x511>x512));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = 1U;
	volatile int32_t t120 = -14871287;

    t120 = ((x517+x518)>(x519>x520));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x521 = 5;
	static uint32_t x523 = 38672237U;
	int32_t t121 = -666040;

    t121 = ((x521+x522)>(x523>x524));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x530 = 28U;
	int32_t x531 = 130;
	int64_t x532 = -1LL;
	volatile int32_t t122 = 10;

    t122 = ((x529+x530)>(x531>x532));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x533 = INT32_MAX;
	volatile uint32_t x534 = 1U;
	uint32_t x535 = 772903491U;
	int32_t t123 = -431699029;

    t123 = ((x533+x534)>(x535>x536));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x541 = -1;
	int16_t x543 = -10256;
	static volatile uint32_t x544 = UINT32_MAX;
	static volatile int32_t t124 = 484025;

    t124 = ((x541+x542)>(x543>x544));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x545 = -1LL;
	int64_t x546 = 221LL;
	int64_t x547 = INT64_MAX;
	volatile int64_t x548 = INT64_MIN;
	static int32_t t125 = 769933;

    t125 = ((x545+x546)>(x547>x548));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x549 = INT16_MIN;
	uint8_t x551 = 1U;
	volatile int32_t t126 = -36;

    t126 = ((x549+x550)>(x551>x552));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x553 = 59U;
	uint8_t x555 = UINT8_MAX;
	int8_t x556 = INT8_MIN;

    t127 = ((x553+x554)>(x555>x556));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x561 = 26;
	int8_t x563 = INT8_MIN;
	int32_t t128 = -828;

    t128 = ((x561+x562)>(x563>x564));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x566 = UINT64_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x565+x566)>(x567>x568));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x569 = INT32_MAX;
	int16_t x570 = -1;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;
	static int32_t t130 = 2;

    t130 = ((x569+x570)>(x571>x572));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x573 = 3U;
	uint64_t x575 = 223287137173LLU;
	int16_t x576 = INT16_MIN;
	volatile int32_t t131 = -4016;

    t131 = ((x573+x574)>(x575>x576));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x582 = INT8_MAX;
	volatile uint32_t x583 = 0U;
	static uint32_t x584 = UINT32_MAX;
	static volatile int32_t t132 = 1;

    t132 = ((x581+x582)>(x583>x584));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x586 = -1;
	uint8_t x587 = 1U;
	int32_t t133 = -525927860;

    t133 = ((x585+x586)>(x587>x588));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x590 = INT64_MAX;
	volatile uint32_t x591 = UINT32_MAX;
	uint8_t x592 = 6U;
	static volatile int32_t t134 = -2021298;

    t134 = ((x589+x590)>(x591>x592));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x593 = INT8_MIN;
	uint8_t x594 = 16U;
	uint8_t x595 = UINT8_MAX;
	static int16_t x596 = -442;
	int32_t t135 = -408;

    t135 = ((x593+x594)>(x595>x596));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x597 = INT16_MIN;
	int8_t x598 = INT8_MAX;
	uint64_t x600 = UINT64_MAX;
	int32_t t136 = 8347339;

    t136 = ((x597+x598)>(x599>x600));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x601 = -153;
	int64_t x602 = -1LL;
	uint16_t x603 = 2254U;
	int8_t x604 = -56;
	volatile int32_t t137 = 173737;

    t137 = ((x601+x602)>(x603>x604));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x605 = INT8_MIN;
	static volatile uint32_t x606 = 972498U;
	int8_t x607 = INT8_MAX;

    t138 = ((x605+x606)>(x607>x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x614 = INT8_MIN;
	volatile int32_t t139 = -970168;

    t139 = ((x613+x614)>(x615>x616));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x618 = 3U;
	static volatile uint64_t x619 = 27LLU;
	uint64_t x620 = 123LLU;
	volatile int32_t t140 = -2003181;

    t140 = ((x617+x618)>(x619>x620));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x621 = -1;
	int16_t x622 = -12884;
	int64_t x623 = 508323351335324LL;
	uint64_t x624 = UINT64_MAX;
	volatile int32_t t141 = 19;

    t141 = ((x621+x622)>(x623>x624));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x625 = 2U;
	int16_t x626 = INT16_MAX;
	int32_t x627 = -1;
	uint8_t x628 = 1U;
	int32_t t142 = -19107321;

    t142 = ((x625+x626)>(x627>x628));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x629 = 1U;
	static uint8_t x630 = 90U;
	int16_t x631 = INT16_MIN;
	volatile int8_t x632 = INT8_MIN;
	volatile int32_t t143 = -254085;

    t143 = ((x629+x630)>(x631>x632));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x639 = 3U;
	volatile uint16_t x640 = 1U;
	static int32_t t144 = -436;

    t144 = ((x637+x638)>(x639>x640));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x645 = 5;
	uint8_t x646 = UINT8_MAX;
	volatile int32_t x647 = INT32_MIN;
	static volatile int32_t x648 = INT32_MIN;

    t145 = ((x645+x646)>(x647>x648));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x649 = -1LL;
	int32_t x650 = INT32_MIN;
	static int8_t x651 = -3;
	int8_t x652 = 1;
	volatile int32_t t146 = -31630;

    t146 = ((x649+x650)>(x651>x652));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x653 = 3959U;
	uint32_t x654 = 4U;
	volatile uint8_t x655 = UINT8_MAX;
	volatile int32_t t147 = -144;

    t147 = ((x653+x654)>(x655>x656));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x657 = 9U;
	uint32_t x658 = 1870235U;
	volatile uint8_t x659 = 11U;
	static int64_t x660 = INT64_MIN;
	static int32_t t148 = -10200235;

    t148 = ((x657+x658)>(x659>x660));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x662 = INT16_MIN;
	int8_t x663 = 3;
	uint8_t x664 = 2U;
	int32_t t149 = -1;

    t149 = ((x661+x662)>(x663>x664));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = -1;
	uint8_t x666 = 126U;
	uint32_t x667 = UINT32_MAX;
	volatile int32_t x668 = INT32_MIN;

    t150 = ((x665+x666)>(x667>x668));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x669 = -1;
	int64_t x670 = INT64_MAX;
	int16_t x671 = INT16_MIN;
	int64_t x672 = -1LL;

    t151 = ((x669+x670)>(x671>x672));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x673 = -5;
	int64_t x674 = INT64_MAX;
	int16_t x675 = -2;
	static int64_t x676 = -6409085LL;
	int32_t t152 = -3043;

    t152 = ((x673+x674)>(x675>x676));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x681 = UINT32_MAX;
	uint64_t x682 = 54LLU;
	volatile uint16_t x683 = 1U;
	int64_t x684 = 1LL;
	volatile int32_t t153 = 749774180;

    t153 = ((x681+x682)>(x683>x684));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x685 = INT32_MIN;
	static int32_t x687 = INT32_MIN;
	static int32_t t154 = -218892;

    t154 = ((x685+x686)>(x687>x688));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x693 = UINT32_MAX;
	uint16_t x694 = UINT16_MAX;
	uint32_t x695 = UINT32_MAX;
	uint64_t x696 = 27752376472286364LLU;
	volatile int32_t t155 = 0;

    t155 = ((x693+x694)>(x695>x696));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x697 = INT64_MAX;
	int32_t x698 = INT32_MIN;
	uint8_t x699 = UINT8_MAX;
	int32_t x700 = -68;
	volatile int32_t t156 = 61463330;

    t156 = ((x697+x698)>(x699>x700));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x704 = 16021109;
	static int32_t t157 = 228;

    t157 = ((x701+x702)>(x703>x704));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x705 = 28188014U;
	uint8_t x706 = UINT8_MAX;
	int16_t x707 = 0;
	static volatile int32_t t158 = -3;

    t158 = ((x705+x706)>(x707>x708));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x709 = 23634U;
	volatile int32_t x710 = -1;
	static int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MAX;
	int32_t t159 = 1;

    t159 = ((x709+x710)>(x711>x712));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x713 = 6;
	int64_t x715 = -1LL;
	volatile int32_t t160 = -707;

    t160 = ((x713+x714)>(x715>x716));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x717 = 5784LLU;
	int8_t x718 = INT8_MIN;
	static uint16_t x719 = 3U;
	int8_t x720 = -1;
	volatile int32_t t161 = -228665495;

    t161 = ((x717+x718)>(x719>x720));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x721 = UINT32_MAX;
	int32_t x722 = INT32_MAX;
	volatile int32_t x723 = INT32_MAX;
	static int32_t x724 = INT32_MIN;
	int32_t t162 = 32;

    t162 = ((x721+x722)>(x723>x724));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x725 = 3;
	volatile int32_t x726 = 293321876;
	int8_t x727 = INT8_MAX;
	uint64_t x728 = 15296LLU;

    t163 = ((x725+x726)>(x727>x728));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x733 = -1;
	int16_t x734 = INT16_MAX;
	int32_t x735 = INT32_MAX;
	volatile int16_t x736 = -1;

    t164 = ((x733+x734)>(x735>x736));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x737 = INT64_MIN;
	uint16_t x738 = 20U;
	uint32_t x739 = 1737944U;
	static int8_t x740 = 37;
	int32_t t165 = 262414095;

    t165 = ((x737+x738)>(x739>x740));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x741 = INT8_MAX;
	int32_t x742 = -1;
	static int64_t x743 = -841581832548LL;
	int8_t x744 = INT8_MAX;
	volatile int32_t t166 = 826724;

    t166 = ((x741+x742)>(x743>x744));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x745 = INT8_MAX;
	uint16_t x746 = 711U;
	volatile int64_t x747 = INT64_MAX;
	uint16_t x748 = UINT16_MAX;

    t167 = ((x745+x746)>(x747>x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x749 = -1;
	uint32_t x750 = UINT32_MAX;
	int32_t x751 = INT32_MIN;
	int16_t x752 = 1;
	volatile int32_t t168 = -362717;

    t168 = ((x749+x750)>(x751>x752));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x754 = INT32_MAX;

    t169 = ((x753+x754)>(x755>x756));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x769 = -1LL;
	uint8_t x770 = 7U;
	uint32_t x771 = UINT32_MAX;
	int16_t x772 = INT16_MIN;
	volatile int32_t t170 = 24252730;

    t170 = ((x769+x770)>(x771>x772));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x773 = -1;
	uint8_t x776 = 0U;

    t171 = ((x773+x774)>(x775>x776));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x777 = -1;
	uint8_t x778 = UINT8_MAX;
	int8_t x780 = INT8_MIN;

    t172 = ((x777+x778)>(x779>x780));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x782 = 11757U;
	int8_t x783 = 30;
	int8_t x784 = -1;
	int32_t t173 = -21;

    t173 = ((x781+x782)>(x783>x784));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x789 = INT16_MIN;
	int8_t x790 = -7;
	int16_t x791 = INT16_MAX;
	static int16_t x792 = INT16_MAX;
	static int32_t t174 = 0;

    t174 = ((x789+x790)>(x791>x792));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x793 = 12114646U;
	uint16_t x794 = 53U;
	static uint64_t x795 = 7305114739460276014LLU;
	int16_t x796 = INT16_MIN;
	int32_t t175 = -103;

    t175 = ((x793+x794)>(x795>x796));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x797 = INT64_MIN;
	uint16_t x798 = UINT16_MAX;
	uint32_t x799 = UINT32_MAX;
	uint8_t x800 = 95U;
	int32_t t176 = 1;

    t176 = ((x797+x798)>(x799>x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x801 = INT16_MIN;
	int16_t x802 = 2;
	volatile uint8_t x803 = UINT8_MAX;
	int16_t x804 = 462;

    t177 = ((x801+x802)>(x803>x804));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x809 = -1;
	int64_t x810 = -1LL;
	uint16_t x811 = 8U;
	static int32_t x812 = INT32_MIN;
	int32_t t178 = 277;

    t178 = ((x809+x810)>(x811>x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x813 = 1394U;
	int8_t x814 = 1;
	uint64_t x815 = 1398441LLU;
	uint16_t x816 = 49U;
	volatile int32_t t179 = 741573;

    t179 = ((x813+x814)>(x815>x816));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x817 = INT16_MAX;
	uint64_t x818 = 40668234471LLU;
	static uint16_t x819 = 1U;
	static int64_t x820 = INT64_MAX;
	int32_t t180 = -6608;

    t180 = ((x817+x818)>(x819>x820));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x821 = INT16_MIN;
	uint32_t x822 = 4405U;
	int8_t x823 = -1;
	static uint64_t x824 = 6676836474884512355LLU;
	volatile int32_t t181 = 89743;

    t181 = ((x821+x822)>(x823>x824));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x825 = INT16_MIN;
	uint16_t x826 = 422U;
	int32_t x827 = -1;
	uint64_t x828 = UINT64_MAX;
	int32_t t182 = 7718;

    t182 = ((x825+x826)>(x827>x828));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x829 = -126;
	uint8_t x830 = UINT8_MAX;
	int32_t x831 = INT32_MAX;
	uint32_t x832 = 2U;
	volatile int32_t t183 = -1;

    t183 = ((x829+x830)>(x831>x832));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	volatile int64_t x834 = INT64_MAX;
	int32_t x835 = 4109000;
	uint16_t x836 = 143U;
	static volatile int32_t t184 = -229;

    t184 = ((x833+x834)>(x835>x836));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x838 = UINT32_MAX;
	int64_t x839 = INT64_MIN;
	int32_t x840 = INT32_MAX;
	int32_t t185 = 425778;

    t185 = ((x837+x838)>(x839>x840));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = INT16_MAX;
	volatile uint8_t x842 = 21U;
	uint64_t x843 = 843730791100LLU;
	uint64_t x844 = 396248622LLU;

    t186 = ((x841+x842)>(x843>x844));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x849 = 6U;
	int64_t x852 = INT64_MAX;
	int32_t t187 = 0;

    t187 = ((x849+x850)>(x851>x852));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x853 = INT8_MAX;
	static int32_t x854 = -66;
	volatile int8_t x855 = -1;
	volatile uint8_t x856 = 14U;
	static int32_t t188 = 5303908;

    t188 = ((x853+x854)>(x855>x856));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x857 = INT8_MIN;
	int16_t x858 = 4578;
	static uint32_t x860 = 1954190U;
	int32_t t189 = -962573772;

    t189 = ((x857+x858)>(x859>x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x861 = UINT16_MAX;
	int8_t x862 = -1;
	volatile int64_t x863 = -41LL;
	volatile int32_t t190 = -8418;

    t190 = ((x861+x862)>(x863>x864));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x865 = INT16_MIN;
	volatile int8_t x866 = INT8_MIN;
	int16_t x867 = -874;

    t191 = ((x865+x866)>(x867>x868));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x873 = -42;
	static volatile int16_t x874 = -1;
	uint8_t x875 = UINT8_MAX;
	int16_t x876 = INT16_MIN;
	int32_t t192 = -774201;

    t192 = ((x873+x874)>(x875>x876));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x877 = INT64_MIN;
	int32_t x879 = 19;
	int8_t x880 = -1;
	volatile int32_t t193 = 291770770;

    t193 = ((x877+x878)>(x879>x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x881 = -390;
	volatile int32_t x882 = INT32_MAX;
	uint64_t x884 = UINT64_MAX;
	static int32_t t194 = 15827451;

    t194 = ((x881+x882)>(x883>x884));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x885 = INT8_MIN;
	static volatile int16_t x886 = -1;
	uint16_t x887 = UINT16_MAX;
	volatile uint64_t x888 = UINT64_MAX;
	static volatile int32_t t195 = -412;

    t195 = ((x885+x886)>(x887>x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x889 = -181;
	volatile int32_t x890 = -448772;
	static volatile int32_t t196 = 122;

    t196 = ((x889+x890)>(x891>x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x893 = INT32_MAX;
	int32_t t197 = -1171;

    t197 = ((x893+x894)>(x895>x896));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x901 = -1;
	volatile int64_t x904 = INT64_MIN;
	int32_t t198 = -9;

    t198 = ((x901+x902)>(x903>x904));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x905 = INT8_MIN;
	uint32_t x906 = UINT32_MAX;
	static int8_t x908 = 1;
	static volatile int32_t t199 = -68706466;

    t199 = ((x905+x906)>(x907>x908));

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

