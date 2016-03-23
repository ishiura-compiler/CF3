
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

int32_t x4 = -1;
volatile int16_t x8 = INT16_MIN;
int32_t t4 = -4227589;
int32_t x26 = INT32_MIN;
uint16_t x27 = UINT16_MAX;
int64_t x31 = INT64_MAX;
int64_t x33 = INT64_MAX;
int32_t x43 = -17;
int16_t x56 = -1;
static uint16_t x63 = UINT16_MAX;
uint8_t x64 = 25U;
int8_t x67 = 1;
int32_t x79 = 13326391;
uint64_t x81 = 31865362LLU;
int32_t t19 = 6884;
static volatile int32_t t20 = 123204676;
int64_t x89 = -32071LL;
int8_t x94 = INT8_MIN;
volatile int32_t t22 = 5905;
static uint32_t x110 = 909883499U;
uint64_t x111 = 7246553066685225LLU;
int32_t t24 = 16192;
uint8_t x118 = 3U;
int32_t x132 = -1;
int32_t t28 = 1;
int8_t x133 = INT8_MIN;
uint16_t x134 = 0U;
int8_t x139 = -1;
int16_t x141 = INT16_MIN;
uint64_t x155 = UINT64_MAX;
volatile int16_t x157 = -1;
int64_t x158 = -51303058271LL;
static uint64_t x159 = UINT64_MAX;
int64_t x165 = 7540LL;
volatile int64_t x169 = -1LL;
int32_t x175 = 367422221;
int32_t t39 = 85083985;
volatile int32_t t40 = -118;
int64_t x198 = -12625LL;
int16_t x199 = 0;
int8_t x201 = 0;
int8_t x202 = INT8_MIN;
volatile uint32_t x203 = 119580U;
static int16_t x205 = 13;
static int8_t x214 = INT8_MIN;
int8_t x215 = 1;
static volatile int32_t t48 = 5049;
static uint64_t x224 = 2583541297100LLU;
volatile int32_t t49 = -13842256;
static int32_t x225 = -1;
static int8_t x235 = -1;
int16_t x237 = 5;
int16_t x239 = INT16_MAX;
uint8_t x240 = UINT8_MAX;
int8_t x255 = 19;
volatile int8_t x256 = INT8_MAX;
volatile int32_t t56 = -3224483;
int64_t x257 = INT64_MAX;
volatile uint32_t x260 = UINT32_MAX;
int16_t x264 = -1;
volatile uint32_t x271 = 62U;
static int64_t x272 = -1LL;
int32_t x273 = -1;
int32_t t62 = -312884087;
int32_t x300 = INT32_MAX;
volatile uint8_t x304 = 3U;
volatile int32_t t66 = 54;
volatile int16_t x306 = INT16_MIN;
int64_t x309 = 34430LL;
int32_t x311 = -290730;
int8_t x312 = INT8_MAX;
int16_t x313 = INT16_MAX;
int32_t x315 = -1;
volatile int32_t t70 = -53400129;
int16_t x325 = -6;
int8_t x326 = 7;
int32_t t73 = 1;
uint32_t x334 = 1U;
int32_t t77 = 1;
volatile int64_t x350 = INT64_MAX;
static int8_t x354 = -1;
uint16_t x376 = 1U;
volatile int32_t t84 = 442;
int64_t x377 = INT64_MIN;
int16_t x380 = INT16_MAX;
uint16_t x384 = 3014U;
int32_t x400 = INT32_MIN;
static volatile int32_t t90 = 1486;
int16_t x412 = -1;
volatile int32_t t91 = 2972;
int8_t x413 = INT8_MIN;
volatile int32_t t92 = 7519;
int16_t x427 = INT16_MIN;
int16_t x432 = -1;
static int32_t x441 = -1;
uint64_t x446 = UINT64_MAX;
int32_t t100 = 596;
int32_t x449 = -1;
volatile int32_t x455 = INT32_MIN;
volatile int16_t x456 = INT16_MIN;
volatile int64_t x462 = -42LL;
uint8_t x470 = UINT8_MAX;
static uint32_t x471 = 2U;
volatile int32_t t106 = 7;
uint32_t x482 = 104457577U;
int32_t x484 = -142006313;
volatile int32_t t109 = -830;
int64_t x489 = 26LL;
volatile int32_t t112 = -17167992;
int32_t x497 = INT32_MIN;
static int8_t x499 = INT8_MIN;
static volatile int32_t t113 = -130727;
int16_t x501 = INT16_MIN;
static int64_t x504 = -63687104LL;
uint16_t x507 = 3U;
int8_t x508 = -3;
volatile int32_t t115 = -1744046;
int32_t x512 = -1;
static int16_t x513 = -1;
volatile int32_t x525 = INT32_MAX;
volatile int8_t x526 = INT8_MIN;
static int64_t x537 = -5128553LL;
int32_t t122 = 4464364;
int32_t t123 = 23093657;
int8_t x545 = -21;
int32_t t125 = 1172;
volatile uint8_t x557 = 1U;
static volatile int32_t t126 = -41635;
int8_t x566 = -1;
static int32_t t127 = 1452;
int8_t x572 = INT8_MAX;
int32_t t128 = 635637727;
uint32_t x574 = UINT32_MAX;
static volatile uint32_t x583 = 1764U;
volatile uint8_t x596 = UINT8_MAX;
int8_t x601 = INT8_MAX;
uint16_t x605 = UINT16_MAX;
volatile int32_t x607 = INT32_MAX;
uint32_t x612 = UINT32_MAX;
static uint32_t x615 = 1063U;
int64_t x618 = INT64_MAX;
int32_t x619 = INT32_MAX;
volatile int32_t t138 = -9471001;
int32_t t139 = 3797879;
volatile int16_t x625 = 1;
int16_t x626 = INT16_MAX;
volatile int32_t t140 = 14;
int32_t x631 = -674385;
static int8_t x640 = -1;
int16_t x641 = 6522;
volatile uint16_t x650 = 1467U;
uint32_t x659 = 3U;
static int32_t x664 = INT32_MIN;
int32_t t149 = 221;
uint64_t x670 = 616LLU;
volatile int32_t t151 = -13783775;
static volatile int64_t x676 = -959949864920LL;
volatile int32_t t152 = 26402763;
static int64_t x677 = INT64_MIN;
int8_t x683 = INT8_MIN;
volatile int32_t t155 = 11158672;
static int8_t x695 = -10;
static int32_t x699 = -253;
static int32_t t158 = -424;
int8_t x703 = -2;
uint32_t x707 = 73U;
int64_t x721 = 12632074408731LL;
int32_t x724 = INT32_MAX;
static int32_t t165 = -239749;
static int8_t x729 = -1;
uint32_t x730 = UINT32_MAX;
volatile uint8_t x732 = 113U;
int16_t x737 = -1;
int32_t x739 = 12;
volatile uint16_t x744 = 2U;
int16_t x750 = 9557;
static volatile int16_t x752 = -1;
int32_t t171 = 1402219;
static int16_t x757 = -1;
uint16_t x762 = 1504U;
volatile uint32_t x767 = 6975U;
int64_t x768 = -1LL;
int32_t t176 = 1;
volatile int32_t t177 = -1050500;
static volatile int32_t t181 = -246217427;
volatile uint16_t x794 = 20059U;
static volatile int32_t t182 = -1;
volatile uint16_t x811 = 8U;
static volatile int32_t t185 = -18263;
int64_t x817 = INT64_MIN;
static int32_t t186 = -1975626;
uint64_t x821 = 360685LLU;
int64_t x826 = INT64_MIN;
volatile int32_t t190 = 247;
volatile uint32_t x839 = 1U;
uint32_t x841 = UINT32_MAX;
volatile uint64_t x843 = UINT64_MAX;
static volatile int32_t t192 = 2071282;
static uint16_t x845 = 3U;
static int64_t x853 = 782656LL;
static volatile int32_t t195 = 5308871;
int16_t x861 = -6;
uint16_t x862 = 456U;
static volatile int32_t t196 = -766;
int32_t t198 = 168788450;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	int32_t t0 = 257610;

    t0 = ((x1&x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 10U;
	static int32_t x6 = INT32_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = -724885;

    t1 = ((x5&x6)==(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static uint16_t x10 = 27860U;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 0U;
	volatile int32_t t2 = 256;

    t2 = ((x9&x10)==(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = 172633LL;
	int64_t x14 = INT64_MAX;
	volatile int64_t x15 = INT64_MAX;
	uint32_t x16 = 3117887U;
	int32_t t3 = -2;

    t3 = ((x13&x14)==(x15-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	volatile int64_t x18 = 2934906451261943LL;
	int8_t x19 = INT8_MIN;
	static int64_t x20 = INT64_MIN;

    t4 = ((x17&x18)==(x19-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 2U;
	volatile int16_t x22 = INT16_MIN;
	uint32_t x23 = 323058453U;
	int16_t x24 = -128;
	static int32_t t5 = 4;

    t5 = ((x21&x22)==(x23-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = 25557221;

    t6 = ((x25&x26)==(x27-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	static int64_t x30 = 28513600158LL;
	uint64_t x32 = 923900176062894LLU;
	int32_t t7 = -33546759;

    t7 = ((x29&x30)==(x31-x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = 263953778LLU;
	static uint16_t x35 = UINT16_MAX;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -282461046;

    t8 = ((x33&x34)==(x35-x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = INT64_MAX;
	int8_t x38 = 1;
	uint32_t x39 = 16803592U;
	uint16_t x40 = 52U;
	volatile int32_t t9 = -666475706;

    t9 = ((x37&x38)==(x39-x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int16_t x42 = -1;
	uint32_t x44 = 72826U;
	volatile int32_t t10 = -2002;

    t10 = ((x41&x42)==(x43-x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = -1;
	uint32_t x46 = 2657740U;
	volatile int64_t x47 = 74414423LL;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 517015;

    t11 = ((x45&x46)==(x47-x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	volatile uint8_t x55 = 1U;
	int32_t t12 = 1;

    t12 = ((x53&x54)==(x55-x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x57 = UINT8_MAX;
	static uint32_t x58 = UINT32_MAX;
	uint32_t x59 = UINT32_MAX;
	static volatile uint32_t x60 = 12324112U;
	int32_t t13 = -3602737;

    t13 = ((x57&x58)==(x59-x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = 0;
	int8_t x62 = INT8_MIN;
	int32_t t14 = 2239736;

    t14 = ((x61&x62)==(x63-x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x65 = 69976291U;
	int32_t x66 = INT32_MIN;
	uint32_t x68 = 7U;
	static int32_t t15 = 1;

    t15 = ((x65&x66)==(x67-x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int16_t x70 = -1;
	volatile int16_t x71 = INT16_MAX;
	static int8_t x72 = -26;
	volatile int32_t t16 = -654953;

    t16 = ((x69&x70)==(x71-x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	uint16_t x74 = 67U;
	int32_t x75 = INT32_MAX;
	uint64_t x76 = UINT64_MAX;
	int32_t t17 = 421242237;

    t17 = ((x73&x74)==(x75-x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	static volatile int64_t x78 = INT64_MIN;
	uint32_t x80 = 2U;
	volatile int32_t t18 = -720;

    t18 = ((x77&x78)==(x79-x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = UINT16_MAX;

    t19 = ((x81&x82)==(x83-x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 105U;
	int16_t x86 = 367;
	int64_t x87 = -1LL;
	volatile int16_t x88 = 0;

    t20 = ((x85&x86)==(x87-x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x90 = INT64_MAX;
	int64_t x91 = 0LL;
	int64_t x92 = 509041550702022LL;
	int32_t t21 = -208919;

    t21 = ((x89&x90)==(x91-x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;
	int32_t x95 = -589638;
	uint16_t x96 = 12386U;

    t22 = ((x93&x94)==(x95-x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	static uint32_t x102 = 18438651U;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = 1;
	static volatile int32_t t23 = -504377349;

    t23 = ((x101&x102)==(x103-x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 8U;
	uint16_t x112 = 6235U;

    t24 = ((x109&x110)==(x111-x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = UINT32_MAX;
	volatile int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	int32_t t25 = -36585;

    t25 = ((x117&x118)==(x119-x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x122 = 494625815127823LLU;
	static int8_t x123 = INT8_MIN;
	volatile uint32_t x124 = 57031791U;
	volatile int32_t t26 = 1636;

    t26 = ((x121&x122)==(x123-x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x125 = 30U;
	volatile int64_t x126 = INT64_MIN;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = 1;
	int32_t t27 = -22234;

    t27 = ((x125&x126)==(x127-x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x129 = 0U;
	volatile int16_t x130 = 15551;
	int64_t x131 = 24LL;

    t28 = ((x129&x130)==(x131-x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x135 = 862056154605LLU;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t29 = 19;

    t29 = ((x133&x134)==(x135-x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x137 = INT64_MIN;
	volatile int32_t x138 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t30 = -1053622925;

    t30 = ((x137&x138)==(x139-x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	uint8_t x144 = 101U;
	static volatile int32_t t31 = -104823107;

    t31 = ((x141&x142)==(x143-x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x145 = 756698155081LL;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = -2114156LL;
	int64_t x148 = -2434327874632LL;
	int32_t t32 = -3;

    t32 = ((x145&x146)==(x147-x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x149 = 35;
	int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -1;
	volatile int32_t t33 = 959613602;

    t33 = ((x149&x150)==(x151-x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = -1LL;
	int16_t x154 = -13;
	uint32_t x156 = 1U;
	volatile int32_t t34 = -893891;

    t34 = ((x153&x154)==(x155-x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x160 = INT16_MIN;
	volatile int32_t t35 = 141;

    t35 = ((x157&x158)==(x159-x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x161 = -1LL;
	static volatile uint32_t x162 = 91651868U;
	int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MIN;
	static int32_t t36 = 36;

    t36 = ((x161&x162)==(x163-x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	uint16_t x168 = 0U;
	int32_t t37 = 8104582;

    t37 = ((x165&x166)==(x167-x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x170 = INT64_MIN;
	uint32_t x171 = 200051192U;
	volatile int16_t x172 = INT16_MIN;
	static int32_t t38 = -876907320;

    t38 = ((x169&x170)==(x171-x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = 995LL;
	static int8_t x174 = INT8_MIN;
	int8_t x176 = 32;

    t39 = ((x173&x174)==(x175-x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x177 = UINT64_MAX;
	uint8_t x178 = 33U;
	volatile int16_t x179 = -1;
	int64_t x180 = INT64_MIN;

    t40 = ((x177&x178)==(x179-x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x181 = -4;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = -1LL;
	static volatile int32_t t41 = -962944783;

    t41 = ((x181&x182)==(x183-x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = -33701;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;
	int32_t t42 = 1405;

    t42 = ((x185&x186)==(x187-x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = -245210535606LL;
	int8_t x194 = -1;
	int32_t x195 = 1713949;
	uint8_t x196 = 5U;
	volatile int32_t t43 = -25641;

    t43 = ((x193&x194)==(x195-x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = 7U;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t44 = 141572214;

    t44 = ((x197&x198)==(x199-x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x204 = INT16_MAX;
	int32_t t45 = -7694;

    t45 = ((x201&x202)==(x203-x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x206 = 119U;
	static int16_t x207 = INT16_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t46 = -54962585;

    t46 = ((x205&x206)==(x207-x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t47 = 11516;

    t47 = ((x213&x214)==(x215-x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = 0;
	int16_t x218 = -7;
	uint16_t x219 = 7315U;
	int8_t x220 = INT8_MAX;

    t48 = ((x217&x218)==(x219-x220));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x221 = UINT64_MAX;
	volatile uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MIN;

    t49 = ((x221&x222)==(x223-x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x226 = 7U;
	volatile int32_t x227 = 65970;
	int64_t x228 = -1LL;
	int32_t t50 = -636869;

    t50 = ((x225&x226)==(x227-x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MIN;
	volatile uint32_t x230 = 21U;
	int32_t x231 = -1;
	int16_t x232 = -2;
	volatile int32_t t51 = 0;

    t51 = ((x229&x230)==(x231-x232));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = INT32_MIN;
	uint32_t x234 = UINT32_MAX;
	uint16_t x236 = 2840U;
	int32_t t52 = -3926;

    t52 = ((x233&x234)==(x235-x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x238 = -5297LL;
	int32_t t53 = -3006;

    t53 = ((x237&x238)==(x239-x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t54 = 43;

    t54 = ((x241&x242)==(x243-x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = 1;
	uint32_t x250 = 5202U;
	uint32_t x251 = 3546U;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t55 = 23028322;

    t55 = ((x249&x250)==(x251-x252));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x253 = INT8_MIN;
	static uint32_t x254 = 34U;

    t56 = ((x253&x254)==(x255-x256));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	static volatile int32_t t57 = -22158467;

    t57 = ((x257&x258)==(x259-x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x261 = 5;
	static uint16_t x262 = 0U;
	static volatile uint8_t x263 = UINT8_MAX;
	int32_t t58 = 0;

    t58 = ((x261&x262)==(x263-x264));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = 273432002991256LL;
	int64_t x266 = -9112266191047LL;
	volatile uint16_t x267 = UINT16_MAX;
	static int16_t x268 = -1;
	volatile int32_t t59 = -125637925;

    t59 = ((x265&x266)==(x267-x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MIN;
	int32_t t60 = -2613988;

    t60 = ((x269&x270)==(x271-x272));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x274 = INT64_MIN;
	static int16_t x275 = -670;
	volatile int8_t x276 = -1;
	int32_t t61 = -10919;

    t61 = ((x273&x274)==(x275-x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x285 = -1;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = 38;
	int32_t x288 = 64;

    t62 = ((x285&x286)==(x287-x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 123U;
	static int16_t x292 = -12920;
	volatile int32_t t63 = -7;

    t63 = ((x289&x290)==(x291-x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x293 = INT64_MIN;
	static int16_t x294 = -1;
	uint64_t x295 = 8163128030LLU;
	static int64_t x296 = -1LL;
	int32_t t64 = -381;

    t64 = ((x293&x294)==(x295-x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x297 = 86726U;
	int64_t x298 = INT64_MIN;
	int8_t x299 = -1;
	int32_t t65 = 3716784;

    t65 = ((x297&x298)==(x299-x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x301 = UINT32_MAX;
	static int8_t x302 = INT8_MAX;
	int32_t x303 = 42225480;

    t66 = ((x301&x302)==(x303-x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x305 = 2170483539270LLU;
	uint64_t x307 = 1973834286182082479LLU;
	static volatile uint32_t x308 = 10U;
	static volatile int32_t t67 = -221646;

    t67 = ((x305&x306)==(x307-x308));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x310 = 664770LL;
	volatile int32_t t68 = 3731861;

    t68 = ((x309&x310)==(x311-x312));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x314 = INT64_MIN;
	int32_t x316 = 139366297;
	volatile int32_t t69 = -6254992;

    t69 = ((x313&x314)==(x315-x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x317 = -1;
	int32_t x318 = 156099;
	static int16_t x319 = INT16_MIN;
	static volatile uint16_t x320 = 3585U;

    t70 = ((x317&x318)==(x319-x320));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x321 = 11066970LLU;
	int8_t x322 = INT8_MIN;
	volatile uint16_t x323 = 55U;
	int16_t x324 = INT16_MAX;
	volatile int32_t t71 = 1044405;

    t71 = ((x321&x322)==(x323-x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	volatile int32_t t72 = 13906750;

    t72 = ((x325&x326)==(x327-x328));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 1U;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;

    t73 = ((x329&x330)==(x331-x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	int32_t x336 = -33993301;
	volatile int32_t t74 = -5486772;

    t74 = ((x333&x334)==(x335-x336));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x337 = 4019869U;
	int16_t x338 = INT16_MIN;
	uint16_t x339 = UINT16_MAX;
	uint16_t x340 = UINT16_MAX;
	int32_t t75 = 680040457;

    t75 = ((x337&x338)==(x339-x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x341 = UINT8_MAX;
	static uint32_t x342 = 0U;
	int32_t x343 = -1;
	int16_t x344 = INT16_MAX;
	static int32_t t76 = -4725000;

    t76 = ((x341&x342)==(x343-x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x345 = UINT16_MAX;
	int32_t x346 = 100;
	int32_t x347 = -1;
	static int16_t x348 = INT16_MAX;

    t77 = ((x345&x346)==(x347-x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = 16933786U;
	static int32_t t78 = 10073;

    t78 = ((x349&x350)==(x351-x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x355 = 273264259LLU;
	int32_t x356 = -1790;
	int32_t t79 = -1904727;

    t79 = ((x353&x354)==(x355-x356));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x357 = UINT64_MAX;
	static uint16_t x358 = 30U;
	static int64_t x359 = -7953513740223418LL;
	static volatile int8_t x360 = INT8_MIN;
	int32_t t80 = -393759502;

    t80 = ((x357&x358)==(x359-x360));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x361 = -40401462LL;
	int8_t x362 = -1;
	int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t81 = 0;

    t81 = ((x361&x362)==(x363-x364));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = -1;
	uint64_t x366 = 0LLU;
	uint64_t x367 = 11228LLU;
	int32_t x368 = INT32_MIN;
	int32_t t82 = -322;

    t82 = ((x365&x366)==(x367-x368));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = INT32_MIN;
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t83 = 1072053071;

    t83 = ((x369&x370)==(x371-x372));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x373 = 1;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 1240016U;

    t84 = ((x373&x374)==(x375-x376));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x378 = 7U;
	volatile uint8_t x379 = 1U;
	static int32_t t85 = -23;

    t85 = ((x377&x378)==(x379-x380));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x381 = 58516LLU;
	uint64_t x382 = 24893823207213LLU;
	volatile uint16_t x383 = UINT16_MAX;
	int32_t t86 = 4864;

    t86 = ((x381&x382)==(x383-x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x393 = 2889U;
	static int64_t x394 = -2545914687LL;
	int64_t x395 = INT64_MAX;
	int8_t x396 = 0;
	int32_t t87 = 12433;

    t87 = ((x393&x394)==(x395-x396));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x397 = INT8_MAX;
	uint64_t x398 = 4190655233LLU;
	uint64_t x399 = 25229LLU;
	volatile int32_t t88 = 6;

    t88 = ((x397&x398)==(x399-x400));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x401 = 1U;
	int64_t x402 = 124983691LL;
	static uint8_t x403 = 107U;
	uint64_t x404 = 1030471LLU;
	static int32_t t89 = -408917;

    t89 = ((x401&x402)==(x403-x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x405 = 1U;
	int16_t x406 = 864;
	int32_t x407 = -1;
	int32_t x408 = 109834903;

    t90 = ((x405&x406)==(x407-x408));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = 102839;
	uint32_t x410 = UINT32_MAX;
	static uint8_t x411 = UINT8_MAX;

    t91 = ((x409&x410)==(x411-x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MAX;
	volatile int8_t x416 = INT8_MIN;

    t92 = ((x413&x414)==(x415-x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x417 = 4468U;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = -783;
	int32_t x420 = INT32_MIN;
	static int32_t t93 = -979133455;

    t93 = ((x417&x418)==(x419-x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x421 = UINT16_MAX;
	int16_t x422 = INT16_MAX;
	static uint32_t x423 = UINT32_MAX;
	int32_t x424 = -315247998;
	int32_t t94 = -50159437;

    t94 = ((x421&x422)==(x423-x424));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = 1U;
	int32_t x426 = 2;
	uint64_t x428 = 253LLU;
	int32_t t95 = 12871561;

    t95 = ((x425&x426)==(x427-x428));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x429 = 3735;
	uint16_t x430 = UINT16_MAX;
	volatile int32_t x431 = 11283163;
	int32_t t96 = 1;

    t96 = ((x429&x430)==(x431-x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x433 = UINT16_MAX;
	int64_t x434 = -1LL;
	int64_t x435 = -116569684238736071LL;
	int8_t x436 = INT8_MIN;
	volatile int32_t t97 = 253015931;

    t97 = ((x433&x434)==(x435-x436));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = -13;
	int8_t x439 = INT8_MIN;
	volatile int8_t x440 = 1;
	volatile int32_t t98 = 7;

    t98 = ((x437&x438)==(x439-x440));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MAX;
	uint8_t x444 = 1U;
	static int32_t t99 = 13;

    t99 = ((x441&x442)==(x443-x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x445 = UINT64_MAX;
	uint64_t x447 = 29055868543738755LLU;
	volatile int64_t x448 = INT64_MAX;

    t100 = ((x445&x446)==(x447-x448));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x450 = -336;
	volatile int64_t x451 = 5LL;
	volatile uint64_t x452 = UINT64_MAX;
	volatile int32_t t101 = -937701581;

    t101 = ((x449&x450)==(x451-x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = 14371U;
	uint32_t x454 = UINT32_MAX;
	volatile int32_t t102 = 74621589;

    t102 = ((x453&x454)==(x455-x456));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x457 = 78U;
	volatile uint32_t x458 = 3U;
	static int64_t x459 = 162403790209841385LL;
	volatile int64_t x460 = -1LL;
	static int32_t t103 = 33434;

    t103 = ((x457&x458)==(x459-x460));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x461 = 1024349347U;
	uint8_t x463 = 6U;
	int64_t x464 = -1LL;
	static int32_t t104 = -396;

    t104 = ((x461&x462)==(x463-x464));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x465 = INT64_MAX;
	uint16_t x466 = 43U;
	static int16_t x467 = INT16_MIN;
	int32_t x468 = -29;
	static volatile int32_t t105 = -6;

    t105 = ((x465&x466)==(x467-x468));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x469 = INT32_MIN;
	uint8_t x472 = 0U;

    t106 = ((x469&x470)==(x471-x472));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x473 = INT64_MIN;
	uint32_t x474 = UINT32_MAX;
	int64_t x475 = -679609426LL;
	int32_t x476 = 1406;
	static int32_t t107 = 116257589;

    t107 = ((x473&x474)==(x475-x476));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = -10;
	int16_t x479 = -2760;
	uint8_t x480 = UINT8_MAX;
	static volatile int32_t t108 = 245599724;

    t108 = ((x477&x478)==(x479-x480));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x481 = UINT16_MAX;
	uint8_t x483 = 45U;

    t109 = ((x481&x482)==(x483-x484));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x485 = 12LLU;
	uint8_t x486 = UINT8_MAX;
	int64_t x487 = -1LL;
	int16_t x488 = INT16_MAX;
	int32_t t110 = -445;

    t110 = ((x485&x486)==(x487-x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x490 = 44;
	uint8_t x491 = 21U;
	int64_t x492 = INT64_MAX;
	volatile int32_t t111 = 201580;

    t111 = ((x489&x490)==(x491-x492));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = INT64_MIN;
	int16_t x494 = -1;
	int16_t x495 = -1;
	int8_t x496 = INT8_MIN;

    t112 = ((x493&x494)==(x495-x496));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x498 = INT8_MIN;
	uint16_t x500 = UINT16_MAX;

    t113 = ((x497&x498)==(x499-x500));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x502 = 0;
	int8_t x503 = INT8_MIN;
	volatile int32_t t114 = 7571893;

    t114 = ((x501&x502)==(x503-x504));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x505 = 39;
	volatile int8_t x506 = 0;

    t115 = ((x505&x506)==(x507-x508));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = 59756;
	uint64_t x510 = 9184707223LLU;
	uint16_t x511 = UINT16_MAX;
	volatile int32_t t116 = -1616;

    t116 = ((x509&x510)==(x511-x512));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x514 = -12170;
	static uint32_t x515 = 1U;
	uint8_t x516 = 4U;
	int32_t t117 = 3;

    t117 = ((x513&x514)==(x515-x516));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x517 = -1;
	static int8_t x518 = 12;
	int64_t x519 = INT64_MAX;
	uint64_t x520 = UINT64_MAX;
	int32_t t118 = -293936;

    t118 = ((x517&x518)==(x519-x520));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x521 = 2;
	static int16_t x522 = INT16_MIN;
	uint16_t x523 = 6379U;
	uint32_t x524 = 20U;
	int32_t t119 = 0;

    t119 = ((x521&x522)==(x523-x524));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x527 = -1;
	uint16_t x528 = 13342U;
	int32_t t120 = -5564416;

    t120 = ((x525&x526)==(x527-x528));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x529 = INT64_MIN;
	volatile int64_t x530 = INT64_MAX;
	static int64_t x531 = -30LL;
	volatile int8_t x532 = INT8_MAX;
	volatile int32_t t121 = -150965;

    t121 = ((x529&x530)==(x531-x532));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x538 = INT8_MIN;
	volatile int8_t x539 = 0;
	int16_t x540 = 1;

    t122 = ((x537&x538)==(x539-x540));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x541 = 12;
	static volatile uint16_t x542 = 110U;
	uint32_t x543 = 248U;
	uint16_t x544 = 5561U;

    t123 = ((x541&x542)==(x543-x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x546 = UINT8_MAX;
	int64_t x547 = 9648910152LL;
	int16_t x548 = INT16_MAX;
	volatile int32_t t124 = 101453;

    t124 = ((x545&x546)==(x547-x548));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = 53778LLU;
	uint8_t x555 = 0U;
	static volatile int16_t x556 = INT16_MIN;

    t125 = ((x553&x554)==(x555-x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x558 = -1LL;
	volatile uint32_t x559 = UINT32_MAX;
	int16_t x560 = 24;

    t126 = ((x557&x558)==(x559-x560));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x565 = 5LLU;
	uint64_t x567 = 110918LLU;
	static int16_t x568 = INT16_MAX;

    t127 = ((x565&x566)==(x567-x568));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x569 = UINT8_MAX;
	int8_t x570 = -42;
	int8_t x571 = INT8_MAX;

    t128 = ((x569&x570)==(x571-x572));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x573 = UINT8_MAX;
	volatile int16_t x575 = INT16_MAX;
	volatile int32_t x576 = INT32_MAX;
	static int32_t t129 = -43924031;

    t129 = ((x573&x574)==(x575-x576));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x581 = INT16_MIN;
	uint16_t x582 = UINT16_MAX;
	static volatile int32_t x584 = INT32_MAX;
	volatile int32_t t130 = -18501;

    t130 = ((x581&x582)==(x583-x584));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x585 = -1;
	uint32_t x586 = 76U;
	static int64_t x587 = 1041771345567061507LL;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t131 = 0;

    t131 = ((x585&x586)==(x587-x588));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x593 = INT16_MAX;
	static int16_t x594 = INT16_MIN;
	int64_t x595 = INT64_MAX;
	static int32_t t132 = 929851;

    t132 = ((x593&x594)==(x595-x596));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x597 = 14937417616LLU;
	int16_t x598 = INT16_MIN;
	uint16_t x599 = UINT16_MAX;
	uint16_t x600 = 1U;
	volatile int32_t t133 = 4796;

    t133 = ((x597&x598)==(x599-x600));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	uint64_t x604 = UINT64_MAX;
	volatile int32_t t134 = -6;

    t134 = ((x601&x602)==(x603-x604));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x606 = 8529017905011702370LLU;
	uint16_t x608 = UINT16_MAX;
	static volatile int32_t t135 = 106929800;

    t135 = ((x605&x606)==(x607-x608));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x609 = INT32_MAX;
	int16_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	static int32_t t136 = -1;

    t136 = ((x609&x610)==(x611-x612));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x613 = -12874;
	int8_t x614 = 1;
	static volatile int64_t x616 = -1LL;
	volatile int32_t t137 = 3883070;

    t137 = ((x613&x614)==(x615-x616));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x617 = UINT64_MAX;
	volatile uint64_t x620 = UINT64_MAX;

    t138 = ((x617&x618)==(x619-x620));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x621 = 10996;
	int64_t x622 = -1LL;
	volatile int16_t x623 = -11850;
	int16_t x624 = INT16_MAX;

    t139 = ((x621&x622)==(x623-x624));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x627 = UINT32_MAX;
	static uint8_t x628 = UINT8_MAX;

    t140 = ((x625&x626)==(x627-x628));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x629 = -88922;
	int32_t x630 = 13484273;
	int16_t x632 = -15728;
	volatile int32_t t141 = 30;

    t141 = ((x629&x630)==(x631-x632));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x633 = INT64_MIN;
	uint32_t x634 = UINT32_MAX;
	int16_t x635 = INT16_MIN;
	volatile uint64_t x636 = 28697468LLU;
	static volatile int32_t t142 = -3585153;

    t142 = ((x633&x634)==(x635-x636));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x637 = -1LL;
	int32_t x638 = -831;
	static int8_t x639 = INT8_MAX;
	volatile int32_t t143 = -8582847;

    t143 = ((x637&x638)==(x639-x640));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x642 = 14;
	int8_t x643 = 55;
	int64_t x644 = INT64_MAX;
	int32_t t144 = 2039;

    t144 = ((x641&x642)==(x643-x644));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x645 = UINT16_MAX;
	uint32_t x646 = 6037232U;
	uint64_t x647 = UINT64_MAX;
	volatile int32_t x648 = INT32_MIN;
	static int32_t t145 = -123481;

    t145 = ((x645&x646)==(x647-x648));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x649 = 79719LLU;
	int8_t x651 = 1;
	uint8_t x652 = 45U;
	volatile int32_t t146 = 0;

    t146 = ((x649&x650)==(x651-x652));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x653 = 850U;
	static int16_t x654 = 3754;
	static volatile uint32_t x655 = 131618982U;
	int32_t x656 = INT32_MIN;
	volatile int32_t t147 = -900;

    t147 = ((x653&x654)==(x655-x656));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x657 = UINT8_MAX;
	int16_t x658 = -3;
	volatile uint32_t x660 = 8006277U;
	volatile int32_t t148 = -28063;

    t148 = ((x657&x658)==(x659-x660));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x661 = UINT32_MAX;
	static int64_t x662 = 5021LL;
	static int8_t x663 = -1;

    t149 = ((x661&x662)==(x663-x664));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = INT16_MAX;
	int8_t x666 = -1;
	volatile uint64_t x667 = UINT64_MAX;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t150 = 247851947;

    t150 = ((x665&x666)==(x667-x668));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x669 = UINT16_MAX;
	static int64_t x671 = INT64_MIN;
	volatile int16_t x672 = -1;

    t151 = ((x669&x670)==(x671-x672));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x673 = -1LL;
	int32_t x674 = INT32_MIN;
	int8_t x675 = -13;

    t152 = ((x673&x674)==(x675-x676));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x678 = 2U;
	uint8_t x679 = UINT8_MAX;
	int32_t x680 = INT32_MAX;
	int32_t t153 = 1491266;

    t153 = ((x677&x678)==(x679-x680));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x681 = 606U;
	int8_t x682 = 0;
	static uint8_t x684 = UINT8_MAX;
	int32_t t154 = -998;

    t154 = ((x681&x682)==(x683-x684));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x685 = INT32_MAX;
	static int64_t x686 = -1LL;
	uint64_t x687 = UINT64_MAX;
	static volatile int8_t x688 = -1;

    t155 = ((x685&x686)==(x687-x688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x689 = 36580168616626LLU;
	uint32_t x690 = 6203616U;
	int8_t x691 = -9;
	int64_t x692 = 1LL;
	volatile int32_t t156 = -1;

    t156 = ((x689&x690)==(x691-x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = INT32_MIN;
	volatile uint32_t x694 = 2237844U;
	int64_t x696 = -1LL;
	int32_t t157 = -1;

    t157 = ((x693&x694)==(x695-x696));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x697 = 1675606U;
	volatile int8_t x698 = INT8_MIN;
	uint8_t x700 = UINT8_MAX;

    t158 = ((x697&x698)==(x699-x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = -54;
	uint8_t x702 = 68U;
	int8_t x704 = -6;
	volatile int32_t t159 = -32;

    t159 = ((x701&x702)==(x703-x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x705 = -5798;
	int64_t x706 = INT64_MIN;
	volatile uint16_t x708 = 4506U;
	int32_t t160 = -4083;

    t160 = ((x705&x706)==(x707-x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 278745043U;
	int32_t x710 = INT32_MIN;
	int16_t x711 = -1;
	uint64_t x712 = 1LLU;
	int32_t t161 = 4;

    t161 = ((x709&x710)==(x711-x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x713 = INT8_MIN;
	uint32_t x714 = 16754U;
	int32_t x715 = -173203132;
	volatile int8_t x716 = INT8_MAX;
	int32_t t162 = 5481;

    t162 = ((x713&x714)==(x715-x716));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x717 = 551U;
	int8_t x718 = -2;
	volatile int8_t x719 = -21;
	int32_t x720 = 158;
	int32_t t163 = -169151;

    t163 = ((x717&x718)==(x719-x720));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x722 = INT32_MAX;
	uint32_t x723 = 280U;
	volatile int32_t t164 = -135973814;

    t164 = ((x721&x722)==(x723-x724));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x725 = 0;
	int64_t x726 = -76129899575698514LL;
	uint16_t x727 = 2U;
	int64_t x728 = -3353079LL;

    t165 = ((x725&x726)==(x727-x728));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x731 = INT16_MIN;
	volatile int32_t t166 = 693923;

    t166 = ((x729&x730)==(x731-x732));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x733 = -1LL;
	static uint64_t x734 = 4144167277613598LLU;
	uint64_t x735 = 58LLU;
	volatile int32_t x736 = INT32_MIN;
	static int32_t t167 = -2494678;

    t167 = ((x733&x734)==(x735-x736));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x738 = INT64_MAX;
	int8_t x740 = 0;
	int32_t t168 = -40;

    t168 = ((x737&x738)==(x739-x740));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x741 = 391LLU;
	static volatile uint16_t x742 = UINT16_MAX;
	static int8_t x743 = INT8_MIN;
	static int32_t t169 = 12471;

    t169 = ((x741&x742)==(x743-x744));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = -185529526416383LL;
	volatile int16_t x747 = -1;
	int16_t x748 = -1;
	volatile int32_t t170 = 9;

    t170 = ((x745&x746)==(x747-x748));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x749 = INT64_MAX;
	uint8_t x751 = 49U;

    t171 = ((x749&x750)==(x751-x752));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x753 = -1;
	int16_t x754 = INT16_MIN;
	static uint8_t x755 = 59U;
	int16_t x756 = INT16_MIN;
	volatile int32_t t172 = -10;

    t172 = ((x753&x754)==(x755-x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x758 = 4446LL;
	volatile int16_t x759 = -1;
	int16_t x760 = -1;
	int32_t t173 = -57;

    t173 = ((x757&x758)==(x759-x760));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x763 = 2;
	volatile int8_t x764 = 2;
	volatile int32_t t174 = 18642;

    t174 = ((x761&x762)==(x763-x764));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x765 = 2U;
	uint32_t x766 = 12U;
	volatile int32_t t175 = -126295;

    t175 = ((x765&x766)==(x767-x768));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x770 = INT8_MAX;
	int16_t x771 = INT16_MIN;
	static uint16_t x772 = UINT16_MAX;

    t176 = ((x769&x770)==(x771-x772));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x773 = 1U;
	static uint8_t x774 = 13U;
	static int32_t x775 = INT32_MIN;
	int64_t x776 = INT64_MIN;

    t177 = ((x773&x774)==(x775-x776));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x777 = 291U;
	static uint32_t x778 = UINT32_MAX;
	static volatile int16_t x779 = INT16_MIN;
	int8_t x780 = INT8_MIN;
	volatile int32_t t178 = -243341;

    t178 = ((x777&x778)==(x779-x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x781 = UINT64_MAX;
	int8_t x782 = INT8_MIN;
	static uint32_t x783 = 7U;
	volatile int16_t x784 = INT16_MAX;
	volatile int32_t t179 = 830;

    t179 = ((x781&x782)==(x783-x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x785 = 72979774;
	volatile int32_t x786 = INT32_MIN;
	int16_t x787 = -1;
	static int32_t x788 = -3;
	volatile int32_t t180 = -210870521;

    t180 = ((x785&x786)==(x787-x788));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x789 = UINT32_MAX;
	uint64_t x790 = UINT64_MAX;
	uint64_t x791 = 3826576412LLU;
	uint64_t x792 = UINT64_MAX;

    t181 = ((x789&x790)==(x791-x792));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x793 = -189;
	int16_t x795 = INT16_MAX;
	int32_t x796 = 434260;

    t182 = ((x793&x794)==(x795-x796));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x805 = 1U;
	int16_t x806 = -1903;
	volatile int16_t x807 = INT16_MAX;
	int64_t x808 = 512858LL;
	int32_t t183 = -11;

    t183 = ((x805&x806)==(x807-x808));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x809 = 33U;
	uint16_t x810 = UINT16_MAX;
	volatile uint64_t x812 = UINT64_MAX;
	volatile int32_t t184 = -76761;

    t184 = ((x809&x810)==(x811-x812));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x813 = 1028129U;
	static int64_t x814 = -1LL;
	static int8_t x815 = INT8_MIN;
	volatile int8_t x816 = INT8_MAX;

    t185 = ((x813&x814)==(x815-x816));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x818 = INT64_MIN;
	static int8_t x819 = INT8_MIN;
	uint64_t x820 = 534LLU;

    t186 = ((x817&x818)==(x819-x820));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x822 = UINT32_MAX;
	volatile int8_t x823 = -1;
	uint32_t x824 = 522319215U;
	static int32_t t187 = -1;

    t187 = ((x821&x822)==(x823-x824));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x825 = 3097;
	uint32_t x827 = UINT32_MAX;
	int32_t x828 = INT32_MIN;
	int32_t t188 = 2;

    t188 = ((x825&x826)==(x827-x828));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x829 = INT16_MIN;
	int32_t x830 = INT32_MAX;
	volatile int64_t x831 = -68651555854635LL;
	int32_t x832 = 30;
	int32_t t189 = 9892204;

    t189 = ((x829&x830)==(x831-x832));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x833 = INT32_MIN;
	int32_t x834 = -1;
	int32_t x835 = 416406;
	static volatile int8_t x836 = -1;

    t190 = ((x833&x834)==(x835-x836));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x837 = 374163016U;
	static uint64_t x838 = 1333LLU;
	int32_t x840 = -1;
	int32_t t191 = -8914828;

    t191 = ((x837&x838)==(x839-x840));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x842 = 3U;
	int8_t x844 = INT8_MIN;

    t192 = ((x841&x842)==(x843-x844));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x846 = 311312225;
	static uint32_t x847 = UINT32_MAX;
	static int32_t x848 = 195;
	int32_t t193 = -44877;

    t193 = ((x845&x846)==(x847-x848));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x849 = 84U;
	static uint64_t x850 = UINT64_MAX;
	int32_t x851 = -1;
	int64_t x852 = INT64_MAX;
	volatile int32_t t194 = 259;

    t194 = ((x849&x850)==(x851-x852));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x854 = 123LLU;
	uint64_t x855 = 48969823762LLU;
	uint8_t x856 = UINT8_MAX;

    t195 = ((x853&x854)==(x855-x856));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x863 = 3;
	int32_t x864 = -1;

    t196 = ((x861&x862)==(x863-x864));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x865 = INT64_MIN;
	int8_t x866 = 33;
	int16_t x867 = -1;
	static int32_t x868 = -270626;
	int32_t t197 = -75;

    t197 = ((x865&x866)==(x867-x868));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x869 = -4912;
	static int8_t x870 = INT8_MIN;
	volatile int8_t x871 = INT8_MAX;
	int32_t x872 = -186;

    t198 = ((x869&x870)==(x871-x872));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x873 = 62068960U;
	uint32_t x874 = 1024U;
	int8_t x875 = INT8_MIN;
	volatile int64_t x876 = 1075LL;
	volatile int32_t t199 = 1069442768;

    t199 = ((x873&x874)==(x875-x876));

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

