
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

volatile int16_t x3 = INT16_MIN;
int32_t x8 = INT32_MAX;
int8_t x10 = -1;
uint64_t x14 = UINT64_MAX;
int64_t x16 = -1LL;
volatile int64_t t3 = -2321736021054163625LL;
int64_t t4 = INT64_MAX;
static int8_t x27 = -1;
uint16_t x29 = 9U;
static uint8_t x32 = 2U;
int32_t t7 = 0;
int32_t x34 = INT32_MIN;
uint64_t x40 = 24043LLU;
volatile uint64_t x45 = 2420882431LLU;
int64_t x46 = INT64_MAX;
static volatile int16_t x63 = INT16_MAX;
int64_t x64 = INT64_MAX;
volatile int64_t t15 = INT64_MAX;
int8_t x67 = -13;
uint32_t x71 = UINT32_MAX;
int64_t x76 = INT64_MIN;
int16_t x80 = -301;
int64_t x85 = 212LL;
static int16_t x86 = 19;
int32_t x87 = -1;
int64_t x88 = INT64_MIN;
int64_t t20 = 8452164512LL;
int32_t x94 = 0;
static volatile uint32_t t22 = UINT32_MAX;
int8_t x103 = INT8_MIN;
uint32_t x111 = UINT32_MAX;
int16_t x113 = -1;
static volatile int16_t x114 = 345;
int32_t x117 = INT32_MAX;
int64_t x127 = INT64_MAX;
static int64_t t29 = 3LL;
static volatile int64_t t30 = 2513LL;
int32_t x133 = -9;
static uint32_t x164 = 13372604U;
int16_t x170 = INT16_MIN;
int16_t x174 = -1;
static uint32_t x175 = 480523U;
uint64_t t40 = 4618870556960LLU;
volatile int64_t t41 = -6125LL;
int16_t x184 = 12;
int64_t x187 = INT64_MIN;
int16_t x189 = -23;
uint32_t x190 = 7242836U;
uint16_t x191 = UINT16_MAX;
int32_t t45 = 1;
int64_t x197 = 459202170704870517LL;
static uint16_t x207 = UINT16_MAX;
int32_t x212 = 123475;
uint16_t x214 = 6U;
static int16_t x224 = INT16_MAX;
volatile int32_t x228 = INT32_MIN;
static int8_t x236 = INT8_MAX;
static uint8_t x251 = 3U;
int32_t x258 = -3;
static uint64_t x259 = 7922070851LLU;
uint8_t x261 = 15U;
volatile uint32_t x264 = 12373U;
int16_t x267 = -1;
int8_t x271 = -1;
volatile uint8_t x276 = UINT8_MAX;
int32_t t67 = -2781;
volatile uint16_t x288 = 18U;
static int32_t x291 = INT32_MAX;
static int32_t t69 = -5;
static int32_t x297 = 6207;
uint16_t x303 = UINT16_MAX;
int8_t x310 = 54;
static int32_t t73 = -316167;
volatile int64_t t74 = -1429373405549LL;
int64_t x317 = INT64_MIN;
static int64_t x322 = -1LL;
int8_t x325 = INT8_MAX;
volatile int8_t x327 = 3;
int32_t x332 = INT32_MIN;
volatile uint8_t x339 = 6U;
volatile int64_t x340 = INT64_MAX;
uint64_t x346 = 136738LLU;
int32_t x351 = -269499555;
static int32_t t84 = -74607505;
volatile int8_t x357 = INT8_MIN;
volatile int64_t x360 = INT64_MIN;
int64_t t85 = -14LL;
int32_t x364 = -1;
int32_t t86 = -249;
volatile int32_t t87 = -26;
static uint32_t x377 = UINT32_MAX;
static int16_t x379 = 53;
uint8_t x381 = UINT8_MAX;
uint64_t x384 = UINT64_MAX;
int32_t x387 = 30877237;
volatile uint64_t x389 = UINT64_MAX;
volatile int32_t t95 = 0;
int32_t t96 = 28827692;
volatile int32_t t97 = 5182491;
uint64_t x411 = 27LLU;
volatile int32_t x412 = INT32_MIN;
static uint64_t x417 = UINT64_MAX;
volatile int64_t x419 = INT64_MIN;
volatile int64_t x444 = -1LL;
int8_t x449 = INT8_MIN;
uint32_t x452 = UINT32_MAX;
int64_t x454 = -1LL;
int64_t x459 = -1LL;
int64_t t110 = -4387641185034LL;
static int16_t x470 = INT16_MAX;
uint32_t x474 = 111U;
static int16_t x476 = INT16_MAX;
uint8_t x479 = 4U;
static int16_t x480 = 13;
uint64_t x481 = UINT64_MAX;
volatile int32_t t116 = -1;
static int8_t x488 = INT8_MIN;
int8_t x493 = -1;
static volatile int16_t x501 = 0;
volatile uint64_t t121 = 914901166LLU;
static int64_t x506 = -1LL;
uint16_t x510 = 5U;
int32_t t123 = -11;
uint64_t x521 = 89797LLU;
static uint16_t x524 = 3U;
volatile uint64_t x530 = 1LLU;
uint8_t x535 = 34U;
int8_t x538 = INT8_MAX;
volatile uint16_t x542 = 23001U;
int16_t x544 = -1;
static int64_t x548 = -243LL;
uint64_t x549 = UINT64_MAX;
static uint16_t x551 = UINT16_MAX;
int32_t t133 = 0;
static volatile int16_t x562 = INT16_MIN;
static volatile int16_t x565 = 3;
uint32_t x583 = UINT32_MAX;
int64_t x592 = INT64_MAX;
int64_t t142 = INT64_MAX;
int16_t x593 = INT16_MIN;
volatile uint16_t x595 = 4838U;
uint8_t x597 = 5U;
uint8_t x598 = UINT8_MAX;
int64_t t144 = -127245950LL;
volatile int32_t x608 = 13;
int8_t x618 = INT8_MIN;
volatile int64_t t151 = -4026542568240344449LL;
uint8_t x631 = 2U;
volatile int32_t x642 = 7;
static int32_t t155 = 6649337;
int64_t x650 = INT64_MIN;
static int16_t x658 = -1;
uint8_t x665 = UINT8_MAX;
int16_t x670 = -1;
volatile int64_t x675 = -11920030451LL;
static volatile uint64_t x676 = 3334452025494297515LLU;
volatile uint64_t t163 = 130767841526LLU;
int8_t x680 = INT8_MAX;
int32_t x682 = INT32_MAX;
uint32_t t165 = 41U;
uint64_t x687 = 7309005945460186LLU;
uint32_t x688 = 1490U;
int8_t x695 = 1;
volatile uint32_t t168 = UINT32_MAX;
volatile int32_t t169 = -1;
uint16_t x701 = 0U;
static int32_t t170 = -334621;
uint16_t x706 = 9U;
int64_t t171 = -297445LL;
uint64_t x714 = 60LLU;
volatile int16_t x722 = INT16_MAX;
volatile int64_t x723 = INT64_MAX;
int64_t t175 = 11LL;
int64_t x728 = -1LL;
int64_t x730 = -107791LL;
volatile int64_t x732 = 110011370279860264LL;
uint64_t x738 = UINT64_MAX;
volatile uint32_t t179 = 3885U;
int32_t x752 = -3747300;
uint16_t x753 = 1872U;
static int32_t x760 = -252216;
uint8_t x765 = 13U;
static int8_t x766 = 1;
int64_t x771 = -177894LL;
int64_t x774 = INT64_MIN;
static volatile int32_t t189 = 379;
int32_t x782 = 656111;
volatile int32_t t193 = -826;
int8_t x797 = 7;
uint16_t x798 = 1U;
int16_t x800 = INT16_MAX;
int8_t x801 = -1;
uint64_t x805 = UINT64_MAX;
int32_t x813 = 6;
int64_t x818 = 6863867369LL;


void f0(void) {
    	int32_t x1 = 639600;
	static uint64_t x2 = 297LLU;
	uint64_t x4 = 1089940563994LLU;
	volatile uint64_t t0 = 62006660871571929LLU;

    t0 = ((x1!=(x2/x3))|x4);

    if (t0 != 1089940563995LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -827407;
	static int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = INT32_MAX;

    t1 = ((x5!=(x6/x7))|x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 21U;
	int64_t x11 = INT64_MIN;
	volatile int64_t x12 = -2659LL;
	static volatile int64_t t2 = 0LL;

    t2 = ((x9!=(x10/x11))|x12);

    if (t2 != -2659LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 201311727338LLU;
	static uint32_t x15 = UINT32_MAX;

    t3 = ((x13!=(x14/x15))|x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	volatile int32_t x19 = INT32_MIN;
	static volatile int64_t x20 = INT64_MAX;

    t4 = ((x17!=(x18/x19))|x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -104;
	uint16_t x22 = UINT16_MAX;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = -13LL;
	static volatile int64_t t5 = -911509864LL;

    t5 = ((x21!=(x22/x23))|x24);

    if (t5 != -13LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -105636432348212LL;
	int16_t x26 = INT16_MIN;
	int8_t x28 = -6;
	static int32_t t6 = 2158733;

    t6 = ((x25!=(x26/x27))|x28);

    if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	uint8_t x31 = 118U;

    t7 = ((x29!=(x30/x31))|x32);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	int64_t x35 = 7010316638966LL;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 0;

    t8 = ((x33!=(x34/x35))|x36);

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 1754;
	static int8_t x39 = INT8_MIN;
	static volatile uint64_t t9 = 3193490294590531389LLU;

    t9 = ((x37!=(x38/x39))|x40);

    if (t9 != 24043LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	static int16_t x42 = -5;
	static int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = -66364759;

    t10 = ((x41!=(x42/x43))|x44);

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x47 = INT64_MAX;
	static volatile uint8_t x48 = UINT8_MAX;
	int32_t t11 = 8633;

    t11 = ((x45!=(x46/x47))|x48);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MIN;
	volatile int64_t x50 = INT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -7688;

    t12 = ((x49!=(x50/x51))|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 37546LL;
	uint64_t x54 = 94LLU;
	static int32_t x55 = -458250;
	volatile int32_t x56 = -1;
	int32_t t13 = -24;

    t13 = ((x53!=(x54/x55))|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 7U;
	uint8_t x58 = 3U;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 33616;

    t14 = ((x57!=(x58/x59))|x60);

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	static int32_t x62 = -19413;

    t15 = ((x61!=(x62/x63))|x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MIN;
	int16_t x66 = 1;
	int32_t x68 = 7321;
	volatile int32_t t16 = -12937971;

    t16 = ((x65!=(x66/x67))|x68);

    if (t16 != 7321) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -54;
	int32_t x70 = 13306;
	static int8_t x72 = -1;
	int32_t t17 = 117414;

    t17 = ((x69!=(x70/x71))|x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 24412U;
	int16_t x74 = 5;
	static int8_t x75 = -1;
	static int64_t t18 = 425442LL;

    t18 = ((x73!=(x74/x75))|x76);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 3U;
	int64_t x78 = -88661LL;
	uint32_t x79 = 110030U;
	int32_t t19 = -63328;

    t19 = ((x77!=(x78/x79))|x80);

    if (t19 != -301) { NG(); } else { ; }
	
}

void f20(void) {
    

    t20 = ((x85!=(x86/x87))|x88);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -1145LL;
	int64_t x90 = -371546213177953323LL;
	uint32_t x91 = 936387653U;
	int64_t x92 = -1LL;
	volatile int64_t t21 = 982LL;

    t21 = ((x89!=(x90/x91))|x92);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MAX;
	volatile int64_t x95 = INT64_MIN;
	static volatile uint32_t x96 = UINT32_MAX;

    t22 = ((x93!=(x94/x95))|x96);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MAX;
	int8_t x104 = 12;
	int32_t t23 = 5769;

    t23 = ((x101!=(x102/x103))|x104);

    if (t23 != 13) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;
	int64_t x108 = -1LL;
	static volatile int64_t t24 = 48032074180928LL;

    t24 = ((x105!=(x106/x107))|x108);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MAX;
	uint32_t x112 = 1499611381U;
	uint32_t t25 = 13805U;

    t25 = ((x109!=(x110/x111))|x112);

    if (t25 != 1499611381U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x115 = 63U;
	int32_t x116 = -1;
	int32_t t26 = 2990966;

    t26 = ((x113!=(x114/x115))|x116);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x118 = 12242376U;
	static int64_t x119 = INT64_MIN;
	int64_t x120 = -1LL;
	static int64_t t27 = 256761LL;

    t27 = ((x117!=(x118/x119))|x120);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MAX;
	uint8_t x122 = 44U;
	uint8_t x123 = 1U;
	int16_t x124 = -53;
	volatile int32_t t28 = -20153;

    t28 = ((x121!=(x122/x123))|x124);

    if (t28 != -53) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = 19U;
	uint32_t x126 = UINT32_MAX;
	int64_t x128 = INT64_MIN;

    t29 = ((x125!=(x126/x127))|x128);

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 2648U;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	int64_t x132 = INT64_MIN;

    t30 = ((x129!=(x130/x131))|x132);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x134 = INT8_MIN;
	static uint32_t x135 = 3291U;
	int8_t x136 = INT8_MIN;
	int32_t t31 = 58708014;

    t31 = ((x133!=(x134/x135))|x136);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = 2U;
	int8_t x138 = -61;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = UINT16_MAX;
	int32_t t32 = -6798;

    t32 = ((x137!=(x138/x139))|x140);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = INT16_MAX;
	volatile int32_t x142 = INT32_MIN;
	volatile int16_t x143 = 3;
	uint64_t x144 = 1338161LLU;
	uint64_t t33 = 90803742255849011LLU;

    t33 = ((x141!=(x142/x143))|x144);

    if (t33 != 1338161LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = -1;
	int64_t x146 = -1LL;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 15;

    t34 = ((x145!=(x146/x147))|x148);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x154 = -1009;
	int8_t x155 = 1;
	int32_t x156 = -667;
	volatile int32_t t35 = 324727471;

    t35 = ((x153!=(x154/x155))|x156);

    if (t35 != -667) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = 0;
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = 181306889978359487LL;
	int32_t x160 = 10041042;
	volatile int32_t t36 = -31593;

    t36 = ((x157!=(x158/x159))|x160);

    if (t36 != 10041042) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 0U;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t t37 = 2999288U;

    t37 = ((x161!=(x162/x163))|x164);

    if (t37 != 13372604U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = -5;
	int32_t x166 = INT32_MAX;
	static volatile uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t38 = 16508906;

    t38 = ((x165!=(x166/x167))|x168);

    if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MAX;
	volatile int64_t x171 = INT64_MAX;
	int32_t x172 = -1;
	static volatile int32_t t39 = -48;

    t39 = ((x169!=(x170/x171))|x172);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = -1;
	uint64_t x176 = 90343270051547856LLU;

    t40 = ((x173!=(x174/x175))|x176);

    if (t40 != 90343270051547857LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = -1;
	static uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 11007U;
	int64_t x180 = INT64_MIN;

    t41 = ((x177!=(x178/x179))|x180);

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = INT32_MAX;
	volatile uint8_t x182 = 3U;
	volatile int32_t x183 = INT32_MAX;
	volatile int32_t t42 = -31217;

    t42 = ((x181!=(x182/x183))|x184);

    if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x185 = 27;
	static volatile int32_t x186 = -161;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t43 = 892015;

    t43 = ((x185!=(x186/x187))|x188);

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x192 = INT64_MIN;
	int64_t t44 = 1116820013737LL;

    t44 = ((x189!=(x190/x191))|x192);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -2228064035821644LL;
	int16_t x194 = 19;
	static int16_t x195 = 849;
	int32_t x196 = -1749915;

    t45 = ((x193!=(x194/x195))|x196);

    if (t45 != -1749915) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x198 = 566U;
	int8_t x199 = INT8_MIN;
	int64_t x200 = -1LL;
	volatile int64_t t46 = -28LL;

    t46 = ((x197!=(x198/x199))|x200);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x201 = 0U;
	uint16_t x202 = 22467U;
	static volatile int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MAX;
	volatile int32_t t47 = -943;

    t47 = ((x201!=(x202/x203))|x204);

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = INT8_MIN;
	static uint32_t x206 = UINT32_MAX;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

    t48 = ((x205!=(x206/x207))|x208);

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;
	uint16_t x211 = 15389U;
	volatile int32_t t49 = 1072;

    t49 = ((x209!=(x210/x211))|x212);

    if (t49 != 123475) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	int8_t x215 = -1;
	int32_t x216 = -1;
	volatile int32_t t50 = 14925095;

    t50 = ((x213!=(x214/x215))|x216);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	volatile int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t51 = 15;

    t51 = ((x217!=(x218/x219))|x220);

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x221 = INT16_MIN;
	volatile int64_t x222 = 473LL;
	volatile int8_t x223 = 7;
	volatile int32_t t52 = -4497;

    t52 = ((x221!=(x222/x223))|x224);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x225 = -65;
	uint64_t x226 = 567LLU;
	uint32_t x227 = UINT32_MAX;
	volatile int32_t t53 = -1584;

    t53 = ((x225!=(x226/x227))|x228);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	volatile int64_t x230 = 967384LL;
	volatile uint8_t x231 = 7U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t54 = -2311LL;

    t54 = ((x229!=(x230/x231))|x232);

    if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x233 = INT64_MAX;
	int64_t x234 = -1LL;
	static uint16_t x235 = 6121U;
	static volatile int32_t t55 = -42;

    t55 = ((x233!=(x234/x235))|x236);

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x237 = INT16_MAX;
	int64_t x238 = -722581LL;
	static uint32_t x239 = 9738339U;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t56 = UINT32_MAX;

    t56 = ((x237!=(x238/x239))|x240);

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = -458530LL;
	uint64_t x242 = 107203179LLU;
	static volatile int16_t x243 = INT16_MIN;
	uint16_t x244 = 123U;
	static volatile int32_t t57 = 53;

    t57 = ((x241!=(x242/x243))|x244);

    if (t57 != 123) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x245 = INT64_MIN;
	volatile int64_t x246 = INT64_MAX;
	uint8_t x247 = 57U;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t58 = -5050375;

    t58 = ((x245!=(x246/x247))|x248);

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	volatile int32_t x250 = 0;
	volatile uint32_t x252 = 42284997U;
	uint32_t t59 = 288008237U;

    t59 = ((x249!=(x250/x251))|x252);

    if (t59 != 42284997U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = 32933973U;
	static int8_t x255 = INT8_MIN;
	uint32_t x256 = 28903U;
	uint32_t t60 = 5U;

    t60 = ((x253!=(x254/x255))|x256);

    if (t60 != 28903U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = -1;
	int8_t x260 = -3;
	int32_t t61 = 54950735;

    t61 = ((x257!=(x258/x259))|x260);

    if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x262 = 93LL;
	int32_t x263 = -3;
	uint32_t t62 = 111U;

    t62 = ((x261!=(x262/x263))|x264);

    if (t62 != 12373U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x265 = -1LL;
	volatile int32_t x266 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t63 = -25822;

    t63 = ((x265!=(x266/x267))|x268);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = -1;
	int16_t x270 = -2222;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = ((x269!=(x270/x271))|x272);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x273 = 24;
	int32_t x274 = 277049980;
	volatile int16_t x275 = INT16_MAX;
	int32_t t65 = 12;

    t65 = ((x273!=(x274/x275))|x276);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	uint8_t x278 = 3U;
	uint8_t x279 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t66 = 262064LL;

    t66 = ((x277!=(x278/x279))|x280);

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	int8_t x283 = -7;
	static int8_t x284 = INT8_MIN;

    t67 = ((x281!=(x282/x283))|x284);

    if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x285 = INT32_MIN;
	uint16_t x286 = 942U;
	int32_t x287 = INT32_MAX;
	int32_t t68 = 89285307;

    t68 = ((x285!=(x286/x287))|x288);

    if (t68 != 19) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x289 = 13U;
	static int8_t x290 = -11;
	int16_t x292 = -265;

    t69 = ((x289!=(x290/x291))|x292);

    if (t69 != -265) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MAX;
	static volatile uint8_t x300 = UINT8_MAX;
	int32_t t70 = 348789;

    t70 = ((x297!=(x298/x299))|x300);

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MAX;
	static int32_t x302 = 181;
	int32_t x304 = 6;
	int32_t t71 = -28;

    t71 = ((x301!=(x302/x303))|x304);

    if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static int8_t x307 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	static int32_t t72 = -3246;

    t72 = ((x305!=(x306/x307))|x308);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x309 = 899181623863703220LLU;
	static int8_t x311 = 1;
	static int16_t x312 = 11;

    t73 = ((x309!=(x310/x311))|x312);

    if (t73 != 11) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	uint32_t x315 = 1581747025U;
	int64_t x316 = INT64_MIN;

    t74 = ((x313!=(x314/x315))|x316);

    if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = 28912U;
	static uint32_t t75 = 1923U;

    t75 = ((x317!=(x318/x319))|x320);

    if (t75 != 28913U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = -1LL;
	int64_t x323 = -1LL;
	uint16_t x324 = 0U;
	int32_t t76 = -15403795;

    t76 = ((x321!=(x322/x323))|x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x326 = INT16_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t77 = -337;

    t77 = ((x325!=(x326/x327))|x328);

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x329 = 6552690LLU;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = -2;
	volatile int32_t t78 = -23014;

    t78 = ((x329!=(x330/x331))|x332);

    if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = UINT16_MAX;
	int32_t t79 = 145;

    t79 = ((x333!=(x334/x335))|x336);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x337 = 71U;
	static int8_t x338 = 2;
	int64_t t80 = INT64_MAX;

    t80 = ((x337!=(x338/x339))|x340);

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x341 = INT16_MAX;
	uint8_t x342 = 2U;
	int16_t x343 = 3047;
	int32_t x344 = -863494;
	int32_t t81 = 5;

    t81 = ((x341!=(x342/x343))|x344);

    if (t81 != -863493) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 5U;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	int32_t t82 = 1;

    t82 = ((x345!=(x346/x347))|x348);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = 25874003LLU;
	volatile uint32_t x350 = UINT32_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t83 = 3;

    t83 = ((x349!=(x350/x351))|x352);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x353 = 200618197747130LLU;
	int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;

    t84 = ((x353!=(x354/x355))|x356);

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x358 = UINT16_MAX;
	uint16_t x359 = UINT16_MAX;

    t85 = ((x357!=(x358/x359))|x360);

    if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	static int16_t x363 = INT16_MIN;

    t86 = ((x361!=(x362/x363))|x364);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x365 = 8;
	static uint8_t x366 = 5U;
	static uint64_t x367 = UINT64_MAX;
	uint16_t x368 = 2005U;

    t87 = ((x365!=(x366/x367))|x368);

    if (t87 != 2005) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x369 = -3;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t88 = -136200692730767067LL;

    t88 = ((x369!=(x370/x371))|x372);

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -1;
	volatile int32_t t89 = -15626;

    t89 = ((x373!=(x374/x375))|x376);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x378 = -1;
	int16_t x380 = 49;
	volatile int32_t t90 = 359;

    t90 = ((x377!=(x378/x379))|x380);

    if (t90 != 49) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x382 = -105586LL;
	uint8_t x383 = 2U;
	static uint64_t t91 = UINT64_MAX;

    t91 = ((x381!=(x382/x383))|x384);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = 0;
	static int16_t x386 = -2;
	uint32_t x388 = 335U;
	volatile uint32_t t92 = 30U;

    t92 = ((x385!=(x386/x387))|x388);

    if (t92 != 335U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t93 = 90639530792397767LL;

    t93 = ((x389!=(x390/x391))|x392);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -1;
	uint64_t x394 = 40LLU;
	int8_t x395 = -4;
	volatile uint64_t x396 = 33029816LLU;
	volatile uint64_t t94 = 1922856301211LLU;

    t94 = ((x393!=(x394/x395))|x396);

    if (t94 != 33029817LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = 1893317LL;
	int32_t x398 = -13978796;
	int8_t x399 = -3;
	volatile int16_t x400 = -13;

    t95 = ((x397!=(x398/x399))|x400);

    if (t95 != -13) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x401 = 25U;
	volatile int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	int16_t x404 = 62;

    t96 = ((x401!=(x402/x403))|x404);

    if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x405 = 15672U;
	int32_t x406 = INT32_MAX;
	uint16_t x407 = 348U;
	int8_t x408 = -3;

    t97 = ((x405!=(x406/x407))|x408);

    if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x409 = -58693898;
	int16_t x410 = -6641;
	volatile int32_t t98 = -6278053;

    t98 = ((x409!=(x410/x411))|x412);

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x413 = -1;
	volatile int32_t x414 = -1760;
	int16_t x415 = INT16_MIN;
	int16_t x416 = -3;
	volatile int32_t t99 = 261867;

    t99 = ((x413!=(x414/x415))|x416);

    if (t99 != -3) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x418 = 1U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t100 = -422282;

    t100 = ((x417!=(x418/x419))|x420);

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x421 = 11U;
	int8_t x422 = 0;
	static int32_t x423 = INT32_MAX;
	static int16_t x424 = -1;
	volatile int32_t t101 = -82;

    t101 = ((x421!=(x422/x423))|x424);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x425 = INT16_MIN;
	int16_t x426 = -198;
	uint32_t x427 = 884152U;
	int16_t x428 = 3156;
	volatile int32_t t102 = 80;

    t102 = ((x425!=(x426/x427))|x428);

    if (t102 != 3157) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = -303LL;
	int16_t x430 = -1;
	volatile int16_t x431 = INT16_MIN;
	static int32_t x432 = -31;
	static volatile int32_t t103 = 89355349;

    t103 = ((x429!=(x430/x431))|x432);

    if (t103 != -31) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	int64_t x434 = INT64_MIN;
	int64_t x435 = 112624408141LL;
	volatile uint32_t x436 = UINT32_MAX;
	uint32_t t104 = UINT32_MAX;

    t104 = ((x433!=(x434/x435))|x436);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = -1;
	uint16_t x439 = 15504U;
	uint64_t x440 = 7LLU;
	volatile uint64_t t105 = 31319LLU;

    t105 = ((x437!=(x438/x439))|x440);

    if (t105 != 7LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x441 = 0;
	int8_t x442 = INT8_MIN;
	int16_t x443 = -1;
	volatile int64_t t106 = 32427LL;

    t106 = ((x441!=(x442/x443))|x444);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x445 = INT16_MIN;
	int32_t x446 = -1;
	int64_t x447 = -1LL;
	volatile int32_t x448 = INT32_MIN;
	int32_t t107 = 14;

    t107 = ((x445!=(x446/x447))|x448);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x450 = 416716100499277685LLU;
	static int8_t x451 = INT8_MIN;
	uint32_t t108 = UINT32_MAX;

    t108 = ((x449!=(x450/x451))|x452);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x453 = -13LL;
	static volatile uint64_t x455 = 3496421068199LLU;
	static int8_t x456 = INT8_MAX;
	volatile int32_t t109 = 832343482;

    t109 = ((x453!=(x454/x455))|x456);

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x457 = 0U;
	static volatile uint8_t x458 = 120U;
	int64_t x460 = 2938948193530661LL;

    t110 = ((x457!=(x458/x459))|x460);

    if (t110 != 2938948193530661LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = -3;
	int16_t x462 = 855;
	volatile uint16_t x463 = UINT16_MAX;
	uint8_t x464 = 0U;
	int32_t t111 = -1569785;

    t111 = ((x461!=(x462/x463))|x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x465 = 5536;
	int32_t x466 = INT32_MIN;
	uint64_t x467 = 1479195081478LLU;
	uint32_t x468 = 28792U;
	uint32_t t112 = 142799U;

    t112 = ((x465!=(x466/x467))|x468);

    if (t112 != 28793U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x469 = 1373;
	volatile uint64_t x471 = 15LLU;
	int64_t x472 = -1LL;
	volatile int64_t t113 = -41904766216731LL;

    t113 = ((x469!=(x470/x471))|x472);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x473 = 214LLU;
	volatile uint16_t x475 = UINT16_MAX;
	int32_t t114 = 1343792;

    t114 = ((x473!=(x474/x475))|x476);

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MAX;
	int32_t x478 = 166111;
	int32_t t115 = -228712593;

    t115 = ((x477!=(x478/x479))|x480);

    if (t115 != 13) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x482 = INT32_MIN;
	static uint16_t x483 = 443U;
	int16_t x484 = 1;

    t116 = ((x481!=(x482/x483))|x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = 3080423;
	volatile uint64_t x486 = 37533058416968LLU;
	static int8_t x487 = INT8_MIN;
	int32_t t117 = -69722;

    t117 = ((x485!=(x486/x487))|x488);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = INT16_MIN;
	uint8_t x490 = 42U;
	static int32_t x491 = -10;
	uint8_t x492 = 1U;
	volatile int32_t t118 = 976;

    t118 = ((x489!=(x490/x491))|x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x494 = 505;
	int32_t x495 = -1;
	static int8_t x496 = -1;
	int32_t t119 = -3144465;

    t119 = ((x493!=(x494/x495))|x496);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x497 = INT32_MIN;
	static uint32_t x498 = 0U;
	int64_t x499 = INT64_MIN;
	uint8_t x500 = 57U;
	static int32_t t120 = 3332;

    t120 = ((x497!=(x498/x499))|x500);

    if (t120 != 57) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x502 = INT16_MIN;
	static int8_t x503 = INT8_MIN;
	uint64_t x504 = 0LLU;

    t121 = ((x501!=(x502/x503))|x504);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x505 = 97U;
	volatile int16_t x507 = INT16_MIN;
	static uint8_t x508 = UINT8_MAX;
	int32_t t122 = 231;

    t122 = ((x505!=(x506/x507))|x508);

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x509 = 0;
	int64_t x511 = 4LL;
	int32_t x512 = INT32_MIN;

    t123 = ((x509!=(x510/x511))|x512);

    if (t123 != -2147483647) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = 50373;
	int8_t x514 = 0;
	uint64_t x515 = 68052786001581LLU;
	uint64_t x516 = 129573305092LLU;
	volatile uint64_t t124 = 13017LLU;

    t124 = ((x513!=(x514/x515))|x516);

    if (t124 != 129573305093LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x522 = -1;
	volatile int16_t x523 = -11;
	static volatile int32_t t125 = -177879235;

    t125 = ((x521!=(x522/x523))|x524);

    if (t125 != 3) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x525 = 99737271U;
	static uint16_t x526 = 334U;
	uint16_t x527 = 7U;
	static volatile int16_t x528 = INT16_MIN;
	int32_t t126 = -6826158;

    t126 = ((x525!=(x526/x527))|x528);

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x531 = INT64_MAX;
	static int8_t x532 = -1;
	volatile int32_t t127 = 3491;

    t127 = ((x529!=(x530/x531))|x532);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x533 = INT8_MIN;
	int32_t x534 = -1;
	int16_t x536 = INT16_MAX;
	int32_t t128 = 24392;

    t128 = ((x533!=(x534/x535))|x536);

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = 0;
	volatile int8_t x539 = INT8_MAX;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t129 = 235250;

    t129 = ((x537!=(x538/x539))|x540);

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x541 = INT32_MIN;
	uint64_t x543 = 1029699168055025LLU;
	int32_t t130 = 390896516;

    t130 = ((x541!=(x542/x543))|x544);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x545 = UINT64_MAX;
	static int16_t x546 = INT16_MAX;
	uint64_t x547 = UINT64_MAX;
	volatile int64_t t131 = 3306320676375LL;

    t131 = ((x545!=(x546/x547))|x548);

    if (t131 != -243LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x550 = UINT32_MAX;
	uint16_t x552 = 493U;
	volatile int32_t t132 = -27175;

    t132 = ((x549!=(x550/x551))|x552);

    if (t132 != 493) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x553 = 32LLU;
	int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MAX;
	static int8_t x556 = -1;

    t133 = ((x553!=(x554/x555))|x556);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = 0;
	uint16_t x558 = 11U;
	uint8_t x559 = 50U;
	int16_t x560 = INT16_MAX;
	int32_t t134 = -2616;

    t134 = ((x557!=(x558/x559))|x560);

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x561 = -1;
	int16_t x563 = 17;
	volatile int8_t x564 = 1;
	int32_t t135 = -1950;

    t135 = ((x561!=(x562/x563))|x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x566 = INT32_MIN;
	uint16_t x567 = 13664U;
	int32_t x568 = INT32_MAX;
	volatile int32_t t136 = INT32_MAX;

    t136 = ((x565!=(x566/x567))|x568);

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x569 = -159;
	int8_t x570 = INT8_MIN;
	int64_t x571 = -1LL;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t137 = -402;

    t137 = ((x569!=(x570/x571))|x572);

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x573 = -1;
	int64_t x574 = -481183745914622LL;
	static int64_t x575 = INT64_MAX;
	uint8_t x576 = 126U;
	int32_t t138 = 470878422;

    t138 = ((x573!=(x574/x575))|x576);

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x577 = INT32_MAX;
	static int32_t x578 = INT32_MIN;
	uint16_t x579 = UINT16_MAX;
	volatile int64_t x580 = 6321684LL;
	volatile int64_t t139 = -112039305347516LL;

    t139 = ((x577!=(x578/x579))|x580);

    if (t139 != 6321685LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = INT8_MAX;
	int32_t x582 = INT32_MIN;
	int8_t x584 = INT8_MIN;
	volatile int32_t t140 = 1157;

    t140 = ((x581!=(x582/x583))|x584);

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x585 = 2U;
	volatile int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MAX;
	static uint32_t x588 = UINT32_MAX;
	uint32_t t141 = UINT32_MAX;

    t141 = ((x585!=(x586/x587))|x588);

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x589 = -82757;
	uint32_t x590 = 10538U;
	int64_t x591 = -1LL;

    t142 = ((x589!=(x590/x591))|x592);

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x594 = 10U;
	int32_t x596 = INT32_MIN;
	volatile int32_t t143 = -908599;

    t143 = ((x593!=(x594/x595))|x596);

    if (t143 != -2147483647) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x599 = INT16_MIN;
	int64_t x600 = INT64_MIN;

    t144 = ((x597!=(x598/x599))|x600);

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x601 = UINT64_MAX;
	int64_t x602 = -1LL;
	uint32_t x603 = UINT32_MAX;
	int64_t x604 = INT64_MAX;
	volatile int64_t t145 = INT64_MAX;

    t145 = ((x601!=(x602/x603))|x604);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x605 = INT8_MAX;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = 570545073635LLU;
	volatile int32_t t146 = -221708221;

    t146 = ((x605!=(x606/x607))|x608);

    if (t146 != 13) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = -1LL;
	int32_t x610 = -154796;
	static uint8_t x611 = UINT8_MAX;
	static int64_t x612 = INT64_MIN;
	volatile int64_t t147 = 384388944792LL;

    t147 = ((x609!=(x610/x611))|x612);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = 12;
	int8_t x615 = -1;
	uint8_t x616 = 52U;
	static int32_t t148 = -32;

    t148 = ((x613!=(x614/x615))|x616);

    if (t148 != 53) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = 4U;
	int64_t x619 = -517351926226LL;
	uint32_t x620 = 149U;
	volatile uint32_t t149 = 58U;

    t149 = ((x617!=(x618/x619))|x620);

    if (t149 != 149U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = -79920348;
	uint8_t x623 = 3U;
	int16_t x624 = INT16_MIN;
	volatile int32_t t150 = -211;

    t150 = ((x621!=(x622/x623))|x624);

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x625 = INT32_MAX;
	static int8_t x626 = 0;
	volatile int16_t x627 = -1;
	static int64_t x628 = 2101435999180LL;

    t151 = ((x625!=(x626/x627))|x628);

    if (t151 != 2101435999181LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x629 = -1;
	int16_t x630 = INT16_MAX;
	static volatile int64_t x632 = INT64_MIN;
	static volatile int64_t t152 = -238LL;

    t152 = ((x629!=(x630/x631))|x632);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = -1;
	static int16_t x634 = INT16_MAX;
	uint16_t x635 = 552U;
	int32_t x636 = -1;
	volatile int32_t t153 = 1;

    t153 = ((x633!=(x634/x635))|x636);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x637 = INT8_MIN;
	int32_t x638 = 1072789733;
	volatile int64_t x639 = -31175LL;
	static uint64_t x640 = UINT64_MAX;
	uint64_t t154 = UINT64_MAX;

    t154 = ((x637!=(x638/x639))|x640);

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	volatile int32_t x644 = INT32_MIN;

    t155 = ((x641!=(x642/x643))|x644);

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x645 = 1380179728LLU;
	int64_t x646 = -1121859134362033904LL;
	static uint64_t x647 = 54604717625763405LLU;
	int8_t x648 = INT8_MAX;
	int32_t t156 = -914;

    t156 = ((x645!=(x646/x647))|x648);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x651 = 1811U;
	int16_t x652 = -1;
	volatile int32_t t157 = 11;

    t157 = ((x649!=(x650/x651))|x652);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x653 = INT8_MAX;
	static int16_t x654 = 24;
	int16_t x655 = -40;
	static uint32_t x656 = UINT32_MAX;
	uint32_t t158 = UINT32_MAX;

    t158 = ((x653!=(x654/x655))|x656);

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x657 = 11U;
	uint32_t x659 = 15219263U;
	int64_t x660 = INT64_MIN;
	volatile int64_t t159 = 5167069433118LL;

    t159 = ((x657!=(x658/x659))|x660);

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = -23;
	static int32_t x662 = -42841;
	uint16_t x663 = 3482U;
	uint64_t x664 = 25208169LLU;
	volatile uint64_t t160 = 1915937995942LLU;

    t160 = ((x661!=(x662/x663))|x664);

    if (t160 != 25208169LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x666 = INT64_MIN;
	static uint64_t x667 = 28881426887123512LLU;
	uint32_t x668 = 1472523092U;
	static volatile uint32_t t161 = 3535U;

    t161 = ((x665!=(x666/x667))|x668);

    if (t161 != 1472523093U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x669 = INT32_MIN;
	volatile int8_t x671 = -1;
	int16_t x672 = 12921;
	static volatile int32_t t162 = 6322973;

    t162 = ((x669!=(x670/x671))|x672);

    if (t162 != 12921) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x673 = -59;
	static int64_t x674 = INT64_MIN;

    t163 = ((x673!=(x674/x675))|x676);

    if (t163 != 3334452025494297515LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x677 = 928743133445LLU;
	int64_t x678 = 22571208LL;
	volatile uint16_t x679 = 31U;
	static volatile int32_t t164 = 125160609;

    t164 = ((x677!=(x678/x679))|x680);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = 0;
	int16_t x683 = 111;
	uint32_t x684 = 244131660U;

    t165 = ((x681!=(x682/x683))|x684);

    if (t165 != 244131661U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x685 = INT32_MIN;
	volatile uint32_t x686 = 84U;
	uint32_t t166 = 27820513U;

    t166 = ((x685!=(x686/x687))|x688);

    if (t166 != 1491U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = -1;
	static int16_t x690 = INT16_MIN;
	int8_t x691 = -6;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t167 = 158760093;

    t167 = ((x689!=(x690/x691))|x692);

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x693 = 9605171LLU;
	static int32_t x694 = INT32_MIN;
	static uint32_t x696 = UINT32_MAX;

    t168 = ((x693!=(x694/x695))|x696);

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = INT64_MAX;
	uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MIN;
	static int32_t x700 = -1;

    t169 = ((x697!=(x698/x699))|x700);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x702 = 3;
	volatile int16_t x703 = 162;
	uint16_t x704 = 14119U;

    t170 = ((x701!=(x702/x703))|x704);

    if (t170 != 14119) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x705 = UINT8_MAX;
	static int64_t x707 = 1056232393LL;
	volatile int64_t x708 = INT64_MIN;

    t171 = ((x705!=(x706/x707))|x708);

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int16_t x710 = -1;
	int64_t x711 = 6098262LL;
	static int32_t x712 = -1;
	int32_t t172 = 2016984;

    t172 = ((x709!=(x710/x711))|x712);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = -1;
	int8_t x715 = INT8_MAX;
	static uint32_t x716 = UINT32_MAX;
	volatile uint32_t t173 = UINT32_MAX;

    t173 = ((x713!=(x714/x715))|x716);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x717 = INT8_MIN;
	uint8_t x718 = 2U;
	static volatile uint8_t x719 = 89U;
	uint16_t x720 = 8832U;
	int32_t t174 = -111593792;

    t174 = ((x717!=(x718/x719))|x720);

    if (t174 != 8833) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x721 = 7U;
	volatile int64_t x724 = INT64_MIN;

    t175 = ((x721!=(x722/x723))|x724);

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MAX;
	volatile int64_t t176 = 122310454028LL;

    t176 = ((x725!=(x726/x727))|x728);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x729 = INT8_MIN;
	int8_t x731 = 37;
	int64_t t177 = -1694779993114332LL;

    t177 = ((x729!=(x730/x731))|x732);

    if (t177 != 110011370279860265LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x734 = 78;
	int64_t x735 = 1693000589612091LL;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t178 = -51021;

    t178 = ((x733!=(x734/x735))|x736);

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x737 = 0U;
	int64_t x739 = INT64_MIN;
	uint32_t x740 = 100U;

    t179 = ((x737!=(x738/x739))|x740);

    if (t179 != 101U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x741 = INT8_MIN;
	int8_t x742 = 0;
	volatile int32_t x743 = 61454;
	int32_t x744 = INT32_MIN;
	static volatile int32_t t180 = -65821;

    t180 = ((x741!=(x742/x743))|x744);

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x745 = INT16_MIN;
	uint64_t x746 = UINT64_MAX;
	int16_t x747 = INT16_MIN;
	volatile int16_t x748 = -78;
	volatile int32_t t181 = 3;

    t181 = ((x745!=(x746/x747))|x748);

    if (t181 != -77) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = INT16_MIN;
	int8_t x750 = -23;
	volatile int32_t x751 = INT32_MIN;
	static volatile int32_t t182 = 154;

    t182 = ((x749!=(x750/x751))|x752);

    if (t182 != -3747299) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x754 = -1;
	volatile int32_t x755 = -1;
	volatile int8_t x756 = -1;
	int32_t t183 = 600227;

    t183 = ((x753!=(x754/x755))|x756);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x757 = 19;
	static int32_t x758 = 46024116;
	int8_t x759 = INT8_MAX;
	static int32_t t184 = 44637122;

    t184 = ((x757!=(x758/x759))|x760);

    if (t184 != -252215) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = 3108890LLU;
	uint8_t x762 = UINT8_MAX;
	int64_t x763 = -1LL;
	int32_t x764 = INT32_MAX;
	volatile int32_t t185 = INT32_MAX;

    t185 = ((x761!=(x762/x763))|x764);

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x767 = INT32_MIN;
	uint16_t x768 = UINT16_MAX;
	static volatile int32_t t186 = 57;

    t186 = ((x765!=(x766/x767))|x768);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x769 = UINT8_MAX;
	static int8_t x770 = INT8_MAX;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t187 = 0;

    t187 = ((x769!=(x770/x771))|x772);

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x773 = 444381728135181LLU;
	int8_t x775 = 1;
	static volatile int16_t x776 = INT16_MIN;
	volatile int32_t t188 = 441;

    t188 = ((x773!=(x774/x775))|x776);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x777 = 193659U;
	int8_t x778 = -1;
	uint8_t x779 = 57U;
	int16_t x780 = INT16_MAX;

    t189 = ((x777!=(x778/x779))|x780);

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x781 = INT64_MIN;
	static uint64_t x783 = 1408638685LLU;
	int64_t x784 = INT64_MIN;
	static volatile int64_t t190 = -875541426612309LL;

    t190 = ((x781!=(x782/x783))|x784);

    if (t190 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x785 = 4076U;
	uint64_t x786 = UINT64_MAX;
	int64_t x787 = -1LL;
	volatile int64_t x788 = INT64_MAX;
	volatile int64_t t191 = INT64_MAX;

    t191 = ((x785!=(x786/x787))|x788);

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = 27;
	uint8_t x790 = 56U;
	int8_t x791 = INT8_MIN;
	int8_t x792 = -40;
	int32_t t192 = 486;

    t192 = ((x789!=(x790/x791))|x792);

    if (t192 != -39) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x793 = INT32_MIN;
	int32_t x794 = -1348;
	int16_t x795 = -678;
	uint16_t x796 = 0U;

    t193 = ((x793!=(x794/x795))|x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x799 = 1;
	volatile int32_t t194 = 5359381;

    t194 = ((x797!=(x798/x799))|x800);

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x802 = INT16_MAX;
	int64_t x803 = -1LL;
	uint64_t x804 = 67825131LLU;
	volatile uint64_t t195 = 101025316572589LLU;

    t195 = ((x801!=(x802/x803))|x804);

    if (t195 != 67825131LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x806 = 1107668U;
	int8_t x807 = INT8_MIN;
	int64_t x808 = INT64_MIN;
	volatile int64_t t196 = 490322LL;

    t196 = ((x805!=(x806/x807))|x808);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = -1;
	volatile int16_t x810 = INT16_MIN;
	uint64_t x811 = 3810563292576296406LLU;
	int8_t x812 = -4;
	int32_t t197 = 4299140;

    t197 = ((x809!=(x810/x811))|x812);

    if (t197 != -3) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x814 = UINT16_MAX;
	volatile uint16_t x815 = UINT16_MAX;
	uint64_t x816 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = ((x813!=(x814/x815))|x816);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x817 = INT64_MIN;
	volatile int32_t x819 = INT32_MIN;
	uint64_t x820 = 86LLU;
	volatile uint64_t t199 = 48286869488317426LLU;

    t199 = ((x817!=(x818/x819))|x820);

    if (t199 != 87LLU) { NG(); } else { ; }
	
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

