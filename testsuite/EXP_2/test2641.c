
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

static int8_t x4 = INT8_MIN;
int32_t t2 = 0;
static uint8_t x14 = 3U;
int32_t x16 = -6520300;
volatile int32_t x17 = -3607;
int64_t x27 = INT64_MIN;
uint8_t x31 = UINT8_MAX;
static int32_t x34 = -1;
volatile int16_t x35 = -1;
uint32_t x40 = 78U;
static volatile int32_t x41 = -20211906;
volatile int8_t x55 = INT8_MAX;
uint8_t x56 = 38U;
uint64_t x57 = 7LLU;
int16_t x60 = -1;
int32_t t14 = -119766;
uint32_t x67 = 126478959U;
uint32_t x69 = UINT32_MAX;
int32_t t17 = -8786665;
static uint32_t x73 = 1743744U;
volatile int16_t x74 = -40;
uint16_t x80 = 15287U;
int32_t x84 = INT32_MIN;
static volatile uint16_t x86 = UINT16_MAX;
static uint64_t x92 = UINT64_MAX;
volatile int32_t t22 = 5799480;
int32_t t26 = 1651190;
int32_t t27 = -7792413;
static int32_t x119 = 9201729;
int16_t x120 = -225;
int8_t x124 = INT8_MIN;
static int16_t x125 = 1;
int16_t x129 = INT16_MIN;
int32_t t33 = -1060137945;
int8_t x148 = INT8_MIN;
int64_t x157 = INT64_MIN;
static int16_t x159 = -1;
volatile uint16_t x163 = 1795U;
int16_t x168 = INT16_MIN;
int32_t x171 = -8;
volatile int16_t x172 = INT16_MIN;
static int32_t t42 = -1831802;
int8_t x181 = 0;
uint16_t x184 = 11198U;
static uint8_t x189 = UINT8_MAX;
int32_t x190 = INT32_MIN;
int8_t x192 = -1;
volatile int32_t t50 = 3553;
volatile int8_t x206 = -4;
static volatile int32_t t52 = -17725;
int8_t x213 = INT8_MAX;
static volatile uint16_t x214 = UINT16_MAX;
int16_t x218 = 81;
static volatile int32_t t54 = 1444765;
volatile uint32_t x222 = UINT32_MAX;
volatile int32_t x230 = INT32_MIN;
uint32_t x231 = 375U;
static int32_t x238 = INT32_MIN;
int64_t x246 = -5LL;
int16_t x248 = INT16_MIN;
volatile int32_t t65 = 10158;
int64_t x276 = INT64_MIN;
int8_t x278 = 0;
volatile int64_t x282 = -1292066164081987LL;
int32_t x287 = -1;
volatile int32_t x288 = 5726;
int64_t x289 = INT64_MIN;
int16_t x291 = -130;
uint8_t x293 = 100U;
volatile int32_t t73 = -1620597;
int32_t x302 = -1;
int32_t t76 = 1665492;
volatile int8_t x310 = INT8_MIN;
int32_t x312 = INT32_MIN;
static int16_t x313 = 51;
static int16_t x316 = INT16_MIN;
static volatile int32_t x318 = INT32_MAX;
int32_t t79 = -430;
int32_t x332 = -217;
volatile int8_t x335 = INT8_MIN;
volatile int8_t x336 = -1;
int32_t t83 = -8008;
uint64_t x339 = 1420211592141565LLU;
uint16_t x340 = 10296U;
uint8_t x341 = 3U;
uint8_t x344 = UINT8_MAX;
int16_t x351 = -12946;
int64_t x354 = -1LL;
int64_t x356 = INT64_MAX;
int32_t t88 = 41;
int32_t x361 = INT32_MAX;
uint64_t x371 = 1942037530095062817LLU;
int8_t x373 = -13;
static uint8_t x375 = 1U;
int32_t t93 = 19855610;
int32_t x395 = INT32_MIN;
int8_t x399 = 26;
static uint32_t x405 = 1738U;
int64_t x408 = INT64_MAX;
int32_t x412 = 693701;
uint32_t x414 = 110797928U;
volatile int32_t t104 = -25339870;
uint64_t x426 = UINT64_MAX;
static uint64_t x429 = UINT64_MAX;
int8_t x439 = INT8_MAX;
volatile int32_t t109 = 241207239;
volatile uint16_t x444 = 40U;
int64_t x446 = -1LL;
uint8_t x448 = 16U;
volatile int32_t t111 = -85;
static int8_t x450 = -1;
uint32_t x456 = 797830446U;
int32_t x458 = -466;
int32_t t114 = -611884;
static volatile int8_t x472 = -5;
static int8_t x476 = INT8_MIN;
int32_t x479 = INT32_MAX;
uint8_t x488 = 92U;
int32_t t121 = 844;
int16_t x496 = -1;
int32_t t123 = 2075;
uint64_t x497 = UINT64_MAX;
static volatile int16_t x498 = INT16_MIN;
int32_t t124 = -101;
int32_t x501 = INT32_MIN;
int16_t x504 = 253;
int64_t x506 = -1LL;
volatile uint8_t x514 = 10U;
static volatile int32_t t130 = 104;
int32_t t131 = -254829;
volatile int32_t t132 = 103597;
static uint16_t x536 = UINT16_MAX;
static int32_t t134 = -3;
int16_t x541 = INT16_MAX;
uint64_t x546 = 18LLU;
int8_t x556 = INT8_MIN;
int32_t x568 = -37164;
int32_t t141 = 2256;
int8_t x569 = INT8_MIN;
volatile int64_t x575 = INT64_MIN;
int8_t x582 = INT8_MIN;
int8_t x589 = INT8_MIN;
static uint16_t x591 = 17370U;
uint64_t x594 = 56758LLU;
static int32_t x598 = -1;
int8_t x599 = INT8_MIN;
int32_t x601 = -999495;
volatile int32_t t150 = 251851507;
uint64_t x606 = UINT64_MAX;
volatile int32_t t151 = 6539224;
static uint64_t x613 = UINT64_MAX;
volatile int32_t x614 = 3738;
volatile int8_t x623 = -1;
int32_t t156 = 32;
volatile int16_t x631 = -1;
int16_t x632 = 0;
static uint32_t x634 = 1793962U;
volatile int32_t t159 = 6093;
uint16_t x645 = UINT16_MAX;
static int64_t x649 = INT64_MIN;
static int64_t x651 = -1LL;
volatile uint16_t x654 = UINT16_MAX;
static volatile int32_t t163 = -154;
uint32_t x657 = 361940U;
int32_t x659 = -1;
static uint16_t x661 = 1U;
static int32_t x664 = 31997608;
static volatile int32_t t165 = 3538309;
uint64_t x665 = 18776517LLU;
int64_t x674 = INT64_MAX;
int32_t t168 = -2;
uint8_t x678 = 2U;
int32_t x679 = -1;
int16_t x680 = 6151;
uint16_t x681 = UINT16_MAX;
uint16_t x683 = 1U;
int32_t t173 = 1512;
int32_t x697 = -1;
int16_t x705 = -25;
int8_t x710 = -49;
static int64_t x720 = 15110027068384LL;
static int32_t x724 = 4437596;
int16_t x728 = INT16_MIN;
int32_t x732 = INT32_MIN;
uint32_t x735 = UINT32_MAX;
int8_t x739 = -1;
int32_t t184 = -288013484;
int16_t x743 = INT16_MAX;
int64_t x750 = INT64_MIN;
int64_t x751 = INT64_MAX;
int8_t x753 = -10;
static uint16_t x776 = 3U;
uint8_t x781 = UINT8_MAX;
volatile int32_t t196 = -61880095;
int16_t x793 = -1;
uint8_t x794 = UINT8_MAX;
int8_t x795 = -1;
static int32_t t198 = -11245;
uint32_t x798 = UINT32_MAX;
int16_t x799 = -1;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	uint32_t x2 = 72452U;
	volatile int32_t x3 = 14784072;
	static int32_t t0 = -31641;

    t0 = ((x1!=(x2^x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	uint8_t x6 = 39U;
	volatile uint64_t x7 = 1LLU;
	uint32_t x8 = 6U;
	int32_t t1 = -2310;

    t1 = ((x5!=(x6^x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile uint32_t x10 = 4066509U;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;

    t2 = ((x9!=(x10^x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 18;
	volatile uint16_t x15 = UINT16_MAX;
	volatile int32_t t3 = 26194442;

    t3 = ((x13!=(x14^x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x18 = -3LL;
	volatile uint64_t x19 = UINT64_MAX;
	static int16_t x20 = 19;
	int32_t t4 = 6595435;

    t4 = ((x17!=(x18^x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	static volatile uint64_t x22 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -35;

    t5 = ((x21!=(x22^x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	static int8_t x28 = -1;
	volatile int32_t t6 = -847922;

    t6 = ((x25!=(x26^x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 397U;
	int64_t x30 = INT64_MIN;
	int32_t x32 = 3218;
	volatile int32_t t7 = 53;

    t7 = ((x29!=(x30^x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 3908U;
	int8_t x36 = 1;
	volatile int32_t t8 = 3903239;

    t8 = ((x33!=(x34^x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MAX;
	int32_t t9 = -6171;

    t9 = ((x37!=(x38^x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 44175888;

    t10 = ((x41!=(x42^x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	static volatile int64_t x46 = INT64_MAX;
	int64_t x47 = INT64_MAX;
	static uint8_t x48 = 13U;
	volatile int32_t t11 = 12876903;

    t11 = ((x45!=(x46^x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	volatile int64_t x50 = -1LL;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = -340;
	volatile int32_t t12 = -3221795;

    t12 = ((x49!=(x50^x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t t13 = 3;

    t13 = ((x53!=(x54^x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = -4522;
	volatile uint16_t x59 = UINT16_MAX;

    t14 = ((x57!=(x58^x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x61 = 4512U;
	volatile int16_t x62 = 3;
	int64_t x63 = -1LL;
	volatile uint8_t x64 = 10U;
	int32_t t15 = -59219;

    t15 = ((x61!=(x62^x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 4395509966578LL;
	static int64_t x66 = 40LL;
	volatile uint32_t x68 = 11079610U;
	int32_t t16 = 4352395;

    t16 = ((x65!=(x66^x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 4348897657501671LLU;
	static int16_t x71 = 202;
	uint16_t x72 = 13160U;

    t17 = ((x69!=(x70^x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x75 = 0U;
	uint16_t x76 = 9U;
	volatile int32_t t18 = 1;

    t18 = ((x73!=(x74^x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 106680877;
	int8_t x78 = 1;
	int32_t x79 = INT32_MAX;
	int32_t t19 = 122619782;

    t19 = ((x77!=(x78^x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MAX;
	uint8_t x82 = UINT8_MAX;
	uint32_t x83 = 4003U;
	int32_t t20 = -1075;

    t20 = ((x81!=(x82^x83))>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int64_t x87 = INT64_MIN;
	int16_t x88 = -18;
	int32_t t21 = 235;

    t21 = ((x85!=(x86^x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x89 = INT32_MAX;
	static volatile int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;

    t22 = ((x89!=(x90^x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 0U;
	static volatile uint8_t x96 = 46U;
	static int32_t t23 = -3445163;

    t23 = ((x93!=(x94^x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 118202U;
	int8_t x98 = INT8_MAX;
	static uint8_t x99 = 2U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 3602775;

    t24 = ((x97!=(x98^x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static volatile int8_t x102 = INT8_MIN;
	static int32_t x103 = -1;
	int8_t x104 = -1;
	volatile int32_t t25 = 1805741;

    t25 = ((x101!=(x102^x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	int16_t x106 = 1014;
	int16_t x107 = 0;
	int16_t x108 = INT16_MAX;

    t26 = ((x105!=(x106^x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MAX;
	static int32_t x110 = INT32_MIN;
	uint8_t x111 = 1U;
	int8_t x112 = INT8_MIN;

    t27 = ((x109!=(x110^x111))>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -239;
	int8_t x114 = -7;
	volatile int32_t x115 = INT32_MAX;
	uint64_t x116 = 12413LLU;
	int32_t t28 = 70;

    t28 = ((x113!=(x114^x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 18U;
	int64_t x118 = -1LL;
	volatile int32_t t29 = 98023347;

    t29 = ((x117!=(x118^x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MAX;
	int64_t x122 = INT64_MAX;
	int16_t x123 = 1;
	int32_t t30 = -323399318;

    t30 = ((x121!=(x122^x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MIN;
	volatile int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -238030970;

    t31 = ((x125!=(x126^x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = UINT32_MAX;
	volatile uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 116U;
	static volatile int32_t t32 = 6781139;

    t32 = ((x129!=(x130^x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -8767;

    t33 = ((x133!=(x134^x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MAX;
	int32_t x138 = INT32_MIN;
	int32_t x139 = 4;
	static int64_t x140 = -1LL;
	static int32_t t34 = -514551063;

    t34 = ((x137!=(x138^x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 4;
	uint64_t x142 = 230LLU;
	int32_t x143 = INT32_MAX;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 20903;

    t35 = ((x141!=(x142^x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MAX;
	volatile int8_t x147 = -1;
	int32_t t36 = -2341123;

    t36 = ((x145!=(x146^x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 18U;
	uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	static int32_t t37 = -836579;

    t37 = ((x149!=(x150^x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 2146;
	static volatile int32_t x154 = -1;
	int16_t x155 = -1;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = 1;

    t38 = ((x153!=(x154^x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = 65;
	static volatile uint8_t x160 = 73U;
	static int32_t t39 = -3183488;

    t39 = ((x157!=(x158^x159))>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint8_t x164 = 28U;
	static volatile int32_t t40 = -829;

    t40 = ((x161!=(x162^x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 15U;
	int16_t x166 = INT16_MIN;
	static volatile uint32_t x167 = 1841224U;
	volatile int32_t t41 = 15;

    t41 = ((x165!=(x166^x167))>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int64_t x170 = -1LL;

    t42 = ((x169!=(x170^x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x173 = UINT16_MAX;
	volatile int16_t x174 = 65;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = 15129031782LL;
	volatile int32_t t43 = -15050118;

    t43 = ((x173!=(x174^x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 651LLU;
	int8_t x178 = 2;
	uint8_t x179 = UINT8_MAX;
	volatile int8_t x180 = -1;
	int32_t t44 = 167;

    t44 = ((x177!=(x178^x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -1LL;
	static int8_t x183 = -1;
	int32_t t45 = 193409148;

    t45 = ((x181!=(x182^x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -64679;
	volatile uint8_t x186 = 56U;
	static int16_t x187 = 2956;
	static volatile int32_t x188 = 14243627;
	int32_t t46 = 184904;

    t46 = ((x185!=(x186^x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x191 = 2U;
	int32_t t47 = -55016327;

    t47 = ((x189!=(x190^x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 920U;
	uint32_t x194 = 436U;
	int8_t x195 = 10;
	int16_t x196 = -1;
	volatile int32_t t48 = 111;

    t48 = ((x193!=(x194^x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	static uint64_t x199 = UINT64_MAX;
	static int8_t x200 = INT8_MIN;
	static int32_t t49 = -521641;

    t49 = ((x197!=(x198^x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	volatile uint32_t x202 = 1U;
	volatile uint32_t x203 = 17212684U;
	static uint16_t x204 = 1783U;

    t50 = ((x201!=(x202^x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 1U;
	volatile int32_t t51 = 59033754;

    t51 = ((x205!=(x206^x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	static uint32_t x211 = UINT32_MAX;
	static int16_t x212 = INT16_MIN;

    t52 = ((x209!=(x210^x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -5373;

    t53 = ((x213!=(x214^x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 986154U;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 0U;

    t54 = ((x217!=(x218^x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x221 = -1;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 19;

    t55 = ((x221!=(x222^x223))>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	static volatile int16_t x226 = 47;
	int64_t x227 = -1LL;
	int16_t x228 = -1;
	static int32_t t56 = -63077;

    t56 = ((x225!=(x226^x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 30U;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = 979205;

    t57 = ((x229!=(x230^x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = 0;
	int32_t x236 = 1415623;
	volatile int32_t t58 = 27963;

    t58 = ((x233!=(x234^x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x237 = -2050077811514711LL;
	int32_t x239 = -1;
	volatile uint64_t x240 = 750285560092LLU;
	int32_t t59 = 35172;

    t59 = ((x237!=(x238^x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	uint8_t x243 = 1U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -14913;

    t60 = ((x241!=(x242^x243))>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 6U;
	static int8_t x247 = INT8_MIN;
	volatile int32_t t61 = -510;

    t61 = ((x245!=(x246^x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 1;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 26903U;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 1378;

    t62 = ((x249!=(x250^x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	static int16_t x254 = 738;
	volatile int8_t x255 = INT8_MIN;
	static uint64_t x256 = 2LLU;
	volatile int32_t t63 = 839;

    t63 = ((x253!=(x254^x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 186821251316LLU;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	int8_t x260 = INT8_MAX;
	int32_t t64 = -805;

    t64 = ((x257!=(x258^x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint64_t x262 = 26897LLU;
	uint64_t x263 = 2176132124114681040LLU;
	uint64_t x264 = 514LLU;

    t65 = ((x261!=(x262^x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 486625352LLU;
	static int16_t x266 = -6;
	uint8_t x267 = UINT8_MAX;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 104;

    t66 = ((x265!=(x266^x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = 512001474481LLU;
	static volatile int64_t x272 = INT64_MAX;
	volatile int32_t t67 = 195;

    t67 = ((x269!=(x270^x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 7346U;
	uint16_t x275 = 2212U;
	volatile int32_t t68 = -434046;

    t68 = ((x273!=(x274^x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static int64_t x279 = INT64_MIN;
	int16_t x280 = -1;
	volatile int32_t t69 = -2;

    t69 = ((x277!=(x278^x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	int64_t x283 = -374317LL;
	int16_t x284 = INT16_MIN;
	static int32_t t70 = -188511;

    t70 = ((x281!=(x282^x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	volatile int16_t x286 = -1;
	int32_t t71 = 19354790;

    t71 = ((x285!=(x286^x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = 10287006;

    t72 = ((x289!=(x290^x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x294 = 261U;
	int64_t x295 = -31083480463621LL;
	int16_t x296 = 242;

    t73 = ((x293!=(x294^x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MIN;
	volatile int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	volatile uint32_t x300 = 224U;
	volatile int32_t t74 = -3626;

    t74 = ((x297!=(x298^x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = 16346072;
	static int32_t x303 = -16;
	volatile uint16_t x304 = UINT16_MAX;
	int32_t t75 = -127216;

    t75 = ((x301!=(x302^x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;

    t76 = ((x305!=(x306^x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int64_t x311 = INT64_MIN;
	int32_t t77 = 49929327;

    t77 = ((x309!=(x310^x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = 0LL;
	static uint32_t x315 = 507358U;
	static volatile int32_t t78 = 123008050;

    t78 = ((x313!=(x314^x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = 220118902378LL;
	static int8_t x319 = INT8_MAX;
	uint64_t x320 = 111293659739LLU;

    t79 = ((x317!=(x318^x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 1118354258135LLU;
	static volatile int16_t x322 = INT16_MAX;
	uint16_t x323 = 1670U;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 227;

    t80 = ((x321!=(x322^x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -35;
	uint64_t x326 = 99688160768216LLU;
	int64_t x327 = 2854946582427LL;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = -29;

    t81 = ((x325!=(x326^x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x329 = 142U;
	int64_t x330 = INT64_MAX;
	int64_t x331 = -221417939561517LL;
	static volatile int32_t t82 = 329423;

    t82 = ((x329!=(x330^x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 214U;
	static volatile uint8_t x334 = 13U;

    t83 = ((x333!=(x334^x335))>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	static int32_t t84 = 33;

    t84 = ((x337!=(x338^x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = 343455243098LLU;
	static uint8_t x343 = UINT8_MAX;
	int32_t t85 = -325280;

    t85 = ((x341!=(x342^x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	uint8_t x346 = 1U;
	static int32_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int32_t t86 = 1154764;

    t86 = ((x345!=(x346^x347))>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = 1365310444968LLU;
	uint32_t x350 = 1U;
	uint8_t x352 = 23U;
	int32_t t87 = -1305;

    t87 = ((x349!=(x350^x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 172408168429979LLU;
	int8_t x355 = INT8_MIN;

    t88 = ((x353!=(x354^x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 5671LL;
	int32_t x358 = INT32_MAX;
	static int8_t x359 = INT8_MIN;
	volatile int64_t x360 = -1LL;
	int32_t t89 = 5304067;

    t89 = ((x357!=(x358^x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x362 = -28;
	volatile uint16_t x363 = 220U;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = 119018021;

    t90 = ((x361!=(x362^x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	int64_t x366 = 9733LL;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -47;

    t91 = ((x365!=(x366^x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = 12;
	static int64_t x370 = INT64_MAX;
	uint32_t x372 = 2830313U;
	static volatile int32_t t92 = -237266746;

    t92 = ((x369!=(x370^x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x374 = UINT64_MAX;
	int8_t x376 = INT8_MAX;

    t93 = ((x373!=(x374^x375))>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	volatile int16_t x378 = INT16_MAX;
	static int32_t x379 = -1;
	int64_t x380 = 579804859LL;
	int32_t t94 = 24950;

    t94 = ((x377!=(x378^x379))>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MAX;
	volatile uint32_t x383 = UINT32_MAX;
	volatile int64_t x384 = -1LL;
	volatile int32_t t95 = 107;

    t95 = ((x381!=(x382^x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	uint16_t x386 = UINT16_MAX;
	volatile int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 60630720;

    t96 = ((x385!=(x386^x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = 5512791024LLU;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t97 = 1495687;

    t97 = ((x389!=(x390^x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	int64_t x394 = 6387908LL;
	int32_t x396 = -1098787;
	int32_t t98 = 0;

    t98 = ((x393!=(x394^x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	volatile int16_t x398 = 1;
	uint8_t x400 = 9U;
	static int32_t t99 = 963270;

    t99 = ((x397!=(x398^x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	static volatile uint16_t x402 = 14U;
	int64_t x403 = 63192LL;
	uint64_t x404 = 7776677779229LLU;
	volatile int32_t t100 = 1;

    t100 = ((x401!=(x402^x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x406 = INT16_MIN;
	volatile uint64_t x407 = 1533501404820132LLU;
	int32_t t101 = -2;

    t101 = ((x405!=(x406^x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = UINT8_MAX;
	static int16_t x410 = -1;
	int32_t x411 = -1;
	int32_t t102 = 24176;

    t102 = ((x409!=(x410^x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	volatile int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	int32_t t103 = 183595709;

    t103 = ((x413!=(x414^x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 1016857261915LLU;
	int16_t x418 = -1;
	int32_t x419 = INT32_MAX;
	volatile int64_t x420 = INT64_MIN;

    t104 = ((x417!=(x418^x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 30246U;
	static volatile int8_t x422 = INT8_MAX;
	int8_t x423 = INT8_MIN;
	int8_t x424 = -1;
	volatile int32_t t105 = 1;

    t105 = ((x421!=(x422^x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	int8_t x427 = 0;
	int32_t x428 = INT32_MIN;
	int32_t t106 = -1655006;

    t106 = ((x425!=(x426^x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x430 = 14U;
	int16_t x431 = -1;
	static uint8_t x432 = 44U;
	static int32_t t107 = -27667343;

    t107 = ((x429!=(x430^x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = -23686;
	int8_t x435 = INT8_MIN;
	static uint16_t x436 = 447U;
	static int32_t t108 = 58598394;

    t108 = ((x433!=(x434^x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint32_t x440 = 11874312U;

    t109 = ((x437!=(x438^x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static int32_t x442 = INT32_MIN;
	int16_t x443 = -9;
	int32_t t110 = -14524;

    t110 = ((x441!=(x442^x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	int8_t x447 = -1;

    t111 = ((x445!=(x446^x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MAX;
	int8_t x451 = INT8_MIN;
	static int32_t x452 = INT32_MIN;
	int32_t t112 = 3984;

    t112 = ((x449!=(x450^x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	static uint8_t x454 = 2U;
	int16_t x455 = INT16_MIN;
	volatile int32_t t113 = 49;

    t113 = ((x453!=(x454^x455))>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	static uint16_t x459 = 113U;
	int32_t x460 = 888;

    t114 = ((x457!=(x458^x459))>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	volatile int64_t x462 = -1LL;
	uint64_t x463 = UINT64_MAX;
	static int8_t x464 = 2;
	volatile int32_t t115 = 28832;

    t115 = ((x461!=(x462^x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MAX;
	int8_t x467 = INT8_MIN;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t116 = 54500;

    t116 = ((x465!=(x466^x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 4U;
	uint16_t x470 = 53U;
	static volatile int32_t x471 = 180;
	static volatile int32_t t117 = -39343319;

    t117 = ((x469!=(x470^x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = INT16_MIN;
	volatile int32_t x474 = INT32_MIN;
	int8_t x475 = -1;
	int32_t t118 = -6751;

    t118 = ((x473!=(x474^x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	int32_t x478 = INT32_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t119 = 1424;

    t119 = ((x477!=(x478^x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = -4846912LL;
	volatile int32_t x482 = INT32_MAX;
	volatile int64_t x483 = -1LL;
	int32_t x484 = INT32_MAX;
	static volatile int32_t t120 = 10;

    t120 = ((x481!=(x482^x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = -570416975094945LL;
	int8_t x486 = 0;
	static int32_t x487 = INT32_MAX;

    t121 = ((x485!=(x486^x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	static volatile int32_t x490 = INT32_MAX;
	int64_t x491 = INT64_MAX;
	uint8_t x492 = 7U;
	volatile int32_t t122 = 47;

    t122 = ((x489!=(x490^x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x493 = 6434269667LLU;
	int16_t x494 = INT16_MAX;
	static int16_t x495 = INT16_MIN;

    t123 = ((x493!=(x494^x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x499 = 10LLU;
	int32_t x500 = -1;

    t124 = ((x497!=(x498^x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 9382810LLU;
	int8_t x503 = -1;
	volatile int32_t t125 = -71;

    t125 = ((x501!=(x502^x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MIN;
	volatile uint32_t x507 = 2U;
	static int8_t x508 = 1;
	volatile int32_t t126 = -309890;

    t126 = ((x505!=(x506^x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	uint64_t x510 = UINT64_MAX;
	uint32_t x511 = 7019U;
	int64_t x512 = 1LL;
	volatile int32_t t127 = 17;

    t127 = ((x509!=(x510^x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = INT8_MAX;
	int32_t x515 = INT32_MIN;
	int32_t x516 = -1;
	volatile int32_t t128 = -473557;

    t128 = ((x513!=(x514^x515))>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 204759;
	uint8_t x518 = 4U;
	uint64_t x519 = 10822689LLU;
	int32_t x520 = INT32_MIN;
	static int32_t t129 = -688444;

    t129 = ((x517!=(x518^x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	int32_t x522 = -29;
	volatile uint64_t x523 = 130612387731662LLU;
	volatile uint8_t x524 = 2U;

    t130 = ((x521!=(x522^x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x526 = INT8_MIN;
	int16_t x527 = 1;
	static int64_t x528 = INT64_MIN;

    t131 = ((x525!=(x526^x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -498766086347LL;
	uint16_t x530 = 3U;
	static int64_t x531 = INT64_MIN;
	static int32_t x532 = INT32_MIN;

    t132 = ((x529!=(x530^x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 1526867;
	int8_t x534 = -15;
	int64_t x535 = INT64_MIN;
	int32_t t133 = -254881;

    t133 = ((x533!=(x534^x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MAX;
	int64_t x540 = INT64_MIN;

    t134 = ((x537!=(x538^x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1;
	uint16_t x543 = 0U;
	int32_t x544 = 978;
	int32_t t135 = 0;

    t135 = ((x541!=(x542^x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x545 = 55U;
	static volatile int16_t x547 = INT16_MIN;
	uint64_t x548 = UINT64_MAX;
	int32_t t136 = -7524518;

    t136 = ((x545!=(x546^x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 1318U;
	uint8_t x550 = 5U;
	volatile int32_t x551 = -1;
	uint64_t x552 = 603402356342417152LLU;
	volatile int32_t t137 = 57967;

    t137 = ((x549!=(x550^x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 31279543483703882LLU;
	static int64_t x554 = -6052867390265LL;
	int32_t x555 = INT32_MIN;
	volatile int32_t t138 = 1064736;

    t138 = ((x553!=(x554^x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	static uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MAX;
	static int32_t x560 = -1;
	int32_t t139 = 3364252;

    t139 = ((x557!=(x558^x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = 0U;
	int32_t x562 = -1;
	int32_t x563 = -997;
	volatile int8_t x564 = INT8_MAX;
	int32_t t140 = -57275107;

    t140 = ((x561!=(x562^x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -1;
	volatile int16_t x566 = INT16_MIN;
	uint16_t x567 = UINT16_MAX;

    t141 = ((x565!=(x566^x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x570 = -1LL;
	int32_t x571 = INT32_MAX;
	static volatile int32_t x572 = -13483735;
	int32_t t142 = -764;

    t142 = ((x569!=(x570^x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x573 = 0U;
	uint64_t x574 = UINT64_MAX;
	volatile int64_t x576 = INT64_MIN;
	static int32_t t143 = 818119008;

    t143 = ((x573!=(x574^x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x577 = -22;
	uint16_t x578 = UINT16_MAX;
	int32_t x579 = INT32_MIN;
	int32_t x580 = INT32_MIN;
	int32_t t144 = -4564181;

    t144 = ((x577!=(x578^x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = UINT16_MAX;
	volatile int16_t x583 = 40;
	int64_t x584 = INT64_MAX;
	static int32_t t145 = 2;

    t145 = ((x581!=(x582^x583))>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = 110U;
	static volatile int8_t x586 = INT8_MIN;
	int8_t x587 = 0;
	int8_t x588 = INT8_MAX;
	int32_t t146 = 0;

    t146 = ((x585!=(x586^x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = 6;
	uint64_t x592 = 10283995401LLU;
	static volatile int32_t t147 = -741;

    t147 = ((x589!=(x590^x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = 3;
	static int8_t x595 = INT8_MAX;
	uint64_t x596 = UINT64_MAX;
	int32_t t148 = 863;

    t148 = ((x593!=(x594^x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MIN;
	static int8_t x600 = 6;
	static int32_t t149 = -34;

    t149 = ((x597!=(x598^x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MIN;
	int16_t x603 = -392;
	uint32_t x604 = 25U;

    t150 = ((x601!=(x602^x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = -1;
	int32_t x607 = -1;
	int64_t x608 = INT64_MAX;

    t151 = ((x605!=(x606^x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	uint16_t x610 = UINT16_MAX;
	int16_t x611 = -6;
	int8_t x612 = -14;
	static int32_t t152 = 306;

    t152 = ((x609!=(x610^x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x615 = 1U;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -461505572;

    t153 = ((x613!=(x614^x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	volatile int16_t x618 = INT16_MIN;
	int8_t x619 = 1;
	int32_t x620 = 93345;
	static int32_t t154 = -31;

    t154 = ((x617!=(x618^x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 3773923;
	static int16_t x622 = -99;
	static uint16_t x624 = 2U;
	static volatile int32_t t155 = 474975585;

    t155 = ((x621!=(x622^x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = 1U;
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MIN;
	static int8_t x628 = -1;

    t156 = ((x625!=(x626^x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = 6U;
	int32_t x630 = -2;
	volatile int32_t t157 = 177474571;

    t157 = ((x629!=(x630^x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x635 = -2;
	static int16_t x636 = 0;
	static int32_t t158 = -53727;

    t158 = ((x633!=(x634^x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int8_t x638 = INT8_MIN;
	static volatile uint16_t x639 = UINT16_MAX;
	int64_t x640 = -1LL;

    t159 = ((x637!=(x638^x639))>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = -7;
	volatile uint8_t x643 = UINT8_MAX;
	int8_t x644 = 26;
	volatile int32_t t160 = 0;

    t160 = ((x641!=(x642^x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	int16_t x647 = -95;
	static uint64_t x648 = 537489418220219977LLU;
	volatile int32_t t161 = 781;

    t161 = ((x645!=(x646^x647))>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = INT8_MIN;
	int32_t x652 = -120;
	static int32_t t162 = -2542158;

    t162 = ((x649!=(x650^x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = 15LL;
	int64_t x655 = 3LL;
	static volatile int8_t x656 = INT8_MAX;

    t163 = ((x653!=(x654^x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MAX;
	uint8_t x660 = UINT8_MAX;
	int32_t t164 = 1;

    t164 = ((x657!=(x658^x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x662 = UINT64_MAX;
	static volatile int8_t x663 = INT8_MIN;

    t165 = ((x661!=(x662^x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x666 = 28U;
	int64_t x667 = -1085036628LL;
	volatile int64_t x668 = -332010440877LL;
	volatile int32_t t166 = 0;

    t166 = ((x665!=(x666^x667))>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = -8734758LL;
	static int16_t x670 = -1;
	static uint8_t x671 = UINT8_MAX;
	int16_t x672 = INT16_MIN;
	static volatile int32_t t167 = -2;

    t167 = ((x669!=(x670^x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = -1;
	int64_t x675 = -4LL;
	uint16_t x676 = UINT16_MAX;

    t168 = ((x673!=(x674^x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int32_t t169 = 1;

    t169 = ((x677!=(x678^x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = -200585;
	int16_t x684 = INT16_MAX;
	volatile int32_t t170 = 94909888;

    t170 = ((x681!=(x682^x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 98;
	volatile int32_t x686 = 10772883;
	volatile uint32_t x687 = UINT32_MAX;
	volatile int32_t x688 = -1;
	volatile int32_t t171 = -95;

    t171 = ((x685!=(x686^x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 3419012670262LLU;
	uint64_t x690 = 13LLU;
	static int32_t x691 = -1;
	static int32_t x692 = -1;
	int32_t t172 = -881885;

    t172 = ((x689!=(x690^x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x694 = 53149292LLU;
	uint8_t x695 = 1U;
	uint16_t x696 = UINT16_MAX;

    t173 = ((x693!=(x694^x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = 42852LLU;
	int8_t x699 = INT8_MAX;
	uint32_t x700 = 5588U;
	int32_t t174 = 361;

    t174 = ((x697!=(x698^x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int32_t x702 = -755945423;
	static int32_t x703 = INT32_MIN;
	int16_t x704 = INT16_MIN;
	int32_t t175 = -80465310;

    t175 = ((x701!=(x702^x703))>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x706 = UINT64_MAX;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = 67832518U;
	static volatile int32_t t176 = 52;

    t176 = ((x705!=(x706^x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = 142026733;
	int8_t x711 = 0;
	int64_t x712 = INT64_MAX;
	static int32_t t177 = 122053154;

    t177 = ((x709!=(x710^x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = UINT16_MAX;
	uint8_t x714 = 21U;
	uint64_t x715 = 8485028663904345939LLU;
	int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -30;

    t178 = ((x713!=(x714^x715))>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 108826993;
	int64_t x718 = INT64_MIN;
	uint16_t x719 = UINT16_MAX;
	int32_t t179 = -30451574;

    t179 = ((x717!=(x718^x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = UINT8_MAX;
	static int8_t x722 = 5;
	uint32_t x723 = 11U;
	volatile int32_t t180 = 70;

    t180 = ((x721!=(x722^x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x725 = 27U;
	uint32_t x726 = 418712U;
	int16_t x727 = INT16_MIN;
	static volatile int32_t t181 = -9656973;

    t181 = ((x725!=(x726^x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	uint16_t x730 = UINT16_MAX;
	static int16_t x731 = INT16_MAX;
	int32_t t182 = -16007936;

    t182 = ((x729!=(x730^x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 1962U;
	static uint8_t x734 = UINT8_MAX;
	int64_t x736 = -1LL;
	volatile int32_t t183 = 2;

    t183 = ((x733!=(x734^x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -36364638977433LL;
	int16_t x738 = INT16_MAX;
	int32_t x740 = INT32_MIN;

    t184 = ((x737!=(x738^x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int8_t x742 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t185 = 8;

    t185 = ((x741!=(x742^x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 2U;
	int8_t x746 = 3;
	static int16_t x747 = INT16_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t186 = 0;

    t186 = ((x745!=(x746^x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	uint8_t x752 = 1U;
	volatile int32_t t187 = -1434;

    t187 = ((x749!=(x750^x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x754 = -1;
	int8_t x755 = -1;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = 216;

    t188 = ((x753!=(x754^x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x757 = 0U;
	volatile int8_t x758 = -22;
	uint8_t x759 = 4U;
	int16_t x760 = -61;
	volatile int32_t t189 = 8311197;

    t189 = ((x757!=(x758^x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = INT64_MAX;
	int64_t x764 = INT64_MAX;
	static int32_t t190 = 1;

    t190 = ((x761!=(x762^x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MIN;
	int32_t x766 = INT32_MAX;
	static int32_t x767 = INT32_MIN;
	uint64_t x768 = 16562534LLU;
	int32_t t191 = 20437;

    t191 = ((x765!=(x766^x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MAX;
	static uint16_t x770 = 50U;
	int32_t x771 = -1;
	volatile uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = 8;

    t192 = ((x769!=(x770^x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	uint32_t x774 = 1524238U;
	uint64_t x775 = 5084953250412265501LLU;
	int32_t t193 = -210692430;

    t193 = ((x773!=(x774^x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	int16_t x778 = -1;
	int8_t x779 = INT8_MIN;
	static volatile int8_t x780 = INT8_MAX;
	volatile int32_t t194 = -2924;

    t194 = ((x777!=(x778^x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = INT8_MAX;
	static int16_t x783 = INT16_MAX;
	uint32_t x784 = 960176227U;
	volatile int32_t t195 = 73665;

    t195 = ((x781!=(x782^x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 0U;
	volatile int32_t x786 = -1;
	int64_t x787 = INT64_MAX;
	uint8_t x788 = 117U;

    t196 = ((x785!=(x786^x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = 31;
	int8_t x790 = -2;
	int8_t x791 = -1;
	volatile uint32_t x792 = 95127211U;
	static int32_t t197 = 418520;

    t197 = ((x789!=(x790^x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x796 = 2LLU;

    t198 = ((x793!=(x794^x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 8;
	int32_t x800 = INT32_MIN;
	static volatile int32_t t199 = -24211;

    t199 = ((x797!=(x798^x799))>x800);

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

