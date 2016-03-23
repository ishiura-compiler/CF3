
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

static volatile int8_t x6 = INT8_MIN;
int32_t x12 = -1;
uint16_t x15 = 0U;
int32_t t3 = 15;
static int64_t x18 = 14771366386LL;
int8_t x19 = -4;
volatile uint32_t t4 = 147507U;
volatile uint64_t x22 = 75LLU;
uint8_t x35 = UINT8_MAX;
static volatile int16_t x38 = -1;
uint64_t x44 = UINT64_MAX;
static int32_t t10 = 1;
volatile int64_t x45 = -111017032LL;
static int32_t x49 = -10;
volatile uint16_t x50 = 8U;
int8_t x51 = 1;
volatile int64_t t13 = 4392211525307LL;
uint32_t t15 = 670U;
uint64_t x68 = UINT64_MAX;
static uint32_t x70 = UINT32_MAX;
volatile int32_t t17 = -193;
int16_t x73 = INT16_MIN;
static int32_t x75 = 75969;
volatile int32_t t18 = 2458;
static int32_t x90 = -851;
static volatile uint32_t t22 = 2U;
static int16_t x96 = INT16_MIN;
int8_t x101 = -3;
static volatile int16_t x105 = -1;
static volatile int8_t x106 = INT8_MIN;
uint32_t x117 = UINT32_MAX;
int8_t x124 = -2;
int32_t x127 = -1;
int16_t x134 = INT16_MAX;
int32_t x136 = INT32_MIN;
volatile int32_t t33 = 1012290204;
uint16_t x143 = UINT16_MAX;
uint32_t x144 = 199100U;
int64_t x150 = 23871344582259691LL;
static int64_t x151 = 25200LL;
static int32_t t38 = -52525;
int64_t x157 = INT64_MIN;
static volatile int8_t x160 = INT8_MAX;
int16_t x163 = INT16_MIN;
uint16_t x165 = UINT16_MAX;
static volatile uint64_t x167 = UINT64_MAX;
int8_t x170 = -1;
static volatile uint16_t x172 = UINT16_MAX;
volatile int32_t t43 = -735;
volatile int32_t t44 = -395383014;
int8_t x184 = -3;
uint32_t x188 = 11U;
static int64_t x191 = INT64_MIN;
static int64_t x198 = INT64_MIN;
int32_t t49 = 5;
uint64_t t50 = 12337060LLU;
int32_t x207 = INT32_MIN;
int32_t x208 = INT32_MIN;
volatile uint16_t x211 = UINT16_MAX;
uint8_t x214 = 1U;
uint8_t x215 = UINT8_MAX;
static uint64_t x218 = 1982195219746763LLU;
uint8_t x219 = UINT8_MAX;
int64_t x222 = -1LL;
static uint8_t x226 = 41U;
static volatile uint8_t x244 = 99U;
int64_t x246 = 6160440612LL;
int16_t x253 = INT16_MAX;
int32_t x254 = INT32_MIN;
int8_t x256 = -1;
int32_t t63 = -61;
int16_t x261 = INT16_MAX;
volatile int64_t x263 = -466792547851LL;
volatile int64_t x275 = -1LL;
volatile int32_t t69 = -12;
uint32_t x283 = UINT32_MAX;
volatile int32_t t70 = -276;
int64_t x285 = INT64_MIN;
int8_t x293 = INT8_MIN;
int8_t x297 = INT8_MIN;
int32_t x298 = INT32_MAX;
volatile int8_t x304 = 7;
uint64_t x307 = 29638856276LLU;
int8_t x319 = INT8_MIN;
volatile int16_t x332 = 0;
volatile int64_t t83 = -349321LL;
uint8_t x340 = UINT8_MAX;
volatile int64_t x345 = 7861942985LL;
static uint16_t x351 = UINT16_MAX;
int32_t x353 = INT32_MIN;
int64_t x354 = -34332237931663092LL;
volatile int32_t x359 = -1;
volatile int32_t t90 = 9672;
volatile int32_t t91 = -2;
static int64_t x378 = INT64_MIN;
int32_t x380 = -1;
static uint32_t x383 = UINT32_MAX;
int32_t t96 = -1;
int16_t x395 = INT16_MIN;
static int32_t t99 = -114068;
int64_t x403 = INT64_MAX;
int16_t x406 = INT16_MIN;
int64_t x408 = 15917149350183291LL;
volatile uint8_t x412 = 11U;
uint32_t t102 = 1015599199U;
volatile uint32_t x414 = 21526979U;
volatile uint32_t x417 = UINT32_MAX;
int8_t x419 = -1;
static uint8_t x420 = 0U;
static uint8_t x426 = 50U;
int32_t t106 = -308836012;
static int32_t x435 = -1;
uint64_t x436 = 7843LLU;
int32_t t109 = 608;
int32_t x441 = INT32_MAX;
uint16_t x442 = UINT16_MAX;
int64_t x451 = -3729505101258616LL;
volatile int32_t t113 = -2;
static uint64_t x458 = 73559LLU;
uint64_t t115 = 42640214763041138LLU;
uint16_t x469 = UINT16_MAX;
int32_t x472 = -1;
int32_t t120 = -574;
volatile int32_t t121 = -118;
uint64_t x490 = 435869845LLU;
int32_t x496 = INT32_MIN;
int8_t x502 = INT8_MIN;
uint16_t x510 = 1U;
static uint8_t x512 = 6U;
int64_t t127 = -62914LL;
static int16_t x513 = INT16_MIN;
int64_t x520 = -337307902560155257LL;
volatile int32_t x521 = 1;
static volatile uint8_t x524 = 1U;
uint16_t x533 = 59U;
int16_t x546 = INT16_MIN;
volatile uint64_t x576 = UINT64_MAX;
int64_t t143 = -30393095358LL;
int32_t x584 = INT32_MAX;
int64_t x587 = 118325365955LL;
int32_t t146 = -3;
volatile uint64_t x589 = 306028382009290317LLU;
int8_t x590 = -1;
uint32_t x592 = 0U;
volatile uint32_t t151 = 208U;
int32_t x617 = INT32_MIN;
int8_t x619 = INT8_MAX;
int16_t x621 = INT16_MIN;
uint16_t x623 = 1U;
static int32_t x626 = 21627808;
static volatile uint32_t x639 = 31100896U;
static uint32_t x641 = 220006U;
static int64_t t161 = -4226352LL;
int8_t x661 = INT8_MAX;
int64_t x663 = 3541347840LL;
int8_t x665 = INT8_MAX;
volatile int64_t x666 = INT64_MAX;
int8_t x672 = 1;
static volatile uint8_t x679 = UINT8_MAX;
int8_t x680 = -1;
static int64_t x681 = -679631232291432LL;
uint8_t x690 = UINT8_MAX;
volatile uint16_t x692 = 2408U;
uint32_t x693 = UINT32_MAX;
int32_t x700 = -32047;
int16_t x704 = INT16_MIN;
volatile int32_t t177 = -493823498;
int8_t x715 = INT8_MAX;
static int32_t x716 = INT32_MIN;
static volatile uint16_t x719 = 11U;
volatile int64_t t179 = 6864LL;
int32_t x728 = -1;
int64_t x733 = -6LL;
volatile int8_t x739 = 1;
int32_t x746 = INT32_MIN;
int8_t x747 = 31;
int32_t t186 = 1513945;
static int64_t x749 = 2038LL;
int8_t x752 = 0;
int32_t x756 = -1;
uint8_t x759 = 47U;
int8_t x764 = INT8_MIN;
static volatile int16_t x765 = 0;
static volatile int64_t x773 = -31111722004564530LL;
static int64_t x779 = 203069LL;
volatile int32_t t196 = -756;
static int32_t x797 = -1;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static volatile int64_t x2 = INT64_MIN;
	static volatile int32_t x3 = 2405;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -21759878;

    t0 = (x1&(x2==(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	volatile int64_t x7 = -1LL;
	static int32_t x8 = 0;
	volatile int64_t t1 = 202113458641196LL;

    t1 = (x5&(x6==(x7<=x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = INT8_MAX;
	int32_t x10 = -1;
	int32_t x11 = 0;
	static volatile int32_t t2 = -55376;

    t2 = (x9&(x10==(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;

    t3 = (x13&(x14==(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	volatile uint16_t x20 = 12U;

    t4 = (x17&(x18==(x19<=x20)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x21 = INT32_MAX;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = -210;
	int32_t t5 = -7354;

    t5 = (x21&(x22==(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 7177LLU;
	static int8_t x26 = -2;
	uint16_t x27 = UINT16_MAX;
	static volatile uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t6 = 62168611390989798LLU;

    t6 = (x25&(x26==(x27<=x28)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint64_t x30 = 29LLU;
	int16_t x31 = INT16_MAX;
	static int64_t x32 = -958356238421210LL;
	static int32_t t7 = 7388892;

    t7 = (x29&(x30==(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 2486787;
	static uint64_t x34 = 176454342LLU;
	uint64_t x36 = 195697LLU;
	int32_t t8 = 7596;

    t8 = (x33&(x34==(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 765281588U;
	volatile int16_t x39 = INT16_MIN;
	volatile int8_t x40 = INT8_MIN;
	static volatile uint32_t t9 = 2U;

    t9 = (x37&(x38==(x39<=x40)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	volatile int16_t x43 = -1;

    t10 = (x41&(x42==(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	static int16_t x47 = -1;
	static int64_t x48 = INT64_MAX;
	int64_t t11 = 504357314914888LL;

    t11 = (x45&(x46==(x47<=x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x52 = -26;
	int32_t t12 = 832;

    t12 = (x49&(x50==(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static uint64_t x54 = 192502708LLU;
	static uint64_t x55 = 9176219944518449878LLU;
	int64_t x56 = -2573LL;

    t13 = (x53&(x54==(x55<=x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static volatile uint16_t x58 = 13351U;
	uint16_t x59 = 22U;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -4770826;

    t14 = (x57&(x58==(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 76327731U;
	static volatile int8_t x62 = INT8_MIN;
	static uint32_t x63 = UINT32_MAX;
	volatile uint16_t x64 = UINT16_MAX;

    t15 = (x61&(x62==(x63<=x64)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = 55U;
	volatile int64_t t16 = 1LL;

    t16 = (x65&(x66==(x67<=x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -193;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = -1;

    t17 = (x69&(x70==(x71<=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	volatile uint64_t x76 = UINT64_MAX;

    t18 = (x73&(x74==(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = 16232;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 61405;

    t19 = (x77&(x78==(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 7U;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -575134;

    t20 = (x81&(x82==(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MAX;
	volatile uint8_t x87 = 45U;
	uint64_t x88 = 3977195888415474579LLU;
	uint32_t t21 = 3U;

    t21 = (x85&(x86==(x87<=x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	static uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = 0;

    t22 = (x89&(x90==(x91<=x92)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 7;
	volatile int64_t x94 = INT64_MAX;
	volatile int16_t x95 = INT16_MAX;
	int32_t t23 = 1803220;

    t23 = (x93&(x94==(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = -9525;
	volatile uint32_t x98 = 843040U;
	int8_t x99 = INT8_MAX;
	int16_t x100 = -1;
	volatile int32_t t24 = 39;

    t24 = (x97&(x98==(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = 3;
	uint8_t x103 = 3U;
	static uint8_t x104 = 77U;
	static int32_t t25 = 930;

    t25 = (x101&(x102==(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x107 = 12;
	int64_t x108 = -1LL;
	int32_t t26 = -19839;

    t26 = (x105&(x106==(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 355391021;
	static volatile int8_t x110 = -1;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 3345773U;
	int32_t t27 = -1606397;

    t27 = (x109&(x110==(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -143396;
	volatile uint16_t x114 = 296U;
	int32_t x115 = 218855;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -197;

    t28 = (x113&(x114==(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MAX;
	uint32_t t29 = 3U;

    t29 = (x117&(x118==(x119<=x120)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = 13;
	uint32_t x122 = 1349309902U;
	int8_t x123 = INT8_MIN;
	int32_t t30 = 1;

    t30 = (x121&(x122==(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 5;
	uint32_t x126 = UINT32_MAX;
	int64_t x128 = INT64_MIN;
	static int32_t t31 = 0;

    t31 = (x125&(x126==(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 0U;
	int32_t x130 = INT32_MAX;
	uint8_t x131 = 7U;
	volatile int64_t x132 = -5960101759196848LL;
	static volatile int32_t t32 = 1320306;

    t32 = (x129&(x130==(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 38U;
	int8_t x135 = INT8_MIN;

    t33 = (x133&(x134==(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = UINT8_MAX;
	int64_t x138 = 2090407348931566889LL;
	int8_t x139 = INT8_MAX;
	uint8_t x140 = 0U;
	int32_t t34 = 5;

    t34 = (x137&(x138==(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	volatile int32_t t35 = -4620224;

    t35 = (x141&(x142==(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 66;
	uint8_t x146 = 104U;
	static volatile int32_t x147 = INT32_MAX;
	uint32_t x148 = 250U;
	static int32_t t36 = -84518;

    t36 = (x145&(x146==(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = 109942646397LLU;
	volatile int64_t x152 = 3468837194LL;
	volatile uint64_t t37 = 0LLU;

    t37 = (x149&(x150==(x151<=x152)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;

    t38 = (x153&(x154==(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = 46U;
	int64_t x159 = -1LL;
	volatile int64_t t39 = 41999517835604663LL;

    t39 = (x157&(x158==(x159<=x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = 0;
	volatile int16_t x162 = -1;
	int16_t x164 = 241;
	static int32_t t40 = 15989;

    t40 = (x161&(x162==(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MAX;
	int32_t x168 = -58;
	static int32_t t41 = 63254237;

    t41 = (x165&(x166==(x167<=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = -1;
	int8_t x171 = INT8_MIN;
	volatile int32_t t42 = -3430464;

    t42 = (x169&(x170==(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MAX;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;

    t43 = (x173&(x174==(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 4U;
	int16_t x178 = 14;
	static volatile int64_t x179 = -1LL;
	int64_t x180 = INT64_MIN;

    t44 = (x177&(x178==(x179<=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = INT64_MAX;
	static volatile int64_t x182 = INT64_MIN;
	static volatile int16_t x183 = INT16_MIN;
	int64_t t45 = -936526299696325343LL;

    t45 = (x181&(x182==(x183<=x184)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = -1;
	int32_t x186 = INT32_MAX;
	static volatile uint64_t x187 = 3737602442640307LLU;
	volatile int32_t t46 = -31352;

    t46 = (x185&(x186==(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile int8_t x190 = INT8_MIN;
	int8_t x192 = -1;
	uint64_t t47 = 9028191638LLU;

    t47 = (x189&(x190==(x191<=x192)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 12U;
	int16_t x194 = 3;
	int64_t x195 = -82872405LL;
	static int32_t x196 = -50;
	volatile int32_t t48 = -39468406;

    t48 = (x193&(x194==(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 26U;
	volatile int16_t x199 = -1;
	int64_t x200 = INT64_MIN;

    t49 = (x197&(x198==(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 39302399LLU;
	uint32_t x202 = 30U;
	uint64_t x203 = 4682LLU;
	int16_t x204 = INT16_MIN;

    t50 = (x201&(x202==(x203<=x204)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MIN;
	volatile int32_t t51 = 73160;

    t51 = (x205&(x206==(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x209 = -1LL;
	int32_t x210 = -3;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = -2184302587373LL;

    t52 = (x209&(x210==(x211<=x212)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t53 = -2;

    t53 = (x213&(x214==(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -22030;
	int8_t x220 = INT8_MAX;
	int32_t t54 = -1;

    t54 = (x217&(x218==(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	int64_t x223 = -1LL;
	uint32_t x224 = 1U;
	int32_t t55 = 86851;

    t55 = (x221&(x222==(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	volatile uint16_t x227 = 19U;
	volatile uint16_t x228 = 31U;
	volatile int32_t t56 = 7754952;

    t56 = (x225&(x226==(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 4266976U;
	int32_t t57 = 2;

    t57 = (x229&(x230==(x231<=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x233 = 1U;
	volatile uint64_t x234 = 2198LLU;
	volatile int64_t x235 = INT64_MAX;
	uint8_t x236 = 12U;
	volatile int32_t t58 = -4091941;

    t58 = (x233&(x234==(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int8_t x239 = 19;
	static volatile uint32_t x240 = 866U;
	volatile int32_t t59 = 131999;

    t59 = (x237&(x238==(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	volatile int8_t x242 = INT8_MAX;
	static int32_t x243 = 36914;
	volatile int32_t t60 = 3;

    t60 = (x241&(x242==(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	int32_t x247 = -15360;
	static uint16_t x248 = 391U;
	volatile int32_t t61 = -954525;

    t61 = (x245&(x246==(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = 0;
	static volatile uint64_t x250 = 2272551LLU;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = -87652125;

    t62 = (x249&(x250==(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x255 = INT16_MIN;

    t63 = (x253&(x254==(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MAX;
	volatile int64_t x260 = -1LL;
	int32_t t64 = -717;

    t64 = (x257&(x258==(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = -1;
	static uint32_t x264 = 2U;
	int32_t t65 = 77;

    t65 = (x261&(x262==(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 82254147260555LLU;
	static volatile uint8_t x266 = 75U;
	int16_t x267 = -1;
	uint32_t x268 = 0U;
	static uint64_t t66 = 227LLU;

    t66 = (x265&(x266==(x267<=x268)));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = -1LL;
	int64_t x270 = INT64_MAX;
	int16_t x271 = 1;
	static int64_t x272 = -1LL;
	volatile int64_t t67 = -371263LL;

    t67 = (x269&(x270==(x271<=x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	volatile int16_t x274 = -1576;
	static uint64_t x276 = 4463149818497915LLU;
	static int64_t t68 = 1603471354632501LL;

    t68 = (x273&(x274==(x275<=x276)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	static int8_t x278 = -2;
	static int16_t x279 = -6;
	uint16_t x280 = UINT16_MAX;

    t69 = (x277&(x278==(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	volatile uint8_t x284 = 59U;

    t70 = (x281&(x282==(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MAX;
	int64_t t71 = -31577971351LL;

    t71 = (x285&(x286==(x287<=x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 713U;
	uint32_t x290 = 279396495U;
	static int64_t x291 = -5837264LL;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 224;

    t72 = (x289&(x290==(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	static int64_t x296 = -7802904673997367LL;
	volatile int32_t t73 = -1363787;

    t73 = (x293&(x294==(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x299 = INT8_MIN;
	static uint16_t x300 = 199U;
	volatile int32_t t74 = -689176934;

    t74 = (x297&(x298==(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MAX;
	uint16_t x303 = 1403U;
	static int32_t t75 = 0;

    t75 = (x301&(x302==(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	volatile int16_t x306 = INT16_MIN;
	int8_t x308 = -2;
	volatile int32_t t76 = -3;

    t76 = (x305&(x306==(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -1;
	volatile int16_t x310 = -1;
	uint64_t x311 = 530222279950909LLU;
	volatile uint64_t x312 = 12036888191LLU;
	static int32_t t77 = -4052;

    t77 = (x309&(x310==(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile uint64_t x314 = 2LLU;
	volatile uint16_t x315 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 2194426;

    t78 = (x313&(x314==(x315<=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 0;
	int16_t x318 = -1;
	volatile int64_t x320 = -1LL;
	int32_t t79 = 1;

    t79 = (x317&(x318==(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 9U;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = INT64_MAX;
	static int32_t x324 = INT32_MIN;
	int32_t t80 = -6680;

    t80 = (x321&(x322==(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 0U;
	int8_t x326 = 11;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t81 = 0;

    t81 = (x325&(x326==(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = 16562714771453834LLU;
	static volatile int64_t x330 = INT64_MAX;
	static int16_t x331 = INT16_MIN;
	uint64_t t82 = 242547398273299LLU;

    t82 = (x329&(x330==(x331<=x332)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 146426719575121864LL;
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = INT16_MIN;
	int64_t x336 = 931164361868918LL;

    t83 = (x333&(x334==(x335<=x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	uint16_t x338 = 32280U;
	static volatile int32_t x339 = -1;
	int32_t t84 = 300610;

    t84 = (x337&(x338==(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = -71277366LL;
	uint64_t x344 = UINT64_MAX;
	volatile int64_t t85 = -385118692976LL;

    t85 = (x341&(x342==(x343<=x344)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = -1;
	static uint64_t x347 = UINT64_MAX;
	int64_t x348 = 1LL;
	int64_t t86 = -493239332285763LL;

    t86 = (x345&(x346==(x347<=x348)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 62U;
	int32_t x350 = INT32_MIN;
	int16_t x352 = -228;
	volatile int32_t t87 = -29362;

    t87 = (x349&(x350==(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 197765358;

    t88 = (x353&(x354==(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = 113U;
	int8_t x358 = -14;
	int16_t x360 = -575;
	static int32_t t89 = 294;

    t89 = (x357&(x358==(x359<=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -20;
	int16_t x362 = -1;
	volatile uint8_t x363 = UINT8_MAX;
	int16_t x364 = -1;

    t90 = (x361&(x362==(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x365 = UINT16_MAX;
	int8_t x366 = -52;
	uint16_t x367 = 0U;
	static uint32_t x368 = 8U;

    t91 = (x365&(x366==(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = -1;
	volatile int16_t x370 = INT16_MAX;
	volatile int16_t x371 = INT16_MIN;
	volatile int16_t x372 = -1;
	volatile int32_t t92 = 4107238;

    t92 = (x369&(x370==(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MIN;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = 367133;
	static volatile int32_t t93 = 339507;

    t93 = (x373&(x374==(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int8_t x379 = -1;
	volatile int32_t t94 = 24745361;

    t94 = (x377&(x378==(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x381 = 26U;
	int8_t x382 = 0;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -4727;

    t95 = (x381&(x382==(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	static int8_t x386 = -1;
	uint64_t x387 = 1687193116LLU;
	int64_t x388 = INT64_MAX;

    t96 = (x385&(x386==(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 2;
	int16_t x390 = -8026;
	int32_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = 92788050;

    t97 = (x389&(x390==(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -161;

    t98 = (x393&(x394==(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 7;
	int64_t x398 = 410103011932194LL;
	volatile int64_t x399 = INT64_MAX;
	int8_t x400 = -1;

    t99 = (x397&(x398==(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 678089539415LLU;
	volatile uint8_t x402 = UINT8_MAX;
	int32_t x404 = 442;
	volatile uint64_t t100 = 1850185583498LLU;

    t100 = (x401&(x402==(x403<=x404)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = 51;
	int8_t x407 = INT8_MIN;
	int32_t t101 = -116567;

    t101 = (x405&(x406==(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 41U;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MIN;

    t102 = (x409&(x410==(x411<=x412)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 1;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MAX;
	volatile int32_t t103 = 64293332;

    t103 = (x413&(x414==(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	volatile uint32_t t104 = 13385U;

    t104 = (x417&(x418==(x419<=x420)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	uint8_t x422 = 0U;
	static int8_t x423 = -1;
	static uint8_t x424 = 3U;
	volatile int32_t t105 = 3456;

    t105 = (x421&(x422==(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	static volatile int64_t x427 = INT64_MIN;
	int8_t x428 = -62;

    t106 = (x425&(x426==(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 135177081;
	volatile uint32_t x430 = UINT32_MAX;
	int32_t x431 = -1;
	uint32_t x432 = UINT32_MAX;
	int32_t t107 = -250;

    t107 = (x429&(x430==(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 1U;
	int16_t x434 = INT16_MAX;
	int32_t t108 = 301935300;

    t108 = (x433&(x434==(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 0U;
	uint64_t x438 = 3453881LLU;
	int64_t x439 = 684547LL;
	uint64_t x440 = UINT64_MAX;

    t109 = (x437&(x438==(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x443 = INT64_MAX;
	int8_t x444 = INT8_MAX;
	int32_t t110 = -122627;

    t110 = (x441&(x442==(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 27U;
	int8_t x446 = 0;
	static int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MAX;
	uint32_t t111 = 7704811U;

    t111 = (x445&(x446==(x447<=x448)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = 2424593502799LL;
	int64_t x450 = INT64_MAX;
	uint16_t x452 = UINT16_MAX;
	static volatile int64_t t112 = 463449910922LL;

    t112 = (x449&(x450==(x451<=x452)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MAX;
	volatile uint32_t x454 = UINT32_MAX;
	static int16_t x455 = -80;
	static volatile uint16_t x456 = UINT16_MAX;

    t113 = (x453&(x454==(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MAX;
	static volatile int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MIN;
	static int32_t t114 = 47;

    t114 = (x457&(x458==(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint64_t x462 = 160724167LLU;
	uint32_t x463 = UINT32_MAX;
	volatile int16_t x464 = INT16_MIN;

    t115 = (x461&(x462==(x463<=x464)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = 47611U;
	volatile uint32_t x466 = 1098633U;
	int16_t x467 = INT16_MAX;
	volatile int32_t x468 = INT32_MIN;
	volatile uint32_t t116 = 65952U;

    t116 = (x465&(x466==(x467<=x468)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = INT32_MIN;
	uint64_t x471 = UINT64_MAX;
	static int32_t t117 = 5913;

    t117 = (x469&(x470==(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x473 = -1;
	uint32_t x474 = 37711548U;
	int8_t x475 = -24;
	static uint16_t x476 = 5U;
	static int32_t t118 = -1951;

    t118 = (x473&(x474==(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = 80983003LLU;
	volatile uint32_t x478 = 14U;
	int16_t x479 = -1;
	int8_t x480 = INT8_MIN;
	uint64_t t119 = 44054764LLU;

    t119 = (x477&(x478==(x479<=x480)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MIN;
	volatile int32_t x482 = INT32_MAX;
	int32_t x483 = -1;
	int64_t x484 = 0LL;

    t120 = (x481&(x482==(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 1;
	uint32_t x486 = 7U;
	uint16_t x487 = 14601U;
	volatile int32_t x488 = INT32_MIN;

    t121 = (x485&(x486==(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	int16_t x491 = INT16_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t122 = -653391LL;

    t122 = (x489&(x490==(x491<=x492)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 326197217;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = 3143612U;
	volatile int32_t t123 = -4;

    t123 = (x493&(x494==(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	int16_t x498 = 8;
	volatile int16_t x499 = INT16_MIN;
	static volatile uint32_t x500 = UINT32_MAX;
	uint64_t t124 = 136849542235941604LLU;

    t124 = (x497&(x498==(x499<=x500)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	volatile int16_t x503 = INT16_MIN;
	int8_t x504 = INT8_MAX;
	int64_t t125 = -21LL;

    t125 = (x501&(x502==(x503<=x504)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = 249012LLU;
	uint32_t x506 = 105609U;
	uint8_t x507 = 102U;
	int8_t x508 = INT8_MIN;
	static volatile uint64_t t126 = 2068924LLU;

    t126 = (x505&(x506==(x507<=x508)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x511 = INT32_MAX;

    t127 = (x509&(x510==(x511<=x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = INT16_MIN;
	int16_t x515 = -1;
	volatile uint32_t x516 = 2401U;
	int32_t t128 = 8108;

    t128 = (x513&(x514==(x515<=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int32_t x518 = INT32_MIN;
	static int32_t x519 = -1;
	int64_t t129 = 1LL;

    t129 = (x517&(x518==(x519<=x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	uint16_t x523 = 62U;
	volatile int32_t t130 = -1865;

    t130 = (x521&(x522==(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = INT32_MIN;
	volatile int32_t x526 = -1;
	int32_t x527 = -249;
	volatile int8_t x528 = INT8_MIN;
	static volatile int32_t t131 = 1;

    t131 = (x525&(x526==(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x529 = 227899254028LLU;
	uint16_t x530 = 1606U;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = 33U;
	volatile uint64_t t132 = 0LLU;

    t132 = (x529&(x530==(x531<=x532)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x534 = 6U;
	static uint64_t x535 = UINT64_MAX;
	static uint8_t x536 = 42U;
	volatile int32_t t133 = 3195;

    t133 = (x533&(x534==(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = -151873LL;
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 473U;
	static volatile int8_t x540 = INT8_MAX;
	int64_t t134 = 311192402LL;

    t134 = (x537&(x538==(x539<=x540)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	int8_t x542 = -2;
	uint32_t x543 = UINT32_MAX;
	uint8_t x544 = 24U;
	static int32_t t135 = -21;

    t135 = (x541&(x542==(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = -5;
	uint64_t x547 = 874119276136389LLU;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -2006;

    t136 = (x545&(x546==(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -3;
	int16_t x550 = INT16_MIN;
	int64_t x551 = -27013LL;
	uint8_t x552 = 26U;
	volatile int32_t t137 = -3699;

    t137 = (x549&(x550==(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	static uint8_t x554 = UINT8_MAX;
	volatile int32_t x555 = INT32_MIN;
	int8_t x556 = 1;
	volatile int32_t t138 = 1;

    t138 = (x553&(x554==(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	static volatile int32_t x558 = INT32_MIN;
	volatile int16_t x559 = 7030;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t139 = 58177706;

    t139 = (x557&(x558==(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = 335557110;
	volatile int8_t x562 = -3;
	int16_t x563 = INT16_MAX;
	uint16_t x564 = UINT16_MAX;
	int32_t t140 = 1;

    t140 = (x561&(x562==(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	volatile int8_t x566 = INT8_MIN;
	volatile uint64_t x567 = UINT64_MAX;
	int64_t x568 = 4LL;
	volatile int32_t t141 = 5398;

    t141 = (x565&(x566==(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	uint16_t x570 = 2U;
	static int32_t x571 = INT32_MIN;
	int32_t x572 = -27339;
	volatile int32_t t142 = 2655082;

    t142 = (x569&(x570==(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 72888390109866230LL;
	int16_t x574 = INT16_MAX;
	uint64_t x575 = UINT64_MAX;

    t143 = (x573&(x574==(x575<=x576)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 8;
	static int8_t x578 = INT8_MIN;
	volatile uint64_t x579 = 87LLU;
	uint16_t x580 = 651U;
	int32_t t144 = -14899900;

    t144 = (x577&(x578==(x579<=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x581 = UINT16_MAX;
	static int64_t x582 = INT64_MIN;
	volatile uint64_t x583 = UINT64_MAX;
	int32_t t145 = -12462573;

    t145 = (x581&(x582==(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int8_t x586 = -1;
	int32_t x588 = 206;

    t146 = (x585&(x586==(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x591 = -20;
	volatile uint64_t t147 = 61680LLU;

    t147 = (x589&(x590==(x591<=x592)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = 31534U;
	uint64_t x594 = 967192657355LLU;
	static int8_t x595 = INT8_MIN;
	volatile uint32_t x596 = 17U;
	int32_t t148 = 625988562;

    t148 = (x593&(x594==(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	volatile int16_t x598 = 66;
	int64_t x599 = INT64_MAX;
	static int16_t x600 = 15;
	static volatile int64_t t149 = 376952964301254949LL;

    t149 = (x597&(x598==(x599<=x600)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = 2U;
	volatile int8_t x602 = INT8_MAX;
	uint8_t x603 = 4U;
	volatile uint8_t x604 = 118U;
	volatile int32_t t150 = 111541;

    t150 = (x601&(x602==(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 342U;
	int64_t x607 = -2LL;
	uint64_t x608 = UINT64_MAX;

    t151 = (x605&(x606==(x607<=x608)));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x610 = 7308;
	static int8_t x611 = -1;
	int16_t x612 = 2077;
	static volatile int32_t t152 = 1062412;

    t152 = (x609&(x610==(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = 0;
	static int32_t x614 = 609643;
	uint32_t x615 = UINT32_MAX;
	static volatile int64_t x616 = -1LL;
	volatile int32_t t153 = 41599;

    t153 = (x613&(x614==(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x618 = UINT8_MAX;
	volatile int8_t x620 = INT8_MIN;
	int32_t t154 = 474691287;

    t154 = (x617&(x618==(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = UINT64_MAX;
	volatile uint16_t x624 = 1732U;
	int32_t t155 = -174833097;

    t155 = (x621&(x622==(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -1;
	volatile int16_t x627 = INT16_MIN;
	static int16_t x628 = INT16_MIN;
	int32_t t156 = 411861563;

    t156 = (x625&(x626==(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 300391LLU;
	volatile int64_t x630 = INT64_MIN;
	int16_t x631 = INT16_MIN;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t157 = 40888LLU;

    t157 = (x629&(x630==(x631<=x632)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x633 = UINT8_MAX;
	static int16_t x634 = INT16_MIN;
	int64_t x635 = -4969665330940613LL;
	int8_t x636 = -1;
	int32_t t158 = -42236;

    t158 = (x633&(x634==(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	int64_t x638 = -12104042342717LL;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = 25668494;

    t159 = (x637&(x638==(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x642 = -1;
	volatile int32_t x643 = INT32_MIN;
	int32_t x644 = -1;
	static volatile uint32_t t160 = 352293896U;

    t160 = (x641&(x642==(x643<=x644)));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	uint32_t x646 = 5092U;
	static uint16_t x647 = UINT16_MAX;
	static uint8_t x648 = 37U;

    t161 = (x645&(x646==(x647<=x648)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = INT32_MIN;
	int32_t x650 = INT32_MAX;
	static uint16_t x651 = UINT16_MAX;
	volatile int64_t x652 = INT64_MIN;
	static volatile int32_t t162 = 7905227;

    t162 = (x649&(x650==(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	uint16_t x654 = UINT16_MAX;
	int16_t x655 = -1;
	int64_t x656 = -621015118027LL;
	volatile int32_t t163 = 51;

    t163 = (x653&(x654==(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 6976494442754720LLU;
	uint32_t x658 = 6426U;
	static int16_t x659 = INT16_MIN;
	volatile int32_t x660 = INT32_MIN;
	uint64_t t164 = 5967985114159LLU;

    t164 = (x657&(x658==(x659<=x660)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x662 = 5487992U;
	uint32_t x664 = 320277684U;
	volatile int32_t t165 = 2;

    t165 = (x661&(x662==(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x667 = UINT64_MAX;
	int8_t x668 = -49;
	volatile int32_t t166 = -49;

    t166 = (x665&(x666==(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = 5;
	volatile uint8_t x670 = UINT8_MAX;
	static volatile int8_t x671 = -24;
	volatile int32_t t167 = -104349579;

    t167 = (x669&(x670==(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = 77766;
	int32_t x674 = -45139216;
	static int8_t x675 = -1;
	static uint64_t x676 = 12031947463LLU;
	volatile int32_t t168 = -54;

    t168 = (x673&(x674==(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	volatile int64_t x678 = INT64_MIN;
	volatile int64_t t169 = 14852234931LL;

    t169 = (x677&(x678==(x679<=x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x682 = INT8_MAX;
	static volatile int8_t x683 = INT8_MIN;
	uint8_t x684 = 56U;
	int64_t t170 = 40900LL;

    t170 = (x681&(x682==(x683<=x684)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -43049480;
	uint16_t x686 = UINT16_MAX;
	uint16_t x687 = 20U;
	int64_t x688 = INT64_MIN;
	volatile int32_t t171 = 25813;

    t171 = (x685&(x686==(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	static int8_t x691 = INT8_MIN;
	volatile int32_t t172 = 606472;

    t172 = (x689&(x690==(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = INT32_MIN;
	uint16_t x695 = UINT16_MAX;
	static volatile int16_t x696 = INT16_MAX;
	volatile uint32_t t173 = 197U;

    t173 = (x693&(x694==(x695<=x696)));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	static uint8_t x698 = 5U;
	uint16_t x699 = 61U;
	volatile int64_t t174 = 70332043820316LL;

    t174 = (x697&(x698==(x699<=x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = -1;
	volatile int32_t x702 = 0;
	uint32_t x703 = 286325293U;
	int32_t t175 = -48609;

    t175 = (x701&(x702==(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 825190538017883845LLU;
	int64_t x706 = 99LL;
	int64_t x707 = 22494210379078046LL;
	volatile uint16_t x708 = 12U;
	static volatile uint64_t t176 = 716744031LLU;

    t176 = (x705&(x706==(x707<=x708)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MIN;
	uint64_t x710 = 568326085LLU;
	int8_t x711 = 31;
	static int64_t x712 = -217555965LL;

    t177 = (x709&(x710==(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = 1002;
	int32_t x714 = INT32_MAX;
	volatile int32_t t178 = 1609;

    t178 = (x713&(x714==(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	int16_t x718 = INT16_MAX;
	int64_t x720 = 4505LL;

    t179 = (x717&(x718==(x719<=x720)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = UINT8_MAX;
	int64_t x722 = INT64_MIN;
	volatile uint16_t x723 = UINT16_MAX;
	int64_t x724 = 61LL;
	static volatile int32_t t180 = -1;

    t180 = (x721&(x722==(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	uint16_t x726 = UINT16_MAX;
	static volatile int64_t x727 = INT64_MAX;
	volatile int32_t t181 = 2;

    t181 = (x725&(x726==(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 2U;
	volatile uint64_t x730 = 12853LLU;
	volatile int64_t x731 = 54318562998LL;
	uint8_t x732 = 4U;
	volatile int32_t t182 = 1;

    t182 = (x729&(x730==(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = INT8_MIN;
	uint8_t x735 = UINT8_MAX;
	static uint16_t x736 = 1344U;
	int64_t t183 = 117863661206LL;

    t183 = (x733&(x734==(x735<=x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	int8_t x738 = INT8_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t184 = 6222703;

    t184 = (x737&(x738==(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	volatile int64_t x742 = INT64_MIN;
	static int8_t x743 = INT8_MIN;
	int64_t x744 = INT64_MIN;
	int64_t t185 = 0LL;

    t185 = (x741&(x742==(x743<=x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	uint16_t x748 = UINT16_MAX;

    t186 = (x745&(x746==(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MIN;
	uint64_t x751 = UINT64_MAX;
	int64_t t187 = 836556LL;

    t187 = (x749&(x750==(x751<=x752)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 1;
	int8_t x754 = 9;
	static int8_t x755 = INT8_MAX;
	static volatile int32_t t188 = 1;

    t188 = (x753&(x754==(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	volatile int16_t x758 = -2;
	int8_t x760 = 5;
	int32_t t189 = 65499183;

    t189 = (x757&(x758==(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	volatile int32_t x762 = -1;
	volatile uint8_t x763 = 90U;
	int32_t t190 = 899;

    t190 = (x761&(x762==(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x766 = UINT16_MAX;
	int8_t x767 = INT8_MIN;
	int32_t x768 = -1;
	int32_t t191 = 7;

    t191 = (x765&(x766==(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 33626828123117422LLU;
	static volatile uint8_t x770 = UINT8_MAX;
	int64_t x771 = INT64_MIN;
	volatile uint16_t x772 = 6U;
	uint64_t t192 = 221LLU;

    t192 = (x769&(x770==(x771<=x772)));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 0U;
	uint8_t x775 = 31U;
	int64_t x776 = -8423LL;
	volatile int64_t t193 = 3150267LL;

    t193 = (x773&(x774==(x775<=x776)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 10413;
	volatile int8_t x778 = -1;
	volatile uint64_t x780 = 2376926849LLU;
	int32_t t194 = -126;

    t194 = (x777&(x778==(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = 6;
	int64_t x782 = INT64_MIN;
	int16_t x783 = INT16_MAX;
	static volatile uint8_t x784 = UINT8_MAX;
	int32_t t195 = -3589;

    t195 = (x781&(x782==(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x785 = INT16_MIN;
	uint64_t x786 = 56475755120LLU;
	static volatile int16_t x787 = INT16_MIN;
	int64_t x788 = INT64_MAX;

    t196 = (x785&(x786==(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = 21657519366LL;
	int32_t x790 = INT32_MIN;
	int16_t x791 = 3;
	int8_t x792 = INT8_MIN;
	volatile int64_t t197 = 38818LL;

    t197 = (x789&(x790==(x791<=x792)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MIN;
	volatile int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MIN;
	int8_t x796 = INT8_MIN;
	volatile int32_t t198 = -41797;

    t198 = (x793&(x794==(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = 16;
	static uint8_t x799 = 30U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t199 = 13182595;

    t199 = (x797&(x798==(x799<=x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

