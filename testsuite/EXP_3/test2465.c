
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

int32_t x2 = INT32_MAX;
volatile uint16_t x5 = 22119U;
uint16_t x6 = 7U;
uint8_t x9 = 33U;
int64_t x12 = -1LL;
uint64_t x18 = 31643857LLU;
uint32_t x20 = 15672U;
static volatile int32_t x21 = INT32_MAX;
uint8_t x34 = 12U;
static int64_t x38 = -2559LL;
int32_t x40 = 984;
volatile int8_t x43 = INT8_MIN;
int32_t t10 = 1;
static volatile uint32_t t11 = 2976U;
static int32_t x51 = INT32_MIN;
uint16_t x57 = 114U;
int16_t x63 = INT16_MIN;
uint16_t x65 = UINT16_MAX;
int32_t x70 = 0;
uint64_t x71 = 2112091406670874529LLU;
int8_t x74 = INT8_MIN;
int8_t x75 = -1;
volatile int64_t t19 = 787792529043381014LL;
static uint8_t x82 = 0U;
static volatile int64_t t20 = -20LL;
static int64_t x86 = -1LL;
int8_t x89 = 0;
int64_t x92 = INT64_MIN;
volatile int8_t x97 = -8;
int32_t t24 = -59275;
int32_t x101 = INT32_MIN;
int64_t t26 = 1154210413382272LL;
int16_t x110 = 5;
int16_t x114 = -1;
uint64_t x115 = 1529874511455431LLU;
int64_t x119 = INT64_MIN;
static volatile uint32_t t30 = 11654685U;
int16_t x133 = -1;
volatile int64_t t35 = -3817358340161996LL;
int16_t x145 = INT16_MAX;
int64_t t37 = -26LL;
int8_t x153 = INT8_MAX;
int16_t x166 = 1997;
int32_t x168 = -1;
volatile int16_t x169 = -1;
uint64_t x170 = 21274481257846466LLU;
volatile uint32_t t42 = 29928U;
int32_t t43 = 700;
uint64_t x178 = 31206LLU;
uint16_t x185 = UINT16_MAX;
int8_t x200 = INT8_MIN;
static uint16_t x203 = 41U;
volatile int64_t t51 = 20816539891LL;
int16_t x209 = INT16_MIN;
static int8_t x211 = INT8_MIN;
static uint16_t x219 = 31U;
int8_t x228 = -4;
uint32_t t56 = 4U;
uint64_t x230 = 35492374LLU;
static volatile int32_t t57 = 56;
static int64_t x234 = INT64_MIN;
volatile int32_t x242 = -351039;
static uint32_t t63 = UINT32_MAX;
int32_t x257 = 40654;
static int64_t x258 = -1LL;
int64_t x276 = INT64_MIN;
int64_t t67 = -63761LL;
int16_t x277 = INT16_MIN;
volatile int64_t x278 = -8488678041LL;
int32_t x284 = -1;
int8_t x289 = INT8_MIN;
volatile int32_t t71 = 9;
uint32_t x295 = 7U;
int32_t x296 = -1197;
int32_t x300 = -1;
int64_t t75 = -678685880722204LL;
static int16_t x313 = INT16_MIN;
volatile int8_t x314 = INT8_MIN;
uint64_t x317 = 14107412195198LLU;
volatile int32_t t78 = 26;
int32_t x331 = INT32_MIN;
uint64_t x332 = UINT64_MAX;
uint64_t x349 = 6271184958416421LLU;
uint32_t x350 = 161U;
volatile int8_t x352 = -1;
static int32_t x359 = INT32_MIN;
static uint32_t x360 = UINT32_MAX;
int16_t x361 = 644;
int8_t x366 = -1;
int16_t x368 = INT16_MAX;
uint8_t x372 = 24U;
int32_t x373 = 0;
int8_t x379 = 0;
int64_t x384 = 4383LL;
int32_t t95 = 2659197;
int64_t x394 = INT64_MIN;
int8_t x400 = 48;
uint64_t t98 = 1353960636501LLU;
int8_t x407 = INT8_MIN;
int32_t t100 = -254247302;
int32_t x421 = 8577;
static uint64_t x429 = UINT64_MAX;
int64_t x436 = INT64_MIN;
volatile uint16_t x438 = 12U;
uint32_t t108 = 237143U;
int32_t x443 = INT32_MIN;
static uint64_t x448 = 88719335LLU;
volatile int16_t x455 = -108;
int64_t x456 = INT64_MIN;
volatile int64_t t112 = -520518868608LL;
static volatile int32_t x457 = INT32_MAX;
static int8_t x460 = INT8_MIN;
static int64_t x461 = 20313710LL;
uint8_t x462 = 8U;
uint32_t x465 = 181U;
int32_t x466 = 46;
static volatile uint64_t x468 = 13913389668971772LLU;
volatile int16_t x484 = -1;
int16_t x490 = 2985;
volatile int32_t t120 = -2879;
int64_t x497 = 547071780477152LL;
int64_t x499 = INT64_MIN;
volatile int32_t t123 = -246357;
volatile uint64_t t125 = 3706342LLU;
int32_t t127 = 3;
uint32_t x530 = 970145U;
uint64_t x538 = 5LLU;
volatile uint32_t t132 = 104U;
int64_t x541 = -1LL;
static int16_t x544 = INT16_MIN;
static uint32_t x545 = UINT32_MAX;
int64_t x548 = -1LL;
int64_t x552 = 111958075963695344LL;
static int64_t t135 = -74LL;
volatile int32_t t136 = 106111;
volatile uint8_t x561 = 51U;
int64_t x566 = -1LL;
static int16_t x568 = -1;
int64_t t139 = 41644823934214348LL;
volatile uint64_t x578 = UINT64_MAX;
static volatile uint64_t x581 = 4405762LLU;
uint64_t t143 = 41674LLU;
uint64_t x594 = 149973141090LLU;
volatile int32_t t146 = -52222861;
volatile uint16_t x601 = UINT16_MAX;
int8_t x605 = INT8_MIN;
int16_t x606 = INT16_MAX;
volatile uint64_t x610 = UINT64_MAX;
uint8_t x617 = 29U;
volatile uint64_t x619 = 1197627466540LLU;
static uint64_t t152 = 43659131LLU;
int16_t x623 = -981;
int8_t x624 = -2;
int32_t t153 = -170403606;
int64_t x629 = INT64_MIN;
int16_t x631 = INT16_MIN;
static int16_t x641 = -1;
uint32_t x643 = 3430533U;
volatile int16_t x648 = 4019;
volatile int32_t t158 = -179;
uint64_t t160 = 2LLU;
int32_t x659 = INT32_MAX;
volatile int8_t x671 = -1;
int32_t t164 = 79424453;
int8_t x675 = -1;
int16_t x688 = -1;
int8_t x689 = INT8_MIN;
static int64_t x693 = INT64_MAX;
int16_t x703 = 44;
static int32_t x712 = INT32_MIN;
int64_t t175 = INT64_MIN;
int8_t x717 = -1;
volatile uint8_t x724 = 3U;
uint8_t x725 = 1U;
volatile uint8_t x727 = 3U;
int32_t x728 = -15278;
uint64_t x729 = 1897067317832LLU;
uint64_t x734 = 2904959057976LLU;
volatile uint32_t t180 = UINT32_MAX;
static int8_t x738 = INT8_MIN;
int32_t t181 = INT32_MAX;
uint32_t x743 = UINT32_MAX;
int16_t x744 = INT16_MIN;
int8_t x746 = INT8_MIN;
int32_t t189 = 385521;
int8_t x778 = INT8_MAX;
volatile int8_t x784 = -1;
volatile uint64_t t194 = UINT64_MAX;
uint32_t x793 = 897U;
uint8_t x799 = UINT8_MAX;
int16_t x804 = -1;
static int64_t x807 = INT64_MIN;


void f0(void) {
    	int8_t x1 = -1;
	uint8_t x3 = UINT8_MAX;
	volatile int8_t x4 = -1;
	volatile int32_t t0 = 1427;

    t0 = ((x1>x2)+(x3|x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x7 = INT16_MAX;
	static int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -4LL;

    t1 = ((x5>x6)+(x7|x8));

    if (t1 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 1U;
	volatile int64_t x11 = -3504LL;
	volatile int64_t t2 = -3967023076921LL;

    t2 = ((x9>x10)+(x11|x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = INT32_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -684;

    t3 = ((x13>x14)+(x15|x16));

    if (t3 != -2147418112) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 96U;
	volatile int8_t x19 = 15;
	uint32_t t4 = 1U;

    t4 = ((x17>x18)+(x19|x20));

    if (t4 != 15679U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 50;
	int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MAX;
	int64_t t5 = -120478869349223760LL;

    t5 = ((x21>x22)+(x23|x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = UINT8_MAX;
	uint16_t x26 = 1481U;
	uint32_t x27 = 25U;
	int8_t x28 = 5;
	uint32_t t6 = 44558U;

    t6 = ((x25>x26)+(x27|x28));

    if (t6 != 29U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = INT64_MIN;
	volatile int32_t x32 = -784433923;
	volatile int64_t t7 = 1LL;

    t7 = ((x29>x30)+(x31|x32));

    if (t7 != -784433923LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int16_t x35 = 2;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = 845218480;

    t8 = ((x33>x34)+(x35|x36));

    if (t8 != -32765) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	volatile uint16_t x39 = 5537U;
	int32_t t9 = -55364;

    t9 = ((x37>x38)+(x39|x40));

    if (t9 != 6137) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 1952857U;
	uint16_t x42 = UINT16_MAX;
	int8_t x44 = INT8_MAX;

    t10 = ((x41>x42)+(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 183119777LL;
	int32_t x46 = INT32_MAX;
	int32_t x47 = 47203487;
	uint32_t x48 = 6601272U;

    t11 = ((x45>x46)+(x47|x48));

    if (t11 != 49610431U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 1005U;
	int64_t x50 = 250LL;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 25;

    t12 = ((x49>x50)+(x51|x52));

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = 0;
	uint64_t x54 = 42207969LLU;
	static int64_t x55 = -1LL;
	int16_t x56 = 1;
	static volatile int64_t t13 = -17481945158677907LL;

    t13 = ((x53>x54)+(x55|x56));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = 2;
	uint64_t x59 = 241277416639LLU;
	int16_t x60 = -52;
	uint64_t t14 = 7997436LLU;

    t14 = ((x57>x58)+(x59|x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static int16_t x62 = INT16_MAX;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = 55;

    t15 = ((x61>x62)+(x63|x64));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x66 = 13U;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 5;

    t16 = ((x65>x66)+(x67|x68));

    if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	int64_t x72 = 1LL;
	volatile uint64_t t17 = 471866957LLU;

    t17 = ((x69>x70)+(x71|x72));

    if (t17 != 2112091406670874530LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = UINT16_MAX;
	volatile int32_t x76 = INT32_MIN;
	int32_t t18 = 15950;

    t18 = ((x73>x74)+(x75|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 12101U;
	volatile uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = 8104LL;

    t19 = ((x77>x78)+(x79|x80));

    if (t19 != -88LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 41346U;
	static volatile int64_t x83 = INT64_MIN;
	int8_t x84 = -1;

    t20 = ((x81>x82)+(x83|x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -14054;
	static uint8_t x87 = 14U;
	int32_t x88 = 4;
	static volatile int32_t t21 = 2;

    t21 = ((x85>x86)+(x87|x88));

    if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = -8;
	int16_t x91 = 14;
	static volatile int64_t t22 = 2276689385485481827LL;

    t22 = ((x89>x90)+(x91|x92));

    if (t22 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint64_t x94 = 4181499878248262467LLU;
	uint64_t x95 = 56603045994LLU;
	volatile uint64_t x96 = 2292231LLU;
	uint64_t t23 = 7015527LLU;

    t23 = ((x93>x94)+(x95|x96));

    if (t23 != 56605276784LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = 819;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = 2;

    t24 = ((x97>x98)+(x99|x100));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -11485693;

    t25 = ((x101>x102)+(x103|x104));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = 29523U;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	int16_t x108 = -1045;

    t26 = ((x105>x106)+(x107|x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = -10194;
	int32_t x111 = -1143788;
	uint64_t x112 = 6LLU;
	uint64_t t27 = 84012LLU;

    t27 = ((x109>x110)+(x111|x112));

    if (t27 != 18446744073708407830LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 109983LLU;
	static int16_t x116 = INT16_MIN;
	uint64_t t28 = 665696901LLU;

    t28 = ((x113>x114)+(x115|x116));

    if (t28 != 18446744073709544647LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	volatile int64_t t29 = -6611930554947LL;

    t29 = ((x117>x118)+(x119|x120));

    if (t29 != -2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	uint8_t x122 = 121U;
	static uint32_t x123 = 1U;
	int32_t x124 = 6623;

    t30 = ((x121>x122)+(x123|x124));

    if (t30 != 6624U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 101U;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = -1;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = -389064496;

    t31 = ((x125>x126)+(x127|x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = -1;
	volatile int64_t x131 = -112169932879LL;
	static int16_t x132 = 1;
	static int64_t t32 = -233864888372172LL;

    t32 = ((x129>x130)+(x131|x132));

    if (t32 != -112169932879LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x134 = UINT8_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint32_t x136 = 687683329U;
	int64_t t33 = -235LL;

    t33 = ((x133>x134)+(x135|x136));

    if (t33 != -9223372036167092479LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x137 = INT16_MAX;
	int64_t x138 = -24LL;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = -1;
	int32_t t34 = -4107;

    t34 = ((x137>x138)+(x139|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1;
	int16_t x142 = INT16_MAX;
	int16_t x143 = 6756;
	int64_t x144 = -1LL;

    t35 = ((x141>x142)+(x143|x144));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x146 = 5904530622451976573LLU;
	int16_t x147 = -1;
	int8_t x148 = -1;
	int32_t t36 = 25125951;

    t36 = ((x145>x146)+(x147|x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	uint32_t x150 = 4167149U;
	int64_t x151 = -3LL;
	int32_t x152 = INT32_MAX;

    t37 = ((x149>x150)+(x151|x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x154 = 240U;
	uint16_t x155 = 1212U;
	volatile int64_t x156 = -1LL;
	volatile int64_t t38 = 0LL;

    t38 = ((x153>x154)+(x155|x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 58312917652LLU;
	static int8_t x158 = 1;
	int8_t x159 = INT8_MAX;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t39 = -183546425;

    t39 = ((x157>x158)+(x159|x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x161 = INT32_MIN;
	int16_t x162 = -7982;
	static int8_t x163 = -3;
	static uint8_t x164 = 3U;
	volatile int32_t t40 = 14585857;

    t40 = ((x161>x162)+(x163|x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int64_t x167 = INT64_MIN;
	int64_t t41 = -3898283372696869LL;

    t41 = ((x165>x166)+(x167|x168));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x171 = INT8_MIN;
	static volatile uint32_t x172 = 2783U;

    t42 = ((x169>x170)+(x171|x172));

    if (t42 != 4294967264U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 9863340195722940LLU;
	volatile int64_t x174 = -3726804LL;
	static int8_t x175 = -3;
	uint8_t x176 = UINT8_MAX;

    t43 = ((x173>x174)+(x175|x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile int16_t x179 = 19;
	uint32_t x180 = 46604109U;
	volatile uint32_t t44 = 25822U;

    t44 = ((x177>x178)+(x179|x180));

    if (t44 != 46604127U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	static uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	uint32_t x184 = 1665695741U;
	static volatile int64_t t45 = -12752LL;

    t45 = ((x181>x182)+(x183|x184));

    if (t45 != -9223372035189080067LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = -1;
	static uint8_t x187 = 2U;
	volatile uint32_t x188 = 6U;
	volatile uint32_t t46 = 27U;

    t46 = ((x185>x186)+(x187|x188));

    if (t46 != 7U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 58U;
	int32_t x190 = INT32_MIN;
	int16_t x191 = 7;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 11LLU;

    t47 = ((x189>x190)+(x191|x192));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -1;
	int32_t x194 = -11623;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 20395597LLU;

    t48 = ((x193>x194)+(x195|x196));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 6033;
	int32_t x198 = 34;
	volatile int64_t x199 = 1LL;
	int64_t t49 = -853153907952389422LL;

    t49 = ((x197>x198)+(x199|x200));

    if (t49 != -126LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static uint16_t x202 = 0U;
	int8_t x204 = -1;
	static int32_t t50 = -6273;

    t50 = ((x201>x202)+(x203|x204));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	int8_t x206 = INT8_MIN;
	static uint8_t x207 = 12U;
	int64_t x208 = INT64_MIN;

    t51 = ((x205>x206)+(x207|x208));

    if (t51 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MIN;
	uint16_t x212 = 1U;
	volatile int32_t t52 = 4;

    t52 = ((x209>x210)+(x211|x212));

    if (t52 != -126) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = 1;
	static uint64_t x215 = 16894284994LLU;
	volatile uint32_t x216 = 1998U;
	static uint64_t t53 = 128748028LLU;

    t53 = ((x213>x214)+(x215|x216));

    if (t53 != 16894285774LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MIN;
	int32_t x220 = 5798;
	volatile int32_t t54 = -1765;

    t54 = ((x217>x218)+(x219|x220));

    if (t54 != 5823) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 1404157972LLU;
	static int16_t x222 = INT16_MAX;
	static uint16_t x223 = 9U;
	uint32_t x224 = UINT32_MAX;
	uint32_t t55 = 13U;

    t55 = ((x221>x222)+(x223|x224));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	volatile uint8_t x226 = 82U;
	uint32_t x227 = 58445U;

    t56 = ((x225>x226)+(x227|x228));

    if (t56 != 4294967293U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 347U;
	volatile int16_t x231 = INT16_MIN;
	uint16_t x232 = UINT16_MAX;

    t57 = ((x229>x230)+(x231|x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 17690U;
	volatile uint16_t x235 = UINT16_MAX;
	uint8_t x236 = 28U;
	static volatile int32_t t58 = 193994337;

    t58 = ((x233>x234)+(x235|x236));

    if (t58 != 65536) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	volatile uint16_t x238 = 373U;
	volatile int32_t x239 = 118;
	volatile int64_t x240 = INT64_MAX;
	int64_t t59 = INT64_MAX;

    t59 = ((x237>x238)+(x239|x240));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = -1;
	volatile int8_t x243 = -1;
	static volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 415004439;

    t60 = ((x241>x242)+(x243|x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 3U;
	int8_t x246 = -7;
	volatile int16_t x247 = INT16_MIN;
	static int16_t x248 = -11628;
	volatile int32_t t61 = 7;

    t61 = ((x245>x246)+(x247|x248));

    if (t61 != -11627) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	uint32_t x250 = 44U;
	static uint64_t x251 = UINT64_MAX;
	volatile uint8_t x252 = 26U;
	volatile uint64_t t62 = 47133389LLU;

    t62 = ((x249>x250)+(x251|x252));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;

    t63 = ((x253>x254)+(x255|x256));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x259 = 0U;
	volatile uint8_t x260 = UINT8_MAX;
	uint32_t t64 = 803450494U;

    t64 = ((x257>x258)+(x259|x260));

    if (t64 != 256U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 156832772509LLU;
	static volatile uint32_t x264 = 3855443U;
	volatile uint64_t t65 = 215884301LLU;

    t65 = ((x261>x262)+(x263|x264));

    if (t65 != 156833347040LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x267 = -15043720195741LL;
	uint32_t x268 = 1232983U;
	volatile int64_t t66 = -1510981963972836508LL;

    t66 = ((x265>x266)+(x267|x268));

    if (t66 != -15043719147145LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = -1LL;
	static int16_t x274 = INT16_MIN;
	static int64_t x275 = -21612629LL;

    t67 = ((x273>x274)+(x275|x276));

    if (t67 != -21612628LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x279 = 59U;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t68 = 26648153;

    t68 = ((x277>x278)+(x279|x280));

    if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x281 = 22U;
	static uint64_t x282 = UINT64_MAX;
	int64_t x283 = 852461063LL;
	volatile int64_t t69 = -1029037165LL;

    t69 = ((x281>x282)+(x283|x284));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x285 = 1U;
	volatile int8_t x286 = INT8_MAX;
	uint16_t x287 = 10844U;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = ((x285>x286)+(x287|x288));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x290 = 40U;
	volatile int16_t x291 = -4;
	static uint8_t x292 = 58U;

    t71 = ((x289>x290)+(x291|x292));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x293 = 4218425336LL;
	uint32_t x294 = UINT32_MAX;
	static uint32_t t72 = 0U;

    t72 = ((x293>x294)+(x295|x296));

    if (t72 != 4294966103U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = INT16_MIN;
	static int64_t x298 = INT64_MAX;
	volatile int32_t x299 = INT32_MIN;
	volatile int32_t t73 = 1039195;

    t73 = ((x297>x298)+(x299|x300));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 7U;
	int8_t x304 = INT8_MIN;
	volatile int32_t t74 = -17645;

    t74 = ((x301>x302)+(x303|x304));

    if (t74 != -121) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = INT8_MAX;
	static uint8_t x306 = 0U;
	int8_t x307 = INT8_MIN;
	static volatile int64_t x308 = INT64_MIN;

    t75 = ((x305>x306)+(x307|x308));

    if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x309 = UINT64_MAX;
	uint8_t x310 = 9U;
	uint8_t x311 = 96U;
	static int16_t x312 = -1;
	volatile int32_t t76 = 284282137;

    t76 = ((x309>x310)+(x311|x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x315 = 423U;
	int16_t x316 = INT16_MIN;
	static volatile uint32_t t77 = 0U;

    t77 = ((x313>x314)+(x315|x316));

    if (t77 != 4294934951U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x318 = -3LL;
	volatile uint16_t x319 = UINT16_MAX;
	static uint16_t x320 = UINT16_MAX;

    t78 = ((x317>x318)+(x319|x320));

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x322 = -23;
	int64_t x323 = 1383318688279348214LL;
	uint8_t x324 = UINT8_MAX;
	int64_t t79 = -15899602574959LL;

    t79 = ((x321>x322)+(x323|x324));

    if (t79 != 1383318688279348223LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 2U;
	static int8_t x328 = INT8_MAX;
	int32_t t80 = 51;

    t80 = ((x325>x326)+(x327|x328));

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x329 = -3;
	static volatile int16_t x330 = -6313;
	volatile uint64_t t81 = 6406504LLU;

    t81 = ((x329>x330)+(x331|x332));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x333 = UINT64_MAX;
	uint32_t x334 = 145U;
	int64_t x335 = 181484757773329LL;
	int64_t x336 = INT64_MIN;
	int64_t t82 = -116811437LL;

    t82 = ((x333>x334)+(x335|x336));

    if (t82 != -9223190552097002478LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MAX;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = INT8_MAX;
	int32_t t83 = 37;

    t83 = ((x337>x338)+(x339|x340));

    if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MAX;
	static uint64_t x344 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = ((x341>x342)+(x343|x344));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x345 = INT16_MIN;
	int32_t x346 = -1;
	volatile int8_t x347 = -1;
	uint64_t x348 = 673973LLU;
	uint64_t t85 = UINT64_MAX;

    t85 = ((x345>x346)+(x347|x348));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x351 = UINT32_MAX;
	uint32_t t86 = 53213U;

    t86 = ((x349>x350)+(x351|x352));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x353 = 3U;
	int8_t x354 = -16;
	uint8_t x355 = 58U;
	static uint16_t x356 = 195U;
	volatile int32_t t87 = -1068673960;

    t87 = ((x353>x354)+(x355|x356));

    if (t87 != 252) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = -1LL;
	static uint16_t x358 = 6U;
	uint32_t t88 = UINT32_MAX;

    t88 = ((x357>x358)+(x359|x360));

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t89 = 178;

    t89 = ((x361>x362)+(x363|x364));

    if (t89 != 65536) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x365 = 21309431U;
	int8_t x367 = -1;
	volatile int32_t t90 = 908699017;

    t90 = ((x365>x366)+(x367|x368));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x369 = INT8_MIN;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	volatile int32_t t91 = 70704065;

    t91 = ((x369>x370)+(x371|x372));

    if (t91 != -32744) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x374 = 0U;
	static int32_t x375 = 210174;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t92 = 73;

    t92 = ((x373>x374)+(x375|x376));

    if (t92 != -19202) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = INT8_MIN;
	uint32_t x378 = 6840022U;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t93 = -12606146667864497LL;

    t93 = ((x377>x378)+(x379|x380));

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x381 = 14426LL;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = UINT32_MAX;
	volatile int64_t t94 = -3841890LL;

    t94 = ((x381>x382)+(x383|x384));

    if (t94 != 4294967296LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = INT8_MAX;
	uint8_t x386 = 1U;
	int16_t x387 = 2;
	static volatile int8_t x388 = INT8_MIN;

    t95 = ((x385>x386)+(x387|x388));

    if (t95 != -125) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x391 = 2;
	volatile int32_t x392 = -1;
	static volatile int32_t t96 = 2150;

    t96 = ((x389>x390)+(x391|x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = -13;
	volatile uint64_t t97 = 16LLU;

    t97 = ((x393>x394)+(x395|x396));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x397 = 9U;
	static int16_t x398 = INT16_MIN;
	uint64_t x399 = 118382983407761904LLU;

    t98 = ((x397>x398)+(x399|x400));

    if (t98 != 118382983407761905LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x401 = 22U;
	uint32_t x402 = 63194290U;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t99 = -29099;

    t99 = ((x401>x402)+(x403|x404));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x405 = -1;
	static volatile int8_t x406 = INT8_MAX;
	int32_t x408 = -531748;

    t100 = ((x405>x406)+(x407|x408));

    if (t100 != -36) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x409 = UINT64_MAX;
	static volatile int16_t x410 = INT16_MAX;
	uint8_t x411 = 0U;
	uint32_t x412 = 1970017963U;
	uint32_t t101 = 1520068906U;

    t101 = ((x409>x410)+(x411|x412));

    if (t101 != 1970017964U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = -1;
	int64_t x414 = INT64_MAX;
	int16_t x415 = 23;
	static uint8_t x416 = 3U;
	static volatile int32_t t102 = -244287;

    t102 = ((x413>x414)+(x415|x416));

    if (t102 != 23) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x417 = INT64_MIN;
	volatile int8_t x418 = -1;
	int16_t x419 = -180;
	int64_t x420 = -63787933LL;
	volatile int64_t t103 = 7759433104611LL;

    t103 = ((x417>x418)+(x419|x420));

    if (t103 != -145LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x422 = -2326133;
	static int8_t x423 = -1;
	static int8_t x424 = INT8_MAX;
	static volatile int32_t t104 = 62573;

    t104 = ((x421>x422)+(x423|x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	volatile uint64_t x427 = 112388299758LLU;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t105 = 86233968008LLU;

    t105 = ((x425>x426)+(x427|x428));

    if (t105 != 18446744073709542383LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x430 = INT64_MAX;
	static int16_t x431 = INT16_MIN;
	static volatile uint32_t x432 = 18662860U;
	static volatile uint32_t t106 = 2703039U;

    t106 = ((x429>x430)+(x431|x432));

    if (t106 != 4294952397U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x433 = 104948LLU;
	static int32_t x434 = 7278;
	static int64_t x435 = INT64_MIN;
	volatile int64_t t107 = 60LL;

    t107 = ((x433>x434)+(x435|x436));

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x437 = UINT64_MAX;
	static int8_t x439 = INT8_MAX;
	uint32_t x440 = 128317U;

    t108 = ((x437>x438)+(x439|x440));

    if (t108 != 128384U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = 0LL;
	int16_t x442 = INT16_MIN;
	int16_t x444 = -1;
	volatile int32_t t109 = -755150011;

    t109 = ((x441>x442)+(x443|x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x445 = 12202398956LLU;
	static volatile int8_t x446 = INT8_MIN;
	volatile int32_t x447 = INT32_MIN;
	uint64_t t110 = 66702391LLU;

    t110 = ((x445>x446)+(x447|x448));

    if (t110 != 18446744071650787303LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x449 = INT32_MAX;
	volatile int32_t x450 = INT32_MIN;
	uint64_t x451 = 0LLU;
	uint32_t x452 = 117U;
	volatile uint64_t t111 = 1008462119LLU;

    t111 = ((x449>x450)+(x451|x452));

    if (t111 != 118LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x453 = INT32_MIN;
	int32_t x454 = 5925;

    t112 = ((x453>x454)+(x455|x456));

    if (t112 != -108LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x458 = INT64_MAX;
	int32_t x459 = INT32_MIN;
	volatile int32_t t113 = -226301362;

    t113 = ((x457>x458)+(x459|x460));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x463 = 415LLU;
	int32_t x464 = 10478;
	uint64_t t114 = 0LLU;

    t114 = ((x461>x462)+(x463|x464));

    if (t114 != 10752LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x467 = 103789U;
	volatile uint64_t t115 = 5117338LLU;

    t115 = ((x465>x466)+(x467|x468));

    if (t115 != 13913389669004798LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	uint64_t x471 = 4777710LLU;
	int32_t x472 = -1;
	uint64_t t116 = 5814032046440057808LLU;

    t116 = ((x469>x470)+(x471|x472));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x473 = 126U;
	volatile int8_t x474 = INT8_MAX;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = 18U;
	static int32_t t117 = -1869;

    t117 = ((x473>x474)+(x475|x476));

    if (t117 != -32750) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x481 = 0;
	int32_t x482 = INT32_MAX;
	static int64_t x483 = 121785LL;
	int64_t t118 = 0LL;

    t118 = ((x481>x482)+(x483|x484));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x485 = 0U;
	int8_t x486 = INT8_MIN;
	volatile int64_t x487 = INT64_MAX;
	volatile int8_t x488 = INT8_MIN;
	static int64_t t119 = -7734641759LL;

    t119 = ((x485>x486)+(x487|x488));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x489 = 122;
	static int16_t x491 = -1;
	uint8_t x492 = UINT8_MAX;

    t120 = ((x489>x490)+(x491|x492));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = 4;
	int32_t x494 = INT32_MIN;
	int8_t x495 = -1;
	int16_t x496 = -2;
	volatile int32_t t121 = -258618305;

    t121 = ((x493>x494)+(x495|x496));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x498 = -1;
	uint16_t x500 = UINT16_MAX;
	int64_t t122 = -144LL;

    t122 = ((x497>x498)+(x499|x500));

    if (t122 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	static uint32_t x502 = 718440669U;
	volatile int16_t x503 = INT16_MAX;
	uint8_t x504 = 5U;

    t123 = ((x501>x502)+(x503|x504));

    if (t123 != 32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = -1;
	int32_t x506 = -159;
	volatile uint32_t x507 = 6U;
	static int16_t x508 = INT16_MIN;
	volatile uint32_t t124 = 6262U;

    t124 = ((x505>x506)+(x507|x508));

    if (t124 != 4294934535U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	int32_t x510 = INT32_MIN;
	static int16_t x511 = INT16_MAX;
	uint64_t x512 = UINT64_MAX;

    t125 = ((x509>x510)+(x511|x512));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x513 = UINT64_MAX;
	int16_t x514 = -1;
	static uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MIN;
	static int64_t t126 = 1805033223525LL;

    t126 = ((x513>x514)+(x515|x516));

    if (t126 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x517 = INT32_MIN;
	int8_t x518 = -50;
	int8_t x519 = -1;
	volatile uint16_t x520 = 27535U;

    t127 = ((x517>x518)+(x519|x520));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x521 = 1290U;
	int32_t x522 = -12613;
	int32_t x523 = -18856015;
	int64_t x524 = INT64_MAX;
	volatile int64_t t128 = 646LL;

    t128 = ((x521>x522)+(x523|x524));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x525 = 7U;
	volatile uint16_t x526 = 283U;
	uint64_t x527 = 2811106991145792LLU;
	int8_t x528 = -7;
	volatile uint64_t t129 = 157379829295057226LLU;

    t129 = ((x525>x526)+(x527|x528));

    if (t129 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x529 = INT16_MAX;
	volatile uint16_t x531 = 0U;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t130 = -3559;

    t130 = ((x529>x530)+(x531|x532));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile int16_t x534 = -1;
	volatile uint64_t x535 = 64645244501115020LLU;
	int16_t x536 = 4006;
	uint64_t t131 = 114631LLU;

    t131 = ((x533>x534)+(x535|x536));

    if (t131 != 64645244501118894LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = 1U;
	uint32_t x539 = 5687719U;
	static int8_t x540 = 0;

    t132 = ((x537>x538)+(x539|x540));

    if (t132 != 5687719U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x542 = INT8_MAX;
	int16_t x543 = -8707;
	volatile int32_t t133 = 315406;

    t133 = ((x541>x542)+(x543|x544));

    if (t133 != -8707) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x546 = INT8_MAX;
	volatile int8_t x547 = 24;
	volatile int64_t t134 = 6585LL;

    t134 = ((x545>x546)+(x547|x548));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = 5U;
	volatile int8_t x550 = -1;
	static int16_t x551 = INT16_MIN;

    t135 = ((x549>x550)+(x551|x552));

    if (t135 != -7951LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = -7434262;
	static volatile int8_t x554 = -3;
	int16_t x555 = -1;
	int8_t x556 = -1;

    t136 = ((x553>x554)+(x555|x556));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x557 = INT16_MIN;
	uint64_t x558 = 491LLU;
	static uint64_t x559 = 151LLU;
	static uint16_t x560 = 36U;
	static uint64_t t137 = 13935040937LLU;

    t137 = ((x557>x558)+(x559|x560));

    if (t137 != 184LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x562 = UINT8_MAX;
	int32_t x563 = INT32_MIN;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t138 = -783033;

    t138 = ((x561>x562)+(x563|x564));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = INT32_MIN;
	int64_t x567 = 22105372LL;

    t139 = ((x565>x566)+(x567|x568));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x569 = -237518408906117832LL;
	int16_t x570 = INT16_MIN;
	int64_t x571 = -1LL;
	int64_t x572 = -1LL;
	volatile int64_t t140 = -11510611LL;

    t140 = ((x569>x570)+(x571|x572));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x573 = UINT32_MAX;
	static int32_t x574 = -1734604;
	int64_t x575 = -3709304392654LL;
	int8_t x576 = 0;
	static int64_t t141 = 1172768605674479LL;

    t141 = ((x573>x574)+(x575|x576));

    if (t141 != -3709304392653LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x579 = -1;
	int8_t x580 = INT8_MIN;
	volatile int32_t t142 = 3;

    t142 = ((x577>x578)+(x579|x580));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x582 = UINT32_MAX;
	uint64_t x583 = 6LLU;
	static int64_t x584 = -6877LL;

    t143 = ((x581>x582)+(x583|x584));

    if (t143 != 18446744073709544743LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x585 = 3276U;
	uint8_t x586 = UINT8_MAX;
	int8_t x587 = INT8_MIN;
	volatile int8_t x588 = -1;
	volatile int32_t t144 = -2500;

    t144 = ((x585>x586)+(x587|x588));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x589 = -2128480LL;
	volatile int64_t x590 = INT64_MIN;
	uint8_t x591 = 79U;
	volatile int16_t x592 = -8692;
	int32_t t145 = -8228131;

    t145 = ((x589>x590)+(x591|x592));

    if (t145 != -8624) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x593 = INT64_MIN;
	int32_t x595 = -1;
	volatile uint16_t x596 = UINT16_MAX;

    t146 = ((x593>x594)+(x595|x596));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x597 = UINT64_MAX;
	static int16_t x598 = INT16_MAX;
	volatile int32_t x599 = -1;
	uint8_t x600 = 111U;
	static volatile int32_t t147 = -58538;

    t147 = ((x597>x598)+(x599|x600));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x602 = INT16_MIN;
	int8_t x603 = -11;
	int32_t x604 = 107201368;
	int32_t t148 = 33497091;

    t148 = ((x601>x602)+(x603|x604));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x607 = INT32_MIN;
	int8_t x608 = 3;
	int32_t t149 = 2;

    t149 = ((x605>x606)+(x607|x608));

    if (t149 != -2147483645) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x609 = 44U;
	int32_t x611 = INT32_MIN;
	int16_t x612 = 4165;
	volatile int32_t t150 = 1;

    t150 = ((x609>x610)+(x611|x612));

    if (t150 != -2147479483) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x613 = UINT8_MAX;
	int64_t x614 = -324104373LL;
	uint64_t x615 = 11173014667853LLU;
	uint32_t x616 = 3763U;
	uint64_t t151 = 368675LLU;

    t151 = ((x613>x614)+(x615|x616));

    if (t151 != 11173014671104LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x618 = -1;
	static int16_t x620 = INT16_MIN;

    t152 = ((x617>x618)+(x619|x620));

    if (t152 != 18446744073709544237LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x621 = -1;
	static int8_t x622 = INT8_MIN;

    t153 = ((x621>x622)+(x623|x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x630 = INT8_MIN;
	int64_t x632 = INT64_MAX;
	int64_t t154 = 9LL;

    t154 = ((x629>x630)+(x631|x632));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MIN;
	int16_t x635 = -1781;
	volatile uint32_t x636 = 7893U;
	uint32_t t155 = 31559085U;

    t155 = ((x633>x634)+(x635|x636));

    if (t155 != 4294967264U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x637 = INT32_MAX;
	static int16_t x638 = 8012;
	int32_t x639 = -1;
	uint64_t x640 = 309764136697692LLU;
	uint64_t t156 = 16994727LLU;

    t156 = ((x637>x638)+(x639|x640));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x642 = 218U;
	uint8_t x644 = UINT8_MAX;
	volatile uint32_t t157 = 669495223U;

    t157 = ((x641>x642)+(x643|x644));

    if (t157 != 3430655U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x645 = 386U;
	uint32_t x646 = 6U;
	int32_t x647 = INT32_MIN;

    t158 = ((x645>x646)+(x647|x648));

    if (t158 != -2147479628) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x649 = 0U;
	int32_t x650 = -8466;
	volatile int8_t x651 = -59;
	volatile int16_t x652 = -1;
	int32_t t159 = -11401336;

    t159 = ((x649>x650)+(x651|x652));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = -1;
	volatile int64_t x654 = INT64_MIN;
	uint64_t x655 = UINT64_MAX;
	static int32_t x656 = 930391525;

    t160 = ((x653>x654)+(x655|x656));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x657 = -1;
	int64_t x658 = -2526259498905452LL;
	volatile int8_t x660 = INT8_MIN;
	int32_t t161 = 0;

    t161 = ((x657>x658)+(x659|x660));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x661 = INT32_MIN;
	static int64_t x662 = INT64_MIN;
	volatile uint32_t x663 = UINT32_MAX;
	int16_t x664 = INT16_MAX;
	volatile uint32_t t162 = 88U;

    t162 = ((x661>x662)+(x663|x664));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x665 = -1;
	uint64_t x666 = 112386LLU;
	int32_t x667 = 3599302;
	int64_t x668 = INT64_MIN;
	volatile int64_t t163 = 3171299855720LL;

    t163 = ((x665>x666)+(x667|x668));

    if (t163 != -9223372036851176505LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x669 = 1768LLU;
	int64_t x670 = INT64_MIN;
	uint16_t x672 = UINT16_MAX;

    t164 = ((x669>x670)+(x671|x672));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x673 = 2U;
	uint16_t x674 = 24U;
	int64_t x676 = INT64_MIN;
	static int64_t t165 = -9968LL;

    t165 = ((x673>x674)+(x675|x676));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x678 = INT16_MAX;
	volatile int8_t x679 = INT8_MIN;
	int64_t x680 = 7330438111LL;
	int64_t t166 = 0LL;

    t166 = ((x677>x678)+(x679|x680));

    if (t166 != -32LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x681 = UINT32_MAX;
	static uint32_t x682 = 1100708U;
	uint64_t x683 = UINT64_MAX;
	int32_t x684 = INT32_MIN;
	volatile uint64_t t167 = 2136378384162297LLU;

    t167 = ((x681>x682)+(x683|x684));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x685 = -1LL;
	static int32_t x686 = 283921;
	uint16_t x687 = 2U;
	static volatile int32_t t168 = 60;

    t168 = ((x685>x686)+(x687|x688));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x690 = 986LLU;
	volatile int64_t x691 = 434128553875209LL;
	static volatile int64_t x692 = INT64_MIN;
	int64_t t169 = -123918000LL;

    t169 = ((x689>x690)+(x691|x692));

    if (t169 != -9222937908300900598LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x694 = -1;
	volatile int32_t x695 = -1;
	static uint64_t x696 = 41582416844481LLU;
	volatile uint64_t t170 = 1850629621LLU;

    t170 = ((x693>x694)+(x695|x696));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x697 = INT32_MAX;
	uint32_t x698 = 29U;
	int8_t x699 = INT8_MIN;
	volatile uint32_t x700 = 4242341U;
	uint32_t t171 = 0U;

    t171 = ((x697>x698)+(x699|x700));

    if (t171 != 4294967206U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = INT8_MAX;
	uint16_t x702 = UINT16_MAX;
	static int8_t x704 = INT8_MIN;
	int32_t t172 = 1;

    t172 = ((x701>x702)+(x703|x704));

    if (t172 != -84) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MAX;
	static uint8_t x707 = 5U;
	volatile int16_t x708 = INT16_MIN;
	int32_t t173 = -724;

    t173 = ((x705>x706)+(x707|x708));

    if (t173 != -32763) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = 3;
	uint8_t x710 = 24U;
	volatile int16_t x711 = INT16_MIN;
	volatile int32_t t174 = 743442;

    t174 = ((x709>x710)+(x711|x712));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x713 = 12U;
	uint64_t x714 = 364279572487LLU;
	static int64_t x715 = INT64_MIN;
	int64_t x716 = INT64_MIN;

    t175 = ((x713>x714)+(x715|x716));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x718 = -234244;
	static int64_t x719 = INT64_MIN;
	static int64_t x720 = -1546668238351409LL;
	int64_t t176 = 45738LL;

    t176 = ((x717>x718)+(x719|x720));

    if (t176 != -1546668238351408LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x721 = 2U;
	int32_t x722 = INT32_MAX;
	uint16_t x723 = 2U;
	static int32_t t177 = -180;

    t177 = ((x721>x722)+(x723|x724));

    if (t177 != 3) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x726 = -14106;
	int32_t t178 = -59572;

    t178 = ((x725>x726)+(x727|x728));

    if (t178 != -15276) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x730 = -1;
	uint16_t x731 = 1491U;
	int16_t x732 = -1;
	int32_t t179 = 1569712;

    t179 = ((x729>x730)+(x731|x732));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x733 = 17538U;
	uint32_t x735 = UINT32_MAX;
	volatile int16_t x736 = INT16_MIN;

    t180 = ((x733>x734)+(x735|x736));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = INT32_MIN;
	volatile int32_t x739 = INT32_MAX;
	uint8_t x740 = 1U;

    t181 = ((x737>x738)+(x739|x740));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x741 = UINT8_MAX;
	int16_t x742 = -1;
	static uint32_t t182 = 0U;

    t182 = ((x741>x742)+(x743|x744));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x745 = 7;
	int32_t x747 = -107822;
	int8_t x748 = INT8_MIN;
	volatile int32_t t183 = -178881335;

    t183 = ((x745>x746)+(x747|x748));

    if (t183 != -45) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x749 = -1;
	volatile int8_t x750 = INT8_MIN;
	uint16_t x751 = 18228U;
	static int16_t x752 = INT16_MIN;
	int32_t t184 = 29268590;

    t184 = ((x749>x750)+(x751|x752));

    if (t184 != -14539) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	static uint16_t x754 = 6U;
	int8_t x755 = 16;
	int8_t x756 = INT8_MAX;
	int32_t t185 = 7789783;

    t185 = ((x753>x754)+(x755|x756));

    if (t185 != 128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x757 = INT32_MIN;
	volatile int16_t x758 = INT16_MIN;
	int32_t x759 = INT32_MAX;
	int8_t x760 = -23;
	static int32_t t186 = -2;

    t186 = ((x757>x758)+(x759|x760));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x761 = INT32_MIN;
	static int32_t x762 = INT32_MIN;
	static int16_t x763 = 30;
	volatile int8_t x764 = INT8_MAX;
	int32_t t187 = 1;

    t187 = ((x761>x762)+(x763|x764));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x765 = 8209436U;
	static int64_t x766 = INT64_MIN;
	int16_t x767 = 341;
	int16_t x768 = INT16_MIN;
	static volatile int32_t t188 = -49411;

    t188 = ((x765>x766)+(x767|x768));

    if (t188 != -32426) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x769 = 1U;
	volatile int16_t x770 = INT16_MIN;
	uint8_t x771 = 4U;
	uint16_t x772 = UINT16_MAX;

    t189 = ((x769>x770)+(x771|x772));

    if (t189 != 65536) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x773 = -38;
	volatile uint8_t x774 = 50U;
	static volatile uint8_t x775 = 34U;
	volatile int8_t x776 = 5;
	int32_t t190 = 8206828;

    t190 = ((x773>x774)+(x775|x776));

    if (t190 != 39) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x777 = UINT16_MAX;
	int64_t x779 = INT64_MIN;
	volatile int8_t x780 = 8;
	int64_t t191 = -174LL;

    t191 = ((x777>x778)+(x779|x780));

    if (t191 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x781 = INT32_MIN;
	uint32_t x782 = 400912U;
	static int16_t x783 = -10;
	static volatile int32_t t192 = 1053;

    t192 = ((x781>x782)+(x783|x784));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x785 = 11044;
	volatile int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MIN;
	volatile uint8_t x788 = 94U;
	static int32_t t193 = 60865;

    t193 = ((x785>x786)+(x787|x788));

    if (t193 != -32673) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x789 = INT16_MIN;
	int8_t x790 = -1;
	int64_t x791 = -270640453972LL;
	volatile uint64_t x792 = UINT64_MAX;

    t194 = ((x789>x790)+(x791|x792));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x794 = INT16_MAX;
	volatile uint8_t x795 = 29U;
	uint32_t x796 = 1039939166U;
	volatile uint32_t t195 = 16683U;

    t195 = ((x793>x794)+(x795|x796));

    if (t195 != 1039939167U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x797 = INT16_MIN;
	int32_t x798 = 215506957;
	int8_t x800 = INT8_MIN;
	int32_t t196 = -4120730;

    t196 = ((x797>x798)+(x799|x800));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = INT16_MIN;
	int8_t x802 = INT8_MIN;
	volatile int16_t x803 = 61;
	volatile int32_t t197 = 181447517;

    t197 = ((x801>x802)+(x803|x804));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	uint32_t x808 = 68U;
	static volatile int64_t t198 = -9487LL;

    t198 = ((x805>x806)+(x807|x808));

    if (t198 != -9223372036854775739LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x809 = INT8_MIN;
	uint8_t x810 = 98U;
	static int64_t x811 = -1LL;
	uint16_t x812 = UINT16_MAX;
	volatile int64_t t199 = 1925728961679000535LL;

    t199 = ((x809>x810)+(x811|x812));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

