
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

int32_t x1 = -1;
int8_t x3 = INT8_MAX;
static int8_t x8 = INT8_MIN;
int8_t x21 = INT8_MAX;
int32_t x22 = -85;
uint16_t x23 = 25299U;
volatile int32_t t5 = 52;
static volatile uint64_t t6 = 528918477034390909LLU;
uint32_t x34 = 357U;
static int64_t x36 = 851152582295804LL;
int16_t x38 = INT16_MIN;
volatile int16_t x49 = INT16_MIN;
int32_t x52 = -9639370;
volatile uint8_t x56 = 5U;
int32_t t12 = 18;
int64_t x57 = 23LL;
uint32_t x60 = UINT32_MAX;
static uint16_t x64 = UINT16_MAX;
static volatile uint32_t x68 = 118997725U;
int16_t x69 = INT16_MIN;
static uint64_t x73 = 8465915405408079839LLU;
int16_t x76 = INT16_MAX;
int64_t x87 = INT64_MIN;
static volatile int32_t t20 = -9775507;
static volatile int8_t x89 = INT8_MIN;
uint16_t x94 = 0U;
int64_t x95 = -4LL;
uint64_t x103 = UINT64_MAX;
uint64_t x111 = 24413256LLU;
static uint64_t t26 = UINT64_MAX;
volatile uint8_t x117 = 3U;
int64_t t28 = INT64_MAX;
int64_t x124 = -1LL;
static int32_t t31 = 6105766;
volatile int8_t x141 = INT8_MIN;
uint32_t x148 = UINT32_MAX;
volatile int64_t t36 = -3LL;
uint8_t x154 = UINT8_MAX;
static int8_t x155 = 4;
volatile uint64_t t37 = UINT64_MAX;
static volatile uint32_t x163 = 380924U;
uint16_t x165 = 64U;
int32_t x166 = INT32_MIN;
int8_t x168 = INT8_MIN;
int32_t x183 = 1;
volatile int64_t x186 = INT64_MAX;
int64_t x187 = -1LL;
uint64_t x194 = 555630472379LLU;
int32_t x195 = INT32_MIN;
uint64_t x198 = 258980542482326535LLU;
uint64_t x203 = 975847884777LLU;
uint16_t x211 = 6365U;
uint64_t x225 = 2593707975187LLU;
uint16_t x226 = UINT16_MAX;
int16_t x242 = -1;
volatile int32_t x243 = -1348642;
volatile int32_t t58 = 1884;
static int32_t x264 = 4544;
static volatile int64_t x266 = INT64_MIN;
int32_t x268 = 260934;
int16_t x270 = INT16_MIN;
int8_t x274 = INT8_MIN;
volatile int16_t x277 = INT16_MAX;
static volatile int32_t x281 = 0;
uint16_t x284 = 156U;
static int16_t x286 = -54;
uint8_t x287 = UINT8_MAX;
int8_t x294 = INT8_MAX;
uint32_t x297 = 12128U;
int8_t x304 = -60;
uint16_t x314 = 451U;
int32_t x318 = INT32_MIN;
int32_t x323 = INT32_MIN;
int16_t x324 = INT16_MAX;
int32_t x342 = -1;
int64_t x343 = -1LL;
int16_t x344 = INT16_MIN;
int64_t x354 = INT64_MIN;
volatile uint32_t t85 = 16634936U;
static int32_t x364 = INT32_MAX;
uint64_t x365 = 69202292159770481LLU;
int64_t x366 = INT64_MIN;
int32_t x367 = INT32_MAX;
static uint8_t x368 = 0U;
uint32_t x371 = 32258274U;
volatile uint32_t x381 = UINT32_MAX;
int64_t t92 = 15LL;
volatile int32_t x385 = 2643296;
int8_t x389 = -1;
static volatile int32_t t96 = 1;
uint32_t x401 = 17U;
static uint32_t t97 = UINT32_MAX;
volatile int32_t x408 = 103177878;
static uint32_t x409 = 41812656U;
volatile int8_t x410 = INT8_MIN;
volatile int64_t x412 = -1561220570201LL;
int16_t x413 = 157;
int16_t x414 = -138;
volatile int32_t t100 = -55628;
volatile int64_t t101 = 13676433264LL;
volatile uint64_t t102 = 971LLU;
static int16_t x425 = INT16_MIN;
static volatile uint16_t x431 = UINT16_MAX;
int32_t t109 = 2;
volatile uint32_t t111 = UINT32_MAX;
int32_t t112 = -51382;
static uint8_t x465 = 30U;
static volatile int64_t x471 = -238255697309LL;
int64_t x475 = INT64_MIN;
int8_t x476 = INT8_MIN;
int32_t x488 = INT32_MIN;
uint64_t t119 = UINT64_MAX;
uint16_t x506 = 921U;
int8_t x508 = INT8_MAX;
static uint32_t x510 = 6818757U;
static uint16_t x512 = UINT16_MAX;
uint64_t t123 = 46LLU;
int8_t x524 = -11;
static int16_t x525 = -613;
int32_t x527 = INT32_MAX;
int32_t x541 = INT32_MIN;
uint8_t x542 = UINT8_MAX;
uint16_t x554 = 1099U;
int8_t x562 = INT8_MIN;
uint32_t x565 = 4723U;
int16_t x582 = INT16_MAX;
int16_t x589 = INT16_MIN;
int64_t x590 = 74529267659451LL;
int16_t x601 = INT16_MIN;
uint64_t x602 = 4247LLU;
int32_t x605 = INT32_MAX;
uint8_t x617 = UINT8_MAX;
uint16_t x626 = UINT16_MAX;
uint8_t x629 = UINT8_MAX;
int8_t x630 = INT8_MIN;
uint16_t x633 = UINT16_MAX;
int32_t x648 = -1;
uint32_t x653 = 14913825U;
int8_t x655 = INT8_MIN;
int16_t x667 = INT16_MAX;
int32_t t158 = -2117257;
int64_t t159 = 637LL;
static int32_t x684 = 25237;
static volatile int32_t t162 = -8;
uint64_t x685 = UINT64_MAX;
uint8_t x686 = UINT8_MAX;
int8_t x688 = -1;
uint64_t x701 = 127699491547323999LLU;
int8_t x705 = INT8_MAX;
int64_t x708 = INT64_MIN;
static int8_t x712 = -1;
volatile int32_t t169 = -17385;
volatile int8_t x716 = INT8_MAX;
volatile int32_t t170 = -25673;
int32_t x718 = INT32_MIN;
uint32_t x720 = 16U;
static uint32_t x721 = 183666678U;
volatile uint64_t t174 = 8112901262663LLU;
volatile uint32_t x737 = 60U;
static uint64_t x740 = 12329829805LLU;
static volatile uint64_t x743 = 2266LLU;
static int64_t t178 = 3366412431245LL;
static volatile int64_t x751 = 181500566215701LL;
static uint64_t t179 = 500LLU;
int32_t x754 = -1;
static int16_t x755 = INT16_MIN;
static int16_t x762 = INT16_MIN;
volatile int16_t x765 = 759;
int8_t x767 = INT8_MAX;
static int64_t x769 = -6LL;
static volatile int8_t x774 = INT8_MIN;
int32_t x778 = INT32_MIN;
volatile int8_t x779 = INT8_MAX;
int16_t x783 = -1;
int8_t x787 = INT8_MIN;
uint16_t x791 = UINT16_MAX;
int8_t x792 = INT8_MIN;
int32_t x795 = INT32_MIN;
static uint32_t x801 = 96U;
uint32_t x802 = 32836492U;
uint16_t x806 = 15753U;
uint16_t x808 = 2415U;
uint8_t x813 = 67U;
volatile int32_t x814 = INT32_MIN;
static int64_t x824 = INT64_MIN;
int64_t t197 = 58467058931LL;
int64_t x829 = INT64_MIN;


void f0(void) {
    	int32_t x2 = -70;
	static int16_t x4 = 227;
	int32_t t0 = -19051352;

    t0 = ((x1+(x2>x3))|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = -14;

    t1 = ((x5+(x6>x7))|x8);

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 102;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MAX;
	static uint64_t x12 = 2193834LLU;
	volatile uint64_t t2 = 6766LLU;

    t2 = ((x9+(x10>x11))|x12);

    if (t2 != 2193903LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x14 = 441;
	int64_t x15 = 3514788972276651388LL;
	volatile int8_t x16 = 1;
	int64_t t3 = -8LL;

    t3 = ((x13+(x14>x15))|x16);

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int32_t x18 = -7182781;
	static uint8_t x19 = 10U;
	static int8_t x20 = -1;
	int32_t t4 = 749;

    t4 = ((x17+(x18>x19))|x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x24 = -4666;

    t5 = ((x21+(x22>x23))|x24);

    if (t5 != -4609) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = -1;
	uint64_t x28 = 22692LLU;

    t6 = ((x25+(x26>x27))|x28);

    if (t6 != 65535LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MAX;
	static uint32_t x30 = 7627U;
	uint8_t x31 = 3U;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -446335625;

    t7 = ((x29+(x30>x31))|x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	int32_t x35 = -1;
	int64_t t8 = 22130218772LL;

    t8 = ((x33+(x34>x35))|x36);

    if (t8 != 851152582344703LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 182;

    t9 = ((x37+(x38>x39))|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x42 = 272155736U;
	uint16_t x43 = 3517U;
	int32_t x44 = -3;
	volatile int32_t t10 = 825699967;

    t10 = ((x41+(x42>x43))|x44);

    if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MIN;
	static uint16_t x51 = UINT16_MAX;
	volatile int32_t t11 = 3;

    t11 = ((x49+(x50>x51))|x52);

    if (t11 != -5578) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	uint64_t x54 = 8LLU;
	int32_t x55 = INT32_MAX;

    t12 = ((x53+(x54>x55))|x56);

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x58 = 3U;
	static int64_t x59 = 7499626202257LL;
	int64_t t13 = 166511LL;

    t13 = ((x57+(x58>x59))|x60);

    if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	static volatile int64_t x62 = INT64_MAX;
	static int32_t x63 = 45773129;
	int32_t t14 = -686;

    t14 = ((x61+(x62>x63))|x64);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -5188023LL;
	uint8_t x66 = 15U;
	volatile uint16_t x67 = 26379U;
	int64_t t15 = 2168082265914482LL;

    t15 = ((x65+(x66>x67))|x68);

    if (t15 != -4729123LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x70 = 6LLU;
	int32_t x71 = -214726724;
	volatile uint64_t x72 = 20595930972799312LLU;
	static uint64_t t16 = 2472053LLU;

    t16 = ((x69+(x70>x71))|x72);

    if (t16 != 18446744073709535568LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = -63;
	uint8_t x75 = 80U;
	volatile uint64_t t17 = 3193837411030182LLU;

    t17 = ((x73+(x74>x75))|x76);

    if (t17 != 8465915405408108543LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 0LLU;
	static uint32_t x78 = 4230225U;
	static uint8_t x79 = 44U;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t18 = 9070764091LLU;

    t18 = ((x77+(x78>x79))|x80);

    if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -4167LL;
	static uint32_t x82 = UINT32_MAX;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = UINT16_MAX;
	int64_t t19 = -537LL;

    t19 = ((x81+(x82>x83))|x84);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 46U;
	int32_t x86 = INT32_MAX;
	static int16_t x88 = -1;

    t20 = ((x85+(x86>x87))|x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x90 = INT8_MIN;
	static int64_t x91 = -25338148LL;
	int8_t x92 = INT8_MAX;
	volatile int32_t t21 = -158;

    t21 = ((x89+(x90>x91))|x92);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x93 = UINT8_MAX;
	static volatile int16_t x96 = INT16_MIN;
	int32_t t22 = -31;

    t22 = ((x93+(x94>x95))|x96);

    if (t22 != -32512) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	int64_t t23 = -40LL;

    t23 = ((x97+(x98>x99))|x100);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MAX;
	uint16_t x104 = 44U;
	int32_t t24 = INT32_MAX;

    t24 = ((x101+(x102>x103))|x104);

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x105 = -3;
	uint16_t x106 = 1697U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MAX;
	volatile int32_t t25 = 131372726;

    t25 = ((x105+(x106>x107))|x108);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -1;
	volatile int8_t x110 = INT8_MAX;
	static uint64_t x112 = 16566982590977167LLU;

    t26 = ((x109+(x110>x111))|x112);

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = INT8_MIN;
	uint16_t x114 = 290U;
	int32_t x115 = 13118706;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t27 = 2435;

    t27 = ((x113+(x114>x115))|x116);

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MAX;

    t28 = ((x117+(x118>x119))|x120);

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -5766;
	volatile int64_t x122 = INT64_MAX;
	static int64_t x123 = INT64_MIN;
	int64_t t29 = -649455088969748467LL;

    t29 = ((x121+(x122>x123))|x124);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = -14;
	volatile int32_t x127 = -635;
	static uint8_t x128 = 1U;
	volatile int64_t t30 = -5618001LL;

    t30 = ((x125+(x126>x127))|x128);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = -7;
	int8_t x132 = 1;

    t31 = ((x129+(x130>x131))|x132);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 665U;
	volatile int32_t x134 = -387894;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 14U;
	uint32_t t32 = 38U;

    t32 = ((x133+(x134>x135))|x136);

    if (t32 != 671U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = 4303728;
	static int32_t x138 = 168;
	int16_t x139 = INT16_MAX;
	int32_t x140 = -1;
	volatile int32_t t33 = -2;

    t33 = ((x137+(x138>x139))|x140);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x142 = -39;
	int64_t x143 = INT64_MIN;
	volatile int64_t x144 = -1LL;
	int64_t t34 = -1514466784538LL;

    t34 = ((x141+(x142>x143))|x144);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = 4U;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	volatile uint32_t t35 = UINT32_MAX;

    t35 = ((x145+(x146>x147))|x148);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = 0;
	static int64_t x151 = 87108LL;
	int64_t x152 = 0LL;

    t36 = ((x149+(x150>x151))|x152);

    if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x153 = UINT8_MAX;
	volatile uint64_t x156 = UINT64_MAX;

    t37 = ((x153+(x154>x155))|x156);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = -153424LL;
	int32_t x158 = INT32_MAX;
	int32_t x159 = 1;
	int16_t x160 = -864;
	volatile int64_t t38 = -4429944107146620935LL;

    t38 = ((x157+(x158>x159))|x160);

    if (t38 != -847LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	static volatile int32_t x162 = INT32_MAX;
	static volatile uint8_t x164 = 77U;
	volatile int32_t t39 = 122040;

    t39 = ((x161+(x162>x163))|x164);

    if (t39 != 77) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x167 = INT64_MAX;
	static volatile int32_t t40 = 1137;

    t40 = ((x165+(x166>x167))|x168);

    if (t40 != -64) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MAX;
	volatile uint8_t x170 = 31U;
	volatile int8_t x171 = -1;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

    t41 = ((x169+(x170>x171))|x172);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	volatile int32_t x174 = INT32_MIN;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = 106145179;
	volatile int32_t t42 = 500592;

    t42 = ((x173+(x174>x175))|x176);

    if (t42 != -2041338469) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	int64_t x178 = -1157523684578LL;
	int16_t x179 = -35;
	uint8_t x180 = 1U;
	volatile int32_t t43 = -646;

    t43 = ((x177+(x178>x179))|x180);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	uint8_t x182 = 0U;
	volatile uint32_t x184 = 75348U;
	uint32_t t44 = 105529U;

    t44 = ((x181+(x182>x183))|x184);

    if (t44 != 75519U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 4;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t45 = 82;

    t45 = ((x185+(x186>x187))|x188);

    if (t45 != -32763) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = -1;
	volatile int16_t x190 = -1;
	uint8_t x191 = 5U;
	int32_t x192 = INT32_MIN;
	int32_t t46 = -52;

    t46 = ((x189+(x190>x191))|x192);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t47 = -2;

    t47 = ((x193+(x194>x195))|x196);

    if (t47 != -2147450881) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x197 = 23137620U;
	static volatile int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MAX;
	volatile int64_t t48 = INT64_MAX;

    t48 = ((x197+(x198>x199))|x200);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -4;
	int32_t x202 = INT32_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t49 = 167618800058579LL;

    t49 = ((x201+(x202>x203))|x204);

    if (t49 != -4LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = 1431;
	static volatile int64_t x210 = 9604375347059LL;
	int32_t x212 = 969854;
	static volatile int32_t t50 = 50935109;

    t50 = ((x209+(x210>x211))|x212);

    if (t50 != 970238) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x213 = INT32_MIN;
	int64_t x214 = INT64_MAX;
	static volatile uint32_t x215 = 22625049U;
	volatile uint16_t x216 = 3U;
	volatile int32_t t51 = -460152;

    t51 = ((x213+(x214>x215))|x216);

    if (t51 != -2147483645) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -1;
	int32_t x218 = -16971170;
	int64_t x219 = INT64_MAX;
	uint64_t x220 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

    t52 = ((x217+(x218>x219))|x220);

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x221 = -1;
	volatile uint32_t x222 = 21793096U;
	volatile uint16_t x223 = 1964U;
	uint8_t x224 = 7U;
	int32_t t53 = 156509;

    t53 = ((x221+(x222>x223))|x224);

    if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x227 = -48;
	int32_t x228 = INT32_MAX;
	uint64_t t54 = 8LLU;

    t54 = ((x225+(x226>x227))|x228);

    if (t54 != 2594160246783LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = 7LLU;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 3229LLU;
	uint64_t t55 = 1LLU;

    t55 = ((x229+(x230>x231))|x232);

    if (t55 != 3327LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -1;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 22U;
	int16_t x236 = -1;
	volatile int32_t t56 = 800798119;

    t56 = ((x233+(x234>x235))|x236);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -1LL;
	volatile int8_t x238 = -1;
	int16_t x239 = -1;
	uint16_t x240 = 2140U;
	int64_t t57 = 10LL;

    t57 = ((x237+(x238>x239))|x240);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -1;
	volatile int16_t x244 = -2;

    t58 = ((x241+(x242>x243))|x244);

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -4;
	static int32_t x248 = INT32_MIN;
	int32_t t59 = 5046264;

    t59 = ((x245+(x246>x247))|x248);

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = -1956;
	int16_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	volatile int64_t x252 = -1440507LL;
	volatile int64_t t60 = -1693LL;

    t60 = ((x249+(x250>x251))|x252);

    if (t60 != -675LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 2919024U;
	static volatile int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	static int64_t t61 = 523669403104277LL;

    t61 = ((x253+(x254>x255))|x256);

    if (t61 != -9223372036851856784LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 27124476U;
	static int64_t x258 = -23770727LL;
	static volatile int16_t x259 = 1;
	int16_t x260 = 11024;
	uint32_t t62 = 77234U;

    t62 = ((x257+(x258>x259))|x260);

    if (t62 != 27126780U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x261 = UINT16_MAX;
	static int8_t x262 = INT8_MIN;
	uint32_t x263 = 34958U;
	static int32_t t63 = -16892059;

    t63 = ((x261+(x262>x263))|x264);

    if (t63 != 70080) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	uint32_t x267 = 3U;
	int64_t t64 = 896562126LL;

    t64 = ((x265+(x266>x267))|x268);

    if (t64 != -9223372036854514874LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x271 = 15;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t65 = INT32_MAX;

    t65 = ((x269+(x270>x271))|x272);

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x273 = INT16_MAX;
	int16_t x275 = -1;
	volatile uint64_t x276 = 8659961457LLU;
	static uint64_t t66 = 1794027116LLU;

    t66 = ((x273+(x274>x275))|x276);

    if (t66 != 8659992575LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x278 = INT8_MIN;
	static uint16_t x279 = 7547U;
	uint64_t x280 = 1LLU;
	uint64_t t67 = 9799316240902260LLU;

    t67 = ((x277+(x278>x279))|x280);

    if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x282 = 0U;
	volatile int8_t x283 = -1;
	int32_t t68 = -1016496667;

    t68 = ((x281+(x282>x283))|x284);

    if (t68 != 157) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t69 = 1;

    t69 = ((x285+(x286>x287))|x288);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	uint32_t x291 = UINT32_MAX;
	static int32_t x292 = 2;
	volatile int32_t t70 = 17;

    t70 = ((x289+(x290>x291))|x292);

    if (t70 != -126) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = 0;
	uint32_t x295 = 497U;
	int8_t x296 = -1;
	int32_t t71 = -7382;

    t71 = ((x293+(x294>x295))|x296);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x298 = INT32_MIN;
	static uint8_t x299 = 1U;
	uint8_t x300 = UINT8_MAX;
	uint32_t t72 = 426848U;

    t72 = ((x297+(x298>x299))|x300);

    if (t72 != 12287U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MAX;
	uint64_t x302 = 1706814647LLU;
	int32_t x303 = -611278;
	volatile int32_t t73 = 22407;

    t73 = ((x301+(x302>x303))|x304);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = INT32_MIN;
	volatile int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	static uint8_t x308 = 7U;
	volatile int32_t t74 = 1;

    t74 = ((x305+(x306>x307))|x308);

    if (t74 != -2147483641) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x309 = 68;
	volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = -1LL;
	volatile uint32_t x312 = 1793048U;
	uint32_t t75 = 54289U;

    t75 = ((x309+(x310>x311))|x312);

    if (t75 != 1793117U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x315 = INT32_MIN;
	static volatile int64_t x316 = INT64_MIN;
	static volatile int64_t t76 = -1942662267657266LL;

    t76 = ((x313+(x314>x315))|x316);

    if (t76 != -2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x317 = -1LL;
	volatile uint32_t x319 = 28U;
	int16_t x320 = -1;
	int64_t t77 = 2382371102LL;

    t77 = ((x317+(x318>x319))|x320);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 1U;
	volatile uint32_t t78 = 9U;

    t78 = ((x321+(x322>x323))|x324);

    if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 28U;
	volatile uint16_t x327 = 207U;
	int8_t x328 = INT8_MIN;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = ((x325+(x326>x327))|x328);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t80 = -27LL;

    t80 = ((x333+(x334>x335))|x336);

    if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = INT64_MAX;
	volatile int8_t x338 = -1;
	int32_t x339 = 32961733;
	uint16_t x340 = 71U;
	volatile int64_t t81 = INT64_MAX;

    t81 = ((x337+(x338>x339))|x340);

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = 4;
	volatile int32_t t82 = 24;

    t82 = ((x341+(x342>x343))|x344);

    if (t82 != -32764) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = 56U;
	volatile int64_t x346 = INT64_MIN;
	static int16_t x347 = -1;
	volatile uint8_t x348 = UINT8_MAX;
	static int32_t t83 = 2695;

    t83 = ((x345+(x346>x347))|x348);

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MIN;
	uint32_t x350 = 703427U;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t84 = -43;

    t84 = ((x349+(x350>x351))|x352);

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MIN;
	int32_t x355 = -46;
	volatile uint32_t x356 = 41025U;

    t85 = ((x353+(x354>x355))|x356);

    if (t85 != 4294942785U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x357 = 8U;
	int32_t x358 = 205625908;
	uint16_t x359 = 0U;
	volatile int64_t x360 = 20880133681555LL;
	int64_t t86 = -28995101LL;

    t86 = ((x357+(x358>x359))|x360);

    if (t86 != 20880133681563LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x361 = INT32_MIN;
	int8_t x362 = 37;
	static int32_t x363 = -24889;
	static int32_t t87 = 2036;

    t87 = ((x361+(x362>x363))|x364);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t t88 = 270692122722422LLU;

    t88 = ((x365+(x366>x367))|x368);

    if (t88 != 69202292159770481LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x369 = INT16_MIN;
	static int32_t x370 = INT32_MAX;
	static uint64_t x372 = 22771896134LLU;
	volatile uint64_t t89 = 1515LLU;

    t89 = ((x369+(x370>x371))|x372);

    if (t89 != 18446744073709522759LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x373 = -2;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 254U;
	volatile int8_t x376 = -1;
	volatile int32_t t90 = -9115;

    t90 = ((x373+(x374>x375))|x376);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x377 = 34696264779543333LL;
	static int8_t x378 = 43;
	int8_t x379 = 30;
	uint16_t x380 = 27571U;
	int64_t t91 = -598198416492851LL;

    t91 = ((x377+(x378>x379))|x380);

    if (t91 != 34696264779561911LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x382 = INT16_MIN;
	int64_t x383 = -2031887LL;
	volatile int64_t x384 = -1LL;

    t92 = ((x381+(x382>x383))|x384);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x386 = -1;
	uint16_t x387 = 5894U;
	int8_t x388 = 0;
	volatile int32_t t93 = -8992532;

    t93 = ((x385+(x386>x387))|x388);

    if (t93 != 2643296) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x390 = INT64_MAX;
	static int32_t x391 = -8784344;
	static volatile uint8_t x392 = UINT8_MAX;
	int32_t t94 = 206571375;

    t94 = ((x389+(x390>x391))|x392);

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x393 = UINT16_MAX;
	static int32_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -123029610LL;
	volatile int64_t t95 = 1397600806292LL;

    t95 = ((x393+(x394>x395))|x396);

    if (t95 != -123011073LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x397 = 1971558;
	volatile int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;

    t96 = ((x397+(x398>x399))|x400);

    if (t96 != -26) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x402 = -1;
	int8_t x403 = 1;
	int8_t x404 = -1;

    t97 = ((x401+(x402>x403))|x404);

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 83081092;
	uint16_t x406 = 4U;
	static int32_t x407 = -3698295;
	volatile int32_t t98 = -44643;

    t98 = ((x405+(x406>x407))|x408);

    if (t98 != 116916119) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x411 = INT16_MIN;
	static volatile int64_t t99 = -57444332232LL;

    t99 = ((x409+(x410>x411))|x412);

    if (t99 != -1561178758217LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x415 = -22;
	uint16_t x416 = 1810U;

    t100 = ((x413+(x414>x415))|x416);

    if (t100 != 1951) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = -1;
	int64_t x418 = -51LL;
	uint32_t x419 = 130964U;
	int64_t x420 = -1LL;

    t101 = ((x417+(x418>x419))|x420);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	static int16_t x423 = INT16_MIN;
	static uint64_t x424 = 1042580200LLU;

    t102 = ((x421+(x422>x423))|x424);

    if (t102 != 1042580200LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x426 = -1596565LL;
	volatile uint32_t x427 = UINT32_MAX;
	uint64_t x428 = 13035299770437914LLU;
	uint64_t t103 = 25988180LLU;

    t103 = ((x425+(x426>x427))|x428);

    if (t103 != 18446744073709523226LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = INT16_MIN;
	volatile int16_t x430 = 1;
	uint8_t x432 = 0U;
	int32_t t104 = -2;

    t104 = ((x429+(x430>x431))|x432);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x433 = 12591U;
	volatile uint8_t x434 = 32U;
	static int16_t x435 = -98;
	static volatile int8_t x436 = -1;
	int32_t t105 = -109436;

    t105 = ((x433+(x434>x435))|x436);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x437 = -1;
	volatile int64_t x438 = INT64_MIN;
	static int8_t x439 = INT8_MIN;
	static volatile int32_t x440 = INT32_MIN;
	int32_t t106 = -864300164;

    t106 = ((x437+(x438>x439))|x440);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x441 = -269365263LL;
	static int64_t x442 = INT64_MIN;
	int16_t x443 = 547;
	int32_t x444 = -19318555;
	volatile int64_t t107 = 26757LL;

    t107 = ((x441+(x442>x443))|x444);

    if (t107 != -393227LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x445 = -1;
	int64_t x446 = INT64_MIN;
	int32_t x447 = 2538;
	int8_t x448 = INT8_MIN;
	int32_t t108 = 177607;

    t108 = ((x445+(x446>x447))|x448);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -55;
	static int16_t x450 = -160;
	volatile int16_t x451 = INT16_MIN;
	uint16_t x452 = 30116U;

    t109 = ((x449+(x450>x451))|x452);

    if (t109 != -18) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = INT64_MIN;
	volatile uint64_t x454 = 441753998834239936LLU;
	uint32_t x455 = 1249100U;
	static int32_t x456 = INT32_MIN;
	static volatile int64_t t110 = -2326007431LL;

    t110 = ((x453+(x454>x455))|x456);

    if (t110 != -2147483647LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = INT32_MIN;
	uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 46U;
	volatile uint32_t x460 = UINT32_MAX;

    t111 = ((x457+(x458>x459))|x460);

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = -9;
	int32_t x463 = -1;
	int8_t x464 = 1;

    t112 = ((x461+(x462>x463))|x464);

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x466 = INT64_MAX;
	static int8_t x467 = -2;
	uint8_t x468 = 6U;
	volatile int32_t t113 = 1979606;

    t113 = ((x465+(x466>x467))|x468);

    if (t113 != 31) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile uint8_t x470 = UINT8_MAX;
	uint64_t x472 = 86950559LLU;
	volatile uint64_t t114 = 199LLU;

    t114 = ((x469+(x470>x471))|x472);

    if (t114 != 86950559LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x473 = 100U;
	int8_t x474 = INT8_MIN;
	static volatile uint32_t t115 = 3U;

    t115 = ((x473+(x474>x475))|x476);

    if (t115 != 4294967269U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x481 = 15301222766LLU;
	static int32_t x482 = INT32_MAX;
	volatile int64_t x483 = -1LL;
	volatile uint16_t x484 = 123U;
	volatile uint64_t t116 = 15175331431643488LLU;

    t116 = ((x481+(x482>x483))|x484);

    if (t116 != 15301222783LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x485 = INT64_MIN;
	int64_t x486 = INT64_MIN;
	int64_t x487 = INT64_MIN;
	volatile int64_t t117 = -3201LL;

    t117 = ((x485+(x486>x487))|x488);

    if (t117 != -2147483648LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = -12;
	uint8_t x490 = 8U;
	volatile uint8_t x491 = 3U;
	int64_t x492 = 1323725334LL;
	int64_t t118 = -1890990469LL;

    t118 = ((x489+(x490>x491))|x492);

    if (t118 != -9LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x493 = 27798458480LLU;
	int16_t x494 = -1;
	uint32_t x495 = UINT32_MAX;
	int16_t x496 = -1;

    t119 = ((x493+(x494>x495))|x496);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x501 = -29;
	int32_t x502 = -167984;
	volatile int32_t x503 = -1;
	int32_t x504 = INT32_MIN;
	int32_t t120 = 0;

    t120 = ((x501+(x502>x503))|x504);

    if (t120 != -29) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x505 = 0U;
	int32_t x507 = INT32_MIN;
	static int32_t t121 = 5;

    t121 = ((x505+(x506>x507))|x508);

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x509 = 10524U;
	int64_t x511 = 199LL;
	static int32_t t122 = -1019;

    t122 = ((x509+(x510>x511))|x512);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x513 = 66434117777LLU;
	uint32_t x514 = 7038U;
	uint8_t x515 = 52U;
	uint8_t x516 = 15U;

    t123 = ((x513+(x514>x515))|x516);

    if (t123 != 66434117791LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x517 = INT16_MAX;
	uint32_t x518 = UINT32_MAX;
	int8_t x519 = INT8_MAX;
	static int32_t x520 = -66005906;
	volatile int32_t t124 = -6882943;

    t124 = ((x517+(x518>x519))|x520);

    if (t124 != -66005906) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x521 = INT16_MIN;
	volatile int16_t x522 = INT16_MAX;
	int32_t x523 = 1;
	volatile int32_t t125 = -4517671;

    t125 = ((x521+(x522>x523))|x524);

    if (t125 != -11) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x526 = 43128LL;
	int16_t x528 = INT16_MIN;
	int32_t t126 = 1;

    t126 = ((x525+(x526>x527))|x528);

    if (t126 != -613) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x529 = 333U;
	uint64_t x530 = 1LLU;
	int16_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = ((x529+(x530>x531))|x532);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x537 = INT8_MIN;
	uint64_t x538 = 7LLU;
	int16_t x539 = INT16_MIN;
	uint32_t x540 = UINT32_MAX;
	static volatile uint32_t t128 = UINT32_MAX;

    t128 = ((x537+(x538>x539))|x540);

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x543 = 274417;
	uint64_t x544 = 20276972415221LLU;
	uint64_t t129 = 26LLU;

    t129 = ((x541+(x542>x543))|x544);

    if (t129 != 18446744071993878773LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x545 = INT32_MIN;
	volatile int64_t x546 = 411502038LL;
	int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MIN;
	volatile int32_t t130 = 0;

    t130 = ((x545+(x546>x547))|x548);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x549 = -310448184387LL;
	volatile uint32_t x550 = 6U;
	int32_t x551 = INT32_MIN;
	volatile int16_t x552 = INT16_MAX;
	int64_t t131 = 3900211572LL;

    t131 = ((x549+(x550>x551))|x552);

    if (t131 != -310448160769LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x553 = -1;
	static int8_t x555 = -1;
	volatile int16_t x556 = 1;
	static volatile int32_t t132 = -249;

    t132 = ((x553+(x554>x555))|x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x557 = 0;
	static uint32_t x558 = UINT32_MAX;
	int8_t x559 = INT8_MAX;
	int32_t x560 = INT32_MIN;
	static volatile int32_t t133 = 252;

    t133 = ((x557+(x558>x559))|x560);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x561 = UINT8_MAX;
	uint8_t x563 = 3U;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t134 = -63;

    t134 = ((x561+(x562>x563))|x564);

    if (t134 != -2147483393) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x566 = INT8_MIN;
	int32_t x567 = INT32_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile uint32_t t135 = 14488U;

    t135 = ((x565+(x566>x567))|x568);

    if (t135 != 4863U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x569 = 0;
	uint16_t x570 = 12987U;
	int64_t x571 = -29487LL;
	int8_t x572 = INT8_MIN;
	volatile int32_t t136 = -59906;

    t136 = ((x569+(x570>x571))|x572);

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x577 = 11U;
	uint16_t x578 = UINT16_MAX;
	int64_t x579 = -47406477861478LL;
	volatile uint8_t x580 = 1U;
	volatile int32_t t137 = 2041;

    t137 = ((x577+(x578>x579))|x580);

    if (t137 != 13) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = -2867;
	uint8_t x583 = 0U;
	static int8_t x584 = INT8_MIN;
	volatile int32_t t138 = -162;

    t138 = ((x581+(x582>x583))|x584);

    if (t138 != -50) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = 31;
	int32_t x587 = -609754;
	volatile uint8_t x588 = 112U;
	static volatile int32_t t139 = 5;

    t139 = ((x585+(x586>x587))|x588);

    if (t139 != 368) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x591 = -127073;
	volatile int32_t x592 = -103894;
	int32_t t140 = -36170675;

    t140 = ((x589+(x590>x591))|x592);

    if (t140 != -5589) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x593 = UINT8_MAX;
	int32_t x594 = 567997;
	uint64_t x595 = 35972023LLU;
	volatile uint16_t x596 = UINT16_MAX;
	volatile int32_t t141 = -171640960;

    t141 = ((x593+(x594>x595))|x596);

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x597 = 20U;
	uint64_t x598 = 30459511LLU;
	int32_t x599 = -369664900;
	int16_t x600 = -1;
	static volatile int32_t t142 = -3249;

    t142 = ((x597+(x598>x599))|x600);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MAX;
	static int32_t t143 = -3765;

    t143 = ((x601+(x602>x603))|x604);

    if (t143 != -32641) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x606 = UINT8_MAX;
	volatile uint16_t x607 = 18456U;
	uint8_t x608 = 1U;
	static int32_t t144 = INT32_MAX;

    t144 = ((x605+(x606>x607))|x608);

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x609 = 8;
	uint16_t x610 = 4348U;
	volatile int32_t x611 = INT32_MAX;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t145 = -8;

    t145 = ((x609+(x610>x611))|x612);

    if (t145 != -120) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x613 = 2163208424208839089LLU;
	static int8_t x614 = -61;
	static int16_t x615 = INT16_MIN;
	uint8_t x616 = 125U;
	uint64_t t146 = 6950189962233LLU;

    t146 = ((x613+(x614>x615))|x616);

    if (t146 != 2163208424208839167LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x618 = 6U;
	uint8_t x619 = 0U;
	uint16_t x620 = 164U;
	int32_t t147 = -818498;

    t147 = ((x617+(x618>x619))|x620);

    if (t147 != 420) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x625 = INT8_MIN;
	static int8_t x627 = 1;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t148 = 816;

    t148 = ((x625+(x626>x627))|x628);

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x631 = INT32_MIN;
	static int32_t x632 = -57;
	volatile int32_t t149 = -23;

    t149 = ((x629+(x630>x631))|x632);

    if (t149 != -57) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x634 = -15510;
	int16_t x635 = INT16_MAX;
	int16_t x636 = INT16_MAX;
	volatile int32_t t150 = 23;

    t150 = ((x633+(x634>x635))|x636);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x637 = INT32_MIN;
	int64_t x638 = 274774313578LL;
	int64_t x639 = INT64_MIN;
	int64_t x640 = -5199052229671859LL;
	int64_t t151 = -76103LL;

    t151 = ((x637+(x638>x639))|x640);

    if (t151 != -760314803LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x641 = INT64_MAX;
	uint16_t x642 = 66U;
	int8_t x643 = INT8_MAX;
	int16_t x644 = -42;
	int64_t t152 = -162LL;

    t152 = ((x641+(x642>x643))|x644);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x645 = 30U;
	volatile uint16_t x646 = UINT16_MAX;
	int8_t x647 = -1;
	int32_t t153 = -6009352;

    t153 = ((x645+(x646>x647))|x648);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x649 = 10LL;
	uint32_t x650 = 3614U;
	volatile int64_t x651 = 2477126723965220993LL;
	volatile int8_t x652 = -1;
	static int64_t t154 = -394757994LL;

    t154 = ((x649+(x650>x651))|x652);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x654 = INT16_MIN;
	int8_t x656 = INT8_MIN;
	static uint32_t t155 = 34851402U;

    t155 = ((x653+(x654>x655))|x656);

    if (t155 != 4294967201U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x657 = 13U;
	int64_t x658 = INT64_MIN;
	uint32_t x659 = UINT32_MAX;
	volatile uint64_t x660 = 8961LLU;
	uint64_t t156 = 24945231LLU;

    t156 = ((x657+(x658>x659))|x660);

    if (t156 != 8973LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	volatile uint16_t x662 = 23U;
	uint16_t x663 = 1198U;
	volatile int8_t x664 = -1;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = ((x661+(x662>x663))|x664);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x665 = 82U;
	int8_t x666 = INT8_MIN;
	int8_t x668 = INT8_MAX;

    t158 = ((x665+(x666>x667))|x668);

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x669 = 57500061LL;
	int32_t x670 = -891846;
	int8_t x671 = 0;
	int8_t x672 = INT8_MIN;

    t159 = ((x669+(x670>x671))|x672);

    if (t159 != -99LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x673 = UINT64_MAX;
	uint64_t x674 = UINT64_MAX;
	uint8_t x675 = 101U;
	uint8_t x676 = 15U;
	volatile uint64_t t160 = 8276943LLU;

    t160 = ((x673+(x674>x675))|x676);

    if (t160 != 15LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x677 = INT32_MIN;
	static int32_t x678 = INT32_MAX;
	uint16_t x679 = UINT16_MAX;
	int16_t x680 = -1;
	volatile int32_t t161 = -3824;

    t161 = ((x677+(x678>x679))|x680);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x681 = 0;
	uint64_t x682 = 511589051161LLU;
	int16_t x683 = INT16_MIN;

    t162 = ((x681+(x682>x683))|x684);

    if (t162 != 25237) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x687 = UINT8_MAX;
	uint64_t t163 = UINT64_MAX;

    t163 = ((x685+(x686>x687))|x688);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x689 = UINT8_MAX;
	int64_t x690 = -108901LL;
	int64_t x691 = -1LL;
	int32_t x692 = 869405135;
	int32_t t164 = 414;

    t164 = ((x689+(x690>x691))|x692);

    if (t164 != 869405183) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x693 = INT32_MAX;
	volatile int8_t x694 = INT8_MIN;
	int64_t x695 = -1LL;
	int8_t x696 = INT8_MIN;
	int32_t t165 = 63850421;

    t165 = ((x693+(x694>x695))|x696);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = -1;
	static int32_t x698 = INT32_MIN;
	volatile int8_t x699 = INT8_MIN;
	int32_t x700 = INT32_MIN;
	int32_t t166 = 1877;

    t166 = ((x697+(x698>x699))|x700);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x702 = INT64_MAX;
	uint32_t x703 = 669U;
	uint32_t x704 = 64440U;
	volatile uint64_t t167 = 1324497LLU;

    t167 = ((x701+(x702>x703))|x704);

    if (t167 != 127699491547381752LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x706 = 13985361U;
	uint16_t x707 = 19401U;
	volatile int64_t t168 = -257629837680023355LL;

    t168 = ((x705+(x706>x707))|x708);

    if (t168 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x709 = 7U;
	static volatile uint8_t x710 = 0U;
	static int64_t x711 = INT64_MIN;

    t169 = ((x709+(x710>x711))|x712);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x713 = -7135;
	int32_t x714 = 19;
	volatile int64_t x715 = INT64_MIN;

    t170 = ((x713+(x714>x715))|x716);

    if (t170 != -7041) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x717 = 3;
	int64_t x719 = -1LL;
	uint32_t t171 = 19494U;

    t171 = ((x717+(x718>x719))|x720);

    if (t171 != 19U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x722 = UINT16_MAX;
	int64_t x723 = -1LL;
	int8_t x724 = -1;
	uint32_t t172 = UINT32_MAX;

    t172 = ((x721+(x722>x723))|x724);

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x725 = 124U;
	int16_t x726 = -1;
	uint8_t x727 = 41U;
	volatile uint16_t x728 = 3465U;
	volatile int32_t t173 = 205067;

    t173 = ((x725+(x726>x727))|x728);

    if (t173 != 3581) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x729 = 143287LLU;
	int32_t x730 = INT32_MAX;
	int8_t x731 = INT8_MAX;
	uint16_t x732 = 0U;

    t174 = ((x729+(x730>x731))|x732);

    if (t174 != 143288LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x733 = 89;
	uint16_t x734 = 102U;
	static int32_t x735 = -1;
	static volatile uint8_t x736 = 84U;
	volatile int32_t t175 = -22897015;

    t175 = ((x733+(x734>x735))|x736);

    if (t175 != 94) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x738 = UINT64_MAX;
	uint16_t x739 = 72U;
	volatile uint64_t t176 = 185554333076614LLU;

    t176 = ((x737+(x738>x739))|x740);

    if (t176 != 12329829821LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	int8_t x744 = 28;
	int32_t t177 = 465;

    t177 = ((x741+(x742>x743))|x744);

    if (t177 != 28) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = -1;
	int32_t x747 = -140087709;
	volatile int16_t x748 = -1;

    t178 = ((x745+(x746>x747))|x748);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = INT64_MIN;
	volatile int8_t x750 = INT8_MIN;
	volatile uint64_t x752 = 259942LLU;

    t179 = ((x749+(x750>x751))|x752);

    if (t179 != 9223372036855035750LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x753 = UINT32_MAX;
	int8_t x756 = -1;
	uint32_t t180 = UINT32_MAX;

    t180 = ((x753+(x754>x755))|x756);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x757 = 1U;
	int64_t x758 = INT64_MAX;
	int16_t x759 = 1896;
	volatile uint16_t x760 = UINT16_MAX;
	uint32_t t181 = 44607927U;

    t181 = ((x757+(x758>x759))|x760);

    if (t181 != 65535U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = UINT32_MAX;
	static uint32_t x763 = UINT32_MAX;
	static int32_t x764 = -52679;
	uint32_t t182 = UINT32_MAX;

    t182 = ((x761+(x762>x763))|x764);

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x766 = UINT8_MAX;
	uint8_t x768 = 3U;
	static volatile int32_t t183 = 11;

    t183 = ((x765+(x766>x767))|x768);

    if (t183 != 763) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x770 = 0;
	int8_t x771 = INT8_MIN;
	volatile uint16_t x772 = 211U;
	int64_t t184 = -1LL;

    t184 = ((x769+(x770>x771))|x772);

    if (t184 != -5LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x773 = INT32_MIN;
	static int8_t x775 = 10;
	uint32_t x776 = 30048U;
	static volatile uint32_t t185 = 624774U;

    t185 = ((x773+(x774>x775))|x776);

    if (t185 != 2147513696U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x777 = INT8_MIN;
	int16_t x780 = 23;
	volatile int32_t t186 = -47114;

    t186 = ((x777+(x778>x779))|x780);

    if (t186 != -105) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x781 = INT32_MAX;
	volatile int32_t x782 = INT32_MIN;
	int8_t x784 = 6;
	volatile int32_t t187 = INT32_MAX;

    t187 = ((x781+(x782>x783))|x784);

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x785 = INT8_MIN;
	static int32_t x786 = -1;
	int16_t x788 = -1;
	int32_t t188 = -18449443;

    t188 = ((x785+(x786>x787))|x788);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x789 = 611U;
	int16_t x790 = INT16_MIN;
	int32_t t189 = -251921;

    t189 = ((x789+(x790>x791))|x792);

    if (t189 != -29) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x793 = 1U;
	uint16_t x794 = 0U;
	static int64_t x796 = INT64_MIN;
	volatile int64_t t190 = 251811030571700LL;

    t190 = ((x793+(x794>x795))|x796);

    if (t190 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x797 = -1;
	static int64_t x798 = INT64_MAX;
	uint16_t x799 = 3U;
	int64_t x800 = 9619LL;
	int64_t t191 = -3LL;

    t191 = ((x797+(x798>x799))|x800);

    if (t191 != 9619LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x803 = INT32_MAX;
	int64_t x804 = 196LL;
	int64_t t192 = 232807LL;

    t192 = ((x801+(x802>x803))|x804);

    if (t192 != 228LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = INT16_MIN;
	volatile int64_t x807 = -1LL;
	static volatile int32_t t193 = 195996;

    t193 = ((x805+(x806>x807))|x808);

    if (t193 != -30353) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x809 = UINT64_MAX;
	int64_t x810 = -23LL;
	static int16_t x811 = -1;
	static uint16_t x812 = 14366U;
	uint64_t t194 = UINT64_MAX;

    t194 = ((x809+(x810>x811))|x812);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x815 = INT32_MAX;
	int8_t x816 = 11;
	volatile int32_t t195 = -1;

    t195 = ((x813+(x814>x815))|x816);

    if (t195 != 75) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = -1;
	static volatile int16_t x818 = INT16_MIN;
	static int8_t x819 = INT8_MIN;
	uint32_t x820 = 35U;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = ((x817+(x818>x819))|x820);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x821 = 3734126113666279538LL;
	uint64_t x822 = 15440966716LLU;
	volatile uint64_t x823 = 1498LLU;

    t197 = ((x821+(x822>x823))|x824);

    if (t197 != -5489245923188496269LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x825 = -2829;
	int32_t x826 = 2731;
	int8_t x827 = -1;
	uint32_t x828 = UINT32_MAX;
	uint32_t t198 = UINT32_MAX;

    t198 = ((x825+(x826>x827))|x828);

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x830 = 1U;
	uint32_t x831 = 44810057U;
	static volatile int64_t x832 = INT64_MIN;
	int64_t t199 = INT64_MIN;

    t199 = ((x829+(x830>x831))|x832);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

