
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

static volatile uint16_t x4 = 78U;
volatile int64_t x11 = -3159374269LL;
uint16_t x12 = UINT16_MAX;
int32_t x14 = 27;
uint8_t x21 = 98U;
uint64_t t5 = 8617177860650LLU;
int32_t x29 = -1425;
static int64_t x32 = -1LL;
volatile int32_t t7 = 866;
int64_t x44 = INT64_MAX;
int32_t x47 = INT32_MAX;
int8_t x50 = INT8_MIN;
volatile int16_t x57 = INT16_MIN;
int16_t x63 = -468;
uint64_t x66 = 0LLU;
static volatile int16_t x68 = INT16_MIN;
int64_t x77 = INT64_MIN;
int32_t t19 = 63;
int8_t x86 = 7;
static int32_t t20 = -210;
int8_t x91 = 8;
static volatile int32_t t21 = 1883967;
int32_t x114 = INT32_MIN;
volatile int32_t t27 = -679300325;
int64_t x125 = -135LL;
int32_t t31 = 1;
static int64_t x138 = -3119414467057484260LL;
static volatile int32_t t34 = 1;
volatile int32_t t38 = -309407;
volatile int16_t x166 = INT16_MIN;
uint32_t x167 = 899300U;
volatile int64_t x168 = 48LL;
int64_t t40 = 12844680192LL;
int32_t x169 = -1;
uint64_t x176 = UINT64_MAX;
int64_t x177 = INT64_MAX;
static int64_t x182 = INT64_MIN;
uint8_t x191 = 103U;
static volatile int32_t x195 = INT32_MIN;
volatile uint16_t x196 = UINT16_MAX;
int16_t x199 = INT16_MIN;
volatile int32_t t48 = 15292;
volatile uint64_t x202 = 3370203021LLU;
static int32_t x204 = INT32_MIN;
volatile int32_t t49 = -1942;
int32_t t51 = -2;
int32_t x221 = -1;
int32_t t55 = 14433;
static volatile uint32_t x229 = 138269358U;
uint32_t x234 = 2726U;
int8_t x240 = INT8_MIN;
static volatile int32_t x243 = INT32_MIN;
int64_t x251 = INT64_MIN;
int32_t t60 = 5;
uint32_t t62 = 60261910U;
int8_t x268 = -1;
volatile int16_t x269 = -147;
volatile int64_t x270 = -590739693545185LL;
static int32_t x271 = -1;
volatile int64_t x273 = INT64_MAX;
volatile uint32_t x276 = 4872536U;
static uint64_t x280 = 56LLU;
volatile int8_t x286 = INT8_MIN;
uint8_t x293 = UINT8_MAX;
uint32_t x294 = UINT32_MAX;
int32_t x296 = -1;
uint8_t x304 = 1U;
volatile uint32_t t74 = 28302073U;
int8_t x313 = -1;
int64_t x315 = 1971025099LL;
int32_t x317 = INT32_MIN;
int32_t x318 = INT32_MAX;
int32_t x319 = 50024241;
static volatile int32_t x323 = 2;
int16_t x326 = INT16_MIN;
static volatile int64_t x327 = INT64_MAX;
volatile int16_t x330 = 10;
int64_t x333 = -1LL;
uint32_t x343 = 577985520U;
static volatile uint64_t x349 = UINT64_MAX;
int16_t x351 = 31;
static uint32_t t85 = 3U;
int32_t t86 = 26169;
uint8_t x357 = UINT8_MAX;
int64_t x360 = -1371009804437LL;
int32_t x361 = 1;
volatile int32_t t88 = -230265;
int64_t x370 = -453LL;
volatile int32_t x376 = -989198718;
uint16_t x379 = 1U;
int64_t x388 = -5347798881LL;
volatile int8_t x395 = -1;
int32_t x398 = 38472291;
uint8_t x416 = 95U;
volatile int32_t t101 = -3;
static uint64_t t102 = 16976304LLU;
volatile uint32_t x422 = 7144534U;
int16_t x425 = -1;
int8_t x427 = INT8_MIN;
uint64_t t104 = 1804054786436LLU;
static volatile int64_t x430 = -1LL;
int32_t x436 = INT32_MIN;
uint32_t x446 = UINT32_MAX;
int32_t x458 = -1;
volatile uint8_t x461 = 1U;
static int32_t t113 = -49;
volatile int16_t x470 = -1;
int64_t x475 = INT64_MAX;
uint16_t x476 = 7U;
int8_t x491 = INT8_MIN;
int32_t x494 = -1;
volatile int32_t t122 = -382352;
volatile uint16_t x521 = 13U;
volatile int64_t t128 = 124270340724961461LL;
int32_t x538 = 14490;
uint16_t x539 = UINT16_MAX;
volatile int16_t x549 = -1;
volatile int64_t t137 = 16LL;
volatile int8_t x566 = INT8_MIN;
uint16_t x568 = 10U;
int64_t x569 = -1LL;
uint8_t x571 = 11U;
volatile int8_t x576 = INT8_MIN;
volatile int32_t t141 = 93;
static volatile int16_t x577 = INT16_MIN;
static uint32_t x583 = 160753U;
uint8_t x584 = UINT8_MAX;
volatile int8_t x588 = 1;
int16_t x591 = -96;
uint16_t x592 = 6364U;
static uint8_t x596 = 15U;
int8_t x611 = 1;
static int16_t x613 = INT16_MIN;
int64_t x616 = INT64_MIN;
int8_t x618 = INT8_MAX;
static int32_t t152 = 81400;
int32_t t155 = -75238662;
uint16_t x636 = 232U;
static volatile int32_t t156 = 1129319;
int32_t x639 = -30235;
static int32_t x643 = INT32_MIN;
int16_t x645 = 14323;
static uint64_t x648 = 16626125900281524LLU;
uint8_t x655 = 52U;
static uint32_t x656 = 1U;
static int16_t x660 = 154;
int8_t x661 = INT8_MIN;
int64_t x663 = INT64_MAX;
int32_t t163 = -76277;
volatile int8_t x665 = -1;
static int64_t t164 = 3LL;
uint32_t x669 = UINT32_MAX;
uint32_t x674 = 1U;
int8_t x675 = 19;
int64_t t166 = -6955263108611LL;
uint16_t x689 = 4536U;
static int32_t x692 = INT32_MAX;
static int8_t x696 = INT8_MAX;
static volatile int64_t x699 = 10903456877571656LL;
volatile int32_t t172 = 515422;
int32_t x702 = INT32_MAX;
static volatile int64_t x705 = INT64_MIN;
int64_t x707 = INT64_MAX;
volatile int64_t x712 = INT64_MAX;
uint16_t x721 = UINT16_MAX;
volatile int32_t x723 = INT32_MIN;
uint32_t x725 = UINT32_MAX;
static int16_t x729 = -53;
volatile int16_t x731 = INT16_MIN;
int16_t x733 = -1;
volatile int32_t t182 = -930056127;
volatile int8_t x748 = 48;
uint64_t x753 = UINT64_MAX;
volatile uint64_t x764 = 166043921LLU;
volatile uint64_t t188 = 36671681626966668LLU;
volatile int8_t x768 = INT8_MIN;
static uint64_t x770 = 46123012024LLU;
volatile int16_t x780 = 2477;
volatile int32_t t193 = 4037843;
int64_t x787 = INT64_MIN;
volatile int64_t t196 = -4431344LL;
int16_t x801 = INT16_MAX;
int16_t x804 = INT16_MIN;
volatile int32_t t198 = 256608;
int8_t x805 = INT8_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	static int32_t t0 = -109022323;

    t0 = ((x1!=(x2==x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	uint16_t x7 = 40U;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = 121705;

    t1 = ((x5!=(x6==x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 307;
	uint8_t x10 = 0U;
	int32_t t2 = -7;

    t2 = ((x9!=(x10==x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 246272468301067189LLU;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -100400716851LL;
	volatile int64_t t3 = 438576491309567LL;

    t3 = ((x13!=(x14==x15))/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	uint16_t x18 = 1U;
	int64_t x19 = 792090LL;
	static int16_t x20 = -1;
	int32_t t4 = -4580330;

    t4 = ((x17!=(x18==x19))/x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x22 = -1LL;
	volatile uint32_t x23 = 8843U;
	uint64_t x24 = 8071359717006LLU;

    t5 = ((x21!=(x22==x23))/x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = -2797638983435336403LL;
	volatile int8_t x31 = INT8_MIN;
	int64_t t6 = 23757136797LL;

    t6 = ((x29!=(x30==x31))/x32);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	volatile int32_t x34 = 10;
	uint16_t x35 = 8715U;
	volatile int32_t x36 = INT32_MIN;

    t7 = ((x33!=(x34==x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 3U;
	static int64_t x38 = -1LL;
	int8_t x39 = -1;
	int8_t x40 = 12;
	int32_t t8 = -218900;

    t8 = ((x37!=(x38==x39))/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x41 = 3LLU;
	volatile int8_t x42 = INT8_MAX;
	volatile int32_t x43 = INT32_MIN;
	static int64_t t9 = 1LL;

    t9 = ((x41!=(x42==x43))/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -3802;

    t10 = ((x45!=(x46==x47))/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 7U;
	static uint8_t x51 = 61U;
	int64_t x52 = -47655966008LL;
	static int64_t t11 = 79378LL;

    t11 = ((x49!=(x50==x51))/x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	static uint16_t x54 = 387U;
	int16_t x55 = INT16_MAX;
	int16_t x56 = 15;
	int32_t t12 = -3;

    t12 = ((x53!=(x54==x55))/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x58 = -1LL;
	static volatile int32_t x59 = INT32_MAX;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -1;

    t13 = ((x57!=(x58==x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MAX;
	static int8_t x62 = INT8_MIN;
	volatile int16_t x64 = -1;
	static volatile int32_t t14 = -408103043;

    t14 = ((x61!=(x62==x63))/x64);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 3846U;
	uint8_t x67 = 24U;
	int32_t t15 = 341;

    t15 = ((x65!=(x66==x67))/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 815963418U;
	volatile int16_t x70 = INT16_MIN;
	static int16_t x71 = INT16_MIN;
	int32_t x72 = -1;
	int32_t t16 = -1938449;

    t16 = ((x69!=(x70==x71))/x72);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 4U;
	uint16_t x74 = 97U;
	int32_t x75 = 1;
	uint32_t x76 = 1229887471U;
	uint32_t t17 = 711375U;

    t17 = ((x73!=(x74==x75))/x76);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x78 = 8U;
	volatile int32_t x79 = -485;
	uint16_t x80 = 52U;
	int32_t t18 = -854871290;

    t18 = ((x77!=(x78==x79))/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x81 = 88U;
	int32_t x82 = INT32_MAX;
	int8_t x83 = 33;
	volatile int16_t x84 = INT16_MIN;

    t19 = ((x81!=(x82==x83))/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = 2053160601574003900LL;
	int32_t x87 = -739591;
	uint8_t x88 = 14U;

    t20 = ((x85!=(x86==x87))/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MAX;
	static uint8_t x90 = 60U;
	int16_t x92 = INT16_MIN;

    t21 = ((x89!=(x90==x91))/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -1087;
	static int32_t x94 = INT32_MIN;
	uint8_t x95 = UINT8_MAX;
	static int32_t x96 = -1;
	volatile int32_t t22 = 17;

    t22 = ((x93!=(x94==x95))/x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static uint32_t x99 = UINT32_MAX;
	uint64_t x100 = 137411535LLU;
	uint64_t t23 = 79883748LLU;

    t23 = ((x97!=(x98==x99))/x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = 11;
	int32_t x102 = -7271407;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 17667;

    t24 = ((x101!=(x102==x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 510352923;
	static int16_t x106 = INT16_MIN;
	volatile int32_t x107 = 3466814;
	volatile int64_t x108 = INT64_MIN;
	int64_t t25 = -10585511595190LL;

    t25 = ((x105!=(x106==x107))/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x109 = -144;
	volatile uint16_t x110 = 23U;
	int16_t x111 = INT16_MIN;
	int16_t x112 = 73;
	int32_t t26 = -4952;

    t26 = ((x109!=(x110==x111))/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MAX;
	int32_t x115 = 7130006;
	int8_t x116 = -2;

    t27 = ((x113!=(x114==x115))/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -3LL;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 3986U;
	volatile int8_t x120 = INT8_MIN;
	int32_t t28 = 264017440;

    t28 = ((x117!=(x118==x119))/x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	static int32_t x122 = INT32_MIN;
	int32_t x123 = -102427120;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t29 = -59815131;

    t29 = ((x121!=(x122==x123))/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x126 = 0;
	int32_t x127 = INT32_MIN;
	volatile int16_t x128 = 28;
	volatile int32_t t30 = 887353;

    t30 = ((x125!=(x126==x127))/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 220872540LL;
	int8_t x130 = INT8_MAX;
	volatile uint64_t x131 = 274062LLU;
	uint8_t x132 = UINT8_MAX;

    t31 = ((x129!=(x130==x131))/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	volatile uint16_t x134 = 188U;
	volatile int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t32 = -5;

    t32 = ((x133!=(x134==x135))/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	volatile uint32_t x139 = 3168193U;
	int32_t x140 = -930467893;
	int32_t t33 = -2;

    t33 = ((x137!=(x138==x139))/x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -5;
	uint32_t x142 = 0U;
	int64_t x143 = -68591628820205LL;
	int32_t x144 = INT32_MIN;

    t34 = ((x141!=(x142==x143))/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x145 = INT8_MIN;
	int16_t x146 = -1;
	static int8_t x147 = -3;
	uint32_t x148 = UINT32_MAX;
	uint32_t t35 = 254U;

    t35 = ((x145!=(x146==x147))/x148);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x149 = 1LL;
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = 409986;

    t36 = ((x149!=(x150==x151))/x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	static uint16_t x155 = 4125U;
	uint32_t x156 = 135U;
	volatile uint32_t t37 = 25354999U;

    t37 = ((x153!=(x154==x155))/x156);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = -504LL;
	int8_t x159 = INT8_MIN;
	volatile int32_t x160 = INT32_MIN;

    t38 = ((x157!=(x158==x159))/x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = INT8_MIN;
	static uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 33670785LLU;
	int16_t x164 = 495;
	int32_t t39 = -654;

    t39 = ((x161!=(x162==x163))/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 3164LLU;

    t40 = ((x165!=(x166==x167))/x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x170 = UINT64_MAX;
	static int64_t x171 = -193974766218300142LL;
	int16_t x172 = -1;
	int32_t t41 = 3743;

    t41 = ((x169!=(x170==x171))/x172);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x173 = 2441U;
	int32_t x174 = 388;
	uint8_t x175 = UINT8_MAX;
	volatile uint64_t t42 = 7LLU;

    t42 = ((x173!=(x174==x175))/x176);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x178 = 6700544331LLU;
	volatile int16_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	uint32_t t43 = 127U;

    t43 = ((x177!=(x178==x179))/x180);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = -576312606240406564LL;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = -11148;
	int32_t t44 = 6649132;

    t44 = ((x181!=(x182==x183))/x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x185 = -1;
	volatile uint8_t x186 = 2U;
	int8_t x187 = -1;
	volatile uint64_t x188 = 483611929LLU;
	volatile uint64_t t45 = 1961782365LLU;

    t45 = ((x185!=(x186==x187))/x188);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	static int32_t t46 = -3092328;

    t46 = ((x189!=(x190==x191))/x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x193 = 547547LLU;
	volatile int16_t x194 = INT16_MAX;
	int32_t t47 = 548120601;

    t47 = ((x193!=(x194==x195))/x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x197 = 464LLU;
	uint64_t x198 = 23775030229857109LLU;
	int32_t x200 = -5;

    t48 = ((x197!=(x198==x199))/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 0U;
	int8_t x203 = INT8_MIN;

    t49 = ((x201!=(x202==x203))/x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MAX;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = INT64_MIN;
	volatile int64_t t50 = 262841LL;

    t50 = ((x205!=(x206==x207))/x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = -1;
	int64_t x210 = 13267315LL;
	uint64_t x211 = 268733891769LLU;
	int8_t x212 = INT8_MAX;

    t51 = ((x209!=(x210==x211))/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 1U;
	static volatile int32_t t52 = 22169010;

    t52 = ((x213!=(x214==x215))/x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	int32_t x218 = INT32_MIN;
	volatile int64_t x219 = -287020366472655776LL;
	int16_t x220 = 1;
	int32_t t53 = 235;

    t53 = ((x217!=(x218==x219))/x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x222 = 5U;
	static int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MAX;
	int32_t t54 = 1;

    t54 = ((x221!=(x222==x223))/x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = -1;
	uint64_t x226 = 47814007798135LLU;
	static int8_t x227 = INT8_MAX;
	volatile uint16_t x228 = 31U;

    t55 = ((x225!=(x226==x227))/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x230 = INT8_MIN;
	static int64_t x231 = -1LL;
	uint8_t x232 = UINT8_MAX;
	int32_t t56 = -1019;

    t56 = ((x229!=(x230==x231))/x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MAX;
	uint16_t x235 = UINT16_MAX;
	volatile uint32_t x236 = 1093U;
	uint32_t t57 = 1426155U;

    t57 = ((x233!=(x234==x235))/x236);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = 0U;
	uint8_t x238 = 46U;
	int8_t x239 = 0;
	volatile int32_t t58 = -1998057;

    t58 = ((x237!=(x238==x239))/x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = -81071LL;
	int64_t x242 = -940LL;
	volatile uint16_t x244 = 1145U;
	static volatile int32_t t59 = -14;

    t59 = ((x241!=(x242==x243))/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	static int8_t x252 = -1;

    t60 = ((x249!=(x250==x251))/x252);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x253 = -57158771;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 81U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = -25548260;

    t61 = ((x253!=(x254==x255))/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = 1693732LL;
	uint64_t x258 = 13LLU;
	int64_t x259 = -193683945LL;
	uint32_t x260 = 115917U;

    t62 = ((x257!=(x258==x259))/x260);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x261 = UINT16_MAX;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = INT32_MAX;
	uint16_t x264 = 28788U;
	volatile int32_t t63 = -265;

    t63 = ((x261!=(x262==x263))/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	volatile int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t64 = -32;

    t64 = ((x265!=(x266==x267))/x268);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t65 = 514992LLU;

    t65 = ((x269!=(x270==x271))/x272);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x274 = -12600;
	uint16_t x275 = UINT16_MAX;
	uint32_t t66 = 257742992U;

    t66 = ((x273!=(x274==x275))/x276);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x277 = -1025332278680140LL;
	static int32_t x278 = INT32_MIN;
	volatile int16_t x279 = -1;
	volatile uint64_t t67 = 46039874899LLU;

    t67 = ((x277!=(x278==x279))/x280);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = 1;
	int16_t x282 = 336;
	static volatile uint32_t x283 = 187269823U;
	int8_t x284 = INT8_MIN;
	static int32_t t68 = 1;

    t68 = ((x281!=(x282==x283))/x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x285 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 545U;
	static int32_t t69 = 20685526;

    t69 = ((x285!=(x286==x287))/x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	int8_t x290 = INT8_MAX;
	int32_t x291 = -113350;
	uint32_t x292 = 39U;
	volatile uint32_t t70 = 74324U;

    t70 = ((x289!=(x290==x291))/x292);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x295 = 14039045U;
	int32_t t71 = 326;

    t71 = ((x293!=(x294==x295))/x296);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = 531325316398352624LL;
	static uint16_t x298 = 21U;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -1;
	volatile int32_t t72 = -117;

    t72 = ((x297!=(x298==x299))/x300);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 2872U;
	int16_t x302 = 610;
	uint16_t x303 = 6U;
	static volatile int32_t t73 = -25;

    t73 = ((x301!=(x302==x303))/x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x305 = 6283626179205195736LLU;
	uint16_t x306 = 4363U;
	int16_t x307 = -846;
	volatile uint32_t x308 = 162111U;

    t74 = ((x305!=(x306==x307))/x308);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = -120;
	int8_t x310 = INT8_MAX;
	static int16_t x311 = 15325;
	uint16_t x312 = 17551U;
	static volatile int32_t t75 = 41435;

    t75 = ((x309!=(x310==x311))/x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x314 = INT8_MIN;
	static int32_t x316 = -52299;
	volatile int32_t t76 = -1;

    t76 = ((x313!=(x314==x315))/x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x320 = 67;
	static volatile int32_t t77 = -358;

    t77 = ((x317!=(x318==x319))/x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	static uint32_t x324 = 6517U;
	volatile uint32_t t78 = 364U;

    t78 = ((x321!=(x322==x323))/x324);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x325 = 5694135U;
	uint32_t x328 = 73093U;
	volatile uint32_t t79 = 772098379U;

    t79 = ((x325!=(x326==x327))/x328);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = 17;
	uint32_t x331 = 3670U;
	uint64_t x332 = 490075982593404487LLU;
	uint64_t t80 = 46551620LLU;

    t80 = ((x329!=(x330==x331))/x332);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x334 = UINT64_MAX;
	int16_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	uint32_t t81 = 499U;

    t81 = ((x333!=(x334==x335))/x336);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -1;
	volatile uint64_t x338 = 109156367424343491LLU;
	int8_t x339 = 0;
	volatile int32_t x340 = -1;
	volatile int32_t t82 = 409430;

    t82 = ((x337!=(x338==x339))/x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x341 = INT64_MIN;
	uint64_t x342 = UINT64_MAX;
	int16_t x344 = -1;
	volatile int32_t t83 = 50635307;

    t83 = ((x341!=(x342==x343))/x344);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	volatile int64_t x347 = -1LL;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t84 = 34461031045404LLU;

    t84 = ((x345!=(x346==x347))/x348);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x350 = INT16_MAX;
	uint32_t x352 = 4250U;

    t85 = ((x349!=(x350==x351))/x352);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x353 = 16;
	static uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	volatile int8_t x356 = INT8_MAX;

    t86 = ((x353!=(x354==x355))/x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x358 = -882582442LL;
	int64_t x359 = 14556106459975LL;
	int64_t t87 = -661165106LL;

    t87 = ((x357!=(x358==x359))/x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x362 = INT64_MIN;
	volatile int16_t x363 = -1;
	uint16_t x364 = 1582U;

    t88 = ((x361!=(x362==x363))/x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MAX;
	int32_t x366 = 305393;
	volatile uint16_t x367 = 147U;
	int32_t x368 = INT32_MIN;
	static int32_t t89 = -411256;

    t89 = ((x365!=(x366==x367))/x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x369 = UINT64_MAX;
	int8_t x371 = -1;
	static uint64_t x372 = UINT64_MAX;
	volatile uint64_t t90 = 11LLU;

    t90 = ((x369!=(x370==x371))/x372);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	int16_t x375 = 250;
	volatile int32_t t91 = -6;

    t91 = ((x373!=(x374==x375))/x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -52002471041504289LL;
	int8_t x378 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t92 = 1;

    t92 = ((x377!=(x378==x379))/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x381 = UINT32_MAX;
	int16_t x382 = -10057;
	int64_t x383 = -3235490509974834014LL;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t93 = 8716269;

    t93 = ((x381!=(x382==x383))/x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = 16U;
	int16_t x386 = INT16_MIN;
	volatile uint8_t x387 = 1U;
	volatile int64_t t94 = -152957811LL;

    t94 = ((x385!=(x386==x387))/x388);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = -1LL;
	static int16_t x390 = -2231;
	int32_t x391 = INT32_MAX;
	static int32_t x392 = 29631;
	volatile int32_t t95 = 490560;

    t95 = ((x389!=(x390==x391))/x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x393 = 10873U;
	int8_t x394 = -6;
	int16_t x396 = INT16_MAX;
	volatile int32_t t96 = -7394153;

    t96 = ((x393!=(x394==x395))/x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = 1026U;
	int16_t x399 = INT16_MIN;
	static uint64_t x400 = 295LLU;
	uint64_t t97 = 670643097409625LLU;

    t97 = ((x397!=(x398==x399))/x400);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = INT16_MAX;
	int8_t x402 = 39;
	uint8_t x403 = 6U;
	int32_t x404 = 14662028;
	volatile int32_t t98 = 44;

    t98 = ((x401!=(x402==x403))/x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = 62U;
	static uint16_t x406 = 1U;
	uint16_t x407 = UINT16_MAX;
	uint32_t x408 = 35207U;
	uint32_t t99 = 1182U;

    t99 = ((x405!=(x406==x407))/x408);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = INT32_MAX;
	int64_t x410 = 27426906375205109LL;
	volatile int32_t x411 = INT32_MAX;
	volatile int8_t x412 = -1;
	volatile int32_t t100 = -237;

    t100 = ((x409!=(x410==x411))/x412);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = 54;
	static int32_t x414 = -2112677;
	int32_t x415 = INT32_MIN;

    t101 = ((x413!=(x414==x415))/x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	volatile int8_t x419 = INT8_MIN;
	uint64_t x420 = 1008158718796038LLU;

    t102 = ((x417!=(x418==x419))/x420);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = -2232674;
	static int32_t x423 = 0;
	uint32_t x424 = UINT32_MAX;
	uint32_t t103 = 38833U;

    t103 = ((x421!=(x422==x423))/x424);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x426 = -753;
	uint64_t x428 = 1749230712LLU;

    t104 = ((x425!=(x426==x427))/x428);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = -1LL;
	volatile int32_t x431 = 390;
	static int8_t x432 = -1;
	static int32_t t105 = -4;

    t105 = ((x429!=(x430==x431))/x432);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x433 = INT8_MIN;
	static int16_t x434 = -1;
	static int64_t x435 = 79887936056LL;
	volatile int32_t t106 = 2701;

    t106 = ((x433!=(x434==x435))/x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x437 = 87U;
	int16_t x438 = -153;
	int64_t x439 = -1LL;
	static volatile uint32_t x440 = 875104436U;
	uint32_t t107 = 96862U;

    t107 = ((x437!=(x438==x439))/x440);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = INT8_MIN;
	volatile int64_t x442 = 0LL;
	static int8_t x443 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;
	uint64_t t108 = 269LLU;

    t108 = ((x441!=(x442==x443))/x444);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = -5LL;
	volatile int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t109 = 123;

    t109 = ((x445!=(x446==x447))/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x450 = INT8_MIN;
	int32_t x451 = 604900432;
	volatile uint32_t x452 = 501813U;
	volatile uint32_t t110 = 314922U;

    t110 = ((x449!=(x450==x451))/x452);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = -1;
	int64_t x454 = -490681811112885841LL;
	volatile int8_t x455 = -1;
	int32_t x456 = -1;
	int32_t t111 = -37341261;

    t111 = ((x453!=(x454==x455))/x456);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x457 = INT16_MAX;
	volatile int16_t x459 = INT16_MIN;
	volatile int32_t x460 = INT32_MIN;
	int32_t t112 = 795938;

    t112 = ((x457!=(x458==x459))/x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x462 = 54;
	static int64_t x463 = INT64_MIN;
	int32_t x464 = 553;

    t113 = ((x461!=(x462==x463))/x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = INT64_MAX;
	int32_t x466 = 802681;
	static uint32_t x467 = UINT32_MAX;
	static int32_t x468 = -7;
	volatile int32_t t114 = -156224705;

    t114 = ((x465!=(x466==x467))/x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MIN;
	int32_t x471 = -1;
	int32_t x472 = -1;
	int32_t t115 = -2117119;

    t115 = ((x469!=(x470==x471))/x472);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x473 = -347LL;
	static int64_t x474 = -2271457934860794LL;
	volatile int32_t t116 = 51104047;

    t116 = ((x473!=(x474==x475))/x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x477 = INT32_MAX;
	int16_t x478 = INT16_MAX;
	static int8_t x479 = INT8_MIN;
	uint32_t x480 = 2103765484U;
	volatile uint32_t t117 = 4U;

    t117 = ((x477!=(x478==x479))/x480);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x481 = 7U;
	uint8_t x482 = UINT8_MAX;
	uint16_t x483 = 8330U;
	volatile int64_t x484 = -90597690783302LL;
	int64_t t118 = -997433697751601898LL;

    t118 = ((x481!=(x482==x483))/x484);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = INT16_MIN;
	static int32_t x486 = INT32_MAX;
	static int16_t x487 = -1;
	static uint32_t x488 = 328199U;
	volatile uint32_t t119 = 12155U;

    t119 = ((x485!=(x486==x487))/x488);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x489 = INT32_MIN;
	uint8_t x490 = UINT8_MAX;
	static int32_t x492 = -1;
	int32_t t120 = 2245;

    t120 = ((x489!=(x490==x491))/x492);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x493 = UINT32_MAX;
	int16_t x495 = 977;
	static volatile uint32_t x496 = 18711U;
	static uint32_t t121 = 3835271U;

    t121 = ((x493!=(x494==x495))/x496);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x497 = INT8_MAX;
	uint16_t x498 = 0U;
	static int16_t x499 = INT16_MIN;
	static int8_t x500 = -1;

    t122 = ((x497!=(x498==x499))/x500);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x501 = INT8_MAX;
	int8_t x502 = 1;
	uint32_t x503 = UINT32_MAX;
	int16_t x504 = INT16_MAX;
	volatile int32_t t123 = -35;

    t123 = ((x501!=(x502==x503))/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x505 = UINT32_MAX;
	int32_t x506 = 7793;
	uint32_t x507 = 11453U;
	int64_t x508 = -1LL;
	volatile int64_t t124 = 4001151940456903LL;

    t124 = ((x505!=(x506==x507))/x508);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x509 = -1LL;
	static int32_t x510 = 594175;
	static volatile int64_t x511 = 2744959LL;
	volatile int64_t x512 = -177258535928LL;
	volatile int64_t t125 = 895183LL;

    t125 = ((x509!=(x510==x511))/x512);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MIN;
	int16_t x515 = INT16_MAX;
	static volatile uint8_t x516 = 14U;
	volatile int32_t t126 = -47066;

    t126 = ((x513!=(x514==x515))/x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = INT8_MIN;
	int32_t x518 = INT32_MAX;
	volatile uint16_t x519 = 6U;
	static uint8_t x520 = 53U;
	static int32_t t127 = 367;

    t127 = ((x517!=(x518==x519))/x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x522 = 43;
	uint8_t x523 = UINT8_MAX;
	int64_t x524 = INT64_MIN;

    t128 = ((x521!=(x522==x523))/x524);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x525 = 127191;
	int64_t x526 = INT64_MIN;
	int16_t x527 = INT16_MIN;
	volatile int64_t x528 = INT64_MIN;
	int64_t t129 = 1005113976LL;

    t129 = ((x525!=(x526==x527))/x528);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x529 = UINT16_MAX;
	volatile int32_t x530 = 5019968;
	int16_t x531 = -2;
	int32_t x532 = INT32_MIN;
	static int32_t t130 = -7307134;

    t130 = ((x529!=(x530==x531))/x532);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x533 = -1;
	static int8_t x534 = -1;
	uint64_t x535 = 324434LLU;
	volatile int32_t x536 = 137437408;
	volatile int32_t t131 = -879;

    t131 = ((x533!=(x534==x535))/x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x537 = UINT64_MAX;
	uint32_t x540 = 1442681061U;
	static uint32_t t132 = 210221517U;

    t132 = ((x537!=(x538==x539))/x540);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x541 = 694600LL;
	int64_t x542 = INT64_MIN;
	uint64_t x543 = 6010849396816301LLU;
	int16_t x544 = INT16_MIN;
	int32_t t133 = 835;

    t133 = ((x541!=(x542==x543))/x544);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile int8_t x546 = 1;
	volatile int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MAX;
	int32_t t134 = 239407307;

    t134 = ((x545!=(x546==x547))/x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x550 = INT64_MIN;
	int32_t x551 = 10758922;
	uint64_t x552 = UINT64_MAX;
	uint64_t t135 = 249828604109173LLU;

    t135 = ((x549!=(x550==x551))/x552);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = INT32_MAX;
	static uint16_t x554 = UINT16_MAX;
	int32_t x555 = INT32_MAX;
	int8_t x556 = -29;
	volatile int32_t t136 = 194989;

    t136 = ((x553!=(x554==x555))/x556);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = -1;
	static volatile int16_t x558 = INT16_MIN;
	volatile uint8_t x559 = 59U;
	static int64_t x560 = INT64_MIN;

    t137 = ((x557!=(x558==x559))/x560);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	int32_t x563 = -160258491;
	static uint32_t x564 = 14U;
	uint32_t t138 = 184178363U;

    t138 = ((x561!=(x562==x563))/x564);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = -1LL;
	int8_t x567 = -1;
	int32_t t139 = 871137088;

    t139 = ((x565!=(x566==x567))/x568);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x570 = INT16_MIN;
	static int64_t x572 = -1LL;
	volatile int64_t t140 = 266830948981137818LL;

    t140 = ((x569!=(x570==x571))/x572);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x573 = -1;
	static volatile int8_t x574 = -1;
	int32_t x575 = -1;

    t141 = ((x573!=(x574==x575))/x576);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x578 = 47U;
	uint16_t x579 = UINT16_MAX;
	static int8_t x580 = -1;
	volatile int32_t t142 = 3438;

    t142 = ((x577!=(x578==x579))/x580);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x581 = INT16_MAX;
	volatile int16_t x582 = INT16_MAX;
	volatile int32_t t143 = 99;

    t143 = ((x581!=(x582==x583))/x584);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x585 = INT8_MAX;
	volatile int16_t x586 = INT16_MAX;
	int64_t x587 = INT64_MIN;
	volatile int32_t t144 = -22087923;

    t144 = ((x585!=(x586==x587))/x588);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x589 = 1584530U;
	volatile int32_t x590 = 503743;
	static volatile int32_t t145 = -10241;

    t145 = ((x589!=(x590==x591))/x592);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x593 = -1LL;
	uint16_t x594 = 284U;
	int32_t x595 = -39296724;
	volatile int32_t t146 = 564;

    t146 = ((x593!=(x594==x595))/x596);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x597 = 17475947037LLU;
	uint16_t x598 = UINT16_MAX;
	int8_t x599 = INT8_MIN;
	volatile uint64_t x600 = 104581417365850LLU;
	volatile uint64_t t147 = 389150225LLU;

    t147 = ((x597!=(x598==x599))/x600);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x601 = INT8_MAX;
	uint32_t x602 = UINT32_MAX;
	static uint8_t x603 = 8U;
	int64_t x604 = INT64_MAX;
	int64_t t148 = 81LL;

    t148 = ((x601!=(x602==x603))/x604);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x605 = UINT64_MAX;
	int32_t x606 = 22043290;
	uint64_t x607 = UINT64_MAX;
	volatile int64_t x608 = INT64_MIN;
	volatile int64_t t149 = -1010179769090403LL;

    t149 = ((x605!=(x606==x607))/x608);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x609 = INT16_MIN;
	uint16_t x610 = 8U;
	static volatile int16_t x612 = -14;
	int32_t t150 = 622;

    t150 = ((x609!=(x610==x611))/x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x614 = -5;
	int32_t x615 = INT32_MAX;
	static int64_t t151 = -1159846LL;

    t151 = ((x613!=(x614==x615))/x616);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = -1;
	static int8_t x619 = INT8_MIN;
	volatile int32_t x620 = -846279;

    t152 = ((x617!=(x618==x619))/x620);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = -5;
	volatile int64_t x622 = -1LL;
	int16_t x623 = INT16_MIN;
	uint32_t x624 = UINT32_MAX;
	volatile uint32_t t153 = 4771U;

    t153 = ((x621!=(x622==x623))/x624);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x625 = -2721;
	volatile int32_t x626 = -1;
	static uint8_t x627 = 88U;
	int32_t x628 = INT32_MIN;
	volatile int32_t t154 = -6498;

    t154 = ((x625!=(x626==x627))/x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x629 = INT16_MIN;
	uint64_t x630 = 67736LLU;
	int16_t x631 = INT16_MAX;
	int8_t x632 = -1;

    t155 = ((x629!=(x630==x631))/x632);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x633 = 3638931435LL;
	static int64_t x634 = INT64_MIN;
	volatile int8_t x635 = -1;

    t156 = ((x633!=(x634==x635))/x636);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x637 = -1LL;
	int32_t x638 = 7846969;
	int8_t x640 = -1;
	volatile int32_t t157 = -11359;

    t157 = ((x637!=(x638==x639))/x640);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x641 = INT32_MIN;
	volatile int16_t x642 = -1;
	uint8_t x644 = UINT8_MAX;
	static int32_t t158 = 13;

    t158 = ((x641!=(x642==x643))/x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x646 = 1969U;
	int8_t x647 = -1;
	volatile uint64_t t159 = 3240406LLU;

    t159 = ((x645!=(x646==x647))/x648);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x650 = 0;
	volatile int8_t x651 = INT8_MIN;
	volatile uint64_t x652 = 529LLU;
	volatile uint64_t t160 = 51575135905053LLU;

    t160 = ((x649!=(x650==x651))/x652);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x653 = -1LL;
	volatile uint16_t x654 = 1U;
	uint32_t t161 = 93160467U;

    t161 = ((x653!=(x654==x655))/x656);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x657 = 14418336U;
	int16_t x658 = INT16_MIN;
	int8_t x659 = -1;
	volatile int32_t t162 = 3;

    t162 = ((x657!=(x658==x659))/x660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x662 = 55529582LLU;
	uint16_t x664 = 68U;

    t163 = ((x661!=(x662==x663))/x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x666 = INT32_MIN;
	uint16_t x667 = 1379U;
	int64_t x668 = INT64_MAX;

    t164 = ((x665!=(x666==x667))/x668);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x670 = INT32_MAX;
	int8_t x671 = 32;
	static uint8_t x672 = 8U;
	int32_t t165 = 5972;

    t165 = ((x669!=(x670==x671))/x672);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x673 = -1;
	volatile int64_t x676 = INT64_MIN;

    t166 = ((x673!=(x674==x675))/x676);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x677 = 16827299772LL;
	uint64_t x678 = 24545172913LLU;
	int32_t x679 = INT32_MIN;
	int64_t x680 = -14742576LL;
	static volatile int64_t t167 = -451177LL;

    t167 = ((x677!=(x678==x679))/x680);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x681 = INT32_MIN;
	uint32_t x682 = 6357705U;
	int32_t x683 = -600;
	int64_t x684 = 233LL;
	static int64_t t168 = 90777438349LL;

    t168 = ((x681!=(x682==x683))/x684);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x685 = 25;
	int32_t x686 = INT32_MIN;
	static volatile int32_t x687 = 561657302;
	static int8_t x688 = -2;
	int32_t t169 = 234;

    t169 = ((x685!=(x686==x687))/x688);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x690 = 1;
	uint64_t x691 = UINT64_MAX;
	static volatile int32_t t170 = 24519;

    t170 = ((x689!=(x690==x691))/x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint16_t x694 = UINT16_MAX;
	static int16_t x695 = INT16_MIN;
	volatile int32_t t171 = -231;

    t171 = ((x693!=(x694==x695))/x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x697 = 96;
	volatile int8_t x698 = INT8_MAX;
	static int16_t x700 = INT16_MAX;

    t172 = ((x697!=(x698==x699))/x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x701 = INT64_MIN;
	int32_t x703 = INT32_MIN;
	int16_t x704 = 1;
	volatile int32_t t173 = -2861;

    t173 = ((x701!=(x702==x703))/x704);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x706 = 0U;
	int8_t x708 = INT8_MAX;
	int32_t t174 = 114410705;

    t174 = ((x705!=(x706==x707))/x708);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x709 = INT32_MIN;
	static int16_t x710 = 570;
	uint8_t x711 = 8U;
	volatile int64_t t175 = 367586546288LL;

    t175 = ((x709!=(x710==x711))/x712);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x713 = -1;
	int32_t x714 = INT32_MIN;
	int8_t x715 = -1;
	static int32_t x716 = 647;
	volatile int32_t t176 = 135;

    t176 = ((x713!=(x714==x715))/x716);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x717 = 4818;
	int16_t x718 = INT16_MIN;
	uint16_t x719 = 998U;
	int64_t x720 = INT64_MIN;
	volatile int64_t t177 = 1LL;

    t177 = ((x717!=(x718==x719))/x720);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x722 = INT8_MIN;
	uint32_t x724 = 3011838U;
	volatile uint32_t t178 = 14829968U;

    t178 = ((x721!=(x722==x723))/x724);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x726 = INT8_MAX;
	volatile int16_t x727 = INT16_MAX;
	static int32_t x728 = INT32_MIN;
	static int32_t t179 = -170084;

    t179 = ((x725!=(x726==x727))/x728);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x730 = -25;
	static int16_t x732 = -1911;
	volatile int32_t t180 = 684;

    t180 = ((x729!=(x730==x731))/x732);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x734 = -11442314;
	uint32_t x735 = UINT32_MAX;
	static int32_t x736 = INT32_MIN;
	int32_t t181 = 1626;

    t181 = ((x733!=(x734==x735))/x736);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	int8_t x738 = INT8_MIN;
	int32_t x739 = -1;
	static volatile int8_t x740 = -1;

    t182 = ((x737!=(x738==x739))/x740);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x741 = 6U;
	static int32_t x742 = 666989;
	int8_t x743 = INT8_MIN;
	int64_t x744 = INT64_MIN;
	volatile int64_t t183 = 2783LL;

    t183 = ((x741!=(x742==x743))/x744);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x745 = -196LL;
	int8_t x746 = INT8_MAX;
	int32_t x747 = -973563934;
	volatile int32_t t184 = -5767;

    t184 = ((x745!=(x746==x747))/x748);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = INT8_MIN;
	uint16_t x751 = 5U;
	int16_t x752 = INT16_MIN;
	static volatile int32_t t185 = -433460;

    t185 = ((x749!=(x750==x751))/x752);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x754 = INT16_MIN;
	int8_t x755 = 0;
	int64_t x756 = INT64_MAX;
	static volatile int64_t t186 = 10LL;

    t186 = ((x753!=(x754==x755))/x756);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x757 = INT64_MIN;
	uint8_t x758 = 3U;
	static volatile int32_t x759 = INT32_MIN;
	int64_t x760 = INT64_MIN;
	int64_t t187 = -21235502624353488LL;

    t187 = ((x757!=(x758==x759))/x760);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x761 = 147905120U;
	static uint8_t x762 = UINT8_MAX;
	volatile int8_t x763 = INT8_MIN;

    t188 = ((x761!=(x762==x763))/x764);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x765 = UINT32_MAX;
	int16_t x766 = 0;
	int8_t x767 = INT8_MIN;
	volatile int32_t t189 = 7776945;

    t189 = ((x765!=(x766==x767))/x768);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x769 = 81LLU;
	int8_t x771 = INT8_MAX;
	static volatile uint32_t x772 = UINT32_MAX;
	uint32_t t190 = 81U;

    t190 = ((x769!=(x770==x771))/x772);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x773 = UINT32_MAX;
	static volatile uint32_t x774 = UINT32_MAX;
	uint8_t x775 = UINT8_MAX;
	int64_t x776 = 4LL;
	volatile int64_t t191 = -374LL;

    t191 = ((x773!=(x774==x775))/x776);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x777 = -372590085762615780LL;
	static volatile int32_t x778 = -490411;
	int16_t x779 = INT16_MAX;
	volatile int32_t t192 = 234427;

    t192 = ((x777!=(x778==x779))/x780);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x781 = -1;
	int8_t x782 = -1;
	static uint64_t x783 = UINT64_MAX;
	int32_t x784 = INT32_MIN;

    t193 = ((x781!=(x782==x783))/x784);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x785 = INT8_MIN;
	volatile int16_t x786 = -1;
	int32_t x788 = -1;
	volatile int32_t t194 = 1;

    t194 = ((x785!=(x786==x787))/x788);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MIN;
	int8_t x791 = INT8_MIN;
	int8_t x792 = INT8_MIN;
	int32_t t195 = 271991219;

    t195 = ((x789!=(x790==x791))/x792);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x793 = -2524;
	int16_t x794 = -1;
	int8_t x795 = INT8_MAX;
	int64_t x796 = 125797LL;

    t196 = ((x793!=(x794==x795))/x796);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x797 = -1LL;
	uint16_t x798 = 125U;
	uint32_t x799 = UINT32_MAX;
	uint64_t x800 = UINT64_MAX;
	static volatile uint64_t t197 = 525369062201104LLU;

    t197 = ((x797!=(x798==x799))/x800);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x802 = UINT64_MAX;
	static uint16_t x803 = 236U;

    t198 = ((x801!=(x802==x803))/x804);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x806 = 119U;
	static int16_t x807 = INT16_MIN;
	volatile uint32_t x808 = 379U;
	volatile uint32_t t199 = 3U;

    t199 = ((x805!=(x806==x807))/x808);

    if (t199 != 0U) { NG(); } else { ; }
	
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

