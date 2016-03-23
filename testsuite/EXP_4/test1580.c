
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

int32_t x1 = INT32_MAX;
static uint64_t x5 = 3259LLU;
uint32_t x8 = 6U;
int32_t x10 = -636;
int16_t x12 = INT16_MAX;
int64_t t3 = -1LL;
int16_t x17 = -35;
static uint16_t x26 = UINT16_MAX;
volatile int32_t x42 = -70;
int8_t x45 = -1;
static int64_t x48 = INT64_MIN;
volatile int64_t t11 = -546451479993LL;
volatile uint32_t x50 = UINT32_MAX;
volatile int64_t x59 = INT64_MAX;
int8_t x63 = INT8_MIN;
static int32_t t14 = -14;
static volatile int8_t x66 = -31;
int16_t x74 = INT16_MAX;
static volatile int16_t x86 = INT16_MIN;
int32_t x89 = INT32_MIN;
int16_t x101 = INT16_MIN;
uint32_t x104 = UINT32_MAX;
int32_t t22 = -6809;
volatile int32_t t25 = -67427611;
volatile int16_t x117 = INT16_MIN;
uint32_t x120 = 36U;
int16_t x123 = INT16_MIN;
int64_t t29 = INT64_MIN;
int8_t x139 = -3;
volatile int64_t t31 = 135373734972937713LL;
int64_t x155 = -1964879LL;
uint16_t x159 = 778U;
static int64_t x160 = INT64_MIN;
uint64_t t36 = 7443LLU;
int32_t x164 = -1;
volatile int32_t t37 = INT32_MIN;
volatile int16_t x166 = INT16_MIN;
static uint8_t x168 = 35U;
int64_t x180 = INT64_MIN;
int8_t x182 = INT8_MIN;
int32_t x185 = -781875455;
static int32_t x189 = INT32_MIN;
volatile int32_t t44 = -7109;
static int8_t x197 = 3;
int32_t t46 = -1733;
int8_t x203 = INT8_MIN;
static int16_t x209 = -3499;
int8_t x212 = INT8_MAX;
volatile uint64_t t51 = 142894141LLU;
static uint32_t x221 = 1054U;
int64_t x227 = 218647440826098210LL;
static int32_t x229 = INT32_MAX;
int64_t x230 = INT64_MIN;
volatile int32_t x232 = -1;
int8_t x233 = -16;
volatile int16_t x238 = INT16_MIN;
static int8_t x240 = INT8_MIN;
int32_t x241 = INT32_MIN;
static volatile uint32_t x242 = UINT32_MAX;
volatile uint16_t x246 = 3225U;
int32_t t59 = 298393;
uint64_t x254 = UINT64_MAX;
uint16_t x259 = 209U;
uint64_t x262 = UINT64_MAX;
int32_t x263 = INT32_MAX;
uint16_t x265 = 6166U;
volatile int32_t t63 = 197881619;
static uint32_t x270 = UINT32_MAX;
int16_t x274 = -1;
uint16_t x280 = 59U;
static volatile uint16_t x281 = 13450U;
int64_t x284 = 4093100LL;
int64_t t68 = -24LL;
uint32_t t69 = 299U;
static uint8_t x303 = UINT8_MAX;
int64_t x305 = INT64_MAX;
int8_t x307 = INT8_MAX;
int64_t t73 = 1794834518650LL;
static int64_t x312 = INT64_MAX;
static int64_t x314 = -1LL;
int16_t x315 = INT16_MIN;
int16_t x319 = -1;
volatile int16_t x321 = INT16_MAX;
uint8_t x326 = UINT8_MAX;
int64_t x342 = INT64_MIN;
int8_t x354 = INT8_MIN;
int64_t x360 = -1LL;
volatile int32_t t85 = -42;
static volatile uint64_t t89 = 14LLU;
volatile uint32_t t90 = 136778U;
static uint8_t x383 = 9U;
int32_t x385 = -338761441;
int64_t x387 = INT64_MIN;
int16_t x390 = -1;
static volatile uint32_t x392 = 207546541U;
volatile int32_t x397 = -1;
volatile int32_t t95 = -207487;
int64_t x406 = INT64_MIN;
volatile uint16_t x408 = UINT16_MAX;
static uint16_t x413 = 96U;
int32_t t100 = 4474;
int32_t x435 = -1;
int64_t t102 = -81685926LL;
volatile int8_t x440 = INT8_MAX;
int16_t x441 = INT16_MAX;
static volatile int64_t t104 = 29375140LL;
static uint64_t x470 = UINT64_MAX;
volatile uint32_t x482 = UINT32_MAX;
int8_t x484 = 45;
int16_t x491 = INT16_MAX;
static int64_t x492 = 7LL;
volatile int16_t x495 = INT16_MIN;
volatile int8_t x499 = -2;
volatile int32_t t117 = 3918792;
int32_t x522 = 1141072;
uint32_t t122 = 4188360U;
int32_t x528 = INT32_MIN;
static int8_t x532 = 1;
volatile int64_t t126 = 31468634086305LL;
uint32_t x542 = 13U;
int16_t x554 = INT16_MIN;
int8_t x555 = -1;
uint16_t x559 = 0U;
uint32_t x563 = UINT32_MAX;
static int8_t x567 = INT8_MIN;
static int16_t x582 = INT16_MIN;
int64_t t136 = 5LL;
uint64_t x585 = 35476182925579013LLU;
volatile int64_t x594 = -269895166177148310LL;
uint8_t x599 = 4U;
int8_t x604 = INT8_MIN;
volatile int64_t t142 = -5409167552LL;
volatile int8_t x609 = -7;
static uint64_t x612 = UINT64_MAX;
uint64_t x613 = 943597116533LLU;
volatile int64_t x618 = INT64_MIN;
int32_t x619 = INT32_MAX;
uint32_t x631 = UINT32_MAX;
int16_t x633 = INT16_MIN;
int16_t x634 = INT16_MIN;
volatile int16_t x635 = INT16_MIN;
uint32_t x638 = UINT32_MAX;
volatile uint32_t t150 = UINT32_MAX;
static int64_t x644 = INT64_MIN;
uint32_t x648 = UINT32_MAX;
int32_t t154 = 1;
int16_t x659 = -1;
static uint16_t x665 = 72U;
int32_t t157 = -236282;
int64_t x670 = INT64_MAX;
int8_t x673 = INT8_MIN;
uint8_t x674 = 2U;
int32_t t160 = 12684;
static uint8_t x682 = 7U;
uint32_t x685 = 172254U;
int32_t x687 = INT32_MAX;
uint64_t x691 = 362060079LLU;
int16_t x694 = INT16_MIN;
int8_t x698 = 2;
volatile uint16_t x702 = 2604U;
static volatile uint8_t x716 = 13U;
static volatile int32_t t170 = 15216827;
int64_t x725 = INT64_MIN;
volatile int32_t x736 = INT32_MAX;
uint16_t x737 = UINT16_MAX;
int64_t x740 = INT64_MAX;
uint8_t x744 = UINT8_MAX;
volatile uint64_t x749 = UINT64_MAX;
int64_t x750 = -563582741673658446LL;
int16_t x760 = INT16_MIN;
int8_t x762 = INT8_MIN;
int8_t x764 = INT8_MIN;
int16_t x765 = INT16_MIN;
volatile int32_t t180 = 334355;
int16_t x774 = INT16_MIN;
int64_t t182 = INT64_MIN;
int32_t x780 = 762318394;
volatile int32_t t183 = -5;
int64_t x783 = 12887LL;
uint64_t x787 = 858835LLU;
static int64_t x794 = INT64_MAX;
static int64_t t189 = INT64_MIN;
int64_t x805 = INT64_MIN;
int32_t x807 = INT32_MIN;
volatile int8_t x809 = INT8_MIN;
int64_t x816 = INT64_MIN;
static int16_t x818 = INT16_MIN;
volatile uint64_t t193 = 1718930LLU;
int32_t x822 = INT32_MIN;
static int16_t x830 = -6;
static uint16_t x835 = 2306U;
int64_t x836 = INT64_MAX;
static int16_t x839 = -1;


void f0(void) {
    	uint64_t x2 = 634809289694361138LLU;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MAX;
	static uint64_t t0 = 119LLU;

    t0 = (x1&(x2+(x3>x4)));

    if (t0 != 72988211LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -148855LL;
	int64_t x7 = -1LL;
	volatile uint64_t t1 = 40477141LLU;

    t1 = (x5&(x6+(x7>x8)));

    if (t1 != 2185LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -166974576913614LL;
	static uint32_t x11 = 438382U;
	static int64_t t2 = 76526652438144LL;

    t2 = (x9&(x10+(x11>x12)));

    if (t2 != -166974576914176LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	volatile int32_t x14 = -27243;
	int64_t x15 = INT64_MIN;
	volatile int32_t x16 = INT32_MIN;

    t3 = (x13&(x14+(x15>x16)));

    if (t3 != -27243LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = -1344;
	static int64_t x19 = INT64_MAX;
	static int8_t x20 = INT8_MAX;
	int32_t t4 = -6;

    t4 = (x17&(x18+(x19>x20)));

    if (t4 != -1343) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 4U;
	static uint64_t x22 = 60384322152299548LLU;
	uint64_t x23 = 10170274568318LLU;
	static int8_t x24 = INT8_MAX;
	volatile uint64_t t5 = 74LLU;

    t5 = (x21&(x22+(x23>x24)));

    if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 6080U;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	uint32_t t6 = 208828379U;

    t6 = (x25&(x26+(x27>x28)));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	volatile int16_t x30 = -226;
	int16_t x31 = -1;
	int32_t x32 = INT32_MAX;
	static int32_t t7 = -38;

    t7 = (x29&(x30+(x31>x32)));

    if (t7 != -226) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	volatile int32_t x35 = INT32_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = -31;

    t8 = (x33&(x34+(x35>x36)));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 1293699957U;
	static uint8_t x38 = 6U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = -673;
	uint32_t t9 = 832800U;

    t9 = (x37&(x38+(x39>x40)));

    if (t9 != 4U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MAX;
	uint32_t x43 = UINT32_MAX;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -253;

    t10 = (x41&(x42+(x43>x44)));

    if (t10 != 32698) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = 661907955197LL;
	uint8_t x47 = UINT8_MAX;

    t11 = (x45&(x46+(x47>x48)));

    if (t11 != 661907955198LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	uint16_t x51 = 123U;
	volatile int8_t x52 = INT8_MIN;
	uint32_t t12 = 2716314U;

    t12 = (x49&(x50+(x51>x52)));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MAX;
	int64_t x60 = INT64_MAX;
	static volatile int64_t t13 = 101581981523139LL;

    t13 = (x57&(x58+(x59>x60)));

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x61 = -1;
	static int8_t x62 = -16;
	int16_t x64 = INT16_MAX;

    t14 = (x61&(x62+(x63>x64)));

    if (t14 != -16) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	static int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	volatile int32_t t15 = -302288988;

    t15 = (x65&(x66+(x67>x68)));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = INT8_MAX;
	uint16_t x75 = 58U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 95;

    t16 = (x73&(x74+(x75>x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = -3;
	volatile int8_t x78 = INT8_MAX;
	volatile uint64_t x79 = 6075967872176LLU;
	uint8_t x80 = 0U;
	static int32_t t17 = -6748146;

    t17 = (x77&(x78+(x79>x80)));

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = -1;
	int32_t x87 = -111358;
	uint8_t x88 = 2U;
	int32_t t18 = 3;

    t18 = (x85&(x86+(x87>x88)));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t19 = INT32_MIN;

    t19 = (x89&(x90+(x91>x92)));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x93 = INT64_MIN;
	uint16_t x94 = 4199U;
	uint64_t x95 = 1LLU;
	int64_t x96 = INT64_MIN;
	volatile int64_t t20 = 482106LL;

    t20 = (x93&(x94+(x95>x96)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = -29;
	uint32_t x98 = 54777U;
	int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MIN;
	uint32_t t21 = 57332217U;

    t21 = (x97&(x98+(x99>x100)));

    if (t21 != 54754U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x102 = 12;
	int32_t x103 = -1;

    t22 = (x101&(x102+(x103>x104)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x105 = 2781087LL;
	int8_t x106 = 1;
	int32_t x107 = 766;
	volatile uint8_t x108 = 11U;
	int64_t t23 = 2215173073LL;

    t23 = (x105&(x106+(x107>x108)));

    if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 2307128652163411979LLU;
	static int8_t x110 = INT8_MIN;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 4U;
	uint64_t t24 = 10154LLU;

    t24 = (x109&(x110+(x111>x112)));

    if (t24 != 2307128652163411968LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = 3;
	uint8_t x114 = 0U;
	int64_t x115 = -1LL;
	static int64_t x116 = 113810LL;

    t25 = (x113&(x114+(x115>x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x118 = -1LL;
	int64_t x119 = INT64_MAX;
	volatile int64_t t26 = 1851506041717035LL;

    t26 = (x117&(x118+(x119>x120)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = 1;
	static int64_t x122 = -161571LL;
	volatile uint16_t x124 = 0U;
	static volatile int64_t t27 = -255192LL;

    t27 = (x121&(x122+(x123>x124)));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x125 = INT32_MAX;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MAX;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t28 = 1999392;

    t28 = (x125&(x126+(x127>x128)));

    if (t28 != 2147450880) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	static volatile uint64_t x131 = 191562377084LLU;
	uint64_t x132 = 176706446LLU;

    t29 = (x129&(x130+(x131>x132)));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x133 = INT32_MIN;
	volatile int64_t x134 = 3636887151171LL;
	volatile int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	int64_t t30 = 847809044581LL;

    t30 = (x133&(x134+(x135>x136)));

    if (t30 != 3635689816064LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = 1;
	volatile int64_t x138 = INT64_MIN;
	int8_t x140 = INT8_MAX;

    t31 = (x137&(x138+(x139>x140)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x141 = 0U;
	int8_t x142 = INT8_MIN;
	static volatile int16_t x143 = -1;
	static int64_t x144 = -1LL;
	volatile int32_t t32 = -1208;

    t32 = (x141&(x142+(x143>x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	uint64_t x146 = 110LLU;
	int32_t x147 = -30362;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t33 = 732731847401991024LLU;

    t33 = (x145&(x146+(x147>x148)));

    if (t33 != 110LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -34;
	int16_t x150 = -73;
	int16_t x151 = 43;
	static int64_t x152 = 42188491409092424LL;
	volatile int32_t t34 = 16203;

    t34 = (x149&(x150+(x151>x152)));

    if (t34 != -106) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 294LLU;
	uint64_t x154 = UINT64_MAX;
	int64_t x156 = -1LL;
	uint64_t t35 = 845158167LLU;

    t35 = (x153&(x154+(x155>x156)));

    if (t35 != 294LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint64_t x158 = UINT64_MAX;

    t36 = (x157&(x158+(x159>x160)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	static int32_t x163 = INT32_MIN;

    t37 = (x161&(x162+(x163>x164)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = -1;
	int32_t x167 = -4034;
	volatile int32_t t38 = 876231454;

    t38 = (x165&(x166+(x167>x168)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = 4790568957LL;
	int16_t x171 = 838;
	static int32_t x172 = -1;
	int64_t t39 = 904963629549LL;

    t39 = (x169&(x170+(x171>x172)));

    if (t39 != 495601662LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = UINT64_MAX;
	int32_t x174 = INT32_MIN;
	volatile int8_t x175 = -7;
	uint32_t x176 = 403U;
	volatile uint64_t t40 = 323LLU;

    t40 = (x173&(x174+(x175>x176)));

    if (t40 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	volatile int32_t x179 = -1;
	volatile int64_t t41 = 2760425686801839193LL;

    t41 = (x177&(x178+(x179>x180)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x181 = INT16_MIN;
	int32_t x183 = -1;
	static uint8_t x184 = 100U;
	static int32_t t42 = 2124064;

    t42 = (x181&(x182+(x183>x184)));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x186 = 12931U;
	int64_t x187 = INT64_MAX;
	volatile uint32_t x188 = UINT32_MAX;
	uint32_t t43 = 2U;

    t43 = (x185&(x186+(x187>x188)));

    if (t43 != 512U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x190 = -1;
	volatile int64_t x191 = INT64_MAX;
	int32_t x192 = -1;

    t44 = (x189&(x190+(x191>x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x193 = 6U;
	volatile int64_t x194 = 7582787599LL;
	volatile int64_t x195 = 4506180946LL;
	int16_t x196 = INT16_MIN;
	volatile int64_t t45 = -10156126LL;

    t45 = (x193&(x194+(x195>x196)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = 66989;
	static int16_t x199 = 6285;
	static int32_t x200 = 0;

    t46 = (x197&(x198+(x199>x200)));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = -1;
	int16_t x204 = -7707;
	volatile int32_t t47 = 6504845;

    t47 = (x201&(x202+(x203>x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x205 = 802U;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = -72288;
	int16_t x208 = INT16_MAX;
	int32_t t48 = -343;

    t48 = (x205&(x206+(x207>x208)));

    if (t48 != 34) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x210 = -1;
	int32_t x211 = -1;
	static int32_t t49 = -4;

    t49 = (x209&(x210+(x211>x212)));

    if (t49 != -3499) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = 28U;
	static uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MIN;
	static uint64_t x216 = 7701039LLU;
	static int32_t t50 = -77;

    t50 = (x213&(x214+(x215>x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MAX;
	static uint64_t x218 = 141777330603323LLU;
	static uint64_t x219 = 84182319605LLU;
	int16_t x220 = -1;

    t51 = (x217&(x218+(x219>x220)));

    if (t51 != 59LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = INT16_MIN;
	static uint64_t x223 = UINT64_MAX;
	int64_t x224 = 34693675298060LL;
	uint32_t t52 = 9353U;

    t52 = (x221&(x222+(x223>x224)));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x225 = 155;
	uint32_t x226 = UINT32_MAX;
	int16_t x228 = INT16_MIN;
	uint32_t t53 = 0U;

    t53 = (x225&(x226+(x227>x228)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x231 = -1;
	volatile int64_t t54 = -17909895LL;

    t54 = (x229&(x230+(x231>x232)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x234 = UINT8_MAX;
	volatile uint32_t x235 = 1625U;
	int32_t x236 = INT32_MAX;
	volatile int32_t t55 = 56323;

    t55 = (x233&(x234+(x235>x236)));

    if (t55 != 240) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	volatile int64_t x239 = -1LL;
	uint64_t t56 = 8751317361593143002LLU;

    t56 = (x237&(x238+(x239>x240)));

    if (t56 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x243 = -2071488782038545128LL;
	static int16_t x244 = INT16_MAX;
	volatile uint32_t t57 = 5805U;

    t57 = (x241&(x242+(x243>x244)));

    if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x245 = 61997LLU;
	static int8_t x247 = INT8_MIN;
	int64_t x248 = -1LL;
	uint64_t t58 = 1742166451894892682LLU;

    t58 = (x245&(x246+(x247>x248)));

    if (t58 != 9LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x249 = 2790U;
	int8_t x250 = INT8_MAX;
	static int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;

    t59 = (x249&(x250+(x251>x252)));

    if (t59 != 102) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile int16_t x255 = INT16_MIN;
	volatile int8_t x256 = -1;
	static volatile uint64_t t60 = 11791544641531738LLU;

    t60 = (x253&(x254+(x255>x256)));

    if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile uint8_t x260 = UINT8_MAX;
	static volatile int32_t t61 = 1;

    t61 = (x257&(x258+(x259>x260)));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -4055155145981LL;
	int32_t x264 = -1;
	volatile uint64_t t62 = 3781881298364LLU;

    t62 = (x261&(x262+(x263>x264)));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	uint32_t x268 = UINT32_MAX;

    t63 = (x265&(x266+(x267>x268)));

    if (t63 != 6166) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x269 = 1LLU;
	static volatile int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;
	uint64_t t64 = 130020283930LLU;

    t64 = (x269&(x270+(x271>x272)));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = -1;
	volatile uint16_t x275 = 86U;
	int32_t x276 = -1;
	static volatile int32_t t65 = -30335402;

    t65 = (x273&(x274+(x275>x276)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x277 = 6U;
	volatile uint32_t x278 = UINT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	volatile uint32_t t66 = 10U;

    t66 = (x277&(x278+(x279>x280)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x282 = 46U;
	uint32_t x283 = 8178U;
	int32_t t67 = 144361;

    t67 = (x281&(x282+(x283>x284)));

    if (t67 != 10) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = INT64_MIN;
	static int16_t x286 = 131;
	static uint64_t x287 = 6809478LLU;
	uint8_t x288 = 11U;

    t68 = (x285&(x286+(x287>x288)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = -22;
	volatile uint32_t x290 = 29U;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;

    t69 = (x289&(x290+(x291>x292)));

    if (t69 != 8U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = 21U;
	int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -389669LL;
	static volatile uint32_t t70 = 28U;

    t70 = (x293&(x294+(x295>x296)));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x297 = 7;
	static int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	static uint32_t x300 = 498U;
	int32_t t71 = -13626;

    t71 = (x297&(x298+(x299>x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	static uint8_t x302 = UINT8_MAX;
	int16_t x304 = 16;
	volatile int32_t t72 = 7170;

    t72 = (x301&(x302+(x303>x304)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x306 = UINT32_MAX;
	volatile uint32_t x308 = 958028U;

    t73 = (x305&(x306+(x307>x308)));

    if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = 1;
	uint16_t x310 = 14012U;
	uint32_t x311 = 1105U;
	volatile int32_t t74 = 576130;

    t74 = (x309&(x310+(x311>x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x313 = 87U;
	int8_t x316 = INT8_MAX;
	volatile int64_t t75 = -392132LL;

    t75 = (x313&(x314+(x315>x316)));

    if (t75 != 87LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = INT32_MIN;
	static uint8_t x318 = UINT8_MAX;
	volatile int32_t x320 = 1606;
	int32_t t76 = -397949;

    t76 = (x317&(x318+(x319>x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x322 = INT64_MAX;
	uint16_t x323 = 22U;
	uint8_t x324 = 87U;
	int64_t t77 = -3328753LL;

    t77 = (x321&(x322+(x323>x324)));

    if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MIN;
	volatile int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t78 = 6;

    t78 = (x325&(x326+(x327>x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = -2993;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -1;
	int32_t t79 = 1307;

    t79 = (x329&(x330+(x331>x332)));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x333 = INT8_MIN;
	int64_t x334 = -1LL;
	uint64_t x335 = 0LLU;
	static int8_t x336 = INT8_MIN;
	static volatile int64_t t80 = 213137319272LL;

    t80 = (x333&(x334+(x335>x336)));

    if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x341 = 119865416735886LLU;
	int32_t x343 = 527;
	static volatile int32_t x344 = INT32_MIN;
	volatile uint64_t t81 = 84033625193LLU;

    t81 = (x341&(x342+(x343>x344)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x345 = UINT16_MAX;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = -13280;
	int16_t x348 = INT16_MIN;
	uint32_t t82 = 149U;

    t82 = (x345&(x346+(x347>x348)));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x349 = INT8_MAX;
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t83 = -21;

    t83 = (x349&(x350+(x351>x352)));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MAX;
	int32_t x355 = INT32_MAX;
	uint64_t x356 = 421LLU;
	int32_t t84 = -5;

    t84 = (x353&(x354+(x355>x356)));

    if (t84 != 2147483521) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x357 = 0;
	int32_t x358 = -1;
	int32_t x359 = INT32_MIN;

    t85 = (x357&(x358+(x359>x360)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x361 = INT64_MIN;
	uint8_t x362 = UINT8_MAX;
	static uint64_t x363 = 132556284LLU;
	uint32_t x364 = 3U;
	int64_t t86 = 63621751LL;

    t86 = (x361&(x362+(x363>x364)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x365 = 3;
	volatile int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MIN;
	int32_t x368 = 718;
	static volatile int64_t t87 = -4243709838125102712LL;

    t87 = (x365&(x366+(x367>x368)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	static int32_t x371 = 2;
	int64_t x372 = INT64_MAX;
	static volatile int32_t t88 = 13830;

    t88 = (x369&(x370+(x371>x372)));

    if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 431U;
	uint64_t x374 = 4165LLU;
	uint32_t x375 = 25602U;
	int8_t x376 = INT8_MIN;

    t89 = (x373&(x374+(x375>x376)));

    if (t89 != 5LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x377 = 79801904U;
	int16_t x378 = -18;
	int32_t x379 = INT32_MAX;
	volatile int32_t x380 = -13;

    t90 = (x377&(x378+(x379>x380)));

    if (t90 != 79801888U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = -1;
	int32_t x382 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	int32_t t91 = INT32_MIN;

    t91 = (x381&(x382+(x383>x384)));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x386 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	static int32_t t92 = 941;

    t92 = (x385&(x386+(x387>x388)));

    if (t92 != -338788352) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x389 = 123287723252884LLU;
	int16_t x391 = -1;
	uint64_t t93 = 2189076639LLU;

    t93 = (x389&(x390+(x391>x392)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	volatile uint16_t x395 = 1U;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t94 = -263;

    t94 = (x393&(x394+(x395>x396)));

    if (t94 != 2147483521) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x398 = INT8_MAX;
	int64_t x399 = -1LL;
	uint16_t x400 = 58U;

    t95 = (x397&(x398+(x399>x400)));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = INT16_MAX;
	uint8_t x402 = 49U;
	volatile int8_t x403 = 1;
	uint32_t x404 = 8365917U;
	volatile int32_t t96 = 709824;

    t96 = (x401&(x402+(x403>x404)));

    if (t96 != 49) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MIN;
	int16_t x407 = 56;
	int64_t t97 = INT64_MIN;

    t97 = (x405&(x406+(x407>x408)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = 2211U;
	static int8_t x410 = -1;
	static int32_t x411 = -99140;
	int32_t x412 = INT32_MIN;
	int32_t t98 = -2520;

    t98 = (x409&(x410+(x411>x412)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x414 = 21U;
	volatile int8_t x415 = INT8_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	volatile int32_t t99 = 1;

    t99 = (x413&(x414+(x415>x416)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = -1;
	static uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;

    t100 = (x417&(x418+(x419>x420)));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x429 = INT64_MIN;
	uint8_t x430 = 0U;
	int8_t x431 = -1;
	volatile uint64_t x432 = 188933454164865LLU;
	static volatile int64_t t101 = -122705675LL;

    t101 = (x429&(x430+(x431>x432)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x433 = -59103120LL;
	int8_t x434 = INT8_MIN;
	static int8_t x436 = INT8_MIN;

    t102 = (x433&(x434+(x435>x436)));

    if (t102 != -59103232LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = -1LL;
	volatile int64_t x438 = -117069LL;
	volatile uint64_t x439 = 49358781885252LLU;
	static int64_t t103 = -494163LL;

    t103 = (x437&(x438+(x439>x440)));

    if (t103 != -117068LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x442 = 206LL;
	int64_t x443 = 420303922077634905LL;
	uint32_t x444 = UINT32_MAX;

    t104 = (x441&(x442+(x443>x444)));

    if (t104 != 207LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x445 = 137U;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = INT64_MIN;
	int32_t x448 = -1;
	int32_t t105 = 126322042;

    t105 = (x445&(x446+(x447>x448)));

    if (t105 != 137) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x449 = 57078857223LL;
	uint32_t x450 = 76934U;
	int64_t x451 = INT64_MAX;
	uint16_t x452 = UINT16_MAX;
	int64_t t106 = 1639085936LL;

    t106 = (x449&(x450+(x451>x452)));

    if (t106 != 11271LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x453 = INT64_MAX;
	static uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 182U;
	static int64_t x456 = 8LL;
	static volatile int64_t t107 = 141LL;

    t107 = (x453&(x454+(x455>x456)));

    if (t107 != 256LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x457 = -1;
	volatile int16_t x458 = -1;
	uint16_t x459 = 12U;
	static int8_t x460 = INT8_MAX;
	int32_t t108 = 377040;

    t108 = (x457&(x458+(x459>x460)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x465 = 3152U;
	int16_t x466 = -1;
	uint8_t x467 = 5U;
	uint8_t x468 = UINT8_MAX;
	uint32_t t109 = 14840U;

    t109 = (x465&(x466+(x467>x468)));

    if (t109 != 3152U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x469 = UINT64_MAX;
	int8_t x471 = 8;
	volatile uint16_t x472 = 61U;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = (x469&(x470+(x471>x472)));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 460U;
	int16_t x476 = INT16_MIN;
	volatile int64_t t111 = 134292LL;

    t111 = (x473&(x474+(x475>x476)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = 94;
	int16_t x479 = 11530;
	uint16_t x480 = 16U;
	int32_t t112 = 0;

    t112 = (x477&(x478+(x479>x480)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x481 = UINT32_MAX;
	static int8_t x483 = INT8_MIN;
	static volatile uint32_t t113 = UINT32_MAX;

    t113 = (x481&(x482+(x483>x484)));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x489 = INT32_MAX;
	static uint32_t x490 = UINT32_MAX;
	volatile uint32_t t114 = 199U;

    t114 = (x489&(x490+(x491>x492)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x493 = INT16_MAX;
	int64_t x494 = -152329885521LL;
	int8_t x496 = INT8_MIN;
	static volatile int64_t t115 = 33016786991114829LL;

    t115 = (x493&(x494+(x495>x496)));

    if (t115 != 26799LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x497 = INT64_MIN;
	int32_t x498 = 41919;
	uint16_t x500 = 7182U;
	int64_t t116 = -10LL;

    t116 = (x497&(x498+(x499>x500)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x501 = -1;
	volatile uint8_t x502 = 0U;
	volatile int64_t x503 = INT64_MAX;
	int64_t x504 = INT64_MIN;

    t117 = (x501&(x502+(x503>x504)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x505 = 0LLU;
	int8_t x506 = 1;
	int16_t x507 = 5302;
	static uint64_t x508 = UINT64_MAX;
	static volatile uint64_t t118 = 5578102353684423320LLU;

    t118 = (x505&(x506+(x507>x508)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x509 = UINT8_MAX;
	uint32_t x510 = 428U;
	static int8_t x511 = INT8_MIN;
	int8_t x512 = 48;
	volatile uint32_t t119 = 632382275U;

    t119 = (x509&(x510+(x511>x512)));

    if (t119 != 172U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x513 = UINT32_MAX;
	int32_t x514 = INT32_MIN;
	uint8_t x515 = 0U;
	int32_t x516 = INT32_MAX;
	volatile uint32_t t120 = 573214U;

    t120 = (x513&(x514+(x515>x516)));

    if (t120 != 2147483648U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x517 = INT16_MIN;
	int16_t x518 = 7425;
	uint8_t x519 = 2U;
	uint64_t x520 = 125352801273LLU;
	static volatile int32_t t121 = -1929458;

    t121 = (x517&(x518+(x519>x520)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	static int16_t x523 = 0;
	int32_t x524 = -215495020;

    t122 = (x521&(x522+(x523>x524)));

    if (t122 != 1141073U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = INT32_MIN;
	static int64_t x526 = INT64_MAX;
	static volatile int64_t x527 = INT64_MIN;
	volatile int64_t t123 = -675581122910105LL;

    t123 = (x525&(x526+(x527>x528)));

    if (t123 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x529 = -1;
	volatile int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	volatile int32_t t124 = -4187;

    t124 = (x529&(x530+(x531>x532)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = INT32_MAX;
	int64_t x534 = INT64_MAX;
	uint32_t x535 = 3277U;
	static uint64_t x536 = UINT64_MAX;
	static int64_t t125 = 1926306LL;

    t125 = (x533&(x534+(x535>x536)));

    if (t125 != 2147483647LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x537 = INT64_MIN;
	static volatile uint8_t x538 = UINT8_MAX;
	volatile int64_t x539 = INT64_MIN;
	int64_t x540 = INT64_MIN;

    t126 = (x537&(x538+(x539>x540)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = -1;
	int64_t x543 = 0LL;
	int32_t x544 = 12;
	uint32_t t127 = 516983U;

    t127 = (x541&(x542+(x543>x544)));

    if (t127 != 13U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = UINT16_MAX;
	uint64_t x547 = 2269581712260LLU;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t128 = -206521;

    t128 = (x545&(x546+(x547>x548)));

    if (t128 != 65408) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x549 = -1;
	volatile int8_t x550 = 8;
	volatile uint32_t x551 = UINT32_MAX;
	static volatile int64_t x552 = -1316916027594001LL;
	volatile int32_t t129 = 50778;

    t129 = (x549&(x550+(x551>x552)));

    if (t129 != 9) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x553 = 3013U;
	int16_t x556 = 143;
	volatile uint32_t t130 = 640U;

    t130 = (x553&(x554+(x555>x556)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x557 = INT32_MAX;
	uint32_t x558 = 1109U;
	static int32_t x560 = INT32_MAX;
	volatile uint32_t t131 = 48154U;

    t131 = (x557&(x558+(x559>x560)));

    if (t131 != 1109U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = -2162;
	static int8_t x562 = INT8_MIN;
	int8_t x564 = -1;
	volatile int32_t t132 = 27135;

    t132 = (x561&(x562+(x563>x564)));

    if (t132 != -2176) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = INT64_MIN;
	uint64_t x566 = 3LLU;
	int8_t x568 = INT8_MIN;
	uint64_t t133 = 17010926308927LLU;

    t133 = (x565&(x566+(x567>x568)));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x573 = -36;
	int64_t x574 = INT64_MIN;
	int64_t x575 = INT64_MAX;
	static uint16_t x576 = 1686U;
	volatile int64_t t134 = INT64_MIN;

    t134 = (x573&(x574+(x575>x576)));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = INT64_MIN;
	uint8_t x579 = UINT8_MAX;
	volatile int64_t x580 = -1LL;
	int64_t t135 = INT64_MIN;

    t135 = (x577&(x578+(x579>x580)));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x581 = -1LL;
	int32_t x583 = -1;
	uint8_t x584 = 1U;

    t136 = (x581&(x582+(x583>x584)));

    if (t136 != -32768LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x586 = 53;
	static int16_t x587 = INT16_MIN;
	int64_t x588 = INT64_MAX;
	uint64_t t137 = 1093169344LLU;

    t137 = (x585&(x586+(x587>x588)));

    if (t137 != 5LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x589 = INT32_MIN;
	uint32_t x590 = UINT32_MAX;
	static uint8_t x591 = UINT8_MAX;
	int8_t x592 = INT8_MIN;
	uint32_t t138 = 141846294U;

    t138 = (x589&(x590+(x591>x592)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x593 = 20U;
	int32_t x595 = INT32_MIN;
	static uint8_t x596 = 0U;
	static int64_t t139 = 4991773267168LL;

    t139 = (x593&(x594+(x595>x596)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MIN;
	volatile int64_t x600 = -132442439343829991LL;
	int32_t t140 = 0;

    t140 = (x597&(x598+(x599>x600)));

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x601 = 23146919;
	int32_t x602 = INT32_MAX;
	volatile int32_t x603 = -3189;
	static volatile int32_t t141 = 34;

    t141 = (x601&(x602+(x603>x604)));

    if (t141 != 23146919) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x605 = INT8_MAX;
	int64_t x606 = -3602LL;
	int16_t x607 = -11;
	int16_t x608 = INT16_MIN;

    t142 = (x605&(x606+(x607>x608)));

    if (t142 != 111LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x610 = INT16_MIN;
	uint8_t x611 = 5U;
	static int32_t t143 = 1716379;

    t143 = (x609&(x610+(x611>x612)));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x614 = 285569U;
	int64_t x615 = INT64_MAX;
	int64_t x616 = INT64_MAX;
	uint64_t t144 = 592281207152LLU;

    t144 = (x613&(x614+(x615>x616)));

    if (t144 != 284673LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x617 = 489386660058973LLU;
	volatile int32_t x620 = INT32_MAX;
	volatile uint64_t t145 = 15109LLU;

    t145 = (x617&(x618+(x619>x620)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = INT32_MIN;
	uint64_t x622 = 205LLU;
	uint64_t x623 = 958795583LLU;
	uint8_t x624 = 10U;
	uint64_t t146 = 32223455LLU;

    t146 = (x621&(x622+(x623>x624)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x625 = -4;
	int8_t x626 = INT8_MAX;
	uint16_t x627 = 1433U;
	static int8_t x628 = -1;
	int32_t t147 = 24;

    t147 = (x625&(x626+(x627>x628)));

    if (t147 != 128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x629 = INT16_MIN;
	static uint8_t x630 = 16U;
	volatile int16_t x632 = INT16_MIN;
	int32_t t148 = 341;

    t148 = (x629&(x630+(x631>x632)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x636 = -1;
	volatile int32_t t149 = 725346039;

    t149 = (x633&(x634+(x635>x636)));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	int64_t x639 = INT64_MIN;
	uint16_t x640 = 86U;

    t150 = (x637&(x638+(x639>x640)));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x641 = INT64_MIN;
	uint16_t x642 = 2144U;
	uint8_t x643 = 15U;
	int64_t t151 = 11581793LL;

    t151 = (x641&(x642+(x643>x644)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x645 = 1697788009927LLU;
	uint64_t x646 = 2LLU;
	int64_t x647 = INT64_MIN;
	uint64_t t152 = 144LLU;

    t152 = (x645&(x646+(x647>x648)));

    if (t152 != 2LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x650 = INT64_MIN;
	int32_t x651 = INT32_MAX;
	uint32_t x652 = 115559U;
	volatile int64_t t153 = 45572373LL;

    t153 = (x649&(x650+(x651>x652)));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = -1295;
	static int32_t x654 = -1;
	static int16_t x655 = -1921;
	uint64_t x656 = 116119562724583LLU;

    t154 = (x653&(x654+(x655>x656)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x657 = INT16_MIN;
	static int64_t x658 = -1LL;
	int32_t x660 = 654926;
	volatile int64_t t155 = 5402926331342539LL;

    t155 = (x657&(x658+(x659>x660)));

    if (t155 != -32768LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x661 = -1;
	uint16_t x662 = 271U;
	int32_t x663 = INT32_MAX;
	int16_t x664 = INT16_MIN;
	volatile int32_t t156 = 291210;

    t156 = (x661&(x662+(x663>x664)));

    if (t156 != 272) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x666 = 472919;
	int8_t x667 = 0;
	int32_t x668 = INT32_MIN;

    t157 = (x665&(x666+(x667>x668)));

    if (t157 != 72) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint8_t x671 = 0U;
	volatile int8_t x672 = INT8_MAX;
	int64_t t158 = 250092879208106667LL;

    t158 = (x669&(x670+(x671>x672)));

    if (t158 != 32767LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x675 = 706334541U;
	volatile int8_t x676 = INT8_MAX;
	int32_t t159 = 1;

    t159 = (x673&(x674+(x675>x676)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x677 = -1;
	int16_t x678 = INT16_MAX;
	int64_t x679 = INT64_MAX;
	uint64_t x680 = UINT64_MAX;

    t160 = (x677&(x678+(x679>x680)));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x681 = 27;
	int64_t x683 = 2735235121447539841LL;
	int8_t x684 = INT8_MIN;
	volatile int32_t t161 = -4085517;

    t161 = (x681&(x682+(x683>x684)));

    if (t161 != 8) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x686 = -2;
	int32_t x688 = -4051;
	volatile uint32_t t162 = 5600U;

    t162 = (x685&(x686+(x687>x688)));

    if (t162 != 172254U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x689 = -29;
	static uint8_t x690 = 1U;
	int64_t x692 = -1LL;
	int32_t t163 = -1;

    t163 = (x689&(x690+(x691>x692)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x693 = 233255288LLU;
	volatile int64_t x695 = INT64_MAX;
	volatile int8_t x696 = -1;
	volatile uint64_t t164 = 123487LLU;

    t164 = (x693&(x694+(x695>x696)));

    if (t164 != 233242624LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x697 = -3106904104LL;
	static uint32_t x699 = UINT32_MAX;
	volatile int8_t x700 = INT8_MIN;
	int64_t t165 = -2260490666495LL;

    t165 = (x697&(x698+(x699>x700)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x701 = INT8_MAX;
	uint16_t x703 = UINT16_MAX;
	int8_t x704 = -1;
	int32_t t166 = 53585;

    t166 = (x701&(x702+(x703>x704)));

    if (t166 != 45) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x705 = INT8_MAX;
	uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MAX;
	static uint8_t x708 = 63U;
	volatile int32_t t167 = -37785;

    t167 = (x705&(x706+(x707>x708)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x709 = UINT8_MAX;
	uint32_t x710 = UINT32_MAX;
	static int16_t x711 = INT16_MIN;
	uint16_t x712 = UINT16_MAX;
	volatile uint32_t t168 = 644U;

    t168 = (x709&(x710+(x711>x712)));

    if (t168 != 255U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x713 = 74U;
	int8_t x714 = -1;
	static int64_t x715 = -54748LL;
	volatile int32_t t169 = -80;

    t169 = (x713&(x714+(x715>x716)));

    if (t169 != 74) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x717 = 53;
	int16_t x718 = INT16_MAX;
	int32_t x719 = 292;
	static int16_t x720 = 11462;

    t170 = (x717&(x718+(x719>x720)));

    if (t170 != 53) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x726 = 49394U;
	static int16_t x727 = INT16_MIN;
	volatile int16_t x728 = INT16_MAX;
	volatile int64_t t171 = 242426156743LL;

    t171 = (x725&(x726+(x727>x728)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x729 = 11U;
	int16_t x730 = 6;
	uint16_t x731 = 110U;
	int16_t x732 = INT16_MIN;
	uint32_t t172 = 1U;

    t172 = (x729&(x730+(x731>x732)));

    if (t172 != 3U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x733 = INT16_MIN;
	static volatile int8_t x734 = INT8_MAX;
	int64_t x735 = 7LL;
	int32_t t173 = 97117;

    t173 = (x733&(x734+(x735>x736)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x738 = INT8_MAX;
	int8_t x739 = INT8_MAX;
	static volatile int32_t t174 = -1851;

    t174 = (x737&(x738+(x739>x740)));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x741 = INT8_MAX;
	volatile uint32_t x742 = 8547U;
	uint16_t x743 = 2795U;
	static uint32_t t175 = 142819U;

    t175 = (x741&(x742+(x743>x744)));

    if (t175 != 100U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = -159;
	int64_t x746 = INT64_MIN;
	volatile int64_t x747 = -2836073829057164LL;
	uint16_t x748 = UINT16_MAX;
	int64_t t176 = INT64_MIN;

    t176 = (x745&(x746+(x747>x748)));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x751 = INT32_MIN;
	volatile uint8_t x752 = 1U;
	volatile uint64_t t177 = 38257554LLU;

    t177 = (x749&(x750+(x751>x752)));

    if (t177 != 17883161332035893170LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x757 = 20890482LL;
	uint32_t x758 = UINT32_MAX;
	volatile uint64_t x759 = 14994530810044451LLU;
	int64_t t178 = -519663LL;

    t178 = (x757&(x758+(x759>x760)));

    if (t178 != 20890482LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x761 = 1U;
	uint64_t x763 = 43438396585600LLU;
	uint32_t t179 = 453151U;

    t179 = (x761&(x762+(x763>x764)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x766 = 1875;
	int16_t x767 = INT16_MIN;
	volatile int64_t x768 = INT64_MIN;

    t180 = (x765&(x766+(x767>x768)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x769 = 22;
	static int16_t x770 = 5198;
	static uint32_t x771 = 316U;
	int64_t x772 = -433331LL;
	static volatile int32_t t181 = 12861361;

    t181 = (x769&(x770+(x771>x772)));

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x773 = INT64_MIN;
	uint32_t x775 = 1920087U;
	uint32_t x776 = UINT32_MAX;

    t182 = (x773&(x774+(x775>x776)));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x777 = -83;
	static volatile int32_t x778 = -1;
	int64_t x779 = INT64_MIN;

    t183 = (x777&(x778+(x779>x780)));

    if (t183 != -83) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x781 = INT32_MIN;
	volatile int8_t x782 = -1;
	int16_t x784 = -1;
	int32_t t184 = -158;

    t184 = (x781&(x782+(x783>x784)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x785 = -1;
	int32_t x786 = INT32_MIN;
	int32_t x788 = 3629440;
	static int32_t t185 = INT32_MIN;

    t185 = (x785&(x786+(x787>x788)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x789 = -58;
	uint64_t x790 = UINT64_MAX;
	static int8_t x791 = 53;
	uint16_t x792 = UINT16_MAX;
	volatile uint64_t t186 = 3937387222670751LLU;

    t186 = (x789&(x790+(x791>x792)));

    if (t186 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x793 = INT8_MAX;
	int8_t x795 = -1;
	volatile int16_t x796 = INT16_MAX;
	volatile int64_t t187 = 222692693LL;

    t187 = (x793&(x794+(x795>x796)));

    if (t187 != 127LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x797 = -59;
	static uint8_t x798 = 11U;
	uint32_t x799 = 35759389U;
	int64_t x800 = -17961756578LL;
	volatile int32_t t188 = -20;

    t188 = (x797&(x798+(x799>x800)));

    if (t188 != 4) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = INT64_MIN;
	int64_t x802 = -2401088601LL;
	int32_t x803 = INT32_MIN;
	uint32_t x804 = 10408002U;

    t189 = (x801&(x802+(x803>x804)));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x806 = -132533111670823LL;
	uint64_t x808 = UINT64_MAX;
	int64_t t190 = INT64_MIN;

    t190 = (x805&(x806+(x807>x808)));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x810 = UINT16_MAX;
	uint16_t x811 = 5251U;
	int8_t x812 = INT8_MIN;
	volatile int32_t t191 = -107;

    t191 = (x809&(x810+(x811>x812)));

    if (t191 != 65536) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x813 = 83;
	int8_t x814 = INT8_MIN;
	int8_t x815 = 2;
	int32_t t192 = 2339;

    t192 = (x813&(x814+(x815>x816)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x817 = 4163LLU;
	static int8_t x819 = INT8_MAX;
	volatile int64_t x820 = -1LL;

    t193 = (x817&(x818+(x819>x820)));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x821 = UINT16_MAX;
	volatile uint8_t x823 = UINT8_MAX;
	int16_t x824 = -1;
	volatile int32_t t194 = -8180;

    t194 = (x821&(x822+(x823>x824)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x825 = 1015U;
	int64_t x826 = INT64_MIN;
	int8_t x827 = -1;
	volatile int16_t x828 = 201;
	int64_t t195 = -42538574007348236LL;

    t195 = (x825&(x826+(x827>x828)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x829 = UINT16_MAX;
	uint16_t x831 = 18U;
	int8_t x832 = INT8_MAX;
	volatile int32_t t196 = -4946601;

    t196 = (x829&(x830+(x831>x832)));

    if (t196 != 65530) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x833 = 1U;
	int32_t x834 = INT32_MAX;
	volatile uint32_t t197 = 451337369U;

    t197 = (x833&(x834+(x835>x836)));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x837 = 5;
	int16_t x838 = INT16_MAX;
	uint32_t x840 = 1U;
	volatile int32_t t198 = 25;

    t198 = (x837&(x838+(x839>x840)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x841 = INT8_MIN;
	int64_t x842 = INT64_MIN;
	uint64_t x843 = 950076991702LLU;
	int64_t x844 = 8306LL;
	volatile int64_t t199 = INT64_MIN;

    t199 = (x841&(x842+(x843>x844)));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

