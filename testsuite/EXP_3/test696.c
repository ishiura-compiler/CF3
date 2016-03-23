
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

int8_t x4 = -1;
uint64_t x7 = UINT64_MAX;
int64_t x10 = -1LL;
uint16_t x11 = UINT16_MAX;
volatile int64_t x17 = 1967724843764LL;
int16_t x23 = INT16_MAX;
static int64_t x30 = INT64_MAX;
int32_t t7 = -217;
int16_t x33 = -855;
static volatile int32_t t9 = -21202882;
int32_t x43 = INT32_MIN;
uint8_t x44 = UINT8_MAX;
uint16_t x47 = UINT16_MAX;
static volatile int64_t x54 = INT64_MAX;
volatile int16_t x56 = INT16_MIN;
volatile int32_t t14 = -82687;
int8_t x73 = 53;
volatile int64_t x81 = INT64_MIN;
static int16_t x84 = INT16_MIN;
uint8_t x89 = 56U;
uint64_t x90 = 228221751311279LLU;
static uint32_t x96 = 9129U;
static uint32_t x110 = UINT32_MAX;
int32_t x114 = INT32_MAX;
int32_t t30 = -541;
uint64_t x132 = UINT64_MAX;
int32_t t32 = 1;
int16_t x138 = -128;
uint8_t x141 = UINT8_MAX;
volatile int16_t x149 = -1;
static int8_t x151 = INT8_MIN;
volatile int32_t t36 = 48;
static int8_t x153 = INT8_MIN;
int32_t t37 = -61092;
static uint32_t x160 = 312U;
int32_t x161 = -1;
volatile int32_t x163 = INT32_MAX;
uint32_t x173 = 3208U;
int32_t t43 = 129924221;
volatile uint8_t x181 = UINT8_MAX;
static int32_t t44 = -16;
int16_t x187 = 1619;
volatile int32_t t45 = 26130;
int8_t x189 = -1;
static uint64_t x190 = UINT64_MAX;
int64_t x191 = -1468271001LL;
volatile int8_t x193 = 0;
uint32_t x200 = UINT32_MAX;
volatile int16_t x209 = -1;
int32_t t51 = -12662;
uint64_t x220 = 1524437676190062694LLU;
volatile int32_t t52 = 1523093;
uint16_t x223 = UINT16_MAX;
static volatile uint8_t x234 = 116U;
static uint8_t x246 = 68U;
int64_t x248 = -3116365946384553101LL;
static volatile int32_t x258 = INT32_MIN;
volatile int32_t t63 = 3008;
static int32_t x274 = 93;
volatile int8_t x276 = INT8_MIN;
volatile int32_t t66 = 5;
int16_t x283 = 644;
uint16_t x284 = UINT16_MAX;
uint16_t x294 = UINT16_MAX;
int8_t x302 = 0;
int32_t t75 = -2;
static int16_t x317 = INT16_MIN;
uint8_t x319 = 13U;
volatile uint8_t x327 = UINT8_MAX;
int32_t t79 = -345437719;
volatile int16_t x333 = -1;
volatile int32_t t81 = 15648569;
volatile int8_t x342 = -1;
static int8_t x345 = INT8_MIN;
uint64_t x346 = 53347161538611LLU;
volatile uint64_t x349 = 12975101222043579LLU;
int32_t x352 = -6782740;
volatile uint16_t x358 = UINT16_MAX;
int32_t x359 = -2961;
int16_t x362 = INT16_MAX;
volatile uint64_t x364 = 569519LLU;
static int64_t x369 = INT64_MIN;
static int32_t x370 = 40;
uint32_t x376 = UINT32_MAX;
volatile int32_t t94 = -77;
volatile int32_t t95 = -1;
volatile uint64_t x399 = UINT64_MAX;
uint64_t x401 = 698LLU;
int32_t t98 = -3640065;
static uint64_t x425 = 757734LLU;
volatile uint32_t x428 = 2U;
static volatile uint16_t x438 = 5U;
int32_t t105 = -4;
int32_t x441 = -1;
int8_t x452 = INT8_MIN;
int32_t x455 = INT32_MIN;
uint16_t x462 = 6U;
int8_t x465 = INT8_MIN;
int64_t x468 = INT64_MIN;
int16_t x469 = -1;
int8_t x474 = -1;
uint16_t x479 = 26003U;
uint8_t x482 = UINT8_MAX;
uint16_t x485 = UINT16_MAX;
int32_t x486 = -1;
volatile int8_t x489 = INT8_MIN;
volatile int32_t x499 = 1033515816;
int16_t x511 = -324;
int64_t x512 = 1037949206LL;
static int8_t x516 = INT8_MAX;
volatile int8_t x528 = 31;
int64_t x529 = -12LL;
static int8_t x530 = 5;
volatile int32_t t129 = -352;
volatile int16_t x550 = INT16_MIN;
int8_t x553 = INT8_MIN;
int32_t t132 = -3194435;
uint16_t x564 = UINT16_MAX;
int32_t x565 = INT32_MAX;
int32_t x566 = INT32_MIN;
int64_t x567 = -78LL;
static int32_t x568 = -1;
volatile uint32_t x570 = UINT32_MAX;
static volatile int32_t t136 = 0;
static int16_t x575 = -981;
static int32_t x583 = INT32_MIN;
int8_t x585 = INT8_MAX;
volatile int32_t t141 = 397;
static uint16_t x614 = 6247U;
int32_t x615 = -206756543;
uint8_t x617 = 55U;
uint32_t x618 = 4458U;
static uint32_t x620 = UINT32_MAX;
volatile int8_t x624 = INT8_MIN;
int16_t x629 = INT16_MIN;
uint32_t x632 = UINT32_MAX;
int64_t x638 = -1LL;
volatile uint8_t x642 = UINT8_MAX;
static volatile int8_t x651 = INT8_MIN;
static volatile int32_t t154 = 29;
int16_t x656 = INT16_MIN;
static int32_t t155 = -133;
int32_t x658 = INT32_MAX;
uint16_t x661 = 13U;
int32_t x663 = 0;
static int64_t x667 = INT64_MIN;
uint64_t x671 = 62378869082409839LLU;
uint8_t x672 = UINT8_MAX;
volatile uint32_t x675 = 1115U;
uint32_t x676 = 742U;
static volatile uint32_t x682 = 252516U;
volatile int32_t x684 = INT32_MIN;
static int32_t t162 = 1378;
int8_t x688 = 1;
volatile int32_t t163 = -1733758;
int64_t x700 = INT64_MIN;
static int8_t x704 = INT8_MIN;
int16_t x708 = -1;
int32_t x710 = 95368;
int32_t x716 = INT32_MIN;
volatile int32_t t170 = -220245;
volatile int8_t x720 = INT8_MIN;
static volatile int16_t x721 = -1;
volatile int32_t t172 = -183;
uint16_t x725 = 337U;
int16_t x727 = INT16_MIN;
int16_t x728 = -433;
int8_t x730 = INT8_MIN;
static int32_t x732 = 1;
int32_t t176 = 75975;
int32_t x743 = 257140;
int16_t x744 = INT16_MIN;
volatile int8_t x748 = 6;
static int8_t x749 = INT8_MIN;
volatile uint32_t x753 = UINT32_MAX;
int8_t x756 = -1;
uint32_t x764 = UINT32_MAX;
int32_t t182 = 2516;
volatile int32_t x772 = INT32_MIN;
static int64_t x774 = INT64_MAX;
int32_t t184 = -776534;
int32_t x790 = INT32_MIN;
static volatile int32_t t187 = 785143;
int8_t x794 = 20;
int64_t x797 = -1LL;
int64_t x800 = INT64_MIN;
volatile int32_t t189 = 1;
volatile int16_t x805 = INT16_MAX;
static uint32_t x808 = UINT32_MAX;
uint32_t x812 = 19892151U;
int16_t x818 = -1;
static volatile int32_t t194 = 27201;
int16_t x821 = -83;
uint16_t x822 = 7070U;
uint16_t x825 = UINT16_MAX;
volatile int32_t x830 = 2122;
uint8_t x836 = 3U;


void f0(void) {
    	int64_t x1 = -1944741LL;
	static int8_t x2 = -1;
	int16_t x3 = INT16_MAX;
	volatile int32_t t0 = -37;

    t0 = ((x1==x2)<=(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	int8_t x6 = -14;
	uint64_t x8 = 8974690217618680291LLU;
	static volatile int32_t t1 = -309601;

    t1 = ((x5==x6)<=(x7/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 1;
	uint32_t x12 = 199636U;
	static int32_t t2 = -332;

    t2 = ((x9==x10)<=(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MAX;
	volatile int64_t x15 = INT64_MAX;
	int16_t x16 = -1;
	static volatile int32_t t3 = 3338984;

    t3 = ((x13==x14)<=(x15/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = 3;
	volatile int8_t x19 = 36;
	uint8_t x20 = 119U;
	volatile int32_t t4 = -6057228;

    t4 = ((x17==x18)<=(x19/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	int16_t x24 = 445;
	static volatile int32_t t5 = 7862310;

    t5 = ((x21==x22)<=(x23/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int8_t x26 = -1;
	static uint64_t x27 = 14202LLU;
	static int32_t x28 = -28699207;
	volatile int32_t t6 = 1966;

    t6 = ((x25==x26)<=(x27/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 21U;
	uint64_t x31 = 1835978459LLU;
	int64_t x32 = INT64_MAX;

    t7 = ((x29==x30)<=(x31/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = INT32_MAX;
	uint64_t x35 = 72049LLU;
	uint32_t x36 = 848967U;
	volatile int32_t t8 = -1;

    t8 = ((x33==x34)<=(x35/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	int16_t x38 = 15;
	int16_t x39 = INT16_MIN;
	volatile uint16_t x40 = 24745U;

    t9 = ((x37==x38)<=(x39/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 65961620072220028LLU;
	volatile int64_t x42 = INT64_MIN;
	int32_t t10 = -31642285;

    t10 = ((x41==x42)<=(x43/x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x46 = -1040414894905175LL;
	uint64_t x48 = 1LLU;
	static volatile int32_t t11 = -14;

    t11 = ((x45==x46)<=(x47/x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -3588928263945897LL;
	volatile int16_t x50 = -94;
	int32_t x51 = INT32_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -1;

    t12 = ((x49==x50)<=(x51/x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 1038938LLU;
	int16_t x55 = INT16_MIN;
	int32_t t13 = 437518;

    t13 = ((x53==x54)<=(x55/x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 22;
	static uint8_t x58 = 97U;
	volatile int16_t x59 = INT16_MAX;
	static int8_t x60 = 42;

    t14 = ((x57==x58)<=(x59/x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 114U;
	static volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MAX;
	int32_t t15 = -915543483;

    t15 = ((x61==x62)<=(x63/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = -1;
	int64_t x66 = -1LL;
	int16_t x67 = 22;
	volatile uint64_t x68 = 27LLU;
	volatile int32_t t16 = -31378;

    t16 = ((x65==x66)<=(x67/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x74 = 883136579LLU;
	int32_t x75 = INT32_MIN;
	int16_t x76 = 627;
	int32_t t17 = 1;

    t17 = ((x73==x74)<=(x75/x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	uint16_t x78 = 4U;
	int64_t x79 = INT64_MAX;
	int64_t x80 = -22432926798871151LL;
	int32_t t18 = 537463;

    t18 = ((x77==x78)<=(x79/x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x82 = 1U;
	static int64_t x83 = INT64_MAX;
	static volatile int32_t t19 = 10;

    t19 = ((x81==x82)<=(x83/x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = 3;
	int16_t x86 = 465;
	int8_t x87 = 0;
	uint64_t x88 = 18300807301LLU;
	static int32_t t20 = -263;

    t20 = ((x85==x86)<=(x87/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x91 = INT32_MIN;
	int64_t x92 = 244566699781LL;
	static volatile int32_t t21 = 822371;

    t21 = ((x89==x90)<=(x91/x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 1259U;
	volatile int64_t x94 = -422872946016LL;
	static int32_t x95 = INT32_MAX;
	volatile int32_t t22 = -36394150;

    t22 = ((x93==x94)<=(x95/x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MAX;
	int64_t x98 = 11LL;
	uint8_t x99 = 2U;
	int64_t x100 = 253054883854686LL;
	static volatile int32_t t23 = 566;

    t23 = ((x97==x98)<=(x99/x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	int8_t x102 = -1;
	uint16_t x103 = 1U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t24 = -233065818;

    t24 = ((x101==x102)<=(x103/x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = 3081;
	int16_t x106 = -1753;
	uint64_t x107 = 9789213464296136LLU;
	int64_t x108 = INT64_MIN;
	volatile int32_t t25 = 813490017;

    t25 = ((x105==x106)<=(x107/x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int8_t x111 = -1;
	static uint8_t x112 = 1U;
	static int32_t t26 = -879187;

    t26 = ((x109==x110)<=(x111/x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 3U;
	volatile int64_t x115 = INT64_MAX;
	int16_t x116 = 77;
	int32_t t27 = 342556101;

    t27 = ((x113==x114)<=(x115/x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 0;
	static int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	int32_t x120 = -1;
	volatile int32_t t28 = 629926;

    t28 = ((x117==x118)<=(x119/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = UINT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;
	int32_t t29 = -47;

    t29 = ((x121==x122)<=(x123/x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	int8_t x126 = 1;
	uint8_t x127 = UINT8_MAX;
	static uint64_t x128 = 57LLU;

    t30 = ((x125==x126)<=(x127/x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x129 = UINT32_MAX;
	int16_t x130 = -63;
	uint8_t x131 = 2U;
	static volatile int32_t t31 = 43741276;

    t31 = ((x129==x130)<=(x131/x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MAX;
	volatile int8_t x134 = 1;
	volatile int16_t x135 = 1;
	int16_t x136 = INT16_MAX;

    t32 = ((x133==x134)<=(x135/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 517660U;
	volatile uint64_t x139 = UINT64_MAX;
	static int32_t x140 = 3518;
	int32_t t33 = 485;

    t33 = ((x137==x138)<=(x139/x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -1;
	static int32_t t34 = -6691;

    t34 = ((x141==x142)<=(x143/x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MAX;
	int32_t x146 = -288924;
	uint16_t x147 = 1U;
	int64_t x148 = INT64_MIN;
	int32_t t35 = -2804;

    t35 = ((x145==x146)<=(x147/x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MAX;

    t36 = ((x149==x150)<=(x151/x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x154 = 125796879U;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;

    t37 = ((x153==x154)<=(x155/x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = -41521361;
	volatile uint8_t x158 = 0U;
	int32_t x159 = INT32_MIN;
	int32_t t38 = -2965;

    t38 = ((x157==x158)<=(x159/x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x162 = -1;
	int16_t x164 = INT16_MIN;
	int32_t t39 = 25;

    t39 = ((x161==x162)<=(x163/x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	uint16_t x166 = 61U;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -328294766742086LL;
	volatile int32_t t40 = 6;

    t40 = ((x165==x166)<=(x167/x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x169 = 1U;
	volatile int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 94U;
	static int32_t t41 = 1;

    t41 = ((x169==x170)<=(x171/x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x174 = 75644854759669LLU;
	int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t42 = -80606;

    t42 = ((x173==x174)<=(x175/x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	uint8_t x178 = 23U;
	int16_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

    t43 = ((x177==x178)<=(x179/x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x182 = 7U;
	volatile uint32_t x183 = 101115850U;
	volatile uint16_t x184 = 74U;

    t44 = ((x181==x182)<=(x183/x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x185 = -1;
	uint64_t x186 = 21439919776903LLU;
	uint8_t x188 = UINT8_MAX;

    t45 = ((x185==x186)<=(x187/x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x192 = -2178;
	int32_t t46 = 0;

    t46 = ((x189==x190)<=(x191/x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x194 = 12278LLU;
	volatile uint32_t x195 = UINT32_MAX;
	volatile uint32_t x196 = 6U;
	int32_t t47 = 0;

    t47 = ((x193==x194)<=(x195/x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 1594;
	int64_t x199 = INT64_MAX;
	int32_t t48 = -111497;

    t48 = ((x197==x198)<=(x199/x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x201 = INT32_MAX;
	int8_t x202 = 1;
	int64_t x203 = 88944171313991476LL;
	uint16_t x204 = 48U;
	int32_t t49 = -16;

    t49 = ((x201==x202)<=(x203/x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = -2957251;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MAX;
	static volatile int8_t x208 = 1;
	int32_t t50 = 1193185;

    t50 = ((x205==x206)<=(x207/x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x210 = -11;
	volatile int16_t x211 = INT16_MAX;
	int32_t x212 = -1;

    t51 = ((x209==x210)<=(x211/x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = 92U;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = -181;

    t52 = ((x217==x218)<=(x219/x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x221 = INT8_MIN;
	volatile int32_t x222 = INT32_MAX;
	volatile int64_t x224 = INT64_MAX;
	volatile int32_t t53 = -162;

    t53 = ((x221==x222)<=(x223/x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int32_t x227 = -1;
	int16_t x228 = -1;
	int32_t t54 = -39579;

    t54 = ((x225==x226)<=(x227/x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = 7U;
	int16_t x230 = INT16_MIN;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = 3974LL;
	static volatile int32_t t55 = 1;

    t55 = ((x229==x230)<=(x231/x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = 0;
	volatile int64_t x235 = INT64_MAX;
	volatile int64_t x236 = INT64_MIN;
	int32_t t56 = -2;

    t56 = ((x233==x234)<=(x235/x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x237 = -24;
	int64_t x238 = 7432086267053LL;
	uint32_t x239 = UINT32_MAX;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t57 = 28289;

    t57 = ((x237==x238)<=(x239/x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -741776404LL;
	static int8_t x242 = -1;
	static int32_t x243 = INT32_MIN;
	int32_t x244 = 951;
	volatile int32_t t58 = -84588203;

    t58 = ((x241==x242)<=(x243/x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MIN;
	uint16_t x247 = 26141U;
	volatile int32_t t59 = 14509;

    t59 = ((x245==x246)<=(x247/x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x249 = 57U;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MAX;
	volatile int32_t t60 = -13;

    t60 = ((x249==x250)<=(x251/x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = -1;
	int32_t x254 = 224617112;
	uint16_t x255 = 210U;
	int8_t x256 = INT8_MIN;
	int32_t t61 = -1;

    t61 = ((x253==x254)<=(x255/x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = -1;
	volatile int16_t x259 = INT16_MIN;
	int64_t x260 = -246744976978941LL;
	static int32_t t62 = -988;

    t62 = ((x257==x258)<=(x259/x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MAX;
	uint64_t x263 = 1388022851242021350LLU;
	volatile int8_t x264 = INT8_MIN;

    t63 = ((x261==x262)<=(x263/x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = INT64_MAX;
	static uint64_t x266 = 156LLU;
	static int16_t x267 = -3518;
	uint64_t x268 = UINT64_MAX;
	static volatile int32_t t64 = -1;

    t64 = ((x265==x266)<=(x267/x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x269 = INT8_MIN;
	int32_t x270 = -712676738;
	uint16_t x271 = 4829U;
	int8_t x272 = -1;
	int32_t t65 = 0;

    t65 = ((x269==x270)<=(x271/x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x273 = -1;
	volatile uint16_t x275 = 1U;

    t66 = ((x273==x274)<=(x275/x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x277 = 3497U;
	volatile int64_t x278 = INT64_MAX;
	int16_t x279 = 70;
	volatile uint8_t x280 = 52U;
	volatile int32_t t67 = -1102289;

    t67 = ((x277==x278)<=(x279/x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = 1011;
	int16_t x282 = 64;
	int32_t t68 = 346;

    t68 = ((x281==x282)<=(x283/x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x289 = -1LL;
	int8_t x290 = -1;
	int32_t x291 = -827163;
	int32_t x292 = INT32_MAX;
	volatile int32_t t69 = 5629;

    t69 = ((x289==x290)<=(x291/x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = -1;
	static int32_t x295 = -640458;
	static uint64_t x296 = 89055974221007LLU;
	volatile int32_t t70 = 1015810;

    t70 = ((x293==x294)<=(x295/x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x297 = -2503526761400LL;
	uint32_t x298 = 2498498U;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MAX;
	int32_t t71 = 1;

    t71 = ((x297==x298)<=(x299/x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x301 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t72 = 1918;

    t72 = ((x301==x302)<=(x303/x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x305 = INT16_MIN;
	uint64_t x306 = 8596263786768789LLU;
	static uint64_t x307 = UINT64_MAX;
	static volatile uint32_t x308 = UINT32_MAX;
	volatile int32_t t73 = -3;

    t73 = ((x305==x306)<=(x307/x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x310 = -492488415;
	uint64_t x311 = 30287221763LLU;
	int64_t x312 = 119005188174176800LL;
	volatile int32_t t74 = -956;

    t74 = ((x309==x310)<=(x311/x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x313 = -1994;
	int16_t x314 = -7;
	int32_t x315 = INT32_MAX;
	static int8_t x316 = -14;

    t75 = ((x313==x314)<=(x315/x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x318 = -28633628LL;
	int8_t x320 = -1;
	static int32_t t76 = 96;

    t76 = ((x317==x318)<=(x319/x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = 47490;
	uint64_t x322 = UINT64_MAX;
	volatile uint64_t x323 = 141004261676038LLU;
	int32_t x324 = -1;
	volatile int32_t t77 = -40204308;

    t77 = ((x321==x322)<=(x323/x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x325 = 11;
	int32_t x326 = -1;
	int16_t x328 = 8;
	int32_t t78 = 0;

    t78 = ((x325==x326)<=(x327/x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x329 = 85U;
	uint64_t x330 = 71LLU;
	volatile uint64_t x331 = 1743886190008LLU;
	uint32_t x332 = 387675290U;

    t79 = ((x329==x330)<=(x331/x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x334 = 61658425U;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = 496;
	int32_t t80 = -203466755;

    t80 = ((x333==x334)<=(x335/x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = 2110U;
	static volatile uint64_t x339 = UINT64_MAX;
	volatile uint32_t x340 = UINT32_MAX;

    t81 = ((x337==x338)<=(x339/x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x341 = 953U;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t82 = 7929663;

    t82 = ((x341==x342)<=(x343/x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x347 = 15U;
	static int16_t x348 = 11995;
	int32_t t83 = 128549805;

    t83 = ((x345==x346)<=(x347/x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x350 = -1;
	uint16_t x351 = 9350U;
	volatile int32_t t84 = 33248;

    t84 = ((x349==x350)<=(x351/x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x353 = -7;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = -1LL;
	static int16_t x356 = INT16_MAX;
	int32_t t85 = -230831616;

    t85 = ((x353==x354)<=(x355/x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = UINT16_MAX;
	uint8_t x360 = UINT8_MAX;
	int32_t t86 = -1830631;

    t86 = ((x357==x358)<=(x359/x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = INT16_MIN;
	int8_t x363 = 16;
	static int32_t t87 = 20435675;

    t87 = ((x361==x362)<=(x363/x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	volatile int32_t x367 = INT32_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = 17321023;

    t88 = ((x365==x366)<=(x367/x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x371 = 24U;
	int64_t x372 = 134287347182697LL;
	static int32_t t89 = 0;

    t89 = ((x369==x370)<=(x371/x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x373 = 823;
	uint64_t x374 = 11746LLU;
	int64_t x375 = -178955759608LL;
	int32_t t90 = 1153;

    t90 = ((x373==x374)<=(x375/x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x377 = 6887542U;
	int8_t x378 = INT8_MAX;
	static int32_t x379 = -266453112;
	volatile int64_t x380 = -1LL;
	int32_t t91 = -3886;

    t91 = ((x377==x378)<=(x379/x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = -799118LL;
	int32_t x383 = -342857;
	int64_t x384 = -1LL;
	volatile int32_t t92 = 40763;

    t92 = ((x381==x382)<=(x383/x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	static uint16_t x387 = 28584U;
	volatile uint8_t x388 = 1U;
	volatile int32_t t93 = -5;

    t93 = ((x385==x386)<=(x387/x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = 352267200U;
	static volatile int8_t x390 = INT8_MIN;
	int8_t x391 = 0;
	int32_t x392 = 1779972;

    t94 = ((x389==x390)<=(x391/x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = -10;
	uint16_t x394 = UINT16_MAX;
	uint32_t x395 = UINT32_MAX;
	static volatile int8_t x396 = -1;

    t95 = ((x393==x394)<=(x395/x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x397 = INT64_MIN;
	volatile int8_t x398 = -1;
	volatile uint32_t x400 = 114509602U;
	int32_t t96 = 13;

    t96 = ((x397==x398)<=(x399/x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x402 = INT8_MIN;
	uint16_t x403 = 7435U;
	int64_t x404 = INT64_MIN;
	int32_t t97 = -1;

    t97 = ((x401==x402)<=(x403/x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = -241826;
	uint16_t x407 = 27U;
	int8_t x408 = INT8_MAX;

    t98 = ((x405==x406)<=(x407/x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x413 = UINT8_MAX;
	volatile int64_t x414 = -12726172LL;
	int32_t x415 = -1;
	int8_t x416 = 1;
	int32_t t99 = -149;

    t99 = ((x413==x414)<=(x415/x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = INT8_MAX;
	volatile int32_t x418 = INT32_MIN;
	static uint32_t x419 = UINT32_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t100 = 51;

    t100 = ((x417==x418)<=(x419/x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x421 = 987112LLU;
	int16_t x422 = -94;
	volatile uint16_t x423 = 384U;
	uint32_t x424 = 328187U;
	volatile int32_t t101 = -2356496;

    t101 = ((x421==x422)<=(x423/x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x426 = 3629U;
	int16_t x427 = INT16_MAX;
	static volatile int32_t t102 = 93134979;

    t102 = ((x425==x426)<=(x427/x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	static int16_t x430 = -1;
	int16_t x431 = -1;
	static int8_t x432 = INT8_MAX;
	static int32_t t103 = -1;

    t103 = ((x429==x430)<=(x431/x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x433 = UINT64_MAX;
	volatile uint16_t x434 = 115U;
	volatile int32_t x435 = INT32_MAX;
	int16_t x436 = INT16_MIN;
	volatile int32_t t104 = 1506;

    t104 = ((x433==x434)<=(x435/x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	volatile int32_t x439 = INT32_MAX;
	uint32_t x440 = 3U;

    t105 = ((x437==x438)<=(x439/x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x442 = 1;
	uint8_t x443 = 0U;
	static volatile int16_t x444 = INT16_MAX;
	int32_t t106 = -106251;

    t106 = ((x441==x442)<=(x443/x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x445 = -1963;
	int8_t x446 = -1;
	int8_t x447 = INT8_MIN;
	int8_t x448 = -3;
	volatile int32_t t107 = 42;

    t107 = ((x445==x446)<=(x447/x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = INT64_MAX;
	static uint32_t x450 = 11584720U;
	int8_t x451 = -1;
	volatile int32_t t108 = -14552;

    t108 = ((x449==x450)<=(x451/x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x453 = 12U;
	uint64_t x454 = 36LLU;
	volatile int8_t x456 = 1;
	static int32_t t109 = 77931155;

    t109 = ((x453==x454)<=(x455/x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x461 = 7U;
	int64_t x463 = 168LL;
	int8_t x464 = INT8_MAX;
	volatile int32_t t110 = -6310;

    t110 = ((x461==x462)<=(x463/x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x466 = 1011291448U;
	int64_t x467 = -1LL;
	static int32_t t111 = -50391;

    t111 = ((x465==x466)<=(x467/x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x470 = 63450161685586288LLU;
	int8_t x471 = -58;
	uint8_t x472 = 3U;
	int32_t t112 = -131148;

    t112 = ((x469==x470)<=(x471/x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x473 = 4LLU;
	int16_t x475 = INT16_MIN;
	volatile int16_t x476 = -19;
	static int32_t t113 = 30025073;

    t113 = ((x473==x474)<=(x475/x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x477 = 1078U;
	volatile uint8_t x478 = 0U;
	int16_t x480 = -1;
	int32_t t114 = 582858;

    t114 = ((x477==x478)<=(x479/x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = INT16_MIN;
	static uint8_t x483 = UINT8_MAX;
	volatile int64_t x484 = 120069208LL;
	volatile int32_t t115 = -12907;

    t115 = ((x481==x482)<=(x483/x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x487 = INT64_MIN;
	uint8_t x488 = 24U;
	int32_t t116 = -136;

    t116 = ((x485==x486)<=(x487/x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x490 = INT64_MAX;
	volatile int8_t x491 = 20;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t117 = 443907976;

    t117 = ((x489==x490)<=(x491/x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x493 = 1704U;
	uint16_t x494 = 1440U;
	int8_t x495 = INT8_MIN;
	int16_t x496 = -6;
	int32_t t118 = -440792;

    t118 = ((x493==x494)<=(x495/x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x497 = INT16_MAX;
	int64_t x498 = -1LL;
	int32_t x500 = 384245968;
	volatile int32_t t119 = 4;

    t119 = ((x497==x498)<=(x499/x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile int32_t x502 = INT32_MAX;
	int8_t x503 = INT8_MAX;
	int32_t x504 = -16;
	volatile int32_t t120 = -15454;

    t120 = ((x501==x502)<=(x503/x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint8_t x506 = 1U;
	static uint64_t x507 = 51LLU;
	int32_t x508 = 5;
	static int32_t t121 = 51396273;

    t121 = ((x505==x506)<=(x507/x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = -1;
	int8_t x510 = 1;
	int32_t t122 = 1;

    t122 = ((x509==x510)<=(x511/x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x513 = 342086050780LLU;
	int16_t x514 = -1;
	static int16_t x515 = -1;
	volatile int32_t t123 = 142818297;

    t123 = ((x513==x514)<=(x515/x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = 240;
	int32_t x518 = INT32_MIN;
	int16_t x519 = 70;
	volatile uint64_t x520 = 1777681286248LLU;
	volatile int32_t t124 = -794;

    t124 = ((x517==x518)<=(x519/x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x521 = 1U;
	int32_t x522 = INT32_MIN;
	volatile int8_t x523 = INT8_MAX;
	uint64_t x524 = UINT64_MAX;
	int32_t t125 = 761944;

    t125 = ((x521==x522)<=(x523/x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x525 = -1;
	static volatile int16_t x526 = -1;
	static uint16_t x527 = 28927U;
	int32_t t126 = -24760011;

    t126 = ((x525==x526)<=(x527/x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x531 = 94942LLU;
	static uint64_t x532 = UINT64_MAX;
	int32_t t127 = 34;

    t127 = ((x529==x530)<=(x531/x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	int16_t x534 = INT16_MAX;
	uint16_t x535 = 170U;
	static int32_t x536 = -321686308;
	volatile int32_t t128 = -340690;

    t128 = ((x533==x534)<=(x535/x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x538 = INT16_MAX;
	uint8_t x539 = 33U;
	int16_t x540 = 124;

    t129 = ((x537==x538)<=(x539/x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x541 = INT64_MIN;
	int32_t x542 = INT32_MIN;
	int16_t x543 = -197;
	volatile int16_t x544 = INT16_MIN;
	static volatile int32_t t130 = -1949494;

    t130 = ((x541==x542)<=(x543/x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x549 = INT8_MAX;
	volatile int8_t x551 = -1;
	uint64_t x552 = UINT64_MAX;
	static int32_t t131 = -366115;

    t131 = ((x549==x550)<=(x551/x552));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x554 = UINT16_MAX;
	volatile int16_t x555 = 126;
	int16_t x556 = -4788;

    t132 = ((x553==x554)<=(x555/x556));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x557 = INT16_MIN;
	uint8_t x558 = 1U;
	volatile uint8_t x559 = UINT8_MAX;
	int64_t x560 = INT64_MIN;
	static int32_t t133 = 300070;

    t133 = ((x557==x558)<=(x559/x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x561 = 218LLU;
	int64_t x562 = -615650603LL;
	int16_t x563 = INT16_MIN;
	volatile int32_t t134 = 6;

    t134 = ((x561==x562)<=(x563/x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t t135 = -26247132;

    t135 = ((x565==x566)<=(x567/x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x569 = -30352502584LL;
	int64_t x571 = -1LL;
	static uint16_t x572 = 12U;

    t136 = ((x569==x570)<=(x571/x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = INT8_MAX;
	static int64_t x574 = -12630643LL;
	static uint64_t x576 = 1801581382271LLU;
	volatile int32_t t137 = 7;

    t137 = ((x573==x574)<=(x575/x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x577 = INT16_MAX;
	static int8_t x578 = INT8_MIN;
	static volatile uint8_t x579 = UINT8_MAX;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t138 = -113869;

    t138 = ((x577==x578)<=(x579/x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x581 = -1;
	int8_t x582 = -16;
	int8_t x584 = 1;
	static int32_t t139 = -28642337;

    t139 = ((x581==x582)<=(x583/x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x586 = -1;
	int16_t x587 = INT16_MIN;
	int16_t x588 = INT16_MIN;
	volatile int32_t t140 = -225284;

    t140 = ((x585==x586)<=(x587/x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x589 = 1U;
	int16_t x590 = -1;
	uint32_t x591 = UINT32_MAX;
	static int16_t x592 = -200;

    t141 = ((x589==x590)<=(x591/x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MIN;
	int16_t x595 = INT16_MAX;
	int64_t x596 = INT64_MIN;
	int32_t t142 = -2088801;

    t142 = ((x593==x594)<=(x595/x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x597 = 0;
	static int32_t x598 = INT32_MAX;
	uint32_t x599 = 19U;
	int64_t x600 = INT64_MIN;
	volatile int32_t t143 = 1;

    t143 = ((x597==x598)<=(x599/x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x609 = INT32_MIN;
	static int8_t x610 = INT8_MAX;
	static int32_t x611 = 9733345;
	static int64_t x612 = -1LL;
	volatile int32_t t144 = -8;

    t144 = ((x609==x610)<=(x611/x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x616 = -1;
	volatile int32_t t145 = 0;

    t145 = ((x613==x614)<=(x615/x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x619 = 6096146;
	volatile int32_t t146 = 23;

    t146 = ((x617==x618)<=(x619/x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint8_t x622 = 83U;
	uint32_t x623 = 8U;
	static int32_t t147 = -1027801105;

    t147 = ((x621==x622)<=(x623/x624));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x625 = 3U;
	uint32_t x626 = 32256496U;
	volatile int16_t x627 = 1264;
	static volatile uint32_t x628 = 487966357U;
	volatile int32_t t148 = 1744921;

    t148 = ((x625==x626)<=(x627/x628));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x630 = INT32_MAX;
	static int8_t x631 = -59;
	static volatile int32_t t149 = -6390;

    t149 = ((x629==x630)<=(x631/x632));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x633 = -34;
	static uint64_t x634 = 55707640LLU;
	static volatile uint8_t x635 = UINT8_MAX;
	static int16_t x636 = 46;
	static volatile int32_t t150 = 3;

    t150 = ((x633==x634)<=(x635/x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x637 = -1;
	volatile uint64_t x639 = UINT64_MAX;
	int64_t x640 = 975090061893449345LL;
	volatile int32_t t151 = 2482517;

    t151 = ((x637==x638)<=(x639/x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x641 = 2434U;
	volatile uint32_t x643 = UINT32_MAX;
	int64_t x644 = -1LL;
	int32_t t152 = -9679458;

    t152 = ((x641==x642)<=(x643/x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x645 = UINT64_MAX;
	int8_t x646 = 1;
	volatile int32_t x647 = INT32_MAX;
	volatile int64_t x648 = INT64_MIN;
	volatile int32_t t153 = 9;

    t153 = ((x645==x646)<=(x647/x648));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x649 = -1;
	uint16_t x650 = 1U;
	static int16_t x652 = -1;

    t154 = ((x649==x650)<=(x651/x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x653 = INT16_MAX;
	uint8_t x654 = 3U;
	int8_t x655 = INT8_MIN;

    t155 = ((x653==x654)<=(x655/x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x657 = 1U;
	uint16_t x659 = 1095U;
	uint16_t x660 = 3U;
	volatile int32_t t156 = 723;

    t156 = ((x657==x658)<=(x659/x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x662 = -9;
	int32_t x664 = INT32_MIN;
	int32_t t157 = 465037;

    t157 = ((x661==x662)<=(x663/x664));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x665 = -1;
	uint8_t x666 = 3U;
	uint16_t x668 = 26214U;
	static volatile int32_t t158 = 1075699;

    t158 = ((x665==x666)<=(x667/x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile uint8_t x670 = 25U;
	volatile int32_t t159 = 2079659;

    t159 = ((x669==x670)<=(x671/x672));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = INT8_MIN;
	volatile int64_t x674 = 1344272LL;
	int32_t t160 = -3698011;

    t160 = ((x673==x674)<=(x675/x676));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x677 = -495;
	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MAX;
	int64_t x680 = 3LL;
	volatile int32_t t161 = 1;

    t161 = ((x677==x678)<=(x679/x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x681 = 9933U;
	volatile uint16_t x683 = 2302U;

    t162 = ((x681==x682)<=(x683/x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x685 = UINT8_MAX;
	static volatile uint64_t x686 = 4510282411215409924LLU;
	uint8_t x687 = 7U;

    t163 = ((x685==x686)<=(x687/x688));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int32_t x691 = INT32_MAX;
	int8_t x692 = -6;
	static int32_t t164 = 1;

    t164 = ((x689==x690)<=(x691/x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x693 = 1036670LLU;
	uint8_t x694 = 33U;
	uint64_t x695 = UINT64_MAX;
	static int8_t x696 = 35;
	volatile int32_t t165 = 41183;

    t165 = ((x693==x694)<=(x695/x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = -1;
	int32_t x698 = INT32_MIN;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t166 = 251392433;

    t166 = ((x697==x698)<=(x699/x700));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x701 = 21280207LL;
	int64_t x702 = INT64_MIN;
	int64_t x703 = INT64_MIN;
	static volatile int32_t t167 = -799634;

    t167 = ((x701==x702)<=(x703/x704));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x705 = 1;
	volatile uint16_t x706 = 4537U;
	int64_t x707 = -1LL;
	int32_t t168 = 43739;

    t168 = ((x705==x706)<=(x707/x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x709 = -1LL;
	uint16_t x711 = UINT16_MAX;
	int64_t x712 = -1LL;
	volatile int32_t t169 = -1443038;

    t169 = ((x709==x710)<=(x711/x712));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x713 = -1;
	uint64_t x714 = 118173LLU;
	int16_t x715 = INT16_MAX;

    t170 = ((x713==x714)<=(x715/x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x717 = -1;
	int16_t x718 = INT16_MIN;
	uint16_t x719 = 0U;
	volatile int32_t t171 = -38;

    t171 = ((x717==x718)<=(x719/x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x722 = -1;
	int16_t x723 = INT16_MAX;
	uint64_t x724 = 4991285453439LLU;

    t172 = ((x721==x722)<=(x723/x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x726 = 28707257;
	int32_t t173 = 489;

    t173 = ((x725==x726)<=(x727/x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = -1LL;
	static volatile uint16_t x731 = 358U;
	volatile int32_t t174 = 32;

    t174 = ((x729==x730)<=(x731/x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x733 = 852U;
	uint16_t x734 = 322U;
	volatile int16_t x735 = -1;
	int64_t x736 = -12239370011801LL;
	volatile int32_t t175 = -1;

    t175 = ((x733==x734)<=(x735/x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x737 = UINT16_MAX;
	static uint64_t x738 = 10799551781743LLU;
	int32_t x739 = INT32_MIN;
	int64_t x740 = -1LL;

    t176 = ((x737==x738)<=(x739/x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	int32_t t177 = 51194;

    t177 = ((x741==x742)<=(x743/x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x745 = INT64_MIN;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = 13U;
	volatile int32_t t178 = 3;

    t178 = ((x745==x746)<=(x747/x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x750 = INT32_MAX;
	int32_t x751 = -3359303;
	int64_t x752 = -1LL;
	static volatile int32_t t179 = -230388176;

    t179 = ((x749==x750)<=(x751/x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x754 = 281;
	uint32_t x755 = 4U;
	int32_t t180 = -21;

    t180 = ((x753==x754)<=(x755/x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x757 = 222;
	int64_t x758 = -130264500656360LL;
	int16_t x759 = 262;
	int32_t x760 = -1;
	int32_t t181 = 3227;

    t181 = ((x757==x758)<=(x759/x760));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x761 = 1197U;
	uint32_t x762 = 53863661U;
	volatile int8_t x763 = 1;

    t182 = ((x761==x762)<=(x763/x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x769 = INT8_MAX;
	uint32_t x770 = 7071U;
	volatile uint32_t x771 = 74108825U;
	static volatile int32_t t183 = -14381804;

    t183 = ((x769==x770)<=(x771/x772));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x773 = 469979U;
	static volatile int16_t x775 = -2983;
	int8_t x776 = INT8_MIN;

    t184 = ((x773==x774)<=(x775/x776));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x781 = INT8_MIN;
	volatile int8_t x782 = INT8_MAX;
	uint16_t x783 = 15796U;
	int8_t x784 = 3;
	volatile int32_t t185 = 0;

    t185 = ((x781==x782)<=(x783/x784));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x785 = 101272U;
	volatile uint64_t x786 = 351727LLU;
	uint64_t x787 = 60769412LLU;
	int16_t x788 = INT16_MAX;
	int32_t t186 = -39755346;

    t186 = ((x785==x786)<=(x787/x788));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x789 = 0;
	static uint64_t x791 = 451804LLU;
	uint64_t x792 = UINT64_MAX;

    t187 = ((x789==x790)<=(x791/x792));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x793 = -13;
	int16_t x795 = INT16_MIN;
	static volatile int64_t x796 = INT64_MIN;
	int32_t t188 = 2018;

    t188 = ((x793==x794)<=(x795/x796));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x798 = -4070;
	int16_t x799 = 5559;

    t189 = ((x797==x798)<=(x799/x800));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x801 = INT16_MIN;
	int64_t x802 = -125217779LL;
	int16_t x803 = INT16_MAX;
	uint64_t x804 = 150LLU;
	static int32_t t190 = 121810633;

    t190 = ((x801==x802)<=(x803/x804));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x806 = INT16_MAX;
	int64_t x807 = 3080LL;
	static volatile int32_t t191 = 366063507;

    t191 = ((x805==x806)<=(x807/x808));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x809 = INT16_MIN;
	static int64_t x810 = INT64_MIN;
	int16_t x811 = -1;
	volatile int32_t t192 = -1447;

    t192 = ((x809==x810)<=(x811/x812));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x813 = INT8_MIN;
	static uint8_t x814 = 50U;
	static int16_t x815 = INT16_MAX;
	int16_t x816 = INT16_MIN;
	static volatile int32_t t193 = -25880839;

    t193 = ((x813==x814)<=(x815/x816));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x817 = -776846;
	int32_t x819 = -115720;
	int16_t x820 = INT16_MAX;

    t194 = ((x817==x818)<=(x819/x820));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x823 = 89877U;
	static uint64_t x824 = UINT64_MAX;
	volatile int32_t t195 = -13570;

    t195 = ((x821==x822)<=(x823/x824));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x826 = 2U;
	int64_t x827 = 52964997701105LL;
	int64_t x828 = INT64_MIN;
	int32_t t196 = 887494267;

    t196 = ((x825==x826)<=(x827/x828));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x829 = INT64_MIN;
	uint16_t x831 = 3U;
	int16_t x832 = -1;
	volatile int32_t t197 = 1074004;

    t197 = ((x829==x830)<=(x831/x832));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x833 = INT16_MIN;
	int16_t x834 = 704;
	int8_t x835 = -3;
	volatile int32_t t198 = -113867;

    t198 = ((x833==x834)<=(x835/x836));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x837 = 922729U;
	uint16_t x838 = 18U;
	int64_t x839 = INT64_MIN;
	int64_t x840 = INT64_MIN;
	volatile int32_t t199 = -30285;

    t199 = ((x837==x838)<=(x839/x840));

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

