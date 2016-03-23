
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

static int64_t x3 = INT64_MIN;
static volatile int64_t x5 = -1LL;
int8_t x11 = INT8_MIN;
volatile uint32_t t2 = 15090U;
int8_t x17 = 0;
int16_t x20 = INT16_MIN;
int64_t x24 = 2722LL;
static uint16_t x26 = 1U;
volatile int64_t t6 = 70LL;
int32_t x30 = -404380;
int64_t x31 = INT64_MIN;
static int16_t x33 = INT16_MIN;
int8_t x39 = INT8_MIN;
volatile uint64_t t9 = 297399764581240LLU;
uint32_t x43 = UINT32_MAX;
volatile uint32_t x45 = UINT32_MAX;
static volatile uint64_t t11 = 19021585778LLU;
uint8_t x51 = UINT8_MAX;
static int32_t t12 = 57168881;
volatile int32_t x53 = INT32_MAX;
int64_t t13 = -26339461LL;
volatile int64_t x62 = INT64_MIN;
uint8_t x64 = UINT8_MAX;
uint64_t t15 = 614481388LLU;
uint16_t x66 = UINT16_MAX;
static int8_t x92 = INT8_MIN;
static int64_t x93 = -8370218LL;
uint16_t x96 = UINT16_MAX;
uint64_t x97 = 5759608407LLU;
uint8_t x98 = UINT8_MAX;
uint8_t x110 = 2U;
static uint32_t x121 = UINT32_MAX;
uint32_t x146 = 74U;
int16_t x147 = INT16_MAX;
static int16_t x155 = 883;
int32_t t35 = -5518107;
static int16_t x165 = INT16_MIN;
int16_t x173 = INT16_MIN;
int8_t x174 = INT8_MIN;
int32_t t39 = 640;
volatile uint16_t x180 = UINT16_MAX;
volatile int64_t t41 = 1LL;
int16_t x189 = INT16_MAX;
int8_t x191 = -1;
int32_t t43 = -1;
uint32_t x201 = UINT32_MAX;
uint8_t x213 = UINT8_MAX;
static volatile int32_t x218 = -1;
volatile int64_t x228 = -1LL;
int64_t t52 = -49LL;
uint8_t x236 = 9U;
int64_t x243 = -1LL;
uint64_t t56 = UINT64_MAX;
int8_t x258 = -18;
volatile int16_t x265 = -6;
static int8_t x266 = -1;
int32_t t61 = -12;
int16_t x273 = INT16_MIN;
int32_t x274 = INT32_MIN;
int8_t x276 = INT8_MIN;
int32_t x280 = -1;
int8_t x285 = INT8_MAX;
volatile uint16_t x290 = 20U;
volatile int32_t x298 = INT32_MAX;
int64_t x299 = -1LL;
int32_t x305 = -1;
static int64_t x308 = INT64_MIN;
int8_t x319 = INT8_MAX;
uint32_t t75 = 55535306U;
uint16_t x334 = 0U;
int32_t x345 = INT32_MIN;
volatile uint32_t t80 = 6814507U;
uint64_t x357 = 828133291LLU;
uint32_t x363 = 1U;
int64_t x387 = -51498906208LL;
static int8_t x400 = INT8_MIN;
uint8_t x404 = 0U;
static volatile int16_t x406 = INT16_MAX;
volatile uint64_t t92 = 598062488LLU;
volatile uint64_t x419 = 3046147251404LLU;
int64_t x421 = INT64_MAX;
static volatile int32_t x432 = -1;
int32_t t99 = 2882;
volatile uint64_t t100 = 4317547683LLU;
int64_t x450 = 1247991762712794LL;
uint8_t x452 = 5U;
int64_t x455 = INT64_MIN;
static int64_t x469 = INT64_MAX;
static int16_t x470 = -3636;
int32_t x472 = -3;
int64_t x481 = 50778LL;
static volatile int64_t t112 = 183350595346435LL;
uint8_t x507 = UINT8_MAX;
static volatile uint64_t x524 = 2019529826295LLU;
static uint64_t t118 = 436917728127LLU;
uint64_t x530 = 1007784671974425461LLU;
int64_t x531 = INT64_MAX;
uint16_t x533 = 830U;
int16_t x535 = INT16_MIN;
static int16_t x538 = INT16_MAX;
int16_t x544 = INT16_MIN;
volatile int64_t x545 = INT64_MIN;
int8_t x547 = -20;
uint16_t x549 = UINT16_MAX;
int64_t x550 = INT64_MIN;
int32_t x556 = INT32_MAX;
volatile int32_t x560 = -534849540;
static int32_t x564 = INT32_MIN;
volatile uint64_t x567 = 242LLU;
uint64_t t129 = 3337LLU;
int64_t t130 = 587140731161LL;
int8_t x577 = INT8_MAX;
int32_t x584 = INT32_MAX;
uint8_t x589 = 0U;
int64_t x618 = INT64_MIN;
int32_t x619 = 3003;
volatile int32_t t143 = -10220921;
volatile uint32_t x631 = 107773U;
static volatile uint8_t x632 = 1U;
uint64_t x639 = UINT64_MAX;
uint8_t x640 = UINT8_MAX;
static uint64_t t146 = 74852LLU;
int64_t x645 = -1LL;
int16_t x646 = INT16_MAX;
uint64_t x654 = 212LLU;
volatile uint64_t t149 = 18LLU;
uint64_t x658 = 1946894758735LLU;
uint32_t x662 = UINT32_MAX;
int32_t x665 = INT32_MAX;
static volatile uint8_t x667 = 13U;
uint32_t x669 = UINT32_MAX;
volatile int16_t x670 = 662;
int32_t x672 = -2417494;
volatile uint64_t x677 = 22265449516246LLU;
uint32_t x680 = 69623U;
uint8_t x689 = 57U;
int64_t t158 = 33247LL;
uint32_t x693 = 6495697U;
int64_t t161 = -26574LL;
uint64_t x705 = 65LLU;
static uint32_t x711 = 16360307U;
static int64_t t163 = 4180228458384370545LL;
uint32_t x716 = 63937302U;
int64_t t164 = -60695945142LL;
int16_t x719 = INT16_MIN;
int64_t x721 = -42898LL;
static int32_t x724 = -1;
static int32_t x728 = -63961529;
uint32_t x735 = UINT32_MAX;
uint8_t x738 = UINT8_MAX;
uint8_t x745 = 13U;
uint64_t t172 = 805067780391268181LLU;
volatile int32_t x754 = -1;
uint8_t x756 = 11U;
uint64_t t173 = 162580LLU;
uint64_t x759 = UINT64_MAX;
int64_t x763 = INT64_MAX;
int64_t x773 = INT64_MAX;
volatile int64_t x785 = INT64_MIN;
int64_t t181 = 299011835385814898LL;
volatile uint32_t t182 = 1033294U;
int8_t x798 = -1;
int8_t x799 = INT8_MAX;
static int64_t t184 = -3893249100LL;
int8_t x803 = -1;
volatile int16_t x809 = INT16_MIN;
int32_t x812 = INT32_MIN;
volatile uint8_t x817 = UINT8_MAX;
uint8_t x820 = UINT8_MAX;
volatile int32_t t189 = -346472047;
volatile int64_t x821 = -17415839863LL;
volatile uint32_t x825 = UINT32_MAX;
int8_t x826 = -23;
volatile uint32_t t191 = 0U;
volatile uint16_t x831 = 6U;
uint64_t x845 = UINT64_MAX;
uint8_t x846 = 82U;
uint16_t x850 = 52U;
volatile int32_t t198 = 1;
volatile int16_t x860 = INT16_MIN;


void f0(void) {
    	uint16_t x1 = 2993U;
	int32_t x2 = INT32_MIN;
	uint32_t x4 = 2U;
	volatile int64_t t0 = 15107159738871LL;

    t0 = (((x1|x2)&x3)+x4);

    if (t0 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = INT32_MAX;
	uint32_t x8 = 997894U;
	volatile int64_t t1 = 56179770651971LL;

    t1 = (((x5|x6)&x7)+x8);

    if (t1 != 2148481541LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 420U;
	uint16_t x10 = UINT16_MAX;
	static volatile int16_t x12 = 0;

    t2 = (((x9|x10)&x11)+x12);

    if (t2 != 65408U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MIN;
	volatile uint64_t x15 = 894951843367814553LLU;
	static int32_t x16 = -33186966;
	volatile uint64_t t3 = 193245LLU;

    t3 = (((x13|x14)&x15)+x16);

    if (t3 != 894951843334627587LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 8U;
	volatile uint8_t x19 = 0U;
	int32_t t4 = -1325435;

    t4 = (((x17|x18)&x19)+x20);

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	static uint16_t x22 = 940U;
	static int32_t x23 = INT32_MAX;
	int64_t t5 = -3222679762544086LL;

    t5 = (((x21|x22)&x23)+x24);

    if (t5 != 2147454542LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -844764187;
	int64_t x27 = INT64_MAX;
	volatile int16_t x28 = -131;

    t6 = (((x25|x26)&x27)+x28);

    if (t6 != 9223372036010011490LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 5017U;
	volatile uint64_t x32 = 8151326LLU;
	uint64_t t7 = 7LLU;

    t7 = (((x29|x30)&x31)+x32);

    if (t7 != 9223372036862927134LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = -4;
	int16_t x35 = 1;
	int64_t x36 = 650413LL;
	static int64_t t8 = -1LL;

    t8 = (((x33|x34)&x35)+x36);

    if (t8 != 650413LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = INT32_MIN;

    t9 = (((x37|x38)&x39)+x40);

    if (t9 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	uint8_t x42 = 1U;
	static int32_t x44 = -1;
	uint32_t t10 = 261905U;

    t10 = (((x41|x42)&x43)+x44);

    if (t10 != 2147483646U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x46 = 5494127276320LLU;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 14700U;

    t11 = (((x45|x46)&x47)+x48);

    if (t11 != 5495410669932LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MIN;
	static uint8_t x50 = 1U;
	volatile int16_t x52 = -825;

    t12 = (((x49|x50)&x51)+x52);

    if (t12 != -824) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -49131176691LL;
	int32_t x55 = 31355298;
	static int32_t x56 = INT32_MAX;

    t13 = (((x53|x54)&x55)+x56);

    if (t13 != 2178838945LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int16_t x58 = 509;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = -1;
	int32_t t14 = -247747;

    t14 = (((x57|x58)&x59)+x60);

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = UINT64_MAX;
	volatile int64_t x63 = -50261396016LL;

    t15 = (((x61|x62)&x63)+x64);

    if (t15 != 18446744023448155855LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MAX;
	uint64_t x67 = 6LLU;
	int8_t x68 = 8;
	volatile uint64_t t16 = 76LLU;

    t16 = (((x65|x66)&x67)+x68);

    if (t16 != 14LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = INT16_MIN;
	static volatile uint64_t x74 = 5LLU;
	static int32_t x75 = -1;
	static uint16_t x76 = UINT16_MAX;
	volatile uint64_t t17 = 6280060035LLU;

    t17 = (((x73|x74)&x75)+x76);

    if (t17 != 32772LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 10429LLU;
	uint8_t x78 = 9U;
	int64_t x79 = 47190982726LL;
	int64_t x80 = 1043LL;
	volatile uint64_t t18 = 27787732LLU;

    t18 = (((x77|x78)&x79)+x80);

    if (t18 != 1047LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x85 = -1;
	volatile int16_t x86 = INT16_MAX;
	static volatile int16_t x87 = -5;
	int32_t x88 = -9700;
	int32_t t19 = -67;

    t19 = (((x85|x86)&x87)+x88);

    if (t19 != -9705) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MAX;
	int64_t x91 = -1135751LL;
	static volatile int64_t t20 = 278334687556010LL;

    t20 = (((x89|x90)&x91)+x92);

    if (t20 != 9223372036853639929LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x94 = UINT16_MAX;
	int64_t x95 = -1LL;
	volatile int64_t t21 = 25747679118896LL;

    t21 = (((x93|x94)&x95)+x96);

    if (t21 != -8257538LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x99 = 1U;
	int64_t x100 = -17859LL;
	static volatile uint64_t t22 = 29166292033462654LLU;

    t22 = (((x97|x98)&x99)+x100);

    if (t22 != 18446744073709533758LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x105 = INT64_MIN;
	volatile int8_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t23 = -55351874990LL;

    t23 = (((x105|x106)&x107)+x108);

    if (t23 != -2147483649LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x109 = -6;
	volatile int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	int32_t t24 = 0;

    t24 = (((x109|x110)&x111)+x112);

    if (t24 != -32769) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 1U;
	int8_t x114 = 5;
	static int32_t x115 = 16053808;
	uint8_t x116 = 29U;
	int32_t t25 = 94431;

    t25 = (((x113|x114)&x115)+x116);

    if (t25 != 29) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x117 = -1;
	uint8_t x118 = 3U;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t26 = 963160949882LL;

    t26 = (((x117|x118)&x119)+x120);

    if (t26 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x122 = 240U;
	int32_t x123 = INT32_MIN;
	int8_t x124 = -1;
	uint32_t t27 = 862U;

    t27 = (((x121|x122)&x123)+x124);

    if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x125 = UINT8_MAX;
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MAX;
	int64_t x128 = -1LL;
	static int64_t t28 = -259LL;

    t28 = (((x125|x126)&x127)+x128);

    if (t28 != 65534LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 1U;
	int64_t x130 = 59LL;
	int64_t x131 = -515957LL;
	static volatile int64_t x132 = 4LL;
	int64_t t29 = 55LL;

    t29 = (((x129|x130)&x131)+x132);

    if (t29 != 15LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -3;
	int16_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -11501;
	volatile int32_t t30 = -24;

    t30 = (((x133|x134)&x135)+x136);

    if (t30 != -44269) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x137 = 19U;
	volatile uint8_t x138 = UINT8_MAX;
	static int32_t x139 = 206687;
	uint64_t x140 = 17542989767981584LLU;
	static uint64_t t31 = 5LLU;

    t31 = (((x137|x138)&x139)+x140);

    if (t31 != 17542989767981679LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = UINT16_MAX;
	static uint32_t x143 = 25U;
	int8_t x144 = -2;
	volatile uint32_t t32 = 106824U;

    t32 = (((x141|x142)&x143)+x144);

    if (t32 != 23U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	uint32_t x148 = 13U;
	volatile uint32_t t33 = 622573041U;

    t33 = (((x145|x146)&x147)+x148);

    if (t33 != 87U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MIN;
	static uint8_t x150 = 7U;
	volatile int32_t x151 = 3;
	uint16_t x152 = 69U;
	static int64_t t34 = -16230605073501711LL;

    t34 = (((x149|x150)&x151)+x152);

    if (t34 != 72LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	static uint8_t x156 = 9U;

    t35 = (((x153|x154)&x155)+x156);

    if (t35 != 892) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = 508;
	static int64_t x159 = INT64_MIN;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = 1777511166769772LLU;

    t36 = (((x157|x158)&x159)+x160);

    if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x166 = -1;
	uint8_t x167 = 1U;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t37 = -366488LL;

    t37 = (((x165|x166)&x167)+x168);

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x169 = -1;
	int8_t x170 = INT8_MAX;
	uint8_t x171 = 38U;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t38 = 146;

    t38 = (((x169|x170)&x171)+x172);

    if (t38 != -90) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x175 = INT8_MAX;
	int8_t x176 = 1;

    t39 = (((x173|x174)&x175)+x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = INT8_MIN;
	static int8_t x178 = -13;
	volatile uint16_t x179 = 30U;
	int32_t t40 = 6171171;

    t40 = (((x177|x178)&x179)+x180);

    if (t40 != 65553) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = -1;
	int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static int64_t x184 = INT64_MIN;

    t41 = (((x181|x182)&x183)+x184);

    if (t41 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = INT64_MIN;
	int32_t x186 = 42;
	uint8_t x187 = 22U;
	int64_t x188 = INT64_MIN;
	int64_t t42 = -3329588LL;

    t42 = (((x185|x186)&x187)+x188);

    if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x190 = INT16_MIN;
	uint16_t x192 = 5U;

    t43 = (((x189|x190)&x191)+x192);

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = -116;
	int16_t x194 = -5;
	int64_t x195 = INT64_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t44 = 0LL;

    t44 = (((x193|x194)&x195)+x196);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 74U;
	uint8_t x198 = 1U;
	uint16_t x199 = 173U;
	int64_t x200 = -106LL;
	volatile int64_t t45 = 212LL;

    t45 = (((x197|x198)&x199)+x200);

    if (t45 != -97LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x202 = 55U;
	volatile int32_t x203 = 119;
	int32_t x204 = INT32_MIN;
	static uint32_t t46 = 31714962U;

    t46 = (((x201|x202)&x203)+x204);

    if (t46 != 2147483767U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x209 = 1522379351LLU;
	uint8_t x210 = 41U;
	volatile int16_t x211 = INT16_MIN;
	volatile int16_t x212 = 51;
	static volatile uint64_t t47 = 213431558315LLU;

    t47 = (((x209|x210)&x211)+x212);

    if (t47 != 1522368563LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int16_t x216 = 7339;
	volatile int32_t t48 = 83;

    t48 = (((x213|x214)&x215)+x216);

    if (t48 != 7466) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	volatile int32_t x219 = 38;
	uint8_t x220 = 118U;
	static int32_t t49 = -110552;

    t49 = (((x217|x218)&x219)+x220);

    if (t49 != 156) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = -1;
	static int64_t x223 = -1LL;
	volatile uint8_t x224 = 42U;
	volatile int64_t t50 = 11860600917644976LL;

    t50 = (((x221|x222)&x223)+x224);

    if (t50 != 41LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x225 = INT16_MIN;
	int16_t x226 = -1;
	static int16_t x227 = 1402;
	volatile int64_t t51 = 34193837LL;

    t51 = (((x225|x226)&x227)+x228);

    if (t51 != 1401LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x229 = UINT16_MAX;
	int8_t x230 = -1;
	volatile int64_t x231 = INT64_MAX;
	static int16_t x232 = INT16_MIN;

    t52 = (((x229|x230)&x231)+x232);

    if (t52 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x233 = INT8_MIN;
	int32_t x234 = -24236;
	uint32_t x235 = UINT32_MAX;
	volatile uint32_t t53 = 231333U;

    t53 = (((x233|x234)&x235)+x236);

    if (t53 != 4294967261U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -1LL;
	uint64_t x240 = 335138344LLU;
	volatile uint64_t t54 = 3314857748785096492LLU;

    t54 = (((x237|x238)&x239)+x240);

    if (t54 != 9223372037189946919LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = -3;
	volatile int32_t x242 = INT32_MAX;
	int8_t x244 = INT8_MAX;
	static int64_t t55 = 1439LL;

    t55 = (((x241|x242)&x243)+x244);

    if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MIN;
	int16_t x247 = 302;
	uint64_t x248 = UINT64_MAX;

    t56 = (((x245|x246)&x247)+x248);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = 198866256LLU;
	uint32_t x251 = 1U;
	volatile int16_t x252 = 3695;
	uint64_t t57 = 24887567653LLU;

    t57 = (((x249|x250)&x251)+x252);

    if (t57 != 3695LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x253 = INT8_MIN;
	static volatile uint16_t x254 = UINT16_MAX;
	int64_t x255 = INT64_MIN;
	uint64_t x256 = 488731306LLU;
	volatile uint64_t t58 = 149811201393414LLU;

    t58 = (((x253|x254)&x255)+x256);

    if (t58 != 9223372037343507114LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x259 = -1;
	static uint32_t x260 = 1U;
	uint32_t t59 = 1438112584U;

    t59 = (((x257|x258)&x259)+x260);

    if (t59 != 4294967279U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x261 = UINT8_MAX;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t60 = 7135963265526865LLU;

    t60 = (((x261|x262)&x263)+x264);

    if (t60 != 254LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x267 = 15030U;
	int8_t x268 = INT8_MIN;

    t61 = (((x265|x266)&x267)+x268);

    if (t61 != 14902) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x269 = 1U;
	volatile int64_t x270 = -1LL;
	int32_t x271 = INT32_MIN;
	static int16_t x272 = INT16_MIN;
	int64_t t62 = -635913806577205LL;

    t62 = (((x269|x270)&x271)+x272);

    if (t62 != -2147516416LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x275 = 521;
	static volatile int32_t t63 = 985;

    t63 = (((x273|x274)&x275)+x276);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x277 = -11;
	int16_t x278 = -6481;
	int16_t x279 = INT16_MIN;
	int32_t t64 = 39;

    t64 = (((x277|x278)&x279)+x280);

    if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = 1;
	volatile int8_t x282 = -1;
	uint8_t x283 = 1U;
	uint64_t x284 = 61001340874LLU;
	volatile uint64_t t65 = 52823272016034508LLU;

    t65 = (((x281|x282)&x283)+x284);

    if (t65 != 61001340875LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x286 = 635970LLU;
	static int8_t x287 = -40;
	uint16_t x288 = 0U;
	static uint64_t t66 = 136640535506174LLU;

    t66 = (((x285|x286)&x287)+x288);

    if (t66 != 635992LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = -1LL;
	int32_t x291 = -1;
	int16_t x292 = 13624;
	volatile int64_t t67 = -1808195LL;

    t67 = (((x289|x290)&x291)+x292);

    if (t67 != 13623LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	uint16_t x294 = 93U;
	int16_t x295 = INT16_MIN;
	uint16_t x296 = 31812U;
	volatile int32_t t68 = -44907051;

    t68 = (((x293|x294)&x295)+x296);

    if (t68 != -2147451836) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t69 = 556131122677LLU;

    t69 = (((x297|x298)&x299)+x300);

    if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x306 = 1;
	int32_t x307 = 1;
	static int64_t t70 = -166063LL;

    t70 = (((x305|x306)&x307)+x308);

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x309 = -1;
	uint8_t x310 = 60U;
	volatile int32_t x311 = 25029;
	uint32_t x312 = 1U;
	volatile uint32_t t71 = 6433U;

    t71 = (((x309|x310)&x311)+x312);

    if (t71 != 25030U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = INT32_MAX;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	static int32_t x316 = -1;
	volatile int64_t t72 = -4LL;

    t72 = (((x313|x314)&x315)+x316);

    if (t72 != -2147483649LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x317 = 0;
	int8_t x318 = 1;
	int8_t x320 = -1;
	volatile int32_t t73 = -6;

    t73 = (((x317|x318)&x319)+x320);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x325 = 3;
	static int32_t x326 = INT32_MAX;
	static uint16_t x327 = 639U;
	uint32_t x328 = UINT32_MAX;
	uint32_t t74 = 22U;

    t74 = (((x325|x326)&x327)+x328);

    if (t74 != 638U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	static volatile uint32_t x331 = 1136U;
	uint8_t x332 = UINT8_MAX;

    t75 = (((x329|x330)&x331)+x332);

    if (t75 != 1391U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x333 = 705U;
	volatile int8_t x335 = INT8_MIN;
	uint32_t x336 = 329315962U;
	uint32_t t76 = 9519U;

    t76 = (((x333|x334)&x335)+x336);

    if (t76 != 329316602U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x341 = -1;
	uint32_t x342 = 20U;
	int16_t x343 = -1;
	static uint32_t x344 = UINT32_MAX;
	static uint32_t t77 = 17666U;

    t77 = (((x341|x342)&x343)+x344);

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x346 = INT8_MIN;
	uint64_t x347 = 834429LLU;
	int32_t x348 = -1;
	uint64_t t78 = 504430LLU;

    t78 = (((x345|x346)&x347)+x348);

    if (t78 != 834303LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x349 = 26017011LLU;
	uint16_t x350 = 3442U;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	static volatile uint64_t t79 = 876541043532LLU;

    t79 = (((x349|x350)&x351)+x352);

    if (t79 != 25985151LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x353 = 4;
	int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 24471099U;

    t80 = (((x353|x354)&x355)+x356);

    if (t80 != 24470975U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x358 = 130947037U;
	int16_t x359 = INT16_MAX;
	int8_t x360 = -1;
	volatile uint64_t t81 = 38243LLU;

    t81 = (((x357|x358)&x359)+x360);

    if (t81 != 24574LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	int8_t x364 = 0;
	uint32_t t82 = 822U;

    t82 = (((x361|x362)&x363)+x364);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MAX;
	volatile int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t83 = -115;

    t83 = (((x365|x366)&x367)+x368);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x369 = -398115;
	int32_t x370 = -89439322;
	volatile uint16_t x371 = 36U;
	int64_t x372 = -9743891741039590LL;
	volatile int64_t t84 = 23661572831LL;

    t84 = (((x369|x370)&x371)+x372);

    if (t84 != -9743891741039554LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x373 = 234142LLU;
	static int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t85 = 94532203LLU;

    t85 = (((x373|x374)&x375)+x376);

    if (t85 != 18446744071562301982LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x377 = UINT64_MAX;
	volatile uint32_t x378 = 2079518066U;
	volatile int16_t x379 = 18;
	int16_t x380 = 776;
	uint64_t t86 = 21650330654LLU;

    t86 = (((x377|x378)&x379)+x380);

    if (t86 != 794LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x385 = INT64_MAX;
	int64_t x386 = INT64_MAX;
	uint8_t x388 = UINT8_MAX;
	static volatile int64_t t87 = 72157705323861289LL;

    t87 = (((x385|x386)&x387)+x388);

    if (t87 != 9223371985355869855LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = 3;
	static volatile uint64_t x390 = 37129060792LLU;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = 31675784009LL;
	volatile uint64_t t88 = 3507969003636180LLU;

    t88 = (((x389|x390)&x391)+x392);

    if (t88 != 31675784196LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x393 = -2260LL;
	static int8_t x394 = INT8_MAX;
	volatile uint32_t x395 = 298843U;
	uint16_t x396 = UINT16_MAX;
	int64_t t89 = 48672989365LL;

    t89 = (((x393|x394)&x395)+x396);

    if (t89 != 362330LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x397 = -1;
	volatile int16_t x398 = 9491;
	volatile uint64_t x399 = UINT64_MAX;
	volatile uint64_t t90 = 55LLU;

    t90 = (((x397|x398)&x399)+x400);

    if (t90 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x401 = -1988;
	int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	int32_t t91 = INT32_MIN;

    t91 = (((x401|x402)&x403)+x404);

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x405 = 675448032U;
	int32_t x407 = -566989160;
	uint64_t x408 = 97717746529403033LLU;

    t92 = (((x405|x406)&x407)+x408);

    if (t92 != 97717746663649073LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x409 = INT8_MAX;
	static int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	static uint16_t x412 = 7837U;
	volatile int32_t t93 = 106384958;

    t93 = (((x409|x410)&x411)+x412);

    if (t93 != -24804) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x413 = 1LL;
	static uint64_t x414 = 61427736491744LLU;
	uint16_t x415 = 7134U;
	static uint32_t x416 = 3037U;
	volatile uint64_t t94 = 491248LLU;

    t94 = (((x413|x414)&x415)+x416);

    if (t94 != 7837LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x417 = 3U;
	int32_t x418 = INT32_MAX;
	int32_t x420 = INT32_MIN;
	static uint64_t t95 = 7371917642LLU;

    t95 = (((x417|x418)&x419)+x420);

    if (t95 != 18446744072577506508LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x422 = -1;
	uint8_t x423 = 4U;
	int64_t x424 = -16848955255243711LL;
	int64_t t96 = -3855018923LL;

    t96 = (((x421|x422)&x423)+x424);

    if (t96 != -16848955255243707LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x429 = -1;
	int32_t x430 = -1;
	int16_t x431 = -1;
	static int32_t t97 = 5412661;

    t97 = (((x429|x430)&x431)+x432);

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x433 = INT64_MAX;
	int64_t x434 = -4LL;
	uint8_t x435 = UINT8_MAX;
	int16_t x436 = INT16_MIN;
	int64_t t98 = -2LL;

    t98 = (((x433|x434)&x435)+x436);

    if (t98 != -32513LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = 62U;
	static uint8_t x440 = 47U;

    t99 = (((x437|x438)&x439)+x440);

    if (t99 != 109) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = INT16_MIN;
	uint64_t x442 = 3773672LLU;
	uint64_t x443 = 289730753907102071LLU;
	uint8_t x444 = UINT8_MAX;

    t100 = (((x441|x442)&x443)+x444);

    if (t100 != 289730753907102047LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = 172;
	static volatile uint32_t x446 = 1423801625U;
	static int8_t x447 = 7;
	int64_t x448 = -1LL;
	volatile int64_t t101 = -1LL;

    t101 = (((x445|x446)&x447)+x448);

    if (t101 != 4LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x449 = -906645016512444LL;
	uint8_t x451 = 0U;
	volatile int64_t t102 = 2818737LL;

    t102 = (((x449|x450)&x451)+x452);

    if (t102 != 5LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x453 = INT16_MIN;
	int32_t x454 = 11513078;
	int8_t x456 = INT8_MAX;
	static int64_t t103 = 1348655344423525LL;

    t103 = (((x453|x454)&x455)+x456);

    if (t103 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x457 = UINT64_MAX;
	static int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MAX;
	volatile int16_t x460 = 815;
	uint64_t t104 = 11753547635LLU;

    t104 = (((x457|x458)&x459)+x460);

    if (t104 != 33582LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x461 = INT32_MIN;
	int8_t x462 = -1;
	static int64_t x463 = -1LL;
	volatile int16_t x464 = 93;
	int64_t t105 = -98970LL;

    t105 = (((x461|x462)&x463)+x464);

    if (t105 != 92LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x465 = INT64_MIN;
	static int32_t x466 = -1;
	static uint32_t x467 = 210438U;
	int16_t x468 = -1;
	volatile int64_t t106 = 137887954342245229LL;

    t106 = (((x465|x466)&x467)+x468);

    if (t106 != 210437LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x471 = -1;
	volatile int64_t t107 = -12260338941553336LL;

    t107 = (((x469|x470)&x471)+x472);

    if (t107 != -4LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x473 = -58;
	int8_t x474 = 1;
	int32_t x475 = -1;
	static volatile int8_t x476 = INT8_MIN;
	static int32_t t108 = 4637;

    t108 = (((x473|x474)&x475)+x476);

    if (t108 != -185) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x477 = 48U;
	int32_t x478 = -1;
	int16_t x479 = 1;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t109 = 321177250400LLU;

    t109 = (((x477|x478)&x479)+x480);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x482 = 5;
	uint64_t x483 = 17367329170137619LLU;
	volatile int32_t x484 = -1;
	uint64_t t110 = 2085207487236LLU;

    t110 = (((x481|x482)&x483)+x484);

    if (t110 != 530LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x485 = -1LL;
	static volatile int8_t x486 = -1;
	int64_t x487 = INT64_MIN;
	static int64_t x488 = 778586797335941LL;
	static int64_t t111 = -503348163008185LL;

    t111 = (((x485|x486)&x487)+x488);

    if (t111 != -9222593450057439867LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x493 = -11239105537814563LL;
	uint32_t x494 = 186327456U;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;

    t112 = (((x493|x494)&x495)+x496);

    if (t112 != -11239105386250241LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x497 = 6845U;
	volatile int64_t x498 = INT64_MAX;
	int32_t x499 = -18954;
	int8_t x500 = INT8_MIN;
	int64_t t113 = 204695408LL;

    t113 = (((x497|x498)&x499)+x500);

    if (t113 != 9223372036854756726LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x501 = UINT64_MAX;
	int64_t x502 = 76987LL;
	int32_t x503 = 79357921;
	static int16_t x504 = INT16_MIN;
	volatile uint64_t t114 = 117011493969LLU;

    t114 = (((x501|x502)&x503)+x504);

    if (t114 != 79325153LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x505 = INT64_MIN;
	int64_t x506 = INT64_MAX;
	int16_t x508 = INT16_MIN;
	int64_t t115 = -80069494431543LL;

    t115 = (((x505|x506)&x507)+x508);

    if (t115 != -32513LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x509 = UINT8_MAX;
	int64_t x510 = INT64_MIN;
	int32_t x511 = -1;
	int32_t x512 = 47;
	int64_t t116 = 3LL;

    t116 = (((x509|x510)&x511)+x512);

    if (t116 != -9223372036854775506LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x517 = -1;
	int8_t x518 = INT8_MIN;
	int8_t x519 = 48;
	static int16_t x520 = -1;
	volatile int32_t t117 = -408;

    t117 = (((x517|x518)&x519)+x520);

    if (t117 != 47) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x521 = INT8_MAX;
	volatile int8_t x522 = INT8_MIN;
	int16_t x523 = -28;

    t118 = (((x521|x522)&x523)+x524);

    if (t118 != 2019529826267LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = INT32_MAX;
	int32_t x526 = -202035230;
	static int8_t x527 = INT8_MIN;
	int16_t x528 = -6;
	int32_t t119 = 177982;

    t119 = (((x525|x526)&x527)+x528);

    if (t119 != -134) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = -1;
	static volatile uint8_t x532 = UINT8_MAX;
	volatile uint64_t t120 = 0LLU;

    t120 = (((x529|x530)&x531)+x532);

    if (t120 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x534 = 1800739641470802LLU;
	volatile int64_t x536 = -50LL;
	uint64_t t121 = 526860914214094753LLU;

    t121 = (((x533|x534)&x535)+x536);

    if (t121 != 1800739641458638LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x537 = -1;
	uint32_t x539 = 2662U;
	volatile int8_t x540 = 1;
	volatile uint32_t t122 = 1651U;

    t122 = (((x537|x538)&x539)+x540);

    if (t122 != 2663U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x541 = 44U;
	uint32_t x542 = UINT32_MAX;
	volatile int8_t x543 = INT8_MIN;
	uint32_t t123 = 3U;

    t123 = (((x541|x542)&x543)+x544);

    if (t123 != 4294934400U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x546 = INT32_MIN;
	volatile int32_t x548 = INT32_MIN;
	int64_t t124 = -63949750LL;

    t124 = (((x545|x546)&x547)+x548);

    if (t124 != -4294967296LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x551 = INT16_MAX;
	static uint32_t x552 = UINT32_MAX;
	int64_t t125 = -1464187790060LL;

    t125 = (((x549|x550)&x551)+x552);

    if (t125 != 4295000062LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = -100LL;
	static int16_t x554 = -1;
	static volatile int32_t x555 = INT32_MIN;
	int64_t t126 = -6448LL;

    t126 = (((x553|x554)&x555)+x556);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x557 = INT8_MAX;
	int8_t x558 = 2;
	volatile int16_t x559 = -1;
	volatile int32_t t127 = -1;

    t127 = (((x557|x558)&x559)+x560);

    if (t127 != -534849413) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int8_t x562 = 14;
	uint32_t x563 = UINT32_MAX;
	int64_t t128 = 934LL;

    t128 = (((x561|x562)&x563)+x564);

    if (t128 != -2147483634LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x565 = 3U;
	static int16_t x566 = 205;
	int16_t x568 = INT16_MIN;

    t129 = (((x565|x566)&x567)+x568);

    if (t129 != 18446744073709519042LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x569 = -1LL;
	static int64_t x570 = -6275833953542LL;
	uint32_t x571 = UINT32_MAX;
	int16_t x572 = 0;

    t130 = (((x569|x570)&x571)+x572);

    if (t130 != 4294967295LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = -119374823751842322LL;
	int16_t x574 = INT16_MIN;
	uint64_t x575 = UINT64_MAX;
	uint32_t x576 = 538216324U;
	uint64_t t131 = 267721911665456682LLU;

    t131 = (((x573|x574)&x575)+x576);

    if (t131 != 538185074LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x578 = UINT16_MAX;
	uint64_t x579 = 158939LLU;
	static volatile int32_t x580 = INT32_MIN;
	uint64_t t132 = 20974175913290LLU;

    t132 = (((x577|x578)&x579)+x580);

    if (t132 != 18446744071562095835LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x581 = 735LLU;
	static int64_t x582 = -7LL;
	static volatile int16_t x583 = -1;
	volatile uint64_t t133 = 5245087LLU;

    t133 = (((x581|x582)&x583)+x584);

    if (t133 != 2147483646LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x585 = -1;
	static int16_t x586 = -1;
	uint32_t x587 = 2U;
	int32_t x588 = 0;
	volatile uint32_t t134 = 1368U;

    t134 = (((x585|x586)&x587)+x588);

    if (t134 != 2U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x590 = INT16_MIN;
	static volatile uint16_t x591 = 1U;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t135 = -264;

    t135 = (((x589|x590)&x591)+x592);

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x593 = -1;
	static int8_t x594 = INT8_MIN;
	uint64_t x595 = 23922337037335LLU;
	static uint8_t x596 = UINT8_MAX;
	uint64_t t136 = 9LLU;

    t136 = (((x593|x594)&x595)+x596);

    if (t136 != 23922337037590LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = -1;
	volatile int8_t x599 = INT8_MAX;
	static uint8_t x600 = UINT8_MAX;
	int32_t t137 = 37;

    t137 = (((x597|x598)&x599)+x600);

    if (t137 != 382) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x601 = INT16_MIN;
	int64_t x602 = -1LL;
	int32_t x603 = INT32_MAX;
	static int32_t x604 = -125691938;
	static int64_t t138 = 25LL;

    t138 = (((x601|x602)&x603)+x604);

    if (t138 != 2021791709LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x609 = -1599;
	uint16_t x610 = 593U;
	volatile int8_t x611 = INT8_MIN;
	volatile int16_t x612 = INT16_MAX;
	static volatile int32_t t139 = 92397533;

    t139 = (((x609|x610)&x611)+x612);

    if (t139 != 31615) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x613 = INT32_MAX;
	uint16_t x614 = 4U;
	int8_t x615 = -6;
	volatile int8_t x616 = -1;
	int32_t t140 = -28;

    t140 = (((x613|x614)&x615)+x616);

    if (t140 != 2147483641) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = INT8_MIN;
	uint16_t x620 = 657U;
	int64_t t141 = -2281LL;

    t141 = (((x617|x618)&x619)+x620);

    if (t141 != 3601LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x621 = 0;
	static volatile int32_t x622 = -1;
	int16_t x623 = 1;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t142 = 0;

    t142 = (((x621|x622)&x623)+x624);

    if (t142 != 65536) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x625 = INT8_MAX;
	uint8_t x626 = 0U;
	static uint16_t x627 = UINT16_MAX;
	uint8_t x628 = UINT8_MAX;

    t143 = (((x625|x626)&x627)+x628);

    if (t143 != 382) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x629 = 29;
	uint8_t x630 = 17U;
	volatile uint32_t t144 = 109657398U;

    t144 = (((x629|x630)&x631)+x632);

    if (t144 != 30U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x633 = -93017712710LL;
	volatile uint8_t x634 = 0U;
	int32_t x635 = INT32_MAX;
	static int32_t x636 = -1;
	volatile int64_t t145 = 214337177119942LL;

    t145 = (((x633|x634)&x635)+x636);

    if (t145 != 1471567801LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x637 = 1229343420962615LLU;
	int8_t x638 = 1;

    t146 = (((x637|x638)&x639)+x640);

    if (t146 != 1229343420962870LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x647 = 1;
	uint8_t x648 = 1U;
	int64_t t147 = -626LL;

    t147 = (((x645|x646)&x647)+x648);

    if (t147 != 2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x649 = -1;
	uint8_t x650 = UINT8_MAX;
	static int8_t x651 = -7;
	static uint16_t x652 = 12840U;
	int32_t t148 = -26;

    t148 = (((x649|x650)&x651)+x652);

    if (t148 != 12833) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x653 = 3344617U;
	int16_t x655 = INT16_MAX;
	int16_t x656 = INT16_MIN;

    t149 = (((x653|x654)&x655)+x656);

    if (t149 != 18446744073709521149LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x657 = -116321330LL;
	volatile uint64_t x659 = 112344766LLU;
	int64_t x660 = -1299769583813082962LL;
	uint64_t t150 = 52549776LLU;

    t150 = (((x657|x658)&x659)+x660);

    if (t150 != 17146974489941570364LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x661 = UINT8_MAX;
	uint16_t x663 = 677U;
	volatile uint32_t x664 = 706170280U;
	static uint32_t t151 = 27U;

    t151 = (((x661|x662)&x663)+x664);

    if (t151 != 706170957U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x666 = -19603;
	int64_t x668 = -1LL;
	int64_t t152 = -6689336LL;

    t152 = (((x665|x666)&x667)+x668);

    if (t152 != 12LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x671 = UINT32_MAX;
	volatile uint32_t t153 = 1678814U;

    t153 = (((x669|x670)&x671)+x672);

    if (t153 != 4292549801U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x673 = UINT8_MAX;
	int64_t x674 = -210220965LL;
	uint16_t x675 = 1993U;
	static uint32_t x676 = 1027U;
	volatile int64_t t154 = 13043768683952LL;

    t154 = (((x673|x674)&x675)+x676);

    if (t154 != 1228LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x678 = INT64_MAX;
	int8_t x679 = INT8_MAX;
	uint64_t t155 = 3312LLU;

    t155 = (((x677|x678)&x679)+x680);

    if (t155 != 69750LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x681 = -1;
	uint16_t x682 = 10U;
	int16_t x683 = -1;
	volatile uint64_t x684 = 4196497LLU;
	uint64_t t156 = 30708837137456LLU;

    t156 = (((x681|x682)&x683)+x684);

    if (t156 != 4196496LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x685 = 0;
	uint64_t x686 = 17880753LLU;
	int32_t x687 = -865098271;
	static int64_t x688 = INT64_MIN;
	static volatile uint64_t t157 = 2784LLU;

    t157 = (((x685|x686)&x687)+x688);

    if (t157 != 9223372036854809761LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x690 = -2864503358690283LL;
	volatile int8_t x691 = INT8_MIN;
	int16_t x692 = -531;

    t158 = (((x689|x690)&x691)+x692);

    if (t158 != -2864503358690835LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x694 = -198;
	int8_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	volatile uint64_t t159 = 960LLU;

    t159 = (((x693|x694)&x695)+x696);

    if (t159 != 4294967290LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x697 = -3987969318LL;
	uint64_t x698 = 40LLU;
	int16_t x699 = -1;
	int16_t x700 = -908;
	volatile uint64_t t160 = 12100386058724LLU;

    t160 = (((x697|x698)&x699)+x700);

    if (t160 != 18446744069721581422LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x701 = UINT32_MAX;
	int64_t x702 = -34673560967LL;
	uint8_t x703 = 15U;
	volatile int32_t x704 = -5970;

    t161 = (((x701|x702)&x703)+x704);

    if (t161 != -5955LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x706 = INT8_MIN;
	int8_t x707 = -1;
	uint8_t x708 = 45U;
	static volatile uint64_t t162 = 12035871LLU;

    t162 = (((x705|x706)&x707)+x708);

    if (t162 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x709 = 4765;
	int8_t x710 = 3;
	int64_t x712 = -2349478683857483LL;

    t163 = (((x709|x710)&x711)+x712);

    if (t163 != -2349478683856952LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x713 = INT8_MIN;
	uint32_t x714 = 5692U;
	int64_t x715 = 1656600029295894596LL;

    t164 = (((x713|x714)&x715)+x716);

    if (t164 != 484768538LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x717 = 15U;
	int16_t x718 = INT16_MAX;
	int32_t x720 = -52;
	static int32_t t165 = 1;

    t165 = (((x717|x718)&x719)+x720);

    if (t165 != -52) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x722 = -1;
	static int16_t x723 = -1;
	volatile int64_t t166 = -24239117449948LL;

    t166 = (((x721|x722)&x723)+x724);

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x725 = 78U;
	uint32_t x726 = 150U;
	static int32_t x727 = -1;
	uint32_t t167 = 385U;

    t167 = (((x725|x726)&x727)+x728);

    if (t167 != 4231005989U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x729 = -1;
	static int8_t x730 = INT8_MIN;
	uint8_t x731 = 39U;
	static volatile uint8_t x732 = 0U;
	volatile int32_t t168 = -5;

    t168 = (((x729|x730)&x731)+x732);

    if (t168 != 39) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x733 = 1;
	int32_t x734 = INT32_MAX;
	int64_t x736 = -1063753460894384382LL;
	int64_t t169 = -16502927666LL;

    t169 = (((x733|x734)&x735)+x736);

    if (t169 != -1063753458746900735LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x737 = -1;
	uint32_t x739 = UINT32_MAX;
	uint32_t x740 = 194162U;
	uint32_t t170 = 1827171U;

    t170 = (((x737|x738)&x739)+x740);

    if (t170 != 194161U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x746 = INT8_MIN;
	uint8_t x747 = 5U;
	int8_t x748 = INT8_MIN;
	int32_t t171 = 17944;

    t171 = (((x745|x746)&x747)+x748);

    if (t171 != -123) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x749 = 759332U;
	volatile int64_t x750 = INT64_MAX;
	static uint64_t x751 = 30337283LLU;
	static uint32_t x752 = 161880U;

    t172 = (((x749|x750)&x751)+x752);

    if (t172 != 30499163LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x753 = 879383052734LLU;
	static uint16_t x755 = 3U;

    t173 = (((x753|x754)&x755)+x756);

    if (t173 != 14LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = 6910U;
	int64_t x758 = -73636388148LL;
	static uint32_t x760 = UINT32_MAX;
	volatile uint64_t t174 = 5488LLU;

    t174 = (((x757|x758)&x759)+x760);

    if (t174 != 18446744004368136957LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x761 = 664163LL;
	int8_t x762 = INT8_MAX;
	static volatile uint32_t x764 = 4U;
	int64_t t175 = 57406250644570308LL;

    t175 = (((x761|x762)&x763)+x764);

    if (t175 != 664195LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x765 = UINT32_MAX;
	volatile int8_t x766 = INT8_MIN;
	uint16_t x767 = 12452U;
	uint32_t x768 = 1U;
	static uint32_t t176 = 0U;

    t176 = (((x765|x766)&x767)+x768);

    if (t176 != 12453U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x769 = -1;
	uint8_t x770 = 56U;
	static uint32_t x771 = 86245U;
	int64_t x772 = INT64_MIN;
	int64_t t177 = 23627LL;

    t177 = (((x769|x770)&x771)+x772);

    if (t177 != -9223372036854689563LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x774 = -6;
	volatile uint8_t x775 = 3U;
	volatile int16_t x776 = INT16_MAX;
	int64_t t178 = 3234LL;

    t178 = (((x773|x774)&x775)+x776);

    if (t178 != 32770LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x777 = UINT16_MAX;
	static int8_t x778 = INT8_MAX;
	uint8_t x779 = UINT8_MAX;
	int8_t x780 = -27;
	static volatile int32_t t179 = -1;

    t179 = (((x777|x778)&x779)+x780);

    if (t179 != 228) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x781 = 1;
	static volatile int16_t x782 = INT16_MIN;
	int64_t x783 = -4032675LL;
	static uint64_t x784 = UINT64_MAX;
	volatile uint64_t t180 = 25532190756187LLU;

    t180 = (((x781|x782)&x783)+x784);

    if (t180 != 18446744073705488384LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x786 = 0U;
	volatile int16_t x787 = INT16_MAX;
	int16_t x788 = -1;

    t181 = (((x785|x786)&x787)+x788);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x789 = 56U;
	int32_t x790 = INT32_MIN;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = -1;

    t182 = (((x789|x790)&x791)+x792);

    if (t182 != 2147483703U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x793 = INT32_MAX;
	int64_t x794 = INT64_MIN;
	int64_t x795 = INT64_MAX;
	static uint8_t x796 = UINT8_MAX;
	static volatile int64_t t183 = -3804138LL;

    t183 = (((x793|x794)&x795)+x796);

    if (t183 != 2147483902LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x797 = INT64_MIN;
	int8_t x800 = INT8_MAX;

    t184 = (((x797|x798)&x799)+x800);

    if (t184 != 254LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x801 = -1LL;
	uint32_t x802 = 385250U;
	volatile int64_t x804 = -24LL;
	int64_t t185 = -200LL;

    t185 = (((x801|x802)&x803)+x804);

    if (t185 != -25LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x805 = UINT16_MAX;
	static int32_t x806 = INT32_MAX;
	uint8_t x807 = UINT8_MAX;
	uint16_t x808 = 20171U;
	int32_t t186 = -26601084;

    t186 = (((x805|x806)&x807)+x808);

    if (t186 != 20426) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x810 = INT8_MIN;
	uint8_t x811 = 12U;
	int32_t t187 = INT32_MIN;

    t187 = (((x809|x810)&x811)+x812);

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x813 = UINT32_MAX;
	static uint32_t x814 = 3526301U;
	int8_t x815 = 27;
	uint64_t x816 = UINT64_MAX;
	static volatile uint64_t t188 = 322LLU;

    t188 = (((x813|x814)&x815)+x816);

    if (t188 != 26LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x818 = INT8_MAX;
	int16_t x819 = INT16_MIN;

    t189 = (((x817|x818)&x819)+x820);

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x822 = 63U;
	int64_t x823 = INT64_MIN;
	uint32_t x824 = 245U;
	volatile int64_t t190 = -14023681LL;

    t190 = (((x821|x822)&x823)+x824);

    if (t190 != -9223372036854775563LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x827 = INT16_MIN;
	static uint32_t x828 = UINT32_MAX;

    t191 = (((x825|x826)&x827)+x828);

    if (t191 != 4294934527U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x829 = INT64_MIN;
	int8_t x830 = 5;
	volatile uint32_t x832 = UINT32_MAX;
	volatile int64_t t192 = -27577667585712876LL;

    t192 = (((x829|x830)&x831)+x832);

    if (t192 != 4294967299LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x833 = -2;
	volatile uint64_t x834 = 293LLU;
	uint32_t x835 = UINT32_MAX;
	int64_t x836 = -1LL;
	uint64_t t193 = 69274307239786LLU;

    t193 = (((x833|x834)&x835)+x836);

    if (t193 != 4294967294LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x837 = 9;
	static int16_t x838 = -1;
	uint16_t x839 = UINT16_MAX;
	int64_t x840 = INT64_MIN;
	int64_t t194 = 15268587190329224LL;

    t194 = (((x837|x838)&x839)+x840);

    if (t194 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x841 = 1422U;
	int8_t x842 = 0;
	int16_t x843 = -8;
	uint8_t x844 = 2U;
	static int32_t t195 = -199453086;

    t195 = (((x841|x842)&x843)+x844);

    if (t195 != 1418) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x847 = -12466LL;
	static volatile int64_t x848 = 1823124274059574615LL;
	uint64_t t196 = 0LLU;

    t196 = (((x845|x846)&x847)+x848);

    if (t196 != 1823124274059562149LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x849 = INT8_MIN;
	int8_t x851 = INT8_MIN;
	static int16_t x852 = -1;
	static volatile int32_t t197 = -146494;

    t197 = (((x849|x850)&x851)+x852);

    if (t197 != -129) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x853 = INT8_MAX;
	int8_t x854 = INT8_MIN;
	static uint8_t x855 = UINT8_MAX;
	int32_t x856 = -1;

    t198 = (((x853|x854)&x855)+x856);

    if (t198 != 254) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x857 = 4322U;
	volatile int64_t x858 = 4499LL;
	int64_t x859 = INT64_MAX;
	volatile int64_t t199 = 35534420353LL;

    t199 = (((x857|x858)&x859)+x860);

    if (t199 != -28173LL) { NG(); } else { ; }
	
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

