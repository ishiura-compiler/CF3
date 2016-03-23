
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

int32_t x1 = INT32_MIN;
int8_t x5 = -1;
uint32_t x9 = 1U;
int64_t x12 = INT64_MIN;
int64_t x14 = INT64_MIN;
int64_t x22 = 3069597427LL;
int8_t x26 = INT8_MAX;
static int64_t x27 = INT64_MIN;
int64_t x31 = INT64_MAX;
uint16_t x42 = 7U;
static int32_t x54 = INT32_MIN;
uint32_t t13 = 89542488U;
uint8_t x63 = 43U;
uint32_t t15 = 28493U;
int8_t x65 = -1;
volatile int16_t x66 = INT16_MAX;
uint8_t x71 = 30U;
volatile uint64_t t17 = 26609LLU;
int16_t x78 = INT16_MIN;
int16_t x81 = -1;
int64_t t20 = -1984921607888012LL;
static volatile int8_t x91 = INT8_MIN;
static int8_t x95 = -1;
static int16_t x100 = INT16_MIN;
int32_t x109 = INT32_MIN;
int64_t x111 = -1LL;
volatile uint64_t x122 = 60508980LLU;
int64_t x123 = INT64_MAX;
static volatile uint64_t t30 = 410059038699859714LLU;
int8_t x128 = INT8_MAX;
uint8_t x130 = 54U;
uint8_t x137 = UINT8_MAX;
static volatile int16_t x144 = -1;
static uint64_t x146 = UINT64_MAX;
int16_t x148 = 3;
int8_t x151 = -1;
int8_t x152 = -1;
int64_t x154 = -1LL;
uint64_t t38 = 2LLU;
static int16_t x164 = INT16_MIN;
int16_t x167 = INT16_MAX;
uint32_t x168 = 19932268U;
int64_t x169 = INT64_MIN;
int8_t x172 = INT8_MAX;
uint8_t x182 = 1U;
int8_t x190 = INT8_MIN;
int64_t x191 = INT64_MIN;
uint64_t x196 = 82256LLU;
uint16_t x197 = 57U;
int32_t x198 = INT32_MIN;
int32_t x199 = 2294;
int32_t x200 = INT32_MAX;
static uint32_t x203 = UINT32_MAX;
int32_t x207 = -1;
int8_t x209 = INT8_MIN;
int8_t x212 = INT8_MAX;
volatile int32_t t52 = 2265094;
static volatile int64_t t53 = -3856LL;
int8_t x218 = 0;
int64_t x233 = INT64_MIN;
volatile int32_t x234 = -1;
volatile int8_t x236 = INT8_MIN;
uint64_t t57 = 41175011LLU;
int8_t x238 = 17;
uint16_t x239 = 2034U;
volatile int64_t t58 = 123LL;
int32_t x248 = INT32_MAX;
volatile uint32_t t60 = 28361732U;
static int32_t x249 = INT32_MIN;
uint64_t x250 = 150255314201450LLU;
int8_t x256 = 2;
uint64_t x258 = 856299154454499189LLU;
int64_t t64 = -1877547636LL;
int64_t x265 = -8LL;
int8_t x266 = 4;
int32_t x269 = INT32_MIN;
int64_t x272 = -1LL;
int32_t x273 = 2844;
int32_t x276 = -6468579;
uint64_t x281 = 165LLU;
static int32_t x284 = INT32_MIN;
uint64_t t69 = 534956189LLU;
uint64_t x286 = UINT64_MAX;
uint16_t x310 = 27U;
volatile int16_t x322 = INT16_MAX;
volatile uint32_t x328 = 34863U;
uint64_t x334 = UINT64_MAX;
int64_t x341 = -7682236LL;
volatile uint64_t t84 = 2000LLU;
int16_t x350 = INT16_MAX;
int16_t x351 = INT16_MAX;
int64_t x357 = -1LL;
static int64_t x359 = -1044443LL;
int32_t x360 = INT32_MIN;
volatile uint64_t t87 = 1299525LLU;
static int64_t x363 = -22641LL;
static int16_t x367 = 97;
volatile int64_t t89 = 0LL;
int32_t x369 = 244;
int16_t x371 = 692;
static volatile int16_t x373 = INT16_MIN;
uint16_t x375 = 32106U;
int8_t x376 = -1;
static uint8_t x378 = 7U;
int32_t x385 = -1;
static volatile int16_t x391 = -1;
volatile int64_t x395 = -1612521027LL;
int8_t x396 = -10;
int64_t x399 = INT64_MAX;
static int64_t x402 = INT64_MIN;
int64_t x415 = INT64_MIN;
volatile uint64_t t99 = 108688149LLU;
static uint64_t x418 = UINT64_MAX;
volatile uint64_t t100 = 1343LLU;
int64_t x425 = INT64_MIN;
volatile int64_t t102 = -1LL;
int16_t x430 = 0;
int64_t x437 = -247992LL;
int32_t x439 = INT32_MAX;
int64_t x441 = -1LL;
uint64_t x444 = UINT64_MAX;
uint64_t t106 = 222LLU;
uint32_t x449 = 44U;
static int64_t x452 = -84LL;
int16_t x456 = INT16_MAX;
int32_t x462 = 1;
static uint32_t x465 = 120149352U;
int64_t x468 = 2857615297179905437LL;
volatile int64_t t111 = 23411126LL;
int16_t x474 = -35;
uint32_t t113 = 4174U;
uint64_t x481 = UINT64_MAX;
volatile int8_t x487 = INT8_MIN;
static int32_t x491 = -410;
int64_t t117 = -934002280052388090LL;
static int8_t x497 = -1;
int16_t x501 = INT16_MAX;
uint64_t x502 = 653411736LLU;
int64_t t120 = 3683142946471283354LL;
volatile int64_t x511 = INT64_MAX;
static volatile int64_t x512 = -1LL;
int16_t x513 = 495;
volatile int16_t x514 = INT16_MIN;
static int8_t x515 = INT8_MIN;
volatile int64_t t122 = -28901331011167145LL;
uint32_t x521 = 536270005U;
static uint64_t x547 = 18LLU;
int64_t x553 = -166114101006674435LL;
static volatile int64_t x562 = INT64_MIN;
volatile int64_t t133 = 217864218LL;
int64_t t134 = -6341897LL;
static int64_t x574 = 1006562177721311LL;
static uint16_t x575 = UINT16_MAX;
int64_t t137 = -908302505335074LL;
static volatile int16_t x582 = 49;
volatile uint32_t t138 = 24457U;
int8_t x585 = -1;
uint16_t x588 = 140U;
uint32_t x591 = UINT32_MAX;
static uint64_t t140 = 158947931436LLU;
uint16_t x597 = 5278U;
volatile uint8_t x598 = 6U;
volatile int8_t x600 = 1;
int32_t t142 = -130753904;
int8_t x609 = -9;
int64_t t145 = 1534LL;
volatile int16_t x617 = INT16_MIN;
uint16_t x620 = UINT16_MAX;
int16_t x621 = 687;
static int64_t x622 = INT64_MIN;
int32_t x624 = -36;
volatile int8_t x636 = 14;
int64_t x640 = -1LL;
static volatile int32_t x643 = INT32_MIN;
uint32_t x645 = 1U;
volatile int32_t x647 = INT32_MAX;
int16_t x652 = 46;
int16_t x661 = INT16_MIN;
static volatile int64_t t157 = 142885393LL;
volatile int32_t x674 = INT32_MIN;
uint8_t x680 = UINT8_MAX;
static int64_t x682 = 7801810111LL;
volatile int32_t x684 = INT32_MIN;
static int8_t x695 = 3;
volatile int16_t x705 = INT16_MIN;
int32_t x709 = -1;
uint64_t x719 = 419600064444029LLU;
uint64_t t170 = 3714LLU;
uint32_t x731 = 756821U;
int16_t x740 = -1;
int32_t x749 = INT32_MIN;
static int32_t x751 = 512450054;
volatile uint8_t x752 = 1U;
static volatile int32_t t177 = -7478;
uint16_t x763 = UINT16_MAX;
uint16_t x764 = 1480U;
int32_t t180 = 238;
int64_t x770 = INT64_MAX;
volatile int64_t t182 = 101147072223408LL;
static uint32_t x784 = 24992070U;
uint64_t x787 = 32690517503LLU;
uint8_t x789 = UINT8_MAX;
volatile uint32_t x790 = 5U;
int32_t t188 = -14904;
int32_t x809 = 438458;
uint8_t x815 = 60U;
int8_t x819 = -1;
uint32_t x820 = 1378811653U;
static int64_t t194 = 76LL;
int8_t x826 = INT8_MIN;
static int16_t x832 = INT16_MIN;
int64_t x837 = -2957LL;


void f0(void) {
    	static uint32_t x2 = UINT32_MAX;
	int16_t x3 = 25;
	int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = 2303U;

    t0 = (((x1|x2)%x3)/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 95U;
	uint16_t x8 = 3U;
	volatile int32_t t1 = -5485834;

    t1 = (((x5|x6)%x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile int64_t t2 = -6293LL;

    t2 = (((x9|x10)%x11)/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 0LLU;
	static volatile int32_t x15 = -21702;
	int8_t x16 = INT8_MAX;
	static uint64_t t3 = 1024327188571LLU;

    t3 = (((x13|x14)%x15)/x16);

    if (t3 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static int8_t x18 = INT8_MAX;
	int32_t x19 = 115538362;
	int32_t x20 = 20;
	volatile int32_t t4 = -36730;

    t4 = (((x17|x18)%x19)/x20);

    if (t4 != -1632) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	volatile int32_t x23 = INT32_MIN;
	uint16_t x24 = 769U;
	volatile int64_t t5 = 6173178LL;

    t5 = (((x21|x22)%x23)/x24);

    if (t5 != -13LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	volatile uint8_t x28 = 52U;
	volatile int64_t t6 = -179665608LL;

    t6 = (((x25|x26)%x27)/x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 3336LLU;
	uint8_t x30 = 11U;
	int64_t x32 = -1LL;
	uint64_t t7 = 6LLU;

    t7 = (((x29|x30)%x31)/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	uint64_t x34 = 1828289688LLU;
	static int64_t x35 = 41507549976LL;
	int32_t x36 = -947775;
	volatile uint64_t t8 = 132LLU;

    t8 = (((x33|x34)%x35)/x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int64_t x38 = INT64_MIN;
	volatile int64_t x39 = 85015248LL;
	int16_t x40 = INT16_MIN;
	static int64_t t9 = -25836675072508721LL;

    t9 = (((x37|x38)%x39)/x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	static int16_t x44 = 13001;
	volatile int32_t t10 = 2448;

    t10 = (((x41|x42)%x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int16_t x46 = 0;
	volatile int32_t x47 = 68;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -50;

    t11 = (((x45|x46)%x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 1111551989U;
	int64_t x50 = INT64_MAX;
	volatile int64_t x51 = 26173702LL;
	volatile int16_t x52 = 15;
	volatile int64_t t12 = 7961489672854LL;

    t12 = (((x49|x50)%x51)/x52);

    if (t12 != 1563546LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = 169815U;

    t13 = (((x53|x54)%x55)/x56);

    if (t13 != 25292U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -1;
	int64_t x58 = -1LL;
	int32_t x59 = -1;
	static uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 471642922728199694LLU;

    t14 = (((x57|x58)%x59)/x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 0U;
	int8_t x62 = 59;
	uint32_t x64 = 724629U;

    t15 = (((x61|x62)%x63)/x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x67 = INT32_MAX;
	uint8_t x68 = 62U;
	volatile int32_t t16 = 89854193;

    t16 = (((x65|x66)%x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x69 = UINT64_MAX;
	static int32_t x70 = INT32_MAX;
	int8_t x72 = INT8_MIN;

    t17 = (((x69|x70)%x71)/x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = -22;
	static volatile int16_t x76 = INT16_MAX;
	int32_t t18 = -427;

    t18 = (((x73|x74)%x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 125U;
	int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -213116478;

    t19 = (((x77|x78)%x79)/x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;

    t20 = (((x81|x82)%x83)/x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x86 = -6;
	static int32_t x87 = INT32_MAX;
	static int16_t x88 = -1;
	static volatile int32_t t21 = 3;

    t21 = (((x85|x86)%x87)/x88);

    if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 0;
	int8_t x90 = INT8_MIN;
	int32_t x92 = -6798466;
	volatile int32_t t22 = 2812623;

    t22 = (((x89|x90)%x91)/x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x93 = 5U;
	int32_t x94 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 1633532LL;

    t23 = (((x93|x94)%x95)/x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 0;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = 1;
	volatile uint64_t t24 = 8897055082060267370LLU;

    t24 = (((x97|x98)%x99)/x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 44LLU;
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	int16_t x104 = -1;
	volatile uint64_t t25 = 3771069LLU;

    t25 = (((x101|x102)%x103)/x104);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 61197653LL;
	int32_t x106 = 1177;
	static int32_t x107 = INT32_MIN;
	uint64_t x108 = 7750791394LLU;
	volatile uint64_t t26 = 726051801740LLU;

    t26 = (((x105|x106)%x107)/x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = 39;
	int8_t x112 = INT8_MIN;
	volatile int64_t t27 = 2LL;

    t27 = (((x109|x110)%x111)/x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = 145553328665726445LL;
	static int32_t x114 = INT32_MIN;
	int64_t x115 = -1LL;
	uint32_t x116 = 2333U;
	volatile int64_t t28 = 1LL;

    t28 = (((x113|x114)%x115)/x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = 38953LL;
	int32_t x118 = INT32_MAX;
	int32_t x119 = -1;
	int16_t x120 = 25;
	int64_t t29 = -83977480LL;

    t29 = (((x117|x118)%x119)/x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int16_t x124 = -5;

    t30 = (((x121|x122)%x123)/x124);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 358U;
	int64_t x126 = 31343898373564412LL;
	int8_t x127 = INT8_MIN;
	int64_t t31 = -46248429880224390LL;

    t31 = (((x125|x126)%x127)/x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 1896843696U;
	static volatile uint32_t x131 = UINT32_MAX;
	int32_t x132 = 483;
	uint32_t t32 = 5958193U;

    t32 = (((x129|x130)%x131)/x132);

    if (t32 != 3927212U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int8_t x134 = -1;
	uint8_t x135 = 18U;
	volatile int8_t x136 = INT8_MIN;
	static int32_t t33 = -136;

    t33 = (((x133|x134)%x135)/x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = -37;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = -6919;
	volatile uint64_t t34 = 267548938445602992LLU;

    t34 = (((x137|x138)%x139)/x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static uint16_t x142 = 29U;
	uint8_t x143 = 54U;
	static int64_t t35 = 43492919817422880LL;

    t35 = (((x141|x142)%x143)/x144);

    if (t35 != 51LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	uint32_t x147 = 2059U;
	volatile uint64_t t36 = 96792LLU;

    t36 = (((x145|x146)%x147)/x148);

    if (t36 != 239LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MAX;
	volatile int64_t t37 = -1839183055807164672LL;

    t37 = (((x149|x150)%x151)/x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	volatile uint16_t x156 = UINT16_MAX;

    t38 = (((x153|x154)%x155)/x156);

    if (t38 != 32768LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	int8_t x158 = INT8_MIN;
	static volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	uint32_t t39 = 1444286681U;

    t39 = (((x157|x158)%x159)/x160);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = -131;
	uint64_t x162 = 85160500166LLU;
	int64_t x163 = 9LL;
	static uint64_t t40 = 1394341852065135LLU;

    t40 = (((x161|x162)%x163)/x164);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static int16_t x166 = 352;
	volatile int64_t t41 = 6634155LL;

    t41 = (((x165|x166)%x167)/x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = INT32_MAX;
	int16_t x171 = 464;
	int64_t t42 = -42349457791661LL;

    t42 = (((x169|x170)%x171)/x172);

    if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = 2708730137392911338LL;
	volatile uint16_t x175 = UINT16_MAX;
	int8_t x176 = -1;
	int64_t t43 = 897LL;

    t43 = (((x173|x174)%x175)/x176);

    if (t43 != -23807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 1U;
	static int32_t x178 = INT32_MAX;
	static int32_t x179 = 1;
	volatile uint16_t x180 = UINT16_MAX;
	int32_t t44 = 140728187;

    t44 = (((x177|x178)%x179)/x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 509;

    t45 = (((x181|x182)%x183)/x184);

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	uint16_t x186 = 2U;
	static uint16_t x187 = 12U;
	uint16_t x188 = 10685U;
	int32_t t46 = 366128894;

    t46 = (((x185|x186)%x187)/x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 25U;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = 154LLU;

    t47 = (((x189|x190)%x191)/x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = INT64_MAX;
	static int32_t x194 = 51;
	int64_t x195 = 1309LL;
	volatile uint64_t t48 = 497331698784635372LLU;

    t48 = (((x193|x194)%x195)/x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t t49 = 4531041;

    t49 = (((x197|x198)%x199)/x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 2819U;
	volatile int32_t x202 = -1;
	volatile int16_t x204 = INT16_MIN;
	volatile uint32_t t50 = 1535384148U;

    t50 = (((x201|x202)%x203)/x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = -1;
	uint16_t x206 = 12U;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 170446;

    t51 = (((x205|x206)%x207)/x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x210 = -29341523;
	static volatile uint16_t x211 = 1374U;

    t52 = (((x209|x210)%x211)/x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 23187U;
	int16_t x214 = -1;
	static int32_t x215 = -1;
	volatile int64_t x216 = INT64_MAX;

    t53 = (((x213|x214)%x215)/x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	int16_t x219 = INT16_MAX;
	volatile uint16_t x220 = UINT16_MAX;
	static volatile int64_t t54 = -12248392318LL;

    t54 = (((x217|x218)%x219)/x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 5577799039850LL;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 77459006898512LLU;
	uint64_t t55 = 168LLU;

    t55 = (((x221|x222)%x223)/x224);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = 23;
	static int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;
	int64_t t56 = -7992743191LL;

    t56 = (((x229|x230)%x231)/x232);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x235 = 4973LLU;

    t57 = (((x233|x234)%x235)/x236);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x237 = INT16_MIN;
	static int64_t x240 = -135294435LL;

    t58 = (((x237|x238)%x239)/x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = -1;
	int8_t x242 = 9;
	uint16_t x243 = 22U;
	uint16_t x244 = 7783U;
	static volatile int32_t t59 = 1;

    t59 = (((x241|x242)%x243)/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x245 = UINT32_MAX;
	int8_t x246 = 6;
	uint16_t x247 = 136U;

    t60 = (((x245|x246)%x247)/x248);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x251 = -4;
	int8_t x252 = INT8_MAX;
	volatile uint64_t t61 = 182044671867LLU;

    t61 = (((x249|x250)%x251)/x252);

    if (t61 != 145249953320790442LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x253 = 116U;
	int8_t x254 = -1;
	uint16_t x255 = 15U;
	uint32_t t62 = 29941563U;

    t62 = (((x253|x254)%x255)/x256);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x259 = 12U;
	volatile int8_t x260 = INT8_MIN;
	uint64_t t63 = 710040873786LLU;

    t63 = (((x257|x258)%x259)/x260);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = -334LL;
	static int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	int16_t x264 = -4018;

    t64 = (((x261|x262)%x263)/x264);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x267 = -1500;
	volatile int32_t x268 = -371053167;
	volatile int64_t t65 = -1LL;

    t65 = (((x265|x266)%x267)/x268);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x270 = 1728462893921606510LL;
	int32_t x271 = 198;
	volatile int64_t t66 = 17936287799101814LL;

    t66 = (((x269|x270)%x271)/x272);

    if (t66 != 72LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x274 = 464650165269900541LL;
	volatile uint64_t x275 = 161LLU;
	uint64_t t67 = 88047LLU;

    t67 = (((x273|x274)%x275)/x276);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x277 = 0U;
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 18U;
	uint64_t t68 = 2809874755815282LLU;

    t68 = (((x277|x278)%x279)/x280);

    if (t68 != 3640LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x282 = 2U;
	int16_t x283 = INT16_MIN;

    t69 = (((x281|x282)%x283)/x284);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x285 = 707;
	int64_t x287 = -1LL;
	static int8_t x288 = INT8_MIN;
	uint64_t t70 = 283LLU;

    t70 = (((x285|x286)%x287)/x288);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = 3;
	static uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MIN;
	static int32_t t71 = -4326;

    t71 = (((x289|x290)%x291)/x292);

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x293 = INT32_MAX;
	volatile int8_t x294 = INT8_MAX;
	int64_t x295 = 59LL;
	static int64_t x296 = -105001484024840LL;
	int64_t t72 = 1LL;

    t72 = (((x293|x294)%x295)/x296);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	static int64_t t73 = 312666772455592939LL;

    t73 = (((x297|x298)%x299)/x300);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t74 = 7260178;

    t74 = (((x301|x302)%x303)/x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MAX;
	static int32_t x307 = INT32_MIN;
	int8_t x308 = -1;
	volatile int32_t t75 = 7830055;

    t75 = (((x305|x306)%x307)/x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x309 = INT64_MIN;
	static int64_t x311 = 68045032448868603LL;
	int32_t x312 = 695;
	volatile int64_t t76 = 18871299LL;

    t76 = (((x309|x310)%x311)/x312);

    if (t76 != -53658498212250LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = 4U;
	uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = INT8_MAX;
	uint32_t t77 = 65U;

    t77 = (((x313|x314)%x315)/x316);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x317 = 1058U;
	volatile uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MAX;
	uint64_t x320 = UINT64_MAX;
	static uint64_t t78 = 3LLU;

    t78 = (((x317|x318)%x319)/x320);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x321 = INT8_MIN;
	uint64_t x323 = 6440478314160LLU;
	static uint16_t x324 = 5652U;
	volatile uint64_t t79 = 1LLU;

    t79 = (((x321|x322)%x323)/x324);

    if (t79 != 596608678LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = INT8_MIN;
	static int16_t x326 = INT16_MAX;
	int32_t x327 = -1;
	static uint32_t t80 = 118809U;

    t80 = (((x325|x326)%x327)/x328);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x333 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t81 = 119809067414858LLU;

    t81 = (((x333|x334)%x335)/x336);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = 334675;
	static uint16_t x340 = UINT16_MAX;
	static int32_t t82 = -1730;

    t82 = (((x337|x338)%x339)/x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x342 = INT8_MIN;
	uint16_t x343 = 13U;
	volatile int16_t x344 = -1;
	int64_t t83 = 2725029416976LL;

    t83 = (((x341|x342)%x343)/x344);

    if (t83 != 8LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x345 = INT32_MIN;
	int64_t x346 = -59633318703LL;
	uint8_t x347 = UINT8_MAX;
	static uint64_t x348 = 7159433614980139LLU;

    t84 = (((x345|x346)%x347)/x348);

    if (t84 != 2576LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = 64;
	uint8_t x352 = 26U;
	int32_t t85 = -29818;

    t85 = (((x349|x350)%x351)/x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = 649777668084455LL;
	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = 407955LL;
	int16_t x356 = -1;
	volatile int64_t t86 = -165947099905680LL;

    t86 = (((x353|x354)%x355)/x356);

    if (t86 != 25LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x358 = UINT64_MAX;

    t87 = (((x357|x358)%x359)/x360);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = -1;
	static uint8_t x362 = UINT8_MAX;
	int32_t x364 = INT32_MAX;
	static int64_t t88 = 1434946031843LL;

    t88 = (((x361|x362)%x363)/x364);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = -478LL;
	static int16_t x366 = 3;
	int16_t x368 = INT16_MIN;

    t89 = (((x365|x366)%x367)/x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x370 = INT16_MIN;
	int64_t x372 = 4870118142687271LL;
	static volatile int64_t t90 = -8757211LL;

    t90 = (((x369|x370)%x371)/x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x374 = 1LL;
	int64_t t91 = -3384154LL;

    t91 = (((x373|x374)%x375)/x376);

    if (t91 != 661LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = INT16_MAX;
	int32_t x379 = INT32_MAX;
	uint8_t x380 = 10U;
	int32_t t92 = -677075;

    t92 = (((x377|x378)%x379)/x380);

    if (t92 != 3276) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x386 = 38239412U;
	volatile uint32_t x387 = UINT32_MAX;
	uint16_t x388 = UINT16_MAX;
	static uint32_t t93 = 5990U;

    t93 = (((x385|x386)%x387)/x388);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x389 = 0U;
	static int32_t x390 = INT32_MIN;
	int16_t x392 = 2379;
	static int32_t t94 = 466943665;

    t94 = (((x389|x390)%x391)/x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = -1;
	int32_t x394 = -1;
	int64_t t95 = 258042LL;

    t95 = (((x393|x394)%x395)/x396);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = 22;
	int8_t x398 = -1;
	uint16_t x400 = 9039U;
	volatile int64_t t96 = 200100635LL;

    t96 = (((x397|x398)%x399)/x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x401 = 382U;
	int8_t x403 = INT8_MIN;
	uint32_t x404 = 30U;
	volatile int64_t t97 = -70131LL;

    t97 = (((x401|x402)%x403)/x404);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x409 = 3171889LLU;
	volatile uint32_t x410 = 613674U;
	volatile int8_t x411 = 3;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t98 = 943LLU;

    t98 = (((x409|x410)%x411)/x412);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = UINT32_MAX;
	int16_t x416 = INT16_MIN;

    t99 = (((x413|x414)%x415)/x416);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x417 = INT8_MIN;
	uint64_t x419 = 55621970056LLU;
	uint16_t x420 = 12U;

    t100 = (((x417|x418)%x419)/x420);

    if (t100 != 3479762989LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = 21;
	int16_t x422 = 49;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = 173517568225615383LLU;
	uint64_t t101 = 33439619083888LLU;

    t101 = (((x421|x422)%x423)/x424);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x426 = INT8_MIN;
	uint16_t x427 = UINT16_MAX;
	static int64_t x428 = INT64_MIN;

    t102 = (((x425|x426)%x427)/x428);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = 51;
	static int64_t x431 = 544LL;
	volatile int16_t x432 = -1;
	volatile int64_t t103 = 18944925630LL;

    t103 = (((x429|x430)%x431)/x432);

    if (t103 != -51LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x433 = 222U;
	int8_t x434 = INT8_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = 3;
	uint32_t t104 = 1U;

    t104 = (((x433|x434)%x435)/x436);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x438 = INT16_MAX;
	int16_t x440 = -1;
	volatile int64_t t105 = 0LL;

    t105 = (((x437|x438)%x439)/x440);

    if (t105 != 229377LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x442 = 6U;
	int8_t x443 = -2;

    t106 = (((x441|x442)%x443)/x444);

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x450 = 60545550820882LL;
	int32_t x451 = -1;
	int64_t t107 = 101297640659516LL;

    t107 = (((x449|x450)%x451)/x452);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = 39;
	int8_t x454 = -1;
	static uint16_t x455 = UINT16_MAX;
	static int32_t t108 = -10927091;

    t108 = (((x453|x454)%x455)/x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x457 = 1703175147959526LLU;
	int32_t x458 = -62070;
	int16_t x459 = INT16_MIN;
	int16_t x460 = -1;
	uint64_t t109 = 5707LLU;

    t109 = (((x457|x458)%x459)/x460);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x461 = UINT64_MAX;
	int64_t x463 = 2987081718574087561LL;
	static uint16_t x464 = 1U;
	volatile uint64_t t110 = 2449952130764905LLU;

    t110 = (((x461|x462)%x463)/x464);

    if (t110 != 524253762265026249LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x466 = 13952842U;
	volatile int32_t x467 = INT32_MIN;

    t111 = (((x465|x466)%x467)/x468);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint32_t x469 = UINT32_MAX;
	volatile int64_t x470 = 421244156LL;
	uint32_t x471 = 22121852U;
	int64_t x472 = INT64_MAX;
	static int64_t t112 = 16920506967536LL;

    t112 = (((x469|x470)%x471)/x472);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x473 = UINT16_MAX;
	uint32_t x475 = UINT32_MAX;
	int8_t x476 = 2;

    t113 = (((x473|x474)%x475)/x476);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x477 = -1;
	static int16_t x478 = -245;
	static int64_t x479 = INT64_MAX;
	int16_t x480 = INT16_MIN;
	volatile int64_t t114 = 28478218086036156LL;

    t114 = (((x477|x478)%x479)/x480);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x482 = INT8_MIN;
	uint8_t x483 = 79U;
	static int16_t x484 = INT16_MAX;
	volatile uint64_t t115 = 135614101286102LLU;

    t115 = (((x481|x482)%x483)/x484);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x485 = INT16_MIN;
	uint32_t x486 = 803359219U;
	volatile int32_t x488 = INT32_MIN;
	volatile uint32_t t116 = 250U;

    t116 = (((x485|x486)%x487)/x488);

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x489 = UINT16_MAX;
	volatile int64_t x490 = -1584LL;
	uint8_t x492 = 53U;

    t117 = (((x489|x490)%x491)/x492);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x498 = INT8_MAX;
	volatile int64_t x499 = 115LL;
	int64_t x500 = INT64_MAX;
	volatile int64_t t118 = -69740LL;

    t118 = (((x497|x498)%x499)/x500);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x503 = INT8_MAX;
	uint64_t x504 = 3446799468326253LLU;
	volatile uint64_t t119 = 674LLU;

    t119 = (((x501|x502)%x503)/x504);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x505 = 89191;
	uint32_t x506 = 5U;
	static int16_t x507 = INT16_MIN;
	int64_t x508 = -1LL;

    t120 = (((x505|x506)%x507)/x508);

    if (t120 != -89191LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = -29;
	int32_t x510 = 11391611;
	volatile int64_t t121 = 13879495117LL;

    t121 = (((x509|x510)%x511)/x512);

    if (t121 != 5LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x516 = INT64_MIN;

    t122 = (((x513|x514)%x515)/x516);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x522 = INT16_MIN;
	static int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MIN;
	static int64_t t123 = -3LL;

    t123 = (((x521|x522)%x523)/x524);

    if (t123 != -33554345LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x525 = INT64_MIN;
	int64_t x526 = INT64_MIN;
	static int16_t x527 = INT16_MAX;
	int16_t x528 = -48;
	int64_t t124 = 13113740742LL;

    t124 = (((x525|x526)%x527)/x528);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x529 = INT8_MAX;
	uint8_t x530 = 46U;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -1;
	static int64_t t125 = 594LL;

    t125 = (((x529|x530)%x531)/x532);

    if (t125 != -127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -318694469;
	int64_t x534 = INT64_MAX;
	int8_t x535 = INT8_MAX;
	int64_t x536 = INT64_MIN;
	static int64_t t126 = 23089017948902LL;

    t126 = (((x533|x534)%x535)/x536);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x537 = UINT32_MAX;
	int16_t x538 = INT16_MIN;
	int32_t x539 = INT32_MIN;
	volatile int8_t x540 = 1;
	uint32_t t127 = 6216U;

    t127 = (((x537|x538)%x539)/x540);

    if (t127 != 2147483647U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MAX;
	static volatile uint16_t x543 = UINT16_MAX;
	static volatile uint8_t x544 = 6U;
	int64_t t128 = -1346029766366338LL;

    t128 = (((x541|x542)%x543)/x544);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x545 = 33U;
	int8_t x546 = -1;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t129 = 85073LLU;

    t129 = (((x545|x546)%x547)/x548);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x549 = 3U;
	uint16_t x550 = 2846U;
	int64_t x551 = INT64_MAX;
	volatile int16_t x552 = -1376;
	volatile int64_t t130 = -1692540856976LL;

    t130 = (((x549|x550)%x551)/x552);

    if (t130 != -2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x554 = INT16_MIN;
	volatile int32_t x555 = INT32_MAX;
	uint32_t x556 = UINT32_MAX;
	volatile int64_t t131 = 23414087518576LL;

    t131 = (((x553|x554)%x555)/x556);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x557 = INT8_MAX;
	int8_t x558 = INT8_MIN;
	static int64_t x559 = -199LL;
	int32_t x560 = INT32_MIN;
	volatile int64_t t132 = 231966270330LL;

    t132 = (((x557|x558)%x559)/x560);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x561 = INT8_MIN;
	static int16_t x563 = -1;
	static int32_t x564 = INT32_MIN;

    t133 = (((x561|x562)%x563)/x564);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 2U;

    t134 = (((x565|x566)%x567)/x568);

    if (t134 != -16384LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = 491680LL;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = UINT16_MAX;
	int64_t x572 = -15131728224336LL;
	int64_t t135 = 26256276439983344LL;

    t135 = (((x569|x570)%x571)/x572);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x573 = INT64_MAX;
	uint8_t x576 = UINT8_MAX;
	static volatile int64_t t136 = -14329304987340LL;

    t136 = (((x573|x574)%x575)/x576);

    if (t136 != 128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = -1;
	int16_t x579 = 47;
	volatile int64_t x580 = 378230850252253196LL;

    t137 = (((x577|x578)%x579)/x580);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x581 = 13337288U;
	int16_t x583 = 3;
	uint32_t x584 = UINT32_MAX;

    t138 = (((x581|x582)%x583)/x584);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x586 = -1;
	int16_t x587 = -1;
	int32_t t139 = 1;

    t139 = (((x585|x586)%x587)/x588);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = INT32_MIN;
	volatile int16_t x590 = -1;
	uint64_t x592 = UINT64_MAX;

    t140 = (((x589|x590)%x591)/x592);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = -27021355778LL;
	volatile uint64_t x594 = 134868811173661LLU;
	static int8_t x595 = -1;
	static volatile int8_t x596 = INT8_MAX;
	volatile uint64_t t141 = 2335009155867LLU;

    t141 = (((x593|x594)%x595)/x596);

    if (t141 != 145249953123867639LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x599 = -2;

    t142 = (((x597|x598)%x599)/x600);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x601 = -1LL;
	int16_t x602 = -28;
	static uint16_t x603 = 12U;
	volatile int32_t x604 = INT32_MIN;
	int64_t t143 = -25509648994199353LL;

    t143 = (((x601|x602)%x603)/x604);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 280U;
	uint64_t x606 = UINT64_MAX;
	static int8_t x607 = 49;
	int32_t x608 = -119398;
	volatile uint64_t t144 = 161559LLU;

    t144 = (((x605|x606)%x607)/x608);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x610 = 194;
	int64_t x611 = INT64_MIN;
	volatile int8_t x612 = INT8_MIN;

    t145 = (((x609|x610)%x611)/x612);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x613 = -3;
	volatile uint32_t x614 = UINT32_MAX;
	uint32_t x615 = UINT32_MAX;
	uint16_t x616 = 15U;
	volatile uint32_t t146 = 15472464U;

    t146 = (((x613|x614)%x615)/x616);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x618 = UINT64_MAX;
	int64_t x619 = INT64_MAX;
	uint64_t t147 = 59504199LLU;

    t147 = (((x617|x618)%x619)/x620);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x623 = 75U;
	int64_t t148 = 70LL;

    t148 = (((x621|x622)%x623)/x624);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = -142858LL;
	int64_t x626 = INT64_MAX;
	int64_t x627 = INT64_MAX;
	static int64_t x628 = INT64_MIN;
	int64_t t149 = 0LL;

    t149 = (((x625|x626)%x627)/x628);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x629 = INT16_MIN;
	volatile int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MIN;
	uint16_t x632 = 4U;
	volatile int64_t t150 = 21068409476LL;

    t150 = (((x629|x630)%x631)/x632);

    if (t150 != -8192LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x633 = 2U;
	uint16_t x634 = 7U;
	uint16_t x635 = 21U;
	volatile int32_t t151 = -1900;

    t151 = (((x633|x634)%x635)/x636);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x637 = 166U;
	volatile uint32_t x638 = 1060404U;
	volatile int16_t x639 = INT16_MAX;
	volatile int64_t t152 = -379490LL;

    t152 = (((x637|x638)%x639)/x640);

    if (t152 != -11990LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x641 = INT32_MIN;
	static int32_t x642 = -5691;
	int16_t x644 = INT16_MAX;
	volatile int32_t t153 = 2602;

    t153 = (((x641|x642)%x643)/x644);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x646 = INT8_MIN;
	int16_t x648 = INT16_MIN;
	volatile uint32_t t154 = 27471960U;

    t154 = (((x645|x646)%x647)/x648);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x649 = INT32_MAX;
	uint64_t x650 = 20422070407LLU;
	int16_t x651 = INT16_MIN;
	uint64_t t155 = 1361613329435501381LLU;

    t155 = (((x649|x650)%x651)/x652);

    if (t155 != 466844271LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x653 = -1LL;
	int32_t x654 = -107953;
	int32_t x655 = INT32_MAX;
	volatile uint32_t x656 = UINT32_MAX;
	int64_t t156 = 74491LL;

    t156 = (((x653|x654)%x655)/x656);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x662 = INT32_MIN;
	int64_t x663 = -1LL;
	int8_t x664 = -1;

    t157 = (((x661|x662)%x663)/x664);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x669 = 64U;
	int64_t x670 = INT64_MAX;
	uint16_t x671 = UINT16_MAX;
	int8_t x672 = -1;
	int64_t t158 = -2829957029782182642LL;

    t158 = (((x669|x670)%x671)/x672);

    if (t158 != -32767LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x673 = -546988689LL;
	uint8_t x675 = 84U;
	int8_t x676 = INT8_MAX;
	int64_t t159 = -179958752714LL;

    t159 = (((x673|x674)%x675)/x676);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x677 = INT16_MAX;
	int64_t x678 = INT64_MIN;
	static uint32_t x679 = UINT32_MAX;
	int64_t t160 = 184LL;

    t160 = (((x677|x678)%x679)/x680);

    if (t160 != -8421376LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x681 = -1;
	volatile int16_t x683 = -437;
	volatile int64_t t161 = -33784756041LL;

    t161 = (((x681|x682)%x683)/x684);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x685 = 0U;
	uint64_t x686 = 27689218876LLU;
	int32_t x687 = INT32_MAX;
	uint64_t x688 = 2880782588361493LLU;
	volatile uint64_t t162 = 259788122514365785LLU;

    t162 = (((x685|x686)%x687)/x688);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x693 = INT32_MAX;
	static volatile int32_t x694 = -15;
	static int32_t x696 = 27730;
	static int32_t t163 = 80574;

    t163 = (((x693|x694)%x695)/x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x697 = 9341U;
	uint8_t x698 = 52U;
	int32_t x699 = INT32_MIN;
	int64_t x700 = -1LL;
	int64_t t164 = 522LL;

    t164 = (((x697|x698)%x699)/x700);

    if (t164 != -9341LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = -135;
	static volatile int32_t x703 = -733480080;
	int8_t x704 = -1;
	static volatile int32_t t165 = -483863112;

    t165 = (((x701|x702)%x703)/x704);

    if (t165 != 135) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x706 = -1;
	volatile uint64_t x707 = 377292067LLU;
	int64_t x708 = INT64_MAX;
	uint64_t t166 = 142LLU;

    t166 = (((x705|x706)%x707)/x708);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x710 = INT16_MIN;
	int8_t x711 = 6;
	int32_t x712 = -20538667;
	int32_t t167 = -38;

    t167 = (((x709|x710)%x711)/x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x713 = INT32_MIN;
	uint8_t x714 = 0U;
	static uint64_t x715 = 440316494294LLU;
	volatile int16_t x716 = INT16_MIN;
	volatile uint64_t t168 = 110148155659LLU;

    t168 = (((x713|x714)%x715)/x716);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x717 = UINT16_MAX;
	static volatile int32_t x718 = -79;
	static uint16_t x720 = 2U;
	volatile uint64_t t169 = 1103638817687LLU;

    t169 = (((x717|x718)%x719)/x720);

    if (t169 != 143020310574358LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x721 = INT32_MIN;
	uint8_t x722 = UINT8_MAX;
	uint64_t x723 = UINT64_MAX;
	int32_t x724 = -1;

    t170 = (((x721|x722)%x723)/x724);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x725 = 0U;
	uint64_t x726 = UINT64_MAX;
	volatile int8_t x727 = -1;
	volatile int64_t x728 = 29770091517LL;
	uint64_t t171 = 34468705047589788LLU;

    t171 = (((x725|x726)%x727)/x728);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x729 = -59;
	uint64_t x730 = UINT64_MAX;
	int8_t x732 = 1;
	volatile uint64_t t172 = 16143247132331LLU;

    t172 = (((x729|x730)%x731)/x732);

    if (t172 != 107213LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x733 = INT64_MAX;
	int64_t x734 = INT64_MIN;
	static uint16_t x735 = 3U;
	uint64_t x736 = UINT64_MAX;
	uint64_t t173 = 2431065491179781LLU;

    t173 = (((x733|x734)%x735)/x736);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x737 = INT32_MAX;
	volatile int32_t x738 = -1;
	int32_t x739 = INT32_MAX;
	static int32_t t174 = 33;

    t174 = (((x737|x738)%x739)/x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x741 = 14;
	uint8_t x742 = 11U;
	static int16_t x743 = 10;
	volatile int32_t x744 = INT32_MIN;
	int32_t t175 = -56081;

    t175 = (((x741|x742)%x743)/x744);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x745 = -1;
	uint16_t x746 = 14072U;
	volatile int8_t x747 = INT8_MIN;
	int16_t x748 = -5485;
	static volatile int32_t t176 = -53390085;

    t176 = (((x745|x746)%x747)/x748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x750 = INT16_MIN;

    t177 = (((x749|x750)%x751)/x752);

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x753 = -3483721LL;
	uint64_t x754 = 419302080738837LLU;
	int64_t x755 = INT64_MIN;
	static volatile uint64_t x756 = 567LLU;
	volatile uint64_t t178 = 90728172855LLU;

    t178 = (((x753|x754)%x755)/x756);

    if (t178 != 16266970082632124LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = 55;
	static int16_t x758 = INT16_MIN;
	static uint64_t x759 = 67446720490196737LLU;
	volatile uint32_t x760 = 31347247U;
	static uint64_t t179 = 26940993177LLU;

    t179 = (((x757|x758)%x759)/x760);

    if (t179 != 1077905816LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x761 = 5294U;
	int8_t x762 = 1;

    t180 = (((x761|x762)%x763)/x764);

    if (t180 != 3) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x765 = INT8_MIN;
	static volatile int16_t x766 = INT16_MIN;
	int16_t x767 = 1845;
	int8_t x768 = INT8_MIN;
	volatile int32_t t181 = 226114859;

    t181 = (((x765|x766)%x767)/x768);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x769 = INT16_MIN;
	static uint8_t x771 = 80U;
	int8_t x772 = INT8_MIN;

    t182 = (((x769|x770)%x771)/x772);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile uint64_t x774 = 1122389LLU;
	int8_t x775 = INT8_MIN;
	uint64_t x776 = 8678581827339921LLU;
	volatile uint64_t t183 = 175860006LLU;

    t183 = (((x773|x774)%x775)/x776);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = INT32_MIN;
	int64_t x778 = -7990985LL;
	volatile uint32_t x779 = 16089606U;
	static int64_t x780 = -392893219931149LL;
	static int64_t t184 = 17611484947420734LL;

    t184 = (((x777|x778)%x779)/x780);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x781 = 1U;
	uint16_t x782 = 56U;
	uint8_t x783 = UINT8_MAX;
	uint32_t t185 = 2582U;

    t185 = (((x781|x782)%x783)/x784);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x785 = -11;
	uint8_t x786 = UINT8_MAX;
	int8_t x788 = INT8_MAX;
	uint64_t t186 = 5746LLU;

    t186 = (((x785|x786)%x787)/x788);

    if (t186 != 161329735LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x791 = -3212032717384LL;
	static int8_t x792 = INT8_MIN;
	volatile int64_t t187 = 13830251LL;

    t187 = (((x789|x790)%x791)/x792);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x793 = INT8_MIN;
	int32_t x794 = INT32_MIN;
	int8_t x795 = -1;
	static int8_t x796 = 53;

    t188 = (((x793|x794)%x795)/x796);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x797 = -1;
	uint32_t x798 = 21U;
	uint16_t x799 = 7515U;
	static int32_t x800 = INT32_MIN;
	static uint32_t t189 = 1865539U;

    t189 = (((x797|x798)%x799)/x800);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x801 = INT8_MIN;
	static int8_t x802 = -1;
	int16_t x803 = -3;
	int16_t x804 = 113;
	int32_t t190 = -559860095;

    t190 = (((x801|x802)%x803)/x804);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x805 = UINT32_MAX;
	int64_t x806 = 1903026113492LL;
	uint8_t x807 = UINT8_MAX;
	uint64_t x808 = 4747113LLU;
	uint64_t t191 = 8724LLU;

    t191 = (((x805|x806)%x807)/x808);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x810 = UINT32_MAX;
	int32_t x811 = -1;
	static volatile int32_t x812 = INT32_MIN;
	volatile uint32_t t192 = 12689U;

    t192 = (((x809|x810)%x811)/x812);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x813 = 13426005LLU;
	static volatile uint16_t x814 = UINT16_MAX;
	volatile int64_t x816 = -5015212207LL;
	volatile uint64_t t193 = 235LLU;

    t193 = (((x813|x814)%x815)/x816);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x817 = 1U;
	int64_t x818 = 23132897LL;

    t194 = (((x817|x818)%x819)/x820);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint32_t x827 = 11U;
	int32_t x828 = INT32_MAX;
	uint32_t t195 = 2U;

    t195 = (((x825|x826)%x827)/x828);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x829 = INT8_MIN;
	static uint16_t x830 = 2U;
	volatile uint16_t x831 = UINT16_MAX;
	static volatile int32_t t196 = 89402;

    t196 = (((x829|x830)%x831)/x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x833 = -1;
	int64_t x834 = -1LL;
	uint8_t x835 = 16U;
	int32_t x836 = -1;
	volatile int64_t t197 = -36594870737551384LL;

    t197 = (((x833|x834)%x835)/x836);

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x838 = INT32_MIN;
	int16_t x839 = -841;
	int8_t x840 = 61;
	volatile int64_t t198 = -16175996528663273LL;

    t198 = (((x837|x838)%x839)/x840);

    if (t198 != -7LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x841 = 242130852135545873LLU;
	uint16_t x842 = 86U;
	int64_t x843 = -1LL;
	int16_t x844 = -40;
	volatile uint64_t t199 = 547011838847834LLU;

    t199 = (((x841|x842)%x843)/x844);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

