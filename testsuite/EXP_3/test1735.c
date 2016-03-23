
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

int32_t x2 = INT32_MIN;
int8_t x5 = INT8_MAX;
int16_t x6 = -1;
int64_t x10 = -1LL;
volatile int64_t x14 = -41840380677LL;
int8_t x16 = INT8_MAX;
static volatile uint8_t x21 = 2U;
int64_t t6 = 4441776675012LL;
static volatile int32_t x30 = INT32_MIN;
int8_t x31 = INT8_MAX;
static uint16_t x38 = 216U;
uint64_t x42 = UINT64_MAX;
int32_t x43 = 56177;
uint64_t x44 = 2769464182308LLU;
uint16_t x47 = 356U;
uint8_t x49 = 48U;
uint32_t x52 = 10U;
uint32_t x62 = UINT32_MAX;
int64_t x64 = 32967382892LL;
uint32_t x65 = 4479U;
int32_t x68 = -235818;
static volatile uint32_t t16 = 0U;
uint16_t x73 = UINT16_MAX;
volatile int32_t t18 = 311;
int16_t x78 = -1;
int64_t x81 = 5310856523013LL;
static uint16_t x85 = UINT16_MAX;
volatile int32_t t21 = -826;
static int64_t t22 = -201LL;
uint16_t x93 = UINT16_MAX;
uint16_t x96 = 2U;
static uint16_t x97 = UINT16_MAX;
int64_t x99 = 136073170650489LL;
static uint8_t x105 = 103U;
int32_t x106 = -9;
int32_t t27 = -3;
uint64_t x115 = UINT64_MAX;
static int16_t x117 = INT16_MAX;
uint16_t x120 = UINT16_MAX;
uint64_t x126 = 38734123858LLU;
int64_t x140 = 3556401LL;
static int16_t x142 = INT16_MAX;
static int8_t x147 = -1;
volatile int32_t x148 = -3110409;
volatile uint16_t x150 = UINT16_MAX;
int32_t t37 = -1;
int32_t t39 = 727140372;
int8_t x163 = -1;
uint16_t x167 = UINT16_MAX;
static int32_t x177 = 21856;
int16_t x179 = INT16_MIN;
static int32_t x180 = INT32_MIN;
static int64_t x187 = INT64_MIN;
int32_t t47 = INT32_MIN;
volatile uint8_t x195 = UINT8_MAX;
int64_t x197 = INT64_MIN;
int64_t t49 = -481082572LL;
int16_t x201 = -7;
uint8_t x204 = UINT8_MAX;
int64_t x209 = INT64_MAX;
volatile uint8_t x212 = 0U;
int64_t x214 = 488157877669899063LL;
volatile int64_t x222 = INT64_MIN;
volatile int64_t t55 = -1956227502LL;
uint8_t x225 = 3U;
int64_t x227 = 28876228331LL;
volatile int64_t x229 = -6168719429253LL;
int16_t x243 = -2275;
int32_t t60 = 9011;
int32_t t61 = -302512;
uint64_t t64 = 4954066016312LLU;
uint64_t t65 = 26824294917LLU;
int8_t x271 = -5;
static volatile int32_t t68 = INT32_MIN;
int64_t x278 = 959275470196LL;
volatile int64_t t69 = -8244426682LL;
static volatile int64_t x285 = -1LL;
volatile int64_t x286 = -1LL;
int16_t x287 = 0;
volatile int32_t x291 = INT32_MIN;
uint64_t x292 = 1131486LLU;
uint32_t x295 = 143770622U;
uint64_t x296 = 147106778718816886LLU;
volatile int64_t t73 = -3799927819371053LL;
int64_t x298 = -1801440572908346LL;
volatile int64_t t74 = -32025221LL;
int64_t x304 = 2848468551718916444LL;
volatile int32_t t77 = 0;
uint64_t x319 = 23812778077761072LLU;
int32_t t79 = 3199060;
static int16_t x321 = -10856;
volatile uint64_t x329 = 37287241653346526LLU;
volatile int64_t x337 = INT64_MAX;
uint16_t x340 = 9302U;
static volatile int32_t t88 = 117982;
int16_t x360 = INT16_MAX;
volatile uint64_t t90 = 99662487458LLU;
volatile int16_t x365 = INT16_MIN;
volatile int64_t x367 = INT64_MAX;
volatile int32_t t91 = 159;
int64_t x370 = -1LL;
volatile int32_t x374 = INT32_MIN;
int16_t x375 = -1;
int32_t x376 = INT32_MIN;
volatile int16_t x377 = INT16_MIN;
int64_t x378 = 7250327LL;
int8_t x384 = INT8_MIN;
volatile int64_t t100 = -4905571LL;
uint32_t x410 = 28798507U;
int32_t x413 = 30509068;
static volatile uint64_t x416 = 318701574025LLU;
int32_t t105 = 90941;
static uint32_t x436 = 71173U;
uint32_t t108 = 1039162U;
int16_t x438 = 6;
uint16_t x442 = 4278U;
volatile int64_t x444 = INT64_MIN;
volatile int32_t t110 = -33294873;
uint64_t x448 = 17566545LLU;
static int16_t x449 = -1;
int16_t x451 = 9;
int16_t x452 = INT16_MAX;
uint32_t x457 = UINT32_MAX;
int8_t x462 = INT8_MIN;
static volatile int32_t x463 = -59;
int32_t t115 = -325783;
uint8_t x469 = UINT8_MAX;
uint32_t x474 = 10U;
uint32_t x480 = 49315U;
int16_t x484 = INT16_MIN;
int8_t x485 = -1;
static uint32_t x486 = UINT32_MAX;
int32_t x499 = 8;
int32_t t124 = 10398100;
int64_t x502 = 1LL;
volatile int64_t x510 = INT64_MIN;
int32_t x515 = INT32_MIN;
int32_t x516 = INT32_MIN;
volatile int64_t t128 = INT64_MAX;
uint16_t x530 = 0U;
volatile int8_t x531 = 1;
int8_t x539 = INT8_MAX;
static volatile int8_t x542 = 5;
volatile int32_t x547 = INT32_MIN;
int32_t t136 = -3364;
volatile int8_t x549 = 4;
volatile int8_t x550 = INT8_MAX;
uint8_t x552 = 2U;
int32_t x554 = -1;
int32_t x558 = INT32_MIN;
static int32_t t140 = -235;
uint32_t x567 = 456717U;
int16_t x569 = INT16_MIN;
uint8_t x580 = 0U;
int64_t x587 = -3LL;
int32_t x592 = INT32_MIN;
int16_t x593 = INT16_MAX;
int32_t x594 = 12634;
static uint16_t x597 = 14984U;
int16_t x599 = INT16_MIN;
volatile uint64_t t150 = 1308178331064954LLU;
int8_t x605 = -16;
uint64_t x607 = 33285867827423822LLU;
uint16_t x612 = 4U;
uint16_t x614 = 4890U;
int64_t x618 = 5788838LL;
int32_t x628 = INT32_MIN;
int64_t x639 = INT64_MIN;
static int32_t t159 = 296326937;
uint32_t x642 = UINT32_MAX;
volatile uint64_t x647 = 10634LLU;
static uint8_t x648 = 2U;
volatile int8_t x652 = INT8_MIN;
int8_t x656 = INT8_MIN;
uint32_t x659 = UINT32_MAX;
static uint8_t x664 = 53U;
static int64_t t165 = INT64_MIN;
int64_t x665 = -1LL;
int16_t x667 = -120;
volatile int32_t x690 = 187178;
int8_t x691 = INT8_MIN;
static uint32_t x696 = UINT32_MAX;
int8_t x700 = 0;
volatile int8_t x703 = INT8_MAX;
static volatile int32_t x709 = INT32_MIN;
uint16_t x712 = UINT16_MAX;
volatile int32_t t177 = INT32_MIN;
int16_t x716 = -14823;
volatile int64_t t178 = -492721LL;
int16_t x717 = INT16_MIN;
uint32_t x722 = UINT32_MAX;
int32_t x729 = -1;
uint32_t x730 = 200U;
static uint32_t t182 = 126175U;
volatile int64_t x738 = INT64_MAX;
static int64_t x742 = INT64_MIN;
volatile int64_t t185 = INT64_MIN;
int16_t x753 = 118;
int32_t x754 = INT32_MIN;
uint64_t x757 = 23543LLU;
volatile uint64_t x759 = UINT64_MAX;
volatile int16_t x764 = INT16_MIN;
volatile int64_t x768 = 4175229582390LL;
int16_t x769 = -1;
volatile int16_t x772 = -1;
static uint8_t x774 = UINT8_MAX;
int16_t x778 = -3173;
int64_t x783 = INT64_MIN;
volatile int32_t t195 = -288;
static int8_t x787 = 1;
int16_t x788 = 15852;
volatile int64_t x789 = 73LL;
volatile int32_t x790 = INT32_MIN;
uint64_t t198 = 926856LLU;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	volatile int8_t x3 = 0;
	uint32_t x4 = 0U;
	int32_t t0 = 252534;

    t0 = ((x1&x2)|(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x7 = 34;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -91590;

    t1 = ((x5&x6)|(x7>x8));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 596LLU;
	int64_t x11 = 270062LL;
	int32_t x12 = -7;
	static uint64_t t2 = 14684512LLU;

    t2 = ((x9&x10)|(x11>x12));

    if (t2 != 597LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 47;
	int8_t x15 = INT8_MIN;
	volatile int64_t t3 = -999662963164LL;

    t3 = ((x13&x14)|(x15>x16));

    if (t3 != 43LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MAX;
	static int8_t x19 = -1;
	uint16_t x20 = 12043U;
	int32_t t4 = -17;

    t4 = ((x17&x18)|(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = -4;
	int32_t x23 = -2218862;
	uint32_t x24 = 2363U;
	volatile int32_t t5 = -95158;

    t5 = ((x21&x22)|(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x26 = -1LL;
	static uint64_t x27 = 6332723287368808LLU;
	int64_t x28 = -1LL;

    t6 = ((x25&x26)|(x27>x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint64_t x32 = 363263LLU;
	int32_t t7 = INT32_MIN;

    t7 = ((x29&x30)|(x31>x32));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	static int64_t x34 = -1LL;
	static volatile uint16_t x35 = 15496U;
	uint64_t x36 = UINT64_MAX;
	int64_t t8 = 396259416283LL;

    t8 = ((x33&x34)|(x35>x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	volatile int16_t x39 = -1;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 3503952LLU;

    t9 = ((x37&x38)|(x39>x40));

    if (t9 != 217LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x41&x42)|(x43>x44));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int32_t x46 = -1044481;
	int64_t x48 = -1607LL;
	volatile int32_t t11 = -134;

    t11 = ((x45&x46)|(x47>x48));

    if (t11 != -1048575) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x50 = 1;
	int64_t x51 = -1LL;
	static volatile int32_t t12 = -2788;

    t12 = ((x49&x50)|(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint64_t x54 = 9293444199138397LLU;
	int32_t x55 = INT32_MIN;
	static int8_t x56 = -1;
	volatile uint64_t t13 = 4084911080849LLU;

    t13 = ((x53&x54)|(x55>x56));

    if (t13 != 9293444199138304LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = -61461967849LL;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 8545901U;

    t14 = ((x57&x58)|(x59>x60));

    if (t14 != 65535U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MAX;
	int8_t x63 = -1;
	static uint32_t t15 = 4U;

    t15 = ((x61&x62)|(x63>x64));

    if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 724LLU;

    t16 = ((x65&x66)|(x67>x68));

    if (t16 != 4479U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	uint16_t x70 = 809U;
	int32_t x71 = 400738654;
	volatile uint8_t x72 = UINT8_MAX;
	static int32_t t17 = 15;

    t17 = ((x69&x70)|(x71>x72));

    if (t17 != 41) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	static uint16_t x75 = UINT16_MAX;
	volatile int8_t x76 = -1;

    t18 = ((x73&x74)|(x75>x76));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	static volatile int32_t x79 = 142;
	static volatile int64_t x80 = -307093196973407588LL;
	static int32_t t19 = 14894;

    t19 = ((x77&x78)|(x79>x80));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MIN;
	uint32_t x83 = 341569321U;
	int16_t x84 = INT16_MIN;
	static int64_t t20 = 26949753620010LL;

    t20 = ((x81&x82)|(x83>x84));

    if (t20 != 5310856495104LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MIN;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = 9497980093713LL;

    t21 = ((x85&x86)|(x87>x88));

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	static int64_t x90 = INT64_MAX;
	volatile int16_t x91 = 4;
	int32_t x92 = INT32_MIN;

    t22 = ((x89&x90)|(x91>x92));

    if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = -2706704;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t t23 = 6550;

    t23 = ((x93&x94)|(x95>x96));

    if (t23 != 45809) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MIN;
	uint64_t x100 = 38618240813LLU;
	static volatile int64_t t24 = -567LL;

    t24 = ((x97&x98)|(x99>x100));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	static int16_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int64_t x104 = 3419LL;
	static uint64_t t25 = UINT64_MAX;

    t25 = ((x101&x102)|(x103>x104));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = 0;

    t26 = ((x105&x106)|(x107>x108));

    if (t26 != 103) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MAX;
	uint8_t x110 = 10U;
	int32_t x111 = 209543;
	int8_t x112 = -16;

    t27 = ((x109&x110)|(x111>x112));

    if (t27 != 11) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	int32_t x114 = INT32_MIN;
	static int16_t x116 = -1;
	static int32_t t28 = -175;

    t28 = ((x113&x114)|(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	static int8_t x119 = INT8_MIN;
	volatile int32_t t29 = 527;

    t29 = ((x117&x118)|(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	volatile int32_t x123 = -1;
	static int16_t x124 = -1;
	uint64_t t30 = UINT64_MAX;

    t30 = ((x121&x122)|(x123>x124));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -28;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MAX;
	uint64_t t31 = 345642712643LLU;

    t31 = ((x125&x126)|(x127>x128));

    if (t31 != 38734123840LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x129 = 7104LLU;
	int16_t x130 = INT16_MAX;
	uint64_t x131 = 11LLU;
	int8_t x132 = 0;
	uint64_t t32 = 333150139441335LLU;

    t32 = ((x129&x130)|(x131>x132));

    if (t32 != 7105LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	int16_t x134 = 0;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t33 = -6;

    t33 = ((x133&x134)|(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = -737168783515313LL;
	volatile uint8_t x138 = 41U;
	static volatile int64_t x139 = -1LL;
	int64_t t34 = 15462LL;

    t34 = ((x137&x138)|(x139>x140));

    if (t34 != 9LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 57U;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	uint32_t t35 = 364643U;

    t35 = ((x141&x142)|(x143>x144));

    if (t35 != 57U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	int64_t t36 = 1221LL;

    t36 = ((x145&x146)|(x147>x148));

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	int32_t x151 = -1;
	volatile int8_t x152 = INT8_MAX;

    t37 = ((x149&x150)|(x151>x152));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = 1U;
	volatile int32_t x154 = INT32_MIN;
	volatile int8_t x155 = INT8_MIN;
	volatile uint32_t x156 = 164U;
	static uint32_t t38 = 10405U;

    t38 = ((x153&x154)|(x155>x156));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	uint8_t x158 = 1U;
	uint16_t x159 = 15U;
	static int8_t x160 = -1;

    t39 = ((x157&x158)|(x159>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -1863;

    t40 = ((x161&x162)|(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MIN;
	static int32_t x166 = -1;
	int32_t x168 = -1;
	volatile int32_t t41 = 116;

    t41 = ((x165&x166)|(x167>x168));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	static int8_t x170 = 1;
	static int64_t x171 = 73345859LL;
	uint64_t x172 = 12LLU;
	static volatile int32_t t42 = 479679289;

    t42 = ((x169&x170)|(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	int32_t x174 = 391837820;
	uint64_t x175 = 129269143233304LLU;
	volatile int64_t x176 = -1LL;
	volatile int32_t t43 = 53584;

    t43 = ((x173&x174)|(x175>x176));

    if (t43 != 391806976) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x178 = 16U;
	static int32_t t44 = 130450472;

    t44 = ((x177&x178)|(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = 8120043661422482050LLU;
	volatile int8_t x182 = -1;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 1U;
	static volatile uint64_t t45 = 7521LLU;

    t45 = ((x181&x182)|(x183>x184));

    if (t45 != 8120043661422482050LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	static volatile uint8_t x186 = 2U;
	int64_t x188 = INT64_MAX;
	static int32_t t46 = 50;

    t46 = ((x185&x186)|(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	static uint8_t x191 = 76U;
	int32_t x192 = INT32_MAX;

    t47 = ((x189&x190)|(x191>x192));

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -1LL;
	int64_t x194 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	volatile int64_t t48 = INT64_MAX;

    t48 = ((x193&x194)|(x195>x196));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x198 = 3665722544LL;
	volatile uint64_t x199 = UINT64_MAX;
	volatile int16_t x200 = -1;

    t49 = ((x197&x198)|(x199>x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MAX;
	int32_t t50 = 7992621;

    t50 = ((x201&x202)|(x203>x204));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -1023290;

    t51 = ((x205&x206)|(x207>x208));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = -2;
	int32_t x211 = INT32_MAX;
	volatile int64_t t52 = INT64_MAX;

    t52 = ((x209&x210)|(x211>x212));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MIN;
	volatile uint64_t x215 = 196451973LLU;
	static volatile int8_t x216 = -24;
	int64_t t53 = -7LL;

    t53 = ((x213&x214)|(x215>x216));

    if (t53 != 488157876112588800LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	volatile uint16_t x218 = 59U;
	int32_t x219 = 228;
	int32_t x220 = -9346806;
	volatile int32_t t54 = -344037;

    t54 = ((x217&x218)|(x219>x220));

    if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	int16_t x224 = -472;

    t55 = ((x221&x222)|(x223>x224));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = -1;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -45759977;

    t56 = ((x225&x226)|(x227>x228));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x230 = UINT64_MAX;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 323;
	uint64_t t57 = 4131974351827LLU;

    t57 = ((x229&x230)|(x231>x232));

    if (t57 != 18446737904990122363LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x233 = 1261817193095LLU;
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = 118U;
	volatile uint64_t t58 = 965661140LLU;

    t58 = ((x233&x234)|(x235>x236));

    if (t58 != 135LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 3U;
	int32_t x238 = -1;
	int32_t x239 = -659874;
	int8_t x240 = -8;
	int32_t t59 = 414;

    t59 = ((x237&x238)|(x239>x240));

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -5755;
	volatile int8_t x242 = INT8_MAX;
	int16_t x244 = INT16_MIN;

    t60 = ((x241&x242)|(x243>x244));

    if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1;
	static int16_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = 3;

    t61 = ((x245&x246)|(x247>x248));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static int32_t x250 = INT32_MIN;
	volatile uint8_t x251 = 115U;
	static uint64_t x252 = 134014775260637479LLU;
	volatile int32_t t62 = INT32_MIN;

    t62 = ((x249&x250)|(x251>x252));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 45396LLU;
	static volatile int8_t x256 = -1;
	int64_t t63 = 32376819LL;

    t63 = ((x253&x254)|(x255>x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = 3;
	uint64_t x258 = 149017574LLU;
	int32_t x259 = -1;
	int64_t x260 = -1LL;

    t64 = ((x257&x258)|(x259>x260));

    if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint64_t x262 = 29044730681512513LLU;
	volatile uint8_t x263 = 1U;
	int8_t x264 = INT8_MIN;

    t65 = ((x261&x262)|(x263>x264));

    if (t65 != 29044730681512449LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -416172018796700739LL;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = -1004562952556228908LL;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t66 = 3LLU;

    t66 = ((x265&x266)|(x267>x268));

    if (t66 != 18030572054912850877LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MIN;
	static int32_t x272 = -429887018;
	static volatile uint64_t t67 = 728506LLU;

    t67 = ((x269&x270)|(x271>x272));

    if (t67 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	int16_t x276 = 2051;

    t68 = ((x273&x274)|(x275>x276));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	uint64_t x279 = UINT64_MAX;
	static int32_t x280 = -71;

    t69 = ((x277&x278)|(x279>x280));

    if (t69 != 3445LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MAX;
	static int64_t t70 = INT64_MIN;

    t70 = ((x281&x282)|(x283>x284));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x288 = -471800;
	int64_t t71 = 1LL;

    t71 = ((x285&x286)|(x287>x288));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = 280;
	int16_t x290 = -1;
	int32_t t72 = 3214;

    t72 = ((x289&x290)|(x291>x292));

    if (t72 != 281) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MAX;

    t73 = ((x293&x294)|(x295>x296));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = -806046583184896LL;

    t74 = ((x297&x298)|(x299>x300));

    if (t74 != -1801440572908345LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -12;
	uint8_t x302 = 2U;
	uint8_t x303 = 24U;
	static int32_t t75 = -20;

    t75 = ((x301&x302)|(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 5815366;
	uint16_t x306 = 420U;
	int8_t x307 = INT8_MIN;
	volatile int8_t x308 = -1;
	int32_t t76 = -889747731;

    t76 = ((x305&x306)|(x307>x308));

    if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -243685602;
	static uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	uint32_t x312 = UINT32_MAX;

    t77 = ((x309&x310)|(x311>x312));

    if (t77 != 42783) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	static volatile int8_t x314 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	static uint64_t x316 = 29719581596473LLU;
	int32_t t78 = -4417;

    t78 = ((x313&x314)|(x315>x316));

    if (t78 != 65409) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	static int32_t x318 = INT32_MIN;
	int64_t x320 = -50543227LL;

    t79 = ((x317&x318)|(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = 143566308LLU;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MIN;
	uint64_t t80 = 447100LLU;

    t80 = ((x321&x322)|(x323>x324));

    if (t80 != 143558017LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x326 = 1082;
	int8_t x327 = -1;
	int64_t x328 = -1LL;
	volatile int32_t t81 = -303329;

    t81 = ((x325&x326)|(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = -315820668;
	volatile int8_t x331 = 14;
	int64_t x332 = INT64_MIN;
	static volatile uint64_t t82 = 973831243LLU;

    t82 = ((x329&x330)|(x331>x332));

    if (t82 != 37287241380585605LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	int8_t x334 = 3;
	int16_t x335 = INT16_MAX;
	static int64_t x336 = -1LL;
	volatile int64_t t83 = 0LL;

    t83 = ((x333&x334)|(x335>x336));

    if (t83 != 3LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MIN;
	uint32_t x339 = UINT32_MAX;
	int64_t t84 = -2925793138LL;

    t84 = ((x337&x338)|(x339>x340));

    if (t84 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t x341 = UINT32_MAX;
	int8_t x342 = 2;
	int16_t x343 = 317;
	static int16_t x344 = INT16_MAX;
	static volatile uint32_t t85 = 8394519U;

    t85 = ((x341&x342)|(x343>x344));

    if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -16072;
	int16_t x347 = 197;
	int32_t x348 = INT32_MIN;
	int32_t t86 = -4118;

    t86 = ((x345&x346)|(x347>x348));

    if (t86 != 57) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	static volatile int64_t x351 = -1LL;
	static volatile int8_t x352 = INT8_MAX;
	int32_t t87 = 5639;

    t87 = ((x349&x350)|(x351>x352));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MIN;
	static int8_t x354 = 2;
	volatile uint32_t x355 = 3U;
	int8_t x356 = -11;

    t88 = ((x353&x354)|(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = -1;
	volatile int8_t x358 = 1;
	volatile int16_t x359 = INT16_MAX;
	int32_t t89 = -4547582;

    t89 = ((x357&x358)|(x359>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 201LLU;
	int16_t x362 = -1;
	int64_t x363 = INT64_MIN;
	volatile int8_t x364 = INT8_MIN;

    t90 = ((x361&x362)|(x363>x364));

    if (t90 != 201LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = -1;
	volatile int8_t x368 = INT8_MAX;

    t91 = ((x365&x366)|(x367>x368));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -115;
	int32_t x371 = INT32_MIN;
	static int64_t x372 = -11LL;
	static int64_t t92 = 5365733902263232LL;

    t92 = ((x369&x370)|(x371>x372));

    if (t92 != -115LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -1;
	volatile int32_t t93 = 4493;

    t93 = ((x373&x374)|(x375>x376));

    if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x379 = INT32_MIN;
	static volatile uint32_t x380 = 7U;
	volatile int64_t t94 = 2894991LL;

    t94 = ((x377&x378)|(x379>x380));

    if (t94 != 7241729LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 58U;
	static volatile int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	volatile int32_t t95 = -197;

    t95 = ((x381&x382)|(x383>x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = INT8_MAX;
	static volatile int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 1132;

    t96 = ((x385&x386)|(x387>x388));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 1844506587U;
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 4431U;
	static volatile int64_t x392 = INT64_MIN;
	volatile uint64_t t97 = 2894377507LLU;

    t97 = ((x389&x390)|(x391>x392));

    if (t97 != 1844506587LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -984LL;
	volatile int32_t x394 = INT32_MIN;
	volatile uint16_t x395 = UINT16_MAX;
	static uint32_t x396 = 7U;
	int64_t t98 = 43766129LL;

    t98 = ((x393&x394)|(x395>x396));

    if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	int32_t x398 = -254952;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = 1997553;

    t99 = ((x397&x398)|(x399>x400));

    if (t99 != 7192) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 0U;
	volatile int64_t x402 = 23322418LL;
	uint64_t x403 = 26383913212LLU;
	int8_t x404 = INT8_MIN;

    t100 = ((x401&x402)|(x403>x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 1335612258U;
	int16_t x406 = -1741;
	volatile uint64_t x407 = 48771280918742LLU;
	int16_t x408 = INT16_MIN;
	uint32_t t101 = 195U;

    t101 = ((x405&x406)|(x407>x408));

    if (t101 != 1335611682U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	int8_t x411 = INT8_MIN;
	static int64_t x412 = 928768712LL;
	uint32_t t102 = 2U;

    t102 = ((x409&x410)|(x411>x412));

    if (t102 != 28798507U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile int64_t t103 = -2814160070821271224LL;

    t103 = ((x413&x414)|(x415>x416));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = 493636509422LLU;
	uint8_t x420 = UINT8_MAX;
	int32_t t104 = 480744;

    t104 = ((x417&x418)|(x419>x420));

    if (t104 != -127) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = 1299394;
	int32_t x422 = -1;
	volatile int32_t x423 = -131;
	int32_t x424 = INT32_MAX;

    t105 = ((x421&x422)|(x423>x424));

    if (t105 != 1299394) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = INT64_MIN;
	int64_t x426 = -1LL;
	static int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	volatile int64_t t106 = INT64_MIN;

    t106 = ((x425&x426)|(x427>x428));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile uint32_t x430 = 1041763199U;
	volatile int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t107 = 10U;

    t107 = ((x429&x430)|(x431>x432));

    if (t107 != 127U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 2860356U;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MAX;

    t108 = ((x433&x434)|(x435>x436));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x437 = UINT32_MAX;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MAX;
	volatile uint32_t t109 = 84510819U;

    t109 = ((x437&x438)|(x439>x440));

    if (t109 != 6U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = 122U;
	volatile uint16_t x443 = UINT16_MAX;

    t110 = ((x441&x442)|(x443>x444));

    if (t110 != 51) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 5U;
	uint32_t x446 = 1U;
	int16_t x447 = INT16_MIN;
	static volatile uint32_t t111 = 1U;

    t111 = ((x445&x446)|(x447>x448));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = INT32_MIN;
	volatile int32_t t112 = INT32_MIN;

    t112 = ((x449&x450)|(x451>x452));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x453 = UINT8_MAX;
	uint64_t x454 = 4339506376769LLU;
	uint32_t x455 = 26U;
	uint16_t x456 = UINT16_MAX;
	uint64_t t113 = 3649443620665018LLU;

    t113 = ((x453&x454)|(x455>x456));

    if (t113 != 65LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = INT8_MAX;
	int32_t x459 = INT32_MIN;
	int8_t x460 = 1;
	uint32_t t114 = 1475271U;

    t114 = ((x457&x458)|(x459>x460));

    if (t114 != 127U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = INT8_MIN;
	int8_t x464 = INT8_MAX;

    t115 = ((x461&x462)|(x463>x464));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x465 = 5U;
	static volatile int64_t x466 = -101385711LL;
	volatile uint8_t x467 = 7U;
	int64_t x468 = -1LL;
	int64_t t116 = -309862LL;

    t116 = ((x465&x466)|(x467>x468));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	int8_t x471 = -1;
	volatile int16_t x472 = INT16_MIN;
	int32_t t117 = 403268250;

    t117 = ((x469&x470)|(x471>x472));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int64_t x475 = -2092717161LL;
	static int16_t x476 = INT16_MAX;
	uint32_t t118 = 246994258U;

    t118 = ((x473&x474)|(x475>x476));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 2U;
	int8_t x478 = 44;
	static int8_t x479 = -4;
	int32_t t119 = 2071896;

    t119 = ((x477&x478)|(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MAX;
	uint16_t x482 = 9U;
	int8_t x483 = INT8_MIN;
	int32_t t120 = -16159;

    t120 = ((x481&x482)|(x483>x484));

    if (t120 != 9) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x487 = UINT32_MAX;
	volatile uint16_t x488 = 707U;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = ((x485&x486)|(x487>x488));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = 968874LLU;
	uint16_t x490 = UINT16_MAX;
	volatile int16_t x491 = -396;
	static volatile int16_t x492 = INT16_MIN;
	volatile uint64_t t122 = 13688402689274LLU;

    t122 = ((x489&x490)|(x491>x492));

    if (t122 != 51371LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = INT8_MAX;
	int8_t x495 = 35;
	int32_t x496 = INT32_MIN;
	volatile uint64_t t123 = 5721563878LLU;

    t123 = ((x493&x494)|(x495>x496));

    if (t123 != 127LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	static uint16_t x498 = UINT16_MAX;
	int32_t x500 = -379;

    t124 = ((x497&x498)|(x499>x500));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 461337U;
	uint32_t x503 = 2U;
	int8_t x504 = INT8_MIN;
	volatile int64_t t125 = -13093196362818LL;

    t125 = ((x501&x502)|(x503>x504));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = 11;
	int32_t x506 = -1;
	volatile uint16_t x507 = 18716U;
	int32_t x508 = INT32_MAX;
	int32_t t126 = -611;

    t126 = ((x505&x506)|(x507>x508));

    if (t126 != 11) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 904376487U;
	static int16_t x511 = INT16_MAX;
	int8_t x512 = INT8_MAX;
	volatile int64_t t127 = -850261603938LL;

    t127 = ((x509&x510)|(x511>x512));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	volatile int64_t x514 = INT64_MAX;

    t128 = ((x513&x514)|(x515>x516));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 8U;
	static int64_t x518 = INT64_MIN;
	static uint16_t x519 = 3050U;
	uint64_t x520 = UINT64_MAX;
	volatile int64_t t129 = 435865589392LL;

    t129 = ((x517&x518)|(x519>x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 1U;
	int16_t x523 = 1;
	int32_t x524 = 12346243;
	volatile uint32_t t130 = 1021U;

    t130 = ((x521&x522)|(x523>x524));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x526 = INT8_MAX;
	volatile int32_t x527 = 149985;
	static volatile uint32_t x528 = 45417U;
	int32_t t131 = -1;

    t131 = ((x525&x526)|(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	static volatile int16_t x532 = INT16_MAX;
	int32_t t132 = -22229731;

    t132 = ((x529&x530)|(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MAX;
	static int32_t x534 = INT32_MIN;
	uint8_t x535 = UINT8_MAX;
	int32_t x536 = INT32_MIN;
	volatile int32_t t133 = 14917936;

    t133 = ((x533&x534)|(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = 21618;
	uint16_t x538 = 0U;
	static int16_t x540 = INT16_MIN;
	int32_t t134 = 0;

    t134 = ((x537&x538)|(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	uint64_t x543 = 227774939LLU;
	volatile uint32_t x544 = 114U;
	volatile uint32_t t135 = 683302U;

    t135 = ((x541&x542)|(x543>x544));

    if (t135 != 5U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int8_t x546 = -1;
	int16_t x548 = INT16_MIN;

    t136 = ((x545&x546)|(x547>x548));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x551 = INT8_MAX;
	static int32_t t137 = 520849615;

    t137 = ((x549&x550)|(x551>x552));

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 4391U;
	int8_t x555 = -1;
	int16_t x556 = INT16_MAX;
	volatile int32_t t138 = -237846085;

    t138 = ((x553&x554)|(x555>x556));

    if (t138 != 4391) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = -1LL;
	int64_t x559 = INT64_MIN;
	int64_t x560 = INT64_MIN;
	static volatile int64_t t139 = 2271208843891301378LL;

    t139 = ((x557&x558)|(x559>x560));

    if (t139 != -2147483648LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MIN;
	int8_t x563 = INT8_MIN;
	int32_t x564 = INT32_MAX;

    t140 = ((x561&x562)|(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	static int8_t x566 = INT8_MAX;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t141 = -198510841;

    t141 = ((x565&x566)|(x567>x568));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x570 = INT8_MIN;
	volatile int64_t x571 = INT64_MIN;
	static int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 2750712;

    t142 = ((x569&x570)|(x571>x572));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	uint16_t x574 = 15U;
	uint64_t x575 = UINT64_MAX;
	volatile int16_t x576 = INT16_MIN;
	volatile int64_t t143 = -160270750117054LL;

    t143 = ((x573&x574)|(x575>x576));

    if (t143 != 15LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = -1LL;
	static int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	int64_t t144 = 210920897LL;

    t144 = ((x577&x578)|(x579>x580));

    if (t144 != -128LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 517783U;
	uint8_t x582 = 11U;
	static int64_t x583 = -1LL;
	int64_t x584 = INT64_MIN;
	uint32_t t145 = 568242457U;

    t145 = ((x581&x582)|(x583>x584));

    if (t145 != 3U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = -1;
	volatile uint16_t x586 = UINT16_MAX;
	int32_t x588 = -1;
	volatile int32_t t146 = 66475970;

    t146 = ((x585&x586)|(x587>x588));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 2052778054U;
	volatile uint32_t x590 = 582494784U;
	uint16_t x591 = 0U;
	volatile uint32_t t147 = 9736797U;

    t147 = ((x589&x590)|(x591>x592));

    if (t147 != 572008513U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x595 = -50;
	uint16_t x596 = 6U;
	int32_t t148 = 667;

    t148 = ((x593&x594)|(x595>x596));

    if (t148 != 12634) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = UINT64_MAX;
	uint32_t x600 = 1369U;
	uint64_t t149 = 146069812704LLU;

    t149 = ((x597&x598)|(x599>x600));

    if (t149 != 14985LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	uint64_t x602 = UINT64_MAX;
	uint8_t x603 = 114U;
	static int16_t x604 = INT16_MIN;

    t150 = ((x601&x602)|(x603>x604));

    if (t150 != 65535LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x606 = 14U;
	static int8_t x608 = INT8_MAX;
	int32_t t151 = 11809;

    t151 = ((x605&x606)|(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	int32_t x610 = -38997049;
	int32_t x611 = INT32_MIN;
	int32_t t152 = 7752;

    t152 = ((x609&x610)|(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	uint64_t x615 = 713LLU;
	static int8_t x616 = -1;
	volatile int64_t t153 = 207576619381LL;

    t153 = ((x613&x614)|(x615>x616));

    if (t153 != 4890LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int8_t x619 = INT8_MIN;
	volatile int8_t x620 = INT8_MIN;
	static volatile int64_t t154 = 33416738979597LL;

    t154 = ((x617&x618)|(x619>x620));

    if (t154 != 5788838LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x621 = 500U;
	volatile int32_t x622 = INT32_MAX;
	static uint16_t x623 = UINT16_MAX;
	static int32_t x624 = INT32_MIN;
	static uint32_t t155 = 2337100U;

    t155 = ((x621&x622)|(x623>x624));

    if (t155 != 501U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 15;
	uint8_t x626 = UINT8_MAX;
	int16_t x627 = -15;
	int32_t t156 = 12552;

    t156 = ((x625&x626)|(x627>x628));

    if (t156 != 15) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	volatile uint8_t x630 = 61U;
	static int8_t x631 = -1;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t157 = 7;

    t157 = ((x629&x630)|(x631>x632));

    if (t157 != 61) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = INT8_MIN;
	uint8_t x635 = 72U;
	uint32_t x636 = 127U;
	int64_t t158 = INT64_MIN;

    t158 = ((x633&x634)|(x635>x636));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 1;
	int32_t x638 = INT32_MIN;
	uint16_t x640 = 3641U;

    t159 = ((x637&x638)|(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -108156124091LL;
	int32_t x643 = INT32_MAX;
	int8_t x644 = 31;
	volatile int64_t t160 = 62819740307800570LL;

    t160 = ((x641&x642)|(x643>x644));

    if (t160 != 3513025605LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	static uint64_t x646 = 0LLU;
	static uint64_t t161 = 56702LLU;

    t161 = ((x645&x646)|(x647>x648));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 258U;
	int64_t x650 = INT64_MIN;
	uint64_t x651 = UINT64_MAX;
	static int64_t t162 = -2LL;

    t162 = ((x649&x650)|(x651>x652));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	int32_t x654 = -1;
	int64_t x655 = -1LL;
	int32_t t163 = 238465147;

    t163 = ((x653&x654)|(x655>x656));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	volatile int64_t x658 = INT64_MIN;
	volatile int64_t x660 = INT64_MIN;
	static int64_t t164 = -9112199456LL;

    t164 = ((x657&x658)|(x659>x660));

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -9327400LL;
	volatile int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;

    t165 = ((x661&x662)|(x663>x664));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = INT16_MAX;
	int64_t x668 = INT64_MAX;
	volatile int64_t t166 = -150956394684LL;

    t166 = ((x665&x666)|(x667>x668));

    if (t166 != 32767LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 2U;
	volatile int32_t x670 = -1;
	static uint64_t x671 = 276058709482379LLU;
	uint32_t x672 = 5294136U;
	static volatile int32_t t167 = 41;

    t167 = ((x669&x670)|(x671>x672));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	static int32_t x674 = -1;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 812U;
	static volatile int32_t t168 = INT32_MIN;

    t168 = ((x673&x674)|(x675>x676));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	volatile int64_t x678 = INT64_MAX;
	volatile int8_t x679 = -12;
	int64_t x680 = INT64_MIN;
	volatile int64_t t169 = INT64_MAX;

    t169 = ((x677&x678)|(x679>x680));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	int64_t x682 = -4207605567LL;
	int64_t x683 = INT64_MAX;
	static volatile uint16_t x684 = UINT16_MAX;
	int64_t t170 = 312500LL;

    t170 = ((x681&x682)|(x683>x684));

    if (t170 != 65LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int32_t x686 = 369;
	uint8_t x687 = 22U;
	int64_t x688 = 3419LL;
	volatile int64_t t171 = -52672933581363LL;

    t171 = ((x685&x686)|(x687>x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	static volatile int16_t x692 = INT16_MIN;
	int32_t t172 = -33883652;

    t172 = ((x689&x690)|(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x693 = UINT64_MAX;
	uint8_t x694 = 3U;
	volatile uint32_t x695 = UINT32_MAX;
	uint64_t t173 = 446859058705LLU;

    t173 = ((x693&x694)|(x695>x696));

    if (t173 != 3LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 42998LLU;
	static volatile uint32_t x698 = UINT32_MAX;
	static int32_t x699 = -1;
	volatile uint64_t t174 = 35008777413516819LLU;

    t174 = ((x697&x698)|(x699>x700));

    if (t174 != 42998LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	uint16_t x702 = UINT16_MAX;
	int16_t x704 = -6;
	static int64_t t175 = -2865832LL;

    t175 = ((x701&x702)|(x703>x704));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 13LL;
	uint32_t x706 = 121434U;
	volatile int64_t x707 = INT64_MIN;
	int64_t x708 = 85260828LL;
	int64_t t176 = 120192758721LL;

    t176 = ((x705&x706)|(x707>x708));

    if (t176 != 8LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MIN;
	volatile int16_t x711 = -2;

    t177 = ((x709&x710)|(x711>x712));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 8016U;
	int64_t x714 = INT64_MIN;
	int64_t x715 = INT64_MAX;

    t178 = ((x713&x714)|(x715>x716));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = 7;
	uint32_t x719 = 24583432U;
	uint64_t x720 = UINT64_MAX;
	int32_t t179 = 105861;

    t179 = ((x717&x718)|(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = INT64_MIN;
	int32_t x723 = INT32_MIN;
	uint64_t x724 = 130338LLU;
	int64_t t180 = -1761066087292LL;

    t180 = ((x721&x722)|(x723>x724));

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MAX;
	static uint32_t x726 = 40496516U;
	int8_t x727 = INT8_MIN;
	uint16_t x728 = 422U;
	uint32_t t181 = 82115095U;

    t181 = ((x725&x726)|(x727>x728));

    if (t181 != 40496516U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x731 = UINT64_MAX;
	static int8_t x732 = -6;

    t182 = ((x729&x730)|(x731>x732));

    if (t182 != 201U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 3U;
	volatile uint8_t x734 = UINT8_MAX;
	int16_t x735 = 11;
	int8_t x736 = 0;
	int32_t t183 = -598085310;

    t183 = ((x733&x734)|(x735>x736));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = 63;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = -120075368LL;
	int64_t t184 = -3401541016065789LL;

    t184 = ((x737&x738)|(x739>x740));

    if (t184 != 63LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = INT16_MIN;
	volatile int64_t x743 = INT64_MIN;
	int64_t x744 = -1LL;

    t185 = ((x741&x742)|(x743>x744));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	static uint32_t x746 = 1620106947U;
	static uint32_t x747 = 15967U;
	int64_t x748 = -3394581LL;
	static volatile uint32_t t186 = 7376U;

    t186 = ((x745&x746)|(x747>x748));

    if (t186 != 1U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint8_t x749 = 8U;
	static int16_t x750 = INT16_MIN;
	int8_t x751 = -1;
	uint8_t x752 = 15U;
	volatile int32_t t187 = 107;

    t187 = ((x749&x750)|(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x755 = INT8_MIN;
	int32_t x756 = -41999;
	volatile int32_t t188 = -86;

    t188 = ((x753&x754)|(x755>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x758 = -111;
	int64_t x760 = -1LL;
	uint64_t t189 = 646966253396LLU;

    t189 = ((x757&x758)|(x759>x760));

    if (t189 != 23441LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x762 = 0;
	int64_t x763 = INT64_MIN;
	int32_t t190 = -133;

    t190 = ((x761&x762)|(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x766 = -1;
	volatile int64_t x767 = -1LL;
	int32_t t191 = INT32_MIN;

    t191 = ((x765&x766)|(x767>x768));

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = -11;
	volatile uint32_t x771 = 217490U;
	static int32_t t192 = 0;

    t192 = ((x769&x770)|(x771>x772));

    if (t192 != -11) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -111;
	int64_t x775 = INT64_MIN;
	uint8_t x776 = 15U;
	int32_t t193 = -3826;

    t193 = ((x773&x774)|(x775>x776));

    if (t193 != 145) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 117908571429043LL;
	int64_t x779 = 186884LL;
	int8_t x780 = -15;
	static int64_t t194 = -5LL;

    t194 = ((x777&x778)|(x779>x780));

    if (t194 != 117908571426963LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	int16_t x782 = INT16_MIN;
	static volatile uint32_t x784 = 48774413U;

    t195 = ((x781&x782)|(x783>x784));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static int8_t x786 = INT8_MIN;
	int32_t t196 = 955;

    t196 = ((x785&x786)|(x787>x788));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x791 = -1;
	volatile uint16_t x792 = 101U;
	volatile int64_t t197 = -16924044681044776LL;

    t197 = ((x789&x790)|(x791>x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 34458LLU;
	int8_t x794 = 63;
	uint64_t x795 = UINT64_MAX;
	int8_t x796 = -1;

    t198 = ((x793&x794)|(x795>x796));

    if (t198 != 26LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 68U;
	volatile int8_t x798 = INT8_MIN;
	int16_t x799 = -1;
	static volatile uint64_t x800 = 1891LLU;
	int32_t t199 = 310154378;

    t199 = ((x797&x798)|(x799>x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

