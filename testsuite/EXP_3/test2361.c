
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

int64_t x11 = INT64_MIN;
int32_t x13 = -1013;
int16_t x17 = 9;
uint64_t x20 = 672540600460LLU;
static volatile int8_t x31 = INT8_MIN;
int8_t x40 = INT8_MAX;
volatile int8_t x51 = -6;
static volatile int32_t t11 = -1676810;
uint16_t x62 = 0U;
int16_t x64 = -1;
static volatile int32_t t14 = 1;
uint32_t x66 = 7437U;
uint16_t x67 = UINT16_MAX;
uint32_t x70 = 61733U;
volatile int32_t t16 = -19;
static int64_t x78 = -2608LL;
uint32_t x80 = 3U;
int64_t x87 = INT64_MIN;
volatile int32_t x93 = -4486;
volatile uint8_t x98 = UINT8_MAX;
int32_t x104 = INT32_MIN;
int32_t t25 = 11;
int8_t x124 = INT8_MIN;
int16_t x135 = 0;
volatile int32_t t31 = -5063613;
int32_t t32 = 5357872;
uint64_t x146 = 5570708794114LLU;
volatile int16_t x151 = 2;
static int32_t x153 = INT32_MAX;
volatile int32_t t38 = -1;
int32_t t39 = -6765;
int64_t x182 = -38313LL;
volatile int8_t x186 = -1;
volatile uint64_t x193 = 71770LLU;
int64_t x202 = INT64_MIN;
static int64_t x206 = 1665015836940456LL;
static int32_t x207 = INT32_MIN;
static int64_t x210 = INT64_MAX;
int8_t x212 = -1;
volatile int32_t t50 = 1;
volatile uint32_t x222 = UINT32_MAX;
int32_t x223 = -238;
int32_t x224 = 8116;
uint8_t x234 = UINT8_MAX;
int32_t t54 = -93693;
int32_t t57 = 95125;
static uint32_t x250 = 1019374U;
int16_t x252 = INT16_MIN;
uint64_t x255 = 121574227141203717LLU;
static volatile int32_t t60 = -138267;
int32_t x263 = -71524;
volatile int64_t x264 = 9708974814LL;
int16_t x274 = -1;
int32_t x275 = -1;
int16_t x277 = -215;
int16_t x287 = -1;
volatile int32_t t67 = 42;
volatile int64_t x304 = -58543LL;
static int64_t x305 = -1LL;
uint8_t x313 = 25U;
static volatile int32_t x314 = -1;
int32_t t72 = 10;
static int32_t t73 = -255;
volatile uint8_t x323 = UINT8_MAX;
static int16_t x328 = INT16_MIN;
volatile int16_t x341 = -9347;
int16_t x347 = -1;
uint8_t x350 = 48U;
int32_t t82 = 1999546;
int32_t t84 = 1;
uint64_t x369 = 79986390983115LLU;
static volatile int32_t t85 = 49;
volatile uint64_t x381 = UINT64_MAX;
uint8_t x387 = 1U;
static int32_t t89 = -202270;
uint8_t x400 = 6U;
static int32_t t91 = 514630413;
static uint32_t x410 = 1U;
int32_t x412 = INT32_MIN;
int32_t t95 = 10;
uint8_t x418 = 112U;
volatile int32_t t96 = 1932582;
int8_t x421 = INT8_MAX;
int64_t x429 = 1LL;
uint8_t x430 = 9U;
volatile int32_t t99 = 785;
volatile uint32_t x436 = 949407U;
volatile int32_t t100 = -238;
static uint32_t x438 = 111U;
int32_t t101 = 13138917;
int64_t x441 = INT64_MAX;
volatile int32_t t105 = -18984;
static uint32_t x470 = 832244U;
int32_t x483 = 33;
volatile int32_t t109 = 1925;
int8_t x488 = INT8_MIN;
int32_t t110 = 265657;
volatile uint16_t x489 = 14719U;
volatile int64_t x493 = 18528607433LL;
int16_t x495 = -2601;
int32_t t115 = -52330;
uint64_t x511 = UINT64_MAX;
volatile int32_t t116 = -5442088;
static int64_t x513 = INT64_MIN;
static volatile int8_t x514 = 1;
uint8_t x516 = 10U;
int64_t x525 = -1LL;
volatile int32_t x529 = INT32_MAX;
int8_t x532 = -1;
uint8_t x537 = 3U;
volatile int8_t x539 = -1;
int64_t x542 = INT64_MIN;
int16_t x543 = -1;
static int32_t x553 = INT32_MAX;
uint64_t x556 = 3221677190192440653LLU;
uint32_t x560 = 4118862U;
int16_t x563 = INT16_MIN;
volatile int32_t t128 = 1070338;
int64_t x568 = -92276362LL;
static int64_t x575 = INT64_MAX;
int64_t x577 = INT64_MAX;
uint32_t x582 = 656U;
uint16_t x584 = 10353U;
volatile int8_t x596 = INT8_MIN;
static uint64_t x597 = 116376LLU;
uint16_t x599 = 4U;
int32_t x602 = -626;
uint8_t x623 = UINT8_MAX;
int8_t x626 = 1;
volatile int32_t t141 = 1772605;
int32_t x629 = 6101;
int16_t x638 = INT16_MIN;
uint64_t x639 = 3LLU;
int64_t x642 = -1LL;
int16_t x643 = -1;
volatile int32_t x645 = INT32_MIN;
uint8_t x646 = 2U;
int16_t x666 = INT16_MAX;
uint32_t x669 = 128222677U;
static int8_t x674 = 16;
int32_t t154 = -235;
volatile int32_t t156 = -873598384;
static volatile int8_t x699 = 6;
volatile int32_t t158 = -80;
int16_t x702 = INT16_MIN;
uint64_t x705 = 10529674248537LLU;
uint32_t x707 = UINT32_MAX;
int8_t x715 = INT8_MAX;
static int16_t x735 = -1;
static int32_t x741 = 25;
int64_t x743 = INT64_MAX;
int8_t x744 = INT8_MAX;
int32_t t168 = 48484;
int64_t x745 = INT64_MIN;
static int32_t t170 = 3;
static int8_t x756 = INT8_MIN;
int32_t t173 = -2335206;
int16_t x768 = 39;
int64_t x771 = INT64_MAX;
volatile int32_t t175 = -579;
static int8_t x778 = -1;
volatile int8_t x780 = INT8_MIN;
volatile int8_t x785 = -2;
volatile int32_t x795 = -4089;
volatile int32_t x796 = INT32_MIN;
int32_t t181 = -110425526;
uint8_t x797 = UINT8_MAX;
volatile int64_t x798 = -1640873587LL;
volatile int32_t t182 = -2;
uint8_t x802 = 36U;
static uint64_t x809 = 39920327009295735LLU;
volatile int8_t x811 = INT8_MAX;
int64_t x817 = INT64_MIN;
uint8_t x820 = 7U;
int8_t x823 = INT8_MAX;
uint64_t x824 = 21566144523187176LLU;
static uint64_t x829 = 3680228652462LLU;
int32_t t190 = -261;
uint32_t x841 = 108U;
int32_t x843 = INT32_MAX;
static int16_t x847 = INT16_MIN;
int8_t x851 = INT8_MIN;
int64_t x853 = INT64_MIN;
int32_t t197 = 216590363;
volatile int32_t t198 = 4;


void f0(void) {
    	int64_t x1 = 8020152168502899LL;
	int8_t x2 = 1;
	static volatile int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 13;

    t0 = ((x1+x2)>(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -13;
	int32_t x10 = -1;
	int8_t x12 = INT8_MAX;
	static int32_t t1 = -5495;

    t1 = ((x9+x10)>(x11|x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = -2;
	int32_t x15 = 255890938;
	static uint32_t x16 = 61U;
	static volatile int32_t t2 = -99127360;

    t2 = ((x13+x14)>(x15|x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x18 = 572U;
	uint8_t x19 = 1U;
	volatile int32_t t3 = 439151536;

    t3 = ((x17+x18)>(x19|x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MAX;
	static volatile int64_t x22 = -1LL;
	int16_t x23 = 1419;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -128265280;

    t4 = ((x21+x22)>(x23|x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = INT32_MIN;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = 181090;
	volatile int16_t x28 = INT16_MAX;
	int32_t t5 = 238;

    t5 = ((x25+x26)>(x27|x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	uint16_t x30 = 628U;
	static volatile int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 23063264;

    t6 = ((x29+x30)>(x31|x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	static uint16_t x35 = 2U;
	int32_t x36 = 46;
	static volatile int32_t t7 = -18186298;

    t7 = ((x33+x34)>(x35|x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MAX;
	volatile int64_t x38 = -635LL;
	volatile int8_t x39 = 5;
	static int32_t t8 = -8550622;

    t8 = ((x37+x38)>(x39|x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x41 = INT8_MIN;
	static uint64_t x42 = 237LLU;
	uint16_t x43 = 15U;
	uint16_t x44 = 1844U;
	static volatile int32_t t9 = -6;

    t9 = ((x41+x42)>(x43|x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	uint16_t x47 = 6917U;
	static volatile int16_t x48 = INT16_MAX;
	int32_t t10 = 536156338;

    t10 = ((x45+x46)>(x47|x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	uint32_t x52 = 444784U;

    t11 = ((x49+x50)>(x51|x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 45304390LLU;
	uint64_t x54 = 13838479808LLU;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t12 = 1;

    t12 = ((x53+x54)>(x55|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 1381320373767LLU;
	static uint64_t x58 = 9LLU;
	volatile uint32_t x59 = 409U;
	static volatile int16_t x60 = 24;
	volatile int32_t t13 = -1;

    t13 = ((x57+x58)>(x59|x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 209U;
	int64_t x63 = -1LL;

    t14 = ((x61+x62)>(x63|x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = INT64_MIN;
	static volatile int8_t x68 = INT8_MIN;
	int32_t t15 = 63974066;

    t15 = ((x65+x66)>(x67|x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = INT64_MIN;

    t16 = ((x69+x70)>(x71|x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -56;
	static uint16_t x74 = 423U;
	static int8_t x75 = -1;
	int64_t x76 = 27735180491819696LL;
	static volatile int32_t t17 = 3;

    t17 = ((x73+x74)>(x75|x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = UINT32_MAX;
	uint16_t x79 = 1265U;
	int32_t t18 = 193867;

    t18 = ((x77+x78)>(x79|x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x81 = 14U;
	int8_t x82 = 10;
	static int64_t x83 = -1LL;
	uint16_t x84 = 246U;
	static int32_t t19 = -56919;

    t19 = ((x81+x82)>(x83|x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -1919142989LL;
	int32_t x86 = -1;
	int8_t x88 = 0;
	int32_t t20 = -16;

    t20 = ((x85+x86)>(x87|x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MAX;
	uint64_t x90 = 1LLU;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 485222046;

    t21 = ((x89+x90)>(x91|x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	int64_t x96 = 33874809916LL;
	int32_t t22 = 5576977;

    t22 = ((x93+x94)>(x95|x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = 7775;
	volatile int16_t x99 = INT16_MAX;
	static int64_t x100 = INT64_MAX;
	volatile int32_t t23 = 26101017;

    t23 = ((x97+x98)>(x99|x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = -3067655818431563LL;
	uint16_t x102 = 2U;
	int64_t x103 = INT64_MIN;
	volatile int32_t t24 = 1578967;

    t24 = ((x101+x102)>(x103|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	uint16_t x106 = 1U;
	volatile int16_t x107 = -1;
	int64_t x108 = -1LL;

    t25 = ((x105+x106)>(x107|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = -12975513;
	static volatile int64_t x110 = -1LL;
	int32_t x111 = -1258381;
	static int32_t x112 = -1;
	volatile int32_t t26 = 88;

    t26 = ((x109+x110)>(x111|x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x113 = 2680U;
	int8_t x114 = -1;
	uint32_t x115 = 0U;
	int8_t x116 = -1;
	volatile int32_t t27 = -1;

    t27 = ((x113+x114)>(x115|x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MAX;
	int32_t x118 = -1;
	int8_t x119 = 1;
	static uint64_t x120 = 3503LLU;
	int32_t t28 = 3067076;

    t28 = ((x117+x118)>(x119|x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x121 = 4522U;
	int32_t x122 = 344102;
	int16_t x123 = INT16_MAX;
	volatile int32_t t29 = 453034006;

    t29 = ((x121+x122)>(x123|x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = -101189005;
	int64_t x126 = -1LL;
	volatile uint8_t x127 = 72U;
	int32_t x128 = INT32_MAX;
	volatile int32_t t30 = 10;

    t30 = ((x125+x126)>(x127|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = 10;
	int64_t x134 = 731LL;
	volatile int8_t x136 = INT8_MIN;

    t31 = ((x133+x134)>(x135|x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x137 = UINT8_MAX;
	int16_t x138 = INT16_MIN;
	static int64_t x139 = INT64_MAX;
	static int32_t x140 = 7039;

    t32 = ((x137+x138)>(x139|x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MAX;
	volatile uint32_t x143 = 495U;
	uint64_t x144 = 3392229LLU;
	volatile int32_t t33 = 3;

    t33 = ((x141+x142)>(x143|x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = 16U;
	int8_t x147 = 15;
	volatile int32_t x148 = INT32_MAX;
	static int32_t t34 = 2050390;

    t34 = ((x145+x146)>(x147|x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x149 = 0;
	static volatile int8_t x150 = 0;
	int32_t x152 = -3;
	volatile int32_t t35 = -653;

    t35 = ((x149+x150)>(x151|x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = 0;
	volatile uint16_t x155 = 7U;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t36 = -878948;

    t36 = ((x153+x154)>(x155|x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = 29U;
	volatile uint8_t x158 = 0U;
	static uint16_t x159 = 1U;
	int64_t x160 = 32745685895LL;
	volatile int32_t t37 = -231;

    t37 = ((x157+x158)>(x159|x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = -1;
	int16_t x166 = INT16_MAX;
	static volatile int32_t x167 = 0;
	uint8_t x168 = UINT8_MAX;

    t38 = ((x165+x166)>(x167|x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x169 = UINT8_MAX;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = -1747398;
	static int8_t x172 = -1;

    t39 = ((x169+x170)>(x171|x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = 16971593235035823LLU;
	static int16_t x174 = -477;
	static int64_t x175 = INT64_MIN;
	uint32_t x176 = 10U;
	volatile int32_t t40 = 24;

    t40 = ((x173+x174)>(x175|x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x177 = INT16_MAX;
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MAX;
	int32_t t41 = -29693;

    t41 = ((x177+x178)>(x179|x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = UINT32_MAX;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t42 = 5097156;

    t42 = ((x181+x182)>(x183|x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x185 = -1;
	static int64_t x187 = INT64_MIN;
	uint16_t x188 = 25056U;
	volatile int32_t t43 = -492389;

    t43 = ((x185+x186)>(x187|x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = INT32_MIN;
	uint16_t x190 = 13U;
	int16_t x191 = 1;
	volatile int64_t x192 = INT64_MAX;
	volatile int32_t t44 = -24;

    t44 = ((x189+x190)>(x191|x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x194 = -53;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MAX;
	volatile int32_t t45 = 24040415;

    t45 = ((x193+x194)>(x195|x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x197 = 6470U;
	int32_t x198 = 1;
	int32_t x199 = -1;
	int8_t x200 = -6;
	int32_t t46 = -145;

    t46 = ((x197+x198)>(x199|x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = 421U;
	uint16_t x203 = UINT16_MAX;
	volatile uint32_t x204 = 183031877U;
	static volatile int32_t t47 = 189738;

    t47 = ((x201+x202)>(x203|x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 555U;
	int16_t x208 = -1;
	int32_t t48 = -12282016;

    t48 = ((x205+x206)>(x207|x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x209 = UINT64_MAX;
	int32_t x211 = 12;
	volatile int32_t t49 = -1960;

    t49 = ((x209+x210)>(x211|x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MAX;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MAX;

    t50 = ((x213+x214)>(x215|x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MAX;
	uint16_t x218 = 111U;
	static volatile int64_t x219 = 394208LL;
	int8_t x220 = INT8_MAX;
	int32_t t51 = 429;

    t51 = ((x217+x218)>(x219|x220));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MIN;
	volatile int32_t t52 = -43955;

    t52 = ((x221+x222)>(x223|x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x229 = 48186984758LLU;
	int64_t x230 = -108026459696LL;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 607U;
	int32_t t53 = 9915838;

    t53 = ((x229+x230)>(x231|x232));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x233 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	int32_t x236 = -1;

    t54 = ((x233+x234)>(x235|x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x237 = -159452743LL;
	int16_t x238 = INT16_MAX;
	uint64_t x239 = 563527118066LLU;
	uint16_t x240 = 9456U;
	volatile int32_t t55 = 0;

    t55 = ((x237+x238)>(x239|x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x241 = 59907266714LL;
	static int8_t x242 = -1;
	int16_t x243 = -1;
	uint32_t x244 = 7503418U;
	static int32_t t56 = -423569;

    t56 = ((x241+x242)>(x243|x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x245 = INT16_MAX;
	volatile uint64_t x246 = 483LLU;
	int16_t x247 = INT16_MIN;
	int32_t x248 = -387347181;

    t57 = ((x245+x246)>(x247|x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = INT8_MAX;
	uint16_t x251 = 599U;
	volatile int32_t t58 = -56;

    t58 = ((x249+x250)>(x251|x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = INT8_MIN;
	static uint64_t x254 = 1919439753954331LLU;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t59 = 21332;

    t59 = ((x253+x254)>(x255|x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 1921041875091591LLU;
	static int16_t x259 = INT16_MIN;
	uint16_t x260 = 8U;

    t60 = ((x257+x258)>(x259|x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x261 = 13866U;
	volatile uint32_t x262 = 49U;
	int32_t t61 = -548156;

    t61 = ((x261+x262)>(x263|x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x265 = UINT8_MAX;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = -1LL;
	static int16_t x268 = INT16_MAX;
	int32_t t62 = 7293;

    t62 = ((x265+x266)>(x267|x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MAX;
	int64_t x272 = -150069041179LL;
	int32_t t63 = -2493;

    t63 = ((x269+x270)>(x271|x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x273 = 198;
	int32_t x276 = -88;
	volatile int32_t t64 = 41262419;

    t64 = ((x273+x274)>(x275|x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x278 = 12219785LLU;
	uint64_t x279 = 4215316653838702600LLU;
	int32_t x280 = -1;
	static int32_t t65 = 40335;

    t65 = ((x277+x278)>(x279|x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = -71;
	int16_t x282 = INT16_MAX;
	volatile int64_t x283 = -1LL;
	uint16_t x284 = 2847U;
	static volatile int32_t t66 = 1;

    t66 = ((x281+x282)>(x283|x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = 211210362298098LLU;
	uint32_t x288 = 243489U;

    t67 = ((x285+x286)>(x287|x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x297 = INT8_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -1;
	int64_t x300 = -1LL;
	static volatile int32_t t68 = 65459824;

    t68 = ((x297+x298)>(x299|x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x301 = 86;
	static int16_t x302 = INT16_MIN;
	uint64_t x303 = 103LLU;
	int32_t t69 = 221383932;

    t69 = ((x301+x302)>(x303|x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x306 = INT32_MIN;
	uint32_t x307 = 2021U;
	uint8_t x308 = 1U;
	volatile int32_t t70 = -344805975;

    t70 = ((x305+x306)>(x307|x308));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x309 = -16;
	int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	int16_t x312 = -1;
	volatile int32_t t71 = 1;

    t71 = ((x309+x310)>(x311|x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x315 = INT32_MAX;
	volatile int32_t x316 = INT32_MIN;

    t72 = ((x313+x314)>(x315|x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x317 = 183U;
	static volatile int16_t x318 = INT16_MAX;
	static int32_t x319 = 486946;
	int8_t x320 = INT8_MAX;

    t73 = ((x317+x318)>(x319|x320));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x321 = -660LL;
	int8_t x322 = INT8_MAX;
	static int16_t x324 = INT16_MAX;
	int32_t t74 = -4751119;

    t74 = ((x321+x322)>(x323|x324));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = INT16_MAX;
	static int8_t x326 = -6;
	int32_t x327 = INT32_MIN;
	volatile int32_t t75 = -161;

    t75 = ((x325+x326)>(x327|x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -247708;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = -9531LL;
	static int8_t x332 = 0;
	volatile int32_t t76 = 92333298;

    t76 = ((x329+x330)>(x331|x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = 574;
	int8_t x334 = INT8_MAX;
	int8_t x335 = -1;
	int16_t x336 = 6;
	int32_t t77 = -1322509;

    t77 = ((x333+x334)>(x335|x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = INT8_MAX;
	volatile uint8_t x338 = 18U;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t78 = -2;

    t78 = ((x337+x338)>(x339|x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -2003;
	int32_t t79 = -2;

    t79 = ((x341+x342)>(x343|x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x345 = 33656LLU;
	int8_t x346 = -1;
	static int8_t x348 = -1;
	int32_t t80 = 30492;

    t80 = ((x345+x346)>(x347|x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x349 = 381;
	static volatile uint8_t x351 = 0U;
	uint64_t x352 = UINT64_MAX;
	int32_t t81 = 24;

    t81 = ((x349+x350)>(x351|x352));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = 414457250;
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = -1;
	int64_t x356 = -1LL;

    t82 = ((x353+x354)>(x355|x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x357 = INT16_MAX;
	uint16_t x358 = 8U;
	int32_t x359 = 444148891;
	uint16_t x360 = 410U;
	int32_t t83 = 22;

    t83 = ((x357+x358)>(x359|x360));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x361 = 120U;
	static int16_t x362 = INT16_MIN;
	static int64_t x363 = INT64_MIN;
	static volatile uint16_t x364 = 222U;

    t84 = ((x361+x362)>(x363|x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x370 = -25;
	volatile int16_t x371 = -1;
	int8_t x372 = 7;

    t85 = ((x369+x370)>(x371|x372));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = 14U;
	static volatile uint64_t x374 = 6113998972320LLU;
	int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	static int32_t t86 = 1735;

    t86 = ((x373+x374)>(x375|x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x382 = 6LLU;
	int8_t x383 = INT8_MAX;
	static int32_t x384 = INT32_MIN;
	int32_t t87 = 0;

    t87 = ((x381+x382)>(x383|x384));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x385 = UINT16_MAX;
	uint16_t x386 = UINT16_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t88 = 3877;

    t88 = ((x385+x386)>(x387|x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = 1;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MIN;

    t89 = ((x389+x390)>(x391|x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x393 = 68U;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t90 = -6326;

    t90 = ((x393+x394)>(x395|x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x397 = 550435U;
	int32_t x398 = -6;
	volatile uint8_t x399 = UINT8_MAX;

    t91 = ((x397+x398)>(x399|x400));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x401 = -7457LL;
	volatile int32_t x402 = INT32_MAX;
	static int8_t x403 = INT8_MIN;
	volatile int32_t x404 = -1;
	static int32_t t92 = 470604;

    t92 = ((x401+x402)>(x403|x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = -3898948LL;
	volatile int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = INT32_MIN;
	int32_t t93 = 2;

    t93 = ((x405+x406)>(x407|x408));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x409 = UINT16_MAX;
	int8_t x411 = 1;
	volatile int32_t t94 = 57;

    t94 = ((x409+x410)>(x411|x412));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x413 = -2;
	uint32_t x414 = UINT32_MAX;
	int32_t x415 = INT32_MAX;
	uint16_t x416 = 257U;

    t95 = ((x413+x414)>(x415|x416));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x417 = UINT64_MAX;
	volatile int32_t x419 = 7118446;
	volatile int32_t x420 = -10;

    t96 = ((x417+x418)>(x419|x420));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x422 = UINT64_MAX;
	uint32_t x423 = UINT32_MAX;
	static uint64_t x424 = 439412431229076483LLU;
	volatile int32_t t97 = -1556734;

    t97 = ((x421+x422)>(x423|x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x425 = 25U;
	volatile uint16_t x426 = UINT16_MAX;
	int32_t x427 = 96;
	volatile int16_t x428 = 195;
	static volatile int32_t t98 = -4943803;

    t98 = ((x425+x426)>(x427|x428));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x431 = INT32_MAX;
	uint8_t x432 = 6U;

    t99 = ((x429+x430)>(x431|x432));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = -299058400009133LL;
	int32_t x434 = 11448553;
	uint32_t x435 = 42533U;

    t100 = ((x433+x434)>(x435|x436));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x437 = INT64_MIN;
	int32_t x439 = INT32_MIN;
	int32_t x440 = -1;

    t101 = ((x437+x438)>(x439|x440));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x442 = INT32_MIN;
	static int32_t x443 = INT32_MAX;
	volatile uint16_t x444 = 0U;
	static int32_t t102 = -16;

    t102 = ((x441+x442)>(x443|x444));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MIN;
	int16_t x447 = -1;
	int64_t x448 = INT64_MAX;
	volatile int32_t t103 = 6532894;

    t103 = ((x445+x446)>(x447|x448));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x453 = UINT16_MAX;
	uint64_t x454 = UINT64_MAX;
	static int16_t x455 = INT16_MAX;
	uint32_t x456 = 18U;
	static volatile int32_t t104 = -10914;

    t104 = ((x453+x454)>(x455|x456));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x457 = 14285666904030LLU;
	int64_t x458 = -1LL;
	uint32_t x459 = 38U;
	int16_t x460 = -1;

    t105 = ((x457+x458)>(x459|x460));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x461 = UINT16_MAX;
	int64_t x462 = INT64_MIN;
	int32_t x463 = 58942;
	int64_t x464 = INT64_MIN;
	int32_t t106 = -1;

    t106 = ((x461+x462)>(x463|x464));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = INT32_MAX;
	int8_t x471 = 1;
	int8_t x472 = -1;
	int32_t t107 = 1020;

    t107 = ((x469+x470)>(x471|x472));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x473 = -107;
	static int16_t x474 = INT16_MAX;
	volatile int16_t x475 = -1;
	uint16_t x476 = 4U;
	static volatile int32_t t108 = -1189;

    t108 = ((x473+x474)>(x475|x476));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x481 = INT16_MIN;
	volatile int8_t x482 = -1;
	static volatile int64_t x484 = -26494684303LL;

    t109 = ((x481+x482)>(x483|x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x486 = 622067;
	static int8_t x487 = INT8_MIN;

    t110 = ((x485+x486)>(x487|x488));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x490 = UINT8_MAX;
	int64_t x491 = -1386601991LL;
	int8_t x492 = -2;
	volatile int32_t t111 = -205948124;

    t111 = ((x489+x490)>(x491|x492));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x494 = -92;
	static uint32_t x496 = UINT32_MAX;
	static int32_t t112 = -17927104;

    t112 = ((x493+x494)>(x495|x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x497 = UINT64_MAX;
	int16_t x498 = INT16_MAX;
	int8_t x499 = 15;
	int32_t x500 = INT32_MIN;
	volatile int32_t t113 = 0;

    t113 = ((x497+x498)>(x499|x500));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x501 = INT16_MIN;
	int64_t x502 = -1LL;
	uint32_t x503 = 2U;
	uint16_t x504 = 1U;
	int32_t t114 = 2786515;

    t114 = ((x501+x502)>(x503|x504));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x505 = 6;
	static int64_t x506 = 84270370006623693LL;
	int8_t x507 = -1;
	int32_t x508 = INT32_MIN;

    t115 = ((x505+x506)>(x507|x508));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = -1LL;
	uint64_t x510 = 8044739244093LLU;
	int32_t x512 = -68;

    t116 = ((x509+x510)>(x511|x512));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x515 = INT64_MAX;
	int32_t t117 = -1838014;

    t117 = ((x513+x514)>(x515|x516));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = -1;
	volatile int16_t x518 = -1;
	int32_t x519 = -1;
	int16_t x520 = 3571;
	static volatile int32_t t118 = -211117;

    t118 = ((x517+x518)>(x519|x520));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x526 = INT8_MIN;
	int32_t x527 = -4971;
	volatile uint32_t x528 = 1U;
	int32_t t119 = -148890;

    t119 = ((x525+x526)>(x527|x528));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x530 = INT8_MIN;
	int64_t x531 = INT64_MAX;
	int32_t t120 = 34;

    t120 = ((x529+x530)>(x531|x532));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x533 = 54U;
	int8_t x534 = -1;
	uint32_t x535 = UINT32_MAX;
	int32_t x536 = -8359;
	volatile int32_t t121 = -378;

    t121 = ((x533+x534)>(x535|x536));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x538 = -1;
	static int8_t x540 = INT8_MAX;
	int32_t t122 = 26232;

    t122 = ((x537+x538)>(x539|x540));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = INT32_MAX;
	static int32_t x544 = INT32_MIN;
	volatile int32_t t123 = -14686189;

    t123 = ((x541+x542)>(x543|x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x545 = 30;
	int16_t x546 = -1;
	int64_t x547 = 57774LL;
	int8_t x548 = INT8_MAX;
	int32_t t124 = 581005389;

    t124 = ((x545+x546)>(x547|x548));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x549 = UINT8_MAX;
	int8_t x550 = 3;
	int32_t x551 = INT32_MIN;
	static int64_t x552 = INT64_MIN;
	volatile int32_t t125 = 348;

    t125 = ((x549+x550)>(x551|x552));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x554 = INT32_MIN;
	int16_t x555 = -1;
	static volatile int32_t t126 = 60482;

    t126 = ((x553+x554)>(x555|x556));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x557 = -1;
	static uint32_t x558 = 868026123U;
	int64_t x559 = INT64_MIN;
	volatile int32_t t127 = 13368;

    t127 = ((x557+x558)>(x559|x560));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x561 = 21;
	static int8_t x562 = 2;
	uint32_t x564 = 1797926864U;

    t128 = ((x561+x562)>(x563|x564));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x565 = -112541524;
	int32_t x566 = 406471710;
	int8_t x567 = -1;
	int32_t t129 = 18273;

    t129 = ((x565+x566)>(x567|x568));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	uint16_t x574 = 17U;
	volatile uint32_t x576 = 4194U;
	volatile int32_t t130 = -483;

    t130 = ((x573+x574)>(x575|x576));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x578 = -1;
	int8_t x579 = -10;
	volatile int32_t x580 = INT32_MAX;
	volatile int32_t t131 = 1;

    t131 = ((x577+x578)>(x579|x580));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x581 = INT32_MIN;
	static int64_t x583 = -17973240LL;
	static int32_t t132 = 1766172;

    t132 = ((x581+x582)>(x583|x584));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x585 = -1LL;
	int64_t x586 = INT64_MAX;
	int8_t x587 = INT8_MAX;
	int16_t x588 = INT16_MIN;
	int32_t t133 = 4799130;

    t133 = ((x585+x586)>(x587|x588));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x589 = 114U;
	uint32_t x590 = UINT32_MAX;
	int32_t x591 = -94676335;
	int16_t x592 = INT16_MAX;
	volatile int32_t t134 = -187079;

    t134 = ((x589+x590)>(x591|x592));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x593 = 5U;
	int32_t x594 = INT32_MAX;
	static int64_t x595 = 1914868297LL;
	int32_t t135 = 0;

    t135 = ((x593+x594)>(x595|x596));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x598 = INT8_MAX;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t136 = 0;

    t136 = ((x597+x598)>(x599|x600));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x603 = INT8_MAX;
	volatile uint8_t x604 = 12U;
	volatile int32_t t137 = -9715038;

    t137 = ((x601+x602)>(x603|x604));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x610 = 13;
	volatile int64_t x611 = 1541602893772LL;
	int16_t x612 = INT16_MAX;
	static volatile int32_t t138 = -46349;

    t138 = ((x609+x610)>(x611|x612));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x617 = INT64_MIN;
	int16_t x618 = INT16_MAX;
	static volatile int64_t x619 = INT64_MIN;
	static int32_t x620 = 1339;
	static int32_t t139 = -371;

    t139 = ((x617+x618)>(x619|x620));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x621 = INT16_MAX;
	static int16_t x622 = -1;
	static uint32_t x624 = 29439U;
	volatile int32_t t140 = -664527538;

    t140 = ((x621+x622)>(x623|x624));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x625 = -430959175;
	static volatile uint16_t x627 = 3U;
	int32_t x628 = INT32_MIN;

    t141 = ((x625+x626)>(x627|x628));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x630 = UINT16_MAX;
	uint16_t x631 = 754U;
	uint64_t x632 = 15645776095LLU;
	int32_t t142 = -553798;

    t142 = ((x629+x630)>(x631|x632));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MAX;
	static int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MAX;
	volatile int32_t t143 = 686;

    t143 = ((x633+x634)>(x635|x636));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x637 = 1614;
	int8_t x640 = INT8_MIN;
	volatile int32_t t144 = -20;

    t144 = ((x637+x638)>(x639|x640));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x644 = 10972221;
	volatile int32_t t145 = -3;

    t145 = ((x641+x642)>(x643|x644));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x647 = -1;
	uint64_t x648 = 583978681191151100LLU;
	static int32_t t146 = -69011;

    t146 = ((x645+x646)>(x647|x648));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x649 = -33688;
	static int16_t x650 = -1;
	int8_t x651 = INT8_MIN;
	uint32_t x652 = UINT32_MAX;
	volatile int32_t t147 = -5;

    t147 = ((x649+x650)>(x651|x652));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x653 = UINT64_MAX;
	int16_t x654 = INT16_MAX;
	int16_t x655 = INT16_MIN;
	static volatile int64_t x656 = -11LL;
	volatile int32_t t148 = 3983;

    t148 = ((x653+x654)>(x655|x656));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MAX;
	volatile uint32_t x659 = UINT32_MAX;
	uint16_t x660 = 1446U;
	volatile int32_t t149 = 122533;

    t149 = ((x657+x658)>(x659|x660));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int8_t x662 = INT8_MAX;
	static int16_t x663 = INT16_MAX;
	static volatile int16_t x664 = -1;
	static int32_t t150 = -7;

    t150 = ((x661+x662)>(x663|x664));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x665 = 28;
	uint8_t x667 = UINT8_MAX;
	uint8_t x668 = 17U;
	static int32_t t151 = 259470;

    t151 = ((x665+x666)>(x667|x668));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MAX;
	int8_t x672 = 0;
	int32_t t152 = -36;

    t152 = ((x669+x670)>(x671|x672));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x673 = INT8_MAX;
	int16_t x675 = INT16_MIN;
	volatile int64_t x676 = INT64_MIN;
	int32_t t153 = 71279;

    t153 = ((x673+x674)>(x675|x676));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = INT32_MIN;
	int8_t x678 = 2;
	static int16_t x679 = -1;
	static int8_t x680 = INT8_MAX;

    t154 = ((x677+x678)>(x679|x680));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x685 = -1;
	int32_t x686 = 1876;
	uint8_t x687 = UINT8_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t155 = 14539818;

    t155 = ((x685+x686)>(x687|x688));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x689 = 0;
	int32_t x690 = INT32_MAX;
	uint64_t x691 = 13LLU;
	uint64_t x692 = 240914LLU;

    t156 = ((x689+x690)>(x691|x692));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x693 = 45;
	static volatile uint16_t x694 = 3U;
	static uint16_t x695 = 127U;
	int32_t x696 = -3600230;
	int32_t t157 = 1404;

    t157 = ((x693+x694)>(x695|x696));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x697 = 24U;
	volatile uint64_t x698 = 7961267638191086643LLU;
	int32_t x700 = INT32_MIN;

    t158 = ((x697+x698)>(x699|x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x701 = INT16_MAX;
	int64_t x703 = -1LL;
	static uint16_t x704 = 13168U;
	int32_t t159 = 1448;

    t159 = ((x701+x702)>(x703|x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x706 = UINT16_MAX;
	int64_t x708 = -1LL;
	volatile int32_t t160 = 2;

    t160 = ((x705+x706)>(x707|x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = -89977;
	int64_t x711 = 1581060466LL;
	volatile int8_t x712 = INT8_MAX;
	volatile int32_t t161 = -21382;

    t161 = ((x709+x710)>(x711|x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x713 = 5867037574LL;
	int64_t x714 = -1735LL;
	static volatile int32_t x716 = INT32_MIN;
	static volatile int32_t t162 = -28;

    t162 = ((x713+x714)>(x715|x716));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x717 = -2103780;
	int32_t x718 = -6570;
	static uint16_t x719 = 116U;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t163 = 1735;

    t163 = ((x717+x718)>(x719|x720));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x721 = 4U;
	uint32_t x722 = 1873U;
	int16_t x723 = INT16_MIN;
	int16_t x724 = INT16_MIN;
	int32_t t164 = -280834;

    t164 = ((x721+x722)>(x723|x724));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x729 = UINT16_MAX;
	int32_t x730 = INT32_MIN;
	int8_t x731 = 55;
	static int32_t x732 = INT32_MIN;
	int32_t t165 = 15958388;

    t165 = ((x729+x730)>(x731|x732));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x733 = 0;
	static uint32_t x734 = 1624U;
	volatile int16_t x736 = 7;
	volatile int32_t t166 = 365065708;

    t166 = ((x733+x734)>(x735|x736));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x737 = 6454U;
	int8_t x738 = 1;
	int32_t x739 = -16008670;
	volatile int16_t x740 = -4;
	volatile int32_t t167 = 7891583;

    t167 = ((x737+x738)>(x739|x740));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x742 = 27973U;

    t168 = ((x741+x742)>(x743|x744));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x746 = INT64_MAX;
	int8_t x747 = INT8_MIN;
	int32_t x748 = INT32_MAX;
	int32_t t169 = -3765396;

    t169 = ((x745+x746)>(x747|x748));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x749 = -1;
	int64_t x750 = INT64_MAX;
	int32_t x751 = INT32_MIN;
	int16_t x752 = INT16_MAX;

    t170 = ((x749+x750)>(x751|x752));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x753 = INT32_MIN;
	static uint8_t x754 = 6U;
	int32_t x755 = INT32_MAX;
	int32_t t171 = 2;

    t171 = ((x753+x754)>(x755|x756));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x757 = INT32_MAX;
	volatile uint32_t x758 = UINT32_MAX;
	uint32_t x759 = UINT32_MAX;
	int16_t x760 = -1;
	volatile int32_t t172 = -248475595;

    t172 = ((x757+x758)>(x759|x760));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x761 = -1;
	volatile uint32_t x762 = 3848U;
	static uint32_t x763 = UINT32_MAX;
	static uint16_t x764 = UINT16_MAX;

    t173 = ((x761+x762)>(x763|x764));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x765 = 30923845LLU;
	int32_t x766 = INT32_MIN;
	static int8_t x767 = INT8_MIN;
	int32_t t174 = -1084;

    t174 = ((x765+x766)>(x767|x768));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x769 = -91;
	uint16_t x770 = 553U;
	int16_t x772 = INT16_MIN;

    t175 = ((x769+x770)>(x771|x772));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x773 = INT16_MIN;
	int16_t x774 = INT16_MIN;
	int32_t x775 = -1;
	static int16_t x776 = INT16_MAX;
	static volatile int32_t t176 = 428;

    t176 = ((x773+x774)>(x775|x776));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x777 = INT16_MAX;
	volatile int64_t x779 = INT64_MIN;
	volatile int32_t t177 = 2;

    t177 = ((x777+x778)>(x779|x780));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x781 = UINT16_MAX;
	static uint8_t x782 = UINT8_MAX;
	static int64_t x783 = -355LL;
	volatile uint16_t x784 = 6978U;
	volatile int32_t t178 = -1437;

    t178 = ((x781+x782)>(x783|x784));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x786 = UINT64_MAX;
	int16_t x787 = INT16_MIN;
	int16_t x788 = 105;
	int32_t t179 = -1;

    t179 = ((x785+x786)>(x787|x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x789 = INT64_MAX;
	int8_t x790 = INT8_MIN;
	int8_t x791 = -56;
	uint16_t x792 = 10U;
	volatile int32_t t180 = 40730352;

    t180 = ((x789+x790)>(x791|x792));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = -2219;
	static int8_t x794 = -1;

    t181 = ((x793+x794)>(x795|x796));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x799 = INT64_MIN;
	int16_t x800 = INT16_MAX;

    t182 = ((x797+x798)>(x799|x800));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x803 = 177868163065320LLU;
	static uint8_t x804 = UINT8_MAX;
	int32_t t183 = 4637;

    t183 = ((x801+x802)>(x803|x804));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x805 = INT8_MIN;
	int16_t x806 = 5;
	int8_t x807 = -1;
	int64_t x808 = -838974603024074LL;
	int32_t t184 = 3427;

    t184 = ((x805+x806)>(x807|x808));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x810 = -1LL;
	uint16_t x812 = 2473U;
	volatile int32_t t185 = 30;

    t185 = ((x809+x810)>(x811|x812));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x813 = 846U;
	volatile uint64_t x814 = 40LLU;
	static volatile int16_t x815 = -1;
	volatile int32_t x816 = INT32_MIN;
	int32_t t186 = 2417124;

    t186 = ((x813+x814)>(x815|x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x818 = INT64_MAX;
	uint8_t x819 = 10U;
	static int32_t t187 = 302204;

    t187 = ((x817+x818)>(x819|x820));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x821 = 0;
	int64_t x822 = -2419828LL;
	int32_t t188 = -15630;

    t188 = ((x821+x822)>(x823|x824));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x825 = 4U;
	uint32_t x826 = 2218U;
	int32_t x827 = INT32_MIN;
	static uint32_t x828 = 86U;
	static int32_t t189 = 475317;

    t189 = ((x825+x826)>(x827|x828));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x830 = INT8_MAX;
	static volatile int16_t x831 = INT16_MIN;
	int64_t x832 = -1LL;

    t190 = ((x829+x830)>(x831|x832));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x837 = 349;
	volatile int8_t x838 = -18;
	int64_t x839 = INT64_MIN;
	int64_t x840 = INT64_MIN;
	volatile int32_t t191 = 530862;

    t191 = ((x837+x838)>(x839|x840));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x842 = INT32_MIN;
	static uint64_t x844 = UINT64_MAX;
	int32_t t192 = 58;

    t192 = ((x841+x842)>(x843|x844));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x845 = -219954422;
	uint32_t x846 = 213U;
	uint16_t x848 = UINT16_MAX;
	int32_t t193 = 0;

    t193 = ((x845+x846)>(x847|x848));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x849 = -1;
	static uint16_t x850 = 12U;
	int16_t x852 = INT16_MIN;
	int32_t t194 = -35881;

    t194 = ((x849+x850)>(x851|x852));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x854 = 9191450LLU;
	uint16_t x855 = 294U;
	uint16_t x856 = 859U;
	volatile int32_t t195 = 24135;

    t195 = ((x853+x854)>(x855|x856));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x861 = -1;
	int8_t x862 = INT8_MIN;
	volatile uint64_t x863 = UINT64_MAX;
	int16_t x864 = -1;
	int32_t t196 = -711899899;

    t196 = ((x861+x862)>(x863|x864));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x865 = UINT8_MAX;
	int16_t x866 = INT16_MAX;
	int32_t x867 = INT32_MIN;
	int64_t x868 = -685696433271475LL;

    t197 = ((x865+x866)>(x867|x868));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x869 = 20;
	int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MIN;
	volatile uint64_t x872 = 1281000288LLU;

    t198 = ((x869+x870)>(x871|x872));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x873 = 528719862907LLU;
	static volatile int8_t x874 = INT8_MAX;
	static volatile uint32_t x875 = 12119649U;
	int32_t x876 = -1763325;
	int32_t t199 = -61237084;

    t199 = ((x873+x874)>(x875|x876));

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

