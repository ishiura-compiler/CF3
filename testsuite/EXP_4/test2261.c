
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

int32_t x8 = -23;
int32_t x11 = INT32_MIN;
uint8_t x17 = UINT8_MAX;
uint32_t x18 = UINT32_MAX;
uint16_t x24 = 99U;
static int32_t t5 = -21538;
static volatile int64_t x32 = -1LL;
int32_t x33 = 44;
static int32_t t8 = 24236695;
static int64_t x41 = -253606615LL;
int8_t x43 = -1;
int32_t t10 = -108591477;
int32_t x47 = 22643;
uint16_t x48 = 847U;
volatile int32_t t13 = 30007041;
uint32_t x57 = UINT32_MAX;
static uint64_t x59 = 237814LLU;
int8_t x64 = INT8_MAX;
int8_t x67 = INT8_MIN;
static uint16_t x71 = 0U;
int8_t x72 = INT8_MIN;
int32_t x75 = INT32_MIN;
int16_t x90 = INT16_MIN;
volatile int8_t x91 = INT8_MAX;
int64_t x94 = 10LL;
uint32_t x98 = UINT32_MAX;
volatile int16_t x105 = 5062;
volatile int32_t t27 = 118;
int64_t x113 = -4121LL;
uint16_t x114 = UINT16_MAX;
int8_t x116 = 1;
int32_t t28 = 30;
int16_t x119 = INT16_MIN;
int32_t x122 = INT32_MIN;
volatile int8_t x123 = INT8_MIN;
static volatile int32_t t34 = -177682;
static int8_t x143 = -1;
uint64_t x152 = 34LLU;
int16_t x153 = INT16_MAX;
int16_t x164 = 298;
int8_t x165 = 57;
int16_t x166 = INT16_MIN;
volatile int32_t t43 = 3360;
int8_t x178 = 15;
static uint32_t x179 = 7031745U;
int16_t x182 = INT16_MIN;
volatile uint8_t x188 = 0U;
int8_t x191 = 0;
static int16_t x201 = 7;
int64_t x205 = -1500622192577762858LL;
volatile int32_t t51 = 18;
uint8_t x212 = UINT8_MAX;
uint32_t x213 = 561U;
int16_t x215 = -1;
int64_t x224 = INT64_MIN;
static int8_t x226 = INT8_MIN;
int32_t x231 = 1235675;
int32_t x234 = 7;
static uint32_t x239 = 288785765U;
int32_t t59 = 766;
int32_t x241 = INT32_MAX;
static volatile int32_t t60 = -7871412;
int16_t x255 = -3;
volatile int16_t x259 = INT16_MIN;
volatile int64_t x261 = INT64_MAX;
static int16_t x263 = INT16_MAX;
int16_t x269 = 0;
uint16_t x275 = 949U;
int32_t x278 = -1;
uint64_t x279 = UINT64_MAX;
int32_t t69 = 62109;
int64_t x281 = -1LL;
int32_t x285 = 58644680;
uint64_t x286 = 95094LLU;
volatile int32_t t71 = 383653;
int16_t x289 = 149;
int64_t x290 = INT64_MAX;
int8_t x294 = 0;
uint64_t x297 = 16894756044LLU;
uint32_t x300 = 5857U;
volatile uint16_t x302 = 25U;
volatile int64_t x303 = INT64_MAX;
int16_t x304 = -3891;
volatile uint8_t x306 = UINT8_MAX;
int64_t x307 = INT64_MIN;
static int32_t x309 = INT32_MIN;
int64_t x310 = INT64_MAX;
uint16_t x312 = 15088U;
uint64_t x324 = 10810881270303LLU;
static volatile int32_t t80 = -62931207;
volatile int16_t x331 = INT16_MIN;
int32_t t82 = -27;
int8_t x333 = -1;
int32_t t83 = -1;
int64_t x340 = INT64_MAX;
uint64_t x347 = 0LLU;
int16_t x349 = 1;
volatile int16_t x350 = INT16_MIN;
uint8_t x351 = 5U;
int64_t x352 = -1LL;
int8_t x356 = INT8_MIN;
uint64_t x358 = 6260LLU;
int64_t x363 = INT64_MIN;
static int8_t x372 = -1;
int16_t x395 = 17;
uint16_t x400 = 22U;
int32_t t99 = 157;
int32_t t100 = 9916503;
static int32_t x407 = INT32_MIN;
uint64_t x416 = 68087192166189034LLU;
static uint16_t x420 = UINT16_MAX;
uint32_t x421 = UINT32_MAX;
uint16_t x422 = UINT16_MAX;
static int16_t x434 = -1;
uint8_t x436 = 25U;
volatile int32_t t108 = -1057113;
uint16_t x440 = UINT16_MAX;
int8_t x444 = INT8_MIN;
static int8_t x446 = 2;
int16_t x449 = -1;
static uint32_t x451 = 198750U;
volatile int32_t t112 = 118;
volatile int32_t t113 = -3;
volatile int32_t x465 = -1;
int32_t x471 = INT32_MIN;
volatile int16_t x472 = 0;
volatile int32_t x473 = INT32_MIN;
int32_t t119 = -17478305;
int32_t t120 = -1;
int32_t x487 = -27583;
volatile uint16_t x491 = UINT16_MAX;
static volatile int64_t x492 = -1LL;
static int32_t t122 = 735382;
uint32_t x496 = 18608278U;
uint16_t x498 = 3143U;
uint8_t x500 = UINT8_MAX;
int64_t x505 = INT64_MIN;
volatile int32_t t126 = -22;
uint64_t x511 = 46LLU;
volatile uint16_t x515 = 1U;
int32_t x516 = -99;
static volatile uint16_t x517 = 317U;
uint32_t x519 = 6233U;
int32_t t131 = 2;
uint32_t x530 = UINT32_MAX;
volatile int32_t t132 = -83926966;
int32_t x540 = 114;
uint32_t x544 = UINT32_MAX;
int64_t x552 = INT64_MIN;
int64_t x557 = -1LL;
int32_t t139 = -1;
int8_t x566 = INT8_MIN;
static volatile uint64_t x571 = UINT64_MAX;
int32_t t142 = 14689380;
int8_t x573 = -1;
int64_t x583 = 1504023299189855LL;
int16_t x586 = INT16_MIN;
int32_t t147 = -2633252;
int16_t x593 = -7272;
int32_t t148 = 702606;
volatile int8_t x598 = -1;
int32_t x602 = -1;
int16_t x604 = INT16_MIN;
static int32_t t150 = -67638;
int64_t x605 = -39673288247095178LL;
uint8_t x607 = 1U;
int8_t x613 = INT8_MIN;
int64_t x614 = -1315459033646LL;
volatile int32_t t153 = -50;
static int16_t x618 = INT16_MIN;
int64_t x625 = INT64_MIN;
int32_t x626 = INT32_MIN;
int32_t x627 = INT32_MIN;
uint32_t x629 = 299127U;
volatile int16_t x632 = INT16_MIN;
volatile uint32_t x635 = UINT32_MAX;
volatile int32_t t158 = 0;
int16_t x642 = INT16_MIN;
volatile int16_t x650 = 0;
volatile int32_t x653 = -1;
int16_t x656 = INT16_MIN;
static volatile int32_t t164 = 0;
volatile int64_t x662 = INT64_MAX;
uint32_t x663 = 615U;
int32_t x671 = INT32_MIN;
uint32_t x675 = 652245U;
volatile int32_t t170 = -82;
static int8_t x689 = INT8_MIN;
static uint64_t x691 = UINT64_MAX;
static int16_t x697 = INT16_MIN;
int16_t x698 = INT16_MAX;
int64_t x700 = INT64_MIN;
static volatile int32_t t175 = -2287587;
int16_t x711 = 13;
volatile uint16_t x719 = 2237U;
int16_t x720 = 176;
volatile int32_t t180 = 220922161;
uint64_t x726 = 227153658923253724LLU;
int16_t x729 = INT16_MIN;
int16_t x731 = INT16_MIN;
static int8_t x745 = 0;
uint8_t x746 = UINT8_MAX;
uint64_t x751 = UINT64_MAX;
int16_t x762 = -319;
volatile int8_t x768 = -2;
int32_t x772 = -946;
volatile int32_t t193 = 23602903;
int32_t x778 = -1;
int64_t x782 = INT64_MIN;
volatile int8_t x786 = INT8_MIN;
int8_t x787 = -1;
int32_t t196 = -53;
int32_t x799 = INT32_MAX;


void f0(void) {
    	volatile int8_t x1 = 32;
	uint32_t x2 = UINT32_MAX;
	static volatile int64_t x3 = INT64_MIN;
	static volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -935;

    t0 = (x1!=(x2==(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -50298744LL;
	volatile uint32_t x6 = 864345U;
	int16_t x7 = 0;
	volatile int32_t t1 = 131084002;

    t1 = (x5!=(x6==(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 2LLU;
	uint8_t x10 = 7U;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -1;

    t2 = (x9!=(x10==(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -782677357LL;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 0LLU;
	int32_t t3 = 1;

    t3 = (x13!=(x14==(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x19 = INT8_MIN;
	uint16_t x20 = 4694U;
	static int32_t t4 = -14826;

    t4 = (x17!=(x18==(x19&x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = -50;

    t5 = (x21!=(x22==(x23&x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 0U;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = 345157;

    t6 = (x25!=(x26==(x27&x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 30U;
	static int8_t x30 = INT8_MAX;
	static uint64_t x31 = 95499176327LLU;
	static volatile int32_t t7 = -966481;

    t7 = (x29!=(x30==(x31&x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x34 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	static uint8_t x36 = UINT8_MAX;

    t8 = (x33!=(x34==(x35&x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 26626U;
	static int8_t x38 = -1;
	uint32_t x39 = 0U;
	int16_t x40 = -2;
	volatile int32_t t9 = -49482534;

    t9 = (x37!=(x38==(x39&x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = -8621;
	volatile int64_t x44 = INT64_MAX;

    t10 = (x41!=(x42==(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	int32_t t11 = -103;

    t11 = (x45!=(x46==(x47&x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 0;
	uint8_t x50 = 1U;
	int16_t x51 = -17;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = 122072995;

    t12 = (x49!=(x50==(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x53 = 235083754U;
	int64_t x54 = 14533645LL;
	uint64_t x55 = UINT64_MAX;
	uint8_t x56 = 1U;

    t13 = (x53!=(x54==(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x58 = -238572046LL;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -121374;

    t14 = (x57!=(x58==(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MAX;
	static int32_t x62 = 1;
	uint32_t x63 = UINT32_MAX;
	volatile int32_t t15 = 232;

    t15 = (x61!=(x62==(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 27;
	volatile int8_t x66 = -1;
	int16_t x68 = -318;
	static int32_t t16 = -937730837;

    t16 = (x65!=(x66==(x67&x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = -22;
	int32_t t17 = 948626662;

    t17 = (x69!=(x70==(x71&x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 4;
	static int16_t x74 = -2;
	volatile uint8_t x76 = 2U;
	static volatile int32_t t18 = 2355885;

    t18 = (x73!=(x74==(x75&x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	volatile uint8_t x78 = 42U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	static int32_t t19 = 2689556;

    t19 = (x77!=(x78==(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 10LL;
	volatile int8_t x82 = 0;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = -46149;

    t20 = (x81!=(x82==(x83&x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	static int8_t x86 = 6;
	int64_t x87 = -25502286015745919LL;
	volatile int32_t x88 = 88044842;
	volatile int32_t t21 = 0;

    t21 = (x85!=(x86==(x87&x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 7U;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = -248;

    t22 = (x89!=(x90==(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = 0U;
	int8_t x95 = 4;
	int8_t x96 = -1;
	int32_t t23 = -889498;

    t23 = (x93!=(x94==(x95&x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = -22849LL;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = INT64_MIN;
	int32_t t24 = 1089847;

    t24 = (x97!=(x98==(x99&x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 2U;
	static int16_t x102 = -1;
	int64_t x103 = INT64_MIN;
	volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -436378;

    t25 = (x101!=(x102==(x103&x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = -66037651;
	static int32_t x107 = INT32_MIN;
	uint8_t x108 = 0U;
	volatile int32_t t26 = 924;

    t26 = (x105!=(x106==(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	volatile uint16_t x110 = 5U;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -1;

    t27 = (x109!=(x110==(x111&x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x115 = UINT8_MAX;

    t28 = (x113!=(x114==(x115&x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MIN;
	int64_t x118 = -1LL;
	int32_t x120 = INT32_MIN;
	int32_t t29 = 42296;

    t29 = (x117!=(x118==(x119&x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	static volatile uint16_t x124 = 14U;
	int32_t t30 = 493223568;

    t30 = (x121!=(x122==(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = 68237337132583037LL;
	volatile uint32_t x126 = 259564U;
	int64_t x127 = -1LL;
	static volatile uint8_t x128 = 95U;
	int32_t t31 = -187881;

    t31 = (x125!=(x126==(x127&x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	volatile int64_t x130 = -62LL;
	int8_t x131 = -1;
	uint32_t x132 = 374U;
	int32_t t32 = 613;

    t32 = (x129!=(x130==(x131&x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	volatile uint64_t x134 = UINT64_MAX;
	static volatile uint16_t x135 = 8U;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t33 = 60;

    t33 = (x133!=(x134==(x135&x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MIN;
	uint8_t x138 = UINT8_MAX;
	volatile int8_t x139 = -1;
	uint32_t x140 = UINT32_MAX;

    t34 = (x137!=(x138==(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 639653634U;
	static int8_t x142 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 249000;

    t35 = (x141!=(x142==(x143&x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	uint64_t x146 = 40061768137LLU;
	static volatile int16_t x147 = INT16_MAX;
	volatile int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 803249525;

    t36 = (x145!=(x146==(x147&x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 28606689113574LLU;
	int8_t x150 = INT8_MIN;
	static volatile int32_t x151 = 1648;
	static int32_t t37 = -7613;

    t37 = (x149!=(x150==(x151&x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x154 = 15325U;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = 57212794522461121LLU;
	int32_t t38 = -467;

    t38 = (x153!=(x154==(x155&x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	int64_t x159 = 35011LL;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -2;

    t39 = (x157!=(x158==(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 39U;
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = -343034802;

    t40 = (x161!=(x162==(x163&x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x167 = 101011565;
	volatile int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -80152;

    t41 = (x165!=(x166==(x167&x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -38819236514147LL;
	int64_t x170 = -12603LL;
	uint64_t x171 = 4856863100011LLU;
	int16_t x172 = 0;
	int32_t t42 = 0;

    t42 = (x169!=(x170==(x171&x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 5095U;
	volatile int64_t x174 = INT64_MAX;
	int8_t x175 = 7;
	volatile int16_t x176 = 0;

    t43 = (x173!=(x174==(x175&x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = UINT32_MAX;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -919414969;

    t44 = (x177!=(x178==(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -4;
	static volatile uint64_t x183 = 3458LLU;
	static int16_t x184 = -1;
	volatile int32_t t45 = 215637875;

    t45 = (x181!=(x182==(x183&x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -13;
	uint8_t x186 = 2U;
	volatile uint64_t x187 = 151LLU;
	int32_t t46 = -188182744;

    t46 = (x185!=(x186==(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 31;
	int32_t x190 = INT32_MIN;
	int32_t x192 = -1;
	int32_t t47 = 83;

    t47 = (x189!=(x190==(x191&x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 8278353U;
	int64_t x194 = -1LL;
	uint8_t x195 = 105U;
	volatile uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = -787;

    t48 = (x193!=(x194==(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 200U;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 3342270;

    t49 = (x197!=(x198==(x199&x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x202 = 165560834;
	int64_t x203 = -1LL;
	uint8_t x204 = 0U;
	static int32_t t50 = -83786130;

    t50 = (x201!=(x202==(x203&x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x206 = -58LL;
	static int16_t x207 = INT16_MAX;
	int32_t x208 = 16;

    t51 = (x205!=(x206==(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -1LL;
	uint64_t x210 = 75425082734526139LLU;
	static int32_t x211 = INT32_MAX;
	int32_t t52 = 22985;

    t52 = (x209!=(x210==(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x214 = 6920U;
	uint16_t x216 = 3469U;
	volatile int32_t t53 = -869;

    t53 = (x213!=(x214==(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -77347;
	int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	volatile int32_t t54 = -205290604;

    t54 = (x217!=(x218==(x219&x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = UINT16_MAX;
	static int32_t x222 = INT32_MIN;
	uint8_t x223 = 1U;
	static volatile int32_t t55 = 47532194;

    t55 = (x221!=(x222==(x223&x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 58;
	static int8_t x227 = -30;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -11783991;

    t56 = (x225!=(x226==(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	int32_t x232 = -181546014;
	int32_t t57 = 4906667;

    t57 = (x229!=(x230==(x231&x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = -43;
	int32_t x235 = -1;
	volatile int32_t x236 = INT32_MIN;
	static int32_t t58 = -1572;

    t58 = (x233!=(x234==(x235&x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MAX;
	volatile int8_t x240 = -1;

    t59 = (x237!=(x238==(x239&x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = INT32_MIN;
	volatile uint16_t x243 = UINT16_MAX;
	volatile int8_t x244 = 1;

    t60 = (x241!=(x242==(x243&x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = -6740824LL;
	int32_t x246 = INT32_MIN;
	volatile int32_t x247 = INT32_MIN;
	static volatile uint32_t x248 = UINT32_MAX;
	int32_t t61 = 1135;

    t61 = (x245!=(x246==(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t62 = -475;

    t62 = (x249!=(x250==(x251&x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 186300LL;
	int32_t x254 = 161955389;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = 8;

    t63 = (x253!=(x254==(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	volatile int64_t x258 = -1LL;
	volatile uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = -6295;

    t64 = (x257!=(x258==(x259&x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = 0;

    t65 = (x261!=(x262==(x263&x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	volatile int32_t x266 = -63104913;
	uint64_t x267 = 48142033745280LLU;
	volatile int64_t x268 = 699126839584984LL;
	volatile int32_t t66 = -1;

    t66 = (x265!=(x266==(x267&x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	static uint32_t x272 = UINT32_MAX;
	int32_t t67 = -573219;

    t67 = (x269!=(x270==(x271&x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	volatile uint32_t x274 = 0U;
	volatile int8_t x276 = INT8_MAX;
	static int32_t t68 = -820489389;

    t68 = (x273!=(x274==(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;

    t69 = (x277!=(x278==(x279&x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = 27U;
	uint8_t x283 = 9U;
	static int16_t x284 = INT16_MIN;
	int32_t t70 = 99;

    t70 = (x281!=(x282==(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x287 = -1LL;
	int8_t x288 = INT8_MIN;

    t71 = (x285!=(x286==(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x291 = 189144525712LL;
	static int16_t x292 = -1;
	static volatile int32_t t72 = 6;

    t72 = (x289!=(x290==(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -4658952560941LL;
	volatile int32_t t73 = 72;

    t73 = (x293!=(x294==(x295&x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x298 = 1234U;
	volatile int8_t x299 = INT8_MIN;
	int32_t t74 = -72258;

    t74 = (x297!=(x298==(x299&x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -1;
	volatile int32_t t75 = -6;

    t75 = (x301!=(x302==(x303&x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	uint16_t x308 = 1593U;
	int32_t t76 = 45705990;

    t76 = (x305!=(x306==(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x311 = 2947253U;
	static volatile int32_t t77 = 242200441;

    t77 = (x309!=(x310==(x311&x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 0U;
	int8_t x314 = INT8_MAX;
	static int16_t x315 = 145;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 1122;

    t78 = (x313!=(x314==(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x317 = INT16_MIN;
	int16_t x318 = -907;
	volatile int64_t x319 = INT64_MIN;
	static volatile uint16_t x320 = 12372U;
	int32_t t79 = -3;

    t79 = (x317!=(x318==(x319&x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	int16_t x322 = INT16_MAX;
	int8_t x323 = 3;

    t80 = (x321!=(x322==(x323&x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	volatile int8_t x326 = -1;
	volatile int64_t x327 = -1LL;
	static uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -14;

    t81 = (x325!=(x326==(x327&x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint16_t x330 = 1U;
	int16_t x332 = INT16_MAX;

    t82 = (x329!=(x330==(x331&x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x334 = 172539U;
	int64_t x335 = 138062715629527695LL;
	int64_t x336 = INT64_MIN;

    t83 = (x333!=(x334==(x335&x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t t84 = -10764;

    t84 = (x337!=(x338==(x339&x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	uint8_t x342 = UINT8_MAX;
	static int64_t x343 = -1LL;
	static uint16_t x344 = 3U;
	volatile int32_t t85 = -1527848;

    t85 = (x341!=(x342==(x343&x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 3U;
	uint8_t x346 = UINT8_MAX;
	int8_t x348 = INT8_MAX;
	static int32_t t86 = 60450;

    t86 = (x345!=(x346==(x347&x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t t87 = -1;

    t87 = (x349!=(x350==(x351&x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static int64_t x354 = -164953LL;
	static int16_t x355 = -1;
	volatile int32_t t88 = -15;

    t88 = (x353!=(x354==(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	int32_t x359 = -1;
	volatile int16_t x360 = INT16_MIN;
	static int32_t t89 = -4;

    t89 = (x357!=(x358==(x359&x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	static int16_t x362 = 92;
	volatile int16_t x364 = INT16_MIN;
	int32_t t90 = 49;

    t90 = (x361!=(x362==(x363&x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	int32_t x368 = 65100864;
	volatile int32_t t91 = -3680797;

    t91 = (x365!=(x366==(x367&x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MAX;
	static int8_t x371 = 5;
	int32_t t92 = 54028;

    t92 = (x369!=(x370==(x371&x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x373 = -25;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	int32_t x376 = -1;
	int32_t t93 = -1;

    t93 = (x373!=(x374==(x375&x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 6872;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	static volatile int64_t x380 = -1LL;
	volatile int32_t t94 = 1;

    t94 = (x377!=(x378==(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 10U;
	int8_t x382 = -1;
	volatile int8_t x383 = -1;
	int32_t x384 = 3523682;
	volatile int32_t t95 = -51464346;

    t95 = (x381!=(x382==(x383&x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = -1LL;
	volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 22;

    t96 = (x385!=(x386==(x387&x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MIN;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -1;
	int32_t x392 = 1422023;
	int32_t t97 = 52708;

    t97 = (x389!=(x390==(x391&x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -330;
	int8_t x394 = INT8_MAX;
	static int32_t x396 = INT32_MIN;
	int32_t t98 = -11122;

    t98 = (x393!=(x394==(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	volatile int64_t x398 = 39932308077007695LL;
	uint64_t x399 = UINT64_MAX;

    t99 = (x397!=(x398==(x399&x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -660;
	volatile int32_t x402 = INT32_MIN;
	uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = -1;

    t100 = (x401!=(x402==(x403&x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	int32_t x406 = -1;
	int8_t x408 = INT8_MIN;
	int32_t t101 = 74414566;

    t101 = (x405!=(x406==(x407&x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -1;
	volatile int64_t x410 = 871677590131532LL;
	volatile uint16_t x411 = 1846U;
	static uint16_t x412 = 2U;
	static volatile int32_t t102 = 24778608;

    t102 = (x409!=(x410==(x411&x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	static int16_t x414 = -1;
	volatile uint16_t x415 = UINT16_MAX;
	volatile int32_t t103 = 32;

    t103 = (x413!=(x414==(x415&x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = -6751;
	int16_t x418 = INT16_MIN;
	int64_t x419 = 7452309758847LL;
	int32_t t104 = -19649953;

    t104 = (x417!=(x418==(x419&x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = INT64_MIN;
	int16_t x424 = -120;
	int32_t t105 = 120517;

    t105 = (x421!=(x422==(x423&x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	static int32_t x426 = INT32_MIN;
	static int8_t x427 = INT8_MIN;
	int16_t x428 = -43;
	volatile int32_t t106 = 10616;

    t106 = (x425!=(x426==(x427&x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 406596121517LL;
	int64_t x430 = INT64_MIN;
	static int64_t x431 = INT64_MIN;
	volatile uint8_t x432 = UINT8_MAX;
	int32_t t107 = 15;

    t107 = (x429!=(x430==(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 2U;
	int64_t x435 = 370689809219LL;

    t108 = (x433!=(x434==(x435&x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	uint64_t x438 = UINT64_MAX;
	volatile int8_t x439 = -6;
	volatile int32_t t109 = 343598499;

    t109 = (x437!=(x438==(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 0;
	static int64_t x442 = INT64_MIN;
	static int64_t x443 = INT64_MIN;
	volatile int32_t t110 = -1;

    t110 = (x441!=(x442==(x443&x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = 1984116566LL;
	volatile int32_t x447 = INT32_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = 3589862;

    t111 = (x445!=(x446==(x447&x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x450 = UINT64_MAX;
	int32_t x452 = INT32_MAX;

    t112 = (x449!=(x450==(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 14U;
	static int32_t x454 = -1;
	uint64_t x455 = 316712734LLU;
	static volatile uint64_t x456 = UINT64_MAX;

    t113 = (x453!=(x454==(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = -4;
	int64_t x458 = INT64_MIN;
	int64_t x459 = -5LL;
	static int16_t x460 = INT16_MAX;
	static int32_t t114 = 19131201;

    t114 = (x457!=(x458==(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x461 = 11994923505196895LL;
	int8_t x462 = 2;
	uint32_t x463 = 144U;
	volatile int64_t x464 = -8799LL;
	volatile int32_t t115 = -749206;

    t115 = (x461!=(x462==(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x466 = 5861U;
	volatile int8_t x467 = INT8_MIN;
	volatile uint16_t x468 = 1U;
	int32_t t116 = -26438432;

    t116 = (x465!=(x466==(x467&x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	uint64_t x470 = 7525252184875152LLU;
	static volatile int32_t t117 = 0;

    t117 = (x469!=(x470==(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x474 = 7U;
	uint16_t x475 = 0U;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = -1;

    t118 = (x473!=(x474==(x475&x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 486U;
	uint8_t x478 = 0U;
	int16_t x479 = -13;
	static uint32_t x480 = UINT32_MAX;

    t119 = (x477!=(x478==(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = 774;
	volatile int64_t x483 = INT64_MIN;
	volatile int64_t x484 = INT64_MIN;

    t120 = (x481!=(x482==(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MAX;
	uint16_t x486 = 11989U;
	int32_t x488 = 91356;
	volatile int32_t t121 = -121371;

    t121 = (x485!=(x486==(x487&x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x489 = INT32_MAX;
	uint16_t x490 = 15U;

    t122 = (x489!=(x490==(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 20U;
	int64_t x494 = INT64_MIN;
	volatile uint8_t x495 = 72U;
	volatile int32_t t123 = -221784439;

    t123 = (x493!=(x494==(x495&x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x497 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	static volatile int32_t t124 = -13353;

    t124 = (x497!=(x498==(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	int16_t x502 = INT16_MIN;
	static volatile int16_t x503 = INT16_MIN;
	int8_t x504 = INT8_MIN;
	int32_t t125 = 14190;

    t125 = (x501!=(x502==(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x506 = 976001U;
	static uint64_t x507 = 1LLU;
	int8_t x508 = INT8_MAX;

    t126 = (x505!=(x506==(x507&x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MIN;
	uint32_t x510 = UINT32_MAX;
	uint32_t x512 = 112U;
	volatile int32_t t127 = -1;

    t127 = (x509!=(x510==(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 21U;
	static volatile int8_t x514 = 10;
	volatile int32_t t128 = -1;

    t128 = (x513!=(x514==(x515&x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x518 = INT32_MIN;
	static int8_t x520 = -1;
	int32_t t129 = -62398;

    t129 = (x517!=(x518==(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	volatile int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MAX;
	static volatile int8_t x524 = INT8_MIN;
	int32_t t130 = -2352524;

    t130 = (x521!=(x522==(x523&x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 125102104357399LLU;
	volatile int64_t x526 = -1LL;
	static int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;

    t131 = (x525!=(x526==(x527&x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MIN;
	uint64_t x531 = 261475LLU;
	static uint16_t x532 = 155U;

    t132 = (x529!=(x530==(x531&x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	uint8_t x534 = 6U;
	static int8_t x535 = 1;
	volatile int16_t x536 = INT16_MAX;
	static int32_t t133 = -167;

    t133 = (x533!=(x534==(x535&x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	static volatile uint32_t x538 = 651666U;
	int32_t x539 = -1;
	static int32_t t134 = 71187;

    t134 = (x537!=(x538==(x539&x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 0;
	uint16_t x542 = UINT16_MAX;
	static int64_t x543 = 692991581212269LL;
	int32_t t135 = 386740;

    t135 = (x541!=(x542==(x543&x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	static int32_t x546 = 6;
	volatile uint64_t x547 = 3831332984LLU;
	volatile int64_t x548 = INT64_MIN;
	volatile int32_t t136 = -93;

    t136 = (x545!=(x546==(x547&x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 9U;
	static int32_t x550 = -1;
	int32_t x551 = INT32_MIN;
	static volatile int32_t t137 = 1777334;

    t137 = (x549!=(x550==(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	uint32_t x554 = 680U;
	int8_t x555 = -1;
	int32_t x556 = -1;
	volatile int32_t t138 = 119;

    t138 = (x553!=(x554==(x555&x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = INT32_MIN;
	int64_t x559 = 410LL;
	volatile int64_t x560 = INT64_MAX;

    t139 = (x557!=(x558==(x559&x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MAX;
	static uint8_t x562 = 15U;
	static int16_t x563 = INT16_MIN;
	static uint16_t x564 = 3U;
	int32_t t140 = -7;

    t140 = (x561!=(x562==(x563&x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x567 = 177148;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -871330;

    t141 = (x565!=(x566==(x567&x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	uint8_t x570 = 1U;
	static int64_t x572 = INT64_MAX;

    t142 = (x569!=(x570==(x571&x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x574 = -1;
	int32_t x575 = INT32_MAX;
	volatile int64_t x576 = INT64_MIN;
	static int32_t t143 = -29;

    t143 = (x573!=(x574==(x575&x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int8_t x578 = INT8_MIN;
	uint64_t x579 = UINT64_MAX;
	volatile int8_t x580 = -1;
	static volatile int32_t t144 = -20248;

    t144 = (x577!=(x578==(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 72U;
	int32_t x582 = INT32_MIN;
	uint32_t x584 = 12811503U;
	static volatile int32_t t145 = 51;

    t145 = (x581!=(x582==(x583&x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	int8_t x587 = INT8_MIN;
	uint64_t x588 = UINT64_MAX;
	volatile int32_t t146 = -8081;

    t146 = (x585!=(x586==(x587&x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x589 = UINT32_MAX;
	static int32_t x590 = INT32_MIN;
	int8_t x591 = -1;
	int8_t x592 = INT8_MAX;

    t147 = (x589!=(x590==(x591&x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x594 = -1LL;
	static int64_t x595 = INT64_MIN;
	static uint32_t x596 = 3118U;

    t148 = (x593!=(x594==(x595&x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = 381LL;
	volatile uint8_t x599 = 1U;
	int32_t x600 = -1;
	int32_t t149 = 3501;

    t149 = (x597!=(x598==(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = -14340;
	int64_t x603 = -394615LL;

    t150 = (x601!=(x602==(x603&x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x606 = UINT32_MAX;
	int8_t x608 = INT8_MAX;
	static int32_t t151 = 2705521;

    t151 = (x605!=(x606==(x607&x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 62;
	uint32_t x610 = UINT32_MAX;
	static int32_t x611 = 18;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t152 = -12;

    t152 = (x609!=(x610==(x611&x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x615 = 1066;
	int64_t x616 = INT64_MIN;

    t153 = (x613!=(x614==(x615&x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 98U;
	int16_t x619 = -1;
	int64_t x620 = INT64_MIN;
	static volatile int32_t t154 = -1463;

    t154 = (x617!=(x618==(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 7;
	uint32_t x622 = 3U;
	volatile int64_t x623 = INT64_MIN;
	static int32_t x624 = -1836910;
	volatile int32_t t155 = -63089240;

    t155 = (x621!=(x622==(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x628 = INT8_MIN;
	volatile int32_t t156 = 41;

    t156 = (x625!=(x626==(x627&x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = 1;
	int32_t x631 = 701;
	int32_t t157 = -179134;

    t157 = (x629!=(x630==(x631&x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	static int8_t x634 = INT8_MIN;
	int16_t x636 = 12480;

    t158 = (x633!=(x634==(x635&x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = 60U;
	static volatile int32_t x638 = 474;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 558283522572895LLU;
	int32_t t159 = -327767344;

    t159 = (x637!=(x638==(x639&x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	int16_t x643 = INT16_MIN;
	static uint8_t x644 = 19U;
	int32_t t160 = 10082533;

    t160 = (x641!=(x642==(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 23388434LLU;
	int32_t x646 = -1;
	int8_t x647 = INT8_MIN;
	uint32_t x648 = 5017U;
	volatile int32_t t161 = 7;

    t161 = (x645!=(x646==(x647&x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	int8_t x651 = -5;
	uint32_t x652 = 114224U;
	volatile int32_t t162 = -1;

    t162 = (x649!=(x650==(x651&x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x654 = -1;
	volatile int64_t x655 = 1004349598399506996LL;
	volatile int32_t t163 = 1948178;

    t163 = (x653!=(x654==(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 0;
	static int64_t x658 = 545051956776LL;
	static int32_t x659 = INT32_MIN;
	volatile int8_t x660 = 0;

    t164 = (x657!=(x658==(x659&x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = 0;
	int32_t x664 = -1;
	volatile int32_t t165 = 1;

    t165 = (x661!=(x662==(x663&x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	volatile int32_t x666 = -1;
	int64_t x667 = -1LL;
	static int8_t x668 = -1;
	volatile int32_t t166 = 0;

    t166 = (x665!=(x666==(x667&x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	volatile int32_t x670 = -1;
	int32_t x672 = INT32_MIN;
	static int32_t t167 = -85776220;

    t167 = (x669!=(x670==(x671&x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x673 = 949829517596141LLU;
	static uint32_t x674 = 24953650U;
	int8_t x676 = INT8_MAX;
	volatile int32_t t168 = -1;

    t168 = (x673!=(x674==(x675&x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = 1;
	static int64_t x678 = INT64_MIN;
	uint32_t x679 = 7331832U;
	volatile int64_t x680 = INT64_MIN;
	static volatile int32_t t169 = 0;

    t169 = (x677!=(x678==(x679&x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	static uint64_t x682 = 25890051915LLU;
	uint64_t x683 = UINT64_MAX;
	volatile int8_t x684 = 12;

    t170 = (x681!=(x682==(x683&x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = 26118U;
	static volatile int64_t x686 = -1LL;
	static uint32_t x687 = 23710538U;
	int8_t x688 = -1;
	int32_t t171 = 54088964;

    t171 = (x685!=(x686==(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = INT64_MIN;
	int16_t x692 = 0;
	static int32_t t172 = -1;

    t172 = (x689!=(x690==(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = 14477486095LL;
	static uint64_t x694 = 139733808LLU;
	int8_t x695 = -1;
	uint8_t x696 = UINT8_MAX;
	volatile int32_t t173 = 18463;

    t173 = (x693!=(x694==(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x699 = INT32_MIN;
	int32_t t174 = -49392;

    t174 = (x697!=(x698==(x699&x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	int64_t x702 = -14621084714027032LL;
	volatile uint16_t x703 = 15477U;
	volatile int16_t x704 = INT16_MIN;

    t175 = (x701!=(x702==(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x705 = UINT16_MAX;
	static int16_t x706 = -30;
	int16_t x707 = INT16_MIN;
	static int32_t x708 = INT32_MIN;
	static volatile int32_t t176 = -19545989;

    t176 = (x705!=(x706==(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	uint16_t x710 = 691U;
	uint16_t x712 = UINT16_MAX;
	static volatile int32_t t177 = -12;

    t177 = (x709!=(x710==(x711&x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 17LLU;
	int16_t x714 = INT16_MAX;
	int16_t x715 = INT16_MIN;
	uint64_t x716 = UINT64_MAX;
	int32_t t178 = -200845;

    t178 = (x713!=(x714==(x715&x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MAX;
	int16_t x718 = -1;
	int32_t t179 = 2;

    t179 = (x717!=(x718==(x719&x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MIN;
	int64_t x722 = -1LL;
	int32_t x723 = INT32_MAX;
	int32_t x724 = -1;

    t180 = (x721!=(x722==(x723&x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	uint16_t x727 = 4344U;
	volatile uint32_t x728 = 1U;
	static int32_t t181 = -151;

    t181 = (x725!=(x726==(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = -1;
	uint64_t x732 = 147693596794LLU;
	volatile int32_t t182 = -1816459;

    t182 = (x729!=(x730==(x731&x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 14LLU;
	int32_t x734 = -1;
	volatile uint64_t x735 = UINT64_MAX;
	int64_t x736 = INT64_MIN;
	int32_t t183 = 20711827;

    t183 = (x733!=(x734==(x735&x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = UINT32_MAX;
	static int8_t x738 = INT8_MIN;
	uint64_t x739 = 165081659LLU;
	static int64_t x740 = -778835310931LL;
	int32_t t184 = -28;

    t184 = (x737!=(x738==(x739&x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = -461763;
	int64_t x742 = -34576546818488700LL;
	static volatile int8_t x743 = -50;
	int64_t x744 = INT64_MIN;
	static int32_t t185 = -2639;

    t185 = (x741!=(x742==(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x747 = INT16_MIN;
	int32_t x748 = -1;
	int32_t t186 = 3;

    t186 = (x745!=(x746==(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x749 = 65590802805LLU;
	int32_t x750 = -758270;
	int32_t x752 = INT32_MIN;
	volatile int32_t t187 = 2277120;

    t187 = (x749!=(x750==(x751&x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 7U;
	volatile uint64_t x754 = 112859329573LLU;
	static int32_t x755 = INT32_MAX;
	volatile int8_t x756 = INT8_MIN;
	static volatile int32_t t188 = -2324976;

    t188 = (x753!=(x754==(x755&x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	volatile int16_t x758 = -8;
	volatile int64_t x759 = -1LL;
	uint32_t x760 = 2102292U;
	int32_t t189 = -7369;

    t189 = (x757!=(x758==(x759&x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 39U;
	volatile uint32_t x763 = UINT32_MAX;
	uint16_t x764 = 4U;
	volatile int32_t t190 = 2;

    t190 = (x761!=(x762==(x763&x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MAX;
	static int16_t x766 = -1;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t t191 = 201528;

    t191 = (x765!=(x766==(x767&x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 9720813U;
	int8_t x770 = INT8_MIN;
	volatile int8_t x771 = -1;
	static int32_t t192 = -95407954;

    t192 = (x769!=(x770==(x771&x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	uint32_t x774 = 56467850U;
	int16_t x775 = INT16_MIN;
	volatile int32_t x776 = INT32_MIN;

    t193 = (x773!=(x774==(x775&x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x779 = 0;
	static int16_t x780 = 0;
	int32_t t194 = -199590278;

    t194 = (x777!=(x778==(x779&x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	int64_t x784 = -1LL;
	int32_t t195 = -13;

    t195 = (x781!=(x782==(x783&x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = 360U;
	volatile int64_t x788 = -323205LL;

    t196 = (x785!=(x786==(x787&x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	static uint32_t x790 = 61651U;
	int16_t x791 = -1;
	int64_t x792 = -34068177486964672LL;
	int32_t t197 = -22430996;

    t197 = (x789!=(x790==(x791&x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = 980079952927169LL;
	static int8_t x794 = 5;
	int16_t x795 = INT16_MAX;
	int16_t x796 = -511;
	static volatile int32_t t198 = -4662101;

    t198 = (x793!=(x794==(x795&x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 3;
	volatile uint32_t x798 = 231U;
	int64_t x800 = -1LL;
	int32_t t199 = -4723649;

    t199 = (x797!=(x798==(x799&x800)));

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

