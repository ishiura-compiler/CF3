
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

static int32_t x1 = -1;
int32_t x16 = 1786172;
int64_t t2 = 140LL;
volatile uint16_t x17 = UINT16_MAX;
static int64_t x19 = -1LL;
int64_t t8 = -3002319241LL;
int16_t x53 = 0;
volatile int64_t x57 = INT64_MAX;
static uint32_t x62 = UINT32_MAX;
static uint32_t x63 = UINT32_MAX;
static uint8_t x84 = 0U;
static int64_t t17 = 56498733LL;
static int16_t x89 = 0;
static int8_t x103 = 18;
uint16_t x106 = 12915U;
int32_t t22 = 2584270;
int16_t x109 = -433;
volatile int8_t x110 = -1;
volatile uint16_t x112 = 5U;
volatile int32_t t23 = 38471019;
static uint16_t x116 = UINT16_MAX;
volatile int32_t x119 = -1;
int64_t x120 = INT64_MAX;
static int8_t x131 = INT8_MIN;
static uint32_t x147 = UINT32_MAX;
volatile int64_t t34 = 38687384535LL;
static int64_t x160 = INT64_MAX;
volatile uint64_t t36 = 7511519142874734LLU;
int8_t x172 = -1;
uint64_t x177 = 9679300567617LLU;
static int8_t x178 = INT8_MAX;
static volatile uint64_t t39 = 466784373113280LLU;
static uint8_t x190 = UINT8_MAX;
int32_t x192 = INT32_MIN;
int64_t t41 = 1015862556LL;
uint16_t x199 = 0U;
uint64_t x200 = UINT64_MAX;
uint8_t x207 = UINT8_MAX;
volatile int32_t x217 = -9118;
static int32_t x230 = INT32_MIN;
int32_t t49 = -2322;
int64_t x240 = -1898709627342LL;
uint32_t x246 = UINT32_MAX;
int8_t x249 = -1;
volatile int32_t t54 = -251455;
int32_t x254 = -69207;
int16_t x255 = -1;
uint16_t x258 = UINT16_MAX;
static volatile uint64_t t56 = 13LLU;
int16_t x263 = 18;
uint32_t t57 = 1300516319U;
uint64_t x266 = 71773396LLU;
int64_t x271 = INT64_MAX;
static uint32_t t60 = 13637U;
int32_t x283 = INT32_MIN;
int64_t x286 = -1LL;
uint8_t x288 = UINT8_MAX;
static int8_t x297 = INT8_MIN;
int64_t x304 = 8781645320433138LL;
uint8_t x307 = UINT8_MAX;
int32_t t68 = -23;
uint8_t x319 = 15U;
int16_t x320 = INT16_MIN;
static int32_t x326 = 9;
int32_t t71 = 2516377;
uint64_t x336 = 7082130347534657LLU;
volatile int64_t t74 = 286103729623LL;
int32_t t76 = 117635171;
volatile int64_t x351 = -4328560356405294609LL;
uint64_t t77 = UINT64_MAX;
int32_t t80 = 6566;
int8_t x367 = 2;
uint32_t x373 = UINT32_MAX;
static volatile int16_t x382 = INT16_MIN;
static volatile int32_t t85 = -167453847;
uint32_t x388 = 613971U;
volatile int32_t t86 = -182984;
int32_t x399 = INT32_MAX;
uint8_t x402 = UINT8_MAX;
int64_t x415 = -533499614702LL;
int8_t x416 = 19;
uint32_t x417 = 254458207U;
volatile int32_t x418 = -1;
uint16_t x419 = UINT16_MAX;
int32_t x424 = -621270;
static uint16_t x427 = UINT16_MAX;
static uint16_t x428 = 1U;
int8_t x434 = -40;
uint64_t t98 = 1911115794086777465LLU;
uint32_t x445 = 114103U;
int16_t x447 = 1;
static volatile uint8_t x450 = UINT8_MAX;
uint64_t x453 = 7916LLU;
static uint32_t x463 = UINT32_MAX;
volatile uint64_t x465 = UINT64_MAX;
int8_t x468 = -1;
volatile uint32_t t106 = 5130261U;
volatile int16_t x477 = INT16_MIN;
uint64_t x479 = 32573390778818749LLU;
volatile int32_t t109 = -252;
int8_t x492 = INT8_MIN;
int16_t x494 = INT16_MAX;
int32_t x498 = INT32_MAX;
int64_t x501 = -1LL;
uint16_t x503 = 6U;
int64_t t113 = -1LL;
static volatile int16_t x507 = INT16_MIN;
int8_t x508 = -48;
int32_t t116 = -13;
static volatile int16_t x518 = INT16_MIN;
uint16_t x519 = 9U;
volatile int32_t t119 = INT32_MAX;
uint32_t x529 = UINT32_MAX;
uint64_t x531 = 45724180LLU;
uint16_t x532 = UINT16_MAX;
uint8_t x533 = UINT8_MAX;
static volatile int64_t t121 = -41142266122108866LL;
volatile int64_t x540 = -64868625LL;
volatile uint16_t x552 = UINT16_MAX;
volatile int8_t x558 = 4;
static uint16_t x561 = UINT16_MAX;
int64_t x565 = -1LL;
int64_t x583 = INT64_MIN;
volatile int64_t t135 = -882278424253778LL;
static int32_t x608 = INT32_MAX;
int32_t t137 = 1;
uint32_t x610 = UINT32_MAX;
volatile int32_t x617 = INT32_MIN;
volatile int32_t x623 = -1;
uint16_t x630 = 8100U;
static volatile int32_t t143 = -151;
uint16_t x641 = UINT16_MAX;
int64_t x643 = INT64_MAX;
uint16_t x656 = 15980U;
volatile int32_t t146 = 483;
static int16_t x660 = INT16_MAX;
uint32_t t147 = 977928U;
int32_t x663 = INT32_MIN;
uint8_t x669 = 13U;
volatile int64_t x675 = -1LL;
int16_t x679 = -3;
int64_t t151 = -68968710630868LL;
int32_t x682 = INT32_MIN;
int32_t x685 = INT32_MIN;
volatile uint64_t t156 = 1683477485200LLU;
int16_t x706 = INT16_MAX;
int32_t x712 = INT32_MIN;
int16_t x715 = -1;
volatile int32_t t160 = 0;
int32_t t161 = -6;
volatile int16_t x737 = 4;
int64_t x739 = -84141686382216LL;
int8_t x742 = -1;
static int8_t x749 = 1;
uint16_t x753 = UINT16_MAX;
static uint8_t x756 = 0U;
int32_t x764 = 92471;
uint64_t x782 = 237857464151LLU;
static int32_t x783 = INT32_MIN;
uint16_t x784 = 1U;
uint16_t x785 = 171U;
uint16_t x787 = 11299U;
int16_t x790 = INT16_MAX;
int16_t x792 = -529;
int64_t x799 = INT64_MIN;
int64_t x802 = INT64_MIN;
int32_t x810 = 102747139;
volatile int64_t x815 = -236050138892162LL;
volatile int8_t x816 = INT8_MIN;
uint32_t t182 = 410142844U;
uint32_t x817 = 123189366U;
int8_t x819 = INT8_MIN;
volatile uint64_t x826 = 38459LLU;
int32_t t186 = 4;
uint16_t x838 = 38U;
volatile int16_t x856 = -1;
int8_t x861 = INT8_MIN;
int32_t t193 = -564625;
int16_t x874 = INT16_MAX;
uint64_t t197 = 344047633648LLU;
uint32_t x894 = 3U;


void f0(void) {
    	uint32_t x2 = 3721355U;
	int16_t x3 = INT16_MIN;
	static volatile uint64_t x4 = UINT64_MAX;
	uint32_t t0 = 1U;

    t0 = ((x1+x2)|(x3>x4));

    if (t0 != 3721354U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 13U;
	int8_t x6 = INT8_MIN;
	int64_t x7 = -4606LL;
	static int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 5266U;

    t1 = ((x5+x6)|(x7>x8));

    if (t1 != 4294967181U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 3;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;

    t2 = ((x13+x14)|(x15>x16));

    if (t2 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = -1;
	int32_t x20 = 653;
	int32_t t3 = 5398;

    t3 = ((x17+x18)|(x19>x20));

    if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 4596;
	volatile int32_t x22 = -1;
	volatile uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MAX;
	int32_t t4 = -2208294;

    t4 = ((x21+x22)|(x23>x24));

    if (t4 != 4595) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1430368701794LL;
	static int16_t x26 = -1;
	uint32_t x27 = 5U;
	static int64_t x28 = 544790759945431369LL;
	volatile int64_t t5 = -46554816014708LL;

    t5 = ((x25+x26)|(x27>x28));

    if (t5 != -1430368701795LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x29 = 1257U;
	int32_t x30 = INT32_MAX;
	int32_t x31 = -266474;
	volatile int32_t x32 = 445;
	volatile uint32_t t6 = 1127659U;

    t6 = ((x29+x30)|(x31>x32));

    if (t6 != 2147484904U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	static uint16_t x35 = UINT16_MAX;
	int8_t x36 = -5;
	volatile int32_t t7 = 21840;

    t7 = ((x33+x34)|(x35>x36));

    if (t7 != -255) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = INT64_MIN;
	int16_t x42 = 904;
	uint8_t x43 = 63U;
	uint64_t x44 = 6096455349LLU;

    t8 = ((x41+x42)|(x43>x44));

    if (t8 != -9223372036854774904LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = 0;
	static uint32_t x46 = UINT32_MAX;
	int8_t x47 = -1;
	int16_t x48 = -1;
	static volatile uint32_t t9 = UINT32_MAX;

    t9 = ((x45+x46)|(x47>x48));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	uint32_t x50 = 36599U;
	static int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	static uint32_t t10 = 38244440U;

    t10 = ((x49+x50)|(x51>x52));

    if (t10 != 2147520247U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x54 = 186;
	uint8_t x55 = 2U;
	int8_t x56 = -2;
	int32_t t11 = 10310355;

    t11 = ((x53+x54)|(x55>x56));

    if (t11 != 187) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x58 = -278091;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 1U;
	int64_t t12 = -3237935718095LL;

    t12 = ((x57+x58)|(x59>x60));

    if (t12 != 9223372036854497716LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x61 = 210796013652LLU;
	int8_t x64 = -1;
	volatile uint64_t t13 = 6LLU;

    t13 = ((x61+x62)|(x63>x64));

    if (t13 != 215090980947LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x65 = INT8_MIN;
	static int8_t x66 = 1;
	int64_t x67 = 20779891236369LL;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = 432021;

    t14 = ((x65+x66)|(x67>x68));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = 3;
	int16_t x74 = -1;
	volatile uint32_t x75 = UINT32_MAX;
	int64_t x76 = -1706LL;
	int32_t t15 = 5969;

    t15 = ((x73+x74)|(x75>x76));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = 63260136292616LL;
	int64_t x80 = 4225156688128LL;
	int32_t t16 = 1;

    t16 = ((x77+x78)|(x79>x80));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;

    t17 = ((x81+x82)|(x83>x84));

    if (t17 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x85 = 3518274366081141945LL;
	uint32_t x86 = 406922968U;
	int16_t x87 = -169;
	uint8_t x88 = 22U;
	static volatile int64_t t18 = 1258535LL;

    t18 = ((x85+x86)|(x87>x88));

    if (t18 != 3518274366488064913LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x90 = -1;
	int8_t x91 = INT8_MAX;
	volatile uint8_t x92 = 124U;
	int32_t t19 = -4233;

    t19 = ((x89+x90)|(x91>x92));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x93 = INT32_MAX;
	volatile int8_t x94 = INT8_MIN;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;
	static int32_t t20 = 816556;

    t20 = ((x93+x94)|(x95>x96));

    if (t20 != 2147483519) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	int8_t x104 = INT8_MAX;
	int64_t t21 = 108LL;

    t21 = ((x101+x102)|(x103>x104));

    if (t21 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x105 = 8;
	int16_t x107 = INT16_MIN;
	static int64_t x108 = INT64_MIN;

    t22 = ((x105+x106)|(x107>x108));

    if (t22 != 12923) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x111 = 23856738LL;

    t23 = ((x109+x110)|(x111>x112));

    if (t23 != -433) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x113 = 280368234280407940LL;
	int64_t x114 = -1LL;
	uint32_t x115 = UINT32_MAX;
	volatile int64_t t24 = 1LL;

    t24 = ((x113+x114)|(x115>x116));

    if (t24 != 280368234280407939LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	static int32_t t25 = 0;

    t25 = ((x117+x118)|(x119>x120));

    if (t25 != -65536) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = 17LLU;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MAX;
	static volatile int16_t x124 = INT16_MIN;
	uint64_t t26 = 71644819853628961LLU;

    t26 = ((x121+x122)|(x123>x124));

    if (t26 != 273LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = 5348637209LL;
	uint16_t x126 = UINT16_MAX;
	volatile int8_t x127 = -46;
	volatile int64_t x128 = INT64_MIN;
	int64_t t27 = 629043203533631LL;

    t27 = ((x125+x126)|(x127>x128));

    if (t27 != 5348702745LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x129 = UINT16_MAX;
	uint32_t x130 = UINT32_MAX;
	int8_t x132 = INT8_MIN;
	static volatile uint32_t t28 = 250146031U;

    t28 = ((x129+x130)|(x131>x132));

    if (t28 != 65534U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 4U;
	uint32_t x134 = UINT32_MAX;
	static int64_t x135 = 64814990LL;
	int16_t x136 = INT16_MAX;
	uint32_t t29 = 241U;

    t29 = ((x133+x134)|(x135>x136));

    if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = INT8_MIN;
	int16_t x138 = -1;
	int16_t x139 = INT16_MAX;
	static uint32_t x140 = 952633218U;
	int32_t t30 = -646465577;

    t30 = ((x137+x138)|(x139>x140));

    if (t30 != -129) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = 4LL;
	uint16_t x142 = 15U;
	uint8_t x143 = UINT8_MAX;
	static int64_t x144 = -35450LL;
	int64_t t31 = 1LL;

    t31 = ((x141+x142)|(x143>x144));

    if (t31 != 19LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = -49167LL;
	static int64_t x146 = 15LL;
	int64_t x148 = INT64_MAX;
	int64_t t32 = -59LL;

    t32 = ((x145+x146)|(x147>x148));

    if (t32 != -49152LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x149 = INT8_MAX;
	volatile int16_t x150 = INT16_MIN;
	uint8_t x151 = 11U;
	static int64_t x152 = 10400162882384662LL;
	int32_t t33 = 1;

    t33 = ((x149+x150)|(x151>x152));

    if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x153 = 7U;
	int64_t x154 = INT64_MIN;
	volatile int32_t x155 = -11752;
	static uint8_t x156 = 3U;

    t34 = ((x153+x154)|(x155>x156));

    if (t34 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = 52U;
	int32_t x158 = INT32_MIN;
	int8_t x159 = 4;
	volatile int32_t t35 = 233460;

    t35 = ((x157+x158)|(x159>x160));

    if (t35 != -2147483596) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x161 = 22U;
	uint64_t x162 = 14LLU;
	int16_t x163 = INT16_MAX;
	volatile int16_t x164 = INT16_MIN;

    t36 = ((x161+x162)|(x163>x164));

    if (t36 != 37LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x169 = INT32_MIN;
	static volatile int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	volatile int32_t t37 = -26397548;

    t37 = ((x169+x170)|(x171>x172));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x173 = 1049963U;
	volatile uint16_t x174 = 1283U;
	volatile int8_t x175 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	uint32_t t38 = 3366U;

    t38 = ((x173+x174)|(x175>x176));

    if (t38 != 1051246U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x179 = -14;
	int32_t x180 = -1;

    t39 = ((x177+x178)|(x179>x180));

    if (t39 != 9679300567744LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = 0LLU;
	int64_t x183 = -1LL;
	static uint8_t x184 = UINT8_MAX;
	volatile uint64_t t40 = 1008656LLU;

    t40 = ((x181+x182)|(x183>x184));

    if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x189 = -1LL;
	uint64_t x191 = 0LLU;

    t41 = ((x189+x190)|(x191>x192));

    if (t41 != 254LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MIN;
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	static int16_t x196 = INT16_MIN;
	volatile uint64_t t42 = 22LLU;

    t42 = ((x193+x194)|(x195>x196));

    if (t42 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = 113U;
	int32_t x198 = 65223171;
	static int32_t t43 = 105561;

    t43 = ((x197+x198)|(x199>x200));

    if (t43 != 65223284) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x205 = 523;
	int8_t x206 = 62;
	int64_t x208 = 0LL;
	int32_t t44 = 5;

    t44 = ((x205+x206)|(x207>x208));

    if (t44 != 585) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x213 = UINT16_MAX;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 0U;
	int64_t x216 = -4272417251958344503LL;
	int32_t t45 = 29087364;

    t45 = ((x213+x214)|(x215>x216));

    if (t45 != 65407) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x218 = 3U;
	volatile int16_t x219 = INT16_MIN;
	volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t46 = 5;

    t46 = ((x217+x218)|(x219>x220));

    if (t46 != -9115) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x221 = INT8_MIN;
	uint64_t x222 = 11LLU;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = UINT8_MAX;
	static volatile uint64_t t47 = 579LLU;

    t47 = ((x221+x222)|(x223>x224));

    if (t47 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x225 = 38953779524LLU;
	static int32_t x226 = -3;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -676;
	volatile uint64_t t48 = 3LLU;

    t48 = ((x225+x226)|(x227>x228));

    if (t48 != 38953779521LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x229 = 5U;
	static int64_t x231 = 733108822837LL;
	volatile int8_t x232 = INT8_MIN;

    t49 = ((x229+x230)|(x231>x232));

    if (t49 != -2147483643) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x233 = 21161192744479LL;
	static volatile int16_t x234 = -1;
	static uint64_t x235 = 2043567938316LLU;
	static int8_t x236 = -1;
	volatile int64_t t50 = 96658208811LL;

    t50 = ((x233+x234)|(x235>x236));

    if (t50 != 21161192744478LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x237 = -1;
	static int16_t x238 = -1;
	int16_t x239 = 1;
	volatile int32_t t51 = 4;

    t51 = ((x237+x238)|(x239>x240));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x241 = -934052;
	int16_t x242 = -1;
	uint8_t x243 = 1U;
	uint8_t x244 = 13U;
	volatile int32_t t52 = -121;

    t52 = ((x241+x242)|(x243>x244));

    if (t52 != -934053) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x245 = 251;
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = -11;
	uint32_t t53 = 6929U;

    t53 = ((x245+x246)|(x247>x248));

    if (t53 != 250U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x250 = -38;
	volatile uint16_t x251 = 28U;
	uint32_t x252 = 0U;

    t54 = ((x249+x250)|(x251>x252));

    if (t54 != -39) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x253 = UINT8_MAX;
	uint32_t x256 = 214U;
	int32_t t55 = -58;

    t55 = ((x253+x254)|(x255>x256));

    if (t55 != -68951) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x257 = UINT64_MAX;
	static uint16_t x259 = UINT16_MAX;
	static uint16_t x260 = UINT16_MAX;

    t56 = ((x257+x258)|(x259>x260));

    if (t56 != 65534LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x261 = 26U;
	static uint32_t x262 = UINT32_MAX;
	int64_t x264 = 167LL;

    t57 = ((x261+x262)|(x263>x264));

    if (t57 != 25U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x265 = INT32_MIN;
	static int64_t x267 = INT64_MAX;
	volatile int8_t x268 = INT8_MIN;
	uint64_t t58 = 286376481056LLU;

    t58 = ((x265+x266)|(x267>x268));

    if (t58 != 18446744071633841365LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x269 = 3U;
	volatile int64_t x270 = INT64_MIN;
	int64_t x272 = -56593645532LL;
	int64_t t59 = -132247028LL;

    t59 = ((x269+x270)|(x271>x272));

    if (t59 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x273 = 30U;
	uint8_t x274 = 93U;
	int64_t x275 = -1LL;
	int64_t x276 = -3539796853313951980LL;

    t60 = ((x273+x274)|(x275>x276));

    if (t60 != 123U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x277 = 0;
	int64_t x278 = -1LL;
	static uint8_t x279 = UINT8_MAX;
	static uint32_t x280 = 98330U;
	int64_t t61 = -1LL;

    t61 = ((x277+x278)|(x279>x280));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = 1;
	static volatile uint64_t x282 = 8874221992084402LLU;
	static uint16_t x284 = 4594U;
	volatile uint64_t t62 = 15493402007901LLU;

    t62 = ((x281+x282)|(x283>x284));

    if (t62 != 8874221992084403LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x285 = -1843015;
	static int32_t x287 = -3;
	int64_t t63 = -131256928503617590LL;

    t63 = ((x285+x286)|(x287>x288));

    if (t63 != -1843016LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x289 = 1;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	uint32_t x292 = 159884U;
	uint32_t t64 = 3204U;

    t64 = ((x289+x290)|(x291>x292));

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x298 = -2;
	uint32_t x299 = 180710U;
	volatile int8_t x300 = -18;
	int32_t t65 = 32617;

    t65 = ((x297+x298)|(x299>x300));

    if (t65 != -130) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x301 = -1;
	static int16_t x302 = -1;
	volatile int8_t x303 = -53;
	int32_t t66 = -27733;

    t66 = ((x301+x302)|(x303>x304));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x305 = -395;
	int32_t x306 = 3576435;
	uint32_t x308 = 1638324493U;
	volatile int32_t t67 = -23551487;

    t67 = ((x305+x306)|(x307>x308));

    if (t67 != 3576040) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x309 = 0U;
	volatile int32_t x310 = -265083439;
	volatile int32_t x311 = -1;
	uint16_t x312 = 49U;

    t68 = ((x309+x310)|(x311>x312));

    if (t68 != -265083439) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x313 = UINT16_MAX;
	static int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t69 = 1;

    t69 = ((x313+x314)|(x315>x316));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x317 = 1LLU;
	volatile int32_t x318 = INT32_MIN;
	uint64_t t70 = 802178402LLU;

    t70 = ((x317+x318)|(x319>x320));

    if (t70 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x325 = 20;
	int32_t x327 = INT32_MAX;
	static int16_t x328 = INT16_MAX;

    t71 = ((x325+x326)|(x327>x328));

    if (t71 != 29) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x329 = -523190567LL;
	int64_t x330 = 76123788LL;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = 18;
	volatile int64_t t72 = 13LL;

    t72 = ((x329+x330)|(x331>x332));

    if (t72 != -447066779LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x333 = -38412695;
	int32_t x334 = 2559;
	int16_t x335 = 379;
	volatile int32_t t73 = -213635;

    t73 = ((x333+x334)|(x335>x336));

    if (t73 != -38410136) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x337 = 52833764553LL;
	int16_t x338 = INT16_MAX;
	int64_t x339 = INT64_MIN;
	volatile uint64_t x340 = UINT64_MAX;

    t74 = ((x337+x338)|(x339>x340));

    if (t74 != 52833797320LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x341 = 15LLU;
	uint16_t x342 = 97U;
	int32_t x343 = INT32_MAX;
	static int32_t x344 = -1;
	volatile uint64_t t75 = 77842LLU;

    t75 = ((x341+x342)|(x343>x344));

    if (t75 != 113LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x345 = INT8_MIN;
	static int32_t x346 = -1;
	int64_t x347 = 196914796022624LL;
	int64_t x348 = -26614133237LL;

    t76 = ((x345+x346)|(x347>x348));

    if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x349 = 0U;
	static uint64_t x350 = UINT64_MAX;
	volatile uint64_t x352 = 83685246367LLU;

    t77 = ((x349+x350)|(x351>x352));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = 359790160318LLU;
	volatile int64_t x356 = INT64_MAX;
	static uint32_t t78 = 391272U;

    t78 = ((x353+x354)|(x355>x356));

    if (t78 != 2147483646U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x357 = -57580981LL;
	static int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile int8_t x360 = INT8_MAX;
	volatile int64_t t79 = 629824575797106461LL;

    t79 = ((x357+x358)|(x359>x360));

    if (t79 != -57580982LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = -1;
	static volatile int8_t x362 = INT8_MIN;
	int32_t x363 = 1336281;
	int8_t x364 = INT8_MAX;

    t80 = ((x361+x362)|(x363>x364));

    if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x365 = 10;
	volatile uint16_t x366 = 215U;
	int16_t x368 = 1;
	volatile int32_t t81 = -466178;

    t81 = ((x365+x366)|(x367>x368));

    if (t81 != 225) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x369 = INT64_MIN;
	static uint16_t x370 = 24U;
	int8_t x371 = -3;
	volatile int16_t x372 = INT16_MIN;
	volatile int64_t t82 = -558839877198121126LL;

    t82 = ((x369+x370)|(x371>x372));

    if (t82 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x374 = 0U;
	uint16_t x375 = 1598U;
	int32_t x376 = 204173;
	uint32_t t83 = UINT32_MAX;

    t83 = ((x373+x374)|(x375>x376));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x377 = 121U;
	int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	volatile uint64_t x380 = 4160184839LLU;
	volatile int32_t t84 = 1021239607;

    t84 = ((x377+x378)|(x379>x380));

    if (t84 != -2147483527) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x381 = 4510U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = -34024090994LL;

    t85 = ((x381+x382)|(x383>x384));

    if (t85 != -28257) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x385 = 1;
	int16_t x386 = -9;
	int32_t x387 = -341495;

    t86 = ((x385+x386)|(x387>x388));

    if (t86 != -7) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x389 = -1;
	volatile int32_t x390 = -1;
	volatile int32_t x391 = INT32_MAX;
	volatile uint64_t x392 = 1731275660353LLU;
	static volatile int32_t t87 = -65;

    t87 = ((x389+x390)|(x391>x392));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = INT64_MAX;
	volatile uint64_t x394 = 437062246005936038LLU;
	static uint32_t x395 = UINT32_MAX;
	volatile int16_t x396 = INT16_MIN;
	static volatile uint64_t t88 = 515340901239LLU;

    t88 = ((x393+x394)|(x395>x396));

    if (t88 != 9660434282860711845LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x397 = 39761U;
	int32_t x398 = -1;
	int8_t x400 = -1;
	uint32_t t89 = 21U;

    t89 = ((x397+x398)|(x399>x400));

    if (t89 != 39761U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x401 = 0;
	static volatile int8_t x403 = -1;
	static volatile int32_t x404 = 83;
	volatile int32_t t90 = -959;

    t90 = ((x401+x402)|(x403>x404));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x405 = UINT16_MAX;
	uint16_t x406 = 581U;
	uint16_t x407 = 11742U;
	static uint8_t x408 = 42U;
	volatile int32_t t91 = 63304621;

    t91 = ((x405+x406)|(x407>x408));

    if (t91 != 66117) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x413 = -1;
	uint16_t x414 = 19U;
	static int32_t t92 = 5;

    t92 = ((x413+x414)|(x415>x416));

    if (t92 != 18) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x420 = INT16_MIN;
	uint32_t t93 = 3676719U;

    t93 = ((x417+x418)|(x419>x420));

    if (t93 != 254458207U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x421 = 2533;
	int8_t x422 = INT8_MIN;
	static int16_t x423 = INT16_MAX;
	volatile int32_t t94 = 3420166;

    t94 = ((x421+x422)|(x423>x424));

    if (t94 != 2405) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x425 = 11190372315LLU;
	uint8_t x426 = 3U;
	uint64_t t95 = 3293533624105723LLU;

    t95 = ((x425+x426)|(x427>x428));

    if (t95 != 11190372319LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x429 = -997LL;
	static int32_t x430 = INT32_MAX;
	int64_t x431 = INT64_MIN;
	volatile int8_t x432 = INT8_MAX;
	static int64_t t96 = 527777234LL;

    t96 = ((x429+x430)|(x431>x432));

    if (t96 != 2147482650LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x433 = -65929164LL;
	int32_t x435 = -1;
	static uint16_t x436 = 40U;
	int64_t t97 = -58352988LL;

    t97 = ((x433+x434)|(x435>x436));

    if (t97 != -65929204LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x437 = 519353688078LLU;
	static volatile int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;

    t98 = ((x437+x438)|(x439>x440));

    if (t98 != 517206204430LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x441 = -1;
	volatile int16_t x442 = 158;
	volatile int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t99 = -45;

    t99 = ((x441+x442)|(x443>x444));

    if (t99 != 157) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x446 = 14U;
	int16_t x448 = -12667;
	static volatile uint32_t t100 = 0U;

    t100 = ((x445+x446)|(x447>x448));

    if (t100 != 114117U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x449 = 0U;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = -1;
	volatile int32_t t101 = -273;

    t101 = ((x449+x450)|(x451>x452));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x454 = UINT32_MAX;
	int64_t x455 = 7810144897995304LL;
	uint32_t x456 = 8585U;
	volatile uint64_t t102 = 2078063541098788468LLU;

    t102 = ((x453+x454)|(x455>x456));

    if (t102 != 4294975211LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x457 = INT32_MIN;
	uint8_t x458 = 69U;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t103 = -15;

    t103 = ((x457+x458)|(x459>x460));

    if (t103 != -2147483579) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x461 = 73U;
	int8_t x462 = INT8_MIN;
	uint16_t x464 = UINT16_MAX;
	int32_t t104 = -818731813;

    t104 = ((x461+x462)|(x463>x464));

    if (t104 != -55) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x466 = -1LL;
	static uint8_t x467 = 43U;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = ((x465+x466)|(x467>x468));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x473 = 11165U;
	uint32_t x474 = 2727322U;
	static int32_t x475 = -2812766;
	int64_t x476 = INT64_MAX;

    t106 = ((x473+x474)|(x475>x476));

    if (t106 != 2738487U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x478 = 12;
	int16_t x480 = INT16_MIN;
	volatile int32_t t107 = 10572064;

    t107 = ((x477+x478)|(x479>x480));

    if (t107 != -32756) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x481 = 0;
	int8_t x482 = INT8_MAX;
	uint64_t x483 = UINT64_MAX;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t108 = 125;

    t108 = ((x481+x482)|(x483>x484));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x485 = 1U;
	static int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	static uint64_t x488 = 7780290620356LLU;

    t109 = ((x485+x486)|(x487>x488));

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x489 = -1;
	volatile uint32_t x490 = 0U;
	int16_t x491 = 4941;
	uint32_t t110 = UINT32_MAX;

    t110 = ((x489+x490)|(x491>x492));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = INT8_MIN;
	static int16_t x495 = -618;
	int8_t x496 = -1;
	static int32_t t111 = 0;

    t111 = ((x493+x494)|(x495>x496));

    if (t111 != 32639) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = INT8_MIN;
	static int8_t x499 = 21;
	uint16_t x500 = 2586U;
	int32_t t112 = 27;

    t112 = ((x497+x498)|(x499>x500));

    if (t112 != 2147483519) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x502 = UINT16_MAX;
	volatile int32_t x504 = -7920451;

    t113 = ((x501+x502)|(x503>x504));

    if (t113 != 65535LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x505 = -2687;
	uint32_t x506 = 87217652U;
	uint32_t t114 = 376441U;

    t114 = ((x505+x506)|(x507>x508));

    if (t114 != 87214965U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x509 = UINT8_MAX;
	int8_t x510 = -1;
	static int64_t x511 = INT64_MIN;
	volatile uint8_t x512 = UINT8_MAX;
	int32_t t115 = -125308132;

    t115 = ((x509+x510)|(x511>x512));

    if (t115 != 254) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x513 = -1;
	int8_t x514 = -1;
	volatile int64_t x515 = 53136938175025LL;
	int64_t x516 = -78637284645LL;

    t116 = ((x513+x514)|(x515>x516));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x517 = 0U;
	int8_t x520 = INT8_MIN;
	int32_t t117 = -1;

    t117 = ((x517+x518)|(x519>x520));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x521 = 6346;
	uint16_t x522 = 0U;
	uint8_t x523 = 1U;
	uint32_t x524 = 1029807751U;
	int32_t t118 = 721438552;

    t118 = ((x521+x522)|(x523>x524));

    if (t118 != 6346) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = -1;
	int32_t x526 = INT32_MAX;
	uint8_t x527 = 32U;
	uint16_t x528 = 1U;

    t119 = ((x525+x526)|(x527>x528));

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x530 = INT64_MIN;
	volatile int64_t t120 = 11074700672LL;

    t120 = ((x529+x530)|(x531>x532));

    if (t120 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x534 = INT64_MIN;
	uint64_t x535 = UINT64_MAX;
	volatile int64_t x536 = 141372324639825830LL;

    t121 = ((x533+x534)|(x535>x536));

    if (t121 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x537 = -1;
	uint8_t x538 = 115U;
	int8_t x539 = 17;
	volatile int32_t t122 = -54050;

    t122 = ((x537+x538)|(x539>x540));

    if (t122 != 115) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x541 = 0;
	static uint16_t x542 = 48U;
	static volatile uint64_t x543 = 5929747010655615LLU;
	int32_t x544 = -5;
	int32_t t123 = -1;

    t123 = ((x541+x542)|(x543>x544));

    if (t123 != 48) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x545 = 0;
	int8_t x546 = -1;
	int16_t x547 = -21;
	static volatile uint32_t x548 = 8567793U;
	volatile int32_t t124 = 165;

    t124 = ((x545+x546)|(x547>x548));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 4834789886819023459LLU;
	int8_t x551 = -1;
	volatile uint64_t t125 = 18117072104137LLU;

    t125 = ((x549+x550)|(x551>x552));

    if (t125 != 4834789886819023458LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = UINT64_MAX;
	int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	int32_t x556 = -1;
	volatile uint64_t t126 = 272427614LLU;

    t126 = ((x553+x554)|(x555>x556));

    if (t126 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x557 = INT8_MIN;
	int8_t x559 = INT8_MIN;
	uint16_t x560 = 12767U;
	int32_t t127 = -40108;

    t127 = ((x557+x558)|(x559>x560));

    if (t127 != -124) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x562 = -58713356;
	static volatile int32_t x563 = INT32_MIN;
	int32_t x564 = -21442408;
	volatile int32_t t128 = -29524;

    t128 = ((x561+x562)|(x563>x564));

    if (t128 != -58647821) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MIN;
	static int64_t x568 = 1LL;
	static volatile int64_t t129 = 17523455592368LL;

    t129 = ((x565+x566)|(x567>x568));

    if (t129 != -2147483649LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MIN;
	volatile uint32_t x570 = 0U;
	int16_t x571 = INT16_MIN;
	static volatile uint32_t x572 = 48124U;
	uint32_t t130 = 313U;

    t130 = ((x569+x570)|(x571>x572));

    if (t130 != 2147483649U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint64_t x574 = 44972LLU;
	int8_t x575 = INT8_MIN;
	uint32_t x576 = 23018U;
	static volatile uint64_t t131 = 117080476555872762LLU;

    t131 = ((x573+x574)|(x575>x576));

    if (t131 != 18446744071562112941LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x581 = INT8_MIN;
	volatile uint64_t x582 = 16513738607LLU;
	static int8_t x584 = 12;
	uint64_t t132 = 2222692933281461364LLU;

    t132 = ((x581+x582)|(x583>x584));

    if (t132 != 16513738479LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x585 = -34;
	volatile int8_t x586 = INT8_MIN;
	uint16_t x587 = 0U;
	static int16_t x588 = INT16_MIN;
	int32_t t133 = 1106488;

    t133 = ((x585+x586)|(x587>x588));

    if (t133 != -161) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = INT32_MAX;
	volatile int8_t x594 = -1;
	uint16_t x595 = 87U;
	int32_t x596 = INT32_MIN;
	static int32_t t134 = INT32_MAX;

    t134 = ((x593+x594)|(x595>x596));

    if (t134 != INT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x597 = -1LL;
	uint16_t x598 = 102U;
	int8_t x599 = INT8_MIN;
	int64_t x600 = -425187LL;

    t135 = ((x597+x598)|(x599>x600));

    if (t135 != 101LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x601 = INT64_MAX;
	int8_t x602 = INT8_MIN;
	volatile int32_t x603 = -2;
	static uint32_t x604 = UINT32_MAX;
	volatile int64_t t136 = 2050371794887107745LL;

    t136 = ((x601+x602)|(x603>x604));

    if (t136 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x605 = 12U;
	int32_t x606 = -1;
	static int8_t x607 = 3;

    t137 = ((x605+x606)|(x607>x608));

    if (t137 != 11) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x609 = 5U;
	static uint32_t x611 = 5105U;
	uint16_t x612 = UINT16_MAX;
	uint32_t t138 = 15402U;

    t138 = ((x609+x610)|(x611>x612));

    if (t138 != 4U) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x618 = 36LLU;
	uint64_t x619 = 356LLU;
	int64_t x620 = -1LL;
	uint64_t t139 = 977916261195LLU;

    t139 = ((x617+x618)|(x619>x620));

    if (t139 != 18446744071562068004LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x621 = INT8_MIN;
	uint16_t x622 = UINT16_MAX;
	uint16_t x624 = UINT16_MAX;
	static int32_t t140 = 2;

    t140 = ((x621+x622)|(x623>x624));

    if (t140 != 65407) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x629 = -4194;
	int8_t x631 = INT8_MAX;
	int16_t x632 = 0;
	static int32_t t141 = 197;

    t141 = ((x629+x630)|(x631>x632));

    if (t141 != 3907) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x633 = INT16_MIN;
	uint16_t x634 = 11U;
	static volatile int64_t x635 = INT64_MIN;
	int8_t x636 = -1;
	int32_t t142 = -167;

    t142 = ((x633+x634)|(x635>x636));

    if (t142 != -32757) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x637 = INT16_MIN;
	int8_t x638 = -1;
	int64_t x639 = -320289503554086LL;
	static volatile uint32_t x640 = 27593U;

    t143 = ((x637+x638)|(x639>x640));

    if (t143 != -32769) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x642 = 884897349LLU;
	int64_t x644 = INT64_MIN;
	uint64_t t144 = 826842104329LLU;

    t144 = ((x641+x642)|(x643>x644));

    if (t144 != 884962885LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x645 = INT8_MIN;
	static int64_t x646 = INT64_MAX;
	volatile int8_t x647 = -1;
	int64_t x648 = 69960LL;
	volatile int64_t t145 = -7404894757LL;

    t145 = ((x645+x646)|(x647>x648));

    if (t145 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x653 = 1U;
	int16_t x654 = INT16_MAX;
	static volatile int8_t x655 = INT8_MIN;

    t146 = ((x653+x654)|(x655>x656));

    if (t146 != 32768) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x657 = 421U;
	volatile int32_t x658 = INT32_MIN;
	uint16_t x659 = 0U;

    t147 = ((x657+x658)|(x659>x660));

    if (t147 != 2147484069U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x661 = INT64_MIN;
	static uint32_t x662 = 2049692U;
	uint32_t x664 = 889140U;
	int64_t t148 = -20852LL;

    t148 = ((x661+x662)|(x663>x664));

    if (t148 != -9223372036852726115LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x670 = 900462009;
	uint32_t x671 = 104346530U;
	uint32_t x672 = UINT32_MAX;
	volatile int32_t t149 = -23500;

    t149 = ((x669+x670)|(x671>x672));

    if (t149 != 900462022) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x673 = 26623U;
	int64_t x674 = INT64_MIN;
	static int64_t x676 = INT64_MIN;
	volatile int64_t t150 = -8584819037122LL;

    t150 = ((x673+x674)|(x675>x676));

    if (t150 != -9223372036854749185LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x677 = INT64_MIN;
	uint8_t x678 = 81U;
	int32_t x680 = INT32_MIN;

    t151 = ((x677+x678)|(x679>x680));

    if (t151 != -9223372036854775727LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x681 = 28089416U;
	uint32_t x683 = UINT32_MAX;
	uint16_t x684 = 503U;
	static volatile uint32_t t152 = 10046704U;

    t152 = ((x681+x682)|(x683>x684));

    if (t152 != 2175573065U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x686 = UINT64_MAX;
	int16_t x687 = INT16_MIN;
	volatile uint8_t x688 = UINT8_MAX;
	uint64_t t153 = 4040922509452484415LLU;

    t153 = ((x685+x686)|(x687>x688));

    if (t153 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x689 = INT32_MIN;
	uint32_t x690 = UINT32_MAX;
	int64_t x691 = -1LL;
	static int32_t x692 = INT32_MIN;
	static volatile uint32_t t154 = 681U;

    t154 = ((x689+x690)|(x691>x692));

    if (t154 != 2147483647U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x693 = UINT64_MAX;
	int32_t x694 = INT32_MIN;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = 5;
	uint64_t t155 = 1565LLU;

    t155 = ((x693+x694)|(x695>x696));

    if (t155 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x697 = 417387953347870860LLU;
	static volatile uint16_t x698 = UINT16_MAX;
	int32_t x699 = INT32_MIN;
	int32_t x700 = INT32_MIN;

    t156 = ((x697+x698)|(x699>x700));

    if (t156 != 417387953347936395LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x701 = 1933326840U;
	uint32_t x702 = 6955U;
	volatile int8_t x703 = INT8_MIN;
	int16_t x704 = INT16_MAX;
	uint32_t t157 = 3947627U;

    t157 = ((x701+x702)|(x703>x704));

    if (t157 != 1933333795U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x705 = -23;
	volatile int64_t x707 = INT64_MIN;
	static int32_t x708 = INT32_MIN;
	int32_t t158 = -43;

    t158 = ((x705+x706)|(x707>x708));

    if (t158 != 32744) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x709 = -1;
	uint64_t x710 = UINT64_MAX;
	uint16_t x711 = UINT16_MAX;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = ((x709+x710)|(x711>x712));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x713 = INT16_MIN;
	static int16_t x714 = -1;
	uint16_t x716 = 3246U;

    t160 = ((x713+x714)|(x715>x716));

    if (t160 != -32769) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x725 = INT8_MAX;
	int32_t x726 = INT32_MIN;
	static uint8_t x727 = 3U;
	static int64_t x728 = INT64_MAX;

    t161 = ((x725+x726)|(x727>x728));

    if (t161 != -2147483521) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x729 = 16204U;
	int64_t x730 = 64LL;
	int32_t x731 = -2;
	uint32_t x732 = 14U;
	int64_t t162 = -132533698017301347LL;

    t162 = ((x729+x730)|(x731>x732));

    if (t162 != 16269LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x733 = INT32_MIN;
	uint64_t x734 = UINT64_MAX;
	int64_t x735 = 91670446LL;
	volatile uint16_t x736 = UINT16_MAX;
	volatile uint64_t t163 = 62LLU;

    t163 = ((x733+x734)|(x735>x736));

    if (t163 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x738 = INT8_MIN;
	int32_t x740 = INT32_MIN;
	volatile int32_t t164 = 2826547;

    t164 = ((x737+x738)|(x739>x740));

    if (t164 != -124) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x741 = 4U;
	volatile int32_t x743 = INT32_MIN;
	int64_t x744 = -1LL;
	volatile int32_t t165 = -3;

    t165 = ((x741+x742)|(x743>x744));

    if (t165 != 3) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x745 = 168752;
	uint16_t x746 = 536U;
	int64_t x747 = INT64_MIN;
	uint64_t x748 = 38LLU;
	volatile int32_t t166 = 271279;

    t166 = ((x745+x746)|(x747>x748));

    if (t166 != 169289) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x750 = INT64_MIN;
	int16_t x751 = 8046;
	int16_t x752 = INT16_MIN;
	volatile int64_t t167 = 8342931842LL;

    t167 = ((x749+x750)|(x751>x752));

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x754 = 3769161U;
	uint8_t x755 = 3U;
	static uint32_t t168 = 2283U;

    t168 = ((x753+x754)|(x755>x756));

    if (t168 != 3834697U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x757 = 1LL;
	static volatile int32_t x758 = INT32_MIN;
	int8_t x759 = INT8_MIN;
	int64_t x760 = INT64_MAX;
	int64_t t169 = 666850578762183776LL;

    t169 = ((x757+x758)|(x759>x760));

    if (t169 != -2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x761 = 3U;
	int64_t x762 = INT64_MIN;
	static int64_t x763 = -1LL;
	int64_t t170 = 0LL;

    t170 = ((x761+x762)|(x763>x764));

    if (t170 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x765 = INT16_MAX;
	static int64_t x766 = 0LL;
	int32_t x767 = -1;
	uint32_t x768 = 17232U;
	volatile int64_t t171 = 12LL;

    t171 = ((x765+x766)|(x767>x768));

    if (t171 != 32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x769 = INT32_MIN;
	uint32_t x770 = UINT32_MAX;
	static int64_t x771 = -3502LL;
	static volatile uint32_t x772 = 2366677U;
	volatile uint32_t t172 = 55U;

    t172 = ((x769+x770)|(x771>x772));

    if (t172 != 2147483647U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x777 = 510026359208939518LLU;
	int32_t x778 = 202562435;
	uint16_t x779 = UINT16_MAX;
	int64_t x780 = -1LL;
	volatile uint64_t t173 = 1709313LLU;

    t173 = ((x777+x778)|(x779>x780));

    if (t173 != 510026359411501953LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile uint64_t t174 = 1707947984213LLU;

    t174 = ((x781+x782)|(x783>x784));

    if (t174 != 242152431446LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x786 = 1175216895834LLU;
	volatile int64_t x788 = INT64_MIN;
	static volatile uint64_t t175 = 1279988882055932LLU;

    t175 = ((x785+x786)|(x787>x788));

    if (t175 != 1175216896005LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x789 = INT8_MAX;
	volatile int8_t x791 = -2;
	volatile int32_t t176 = -4417691;

    t176 = ((x789+x790)|(x791>x792));

    if (t176 != 32895) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x793 = 9U;
	static int64_t x794 = -1LL;
	static int64_t x795 = INT64_MIN;
	int64_t x796 = INT64_MIN;
	int64_t t177 = 135728488168062LL;

    t177 = ((x793+x794)|(x795>x796));

    if (t177 != 8LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x797 = UINT64_MAX;
	int32_t x798 = INT32_MAX;
	int64_t x800 = INT64_MIN;
	volatile uint64_t t178 = 5396638902477993LLU;

    t178 = ((x797+x798)|(x799>x800));

    if (t178 != 2147483646LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x801 = UINT8_MAX;
	uint64_t x803 = 1761954040LLU;
	uint64_t x804 = 8574428078879480357LLU;
	int64_t t179 = 774767416618030LL;

    t179 = ((x801+x802)|(x803>x804));

    if (t179 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x805 = -1;
	static uint32_t x806 = 4830398U;
	uint32_t x807 = 98431U;
	int32_t x808 = INT32_MIN;
	static uint32_t t180 = 872U;

    t180 = ((x805+x806)|(x807>x808));

    if (t180 != 4830397U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x809 = INT8_MIN;
	int8_t x811 = 1;
	static int32_t x812 = 1850;
	int32_t t181 = 159054881;

    t181 = ((x809+x810)|(x811>x812));

    if (t181 != 102747011) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x813 = 128378;
	uint32_t x814 = UINT32_MAX;

    t182 = ((x813+x814)|(x815>x816));

    if (t182 != 128377U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x818 = 1833413951543587766LL;
	static int8_t x820 = 0;
	static int64_t t183 = -16LL;

    t183 = ((x817+x818)|(x819>x820));

    if (t183 != 1833413951666777132LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x821 = 9204341U;
	int32_t x822 = INT32_MIN;
	volatile int64_t x823 = -2506LL;
	int8_t x824 = -1;
	volatile uint32_t t184 = 8U;

    t184 = ((x821+x822)|(x823>x824));

    if (t184 != 2156687989U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x825 = 49U;
	volatile uint16_t x827 = UINT16_MAX;
	int64_t x828 = -618791LL;
	uint64_t t185 = 7384413265549885LLU;

    t185 = ((x825+x826)|(x827>x828));

    if (t185 != 38509LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x829 = INT16_MIN;
	volatile int8_t x830 = INT8_MIN;
	int16_t x831 = 46;
	int32_t x832 = -36748;

    t186 = ((x829+x830)|(x831>x832));

    if (t186 != -32895) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x833 = 380170915;
	static volatile uint32_t x834 = 104U;
	int16_t x835 = INT16_MAX;
	uint8_t x836 = 9U;
	volatile uint32_t t187 = 3472484U;

    t187 = ((x833+x834)|(x835>x836));

    if (t187 != 380171019U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x837 = 6799309LLU;
	volatile int32_t x839 = INT32_MAX;
	int32_t x840 = INT32_MIN;
	volatile uint64_t t188 = 448391827068LLU;

    t188 = ((x837+x838)|(x839>x840));

    if (t188 != 6799347LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x841 = 2U;
	uint16_t x842 = 1527U;
	static uint8_t x843 = 77U;
	uint16_t x844 = UINT16_MAX;
	int32_t t189 = 57714;

    t189 = ((x841+x842)|(x843>x844));

    if (t189 != 1529) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x845 = INT32_MAX;
	int8_t x846 = INT8_MIN;
	uint8_t x847 = 43U;
	uint16_t x848 = 22U;
	static volatile int32_t t190 = 1959958;

    t190 = ((x845+x846)|(x847>x848));

    if (t190 != 2147483519) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x849 = 5U;
	int16_t x850 = INT16_MIN;
	int64_t x851 = INT64_MAX;
	static uint8_t x852 = 7U;
	volatile int32_t t191 = 15634;

    t191 = ((x849+x850)|(x851>x852));

    if (t191 != -32763) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x853 = 60;
	int8_t x854 = -56;
	uint16_t x855 = 28U;
	volatile int32_t t192 = 57475867;

    t192 = ((x853+x854)|(x855>x856));

    if (t192 != 5) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x862 = UINT8_MAX;
	int32_t x863 = 0;
	uint8_t x864 = 19U;

    t193 = ((x861+x862)|(x863>x864));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x869 = INT16_MIN;
	static uint64_t x870 = 233383LLU;
	int8_t x871 = -1;
	static volatile int64_t x872 = INT64_MIN;
	volatile uint64_t t194 = 479733279083341LLU;

    t194 = ((x869+x870)|(x871>x872));

    if (t194 != 200615LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x873 = 26U;
	uint64_t x875 = UINT64_MAX;
	int8_t x876 = -1;
	volatile int32_t t195 = -1;

    t195 = ((x873+x874)|(x875>x876));

    if (t195 != 32793) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x877 = -1091;
	int64_t x878 = -6964028LL;
	uint8_t x879 = 6U;
	volatile int8_t x880 = INT8_MIN;
	static int64_t t196 = -7289425LL;

    t196 = ((x877+x878)|(x879>x880));

    if (t196 != -6965119LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x881 = 1137178LLU;
	int32_t x882 = -1;
	uint64_t x883 = UINT64_MAX;
	uint32_t x884 = 103732295U;

    t197 = ((x881+x882)|(x883>x884));

    if (t197 != 1137177LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x889 = 2008U;
	volatile uint64_t x890 = UINT64_MAX;
	static uint16_t x891 = UINT16_MAX;
	static uint8_t x892 = UINT8_MAX;
	static uint64_t t198 = 10LLU;

    t198 = ((x889+x890)|(x891>x892));

    if (t198 != 2007LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x893 = 0;
	int8_t x895 = 1;
	static uint16_t x896 = UINT16_MAX;
	volatile uint32_t t199 = 205695U;

    t199 = ((x893+x894)|(x895>x896));

    if (t199 != 3U) { NG(); } else { ; }
	
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

