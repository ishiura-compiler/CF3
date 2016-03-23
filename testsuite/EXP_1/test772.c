
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

volatile uint8_t x1 = UINT8_MAX;
static int16_t x3 = -1;
uint64_t x4 = UINT64_MAX;
static uint8_t x5 = UINT8_MAX;
static int64_t x10 = INT64_MIN;
int16_t x16 = -908;
int32_t x34 = 1893339;
uint8_t x35 = UINT8_MAX;
volatile int16_t x40 = INT16_MIN;
int64_t x47 = INT64_MAX;
uint8_t x51 = 7U;
int16_t x56 = INT16_MIN;
int8_t x79 = -1;
uint64_t t17 = 415328374LLU;
int16_t x84 = INT16_MAX;
int8_t x92 = INT8_MAX;
int16_t x103 = INT16_MIN;
volatile int8_t x107 = 5;
int8_t x109 = 1;
uint16_t x110 = UINT16_MAX;
volatile uint16_t x112 = 32100U;
uint32_t x114 = 55840887U;
int64_t x122 = -793503985826247LL;
int64_t t26 = -1292291674LL;
int32_t x138 = INT32_MAX;
volatile uint32_t t31 = 160802U;
static int8_t x154 = INT8_MIN;
static int64_t x157 = 208803448LL;
volatile uint16_t x160 = 8103U;
uint32_t x174 = UINT32_MAX;
int64_t x175 = -1LL;
uint64_t t36 = 824668322689724649LLU;
int32_t x179 = INT32_MIN;
static int32_t x180 = -1;
static uint16_t x201 = UINT16_MAX;
int16_t x204 = -9;
uint32_t x212 = 24U;
int64_t x220 = INT64_MIN;
uint64_t t44 = 10827611342LLU;
volatile uint16_t x222 = 1582U;
int8_t x223 = -1;
static int8_t x228 = 5;
uint8_t x235 = 1U;
static int16_t x244 = 0;
int32_t t50 = -30924;
int32_t x253 = 40327;
volatile int64_t t53 = -391912875166347579LL;
static int64_t t54 = -26221731LL;
int16_t x269 = -1;
uint32_t x270 = 327791660U;
static volatile uint64_t t55 = 4516676694691LLU;
int8_t x278 = 1;
int8_t x280 = -45;
int16_t x285 = INT16_MIN;
int16_t x294 = INT16_MIN;
static uint64_t t59 = 189070080216109LLU;
volatile int64_t t60 = 221LL;
static volatile int64_t x305 = -2522622LL;
int8_t x311 = 18;
volatile uint64_t t64 = 150064LLU;
uint16_t x322 = UINT16_MAX;
static volatile int8_t x324 = INT8_MIN;
uint64_t t66 = 5538588442767547860LLU;
static uint16_t x329 = 1U;
volatile int8_t x331 = INT8_MAX;
int64_t t68 = 53050322LL;
int16_t x339 = -45;
int64_t x343 = INT64_MAX;
uint8_t x349 = 6U;
uint32_t x351 = 16601240U;
volatile uint32_t t72 = 495414U;
uint16_t x353 = UINT16_MAX;
uint16_t x354 = 834U;
volatile int64_t t74 = -73970846581755451LL;
int64_t x361 = INT64_MIN;
int32_t x367 = 144;
volatile int32_t t76 = 31122023;
volatile uint32_t x370 = UINT32_MAX;
int64_t t77 = 426LL;
static volatile int64_t x392 = -1LL;
int64_t x399 = INT64_MIN;
int16_t x402 = -1;
uint8_t x410 = 53U;
static int16_t x411 = INT16_MIN;
volatile uint64_t t86 = 3491384893LLU;
static int32_t x424 = INT32_MAX;
uint8_t x429 = 58U;
static uint64_t x432 = 3371LLU;
volatile int32_t t92 = 6;
volatile int64_t t95 = -21LL;
int64_t x460 = 1397846LL;
volatile uint64_t t97 = 3040092989LLU;
uint32_t x464 = 1026U;
static volatile int32_t x471 = -1;
int64_t t100 = 30282673268068548LL;
int64_t x476 = INT64_MIN;
uint8_t x478 = UINT8_MAX;
uint32_t t102 = 12U;
int64_t t104 = -425LL;
int8_t x490 = INT8_MAX;
static uint64_t x507 = 200222083LLU;
static volatile int32_t t111 = 10802;
volatile uint8_t x532 = UINT8_MAX;
uint16_t x533 = 699U;
int16_t x539 = 2101;
int64_t x544 = INT64_MIN;
int32_t x545 = INT32_MIN;
volatile int32_t x546 = INT32_MIN;
static int64_t x548 = -1LL;
int8_t x560 = INT8_MAX;
int32_t x561 = 0;
volatile uint32_t x570 = UINT32_MAX;
int8_t x575 = 15;
volatile int64_t t122 = 2755935289690LL;
uint64_t x577 = 126LLU;
int16_t x579 = -9990;
static int64_t x580 = INT64_MAX;
volatile int64_t t127 = -34825473365697LL;
volatile uint64_t x612 = 2054985588046793738LLU;
volatile uint64_t t130 = 1229439728357LLU;
uint64_t x620 = UINT64_MAX;
uint64_t x624 = UINT64_MAX;
uint64_t x647 = 272594LLU;
uint32_t x652 = 101681691U;
int32_t x653 = INT32_MIN;
static volatile uint32_t x654 = 10669U;
int64_t x656 = 161LL;
volatile uint64_t x658 = 519466599048LLU;
int64_t x672 = INT64_MIN;
volatile uint64_t t144 = 1LLU;
volatile uint32_t x681 = 20001636U;
uint16_t x683 = 7U;
uint32_t t146 = 62032U;
volatile uint32_t x690 = UINT32_MAX;
uint32_t t147 = 811U;
int64_t x694 = -1LL;
int32_t x695 = -21;
static volatile int16_t x698 = 13370;
volatile int8_t x700 = -2;
uint64_t t151 = UINT64_MAX;
uint8_t x715 = 43U;
int32_t x716 = INT32_MAX;
volatile uint8_t x724 = 1U;
uint16_t x726 = UINT16_MAX;
static int16_t x730 = INT16_MIN;
volatile uint32_t t156 = 485U;
uint16_t x735 = 18U;
int8_t x736 = -1;
int32_t x737 = INT32_MIN;
uint32_t t158 = 29006667U;
int32_t x746 = -1;
int32_t x749 = INT32_MAX;
int16_t x754 = INT16_MIN;
uint64_t x763 = 997651057082LLU;
uint64_t x767 = UINT64_MAX;
int8_t x774 = INT8_MIN;
int8_t x777 = INT8_MAX;
volatile int32_t x783 = -62;
uint8_t x784 = UINT8_MAX;
volatile uint64_t t168 = 11LLU;
static uint32_t t169 = 33844348U;
uint8_t x801 = 1U;
volatile int16_t x825 = INT16_MIN;
int64_t x831 = -17398210LL;
static int64_t t178 = -9221836385168165LL;
int32_t x848 = -1;
int8_t x853 = -1;
volatile uint64_t t181 = 55767453307433138LLU;
uint32_t x861 = UINT32_MAX;
int64_t x870 = -1LL;
int16_t x874 = 1388;
int16_t x893 = INT16_MIN;
static volatile int32_t x902 = -1;
volatile uint32_t x904 = 1765779116U;
static volatile uint32_t t193 = 534890310U;
uint8_t x906 = UINT8_MAX;
uint64_t x908 = UINT64_MAX;
volatile int64_t x912 = INT64_MIN;
int8_t x913 = -1;
static uint64_t x915 = 4052465316488896LLU;
int64_t x925 = INT64_MIN;
int16_t x928 = INT16_MAX;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint64_t t0 = 92335906029312LLU;

    t0 = (((x1/x2)^x3)-x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	int16_t x7 = 66;
	volatile int32_t x8 = 61039;
	volatile int64_t t1 = 78464342991345722LL;

    t1 = (((x5/x6)^x7)-x8);

    if (t1 != -61228LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int64_t x11 = 11617LL;
	int16_t x12 = 4;
	volatile uint64_t t2 = 2148981944698412LLU;

    t2 = (((x9/x10)^x11)-x12);

    if (t2 != 11612LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -2245807;
	static int8_t x14 = 7;
	uint8_t x15 = UINT8_MAX;
	int32_t t3 = 32203886;

    t3 = (((x13/x14)^x15)-x16);

    if (t3 != -320056) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int32_t x18 = -549097;
	volatile int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -72879LL;

    t4 = (((x17/x18)^x19)-x20);

    if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = -11;
	volatile int64_t x26 = -417372LL;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	volatile int64_t t5 = 254890784053161LL;

    t5 = (((x25/x26)^x27)-x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	int64_t x30 = 108LL;
	int8_t x31 = -1;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t6 = -49768LL;

    t6 = (((x29/x30)^x31)-x32);

    if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 268022541LLU;
	volatile int32_t x36 = -1;
	uint64_t t7 = 26711572904LLU;

    t7 = (((x33/x34)^x35)-x36);

    if (t7 != 115LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	uint64_t x38 = 102771LLU;
	static uint8_t x39 = 54U;
	volatile uint64_t t8 = 459LLU;

    t8 = (((x37/x38)^x39)-x40);

    if (t8 != 179493671143402LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = -14721;

    t9 = (((x41/x42)^x43)-x44);

    if (t9 != -65663) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 19U;
	uint64_t x46 = 410622865207LLU;
	uint64_t x48 = 809528LLU;
	volatile uint64_t t10 = 19296881330763LLU;

    t10 = (((x45/x46)^x47)-x48);

    if (t10 != 9223372036853966279LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x49 = -1;
	int16_t x50 = 1;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 11288870;

    t11 = (((x49/x50)^x51)-x52);

    if (t11 != 120) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 0U;
	int16_t x54 = 1;
	static int8_t x55 = INT8_MIN;
	int32_t t12 = 623288;

    t12 = (((x53/x54)^x55)-x56);

    if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x57 = -1;
	int64_t x58 = 22521628981919LL;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	volatile int64_t t13 = -47123LL;

    t13 = (((x57/x58)^x59)-x60);

    if (t13 != 32640LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MAX;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = 3U;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = -55;

    t14 = (((x61/x62)^x63)-x64);

    if (t14 != 131) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 3284;
	static int8_t x66 = INT8_MAX;
	static int8_t x67 = 3;
	uint64_t x68 = 4063587LLU;
	uint64_t t15 = 23393882820687LLU;

    t15 = (((x65/x66)^x67)-x68);

    if (t15 != 18446744073705488055LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x69 = 16U;
	uint16_t x70 = UINT16_MAX;
	static int64_t x71 = -1LL;
	uint16_t x72 = UINT16_MAX;
	int64_t t16 = 0LL;

    t16 = (((x69/x70)^x71)-x72);

    if (t16 != -65536LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 172773LLU;
	uint16_t x78 = 19U;
	volatile uint32_t x80 = 36U;

    t17 = (((x77/x78)^x79)-x80);

    if (t17 != 18446744073709542486LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x81 = UINT8_MAX;
	int64_t x82 = -338LL;
	volatile int16_t x83 = 5946;
	volatile int64_t t18 = 1555507760461930107LL;

    t18 = (((x81/x82)^x83)-x84);

    if (t18 != -26821LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = UINT32_MAX;
	volatile int32_t x90 = 2330;
	uint8_t x91 = 5U;
	volatile uint32_t t19 = 51U;

    t19 = (((x89/x90)^x91)-x92);

    if (t19 != 1843201U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MIN;
	volatile int32_t x99 = INT32_MIN;
	int64_t x100 = 64LL;
	volatile int64_t t20 = 190914879614394671LL;

    t20 = (((x97/x98)^x99)-x100);

    if (t20 != -2147483712LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x101 = 3U;
	static int16_t x102 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t21 = -4822585;

    t21 = (((x101/x102)^x103)-x104);

    if (t21 != -32640) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = -12647;
	static int64_t x106 = INT64_MIN;
	int16_t x108 = -399;
	volatile int64_t t22 = 22821301418LL;

    t22 = (((x105/x106)^x107)-x108);

    if (t22 != 404LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x111 = INT16_MIN;
	static volatile int32_t t23 = 43;

    t23 = (((x109/x110)^x111)-x112);

    if (t23 != -64868) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MAX;
	uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	static volatile uint32_t t24 = 47U;

    t24 = (((x113/x114)^x115)-x116);

    if (t24 != 128U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = -1;
	volatile uint16_t x118 = 33U;
	uint32_t x119 = 1835271U;
	volatile int16_t x120 = INT16_MAX;
	uint32_t t25 = 21U;

    t25 = (((x117/x118)^x119)-x120);

    if (t25 != 1802504U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = 61823485;
	int16_t x123 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;

    t26 = (((x121/x122)^x123)-x124);

    if (t26 != 32512LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	int16_t x128 = 59;
	volatile int32_t t27 = 1;

    t27 = (((x125/x126)^x127)-x128);

    if (t27 != 704) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = 2563U;
	uint64_t x130 = 312000LLU;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 4U;
	static uint64_t t28 = 546575LLU;

    t28 = (((x129/x130)^x131)-x132);

    if (t28 != 18446744073709518844LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = 0;
	static int64_t x134 = 826975525273LL;
	int8_t x135 = 14;
	int32_t x136 = INT32_MAX;
	volatile int64_t t29 = 50464LL;

    t29 = (((x133/x134)^x135)-x136);

    if (t29 != -2147483633LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x137 = 10446LLU;
	int8_t x139 = -1;
	uint32_t x140 = 1437182U;
	uint64_t t30 = 1352814LLU;

    t30 = (((x137/x138)^x139)-x140);

    if (t30 != 18446744073708114433LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MAX;
	int32_t x143 = -974111107;
	static int8_t x144 = 37;

    t31 = (((x141/x142)^x143)-x144);

    if (t31 != 3354670664U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x153 = -748180825;
	int16_t x155 = -1;
	int8_t x156 = 46;
	volatile int32_t t32 = 7264;

    t32 = (((x153/x154)^x155)-x156);

    if (t32 != -5845209) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x158 = INT16_MAX;
	int8_t x159 = -1;
	volatile int64_t t33 = -9785LL;

    t33 = (((x157/x158)^x159)-x160);

    if (t33 != -14476LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x161 = 5LL;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = -1LL;
	int16_t x164 = -1;
	static uint64_t t34 = 19662099LLU;

    t34 = (((x161/x162)^x163)-x164);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x165 = UINT8_MAX;
	static volatile int64_t x166 = INT64_MIN;
	volatile uint16_t x167 = 75U;
	uint8_t x168 = 7U;
	volatile int64_t t35 = 288658LL;

    t35 = (((x165/x166)^x167)-x168);

    if (t35 != 68LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x173 = INT64_MIN;
	uint64_t x176 = 33867490087532LLU;

    t36 = (((x173/x174)^x175)-x176);

    if (t36 != 18446710208366947731LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x177 = 0U;
	static volatile uint64_t x178 = 281343133126556LLU;
	uint64_t t37 = 67570LLU;

    t37 = (((x177/x178)^x179)-x180);

    if (t37 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x181 = 0U;
	uint16_t x182 = 118U;
	static volatile uint8_t x183 = 27U;
	static volatile uint16_t x184 = 177U;
	int32_t t38 = -9974684;

    t38 = (((x181/x182)^x183)-x184);

    if (t38 != -150) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = -84;
	uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 26U;
	volatile int64_t t39 = 1602711657441510062LL;

    t39 = (((x185/x186)^x187)-x188);

    if (t39 != 109802048057810527LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x193 = UINT64_MAX;
	volatile int64_t x194 = INT64_MAX;
	uint64_t x195 = 105997LLU;
	volatile int64_t x196 = -420040645LL;
	volatile uint64_t t40 = 84264850879372LLU;

    t40 = (((x193/x194)^x195)-x196);

    if (t40 != 420146644LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = INT16_MAX;
	uint64_t x198 = 27LLU;
	volatile int16_t x199 = INT16_MIN;
	volatile int16_t x200 = 1;
	static uint64_t t41 = 129615645742LLU;

    t41 = (((x197/x198)^x199)-x200);

    if (t41 != 18446744073709520060LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	static int64_t t42 = -4068397894000LL;

    t42 = (((x201/x202)^x203)-x204);

    if (t42 != -2147483639LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x209 = 571735856999570237LLU;
	uint32_t x210 = UINT32_MAX;
	static int64_t x211 = -1LL;
	static uint64_t t43 = 2866840778896870LLU;

    t43 = (((x209/x210)^x211)-x212);

    if (t43 != 18446744073576433964LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x217 = 6314286626LLU;
	int32_t x218 = 478311852;
	int64_t x219 = -1LL;

    t44 = (((x217/x218)^x219)-x220);

    if (t44 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x221 = 480163LLU;
	volatile int64_t x224 = -1252398662057LL;
	static uint64_t t45 = 56865990455243LLU;

    t45 = (((x221/x222)^x223)-x224);

    if (t45 != 1252398661753LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x225 = 9;
	volatile int32_t x226 = INT32_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	volatile int32_t t46 = 7757470;

    t46 = (((x225/x226)^x227)-x228);

    if (t46 != 250) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	int64_t x230 = -1LL;
	uint32_t x231 = UINT32_MAX;
	static int32_t x232 = INT32_MIN;
	int64_t t47 = -1656LL;

    t47 = (((x229/x230)^x231)-x232);

    if (t47 != 2147483646LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x233 = INT16_MIN;
	uint32_t x234 = 6697169U;
	static int16_t x236 = INT16_MAX;
	static volatile uint32_t t48 = 0U;

    t48 = (((x233/x234)^x235)-x236);

    if (t48 != 4294935169U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x241 = INT8_MAX;
	int8_t x242 = 2;
	int32_t x243 = INT32_MIN;
	static volatile int32_t t49 = -12;

    t49 = (((x241/x242)^x243)-x244);

    if (t49 != -2147483585) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x245 = UINT8_MAX;
	static int8_t x246 = INT8_MIN;
	int8_t x247 = 14;
	static uint16_t x248 = 1642U;

    t50 = (((x245/x246)^x247)-x248);

    if (t50 != -1657) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x249 = 11484721298LLU;
	int32_t x250 = INT32_MAX;
	static int8_t x251 = INT8_MIN;
	static uint8_t x252 = UINT8_MAX;
	volatile uint64_t t51 = 683928979LLU;

    t51 = (((x249/x250)^x251)-x252);

    if (t51 != 18446744073709551238LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x254 = -267403338;
	static volatile int32_t x255 = -1;
	int64_t x256 = INT64_MIN;
	int64_t t52 = INT64_MAX;

    t52 = (((x253/x254)^x255)-x256);

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = 257119U;
	int8_t x260 = INT8_MIN;

    t53 = (((x257/x258)^x259)-x260);

    if (t53 != 257247LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = 9725058LL;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = 1;

    t54 = (((x265/x266)^x267)-x268);

    if (t54 != -945667515441LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x271 = UINT64_MAX;
	int32_t x272 = -59088;

    t55 = (((x269/x270)^x271)-x272);

    if (t55 != 59074LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	static uint32_t x275 = 257U;
	volatile int16_t x276 = -1;
	uint32_t t56 = 0U;

    t56 = (((x273/x274)^x275)-x276);

    if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x277 = -12830;
	int32_t x279 = 117313918;
	int32_t t57 = -6464;

    t57 = (((x277/x278)^x279)-x280);

    if (t57 != -117318455) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x286 = 42573411099584529LLU;
	int16_t x287 = INT16_MIN;
	volatile int32_t x288 = INT32_MAX;
	uint64_t t58 = 12236497LLU;

    t58 = (((x285/x286)^x287)-x288);

    if (t58 != 18446744071562035634LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x293 = 944339202567714378LLU;
	static int64_t x295 = -94949LL;
	int32_t x296 = -1;

    t59 = (((x293/x294)^x295)-x296);

    if (t59 != 18446744073709456668LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MAX;
	int64_t x299 = -1LL;
	static uint8_t x300 = 50U;

    t60 = (((x297/x298)^x299)-x300);

    if (t60 != -51LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x301 = 10;
	static uint16_t x302 = UINT16_MAX;
	int8_t x303 = 0;
	static int32_t x304 = -1;
	int32_t t61 = 13;

    t61 = (((x301/x302)^x303)-x304);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = -1;
	static volatile int64_t t62 = -38LL;

    t62 = (((x305/x306)^x307)-x308);

    if (t62 != 9223372036854755946LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = -1;
	uint64_t x310 = 334123948024LLU;
	volatile int8_t x312 = -1;
	volatile uint64_t t63 = 94147LLU;

    t63 = (((x309/x310)^x311)-x312);

    if (t63 != 55209303LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = 536950LL;
	uint64_t x319 = 56213007LLU;
	int8_t x320 = 0;

    t64 = (((x317/x318)^x319)-x320);

    if (t64 != 56213007LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x321 = 35U;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t t65 = 713582045950LLU;

    t65 = (((x321/x322)^x323)-x324);

    if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = -1LL;
	static uint64_t x326 = UINT64_MAX;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = 4U;

    t66 = (((x325/x326)^x327)-x328);

    if (t66 != 250LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x330 = 1U;
	int32_t x332 = INT32_MIN;
	static volatile uint32_t t67 = 23233742U;

    t67 = (((x329/x330)^x331)-x332);

    if (t67 != 2147483774U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x333 = -469463065LL;
	int16_t x334 = -1;
	static uint32_t x335 = 153486134U;
	int32_t x336 = 4250;

    t68 = (((x333/x334)^x335)-x336);

    if (t68 != 316498581LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x337 = 1071;
	static volatile int32_t x338 = INT32_MAX;
	uint8_t x340 = 0U;
	int32_t t69 = -213711;

    t69 = (((x337/x338)^x339)-x340);

    if (t69 != -45) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x341 = 15LLU;
	int64_t x342 = -1LL;
	int32_t x344 = 89;
	static uint64_t t70 = 15961726293LLU;

    t70 = (((x341/x342)^x343)-x344);

    if (t70 != 9223372036854775718LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x345 = -103168853023965071LL;
	volatile uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MAX;
	int8_t x348 = 3;
	volatile int64_t t71 = -3414041117501624414LL;

    t71 = (((x345/x346)^x347)-x348);

    if (t71 != -1574255787311LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x350 = INT32_MAX;
	int32_t x352 = 3424900;

    t72 = (((x349/x350)^x351)-x352);

    if (t72 != 13176340U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x355 = INT8_MAX;
	uint16_t x356 = 0U;
	volatile int32_t t73 = -84947918;

    t73 = (((x353/x354)^x355)-x356);

    if (t73 != 49) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x357 = UINT16_MAX;
	int64_t x358 = INT64_MAX;
	int64_t x359 = -1517479816394083LL;
	int32_t x360 = INT32_MAX;

    t74 = (((x357/x358)^x359)-x360);

    if (t74 != -1517481963877730LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x362 = -33637257629821LL;
	volatile int32_t x363 = -47;
	volatile int16_t x364 = INT16_MIN;
	volatile int64_t t75 = 906191888307721LL;

    t75 = (((x361/x362)^x363)-x364);

    if (t75 != -241464LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x365 = INT16_MIN;
	static volatile int16_t x366 = 319;
	int16_t x368 = INT16_MIN;

    t76 = (((x365/x366)^x367)-x368);

    if (t76 != 32522) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x369 = INT32_MIN;
	static int64_t x371 = -1LL;
	int8_t x372 = INT8_MIN;

    t77 = (((x369/x370)^x371)-x372);

    if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x377 = 9U;
	volatile uint64_t x378 = 110033438113LLU;
	int8_t x379 = 7;
	volatile int16_t x380 = 2;
	volatile uint64_t t78 = 353046053467LLU;

    t78 = (((x377/x378)^x379)-x380);

    if (t78 != 5LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x381 = INT64_MIN;
	int16_t x382 = -712;
	static int8_t x383 = 8;
	uint16_t x384 = UINT16_MAX;
	static int64_t t79 = 61042692LL;

    t79 = (((x381/x382)^x383)-x384);

    if (t79 != 12954174209000169LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	static uint64_t x388 = 359926LLU;
	volatile uint64_t t80 = 7349300192LLU;

    t80 = (((x385/x386)^x387)-x388);

    if (t80 != 2147123721LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x389 = 12345LLU;
	uint64_t x390 = 1LLU;
	uint16_t x391 = 71U;
	volatile uint64_t t81 = 2197362868045LLU;

    t81 = (((x389/x390)^x391)-x392);

    if (t81 != 12415LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = -28;
	uint32_t x394 = 2U;
	static int32_t x395 = 18186;
	int64_t x396 = -246315443340316514LL;
	volatile int64_t t82 = -31127319878LL;

    t82 = (((x393/x394)^x395)-x396);

    if (t82 != 246315445487781978LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x397 = -1;
	int16_t x398 = INT16_MIN;
	static int16_t x400 = INT16_MIN;
	int64_t t83 = 1142102997LL;

    t83 = (((x397/x398)^x399)-x400);

    if (t83 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x401 = -204228;
	int32_t x403 = -1;
	static volatile int8_t x404 = 2;
	volatile int32_t t84 = 49599;

    t84 = (((x401/x402)^x403)-x404);

    if (t84 != -204231) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x405 = 3349U;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -1LL;
	static int64_t t85 = 63294053562LL;

    t85 = (((x405/x406)^x407)-x408);

    if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x409 = 0;
	uint64_t x412 = 62LLU;

    t86 = (((x409/x410)^x411)-x412);

    if (t86 != 18446744073709518786LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x413 = -1;
	int64_t x414 = INT64_MAX;
	int16_t x415 = INT16_MAX;
	static uint16_t x416 = UINT16_MAX;
	int64_t t87 = -66238172465772LL;

    t87 = (((x413/x414)^x415)-x416);

    if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x417 = 2155;
	volatile int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = 1177U;
	static int32_t t88 = 41;

    t88 = (((x417/x418)^x419)-x420);

    if (t88 != -1065) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x421 = INT8_MAX;
	static int64_t x422 = INT64_MIN;
	int64_t x423 = -1298945476LL;
	volatile int64_t t89 = 2LL;

    t89 = (((x421/x422)^x423)-x424);

    if (t89 != -3446429123LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MAX;
	static uint32_t x427 = UINT32_MAX;
	int32_t x428 = -1;
	volatile uint32_t t90 = 14288U;

    t90 = (((x425/x426)^x427)-x428);

    if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x430 = -1LL;
	volatile uint8_t x431 = 116U;
	volatile uint64_t t91 = 131860081LLU;

    t91 = (((x429/x430)^x431)-x432);

    if (t91 != 18446744073709548167LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x433 = 25;
	int8_t x434 = 22;
	static int8_t x435 = -53;
	int16_t x436 = INT16_MAX;

    t92 = (((x433/x434)^x435)-x436);

    if (t92 != -32821) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x437 = 81U;
	int16_t x438 = INT16_MAX;
	int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	volatile int32_t t93 = -618538893;

    t93 = (((x437/x438)^x439)-x440);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x441 = 40759U;
	static uint8_t x442 = UINT8_MAX;
	int32_t x443 = -188666;
	uint8_t x444 = 94U;
	volatile uint32_t t94 = 252U;

    t94 = (((x441/x442)^x443)-x444);

    if (t94 != 4294778683U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = -385915701756LL;
	int32_t x446 = 2;
	uint32_t x447 = 231481042U;
	volatile int64_t x448 = -1LL;

    t95 = (((x445/x446)^x447)-x448);

    if (t95 != -192751548975LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x449 = 0;
	int16_t x450 = -1;
	int8_t x451 = INT8_MAX;
	int64_t x452 = INT64_MAX;
	int64_t t96 = 151745LL;

    t96 = (((x449/x450)^x451)-x452);

    if (t96 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x457 = 1LLU;
	int32_t x458 = -2543989;
	static uint64_t x459 = 1LLU;

    t97 = (((x457/x458)^x459)-x460);

    if (t97 != 18446744073708153771LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x461 = UINT16_MAX;
	static int16_t x462 = INT16_MIN;
	uint16_t x463 = 755U;
	volatile uint32_t t98 = 2U;

    t98 = (((x461/x462)^x463)-x464);

    if (t98 != 4294965514U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x465 = -244;
	int32_t x466 = 60025;
	static uint16_t x467 = 11U;
	static uint16_t x468 = 8255U;
	static volatile int32_t t99 = 1425724;

    t99 = (((x465/x466)^x467)-x468);

    if (t99 != -8244) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x469 = INT64_MIN;
	int8_t x470 = 40;
	static int32_t x472 = -1;

    t100 = (((x469/x470)^x471)-x472);

    if (t100 != 230584300921369395LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x473 = 1243U;
	int8_t x474 = INT8_MAX;
	int8_t x475 = -8;
	int64_t t101 = -8659904945LL;

    t101 = (((x473/x474)^x475)-x476);

    if (t101 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x477 = 7406U;
	uint32_t x479 = 36U;
	uint32_t x480 = 1U;

    t102 = (((x477/x478)^x479)-x480);

    if (t102 != 56U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MIN;
	int32_t x483 = -1;
	int64_t x484 = INT64_MIN;
	volatile int64_t t103 = INT64_MAX;

    t103 = (((x481/x482)^x483)-x484);

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x485 = INT64_MIN;
	uint16_t x486 = 3696U;
	int32_t x487 = -1;
	static volatile uint8_t x488 = UINT8_MAX;

    t104 = (((x485/x486)^x487)-x488);

    if (t104 != 2495501092222356LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x489 = INT16_MIN;
	volatile int32_t x491 = -1;
	static volatile int16_t x492 = -1;
	static volatile int32_t t105 = 61591317;

    t105 = (((x489/x490)^x491)-x492);

    if (t105 != 258) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x501 = 597U;
	int64_t x502 = INT64_MIN;
	static uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 48U;
	volatile uint64_t t106 = 595LLU;

    t106 = (((x501/x502)^x503)-x504);

    if (t106 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x505 = 1LL;
	static int16_t x506 = INT16_MAX;
	uint8_t x508 = UINT8_MAX;
	uint64_t t107 = 11933LLU;

    t107 = (((x505/x506)^x507)-x508);

    if (t107 != 200221828LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x509 = INT64_MIN;
	static int64_t x510 = 8144014439701LL;
	volatile uint16_t x511 = 3U;
	static int64_t x512 = -180LL;
	int64_t t108 = -39488854LL;

    t108 = (((x509/x510)^x511)-x512);

    if (t108 != -1132356LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x513 = -1;
	int32_t x514 = INT32_MIN;
	static uint64_t x515 = 5416986636615411252LLU;
	int8_t x516 = INT8_MIN;
	uint64_t t109 = 3711954LLU;

    t109 = (((x513/x514)^x515)-x516);

    if (t109 != 5416986636615411380LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x517 = -1;
	int8_t x518 = 3;
	int32_t x519 = -1;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t110 = 19348;

    t110 = (((x517/x518)^x519)-x520);

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x521 = 1021U;
	int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = -1;

    t111 = (((x521/x522)^x523)-x524);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x529 = INT16_MIN;
	uint8_t x530 = 31U;
	static int64_t x531 = INT64_MIN;
	volatile int64_t t112 = 10848291005409298LL;

    t112 = (((x529/x530)^x531)-x532);

    if (t112 != 9223372036854774496LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x534 = INT32_MIN;
	int64_t x535 = INT64_MIN;
	int64_t x536 = -584346071735897868LL;
	int64_t t113 = 32256671275805LL;

    t113 = (((x533/x534)^x535)-x536);

    if (t113 != -8639025965118877940LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x537 = -1;
	int32_t x538 = 1;
	static int8_t x540 = -24;
	int32_t t114 = -32326;

    t114 = (((x537/x538)^x539)-x540);

    if (t114 != -2078) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x541 = 5U;
	int64_t x542 = -5247LL;
	volatile int64_t x543 = INT64_MIN;
	volatile int64_t t115 = -101054LL;

    t115 = (((x541/x542)^x543)-x544);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x547 = INT16_MIN;
	int64_t t116 = 3729788919140460242LL;

    t116 = (((x545/x546)^x547)-x548);

    if (t116 != -32766LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x553 = INT16_MAX;
	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 188U;
	int64_t x556 = -26761493LL;
	volatile int64_t t117 = -18239027847LL;

    t117 = (((x553/x554)^x555)-x556);

    if (t117 != 26761553LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x557 = -1;
	int32_t x558 = INT32_MIN;
	int8_t x559 = -1;
	int32_t t118 = 12104491;

    t118 = (((x557/x558)^x559)-x560);

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x562 = -1;
	uint32_t x563 = UINT32_MAX;
	int64_t x564 = -20336289617519288LL;
	volatile int64_t t119 = -16767818031019LL;

    t119 = (((x561/x562)^x563)-x564);

    if (t119 != 20336293912486583LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x565 = 0U;
	static uint8_t x566 = 68U;
	volatile int32_t x567 = INT32_MIN;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t120 = 1;

    t120 = (((x565/x566)^x567)-x568);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x569 = UINT32_MAX;
	static volatile int8_t x571 = -10;
	volatile int64_t x572 = -1LL;
	volatile int64_t t121 = 14LL;

    t121 = (((x569/x570)^x571)-x572);

    if (t121 != 4294967288LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x573 = -10;
	int64_t x574 = -1LL;
	int8_t x576 = 1;

    t122 = (((x573/x574)^x575)-x576);

    if (t122 != 4LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x578 = INT8_MIN;
	uint64_t t123 = 13414077960LLU;

    t123 = (((x577/x578)^x579)-x580);

    if (t123 != 9223372036854765819LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = -1;
	uint16_t x582 = UINT16_MAX;
	uint16_t x583 = UINT16_MAX;
	static volatile int16_t x584 = INT16_MAX;
	int32_t t124 = 295607652;

    t124 = (((x581/x582)^x583)-x584);

    if (t124 != 32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x585 = 23129052238451139LLU;
	int16_t x586 = INT16_MIN;
	volatile uint64_t x587 = 38752557476LLU;
	volatile int8_t x588 = INT8_MIN;
	volatile uint64_t t125 = 11533211LLU;

    t125 = (((x585/x586)^x587)-x588);

    if (t125 != 38752557604LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x589 = 2956LL;
	int64_t x590 = INT64_MIN;
	static int8_t x591 = 45;
	volatile uint32_t x592 = UINT32_MAX;
	volatile int64_t t126 = -25902480378342LL;

    t126 = (((x589/x590)^x591)-x592);

    if (t126 != -4294967250LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x593 = -934360496298LL;
	uint8_t x594 = 56U;
	int64_t x595 = 1LL;
	int16_t x596 = INT16_MAX;

    t127 = (((x593/x594)^x595)-x596);

    if (t127 != -16685041628LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x597 = 57U;
	uint16_t x598 = 7U;
	volatile int16_t x599 = INT16_MIN;
	static int8_t x600 = -1;
	volatile int32_t t128 = -52315705;

    t128 = (((x597/x598)^x599)-x600);

    if (t128 != -32759) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x605 = 18;
	int32_t x606 = INT32_MIN;
	int64_t x607 = -1LL;
	volatile int16_t x608 = INT16_MAX;
	int64_t t129 = 5039631946363LL;

    t129 = (((x605/x606)^x607)-x608);

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x609 = INT16_MAX;
	int64_t x610 = INT64_MAX;
	static int64_t x611 = -1LL;

    t130 = (((x609/x610)^x611)-x612);

    if (t130 != 16391758485662757877LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x617 = INT32_MIN;
	volatile int64_t x618 = -51LL;
	uint8_t x619 = 54U;
	volatile uint64_t t131 = 25158LLU;

    t131 = (((x617/x618)^x619)-x620);

    if (t131 != 42107573LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x621 = INT32_MIN;
	static int64_t x622 = INT64_MAX;
	static uint32_t x623 = UINT32_MAX;
	volatile uint64_t t132 = 3LLU;

    t132 = (((x621/x622)^x623)-x624);

    if (t132 != 4294967296LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x625 = -1;
	static volatile int8_t x626 = INT8_MAX;
	static volatile int8_t x627 = -1;
	volatile int8_t x628 = 0;
	volatile int32_t t133 = -124718;

    t133 = (((x625/x626)^x627)-x628);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = INT16_MIN;
	int16_t x631 = 204;
	int32_t x632 = INT32_MIN;
	static int32_t t134 = -371;

    t134 = (((x629/x630)^x631)-x632);

    if (t134 != 2147483443) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x633 = 5U;
	uint64_t x634 = 30LLU;
	int8_t x635 = INT8_MIN;
	volatile int16_t x636 = -1;
	static volatile uint64_t t135 = 149729LLU;

    t135 = (((x633/x634)^x635)-x636);

    if (t135 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x637 = INT8_MIN;
	int16_t x638 = INT16_MIN;
	int32_t x639 = -1369871;
	uint64_t x640 = UINT64_MAX;
	uint64_t t136 = 332056511535780490LLU;

    t136 = (((x637/x638)^x639)-x640);

    if (t136 != 18446744073708181746LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x641 = INT16_MIN;
	static volatile uint32_t x642 = 113371188U;
	uint64_t x643 = 7207559766148741LLU;
	static int8_t x644 = INT8_MIN;
	uint64_t t137 = 1680277879074182LLU;

    t137 = (((x641/x642)^x643)-x644);

    if (t137 != 7207559766148896LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x645 = 15U;
	static int64_t x646 = INT64_MIN;
	uint16_t x648 = UINT16_MAX;
	uint64_t t138 = 1891083LLU;

    t138 = (((x645/x646)^x647)-x648);

    if (t138 != 207059LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = 1;
	int8_t x651 = -1;
	int64_t t139 = 3LL;

    t139 = (((x649/x650)^x651)-x652);

    if (t139 != 9223372036753094116LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x655 = -1;
	volatile int64_t t140 = -3LL;

    t140 = (((x653/x654)^x655)-x656);

    if (t140 != 4294765852LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x659 = 1834877;
	int8_t x660 = -1;
	volatile uint64_t t141 = 3048561570356184LLU;

    t141 = (((x657/x658)^x659)-x660);

    if (t141 != 33957353LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x665 = 9U;
	int64_t x666 = -1LL;
	volatile int8_t x667 = 3;
	uint8_t x668 = 9U;
	int64_t t142 = -33159100153142LL;

    t142 = (((x665/x666)^x667)-x668);

    if (t142 != -21LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x669 = INT16_MAX;
	static int32_t x670 = INT32_MIN;
	static int32_t x671 = INT32_MIN;
	volatile int64_t t143 = -363825875214618130LL;

    t143 = (((x669/x670)^x671)-x672);

    if (t143 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x673 = UINT16_MAX;
	int8_t x674 = 3;
	uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MAX;

    t144 = (((x673/x674)^x675)-x676);

    if (t144 != 18446744071562046123LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x677 = UINT8_MAX;
	static int16_t x678 = 10;
	static int16_t x679 = INT16_MIN;
	int64_t x680 = 9996944000772LL;
	volatile int64_t t145 = -16235LL;

    t145 = (((x677/x678)^x679)-x680);

    if (t145 != -9996944033515LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x682 = 1U;
	int16_t x684 = INT16_MAX;

    t146 = (((x681/x682)^x683)-x684);

    if (t146 != 19968868U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x689 = -1;
	int16_t x691 = INT16_MIN;
	uint8_t x692 = UINT8_MAX;

    t147 = (((x689/x690)^x691)-x692);

    if (t147 != 4294934274U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x693 = INT8_MIN;
	uint16_t x696 = UINT16_MAX;
	int64_t t148 = 212792592LL;

    t148 = (((x693/x694)^x695)-x696);

    if (t148 != -65684LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x697 = -1;
	int64_t x699 = 58360551002156564LL;
	volatile int64_t t149 = 232278326908280LL;

    t149 = (((x697/x698)^x699)-x700);

    if (t149 != 58360551002156566LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = -8685793616990862LL;
	volatile int8_t x707 = INT8_MIN;
	int16_t x708 = INT16_MIN;
	int64_t t150 = 3378738047371350LL;

    t150 = (((x705/x706)^x707)-x708);

    if (t150 != 31653LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x709 = -1;
	int32_t x710 = -1;
	volatile uint64_t x711 = UINT64_MAX;
	int64_t x712 = -1LL;

    t151 = (((x709/x710)^x711)-x712);

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x713 = 6877499U;
	volatile int32_t x714 = INT32_MIN;
	volatile uint32_t t152 = 47U;

    t152 = (((x713/x714)^x715)-x716);

    if (t152 != 2147483692U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x717 = -1;
	int32_t x718 = -1;
	volatile uint16_t x719 = 4U;
	int32_t x720 = -55166;
	volatile int32_t t153 = 169;

    t153 = (((x717/x718)^x719)-x720);

    if (t153 != 55171) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x721 = 6790655809LLU;
	int16_t x722 = INT16_MIN;
	volatile int64_t x723 = -1LL;
	uint64_t t154 = 2738LLU;

    t154 = (((x721/x722)^x723)-x724);

    if (t154 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x725 = INT32_MIN;
	uint32_t x727 = UINT32_MAX;
	volatile int16_t x728 = -1;
	volatile uint32_t t155 = 46248620U;

    t155 = (((x725/x726)^x727)-x728);

    if (t155 != 32768U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x729 = UINT8_MAX;
	uint32_t x731 = 5212U;
	static int16_t x732 = 1;

    t156 = (((x729/x730)^x731)-x732);

    if (t156 != 5211U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x733 = INT16_MIN;
	static int64_t x734 = INT64_MAX;
	volatile int64_t t157 = 645754821LL;

    t157 = (((x733/x734)^x735)-x736);

    if (t157 != 19LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x738 = 30010U;
	static volatile uint32_t x739 = 31U;
	static int32_t x740 = -83020;

    t158 = (((x737/x738)^x739)-x740);

    if (t158 != 11441U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x741 = 5245786374239180LL;
	static int64_t x742 = 515093963LL;
	uint8_t x743 = 1U;
	int8_t x744 = INT8_MIN;
	volatile int64_t t159 = -25174504110785020LL;

    t159 = (((x741/x742)^x743)-x744);

    if (t159 != 10184263LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x745 = 1446U;
	volatile int32_t x747 = INT32_MIN;
	uint32_t x748 = UINT32_MAX;
	static uint32_t t160 = 5522U;

    t160 = (((x745/x746)^x747)-x748);

    if (t160 != 2147482203U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x750 = INT16_MIN;
	int64_t x751 = 71279918028LL;
	int32_t x752 = INT32_MAX;
	int64_t t161 = -2043LL;

    t161 = (((x749/x750)^x751)-x752);

    if (t161 != -73427436594LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x753 = INT64_MAX;
	uint64_t x755 = UINT64_MAX;
	int16_t x756 = INT16_MIN;
	volatile uint64_t t162 = 94LLU;

    t162 = (((x753/x754)^x755)-x756);

    if (t162 != 281474976743422LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x762 = UINT64_MAX;
	volatile int64_t x764 = INT64_MIN;
	volatile uint64_t t163 = 7975957LLU;

    t163 = (((x761/x762)^x763)-x764);

    if (t163 != 9223373034505832890LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x765 = INT64_MAX;
	int32_t x766 = INT32_MAX;
	uint16_t x768 = UINT16_MAX;
	uint64_t t164 = 1LLU;

    t164 = (((x765/x766)^x767)-x768);

    if (t164 != 18446744069414518782LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x769 = UINT64_MAX;
	static int32_t x770 = -1;
	volatile int32_t x771 = -1;
	volatile int16_t x772 = -1;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = (((x769/x770)^x771)-x772);

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x773 = 2534148844LL;
	static int64_t x775 = -453569586663418LL;
	int8_t x776 = -1;
	int64_t t166 = 21190909587124348LL;

    t166 = (((x773/x774)^x775)-x776);

    if (t166 != 453569605408750LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x778 = 248U;
	int32_t x779 = INT32_MIN;
	int8_t x780 = INT8_MIN;
	volatile uint32_t t167 = 1U;

    t167 = (((x777/x778)^x779)-x780);

    if (t167 != 2147483776U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x781 = INT16_MIN;
	static volatile uint64_t x782 = 4023LLU;

    t168 = (((x781/x782)^x783)-x784);

    if (t168 != 18442158753283573333LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x789 = 41579606U;
	static uint32_t x790 = UINT32_MAX;
	static uint8_t x791 = 6U;
	int32_t x792 = INT32_MAX;

    t169 = (((x789/x790)^x791)-x792);

    if (t169 != 2147483655U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x797 = 112012297LLU;
	static int64_t x798 = -1LL;
	int8_t x799 = INT8_MAX;
	uint32_t x800 = UINT32_MAX;
	static volatile uint64_t t170 = 0LLU;

    t170 = (((x797/x798)^x799)-x800);

    if (t170 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x802 = 61;
	volatile int16_t x803 = INT16_MIN;
	int32_t x804 = INT32_MIN;
	static int32_t t171 = 3;

    t171 = (((x801/x802)^x803)-x804);

    if (t171 != 2147450880) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x809 = INT64_MAX;
	volatile int8_t x810 = 22;
	uint8_t x811 = 1U;
	int32_t x812 = 2;
	int64_t t172 = 12875771LL;

    t172 = (((x809/x810)^x811)-x812);

    if (t172 != 419244183493398899LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x817 = INT8_MIN;
	static int8_t x818 = -1;
	uint32_t x819 = 1U;
	uint64_t x820 = 529512872LLU;
	uint64_t t173 = 416366925701690LLU;

    t173 = (((x817/x818)^x819)-x820);

    if (t173 != 18446744073180038873LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x821 = INT8_MIN;
	uint8_t x822 = 25U;
	volatile int64_t x823 = INT64_MIN;
	uint32_t x824 = 0U;
	volatile int64_t t174 = 2361261966LL;

    t174 = (((x821/x822)^x823)-x824);

    if (t174 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x826 = INT8_MAX;
	uint64_t x827 = 132050988018871042LLU;
	volatile int64_t x828 = INT64_MAX;
	uint64_t t175 = 1768100400880787LLU;

    t175 = (((x825/x826)^x827)-x828);

    if (t175 != 9091321048835905021LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x829 = 5;
	int32_t x830 = INT32_MIN;
	int32_t x832 = -1;
	int64_t t176 = -4324836012190819LL;

    t176 = (((x829/x830)^x831)-x832);

    if (t176 != -17398209LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x833 = 7087556LLU;
	static volatile int32_t x834 = -401;
	int16_t x835 = 743;
	int64_t x836 = INT64_MIN;
	volatile uint64_t t177 = 10925843LLU;

    t177 = (((x833/x834)^x835)-x836);

    if (t177 != 9223372036854776551LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x837 = -3LL;
	int64_t x838 = -909332929249398920LL;
	static volatile int64_t x839 = INT64_MAX;
	int8_t x840 = INT8_MAX;

    t178 = (((x837/x838)^x839)-x840);

    if (t178 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x845 = -1;
	int32_t x846 = INT32_MIN;
	int64_t x847 = -23495254LL;
	int64_t t179 = -21576953404376LL;

    t179 = (((x845/x846)^x847)-x848);

    if (t179 != -23495253LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x849 = 774U;
	static int16_t x850 = -481;
	volatile int32_t x851 = -2;
	int8_t x852 = -1;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = (((x849/x850)^x851)-x852);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x854 = UINT8_MAX;
	int8_t x855 = 6;
	static uint64_t x856 = 117242LLU;

    t181 = (((x853/x854)^x855)-x856);

    if (t181 != 18446744073709434380LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x857 = 1U;
	static uint16_t x858 = 25606U;
	int64_t x859 = -1LL;
	uint64_t x860 = 1729712921156LLU;
	uint64_t t182 = 996309803449676909LLU;

    t182 = (((x857/x858)^x859)-x860);

    if (t182 != 18446742343996630459LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x862 = UINT16_MAX;
	int64_t x863 = -10485277LL;
	volatile uint64_t x864 = 0LLU;
	volatile uint64_t t183 = 105LLU;

    t183 = (((x861/x862)^x863)-x864);

    if (t183 != 18446744073699131874LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x865 = 170897U;
	int32_t x866 = -1;
	int64_t x867 = -4683041LL;
	int32_t x868 = INT32_MIN;
	static volatile int64_t t184 = -7422890LL;

    t184 = (((x865/x866)^x867)-x868);

    if (t184 != 2142800607LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x869 = 10U;
	uint8_t x871 = 37U;
	volatile int16_t x872 = -1;
	static int64_t t185 = -10557340740232845LL;

    t185 = (((x869/x870)^x871)-x872);

    if (t185 != -44LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x873 = 41017693;
	uint64_t x875 = UINT64_MAX;
	int8_t x876 = -1;
	static volatile uint64_t t186 = 3493896116833997LLU;

    t186 = (((x873/x874)^x875)-x876);

    if (t186 != 18446744073709522065LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x877 = -1;
	int64_t x878 = -1LL;
	int16_t x879 = 950;
	int64_t x880 = INT64_MAX;
	volatile int64_t t187 = -48180LL;

    t187 = (((x877/x878)^x879)-x880);

    if (t187 != -9223372036854774856LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x881 = INT32_MAX;
	int16_t x882 = INT16_MIN;
	static volatile int16_t x883 = INT16_MAX;
	int32_t x884 = 196380;
	static volatile int32_t t188 = 22;

    t188 = (((x881/x882)^x883)-x884);

    if (t188 != -229150) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x885 = -299656;
	uint64_t x886 = 379207LLU;
	int8_t x887 = -1;
	volatile int8_t x888 = INT8_MIN;
	static uint64_t t189 = 1810LLU;

    t189 = (((x885/x886)^x887)-x888);

    if (t189 != 18446695428130557397LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x889 = -1;
	int8_t x890 = -1;
	static int32_t x891 = 0;
	int8_t x892 = INT8_MAX;
	int32_t t190 = -32030;

    t190 = (((x889/x890)^x891)-x892);

    if (t190 != -126) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x894 = UINT8_MAX;
	static uint32_t x895 = 19150024U;
	int16_t x896 = INT16_MIN;
	volatile uint32_t t191 = 7576U;

    t191 = (((x893/x894)^x895)-x896);

    if (t191 != 4275850056U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x897 = 11LLU;
	volatile int8_t x898 = -1;
	int64_t x899 = -23341614004788318LL;
	volatile int64_t x900 = -568538714668020196LL;
	uint64_t t192 = 125677LLU;

    t192 = (((x897/x898)^x899)-x900);

    if (t192 != 545197100663231878LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x901 = 108U;
	static int8_t x903 = INT8_MIN;

    t193 = (((x901/x902)^x903)-x904);

    if (t193 != 2529188200U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x905 = 3516LLU;
	int16_t x907 = -1;
	static uint64_t t194 = 5679821857LLU;

    t194 = (((x905/x906)^x907)-x908);

    if (t194 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x909 = 601;
	volatile int16_t x910 = 1;
	int16_t x911 = -1;
	int64_t t195 = 28LL;

    t195 = (((x909/x910)^x911)-x912);

    if (t195 != 9223372036854775206LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x914 = INT16_MIN;
	static uint8_t x916 = UINT8_MAX;
	static uint64_t t196 = 27628124LLU;

    t196 = (((x913/x914)^x915)-x916);

    if (t196 != 4052465316488641LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x917 = 541286940;
	uint16_t x918 = 157U;
	uint64_t x919 = 137408220381100684LLU;
	uint32_t x920 = 0U;
	static volatile uint64_t t197 = 1278283826154LLU;

    t197 = (((x917/x918)^x919)-x920);

    if (t197 != 137408220384469259LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x921 = 206U;
	int16_t x922 = INT16_MIN;
	uint16_t x923 = 15U;
	uint16_t x924 = UINT16_MAX;
	volatile uint32_t t198 = 32342779U;

    t198 = (((x921/x922)^x923)-x924);

    if (t198 != 4294901776U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x926 = -6;
	int16_t x927 = INT16_MIN;
	int64_t t199 = -483999530635753LL;

    t199 = (((x925/x926)^x927)-x928);

    if (t199 != -1537228672809151146LL) { NG(); } else { ; }
	
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

