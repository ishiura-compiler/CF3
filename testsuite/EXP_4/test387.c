
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

uint16_t x1 = UINT16_MAX;
uint16_t x10 = 14U;
static uint8_t x18 = 33U;
int64_t x26 = INT64_MAX;
int16_t x28 = -3;
static int32_t t6 = -114665;
int32_t x29 = -1;
static volatile int32_t t7 = 3301536;
int16_t x33 = INT16_MIN;
int8_t x36 = 1;
int32_t t8 = -618;
uint32_t x37 = UINT32_MAX;
uint64_t x44 = 98222326565341LLU;
volatile uint8_t x46 = 0U;
volatile int64_t x50 = -1LL;
static int64_t x51 = INT64_MIN;
int32_t x58 = -1;
int16_t x62 = -1;
static int8_t x63 = -1;
volatile int8_t x65 = INT8_MIN;
uint8_t x72 = 2U;
volatile int32_t t18 = 31;
int16_t x82 = INT16_MAX;
uint64_t x92 = UINT64_MAX;
static int16_t x95 = INT16_MIN;
volatile int32_t t22 = 0;
static int64_t x97 = INT64_MIN;
int16_t x99 = -1;
int8_t x100 = 24;
volatile uint32_t x101 = 7U;
int16_t x102 = INT16_MIN;
int32_t x115 = -1028514;
int32_t t27 = -392;
int64_t x126 = -1LL;
uint16_t x131 = UINT16_MAX;
volatile int32_t x132 = -1;
volatile int32_t x133 = INT32_MIN;
volatile int8_t x144 = -1;
uint32_t x148 = UINT32_MAX;
volatile int64_t x150 = 10821948996798801LL;
volatile int32_t t34 = -4415;
int32_t x155 = INT32_MAX;
uint32_t x169 = UINT32_MAX;
int32_t t40 = -19151970;
volatile int32_t x183 = INT32_MIN;
static volatile int32_t t42 = -4669833;
static volatile uint32_t x187 = 19829U;
uint16_t x188 = 13163U;
int32_t t43 = 2324;
int64_t x196 = -1LL;
volatile int64_t x199 = INT64_MAX;
int32_t t46 = -21324486;
volatile int32_t x210 = INT32_MAX;
int16_t x218 = INT16_MIN;
int16_t x221 = -6407;
static int32_t x223 = -736153268;
static int8_t x227 = -24;
int64_t x233 = INT64_MAX;
int16_t x236 = INT16_MIN;
uint64_t x241 = 5930229184426314LLU;
volatile int32_t t56 = -383464;
uint8_t x249 = 38U;
int64_t x250 = -1LL;
int32_t x256 = INT32_MIN;
int16_t x258 = -3923;
int8_t x279 = INT8_MIN;
static int8_t x280 = -15;
uint8_t x281 = 63U;
uint16_t x283 = 13517U;
uint64_t x289 = 81925428LLU;
int32_t t69 = -8549;
uint32_t x302 = UINT32_MAX;
int16_t x304 = -1;
int32_t x315 = INT32_MIN;
int64_t x319 = INT64_MIN;
static volatile int32_t t74 = -27554;
int32_t x325 = -1;
int8_t x328 = 15;
static volatile int32_t t75 = 629997571;
int32_t x333 = INT32_MIN;
static volatile uint8_t x345 = 20U;
int64_t x346 = 346LL;
int64_t x354 = 57151611530270181LL;
static volatile int32_t t81 = 11742377;
static int32_t t83 = -690;
int64_t x369 = INT64_MIN;
volatile int64_t x371 = INT64_MAX;
int8_t x372 = INT8_MAX;
static int32_t x379 = INT32_MIN;
static int8_t x382 = INT8_MIN;
static volatile int32_t t88 = 8160;
int64_t x392 = -113269LL;
static int32_t t90 = 91149648;
int8_t x408 = INT8_MIN;
uint32_t x417 = 1674557U;
int32_t t96 = -268019042;
static int32_t x421 = -1;
uint8_t x424 = 21U;
static int16_t x425 = 10677;
int16_t x434 = INT16_MIN;
int16_t x437 = -1;
static int16_t x445 = -96;
volatile int16_t x453 = -1;
static int32_t x471 = 6595044;
uint64_t x479 = 34856853LLU;
uint16_t x483 = 119U;
uint8_t x484 = 1U;
static int32_t t109 = -3956;
uint8_t x497 = UINT8_MAX;
volatile int64_t x499 = INT64_MIN;
volatile int64_t x503 = -1306528668093394191LL;
volatile int32_t t111 = 16486518;
uint8_t x508 = 1U;
int32_t t112 = 983975;
int8_t x513 = INT8_MIN;
volatile int16_t x519 = -113;
uint64_t x520 = 9951180222806LLU;
int8_t x525 = INT8_MIN;
int32_t x527 = INT32_MAX;
volatile uint16_t x539 = UINT16_MAX;
volatile int32_t t119 = -32114434;
uint64_t x547 = 27065425219002LLU;
int32_t t121 = -1;
static volatile uint64_t x550 = 6985769049964LLU;
static int8_t x560 = -19;
volatile int16_t x564 = -4069;
int8_t x576 = INT8_MIN;
int16_t x578 = 1;
static uint8_t x580 = 6U;
volatile int32_t t129 = 18159295;
uint8_t x595 = 32U;
int32_t t133 = -33442;
uint8_t x601 = 33U;
uint32_t x603 = 75562149U;
int32_t x605 = -1;
volatile int32_t t135 = -83;
int64_t x609 = INT64_MIN;
int64_t x613 = -1LL;
static uint8_t x617 = 2U;
volatile int32_t t138 = -483250480;
int16_t x622 = INT16_MAX;
static int32_t t139 = 269030;
int8_t x627 = 17;
volatile uint32_t x629 = 341103270U;
static volatile int8_t x634 = -4;
static volatile int32_t t143 = 1;
static int16_t x646 = INT16_MIN;
volatile int32_t t144 = 116061;
volatile uint16_t x649 = 6U;
int64_t x650 = 851374477354764LL;
int32_t x651 = INT32_MAX;
static int32_t t145 = 20229205;
int32_t x656 = -1;
int32_t t147 = 2;
int8_t x666 = INT8_MAX;
uint32_t x667 = UINT32_MAX;
int32_t t149 = 30;
static uint16_t x676 = 31U;
volatile int32_t t150 = -129677;
uint32_t x678 = UINT32_MAX;
int8_t x679 = INT8_MIN;
int32_t t152 = -408;
uint32_t x686 = 2131207103U;
int64_t x689 = INT64_MIN;
static volatile int32_t x695 = INT32_MAX;
volatile uint16_t x702 = UINT16_MAX;
static int32_t x709 = -1;
uint32_t x728 = 0U;
int32_t t161 = -585149;
int32_t t162 = -4163099;
static int32_t x741 = -1;
int16_t x748 = -1;
volatile int32_t t166 = 2185556;
int32_t x749 = -218063;
int8_t x751 = INT8_MAX;
uint64_t x752 = UINT64_MAX;
int16_t x761 = INT16_MIN;
volatile int32_t t169 = 0;
static uint8_t x768 = UINT8_MAX;
int32_t t170 = -1619601;
volatile uint64_t x772 = UINT64_MAX;
static uint16_t x777 = UINT16_MAX;
uint16_t x781 = 625U;
static volatile int8_t x788 = 3;
int32_t x792 = 45011687;
static int64_t x800 = -1LL;
uint16_t x802 = UINT16_MAX;
static uint8_t x811 = 1U;
int32_t t181 = 2329;
int8_t x826 = INT8_MAX;
volatile uint32_t x835 = UINT32_MAX;
uint64_t x837 = UINT64_MAX;
int64_t x839 = -1LL;
volatile int8_t x840 = INT8_MAX;
uint8_t x847 = UINT8_MAX;
int16_t x849 = 651;
uint8_t x853 = 110U;
int32_t t189 = 954788985;
int64_t x878 = -15120LL;
volatile int32_t x893 = -1;
volatile int32_t t196 = 1589;
int64_t x903 = 1LL;
int32_t t198 = -3;
int8_t x909 = INT8_MIN;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = -205LL;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -9303;

    t0 = (x1>(x2^(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 52927159;

    t1 = (x5>(x6^(x7-x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 173;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -83;
	volatile int32_t t2 = 0;

    t2 = (x9>(x10^(x11-x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -62;
	int32_t t3 = 3370365;

    t3 = (x13>(x14^(x15-x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 3939U;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 0;

    t4 = (x17>(x18^(x19-x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 8593130049540982293LLU;
	int64_t x22 = -1LL;
	int8_t x23 = INT8_MIN;
	static int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -1640;

    t5 = (x21>(x22^(x23-x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MAX;
	int8_t x27 = INT8_MIN;

    t6 = (x25>(x26^(x27-x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x30 = 15537;
	volatile uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = -1LL;

    t7 = (x29>(x30^(x31-x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	int8_t x35 = 0;

    t8 = (x33>(x34^(x35-x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x38 = INT16_MAX;
	static int64_t x39 = -9LL;
	volatile int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = -11685;

    t9 = (x37>(x38^(x39-x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 1419556U;
	uint8_t x42 = UINT8_MAX;
	static int8_t x43 = INT8_MIN;
	int32_t t10 = -322;

    t10 = (x41>(x42^(x43-x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = -1;
	int32_t t11 = -7208;

    t11 = (x45>(x46^(x47-x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int32_t x52 = -1;
	int32_t t12 = -978604187;

    t12 = (x49>(x50^(x51-x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MIN;
	static int16_t x54 = -1;
	int64_t x55 = -23394LL;
	uint16_t x56 = 127U;
	int32_t t13 = 8;

    t13 = (x53>(x54^(x55-x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 140;
	volatile uint64_t x59 = 16924600LLU;
	static volatile int32_t x60 = INT32_MAX;
	int32_t t14 = -388;

    t14 = (x57>(x58^(x59-x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 2221U;
	static int64_t x64 = 11512LL;
	static int32_t t15 = 242958430;

    t15 = (x61>(x62^(x63-x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x66 = 693109U;
	int64_t x67 = -1LL;
	volatile int64_t x68 = -1LL;
	static int32_t t16 = -59590;

    t16 = (x65>(x66^(x67-x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x70 = 1;
	volatile uint32_t x71 = 61427525U;
	volatile int32_t t17 = -502;

    t17 = (x69>(x70^(x71-x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = UINT32_MAX;
	int32_t x74 = -89956646;
	static int32_t x75 = 118315;
	int16_t x76 = 2;

    t18 = (x73>(x74^(x75-x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 1;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = 6;

    t19 = (x77>(x78^(x79-x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 856083480U;
	volatile int32_t t20 = -125;

    t20 = (x81>(x82^(x83-x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MIN;
	static int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	volatile int32_t t21 = -102495224;

    t21 = (x89>(x90^(x91-x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x93 = 51382485LL;
	static int64_t x94 = -1LL;
	int32_t x96 = -116782;

    t22 = (x93>(x94^(x95-x96)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x98 = INT8_MAX;
	volatile int32_t t23 = 659041;

    t23 = (x97>(x98^(x99-x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x103 = -1LL;
	int32_t x104 = -106534;
	static volatile int32_t t24 = -16535715;

    t24 = (x101>(x102^(x103-x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 39U;
	static volatile int64_t x110 = -3856LL;
	int64_t x111 = -874740457400536632LL;
	static volatile uint32_t x112 = 7032167U;
	volatile int32_t t25 = -2886;

    t25 = (x109>(x110^(x111-x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 116769U;
	int16_t x114 = -1;
	volatile int32_t x116 = -87;
	volatile int32_t t26 = -17;

    t26 = (x113>(x114^(x115-x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MAX;
	int8_t x118 = -1;
	volatile int64_t x119 = -255512640687358LL;
	int32_t x120 = INT32_MIN;

    t27 = (x117>(x118^(x119-x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x125 = 62U;
	volatile int64_t x127 = INT64_MIN;
	volatile int32_t x128 = -208;
	volatile int32_t t28 = -222329;

    t28 = (x125>(x126^(x127-x128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = -1;
	uint8_t x130 = 40U;
	int32_t t29 = -373242;

    t29 = (x129>(x130^(x131-x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x134 = 12U;
	static uint8_t x135 = UINT8_MAX;
	static int8_t x136 = 0;
	int32_t t30 = 571034288;

    t30 = (x133>(x134^(x135-x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = 18;
	int8_t x138 = -8;
	int64_t x139 = -14047LL;
	int32_t x140 = INT32_MAX;
	int32_t t31 = -6;

    t31 = (x137>(x138^(x139-x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = UINT8_MAX;
	int64_t x142 = 30106LL;
	int16_t x143 = INT16_MIN;
	volatile int32_t t32 = -25;

    t32 = (x141>(x142^(x143-x144)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = 3;
	int16_t x146 = -1;
	int8_t x147 = 1;
	static int32_t t33 = 6;

    t33 = (x145>(x146^(x147-x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = 6107LL;
	volatile int32_t x151 = -6132038;
	uint16_t x152 = UINT16_MAX;

    t34 = (x149>(x150^(x151-x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x153 = 26U;
	int16_t x154 = -1;
	int16_t x156 = 11;
	int32_t t35 = 172439196;

    t35 = (x153>(x154^(x155-x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x157 = 45743U;
	uint16_t x158 = 6528U;
	static int64_t x159 = -148LL;
	static uint8_t x160 = 68U;
	static volatile int32_t t36 = -169;

    t36 = (x157>(x158^(x159-x160)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = INT8_MIN;
	uint64_t x163 = 312997394463LLU;
	static uint64_t x164 = 10LLU;
	int32_t t37 = 649263369;

    t37 = (x161>(x162^(x163-x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = 1277302LL;
	volatile int8_t x166 = 7;
	int64_t x167 = 71035LL;
	uint8_t x168 = 41U;
	static int32_t t38 = -68;

    t38 = (x165>(x166^(x167-x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x170 = 1869;
	volatile int64_t x171 = -1LL;
	int8_t x172 = INT8_MIN;
	volatile int32_t t39 = 438524910;

    t39 = (x169>(x170^(x171-x172)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -7;
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;

    t40 = (x173>(x174^(x175-x176)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = 21LL;
	static int16_t x178 = 8129;
	volatile uint64_t x179 = 1644107045143333LLU;
	int32_t x180 = INT32_MIN;
	volatile int32_t t41 = 45;

    t41 = (x177>(x178^(x179-x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = 3162LL;
	uint64_t x182 = UINT64_MAX;
	static int32_t x184 = INT32_MIN;

    t42 = (x181>(x182^(x183-x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = 7U;
	int16_t x186 = -1;

    t43 = (x185>(x186^(x187-x188)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = 871U;
	int8_t x190 = -1;
	int8_t x191 = 13;
	int16_t x192 = INT16_MAX;
	static int32_t t44 = -38775429;

    t44 = (x189>(x190^(x191-x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	volatile int32_t t45 = 56334;

    t45 = (x193>(x194^(x195-x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x197 = UINT64_MAX;
	int32_t x198 = -1;
	uint32_t x200 = UINT32_MAX;

    t46 = (x197>(x198^(x199-x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t47 = -3;

    t47 = (x201>(x202^(x203-x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = 379;
	static uint16_t x207 = 69U;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t48 = 39573;

    t48 = (x205>(x206^(x207-x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x209 = -1;
	static int32_t x211 = -1;
	int64_t x212 = 1LL;
	int32_t t49 = -930;

    t49 = (x209>(x210^(x211-x212)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MIN;
	uint8_t x214 = 15U;
	uint32_t x215 = 6719747U;
	int16_t x216 = 26;
	volatile int32_t t50 = 6670502;

    t50 = (x213>(x214^(x215-x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x217 = 25U;
	int32_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	int32_t t51 = 579975;

    t51 = (x217>(x218^(x219-x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = 966;
	int32_t x224 = INT32_MIN;
	volatile int32_t t52 = 6085;

    t52 = (x221>(x222^(x223-x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = INT32_MAX;
	static int32_t x226 = INT32_MIN;
	volatile uint64_t x228 = 4318875LLU;
	volatile int32_t t53 = 32188;

    t53 = (x225>(x226^(x227-x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x234 = 2U;
	static uint32_t x235 = UINT32_MAX;
	static int32_t t54 = -27;

    t54 = (x233>(x234^(x235-x236)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x237 = -1;
	static uint64_t x238 = 8900612LLU;
	uint8_t x239 = 25U;
	static volatile uint16_t x240 = 0U;
	int32_t t55 = 0;

    t55 = (x237>(x238^(x239-x240)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x242 = -1;
	volatile uint64_t x243 = UINT64_MAX;
	static volatile int32_t x244 = -13774195;

    t56 = (x241>(x242^(x243-x244)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x245 = 896794LL;
	uint16_t x246 = 6U;
	static int8_t x247 = -5;
	uint8_t x248 = 2U;
	int32_t t57 = 12313;

    t57 = (x245>(x246^(x247-x248)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x251 = INT16_MIN;
	uint32_t x252 = 0U;
	int32_t t58 = -2;

    t58 = (x249>(x250^(x251-x252)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = INT64_MIN;
	volatile uint8_t x254 = 28U;
	int64_t x255 = INT64_MIN;
	volatile int32_t t59 = 1;

    t59 = (x253>(x254^(x255-x256)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x257 = 28LLU;
	static uint32_t x259 = 63U;
	int8_t x260 = 1;
	int32_t t60 = -2821692;

    t60 = (x257>(x258^(x259-x260)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x265 = 38U;
	volatile int16_t x266 = -1;
	int16_t x267 = 29;
	uint16_t x268 = 31U;
	volatile int32_t t61 = 0;

    t61 = (x265>(x266^(x267-x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = INT64_MAX;
	uint16_t x270 = 2274U;
	int16_t x271 = -12883;
	static int64_t x272 = INT64_MIN;
	int32_t t62 = 1381804;

    t62 = (x269>(x270^(x271-x272)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = INT16_MAX;
	uint64_t x274 = 3098352039131405339LLU;
	volatile int16_t x275 = -1;
	volatile uint32_t x276 = UINT32_MAX;
	volatile int32_t t63 = 4775959;

    t63 = (x273>(x274^(x275-x276)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x277 = INT64_MIN;
	static int32_t x278 = 1;
	static int32_t t64 = 454230;

    t64 = (x277>(x278^(x279-x280)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x282 = 5765U;
	int16_t x284 = -1;
	int32_t t65 = 18;

    t65 = (x281>(x282^(x283-x284)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x286 = -63;
	uint16_t x287 = 61U;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t66 = 6091;

    t66 = (x285>(x286^(x287-x288)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x290 = INT32_MAX;
	static int16_t x291 = -264;
	static uint8_t x292 = 1U;
	volatile int32_t t67 = -4263;

    t67 = (x289>(x290^(x291-x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = 44164524810LL;
	int32_t x294 = INT32_MIN;
	uint32_t x295 = UINT32_MAX;
	static volatile uint32_t x296 = UINT32_MAX;
	int32_t t68 = 665738890;

    t68 = (x293>(x294^(x295-x296)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x297 = 1U;
	static volatile int32_t x298 = 14508551;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = 251628LL;

    t69 = (x297>(x298^(x299-x300)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x301 = -1LL;
	uint8_t x303 = 0U;
	int32_t t70 = 298513694;

    t70 = (x301>(x302^(x303-x304)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x305 = -377971558675LL;
	uint32_t x306 = 191267666U;
	uint8_t x307 = 12U;
	static int16_t x308 = 95;
	int32_t t71 = -3338;

    t71 = (x305>(x306^(x307-x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = 222U;
	uint16_t x314 = 18571U;
	int64_t x316 = -1LL;
	volatile int32_t t72 = 12137652;

    t72 = (x313>(x314^(x315-x316)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = INT16_MIN;
	uint64_t x318 = 2103573014740497502LLU;
	int16_t x320 = INT16_MIN;
	volatile int32_t t73 = -366;

    t73 = (x317>(x318^(x319-x320)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x321 = INT16_MIN;
	static int16_t x322 = 60;
	int16_t x323 = 1;
	int8_t x324 = INT8_MAX;

    t74 = (x321>(x322^(x323-x324)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x326 = -1;
	static int8_t x327 = INT8_MIN;

    t75 = (x325>(x326^(x327-x328)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x334 = -1;
	uint16_t x335 = 3604U;
	static uint64_t x336 = 67714582728LLU;
	volatile int32_t t76 = -96875;

    t76 = (x333>(x334^(x335-x336)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x337 = 10944;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = -1;
	volatile int16_t x340 = INT16_MIN;
	int32_t t77 = 63993;

    t77 = (x337>(x338^(x339-x340)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = 1033150LLU;
	volatile int8_t x342 = 0;
	static int64_t x343 = INT64_MIN;
	int64_t x344 = -19324809880512789LL;
	int32_t t78 = 4;

    t78 = (x341>(x342^(x343-x344)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x347 = 731209114453LLU;
	uint16_t x348 = 31U;
	int32_t t79 = 126;

    t79 = (x345>(x346^(x347-x348)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = -10;
	int64_t x350 = -83182165057908990LL;
	int16_t x351 = 11949;
	volatile int8_t x352 = -9;
	int32_t t80 = 6;

    t80 = (x349>(x350^(x351-x352)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x355 = -1LL;
	int16_t x356 = 0;

    t81 = (x353>(x354^(x355-x356)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x357 = -3;
	static int64_t x358 = INT64_MAX;
	int8_t x359 = INT8_MIN;
	int8_t x360 = 61;
	int32_t t82 = -3152463;

    t82 = (x357>(x358^(x359-x360)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x361 = -1;
	static int64_t x362 = -1LL;
	volatile int16_t x363 = -1;
	static int32_t x364 = INT32_MIN;

    t83 = (x361>(x362^(x363-x364)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t84 = -813638;

    t84 = (x365>(x366^(x367-x368)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x370 = 7U;
	int32_t t85 = 10716;

    t85 = (x369>(x370^(x371-x372)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x373 = -1;
	int8_t x374 = INT8_MAX;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 1164LLU;
	volatile int32_t t86 = 1567033;

    t86 = (x373>(x374^(x375-x376)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = 16;
	int16_t x378 = 4261;
	int64_t x380 = 503639903348LL;
	static int32_t t87 = -145;

    t87 = (x377>(x378^(x379-x380)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x381 = UINT16_MAX;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;

    t88 = (x381>(x382^(x383-x384)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MAX;
	volatile int8_t x387 = -3;
	static int32_t x388 = INT32_MIN;
	int32_t t89 = 70248;

    t89 = (x385>(x386^(x387-x388)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x389 = 37827606654261063LLU;
	uint64_t x390 = 675302307695020137LLU;
	static int32_t x391 = -1;

    t90 = (x389>(x390^(x391-x392)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = -33;
	int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	volatile int8_t x396 = 35;
	volatile int32_t t91 = -1;

    t91 = (x393>(x394^(x395-x396)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x397 = 10;
	int16_t x398 = 33;
	volatile int32_t x399 = INT32_MAX;
	uint8_t x400 = 6U;
	int32_t t92 = 2416;

    t92 = (x397>(x398^(x399-x400)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MIN;
	int64_t x407 = -153947664737938LL;
	static int32_t t93 = -169;

    t93 = (x405>(x406^(x407-x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = INT8_MIN;
	uint16_t x410 = UINT16_MAX;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -2868025541273347766LL;
	int32_t t94 = 22;

    t94 = (x409>(x410^(x411-x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x413 = INT64_MAX;
	int64_t x414 = 0LL;
	int64_t x415 = -8536288225217447LL;
	int16_t x416 = INT16_MIN;
	volatile int32_t t95 = -53;

    t95 = (x413>(x414^(x415-x416)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x418 = 3;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = -1;

    t96 = (x417>(x418^(x419-x420)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x422 = -130023884;
	volatile int32_t x423 = -1;
	int32_t t97 = -2655521;

    t97 = (x421>(x422^(x423-x424)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x426 = INT16_MAX;
	int8_t x427 = INT8_MIN;
	static int16_t x428 = -9;
	int32_t t98 = -557137695;

    t98 = (x425>(x426^(x427-x428)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x433 = INT8_MAX;
	volatile int64_t x435 = 80880985LL;
	int16_t x436 = 89;
	int32_t t99 = -15;

    t99 = (x433>(x434^(x435-x436)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x438 = -962715984946280889LL;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = 15;
	static volatile int32_t t100 = -1124;

    t100 = (x437>(x438^(x439-x440)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x446 = 234936412032836LLU;
	uint32_t x447 = 258293U;
	volatile int64_t x448 = INT64_MAX;
	int32_t t101 = 1012;

    t101 = (x445>(x446^(x447-x448)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x449 = 1358455;
	int16_t x450 = INT16_MIN;
	static volatile int32_t x451 = INT32_MAX;
	uint64_t x452 = 1566LLU;
	static int32_t t102 = 33;

    t102 = (x449>(x450^(x451-x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x454 = 2410U;
	int32_t x455 = -1;
	static int64_t x456 = INT64_MIN;
	int32_t t103 = 495289737;

    t103 = (x453>(x454^(x455-x456)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x469 = 27U;
	int8_t x470 = INT8_MAX;
	uint16_t x472 = UINT16_MAX;
	int32_t t104 = -5;

    t104 = (x469>(x470^(x471-x472)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x473 = 516;
	static int8_t x474 = INT8_MIN;
	int32_t x475 = INT32_MIN;
	uint32_t x476 = 4U;
	volatile int32_t t105 = 102;

    t105 = (x473>(x474^(x475-x476)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x477 = -650LL;
	uint64_t x478 = UINT64_MAX;
	uint32_t x480 = UINT32_MAX;
	int32_t t106 = 105;

    t106 = (x477>(x478^(x479-x480)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x481 = -34217537569LL;
	static int64_t x482 = -1LL;
	static volatile int32_t t107 = -389;

    t107 = (x481>(x482^(x483-x484)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x485 = INT16_MIN;
	uint64_t x486 = 14253098698402765LLU;
	volatile int32_t x487 = INT32_MIN;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t108 = 121519643;

    t108 = (x485>(x486^(x487-x488)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x493 = INT16_MAX;
	int64_t x494 = -47190629775LL;
	volatile int32_t x495 = -1;
	uint16_t x496 = 102U;

    t109 = (x493>(x494^(x495-x496)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x498 = 96LL;
	int16_t x500 = 0;
	volatile int32_t t110 = 505229565;

    t110 = (x497>(x498^(x499-x500)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile int32_t x502 = -1;
	volatile int16_t x504 = -12335;

    t111 = (x501>(x502^(x503-x504)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = 588741601;
	int16_t x506 = INT16_MIN;
	int32_t x507 = -1;

    t112 = (x505>(x506^(x507-x508)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x509 = 0U;
	uint64_t x510 = 60573796625808LLU;
	static volatile uint64_t x511 = UINT64_MAX;
	int64_t x512 = -14753LL;
	int32_t t113 = 21909;

    t113 = (x509>(x510^(x511-x512)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x514 = -157138250561757LL;
	static int64_t x515 = 517LL;
	uint16_t x516 = 7U;
	volatile int32_t t114 = 33643;

    t114 = (x513>(x514^(x515-x516)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x517 = -159233;
	uint8_t x518 = 4U;
	int32_t t115 = -644;

    t115 = (x517>(x518^(x519-x520)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = 1;
	int8_t x522 = -6;
	uint32_t x523 = 16020U;
	static volatile uint64_t x524 = 478620614974598LLU;
	volatile int32_t t116 = 246;

    t116 = (x521>(x522^(x523-x524)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x526 = 8108;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t117 = 70;

    t117 = (x525>(x526^(x527-x528)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x529 = -30;
	int64_t x530 = -4863034301LL;
	int8_t x531 = 5;
	static int8_t x532 = INT8_MAX;
	volatile int32_t t118 = -160805;

    t118 = (x529>(x530^(x531-x532)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x537 = -78;
	uint32_t x538 = 4U;
	static uint8_t x540 = 2U;

    t119 = (x537>(x538^(x539-x540)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MIN;
	static uint64_t x543 = UINT64_MAX;
	int64_t x544 = -1LL;
	int32_t t120 = -1;

    t120 = (x541>(x542^(x543-x544)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x545 = INT8_MIN;
	int32_t x546 = INT32_MAX;
	int32_t x548 = INT32_MIN;

    t121 = (x545>(x546^(x547-x548)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x549 = INT64_MAX;
	volatile int32_t x551 = 9;
	int8_t x552 = 1;
	static volatile int32_t t122 = -26;

    t122 = (x549>(x550^(x551-x552)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x557 = 9U;
	uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MIN;
	volatile int32_t t123 = 984;

    t123 = (x557>(x558^(x559-x560)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x561 = 0U;
	volatile int16_t x562 = INT16_MIN;
	static volatile int64_t x563 = 1924241LL;
	int32_t t124 = -204259;

    t124 = (x561>(x562^(x563-x564)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = 13644U;
	volatile int64_t x566 = 200212393511107LL;
	volatile uint16_t x567 = 434U;
	static int32_t x568 = INT32_MAX;
	int32_t t125 = -4330917;

    t125 = (x565>(x566^(x567-x568)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x569 = 7781U;
	volatile int8_t x570 = INT8_MIN;
	static volatile uint16_t x571 = UINT16_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t126 = -63099;

    t126 = (x569>(x570^(x571-x572)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x573 = 2000797U;
	int64_t x574 = 11406077341LL;
	uint64_t x575 = 73287LLU;
	volatile int32_t t127 = 8940;

    t127 = (x573>(x574^(x575-x576)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = -5;
	volatile uint32_t x579 = 1935U;
	int32_t t128 = -49385715;

    t128 = (x577>(x578^(x579-x580)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x581 = 13;
	int64_t x582 = 2755894137776LL;
	static volatile int16_t x583 = -1;
	int8_t x584 = 1;

    t129 = (x581>(x582^(x583-x584)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x585 = INT8_MIN;
	int32_t x586 = -1;
	static volatile int32_t x587 = -1;
	volatile uint16_t x588 = UINT16_MAX;
	int32_t t130 = 18;

    t130 = (x585>(x586^(x587-x588)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x589 = INT8_MAX;
	volatile int32_t x590 = INT32_MAX;
	uint32_t x591 = 14222U;
	volatile int32_t x592 = -2627919;
	int32_t t131 = -768;

    t131 = (x589>(x590^(x591-x592)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x593 = INT32_MIN;
	uint16_t x594 = UINT16_MAX;
	int32_t x596 = INT32_MAX;
	static int32_t t132 = -77;

    t132 = (x593>(x594^(x595-x596)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x597 = 30492680152LL;
	uint8_t x598 = UINT8_MAX;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = 105;

    t133 = (x597>(x598^(x599-x600)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x602 = INT64_MIN;
	int32_t x604 = -1;
	int32_t t134 = 135038;

    t134 = (x601>(x602^(x603-x604)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x606 = 4194U;
	int16_t x607 = -893;
	static int64_t x608 = 451603643684LL;

    t135 = (x605>(x606^(x607-x608)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x610 = UINT8_MAX;
	int32_t x611 = -226822;
	int16_t x612 = INT16_MIN;
	volatile int32_t t136 = -59709612;

    t136 = (x609>(x610^(x611-x612)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x614 = INT8_MIN;
	static uint16_t x615 = 0U;
	uint32_t x616 = UINT32_MAX;
	static int32_t t137 = 306198132;

    t137 = (x613>(x614^(x615-x616)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x618 = INT16_MIN;
	int8_t x619 = -28;
	static uint8_t x620 = UINT8_MAX;

    t138 = (x617>(x618^(x619-x620)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x623 = 0;
	uint32_t x624 = UINT32_MAX;

    t139 = (x621>(x622^(x623-x624)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x625 = 59U;
	uint32_t x626 = 25456U;
	volatile int16_t x628 = 0;
	volatile int32_t t140 = 1109865;

    t140 = (x625>(x626^(x627-x628)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x630 = 3413U;
	int64_t x631 = -3054LL;
	uint64_t x632 = 4449810281803699LLU;
	volatile int32_t t141 = -2945;

    t141 = (x629>(x630^(x631-x632)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x633 = -1;
	uint64_t x635 = 120257937509942581LLU;
	static int32_t x636 = -1;
	volatile int32_t t142 = 20266396;

    t142 = (x633>(x634^(x635-x636)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x641 = 7U;
	int16_t x642 = -1786;
	int32_t x643 = -93;
	uint16_t x644 = UINT16_MAX;

    t143 = (x641>(x642^(x643-x644)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x645 = -1;
	volatile int8_t x647 = INT8_MIN;
	int32_t x648 = -1;

    t144 = (x645>(x646^(x647-x648)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x652 = INT32_MAX;

    t145 = (x649>(x650^(x651-x652)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x653 = 5U;
	int16_t x654 = INT16_MAX;
	static volatile uint32_t x655 = UINT32_MAX;
	int32_t t146 = -2;

    t146 = (x653>(x654^(x655-x656)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	int8_t x662 = INT8_MIN;
	uint64_t x663 = 23134036230319777LLU;
	volatile uint32_t x664 = 6487027U;

    t147 = (x661>(x662^(x663-x664)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x665 = -1;
	int16_t x668 = INT16_MIN;
	int32_t t148 = 2;

    t148 = (x665>(x666^(x667-x668)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x669 = INT64_MAX;
	volatile uint16_t x670 = 432U;
	int64_t x671 = -683294311258LL;
	int32_t x672 = -4050;

    t149 = (x669>(x670^(x671-x672)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x673 = 28;
	static uint16_t x674 = UINT16_MAX;
	int8_t x675 = INT8_MIN;

    t150 = (x673>(x674^(x675-x676)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x677 = -1;
	int64_t x680 = -377299LL;
	volatile int32_t t151 = -391734360;

    t151 = (x677>(x678^(x679-x680)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x681 = INT16_MAX;
	int16_t x682 = INT16_MAX;
	volatile uint8_t x683 = 1U;
	int16_t x684 = -1;

    t152 = (x681>(x682^(x683-x684)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x687 = -1;
	int8_t x688 = -1;
	int32_t t153 = 1913243;

    t153 = (x685>(x686^(x687-x688)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	int16_t x692 = INT16_MIN;
	volatile int32_t t154 = -1;

    t154 = (x689>(x690^(x691-x692)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x693 = 0U;
	static uint32_t x694 = 2378U;
	volatile uint8_t x696 = 1U;
	volatile int32_t t155 = 0;

    t155 = (x693>(x694^(x695-x696)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x701 = 521933;
	int32_t x703 = 791;
	uint32_t x704 = UINT32_MAX;
	static int32_t t156 = -832;

    t156 = (x701>(x702^(x703-x704)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int8_t x706 = -1;
	static uint64_t x707 = 1LLU;
	int32_t x708 = -1;
	volatile int32_t t157 = 0;

    t157 = (x705>(x706^(x707-x708)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x710 = 3U;
	volatile int64_t x711 = -1LL;
	int16_t x712 = -1;
	int32_t t158 = 42225;

    t158 = (x709>(x710^(x711-x712)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int8_t x714 = INT8_MAX;
	volatile int8_t x715 = INT8_MIN;
	int64_t x716 = INT64_MIN;
	static int32_t t159 = -7021;

    t159 = (x713>(x714^(x715-x716)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x717 = 29228U;
	uint16_t x718 = 11U;
	static int64_t x719 = -714062LL;
	volatile int32_t x720 = 1455913;
	static volatile int32_t t160 = 244879;

    t160 = (x717>(x718^(x719-x720)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x725 = INT64_MAX;
	int64_t x726 = -274758LL;
	int16_t x727 = -1;

    t161 = (x725>(x726^(x727-x728)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x729 = 71;
	int64_t x730 = -10735386LL;
	int64_t x731 = 245009678209098329LL;
	int8_t x732 = 0;

    t162 = (x729>(x730^(x731-x732)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x733 = -1;
	static int16_t x734 = -7;
	volatile int8_t x735 = -1;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t163 = 7;

    t163 = (x733>(x734^(x735-x736)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x737 = INT8_MAX;
	uint16_t x738 = 10214U;
	static volatile uint32_t x739 = 660600U;
	volatile int16_t x740 = -20;
	volatile int32_t t164 = 3;

    t164 = (x737>(x738^(x739-x740)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x742 = INT32_MIN;
	int32_t x743 = -40150044;
	uint32_t x744 = 17145793U;
	int32_t t165 = -452714555;

    t165 = (x741>(x742^(x743-x744)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = INT64_MAX;
	static volatile int32_t x747 = 255;

    t166 = (x745>(x746^(x747-x748)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x750 = 54456061417LLU;
	int32_t t167 = -4647;

    t167 = (x749>(x750^(x751-x752)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x753 = 36U;
	uint64_t x754 = 225627LLU;
	int64_t x755 = -1LL;
	int64_t x756 = -99765431LL;
	int32_t t168 = -3896;

    t168 = (x753>(x754^(x755-x756)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x762 = -3;
	int32_t x763 = -3740949;
	static volatile uint16_t x764 = 13U;

    t169 = (x761>(x762^(x763-x764)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x765 = 3249128333404286LL;
	int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;

    t170 = (x765>(x766^(x767-x768)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x769 = -123118881LL;
	int64_t x770 = -1LL;
	int64_t x771 = INT64_MIN;
	int32_t t171 = 194991857;

    t171 = (x769>(x770^(x771-x772)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x773 = INT8_MIN;
	int16_t x774 = INT16_MIN;
	static int64_t x775 = INT64_MAX;
	static uint8_t x776 = 34U;
	static volatile int32_t t172 = -2411096;

    t172 = (x773>(x774^(x775-x776)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x778 = UINT32_MAX;
	static volatile int64_t x779 = 37221427409241304LL;
	int16_t x780 = INT16_MAX;
	static volatile int32_t t173 = 842;

    t173 = (x777>(x778^(x779-x780)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x782 = -4370;
	static uint32_t x783 = 29U;
	volatile int32_t x784 = 0;
	volatile int32_t t174 = 0;

    t174 = (x781>(x782^(x783-x784)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x785 = UINT16_MAX;
	int8_t x786 = INT8_MIN;
	volatile int64_t x787 = -3479465845024LL;
	volatile int32_t t175 = -5421;

    t175 = (x785>(x786^(x787-x788)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = -1030059213732LL;
	int8_t x790 = INT8_MAX;
	volatile int32_t x791 = -1;
	int32_t t176 = 84;

    t176 = (x789>(x790^(x791-x792)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x793 = -2LL;
	static int16_t x794 = INT16_MIN;
	volatile int16_t x795 = INT16_MIN;
	volatile int16_t x796 = INT16_MAX;
	volatile int32_t t177 = -19;

    t177 = (x793>(x794^(x795-x796)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x797 = 2101676654383LLU;
	int64_t x798 = INT64_MIN;
	int32_t x799 = 4;
	volatile int32_t t178 = 274;

    t178 = (x797>(x798^(x799-x800)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x801 = INT32_MAX;
	volatile uint16_t x803 = 6U;
	int32_t x804 = 5668425;
	volatile int32_t t179 = 892;

    t179 = (x801>(x802^(x803-x804)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x809 = 37;
	static uint16_t x810 = 14338U;
	static volatile int32_t x812 = -1399932;
	int32_t t180 = -645;

    t180 = (x809>(x810^(x811-x812)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x821 = 2U;
	uint8_t x822 = 8U;
	static int16_t x823 = INT16_MIN;
	int8_t x824 = -6;

    t181 = (x821>(x822^(x823-x824)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x825 = INT16_MIN;
	uint32_t x827 = UINT32_MAX;
	static uint64_t x828 = 115732384570532590LLU;
	volatile int32_t t182 = 723171;

    t182 = (x825>(x826^(x827-x828)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x829 = INT32_MIN;
	static int16_t x830 = 84;
	uint32_t x831 = UINT32_MAX;
	volatile uint64_t x832 = 7818213333717082LLU;
	volatile int32_t t183 = -393395044;

    t183 = (x829>(x830^(x831-x832)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x833 = UINT64_MAX;
	int8_t x834 = INT8_MIN;
	static volatile uint64_t x836 = UINT64_MAX;
	int32_t t184 = -121546219;

    t184 = (x833>(x834^(x835-x836)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x838 = -1LL;
	int32_t t185 = 436317;

    t185 = (x837>(x838^(x839-x840)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x845 = 15;
	int8_t x846 = INT8_MIN;
	static int8_t x848 = INT8_MIN;
	int32_t t186 = 886780620;

    t186 = (x845>(x846^(x847-x848)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x850 = 102U;
	int16_t x851 = INT16_MIN;
	volatile uint16_t x852 = 800U;
	volatile int32_t t187 = 7336391;

    t187 = (x849>(x850^(x851-x852)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x854 = INT8_MAX;
	uint64_t x855 = 401170326398537LLU;
	uint8_t x856 = UINT8_MAX;
	int32_t t188 = -14;

    t188 = (x853>(x854^(x855-x856)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x857 = INT16_MIN;
	static uint64_t x858 = UINT64_MAX;
	int64_t x859 = 1309882063LL;
	volatile int8_t x860 = INT8_MIN;

    t189 = (x857>(x858^(x859-x860)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x865 = -5;
	int32_t x866 = 623738;
	int32_t x867 = INT32_MIN;
	volatile uint32_t x868 = 35U;
	int32_t t190 = -323151979;

    t190 = (x865>(x866^(x867-x868)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x869 = 246259U;
	volatile int16_t x870 = -1;
	static volatile uint16_t x871 = 2U;
	int8_t x872 = INT8_MAX;
	int32_t t191 = -1050327434;

    t191 = (x869>(x870^(x871-x872)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x877 = INT16_MIN;
	uint64_t x879 = 4911999LLU;
	int16_t x880 = -6367;
	static int32_t t192 = 26797;

    t192 = (x877>(x878^(x879-x880)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x881 = INT32_MIN;
	static uint8_t x882 = 127U;
	static volatile int8_t x883 = -1;
	static int64_t x884 = -8062385778777209LL;
	volatile int32_t t193 = -2050445;

    t193 = (x881>(x882^(x883-x884)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x885 = 292;
	static uint64_t x886 = 1972225LLU;
	int16_t x887 = INT16_MIN;
	int32_t x888 = INT32_MIN;
	volatile int32_t t194 = 1393;

    t194 = (x885>(x886^(x887-x888)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x889 = INT32_MAX;
	uint64_t x890 = UINT64_MAX;
	uint32_t x891 = UINT32_MAX;
	int64_t x892 = 44018542632LL;
	int32_t t195 = -356956;

    t195 = (x889>(x890^(x891-x892)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x894 = INT8_MAX;
	static uint32_t x895 = 350814237U;
	volatile int32_t x896 = 78284481;

    t196 = (x893>(x894^(x895-x896)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x901 = INT8_MIN;
	volatile int64_t x902 = -108655523013898LL;
	uint64_t x904 = 71LLU;
	int32_t t197 = -32;

    t197 = (x901>(x902^(x903-x904)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x905 = 213340759877724864LLU;
	volatile int32_t x906 = INT32_MIN;
	static int8_t x907 = INT8_MAX;
	uint64_t x908 = UINT64_MAX;

    t198 = (x905>(x906^(x907-x908)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x910 = 3068749LLU;
	int32_t x911 = -1;
	int64_t x912 = INT64_MIN;
	volatile int32_t t199 = 0;

    t199 = (x909>(x910^(x911-x912)));

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

