
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

static int32_t t5 = -7930006;
static int16_t x32 = -185;
uint16_t x33 = 8765U;
volatile int32_t t8 = -42487604;
static int8_t x50 = INT8_MIN;
int64_t x55 = 1336LL;
int64_t x56 = INT64_MAX;
uint32_t x57 = 224446U;
volatile int64_t x67 = -1LL;
uint32_t x74 = 4827U;
int8_t x75 = -1;
uint16_t x77 = 1335U;
int32_t x78 = -1;
int8_t x96 = INT8_MAX;
int32_t x103 = -1;
static uint8_t x106 = 3U;
int32_t x113 = -1;
volatile int32_t x114 = 32;
volatile int32_t t28 = 10;
volatile int32_t x120 = -1;
volatile int8_t x121 = INT8_MIN;
volatile int64_t t30 = -6977961545536LL;
int8_t x127 = -1;
uint8_t x128 = UINT8_MAX;
static volatile uint64_t x134 = 11877887521658LLU;
volatile uint64_t t33 = 1540612LLU;
int64_t x139 = -1LL;
int16_t x141 = INT16_MIN;
volatile uint64_t x145 = 354537337LLU;
int8_t x147 = INT8_MIN;
static int32_t x151 = INT32_MAX;
int64_t x152 = 1683LL;
uint32_t t37 = 9529564U;
int64_t x157 = -1795689821952069129LL;
uint64_t x160 = 6713583181242648863LLU;
static int8_t x170 = INT8_MIN;
volatile int8_t x171 = INT8_MAX;
uint64_t x182 = UINT64_MAX;
static int64_t x187 = INT64_MAX;
volatile int64_t x196 = -1LL;
int8_t x197 = INT8_MIN;
int16_t x208 = 3864;
int64_t x212 = INT64_MIN;
static uint32_t x215 = UINT32_MAX;
int16_t x219 = INT16_MAX;
int16_t x220 = -110;
int8_t x224 = INT8_MIN;
static int16_t x225 = 44;
volatile int64_t x232 = 54LL;
static volatile int32_t t57 = -13;
static uint64_t x238 = 71962210LLU;
int8_t x243 = -1;
static uint64_t x255 = UINT64_MAX;
int16_t x256 = 15;
int16_t x258 = -2;
volatile uint64_t x261 = 724897727249LLU;
static uint32_t x269 = 29U;
volatile uint32_t t67 = 931205U;
uint32_t x275 = 1993496U;
int8_t x279 = INT8_MIN;
int32_t x281 = -1;
static int8_t x285 = -17;
int64_t x288 = INT64_MIN;
int16_t x292 = -13;
volatile int16_t x300 = 8;
uint32_t x301 = UINT32_MAX;
volatile uint32_t t75 = UINT32_MAX;
volatile uint8_t x307 = 3U;
int8_t x310 = -1;
int8_t x312 = INT8_MAX;
static volatile uint8_t x315 = 35U;
int64_t x317 = 4054682LL;
volatile int16_t x319 = INT16_MIN;
int8_t x332 = -1;
volatile uint32_t t83 = 8068868U;
int8_t x339 = INT8_MIN;
int16_t x347 = INT16_MAX;
int16_t x348 = INT16_MIN;
uint8_t x353 = 54U;
int8_t x354 = -2;
int8_t x357 = 2;
volatile int16_t x367 = INT16_MIN;
int16_t x376 = -1;
uint64_t x378 = UINT64_MAX;
static volatile int16_t x382 = -2034;
int64_t x384 = INT64_MIN;
volatile int32_t t94 = 7734453;
volatile int64_t t96 = 14600LL;
int8_t x395 = 17;
int64_t x399 = -1LL;
volatile int16_t x401 = 0;
int64_t x402 = INT64_MIN;
uint64_t x407 = 27412940943LLU;
int32_t x409 = INT32_MIN;
int64_t x413 = INT64_MIN;
volatile uint64_t x416 = UINT64_MAX;
volatile int32_t t103 = -22796;
int64_t x432 = INT64_MIN;
uint32_t x439 = 6572U;
uint64_t x444 = 2303309592LLU;
int64_t x454 = -1LL;
uint32_t x457 = 66743U;
int32_t x462 = INT32_MIN;
int16_t x464 = INT16_MAX;
int16_t x466 = INT16_MAX;
int64_t t114 = -5642902384LL;
static uint64_t x476 = 6251401LLU;
int64_t x479 = INT64_MIN;
uint32_t x485 = UINT32_MAX;
volatile uint32_t t118 = 110U;
volatile int32_t t120 = 114508;
static int32_t x501 = 3561;
int16_t x502 = -1;
volatile int32_t t122 = -1602;
static int8_t x505 = -1;
uint16_t x506 = UINT16_MAX;
volatile int64_t x507 = -12758569LL;
static int32_t x512 = INT32_MAX;
static volatile int64_t t125 = -1035694523LL;
int64_t x526 = INT64_MAX;
uint16_t x528 = UINT16_MAX;
static uint32_t x534 = UINT32_MAX;
static volatile int64_t x538 = INT64_MIN;
uint64_t x539 = 4LLU;
volatile int8_t x542 = INT8_MIN;
int64_t x547 = -98140780963333159LL;
static volatile uint16_t x551 = 3U;
static uint16_t x555 = 1U;
static int16_t x557 = -2782;
uint8_t x564 = 44U;
volatile uint64_t x567 = UINT64_MAX;
volatile uint64_t t138 = 7LLU;
int32_t x573 = 1;
int32_t t140 = 509;
int8_t x579 = INT8_MIN;
volatile int64_t x581 = 7727779773619295LL;
static int16_t x582 = 13453;
uint8_t x584 = UINT8_MAX;
int8_t x591 = INT8_MIN;
int16_t x597 = 0;
int16_t x605 = INT16_MIN;
int32_t x612 = -121;
int8_t x613 = 7;
volatile uint32_t t150 = 8492965U;
int16_t x619 = -248;
uint64_t x622 = 3116LLU;
uint32_t x623 = 2081014U;
int8_t x624 = -3;
uint64_t x625 = 4613703670669635480LLU;
static volatile uint64_t t153 = 140157621655355949LLU;
static int64_t x629 = -1912709095520LL;
int64_t t154 = 131575195181745LL;
int16_t x642 = INT16_MAX;
static int8_t x649 = -1;
int64_t t158 = 53249LL;
uint32_t x663 = 363012U;
static volatile int16_t x672 = INT16_MIN;
uint8_t x673 = 7U;
int64_t x680 = -1LL;
int32_t x683 = INT32_MAX;
int64_t t165 = -907251490259LL;
int16_t x699 = 56;
uint32_t t169 = 2971U;
int8_t x707 = INT8_MIN;
uint64_t x709 = 135LLU;
int64_t x710 = -1LL;
uint16_t x714 = 0U;
volatile int32_t x719 = INT32_MIN;
int16_t x726 = INT16_MIN;
uint8_t x734 = UINT8_MAX;
int16_t x739 = 0;
volatile int16_t x741 = INT16_MIN;
int32_t x742 = INT32_MAX;
static int64_t x743 = INT64_MIN;
volatile int64_t x744 = 841182568220610LL;
volatile uint16_t x768 = UINT16_MAX;
static uint8_t x770 = 0U;
volatile int32_t t187 = -54;
volatile int32_t x773 = -1;
static volatile int8_t x774 = INT8_MIN;
int16_t x776 = -3574;
int8_t x784 = -1;
int16_t x785 = -1;
int32_t x792 = -2296;
int32_t x793 = INT32_MAX;
int64_t x797 = -1LL;
int16_t x798 = -1;
int64_t x807 = INT64_MIN;
static int64_t x812 = -1LL;
int64_t t197 = -105582860319132178LL;
static int8_t x815 = 2;
int32_t t199 = 241865;


void f0(void) {
    	int16_t x1 = 0;
	volatile int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = 80U;
	int32_t t0 = 1;

    t0 = ((x1|x2)+(x3!=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 14332U;
	int16_t x6 = INT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 9873LLU;
	static uint32_t t1 = 60071117U;

    t1 = ((x5|x6)+(x7!=x8));

    if (t1 != 32768U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = -1;
	uint8_t x12 = 0U;
	volatile int32_t t2 = 43091994;

    t2 = ((x9|x10)+(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 0;
	int32_t x14 = -48451033;
	int64_t x15 = 2740986169LL;
	int64_t x16 = -55379554128651LL;
	volatile int32_t t3 = -80441;

    t3 = ((x13|x14)+(x15!=x16));

    if (t3 != -48451032) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = 1298817643497723LLU;
	static int8_t x19 = INT8_MIN;
	volatile int8_t x20 = INT8_MIN;
	uint64_t t4 = 291167924825LLU;

    t4 = ((x17|x18)+(x19!=x20));

    if (t4 != 9224670854498273531LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 1846U;
	static uint16_t x22 = 3679U;
	static int16_t x23 = INT16_MAX;
	volatile int16_t x24 = INT16_MIN;

    t5 = ((x21|x22)+(x23!=x24));

    if (t5 != 3968) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 80517262667181196LLU;
	int8_t x26 = -10;
	static uint8_t x27 = 51U;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x25|x26)+(x27!=x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 8451558760639032LL;
	static uint8_t x30 = 42U;
	static int8_t x31 = INT8_MIN;
	int64_t t7 = -2207581555741934LL;

    t7 = ((x29|x30)+(x31!=x32));

    if (t7 != 8451558760639035LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MIN;
	uint32_t x35 = 9802U;
	int16_t x36 = -1;

    t8 = ((x33|x34)+(x35!=x36));

    if (t8 != -66) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 4;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = UINT64_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -2934118;

    t9 = ((x37|x38)+(x39!=x40));

    if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x42 = -264;
	int64_t x43 = -1LL;
	volatile int32_t x44 = -1;
	volatile int32_t t10 = 15;

    t10 = ((x41|x42)+(x43!=x44));

    if (t10 != -264) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 21U;
	static int16_t x48 = INT16_MIN;
	volatile uint32_t t11 = 222379U;

    t11 = ((x45|x46)+(x47!=x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 1006259LLU;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = INT32_MAX;
	uint64_t t12 = 258102436710LLU;

    t12 = ((x49|x50)+(x51!=x52));

    if (t12 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = -1;
	volatile int32_t t13 = -543439592;

    t13 = ((x53|x54)+(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x58 = -1;
	volatile int8_t x59 = INT8_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile uint32_t t14 = 1U;

    t14 = ((x57|x58)+(x59!=x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MAX;
	volatile int32_t x63 = INT32_MAX;
	static volatile int8_t x64 = -1;
	static int64_t t15 = 675410634105069760LL;

    t15 = ((x61|x62)+(x63!=x64));

    if (t15 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static int16_t x66 = INT16_MIN;
	int32_t x68 = 25;
	volatile int32_t t16 = -1067805;

    t16 = ((x65|x66)+(x67!=x68));

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -565;
	int32_t x70 = -470888438;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 15;

    t17 = ((x69|x70)+(x71!=x72));

    if (t17 != -564) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 0;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 264215638U;

    t18 = ((x73|x74)+(x75!=x76));

    if (t18 != 4827U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -570637;

    t19 = ((x77|x78)+(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 9079025440908LLU;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = 144;
	int32_t x84 = 288;
	volatile uint64_t t20 = 340952LLU;

    t20 = ((x81|x82)+(x83!=x84));

    if (t20 != 9079025441024LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = -1LL;
	volatile uint16_t x86 = UINT16_MAX;
	volatile uint64_t x87 = 3140852332067456LLU;
	static volatile int16_t x88 = INT16_MAX;
	volatile int64_t t21 = 2LL;

    t21 = ((x85|x86)+(x87!=x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x89 = 337U;
	uint16_t x90 = 32U;
	uint64_t x91 = UINT64_MAX;
	static uint8_t x92 = 18U;
	int32_t t22 = 3;

    t22 = ((x89|x90)+(x91!=x92));

    if (t22 != 370) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 23665567U;
	int16_t x94 = -1;
	int32_t x95 = -1;
	volatile uint32_t t23 = 27497U;

    t23 = ((x93|x94)+(x95!=x96));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x97 = 60U;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	volatile uint32_t t24 = 1U;

    t24 = ((x97|x98)+(x99!=x100));

    if (t24 != 4294934589U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	static int64_t x102 = 1850902195LL;
	static volatile int32_t x104 = INT32_MIN;
	static volatile int64_t t25 = 24811966LL;

    t25 = ((x101|x102)+(x103!=x104));

    if (t25 != -31052LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 2033U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t26 = 38966603;

    t26 = ((x105|x106)+(x107!=x108));

    if (t26 != 2036) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 16159LL;
	int8_t x110 = INT8_MIN;
	static volatile int8_t x111 = -1;
	int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 307723995LL;

    t27 = ((x109|x110)+(x111!=x112));

    if (t27 != -96LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x115 = UINT32_MAX;
	volatile int32_t x116 = 182596;

    t28 = ((x113|x114)+(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	volatile int8_t x119 = -24;
	volatile int32_t t29 = 255;

    t29 = ((x117|x118)+(x119!=x120));

    if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -32643614748066074LL;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MAX;

    t30 = ((x121|x122)+(x123!=x124));

    if (t30 != -25LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x126 = 0;
	volatile int32_t t31 = 34;

    t31 = ((x125|x126)+(x127!=x128));

    if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	static volatile int8_t x132 = -1;
	volatile int32_t t32 = 4;

    t32 = ((x129|x130)+(x131!=x132));

    if (t32 != -2147483521) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	int16_t x135 = -1;
	static int16_t x136 = -8308;

    t33 = ((x133|x134)+(x135!=x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	uint32_t x138 = UINT32_MAX;
	int64_t x140 = 497LL;
	volatile uint32_t t34 = 83507U;

    t34 = ((x137|x138)+(x139!=x140));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MAX;
	static int16_t x144 = INT16_MAX;
	int32_t t35 = 105042804;

    t35 = ((x141|x142)+(x143!=x144));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	uint8_t x148 = 27U;
	static volatile uint64_t t36 = 995200136811LLU;

    t36 = ((x145|x146)+(x147!=x148));

    if (t36 != 18446744071916605306LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 34617U;
	volatile int32_t x150 = -1;

    t37 = ((x149|x150)+(x151!=x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = 60;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	static uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = 8319764234870459LL;

    t38 = ((x153|x154)+(x155!=x156));

    if (t38 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x158 = 12U;
	static uint16_t x159 = 583U;
	int64_t t39 = 83993LL;

    t39 = ((x157|x158)+(x159!=x160));

    if (t39 != -1795689821952069120LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 161;
	volatile uint8_t x162 = 5U;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 1U;
	static int32_t t40 = -43;

    t40 = ((x161|x162)+(x163!=x164));

    if (t40 != 166) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 22287486U;
	int8_t x166 = INT8_MAX;
	int8_t x167 = 47;
	uint32_t x168 = 30U;
	uint32_t t41 = 155144U;

    t41 = ((x165|x166)+(x167!=x168));

    if (t41 != 22287488U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -602LL;
	uint8_t x172 = 0U;
	volatile int64_t t42 = -2789567LL;

    t42 = ((x169|x170)+(x171!=x172));

    if (t42 != -89LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = -68;
	int8_t x175 = INT8_MIN;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = -15741029;

    t43 = ((x173|x174)+(x175!=x176));

    if (t43 != -67) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 3;
	static int8_t x178 = -1;
	int32_t x179 = -221825293;
	volatile int16_t x180 = -1;
	static volatile int32_t t44 = 1321954;

    t44 = ((x177|x178)+(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 0U;
	volatile uint16_t x183 = 90U;
	static int32_t x184 = -4339152;
	volatile uint64_t t45 = 3287LLU;

    t45 = ((x181|x182)+(x183!=x184));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = 105U;
	int16_t x188 = -1;
	static int32_t t46 = 8225;

    t46 = ((x185|x186)+(x187!=x188));

    if (t46 != -22) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -44879572;
	int64_t x190 = -32946814393725568LL;
	int16_t x191 = 28;
	volatile int64_t x192 = INT64_MAX;
	int64_t t47 = -57131LL;

    t47 = ((x189|x190)+(x191!=x192));

    if (t47 != -2622035LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = 371472991867068625LL;
	volatile int16_t x194 = -1;
	uint16_t x195 = 59U;
	int64_t t48 = 341045608LL;

    t48 = ((x193|x194)+(x195!=x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	volatile int16_t x199 = 1;
	uint64_t x200 = 268434043111268LLU;
	static volatile int32_t t49 = -2;

    t49 = ((x197|x198)+(x199!=x200));

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	static uint8_t x202 = 0U;
	static int8_t x203 = INT8_MAX;
	volatile int64_t x204 = 805201238227251LL;
	volatile uint32_t t50 = 43035U;

    t50 = ((x201|x202)+(x203!=x204));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 11270U;
	int32_t x206 = -274368;
	uint32_t x207 = 1U;
	static volatile int32_t t51 = -95514781;

    t51 = ((x205|x206)+(x207!=x208));

    if (t51 != -263097) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MAX;
	static int8_t x211 = INT8_MIN;
	static volatile int32_t t52 = -124649;

    t52 = ((x209|x210)+(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	volatile int64_t x216 = -23162535LL;
	volatile int64_t t53 = -1474390298888LL;

    t53 = ((x213|x214)+(x215!=x216));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	static int64_t t54 = 208053LL;

    t54 = ((x217|x218)+(x219!=x220));

    if (t54 != -127LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 3LLU;
	int8_t x222 = -1;
	volatile int64_t x223 = INT64_MIN;
	static uint64_t t55 = 647940LLU;

    t55 = ((x221|x222)+(x223!=x224));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x226 = UINT64_MAX;
	int32_t x227 = -2141021;
	uint16_t x228 = UINT16_MAX;
	static uint64_t t56 = 338365395479241LLU;

    t56 = ((x225|x226)+(x227!=x228));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 260U;
	volatile uint16_t x230 = 1U;
	volatile int16_t x231 = INT16_MIN;

    t57 = ((x229|x230)+(x231!=x232));

    if (t57 != 262) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 0U;
	static int64_t x234 = 31LL;
	int16_t x235 = INT16_MIN;
	volatile uint64_t x236 = 22792515869476LLU;
	volatile int64_t t58 = 3476486097408607633LL;

    t58 = ((x233|x234)+(x235!=x236));

    if (t58 != 32LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	volatile uint8_t x239 = 114U;
	int8_t x240 = 32;
	uint64_t t59 = 758163325LLU;

    t59 = ((x237|x238)+(x239!=x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -496;

    t60 = ((x241|x242)+(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	static int32_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	volatile int32_t t61 = 1668797;

    t61 = ((x245|x246)+(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static volatile int32_t x250 = INT32_MIN;
	volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = 139932U;
	int32_t t62 = -13536516;

    t62 = ((x249|x250)+(x251!=x252));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MAX;
	volatile int32_t x254 = INT32_MIN;
	int64_t t63 = 238367999210547LL;

    t63 = ((x253|x254)+(x255!=x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 53U;
	static int8_t x259 = -1;
	int64_t x260 = INT64_MAX;
	int32_t t64 = -6994;

    t64 = ((x257|x258)+(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x262 = 4U;
	static int64_t x263 = -1LL;
	uint64_t x264 = 224323100817176502LLU;
	volatile uint64_t t65 = 3194359851518734776LLU;

    t65 = ((x261|x262)+(x263!=x264));

    if (t65 != 724897727254LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 13U;
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MAX;
	int16_t x268 = 8178;
	int32_t t66 = -6;

    t66 = ((x265|x266)+(x267!=x268));

    if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -1;
	static uint64_t x271 = 6088148242236871LLU;
	volatile uint16_t x272 = 1341U;

    t67 = ((x269|x270)+(x271!=x272));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint16_t x274 = UINT16_MAX;
	volatile uint16_t x276 = 5371U;
	int32_t t68 = 148223531;

    t68 = ((x273|x274)+(x275!=x276));

    if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	volatile int16_t x280 = 1;
	volatile int32_t t69 = -76860238;

    t69 = ((x277|x278)+(x279!=x280));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MAX;
	volatile int32_t x283 = INT32_MIN;
	uint32_t x284 = 81703857U;
	int64_t t70 = -15LL;

    t70 = ((x281|x282)+(x283!=x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x286 = 11U;
	volatile int16_t x287 = INT16_MAX;
	volatile uint32_t t71 = 0U;

    t71 = ((x285|x286)+(x287!=x288));

    if (t71 != 4294967280U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	static uint32_t x291 = 6101328U;
	volatile int64_t t72 = 3303LL;

    t72 = ((x289|x290)+(x291!=x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	uint32_t x294 = 483936833U;
	volatile uint32_t x295 = UINT32_MAX;
	static uint8_t x296 = UINT8_MAX;
	int64_t t73 = 1LL;

    t73 = ((x293|x294)+(x295!=x296));

    if (t73 != -9223372036370838974LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	uint32_t x298 = 108U;
	static volatile int32_t x299 = -1;
	uint32_t t74 = 340791U;

    t74 = ((x297|x298)+(x299!=x300));

    if (t74 != 256U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x302 = 93701U;
	uint32_t x303 = UINT32_MAX;
	static int32_t x304 = -1;

    t75 = ((x301|x302)+(x303!=x304));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = 32590689026903799LL;
	static int8_t x306 = -1;
	volatile int16_t x308 = INT16_MIN;
	int64_t t76 = 108LL;

    t76 = ((x305|x306)+(x307!=x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	static int8_t x311 = -1;
	volatile int32_t t77 = -104;

    t77 = ((x309|x310)+(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	static int16_t x314 = -1;
	uint16_t x316 = 0U;
	int32_t t78 = -6252;

    t78 = ((x313|x314)+(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x318 = UINT32_MAX;
	int32_t x320 = -1;
	int64_t t79 = 1LL;

    t79 = ((x317|x318)+(x319!=x320));

    if (t79 != 4294967296LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	volatile uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = INT16_MAX;
	volatile uint64_t x324 = 146731183637LLU;
	static uint64_t t80 = 61755210172LLU;

    t80 = ((x321|x322)+(x323!=x324));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	static volatile uint32_t x326 = 464U;
	volatile int64_t x327 = INT64_MAX;
	uint8_t x328 = 0U;
	volatile uint32_t t81 = 56770U;

    t81 = ((x325|x326)+(x327!=x328));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	uint32_t x331 = 9540U;
	volatile int64_t t82 = 81LL;

    t82 = ((x329|x330)+(x331!=x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 28U;
	volatile uint32_t x334 = 7713U;
	int16_t x335 = -58;
	static uint64_t x336 = UINT64_MAX;

    t83 = ((x333|x334)+(x335!=x336));

    if (t83 != 7742U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MAX;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = 253225520091529LL;

    t84 = ((x337|x338)+(x339!=x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int32_t x342 = -18857515;
	uint32_t x343 = UINT32_MAX;
	volatile uint16_t x344 = 5U;
	int32_t t85 = -203010;

    t85 = ((x341|x342)+(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	static volatile int64_t t86 = 8053943786892LL;

    t86 = ((x345|x346)+(x347!=x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x355 = 79979004840784LLU;
	int64_t x356 = INT64_MIN;
	int32_t t87 = -58;

    t87 = ((x353|x354)+(x355!=x356));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x358 = 238351989430870LL;
	uint32_t x359 = 3723315U;
	uint32_t x360 = 2790U;
	int64_t t88 = -6991633831022705LL;

    t88 = ((x357|x358)+(x359!=x360));

    if (t88 != 238351989430871LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = 396;
	volatile uint16_t x362 = 1102U;
	int64_t x363 = INT64_MIN;
	int32_t x364 = -223046;
	int32_t t89 = 409939396;

    t89 = ((x361|x362)+(x363!=x364));

    if (t89 != 1487) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x368 = INT64_MAX;
	int32_t t90 = 79;

    t90 = ((x365|x366)+(x367!=x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = 16257U;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = INT64_MIN;
	uint32_t t91 = 230U;

    t91 = ((x369|x370)+(x371!=x372));

    if (t91 != 16383U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x373 = -142584;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 1813U;
	int32_t t92 = -17;

    t92 = ((x373|x374)+(x375!=x376));

    if (t92 != -119) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = 0;
	static uint32_t x379 = 15439U;
	volatile int16_t x380 = -1;
	static volatile uint64_t t93 = 32915724571998738LLU;

    t93 = ((x377|x378)+(x379!=x380));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = INT8_MIN;
	int8_t x383 = INT8_MIN;

    t94 = ((x381|x382)+(x383!=x384));

    if (t94 != -113) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x385 = 93U;
	static volatile int8_t x386 = INT8_MIN;
	int64_t x387 = 3405676606LL;
	int8_t x388 = 11;
	volatile int32_t t95 = 2244;

    t95 = ((x385|x386)+(x387!=x388));

    if (t95 != -34) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x389 = 0U;
	int64_t x390 = INT64_MIN;
	static uint64_t x391 = 218666LLU;
	int16_t x392 = INT16_MIN;

    t96 = ((x389|x390)+(x391!=x392));

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = INT32_MIN;
	int16_t x394 = 1;
	int64_t x396 = -1LL;
	volatile int32_t t97 = -275257;

    t97 = ((x393|x394)+(x395!=x396));

    if (t97 != -2147483646) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MIN;
	volatile int8_t x398 = 23;
	uint64_t x400 = 4323680163867LLU;
	static int32_t t98 = 55;

    t98 = ((x397|x398)+(x399!=x400));

    if (t98 != -104) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x403 = INT32_MAX;
	int32_t x404 = -1;
	static volatile int64_t t99 = -74936LL;

    t99 = ((x401|x402)+(x403!=x404));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	int64_t x408 = INT64_MIN;
	static volatile uint64_t t100 = 2978857246170271LLU;

    t100 = ((x405|x406)+(x407!=x408));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x410 = 1138753188U;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = UINT8_MAX;
	volatile uint32_t t101 = 1393U;

    t101 = ((x409|x410)+(x411!=x412));

    if (t101 != 3286236837U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x414 = 4U;
	int64_t x415 = -1LL;
	int64_t t102 = 211LL;

    t102 = ((x413|x414)+(x415!=x416));

    if (t102 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;

    t103 = ((x421|x422)+(x423!=x424));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = INT64_MAX;
	uint64_t x428 = 130137427617994LLU;
	int32_t t104 = 26926;

    t104 = ((x425|x426)+(x427!=x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x429 = UINT16_MAX;
	static volatile int64_t x430 = 6LL;
	static int32_t x431 = INT32_MAX;
	static int64_t t105 = -1LL;

    t105 = ((x429|x430)+(x431!=x432));

    if (t105 != 65536LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x433 = UINT16_MAX;
	int8_t x434 = -1;
	uint32_t x435 = 241664U;
	static int8_t x436 = INT8_MAX;
	int32_t t106 = 4805723;

    t106 = ((x433|x434)+(x435!=x436));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = UINT32_MAX;
	uint8_t x438 = 17U;
	int32_t x440 = -1;
	volatile uint32_t t107 = 106U;

    t107 = ((x437|x438)+(x439!=x440));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x441 = 35303081U;
	uint16_t x442 = 22103U;
	volatile uint8_t x443 = 47U;
	uint32_t t108 = 153816225U;

    t108 = ((x441|x442)+(x443!=x444));

    if (t108 != 35323648U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x445 = UINT8_MAX;
	int8_t x446 = INT8_MIN;
	static uint8_t x447 = 35U;
	int32_t x448 = -115127;
	int32_t t109 = 44382;

    t109 = ((x445|x446)+(x447!=x448));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = 1557709;
	uint64_t x451 = 4117324996883206LLU;
	volatile int32_t x452 = -1;
	int32_t t110 = 204;

    t110 = ((x449|x450)+(x451!=x452));

    if (t110 != -15154) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	int64_t x455 = -1LL;
	volatile int32_t x456 = INT32_MAX;
	static volatile int64_t t111 = -1LL;

    t111 = ((x453|x454)+(x455!=x456));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x458 = 1;
	static int16_t x459 = INT16_MIN;
	int32_t x460 = -3369;
	uint32_t t112 = 55414U;

    t112 = ((x457|x458)+(x459!=x460));

    if (t112 != 66744U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x461 = -160;
	uint32_t x463 = 18934909U;
	int32_t t113 = 1110;

    t113 = ((x461|x462)+(x463!=x464));

    if (t113 != -159) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = 777965015481376710LL;
	volatile int64_t x467 = INT64_MAX;
	int8_t x468 = -1;

    t114 = ((x465|x466)+(x467!=x468));

    if (t114 != 777965015481384960LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = -1;
	static uint32_t x470 = 904U;
	int16_t x471 = -99;
	static int64_t x472 = -173223265547678LL;
	static volatile uint32_t t115 = 618021U;

    t115 = ((x469|x470)+(x471!=x472));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x473 = 6U;
	uint32_t x474 = UINT32_MAX;
	int32_t x475 = -866;
	static volatile uint32_t t116 = 6U;

    t116 = ((x473|x474)+(x475!=x476));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x477 = -1;
	int16_t x478 = 410;
	static int64_t x480 = INT64_MAX;
	int32_t t117 = 609007832;

    t117 = ((x477|x478)+(x479!=x480));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x486 = INT16_MIN;
	uint8_t x487 = 10U;
	uint64_t x488 = UINT64_MAX;

    t118 = ((x485|x486)+(x487!=x488));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x489 = 166U;
	int8_t x490 = 39;
	int8_t x491 = 3;
	uint8_t x492 = 101U;
	static int32_t t119 = -89475113;

    t119 = ((x489|x490)+(x491!=x492));

    if (t119 != 168) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x494 = INT8_MAX;
	int8_t x495 = -4;
	int64_t x496 = 96997005LL;

    t120 = ((x493|x494)+(x495!=x496));

    if (t120 != -2147483520) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x497 = 742813U;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = INT16_MIN;
	uint8_t x500 = 62U;
	uint32_t t121 = 6411U;

    t121 = ((x497|x498)+(x499!=x500));

    if (t121 != 786432U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x503 = -4666480;
	int64_t x504 = INT64_MIN;

    t122 = ((x501|x502)+(x503!=x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x508 = 74U;
	volatile int32_t t123 = 3413;

    t123 = ((x505|x506)+(x507!=x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x509 = -1;
	volatile int32_t x510 = 2;
	volatile int8_t x511 = INT8_MAX;
	volatile int32_t t124 = 294473;

    t124 = ((x509|x510)+(x511!=x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x513 = -1148;
	int64_t x514 = INT64_MIN;
	int16_t x515 = 504;
	uint64_t x516 = 24005840120782647LLU;

    t125 = ((x513|x514)+(x515!=x516));

    if (t125 != -1147LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x517 = 318271751688866LLU;
	static uint64_t x518 = 12428446940844383LLU;
	uint16_t x519 = UINT16_MAX;
	int8_t x520 = -1;
	static volatile uint64_t t126 = 46711508555LLU;

    t126 = ((x517|x518)+(x519!=x520));

    if (t126 != 12710351996441600LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x521 = UINT64_MAX;
	static int32_t x522 = 253642;
	int16_t x523 = -1;
	uint8_t x524 = 6U;
	volatile uint64_t t127 = 4979225087684LLU;

    t127 = ((x521|x522)+(x523!=x524));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x525 = -71285;
	int8_t x527 = INT8_MIN;
	int64_t t128 = 1012321LL;

    t128 = ((x525|x526)+(x527!=x528));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x529 = -105351030431LL;
	int8_t x530 = -53;
	int64_t x531 = INT64_MIN;
	int8_t x532 = 1;
	int64_t t129 = 397606LL;

    t129 = ((x529|x530)+(x531!=x532));

    if (t129 != -20LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = -1;
	volatile int32_t x535 = INT32_MIN;
	volatile int8_t x536 = 14;
	static uint32_t t130 = 237U;

    t130 = ((x533|x534)+(x535!=x536));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x537 = -1LL;
	static int16_t x540 = -1;
	static int64_t t131 = 563258867641525789LL;

    t131 = ((x537|x538)+(x539!=x540));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -1LL;
	int32_t x543 = -81;
	static volatile uint64_t x544 = UINT64_MAX;
	int64_t t132 = -2469476714423110LL;

    t132 = ((x541|x542)+(x543!=x544));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x545 = 0U;
	int32_t x546 = 5;
	int64_t x548 = -1LL;
	static volatile uint32_t t133 = 126686U;

    t133 = ((x545|x546)+(x547!=x548));

    if (t133 != 6U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x549 = UINT64_MAX;
	int16_t x550 = INT16_MAX;
	int16_t x552 = -1;
	volatile uint64_t t134 = 28160LLU;

    t134 = ((x549|x550)+(x551!=x552));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x553 = -1;
	volatile uint32_t x554 = UINT32_MAX;
	volatile int64_t x556 = INT64_MIN;
	static uint32_t t135 = 11260U;

    t135 = ((x553|x554)+(x555!=x556));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x558 = -5618719393LL;
	uint64_t x559 = 8679912508818424808LLU;
	int64_t x560 = -1LL;
	static volatile int64_t t136 = 1271384399240497028LL;

    t136 = ((x557|x558)+(x559!=x560));

    if (t136 != -2688LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x561 = 0U;
	static uint16_t x562 = 11378U;
	volatile uint32_t x563 = UINT32_MAX;
	int32_t t137 = 43081387;

    t137 = ((x561|x562)+(x563!=x564));

    if (t137 != 11379) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x565 = 7LLU;
	int16_t x566 = INT16_MAX;
	int32_t x568 = -5402;

    t138 = ((x565|x566)+(x567!=x568));

    if (t138 != 32768LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x569 = 13490;
	int32_t x570 = INT32_MIN;
	int32_t x571 = 2305895;
	int64_t x572 = -10648948251425LL;
	volatile int32_t t139 = 0;

    t139 = ((x569|x570)+(x571!=x572));

    if (t139 != -2147470157) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x574 = -1;
	int64_t x575 = INT64_MIN;
	uint32_t x576 = 6950830U;

    t140 = ((x573|x574)+(x575!=x576));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = -1;
	uint32_t x578 = 0U;
	volatile uint8_t x580 = 17U;
	volatile uint32_t t141 = 1U;

    t141 = ((x577|x578)+(x579!=x580));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x583 = UINT8_MAX;
	static volatile int64_t t142 = 1LL;

    t142 = ((x581|x582)+(x583!=x584));

    if (t142 != 7727779773627615LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x585 = INT32_MAX;
	int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	uint8_t x588 = 10U;
	int64_t t143 = -1119147692LL;

    t143 = ((x585|x586)+(x587!=x588));

    if (t143 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x589 = 46U;
	int16_t x590 = INT16_MAX;
	int32_t x592 = 859;
	int32_t t144 = 3;

    t144 = ((x589|x590)+(x591!=x592));

    if (t144 != 32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = -1;
	int32_t x594 = INT32_MIN;
	static volatile int8_t x595 = -1;
	uint32_t x596 = UINT32_MAX;
	int32_t t145 = 0;

    t145 = ((x593|x594)+(x595!=x596));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x598 = -1LL;
	int64_t x599 = 929050527679672LL;
	static volatile int32_t x600 = INT32_MIN;
	volatile int64_t t146 = -9LL;

    t146 = ((x597|x598)+(x599!=x600));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x601 = UINT16_MAX;
	int16_t x602 = INT16_MAX;
	int8_t x603 = INT8_MAX;
	int64_t x604 = -1LL;
	static volatile int32_t t147 = 139546;

    t147 = ((x601|x602)+(x603!=x604));

    if (t147 != 65536) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x606 = 34U;
	uint16_t x607 = 10292U;
	int16_t x608 = 1;
	uint32_t t148 = 5583U;

    t148 = ((x605|x606)+(x607!=x608));

    if (t148 != 4294934563U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x609 = -1LL;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MAX;
	int64_t t149 = 7158265564209LL;

    t149 = ((x609|x610)+(x611!=x612));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x614 = 122664110U;
	uint8_t x615 = 1U;
	volatile uint32_t x616 = UINT32_MAX;

    t150 = ((x613|x614)+(x615!=x616));

    if (t150 != 122664112U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = 714264821;
	int32_t x618 = -751410;
	int16_t x620 = INT16_MIN;
	static volatile int32_t t151 = 2368;

    t151 = ((x617|x618)+(x619!=x620));

    if (t151 != -599808) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x621 = 6137016LLU;
	volatile uint64_t t152 = 1LLU;

    t152 = ((x621|x622)+(x623!=x624));

    if (t152 != 6139069LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x626 = INT32_MAX;
	volatile int32_t x627 = 21;
	static int64_t x628 = INT64_MIN;

    t153 = ((x625|x626)+(x627!=x628));

    if (t153 != 4613703671656480768LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x630 = INT8_MIN;
	int32_t x631 = INT32_MIN;
	volatile uint8_t x632 = 105U;

    t154 = ((x629|x630)+(x631!=x632));

    if (t154 != -95LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x633 = INT16_MAX;
	static int64_t x634 = -1LL;
	uint64_t x635 = 33288686LLU;
	int8_t x636 = 6;
	volatile int64_t t155 = 2LL;

    t155 = ((x633|x634)+(x635!=x636));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x641 = UINT32_MAX;
	int64_t x643 = INT64_MIN;
	int8_t x644 = -1;
	static uint32_t t156 = 1534548397U;

    t156 = ((x641|x642)+(x643!=x644));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = UINT64_MAX;
	uint8_t x646 = UINT8_MAX;
	int8_t x647 = -52;
	uint8_t x648 = 6U;
	volatile uint64_t t157 = 27890988416LLU;

    t157 = ((x645|x646)+(x647!=x648));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x650 = -264408896399LL;
	static int32_t x651 = -1;
	static volatile int8_t x652 = INT8_MIN;

    t158 = ((x649|x650)+(x651!=x652));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = -4701884LL;
	int16_t x654 = -1;
	int8_t x655 = INT8_MAX;
	int16_t x656 = INT16_MIN;
	volatile int64_t t159 = 1LL;

    t159 = ((x653|x654)+(x655!=x656));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	static uint64_t x658 = 8235366685989260789LLU;
	int16_t x659 = INT16_MAX;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t160 = 219687LLU;

    t160 = ((x657|x658)+(x659!=x660));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x661 = INT32_MAX;
	volatile uint64_t x662 = 3LLU;
	int64_t x664 = INT64_MIN;
	static uint64_t t161 = 12652859277LLU;

    t161 = ((x661|x662)+(x663!=x664));

    if (t161 != 2147483648LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = INT64_MIN;
	volatile uint16_t x670 = UINT16_MAX;
	volatile uint16_t x671 = UINT16_MAX;
	static volatile int64_t t162 = 261585235403174730LL;

    t162 = ((x669|x670)+(x671!=x672));

    if (t162 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MIN;
	volatile int32_t x676 = -16207;
	static volatile uint32_t t163 = 108U;

    t163 = ((x673|x674)+(x675!=x676));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x677 = INT8_MAX;
	uint32_t x678 = UINT32_MAX;
	static int16_t x679 = INT16_MIN;
	volatile uint32_t t164 = 6U;

    t164 = ((x677|x678)+(x679!=x680));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = INT64_MAX;
	int64_t x682 = -1LL;
	int64_t x684 = -91606384346073LL;

    t165 = ((x681|x682)+(x683!=x684));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x685 = -1;
	static uint64_t x686 = UINT64_MAX;
	int64_t x687 = -1LL;
	static int16_t x688 = -1;
	uint64_t t166 = UINT64_MAX;

    t166 = ((x685|x686)+(x687!=x688));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x689 = -10;
	uint16_t x690 = UINT16_MAX;
	uint16_t x691 = 5U;
	uint64_t x692 = 45LLU;
	volatile int32_t t167 = -835;

    t167 = ((x689|x690)+(x691!=x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = 0;
	uint32_t x694 = 471521977U;
	int64_t x695 = 1566107911046407LL;
	int32_t x696 = -1;
	uint32_t t168 = 3U;

    t168 = ((x693|x694)+(x695!=x696));

    if (t168 != 471521978U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x697 = 3U;
	int32_t x698 = INT32_MIN;
	int64_t x700 = 6269094150LL;

    t169 = ((x697|x698)+(x699!=x700));

    if (t169 != 2147483652U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 1328215U;
	volatile int32_t x703 = -1;
	int64_t x704 = -1LL;
	volatile uint32_t t170 = 3987453U;

    t170 = ((x701|x702)+(x703!=x704));

    if (t170 != 1328383U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x705 = 217;
	uint8_t x706 = 114U;
	uint16_t x708 = 115U;
	static int32_t t171 = 60;

    t171 = ((x705|x706)+(x707!=x708));

    if (t171 != 252) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x711 = 1U;
	static volatile uint64_t x712 = UINT64_MAX;
	volatile uint64_t t172 = 1LLU;

    t172 = ((x709|x710)+(x711!=x712));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x713 = INT8_MIN;
	volatile uint16_t x715 = 20729U;
	static int64_t x716 = INT64_MIN;
	int32_t t173 = -826440074;

    t173 = ((x713|x714)+(x715!=x716));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x717 = 74U;
	int32_t x718 = 10;
	int16_t x720 = INT16_MIN;
	int32_t t174 = -1;

    t174 = ((x717|x718)+(x719!=x720));

    if (t174 != 75) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = -1;
	volatile uint64_t x722 = 25109LLU;
	int8_t x723 = -59;
	uint8_t x724 = 1U;
	static volatile uint64_t t175 = 3LLU;

    t175 = ((x721|x722)+(x723!=x724));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x725 = INT16_MAX;
	int64_t x727 = INT64_MAX;
	int64_t x728 = -1778561LL;
	static volatile int32_t t176 = 110;

    t176 = ((x725|x726)+(x727!=x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = INT32_MAX;
	static int64_t x730 = -1071124010537LL;
	int16_t x731 = 9;
	int64_t x732 = -1LL;
	int64_t t177 = 14LL;

    t177 = ((x729|x730)+(x731!=x732));

    if (t177 != -1069446856704LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = -3LL;
	static volatile int64_t x735 = INT64_MIN;
	uint64_t x736 = 124178309511LLU;
	static int64_t t178 = -1LL;

    t178 = ((x733|x734)+(x735!=x736));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x737 = 437;
	int32_t x738 = -4;
	int64_t x740 = -1LL;
	volatile int32_t t179 = 1498458;

    t179 = ((x737|x738)+(x739!=x740));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t t180 = -736909;

    t180 = ((x741|x742)+(x743!=x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x745 = 274931239676695LL;
	uint32_t x746 = 95U;
	static int8_t x747 = -1;
	uint16_t x748 = 8U;
	int64_t t181 = -586596699LL;

    t181 = ((x745|x746)+(x747!=x748));

    if (t181 != 274931239676768LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = INT16_MIN;
	static uint32_t x750 = UINT32_MAX;
	int64_t x751 = INT64_MIN;
	volatile int32_t x752 = 1;
	volatile uint32_t t182 = 770U;

    t182 = ((x749|x750)+(x751!=x752));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MAX;
	uint8_t x755 = 0U;
	static int32_t x756 = INT32_MIN;
	int64_t t183 = 16979845081218LL;

    t183 = ((x753|x754)+(x755!=x756));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x757 = INT64_MIN;
	uint8_t x758 = UINT8_MAX;
	int8_t x759 = INT8_MIN;
	static int32_t x760 = 1827933;
	volatile int64_t t184 = 2353980889LL;

    t184 = ((x757|x758)+(x759!=x760));

    if (t184 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x761 = 16;
	volatile int64_t x762 = -24863672LL;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MAX;
	int64_t t185 = 3LL;

    t185 = ((x761|x762)+(x763!=x764));

    if (t185 != -24863655LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x765 = 1U;
	int16_t x766 = -3;
	uint64_t x767 = UINT64_MAX;
	int32_t t186 = -2904;

    t186 = ((x765|x766)+(x767!=x768));

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = -51;
	int32_t x771 = 0;
	uint16_t x772 = 140U;

    t187 = ((x769|x770)+(x771!=x772));

    if (t187 != -50) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x775 = -3405LL;
	static int32_t t188 = -16649;

    t188 = ((x773|x774)+(x775!=x776));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = 6;
	int16_t x778 = INT16_MAX;
	static int16_t x779 = INT16_MIN;
	int8_t x780 = 4;
	volatile int32_t t189 = -1;

    t189 = ((x777|x778)+(x779!=x780));

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x781 = 119U;
	static uint8_t x782 = 0U;
	int8_t x783 = INT8_MAX;
	volatile int32_t t190 = 760373;

    t190 = ((x781|x782)+(x783!=x784));

    if (t190 != 120) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x786 = -1LL;
	static int32_t x787 = 230539;
	volatile int16_t x788 = -1;
	volatile int64_t t191 = 32628403617LL;

    t191 = ((x785|x786)+(x787!=x788));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MIN;
	static uint32_t x791 = 702639U;
	volatile int32_t t192 = 0;

    t192 = ((x789|x790)+(x791!=x792));

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x794 = INT64_MIN;
	int32_t x795 = 471;
	int8_t x796 = -19;
	volatile int64_t t193 = -2111351LL;

    t193 = ((x793|x794)+(x795!=x796));

    if (t193 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x799 = 653700;
	int32_t x800 = 1;
	int64_t t194 = -144119318321LL;

    t194 = ((x797|x798)+(x799!=x800));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x801 = 5U;
	int16_t x802 = -1;
	int16_t x803 = INT16_MAX;
	uint64_t x804 = 27382LLU;
	static volatile int32_t t195 = -666;

    t195 = ((x801|x802)+(x803!=x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x805 = 1;
	uint64_t x806 = UINT64_MAX;
	int32_t x808 = 614737;
	volatile uint64_t t196 = 31295333063201477LLU;

    t196 = ((x805|x806)+(x807!=x808));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = INT64_MAX;
	int64_t x810 = -1LL;
	static uint32_t x811 = 65U;

    t197 = ((x809|x810)+(x811!=x812));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x813 = INT16_MAX;
	int8_t x814 = -1;
	uint16_t x816 = 1U;
	int32_t t198 = 3513049;

    t198 = ((x813|x814)+(x815!=x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x817 = 6U;
	volatile int32_t x818 = -58683255;
	int16_t x819 = INT16_MIN;
	static volatile int16_t x820 = INT16_MAX;

    t199 = ((x817|x818)+(x819!=x820));

    if (t199 != -58683248) { NG(); } else { ; }
	
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

