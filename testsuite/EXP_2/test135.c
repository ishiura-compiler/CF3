
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

volatile int32_t x1 = INT32_MIN;
int8_t x23 = -2;
volatile int64_t x24 = INT64_MAX;
uint32_t x37 = 1728U;
volatile int8_t x41 = INT8_MAX;
int16_t x59 = -15;
uint16_t x60 = UINT16_MAX;
int32_t t9 = -1;
int8_t x65 = INT8_MIN;
static volatile int32_t x70 = -1;
int16_t x72 = INT16_MIN;
uint8_t x82 = 12U;
int16_t x104 = INT16_MAX;
static uint64_t x109 = 973LLU;
int16_t x111 = INT16_MIN;
uint32_t x114 = 128189U;
int64_t x120 = INT64_MIN;
uint64_t x121 = UINT64_MAX;
static int64_t x128 = INT64_MIN;
volatile int16_t x131 = 2;
volatile int8_t x137 = 1;
uint32_t x145 = 467960U;
static int64_t x148 = -323LL;
uint32_t x150 = 185124U;
static int8_t x152 = 0;
int8_t x162 = INT8_MIN;
static int32_t x167 = -814890;
volatile int32_t x175 = INT32_MIN;
int32_t t34 = 309383734;
uint8_t x181 = 1U;
int32_t x185 = -861585564;
int8_t x186 = -17;
volatile uint8_t x188 = 14U;
uint32_t x189 = 429218950U;
static uint16_t x195 = 0U;
static volatile int32_t t38 = -959;
volatile uint64_t x197 = UINT64_MAX;
uint16_t x198 = UINT16_MAX;
uint64_t x200 = UINT64_MAX;
uint64_t x205 = 5932651LLU;
volatile int32_t t41 = 3;
static volatile int64_t x213 = -1LL;
static uint8_t x217 = UINT8_MAX;
uint64_t x219 = 20446260757LLU;
volatile int32_t t43 = -451519;
int8_t x222 = -3;
int64_t x224 = -1LL;
int16_t x228 = INT16_MIN;
volatile int32_t t45 = 30703;
int8_t x230 = INT8_MAX;
static int32_t x231 = -7;
volatile int32_t t46 = 969;
int16_t x234 = INT16_MIN;
int16_t x238 = INT16_MIN;
int32_t x240 = INT32_MIN;
volatile int32_t t48 = 3071393;
uint32_t x244 = UINT32_MAX;
static int8_t x253 = -1;
uint32_t x265 = 29269175U;
int16_t x267 = -10548;
int8_t x270 = -19;
static int32_t t54 = 1946343;
volatile int32_t t55 = 1719689;
static int16_t x278 = -1;
int32_t t57 = 419;
volatile int16_t x297 = INT16_MAX;
static int16_t x299 = -3607;
int32_t t61 = -59;
uint16_t x301 = UINT16_MAX;
int8_t x306 = INT8_MIN;
int64_t x309 = -27810554400401LL;
volatile int32_t t67 = -77;
volatile int32_t x327 = -1;
static volatile int32_t t68 = 443130220;
int8_t x334 = INT8_MIN;
static volatile uint8_t x335 = 1U;
int8_t x336 = INT8_MAX;
int32_t t70 = 3267;
int32_t t71 = 1;
int64_t x347 = 4135411LL;
static int32_t t72 = -24932;
uint16_t x350 = 1U;
static int32_t x353 = INT32_MAX;
int8_t x355 = INT8_MIN;
int16_t x356 = 356;
int16_t x358 = -1;
int32_t x360 = INT32_MIN;
uint16_t x369 = UINT16_MAX;
uint16_t x372 = 0U;
volatile int16_t x389 = INT16_MIN;
volatile int32_t x394 = 19401139;
volatile uint64_t x396 = UINT64_MAX;
int32_t t84 = -391061696;
int16_t x401 = INT16_MIN;
static volatile int32_t t85 = 49690;
static int32_t t86 = 17409;
int16_t x411 = INT16_MAX;
int64_t x418 = -1LL;
int8_t x438 = -1;
static int16_t x447 = -6667;
uint64_t x448 = UINT64_MAX;
int64_t x451 = -20853LL;
int64_t x458 = INT64_MAX;
uint8_t x469 = UINT8_MAX;
int32_t x473 = INT32_MAX;
int64_t x478 = INT64_MIN;
int64_t x486 = INT64_MIN;
volatile int32_t t102 = -185558922;
int16_t x492 = INT16_MIN;
int8_t x494 = 27;
int8_t x496 = -1;
int16_t x504 = -1;
static volatile int16_t x509 = INT16_MIN;
int8_t x513 = -1;
uint32_t x517 = 882196177U;
volatile int16_t x525 = 14;
static volatile int8_t x530 = -13;
static uint32_t x531 = 15U;
int8_t x536 = INT8_MIN;
static volatile int64_t x543 = INT64_MIN;
int32_t t113 = -652167;
static int16_t x554 = -1;
uint16_t x562 = 2590U;
int8_t x576 = 0;
int16_t x578 = INT16_MIN;
int64_t x580 = -20361802675LL;
int32_t t121 = -34570;
static volatile uint64_t x581 = 2003365504684LLU;
uint64_t x582 = 7924010506592137LLU;
uint32_t x586 = 3567584U;
static int16_t x587 = INT16_MAX;
volatile int16_t x594 = 12353;
int32_t x597 = INT32_MAX;
static int16_t x606 = -1;
int32_t x616 = INT32_MIN;
uint32_t x618 = 94134121U;
static int16_t x622 = INT16_MIN;
uint16_t x624 = 93U;
volatile int32_t t131 = 4102980;
volatile int8_t x640 = -2;
int32_t x641 = INT32_MIN;
static uint64_t x642 = UINT64_MAX;
static volatile int32_t t134 = 157038313;
uint8_t x649 = UINT8_MAX;
uint8_t x651 = 7U;
int64_t x654 = -1847LL;
volatile int8_t x661 = -3;
int64_t x667 = 381734294707642633LL;
uint32_t x670 = 94U;
volatile int32_t t139 = -45477;
static uint32_t x674 = 311351390U;
uint32_t x676 = 5206864U;
volatile int64_t x688 = INT64_MIN;
static volatile int32_t t142 = 292062810;
static int32_t x692 = 3;
volatile int32_t t143 = 23;
int32_t x693 = -1;
int64_t x699 = INT64_MIN;
int64_t x704 = 450912LL;
int32_t t146 = -2;
uint16_t x708 = 16U;
uint32_t x709 = UINT32_MAX;
int16_t x710 = 0;
int32_t t149 = 15904;
uint16_t x721 = 28217U;
int16_t x722 = 228;
volatile uint32_t x723 = 767216684U;
static int16_t x726 = -1;
static int8_t x731 = -1;
volatile int16_t x733 = 0;
uint16_t x734 = UINT16_MAX;
volatile int64_t x741 = INT64_MAX;
int8_t x745 = INT8_MAX;
static int64_t x748 = INT64_MIN;
volatile int32_t t156 = -1177268;
static int16_t x751 = -95;
volatile int8_t x756 = INT8_MIN;
volatile uint16_t x779 = 765U;
int32_t x787 = -30;
int16_t x791 = -1;
volatile int32_t t168 = 16531749;
volatile int32_t t169 = 1;
int8_t x806 = 10;
static uint16_t x820 = 7U;
static uint32_t x828 = UINT32_MAX;
uint64_t x829 = 155998920LLU;
int8_t x848 = INT8_MIN;
int32_t t177 = 4;
static uint8_t x852 = 1U;
volatile int32_t t179 = -38;
static volatile uint8_t x857 = 3U;
uint8_t x858 = UINT8_MAX;
int16_t x873 = -1;
uint16_t x882 = 4U;
uint16_t x883 = 13U;
volatile int16_t x884 = -3;
int32_t t186 = -9;
static uint8_t x892 = 10U;
volatile int32_t t191 = -45677323;
int32_t t192 = 640026;
int32_t t195 = 2022;
volatile int32_t x944 = 62;


void f0(void) {
    	volatile int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MAX;
	volatile uint32_t x4 = 999U;
	volatile int32_t t0 = 2798;

    t0 = ((x1<=(x2+x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static int64_t x6 = -466298734618714LL;
	int64_t x7 = -314LL;
	int16_t x8 = -1;
	static volatile int32_t t1 = 38311;

    t1 = ((x5<=(x6+x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MAX;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 2917278;

    t2 = ((x13<=(x14+x15))>x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -2LL;
	uint64_t x18 = 26625627200883LLU;
	static uint64_t x19 = 3912968348311225037LLU;
	int8_t x20 = 6;
	volatile int32_t t3 = 1549783;

    t3 = ((x17<=(x18+x19))>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 34199823135LLU;
	int64_t x22 = INT64_MAX;
	int32_t t4 = 1331511;

    t4 = ((x21<=(x22+x23))>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x38 = INT16_MIN;
	static int32_t x39 = INT32_MAX;
	uint8_t x40 = 13U;
	volatile int32_t t5 = 1207;

    t5 = ((x37<=(x38+x39))>x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x42 = 73U;
	static uint32_t x43 = 14U;
	int16_t x44 = -1;
	int32_t t6 = 3195;

    t6 = ((x41<=(x42+x43))>x44);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x45 = INT64_MIN;
	volatile uint16_t x46 = 48U;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = -978;
	volatile int32_t t7 = -145;

    t7 = ((x45<=(x46+x47))>x48);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x49 = INT64_MAX;
	uint8_t x50 = 5U;
	int32_t x51 = INT32_MIN;
	static int64_t x52 = -791937LL;
	volatile int32_t t8 = 52595820;

    t8 = ((x49<=(x50+x51))>x52);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = INT16_MAX;
	int16_t x58 = -1;

    t9 = ((x57<=(x58+x59))>x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x61 = 5LLU;
	static int64_t x62 = -30LL;
	uint16_t x63 = 3U;
	int8_t x64 = -1;
	volatile int32_t t10 = -500;

    t10 = ((x61<=(x62+x63))>x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x66 = -7LL;
	uint32_t x67 = 1096521226U;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t11 = -1031;

    t11 = ((x65<=(x66+x67))>x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = INT8_MIN;
	static int64_t x71 = INT64_MAX;
	volatile int32_t t12 = 4;

    t12 = ((x69<=(x70+x71))>x72);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x77 = 37907909U;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	int16_t x80 = 12326;
	volatile int32_t t13 = 73621835;

    t13 = ((x77<=(x78+x79))>x80);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x81 = -1;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t14 = -7372590;

    t14 = ((x81<=(x82+x83))>x84);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x89 = -798;
	int8_t x90 = 9;
	uint16_t x91 = 2190U;
	static int64_t x92 = INT64_MAX;
	volatile int32_t t15 = -69338;

    t15 = ((x89<=(x90+x91))>x92);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x93 = -78;
	int8_t x94 = INT8_MIN;
	int8_t x95 = 11;
	int32_t x96 = -1;
	volatile int32_t t16 = 92797639;

    t16 = ((x93<=(x94+x95))>x96);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x97 = -1LL;
	static uint8_t x98 = 7U;
	volatile int8_t x99 = INT8_MIN;
	uint32_t x100 = UINT32_MAX;
	int32_t t17 = 9700;

    t17 = ((x97<=(x98+x99))>x100);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x101 = 17431277539734363LLU;
	volatile int32_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	int32_t t18 = 907423534;

    t18 = ((x101<=(x102+x103))>x104);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	int16_t x107 = 6638;
	int8_t x108 = -1;
	volatile int32_t t19 = -48569315;

    t19 = ((x105<=(x106+x107))>x108);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x110 = -1LL;
	volatile uint8_t x112 = 65U;
	volatile int32_t t20 = -2971;

    t20 = ((x109<=(x110+x111))>x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = INT64_MAX;
	static int8_t x115 = INT8_MAX;
	uint32_t x116 = 6089503U;
	volatile int32_t t21 = 690696;

    t21 = ((x113<=(x114+x115))>x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x117 = -59651;
	volatile int64_t x118 = -20152871340792624LL;
	uint32_t x119 = 159780U;
	volatile int32_t t22 = 13;

    t22 = ((x117<=(x118+x119))>x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x122 = -1;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = INT8_MAX;
	int32_t t23 = 448094;

    t23 = ((x121<=(x122+x123))>x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x125 = 47U;
	volatile uint16_t x126 = 14137U;
	volatile int64_t x127 = 423099307418549LL;
	volatile int32_t t24 = 44;

    t24 = ((x125<=(x126+x127))>x128);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x129 = INT64_MIN;
	static uint32_t x130 = 2974U;
	uint32_t x132 = 32018U;
	static volatile int32_t t25 = -118549229;

    t25 = ((x129<=(x130+x131))>x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x138 = INT16_MAX;
	uint8_t x139 = 0U;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t26 = -121;

    t26 = ((x137<=(x138+x139))>x140);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x146 = 1;
	uint8_t x147 = 114U;
	int32_t t27 = -70;

    t27 = ((x145<=(x146+x147))>x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x149 = 62;
	volatile int64_t x151 = -1LL;
	volatile int32_t t28 = -84096483;

    t28 = ((x149<=(x150+x151))>x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x157 = -1785299;
	int16_t x158 = INT16_MIN;
	int64_t x159 = -683539LL;
	static volatile int32_t x160 = -3521964;
	volatile int32_t t29 = -4819;

    t29 = ((x157<=(x158+x159))>x160);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x161 = 1;
	volatile int64_t x163 = 17029841925587109LL;
	uint32_t x164 = UINT32_MAX;
	int32_t t30 = 88940;

    t30 = ((x161<=(x162+x163))>x164);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t31 = 797839359;

    t31 = ((x165<=(x166+x167))>x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x169 = INT32_MIN;
	static volatile int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int8_t x172 = -1;
	volatile int32_t t32 = -126383;

    t32 = ((x169<=(x170+x171))>x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x173 = 2848U;
	uint32_t x174 = 954U;
	static uint64_t x176 = 5148905400587LLU;
	volatile int32_t t33 = 297;

    t33 = ((x173<=(x174+x175))>x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x177 = INT8_MIN;
	uint64_t x178 = 311171404004672LLU;
	int16_t x179 = -1;
	int32_t x180 = INT32_MIN;

    t34 = ((x177<=(x178+x179))>x180);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x182 = -1;
	uint32_t x183 = 202U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t35 = -9363819;

    t35 = ((x181<=(x182+x183))>x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x187 = UINT64_MAX;
	static int32_t t36 = 338038006;

    t36 = ((x185<=(x186+x187))>x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x190 = -1;
	int32_t x191 = -3615;
	volatile int32_t x192 = -1;
	volatile int32_t t37 = 53998256;

    t37 = ((x189<=(x190+x191))>x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x193 = 1956309025LLU;
	int64_t x194 = INT64_MAX;
	uint8_t x196 = 0U;

    t38 = ((x193<=(x194+x195))>x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x199 = -1;
	static volatile int32_t t39 = -1;

    t39 = ((x197<=(x198+x199))>x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x206 = -1;
	uint8_t x207 = 0U;
	int64_t x208 = INT64_MIN;
	int32_t t40 = 3;

    t40 = ((x205<=(x206+x207))>x208);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = 1;
	uint64_t x210 = UINT64_MAX;
	static int64_t x211 = INT64_MAX;
	uint8_t x212 = UINT8_MAX;

    t41 = ((x209<=(x210+x211))>x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x214 = 790845U;
	int32_t x215 = 0;
	int8_t x216 = INT8_MAX;
	int32_t t42 = 17335;

    t42 = ((x213<=(x214+x215))>x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x218 = INT8_MIN;
	static volatile uint32_t x220 = 53327286U;

    t43 = ((x217<=(x218+x219))>x220);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x221 = 2U;
	uint8_t x223 = 13U;
	int32_t t44 = 2040388;

    t44 = ((x221<=(x222+x223))>x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x225 = -1;
	static volatile int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;

    t45 = ((x225<=(x226+x227))>x228);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x229 = -1;
	static volatile int64_t x232 = INT64_MIN;

    t46 = ((x229<=(x230+x231))>x232);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	int16_t x236 = -7;
	volatile int32_t t47 = -1;

    t47 = ((x233<=(x234+x235))>x236);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x237 = -5;
	volatile uint64_t x239 = 1LLU;

    t48 = ((x237<=(x238+x239))>x240);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	int32_t x242 = 242766;
	int8_t x243 = 1;
	static int32_t t49 = 0;

    t49 = ((x241<=(x242+x243))>x244);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x245 = INT8_MIN;
	volatile uint8_t x246 = 4U;
	static volatile uint32_t x247 = 1372U;
	uint64_t x248 = 21844LLU;
	int32_t t50 = 3;

    t50 = ((x245<=(x246+x247))>x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x254 = -1;
	uint8_t x255 = 0U;
	uint32_t x256 = 148351U;
	volatile int32_t t51 = -3428760;

    t51 = ((x253<=(x254+x255))>x256);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x261 = INT32_MIN;
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = -1LL;
	int16_t x264 = INT16_MIN;
	static int32_t t52 = 31429;

    t52 = ((x261<=(x262+x263))>x264);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x266 = 28559U;
	volatile uint64_t x268 = 114948807LLU;
	int32_t t53 = 48610;

    t53 = ((x265<=(x266+x267))>x268);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x269 = -170;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = 3875U;

    t54 = ((x269<=(x270+x271))>x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x273 = 574LL;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	static int16_t x276 = INT16_MAX;

    t55 = ((x273<=(x274+x275))>x276);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x277 = 536752159LL;
	int8_t x279 = INT8_MAX;
	uint8_t x280 = 57U;
	volatile int32_t t56 = 6;

    t56 = ((x277<=(x278+x279))>x280);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x281 = INT64_MAX;
	int8_t x282 = -1;
	int32_t x283 = 1173147;
	static volatile uint16_t x284 = UINT16_MAX;

    t57 = ((x281<=(x282+x283))>x284);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = 7;
	int16_t x286 = INT16_MAX;
	int16_t x287 = -74;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t58 = 22208896;

    t58 = ((x285<=(x286+x287))>x288);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MAX;
	volatile int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;
	static int32_t t59 = 498825;

    t59 = ((x289<=(x290+x291))>x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x293 = UINT32_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 1954395372160402LLU;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t60 = 1938791;

    t60 = ((x293<=(x294+x295))>x296);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x298 = UINT16_MAX;
	int64_t x300 = INT64_MIN;

    t61 = ((x297<=(x298+x299))>x300);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x302 = UINT8_MAX;
	volatile int8_t x303 = INT8_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t62 = -3;

    t62 = ((x301<=(x302+x303))>x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x305 = -1;
	static uint8_t x307 = 94U;
	static int64_t x308 = INT64_MIN;
	int32_t t63 = -849;

    t63 = ((x305<=(x306+x307))>x308);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x310 = 43U;
	static volatile int16_t x311 = -1;
	static int32_t x312 = -122;
	volatile int32_t t64 = 432;

    t64 = ((x309<=(x310+x311))>x312);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x313 = 1042160804U;
	int64_t x314 = -559971132648713961LL;
	int32_t x315 = INT32_MAX;
	volatile int64_t x316 = INT64_MAX;
	int32_t t65 = 399508;

    t65 = ((x313<=(x314+x315))>x316);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x317 = -1;
	static uint8_t x318 = UINT8_MAX;
	volatile int8_t x319 = 0;
	int64_t x320 = INT64_MIN;
	int32_t t66 = -469743;

    t66 = ((x317<=(x318+x319))>x320);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = 24;
	int32_t x323 = -155816363;
	volatile int16_t x324 = INT16_MAX;

    t67 = ((x321<=(x322+x323))>x324);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = INT32_MAX;
	int16_t x326 = -1;
	uint32_t x328 = UINT32_MAX;

    t68 = ((x325<=(x326+x327))>x328);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t69 = -1;

    t69 = ((x329<=(x330+x331))>x332);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x333 = -1071896083;

    t70 = ((x333<=(x334+x335))>x336);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x341 = INT16_MIN;
	static int8_t x342 = INT8_MIN;
	uint16_t x343 = 11968U;
	int8_t x344 = INT8_MIN;

    t71 = ((x341<=(x342+x343))>x344);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = -45;
	uint64_t x346 = 1580641904909838LLU;
	int16_t x348 = INT16_MIN;

    t72 = ((x345<=(x346+x347))>x348);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x349 = 0U;
	uint8_t x351 = 2U;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t73 = -45831;

    t73 = ((x349<=(x350+x351))>x352);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x354 = -1;
	volatile int32_t t74 = 3390300;

    t74 = ((x353<=(x354+x355))>x356);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x357 = INT64_MIN;
	int32_t x359 = -1;
	volatile int32_t t75 = -2;

    t75 = ((x357<=(x358+x359))>x360);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x361 = -1;
	volatile int32_t x362 = -1;
	static uint32_t x363 = 4481344U;
	static int16_t x364 = INT16_MIN;
	static int32_t t76 = 1703;

    t76 = ((x361<=(x362+x363))>x364);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = -650;
	volatile uint8_t x367 = UINT8_MAX;
	static int64_t x368 = 64894880863LL;
	int32_t t77 = -20016852;

    t77 = ((x365<=(x366+x367))>x368);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x370 = -24547408843578LL;
	uint16_t x371 = 3U;
	volatile int32_t t78 = -199643;

    t78 = ((x369<=(x370+x371))>x372);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x373 = -4745;
	int8_t x374 = INT8_MAX;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	int32_t t79 = 6;

    t79 = ((x373<=(x374+x375))>x376);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x377 = INT64_MIN;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = -1;
	int32_t x380 = 20307;
	int32_t t80 = -1;

    t80 = ((x377<=(x378+x379))>x380);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x381 = 3739;
	static volatile int16_t x382 = INT16_MIN;
	int16_t x383 = -1;
	static uint8_t x384 = 75U;
	static volatile int32_t t81 = 98;

    t81 = ((x381<=(x382+x383))>x384);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t82 = -22929928;

    t82 = ((x389<=(x390+x391))>x392);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x395 = -1;
	volatile int32_t t83 = -511936675;

    t83 = ((x393<=(x394+x395))>x396);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x397 = 418721;
	static uint8_t x398 = 0U;
	static int16_t x399 = INT16_MIN;
	int32_t x400 = -1;

    t84 = ((x397<=(x398+x399))>x400);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x402 = 4122667U;
	static uint64_t x403 = 27474479131LLU;
	int8_t x404 = INT8_MIN;

    t85 = ((x401<=(x402+x403))>x404);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x405 = 0U;
	static int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = 903U;

    t86 = ((x405<=(x406+x407))>x408);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint8_t x409 = 2U;
	volatile int16_t x410 = INT16_MIN;
	static int8_t x412 = INT8_MAX;
	int32_t t87 = 6;

    t87 = ((x409<=(x410+x411))>x412);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x413 = 62;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 51935796114517LLU;
	int16_t x416 = INT16_MAX;
	volatile int32_t t88 = -30;

    t88 = ((x413<=(x414+x415))>x416);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x417 = INT16_MIN;
	static int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t89 = 264338473;

    t89 = ((x417<=(x418+x419))>x420);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MAX;
	int32_t x423 = 118759151;
	static uint32_t x424 = 216U;
	int32_t t90 = -119;

    t90 = ((x421<=(x422+x423))>x424);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x429 = 2U;
	int16_t x430 = -1;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = INT16_MIN;
	static int32_t t91 = 482;

    t91 = ((x429<=(x430+x431))>x432);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x437 = -1;
	volatile int16_t x439 = INT16_MIN;
	int64_t x440 = 339998195008LL;
	int32_t t92 = -30972577;

    t92 = ((x437<=(x438+x439))>x440);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x445 = INT8_MIN;
	int64_t x446 = -1LL;
	int32_t t93 = -3675;

    t93 = ((x445<=(x446+x447))>x448);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x449 = -3;
	volatile uint8_t x450 = UINT8_MAX;
	uint8_t x452 = UINT8_MAX;
	int32_t t94 = 654357369;

    t94 = ((x449<=(x450+x451))>x452);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x453 = 21U;
	static uint8_t x454 = 1U;
	int16_t x455 = -1;
	uint64_t x456 = 10841163092956687LLU;
	volatile int32_t t95 = -130972;

    t95 = ((x453<=(x454+x455))>x456);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x457 = 911578U;
	static int16_t x459 = INT16_MIN;
	static volatile int32_t x460 = INT32_MIN;
	static volatile int32_t t96 = 290458329;

    t96 = ((x457<=(x458+x459))>x460);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x461 = 89879539691815151LLU;
	volatile int16_t x462 = INT16_MIN;
	int64_t x463 = 776LL;
	uint16_t x464 = UINT16_MAX;
	static volatile int32_t t97 = 118;

    t97 = ((x461<=(x462+x463))>x464);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	uint32_t x467 = 385U;
	int32_t x468 = INT32_MIN;
	static int32_t t98 = 1;

    t98 = ((x465<=(x466+x467))>x468);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x470 = 4232;
	static uint16_t x471 = 1429U;
	int8_t x472 = INT8_MIN;
	static volatile int32_t t99 = 2229557;

    t99 = ((x469<=(x470+x471))>x472);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x474 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	int32_t x476 = INT32_MAX;
	int32_t t100 = -1233785;

    t100 = ((x473<=(x474+x475))>x476);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x477 = -175422;
	static int64_t x479 = 9LL;
	static uint64_t x480 = 229LLU;
	static int32_t t101 = 63609;

    t101 = ((x477<=(x478+x479))>x480);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x485 = UINT8_MAX;
	static volatile int8_t x487 = 1;
	uint32_t x488 = 183715337U;

    t102 = ((x485<=(x486+x487))>x488);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x489 = 22502009LL;
	uint32_t x490 = 5817097U;
	int32_t x491 = -1525762;
	int32_t t103 = 1029577203;

    t103 = ((x489<=(x490+x491))>x492);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x493 = UINT32_MAX;
	static volatile int16_t x495 = INT16_MIN;
	int32_t t104 = 5205;

    t104 = ((x493<=(x494+x495))>x496);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = 21;
	int16_t x502 = -1;
	int64_t x503 = 370218LL;
	int32_t t105 = -6;

    t105 = ((x501<=(x502+x503))>x504);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x510 = INT32_MIN;
	static int32_t x511 = INT32_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t106 = 347617978;

    t106 = ((x509<=(x510+x511))>x512);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x514 = INT8_MIN;
	int16_t x515 = -1;
	volatile int8_t x516 = 2;
	int32_t t107 = -584433;

    t107 = ((x513<=(x514+x515))>x516);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x518 = UINT16_MAX;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MAX;
	int32_t t108 = 266097937;

    t108 = ((x517<=(x518+x519))>x520);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x526 = INT8_MAX;
	int16_t x527 = INT16_MIN;
	int64_t x528 = INT64_MIN;
	volatile int32_t t109 = 24127591;

    t109 = ((x525<=(x526+x527))>x528);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x529 = 408U;
	int16_t x532 = -13107;
	static volatile int32_t t110 = -111762;

    t110 = ((x529<=(x530+x531))>x532);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x533 = INT64_MIN;
	volatile int8_t x534 = -1;
	uint32_t x535 = 687U;
	int32_t t111 = -1;

    t111 = ((x533<=(x534+x535))>x536);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x541 = -1;
	int64_t x542 = INT64_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t112 = 33775218;

    t112 = ((x541<=(x542+x543))>x544);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x545 = -1942620091862140LL;
	int16_t x546 = 30;
	volatile int8_t x547 = -1;
	static volatile uint64_t x548 = 2284LLU;

    t113 = ((x545<=(x546+x547))>x548);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x549 = INT16_MIN;
	int16_t x550 = INT16_MIN;
	static int64_t x551 = INT64_MAX;
	uint16_t x552 = UINT16_MAX;
	static volatile int32_t t114 = 1;

    t114 = ((x549<=(x550+x551))>x552);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x553 = UINT32_MAX;
	static uint16_t x555 = 22264U;
	int32_t x556 = 15266923;
	int32_t t115 = -127691603;

    t115 = ((x553<=(x554+x555))>x556);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x557 = INT32_MAX;
	int32_t x558 = INT32_MAX;
	int8_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	int32_t t116 = 333;

    t116 = ((x557<=(x558+x559))>x560);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x561 = INT64_MIN;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;
	volatile int32_t t117 = 37;

    t117 = ((x561<=(x562+x563))>x564);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x565 = -1LL;
	uint16_t x566 = 2U;
	int8_t x567 = -1;
	int16_t x568 = -1;
	int32_t t118 = -43972118;

    t118 = ((x565<=(x566+x567))>x568);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = -1;
	uint64_t x571 = 2168883019LLU;
	static int16_t x572 = INT16_MIN;
	volatile int32_t t119 = -3278;

    t119 = ((x569<=(x570+x571))>x572);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x573 = 71850;
	int8_t x574 = INT8_MAX;
	static volatile uint8_t x575 = 12U;
	static int32_t t120 = 4;

    t120 = ((x573<=(x574+x575))>x576);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x577 = INT32_MIN;
	static volatile int8_t x579 = INT8_MAX;

    t121 = ((x577<=(x578+x579))>x580);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x583 = -60;
	static uint64_t x584 = 10967860818384LLU;
	volatile int32_t t122 = 2939;

    t122 = ((x581<=(x582+x583))>x584);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x585 = UINT16_MAX;
	int32_t x588 = -1;
	int32_t t123 = -4;

    t123 = ((x585<=(x586+x587))>x588);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MAX;
	static volatile int16_t x591 = INT16_MIN;
	static uint16_t x592 = UINT16_MAX;
	static int32_t t124 = 1674;

    t124 = ((x589<=(x590+x591))>x592);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x593 = -1;
	int16_t x595 = INT16_MAX;
	int16_t x596 = -6;
	volatile int32_t t125 = -38175;

    t125 = ((x593<=(x594+x595))>x596);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x598 = UINT16_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t126 = 3477973;

    t126 = ((x597<=(x598+x599))>x600);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x605 = 383U;
	static int16_t x607 = -1463;
	uint64_t x608 = 19900LLU;
	volatile int32_t t127 = -464746;

    t127 = ((x605<=(x606+x607))>x608);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x613 = 7644;
	uint32_t x614 = 28U;
	uint64_t x615 = 32320973222LLU;
	int32_t t128 = 404054;

    t128 = ((x613<=(x614+x615))>x616);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x617 = 5214998592176LLU;
	uint16_t x619 = UINT16_MAX;
	volatile uint8_t x620 = UINT8_MAX;
	int32_t t129 = 12541;

    t129 = ((x617<=(x618+x619))>x620);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x621 = INT32_MAX;
	static int8_t x623 = INT8_MIN;
	int32_t t130 = -12354;

    t130 = ((x621<=(x622+x623))>x624);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x625 = 1302640U;
	static volatile int16_t x626 = -1;
	int16_t x627 = 25;
	uint64_t x628 = 3LLU;

    t131 = ((x625<=(x626+x627))>x628);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x633 = INT64_MIN;
	int64_t x634 = 47780922541LL;
	volatile int8_t x635 = INT8_MAX;
	int64_t x636 = INT64_MIN;
	int32_t t132 = -11349003;

    t132 = ((x633<=(x634+x635))>x636);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x637 = -1;
	int64_t x638 = -1345LL;
	uint64_t x639 = 120910LLU;
	volatile int32_t t133 = 1312;

    t133 = ((x637<=(x638+x639))>x640);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x643 = UINT64_MAX;
	int8_t x644 = -5;

    t134 = ((x641<=(x642+x643))>x644);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x650 = INT32_MIN;
	static volatile int8_t x652 = INT8_MAX;
	static int32_t t135 = 16105;

    t135 = ((x649<=(x650+x651))>x652);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x653 = -1;
	int64_t x655 = -1LL;
	int16_t x656 = INT16_MIN;
	int32_t t136 = -722;

    t136 = ((x653<=(x654+x655))>x656);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x662 = -14304;
	int8_t x663 = -1;
	volatile int16_t x664 = INT16_MAX;
	static volatile int32_t t137 = -2814;

    t137 = ((x661<=(x662+x663))>x664);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x665 = INT8_MIN;
	int8_t x666 = -8;
	int16_t x668 = -4;
	volatile int32_t t138 = 20928;

    t138 = ((x665<=(x666+x667))>x668);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x671 = -47628LL;
	static int8_t x672 = 30;

    t139 = ((x669<=(x670+x671))>x672);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x675 = -1;
	volatile int32_t t140 = -30990;

    t140 = ((x673<=(x674+x675))>x676);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x677 = INT64_MIN;
	int64_t x678 = INT64_MIN;
	uint16_t x679 = 7U;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t141 = 217;

    t141 = ((x677<=(x678+x679))>x680);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x685 = 14U;
	uint8_t x686 = 1U;
	uint16_t x687 = UINT16_MAX;

    t142 = ((x685<=(x686+x687))>x688);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x689 = 1;
	int64_t x690 = -1LL;
	int32_t x691 = 7;

    t143 = ((x689<=(x690+x691))>x692);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x694 = -18057271801LL;
	static int64_t x695 = -1LL;
	int32_t x696 = INT32_MIN;
	volatile int32_t t144 = -400182;

    t144 = ((x693<=(x694+x695))>x696);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x697 = 0;
	int16_t x698 = 79;
	static volatile int8_t x700 = INT8_MIN;
	int32_t t145 = -51;

    t145 = ((x697<=(x698+x699))>x700);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x701 = INT64_MIN;
	int8_t x702 = INT8_MIN;
	int64_t x703 = -95400245827416LL;

    t146 = ((x701<=(x702+x703))>x704);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x705 = INT32_MAX;
	static volatile int16_t x706 = 3;
	int8_t x707 = 0;
	static volatile int32_t t147 = -11;

    t147 = ((x705<=(x706+x707))>x708);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x711 = 13811LL;
	int64_t x712 = -189930LL;
	static volatile int32_t t148 = 18012;

    t148 = ((x709<=(x710+x711))>x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x717 = 249U;
	int8_t x718 = -1;
	int16_t x719 = -7;
	int8_t x720 = -7;

    t149 = ((x717<=(x718+x719))>x720);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x724 = -1;
	volatile int32_t t150 = -1990;

    t150 = ((x721<=(x722+x723))>x724);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x727 = INT32_MAX;
	volatile int64_t x728 = 18259241LL;
	static volatile int32_t t151 = -840;

    t151 = ((x725<=(x726+x727))>x728);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x729 = INT8_MIN;
	volatile uint64_t x730 = 11LLU;
	uint64_t x732 = 9524457450LLU;
	static int32_t t152 = -13719;

    t152 = ((x729<=(x730+x731))>x732);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x735 = 37U;
	uint8_t x736 = 0U;
	int32_t t153 = 1;

    t153 = ((x733<=(x734+x735))>x736);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x737 = UINT64_MAX;
	uint8_t x738 = 2U;
	int32_t x739 = 16704348;
	int32_t x740 = INT32_MAX;
	volatile int32_t t154 = 1032363103;

    t154 = ((x737<=(x738+x739))>x740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x742 = 3625U;
	volatile int8_t x743 = INT8_MIN;
	static volatile int8_t x744 = INT8_MIN;
	volatile int32_t t155 = -934459;

    t155 = ((x741<=(x742+x743))>x744);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x746 = 1;
	int16_t x747 = INT16_MIN;

    t156 = ((x745<=(x746+x747))>x748);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x749 = 1;
	int8_t x750 = -1;
	int16_t x752 = INT16_MIN;
	int32_t t157 = -229;

    t157 = ((x749<=(x750+x751))>x752);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x753 = INT8_MIN;
	int8_t x754 = INT8_MIN;
	volatile uint32_t x755 = 43148391U;
	int32_t t158 = -2042015;

    t158 = ((x753<=(x754+x755))>x756);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x757 = -1LL;
	int32_t x758 = 107;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MAX;
	volatile int32_t t159 = -12991757;

    t159 = ((x757<=(x758+x759))>x760);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x761 = 2U;
	volatile int32_t x762 = -1;
	uint16_t x763 = UINT16_MAX;
	int32_t x764 = INT32_MAX;
	int32_t t160 = 499920317;

    t160 = ((x761<=(x762+x763))>x764);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x765 = 8;
	uint16_t x766 = 10U;
	int16_t x767 = 1;
	volatile int16_t x768 = -2;
	volatile int32_t t161 = -1007751;

    t161 = ((x765<=(x766+x767))>x768);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x769 = UINT16_MAX;
	int8_t x770 = INT8_MIN;
	int8_t x771 = -9;
	uint64_t x772 = 3832170864LLU;
	volatile int32_t t162 = -194741649;

    t162 = ((x769<=(x770+x771))>x772);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x777 = INT64_MAX;
	int32_t x778 = 40;
	uint8_t x780 = 29U;
	int32_t t163 = 5;

    t163 = ((x777<=(x778+x779))>x780);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x781 = 1206495U;
	volatile int16_t x782 = INT16_MAX;
	static uint8_t x783 = UINT8_MAX;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t164 = 54092644;

    t164 = ((x781<=(x782+x783))>x784);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x785 = INT32_MIN;
	int8_t x786 = -1;
	volatile uint8_t x788 = UINT8_MAX;
	int32_t t165 = 245803328;

    t165 = ((x785<=(x786+x787))>x788);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x789 = 0U;
	int64_t x790 = -1LL;
	int16_t x792 = INT16_MAX;
	static int32_t t166 = -25511318;

    t166 = ((x789<=(x790+x791))>x792);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	volatile uint8_t x794 = 7U;
	int16_t x795 = -7;
	int32_t x796 = INT32_MIN;
	int32_t t167 = -1992;

    t167 = ((x793<=(x794+x795))>x796);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	static int32_t x798 = INT32_MAX;
	uint32_t x799 = UINT32_MAX;
	volatile int32_t x800 = 72;

    t168 = ((x797<=(x798+x799))>x800);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x801 = INT32_MIN;
	volatile uint32_t x802 = 17491881U;
	int32_t x803 = INT32_MAX;
	uint32_t x804 = UINT32_MAX;

    t169 = ((x801<=(x802+x803))>x804);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x805 = -1360167821820159285LL;
	int16_t x807 = 1;
	int64_t x808 = -1LL;
	int32_t t170 = -6;

    t170 = ((x805<=(x806+x807))>x808);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x813 = -1997772;
	static int64_t x814 = INT64_MIN;
	int16_t x815 = 1;
	uint64_t x816 = 32165792088LLU;
	int32_t t171 = 642182;

    t171 = ((x813<=(x814+x815))>x816);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x817 = 2062;
	static int8_t x818 = INT8_MIN;
	volatile int16_t x819 = -1;
	static int32_t t172 = 869177;

    t172 = ((x817<=(x818+x819))>x820);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x825 = UINT16_MAX;
	int8_t x826 = -1;
	int16_t x827 = -736;
	int32_t t173 = -6;

    t173 = ((x825<=(x826+x827))>x828);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x830 = 26664673U;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MIN;
	volatile int32_t t174 = -32599;

    t174 = ((x829<=(x830+x831))>x832);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x833 = -1LL;
	uint8_t x834 = 6U;
	int64_t x835 = -1LL;
	static volatile int8_t x836 = INT8_MIN;
	static int32_t t175 = 69574809;

    t175 = ((x833<=(x834+x835))>x836);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x837 = INT32_MIN;
	static uint8_t x838 = 127U;
	int16_t x839 = INT16_MAX;
	int32_t x840 = -1;
	static int32_t t176 = -89642449;

    t176 = ((x837<=(x838+x839))>x840);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x845 = 240028734LLU;
	int8_t x846 = 2;
	int32_t x847 = -963312;

    t177 = ((x845<=(x846+x847))>x848);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x849 = 5439789692829046615LLU;
	static int16_t x850 = INT16_MIN;
	volatile uint16_t x851 = 371U;
	volatile int32_t t178 = 15;

    t178 = ((x849<=(x850+x851))>x852);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x853 = UINT64_MAX;
	static uint64_t x854 = 15410270431849LLU;
	uint64_t x855 = UINT64_MAX;
	int8_t x856 = INT8_MAX;

    t179 = ((x853<=(x854+x855))>x856);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x859 = -1;
	uint32_t x860 = 19895U;
	int32_t t180 = -185380;

    t180 = ((x857<=(x858+x859))>x860);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x861 = INT64_MAX;
	int64_t x862 = 11629272163LL;
	int16_t x863 = -1;
	volatile uint64_t x864 = 16481670632LLU;
	volatile int32_t t181 = -2;

    t181 = ((x861<=(x862+x863))>x864);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x865 = -500830877905267LL;
	int32_t x866 = 1;
	uint32_t x867 = 1445U;
	uint32_t x868 = UINT32_MAX;
	volatile int32_t t182 = -33508028;

    t182 = ((x865<=(x866+x867))>x868);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x869 = 111368;
	static uint64_t x870 = 12568LLU;
	static volatile uint64_t x871 = UINT64_MAX;
	static int64_t x872 = INT64_MIN;
	volatile int32_t t183 = 242151;

    t183 = ((x869<=(x870+x871))>x872);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x874 = INT16_MIN;
	volatile uint8_t x875 = UINT8_MAX;
	static int32_t x876 = -1;
	volatile int32_t t184 = -20;

    t184 = ((x873<=(x874+x875))>x876);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x881 = INT32_MIN;
	volatile int32_t t185 = 0;

    t185 = ((x881<=(x882+x883))>x884);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x885 = INT64_MIN;
	static int16_t x886 = -1;
	volatile uint16_t x887 = UINT16_MAX;
	volatile int32_t x888 = INT32_MIN;

    t186 = ((x885<=(x886+x887))>x888);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x889 = INT8_MIN;
	volatile uint8_t x890 = 3U;
	int64_t x891 = INT64_MIN;
	static volatile int32_t t187 = 881073;

    t187 = ((x889<=(x890+x891))>x892);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x893 = INT64_MIN;
	int64_t x894 = INT64_MIN;
	static int16_t x895 = 1;
	uint8_t x896 = UINT8_MAX;
	volatile int32_t t188 = 3049;

    t188 = ((x893<=(x894+x895))>x896);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x897 = UINT64_MAX;
	static int8_t x898 = INT8_MIN;
	static int64_t x899 = -1LL;
	static volatile uint32_t x900 = 107268552U;
	volatile int32_t t189 = 11128769;

    t189 = ((x897<=(x898+x899))>x900);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x901 = 117U;
	static volatile int8_t x902 = 15;
	uint32_t x903 = UINT32_MAX;
	uint16_t x904 = 0U;
	volatile int32_t t190 = -12612526;

    t190 = ((x901<=(x902+x903))>x904);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x905 = INT16_MIN;
	uint16_t x906 = 569U;
	int64_t x907 = -677911317147LL;
	uint8_t x908 = 5U;

    t191 = ((x905<=(x906+x907))>x908);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x909 = -900368;
	uint16_t x910 = UINT16_MAX;
	int16_t x911 = INT16_MIN;
	static uint16_t x912 = UINT16_MAX;

    t192 = ((x909<=(x910+x911))>x912);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x913 = INT16_MIN;
	static int8_t x914 = INT8_MIN;
	int16_t x915 = INT16_MIN;
	int16_t x916 = INT16_MIN;
	volatile int32_t t193 = 732503030;

    t193 = ((x913<=(x914+x915))>x916);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x917 = INT8_MIN;
	volatile int16_t x918 = INT16_MIN;
	int64_t x919 = -8084155036LL;
	volatile int32_t x920 = INT32_MAX;
	int32_t t194 = -25484;

    t194 = ((x917<=(x918+x919))>x920);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x921 = INT32_MIN;
	int8_t x922 = INT8_MIN;
	static uint16_t x923 = 25U;
	static int32_t x924 = 0;

    t195 = ((x921<=(x922+x923))>x924);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x925 = -26177507LL;
	static int32_t x926 = INT32_MIN;
	int64_t x927 = -1176413042876372447LL;
	int16_t x928 = INT16_MIN;
	int32_t t196 = 14806290;

    t196 = ((x925<=(x926+x927))>x928);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x933 = 14877;
	int32_t x934 = INT32_MAX;
	int64_t x935 = INT64_MIN;
	uint16_t x936 = 0U;
	static volatile int32_t t197 = -7091004;

    t197 = ((x933<=(x934+x935))>x936);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x937 = 3836073227216273LLU;
	int32_t x938 = -1;
	static volatile uint64_t x939 = 2380209153817LLU;
	int16_t x940 = INT16_MIN;
	int32_t t198 = -718130564;

    t198 = ((x937<=(x938+x939))>x940);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x941 = -1;
	static volatile int16_t x942 = INT16_MAX;
	int64_t x943 = -1LL;
	int32_t t199 = 6711451;

    t199 = ((x941<=(x942+x943))>x944);

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

