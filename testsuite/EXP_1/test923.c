
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

static int16_t x11 = -1;
volatile int32_t t2 = -2225202;
int64_t x32 = INT64_MAX;
int16_t x34 = -404;
int64_t x39 = -1LL;
int32_t x46 = INT32_MIN;
static uint64_t x47 = UINT64_MAX;
int64_t x48 = INT64_MAX;
volatile int32_t t13 = -4;
volatile int32_t x58 = INT32_MIN;
volatile uint16_t x61 = 6169U;
int8_t x62 = -1;
uint8_t x66 = 16U;
volatile uint32_t x72 = UINT32_MAX;
static uint32_t t17 = UINT32_MAX;
volatile int64_t x75 = INT64_MIN;
uint64_t x79 = 198710353592874LLU;
int64_t x83 = INT64_MIN;
static volatile int32_t t21 = 6;
int8_t x97 = -1;
uint16_t x109 = 7569U;
int8_t x119 = INT8_MAX;
int32_t x120 = INT32_MIN;
static int32_t t29 = -46267;
uint8_t x128 = UINT8_MAX;
int64_t x129 = INT64_MIN;
volatile int64_t t32 = 1810047523782721LL;
uint16_t x137 = 3464U;
int8_t x146 = 20;
static int64_t t36 = 453LL;
uint64_t x152 = UINT64_MAX;
int8_t x153 = INT8_MIN;
int32_t t38 = -77035154;
static int16_t x161 = -86;
static int64_t x162 = INT64_MIN;
int16_t x164 = -1;
static int8_t x179 = INT8_MIN;
int8_t x183 = INT8_MAX;
uint64_t x186 = UINT64_MAX;
int16_t x194 = INT16_MIN;
uint8_t x196 = 1U;
volatile int32_t t48 = 128046733;
int32_t x199 = INT32_MAX;
int16_t x210 = 9246;
int64_t x212 = INT64_MIN;
volatile uint64_t x222 = 806871226132424172LLU;
volatile int64_t x224 = -133LL;
int64_t t54 = -7100LL;
uint64_t x227 = 59127LLU;
int16_t x231 = INT16_MIN;
int16_t x237 = 0;
static int32_t x247 = -234308;
int8_t x248 = -3;
uint16_t x251 = 23462U;
uint64_t x253 = 13410589487LLU;
int32_t x259 = 12137524;
int8_t x262 = INT8_MAX;
int32_t x263 = -1524;
int32_t x269 = INT32_MIN;
int64_t x270 = INT64_MIN;
uint32_t t66 = UINT32_MAX;
volatile int32_t x273 = -1;
int64_t x275 = INT64_MIN;
uint32_t t70 = UINT32_MAX;
volatile int16_t x289 = INT16_MIN;
volatile int64_t x294 = INT64_MIN;
volatile int8_t x295 = INT8_MIN;
static uint32_t x297 = 312646U;
static int64_t x304 = -12198570596LL;
volatile int8_t x306 = 1;
int32_t t75 = -1;
static int64_t x310 = INT64_MAX;
static int32_t x311 = INT32_MIN;
int16_t x312 = 901;
volatile int64_t x313 = INT64_MIN;
int8_t x318 = INT8_MIN;
int32_t x325 = -1;
static uint8_t x326 = UINT8_MAX;
int64_t x327 = 3462277766321687LL;
int16_t x344 = 27;
int32_t t84 = -2898071;
uint16_t x355 = UINT16_MAX;
int32_t t87 = 439973795;
int8_t x358 = INT8_MIN;
volatile uint32_t t88 = UINT32_MAX;
static uint32_t x361 = 6439153U;
int16_t x363 = 83;
volatile uint8_t x364 = 32U;
int16_t x365 = 97;
volatile int32_t t91 = -8071537;
int8_t x378 = INT8_MIN;
int64_t t92 = -3500LL;
int16_t x385 = INT16_MAX;
int8_t x400 = INT8_MIN;
int32_t t97 = 0;
int64_t x402 = 893924330915828LL;
uint32_t x404 = UINT32_MAX;
volatile uint32_t t98 = UINT32_MAX;
static int32_t x407 = INT32_MAX;
uint64_t x408 = 11099552LLU;
volatile int16_t x410 = -1;
volatile uint8_t x413 = 61U;
uint16_t x414 = 2U;
int8_t x415 = -1;
volatile uint64_t x416 = 458044891LLU;
int32_t x420 = INT32_MIN;
int32_t t103 = -489968;
int32_t x425 = -254512;
uint64_t x427 = 12973767590LLU;
static int32_t t104 = 1;
static uint32_t x436 = 99679416U;
int64_t x439 = 24494336LL;
int8_t x440 = -1;
int32_t x443 = INT32_MAX;
volatile int32_t t110 = 0;
int32_t x456 = INT32_MAX;
uint16_t x458 = 6862U;
static uint32_t x460 = 18399U;
volatile int16_t x468 = INT16_MIN;
int8_t x471 = INT8_MIN;
uint64_t x473 = UINT64_MAX;
int32_t x479 = INT32_MAX;
volatile int32_t t117 = 153296850;
uint8_t x482 = UINT8_MAX;
int32_t x484 = INT32_MAX;
volatile int32_t t118 = INT32_MAX;
volatile int64_t x490 = 58LL;
int16_t x498 = 866;
int32_t x503 = 3;
int16_t x505 = INT16_MAX;
int8_t x506 = INT8_MAX;
int32_t t125 = -8;
uint16_t x517 = 0U;
int64_t t127 = INT64_MIN;
int64_t x521 = -3906219LL;
static int16_t x524 = INT16_MIN;
uint64_t x529 = 496LLU;
uint64_t x535 = 9078668671721LLU;
int16_t x541 = INT16_MAX;
int64_t x542 = INT64_MIN;
int16_t x548 = INT16_MIN;
int16_t x551 = INT16_MAX;
int32_t t135 = -1027505275;
uint32_t x553 = 79U;
int8_t x556 = INT8_MIN;
int64_t x563 = -10722006862691LL;
int64_t x564 = -2040118715LL;
int64_t t138 = 400797LL;
static int8_t x579 = -14;
int32_t x587 = 1106898;
int64_t x592 = -1LL;
int64_t x601 = INT64_MIN;
volatile int32_t x604 = INT32_MIN;
volatile uint32_t x620 = 2017U;
uint16_t x626 = 931U;
volatile int32_t t153 = INT32_MAX;
int8_t x635 = 52;
static int8_t x644 = INT8_MAX;
static int32_t t156 = 74;
uint64_t x645 = UINT64_MAX;
static int8_t x647 = INT8_MIN;
int16_t x652 = INT16_MIN;
volatile int32_t t158 = -173;
uint8_t x654 = UINT8_MAX;
int8_t x660 = INT8_MIN;
uint64_t x662 = UINT64_MAX;
volatile int32_t t161 = 57;
uint8_t x667 = UINT8_MAX;
static volatile int16_t x669 = INT16_MAX;
int16_t x673 = INT16_MIN;
int64_t x682 = INT64_MIN;
uint64_t x693 = 10987709874LLU;
volatile int32_t t171 = -56304681;
int32_t x711 = INT32_MIN;
int16_t x714 = INT16_MIN;
static int8_t x716 = -22;
volatile uint32_t t176 = UINT32_MAX;
static int32_t x727 = INT32_MIN;
int16_t x735 = -6601;
volatile int32_t x741 = -1;
int64_t x742 = 5927555978224884LL;
volatile int64_t x745 = INT64_MAX;
uint16_t x749 = 730U;
static volatile uint64_t x753 = UINT64_MAX;
uint16_t x755 = UINT16_MAX;
volatile int8_t x759 = INT8_MAX;
static int8_t x766 = INT8_MIN;
uint32_t x768 = 164U;
static uint32_t x774 = 8U;
uint16_t x778 = 37U;
static int32_t t191 = INT32_MAX;
int32_t x790 = INT32_MAX;
uint16_t x794 = 58U;
int16_t x802 = 68;
volatile int32_t t196 = -1052687751;
volatile int8_t x811 = INT8_MIN;
int16_t x815 = 5;
uint64_t t198 = 4LLU;


void f0(void) {
    	int32_t x1 = -1;
	uint16_t x2 = 46U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -2;
	volatile int32_t t0 = 259805;

    t0 = (((x1%x2)<=x3)|x4);

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1637034244U;
	int32_t x6 = INT32_MAX;
	uint8_t x7 = UINT8_MAX;
	static int8_t x8 = 5;
	volatile int32_t t1 = 8532322;

    t1 = (((x5%x6)<=x7)|x8);

    if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int32_t x10 = -1;
	uint8_t x12 = 19U;

    t2 = (((x9%x10)<=x11)|x12);

    if (t2 != 19) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	int16_t x14 = -1;
	int32_t x15 = INT32_MIN;
	static volatile int16_t x16 = INT16_MAX;
	int32_t t3 = 4022699;

    t3 = (((x13%x14)<=x15)|x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = -1LL;
	int16_t x18 = -1;
	int32_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = INT32_MAX;

    t4 = (((x17%x18)<=x19)|x20);

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int8_t x22 = -11;
	int64_t x23 = INT64_MAX;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

    t5 = (((x21%x22)<=x23)|x24);

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 7531U;
	int64_t x26 = 11001902LL;
	int8_t x27 = 6;
	uint32_t x28 = 26U;
	volatile uint32_t t6 = 235386U;

    t6 = (((x25%x26)<=x27)|x28);

    if (t6 != 26U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MAX;
	static volatile int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	int64_t t7 = INT64_MAX;

    t7 = (((x29%x30)<=x31)|x32);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 3126665794LLU;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -36;

    t8 = (((x33%x34)<=x35)|x36);

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile int16_t x38 = -5;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -4160;

    t9 = (((x37%x38)<=x39)|x40);

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -1;
	static int32_t x44 = 23207;
	volatile int32_t t10 = -570;

    t10 = (((x41%x42)<=x43)|x44);

    if (t10 != 23207) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -1;
	int64_t t11 = INT64_MAX;

    t11 = (((x45%x46)<=x47)|x48);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -39;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -649431027LL;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -1;

    t12 = (((x49%x50)<=x51)|x52);

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	volatile uint64_t x54 = 10LLU;
	static int16_t x55 = -1;
	int32_t x56 = INT32_MIN;

    t13 = (((x53%x54)<=x55)|x56);

    if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = -1;
	int8_t x59 = 54;
	uint8_t x60 = 45U;
	static int32_t t14 = 95196947;

    t14 = (((x57%x58)<=x59)|x60);

    if (t14 != 45) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	int32_t t15 = 217;

    t15 = (((x61%x62)<=x63)|x64);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -2;
	int32_t x67 = INT32_MIN;
	volatile int64_t x68 = 1501988LL;
	int64_t t16 = -95LL;

    t16 = (((x65%x66)<=x67)|x68);

    if (t16 != 1501988LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = INT16_MIN;

    t17 = (((x69%x70)<=x71)|x72);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static volatile int16_t x74 = -1;
	int16_t x76 = INT16_MIN;
	int32_t t18 = 777658;

    t18 = (((x73%x74)<=x75)|x76);

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 182220350;
	uint64_t x78 = 39564LLU;
	uint64_t x80 = 1421385LLU;
	uint64_t t19 = 2671486329LLU;

    t19 = (((x77%x78)<=x79)|x80);

    if (t19 != 1421385LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -5;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -752978;

    t20 = (((x81%x82)<=x83)|x84);

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = 8379;
	static volatile uint64_t x86 = 2LLU;
	uint8_t x87 = 50U;
	static int32_t x88 = -2222681;

    t21 = (((x85%x86)<=x87)|x88);

    if (t21 != -2222681) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MAX;
	int64_t x90 = INT64_MAX;
	uint16_t x91 = 405U;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = -15;

    t22 = (((x89%x90)<=x91)|x92);

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = 65860;
	volatile uint32_t x95 = 12767U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = INT32_MAX;

    t23 = (((x93%x94)<=x95)|x96);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = -1LL;
	uint16_t x99 = UINT16_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -18;

    t24 = (((x97%x98)<=x99)|x100);

    if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 21119700LLU;
	volatile int64_t x102 = -1LL;
	uint8_t x103 = 38U;
	volatile uint8_t x104 = 10U;
	volatile int32_t t25 = 3;

    t25 = (((x101%x102)<=x103)|x104);

    if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 1;
	volatile int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 16979U;
	static volatile int32_t t26 = 110;

    t26 = (((x105%x106)<=x107)|x108);

    if (t26 != 16979) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -1LL;
	int64_t t27 = 23787146319828LL;

    t27 = (((x109%x110)<=x111)|x112);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	uint8_t x115 = 0U;
	int8_t x116 = 2;
	int32_t t28 = 1;

    t28 = (((x113%x114)<=x115)|x116);

    if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int8_t x118 = -6;

    t29 = (((x117%x118)<=x119)|x120);

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 111070;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile uint8_t x124 = 2U;
	int32_t t30 = -138199000;

    t30 = (((x121%x122)<=x123)|x124);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = 239394206;
	uint64_t x126 = 29739063236835717LLU;
	uint64_t x127 = 674108422385847356LLU;
	static volatile int32_t t31 = -671732;

    t31 = (((x125%x126)<=x127)|x128);

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x130 = 2U;
	uint8_t x131 = UINT8_MAX;
	static int64_t x132 = 281258LL;

    t32 = (((x129%x130)<=x131)|x132);

    if (t32 != 281259LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	uint16_t x134 = 3891U;
	int64_t x135 = -1LL;
	uint8_t x136 = 7U;
	static int32_t t33 = -131405593;

    t33 = (((x133%x134)<=x135)|x136);

    if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x138 = INT32_MIN;
	volatile int64_t x139 = INT64_MAX;
	uint16_t x140 = 15U;
	int32_t t34 = -1918;

    t34 = (((x137%x138)<=x139)|x140);

    if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	volatile int64_t x142 = -1LL;
	int32_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

    t35 = (((x141%x142)<=x143)|x144);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	volatile int64_t x148 = -270467933065LL;

    t36 = (((x145%x146)<=x147)|x148);

    if (t36 != -270467933065LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	static volatile uint8_t x151 = UINT8_MAX;
	static volatile uint64_t t37 = UINT64_MAX;

    t37 = (((x149%x150)<=x151)|x152);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = 28;
	int64_t x155 = INT64_MAX;
	int16_t x156 = -12171;

    t38 = (((x153%x154)<=x155)|x156);

    if (t38 != -12171) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = 0U;
	uint16_t x158 = 2031U;
	static volatile int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = -1707;

    t39 = (((x157%x158)<=x159)|x160);

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x163 = INT64_MAX;
	static int32_t t40 = 73388925;

    t40 = (((x161%x162)<=x163)|x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MAX;
	volatile int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MAX;
	int32_t t41 = -3;

    t41 = (((x165%x166)<=x167)|x168);

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	static uint8_t x170 = 93U;
	int16_t x171 = -325;
	static int64_t x172 = -182142323971086299LL;
	volatile int64_t t42 = -10LL;

    t42 = (((x169%x170)<=x171)|x172);

    if (t42 != -182142323971086299LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x173 = 7975U;
	volatile int64_t x174 = -96215LL;
	uint32_t x175 = 833U;
	int64_t x176 = -1LL;
	volatile int64_t t43 = 166676017698LL;

    t43 = (((x173%x174)<=x175)|x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 114046270278447042LLU;
	uint8_t x178 = 5U;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = (((x177%x178)<=x179)|x180);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 58U;
	uint16_t x182 = 52U;
	uint64_t x184 = 1530391277446LLU;
	static volatile uint64_t t45 = 7435466157LLU;

    t45 = (((x181%x182)<=x183)|x184);

    if (t45 != 1530391277447LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 53982426LLU;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = -1;
	volatile int32_t t46 = -251;

    t46 = (((x185%x186)<=x187)|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 1320088879804327940LLU;
	int16_t x190 = -2512;
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;
	int64_t t47 = 10LL;

    t47 = (((x189%x190)<=x191)|x192);

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	uint16_t x195 = UINT16_MAX;

    t48 = (((x193%x194)<=x195)|x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x197 = 847LLU;
	volatile uint64_t x198 = 133892314257LLU;
	int64_t x200 = -742495870371428LL;
	static volatile int64_t t49 = -67663814027565LL;

    t49 = (((x197%x198)<=x199)|x200);

    if (t49 != -742495870371427LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -771;
	int64_t x202 = INT64_MAX;
	static int8_t x203 = 1;
	int32_t x204 = 2328715;
	volatile int32_t t50 = 0;

    t50 = (((x201%x202)<=x203)|x204);

    if (t50 != 2328715) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = INT32_MAX;
	uint64_t x211 = UINT64_MAX;
	volatile int64_t t51 = -1062401989LL;

    t51 = (((x209%x210)<=x211)|x212);

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x213 = UINT8_MAX;
	int16_t x214 = 15;
	static uint8_t x215 = 3U;
	static uint32_t x216 = 6313U;
	volatile uint32_t t52 = 466999632U;

    t52 = (((x213%x214)<=x215)|x216);

    if (t52 != 6313U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MAX;
	int8_t x218 = -1;
	uint32_t x219 = 17U;
	uint64_t x220 = 12837434759LLU;
	uint64_t t53 = 216152LLU;

    t53 = (((x217%x218)<=x219)|x220);

    if (t53 != 12837434759LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = UINT16_MAX;
	uint16_t x223 = UINT16_MAX;

    t54 = (((x221%x222)<=x223)|x224);

    if (t54 != -133LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = 2343275847809763422LLU;
	int8_t x226 = INT8_MAX;
	volatile uint32_t x228 = 34495462U;
	volatile uint32_t t55 = 82359861U;

    t55 = (((x225%x226)<=x227)|x228);

    if (t55 != 34495463U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x229 = 2U;
	int64_t x230 = 6093185118349LL;
	uint32_t x232 = 6U;
	uint32_t t56 = 91858874U;

    t56 = (((x229%x230)<=x231)|x232);

    if (t56 != 6U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MIN;
	static uint64_t x234 = UINT64_MAX;
	volatile int8_t x235 = -37;
	uint64_t x236 = 842LLU;
	static volatile uint64_t t57 = 361482LLU;

    t57 = (((x233%x234)<=x235)|x236);

    if (t57 != 843LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x238 = INT8_MAX;
	volatile int32_t x239 = INT32_MIN;
	volatile uint16_t x240 = 3U;
	int32_t t58 = -27123795;

    t58 = (((x237%x238)<=x239)|x240);

    if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x241 = -5;
	volatile int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	static int64_t x244 = -1750553LL;
	int64_t t59 = 2756052769LL;

    t59 = (((x241%x242)<=x243)|x244);

    if (t59 != -1750553LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MAX;
	uint64_t x246 = 1LLU;
	static volatile int32_t t60 = -470;

    t60 = (((x245%x246)<=x247)|x248);

    if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x249 = 1U;
	int8_t x250 = INT8_MIN;
	volatile uint32_t x252 = UINT32_MAX;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = (((x249%x250)<=x251)|x252);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x254 = INT8_MIN;
	static int32_t x255 = -401934604;
	volatile int32_t x256 = -1;
	int32_t t62 = 347017;

    t62 = (((x253%x254)<=x255)|x256);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x258 = -492;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int32_t t63 = 4;

    t63 = (((x257%x258)<=x259)|x260);

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = 0U;
	static int32_t x264 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

    t64 = (((x261%x262)<=x263)|x264);

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x265 = 18;
	int16_t x266 = -1403;
	volatile int16_t x267 = INT16_MIN;
	volatile int64_t x268 = INT64_MAX;
	int64_t t65 = INT64_MAX;

    t65 = (((x265%x266)<=x267)|x268);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;

    t66 = (((x269%x270)<=x271)|x272);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x274 = 493U;
	volatile int8_t x276 = -16;
	volatile int32_t t67 = 7223;

    t67 = (((x273%x274)<=x275)|x276);

    if (t67 != -16) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 20LLU;
	int8_t x280 = INT8_MAX;
	int32_t t68 = -55;

    t68 = (((x277%x278)<=x279)|x280);

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = 1;
	int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

    t69 = (((x281%x282)<=x283)|x284);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = -1;
	int32_t x286 = INT32_MAX;
	uint32_t x287 = 3608U;
	uint32_t x288 = UINT32_MAX;

    t70 = (((x285%x286)<=x287)|x288);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x290 = 55895LLU;
	int64_t x291 = -1LL;
	int16_t x292 = 12678;
	volatile int32_t t71 = 64485289;

    t71 = (((x289%x290)<=x291)|x292);

    if (t71 != 12679) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MIN;
	static uint32_t x296 = 5U;
	volatile uint32_t t72 = 54741208U;

    t72 = (((x293%x294)<=x295)|x296);

    if (t72 != 5U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x298 = -1;
	volatile uint32_t x299 = 272U;
	volatile uint16_t x300 = 95U;
	static int32_t t73 = -2025074;

    t73 = (((x297%x298)<=x299)|x300);

    if (t73 != 95) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x301 = INT16_MAX;
	int32_t x302 = -70434;
	uint64_t x303 = 1386LLU;
	int64_t t74 = -106297294610LL;

    t74 = (((x301%x302)<=x303)|x304);

    if (t74 != -12198570596LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x307 = 52LL;
	volatile int32_t x308 = 514817;

    t75 = (((x305%x306)<=x307)|x308);

    if (t75 != 514817) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x309 = -1;
	volatile int32_t t76 = -226;

    t76 = (((x309%x310)<=x311)|x312);

    if (t76 != 901) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x314 = UINT8_MAX;
	int64_t x315 = 11556LL;
	int8_t x316 = INT8_MIN;
	volatile int32_t t77 = -2510;

    t77 = (((x313%x314)<=x315)|x316);

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x317 = 23U;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = 8364982969139LL;
	static int64_t t78 = -11126LL;

    t78 = (((x317%x318)<=x319)|x320);

    if (t78 != 8364982969139LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = 1327;
	volatile int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	static uint8_t x324 = 0U;
	volatile int32_t t79 = -23592537;

    t79 = (((x321%x322)<=x323)|x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x328 = -1LL;
	static volatile int64_t t80 = -130291003231396798LL;

    t80 = (((x325%x326)<=x327)|x328);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x329 = -1;
	uint8_t x330 = 40U;
	volatile uint8_t x331 = 1U;
	int32_t x332 = -218430;
	int32_t t81 = -68986303;

    t81 = (((x329%x330)<=x331)|x332);

    if (t81 != -218429) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x333 = 972078553203174509LLU;
	static uint32_t x334 = 218U;
	int16_t x335 = -1;
	static int32_t x336 = -12132;
	static volatile int32_t t82 = 89695244;

    t82 = (((x333%x334)<=x335)|x336);

    if (t82 != -12131) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 2U;
	int16_t x340 = -2121;
	volatile int32_t t83 = -459113;

    t83 = (((x337%x338)<=x339)|x340);

    if (t83 != -2121) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = -1;
	static int8_t x342 = -2;
	int64_t x343 = 29943LL;

    t84 = (((x341%x342)<=x343)|x344);

    if (t84 != 27) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = UINT64_MAX;
	static uint64_t x346 = 47739116LLU;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 1U;
	volatile int32_t t85 = 347473;

    t85 = (((x345%x346)<=x347)|x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x349 = -24064;
	volatile uint64_t x350 = 7594481720LLU;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (((x349%x350)<=x351)|x352);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = 0;
	uint8_t x354 = 4U;
	int8_t x356 = -11;

    t87 = (((x353%x354)<=x355)|x356);

    if (t87 != -11) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x357 = 2U;
	static volatile int16_t x359 = -1;
	uint32_t x360 = UINT32_MAX;

    t88 = (((x357%x358)<=x359)|x360);

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x362 = 52;
	int32_t t89 = 13295;

    t89 = (((x361%x362)<=x363)|x364);

    if (t89 != 33) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x366 = UINT32_MAX;
	uint8_t x367 = 3U;
	int16_t x368 = -1;
	int32_t t90 = -1;

    t90 = (((x365%x366)<=x367)|x368);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	static int16_t x370 = -1;
	static volatile int32_t x371 = 142;
	uint16_t x372 = UINT16_MAX;

    t91 = (((x369%x370)<=x371)|x372);

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = -1;
	int16_t x379 = -1;
	int64_t x380 = INT64_MIN;

    t92 = (((x377%x378)<=x379)|x380);

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x381 = INT32_MIN;
	int64_t x382 = -16084546196042902LL;
	int32_t x383 = INT32_MAX;
	volatile uint64_t x384 = 561491LLU;
	volatile uint64_t t93 = 1708830886LLU;

    t93 = (((x381%x382)<=x383)|x384);

    if (t93 != 561491LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x386 = -1;
	int8_t x387 = INT8_MAX;
	static uint64_t x388 = 25642LLU;
	volatile uint64_t t94 = 4960744011620639269LLU;

    t94 = (((x385%x386)<=x387)|x388);

    if (t94 != 25643LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MAX;
	int16_t x391 = 7;
	uint32_t x392 = 74U;
	uint32_t t95 = 1526650470U;

    t95 = (((x389%x390)<=x391)|x392);

    if (t95 != 75U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x393 = 1U;
	volatile int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MAX;
	int32_t x396 = -1;
	int32_t t96 = -1;

    t96 = (((x393%x394)<=x395)|x396);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 24416U;
	uint8_t x399 = 100U;

    t97 = (((x397%x398)<=x399)|x400);

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x401 = INT64_MAX;
	int16_t x403 = -1;

    t98 = (((x401%x402)<=x403)|x404);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x405 = 222U;
	int8_t x406 = INT8_MIN;
	volatile uint64_t t99 = 6149456LLU;

    t99 = (((x405%x406)<=x407)|x408);

    if (t99 != 11099553LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x409 = 12554U;
	volatile int32_t x411 = -1;
	volatile uint64_t x412 = UINT64_MAX;
	static uint64_t t100 = UINT64_MAX;

    t100 = (((x409%x410)<=x411)|x412);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t t101 = 38325136495LLU;

    t101 = (((x413%x414)<=x415)|x416);

    if (t101 != 458044891LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x417 = -1;
	int32_t x418 = -1;
	int64_t x419 = INT64_MAX;
	int32_t t102 = -3728044;

    t102 = (((x417%x418)<=x419)|x420);

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x421 = INT8_MIN;
	static int32_t x422 = INT32_MAX;
	static uint32_t x423 = 610U;
	static volatile int16_t x424 = INT16_MIN;

    t103 = (((x421%x422)<=x423)|x424);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x426 = -1;
	volatile int8_t x428 = -1;

    t104 = (((x425%x426)<=x427)|x428);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint64_t x430 = 199592663LLU;
	uint32_t x431 = 61391U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t105 = INT32_MIN;

    t105 = (((x429%x430)<=x431)|x432);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MIN;
	volatile int32_t x435 = 843;
	volatile uint32_t t106 = 29051286U;

    t106 = (((x433%x434)<=x435)|x436);

    if (t106 != 99679417U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x437 = 64U;
	static int16_t x438 = INT16_MAX;
	int32_t t107 = -28793720;

    t107 = (((x437%x438)<=x439)|x440);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x441 = 762130276U;
	int16_t x442 = INT16_MIN;
	uint32_t x444 = UINT32_MAX;
	static volatile uint32_t t108 = UINT32_MAX;

    t108 = (((x441%x442)<=x443)|x444);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = 37;
	volatile int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	uint8_t x448 = 2U;
	volatile int32_t t109 = 60395093;

    t109 = (((x445%x446)<=x447)|x448);

    if (t109 != 3) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = 15245U;
	int64_t x450 = 1169907040690369LL;
	static int8_t x451 = -1;
	int16_t x452 = INT16_MAX;

    t110 = (((x449%x450)<=x451)|x452);

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x453 = INT16_MIN;
	uint64_t x454 = 43938869320647452LLU;
	static int32_t x455 = INT32_MAX;
	volatile int32_t t111 = INT32_MAX;

    t111 = (((x453%x454)<=x455)|x456);

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x457 = INT64_MAX;
	int64_t x459 = INT64_MIN;
	uint32_t t112 = 4237U;

    t112 = (((x457%x458)<=x459)|x460);

    if (t112 != 18399U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x461 = 116U;
	uint64_t x462 = UINT64_MAX;
	uint32_t x463 = 7755893U;
	volatile uint16_t x464 = 1119U;
	int32_t t113 = -36;

    t113 = (((x461%x462)<=x463)|x464);

    if (t113 != 1119) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	volatile uint32_t x467 = 727260U;
	int32_t t114 = -1;

    t114 = (((x465%x466)<=x467)|x468);

    if (t114 != -32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = -34784923213704LL;
	int32_t x470 = -1170815;
	int32_t x472 = INT32_MIN;
	int32_t t115 = -475940;

    t115 = (((x469%x470)<=x471)|x472);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x474 = INT64_MIN;
	static volatile uint8_t x475 = 3U;
	int32_t x476 = INT32_MIN;
	volatile int32_t t116 = INT32_MIN;

    t116 = (((x473%x474)<=x475)|x476);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = INT16_MAX;
	static uint16_t x478 = 7U;
	int8_t x480 = INT8_MIN;

    t117 = (((x477%x478)<=x479)|x480);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = 417574475881314598LLU;
	int16_t x483 = -1579;

    t118 = (((x481%x482)<=x483)|x484);

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x485 = 2536U;
	volatile uint32_t x486 = 5U;
	uint16_t x487 = 184U;
	uint8_t x488 = 116U;
	volatile int32_t t119 = 161952;

    t119 = (((x485%x486)<=x487)|x488);

    if (t119 != 117) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int64_t x491 = INT64_MAX;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t120 = -473;

    t120 = (((x489%x490)<=x491)|x492);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x493 = INT8_MIN;
	static uint32_t x494 = 1852U;
	uint16_t x495 = UINT16_MAX;
	static volatile uint8_t x496 = 0U;
	static volatile int32_t t121 = -118567;

    t121 = (((x493%x494)<=x495)|x496);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x497 = 96347U;
	uint16_t x499 = UINT16_MAX;
	int16_t x500 = INT16_MIN;
	volatile int32_t t122 = -64778;

    t122 = (((x497%x498)<=x499)|x500);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x501 = -1;
	uint16_t x502 = 13U;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t123 = 3996715;

    t123 = (((x501%x502)<=x503)|x504);

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x507 = -1LL;
	int8_t x508 = INT8_MAX;
	int32_t t124 = 8215;

    t124 = (((x505%x506)<=x507)|x508);

    if (t124 != 127) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x509 = INT16_MIN;
	static int64_t x510 = INT64_MIN;
	static int32_t x511 = INT32_MIN;
	int8_t x512 = 7;

    t125 = (((x509%x510)<=x511)|x512);

    if (t125 != 7) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x513 = UINT32_MAX;
	volatile int64_t x514 = -235127738260226662LL;
	volatile int64_t x515 = INT64_MIN;
	uint32_t x516 = 718449U;
	volatile uint32_t t126 = 1064766U;

    t126 = (((x513%x514)<=x515)|x516);

    if (t126 != 718449U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x518 = UINT8_MAX;
	int64_t x519 = -1452398LL;
	static int64_t x520 = INT64_MIN;

    t127 = (((x517%x518)<=x519)|x520);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x522 = -1LL;
	uint16_t x523 = 57U;
	static int32_t t128 = 0;

    t128 = (((x521%x522)<=x523)|x524);

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x525 = UINT64_MAX;
	int8_t x526 = INT8_MIN;
	int8_t x527 = 20;
	uint64_t x528 = 551652983847LLU;
	uint64_t t129 = 3998899LLU;

    t129 = (((x525%x526)<=x527)|x528);

    if (t129 != 551652983847LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x530 = INT16_MIN;
	uint16_t x531 = 1102U;
	int64_t x532 = -1978435156361241LL;
	int64_t t130 = 4105540700210240LL;

    t130 = (((x529%x530)<=x531)|x532);

    if (t130 != -1978435156361241LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x533 = -2716071LL;
	volatile int32_t x534 = INT32_MIN;
	uint64_t x536 = UINT64_MAX;
	static volatile uint64_t t131 = UINT64_MAX;

    t131 = (((x533%x534)<=x535)|x536);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x537 = 0U;
	uint32_t x538 = 16990707U;
	uint64_t x539 = 335LLU;
	int16_t x540 = INT16_MIN;
	int32_t t132 = 306;

    t132 = (((x537%x538)<=x539)|x540);

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x543 = INT8_MIN;
	uint16_t x544 = UINT16_MAX;
	static int32_t t133 = 12;

    t133 = (((x541%x542)<=x543)|x544);

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x545 = INT32_MIN;
	static int32_t x546 = INT32_MAX;
	static int8_t x547 = INT8_MIN;
	int32_t t134 = -11870509;

    t134 = (((x545%x546)<=x547)|x548);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = INT8_MIN;
	int8_t x552 = -1;

    t135 = (((x549%x550)<=x551)|x552);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x554 = -1;
	static int64_t x555 = -1LL;
	int32_t t136 = 25163168;

    t136 = (((x553%x554)<=x555)|x556);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x557 = INT32_MIN;
	int32_t x558 = INT32_MIN;
	uint16_t x559 = 586U;
	uint32_t x560 = 57628U;
	uint32_t t137 = 1869673U;

    t137 = (((x557%x558)<=x559)|x560);

    if (t137 != 57629U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x561 = INT8_MAX;
	int32_t x562 = INT32_MIN;

    t138 = (((x561%x562)<=x563)|x564);

    if (t138 != -2040118715LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = 14943903LL;
	static int16_t x570 = INT16_MIN;
	static int32_t x571 = -1;
	int16_t x572 = -62;
	volatile int32_t t139 = -13934411;

    t139 = (((x569%x570)<=x571)|x572);

    if (t139 != -62) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x573 = -1;
	uint8_t x574 = UINT8_MAX;
	int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MAX;
	int32_t t140 = INT32_MAX;

    t140 = (((x573%x574)<=x575)|x576);

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x577 = UINT32_MAX;
	uint16_t x578 = 9834U;
	static int8_t x580 = INT8_MIN;
	static int32_t t141 = -18417137;

    t141 = (((x577%x578)<=x579)|x580);

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MIN;
	int8_t x583 = 33;
	static volatile uint16_t x584 = UINT16_MAX;
	int32_t t142 = -17;

    t142 = (((x581%x582)<=x583)|x584);

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = INT64_MIN;
	volatile int16_t x586 = -1;
	int8_t x588 = -1;
	volatile int32_t t143 = -793516723;

    t143 = (((x585%x586)<=x587)|x588);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x589 = 271U;
	static int64_t x590 = INT64_MAX;
	int8_t x591 = 1;
	static int64_t t144 = 71699LL;

    t144 = (((x589%x590)<=x591)|x592);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x593 = 23770U;
	static int32_t x594 = INT32_MIN;
	int32_t x595 = -1;
	volatile uint8_t x596 = UINT8_MAX;
	int32_t t145 = 222741;

    t145 = (((x593%x594)<=x595)|x596);

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x597 = INT64_MIN;
	static volatile int32_t x598 = -1;
	volatile uint8_t x599 = 3U;
	uint32_t x600 = 21U;
	uint32_t t146 = 13876080U;

    t146 = (((x597%x598)<=x599)|x600);

    if (t146 != 21U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	int32_t t147 = INT32_MIN;

    t147 = (((x601%x602)<=x603)|x604);

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x605 = UINT64_MAX;
	uint32_t x606 = UINT32_MAX;
	int16_t x607 = INT16_MAX;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t148 = 3;

    t148 = (((x605%x606)<=x607)|x608);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x613 = UINT8_MAX;
	static uint64_t x614 = 222420566277LLU;
	static int16_t x615 = -1;
	uint8_t x616 = 4U;
	volatile int32_t t149 = -50358294;

    t149 = (((x613%x614)<=x615)|x616);

    if (t149 != 5) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x617 = INT8_MIN;
	uint16_t x618 = 1U;
	volatile int32_t x619 = INT32_MAX;
	static uint32_t t150 = 518315519U;

    t150 = (((x617%x618)<=x619)|x620);

    if (t150 != 2017U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x621 = -55;
	int64_t x622 = -98107564345856844LL;
	int8_t x623 = INT8_MAX;
	uint16_t x624 = 1389U;
	volatile int32_t t151 = 6452376;

    t151 = (((x621%x622)<=x623)|x624);

    if (t151 != 1389) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x625 = 0U;
	int8_t x627 = -1;
	int16_t x628 = INT16_MIN;
	int32_t t152 = -50065810;

    t152 = (((x625%x626)<=x627)|x628);

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x629 = 17U;
	static volatile int16_t x630 = INT16_MIN;
	static int64_t x631 = 6722LL;
	int32_t x632 = INT32_MAX;

    t153 = (((x629%x630)<=x631)|x632);

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x633 = UINT8_MAX;
	volatile int16_t x634 = INT16_MAX;
	static int8_t x636 = INT8_MIN;
	volatile int32_t t154 = 1;

    t154 = (((x633%x634)<=x635)|x636);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x637 = 1U;
	static int8_t x638 = INT8_MAX;
	static int64_t x639 = -111585LL;
	uint8_t x640 = UINT8_MAX;
	int32_t t155 = 445435;

    t155 = (((x637%x638)<=x639)|x640);

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x641 = INT64_MIN;
	volatile int64_t x642 = 4LL;
	static volatile uint8_t x643 = UINT8_MAX;

    t156 = (((x641%x642)<=x643)|x644);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x646 = 361327;
	uint8_t x648 = UINT8_MAX;
	int32_t t157 = 690;

    t157 = (((x645%x646)<=x647)|x648);

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x649 = 3;
	uint16_t x650 = 23122U;
	int8_t x651 = INT8_MAX;

    t158 = (((x649%x650)<=x651)|x652);

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MIN;
	uint16_t x655 = UINT16_MAX;
	uint16_t x656 = UINT16_MAX;
	int32_t t159 = 431189;

    t159 = (((x653%x654)<=x655)|x656);

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x657 = -228460660;
	int16_t x658 = INT16_MIN;
	int16_t x659 = 343;
	volatile int32_t t160 = 202840667;

    t160 = (((x657%x658)<=x659)|x660);

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x661 = -1;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MIN;

    t161 = (((x661%x662)<=x663)|x664);

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x665 = INT8_MIN;
	int16_t x666 = -1;
	int64_t x668 = -260069739091LL;
	int64_t t162 = -1310918558144018657LL;

    t162 = (((x665%x666)<=x667)|x668);

    if (t162 != -260069739091LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x670 = -3;
	uint8_t x671 = 10U;
	uint16_t x672 = 4890U;
	volatile int32_t t163 = 52;

    t163 = (((x669%x670)<=x671)|x672);

    if (t163 != 4891) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x674 = INT32_MAX;
	uint64_t x675 = 4681922514524LLU;
	volatile uint64_t x676 = 2LLU;
	volatile uint64_t t164 = 7165LLU;

    t164 = (((x673%x674)<=x675)|x676);

    if (t164 != 2LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = 975798443957825LL;
	int8_t x678 = INT8_MAX;
	int16_t x679 = -1989;
	int64_t x680 = -1LL;
	volatile int64_t t165 = 1676LL;

    t165 = (((x677%x678)<=x679)|x680);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x681 = -6422430798653LL;
	uint64_t x683 = 1594645290429624LLU;
	volatile int16_t x684 = -8;
	volatile int32_t t166 = 591284;

    t166 = (((x681%x682)<=x683)|x684);

    if (t166 != -8) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = 185580;
	static int64_t x686 = -1519700425916LL;
	volatile uint64_t x687 = UINT64_MAX;
	static int64_t x688 = -80568944LL;
	volatile int64_t t167 = -47412943402LL;

    t167 = (((x685%x686)<=x687)|x688);

    if (t167 != -80568943LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x689 = 9;
	int64_t x690 = 608089537590LL;
	int32_t x691 = INT32_MAX;
	int16_t x692 = INT16_MAX;
	static int32_t t168 = -898272865;

    t168 = (((x689%x690)<=x691)|x692);

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x694 = 3337U;
	static int8_t x695 = INT8_MIN;
	static int32_t x696 = 4702469;
	volatile int32_t t169 = 0;

    t169 = (((x693%x694)<=x695)|x696);

    if (t169 != 4702469) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x697 = -493LL;
	int64_t x698 = INT64_MIN;
	uint32_t x699 = UINT32_MAX;
	static volatile int64_t x700 = INT64_MAX;
	int64_t t170 = INT64_MAX;

    t170 = (((x697%x698)<=x699)|x700);

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = 53466;
	uint64_t x702 = 34876LLU;
	int32_t x703 = INT32_MIN;
	int32_t x704 = -99682;

    t171 = (((x701%x702)<=x703)|x704);

    if (t171 != -99681) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = INT64_MIN;
	volatile uint64_t x706 = 6LLU;
	static volatile int32_t x707 = -1;
	int16_t x708 = INT16_MIN;
	volatile int32_t t172 = 1155379;

    t172 = (((x705%x706)<=x707)|x708);

    if (t172 != -32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x709 = -546933668920LL;
	int8_t x710 = -1;
	int32_t x712 = 15604500;
	volatile int32_t t173 = -1;

    t173 = (((x709%x710)<=x711)|x712);

    if (t173 != 15604500) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x713 = -12;
	int8_t x715 = 0;
	int32_t t174 = 3720810;

    t174 = (((x713%x714)<=x715)|x716);

    if (t174 != -21) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = INT16_MIN;
	static volatile int8_t x718 = INT8_MIN;
	volatile uint8_t x719 = 50U;
	uint64_t x720 = UINT64_MAX;
	uint64_t t175 = UINT64_MAX;

    t175 = (((x717%x718)<=x719)|x720);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	static int8_t x723 = INT8_MIN;
	uint32_t x724 = UINT32_MAX;

    t176 = (((x721%x722)<=x723)|x724);

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = 79112017;
	uint8_t x726 = 2U;
	int64_t x728 = INT64_MIN;
	static int64_t t177 = INT64_MIN;

    t177 = (((x725%x726)<=x727)|x728);

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = INT8_MAX;
	static int64_t x730 = INT64_MAX;
	uint32_t x731 = 113429177U;
	int8_t x732 = INT8_MIN;
	int32_t t178 = 205862417;

    t178 = (((x729%x730)<=x731)|x732);

    if (t178 != -127) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x733 = INT16_MAX;
	volatile uint8_t x734 = 50U;
	int64_t x736 = INT64_MAX;
	int64_t t179 = INT64_MAX;

    t179 = (((x733%x734)<=x735)|x736);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x737 = INT32_MIN;
	uint32_t x738 = 45U;
	volatile int8_t x739 = INT8_MAX;
	uint8_t x740 = 6U;
	int32_t t180 = -1499;

    t180 = (((x737%x738)<=x739)|x740);

    if (t180 != 7) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x743 = UINT32_MAX;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t181 = 14;

    t181 = (((x741%x742)<=x743)|x744);

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x746 = -1;
	uint8_t x747 = 1U;
	static int8_t x748 = INT8_MAX;
	volatile int32_t t182 = -5510431;

    t182 = (((x745%x746)<=x747)|x748);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x750 = -65358899;
	uint8_t x751 = 1U;
	int32_t x752 = INT32_MIN;
	volatile int32_t t183 = INT32_MIN;

    t183 = (((x749%x750)<=x751)|x752);

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x754 = 2010787U;
	int8_t x756 = -12;
	volatile int32_t t184 = 5919107;

    t184 = (((x753%x754)<=x755)|x756);

    if (t184 != -12) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x757 = INT16_MAX;
	int8_t x758 = -1;
	static int16_t x760 = -17;
	volatile int32_t t185 = -294515;

    t185 = (((x757%x758)<=x759)|x760);

    if (t185 != -17) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x761 = 11U;
	static int32_t x762 = INT32_MIN;
	static int16_t x763 = INT16_MIN;
	volatile int8_t x764 = 44;
	volatile int32_t t186 = -2624619;

    t186 = (((x761%x762)<=x763)|x764);

    if (t186 != 45) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x765 = -8574843427LL;
	uint16_t x767 = 3U;
	uint32_t t187 = 938U;

    t187 = (((x765%x766)<=x767)|x768);

    if (t187 != 165U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x773 = 20703506LLU;
	int64_t x775 = -1LL;
	uint64_t x776 = 61973016LLU;
	uint64_t t188 = 0LLU;

    t188 = (((x773%x774)<=x775)|x776);

    if (t188 != 61973017LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x777 = UINT16_MAX;
	static int8_t x779 = INT8_MAX;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t189 = -12;

    t189 = (((x777%x778)<=x779)|x780);

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = 10;
	volatile int32_t x783 = INT32_MIN;
	volatile int64_t x784 = -1LL;
	int64_t t190 = 4444136834764494681LL;

    t190 = (((x781%x782)<=x783)|x784);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x785 = 262U;
	volatile int64_t x786 = -1LL;
	int8_t x787 = -1;
	int32_t x788 = INT32_MAX;

    t191 = (((x785%x786)<=x787)|x788);

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x789 = INT8_MIN;
	int32_t x791 = 641297;
	volatile uint32_t x792 = UINT32_MAX;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = (((x789%x790)<=x791)|x792);

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x793 = INT64_MAX;
	int64_t x795 = -1LL;
	volatile uint16_t x796 = UINT16_MAX;
	static volatile int32_t t193 = -1958;

    t193 = (((x793%x794)<=x795)|x796);

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x797 = 311222857706433LLU;
	int64_t x798 = INT64_MIN;
	int64_t x799 = -1159LL;
	int16_t x800 = -1;
	volatile int32_t t194 = 1004311245;

    t194 = (((x797%x798)<=x799)|x800);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x801 = INT8_MAX;
	uint64_t x803 = UINT64_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t195 = 1064901387;

    t195 = (((x801%x802)<=x803)|x804);

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x805 = 247237U;
	int32_t x806 = INT32_MAX;
	uint32_t x807 = 90669U;
	volatile int8_t x808 = INT8_MIN;

    t196 = (((x805%x806)<=x807)|x808);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = 56649;
	int8_t x810 = INT8_MAX;
	static int8_t x812 = 0;
	int32_t t197 = 159;

    t197 = (((x809%x810)<=x811)|x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x813 = UINT32_MAX;
	uint16_t x814 = 31U;
	uint64_t x816 = 4LLU;

    t198 = (((x813%x814)<=x815)|x816);

    if (t198 != 5LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = INT16_MAX;
	static uint64_t x818 = 42824641803524LLU;
	volatile int32_t x819 = INT32_MAX;
	static int32_t x820 = -9;
	static volatile int32_t t199 = -232;

    t199 = (((x817%x818)<=x819)|x820);

    if (t199 != -9) { NG(); } else { ; }
	
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

