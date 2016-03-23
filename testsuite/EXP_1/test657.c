
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

volatile int8_t x1 = -1;
int16_t x2 = -12;
volatile uint8_t x7 = 5U;
static int16_t x20 = 0;
static volatile int8_t x22 = -7;
int8_t x25 = INT8_MIN;
int16_t x36 = -495;
volatile int8_t x45 = INT8_MIN;
uint64_t t10 = 6629944LLU;
uint8_t x59 = 2U;
int8_t x64 = INT8_MIN;
volatile uint64_t t13 = 41376505402934LLU;
volatile int64_t t15 = 1937536815362326LL;
int32_t x83 = INT32_MIN;
int32_t x84 = INT32_MAX;
int32_t x85 = INT32_MAX;
volatile uint32_t x89 = 601406681U;
int16_t x96 = -58;
volatile int8_t x98 = INT8_MAX;
int16_t x102 = -1;
static int64_t t21 = -160628293LL;
static int64_t x107 = INT64_MAX;
static int32_t x112 = -1448;
int16_t x115 = INT16_MAX;
int8_t x117 = -1;
volatile uint64_t t25 = 315629055203629LLU;
uint64_t x124 = 10LLU;
volatile int64_t x138 = INT64_MIN;
uint64_t x145 = UINT64_MAX;
int32_t x147 = 209529;
volatile int64_t x158 = INT64_MIN;
uint16_t x161 = 0U;
int32_t x165 = INT32_MAX;
uint8_t x171 = 9U;
int8_t x174 = 13;
uint16_t x175 = 9787U;
volatile int32_t t37 = -111;
int32_t t38 = 21482;
static int8_t x182 = -1;
volatile int64_t t39 = 525680209288828LL;
volatile uint16_t x189 = 2008U;
int32_t x193 = -12679;
int32_t x199 = INT32_MAX;
static uint8_t x203 = 4U;
int64_t x204 = INT64_MIN;
static volatile int64_t t44 = -6235336906514870LL;
volatile uint8_t x205 = 9U;
volatile uint8_t x218 = UINT8_MAX;
static int32_t x222 = 44790207;
int8_t x224 = -1;
static int16_t x236 = -1;
volatile uint16_t x244 = 28U;
static int64_t x251 = INT64_MIN;
static int32_t x253 = INT32_MIN;
volatile int8_t x258 = INT8_MAX;
uint8_t x263 = 1U;
static int8_t x276 = -2;
static int8_t x278 = -3;
volatile int64_t t64 = -2999043194179225994LL;
uint64_t t65 = UINT64_MAX;
volatile uint32_t x290 = 12842885U;
int32_t x294 = INT32_MAX;
volatile int64_t t69 = 39500309025682344LL;
static int64_t t71 = 1LL;
static uint64_t x313 = 2534983588LLU;
static volatile int8_t x324 = INT8_MIN;
volatile uint64_t t74 = 500784788531619054LLU;
volatile uint64_t x328 = UINT64_MAX;
uint64_t x329 = 105739610448LLU;
uint64_t x330 = 5127545LLU;
volatile uint32_t x334 = 1U;
static uint8_t x336 = 1U;
int64_t x339 = INT64_MIN;
static int64_t x340 = -640737LL;
static volatile uint64_t t79 = UINT64_MAX;
volatile int64_t t80 = INT64_MIN;
int64_t t81 = 22418094LL;
static uint16_t x354 = UINT16_MAX;
int32_t t82 = 7;
int8_t x362 = INT8_MIN;
int32_t x366 = -1;
uint32_t x372 = UINT32_MAX;
int16_t x377 = 17;
int16_t x379 = INT16_MAX;
uint8_t x380 = 58U;
int32_t x387 = -1451;
static int32_t x388 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
volatile int64_t x399 = INT64_MIN;
uint32_t t94 = 2134255871U;
volatile int16_t x411 = INT16_MIN;
int32_t x414 = -1;
volatile uint64_t t96 = 36505461LLU;
uint32_t x420 = UINT32_MAX;
uint64_t t97 = 29LLU;
int16_t x444 = INT16_MIN;
int64_t t104 = 4158713436LL;
static int16_t x468 = -1;
uint64_t t107 = UINT64_MAX;
int64_t t109 = INT64_MIN;
int16_t x478 = 856;
int16_t x480 = -1;
volatile int32_t t110 = 321;
int64_t x481 = 1854317195LL;
int64_t x489 = 51415LL;
int64_t x494 = INT64_MAX;
static uint64_t t114 = 253761326404894951LLU;
static uint32_t x498 = 184779853U;
int8_t x510 = INT8_MIN;
volatile uint8_t x512 = UINT8_MAX;
uint64_t x515 = 210180LLU;
int16_t x517 = INT16_MIN;
int8_t x520 = -17;
static int8_t x522 = 63;
int8_t x526 = INT8_MIN;
int16_t x539 = -1;
static uint8_t x541 = UINT8_MAX;
static int64_t x550 = INT64_MIN;
static int64_t x556 = INT64_MAX;
volatile uint64_t t128 = 152123201LLU;
int16_t x568 = 182;
volatile uint64_t t131 = 25LLU;
int64_t x580 = -1LL;
volatile int64_t t134 = -65868096597LL;
static uint64_t x590 = UINT64_MAX;
int16_t x597 = INT16_MIN;
int32_t x599 = 1;
static int64_t t139 = INT64_MIN;
int8_t x603 = INT8_MIN;
int64_t x608 = INT64_MIN;
static int32_t x615 = -455480735;
static volatile uint64_t t143 = 36376932621729146LLU;
int32_t x620 = INT32_MIN;
int32_t x626 = INT32_MAX;
static int64_t x631 = -1LL;
uint8_t x632 = UINT8_MAX;
uint64_t x635 = UINT64_MAX;
volatile uint64_t t148 = 16255807636LLU;
int8_t x639 = INT8_MIN;
int16_t x657 = INT16_MIN;
volatile int64_t x668 = 11LL;
uint32_t x673 = 7287U;
uint32_t t156 = 1763021285U;
volatile int16_t x686 = INT16_MAX;
int64_t x697 = INT64_MIN;
static int32_t x706 = INT32_MIN;
volatile int16_t x707 = -1256;
uint32_t t162 = 302U;
static int32_t x709 = INT32_MAX;
static uint16_t x712 = 26U;
int64_t x734 = INT64_MIN;
volatile int32_t x740 = INT32_MIN;
uint16_t x749 = UINT16_MAX;
int16_t x751 = -1;
volatile int32_t t173 = INT32_MIN;
uint64_t x755 = 65544268942143237LLU;
int8_t x762 = INT8_MIN;
static volatile int16_t x764 = INT16_MAX;
uint32_t t176 = 1U;
volatile int32_t x769 = INT32_MIN;
int64_t t178 = -365457475LL;
int16_t x773 = INT16_MAX;
uint32_t x774 = 2U;
volatile int32_t x780 = -1;
uint16_t x786 = 17U;
int8_t x792 = -1;
volatile uint64_t x813 = 57947LLU;
volatile uint32_t x815 = UINT32_MAX;
uint32_t x816 = 3772475U;
int16_t x827 = INT16_MIN;
int16_t x828 = INT16_MIN;
uint16_t x838 = 108U;
int16_t x839 = INT16_MIN;
int16_t x851 = INT16_MIN;
volatile int32_t x856 = INT32_MIN;
uint16_t x859 = 2009U;
static volatile int8_t x861 = -1;
volatile uint32_t x862 = 273U;


void f0(void) {
    	int64_t x3 = -481277340LL;
	uint64_t x4 = 13347LLU;
	uint64_t t0 = 3LLU;

    t0 = (((x1/x2)%x3)|x4);

    if (t0 != 13347LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	int32_t x8 = INT32_MAX;
	int32_t t1 = INT32_MAX;

    t1 = (((x5/x6)%x7)|x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x13 = 3U;
	uint16_t x14 = 268U;
	static uint8_t x15 = 1U;
	uint16_t x16 = UINT16_MAX;
	int32_t t2 = -46448081;

    t2 = (((x13/x14)%x15)|x16);

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 56U;
	int32_t x18 = -20902;
	volatile int8_t x19 = INT8_MAX;
	volatile int32_t t3 = 11650474;

    t3 = (((x17/x18)%x19)|x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -10518;
	volatile int32_t x23 = -1;
	static int64_t x24 = INT64_MIN;
	int64_t t4 = INT64_MIN;

    t4 = (((x21/x22)%x23)|x24);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x26 = 4U;
	volatile int16_t x27 = INT16_MIN;
	volatile int16_t x28 = -1;
	static volatile int32_t t5 = 2;

    t5 = (((x25/x26)%x27)|x28);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 502223401014338403LL;
	static int32_t x30 = INT32_MIN;
	uint64_t x31 = 113440488843917772LLU;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (((x29/x30)%x31)|x32);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = -1882689;
	int16_t x35 = INT16_MAX;
	int64_t t7 = 6764153LL;

    t7 = (((x33/x34)%x35)|x36);

    if (t7 != -3LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 12;
	int16_t x38 = -1;
	volatile uint32_t x39 = UINT32_MAX;
	uint32_t x40 = 116875U;
	uint32_t t8 = UINT32_MAX;

    t8 = (((x37/x38)%x39)|x40);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	volatile uint32_t x42 = 122U;
	uint16_t x43 = 122U;
	int16_t x44 = INT16_MAX;
	static uint32_t t9 = 995U;

    t9 = (((x41/x42)%x43)|x44);

    if (t9 != 32767U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x46 = 75863736008232LLU;
	int32_t x47 = -643371653;
	uint32_t x48 = UINT32_MAX;

    t10 = (((x45/x46)%x47)|x48);

    if (t10 != 4294967295LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x57 = 1757;
	uint8_t x58 = 13U;
	uint8_t x60 = UINT8_MAX;
	int32_t t11 = 58248066;

    t11 = (((x57/x58)%x59)|x60);

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = 14U;
	volatile int32_t x63 = INT32_MIN;
	volatile uint32_t t12 = 4U;

    t12 = (((x61/x62)%x63)|x64);

    if (t12 != 4294967241U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x65 = 1;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 2186836914LLU;

    t13 = (((x65/x66)%x67)|x68);

    if (t13 != 2186836914LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = -3082;
	volatile int16_t x70 = INT16_MIN;
	volatile int64_t x71 = -16864880918LL;
	static uint64_t x72 = UINT64_MAX;
	static uint64_t t14 = UINT64_MAX;

    t14 = (((x69/x70)%x71)|x72);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MAX;
	int16_t x80 = 1;

    t15 = (((x77/x78)%x79)|x80);

    if (t15 != -36170086419038335LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = -1;
	uint32_t x82 = 4955776U;
	uint32_t t16 = 460699U;

    t16 = (((x81/x82)%x83)|x84);

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x86 = INT8_MIN;
	static int64_t x87 = INT64_MIN;
	int64_t x88 = -1LL;
	volatile int64_t t17 = -2LL;

    t17 = (((x85/x86)%x87)|x88);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x90 = 145U;
	static volatile int8_t x91 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;
	volatile uint32_t t18 = 1536U;

    t18 = (((x89/x90)%x91)|x92);

    if (t18 != 4194303U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x93 = 1U;
	int64_t x94 = 6812874368039728LL;
	int32_t x95 = INT32_MIN;
	volatile int64_t t19 = 32601623LL;

    t19 = (((x93/x94)%x95)|x96);

    if (t19 != -58LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x97 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = -1;
	volatile int32_t t20 = 1;

    t20 = (((x97/x98)%x99)|x100);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	int64_t x103 = -1LL;
	int32_t x104 = 19;

    t21 = (((x101/x102)%x103)|x104);

    if (t21 != 19LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	static int64_t t22 = 24068LL;

    t22 = (((x105/x106)%x107)|x108);

    if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = -1;
	int64_t x110 = -1LL;
	static int8_t x111 = INT8_MAX;
	volatile int64_t t23 = -967870580876627083LL;

    t23 = (((x109/x110)%x111)|x112);

    if (t23 != -1447LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x113 = 0U;
	int64_t x114 = -352459219244348LL;
	volatile uint32_t x116 = UINT32_MAX;
	int64_t t24 = 16LL;

    t24 = (((x113/x114)%x115)|x116);

    if (t24 != 4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x118 = 2LLU;
	static int8_t x119 = INT8_MIN;
	static volatile int64_t x120 = 92693722205448LL;

    t25 = (((x117/x118)%x119)|x120);

    if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x121 = 1;
	static int8_t x122 = INT8_MIN;
	uint64_t x123 = 25LLU;
	uint64_t t26 = 387171LLU;

    t26 = (((x121/x122)%x123)|x124);

    if (t26 != 10LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = 8U;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t27 = 14705857LL;

    t27 = (((x129/x130)%x131)|x132);

    if (t27 != -8LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x137 = -1;
	int32_t x139 = INT32_MIN;
	uint64_t x140 = 328314352LLU;
	volatile uint64_t t28 = 0LLU;

    t28 = (((x137/x138)%x139)|x140);

    if (t28 != 328314352LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = -1;
	int64_t x142 = INT64_MAX;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;
	static volatile int64_t t29 = -32229955136605LL;

    t29 = (((x141/x142)%x143)|x144);

    if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x146 = 3U;
	volatile int32_t x148 = INT32_MIN;
	volatile uint64_t t30 = 479954469267LLU;

    t30 = (((x145/x146)%x147)|x148);

    if (t30 != 18446744071562099593LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x149 = 1LLU;
	int8_t x150 = -30;
	volatile int16_t x151 = -1;
	static int16_t x152 = -1;
	static volatile uint64_t t31 = UINT64_MAX;

    t31 = (((x149/x150)%x151)|x152);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	int32_t x155 = 19755;
	uint64_t x156 = 236008709839210756LLU;
	static uint64_t t32 = 2134LLU;

    t32 = (((x153/x154)%x155)|x156);

    if (t32 != 236008709839210884LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x157 = 124U;
	uint32_t x159 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

    t33 = (((x157/x158)%x159)|x160);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x162 = 1861LLU;
	int16_t x163 = -1;
	uint64_t x164 = 5LLU;
	uint64_t t34 = 518LLU;

    t34 = (((x161/x162)%x163)|x164);

    if (t34 != 5LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = INT32_MIN;
	uint32_t x167 = 32824457U;
	int16_t x168 = -1;
	uint32_t t35 = UINT32_MAX;

    t35 = (((x165/x166)%x167)|x168);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x169 = INT16_MAX;
	int32_t x170 = INT32_MIN;
	int32_t x172 = -10765074;
	int32_t t36 = 74;

    t36 = (((x169/x170)%x171)|x172);

    if (t36 != -10765074) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x173 = INT32_MIN;
	uint8_t x176 = 47U;

    t37 = (((x173/x174)%x175)|x176);

    if (t37 != -6017) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = -70;
	static int16_t x178 = INT16_MIN;
	static volatile int32_t x179 = 12674;
	int8_t x180 = 2;

    t38 = (((x177/x178)%x179)|x180);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x181 = -12;
	static int8_t x183 = INT8_MIN;
	int64_t x184 = -1LL;

    t39 = (((x181/x182)%x183)|x184);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x185 = UINT16_MAX;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = 6;
	int8_t x188 = INT8_MIN;
	volatile int32_t t40 = 104;

    t40 = (((x185/x186)%x187)|x188);

    if (t40 != -123) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x190 = -1;
	static volatile int8_t x191 = INT8_MAX;
	volatile uint16_t x192 = 299U;
	int32_t t41 = -37379246;

    t41 = (((x189/x190)%x191)|x192);

    if (t41 != -69) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x194 = -114454107LL;
	volatile int16_t x195 = -275;
	int8_t x196 = INT8_MIN;
	int64_t t42 = 4LL;

    t42 = (((x193/x194)%x195)|x196);

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x197 = INT16_MIN;
	static int64_t x198 = INT64_MIN;
	int8_t x200 = INT8_MIN;
	volatile int64_t t43 = 379938350755LL;

    t43 = (((x197/x198)%x199)|x200);

    if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x201 = UINT32_MAX;
	volatile int16_t x202 = -1;

    t44 = (((x201/x202)%x203)|x204);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x206 = 5U;
	uint16_t x207 = 12820U;
	uint16_t x208 = 323U;
	int32_t t45 = -238414059;

    t45 = (((x205/x206)%x207)|x208);

    if (t45 != 323) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -3;
	uint64_t x212 = 553436600330296LLU;
	volatile uint64_t t46 = 94530LLU;

    t46 = (((x209/x210)%x211)|x212);

    if (t46 != 553436600330296LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = -2331;
	volatile int64_t x214 = 57965337345LL;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 0;
	volatile int64_t t47 = -3363LL;

    t47 = (((x213/x214)%x215)|x216);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MIN;
	volatile int32_t x219 = INT32_MAX;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t48 = -22915;

    t48 = (((x217/x218)%x219)|x220);

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MIN;
	uint64_t x223 = 25814735958648LLU;
	uint64_t t49 = UINT64_MAX;

    t49 = (((x221/x222)%x223)|x224);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x225 = 236;
	static int64_t x226 = -1946174746046898LL;
	static uint8_t x227 = 8U;
	int16_t x228 = 12301;
	int64_t t50 = 2LL;

    t50 = (((x225/x226)%x227)|x228);

    if (t50 != 12301LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = 182;
	int32_t x230 = -3;
	int16_t x231 = 153;
	volatile uint64_t x232 = 8652331197302LLU;
	static volatile uint64_t t51 = 1314857LLU;

    t51 = (((x229/x230)%x231)|x232);

    if (t51 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x233 = -1;
	static int64_t x234 = INT64_MAX;
	volatile uint32_t x235 = 784190U;
	int64_t t52 = -15650938705323LL;

    t52 = (((x233/x234)%x235)|x236);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x237 = 6U;
	uint64_t x238 = 510207LLU;
	int16_t x239 = INT16_MIN;
	static int16_t x240 = -1;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (((x237/x238)%x239)|x240);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = -16382;
	static volatile int16_t x242 = 5438;
	static volatile int16_t x243 = INT16_MAX;
	int32_t t54 = 12;

    t54 = (((x241/x242)%x243)|x244);

    if (t54 != -3) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile int8_t x246 = -1;
	static int32_t x247 = -1;
	uint16_t x248 = 1001U;
	volatile int32_t t55 = 967071986;

    t55 = (((x245/x246)%x247)|x248);

    if (t55 != 1001) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x249 = -1LL;
	int64_t x250 = INT64_MIN;
	int16_t x252 = 161;
	volatile int64_t t56 = 54LL;

    t56 = (((x249/x250)%x251)|x252);

    if (t56 != 161LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x254 = -19180853146LL;
	uint16_t x255 = 7446U;
	static int8_t x256 = 2;
	volatile int64_t t57 = 2026044595349139179LL;

    t57 = (((x253/x254)%x255)|x256);

    if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = 0;
	int8_t x259 = -1;
	int16_t x260 = -6161;
	volatile int32_t t58 = -31;

    t58 = (((x257/x258)%x259)|x260);

    if (t58 != -6161) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = 356351;
	static uint32_t x262 = 2320U;
	static int8_t x264 = INT8_MIN;
	uint32_t t59 = 92979U;

    t59 = (((x261/x262)%x263)|x264);

    if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = -92;
	int64_t x266 = -3705707361912104760LL;
	volatile uint64_t x267 = 1723LLU;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t60 = 1625868448665712844LLU;

    t60 = (((x265/x266)%x267)|x268);

    if (t60 != 4294967295LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x269 = UINT32_MAX;
	int16_t x270 = 56;
	int64_t x271 = -1LL;
	static int32_t x272 = 313406;
	static int64_t t61 = -32726860229120LL;

    t61 = (((x269/x270)%x271)|x272);

    if (t61 != 313406LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = -1;
	int16_t x274 = -7;
	static volatile int32_t x275 = INT32_MIN;
	volatile int32_t t62 = -5;

    t62 = (((x273/x274)%x275)|x276);

    if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x277 = 58478679;
	uint32_t x279 = 1082435885U;
	uint32_t x280 = 4183U;
	static uint32_t t63 = 117U;

    t63 = (((x277/x278)%x279)|x280);

    if (t63 != 1028166751U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = -1;
	static int8_t x282 = INT8_MIN;
	int8_t x283 = 48;
	int64_t x284 = 480073326776LL;

    t64 = (((x281/x282)%x283)|x284);

    if (t64 != 480073326776LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x285 = 9LLU;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MAX;
	volatile int16_t x288 = -1;

    t65 = (((x285/x286)%x287)|x288);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MAX;
	int8_t x291 = -1;
	static volatile uint64_t x292 = 2707529923786190059LLU;
	uint64_t t66 = 37710379431052LLU;

    t66 = (((x289/x290)%x291)|x292);

    if (t66 != 2707529923786190059LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = 21U;
	int64_t x295 = INT64_MIN;
	static uint8_t x296 = UINT8_MAX;
	int64_t t67 = 62574651870100LL;

    t67 = (((x293/x294)%x295)|x296);

    if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x297 = 9;
	volatile int64_t x298 = INT64_MIN;
	int8_t x299 = 1;
	uint8_t x300 = 17U;
	int64_t t68 = -6853037LL;

    t68 = (((x297/x298)%x299)|x300);

    if (t68 != 17LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x301 = -25;
	int64_t x302 = 40944LL;
	uint8_t x303 = 3U;
	uint16_t x304 = UINT16_MAX;

    t69 = (((x301/x302)%x303)|x304);

    if (t69 != 65535LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x305 = -1;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = -1;
	int8_t x308 = INT8_MAX;
	static int64_t t70 = -11356LL;

    t70 = (((x305/x306)%x307)|x308);

    if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x309 = 52791707016924834LL;
	int16_t x310 = 3368;
	int16_t x311 = INT16_MIN;
	static int8_t x312 = -1;

    t71 = (((x309/x310)%x311)|x312);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x314 = 177U;
	int32_t x315 = -1328147;
	int16_t x316 = -15066;
	volatile uint64_t t72 = 14LLU;

    t72 = (((x313/x314)%x315)|x316);

    if (t72 != 18446744073709538615LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = 14;
	volatile uint16_t x318 = 1884U;
	static int8_t x319 = INT8_MIN;
	uint16_t x320 = 1781U;
	volatile int32_t t73 = -553387614;

    t73 = (((x317/x318)%x319)|x320);

    if (t73 != 1781) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;

    t74 = (((x321/x322)%x323)|x324);

    if (t74 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	uint64_t t75 = UINT64_MAX;

    t75 = (((x325/x326)%x327)|x328);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x331 = 14903;
	int32_t x332 = 61195;
	volatile uint64_t t76 = 79LLU;

    t76 = (((x329/x330)%x331)|x332);

    if (t76 != 65375LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x333 = 1;
	static uint32_t x335 = 20122U;
	volatile uint32_t t77 = 1U;

    t77 = (((x333/x334)%x335)|x336);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x337 = -27;
	int16_t x338 = INT16_MAX;
	static int64_t t78 = 847827LL;

    t78 = (((x337/x338)%x339)|x340);

    if (t78 != -640737LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x341 = 0U;
	static int64_t x342 = 2LL;
	static volatile uint8_t x343 = 26U;
	volatile uint64_t x344 = UINT64_MAX;

    t79 = (((x341/x342)%x343)|x344);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x345 = 9399U;
	volatile uint32_t x346 = 81902U;
	volatile int16_t x347 = INT16_MIN;
	static int64_t x348 = INT64_MIN;

    t80 = (((x345/x346)%x347)|x348);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x349 = -1;
	volatile uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	int64_t x352 = 194778116678418LL;

    t81 = (((x349/x350)%x351)|x352);

    if (t81 != 194778116678418LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x353 = 125U;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -1;

    t82 = (((x353/x354)%x355)|x356);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = -27;
	static uint8_t x359 = 6U;
	volatile int64_t x360 = INT64_MIN;
	static volatile int64_t t83 = 6029226291LL;

    t83 = (((x357/x358)%x359)|x360);

    if (t83 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = 1;
	static uint64_t x363 = 3LLU;
	static uint64_t x364 = 15517394543LLU;
	static volatile uint64_t t84 = 0LLU;

    t84 = (((x361/x362)%x363)|x364);

    if (t84 != 15517394543LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x365 = 366617LLU;
	int8_t x367 = INT8_MIN;
	volatile int32_t x368 = -1;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = (((x365/x366)%x367)|x368);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = -447;
	uint32_t x370 = 99524U;
	uint64_t x371 = 1480745LLU;
	volatile uint64_t t86 = 0LLU;

    t86 = (((x369/x370)%x371)|x372);

    if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = INT32_MAX;
	uint64_t x374 = UINT64_MAX;
	volatile uint64_t x375 = 1644803498063LLU;
	uint16_t x376 = UINT16_MAX;
	static volatile uint64_t t87 = 509094589195LLU;

    t87 = (((x373/x374)%x375)|x376);

    if (t87 != 65535LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x378 = -1;
	volatile int32_t t88 = 152081;

    t88 = (((x377/x378)%x379)|x380);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x381 = 20U;
	uint32_t x382 = UINT32_MAX;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	static uint32_t t89 = 30U;

    t89 = (((x381/x382)%x383)|x384);

    if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x385 = 1;
	int32_t x386 = -1;
	int32_t t90 = 3;

    t90 = (((x385/x386)%x387)|x388);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x389 = 2250014276240477LLU;
	static volatile uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = INT64_MAX;
	uint64_t t91 = 253982461LLU;

    t91 = (((x389/x390)%x391)|x392);

    if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x393 = -39374LL;
	static int64_t x394 = 1047155974LL;
	int16_t x395 = -2;
	int8_t x396 = INT8_MIN;
	static int64_t t92 = -273092151393LL;

    t92 = (((x393/x394)%x395)|x396);

    if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x397 = 62;
	static int16_t x398 = INT16_MAX;
	static int8_t x400 = INT8_MAX;
	static int64_t t93 = 3416944726816275LL;

    t93 = (((x397/x398)%x399)|x400);

    if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = INT32_MIN;
	static volatile uint32_t x406 = 94U;
	static int16_t x407 = INT16_MAX;
	int8_t x408 = 0;

    t94 = (((x405/x406)%x407)|x408);

    if (t94 != 6971U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x409 = UINT16_MAX;
	int16_t x410 = INT16_MIN;
	int32_t x412 = -445678;
	static int32_t t95 = 23;

    t95 = (((x409/x410)%x411)|x412);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x413 = INT8_MAX;
	static uint16_t x415 = 69U;
	uint64_t x416 = 5606512LLU;

    t96 = (((x413/x414)%x415)|x416);

    if (t96 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x417 = -31;
	static uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MIN;

    t97 = (((x417/x418)%x419)|x420);

    if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = 92361109U;
	uint16_t x423 = 43U;
	int16_t x424 = INT16_MIN;
	static uint32_t t98 = 17239841U;

    t98 = (((x421/x422)%x423)|x424);

    if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x425 = INT64_MAX;
	int32_t x426 = INT32_MIN;
	static uint8_t x427 = 3U;
	volatile int8_t x428 = INT8_MIN;
	volatile int64_t t99 = -132440483548599LL;

    t99 = (((x425/x426)%x427)|x428);

    if (t99 != -128LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x433 = INT32_MIN;
	static int64_t x434 = 861LL;
	uint16_t x435 = UINT16_MAX;
	int16_t x436 = 94;
	int64_t t100 = -323LL;

    t100 = (((x433/x434)%x435)|x436);

    if (t100 != -3841LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x437 = INT8_MIN;
	uint32_t x438 = 83025072U;
	int32_t x439 = -126361;
	static volatile int16_t x440 = INT16_MIN;
	volatile uint32_t t101 = 865U;

    t101 = (((x437/x438)%x439)|x440);

    if (t101 != 4294934579U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x441 = INT8_MAX;
	static uint8_t x442 = UINT8_MAX;
	int32_t x443 = INT32_MAX;
	static volatile int32_t t102 = 2331693;

    t102 = (((x441/x442)%x443)|x444);

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x445 = -1;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = 20828U;
	volatile int32_t t103 = 6;

    t103 = (((x445/x446)%x447)|x448);

    if (t103 != 20828) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x453 = 1U;
	int16_t x454 = INT16_MAX;
	int64_t x455 = INT64_MIN;
	static int16_t x456 = INT16_MIN;

    t104 = (((x453/x454)%x455)|x456);

    if (t104 != -32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x457 = -1;
	int32_t x458 = INT32_MAX;
	int16_t x459 = -1;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t105 = INT32_MIN;

    t105 = (((x457/x458)%x459)|x460);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x461 = 0U;
	int8_t x462 = INT8_MIN;
	static int8_t x463 = -46;
	int64_t x464 = -1075LL;
	volatile int64_t t106 = 88LL;

    t106 = (((x461/x462)%x463)|x464);

    if (t106 != -1075LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x465 = 3U;
	uint64_t x466 = 454884798LLU;
	int16_t x467 = INT16_MIN;

    t107 = (((x465/x466)%x467)|x468);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x469 = UINT16_MAX;
	volatile int8_t x470 = INT8_MAX;
	int32_t x471 = INT32_MIN;
	static int8_t x472 = -3;
	volatile int32_t t108 = -31;

    t108 = (((x469/x470)%x471)|x472);

    if (t108 != -3) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x473 = INT8_MAX;
	volatile uint8_t x474 = UINT8_MAX;
	uint8_t x475 = 6U;
	int64_t x476 = INT64_MIN;

    t109 = (((x473/x474)%x475)|x476);

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = -1;
	int16_t x479 = 2779;

    t110 = (((x477/x478)%x479)|x480);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x482 = -1818720568149726LL;
	volatile int16_t x483 = 3;
	uint32_t x484 = 233314048U;
	int64_t t111 = 0LL;

    t111 = (((x481/x482)%x483)|x484);

    if (t111 != 233314048LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x485 = 45863293091547565LLU;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = 6232U;
	int8_t x488 = INT8_MIN;
	uint64_t t112 = 508194228476715LLU;

    t112 = (((x485/x486)%x487)|x488);

    if (t112 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x490 = 431041;
	static volatile uint8_t x491 = 2U;
	volatile int64_t x492 = INT64_MIN;
	static volatile int64_t t113 = INT64_MIN;

    t113 = (((x489/x490)%x491)|x492);

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x493 = -1LL;
	uint64_t x495 = 101LLU;
	static uint8_t x496 = 84U;

    t114 = (((x493/x494)%x495)|x496);

    if (t114 != 84LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile uint8_t x499 = 3U;
	int16_t x500 = 6323;
	uint32_t t115 = 515924361U;

    t115 = (((x497/x498)%x499)|x500);

    if (t115 != 6323U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x501 = -14;
	volatile uint64_t x502 = 12408LLU;
	uint32_t x503 = 19U;
	int8_t x504 = -4;
	uint64_t t116 = 11LLU;

    t116 = (((x501/x502)%x503)|x504);

    if (t116 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = 0;
	int16_t x511 = -243;
	volatile int32_t t117 = 463945502;

    t117 = (((x509/x510)%x511)|x512);

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x513 = -1LL;
	volatile int64_t x514 = 213238291LL;
	static uint32_t x516 = 9017046U;
	volatile uint64_t t118 = 770073LLU;

    t118 = (((x513/x514)%x515)|x516);

    if (t118 != 9017046LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x518 = INT16_MAX;
	int32_t x519 = INT32_MIN;
	volatile int32_t t119 = 624789796;

    t119 = (((x517/x518)%x519)|x520);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x521 = INT8_MIN;
	int64_t x523 = INT64_MAX;
	int8_t x524 = 1;
	int64_t t120 = -18LL;

    t120 = (((x521/x522)%x523)|x524);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = 50;
	uint16_t x527 = UINT16_MAX;
	static int64_t x528 = INT64_MIN;
	int64_t t121 = INT64_MIN;

    t121 = (((x525/x526)%x527)|x528);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = 22739273015708LL;
	static int64_t x530 = INT64_MAX;
	int16_t x531 = -1;
	volatile int32_t x532 = INT32_MIN;
	volatile int64_t t122 = -5605790713393LL;

    t122 = (((x529/x530)%x531)|x532);

    if (t122 != -2147483648LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x533 = 82876321654268LL;
	volatile uint64_t x534 = UINT64_MAX;
	int32_t x535 = INT32_MIN;
	uint64_t x536 = 3840768LLU;
	static volatile uint64_t t123 = 374148LLU;

    t123 = (((x533/x534)%x535)|x536);

    if (t123 != 3840768LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x537 = 29105U;
	static int32_t x538 = INT32_MIN;
	volatile int16_t x540 = INT16_MIN;
	int32_t t124 = -24251317;

    t124 = (((x537/x538)%x539)|x540);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x542 = INT16_MIN;
	uint32_t x543 = UINT32_MAX;
	int64_t x544 = INT64_MIN;
	volatile int64_t t125 = INT64_MIN;

    t125 = (((x541/x542)%x543)|x544);

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint64_t x545 = 31011107914LLU;
	int8_t x546 = INT8_MAX;
	volatile uint8_t x547 = UINT8_MAX;
	int32_t x548 = 1470406;
	static uint64_t t126 = 536909LLU;

    t126 = (((x545/x546)%x547)|x548);

    if (t126 != 1470414LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x549 = 277779185757807226LLU;
	uint32_t x551 = 807924U;
	int16_t x552 = INT16_MAX;
	uint64_t t127 = 60201686724608LLU;

    t127 = (((x549/x550)%x551)|x552);

    if (t127 != 32767LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x553 = 0U;
	int8_t x554 = -1;
	uint64_t x555 = UINT64_MAX;

    t128 = (((x553/x554)%x555)|x556);

    if (t128 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = -12;
	volatile int16_t x558 = INT16_MAX;
	static int16_t x559 = 7236;
	int32_t x560 = 750;
	volatile int32_t t129 = 2721;

    t129 = (((x557/x558)%x559)|x560);

    if (t129 != 750) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x561 = INT64_MIN;
	int32_t x562 = 7980;
	int32_t x563 = INT32_MAX;
	int64_t x564 = INT64_MIN;
	volatile int64_t t130 = 2651LL;

    t130 = (((x561/x562)%x563)|x564);

    if (t130 != -973633563LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x565 = 121215970676683LLU;
	int8_t x566 = -1;
	int32_t x567 = -6008;

    t131 = (((x565/x566)%x567)|x568);

    if (t131 != 182LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x569 = 0U;
	uint8_t x570 = 46U;
	volatile uint64_t x571 = 59860816327LLU;
	int32_t x572 = INT32_MIN;
	volatile uint64_t t132 = 6358735114LLU;

    t132 = (((x569/x570)%x571)|x572);

    if (t132 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x573 = INT64_MIN;
	volatile int64_t x574 = INT64_MIN;
	uint32_t x575 = 437U;
	volatile int16_t x576 = 0;
	int64_t t133 = 156LL;

    t133 = (((x573/x574)%x575)|x576);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	volatile int64_t x578 = INT64_MAX;
	int64_t x579 = -1LL;

    t134 = (((x577/x578)%x579)|x580);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = INT64_MAX;
	volatile uint32_t x582 = UINT32_MAX;
	volatile int32_t x583 = INT32_MIN;
	static int8_t x584 = 26;
	int64_t t135 = -13714548951061LL;

    t135 = (((x581/x582)%x583)|x584);

    if (t135 != 26LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x585 = 7U;
	int32_t x586 = INT32_MAX;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	int64_t t136 = -21841267965117540LL;

    t136 = (((x585/x586)%x587)|x588);

    if (t136 != -2147483648LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x589 = INT8_MIN;
	int8_t x591 = -1;
	static int32_t x592 = INT32_MIN;
	volatile uint64_t t137 = 0LLU;

    t137 = (((x589/x590)%x591)|x592);

    if (t137 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x593 = 400703015306267LL;
	int64_t x594 = -483038LL;
	int32_t x595 = -1;
	int32_t x596 = -1;
	int64_t t138 = -20309445466LL;

    t138 = (((x593/x594)%x595)|x596);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x598 = INT8_MIN;
	static int64_t x600 = INT64_MIN;

    t139 = (((x597/x598)%x599)|x600);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x601 = 7420U;
	int32_t x602 = INT32_MAX;
	volatile int32_t x604 = INT32_MIN;
	volatile uint32_t t140 = 130072668U;

    t140 = (((x601/x602)%x603)|x604);

    if (t140 != 2147483648U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x605 = -2;
	uint16_t x606 = 2U;
	uint64_t x607 = 87869251LLU;
	static volatile uint64_t t141 = 55553914693365338LLU;

    t141 = (((x605/x606)%x607)|x608);

    if (t141 != 9223372036894866067LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x609 = INT16_MAX;
	int16_t x610 = -1;
	volatile uint64_t x611 = 31LLU;
	uint32_t x612 = UINT32_MAX;
	uint64_t t142 = 74LLU;

    t142 = (((x609/x610)%x611)|x612);

    if (t142 != 4294967295LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x613 = 12629U;
	uint64_t x614 = 37902426999351673LLU;
	int64_t x616 = INT64_MIN;

    t143 = (((x613/x614)%x615)|x616);

    if (t143 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x617 = -1;
	static volatile uint64_t x618 = UINT64_MAX;
	int64_t x619 = INT64_MAX;
	uint64_t t144 = 82164687LLU;

    t144 = (((x617/x618)%x619)|x620);

    if (t144 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x621 = UINT64_MAX;
	int32_t x622 = INT32_MIN;
	uint16_t x623 = UINT16_MAX;
	volatile uint8_t x624 = 12U;
	uint64_t t145 = 196402047LLU;

    t145 = (((x621/x622)%x623)|x624);

    if (t145 != 13LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x625 = -1LL;
	int16_t x627 = -1;
	int8_t x628 = INT8_MIN;
	static int64_t t146 = 123980LL;

    t146 = (((x625/x626)%x627)|x628);

    if (t146 != -128LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x629 = UINT16_MAX;
	int32_t x630 = INT32_MAX;
	volatile int64_t t147 = 23786292884647LL;

    t147 = (((x629/x630)%x631)|x632);

    if (t147 != 255LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x633 = INT64_MAX;
	uint64_t x634 = 828005116LLU;
	uint16_t x636 = 0U;

    t148 = (((x633/x634)%x635)|x636);

    if (t148 != 11139269382LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x637 = 2790U;
	uint32_t x638 = 29469247U;
	volatile uint8_t x640 = UINT8_MAX;
	volatile uint32_t t149 = 3U;

    t149 = (((x637/x638)%x639)|x640);

    if (t149 != 255U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x645 = -1;
	uint64_t x646 = 16468126507LLU;
	int8_t x647 = INT8_MIN;
	int64_t x648 = 123150LL;
	volatile uint64_t t150 = 424LLU;

    t150 = (((x645/x646)%x647)|x648);

    if (t150 != 1120271199LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x649 = INT16_MIN;
	int16_t x650 = INT16_MIN;
	uint64_t x651 = UINT64_MAX;
	volatile int32_t x652 = -2;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (((x649/x650)%x651)|x652);

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x653 = -1;
	int32_t x654 = -35832;
	int16_t x655 = INT16_MAX;
	static int16_t x656 = INT16_MAX;
	static volatile int32_t t152 = -1863472;

    t152 = (((x653/x654)%x655)|x656);

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x658 = 71846U;
	int64_t x659 = INT64_MAX;
	int32_t x660 = -1;
	int64_t t153 = 2082224479904LL;

    t153 = (((x657/x658)%x659)|x660);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x665 = 1U;
	volatile uint32_t x666 = 5942U;
	int8_t x667 = INT8_MIN;
	int64_t t154 = 921LL;

    t154 = (((x665/x666)%x667)|x668);

    if (t154 != 11LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x669 = -1;
	int64_t x670 = INT64_MIN;
	int16_t x671 = INT16_MIN;
	int32_t x672 = 3377332;
	int64_t t155 = -1LL;

    t155 = (((x669/x670)%x671)|x672);

    if (t155 != 3377332LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x674 = INT16_MAX;
	uint32_t x675 = 504678U;
	static uint16_t x676 = 4699U;

    t156 = (((x673/x674)%x675)|x676);

    if (t156 != 4699U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x677 = -1;
	volatile int32_t x678 = INT32_MAX;
	uint64_t x679 = 27LLU;
	volatile int16_t x680 = -8;
	volatile uint64_t t157 = 505411231797332592LLU;

    t157 = (((x677/x678)%x679)|x680);

    if (t157 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x682 = -3246;
	uint16_t x683 = UINT16_MAX;
	volatile int8_t x684 = INT8_MAX;
	static uint64_t t158 = 2123593604727573LLU;

    t158 = (((x681/x682)%x683)|x684);

    if (t158 != 127LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x685 = INT8_MAX;
	uint32_t x687 = 53U;
	volatile uint32_t x688 = UINT32_MAX;
	uint32_t t159 = UINT32_MAX;

    t159 = (((x685/x686)%x687)|x688);

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint32_t x694 = 310U;
	uint8_t x695 = 6U;
	int16_t x696 = INT16_MIN;
	int64_t t160 = -49910LL;

    t160 = (((x693/x694)%x695)|x696);

    if (t160 != -32768LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x698 = UINT32_MAX;
	int32_t x699 = INT32_MAX;
	int16_t x700 = INT16_MIN;
	int64_t t161 = -22LL;

    t161 = (((x697/x698)%x699)|x700);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x705 = INT32_MIN;
	static uint32_t x708 = 7U;

    t162 = (((x705/x706)%x707)|x708);

    if (t162 != 7U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x710 = 4386U;
	volatile int64_t x711 = 223527822LL;
	volatile int64_t t163 = 0LL;

    t163 = (((x709/x710)%x711)|x712);

    if (t163 != 489630LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x713 = 5U;
	volatile int16_t x714 = -1;
	int8_t x715 = INT8_MIN;
	volatile int32_t x716 = INT32_MAX;
	static int32_t t164 = 152304955;

    t164 = (((x713/x714)%x715)|x716);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x717 = 44271403U;
	int8_t x718 = INT8_MAX;
	static uint8_t x719 = 4U;
	int64_t x720 = -547325519147LL;
	volatile int64_t t165 = -4686419LL;

    t165 = (((x717/x718)%x719)|x720);

    if (t165 != -547325519147LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x721 = -3961583241053LL;
	int16_t x722 = INT16_MIN;
	volatile int16_t x723 = -44;
	static int8_t x724 = -1;
	static volatile int64_t t166 = 0LL;

    t166 = (((x721/x722)%x723)|x724);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x725 = INT8_MIN;
	int32_t x726 = INT32_MIN;
	int16_t x727 = -159;
	int8_t x728 = -1;
	int32_t t167 = -802716828;

    t167 = (((x725/x726)%x727)|x728);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x729 = INT8_MIN;
	uint16_t x730 = 619U;
	int8_t x731 = INT8_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t168 = 1;

    t168 = (((x729/x730)%x731)|x732);

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x733 = -1;
	int64_t x735 = 13718989962467082LL;
	volatile int16_t x736 = 5;
	static volatile int64_t t169 = 123264743762LL;

    t169 = (((x733/x734)%x735)|x736);

    if (t169 != 5LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x737 = -1LL;
	volatile uint8_t x738 = 2U;
	int8_t x739 = INT8_MAX;
	volatile int64_t t170 = -7LL;

    t170 = (((x737/x738)%x739)|x740);

    if (t170 != -2147483648LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	int16_t x742 = -61;
	uint32_t x743 = 887765412U;
	volatile int64_t x744 = INT64_MAX;
	int64_t t171 = INT64_MAX;

    t171 = (((x741/x742)%x743)|x744);

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x745 = INT64_MIN;
	int16_t x746 = INT16_MIN;
	static volatile uint64_t x747 = 8895LLU;
	int64_t x748 = INT64_MIN;
	uint64_t t172 = 510895526483032373LLU;

    t172 = (((x745/x746)%x747)|x748);

    if (t172 != 9223372036854780594LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x750 = 243;
	static int32_t x752 = INT32_MIN;

    t173 = (((x749/x750)%x751)|x752);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x753 = INT8_MAX;
	uint16_t x754 = 1971U;
	volatile int64_t x756 = INT64_MIN;
	uint64_t t174 = 14714319623LLU;

    t174 = (((x753/x754)%x755)|x756);

    if (t174 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x757 = UINT8_MAX;
	uint64_t x758 = 69419588918798066LLU;
	uint8_t x759 = 80U;
	volatile int64_t x760 = INT64_MIN;
	volatile uint64_t t175 = 1676LLU;

    t175 = (((x757/x758)%x759)|x760);

    if (t175 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x761 = INT32_MIN;
	static uint32_t x763 = UINT32_MAX;

    t176 = (((x761/x762)%x763)|x764);

    if (t176 != 16809983U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x765 = INT64_MIN;
	uint64_t x766 = UINT64_MAX;
	static volatile int16_t x767 = INT16_MAX;
	static int64_t x768 = -1LL;
	static volatile uint64_t t177 = UINT64_MAX;

    t177 = (((x765/x766)%x767)|x768);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x770 = 5882573;
	static uint32_t x771 = 45850U;
	static int64_t x772 = 530135919656872682LL;

    t178 = (((x769/x770)%x771)|x772);

    if (t178 != 530135919656877807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x775 = INT64_MIN;
	volatile int8_t x776 = -1;
	int64_t t179 = 32057399288020LL;

    t179 = (((x773/x774)%x775)|x776);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x777 = -1;
	int32_t x778 = INT32_MIN;
	volatile uint32_t x779 = 633267U;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = (((x777/x778)%x779)|x780);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x781 = INT8_MAX;
	int64_t x782 = -224630723202680998LL;
	int32_t x783 = -1;
	uint8_t x784 = UINT8_MAX;
	static int64_t t181 = 1552790LL;

    t181 = (((x781/x782)%x783)|x784);

    if (t181 != 255LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x785 = INT32_MIN;
	volatile uint8_t x787 = UINT8_MAX;
	int8_t x788 = INT8_MIN;
	int32_t t182 = -35;

    t182 = (((x785/x786)%x787)|x788);

    if (t182 != -29) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x789 = 109U;
	int16_t x790 = INT16_MIN;
	volatile int64_t x791 = INT64_MAX;
	int64_t t183 = -17LL;

    t183 = (((x789/x790)%x791)|x792);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x793 = -1LL;
	static int16_t x794 = INT16_MAX;
	uint64_t x795 = 51832814265LLU;
	static uint8_t x796 = 81U;
	uint64_t t184 = 103677679887LLU;

    t184 = (((x793/x794)%x795)|x796);

    if (t184 != 81LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x797 = INT16_MIN;
	int8_t x798 = INT8_MIN;
	static uint32_t x799 = UINT32_MAX;
	volatile int8_t x800 = INT8_MAX;
	uint32_t t185 = 81728U;

    t185 = (((x797/x798)%x799)|x800);

    if (t185 != 383U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x801 = -295;
	static int16_t x802 = INT16_MAX;
	static uint16_t x803 = 4142U;
	int16_t x804 = -7809;
	volatile int32_t t186 = -1;

    t186 = (((x801/x802)%x803)|x804);

    if (t186 != -7809) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x805 = -1;
	volatile int16_t x806 = INT16_MAX;
	volatile int64_t x807 = 13LL;
	int8_t x808 = -1;
	int64_t t187 = 10LL;

    t187 = (((x805/x806)%x807)|x808);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x809 = UINT32_MAX;
	uint64_t x810 = 7577LLU;
	int16_t x811 = 1;
	volatile int16_t x812 = INT16_MIN;
	uint64_t t188 = 290018533206547LLU;

    t188 = (((x809/x810)%x811)|x812);

    if (t188 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x814 = -1;
	volatile uint64_t t189 = 2158465756811282602LLU;

    t189 = (((x813/x814)%x815)|x816);

    if (t189 != 3772475LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x817 = -858;
	int32_t x818 = INT32_MIN;
	int16_t x819 = INT16_MIN;
	int32_t x820 = INT32_MIN;
	int32_t t190 = INT32_MIN;

    t190 = (((x817/x818)%x819)|x820);

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x821 = 8164457465130LLU;
	volatile int64_t x822 = INT64_MIN;
	static int8_t x823 = INT8_MIN;
	uint64_t x824 = 482278461571250246LLU;
	volatile uint64_t t191 = 5979671LLU;

    t191 = (((x821/x822)%x823)|x824);

    if (t191 != 482278461571250246LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x825 = INT64_MAX;
	static uint16_t x826 = 5U;
	int64_t t192 = -522348898361LL;

    t192 = (((x825/x826)%x827)|x828);

    if (t192 != -26215LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x833 = INT64_MIN;
	uint32_t x834 = 560439U;
	int8_t x835 = -1;
	static int32_t x836 = -1603668;
	volatile int64_t t193 = -119703LL;

    t193 = (((x833/x834)%x835)|x836);

    if (t193 != -1603668LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x837 = INT64_MIN;
	int64_t x840 = 2114799423464556715LL;
	static volatile int64_t t194 = -2201012936115990653LL;

    t194 = (((x837/x838)%x839)|x840);

    if (t194 != -13825LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x845 = UINT64_MAX;
	static volatile int8_t x846 = INT8_MIN;
	uint16_t x847 = 3371U;
	int16_t x848 = INT16_MIN;
	uint64_t t195 = 369722886532208055LLU;

    t195 = (((x845/x846)%x847)|x848);

    if (t195 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x849 = UINT64_MAX;
	uint8_t x850 = UINT8_MAX;
	int16_t x852 = INT16_MIN;
	volatile uint64_t t196 = 4253971826374230969LLU;

    t196 = (((x849/x850)%x851)|x852);

    if (t196 != 18446744073709519105LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x853 = 164494258357036LLU;
	volatile int32_t x854 = 56531342;
	uint16_t x855 = 275U;
	uint64_t t197 = 0LLU;

    t197 = (((x853/x854)%x855)|x856);

    if (t197 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x857 = -16642LL;
	uint64_t x858 = 17958437653545279LLU;
	int64_t x860 = INT64_MIN;
	uint64_t t198 = 234750524LLU;

    t198 = (((x857/x858)%x859)|x860);

    if (t198 != 9223372036854776835LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x863 = -590;
	static uint16_t x864 = 4U;
	static uint32_t t199 = 1291U;

    t199 = (((x861/x862)%x863)|x864);

    if (t199 != 15732484U) { NG(); } else { ; }
	
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

