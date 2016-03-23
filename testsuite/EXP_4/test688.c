
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
static int16_t x2 = -1;
volatile uint32_t x11 = 965794U;
uint32_t x12 = 223266652U;
int64_t x15 = -1LL;
volatile int16_t x16 = 2;
int32_t t3 = 1;
uint8_t x24 = 104U;
static uint16_t x27 = UINT16_MAX;
static uint64_t t6 = UINT64_MAX;
int16_t x30 = INT16_MIN;
int16_t x33 = -1;
uint16_t x34 = 66U;
int32_t x40 = INT32_MIN;
volatile uint16_t x43 = 752U;
int16_t x45 = INT16_MIN;
uint16_t x52 = 1468U;
int8_t x55 = INT8_MAX;
volatile uint64_t x57 = 316815127LLU;
int64_t x60 = -1LL;
int16_t x69 = -2;
volatile int32_t t18 = 115;
static uint16_t x83 = UINT16_MAX;
uint64_t t20 = UINT64_MAX;
int8_t x87 = -1;
static volatile uint64_t t21 = UINT64_MAX;
int32_t x89 = -210;
uint8_t x91 = 19U;
int32_t t24 = -15683;
int64_t x102 = -1LL;
uint32_t x111 = 4U;
static int32_t x118 = -1969;
static int16_t x119 = -1;
volatile uint64_t x121 = UINT64_MAX;
int32_t x129 = INT32_MIN;
uint32_t x131 = UINT32_MAX;
int8_t x132 = INT8_MAX;
uint8_t x135 = 11U;
static int32_t x139 = INT32_MIN;
int64_t x140 = INT64_MAX;
static int64_t x141 = -1LL;
int64_t x153 = -3LL;
int64_t x156 = INT64_MAX;
int32_t x158 = -1;
static volatile int8_t x160 = INT8_MAX;
volatile int32_t t39 = -165;
int8_t x167 = INT8_MIN;
int8_t x168 = INT8_MIN;
int32_t x170 = 434;
volatile int32_t t41 = -58;
uint8_t x178 = 7U;
volatile uint8_t x196 = 40U;
volatile int32_t t48 = 250;
static uint32_t x204 = 2U;
uint32_t x210 = UINT32_MAX;
uint16_t x219 = UINT16_MAX;
int64_t x220 = -1LL;
volatile uint32_t t53 = 34794U;
int32_t x221 = INT32_MIN;
volatile uint16_t x224 = UINT16_MAX;
uint8_t x229 = UINT8_MAX;
int32_t x231 = 1;
static volatile uint64_t x232 = 1798872184263997991LLU;
int32_t t56 = 1270427;
static uint16_t x238 = UINT16_MAX;
volatile int8_t x241 = INT8_MIN;
volatile int32_t t59 = -4825227;
int16_t x250 = -1;
int8_t x252 = INT8_MIN;
volatile int64_t t61 = INT64_MAX;
static uint8_t x254 = UINT8_MAX;
int16_t x257 = INT16_MAX;
uint64_t x258 = 40LLU;
static uint8_t x260 = 16U;
int32_t x264 = INT32_MIN;
int32_t x268 = INT32_MIN;
int32_t x280 = INT32_MAX;
int64_t x286 = INT64_MIN;
uint32_t x294 = 86308U;
static uint8_t x295 = 1U;
static volatile uint8_t x296 = UINT8_MAX;
uint32_t x299 = 31U;
static int16_t x301 = -1816;
volatile int32_t t74 = -52;
int8_t x305 = -1;
volatile uint64_t x307 = 54873836020201LLU;
static int32_t t75 = -134656;
int64_t x312 = -17506274LL;
volatile int32_t t76 = 12656251;
int32_t t77 = 4500;
volatile int8_t x320 = INT8_MAX;
uint32_t x325 = 75U;
int32_t x335 = INT32_MIN;
uint64_t t83 = UINT64_MAX;
volatile int8_t x343 = 0;
int16_t x350 = INT16_MIN;
static volatile uint32_t t86 = 3U;
int16_t x354 = INT16_MIN;
int16_t x356 = -13;
int8_t x366 = INT8_MIN;
int32_t x383 = -1;
static int8_t x385 = INT8_MAX;
int16_t x387 = -1;
static int8_t x390 = INT8_MIN;
int16_t x391 = INT16_MAX;
int8_t x393 = INT8_MIN;
volatile int64_t x396 = -258690298060LL;
volatile uint64_t t97 = UINT64_MAX;
int16_t x402 = INT16_MIN;
volatile uint8_t x405 = UINT8_MAX;
static volatile int32_t x412 = -1;
uint8_t x414 = 10U;
uint16_t x416 = 1U;
static int64_t t103 = 87LL;
static volatile int16_t x428 = -2185;
volatile int32_t t107 = -1476;
static volatile int64_t x445 = INT64_MIN;
int64_t x449 = INT64_MIN;
int16_t x451 = 26;
static uint32_t x453 = UINT32_MAX;
int32_t t113 = 0;
int64_t x470 = -19211LL;
uint16_t x473 = 1U;
int16_t x474 = INT16_MAX;
uint16_t x475 = 118U;
int8_t x480 = 3;
static int8_t x481 = 30;
int16_t x484 = INT16_MAX;
uint64_t x488 = UINT64_MAX;
uint64_t x496 = 201798113263LLU;
int32_t t120 = -85627;
uint16_t x500 = UINT16_MAX;
int64_t x501 = INT64_MAX;
volatile int8_t x506 = INT8_MIN;
static uint32_t x507 = UINT32_MAX;
int32_t x508 = 115;
static int64_t t123 = 1141114LL;
uint16_t x511 = UINT16_MAX;
uint8_t x512 = UINT8_MAX;
uint64_t t124 = 317219210363959LLU;
uint8_t x517 = 21U;
static int32_t x518 = -1;
uint16_t x519 = 67U;
static int32_t t126 = 8;
static volatile int32_t t127 = 30048857;
uint16_t x529 = 6684U;
volatile int16_t x532 = INT16_MIN;
volatile int16_t x533 = -1;
int32_t x537 = -1;
uint32_t x543 = 31403324U;
volatile int64_t t132 = -12763401654LL;
int16_t x548 = 981;
static volatile int32_t t133 = -3579;
int8_t x558 = 5;
volatile int64_t t136 = INT64_MAX;
uint32_t x561 = 93553688U;
int8_t x563 = -1;
int32_t x564 = -27005262;
static int32_t t141 = 13875;
volatile int16_t x587 = INT16_MIN;
int16_t x588 = INT16_MIN;
uint8_t x589 = 0U;
int64_t x591 = INT64_MIN;
int8_t x592 = INT8_MIN;
volatile int32_t t144 = 2;
int8_t x594 = INT8_MAX;
int8_t x595 = -1;
int16_t x604 = -1;
volatile int16_t x605 = -1475;
int8_t x606 = -58;
int64_t x607 = -1953121631965039LL;
volatile uint32_t t148 = UINT32_MAX;
int64_t x617 = INT64_MIN;
static int64_t t149 = INT64_MIN;
uint64_t x621 = 1525LLU;
uint64_t x640 = 2069015980870290341LLU;
int8_t x645 = 0;
int64_t t157 = INT64_MAX;
int8_t x653 = INT8_MIN;
int32_t x656 = -498905;
static volatile int32_t t158 = -70014371;
uint32_t x662 = 4600454U;
static volatile uint8_t x664 = 23U;
int32_t x670 = -8;
int8_t x672 = INT8_MIN;
static volatile int32_t x674 = -1;
int8_t x681 = -5;
int32_t t167 = 74849077;
static uint16_t x693 = UINT16_MAX;
static volatile int64_t x698 = 3846LL;
volatile int32_t t169 = 29534;
int8_t x701 = 55;
uint8_t x710 = UINT8_MAX;
int32_t t171 = -178;
uint32_t x713 = 672227U;
int64_t x721 = 4497596805655487LL;
int32_t x734 = -1;
volatile uint32_t x735 = UINT32_MAX;
static uint8_t x739 = 3U;
volatile uint16_t x748 = 18U;
volatile uint64_t x753 = 1927LLU;
static int8_t x763 = INT8_MAX;
uint16_t x768 = 806U;
static int32_t x770 = 313;
static int64_t x781 = INT64_MAX;
uint64_t x783 = UINT64_MAX;
int64_t t188 = INT64_MAX;
static int64_t t189 = 0LL;
int64_t x790 = -14193159LL;
uint32_t t190 = 5135602U;
static int8_t x797 = INT8_MAX;
int64_t x815 = INT64_MAX;
int32_t t196 = 5188504;
static int16_t x817 = INT16_MIN;
int32_t x818 = INT32_MAX;
uint16_t x823 = 0U;
static int64_t t198 = INT64_MIN;
volatile uint64_t x825 = 58614LLU;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	static int64_t x4 = -226LL;
	static volatile int32_t t0 = 814;

    t0 = (x1-(x2==(x3/x4)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -8;
	int64_t x6 = -82097LL;
	static uint32_t x7 = 1226701823U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 441;

    t1 = (x5-(x6==(x7/x8)));

    if (t1 != -8) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static int32_t x10 = -210849;
	volatile int32_t t2 = 654;

    t2 = (x9-(x10==(x11/x12)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 254U;
	static int8_t x14 = 0;

    t3 = (x13-(x14==(x15/x16)));

    if (t3 != 253) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	static int64_t x20 = INT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = (x17-(x18==(x19/x20)));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int64_t x22 = -1LL;
	uint32_t x23 = 0U;
	int32_t t5 = -16689040;

    t5 = (x21-(x22==(x23/x24)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 59184U;
	volatile int32_t x28 = INT32_MAX;

    t6 = (x25-(x26==(x27/x28)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -7;
	int8_t x31 = 13;
	int32_t x32 = -1;
	int32_t t7 = -25201;

    t7 = (x29-(x30==(x31/x32)));

    if (t7 != -7) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x35 = -731;
	uint32_t x36 = 18U;
	volatile int32_t t8 = 100471;

    t8 = (x33-(x34==(x35/x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 13287;
	int8_t x39 = INT8_MIN;
	int32_t t9 = 17100107;

    t9 = (x37-(x38==(x39/x40)));

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	int16_t x44 = 6743;
	volatile int64_t t10 = 119726939LL;

    t10 = (x41-(x42==(x43/x44)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 1;

    t11 = (x45-(x46==(x47/x48)));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MAX;
	static int8_t x51 = -5;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x49-(x50==(x51/x52)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = 461941243395912866LL;
	uint16_t x54 = 261U;
	int64_t x56 = INT64_MIN;
	static int64_t t13 = 1LL;

    t13 = (x53-(x54==(x55/x56)));

    if (t13 != 461941243395912866LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -638;
	volatile int8_t x59 = INT8_MIN;
	static volatile uint64_t t14 = 4489649951190233LLU;

    t14 = (x57-(x58==(x59/x60)));

    if (t14 != 316815127LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = 6LLU;
	int64_t x62 = 63281LL;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = UINT16_MAX;
	static uint64_t t15 = 382193022052658530LLU;

    t15 = (x61-(x62==(x63/x64)));

    if (t15 != 6LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	uint64_t x66 = 9507956237LLU;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = 3690U;
	static int32_t t16 = -82423376;

    t16 = (x65-(x66==(x67/x68)));

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = 25U;
	int16_t x71 = -6;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -1;

    t17 = (x69-(x70==(x71/x72)));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = INT16_MIN;
	volatile uint64_t x74 = 62105LLU;
	uint16_t x75 = 7445U;
	int32_t x76 = INT32_MAX;

    t18 = (x73-(x74==(x75/x76)));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = INT8_MIN;
	volatile uint64_t x78 = 208675942861LLU;
	int8_t x79 = INT8_MAX;
	int16_t x80 = 1180;
	volatile int32_t t19 = -13;

    t19 = (x77-(x78==(x79/x80)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MAX;
	static int32_t x84 = INT32_MIN;

    t20 = (x81-(x82==(x83/x84)));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	static int16_t x86 = -1;
	int16_t x88 = INT16_MAX;

    t21 = (x85-(x86==(x87/x88)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = 1264401;
	static int8_t x92 = INT8_MIN;
	static int32_t t22 = -32830498;

    t22 = (x89-(x90==(x91/x92)));

    if (t22 != -210) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	uint8_t x94 = 6U;
	int16_t x95 = -4;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = -1356;

    t23 = (x93-(x94==(x95/x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 3756123;
	volatile uint16_t x98 = 48U;
	int16_t x99 = -1;
	int64_t x100 = INT64_MIN;

    t24 = (x97-(x98==(x99/x100)));

    if (t24 != 3756123) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 181220LL;
	static int64_t x103 = 553424793764201LL;
	volatile int8_t x104 = INT8_MIN;
	int64_t t25 = 29100LL;

    t25 = (x101-(x102==(x103/x104)));

    if (t25 != 181220LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	static int64_t x106 = -498406245223LL;
	uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -118967180;

    t26 = (x105-(x106==(x107/x108)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	static int64_t x110 = INT64_MAX;
	int64_t x112 = INT64_MAX;
	static int32_t t27 = INT32_MAX;

    t27 = (x109-(x110==(x111/x112)));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = 208;
	static uint8_t x114 = 104U;
	volatile uint16_t x115 = 1U;
	uint64_t x116 = 1485754LLU;
	int32_t t28 = -5;

    t28 = (x113-(x114==(x115/x116)));

    if (t28 != 208) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 13844308436LLU;
	static int8_t x120 = -1;
	static volatile uint64_t t29 = 787349857386LLU;

    t29 = (x117-(x118==(x119/x120)));

    if (t29 != 13844308436LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MAX;
	int64_t x123 = 107755925473LL;
	int32_t x124 = INT32_MIN;
	uint64_t t30 = UINT64_MAX;

    t30 = (x121-(x122==(x123/x124)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = 1405;
	int32_t t31 = -5;

    t31 = (x125-(x126==(x127/x128)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = -1;
	static volatile int32_t t32 = INT32_MIN;

    t32 = (x129-(x130==(x131/x132)));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 230U;
	int32_t x134 = -1;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 4421046;

    t33 = (x133-(x134==(x135/x136)));

    if (t33 != 230) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	int32_t t34 = INT32_MIN;

    t34 = (x137-(x138==(x139/x140)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -1;
	static int64_t t35 = 376344LL;

    t35 = (x141-(x142==(x143/x144)));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -19;
	uint8_t x150 = UINT8_MAX;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = 3727;
	volatile int32_t t36 = 8827;

    t36 = (x149-(x150==(x151/x152)));

    if (t36 != -19) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x154 = -146LL;
	static int32_t x155 = 19992746;
	int64_t t37 = 0LL;

    t37 = (x153-(x154==(x155/x156)));

    if (t37 != -3LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 0;
	int8_t x159 = INT8_MIN;
	volatile int32_t t38 = 61950;

    t38 = (x157-(x158==(x159/x160)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = 15643;
	int8_t x162 = 6;
	volatile int8_t x163 = INT8_MIN;
	static uint64_t x164 = 22443817272824LLU;

    t39 = (x161-(x162==(x163/x164)));

    if (t39 != 15643) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	volatile int64_t x166 = INT64_MIN;
	volatile int32_t t40 = INT32_MIN;

    t40 = (x165-(x166==(x167/x168)));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	int8_t x172 = 4;

    t41 = (x169-(x170==(x171/x172)));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = 19;
	uint8_t x174 = 1U;
	volatile int8_t x175 = 0;
	static volatile uint64_t x176 = 54996771201LLU;
	int32_t t42 = -1;

    t42 = (x173-(x174==(x175/x176)));

    if (t42 != 19) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MAX;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 3U;
	volatile int32_t t43 = INT32_MAX;

    t43 = (x177-(x178==(x179/x180)));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = 5U;
	uint8_t x182 = 6U;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t44 = -56701420;

    t44 = (x181-(x182==(x183/x184)));

    if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int16_t x187 = 0;
	static uint64_t x188 = 67709835973069LLU;
	int32_t t45 = 3;

    t45 = (x185-(x186==(x187/x188)));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x189 = 64LLU;
	static volatile int8_t x190 = 0;
	static int64_t x191 = -1LL;
	uint8_t x192 = 11U;
	static volatile uint64_t t46 = 12539LLU;

    t46 = (x189-(x190==(x191/x192)));

    if (t46 != 63LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = -10;
	volatile uint8_t x194 = 0U;
	uint8_t x195 = 1U;
	int32_t t47 = -125373020;

    t47 = (x193-(x194==(x195/x196)));

    if (t47 != -11) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = -3;
	uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MAX;
	uint8_t x200 = 3U;

    t48 = (x197-(x198==(x199/x200)));

    if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -445326297;
	int16_t x202 = INT16_MAX;
	volatile int8_t x203 = INT8_MIN;
	int32_t t49 = 4884381;

    t49 = (x201-(x202==(x203/x204)));

    if (t49 != -445326297) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -667496741701705LL;
	static int32_t t50 = -733607279;

    t50 = (x205-(x206==(x207/x208)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x209 = 178277;
	int64_t x211 = 158383796710862143LL;
	static volatile uint16_t x212 = 3U;
	static int32_t t51 = 7460547;

    t51 = (x209-(x210==(x211/x212)));

    if (t51 != 178277) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = -1LL;
	int32_t x214 = -11321;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile int64_t t52 = 292408386LL;

    t52 = (x213-(x214==(x215/x216)));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x217 = 325U;
	static int8_t x218 = INT8_MIN;

    t53 = (x217-(x218==(x219/x220)));

    if (t53 != 325U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x222 = INT16_MAX;
	static int8_t x223 = -32;
	static volatile int32_t t54 = INT32_MIN;

    t54 = (x221-(x222==(x223/x224)));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = INT64_MAX;
	static int8_t x226 = 50;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MIN;
	volatile int64_t t55 = INT64_MAX;

    t55 = (x225-(x226==(x227/x228)));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = -116LL;

    t56 = (x229-(x230==(x231/x232)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = INT16_MAX;
	volatile int64_t x234 = INT64_MIN;
	volatile int32_t x235 = -1;
	int64_t x236 = INT64_MAX;
	volatile int32_t t57 = 210;

    t57 = (x233-(x234==(x235/x236)));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x237 = 60;
	int64_t x239 = INT64_MAX;
	static uint32_t x240 = 13U;
	volatile int32_t t58 = -1673051;

    t58 = (x237-(x238==(x239/x240)));

    if (t58 != 60) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x242 = INT32_MIN;
	uint32_t x243 = UINT32_MAX;
	static uint64_t x244 = UINT64_MAX;

    t59 = (x241-(x242==(x243/x244)));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MIN;
	int32_t x246 = 1851350;
	static uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MAX;
	static int64_t t60 = INT64_MIN;

    t60 = (x245-(x246==(x247/x248)));

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MAX;
	static int32_t x251 = INT32_MAX;

    t61 = (x249-(x250==(x251/x252)));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x253 = 0;
	int64_t x255 = 1660203275219919115LL;
	static uint8_t x256 = 80U;
	volatile int32_t t62 = -79153334;

    t62 = (x253-(x254==(x255/x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x259 = INT8_MIN;
	int32_t t63 = -1;

    t63 = (x257-(x258==(x259/x260)));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x261 = 1;
	uint32_t x262 = 1429630U;
	static int8_t x263 = INT8_MAX;
	int32_t t64 = -1528;

    t64 = (x261-(x262==(x263/x264)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = -3;
	int8_t x266 = 1;
	int32_t x267 = -1;
	int32_t t65 = -200864209;

    t65 = (x265-(x266==(x267/x268)));

    if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = -1;
	int32_t x270 = 12711;
	uint8_t x271 = 30U;
	uint32_t x272 = 470927338U;
	int32_t t66 = -3;

    t66 = (x269-(x270==(x271/x272)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x273 = 12075326U;
	int64_t x274 = INT64_MAX;
	int8_t x275 = -1;
	static uint64_t x276 = 46506052LLU;
	volatile uint32_t t67 = 427875816U;

    t67 = (x273-(x274==(x275/x276)));

    if (t67 != 12075326U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	volatile int32_t t68 = 1110;

    t68 = (x277-(x278==(x279/x280)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = UINT16_MAX;
	static uint64_t x282 = 519522169LLU;
	uint64_t x283 = 25085942LLU;
	static volatile int8_t x284 = INT8_MIN;
	int32_t t69 = 0;

    t69 = (x281-(x282==(x283/x284)));

    if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = -1;
	int32_t x287 = INT32_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t70 = 43;

    t70 = (x285-(x286==(x287/x288)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x289 = 19751550;
	int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t71 = 2489860;

    t71 = (x289-(x290==(x291/x292)));

    if (t71 != 19751550) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = -1;
	volatile int32_t t72 = 35;

    t72 = (x293-(x294==(x295/x296)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = -1;
	volatile uint8_t x298 = 5U;
	int32_t x300 = -7938936;
	int32_t t73 = -552325;

    t73 = (x297-(x298==(x299/x300)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x302 = 1LLU;
	static int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MAX;

    t74 = (x301-(x302==(x303/x304)));

    if (t74 != -1816) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x306 = INT16_MAX;
	volatile uint64_t x308 = 227LLU;

    t75 = (x305-(x306==(x307/x308)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = -7346383;
	uint64_t x310 = 63674917876LLU;
	volatile int64_t x311 = INT64_MIN;

    t76 = (x309-(x310==(x311/x312)));

    if (t76 != -7346383) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x313 = 6441588;
	uint32_t x314 = 101065185U;
	int64_t x315 = -2352567668523LL;
	int8_t x316 = INT8_MIN;

    t77 = (x313-(x314==(x315/x316)));

    if (t77 != 6441588) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = -2;
	int32_t x319 = INT32_MAX;
	volatile int32_t t78 = -26;

    t78 = (x317-(x318==(x319/x320)));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = INT8_MIN;
	int64_t x323 = 27955539084370543LL;
	uint16_t x324 = UINT16_MAX;
	int32_t t79 = INT32_MIN;

    t79 = (x321-(x322==(x323/x324)));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x326 = INT64_MAX;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = INT8_MIN;
	static volatile uint32_t t80 = 122199U;

    t80 = (x325-(x326==(x327/x328)));

    if (t80 != 75U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = 1089155212075026LL;
	int64_t x330 = -305943357196LL;
	uint32_t x331 = UINT32_MAX;
	uint64_t x332 = 286960445LLU;
	int64_t t81 = 3667590940646959313LL;

    t81 = (x329-(x330==(x331/x332)));

    if (t81 != 1089155212075026LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	uint64_t x336 = 275093435855197506LLU;
	volatile int32_t t82 = -76;

    t82 = (x333-(x334==(x335/x336)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 83113706U;
	static volatile int64_t x340 = 16167LL;

    t83 = (x337-(x338==(x339/x340)));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = -1;
	int64_t x342 = INT64_MAX;
	int8_t x344 = -58;
	int32_t t84 = -37144;

    t84 = (x341-(x342==(x343/x344)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = INT64_MIN;
	static uint32_t x346 = 107U;
	static uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	volatile int64_t t85 = INT64_MIN;

    t85 = (x345-(x346==(x347/x348)));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = 3425U;
	static volatile int16_t x351 = -1;
	uint8_t x352 = 115U;

    t86 = (x349-(x350==(x351/x352)));

    if (t86 != 3425U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x353 = -53;
	int16_t x355 = INT16_MAX;
	volatile int32_t t87 = 104659461;

    t87 = (x353-(x354==(x355/x356)));

    if (t87 != -53) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	static int16_t x358 = INT16_MIN;
	volatile int32_t x359 = 1;
	int32_t x360 = INT32_MAX;
	int32_t t88 = -1;

    t88 = (x357-(x358==(x359/x360)));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x361 = -18;
	static int64_t x362 = -3037193LL;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	volatile int32_t t89 = 31;

    t89 = (x361-(x362==(x363/x364)));

    if (t89 != -18) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x365 = INT8_MAX;
	static int16_t x367 = INT16_MIN;
	static int16_t x368 = -1;
	volatile int32_t t90 = -26553663;

    t90 = (x365-(x366==(x367/x368)));

    if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x373 = UINT64_MAX;
	int32_t x374 = -1;
	int8_t x375 = 0;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (x373-(x374==(x375/x376)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	volatile uint32_t x378 = 7U;
	int16_t x379 = 3;
	volatile int16_t x380 = INT16_MAX;
	static volatile int32_t t92 = 92;

    t92 = (x377-(x378==(x379/x380)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	uint64_t x384 = UINT64_MAX;
	static int32_t t93 = -5917294;

    t93 = (x381-(x382==(x383/x384)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x386 = 0;
	uint32_t x388 = 1306U;
	int32_t t94 = 5225;

    t94 = (x385-(x386==(x387/x388)));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = 10954571166928LL;
	static int8_t x392 = INT8_MAX;
	volatile int64_t t95 = 28759LL;

    t95 = (x389-(x390==(x391/x392)));

    if (t95 != 10954571166928LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x394 = INT64_MIN;
	static int16_t x395 = INT16_MIN;
	int32_t t96 = -1331;

    t96 = (x393-(x394==(x395/x396)));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = UINT64_MAX;
	static int64_t x398 = -1LL;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = UINT64_MAX;

    t97 = (x397-(x398==(x399/x400)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x401 = 60097263;
	static volatile int8_t x403 = INT8_MIN;
	volatile uint64_t x404 = UINT64_MAX;
	volatile int32_t t98 = 5;

    t98 = (x401-(x402==(x403/x404)));

    if (t98 != 60097263) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MAX;
	static int32_t x408 = -28;
	int32_t t99 = -1848;

    t99 = (x405-(x406==(x407/x408)));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = -5;
	int8_t x410 = -1;
	uint16_t x411 = 0U;
	volatile int32_t t100 = 23988675;

    t100 = (x409-(x410==(x411/x412)));

    if (t100 != -5) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = 14;
	int8_t x415 = -1;
	int32_t t101 = 8153670;

    t101 = (x413-(x414==(x415/x416)));

    if (t101 != 14) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = INT64_MAX;
	volatile uint16_t x418 = 31U;
	volatile int32_t x419 = INT32_MAX;
	int8_t x420 = INT8_MIN;
	volatile int64_t t102 = INT64_MAX;

    t102 = (x417-(x418==(x419/x420)));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = 238265LL;
	static int16_t x422 = INT16_MIN;
	int64_t x423 = INT64_MAX;
	static int32_t x424 = -1;

    t103 = (x421-(x422==(x423/x424)));

    if (t103 != 238265LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	int32_t x426 = INT32_MAX;
	static int64_t x427 = INT64_MAX;
	static uint64_t t104 = UINT64_MAX;

    t104 = (x425-(x426==(x427/x428)));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x429 = 1612222226771LL;
	int8_t x430 = -14;
	volatile int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MAX;
	static volatile int64_t t105 = 0LL;

    t105 = (x429-(x430==(x431/x432)));

    if (t105 != 1612222226771LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	static int64_t x435 = -15040545704LL;
	static int64_t x436 = -25LL;
	static int32_t t106 = 160;

    t106 = (x433-(x434==(x435/x436)));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x441 = INT8_MAX;
	int16_t x442 = 610;
	static int8_t x443 = INT8_MIN;
	volatile int16_t x444 = 1;

    t107 = (x441-(x442==(x443/x444)));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x446 = -5573;
	int64_t x447 = -1LL;
	int32_t x448 = -1;
	volatile int64_t t108 = INT64_MIN;

    t108 = (x445-(x446==(x447/x448)));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x450 = 58009U;
	volatile uint64_t x452 = UINT64_MAX;
	int64_t t109 = INT64_MIN;

    t109 = (x449-(x450==(x451/x452)));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x454 = INT16_MIN;
	uint32_t x455 = 7U;
	uint64_t x456 = UINT64_MAX;
	uint32_t t110 = UINT32_MAX;

    t110 = (x453-(x454==(x455/x456)));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x457 = INT8_MIN;
	static int64_t x458 = INT64_MIN;
	uint16_t x459 = 6U;
	static uint64_t x460 = UINT64_MAX;
	volatile int32_t t111 = -1;

    t111 = (x457-(x458==(x459/x460)));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x461 = -1;
	int8_t x462 = -1;
	int8_t x463 = INT8_MIN;
	static int32_t x464 = -14529;
	int32_t t112 = 16808327;

    t112 = (x461-(x462==(x463/x464)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x465 = UINT16_MAX;
	int32_t x466 = -1;
	uint64_t x467 = 1265198037563LLU;
	volatile int64_t x468 = -7612270266512LL;

    t113 = (x465-(x466==(x467/x468)));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	uint32_t x471 = 4486390U;
	static int32_t x472 = -782684;
	int32_t t114 = INT32_MIN;

    t114 = (x469-(x470==(x471/x472)));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x476 = 1U;
	static volatile int32_t t115 = 363150;

    t115 = (x473-(x474==(x475/x476)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x477 = INT32_MIN;
	volatile uint16_t x478 = UINT16_MAX;
	int16_t x479 = -1591;
	int32_t t116 = INT32_MIN;

    t116 = (x477-(x478==(x479/x480)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x482 = 2760617044180LL;
	uint8_t x483 = 27U;
	int32_t t117 = -396133;

    t117 = (x481-(x482==(x483/x484)));

    if (t117 != 30) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x485 = INT32_MIN;
	volatile uint8_t x486 = 10U;
	int64_t x487 = -1LL;
	volatile int32_t t118 = INT32_MIN;

    t118 = (x485-(x486==(x487/x488)));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x490 = -1378;
	int32_t x491 = INT32_MAX;
	int8_t x492 = INT8_MAX;
	static volatile int32_t t119 = INT32_MIN;

    t119 = (x489-(x490==(x491/x492)));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;

    t120 = (x493-(x494==(x495/x496)));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x497 = -1;
	volatile uint32_t x498 = 103507U;
	int16_t x499 = INT16_MIN;
	int32_t t121 = 11313100;

    t121 = (x497-(x498==(x499/x500)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x502 = INT16_MIN;
	uint32_t x503 = 5324214U;
	int32_t x504 = INT32_MAX;
	volatile int64_t t122 = INT64_MAX;

    t122 = (x501-(x502==(x503/x504)));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -1125893145628904LL;

    t123 = (x505-(x506==(x507/x508)));

    if (t123 != -1125893145628904LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x509 = 57132188LLU;
	volatile uint8_t x510 = 17U;

    t124 = (x509-(x510==(x511/x512)));

    if (t124 != 57132188LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x513 = INT64_MIN;
	int64_t x514 = INT64_MIN;
	int64_t x515 = 956781251329LL;
	int16_t x516 = -1;
	volatile int64_t t125 = INT64_MIN;

    t125 = (x513-(x514==(x515/x516)));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x520 = 450959461;

    t126 = (x517-(x518==(x519/x520)));

    if (t126 != 21) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x521 = -1;
	volatile uint64_t x522 = 41848651501492LLU;
	volatile int32_t x523 = INT32_MAX;
	volatile int8_t x524 = INT8_MAX;

    t127 = (x521-(x522==(x523/x524)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x525 = 1346;
	static int32_t x526 = INT32_MAX;
	int64_t x527 = INT64_MIN;
	uint8_t x528 = 5U;
	volatile int32_t t128 = -8407303;

    t128 = (x525-(x526==(x527/x528)));

    if (t128 != 1346) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x530 = -295574LL;
	int32_t x531 = -1;
	volatile int32_t t129 = 0;

    t129 = (x529-(x530==(x531/x532)));

    if (t129 != 6684) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x534 = 0;
	int16_t x535 = -538;
	int8_t x536 = INT8_MIN;
	volatile int32_t t130 = -5603;

    t130 = (x533-(x534==(x535/x536)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	volatile int32_t x540 = INT32_MIN;
	static int32_t t131 = -2831494;

    t131 = (x537-(x538==(x539/x540)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x541 = -27723LL;
	int8_t x542 = INT8_MIN;
	static uint8_t x544 = 33U;

    t132 = (x541-(x542==(x543/x544)));

    if (t132 != -27723LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MIN;
	static volatile int8_t x547 = -1;

    t133 = (x545-(x546==(x547/x548)));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x549 = INT32_MAX;
	int8_t x550 = 0;
	uint16_t x551 = UINT16_MAX;
	static int32_t x552 = INT32_MIN;
	int32_t t134 = 19;

    t134 = (x549-(x550==(x551/x552)));

    if (t134 != 2147483646) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x553 = UINT64_MAX;
	int16_t x554 = INT16_MIN;
	static int16_t x555 = INT16_MIN;
	volatile int64_t x556 = -13LL;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (x553-(x554==(x555/x556)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = INT64_MAX;
	static uint32_t x559 = 929220070U;
	static uint8_t x560 = 1U;

    t136 = (x557-(x558==(x559/x560)));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x562 = -45;
	uint32_t t137 = 13475U;

    t137 = (x561-(x562==(x563/x564)));

    if (t137 != 93553688U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = INT64_MAX;
	int32_t x566 = 38;
	uint8_t x567 = 5U;
	uint8_t x568 = UINT8_MAX;
	int64_t t138 = INT64_MAX;

    t138 = (x565-(x566==(x567/x568)));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = -32633LL;
	uint16_t x570 = 50U;
	int8_t x571 = -1;
	int16_t x572 = 1582;
	volatile int64_t t139 = 24LL;

    t139 = (x569-(x570==(x571/x572)));

    if (t139 != -32633LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x573 = 19U;
	int64_t x574 = -808389LL;
	volatile int64_t x575 = INT64_MIN;
	int64_t x576 = -8730594301708839LL;
	volatile int32_t t140 = -117842583;

    t140 = (x573-(x574==(x575/x576)));

    if (t140 != 19) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x577 = 1;
	uint64_t x578 = 84247390LLU;
	int8_t x579 = INT8_MIN;
	volatile int32_t x580 = INT32_MIN;

    t141 = (x577-(x578==(x579/x580)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x581 = 17U;
	int16_t x582 = INT16_MAX;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MAX;
	static int32_t t142 = -12024;

    t142 = (x581-(x582==(x583/x584)));

    if (t142 != 17) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MIN;
	int32_t t143 = INT32_MIN;

    t143 = (x585-(x586==(x587/x588)));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x590 = -24223604;

    t144 = (x589-(x590==(x591/x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x593 = 3U;
	int16_t x596 = 2686;
	volatile int32_t t145 = -62509;

    t145 = (x593-(x594==(x595/x596)));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x601 = 26;
	int32_t x602 = -9409852;
	int8_t x603 = -1;
	volatile int32_t t146 = -3456;

    t146 = (x601-(x602==(x603/x604)));

    if (t146 != 26) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x608 = INT64_MIN;
	volatile int32_t t147 = 480699336;

    t147 = (x605-(x606==(x607/x608)));

    if (t147 != -1475) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MAX;
	int32_t x611 = -1;
	static int64_t x612 = 24346LL;

    t148 = (x609-(x610==(x611/x612)));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x618 = -1;
	uint16_t x619 = 639U;
	int64_t x620 = INT64_MIN;

    t149 = (x617-(x618==(x619/x620)));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x622 = INT16_MIN;
	static int32_t x623 = INT32_MIN;
	int64_t x624 = INT64_MAX;
	static uint64_t t150 = 1221235959896977LLU;

    t150 = (x621-(x622==(x623/x624)));

    if (t150 != 1525LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = INT32_MAX;
	int16_t x626 = -1;
	static int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MIN;
	static volatile int32_t t151 = INT32_MAX;

    t151 = (x625-(x626==(x627/x628)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = 3;
	int16_t x630 = -1;
	static int8_t x631 = INT8_MIN;
	int32_t x632 = INT32_MIN;
	volatile int32_t t152 = -52336;

    t152 = (x629-(x630==(x631/x632)));

    if (t152 != 3) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x633 = INT8_MAX;
	uint64_t x634 = 3117732613412748LLU;
	int16_t x635 = -1;
	uint8_t x636 = 61U;
	int32_t t153 = 1845;

    t153 = (x633-(x634==(x635/x636)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x637 = 15207;
	static uint64_t x638 = 115LLU;
	static uint16_t x639 = UINT16_MAX;
	volatile int32_t t154 = 327085778;

    t154 = (x637-(x638==(x639/x640)));

    if (t154 != 15207) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x641 = INT32_MAX;
	int32_t x642 = INT32_MAX;
	static int64_t x643 = INT64_MAX;
	int8_t x644 = INT8_MIN;
	int32_t t155 = INT32_MAX;

    t155 = (x641-(x642==(x643/x644)));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x646 = INT32_MIN;
	int32_t x647 = 1039169;
	int32_t x648 = 1;
	static int32_t t156 = -706772;

    t156 = (x645-(x646==(x647/x648)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x649 = INT64_MAX;
	uint64_t x650 = 378LLU;
	static volatile uint64_t x651 = 984895488656LLU;
	static int32_t x652 = -1;

    t157 = (x649-(x650==(x651/x652)));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x654 = 1432U;
	volatile int16_t x655 = -89;

    t158 = (x653-(x654==(x655/x656)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = INT8_MIN;
	uint32_t x658 = 3U;
	static int32_t x659 = INT32_MIN;
	int16_t x660 = -13498;
	volatile int32_t t159 = 25130;

    t159 = (x657-(x658==(x659/x660)));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = 38559;
	int16_t x663 = 7;
	int32_t t160 = 432307591;

    t160 = (x661-(x662==(x663/x664)));

    if (t160 != 38559) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x665 = 15860556607295971LL;
	uint32_t x666 = 1520U;
	static volatile uint16_t x667 = 0U;
	int32_t x668 = -1;
	static int64_t t161 = -23LL;

    t161 = (x665-(x666==(x667/x668)));

    if (t161 != 15860556607295971LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x669 = -1;
	int16_t x671 = 9402;
	int32_t t162 = -161781344;

    t162 = (x669-(x670==(x671/x672)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = 3;
	volatile int64_t x675 = 8869709537968927LL;
	static uint8_t x676 = UINT8_MAX;
	int32_t t163 = 7;

    t163 = (x673-(x674==(x675/x676)));

    if (t163 != 3) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = INT64_MAX;
	int64_t x678 = -29906571049043LL;
	uint8_t x679 = UINT8_MAX;
	uint8_t x680 = UINT8_MAX;
	int64_t t164 = INT64_MAX;

    t164 = (x677-(x678==(x679/x680)));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MAX;
	int16_t x684 = INT16_MIN;
	static volatile int32_t t165 = 339;

    t165 = (x681-(x682==(x683/x684)));

    if (t165 != -5) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = INT16_MIN;
	int8_t x686 = -1;
	int32_t x687 = -1731984;
	static uint8_t x688 = 118U;
	static int32_t t166 = 24189;

    t166 = (x685-(x686==(x687/x688)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MAX;
	volatile int16_t x691 = INT16_MIN;
	uint32_t x692 = 4182U;

    t167 = (x689-(x690==(x691/x692)));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x694 = -73;
	volatile int8_t x695 = 21;
	static volatile int32_t x696 = 401;
	static int32_t t168 = 28;

    t168 = (x693-(x694==(x695/x696)));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = INT8_MAX;
	int16_t x699 = INT16_MAX;
	int16_t x700 = -1;

    t169 = (x697-(x698==(x699/x700)));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x702 = INT64_MIN;
	int16_t x703 = INT16_MIN;
	static int16_t x704 = INT16_MAX;
	int32_t t170 = 241;

    t170 = (x701-(x702==(x703/x704)));

    if (t170 != 55) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = -8;
	uint64_t x711 = 7585889446LLU;
	int16_t x712 = 3;

    t171 = (x709-(x710==(x711/x712)));

    if (t171 != -8) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x714 = 486520LLU;
	int32_t x715 = INT32_MAX;
	int8_t x716 = INT8_MIN;
	uint32_t t172 = 256112272U;

    t172 = (x713-(x714==(x715/x716)));

    if (t172 != 672227U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x717 = -898901592117767199LL;
	uint8_t x718 = 7U;
	int16_t x719 = -1;
	uint8_t x720 = 23U;
	static int64_t t173 = -7701249623203710LL;

    t173 = (x717-(x718==(x719/x720)));

    if (t173 != -898901592117767199LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x722 = INT64_MIN;
	uint64_t x723 = 144LLU;
	int16_t x724 = INT16_MAX;
	volatile int64_t t174 = -67100430381LL;

    t174 = (x721-(x722==(x723/x724)));

    if (t174 != 4497596805655487LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x726 = INT8_MIN;
	int16_t x727 = 71;
	int64_t x728 = 1966171253721916LL;
	int64_t t175 = INT64_MIN;

    t175 = (x725-(x726==(x727/x728)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x729 = INT16_MIN;
	volatile int16_t x730 = -18;
	volatile int16_t x731 = INT16_MIN;
	int32_t x732 = -1;
	static volatile int32_t t176 = 9;

    t176 = (x729-(x730==(x731/x732)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = 937682641708134585LL;
	int16_t x736 = -258;
	static int64_t t177 = 283600LL;

    t177 = (x733-(x734==(x735/x736)));

    if (t177 != 937682641708134585LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x737 = -1LL;
	uint64_t x738 = 8439LLU;
	int16_t x740 = INT16_MIN;
	int64_t t178 = -3036876430856LL;

    t178 = (x737-(x738==(x739/x740)));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x745 = INT8_MIN;
	static uint8_t x746 = 0U;
	int8_t x747 = INT8_MIN;
	volatile int32_t t179 = 3867105;

    t179 = (x745-(x746==(x747/x748)));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x749 = INT16_MIN;
	int8_t x750 = 4;
	volatile int64_t x751 = -16294LL;
	static uint8_t x752 = UINT8_MAX;
	volatile int32_t t180 = 1437166;

    t180 = (x749-(x750==(x751/x752)));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x754 = -1;
	int16_t x755 = 22;
	int16_t x756 = 44;
	uint64_t t181 = 804326984LLU;

    t181 = (x753-(x754==(x755/x756)));

    if (t181 != 1927LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MAX;
	static uint8_t x759 = 2U;
	static int32_t x760 = -1;
	static int32_t t182 = 484975;

    t182 = (x757-(x758==(x759/x760)));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x761 = -2;
	int32_t x762 = INT32_MIN;
	uint16_t x764 = UINT16_MAX;
	int32_t t183 = -701651715;

    t183 = (x761-(x762==(x763/x764)));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = 0U;
	static uint32_t x766 = UINT32_MAX;
	int32_t x767 = 3284132;
	int32_t t184 = 4856315;

    t184 = (x765-(x766==(x767/x768)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x769 = 0;
	uint8_t x771 = UINT8_MAX;
	static uint64_t x772 = UINT64_MAX;
	volatile int32_t t185 = 102;

    t185 = (x769-(x770==(x771/x772)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = INT64_MAX;
	static int8_t x774 = INT8_MIN;
	static uint32_t x775 = UINT32_MAX;
	static int16_t x776 = -183;
	volatile int64_t t186 = INT64_MAX;

    t186 = (x773-(x774==(x775/x776)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x777 = UINT8_MAX;
	int8_t x778 = -1;
	uint8_t x779 = UINT8_MAX;
	volatile int16_t x780 = -1;
	int32_t t187 = -6390577;

    t187 = (x777-(x778==(x779/x780)));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x782 = INT8_MIN;
	static int32_t x784 = INT32_MIN;

    t188 = (x781-(x782==(x783/x784)));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x785 = -1LL;
	uint64_t x786 = UINT64_MAX;
	uint16_t x787 = 5U;
	static uint64_t x788 = UINT64_MAX;

    t189 = (x785-(x786==(x787/x788)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = 1527587U;
	volatile int64_t x791 = 26557067082605473LL;
	uint8_t x792 = UINT8_MAX;

    t190 = (x789-(x790==(x791/x792)));

    if (t190 != 1527587U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x793 = 645;
	int64_t x794 = INT64_MIN;
	static volatile int8_t x795 = INT8_MIN;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t191 = 2696;

    t191 = (x793-(x794==(x795/x796)));

    if (t191 != 645) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x798 = INT8_MIN;
	int64_t x799 = -517098321966406LL;
	int16_t x800 = INT16_MAX;
	volatile int32_t t192 = 13;

    t192 = (x797-(x798==(x799/x800)));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x801 = INT16_MIN;
	uint32_t x802 = UINT32_MAX;
	int64_t x803 = 1154038542LL;
	int16_t x804 = INT16_MIN;
	int32_t t193 = -4310367;

    t193 = (x801-(x802==(x803/x804)));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x805 = -1LL;
	int16_t x806 = INT16_MAX;
	volatile uint16_t x807 = 46U;
	int16_t x808 = INT16_MAX;
	int64_t t194 = 3699078115LL;

    t194 = (x805-(x806==(x807/x808)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x809 = INT64_MIN;
	uint16_t x810 = 26931U;
	int64_t x811 = 71056227002157LL;
	int16_t x812 = -1973;
	volatile int64_t t195 = INT64_MIN;

    t195 = (x809-(x810==(x811/x812)));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x813 = 52U;
	uint32_t x814 = 32658U;
	static volatile uint8_t x816 = 24U;

    t196 = (x813-(x814==(x815/x816)));

    if (t196 != 52) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x819 = INT8_MIN;
	int32_t x820 = INT32_MIN;
	volatile int32_t t197 = 484;

    t197 = (x817-(x818==(x819/x820)));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x821 = INT64_MIN;
	uint32_t x822 = 259800U;
	static int16_t x824 = INT16_MAX;

    t198 = (x821-(x822==(x823/x824)));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x826 = 3231751326453405161LLU;
	uint32_t x827 = 186U;
	int32_t x828 = -1;
	static volatile uint64_t t199 = 192732668356LLU;

    t199 = (x825-(x826==(x827/x828)));

    if (t199 != 58614LLU) { NG(); } else { ; }
	
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

